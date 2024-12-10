function sol = solve_piqp(pp,ppv)
P = ppv.P;
c = ppv.q;
A = ppv.H;
b = ppv.g;
x_lb = sparse(ppv.xi_min);
x_ub = sparse(ppv.xi_max);
G = [];
h = [];
solver = piqp('sparse');
solver.update_settings('verbose', false, 'compute_timings', true);
solver.setup(P, c, A, b, G, h, x_lb, x_ub);
result = solver.solve();
sol.u = reshape(result.x(1:pp.m*pp.N),[pp.m,pp.N]);
sol.x = reshape(result.x(pp.m*pp.N+1:end),[pp.n,pp.N+1]);   
sol.solve_time = result.info.run_time*1000;