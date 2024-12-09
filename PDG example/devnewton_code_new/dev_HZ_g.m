function out = dev_HZ_g(A,z, n_e)
%This function is only designed for PDG
%We assume that the B matrix, an indentity matrix arounded by zero matrix.
%If we are applying First order hold, we need to fix this to more general
%settings. 
%A is the matrix including all equalities. n_e is the amount of equalities,
%which is also the amount of state variable at time t.
N = size(A,3);
nz = size(A,2);
nall = size(A,1);
out = zeros(size(A,1)*N,1);

for i = 1: (N)
    index_Hstart = (i-1)*nall +1;
    index_zstart = (i-1)*nz +1;
    out(index_Hstart:(index_Hstart+nall-1)) = A(:, :,i) * z(index_zstart:(index_zstart+nz-1));
    out(index_Hstart:(index_Hstart+n_e-1)) = out(index_Hstart:(index_Hstart+n_e-1)) + z((index_zstart+nz):(index_zstart+nz+n_e-1));
end
end
