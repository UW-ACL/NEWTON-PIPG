function z = proj_D_unit(z0, proj_index, proj_coefficients)
%compute the projection of z0 at each time grid point
temp = 1;
z = zeros(length(z0),1);
while temp <= length(z0)
    if proj_index(1, temp) == inf
        break
    end
    temp_index = temp: proj_index(1, temp);
    Const_type = proj_index(2,temp);
    if Const_type == 1
        z(temp_index) = proj_box(z0(temp_index),proj_coefficients(2,temp_index)' ...
            , proj_coefficients(1, temp_index)');
    elseif Const_type == 2
        z(temp_index) = proj_ball(z0(temp_index), proj_coefficients(1,temp));
    elseif Const_type == 3
        z(temp_index) = proj_soc(z0(temp_index), proj_coefficients(1, temp));
    end
    %update
    temp = proj_index(1,temp) +1;
end

