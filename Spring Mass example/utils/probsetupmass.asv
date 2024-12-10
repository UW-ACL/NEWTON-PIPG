function pp = probsetupmass(n, m, T,xmax,umax, xmin, umin, randseed)
    rng(randseed)
    pp = struct;

    % State dimension
    pp.n = n;

    % Control dimension
    pp.m = m;

    % Horizon length
    pp.N = T;

    % Sampling time (only applicable for oscillating masses)
    pp.T = 3/T;%changed!
    
%     ppv.A = randn(n, n);% from standard normal distribution
%     ppv.B = randn(n, m);
    % Bound on state inf norm
    pp.xmax = xmax;

    % Bound on control input inf norm
    pp.umax = umax;
    pp.xmin = xmin;
    pp.umin = umin;

    % Random initial state (which satisfies bound on state)
    pp.z0 = max(pp.xmin, min(pp.xmax, ...
                [0.1*ones(pp.n/2,1);zeros(pp.n/2,1)] + 0.05*randn(pp.n,1) ...
                ));
    z0 = pp.z0;
% Final state at origin
    pp.zN = zeros(pp.n,1);   
    pp = plant_defn(pp,1);


    H = Hmatrixmass(n, m, T-1, pp.A, pp.B);
    Srow = size(H);
    pp.P = eye(Srow(2));
    pp.q = sparse(zeros(Srow(2),1));%??
    pp.g = sparse(zeros(Srow(1),1));
    pp.z = randn(Srow(2),1);
    pp.w = randn(Srow(1),1);
    pp.H = H;
    pp.HT = H';

    pp.zmin =[z0;repmat(umin, m, 1) ;repmat([repmat(xmin, n, 1);repmat(umin, m, 1)], T-1, 1);repmat(xmin, n, 1)];%changed， no fixed ending.
    pp.zmax = [pp.z0;repmat(umax, m, 1) ;repmat([repmat(xmax, n, 1);repmat(umax, m, 1)], T-1, 1);repmat(xmax, n, 1)];

    pp.expipg_omg = 200;
    pp.max_eig_P = max(eig(pp.P));
    pp.rho = 1.6; 
    ppv.newtonactive = 8;
end