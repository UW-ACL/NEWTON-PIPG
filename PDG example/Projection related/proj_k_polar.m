function z = proj_k_polar(z0, cone_k_polar)
%% compute the projection to cone_k_polar;
z = zeros(size(z0));
for i = 1:length(z)
    if cone_k_polar(i) == 0
        z(i) = z0(i);% projection to Rn
    elseif z0(i)>=0
        z(i) = 0;
    else
        z(i) = z0(i);
    end
end
        
