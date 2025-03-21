function [z1,w1,exit_flag] = expipg_vec_v3(z1,w1,...                                           % Main solution variables
                                           z2,w2,z3,w3,err_p1,err_d1,err_d2,...                % Auxiliary variables
                                           lam,omg,rho,k_test,k_max,exit_flag,...              % Algorithm parameters
                                           eps_feas,eps_infeas,...                             % Algorithm tolerances
                                           P,H,HT,...                                          % Problem constants
                                           z_min,z_max...                                      % Convex set constraint parameters
                                           ) %#codegen
%{
05/02/2022
Purnanand Elango

Solve the following QP via exPIPG:
     minimize   z^T P z
    subject to  H z = 0
                z_min <= z <= z_max    

Requirements:
    sig > 0
    z1 \neq z2 \neq z3
    err_p1 \neq err_p2
    err_d1 \neq err_d2
    exit_flag = -1

Feasibility detection: new test developed by Yue Yu on 06/13/2022
Infeasibility detection: new test developed by Yue Yu on 04/30/2022
See docs/docs.md for details

Output:
    exit_flag:
       -1 - Maximum iterations reached; no conclusion
        0 - Primal Infeasible
        1 - Primal Dual Feasible (Solved)

%}
    tic
    %% Power iteration for estimating the spectral norm of H^T H
    sig1 = 100.1;
    sig2 = 200.2;
    while abs(sig2-sig1)/sig1 >= 0.005
        sig2 = sig1;
        w1 = H*z1;
        z1 = HT*w1;
        sig1 = norm(z1);
        z1 = z1/sig1;
    end
    % Buffer the estimated spectral norm
    sig1 = 1.1*sig1;

    %% exPIPG

    % Compute step sizes
    alf = 2/((lam^2 + 4*omg*sig1)^0.5+lam);
    bet = omg*alf;

    % Initialization
    z1 = z2;
    w1 = w2;
    for k = 1:k_max % Run algorithm for at most k_max iterations 
        % Copy previous iterates
        z2 = z1;
        w2 = w1;
        
        % Projected gradient with proportional integral feedback of conic constraint affine term
        z1 = max(z_min,min(z_max,z3 - alf*(P*z3 + HT*w3))); % Projection onto box
        w1 = w3 + bet*H*(2*z1-z3);

        % Extrapolation    
        z3 = (1-rho)*z3 + rho*z1;
        w3 = (1-rho)*w3 + rho*w1;

        if rem(k,k_test) == 0 /
            err_d1 = norm(w2 - w3,"inf");

            % Feasibility certificate
            z2 = - P*z1 - HT*w1;
            err_p1 = max(norm(H*z1,"inf"),max(max( (z_max - z1) .* max(z2,0) ), max( (z_min - z1) .* min(z2,0) )));

            % Infeasibility certificate
            w2 = w3-w2;
            err_d2 = w2'*H*((HT*w2 >= 0) .* z_min + (HT*w2 < 0) .* z_max); 
            
            % Test for primal dual feasibility
            if err_p1 <= eps_feas
                fprintf("\nexPIPG VEC converged in %.0f iterations: PRIMAL DUAL FEASIBLE\n",k);
                exit_flag = 1; 
                break
            % Test for primal infeasibility
            elseif err_d2 >= -eps_infeas
                fprintf("\nexPIPG VEC converged in %.0f iterations: PRIMAL INFEASIBLE\n",k);                
                exit_flag = 0; % Primal Infeasible
                break
            end
        end
    end
    solve_time = toc*1000;
    if exit_flag == -1
        fprintf("\nexPIPG VEC did not converge in %.0f iterations: MAX ITERATIONS REACHED\n",k_max);
    end 
    fprintf("Solve time   : %5.1f ms\n",solve_time);    
    fprintf("Feas. cert.  : %9.2e\nDual error   : %9.2e\nInfeas. cert.: %9.2e\n",err_p1,err_d1,err_d2);    
end