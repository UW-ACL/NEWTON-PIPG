function J = jacob_k_polar_vec(z0, cone_k_polar)
z = zeros(size(z0));
for i = 1:length(z)
    if cone_k_polar(i) == 0
        z(i) = 1;% projection to Rn
    elseif z0(i)>=0
        z(i) = 0;
    else
        z(i) = 1;
    end
end
J = diag(z);
end