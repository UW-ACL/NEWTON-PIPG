function [dzw, pcg_flag, iter, accuracy] = dev_pcg_update( A,B,L,max_iter, tol, At, Bt, P_diag,Id, R, nx, alpha, beta, rho)
%%PCG updates for the Newton Step.
%% Set up for variables

%% Define the problem
R = R/rho;
jd =  Id== 0; 
S_inv = ones(size(jd));
S_inv = 1./(S_inv - jd + jd .* P_diag.* alpha);%vector%%may be deleta diag(P)

Rx = R(1:nx);
Rw = R((nx+1): end);
Rwnew = Rw - 2 * beta* dev_HZ(A,B,Rx);
S_invRx = S_inv.*Rx;
right = (Rwnew + beta* dev_HZ(A,B ,S_invRx))/(alpha * beta);

%% PCG
S_invJd = S_inv .* jd;
[dw, pcg_flag,iter, accuracy] = pcg_dev_pipg(At,Bt, A, B, S_invJd, right, L, tol, max_iter);
dx = S_invRx - alpha * S_inv .* jd.*dev_HtZ(At, Bt,dw);
dzw = [dx;dw];
