clear
rng(12);%The best coefficient is 42

init_y_loc = 0:100:2900;
solv_time_pipg_4 = zeros(size(init_y_loc));
solv_time_pipg_8= zeros(size(init_y_loc));
converge_pipg_4 = logical(solv_time_pipg_4);
converge_pipg_8 = logical(solv_time_pipg_4);
solv_time_newton_pipg = solv_time_pipg_4;
solv_time_mosek = solv_time_pipg_8;

for init_y_index = 1: length(init_y_loc)
    r_init                  = [0;init_y_loc(init_y_index);2000]; %2950 is the boundary
    problem_data_test;
    derived_data;
    data_transplant;

    %PIPG
    z1 = rand((N-1)*(nx+nu)+nx,1);
    lam = 1/2;%1/2
    rho = 1;%1.5
    omg =20;
    maxit =50000;
    cone_k_polar = params_coneK_polar;
    tol = 10^-4;
    out_pipg_dev_4 = dev_xpipg_g_for_N_30_mex(diag(P),A, q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg, maxit, tol,false);
    tol = 10^-8;
    out_pipg_dev_8 = dev_xpipg_g_for_N_30_mex(diag(P),A, q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg, maxit, tol,false);
    solv_time_pipg_4(init_y_index) = out_pipg_dev_4.solve_time;
    solv_time_pipg_8(init_y_index) = out_pipg_dev_8.solve_time;
    converge_pipg_4(init_y_index) = out_pipg_dev_4.iter4>0;
    converge_pipg_8(init_y_index) = out_pipg_dev_8.iter8>0;
    %Newton_PIPG
    newton_coeff.newtonratio = 0.99;%reject if the reduce of residual is less than 1%
    newton_coeff.newtonactive =3;%active newtonstep after # iteration.3
    newton_coeff.linesearch_step = 5;% stepsize of linesearch 5
    newton_coeff.linsearch_amount = 3;%Depends on the cost of each Newton step versus norm steps, we want.2
    newton_coeff.newtonwaitlinear = 10;%
    newton_coeff.newtonwaitexp = 0;%avoid using newton for the third time in one region.
    newton_coeff.newtonwait_factor = 0;
    omg =200;
    pertub = 0.001;
    tol= 10^-8;
    display = false;%When testing speed, turn off the output.
    out3 = dev_newtonpipg_g_N_30_mex(diag(P),A,q, g,N, nx, nu,nineq, proj_index_all, proj_coefficients_all,cone_k_polar, z1,lam, rho, omg,newton_coeff, maxit,...
        tol, pertub, display);
    solv_time_newton_pipg(init_y_index) = out3.solve_time;

    Yamlip_lcvx;
    solv_time_mosek(init_y_index) = out_y.solvertime*1000;
    accur(init_y_index) = norm(out3.xi - value(z));
end
