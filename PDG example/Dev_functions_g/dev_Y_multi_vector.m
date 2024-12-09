function out = dev_Y_multi_vector(Y, v)
out = zeros(size(v));
[r_a, ~,~, T] = size(Y);
for i = 1:T
    if i == 1
        out(1:r_a) = Y(:, :, 1,1) * v(1:r_a) +Y(:, :, 2,2)' * v((r_a +1):(2*r_a))  ;
        continue
    end
    if i == T
        temp = (i-1) * r_a;
        out((temp+1) : (temp + r_a)) =Y(:, :, 1,i) * v((temp+1) : (temp + r_a))+ Y(:, :, 2,i) * v((temp-r_a+1) : (temp));
        continue
    end
    temp = (i-1) * r_a;
    out((temp+1) : (temp + r_a)) = Y(:, :, 1,i) * v((temp+1) : (temp + r_a))+ ...
        Y(:, :, 2,i) * v((temp-r_a+1) : (temp)) +Y(:, :, 2,i+1)' * v((temp+r_a+1) : (temp+2*r_a)) ;
end
end
        