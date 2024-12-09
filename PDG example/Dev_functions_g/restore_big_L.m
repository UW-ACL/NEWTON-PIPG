function big_Y = restore_big_L(Y)
    n = size(Y, 1);
    T = size(Y, 4);
    big_Y = zeros(n*T);

    for t = 1:T
        % Diagonal block
        big_Y(((t-1)*n+1):t*n, ((t-1)*n+1):t*n) = Y(:,:,1,t);

        % Off-diagonal block
        if t<T
            % big_Y(((t-1)*n+1):t*n, (t*n+1):(t+1)*n) = Y(:,:,2,t+1)';
            big_Y((t*n+1):(t+1)*n, ((t-1)*n+1):t*n) = Y(:,:,2,t+1);
        end
    end
end