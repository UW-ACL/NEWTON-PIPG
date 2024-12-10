function [ppv,pp] = randomppvupdate(pp,ppv, randomseed, type)
%we use this function to update the PPV. This will save time in making the
%matrices required in ppv.
rng(randomseed);

pp = problem_data(pp.n,pp.m,pp.N,pp.x_max,pp.u_max,1);

if type == "one_side"
    %for pipg
    xmax = pp.x_max;
    xmin = -pp.x_max;
    umax = pp.u_max;
    umin = -pp.u_max;
    m = pp.m;
    n = pp.n;
    T = pp.N;
    z0 = pp.z0;
    ppv.zmin =[z0;repmat(umin, m, 1) ;repmat([repmat(xmin, n, 1);repmat(umin, m, 1)], T-1, 1);repmat(xmin, n, 1)];%changed， no fixed ending.
    ppv.zmax = [z0;repmat(umax, m, 1) ;repmat([repmat(xmax, n, 1);repmat(umax, m, 1)], T-1, 1);repmat(xmax, n, 1)];

    %for other
    ppv.xi_min = [-kron(ones(pp.m*pp.N,1),pp.u_max);...
        pp.z0;...
        -kron(ones(pp.n*pp.N-pp.n,1),pp.x_max);...
        -repmat(pp.x_max, pp.n, 1)];
    ppv.xi_max = [ kron(ones(pp.m*pp.N,1),pp.u_max);...
        pp.z0;...
        kron(ones(pp.n*pp.N-pp.n,1),pp.x_max);...
        repmat(pp.x_max, pp.n, 1)];
else
    %for pipg
    xmax = pp.x_max;
    xmin = -pp.x_max;
    umax = pp.u_max;
    umin = -pp.u_max;
    m = pp.m;
    n = pp.n;
    T = pp.N;

    z0 = pp.z0;
    ppv.zmin =[z0;repmat(umin, m, 1) ;repmat([repmat(xmin, n, 1);repmat(umin, m, 1)], T-1, 1);zeros(n, 1)];%changed， no fixed ending.
    ppv.zmax = [z0;repmat(umax, m, 1) ;repmat([repmat(xmax, n, 1);repmat(umax, m, 1)], T-1, 1);zeros(n, 1)];
    %for otheralgorithms
    ppv.xi_min = [-kron(ones(pp.m*pp.N,1),pp.u_max);...
        pp.z0;...
        -kron(ones(pp.n*pp.N-pp.n,1),pp.x_max);...
        -zeros(pp.n, 1)];
    ppv.xi_max = [ kron(ones(pp.m*pp.N,1),pp.u_max);...
        pp.z0;...
        kron(ones(pp.n*pp.N-pp.n,1),pp.x_max);...
        zeros(pp.n, 1)];
end
end

