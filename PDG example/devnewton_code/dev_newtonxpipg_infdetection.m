function out  = dev_newtonxpipg_infdetection(ppv)%#codegenfeasflag
% code for newton pipg. We implemented the infeasibility detection in this
% function. 
% the time count starts after the set up of all variables.

%% Set up
A = ppv.A;
B = ppv.B;
At = A';
Bt = B';

rho = ppv.rho; % inorder to use xpipg code.
P = diag(ppv.P);
z1 = ppv.z;
w1 = ppv.w;
q = ppv.q;
g = ppv.g;
lam =  ppv.max_eig_P;% find these in the code
omg = ppv.expipg_omg;
%rho = pp.expipg_rho;
z_min = ppv.zmin;
z_max = ppv.zmax;
nx = length(z1);
output = ones(1, length(z1)+length(w1));
out = struct;
out.solve_time = 0;
out.converge = false;
out.iterfirstactive = 0;
out.ntime = 0;
out.k = 0;
out.Rnorm = 0;
maxit = 3000;
infeas_tol = 5 * maxit;%should be an input from ppv % 5 is just a relax variable. 
infeas_min = 10;%Minmum iterations
infeas_min_region = 5;% active newton if the problem has stuck in a region for morn than 5 iterations
ratio = 0.9;%ratio for activating newton step
newtonactive = 20;%wait for 20 pipg before activating newton
%% setup for the newton algorithm
flag4 = 0;
flag8 = 0;
flag12 = 0;
activesetshift = 1;
temp = 0;
timeinzones = zeros(100, 1);

%% find alpha and beta

tic;
sig1 = 100.1;
sig2 = 200.2;

while abs(sig2-sig1)/sig1 >= 0.005
    sig2 = sig1;
    w1 =   dev_HZ(A, B, z1);

    z1 = dev_HtZ(At, Bt, w1);
    sig1 = norm(z1);
    z1 = z1/sig1;

end

% find alpha beta
% Buffer the estimated spectral norm
sig1 = 1.1*sig1;
alpha = 2/((lam^2 + 4*omg*sig1)^0.5+lam);
beta = omg*alpha;

% xi = ppv.z;%What inital guess should I use??!!
% eta = ppv.w;
xi = z1;
eta = w1;
newtonflag = 0;


%%
% Newton pipg

[xi, eta, idn, ikp, R] = dev_onestep_xpipg( xi, eta, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);


%initialization
id = -1* ones(size(z1));
idn = -2*id;
out.feasflag = 0;%feasible return 0 else return 1
cholflag = 0;
%%
% Major part of Newton iteration
for k = 1:maxit
    if k ==1
        id = idn;
        newtonflag = 0;
    end
    if ~isequal(id, idn)
        %active set shifted
        temp = k;
        id = idn;
        newtonflag = 0;
    elseif cholflag ~= 0 && newtonflag > 0
        newtonflag = inf;
        %the previous newton cholesky failed, newton step shold be shutdown
    end

    %%
    %newtonstep
    if k >= newtonactive^(newtonflag + 1) +temp
        % this is an arbitrary function. We want to avoid calling the
        % newton step too many times if it doesn't work well. 
        % We can try better functions
        %disp(keyHash(id)) % check the shift of activation set

        id = idn;
        %         xiact = xi;
        %         etaact = eta;
        [~, ~,~, ~, R] = dev_onestep_xpipg( xi, eta, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);%we must do this step inorder to get the most updated R
        [dzw, cholflag]  = dev_newtonpipgupdate(A, B,At, Bt, P, idn, -R, length(ppv.z), alpha, beta, rho);
        if cholflag == 0
            temp = k;%successful newtonstep
        end
        out.ntime = out.ntime + 1;
        newtonflag = newtonflag + 1;
        %%%Easiest version
        %%%line search
        if cholflag == 0
            for kk = 2.^((-1)* (0:5))%magic number!!
                disp(keyHash(id))
                xinew = xi + kk* dzw(1: nx);
                etanew = eta + kk * dzw((nx+1): end);
                [xin, etan, idn, ikp, Rn] = dev_onestep_xpipg( xinew, etanew, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);
                if norm(Rn) <= ratio * norm(R)
                    xi = xin;
                    eta = etan;
                    R = Rn;
                    %In cas the residual has a big drop but still in the same region.
                    %This is dangerous as we may active the Newton step too
                    %many times. A better way is to compute the exact length
                    %that helps current iteration get rid of current area
                    out.iterfirstactive = k;%same here
                    break;
                end
            end
        end
    end
    %%
    %PIPG
    [xinew, etanew, idn, ikp, R] = dev_onestep_xpipg( xi, eta, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);%not necessary if newton got activates

    %%
    %Infeasibility detection
    %infeasibility detection
    if k ==1
        dzchangeold = [xinew- xi; etanew - eta];
    else
        dzchangenew = [xinew- xi; etanew - eta];
        dzchangerate= norm(dzchangenew)/norm(dzchangenew- dzchangeold);
        if newtonflag >0 && cholflag~=0&&dzchangerate > infeas_tol&& k>max(temp + infeas_min_region, infeas_min)
            %newton matrix is singular.

            disp("PIPG has stagnated: we are likely to have an infeasibile case.")
            disp(k)
            disp(dzchangerate)
            out.feasflag = -1;
            break

        elseif dzchangerate > infeas_tol && k>max(temp + infeas_min_region, infeas_min)
            %This indicate that the pipg is stuck. We should use a newton
            %step to avoid false alarm
            [dzw, cholflag]  = dev_newtonpipgupdate(A, B,At, Bt, P, idn, -R, length(ppv.z), alpha, beta, rho);

            out.ntime = out.ntime + 1;
            tempflag = 0;% use this to see whether the newtonstep is effective
            if cholflag == 0
                for kk = 1.5.^((-1)* (0:5))
                    xinew = xi + kk* dzw(1: nx);
                    etanew = eta + kk * dzw((nx+1): end);
                    [xin, etan, idn, ikp, Rn] = dev_onestep_xpipg( xinew, etanew, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);

                    if norm(Rn) <= ratio * norm(R)
                        xi = xin;
                        eta = etan;
                        R = Rn;
                        tempflag = 1;
                        temp = k;
                        %In cas the residual has a big drop but still in the same region.
                        %This is dangerous as we may active the Newton step too
                        %many times. A better way is to compute the exact length
                        %that helps current iteration get rid of current area
                        disp("possible infeasibility")
                        out.iterfirstactive = k;%same here
                        break;
                    end
                end

            end
            if tempflag ==0
                disp("PIPG has stagnated: we are likely to have an infeasibile case.")
                disp(k)
                disp(dzchangerate)
                out.feasflag = -1;
                break
            end

        end

        dzchangeold = dzchangenew;
    end

    xi = xinew;
    eta = etanew;
    if norm(R)<= 10^-10
        [xi, eta, idn, ikp, R] = dev_onestep_xpipg( xi, eta, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);
        outputxi =xi;
        outputeta = eta;
        out.Rnorm = norm(R);
        out.converge = 1;
       
        break
    end
end
solve_time = toc*1000;
% if exit_flag == -1
%     fprintf("\nexPIPG DVEC did not converge in %.0f iterations: MAX ITERATIONS REACHED\n",k_max);
% end

%disp(solve_time);
out.solve_time = solve_time;
out.k = k;
out.output = [xi;eta];
disp("total time")
disp(out.solve_time)
disp(out.ntime)
%print("Primal error : %9.2e\nDual error   : %9.2e\n",err_p1,err_d1);






