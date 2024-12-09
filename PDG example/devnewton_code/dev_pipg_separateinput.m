function out = dev_pipg_separateinput(A, B, At, Bt, P, z1, lw, q, g, z_min, z_max, lam, rho, omg, maxit)
% we changed the input in this.% If you are looking for the original
% version, check the copy of pipg 
% this is a code for pipg
%%%%%%%%%%%%%%%%%%%%
%Set up
%%%%%%%%%%%%%%%%%%%%



%%%%%%%%%%%%%%%%%%%%
% pipg out
%%%%%%%%%%%%%%%%%%%%
out = struct;
out.converge = true;
out.iter4 = -1;
out.iter8 = -1;
out.iter12 = -1;
out.xi = zeros( size( z_max));
out.eta = zeros(size(g));
out.solve_time = inf;
w1 = zeros(size(out.eta));
% xi = ppv.z;%What inital guess should I use??!!
% eta = ppv.w;
%%%%%%%%%%%%%%%%%%%
%PIPG
%%%%%%%%%%%%%%%%%%%
flag4 = 0;
flag8 = 0;
flag12 = 0;

tic;
%%%%%%%%%%%%%%%%%%%%
%find alpha and beta
%%%%%%%%%%%%%%%%%%%%
sig1 = 100.1;
sig2 = 200.2;

while abs(sig2-sig1)/sig1 >= 0.005
    sig2 = sig1;
    w1 = dev_HZ(A, B, z1);%devec
    z1 = dev_HtZ(At,Bt, w1);%devec
    sig1 = norm(z1);
    z1 = z1/sig1;

end

% find alpha beta
% Buffer the estimated spectral norm
sig1 = 1.1*sig1;
alpha = 2/((lam^2 + 4*omg*sig1)^0.5+lam);
xi = z1;
eta = w1;
beta = omg*alpha;
for k = 1: maxit
    [xinew, etanew, idn, ikp, R] = dev_onestep_xpipg( xi, eta, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);
    xi = xinew;
    eta = etanew;
    if norm(R) <= 10^-4 && flag4 ==0
        flag4 = 1;
        out.iter4 = k;
    end
    if norm(R) <= 10^-8 && flag8 ==0
        flag8 = 1;
        out.iter8 = k;
        break
    end
    if norm(R) <= 10^-12 && flag12 ==0
        flag12 = 1;
        out.iter12 = k;
        break
    end
end
if flag8 == 0
    out.converge = false;
end
solve_time = toc*1000;
out.solve_time = solve_time;
out.xi = xi;
out.eta = eta;





