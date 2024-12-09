function v = proj_ball(v0, R)
%Projection to a ball center at 0.
    nm = norm(v0);
    if nm> R
        v = v0/nm * R;
    else
        v = v0;
    end
end