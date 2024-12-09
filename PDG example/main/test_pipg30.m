clear
rng(12);%The best coefficient is 42
problem_data;
derived_data;
data_transplant;
z1 = rand((N-1)*(nx+nu)+nx,1);
lam = 1/2;%1/2
rho = 1;%1.5
omg =20;%find this by line search
maxit =500;
cone_k_polar = params_coneK_polar;
tol = 10^-8;
% % out_pipg = vec_pipg(P,sparse(H_new),sparse(H_new)',q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg, maxit, false);
% % % disp(norm(out_pipg.R));
out_pipg_dev = dev_xpipg_g_for_N_30(diag(P),A, q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg, maxit, tol,false);
disp(out_pipg_dev)
% 
% display = false;
%  out1 = dev_xpipg_g_for_N_30_mex(diag(P),A, q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg, maxit, display);
%  out2 = dev_xpipg_g_mex(diag(P),A, q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg, maxit, false);
% disp(out1);
% disp(out1.solve_time)
% disp(out2.solve_time)

newton_coeff.newtonratio = 0.99;%reject if the reduce of residual is less than 1%
newton_coeff.newtonactive =3;%active newtonstep after # iteration.3
newton_coeff.linesearch_step = 5;% stepsize of linesearch 5
newton_coeff.linsearch_amount = 3;%Depends on the cost of each Newton step versus norm steps, we want.2 
newton_coeff.newtonwaitlinear = 10;%
newton_coeff.newtonwaitexp = 0;%avoid using newton for the third time in one region.
newton_coeff.newtonwait_factor = 0;
omg =200;
pertub = 0.001;
tol= 10^-12;
display = true;%When testing speed, turn off the output.
out3 = dev_newtonpipg_g_N_30(diag(P),A,q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg,newton_coeff, maxit,...
  tol, pertub, display);%what happend to the speed??
disp(out3)
% maxit =4000;
% pcg_newton_coeff = newton_coeff;
% pcg_newton_coeff.pcg_max_iter =3;
% pcg_newton_coeff.pcg_max_tol = 0.0001;%How should we set this??
% pcg_newton_coeff.linesearch_amount = 3;
% display = true;
% pertub = 0.001;
% out4 = dev_newtonpipg_pcg_g(diag(P),A,q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg,pcg_newton_coeff , maxit,...
%     tol, pertub, display);%check the definitionof accuracy. we must have better implementation. 
