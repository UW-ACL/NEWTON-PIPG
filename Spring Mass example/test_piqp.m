
P = ppv.P;
c = ppv.q;
A = ppv.H;
b = ppv.g;
x_lb = ppv.zmin;
x_ub = ppv.zmax;
G = [];
h = [];
solver = piqp('sparse');
solver.update_settings('verbose', true, 'compute_timings', true);
solver.setup(P, c, A, b, G, h, x_lb, x_ub);
tic;
result = solver.solve();
toc;