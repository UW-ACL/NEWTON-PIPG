clear
rng(42);
problem_data;
derived_data;
data_transplant;
z1 = rand((N-1)*(nx+nu)+nx,1);
lam = 1/2;%P's norm
rho = 1.5;
omg =200;%find this by line search
maxit =2000;
cone_k_polar = params_coneK_polar;
% % out_pipg = vec_pipg(P,sparse(H_new),sparse(H_new)',q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg, maxit, false);
% % % disp(norm(out_pipg.R));
out_pipg_dev = dev_xpipg_g(diag(P),A, q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg, maxit, false);
% % % z_pipg = out_pipg.xi;
% % % z_out = value(z);
% % norm(z_out-z_pipg)
% % disp(out_pipg.iter8)
newtonratio = 0.99;%Rewrite
newtonactive =3;
tol= 10^-8;
% out_pipg_dev_1 = dev_xpipg_g_mex(diag(P),A, q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg, maxit, false);
% % 
% % % 
% % out = vec_newtonpipg(P,sparse(H_new),sparse(H_new)',q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg, maxit,...
% % %     newtonratio, newtonactive, tol);
% % out2 = vec_newtonpipg_linearalgebratrick(P,sparse(H_new),sparse(H_new)',q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg, maxit,...
% %     newtonratio, newtonactive, tol);
newton_coeff.newtonratio = 0.99;%reject if the reduce of residual is less than 1%
newton_coeff.newtonactive =3;%active newtonstep after # iteration.3
newton_coeff.linesearch_step = 5;% stepsize of linesearch 5
newton_coeff.linsearch_amount = 2;%Depends on the cost of each Newton step versus norm steps, we want.2 
newton_coeff.newtonwaitlinear = 10;%
newton_coeff.newtonwaitexp = 0;%avoid using newton for the third time in one region.
newton_coeff.newtonwait_factor = 0;
pertub = 10^-1;
display = false;
out3 = dev_newtonpipg_g_30(diag(P),A,q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg,newton_coeff, maxit,...
  tol, pertub, display);
% % out4 = dev_newtonpipg_g_30_mex(diag(P),A,q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg,newton_coeff, maxit,...
%     tol, pertub, display);
% out2 = dev_newtonpipg_g_with_timer(diag(P),A,q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg,newton_coeff, maxit,...
%     tol, pertub, display);
% out3 = dev_newtonpipg_g_30_mex(diag(P),A,q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg,newton_coeff, maxit,...
%     tol, pertub, display);
% out3 = dev_newtonpipg_g(diag(P),A,q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg,newton_coeff, maxit,...
%      tol, pertub, display);
% % 
pcg_newton_coeff = newton_coeff;
pcg_newton_coeff.pcg_max_iter = 4;
pcg_newton_coeff.pcg_max_tol = 0.05;
pcg_newton_coeff.linesearch_amount = 2;
out4 = dev_newtonpipg_pcg_g(diag(P),A,q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg,pcg_newton_coeff , maxit,...
    tol, pertub, display);%check the definitionof accuracy. we must have better implementation. 

% out3 = dev_newtonpipg_g(diag