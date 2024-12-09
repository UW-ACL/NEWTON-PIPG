%with the same data in linearalgebratrick file
%I need temp_prime P in vector A, nx, nu,
%proj_index_all,proj_coefficient_all alpha and beta, J_k_polar, n_e

delta_Y = norm(R)*10^-2;
n_e = 7;
nx = 7;
nu = 4;
flag = 0;%if flag = 0, the newtonstep matrix is invertable.
nz = size(J_D, 1);
R = -1*R;
R_z = R(1:nz)/rho;
R_w = R((nz+1): end)/rho;
%%%%%%1
%R_w_new =  -2 * J_k_polar * beta* H* R_z + R_w;%dev
J_k_polar = diag(J_k_polar);%Replace this! We shouldn't have this in the assembled function.
R_w_new =  -2 * beta* J_k_polar.* dev_HZ_g(A, R_z, n_e) + R_w;
% require temp_prime
%step 1 compute Jacobian


nz = size(temp_prime);
P  = ones(326, 1);%reform P
[Q, Q_inv] = dev_S_inv_g(temp_prime,N, nx, nu, proj_index_all, proj_coefficient_all,P,alpha);%This Q*Q' =  Sinv * J_D; Q_inv * Q_inv' = S^-1;

%step 2 compute A
A_n = dev_g_A_Q_D(A, Q, proj_index_all);%H*Q_D

%step 3 compute 
Y = dev_H_sinv_Ht(A_n, Q, proj_index_all, nx);
Y_n = Y * (alpha* beta); % beta* alpha * H *Sinv* J_D*Ht;
Y_out = dev_g_multiply_J_k(Y_n, diag(J_k_polar), delta_Y);%matrix required for computation


%Step 4 compute
chol_y = dev_cholesky_special(Y_out);
%chol_all = restore_big_L(chol_y);
%step 5 find delta w
%%%%%2
one_minus_jkdeltaw1 = R_w_new - J_k_polar.*R_w_new;%reform this what is the size of J_k_polar..*%Done
%%%%%3

Sinv_R_z = dev_g_Q_multi_vector(Q_inv, dev_g_Q_multi_vector(Q_inv, R_z, proj_index_all, nx, nu, true),proj_index_all, nx, nu, false);
%right = R_w_new + beta* J_k_polar.*dev_HZ_g(A,Sinv_R_z,n_e) -Sigma_temp*(eye(size(J_k_polar)) - J_k_polar)*one_minus_jkdeltaw;
right1 = R_w_new + beta* J_k_polar.*dev_HZ_g(A,Sinv_R_z,n_e) -dev_Y_multi_vector(Y_n,(one_minus_jkdeltaw - J_k_polar.*one_minus_jkdeltaw)); %J_k_polar * Y_n * v * 
%compute Sigma_temp* vector okay
%compute J_k_polar*beta*H*Sinv*R_z
%%%%%4
dw = dev_solve_LTv(chol_y , dev_solve_Lv(chol_y , right1));
%%%%%5
%deltaz = Sinv*(R_z-alpha*J_D * Ht *dw);%Sinv rz - alpha*Q * Q'*Ht*deltaw
deltaz1 = Sinv_R_z-alpha* dev_g_Q_multi_vector(Q, dev_g_Q_multi_vector(Q, dev_HtZ_g(A,dw, n_e), proj_index_all, nx, nu, true),proj_index_all, nx, nu, false);
dzw = [deltaz1;dw];%dw. 有问题

%need 
%sigma_temp = J_k_polar*beta* alpha * H *Sinv* J_D*Ht ;simgatemp * vector
%Sinv*R_z
%Q* v.
