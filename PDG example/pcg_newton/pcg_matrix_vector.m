function out = pcg_matrix_vector(A,Q,proj_index_all, nx, nu, ne,Jk, deltaY,alpha_p, beta_p,x0)
%J_K'*H * SInv*J_D*H' j_k + (I + deltaY - jk)

temp = dev_g_Q_multi_vector(Q, dev_g_Q_multi_vector(Q, dev_HtZ_g(A,Jk.*x0, ne), proj_index_all, nx, nu, true) ...
    ,proj_index_all, nx, nu, false);
out = (alpha_p*beta_p)*Jk.*dev_HZ_g(A, temp, ne) + ((1 + deltaY)*ones(size(Jk)) - Jk) .* x0;
end

