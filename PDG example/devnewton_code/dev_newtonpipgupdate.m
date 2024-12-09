function [dzw, flag, L] = dev_newtonpipgupdate( A,B, At, Bt, P_diag,Id, R, nx, alpha, beta, rho)
% R = pipg(z,w) - (z,w)
% P must be a vector
% L: 
R = R/rho;
jd =  Id== 0; 
A_inv = ones(size(jd));
A_inv = 1./(A_inv - jd + jd .* P_diag.* alpha);%vector%%may be deleta diag(P)

Rx = R(1:nx);
Rw = R((nx+1): end);
Rwnew = Rw - 2 * beta* dev_HZ(A,B,Rx);
A_invRx = A_inv.*Rx;
right = (Rwnew + beta* dev_HZ(A,B ,A_invRx))/(alpha * beta);

left = dev_compute_HPHt(A,B, A_inv .* jd);


[L, flag]= dev_cholesky_special(left);%no purtbation

if flag ~= 0% used to test infeasibility
    disp('The newton step is terminated as we have a singular jacobian.')
    dzw = R;
    return
end

%lfull = restore_big_lower_triangular_matrix(L);%%check!
dw = dev_solve_LTv(L, dev_solve_Lv(L, right));
dx = A_invRx - alpha * A_inv .* jd.*dev_HtZ(At, Bt,dw);
dzw = [dx;dw];
