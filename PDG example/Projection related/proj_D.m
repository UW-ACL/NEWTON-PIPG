function   z = proj_D(z0, N, nx, nu,proj_index_all,  proj_coefficients_all)
%Compute the projection to set D.
z = zeros(size(z0));

for i = 1:(N)%if it is random use N+1. Not robust!
    proj_temp_index = proj_index_all(:,:,i);
    proj_temp_coeff = proj_coefficients_all(:,:,i);
    if i< N
        z_temp_index = (i-1) * (nx + nu)+ (1:(nx + nu));
    else
        z_temp_index = (i-1) * (nx + nu)+ (1:(nx));
    end
    z0_temp = z0(z_temp_index);
    z(z_temp_index)= proj_D_unit(z0_temp, proj_temp_index, proj_temp_coeff);
end


