function  [J, Q, lambda] = jacob_soc(v, epsilon)

    z1 = v(end);
    z2 = v(1:(end-1));
    if epsilon * z1 >= norm(z2)
        J = eye(length(v));
        Q = J;
        lambda = ones(length(v), 1);
        return
    elseif z1 <= -epsilon * norm(z2)
        J = zeros(length(v), length(v));
        Q = eye(length(v));
        lambda = zeros(length(v), 1);
        return
    else
        J = constructMatrix(z1, z2, epsilon);
        [Q, lambda_m] = eig(J); %J = QlambdaQ'
        lambda = diag(lambda_m);
    end


end




function resultMatrix = constructMatrix(z1, z2, epsilon)
    % Ensure z2 is a column vector
    if isrow(z2)
        z2 = z2';
    end
    
    % Compute the norm of z2
    normZ2 = norm(z2);
    
    % Scalar part
    scalarPart = 1 / epsilon;
    
    % z2 normalized
    z2Normalized = z2 / normZ2;
    
    % Identity matrix of size z2
    I = eye(length(z2));
    
    % Compute the right-bottom block of the matrix
    rightBottomBlock = epsilon * I + (z1 / normZ2) * (I - (z2 * z2') / (normZ2^2));
    
    % Assemble the full matrix
    %fullMatrix = [scalarPart, z2Normalized'; z2Normalized, rightBottomBlock];
    fullMatrix = [rightBottomBlock, z2Normalized; z2Normalized', scalarPart];
    % Multiply by the scalar epsilon / (epsilon^2 + 1)
    resultMatrix = (epsilon / (epsilon^2 + 1)) * fullMatrix;
end