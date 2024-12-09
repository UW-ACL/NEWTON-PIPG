%Generate data for the following problem 
% minimize   1/2 z^T P z + q^T z
% subject to  A x_i + B u_i - g_i = x_{i+1}
%             C x_i + D u_i + g'_i>= 0
% and additional box constraints, ball constraints and second order cone
% constraints. 
%where z = (x1, u1,..., xn, un, x_{n+1})
% P is an identity matrix. q , g are normal distribution, A, B, C, D are normal distributed. 
% we have ball constraints to the first 3 variables, second order cones to the next 3, and we have box
% for all constraitns left. 
clear
seed = 24;
rng(seed);
one_side = true;



nx = 12;%nx >6 or there will be error in the projection at the finial points
nu = 8;
nineq = 2;%inequalities per point 
N = 20; %nx(N+1) states and nu*N control in total;
nz = nx* N + nx + nu*N;
nH_r = (nx + nineq) * (N);%#rows of H
nH_c = (nx + nu) * N + nx;%#cols of H


ratio = 1; %for controlling the scale
A = rand(nx, nx)*ratio;%uniform distributed
B = rand(nx, nu)*ratio;
C = rand(nineq, nx)*ratio;
D = rand(nineq, nu)*ratio;
q = zeros(nz, 1);
g = zeros(nH_r, 1);
P = sparse(eye(nz));
P(1,1) = 0;

%Form the H matrix;
H = form_H(A,B,C,D, N, nx, nu, nineq, "full");
%H = sparse(H);
HT = H';

%% Projection
%The projection is governed by two parts, the projection index and the
%projection coefficients; The projection coefficients have to rows, row
%one is reading from the left, if for the ith element we have a nonzero
%number j, j>i, then the index i-j is projected to the set as the type
%shown in the ithelement of the second row.
% when reading this, we start from 1, and them move to
% proj_index(proj_index(1) +1) and so on. 
% The projection coefficients are the radius of balls, scales of SOC and
% upper lower bound of the box constraints.
%currently, such frame work doesn't includ subspace, which is possible but
%require several changes on the form of the projection index. 

%1 for box, 2 for ball, 3 for SOC; 
%if you change the order of projection type, you need to change the
%proj_end as well, as proj_end have box projection for 7 to the end

%proj_index should be an input to the algo.
proj_index = zeros(2, nx + nu);
proj_index(1,1) = 3; proj_index(2,1) = 2;
proj_index(1,4) = 6; proj_index(2,4) = 3;

proj_index(1,7) = nx+nu; proj_index(2,7)= 1;
proj_coefficients = zeros(size(proj_index));% proj_coefficients includes the projection lower and upper bound of the box, radius of the ball, and the coefficient of
% the second order cone. 
proj_coeff_tunning = 2;%Use this coeffcient to tight up the constraitns. 
ball_coeff = proj_coeff_tunning/10;
box_max = proj_coeff_tunning;
box_min = proj_coeff_tunning*-1;
soc_coeff = proj_coeff_tunning/10;
proj_coefficients(1:2, 1:3) = ones(2,3)* ball_coeff;
proj_coefficients(1:2, 4:6) = ones(2,3)* soc_coeff;
% proj_coefficients(1, 4:end) = box_max;
% proj_coefficients(2, 4:end) = box_min;
proj_coefficients(1, 7:end) = box_max;
proj_coefficients(2, 7:end) = box_min;

%% Boundary constraints
%Initial condition
x_init_temp = rand(nx+nu, 1);%one side
x_end_temp = rand(nx+nu,1);%end
x_init_temp = proj_D_unit(x_init_temp, proj_index, proj_coefficients);%Project to feasibel region to improve feasibility.
x_init = x_init_temp(1:nx);
x_end_temp = proj_D_unit(x_end_temp, proj_index, proj_coefficients);
x_end = x_end_temp(1:nx);


%proj_index_init
%******
%This is a simplified implemenatation! The projection to ball and cone only
%happens in the state variables, so at the initial point, we only have a
%box projection. 
%*******
proj_index_init = zeros(size(proj_index));
proj_index_init(1,1) = nx + nu;%here the initial is pure box 
proj_index_init(2,1) = 1;
proj_coefficients_init = zeros(size(proj_index));
proj_coefficients_init(1, 7:end) = box_max;
proj_coefficients_init(2, 7:end) = box_min;
proj_coefficients_init(1, 1:nx) = x_init;
proj_coefficients_init(2, 1:nx) = x_init;%Fix the state variable for the first point


%proj_index_end
%the ending point only have nx columns.
if one_side
    proj_index_end = proj_index;
    proj_index_end(1:2, (nx+1):end) = inf;%inf here indicates that there is no further constrataints;
    proj_index_end(1,7) = nx; %%Magic number the last state doesn't have a control 
    proj_coefficients_end = proj_coefficients;%the same projection coefficients 
else
    proj_index_end = proj_index_init;%Only project to boxes
    proj_index_end(1:2, (nx+1):end) = inf;%don't have control
    proj_index_end(1, 1) = nx;
    proj_index_end(2,1) = 1;% box constraints.
    proj_coefficients_end(1, 1:nx) = x_end;
    proj_coefficients_end(2, 1:nx) = x_end;%Fix the end state variables. Note that this may be an issue as it violates the LICQ
end

%Pile projection together
proj_index_all = zeros([size(proj_index), N+1]);
proj_coefficients_all = zeros([size(proj_coefficients), N+1]);
for i = 1:(N+1)
    if i == 1
        proj_index_all(:,:,i) = proj_index_init;
        proj_coefficients_all(:,:,i) = proj_coefficients_init;
    elseif i == N+1
        proj_index_all(:,:,i) = proj_index_end;
        proj_coefficients_all(:,:,i) = proj_coefficients_end;
    else
        proj_index_all(:,:,i) = proj_index;
        proj_coefficients_all(:,:,i) = proj_coefficients;
    end
end
%% Cone constraints
cone_k = zeros(nH_r, 1);
cone_k_polar = zeros(nH_r, 1);

for i = 1:nH_r
    if nineq~= 0 && (mod(i, nx+nineq) > nx || mod(i, nx+nineq) == 0)
        cone_k_polar(i) = -1;
        cone_k(i) = 1;
    end
end

 Yamlip_solve_test



