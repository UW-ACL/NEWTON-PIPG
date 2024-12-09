% Initialize the x-axis values
init_y_loc = 0:100:2900;


% Create a new figure
figure;

% Define colors for each plot
colors = lines(4);  % Generate a set of 4 distinct colors

% Plot all solution times with specified colors
plot(init_y_loc, solv_time_mosek, '-o', 'Color', colors(1,:), 'DisplayName', 'MOSEK');
hold on;
plot(init_y_loc, solv_time_newton_pipg, '-x', 'Color', colors(2,:), 'DisplayName', 'Newton PIPG');
plot(init_y_loc, solv_time_pipg_4, '-.s', 'Color', colors(3,:), 'DisplayName', 'PIPG 4');
plot(init_y_loc, solv_time_pipg_8, '--d', 'Color', colors(4,:), 'DisplayName', 'PIPG 8');

% Mark convergence with solid circles, non-convergence with hollow
% For PIPG 4
scatter(init_y_loc(converge_pipg_4), solv_time_pipg_4(converge_pipg_4), 'o', 'filled', 'MarkerFaceColor', colors(3,:));
scatter(init_y_loc(~converge_pipg_4), solv_time_pipg_4(~converge_pipg_4), 'o', 'MarkerEdgeColor', colors(3,:));

% For PIPG 8
scatter(init_y_loc(converge_pipg_8), solv_time_pipg_8(converge_pipg_8), 'd', 'filled', 'MarkerFaceColor', colors(4,:));
scatter(init_y_loc(~converge_pipg_8), solv_time_pipg_8(~converge_pipg_8), 'd', 'MarkerEdgeColor', colors(4,:));

% Add legend and labels
legend('show');
xlabel('Initial y location');
ylabel('Solution time');
title('Solution Time and Convergence on Logarithmic Scale');

% Set y-axis to logarithmic scale
set(gca, 'YScale', 'log');

hold off;

%%
figure()
plot(init_y_loc, solv_time_mosek./solv_time_newton_pipg)