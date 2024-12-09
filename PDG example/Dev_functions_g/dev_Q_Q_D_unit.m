function out = dev_Q_Q_D_unit(Q, proj_index,L)
%WE want to compute the innerproduct of Q and Q'.

[~, c_Q]  = size(Q);
out = zeros(L, L);
temp = 1;
flag = 0;

while temp <= c_Q
    if proj_index(1, temp) == inf
        break
    end

    if proj_index(1, temp)>=L
        temp_index = temp: L;
        Const_type = proj_index(2,temp);
        flag = 1;
    else
        temp_index = temp: proj_index(1, temp);
        Const_type = proj_index(2,temp);
    end

    if Const_type == 1
       % Q(temp_index, temp_index)  = dev_jacob_box(z0(temp_index),proj_coefficients(2,temp_index)' ...
       %      , proj_coefficients(1, temp_index)', P(temp_index), alpha);

        out(temp_index, temp_index) = diag(diag(Q(temp_index, temp_index)).^2); % to save computation.
    elseif Const_type == 2 ||Const_type == 3
        out(temp_index, temp_index) = dev_g_multiply_symmetric(Q(temp_index, temp_index), Q(temp_index, temp_index)');% a faster way is to treat diagbonal cases vs dense cases differently.
        % Q(temp_index, temp_index) = dev_jacob_ball(z0(temp_index), proj_coefficients(1,temp), P(temp_index), alpha);
    end
       %update
    if flag == 1
        break
    end
    temp = proj_index(1,temp) +1;
end
