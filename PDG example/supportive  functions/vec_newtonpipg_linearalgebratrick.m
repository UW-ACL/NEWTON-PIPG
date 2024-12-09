function out = vec_newtonpipg_linearalgebratrick(P,H,Ht,q, g,N, nx, nu,nineq, proj_index_all, proj_coefficient_all,cone_k_polar, z1,lam, rho, omg, maxit,...
    newtonratio, newtonactive, tol)%#codegen
% we changed the input in this.% If you are looking for the original
% version, check the copy of pipg 
% this is a code for pipg
% z1 is the random intnitial 
%% Set up
nz = nx* (N-1) + nx + nu*(N-1);
nH_r = (nx + nineq) * (N);%#rows of H. We have N grid points
nH_c = (nx + nu) * (N-1) + nx;%#cols of H

out = struct;
out.converge = true;
out.iter4 = -1;
out.iter8 = -1;
out.iter12 = -1;
out.xi = zeros(nH_c,1);
out.eta = zeros(nH_r,1);
out.solve_time = inf;
out.ntime = 0;
out.pcgtime = 0;
out.k = 0;
w1 = zeros(size(out.eta));
%% Newtonstep 
linesearch_step = 5;
linsearch_amount = 2;%depends on the cost of each Newton step versus norm steps, we want 
newtonwaitlinear = 5;
newtonwaitexp = 0;%avoid using newton for the third time in one region.
newtonwait_factor = 0;
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
beta = omg*alpha;
xi = z1;
eta = w1;
%
J_affine_D_old = zeros(nH_c, 1);
J_k_polar_old = zeros(nH_r);

%%start the iteration
for k = 1:maxit
    
    [xin, etan, J_D, J_affine_D, J_k_polar, R] = vec_xpipg_onestep( xi, eta,alpha, beta,...
        rho,P,H,Ht,q, g,N, nx, nu, proj_index_all, proj_coefficient_all,cone_k_polar);
        fprintf("this is the %d interation for vecnewton, the residual norm is %e\n", k, norm(R))
    if k == 1
        J_affine_D_old = J_affine_D;
        J_k_polar_old = J_k_polar;
        temp = 1;
        %newtonflag = 1;
    end
    if norm(J_affine_D_old - J_affine_D)>0 || norm(diag(J_k_polar_old)-diag(J_k_polar))>0
        temp = k;
        J_affine_D_old = J_affine_D;
        J_k_polar_old = J_k_polar;
        newtonwait_factor = 0;
    end

    if k >= newtonactive +temp + newtonwaitlinear*newtonwait_factor + newtonwaitexp^newtonwait_factor-1
        temp = k;
        % [~, ~, ~, ~, ~, R] = vec_xpipg_onestep( xi, eta,alpha, beta,...
        % rho,P,H,Ht,q, g,N, nx, nu, proj_index_all, proj_coefficient_all,cone_k_polar);
        disp(newtonwait_factor)
        [dzw, flag]  = vec_newtonpipgupdate_linearalgebratrick(alpha, beta, rho,R,P, J_D, H, Ht, J_k_polar);%R = old - new
        out.ntime = out.ntime + 1;
        %%%line search
        if flag == 1
            %singular matrix
            %warning("The matrix in Newton step is singular.");
            newtonwait_factor = newtonwait_factor + 1;
            xi = xin;
            eta = etan;
            continue
        end
        line_search_flag = 0;
         for kk = linesearch_step.^((-1)* (0:linsearch_amount))% magic number! The point is to include very small variable as the decrease happens locally.
            xinewton_old = xi + kk* dzw(1: nz);
            etanewton_old = eta + kk * dzw((nz+1): end);
            [xinewton, etanewton, ~, ~,~, Rn] = vec_xpipg_onestep( xinewton_old, etanewton_old,alpha, beta,...
        rho,P,H,Ht,q, g,N, nx, nu, proj_index_all, proj_coefficient_all,cone_k_polar);%checkthis
            if norm(Rn) <= newtonratio * norm(R)
                line_search_flag = 1;
                break;
            end

        end
        disp(norm(Rn)/norm(R));
        if line_search_flag == 1
            xin = xinewton;
            etan = etanewton;
            newtonwait_factor = 0;
        elseif norm(Rn)/norm(R)>2
            newtonwait_factor = newtonwait_factor + 1;
        end

    end
    xi = xin;
    eta = etan;

    if norm(R)<= tol
        [xi, eta,~, ~, ~,R] = vec_xpipg_onestep( xi, eta,alpha, beta,...
        rho,P,H,Ht,q, g,N, nx, nu, proj_index_all, proj_coefficient_all,cone_k_polar);
        out.converge = true;
        break
    end

end
solve_time = toc*1000;
out.k = k;
out.solve_time = solve_time;
out.xi = xi;
out.eta = eta;







