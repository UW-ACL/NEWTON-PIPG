function out = dev_g_Q_multi_vector(Q,v,proj_index_all, nx,nu, trans)%#codegen
%trans is a true or false. if trans = false we compute Q'v . otherwise Qv
l = length(v);
assert(l<= 360);
out = zeros(l,1);
N = size(Q, 3);
for i = 1:(N)
    proj_temp_index = proj_index_all(:,:,i);
    if i< N
        %v_temp_index = (i-1) * (nx + nu)+ (1:(nx + nu));
        out((i-1) * (nx + nu)+ (1:(nx + nu))) =Q_v_unit(v((i-1) * (nx + nu)+ (1:(nx + nu))), Q(:, :,i), proj_temp_index,trans);%Specified! only for the LCvx case
    else
        %v_temp_index = (i-1) * (nx + nu)+ (1:(nx));
        out((i-1) * (nx + nu)+ (1:(nx))) =Q_v_unit(v((i-1) * (nx + nu)+ (1:(nx))), Q(:, :,i), proj_temp_index,trans);%Specified! only for the LCvx case
    end



end


function v_out = Q_v_unit(v,Q_u, proj_index,trans)
l = length(v);
assert(l <15);
v_out = zeros(l,1);

temp = 1;
while temp <= length(v)
    if proj_index(1, temp) == inf
        break
    end
    Const_type = proj_index(2,temp);
    if Const_type == 1
        v_out(temp: proj_index(1, temp)) = diag(Q_u(temp: proj_index(1, temp), temp: proj_index(1, temp))).*v(temp: proj_index(1, temp));%check
    elseif  (Const_type ~= 1) && trans == true
        v_out(temp: proj_index(1, temp)) = (Q_u(temp: proj_index(1, temp), temp: proj_index(1, temp)))'*v(temp: proj_index(1, temp));%check

    else
        v_out(temp: proj_index(1, temp)) = (Q_u(temp: proj_index(1, temp), temp: proj_index(1, temp)))*v(temp: proj_index(1, temp));
    end
    %update
    temp = proj_index(1,temp) +1;
end