function C = diag_multiply(P, A, axis)
    % Get the size of the matrices
    n = length(P);
    [rows_A, cols_A] = size(A);

    % Set default value for axis if missing
    if nargin < 3 || isempty(axis)
        axis = 1;
    end

    % Initialize the resulting matrix C
    C = zeros(rows_A, cols_A);

    % Calculate the product based on the value of axis
    if axis == 1
        % Check if P and A are compatible for multiplication
        if n ~= rows_A
            error('The diagonal matrix and A must have compatible dimensions for multiplication.');
        end
        
        % Calculate the product of the diagonal matrix P and matrix A
        for i = 1:rows_A
            for j = 1:cols_A
                C(i, j) = P(i) * A(i, j);
            end
        end
    elseif axis == 2
        % Check if P and A are compatible for multiplication
        if n ~= cols_A
            error('The diagonal matrix and A must have compatible dimensions for multiplication.');
        end
        
        % Calculate the product of the matrix A and the diagonal matrix P
        for i = 1:rows_A
            for j = 1:cols_A
                C(i, j) = A(i, j) * P(j);
            end
        end
    else
        error('Invalid value for axis. It must be either 1 or 2.');
    end
end