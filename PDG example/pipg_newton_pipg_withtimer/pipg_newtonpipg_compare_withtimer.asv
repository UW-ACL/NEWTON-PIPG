clear
close all
rng(42);

r_init                  = [0;0;2000];
problem_data_test;
derived_data;
data_transplant;

z1 = rand((N-1)*(nx+nu)+nx,1);
lam = 1/2;%1/2
rho = 1;%1.5
omg =20;
maxit =20000;
cone_k_polar = params_coneK_polar;
adjust_coeff = 15;%max of gamma d and gamma p
tol = 10^-4/adjust_coeff;
out_pipg_dev_8 = dev_xpipg_g_for_N_30_withtimer_mex(diag(P),A, q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg, maxit, tol,false);
%Newton_PIPG
newton_coeff.newtonratio = 0.99;%reject if the reduce of residual is less than 1%
newton_coeff.newtonactive =3;%active newtonstep after # iteration.3
newton_coeff.linesearch_step = 5;% stepsize of linesearch 5
newton_coeff.linsearch_amount = 3;%Depends on the cost of each Newton step versus norm steps, we want.2
newton_coeff.newtonwaitlinear = 10;%
newton_coeff.newtonwaitexp = 0;%avoid using newton for the third time in one region.
newton_coeff.newtonwait_factor = 0;
omg =200;
pertub = 0;
tol= 10^-12;
display = false;
out3 = dev_newtonpipg_compare_withtimer_mex(diag(P),A,q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg,newton_coeff, maxit,...
    tol, pertub, display);
disp(out3)