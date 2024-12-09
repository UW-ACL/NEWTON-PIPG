clear;
rng(1);
problem_data;
derived_data;
data_transplant;

rng(52);
z1 = rand(216,1);
lam = 1/2;
rho = 1.;
omg = 200;%find this by line search
maxit =100000;
cone_k_polar = params_coneK_polar;
out_pipg = vec_pipg(P,sparse(H_new),sparse(H_new)',q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg, maxit, false);
% disp(norm(out_pipg.R));
% z_pipg = out_pipg.xi;
% z_out = value(z);
% norm(z_out-z_pipg)
% disp(out_pipg.iter8)
newtonratio = 0.99;%Rewrite
newtonactive =3;
tol= 10^-8;

out = vec_newtonpipg(P,sparse(H_new),sparse(H_new)',q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg, maxit,...
    newtonratio, newtonactive, tol);
out1 = vec_newtonpipg_linearalgebratrick(P,sparse(H_new),sparse(H_new)',q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg, maxit,...
    newtonratio, newtonactive, tol);
% 
% rng(2);
% problem_data;
% derived_data;
% data_transplant;
% 
% rng(52);
% z1 = rand(216,1);
% lam = 1/2;
% rho = 1.;
% omg = 200;%find this by line search
% maxit =1000;
cone_k_polar = params_coneK_polar;
% out_pipg = vec_pipg(P,sparse(H_new),sparse(H_new)',q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg, maxit, false);
% disp(norm(out_pipg.R));
% z_pipg = out_pipg.xi;
% z_out = value(z);
% norm(z_out-z_pipg)
% disp(out_pipg.iter8)
% newtonratio = 0.99;%Rewrite
% newtonactive =3;
% tol= 10^-8;
% 
% % out = vec_newtonpipg(P,sparse(H_new),sparse(H_new)',q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg, maxit,...
% %     newtonratio, newtonactive, tol);
% out2 = vec_newtonpipg_linearalgebratrick(P,sparse(H_new),sparse(H_new)',q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg, maxit,...
%     newtonratio, newtonactive, tol);