clear;
problem_data;
derived_data;
data_transplant;
rng(42)
nz = (N-1)*(nx+nu) + nx;
z1 = rand(nz,1);
lam = 1/2;
Yamlip_lcvx
rho = 1.6;
omg =200;%find this by line search
newtonratio =0.99;%Rewrite
newtonactive =3;
maxit = 1000;
tol= 10^-8;
cone_k_polar = params_coneK_polar;
% 
out2 = vec_newtonpipg_linearalgebratrick(P,sparse(H_new),sparse(H_new)',q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg, maxit,...
newtonratio, newtonactive, tol); 