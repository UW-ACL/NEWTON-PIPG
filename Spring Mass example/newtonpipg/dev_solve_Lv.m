function X = dev_solve_Lv(L, v)
    T = size(L, 4);
    n = size(L, 1);

    X = zeros(n * T, 1);

    for t = 1:T
        idx = (t-1)*n + 1 : t*n;
        if t == 1
            X(idx) = small_lower_triangular_solve(L(:,:,1,t), v(idx));
        else
            temp_v = v(idx) - L(:,:,2,t) * X(idx-n);
            X(idx) = small_lower_triangular_solve(L(:,:,1,t), temp_v);
        end
    end
end