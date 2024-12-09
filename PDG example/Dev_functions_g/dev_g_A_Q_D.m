function A = dev_g_A_Q_D(A, Q, proj_index_all)
N = size(A, 3);
L = size(A, 2);
for i = 1:N
    A(:, :, i) = dev_A_Q_D_unit(A(:, :, i), Q(:, :, i), proj_index_all(:,:,i), L);
end
end