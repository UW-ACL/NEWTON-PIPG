function [dzw, flag]= vec_newtonpipgupdate(alpha, beta, rho, R,P, J_D, H, Ht, J_k_polar)
%(I - JT)(delta_z, delta_w) = -R
flag = 0;%if flag = 0, the newtonstep matrix is invertable.
nz = size(J_D, 1);
R_z = R(1:nz)/rho;
R_w = R((nz+1): end)/rho;
R_new = [R_z; -2 * J_k_polar * beta* H* R_z + R_w];
J_T_new = [J_D * ( speye(size(P)) - alpha * P),  -1* alpha*J_D * Ht;...
        J_k_polar * beta*H , J_k_polar];
% try
    % temp = (speye(size(J_T_new))- J_T_new);
    % [a,b] = svd(temp);
    % threshold = 1e-10;
    % t = abs(diag(b))<threshold;
    % w = min(diag(b(t,t)));
    %dzw = (speye(size(J_T_new))*(1)- J_T_new)\(-1*R_new);%will have invertability issue
    %dzw = pinv(speye(size(J_T_new))*(1)- J_T_new)*(-1*R_new);%will have invertability issue
    
   dzw = (speye(size(J_T_new))- J_T_new + 0.001* norm(R) * speye(size(J_T_new)))\(-1*R_new); %will not have such things    
% catch ME
%     flag = 1;
%     dzw = R;
%     return
% end
% if any(isnan(dzw))||any(isinf(dzw))
%     flag = 1;
%     dzw  = -R;
% end
end