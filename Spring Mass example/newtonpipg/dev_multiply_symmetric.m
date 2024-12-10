function C = dev_multiply_symmetric(A, B)
    % Get the size of the matrices
    n = size(A, 1);
    m = size(A, 2);
    % Initialize the resulting matrix C
    C = zeros(n);

    % Calculate the product A * B, leveraging its symmetric property
    for i = 1:n
        for j = 1:i
            for k = 1:m
                C(i, j) = C(i, j) + A(i, k) * B(k, j);
            end
            % Use the computed value for the symmetric element
            C(j, i) = C(i, j);
        end
    end
end