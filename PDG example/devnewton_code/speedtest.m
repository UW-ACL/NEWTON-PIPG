% Set up test data
clear
load debug.mat
A = ppv.A;
B = ppv.B;
w = ppv.w;
minusA = -A;
minusB = -B;

N = 31;
U = z1(1: 12*32);
V = z1((12*32+1):end);
U = reshape(U, 12, []);
V = reshape(V, 6,[]);
% 
% time = timeit(@() dev_HZ_v3_mex(A, B, U, V));
% disp(['Average run time is: ', num2str(time*1000), ' ms']);% 3 times faster% mex is the same
At = A';
Bt = B';
P_diag = diag(P);

time = timeit(@() dev_HtZ_mex(At, Bt, w));% this is the best form of Htz

disp(['Average run time is: ', num2str(time*1000), ' ms']);


time = timeit(@()  dev_compute_HPHt_mex(minusA, minusB, P_diag));
disp(['Average run time for dev_compute_HPHt is: ', num2str(time*1000), ' ms']);

time = timeit(@() dev_HZ_mex(A, B, z1));
disp(['Average run time for Hzmex is: ', num2str(time*1000), ' ms']);
Y = dev_compute_HPHt_mex(minusA, minusB, P_diag);

time = timeit(@() dev_cholesky_special_mex(Y));
disp(['Average run time fordev_cholesky_special is: ', num2str(time*1000), ' ms']);
L = dev_cholesky_special_mex(Y);

time = timeit(@() dev_newtonpipgupdate_mex( A,B, At, Bt, P_diag,id, R, nx, alpha, beta, rho));
disp(['Average run time newtonpipgupdate  is: ', num2str(time*1000), ' ms']);
L = dev_cholesky_special_mex(Y);