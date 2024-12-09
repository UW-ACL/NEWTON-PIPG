function [xi_n, eta_n, J_affine_D, J_k_polar, R, temp_prime, temp_dual]= dev_xpipg_onestep_g(xi, eta,alpha,beta,...
    rho,P,A,q, g,N, nx, nu, ne, proj_index_all, proj_coefficient_all,cone_k_polar)
%P must be a vector
%A is the matrix defining H, here we only have zero order hold for the
%simplicity of programming. 

% temp_prime = xi - alpha*(P.* xi + q + Ht * eta);
temp_prime = xi - alpha*(P.* xi + q + dev_HtZ_g(A, eta, ne));
[z, J_affine_D] = proj_D_with_affinejacobian(temp_prime,N, nx, nu, proj_index_all, proj_coefficient_all);
%temp_dual = eta + beta* (H * (2*z - xi)-g);
temp_dual = eta + beta* (dev_HZ_g(A,(2*z - xi), ne)-g);
[w,J_k_polar] = proj_k_polar_with_jacobian(temp_dual, cone_k_polar);
xi_n = (1-rho)*xi + rho * z;
eta_n = (1-rho)* eta + rho * w;
R = -[xi_n; eta_n] + [xi; eta];
end
