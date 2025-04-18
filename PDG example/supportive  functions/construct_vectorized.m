function ppv = construct_vectorized(pp,varargin)
%{
05/01/2022
Purnanand Elango

Vectorize the discrete-time optimal control problem to form a QP 
Return parameters of the QP in a structure

 minimize   xi^T P xi + q^T xi
subject to  H xi - g = 0
            xi_min <= xi <= xi_max

%}

    % Set seed in random number generator for repeatability 
    if nargin == 2
        rng(varargin{1}); 
    elseif nargin >= 3
        error("Invalid number of input arguments.");
    end
    
    ppv = struct;
    ppv.P = sparse([ kron(eye(pp.N),pp.R) zeros(pp.m*pp.N,pp.n*(pp.N+1)); ...
                     zeros(pp.n*(pp.N+1),pp.m*pp.N) kron(eye(pp.N+1),pp.Q)]);
    ppv.max_eig_P = max(eig(ppv.P));
    ppv.q = sparse((pp.m+pp.n)*pp.N+pp.n,1);
        Hu = kron(eye(pp.N),pp.B);
        Hx = [kron(eye(pp.N),pp.A) zeros(pp.n*pp.N,pp.n)] - [zeros(pp.n*pp.N,pp.n) eye(pp.n*pp.N)];
    ppv.H = sparse([Hu Hx]);
    ppv.HT = ppv.H';
    ppv.g = sparse(zeros(pp.N*pp.n,1));
    ppv.xi_min = [-kron(ones(pp.m*pp.N,1),pp.u_max);...
                   pp.z0;...
                  -kron(ones(pp.n*pp.N-pp.n,1),pp.x_max);...
                   -repmat(pp.x_max, pp.n, 1)];
    ppv.xi_max = [ kron(ones(pp.m*pp.N,1),pp.u_max);...
                   pp.z0;...
                   kron(ones(pp.n*pp.N-pp.n,1),pp.x_max);...
                   repmat(pp.x_max, pp.n, 1)];
    ppv.spec_norm_HTH = max(svd(full(ppv.H'*ppv.H)));
   
    % Same random initialization for vectorized and de-vectorized solvers
    ppv.x = cell(1,3);      % De-vectorized primal
    ppv.u = cell(1,3);      % De-vectorized primal
    ppv.w = cell(1,3);      % De-vectorized dual
    ppv.xi = cell(1,3);     % Vectorized primal
    ppv.eta = cell(1,3);    % Vectorized dual
    

    for j = 1:3
        ppv.x{j} = randn(pp.n,pp.N+1);
        ppv.u{j} = randn(pp.m,pp.N);
        ppv.w{j} = randn(pp.n,pp.N);
        ppv.xi{j} = [reshape(ppv.u{j},[pp.m*pp.N,1]);reshape(ppv.x{j},[pp.n*pp.N+pp.n,1])];
        ppv.eta{j} = reshape(ppv.w{j},[pp.n*pp.N,1]);
    end



     %The setup for pipg and newton pipg. different initial condition
     % we need to update this anytime the random seed got update.
    xmax = pp.x_max;
    xmin = -pp.x_max;
    umax = pp.u_max;
    umin = -pp.u_max;
    m = pp.m;
    n = pp.n;
    T = pp.N;
    Srow = size(ppv.H);
    z0 = pp.z0;
    ppv.zmin =[z0;repmat(umin, m, 1) ;repmat([repmat(xmin, n, 1);repmat(umin, m, 1)], T-1, 1);repmat(xmin, n, 1)];%changed， no fixed ending.
    ppv.zmax = [z0;repmat(umax, m, 1) ;repmat([repmat(xmax, n, 1);repmat(umax, m, 1)], T-1, 1);repmat(xmax, n, 1)];
    ppv.zn = randn(Srow(2),1);
    ppv.wn = randn(Srow(1),1);
end