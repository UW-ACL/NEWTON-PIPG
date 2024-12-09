function [z,J] = proj_k_polar_with_jacobian(z0, cone_k_polar)
%% compute the projection to cone_k_polar;
%J is a vector. 
z = zeros(size(z0));
J =  ones(size(z));
for i = 1:length(z)
    if cone_k_polar(i) == 0
        z(i) = z0(i);% projection to Rn
    elseif z0(i)>=0
        z(i) = 0;
        J(i) = 0;
    else
        z(i) = z0(i);
    end
end
        