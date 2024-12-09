function [J, Q, lambda] = jacob_ball(v,R)
if norm(v) <=R
    J = eye(length(v));
    Q = J;
    lambda = ones(length(v), 1);    
else
    rv = norm(v);
    J = 1/rv * (eye(length(v))) - v * v'/rv^3;
    J = J*R;%maybe we can accelerate this
    [Q, lambda_m] = eig(J); %J = QlambdaQ'
    lambda = diag(lambda_m);
end


