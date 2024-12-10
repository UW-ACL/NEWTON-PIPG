function sol = solve_devnewtonpipg(pp, ppv, type)
sol = struct;
sol.name = 'netwonpipg';

A = pp.A; B = pp.B; At = A'; Bt= B';
P = diag(ppv.P); z1 = ppv.zn;q = ppv.q;
g = ppv.g;z_min = ppv.zmin; z_max = ppv.zmax;
lam = ppv.max_eig_P;w =ppv.wn;
%we should change the definition of pp instead.
rho = pp.expipg_rho; omg = pp.expipg_omg;maxit = pp.expipg_max_iter;
linesearch_step = pp.newtonpipglinesearch_step; linsearch_amount = pp.newtonpipglinsearch_amount;
newtonratio = pp.newtonpipgnewtonratio; newtonactive = pp.newtonpipgnewtonactive;%ratio for activating newton step
%wait for 10 pipg before activating newton
if type == "matlab"
out = dev_newtonzpipg_separatedinput(A, B, At, Bt, P, z1, w, q, g, z_min, z_max, lam, rho, omg, maxit,newtonratio, newtonactive);
else
func_name_const = "dev_newtonpipg"+"_n" + num2str(pp.n) + "_m" + num2str(pp.m) + "_N" + num2str(pp.N) + "_mex";
out = feval(func_name_const,A, B, At, Bt, P, z1, w, q, g, z_min, z_max, lam, rho, omg, maxit,newtonratio, newtonactive);
end



sol.solve_time =out.solve_time;
sol.xi = out.xi ;
sol.eta = out.eta;
sol.status = out.converge;
[sol.x,sol.u,sol.w] = separation_new(out.xi, out.eta, pp.n, pp.m, pp.N);
sol.obj_val = 0.5 * out.xi'* ppv.P*out.xi;
sol.ntime = out.ntime;
% disp(sol.ntime)
% disp(out.k)
% disp(sol.solve_time)