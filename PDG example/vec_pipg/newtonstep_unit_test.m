% This is used to test the Newton step linear algebra. 
%(I - JT)(delta_z, delta_w) = -R
R_rand = rand(size(R));
J_T = [J_D * ( speye(size(P)) - alpha * P), J_D * -1* alpha* Ht;...
        -J_k_polar * beta*H + 2 * J_k_polar* beta * H * J_D * ( speye(size(P)) - alpha * P), J_k_polar + 2 * J_k_polar * beta* H* J_D * -1* alpha* Ht];

delta_zw = (speye(size(J_T))- J_T)\(-1*R_rand);

J_T_new = [J_D * ( speye(size(P)) - alpha * P), J_D * -1* alpha* Ht;...
        J_k_polar * beta*H , J_k_polar];

n_z = size(J_D, 1);
n_w = size(J_k_polar, 1);

R_z = R_rand(1:nz);
R_w = R_rand((nz+1): end);
R_new = [R_z; -2 * J_k_polar * beta* H* R_z + R_w];

delta_zw_new = (speye(size(J_T_new))- J_T_new)\(-1*R_new);
disp(norm(delta_zw- delta_zw_new));