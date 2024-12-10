function sol = solve_devxpipg(pp, ppv, type)
sol = struct;
sol.name = 'devxpipg';


A = pp.A; B = pp.B; At = A'; Bt= B';
P = full(diag(ppv.P)); z1 = ppv.zn;q = full(ppv.q);
g = full(ppv.g);z_min = ppv.zmin; z_max = ppv.zmax;
lam = ppv.max_eig_P;lw =size(ppv.wn);
%we should change the definition of pp instead.
rho = pp.expipg_rho; omg = pp.expipg_omg;maxit = pp.expipg_max_iter;
if type == "matlab"
out = dev_pipg_separateinput(A, B, At, Bt, P, z1, lw, q, g, z_min, z_max, lam, rho, omg, maxit);
else
func_name_const = "dev_xpipg"+"_n" + num2str(pp.n) + "_m" + num2str(pp.m) + "_N" + num2str(pp.N) + "_mex";
out = feval(func_name_const,A, B, At, Bt, P, z1, lw, q, g, z_min, z_max, lam, rho, omg, maxit);
end




sol.solve_time =out.solve_time;
sol.xi = out.xi ;
sol.eta = out.eta;
sol.iter4 = out.iter4;
sol.iter8 = out.iter8;
[sol.x,sol.u,sol.w] = separation_new(out.xi, out.eta, pp.n, pp.m, pp.N);
sol.obj_val = 0.5 * out.xi'* ppv.P*out.xi;
sol.status = out.converge;