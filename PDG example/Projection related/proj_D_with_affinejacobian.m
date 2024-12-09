function   [z,J_affine]  = proj_D_with_affinejacobian(z0, N, nx, nu,proj_index_all,  proj_coefficients_all)
%Compute the projection to set D.
%nx, nu are legacy. They stands for the number of control and input
z = zeros(size(z0));
J_affine = z;

for i = 1:(N)%if it is random use N+1. Not robust!
    proj_temp_index = proj_index_all(:,:,i);
    proj_temp_coeff = proj_coefficients_all(:,:,i);
    if i< N
        z_temp_index = (i-1) * (nx + nu)+ (1:(nx + nu));
    else
        z_temp_index = (i-1) * (nx + nu)+ (1:(nx));
    end
    z0_temp = z0(z_temp_index);
    [z(z_temp_index), J_affine(z_temp_index)]= proj_D_unit_with_affinejacobian(z0_temp, proj_temp_index, proj_temp_coeff);
end

