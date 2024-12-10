x_new = sol3.x;
u_new = sol3.u;
[x,u,w] = seperation(solnewtonpipg.xi,solnewtonpipg.eta, ppv_newton);
figure(1)
x_axis = linspace(0.1, 1, size(x_new, 2));
plot(x_axis', x_new')
title("scs x")
figure(3)
u_axis = linspace(0.1, 1, size(u_new, 2));
plot(u_axis', u_new')
title("scs U")

figure(2)
x_axis = linspace(0.1, 1, size(x, 2));
plot(x_axis, x')

title("newtonwpipg x")

figure(4)
u_axis = linspace(0.1, 1, size(u, 2));
plot(u_axis', u')
title("newtonpipg U")
