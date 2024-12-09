% %% test dev_Hz
% % nH_c = size(H_new, 2);
% % z = rand(nH_c, 1);
% % out1 = H_new* z;
% % n_e = 7;
% % out2 = dev_HZ_g(A,z,n_e);
% % disp(norm(out1-out2))
% 
% %% test dev_Htz_g
% % nH_r = size(H_new, 1);
% % z = rand(nH_r,1);
% % out1 = H_new' * z;
% % out2 = dev_HtZ_g(A, z, 7);
% % temp = out2 - out1; 
% % disp(norm(out2 - out1)) %Done
% 
% %% test Jacobian
% clear;
% problem_data;
% derived_data;
% data_transplant;
% %load("dev_jacob_D_test.mat");
% load('test_p1.mat');
% alpha = 0.0331;
% %temp_prime = rand(size(temp_prime))*100;
% [J_D, J_affine_D] = jacob_D_vec(temp_prime,N, nx, nu, proj_index_all, proj_coefficient_all);
% S = speye(size(P)) - J_D * ( speye(size(P)) - alpha * P);
% Sinv = S^-1;
% Sinv_n = Sinv * J_D;
% nz = size(temp_prime);
% P_n  = ones(326, 1);
% Q = dev_S_inv_g(temp_prime,N, nx, nu, proj_index_all, proj_coefficient_all,P_n,alpha);
% [m, n, p] = size(Q);
% Q_D = zeros(m*p, n*p);
% for k = 1:p
%     row_start = (k-1) * m + 1;
%     col_start = (k-1) * n + 1;
%     Q_D(row_start:(row_start+m-1), col_start:(col_start+n-1)) = Q(:, :, k);
% end
% W = Q_D*Q_D';
% temp = W(1:326, 1:326) - Sinv_n;
% disp(max(max(temp)));%done
% %% test Q v
% Q_full= Q_D(1:326, 1:326);%N = 30;
% v = rand(326, 1);
% temp1 = Q_full' * v;
% nx = 7;
% nu = 4;
% temp3 = dev_g_Q_multi_vector(Q, v, proj_index_all, nx,nu, true);
% norm(temp1- temp3)
% 
% 
% 
% 
% %%Test H * Q_D
% L = 7;
% temp1 = A(:, 1:L, 2)*Q(1:L, 1:L, 2);
% temp2 = dev_A_Q_D_unit(A(:, : ,2), Q(:, :,2),proj_index_all(:, :, 2) , L);%Done
% temp3 = H * Q_D(1:326, 1:326);
% A_n = dev_g_A_Q_D(A, Q, proj_index_all);
% %Compare A_n with temp3
% for i = 1: 29
%     A_temp = temp3((10*(i-1)+1): (10*(i-1) + 10),(11*(i-1) + 1): (11*(i-1) + 11));
%    disp(norm(A_n(:,:, i) - A_temp))%check. 
% end
% %% Test Yv;
% Y_full = restore_big_symmetric_matrix(Y);
% v = rand(size(Y_full,1),1);
% temp1 = Y_full * v;
% temp2 = dev_Y_multi_vector(Y,v);
% norm(temp1-temp2)
% 
% %% Q_QD
% Q_t = Q(:, :, 2);
% L = 7;
% temp1 = dev_Q_Q_D_unit(Q_t, proj_index_all(:, :,2), L);
% temp2 = Q_t(1:L, 1:L) * Q_t(1:L, 1:L)';
% norm(temp1- temp2)%done
% 
% Y = eye(10);
% dev_Y_Q_Q_D_sum_unit(Y,Q_t, proj_index_all(:, :,2), L)-Y
% 
% 
% %% H_sinv_Ht
% nx = 7;
% Q = dev_S_inv_g(temp_prime,N, nx, nu, proj_index_all, proj_coefficient_all,P_n,alpha);
% A_n = dev_g_A_Q_D(A, Q, proj_index_all);
% Y = dev_H_sinv_Ht(A_n, Q, proj_index_all, nx);
% temp = H *Sinv* J_D*Ht;
% Y_out = dev_g_multiply_J_k(Y, diag(J_k_polar), 0);
% 
% out_1 = restore_big_symmetric_matrix(Y_out);
% temp2 =  J_k_polar * H *Sinv* J_D*Ht*J_k_polar + eye(size(J_k_polar, 1)) - J_k_polar;
% 
%  temp3 = chol(temp2, 'lower');
%  chol_y = dev_cholesky_special(Y_out);
%  chol_full = restore_big_L(chol_y);
%  norm(temp3 - chol_full)
% 
% 
%  %% newton update test
% delta_Y = norm(R)*10^-2;
% nx = 7;
% n_e = 7;
% nu = 4; 
% P  = ones(326, 1);
% P_f = diag(P);
% diag_J_k_p  = diag(J_k_polar);
% dzw = dev_g_newton_pipg_update(A,P, nx, nu, ne, proj_index_all, proj_coefficient_all, diag_J_k_p, temp_prime,R, alpha, beta,rho, delta_Y);
% [dzw_n, flag]= vec_newtonpipgupdate_linearalgebratrick(alpha, beta, rho, R,P_f, J_D, H, Ht, J_k_polar);
% 
% %%
% ne = nx;
% vt = rand(290,1);
% delta_Y = 0.1;
% t1 = (J_k_polar*temp*J_k_polar + eye(size(J_k_polar))* (1 + delta_Y) - J_k_polar)  *vt;
% t2 = pcg_matrix_vector(A, Q, proj_index_all, nx, nu, ne,  diag(J_k_polar), delta_Y, vt);
% norm(t1 -t2)

clear;
load('pcg_test.mat')
[dzw1, pcg_flag, iter, accuracy] = dev_pcg_update (A,P,L, nx, nu, ne, proj_index_all, proj_coefficient_all, J_k_polar, temp_prime,R, alpha, beta, rho, pertub * nR, pcg_tol, pcg_max_iter);
[dzw1, L1] = dev_g_PCG_newton_pipg_update(A,P, nx, nu, ne, proj_index_all, proj_coefficient_all, J_k_polar, temp_prime, R, alpha, beta, rho, pertub * nR);%maybe we need to robustify this and have a flag  
[dzw2, pcg_flag, iter2, accuracy2] = dev_pcg_update (A,P,L1, nx, nu, ne, proj_index_all, proj_coefficient_all, J_k_polar, temp_prime,R, alpha, beta, rho, pertub * nR, pcg_tol, pcg_max_iter);
disp(iter2)