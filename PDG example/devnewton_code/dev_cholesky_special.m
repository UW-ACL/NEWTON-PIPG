function [L, flag] = dev_cholesky_special(Y)
% has the sameshape as the aout put of dev_compute_HPHT
% the Y matrix is a 4 dimensional matrix. t is for the t th row YTT and
% Yt(t-1)
% the third index is for the location. 1 for diag and 2 for the subdiag
% below the diag. 
[~, ~, ~, T] = size(Y);
n = size(Y(:,:,1,1), 1);
flag = 0;
L = zeros(n, n, 2, T);

% Compute L_11
[L(:,:,1,1), flag] = chol(Y(:,:,1,1), 'lower');


% Compute remaining L's
for i = 2:T
    % Compute L_{i+1,i} if i < T

    if any(diag(L(:,:,1,i-1)) == 0)
        flag = 1;
        return;
    end
    % Replace the division by the for loop implementation
    L(:,:,2,i)= transpose(small_lower_triangular_solve(L(:,:,1,i-1), transpose(Y(:,:,2,i))));

    % Compute L_{i,i}
    [temp, flag] = chol(Y(:,:,1,i) - dev_multiply_symmetric(L(:,:,2,i), L(:,:,2,i)') , 'lower');
    if flag ~= 0
    return
    end
    L(:,:,1,i) = temp;
end
    


end
