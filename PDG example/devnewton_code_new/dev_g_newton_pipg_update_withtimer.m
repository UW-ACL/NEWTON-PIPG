function dzw = dev_g_newton_pipg_update_withtimer(A,P, nx, nu, ne, proj_index_all, proj_coefficient_all, diag_J_k_p, temp_prime,R, alpha, beta, rho, delta_Y)
%Function for Newton pipg update.
%A is the matrix defining the matrix H. For further definition, check
%data_tranplant file. P is the quadratic cost
%nx = #state, nu = #control, ne = #equality
%proj_* are pojrection coefficients. diag_J_k_p, R and temp_prime comes from
%pipgupdate.alpha, beta are pipg coeffcients. delta_Y is used to stablelize
%the algo. 
%P, diag_J_k_p must be vector

%% setup
tic;
nz = size(temp_prime,1);
R = -1*R;
R_z = R(1:nz)/rho;
R_w = R((nz+1): end)/rho;
R_w_new=  -2 * beta* diag_J_k_p.* dev_HZ_g(A, R_z, ne) + R_w; %check?
N = size(proj_index_all,3);
fprintf("newton_setup takes %f ms  ", toc*1000);
%% Factorization of J_D
tic;
[Q, Q_inv] = dev_S_inv_g(temp_prime,N, nx, nu, proj_index_all, proj_coefficient_all,P,alpha);%This Q*Q' =  Sinv * J_D; Q_inv * Q_inv' = S^-1;
fprintf("dev_S_inv_g takes %f ms  ", toc*1000);%0.174
%step 2 update A
tic;
A_n = dev_g_A_Q_D(A, Q, proj_index_all);%H*Q_D
fprintf("dev_g_A_Q_Dtakes %f ms\n", toc*1000);
%step 3 compute H_Sinv_JD_Ht%0.006
tic
Y = dev_H_sinv_Ht(A_n, Q, proj_index_all, nx);
fprintf("step 3 1 %f ms  ", toc*1000);%0.06
tic;
Y_n = Y * (alpha* beta); % beta* alpha * H *Sinv* J_D*Ht;
fprintf("step 3 2 %f ms  ", toc*1000);
tic;
Y_out = dev_g_multiply_J_k(Y_n, diag_J_k_p, delta_Y); %final matrix
fprintf("step 3 3 %f ms  \n", toc*1000);
%Step 4 compute %0.06
tic;
chol_y = dev_cholesky_special(Y_out);
fprintf("step 4 %f ms  ", toc*1000);%0.058
%Step 5 righthand side
tic;
one_minus_jkdeltaw = R_w_new - diag_J_k_p.*R_w_new;%reform this what is the size of diag_J_k_p..*%check
fprintf("step 5 %f ms  ", toc*1000);
%%%%%3
tic;
Sinv_R_z = dev_g_Q_multi_vector(Q_inv, dev_g_Q_multi_vector(Q_inv, R_z, proj_index_all, nx, nu, true),proj_index_all, nx, nu, false);
fprintf("step 6 %f ms  ", toc*1000);%0.07
tic;
right = R_w_new + beta* diag_J_k_p.*dev_HZ_g(A,Sinv_R_z,ne) -dev_Y_multi_vector(Y_n,(one_minus_jkdeltaw - diag_J_k_p.*one_minus_jkdeltaw)); 
fprintf("step 7 %f ms  ", toc*1000);
%solve dw
tic;
dw = dev_solve_LTv(chol_y , dev_solve_Lv(chol_y , right));
fprintf("step 8 %f ms  ", toc*1000);
tic;
deltaz1 = Sinv_R_z-alpha* dev_g_Q_multi_vector(Q, dev_g_Q_multi_vector(Q, dev_HtZ_g(A,dw, ne), proj_index_all, nx, nu, true),proj_index_all, nx, nu, false);
dzw = [deltaz1;dw];
fprintf("step 9 %f ms  \n", toc*1000); %0.07 
