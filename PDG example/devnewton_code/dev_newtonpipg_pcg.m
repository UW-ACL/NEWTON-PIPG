function out = dev_newtonpipg_pcg(A, B, At, Bt, P, z1, lw, q, g, z_min, z_max, lam, rho, omg, maxit, ...
    newtonratio, newtonactive, tol )%#codegen
%%  A, B are matrix; At,Bt are the transpose; P is a diagonal matrix
%         z1 initial; lw provides the size of the dual; q, g are coefficient in the PIPG
%         z_min, z_max are the box constraints; lam, rho, omg are
%         coeffcients. Newtonratio, newtonactive are coefficient for PIPG

%% coefficient set up
tic;
linesearch_step = 3;
linsearch_amount = 5;
newtonwaitlinear = 30;
newtonwaitexp = 10;%avoid using newton for the third time in one region.
ratio = newtonratio;%ratio for activating newton step
%wait for 10 pipg before activating newton
%% Set up
out = struct;
out.converge = false;
out.xi = zeros(size(z_max));
out.eta = zeros(size(lw));
out.solve_time = inf;
out.ntime = 0;
out.pcgtime = 0;
out.k = 0;
w1 = out.eta;
nz = length(out.xi);
L = zeros([size(A), 2, length(g)/size(A,1)]); % not robust, we should have n,n, 2,N instead)
%% find alpha and beta
sig1 = 100.1;
sig2 = 200.2;
while abs(sig2-sig1)/sig1 >= 0.005
    sig2 = sig1;
    w1 = dev_HZ(A, B, z1);
    z1 = dev_HtZ(At, Bt, w1);
    sig1 = norm(z1);
    z1 = z1/sig1;
end

% find alpha beta
% Buffer the estimated spectral norm
sig1 = 1.1*sig1;
alpha = 2/((lam^2 + 4*omg*sig1)^0.5+lam);
beta = omg*alpha;
xi = z1;
eta = w1;
%% newton pipg
[xi, eta, idn, ikp, R] = dev_onestep_xpipg( xi, eta, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);%Do this twice
temp = 0;
%initialization
id = -1* ones(size(z1));
idn = -2*id;
newtonwait_factor = 0;
pcg_flag = 0;
pcg_max_iter = 3;
pcg_max_tol = 0.01;%These should be inputs!!
pcg_ratio = 1;
%% Log the result
%logid = fopen("pcg_log2.txt", "w");
for k = 1:maxit
    if k ==1
        id = idn;
    end
    if ~isequal(id, idn)
        temp = k;
        id = idn;
        newtonwait_factor = 0;
        pcg_ratio = 1;
    end

    if k >= newtonactive +temp + newtonwaitlinear*newtonwait_factor + newtonwaitexp^newtonwait_factor-1
        temp = k;
        id = idn;
        [~, ~,~, ~, R] = dev_onestep_xpipg( xi, eta, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);
        nR = norm(R);%%%bug here!
        pcg_flag = 0;
        if pcg_flag == 0
            [dzw, flag, L]  = dev_newtonpipgupdate(A, B,At, Bt, P, idn, -R, nz, alpha, beta, rho);% R= -z_new + z; while in the Newton step we need -R = z_new - z
            %fprintf(logid, "Newton step finished with flag = %d \n", flag);
            %newtonwait_factor = newtonwait_factor +1;
            out.ntime = out.ntime + 1;
            if flag == 0
                pcg_flag = 1;
            end
        else
            pcg_tol = min(pcg_max_tol, pcg_ratio^2);
            %%%Check the sign for -R
            [dzw, pcg_flag, iter, accuracy] = dev_pcg_update( A,B,L,pcg_max_iter, pcg_tol, At, Bt, P, idn, -R, nz, alpha, beta, rho);
            %newtonwait_factor = newtonwait_factor +1;
            out.pcgtime = out.pcgtime + 1;
            %fprintf(logid,"PCG finihsed with pcg_flag = %d, iter = %d, accuracy = %e \n", pcg_flag, iter, accuracy);
        end
        %line-search
        line_search_flag = 0;
        if flag == 0
            for kk = linesearch_step.^((-1)* (0:linsearch_amount))% magic number! The point is to include very small variable as the decrease happens locally.
                xinew = xi + kk * dzw(1: nz);
                etanew = eta + kk * dzw((nz+1): end);
                [xin, etan, ~, ~, Rn] = dev_onestep_xpipg( xinew, etanew, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);
                nRn = norm(Rn);
                if nRn <= ratio * nR
                    xi = xin;
                    eta = etan;
                    pcg_ratio = nRn/nR;
                    line_search_flag = 1;
                    break;
                end
            end
        else
            flag = 1;
        end
        if line_search_flag == 0
            pcg_ratio = 1;
            newtonwait_factor = newtonwait_factor +1;%magic number%%%Super important!
        end
    end


     
        
    [xi, eta, idn, ~, R] = dev_onestep_xpipg( xi, eta, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);%not necessary if newton got activates
    if norm(R)<= tol
        [xi, eta,~, ~, ~] = dev_onestep_xpipg( xi, eta, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);
        out.converge = true;
        break
    end

end

solve_time = toc*1000;
out.k = k;
out.solve_time = solve_time;
out.xi = xi;
out.eta = eta;

%fprintf(logid, "Newton step finished with %d PIPG iterations/Newton step  \n", out.k);
%fclose(logid);







