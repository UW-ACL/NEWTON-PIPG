function out = dev_newtonzpipg_separatedinput(A, B, At, Bt, P, z1, lw, q, g, z_min, z_max, lam, rho, omg, maxit, ...
   newtonratio, newtonactive )%#codegen
%% coefficient set up
linesearch_step = 3;
linsearch_amount = 5;
newtonwaitlinear = 30;
newtonwaitexp = 10;%avoid using newton for the third time in one region. 

ratio = newtonratio;%ratio for activating newton step
%wait for 10 pipg before activating newton
%% Set up
out = struct;
out.converge = false;
out.xi = zeros(size(z_max));
out.eta = zeros(size(lw));
out.solve_time = inf;
out.ntime = 0;
out.k = 0;
w1 = out.eta;
nz = length(out.xi);
%% find alpha and beta

tic;
sig1 = 100.1;
sig2 = 200.2;

while abs(sig2-sig1)/sig1 >= 0.005
    sig2 = sig1;
    w1 = dev_HZ(A, B, z1);
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
xi = z1;%What inital guess should I use??!!
eta = w1;
newtonwait_factor = 0;


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
%newton pipg
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
[xi, eta, idn, ikp, R] = dev_onestep_xpipg( xi, eta, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);%Do this twice
temp = 0;
%initialization
id = -1* ones(size(z1));
idn = -2*id;

for k = 1:maxit


    if k ==1
        id = idn;
        newtonflag = 1;
    end
    if ~isequal(id, idn)

        temp = k;
        id = idn;
        newtonwait_factor = 0;

    end

    if k >= newtonactive +temp + newtonwaitlinear*newtonwait_factor + newtonwaitexp^newtonwait_factor-1
        temp = k;
        id = idn;

        [~, ~,~, ~, R] = dev_onestep_xpipg( xi, eta, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);
        [dzw, flag]  = dev_newtonpipgupdate(A, B,At, Bt, P, idn, -R, nz, alpha, beta, rho);
        newtonwait_factor = newtonwait_factor +1;
        out.ntime = out.ntime + 1;

        %%%Easiest version
        %%%line search
        if flag == 0
            for kk = linesearch_step.^((-1)* (0:linsearch_amount))% magic number! The point is to include very small variable as the decrease happens locally.
                xinew = xi + kk* dzw(1: nz);
                etanew = eta + kk * dzw((nz+1): end);
                [xin, etan, ~, ~, Rn] = dev_onestep_xpipg( xinew, etanew, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);
                if norm(Rn) <= ratio * norm(R)
                    xi = xin;
                    eta = etan;
                    %R = Rn;
                    %In case the residual has a big drop but still in the same region.
                    %This is dangerous as we may active the Newton step too
                    %many times. A better way is to compute the exact length
                    %that helps current iteration get rid of current area
                    %iterfirstactive = k;%same here
                    break;
                end
            end
        end
    end
    [xi, eta, idn, ~, R] = dev_onestep_xpipg( xi, eta, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);%not necessary if newton got activates
    if norm(R)<= 10^-10
        [xi, eta,~, ~, ~] = dev_onestep_xpipg( xi, eta, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);
        out.converge = true;
        break
    end

end
solve_time = toc*1000;
out.k = k;
out.solve_time = solve_time;
out.xi = xi;
out.eta = eta;







