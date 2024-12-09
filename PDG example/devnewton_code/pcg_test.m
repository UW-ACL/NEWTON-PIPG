%PCG test
%load data
clear;
load("test_2.mat");
[dzw, flag, L]  = dev_newtonpipgupdate(A, B,At, Bt, P, idn, -R, nz, alpha, beta, rho);
pcg_max_iter = 10;
pcg_tol = 0.1;
[dzw_pcg, pcg_flag, iter, accuracy] = dev_pcg_update( A,B,L,pcg_max_iter, pcg_tol, At, Bt, P, idn, -R, nz, alpha, beta, rho);
disp(norm(dzw_pcg-dzw));
load("test_5.mat")
[dzw_pcg, pcg_flag, iter, accuracy] = dev_pcg_update( A,B,L,pcg_max_iter, pcg_tol, At, Bt, P, idn, -R, nz, alpha, beta, rho);
[dzw, flag, L]  = dev_newtonpipgupdate(A, B,At, Bt, P, idn, -R, nz, alpha, beta, rho);
disp(norm(dzw_pcg-dzw)/norm(dzw_pcg));
disp(iter)
disp(accuracy);
