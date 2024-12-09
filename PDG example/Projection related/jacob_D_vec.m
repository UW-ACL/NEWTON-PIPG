function [J, J_affine] = jacob_D_vec(z0,N,nx, nu, proj_index_all, proj_coefficients_all)
% we used the simpliest version of implementing the Jacobian of projection
% to set D.
%haven't test yet.
J = zeros(length(z0));
J_affine = zeros(length(z0), 1);

for i = 1:(N)
    proj_temp_index = proj_index_all(:,:,i);
    proj_temp_coeff = proj_coefficients_all(:,:,i);
    if i< N
        z_temp_index = (i-1) * (nx + nu)+ (1:(nx + nu));
    else
        z_temp_index = (i-1) * (nx + nu)+ (1:(nx));
    end
    z0_temp = z0(z_temp_index);
    [J(z_temp_index, z_temp_index), J_affine(z_temp_index)]= jacob_D_unit(z0_temp, proj_temp_index, proj_temp_coeff);
end
end

function [J_unit, J_affine_unit] = jacob_D_unit(z0, proj_index, proj_coefficients)
%compute the Jacobian of projection of z0 at each time grid point
J_unit = zeros(length(z0));
J_affine_unit = zeros(length(z0),1);
temp = 1;
while temp <= length(z0)
    if proj_index(1, temp) == inf
        break
    end
    temp_index = temp: proj_index(1, temp);
    Const_type = proj_index(2,temp);
    if Const_type == 1
        J_unit(temp_index, temp_index) = jacob_box_vec(z0(temp_index),proj_coefficients(2,temp_index)' ...
            , proj_coefficients(1, temp_index)');
        J_affine_unit(temp_index) = diag(J_unit(temp_index, temp_index));%not efficient at all.
    elseif Const_type == 2
        [J_unit(temp_index, temp_index), ~, ~] = jacob_ball(z0(temp_index), proj_coefficients(1,temp));
    elseif Const_type == 3
        [J_unit(temp_index, temp_index),~,~] = jacob_soc(z0(temp_index), proj_coefficients(1,temp));
    end
    %update
    temp = proj_index(1,temp) +1;
end
end

function J_box = jacob_box_vec(z, l, u)
non_activate_dimension = ~((z<=l)|(z>=u));%%%Jacobian of box should be computed after projection!. 
J_box = diag(non_activate_dimension*1);
end





