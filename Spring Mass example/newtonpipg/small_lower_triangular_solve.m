function X = small_lower_triangular_solve(L, B)
    n = size(L, 1);
    m = size(B, 2);
    X = zeros(n, m);
    
    for k = 1:m
        for i = 1:n
            X(i, k) = B(i, k);
            for j = 1:i-1
                X(i, k) = X(i, k) - L(i, j) * X(j, k);
            end
            X(i, k) = X(i, k) / L(i, i);
        end
    end
end