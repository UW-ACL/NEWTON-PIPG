% It's good practice to start by clearing YALMIPs internal database 
% Every time you call sdpvar etc, an internal database grows larger
yalmip('clear')
% Define variables
x = sdpvar(10,1);

% Define constraints 
Constraints = [sum(x) <= 10, x(1) == 0, 0.5 <= x(2) <= 1.5];
for i = 1 : 7
  Constraints = [Constraints, x(i) + x(i+1) <= x(i+2) + x(i+3)];%Use the constraints as a list.
end

% Define an objective
Objective = x'*x+norm(x,1);

% Set some options for YALMIP and solver
options = sdpsettings('verbose',0);

% Solve the problem
sol = optimize(Constraints,Objective,options);
% Analyze error flags
if sol.problem == 0
 % Extract and display value
 solution = value(x)
else
 display('Hmm, something went wrong!');
 sol.info
 yalmiperror(sol.problem)
end