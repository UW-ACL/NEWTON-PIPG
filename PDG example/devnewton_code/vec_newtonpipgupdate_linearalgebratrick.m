function [dzw_n, flag]= vec_newtonpipgupdate_linearalgebratrick(alpha, beta, rho, R,P_full, J_D, H, Ht, J_k_polar)
% The difference between this function and the vec Newton pipg is that we
% cancel delta x.
%Note that none of the following operations are optimal
flag = 0;%if flag = 0, the newtonstep matrix is invertable.
nz = size(J_D, 1);
R = -1*R;
R_z = R(1:nz)/rho;
R_w = R((nz+1): end)/rho;
R_w_new =  -2 * J_k_polar * beta* H* R_z + R_w;%dev
% J_T_new = [J_D * ( speye(size(P_full)) - alpha * P_full),  -1* alpha*J_D * Ht;...
%         J_k_polar * beta*H , J_k_polar];

S = speye(size(P_full)) - J_D * ( speye(size(P_full)) - alpha * P_full);
Sinv = S^-1;
Sigma_temp = J_k_polar * beta* alpha * H *Sinv* J_D*Ht;
Sigma = Sigma_temp* J_k_polar +eye(size(J_k_polar))*(1 +norm(R)*10^(-1)) - J_k_polar ;%Robustify the algorithm
[L,t_flag] = chol(Sigma, 'lower');
% if min(abs(diag(L)))<10^-6 || t_flag>0
% temp = abs(diag(Sigma));
% diag_min = min(temp(temp>10^-6));
% Sigma = Sigma + eye(size(Sigma))* norm(R);
% end

one_minus_jkdeltaw = (eye(size(J_k_polar)) - J_k_polar)*R_w_new;
right = R_w_new + J_k_polar*beta*H*Sinv*R_z -Sigma_temp*(eye(size(J_k_polar)) - J_k_polar)*one_minus_jkdeltaw;
deltaw = Sigma\right;
deltaz = Sinv*(R_z-alpha*J_D * Ht *deltaw);
dzw_n = [deltaz;deltaw];
