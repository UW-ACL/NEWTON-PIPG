function A = diag_sum(A,P)
    % Get the size of the matrices

    [rows_A, cols_A] = size(A);


    % Initialize the resulting matrix C

        % Calculate the product of the diagonal matrix P and matrix A
        for i = 1:rows_A
            
               A(i,i ) = P(i) + A(i, i);
           
        end
 
end