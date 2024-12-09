function out = vec_pipg(P,H,Ht,q, g,N, nx, nu,nineq, proj_index_all, proj_coefficient_all,cone_k_polar, z1,lam, rho, omg, maxit, display)
% we changed the input in this.% If you are looking for the original
% version, check the copy of pipg 
% this is a code for pipg
% z1 is the random intnitial 
%% Set up
nz = nx* N + nx + nu*N;
nH_r = (nx + nineq) * (N);%#rows of H
nH_c = (nx + nu) * N + nx;%#cols of H

out = struct;
out.converge = true;
out.iter4 = -1;
out.iter8 = -1;
out.iter12 = -1;
out.xi = zeros(nH_c,1);
out.eta = zeros(nH_r,1);
out.solve_time = inf;
w1 = zeros(size(out.eta));
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
    w1 = H*z1;%devec
    z1 = Ht * w1;%devec
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
%
J_D_old= zeros(nH_c);
J_affine_D_old = zeros(nH_c, 1);
J_k_polar_old = zeros(nH_r); 
for k = 1: maxit
    [xinew, etanew,  J_D, J_affine_D, J_k_polar, R] = vec_xpipg_onestep( xi, eta,alpha, beta,...
    rho,P,H,Ht,q, g,N, nx, nu, proj_index_all, proj_coefficient_all,cone_k_polar);
        fprintf("this is the %d interation for vecnewton, the residual norm is %e\n", k, norm(R))
    xi = xinew;
    eta = etanew;
    % 
    if display && (norm(J_affine_D_old - J_affine_D)>0 || norm(diag(J_k_polar_old)-diag(J_k_polar))>0||(k>200&&mod(k, 800) == 0))
        fprintf('This is the %d iteration\n', k);
        fprintf('the update for D-affine jacobian is %f', norm(J_affine_D_old - J_affine_D));
        fprintf('the update for k_polar is %f', norm(diag(J_k_polar_old)-diag(J_k_polar)));
        fprintf('the current norm of residual is %e', norm(R));
        fprintf('the update for D all is %f\n', norm(J_D_old- J_D));

    end
    % disp(norm(J_affine_D_old - J_affine_D));
    % disp(norm(diag(J_k_polar_old)-diag(J_k_polar)));
    % disp(norm(J_D_old- J_D));
    J_D_old = J_D;
    J_affine_D_old = J_affine_D;
    J_k_polar_old = J_k_polar;


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
out.R = R;





