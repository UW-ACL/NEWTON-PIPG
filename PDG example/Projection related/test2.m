yalmip('clear')
seed = 10;
%rng(seed);
R =1;
x0 = rand(3,1)*2;
x0 = [0,0,1]';
x = sdpvar(3,1);
objective = (x'-x0') * (x-x0);
Constraints = cone(x(1:2),R*x(3));
options = sdpsettings('solver', 'mosek', 'verbose', 1);
options.mosek.MSK_DPAR_INTPNT_TOL_REL_GAP = 1e-14; 
options.mosek.MSK_DPAR_INTPNT_TOL_INFEAS = 1e-14;
options.mosek.MSK_DPAR_INTPNT_TOL_PFEAS =  1e-14;
optimize(Constraints, objective, options);
x_test = proj_soc(x0, R);
norm(value(x) - x_test)
norm(x0 - value(x))
