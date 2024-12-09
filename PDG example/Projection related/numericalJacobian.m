function J = numericalJacobian(f, x)
    % f is the function handle for which the Jacobian is to be calculated
    % x is the input vector at which point the Jacobian is approximated
    n = length(x); % Dimension of the input vector
    fx = f(x); % Compute the value of the function at x
    m = length(fx); % Dimension of the output vector
    h = 1e-10; % A small step size for differentiation
    J = zeros(m, n); % Initialize the Jacobian matrix
    
    for i = 1:n
        xPlusH = x;
        xPlusH(i) = xPlusH(i) + h; % Add a small step h to the i-th dimension
        fPlusH = f(xPlusH); % Compute the function value at x + h
        J(:, i) = (fPlusH - fx) / h; % Calculate the partial derivative for the i-th column
    end
end
