function X = upper_triangular_solve(U, B)
    n = size(U, 1);
    m = size(B, 2);
    X = zeros(n, m);
    
    for k = 1:m
        for i = n:-1:1
            X(i, k) = B(i, k);
            for j = (i+1):n
                X(i, k) = X(i, k) - U(i, j) * X(j, k);
            end
            X(i, k) = X(i, k) / U(i, i);
        end
    end
end