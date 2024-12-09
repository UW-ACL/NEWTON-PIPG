% Define a test point and radius
v0 = rand(3,1);
R =4;

% Define an anonymous function that includes R as part of the call to proj_ball
proj_ball_with_R = @(v) proj_soc(v, R);

% Calculate the numerical Jacobian of proj_ball at the test point v0
J = numericalJacobian(proj_ball_with_R, v0);

% Display the numerical Jacobian
disp(J);
disp(norm(v0))

norm(J-jacob_soc(v0, R))


