k = 1;
nx = 7; % the amount of state variables = equalities
nz = 11;% 4 controls.
nu = 4;
n_p =10;%eq + neq per point
n_all = size(Hfull, 2);

% N = 20; %20 time grid point

A = zeros(nx +3, nz, N-1);
B = zeros(size(A));%Note that the size of B is not right!For the last B, we don't have control variables. 
phi_n1 = zeros(nx+3, N-1);
phi_n2 = zeros(size(phi));
H_new = zeros(size(Hfull));

for k = 1: (N-1)
c_index = (nz*(k-1) +1): (nz*k);
r_index_1 = ((nx*(k-1) + 1)): (nx*k);
r_index_2 = (nx*(N-1) + k);
r_index_3 = ((nx+1)*(N-1) + 2*k -1) : ((nx+1)*(N-1) + 2*k);
phi_index = ((nx+3)* (k-1)+1 ):((nx+3)* (k-1)+nx +3);

A1 = Hfull(r_index_1, c_index);
A2 = Hfull(r_index_2, c_index);
A3 = Hfull(r_index_3, c_index);

%without preconditioner.
phi_A = phi([r_index_1, r_index_2, r_index_3]);
A_all = [A1;A2;A3];
%todo: preconditioning. with and without phi, only for the last three row. 
%precondiitoning without phi
A1_row_norm = ones(nx,1);
A2_row_norm = vecnorm(A2, 2,2);
A3_row_norm = vecnorm(A3,2,2);
A_inv_scaler = diag(1./[A1_row_norm; A2_row_norm; A3_row_norm]);

phi_A = A_inv_scaler* phi_A;
A_all = A_inv_scaler * A_all;
A(:, :, k) = A_all;
phi_n1(:, k) = phi_A;
phi_n2(phi_index) = phi_A;
B(1:nx, 1:nx, k) = eye(nx);

%Form H matix
nx_n = nx + 3;%3 is a magic number
nc_n = nz*2;
H_r_index = (nx_n*(k-1)+1): nx_n*k;
H_c_index =(nz*(k-1)+1): (nz*(k+1));
if k<N-1
    H_new(H_r_index, H_c_index) = [A(:, :,k),B(:,:,k)];
elseif k == N-1
    B_N = [eye(nx);zeros(3, nx)];
    H_c_index =(nz*(k-1)+1): (nz*(k)+nx);
    H_new(H_r_index, H_c_index) = [A(:, :,k),B_N];
end
end


%% Define projection
N = params_setD(1);
cotgams_gs = params_setD(2);
vmax_av = params_setD(3);
r_init_ar = params_setD(4:6);%row
v_init_av = params_setD(7:9);
z_init_az = params_setD(10);
r_fin_ar = params_setD(11:13);
v_fin_av = params_setD(14:16);
z_0_az = params_setD(17:17+N-1);
z_1_az = params_setD(17+N : 17 + 2*N-1);

proj_index = zeros(2, nx + nu);
%% initial projection
proj_index_init = zeros(size(proj_index));
proj_index_init(1,1) = nx;
proj_index_init(2,1) = 1;%box
proj_coefficients_init = zeros(size(proj_index_init));
proj_coefficients_init(1,1:nx) = [r_init_ar, v_init_av, z_init_az];%intial condition
proj_coefficients_init(2,1:nx) = [r_init_ar, v_init_av, z_init_az];%intial condition

%initial soc on control
proj_index_init(1, nx +1) = nx + nu;
proj_index_init(2, nx +1) = 3;
proj_coefficients_init(1:2, (nx+1): (nx + nu)) = ones(2, nu);

%% final state projection
proj_index_end = zeros (size(proj_index_init));
proj_index_end(1,1) = nx;
proj_index_end(2,1) = 1;%box
proj_index_end(1,nx+1) = inf;
proj_index_end(2, nx+1) = inf;
proj_coefficients_end = zeros(size(proj_index_end));
proj_coefficients_end(1, 1:(nx-1)) = [r_fin_ar, v_fin_av];
proj_coefficients_end(2, 1:(nx-1)) = [r_fin_ar, v_fin_av];
proj_coefficients_end(1, nx) = z_1_az(N);
proj_coefficients_end(2, nx) = z_0_az(N);


proj_index_all = zeros([size(proj_index), N]);
proj_coefficients_all= zeros(size(proj_index_all));
for i = 1:(N)
    if i == 1
        proj_index_all(:,:,i) = proj_index_init;
        proj_coefficients_all(:,:,i) = proj_coefficients_init;
    elseif i == N
        proj_index_all(:,:,i) = proj_index_end;
        proj_coefficients_all(:,:,i) = proj_coefficients_end;
    else
        proj_index = zeros(2, nx + nu);
        proj_index(1,1) = 3;
        proj_index(2,1) = 3;%Soc
        proj_coefficients = zeros(size(proj_index));
        proj_coefficients(1:2, 1:3) = cotgams_gs;
        proj_index(1, 4) = 6;
        proj_index(2, 4) = 2;%ball
        proj_coefficients(1:2, 4:6) = vmax_av;
        proj_index(1, 7) = 7;
        proj_index(2, 7) = 1;%box
        proj_coefficients(1,7) = z_1_az(i);
        proj_coefficients(2,7) = z_0_az(i);
        proj_index(1,8) = 11;
        proj_index(2,8) = 3;%soc
        proj_coefficients(1:2, 8:11) = 1;
        proj_index_all(:, :, i) = proj_index;
        proj_coefficients_all(:, :, i) = proj_coefficients;
    end
end



%% constant vectors
g = phi_n2;
q = full(h);
P = eye(n_all);
np = size(P,1);
for i = 1: np
    if mod(i, 11) == 7
        P(i, i) = 10^-4;
        q(i) = q(i)*10^-4;
    end
end


nineq = 4;

%%Cone_k
params_coneK_polar = zeros(190, 1);
for i = 1: (N-1)
    params_coneK_polar((i-1)*10+8: (i-1)*10+10) = 1;
end




