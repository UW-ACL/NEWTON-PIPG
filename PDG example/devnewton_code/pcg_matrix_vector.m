function out = pcg_matrix_vector(A, B, At, Bt, S_invJd, x0)
out =  S_invJd.*dev_HtZ(At,Bt, x0);
out = dev_HZ(A,B, out);
