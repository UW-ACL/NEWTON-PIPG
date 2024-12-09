function [x, flag,iter, accuracy] = pcg_dev_pipg(At,Bt, A, B, S_invJd, b, L, tol, max_iter)
% Preconditioned Conjugate Gradient Descent algorithm with maximum iterations
%  A - symmetric positive-definite matrix
%         b - right hand side vector
%         L - preconditioner matrix
%         tol - tolerance for the stopping criterion (optional, defaults to 1e-3)
%         max_iter - maximum number of iterations (optional, defaults to inf)

%% Initialization
x0 = zeros(size(b));

% Initialization
r = b - pcg_matrix_vector(A, B, At, Bt, S_invJd, x0);
z = pcg_solve_precondition(L,r);    % Solve LLTz = r
p = z;
x = x0;
k = 0;
iter = k+1;
% Tolerance for the stopping criteria
nb =  norm(b);
accuracy = norm(r)/nb;
flag = 0;
while (norm(r)/nb > tol) && (k < max_iter)
    Ap = pcg_matrix_vector(A, B, At, Bt, S_invJd, p);
    alpha = (r'*z) / (p'*Ap);
    x = x + alpha*p;
    r_new = r - alpha*Ap;
    nr_new = norm(r_new);
    % Check for convergence
    if nr_new/nb < tol
        iter = k+1;
        accuracy = nr_new/nb;
        flag = 1;
        break;
    end
    if k+1 < max_iter
        z_new =pcg_solve_precondition(L, r_new); % Solve Mz = r_new
        beta = (r_new'*z_new) / (r'*z);
        p = z_new + beta*p;
        r = r_new;
        z = z_new;
    end
    k = k + 1;
    iter = k;
    accuracy = nr_new/nb;
end



end