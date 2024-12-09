function out = dev_HtZ(At, Bt, z)%#codegen
% In this function, we define a simple version of H transpose multiply z.
% Each column of H transpose is [-A', -B', I]
% By simple, we mean in the matrix H transpose, both A and B are fixed function. 
% This should be sufficient in estimating the speed for computation.
%fix this. We should only fid in A', B' instead of A and B. UNFIXED!!!!
lx = size(At, 2);
lu = size(Bt, 1);
lxu = lx + lu;
T = length(z)/ lx;
lout = T * (lx + lu)+lx;
out = zeros(lout, 1);

for t = 1:T
    s1  = (t-1)*(lxu) + 1;
    e1  = t*(lxu);
    s2  = e1+1;
    e2  = e1+ (lx);
    zs1 = (t-1)*lx+1;
    ze1 = t*lx;
    s1m = (t-1)*(lxu)+ lx;
    w1 = out(s1:s1m)-At*z(zs1:ze1);
    w2 = out(s1m+1: e1) - Bt* z(zs1:ze1);

    out(s1:e1) = [w1;w2];
    out(s2:e2) = z(zs1:ze1);

end

end




