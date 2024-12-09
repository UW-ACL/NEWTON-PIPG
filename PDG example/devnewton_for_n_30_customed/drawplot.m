% Initialize the x-axis values
close all;
init_y_loc = 0:50:2900;

% Create a new figure
figure1 = figure;

% Define colors for each plot
colors = lines(4);  % Generate a set of 4 distinct colors

% Plot all solution times with specified colors
h1 = plot(init_y_loc, solv_time_ecos, '-^', 'Color', colors(1,:), 'MarkerFaceColor', colors(1,:), 'DisplayName', 'ECOS');
hold on;
h2 = plot(init_y_loc, solv_time_newton_pipg, '-s', 'Color', colors(2,:), 'MarkerFaceColor', colors(2,:), 'DisplayName', 'Newton PIPG');

% For PIPG 4
h3 = plot(init_y_loc, solv_time_pipg_4, '-.', 'Color', colors(3,:), 'HandleVisibility', 'off');
scatter(init_y_loc(converge_pipg_4), solv_time_pipg_4(converge_pipg_4), 'o', 'filled', 'MarkerFaceColor', colors(3,:), 'DisplayName', 'PIPG 4 (converged)');
scatter(init_y_loc(~converge_pipg_4), solv_time_pipg_4(~converge_pipg_4), 'o', 'MarkerEdgeColor', colors(3,:), 'MarkerFaceColor', 'none', 'DisplayName', 'PIPG 4 (not converged)');

% For PIPG 8
h4 = plot(init_y_loc, solv_time_pipg_8, '--', 'Color', colors(4,:), 'HandleVisibility', 'off');
scatter(init_y_loc(converge_pipg_8), solv_time_pipg_8(converge_pipg_8), 'd', 'filled', 'MarkerFaceColor', colors(4,:), 'DisplayName', 'PIPG 8 (converged)');
scatter(init_y_loc(~converge_pipg_8), solv_time_pipg_8(~converge_pipg_8), 'd', 'MarkerEdgeColor', colors(4,:), 'MarkerFaceColor', 'none', 'DisplayName', 'PIPG 8 (not converged)');

% Add custom legend entries for convergence and non-convergence
h5 = plot(nan, nan, '-.o', 'Color', colors(3,:), 'MarkerFaceColor', colors(3,:), 'DisplayName', 'PIPG 4 (converged)');
h6 = plot(nan, nan, '-.o', 'Color', colors(3,:), 'MarkerFaceColor', 'none', 'DisplayName', 'PIPG 4 (not converged)');
h7 = plot(nan, nan, '--d', 'Color', colors(4,:), 'MarkerFaceColor', colors(4,:), 'DisplayName', 'PIPG 8 (converged)');
h8 = plot(nan, nan, '--d', 'Color', colors(4,:), 'MarkerFaceColor', 'none', 'DisplayName', 'PIPG 8 (not converged)');

% Add legend and labels
legend([h1, h2, h5, h6, h7, h8], 'Location', 'northwest');
xlabel('Initial y Location');
ylabel('Execution time (ms)');
%title('Solution Time and Convergence on Logarithmic Scale');

% Set y-axis to logarithmic scale
set(gca, 'YScale', 'log');
ylim([1, 10^(3.2)]);
print(figure1, 'computation_time.eps', '-depsc2');
hold off;

%%

ratio_ECOS = solv_time_ecos./solv_time_newton_pipg;
ratio_pipg_4 = solv_time_pipg_4./solv_time_newton_pipg;
ratio_pipg_8 = solv_time_pipg_8./solv_time_newton_pipg;



%Pipg doesn't converge if init_y_loc> 2300
index = init_y_loc < 2300;

% Create a figure window
figure2 = figure;

% Plot the first line (left y-axis)
yyaxis left;
plot(init_y_loc, ratio_ECOS,'-s', 'Color', [0, 0.4470, 0.7410], 'LineWidth', 2); % Professional blue
ylabel('ECOS ratio');
xlabel('Initial y Location');
%title('Comparison of Algorithm Runtimes');

% Plot the second and third lines (right y-axis), only for init_y_loc < 2250
yyaxis right;
plot(init_y_loc(index), ratio_pipg_4(index), '-o', 'Color', [0.8500, 0.3250, 0.0980], 'LineWidth', 2); % Professional red
hold on;
plot(init_y_loc(index), ratio_pipg_8(index), '-x', 'Color', [0.8500, 0.3250, 0.0980], 'LineWidth', 2); % Professional green
ylabel('PIPG ratio');

% Add legend
legend('ECOS', 'PIPG 4', 'PIPG 8');

% Adjust plot details
grid on;
hold off;
print(figure2, 'ratio.eps', '-depsc2');


