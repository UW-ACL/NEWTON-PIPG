function out = dev_HZ(A, B, z)%#codegen
%In this function, we define a simple version of H multiply z.
%Each row of H is [-A,-B,I]
%By simple, we mean in the matrix H, both A and B are fixed function. 
%This should be sufficient in estimating the speed for computation.
lx = size(A, 1);%dimension of state and control
lu = size(B, 2);
T = (length(z) - lx)/(lx+lu);
%Z consists of T (x, u) + one x


out = zeros(T*lx, 1);
for i = 1:T
    startindexz = (i-1) * (lx+lu) + 1;
    startindexout = (i-1)*lx + 1;
    out(startindexout: (startindexout+ lx-1)) = -A * z(startindexz : (startindexz + lx-1))...
        -B * z((startindexz+lx):(startindexz+lx+lu-1)) + z((startindexz+lx+lu):(startindexz+lu+2*lx-1));
    %we want to avoid computing startindexz+lx+lu manytimes in C. Checked.
    %AB should be written as [A;B]. C fixed this.
end
end