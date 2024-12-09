%solve the following problem 
% minimize   1/2 z^T P z + q^T z
% subject to  A x_i + B u_i - g_i = x_{i+1}
%             C x_i + D u_i + g'_i>= 0
% and additional box constraints, ball constraints and second order cone
% constraints. 
yalmip('clear')
nall = nx*N + nu*(N-1);
z = sdpvar(nall, 1);
objective = 1/2 * z'*sparse(P)*z + q'*z;

%Separate the coeffcients for g in random cases
% g_e = []; g_ineq = []; temp = 0;
% for i = 1:N
%     eq_index = (temp + 1):(temp + nx);
%     ineq_index = (temp+nx+1):(temp + nx + nineq);
%     temp = temp + nx + nineq;
%     g_e = [g_e;g(eq_index)];
%     g_ineq = [g_ineq;g(ineq_index)];
% end
%Constraints = [];
% %equalities random examples
% H_eq = form_H(A,B,C,D, N, nx,nu, nineq, "eq");%should we use dense?
% H_eq = sparse(H_eq);%Seems that Yamlip will identify the sparsity pattern.
% Constraints = H_eq * z - g_e == 0;
% %inequalities random examples
% H_ineq = form_H(A, B, C, D, N, nx, nu, nineq, "ineq");
% H_ineq = sparse(H_ineq);
% Constraints = [Constraints, H_ineq * z - g_ineq>=0];

%LCvx
Constraints = [];
H_eq_ind = zeros(1,(N-1)* nx);
H_neq_ind = zeros(1, (N-1)* (n_p - nx));
for i = 1:(N-1)
    H_eq_ind((1+(i-1)*nx): (nx*i)) = (n_p*(i-1) + 1): (n_p*(i-1) + nx);
    H_neq_ind((1+(i-1)*(n_p-nx)):((n_p-nx)*i)) = (n_p*(i-1) + nx+1): (n_p*(i-1) + n_p);
end
Constraints = sparse(H_new(H_eq_ind, :))*z-g(H_eq_ind)==0;
Constraints = [Constraints, H_new(H_neq_ind, :)*z - g(H_neq_ind)>=0];



%projections
for i = 1:(N)
    proj_temp_index = proj_index_all(:,:,i);
    proj_temp_coeff = proj_coefficients_all(:,:,i);
    temp = 1;
    while temp < nx+nu

        if proj_temp_index(1, temp) == inf
            break
        end
        temp_index = temp: proj_temp_index(1, temp);
        z_temp_index = (temp:proj_temp_index(1, temp))+ (i-1) * (nx + nu);
        Const_type = proj_temp_index(2,temp);
        if Const_type == 1
            Constraints = [Constraints, proj_temp_coeff(2,temp_index)' <= ...
                z(z_temp_index)<= proj_temp_coeff(1, temp_index)'];
        elseif Const_type == 2
            Constraints = [Constraints, norm(z(z_temp_index)) <= proj_temp_coeff(1,temp)];
        elseif Const_type == 3
            z_x_temp_index = z_temp_index(1:(end-1));
            z_y_temp_index = z_temp_index(end);
            Constraints = [Constraints, cone(z(z_x_temp_index),proj_temp_coeff(1,temp)* z(z_y_temp_index))];
        else
            disp("Error in the coding for constraints, please check")
        end
        %update
        temp = proj_temp_index(1,temp) +1;
    end
end

options = sdpsettings('solver', 'ecos', 'verbose',0);%Set verbose = 0
msk_err = 1e-10;%The maximum one can get. 
ecos_err = msk_err;
options.mosek.MSK_DPAR_INTPNT_TOL_REL_GAP = msk_err; 
options.mosek.MSK_DPAR_INTPNT_TOL_INFEAS = msk_err;
options.mosek.MSK_DPAR_INTPNT_TOL_DFEAS  = msk_err;
options.mosek.MSK_DPAR_INTPNT_TOL_PFEAS =  msk_err;
options.mosek.MSK_DPAR_ANA_SOL_INFEAS_TOL =  msk_err;
options.mosek.MSK_DPAR_INTPNT_CO_TOL_PFEAS  =  msk_err;
options.mosek.MSK_DPAR_INTPNT_CO_TOL_DFEAS  =  msk_err;
options.mosek.MSK_DPAR_INTPNT_CO_TOL_INFEAS   =  msk_err;
options.mosek.MSK_DPAR_INTPNT_CO_TOL_REL_GAP  =  msk_err;

options.mosek.MSK_IPAR_INTPNT_MAX_ITERATIONS = 1000;
options.mosek.MSK_IPAR_NUM_THREADS = 1;


% options.ecos.maxit = 1000;               
options.ecos.feastol = ecos_err;            
options.ecos.abstol = ecos_err;             
options.ecos.reltol = ecos_err;             

% gurobi_err = 1e-9;%maximum error 
% options.gurobi.FeasibilityTol = gurobi_err; 
% options.gurobi.OptimalityTol = gurobi_err; 
% options.gurobi.TuneTimeLimit = 300;  


out_y = optimize(Constraints, objective, options);
% disp(out_y)