function out = dev_newtonxpipg(ppv)%#codegen
% this is a code for pipg

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

out = struct;
out.converge = false;
out.ntime = 0;
out.computationtime = Inf;
out.output = ones(1, length(z1)+length(w1));
out.k = 0;
out.xi = z_max;
maxit = 3000;
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
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%%%%newton pipg out%%%%%%%%%%%%
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
out.alpha = alpha;
out.beta = beta;
xi = z1;%What inital guess should I use??!!
eta = w1;
newtonflag = 0;

ratio = 0.9;%ratio for activating newton step
newtonactive = 20;%wait for 10 pipg before activating newton

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%newton pipg
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
[xi, eta, idn, ikp, R] = dev_onestep_xpipg( xi, eta, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);%Do this twice
flag4 = 0;
flag8 = 0;
flag12 = 0;
%activesetshift = 1;
temp = 0;
%timeinzones = zeros(100, 1);
%shiftactiveamount = zeros(100,1);


%initialization
id = -1* ones(size(z1));
idn = -2*id;

for k = 1:maxit


    if k ==1
        id = idn;
%         out.residualfirstactive = norm(R);
%         iterfirstactive = k;
        newtonflag = 1;
    end
    if ~isequal(id, idn)

%         out.residualfirstactive = norm(R);
%         iterfirstactive = k;
% 
%         shiftactiveamount(mod(activesetshift, 100)+1) = sum(id ~= idn);%for the simplicity of saving data
%         activesetshift = activesetshift +1;
%         timeinzones(mod(activesetshift, 100)+1) = k -temp;
        temp = k;
        id = idn;

    end

    if k >= newtonactive +temp
        temp = k;
        id = idn;
%         xiact = xi;
%         etaact = eta;
        [~, ~,~, ~, R] = dev_onestep_xpipg( xi, eta, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);
        [dzw, flag]  = dev_newtonpipgupdate(A, B,At, Bt, P, idn, -R, length(ppv.z), alpha, beta, rho);

        out.ntime = out.ntime + 1;
        
        %%%Easiest version
        %%%line search
        if flag == 0
            for kk = 2.^((-1)* (0:5))% magic number! The point is to include very small variable as the decrease happens locally.
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
                    iterfirstactive = k;%same here
                    break;
                end
            end
        end
    end
    [xi, eta, idn, ikp, R] = dev_onestep_xpipg( xi, eta, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);%not necessary if newton got activates
    if norm(R)<= 10^-10
%         out.converge = true;
%         out.iter = k +out.ntime* 12;
%         out.R = R;
%         %out.id = idn;
%         out.xi = xi;
%         out.residual = norm(R);
%         out.activeshift = activesetshift;
% 
%         out.timeinzones = timeinzones;
        [xi, eta, idn, ikp, R] = dev_onestep_xpipg( xi, eta, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);
        out.converge = true;
%         save("debugg", "alpha", "beta", "rho", "P", "H", "HT", "q", "g", "z_min", "z_max","xi", "eta");
        break
    end

end
solve_time = toc*1000;
% if exit_flag == -1
%     fprintf("\nexPIPG DVEC did not converge in %.0f iterations: MAX ITERATIONS REACHED\n",k_max);
% end
out.k = k;
out.computationtime = solve_time;
disp(solve_time);
out.output = [xi;eta]';
out.xi = xi;
out.eta = eta;%comment this after use!
%print("Primal error : %9.2e\nDual error   : %9.2e\n",err_p1,err_d1);






