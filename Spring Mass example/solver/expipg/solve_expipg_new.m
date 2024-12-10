function sol = solve_expipg_new(pp,ppv,alg_type)
%{
05/02/2022
Purnanand Elango   

Input:
    alg_type{1}:
        Vectorized ('VEC')
        De-vectorized ('DVEC')
    alg_type{2}:
        MEX ('mex')
        MATLAB ('m')
    alg_type{3}:
        Old infeasibility detection criteria based on ratio of dual error ('old_infeas')
        New infeasibility detection criteria developed by Yue Yu on 04/30/2022 ('new_infeas')
        New infeasibility and feasibility detection criteria developed by Yue Yu on 04/30/2022 and 06/13/2022 respectively ('new')
%}

sol = struct;

sol.status = "Infeasible";

% Initialize exPIPG inputs
x1 = ppv.x{1};  x2 = ppv.x{2};  x3 = ppv.x{3};
u1 = ppv.u{1};  u2 = ppv.u{2};  u3 = ppv.u{3};
w1 = ppv.w{1};  w2 = ppv.w{2};  w3 = ppv.w{3};
err_p1 = 100.1; err_d1 = 200.2; err_d2 = 300.3;
lam = ppv.max_eig_P; omg = pp.expipg_omg; rho = pp.expipg_rho;
k_test = pp.expipg_test_iter; k_max = pp.expipg_max_iter;
exit_flag = -1; eps_feas = pp.expipg_feas_tol; eps_infeas = pp.expipg_infeas_tol;

% Call exPIPG
tic;
[x1,u1,w1,exit_flag] = expipg_dvec_v3_mex(x1,u1,w1,...                              % Main solution variables
    x2,u2,w2,x3,u3,w3,err_p1,err_d1,err_d2,...          % Auxiliary variables
    lam,omg,rho,k_test,k_max,exit_flag,...              % Algorithm parameters
    eps_feas,eps_infeas,...                             % Algorithm tolerances
    pp.N,pp.Q,pp.R,pp.A,pp.A',pp.B,pp.B',...            % Problem constants
    pp.z0,pp.zN,-pp.x_max,pp.x_max,-pp.u_max,pp.u_max);
% [x1,u1,w1,exit_flag] = expipg_dvec_noboundary(x1,u1,w1,...                              % Main solution variables
%     x2,u2,w2,x3,u3,w3,err_p1,err_d1,err_d2,...          % Auxiliary variables
%     lam,omg,rho,k_test,k_max,exit_flag,...              % Algorithm parameters
%     eps_feas,eps_infeas,...                             % Algorithm tolerances
%     pp.N,pp.Q,pp.R,pp.A,pp.A',pp.B,pp.B',...            % Problem constants
%     pp.z0,-pp.x_max,pp.x_max,-pp.u_max,pp.u_max);

sol.solve_time = toc*1000;
xi1 = [reshape(u1,[pp.m*pp.N,1]);reshape(x1,[pp.n*(pp.N+1),1])];
eta1 = reshape(-w1,[pp.n*pp.N,1]);

sol.obj_val = 0.5*xi1'*ppv.P*xi1;
if exit_flag == 1
    sol.status = "Feasible";
    sol.xi = xi1;
    sol.eta = eta1;
    sol.u = reshape(xi1(1:pp.m*pp.N),[pp.m,pp.N]);
    sol.x = reshape(xi1(pp.m*pp.N+1:end),[pp.n,pp.N+1]);
end
end