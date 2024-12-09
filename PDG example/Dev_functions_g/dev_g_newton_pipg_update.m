function dzw = dev_g_newton_pipg_update(A,P, nx, nu, ne, proj_index_all, proj_coefficient_all, diag_J_k_p, temp_prime,R, alpha, beta, rho, delta_Y)
%Function for Newton pipg update.
%A is the matrix defining the matrix H. For further definition, check
%data_tranplant file. P is the quadratic cost
%nx = #state, nu = #control, ne = #equality
%proj_* are pojrection coefficients. diag_J_k_p, R and temp_prime comes from
%pipgupdate.alpha, beta are pipg coeffcients. delta_Y is used to stablelize
%the algo. 
%P, diag_J_k_p must be vector

%% setup
nz = size(temp_prime,1);
assert(nz<=360);
R = -1*R;
R_z = R(1:nz)/rho;
R_w = R((nz+1): end)/rho;
R_w_new=  -2 * beta* diag_J_k_p.* dev_HZ_g(A, R_z, ne) + R_w; %check?
N = size(proj_index_all,3);
assert(N<=32);

%% Factorization of J_D
[Q, Q_inv] = dev_S_inv_g(temp_prime,N, nx, nu, proj_index_all, proj_coefficient_all,P,alpha);%This Q*Q' =  Sinv * J_D; Q_inv * Q_inv' = S^-1;

%step 2 update A
A_n = dev_g_A_Q_D(A, Q, proj_index_all);%H*Q_D

%step 3 compute H_Sinv_JD_Ht
Y = dev_H_sinv_Ht(A_n, Q, proj_index_all, nx);
Y_n = Y * (alpha* beta); % beta* alpha * H *Sinv* J_D*Ht;
Y_out = dev_g_multiply_J_k(Y_n, diag_J_k_p, delta_Y); %final matrix

%Step 4 compute
chol_y = dev_cholesky_special(Y_out);

%Step 5 righthand side
one_minus_jkdeltaw = R_w_new - diag_J_k_p.*R_w_new;%reform this what is the size of diag_J_k_p..*%check
%%%%%3

Sinv_R_z = dev_g_Q_multi_vector(Q_inv, dev_g_Q_multi_vector(Q_inv, R_z, proj_index_all, nx, nu, true),proj_index_all, nx, nu, false);
right = R_w_new + beta* diag_J_k_p.*dev_HZ_g(A,Sinv_R_z,ne) -dev_Y_multi_vector(Y_n,(one_minus_jkdeltaw - diag_J_k_p.*one_minus_jkdeltaw)); 

%solve dw
dw = dev_solve_LTv(chol_y , dev_solve_Lv(chol_y , right));
deltaz1 = Sinv_R_z-alpha* dev_g_Q_multi_vector(Q, dev_g_Q_multi_vector(Q, dev_HtZ_g(A,dw, ne), proj_index_all, nx, nu, true),proj_index_all, nx, nu, false);
dzw = [deltaz1;dw];
