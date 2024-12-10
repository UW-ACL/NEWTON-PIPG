function [xi_n, eta_n, Id, Ikp, R] = dev_onestep_xpipg( xi, eta, alpha, beta, rho, P_diag, A, B,At, Bt, q, g, zmin, zmax)
% This function calculates an one step PIPG
% rho = 1 makes it the conventional parameter.
%%todo
%change P*xi
z = max( zmin, min( zmax, xi - alpha* ( P_diag.*xi + dev_HtZ(At, Bt, eta) + q))); % use dev_HtZ function here
w = eta + beta*(dev_HZ(A, B, 2*z - xi) - g); % use dev_HZ function here
Ikp = 0; % there is no constraint on the dual variable
Id = (z==zmin) + (z == zmax); % Maybe non-necessary in computing the activated set.
xi_n = (1 - rho) * xi + rho * z;
eta_n = ( 1 - rho) * eta + rho * w;
R = -[xi_n; eta_n] + [xi; eta];
