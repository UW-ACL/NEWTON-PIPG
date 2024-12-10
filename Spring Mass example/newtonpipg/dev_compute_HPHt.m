function [out, HPB] = dev_compute_HPHt(A, B, P_diag)%#codegen
    % we assume that H is [-A, -B, I] if not, change the sign of A and B
    % the out matrix is a 4 dimensional matrix. t is for the t th row
    % the third index is for the location. 1 for diag and 2 for off-diag
    A = -A;%we use -A 
    B = -B;%we use -B
    n = size(A, 1);
    T = (length(P_diag)-n)/ (size(B, 2)+n);%T rows in totald
    %P will have the following shape(Pa, Pb.....Pa, pb, pa)
    % Check if T is an integer

    Pend = P_diag((length(P_diag)- n+1):end);
    P_diag = reshape(P_diag(1:(length(P_diag)- n)), [], T);
    P_diag = transpose(P_diag); % I want to make sure that each row is the consequtive vector. 
    %disp(P)

    HPA = zeros(n, n, T);
    HPB = zeros([size(B), T]);
    for t  = 1:T
        HPA(:,:, t) = diag_multiply(P_diag(t,1:n), A, 2);% A *P
        HPB(:,:,t) = diag_multiply(P_diag(t, (n+1):end), B, 2);%B* p
    end
    out = zeros(n,n,2,  T);
    for  t = 1:T
        if t < T
            out(:, :,1,  t) = diag_sum(dev_multiply_symmetric(HPA(:, :, t), A') + dev_multiply_symmetric(HPB(:,:,t),B'), P_diag(t+1,1:n));%didn't use symmetry
        else
            out(:, :,1,  t) = diag_sum(dev_multiply_symmetric(HPA(:, :, t), A') + dev_multiply_symmetric(HPB(:,:,t),B'), Pend);% no diag.
        end
        if t > 1
            out(:,:, 2, t) = HPA(:,:,t);%don't need this
        end
    end
%     HPA(:,:,1) = zeros(size(HPA(:,:,1)));
%     out(:,:,2,:) = HPA;%This will add 0.003ms to the cost.
end
