function [z,J_af] = proj_D_unit_with_affinejacobian(z0, proj_index, proj_coefficients)
%compute the projection of z0 at each time grid point
temp = 1;
z = zeros(length(z0),1);
J_af = z;
while temp <= length(z0)
    if proj_index(1, temp) == inf
        break
    end
    Const_type = proj_index(2,temp);
    if Const_type == 1
        z(temp: proj_index(1, temp)) = proj_box(z0(temp: proj_index(1, temp)),proj_coefficients(2,temp: proj_index(1, temp))' ...
            , proj_coefficients(1, temp: proj_index(1, temp))');
        J_af(temp: proj_index(1, temp)) = jacob_box(z0(temp: proj_index(1, temp)),proj_coefficients(2,temp: proj_index(1, temp))' ...
            , proj_coefficients(1, temp: proj_index(1, temp))');
    elseif Const_type == 2
        z(temp: proj_index(1, temp)) = proj_ball(z0(temp: proj_index(1, temp)), proj_coefficients(1,temp));
    elseif Const_type == 3
        z(temp: proj_index(1, temp)) = proj_soc(z0(temp: proj_index(1, temp)), proj_coefficients(1, temp));
    end
    %update
    temp = proj_index(1,temp) +1;
end
end

function J_box = jacob_box(z, l, u)
J_box  = double(~((z<=l)|(z>=u)));
end
