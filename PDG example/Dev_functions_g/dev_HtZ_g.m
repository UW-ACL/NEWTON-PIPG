function out = dev_HtZ_g(A,w, ne)
%n_e stands for the amount of equaitons in A. The other definition are the
%same. 

N = size(A,3);
nz = size(A,2);
nall = size(A,1);
out = zeros(nz*(N) + ne, 1);

for i = 1:(N+1)
    temp_index = nall*(i-1) + (1:nall);
    temp_w = nall*(i-2) + (1 :ne);
    if i == 1
        out(1:nz) = A(:, :, i)'* w(temp_index);
        continue
    end
    if i<=N
        out(nz*(i-1) + (1:nz)) = A(:, :, i)' * w(temp_index);
    end
    out(nz*(i-1) + (1:ne)) = out(nz*(i-1) + (1:ne)) + w(temp_w);
end