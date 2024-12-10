clear;
close all;
clc;
addpath utils
addpath newtonpipg
addpath solver
addpath solver/expipg

n = 16;%Tune the parameter.
m = n/2;
N = 20;
x_max = 1; u_max =1;

M_avg = 10;

solve_time = struct;
solve_time.osqp = zeros(1,M_avg);
solve_time.scs = zeros(1,M_avg);
solve_time.newtonpipg = zeros(1,M_avg);
solve_time.expipg = zeros(1,M_avg);
solve_time.expipg_old = zeros(1,M_avg);
solve_time.ecos = zeros(1,M_avg);
solve_time.mosek= zeros(1,M_avg);%licence expired
% constr_viol = struct;
% constr_viol.osqp = zeros(1,M_avg);
% constr_viol.scs = zeros(1,M_avg);
% constr_viol.newtonpipg = zeros(1,M_avg);
% constr_viol.quadprog = zeros(1,M_avg);
% constr_viol.expipg = zeros(1,M_avg);

%
relativeaccuracy = struct;
relativeaccuracy.osqp = zeros(1,M_avg);
relativeaccuracy.scs = zeros(1,M_avg);
relativeaccuracy.newtonpipg = zeros(1,M_avg);
relativeaccuracy.quadprog = zeros(1,M_avg);
relativeaccuracy.expipg = zeros(1,M_avg);
relativeaccuracy.ecos = zeros(1,M_avg);
relativeaccuracy.mosek= zeros(1,M_avg);

pp = problem_data(n,m,N,x_max,u_max,1); % Structure with problem data

% Structure with parameters of the vectorized problem
ppv = construct_vectorized(pp);

%codegen_expipg_constsize(pp,ppv,{'DVEC','new'});

lowaccuracy = 10^-9;
highaccuracy = 10^-12;
type = "one_side";%one_side or two_side
codetype = "c";%"c" or "matlab"
k = 0;%used to avoid infeasibile cases.
for j = 1:M_avg

    [ppv, pp] = randomppvupdate(pp,ppv, j, type);
    sol_scs = solve_scs(pp,ppv,type);
    sol_osqp = solve_osqp(pp,ppv);
    %sol_mosek = solve_mosek(pp,ppv);
    sol_ecos = solve_ecos(pp,ppv);
    if sol_osqp.status == "Infeasible" || sol_scs.status == "Infeasible" % discard infeasible cases
        continue
    end
    k = k+1;

    % newtonpipg
    sol_newtonpipg = solve_devnewtonpipg(pp,ppv, codetype);
    sol_baseline = sol_newtonpipg;
    relativeaccuracy.newtonpipg(k) = norm(sol_newtonpipg.x - sol_baseline.x, "inf");

    % OSQP

    %     constr_viol.osqp(k) = constraint_violation(sol_osqp,ppv);
    relativeaccuracy.osqp(k) = norm(sol_osqp.x-sol_baseline.x, "inf");
    
    %Mosek
    %relativeaccuracy.mosek(k) = norm(sol_mosek.x-sol_baseline.x, "inf");
    % SCS

    %     constr_viol.scs(k) = constraint_violation(sol_scs,ppv);
    relativeaccuracy.scs(k) = norm(sol_scs.x - sol_baseline.x,"inf");

    %ecos
    relativeaccuracy.ecos(k) = norm(sol_ecos.x - sol_baseline.x,"inf");

    %PIPG
    sol_expipg = solve_devxpipg(pp,ppv, codetype );
    %     constr_viol.expipg = constraint_violation(sol_expipg, ppv);
    relativeaccuracy.expipg(k) = norm(sol_expipg.x - sol_baseline.x, "inf");
    
    %Purna's pipg
    sol_expipg_old = solve_expipg(pp,ppv,{'DVEC','mex','new'});
    %Mosek
    
    % Solve times
    solve_time.osqp(k) = sol_osqp.solve_time;
    solve_time.scs(k) = sol_scs.solve_time;
    solve_time.newtonpipg(k) = sol_newtonpipg.solve_time;
    solve_time.ecos(k) = sol_ecos.solve_time;
    % solve_time.quadprog(k) = sol_quadprog.solve_time;
    solve_time.expipg(k) = sol_expipg.solve_time;
    %solve_time.mosek(k) = sol_mosek.solve_time;
    % solve_time.expipg_old(k) = sol_expipg_old.solve_time;
end

solve_time.osqp_avg = mean(solve_time.osqp);
solve_time.scs_avg = mean(solve_time.scs);
solve_time.newtonpipg_avg = mean(solve_time.newtonpipg);
%solve_time.quadprog_avg = mean(solve_time.quadprog);
solve_time.expipg_avg = mean(solve_time.expipg);
solve_time.ecos_avg = mean(solve_time.ecos);

solve_time.mosek_avg = mean(solve_time.mosek);
%solve_time.expipg_old_avg = mean(solve_time.expipg_old);

% constr_viol.osqp_avg = mean(constr_viol.osqp);
% constr_viol.scs_avg = mean(constr_viol.scs);
% constr_viol.newtonpipg_avg = mean(constr_viol.newtonpipg);
% constr_viol.quadprog_avg = mean(constr_viol.quadprog);
% constr_viol.expipg_avg = mean(constr_viol.expipg);

relativeaccuracy.osqp_avg = mean(relativeaccuracy.osqp);
relativeaccuracy.scs_avg = mean(relativeaccuracy.scs);
relativeaccuracy.newtonpipg_avg = mean(relativeaccuracy.newtonpipg);
%relativeaccuracy.quadprog_avg = mean(relativeaccuracy.quadprog);
relativeaccuracy.expipg_avg = mean(relativeaccuracy.expipg);
relativeaccuracy.ecos_avg = mean(relativeaccuracy.ecos);
relativeaccuracy.mosek_avg = mean(relativeaccuracy.mosek);
disp(relativeaccuracy.osqp_avg)
disp(relativeaccuracy.scs_avg)
solve_time