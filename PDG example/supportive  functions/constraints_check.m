
z_pipg= out.xi;
% out = H * z_pipg- g;
% disp(min(out));%as long as the minimunm of out is 0 up to an error. The inequality
% %constraints will be satisfied. 
H_eq_ind = zeros(1,(N-1)* nx);
H_neq_ind = zeros(1, (N-1)* (n_p - nx));
for i = 1:(N-1)
    H_eq_ind((1+(i-1)*nx): (nx*i)) = (n_p*(i-1) + 1): (n_p*(i-1) + nx);
    H_neq_ind((1+(i-1)*(n_p-nx)):((n_p-nx)*i)) = (n_p*(i-1) + nx+1): (n_p*(i-1) + n_p);
end

H_eq = H_new(H_eq_ind, :);
g_eq = g(H_eq_ind);
out = H_eq* z_pipg-g_eq;
norm(out)

H_neq = H_new(H_neq_ind, :);
g_neq = g(H_neq_ind);
out = H_neq*z_pipg - g_neq;
sum(out<0)

%now we check the projection



for i = 1:(N)% Haven't check N+1
    proj_temp_index = proj_index_all(:,:,i);
    proj_temp_coeff = proj_coefficients_all(:,:,i);
    temp = 1;
   
    z_temp_index = (i-1) * (nx + nu)+ (1:(nx + nu));
    if i == N
        z_temp_index = (i-1)*(nx + nu) +(1:nx);
    end
     z_temp = z_pipg(z_temp_index);
    z_proj = proj_D_unit(z_temp, proj_temp_index, proj_temp_coeff);
    disp(norm(z_proj - z_temp));
end