function out = dev_pipg_withdetection(ppv)
% this is a code for pipg
%%%%%%%%%%%%%%%%%%%%
%Set up
%%%%%%%%%%%%%%%%%%%%
rho = ppv.rho; % inorder to use xpipg code.
A = ppv.A;
B = ppv.B;
At = A';
Bt = B';
H = ppv.H;
HT = ppv.HT;
P = diag(ppv.P);
z1 = ppv.z;
w1 = ppv.w;
q = ppv.q;
g = ppv.g;
lam =  ppv.max_eig_P;% find these in the code
omg = ppv.expipg_omg;
%rho = pp.expipg_rho;
z_min = ppv.zmin;
z_max = ppv.zmax;
infeas_tol = 5*10^4;%should be an input from ppv
infeas_min = 10;%Minmum iterations
%%%%%%%%%%%%%%%%%%%%
% pipg out
%%%%%%%%%%%%%%%%%%%%
out = struct;
out.alpha = 0;
out.beta = 0;
out.converge = true;
out.residualfirstactive = inf;
out.iterfirstactive = -1;
out.iter4 = -1;
out.iter8 = -1;
out.iter12 = -1;
maxit = 10000;
xi = ppv.z;%What inital guess should I use??!!
eta = ppv.w;
%%%%%%%%%%%%%%%%%%%
%PIPG
%%%%%%%%%%%%%%%%%%%
flag4 = 0;
flag8 = 0;
flag12 = 0;
activesetshift = 1;
temp = 0;
timeinzones = zeros(100, 1);
out.shiftactiveamount = zeros(100,1);

%initialization
id = -1* ones(size(H,2),1);
idn = -2*id;
tic;
%%%%%%%%%%%%%%%%%%%%
%find alpha and beta
%%%%%%%%%%%%%%%%%%%%
sig1 = 100.1;
sig2 = 200.2;

while abs(sig2-sig1)/sig1 >= 0.005
    sig2 = sig1;
    w1 = dev_HZ(A, B, z1);%devec
    z1 = dev_HtZ(At,Bt, w1);%devec
    sig1 = norm(z1);
    z1 = z1/sig1;

end
xi = z1;%What inital guess should I use??!!
eta = w1;
out.dzchange = zeros(1, maxit);%Not necessary
out.dzchangerate= out.dzchange;%Not necessary
% find alpha beta
% Buffer the estimated spectral norm
sig1 = 1.1*sig1;
alpha = 2/((lam^2 + 4*omg*sig1)^0.5+lam);
beta = omg*alpha;
for k = 1: maxit
    [xinew, etanew, idn, ikp, R] = dev_onestep_xpipg( xi, eta, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);

    if k ==1
        dzchangeold = [xinew- xi; etanew - eta];
    else
        dzchangenew = [xinew- xi; etanew - eta];
        out.dzchangerate(k)= norm(dzchangenew)/norm(dzchangenew- dzchangeold); 
        if out.dzchangerate(k) > infeas_tol && k>infeas_min
            disp("PIPG has stagnated: we are likely to have an infeasibile case.")
            disp(k)
            break
        end
        dzchangeold = dzchangenew;
    end
    xi = xinew;
    eta = etanew;
    if k ==1
        id = idn;
        out.residualfirstactive = norm(R);
        out.iterfirstactive = k;
    end
    if ~isequal(id, idn)

        out.residualfirstactive = norm(R);
        out.iterfirstactive = k;

                   out.shiftactiveamount(mod(activesetshift, 100)+1) = sum(id ~= idn);
                   activesetshift = activesetshift +1;
                   timeinzones(mod(activesetshift, 100)+1) = k -temp;
                   out.id = idn;
                   out.xiact = xi;
                   out.etaact = eta;
                   out.R = R;
                   temp = k;
        id = idn;
    end
    %     if k/100 == floor(k/100)
    %         disp(norm(R))
    %     end
    if norm(R) <= 10^-4 && flag4 ==0
        flag4 = 1;
        out.iter4 = k;

    end
    if norm(R) <= 10^-8 && flag8 ==0
        flag8 = 1;
        out.iter8 = k;
      
    end
    if norm(R) <= 10^-12 && flag12 ==0
        flag12 = 1;
        out.iter12 = k;
        break
    end
end
if flag12 == 0
    out.converge = false;
end
solve_time = toc*1000;
% if exit_flag == -1
%     fprintf("\nexPIPG DVEC did not converge in %.0f iterations: MAX ITERATIONS REACHED\n",k_max);
% end
%disp(solve_time);
%print("Primal error : %9.2e\nDual error   : %9.2e\n",err_p1,err_d1);
out.residual = norm(R);
out.activeshift = activesetshift;
timeinzones(mod(activesetshift, 100)+2) = k -temp;
out.timeinzones = timeinzones;
out.id = idn;
out.result = [xi; eta];
out.id = idn;
out.xiact = xi;
out.etaact = eta;
out.R = R;
end





