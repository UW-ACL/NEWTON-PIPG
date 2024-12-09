function [Q_out, Q_inv] = dev_jacob_ball(v,R,P, alpha)
if norm(v) <=R
    Q = diag(real(sqrt(1./(alpha * P))));
    Q_out = Q;
    Q_inv = Q;
else
    rv = norm(v);
    J = 1/rv * (eye(length(v))) - v * v'/rv^3;
    J = J*R;%maybe we can accelerate this
    [Q, lambda_m] = eig(J); %J = QlambdaQ'
    lambda = diag(lambda_m);
    lambda_between = sqrt(abs(lambda./(1-lambda + alpha * lambda.*P)));
    lambda_inv = sqrt(abs(1./(1-lambda + alpha * lambda.*P)));
    Q_out = real(Q.*lambda_between');%Q.* v'
    Q_inv = real(Q.* lambda_inv');%check the shape of lmbda_inv
end


