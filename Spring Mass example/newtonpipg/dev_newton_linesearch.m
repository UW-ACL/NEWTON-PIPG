function [xi, eta,cholflag, residualdrop,L] = dev_newton_linesearch(xi, eta, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max, nx, ratio)
%Newton + linesearch
%the newton failed if residualdrop == 1
[xinn, etann,idn, ~, R] = dev_onestep_xpipg( xi, eta, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);%we must do this step inorder to get the most updated R
[dzw, cholflag, L]  = dev_newtonpipgupdate(A, B,At, Bt, P, idn, -R, length(z_min), alpha, beta, rho);
%%
%linesearch

residualdrop = 1;
if cholflag == 0%not ill
    for kk = 1.5.^((-1)* (0:5))
        xinew = xi + kk* dzw(1: nx);
        etanew = eta + kk * dzw((nx+1): end);
        [xin, etan, ~, ~, Rn] = dev_onestep_xpipg( xinew, etanew, alpha, beta, rho, P , A, B,At, Bt, q, g, z_min, z_max);
        residualdrop_temp = norm(Rn)/norm(R);
        if residualdrop_temp < ratio
            xi = xin;
            eta = etan;
            %R = Rn;
            residualdrop = residualdrop_temp;
            break;
        end
    end
end

if residualdrop == 1
    xi = xinn;
    eta = etann;
end

end


