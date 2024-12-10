function X = dev_solve_LTv(L, v)
    T = size(L, 4);
    n = size(L, 1);

    X = zeros(n * T, 1);

    for t = T:-1:1
        idx = ((t-1)*n + 1) : t*n;
        if t == T
            X(idx) = upper_triangular_solve(L(:,:,1,t)', v(idx));
        else
            temp_v = v(idx) - L(:,:,2,t+1)' * X(idx+n);
            X(idx) = upper_triangular_solve(L(:,:,1,t)', temp_v);
        end
    end
end

