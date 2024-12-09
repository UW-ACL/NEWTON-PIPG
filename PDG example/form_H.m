function H = form_H(A, B, C, D, N, nx, nu,nineq,type)
if type =="full"
    H= zeros(N* (nx+nineq), N * (nx + nu) + nx);
    for i = 1:N
        index_r = (i-1)*(nx + nineq) + (1: (nx+nineq));
        index_c = (i-1)*(nx + nu) + (1: 2 * nx + nu);
        H(index_r, index_c) = [-A,-B, eye(nx); C,D zeros(nineq, nx)];
    end
elseif type == "eq"
    H= zeros(N* (nx), N * (nx + nu) + nx);
    for i = 1:N
        index_r = (i-1)*(nx) + (1: (nx));
        index_c = (i-1)*(nx + nu) + (1: 2 * nx + nu);
        H(index_r, index_c) = [-A,-B, eye(nx)];
    end
elseif type == "ineq"
    H = zeros(N* (nineq), N * (nx + nu) + nx);
    H_ineq_unit = [C, D];
    H_ineq = kron(eye(N), H_ineq_unit);
    index_c = 1: (nx + nu)*N;
    H(:, index_c) = H_ineq;
else
    error("the type isn't well defined");
end