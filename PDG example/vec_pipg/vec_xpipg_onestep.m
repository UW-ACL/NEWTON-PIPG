function [xi_n, eta_n, J_D, J_affine_D, J_k_polar, R]= vec_xpipg_onestep(xi, eta,alpha,beta,...
    rho,P,H,Ht,q, g,N, nx, nu, proj_index_all, proj_coefficient_all,cone_k_polar)
%HZ-g

temp_prime = xi - alpha*(P * xi + q + Ht * eta);
z = proj_D(temp_prime,N, nx, nu, proj_index_all, proj_coefficient_all);
[J_D, J_affine_D] = jacob_D_vec(temp_prime,N, nx, nu, proj_index_all, proj_coefficient_all);
temp_dual = eta + beta* (H * (2*z - xi)-g);
w = proj_k_polar(temp_dual, cone_k_polar);
J_k_polar = jacob_k_polar_vec(temp_dual, cone_k_polar);
xi_n = (1-rho)*xi + rho * z;
eta_n = (1-rho)* eta + rho * w;
R = -[xi_n; eta_n] + [xi; eta];
end
