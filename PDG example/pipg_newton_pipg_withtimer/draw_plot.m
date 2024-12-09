% % Extract Newton-PIPG data
% newtonpipg_solvetime = out3.timeout;
% newtonpipg_index = newtonpipg_solvetime > 0;
% newtonpipg_solvetime = out3.timeout(newtonpipg_index);
% newtonpipg_pipgR = out3.pipgR(newtonpipg_index);
% 
% % Extract PIPG data
% pipg_index = out_pipg_dev_8.timeout > 0 & out_pipg_dev_8.timeout < 0.015;
% pipg_time = out_pipg_dev_8.timeout(pipg_index);
% pipg_pipgR = out_pipg_dev_8.pipgR(pipg_index);
% 
% % Create figure
% figure;
% 
% % Plot Newton-PIPG data
% semilogy(newtonpipg_solvetime * 1000, newtonpipg_pipgR, 'b-', 'LineWidth', 2, 'DisplayName', 'Newton-PIPG');
% hold on;
% 
% % Plot PIPG data
% semilogy(pipg_time * 1000, pipg_pipgR, 'r--', 'LineWidth', 2, 'DisplayName', 'PIPG');
% 
% % Set graph properties
% xlabel('Solve Time (ms)');
% ylabel('PIPG Residual Norm');
% %title('Solve Time vs. Residual');
% legend('show');
% grid on;
% 
% % Set axis limits
% xlim([0, 9]);
% ylim([1e-15, 1e5]);
% 
% % Save the figure as a PNG file
% saveas(gcf, 'solve_time_vs_residual.eps');

% Extract Newton-PIPG data
newtonpipg_solvetime = out3.timeout;
newtonpipg_index = newtonpipg_solvetime > 0;
newtonpipg_solvetime = out3.timeout(newtonpipg_index);
newtonpipg_pipgR = out3.pipgR(newtonpipg_index);

% Extract PIPG data
pipg_index = out_pipg_dev_8.timeout > 0 & out_pipg_dev_8.timeout < 0.015;
pipg_time = out_pipg_dev_8.timeout(pipg_index);
pipg_pipgR = out_pipg_dev_8.pipgR(pipg_index);

% Create figure
figure;

% Plot Newton-PIPG data
% Plot PIPG data
semilogy(pipg_time * 1000, pipg_pipgR, 'LineWidth', 4, 'DisplayName', 'PIPG');
hold on;


semilogy(newtonpipg_solvetime * 1000, newtonpipg_pipgR, 'LineWidth', 4, 'DisplayName', 'Newton-PIPG');


% Set graph properties
xlabel('Execution Time (ms)');
ylabel('PIPG Residual Norm');
%title('Solve Time vs. Residual');
legend('show');
grid on;

% Set axis limits
xlim([0, 9]);
ylim([1e-15, 1e5]);

% Save the figure as a color EPS file
print('solve_time_vs_residual.eps', '-depsc2');
