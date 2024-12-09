function out = dev_A_Q_D_unit(A, Q, proj_index,L)
%WE want to compute the innerproduct of A and Q.
%When col(A) \neq row(Q), we need an L such that only the first L column
%multiply the top square block of Q that ahs size L

[r_A, c_A]  = size(A);
out = zeros(r_A, L);
temp = 1;
flag = 0;

while temp <= c_A
    if proj_index(1, temp) == inf
        break
    end

    if proj_index(1, temp)>=L
        Const_type = proj_index(2,temp);
        flag = 1;
        if Const_type == 1
            % Q(temp_index, temp_index)  = dev_jacob_box(z0(temp_index),proj_coefficients(2,temp_index)' ...
            %      , proj_coefficients(1, temp_index)', P(temp_index), alpha);

            out(:, temp: L) = A(:, temp: L) .*  diag(Q(temp: L, temp: L))'; % to save computation.
        elseif Const_type == 2 ||Const_type == 3
            out(:, temp: L) = A(:, temp: L) * Q(temp: L, temp: L);% a faster way is to treat diagbonal cases vs dense cases differently.
            % Q(temp_index, temp_index) = dev_jacob_ball(z0(temp_index), proj_coefficients(1,temp), P(temp_index), alpha);
        end
        %update
        temp = proj_index(1,temp) +1;
    else
    
        Const_type = proj_index(2,temp);
        if Const_type == 1
            out(:, temp: proj_index(1, temp)) = A(:, temp: proj_index(1, temp)) .*  diag(Q(temp: proj_index(1, temp), temp: proj_index(1, temp)))'; % to save computation.
        elseif Const_type == 2 ||Const_type == 3
            out(:, temp: proj_index(1, temp)) = A(:, temp: proj_index(1, temp)) * Q( temp: proj_index(1, temp), temp: proj_index(1, temp));% a faster way is to treat diagbonal cases vs dense cases differently.
        end
        %update

        temp = proj_index(1,temp) +1;
    end
    if flag == 1
        break
    end

end
