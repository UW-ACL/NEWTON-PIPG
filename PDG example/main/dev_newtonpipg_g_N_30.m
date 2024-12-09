function out = dev_newtonpipg_g_N_30(P,A,q, g,N, nx, nu,nineq, proj_index_all, proj_coefficient_all,cone_k_polar, z_1,lam, rho, omg,newton_coeff, maxit,...
    tol, pertub, display)%#codegen

%P: quadratic penalty, diagonal matrix
%A: blocks that defines H. (ne + nineq)*(nx + nu)* (N-1)
%q, g: dense vector in PIPG
%N: #time grid points. 1:N are all states
%nx, nu, nineq:# of state, control and inequalities
%proj_$: projection coefficients, see data_transplant.
%cone_k_polar: definition of cone_K_p. Diagonal
%z1: initial condition, random's generated.
%lam:norm of P; rho, omg: coefficients for Newtonpipg
%maxit, tol:max # of iterations and convergence tolarence
%perturb: avoid singularity for newton step. pertub * norm(R) is added to
%the matrix diagonal
%newtoncoeff:check the definition below
%display controls whether we have print-outs

%% Set up
%coder.varsize('z1');
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
nz = nx* (N-1) + nx + nu*(N-1);
assert(nz <= 360);
ne = nx;% the amount of equalities
assert(ne<=7);
%% Output
out = struct;
out.converge = true;
out.xi = zeros(nH_c,1);
out.eta = zeros(nH_r,1);
out.solve_time = 0;
out.ntime = 0;
out.k = 0;
w1 = zeros(size(out.eta));
flag4 = 0;
flag8 = 0;
flag12 = 0;

%% Setup constant for Newton_pipg
linesearch_step = newton_coeff.linesearch_step;
linsearch_amount = newton_coeff.linsearch_amount;%depends on the cost of each Newton step versus norma steps
newtonwaitlinear = newton_coeff.newtonwaitlinear;
newtonwaitexp = newton_coeff.newtonwaitexp;%avoid using newton for the third time in one region.
newtonwait_factor = newton_coeff.newtonwait_factor;
newtonratio = newton_coeff.newtonratio;
newtonactive= newton_coeff.newtonactive;

tic;
%% Set up coef for pipg
sig1 = 100.1;%not important constants
sig2 = 200.2;

while abs(sig2-sig1)/sig1 >= 0.005 %Power iterations
    sig2 = sig1;
    w1 = dev_HZ_g(A, z1, ne);%devec
    z1 = dev_HtZ_g(A, w1, ne);%devec
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
J_affine_D_old = zeros(nH_c, 1);
J_k_polar_old = zeros(nH_r,1); %they should be vectors!
temp = 1;
for k = 1:maxit
    [xin, etan, J_affine_D, J_k_polar, R, temp_prime, ~]= dev_xpipg_onestep_g(xi, eta,alpha, beta,...
        rho,P,A,q,g,N, nx, nu, ne, proj_index_all, proj_coefficient_all,cone_k_polar);
    Rn = R;
    if display
        fprintf("this is the %d interation for vecnewton, the residual norm is %e\n", int32(k), norm(R))
    end
    if k == 1
        J_affine_D_old = J_affine_D;
        J_k_polar_old = J_k_polar;
        temp = 1;
    end

    if norm(J_affine_D_old - J_affine_D)>0 || norm(J_k_polar_old-J_k_polar)>0%check the size of J_k_polar_old.

        temp = k;
        J_affine_D_old = J_affine_D;
        J_k_polar_old = J_k_polar;
        newtonwait_factor = 0;
    end

    if k >= newtonactive +temp + newtonwaitlinear*newtonwait_factor + newtonwaitexp^newtonwait_factor-1
        temp = k;
        if display
            fprintf("the current wait is %d \n", int32(newtonactive +temp + newtonwaitlinear*newtonwait_factor + newtonwaitexp^newtonwait_factor-1))
        end
        % [dzw, flag]  = vec_newtonpipgupdate_linearalgebratrick(alpha, beta, rho,R,P, J_D, H, Ht, J_k_polar);%R = old - new
        dzw = dev_g_newton_pipg_update(A,P, nx, nu, ne, proj_index_all, proj_coefficient_all, J_k_polar, temp_prime, R, alpha, beta, rho, pertub * norm(R));%maybe we need to robustify this and have a flag
        out.ntime = out.ntime + 1;
        %%%line search
        xinewton = zeros(size(xi));
        etanewton = zeros(size(eta));
        line_search_flag = 0;
        for kk_indx = 0:linsearch_amount% ! The point is to include very small variable as the decrease happens locally.
            kk = linesearch_step^(-1*kk_indx);
            xinewton_old = xi + kk* dzw(1: nz);
            etanewton_old = eta + kk * dzw((nz+1): end);
            % [xinewton, etanewton, ~, ~,~, Rn] = vec_xpipg_onestep( xinewton_old, etanewton_old,alpha, beta,...
            %     rho,P,H,Ht,q, g,N, nx, nu, proj_index_all, proj_coefficient_all,cone_k_polar);%checkthis
            [xinewton, etanewton, ~, ~, Rn, ~, ~]= dev_xpipg_onestep_g(xinewton_old, etanewton_old,alpha, beta,...
                rho,P,A,q,g,N, nx, nu, ne, proj_index_all, proj_coefficient_all,cone_k_polar);

            if norm(Rn) <= newtonratio * norm(R)
                line_search_flag = 1;
                break;
            end

        end
        if display
             fprintf("the newton reducement is %f \n", norm(Rn)/norm(R));

        end
        if line_search_flag == 1
            xin = xinewton;
            etan = etanewton;
            newtonwait_factor = 0;
        elseif norm(Rn)/norm(R)>2%magic number Corresponding to case there are very closed to insgularity and not providing any useful information
            newtonwait_factor = newtonwait_factor + 1;
        end

    end
    xi = xin;
    eta = etan;

    if norm(R)<= tol
        % [xi, eta,~, ~, ~,R] = vec_xpipg_onestep( xi, eta,alpha, beta,...
        %     rho,P,H,Ht,q, g,N, nx, nu, proj_index_all, proj_coefficient_all,cone_k_polar);
        [xi, eta, ~, ~, R, ~, ~]= dev_xpipg_onestep_g(xi, eta,alpha, beta,...
            rho,P,A,q,g,N, nx, nu, ne, proj_index_all, proj_coefficient_all,cone_k_polar);
        out.converge = true;
        out.k = k;
        break
    end

end
solve_time = toc*1000;
out.solve_time = solve_time;
out.xi = xi;
out.eta = eta;
end