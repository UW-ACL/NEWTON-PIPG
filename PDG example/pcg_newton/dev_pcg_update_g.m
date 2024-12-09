function [dzw, pcg_flag, iter, accuracy] = dev_pcg_update_g(A,P,L, nx, nu, ne, proj_index_all, proj_coefficient_all, diag_J_k_p, temp_prime,R, alpha, beta, rho, delta_Y,tol, max_iter)
%% setup
nz = size(temp_prime,1);
R = -1*R;
R_z = R(1:nz)/rho;
R_w = R((nz+1): end)/rho;
R_w_new=  -2 * beta* diag_J_k_p.* dev_HZ_g(A, R_z, ne) + R_w; %check?
N = size(proj_index_all,3);


%% Factorization of J_D
[Q, Q_inv] = dev_S_inv_g(temp_prime,N, nx, nu, proj_index_all, proj_coefficient_all,P,alpha);%This Q*Q' =  Sinv * J_D; Q_inv * Q_inv' = S^-1;
Sinv_R_z = dev_g_Q_multi_vector(Q_inv, dev_g_Q_multi_vector(Q_inv, R_z, proj_index_all, nx, nu, true),proj_index_all, nx, nu, false);
%Step 5 righthand side
one_minus_jkdeltaw = R_w_new - diag_J_k_p.*R_w_new;
temp1 = (one_minus_jkdeltaw - diag_J_k_p.*one_minus_jkdeltaw);
temp2 = dev_g_Q_multi_vector(Q, dev_g_Q_multi_vector(Q, dev_HtZ_g(A,temp1, ne), proj_index_all, nx, nu, true) ...
    ,proj_index_all, nx, nu, false);
right = R_w_new + beta* diag_J_k_p.*dev_HZ_g(A,Sinv_R_z,ne) -alpha*beta*dev_HZ_g(A, temp2, ne); %check this 

[dw, pcg_flag,iter, accuracy] = pcg_dev_pipg_g(A,Q,proj_index_all, nx, nu, ne, right, L, tol,diag_J_k_p, delta_Y, max_iter,alpha, beta);
deltaz1 = Sinv_R_z-alpha* dev_g_Q_multi_vector(Q, dev_g_Q_multi_vector(Q, dev_HtZ_g(A,dw, ne), proj_index_all, nx, nu, true),proj_index_all, nx, nu, false);
dzw = [deltaz1;dw];