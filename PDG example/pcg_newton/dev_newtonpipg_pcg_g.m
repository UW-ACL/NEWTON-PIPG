function out = dev_newtonpipg_pcg_g(P,A,q, g,N, nx, nu,nineq, proj_index_all, proj_coefficient_all,cone_k_polar, z_1,lam, rho, omg,newton_coeff, maxit,...
    tol, pertub, display)
% check newton_coeff's definition. 
%% Set up
coder.varsize('z1');
z1 = z_1;%weird bug
nz = nx* (N-1) + nx + nu*(N-1);
nH_r = (nx + nineq) * (N);%#rows of H. We have N grid points
nH_c = (nx + nu) * (N-1) + nx;%#cols of H
ne = nx;% the amount of equalities
L = zeros([size(A,1), size(A,1), 2,size(A,3)]);
%% Output
out = struct;
out.converge = true;
out.xi = zeros(nH_c,1);
out.eta = zeros(nH_r,1);
out.solve_time = inf;
out.ntime = 0;
out.pcgtime = 0;
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
pcg_max_iter = newton_coeff.pcg_max_iter;
pcg_max_tol = newton_coeff.pcg_max_tol;

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
pcg_flag = 0;
pcg_ratio = 1;
nRn = 100;%only for c-coder

%% Main
for k = 1:maxit
    [xin, etan, J_affine_D, J_k_polar, R, temp_prime, ~]= dev_xpipg_onestep_g(xi, eta,alpha, beta,...
        rho,P,A,q,g,N, nx, nu, ne, proj_index_all, proj_coefficient_all,cone_k_polar);
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
        pcg_ratio = 1;% used to PCG tol
    end

    if k >= newtonactive +temp + newtonwaitlinear*newtonwait_factor + newtonwaitexp^newtonwait_factor-1
        nR = norm(R);
        temp = k;
        if display
            fprintf("the current wait is %d \n", int32( newtonwaitlinear*newtonwait_factor + newtonwaitexp^newtonwait_factor-1))
        end
        if pcg_flag == 0
            [dzw, L] = dev_g_PCG_newton_pipg_update(A,P, nx, nu, ne, proj_index_all, proj_coefficient_all, J_k_polar, temp_prime, R, alpha, beta, rho, pertub * nR);%maybe we need to robustify this and have a flag
            out.ntime = out.ntime + 1;
            pcg_flag = 1;
            if display
               fprintf('Newton_step is done\n') 
            end
        else
             pcg_tol = min(pcg_max_tol, pcg_ratio^2);
             [dzw, pcg_flag, iter, accuracy] = dev_pcg_update_g (A,P,L, nx, nu, ne, proj_index_all, proj_coefficient_all, J_k_polar, temp_prime,R, alpha, beta, rho, pertub * nR, pcg_tol, pcg_max_iter);
                out.pcgtime = out.pcgtime + 1;
             if display
                 fprintf("PCG finihsed with pcg_flag = %d, iter = %d, accuracy = %e \n", int32(pcg_flag), int32(iter), accuracy);
             end
        end
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
            nRn = norm(Rn);
            if nRn <= newtonratio * nR
                line_search_flag = 1;
                break;
            end

        end
        if display
             fprintf("the newton reducement is %f \n", nRn/nR);

        end
        if line_search_flag == 1
            xin = xinewton;
            etan = etanewton;
            newtonwait_factor = 0;
        elseif nRn/nR>2%magic number Corresponding to case there are very closed to insgularity and not providing any useful information
            newtonwait_factor = newtonwait_factor + 1;
            pcg_ratio = 1;
        else
            pcg_ratio = 1;
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