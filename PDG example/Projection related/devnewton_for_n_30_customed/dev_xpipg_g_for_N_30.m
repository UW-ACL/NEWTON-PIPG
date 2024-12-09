function  out = dev_xpipg_g_for_N_30(P, A, q, g, N, nx, nu,nineq, proj_index_all, proj_coefficient_all,cone_k_polar, z_1,lam, rho, omg, maxit,tol, display)%#codegen
%min_z \frac{1}{2} z^{\top} P z+q^{\top} z 
%  s.t. H z-g = 0, \quad z \in \mathbb{D}
% nx, nu are legacy, stands for the amout of state and control
% nineq = #ineq. proj_index_all, proj_coefficient_all,cone_k_polar, are defined data.
% z1 is the random initial,lam,rho, omg, maxit are defined. 
% display is used to contorl the output. This will be cancelled later.
%% Set up
% nz = nx* N + nx + nu*N;
assert(nx <=7);
assert(nu<=4);
assert(N<=30);
assert(nineq<=4);
coder.varsize('z1');
z1 = z_1;%weird bug


nH_r = (nx + nineq) * (N);%#rows of H
nH_c = (nx + nu) * N + nx;%#cols of H
assert(nH_c<=360);
assert(nH_r<=360);
ne = nx;%ne is the amount of equalities. A better way is to put ne in the definition of the func.

out = struct;
out.converge = true;
out.iter4 = -1;
out.iter8 = -1;
out.iter12 = -1;
out.xi = zeros(nH_c,1);
out.eta = zeros(nH_r,1);
out.solve_time = 0;
out.nR = 0.0;
nR = 0.0;
w1 = zeros(nH_r,1);
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
    w1 = dev_HZ_g(A, z1, ne);%devec

    z1 = dev_HtZ_g(A, w1, ne);%devec

    sig1 = norm(z1);
    z1 = z1/sig1;
end
out.xi = z1;


% find alpha beta
% Buffer the estimated spectral norm
sig1 = 1.1*sig1;
alpha = 2/((lam^2 + 4*omg*sig1)^0.5+lam);
xi = z1;
eta = w1;
beta = omg*alpha;
%
%J_D_old= zeros(nH_c);
% J_affine_D_old = zeros(nH_c, 1);
% J_k_polar_old = zeros(nH_r,1); 
for k = 1: maxit
    % [xinew, etanew,  J_D, J_affine_D, J_k_polar, R] = vec_xpipg_onestep( xi, eta,alpha, beta,...
    % rho,P,H,Ht,q, g,N, nx, nu, proj_index_all, proj_coefficient_all,cone_k_polar);
    [xinew, etanew, ~, ~, R]= dev_xpipg_onestep_g(xi, eta,alpha, beta,...
    rho,P,A,q,g,N, nx, nu, ne, proj_index_all, proj_coefficient_all,cone_k_polar);
    if display
        fprintf("this is the %d interation for vecnewton, the residual norm is %e\n", int32(k), norm(R))
    end
    xi = xinew;
    eta = etanew;
    % 
    % if display && (norm(J_affine_D_old - J_affine_D)>0 || norm(diag(J_k_polar_old)-diag(J_k_polar))>0||(k>200&&mod(k, 800) == 0))
    %     fprintf('This is the %d iteration\n', k);
    %     fprintf('the update for D-affine jacobian is %f', norm(J_affine_D_old - J_affine_D));
    %     fprintf('the update for k_polar is %f', norm(diag(J_k_polar_old)-diag(J_k_polar)));
    %     fprintf('the current norm of residual is %e', norm(R));
    % end
    %
    %
    % J_affine_D_old = J_affine_D;
    % J_k_polar_old = J_k_polar;

    nR = norm(R);
    if nR <= 10^-4 && flag4 ==0 
        flag4 = 1;
        out.iter4 = k;
    end
    if nR <= 10^-8 && flag8 ==0
        flag8 = 1;
        out.iter8 = k;
    end
     if nR <= tol
         break
         out.converge = true;
     end
end

solve_time = toc*1000;
out.solve_time = solve_time;
out.xi = xi;
out.eta = eta;
out.nR = nR;
end