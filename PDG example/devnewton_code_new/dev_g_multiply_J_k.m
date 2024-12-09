function Y_out= dev_g_multiply_J_k(Y, J_k_polar, delta)
%Y is my result of HsinvHt. I want to compute J_k HsinveHtJ_k +(I-J_k) + delta I
[r_A,~, ~, T] = size(Y);
J_k_polar_n = reshape(J_k_polar,r_A, T);
Y_out = Y;

for i = 1:T
    [Y_out(:,:,1,i),ind] = processMatrix(Y(:,:,1,i), J_k_polar_n(:, i),delta);
    if i <T
        Y_out(:, ind, 2, i+1) = 0;
    end
    if i >=2
        Y_out(ind, :, 2, i) = 0;
    end
end

end

function [B,zeroIndices]  = processMatrix(A, v, delta)
B = A;
zeroIndices = find(v == 0);
B(zeroIndices, :) = 0;
B(:, zeroIndices) = 0;
B(sub2ind(size(B), zeroIndices, zeroIndices)) = 1;
% for idx = reshape(zeroIndices, 1, length(zeroIndices))
%     B(idx, idx) = 1;
% end
for idx = 1:size(A, 1)
    B(idx, idx) = B(idx, idx) + delta;
end
return
end

    