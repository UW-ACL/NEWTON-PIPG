function projection = proj_soc(v0, epsilon)
    z1 = v0(end);
    z2 = v0(1:(end-1));
    nm2 = norm(z2);
    if epsilon * z1 >= nm2 
        projection = [z2; z1];
    elseif z1 <= -epsilon * nm2 
        projection = zeros(size(v0));
    else
        scalarPart = (1 / (epsilon^2 + 1)) * (z1 + epsilon * nm2 );
        vectorPart = (epsilon / (epsilon^2 + 1)) * (z1/ nm2  + epsilon) * (z2 );
        projection = [vectorPart; scalarPart];
    end
end
