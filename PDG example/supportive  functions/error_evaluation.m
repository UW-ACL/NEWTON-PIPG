a = value(z);
%a = out_pipg_dev.xi;
b = out3.xi;
threshold = 0.1;


diff_abs = abs(a - b);

b_abs = abs(b);


valid_indices = b_abs > threshold;


ratios = diff_abs(valid_indices) ./ b_abs(valid_indices);

max_ratio = max(ratios);
disp(max_ratio)

disp(norm(diff_abs))