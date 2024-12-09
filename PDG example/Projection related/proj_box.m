function z = proj_box(z0, l, u)
    z = max(l, min(z0, u));
end