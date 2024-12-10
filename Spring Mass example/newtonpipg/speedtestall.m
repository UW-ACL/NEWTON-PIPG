%clear;
%close all;
clc;
addpath util
addpath testfunctions

% we will use this code to test the performance of infeasibility testing
% the test will be performed in the following procedure
%we first run the conventional pipg. the maximum tol is set to 2000
%then we run the newton-pipg with infeasibility detection step
%we will see whether this will detect the infeasibility correctly
n = 32;
m = n/2;
N = 100;% will make the problem very ill-conditioned! We need to do preconditioning if we want to solve this
out = zeros(1,100);
for i =9%try 9

    ppv_newton = probsetupmass(n, m,N ,1,0.2, -1, -0.2, i);
    ppv_newton.rho = 1.6;
    ppv_newton.P = ppv_newton.P;

  % out1 = dev_pipg_withdetection(ppv_newton);%in fact xpipg
%[r2, out2] =  dev_newtonxpipg_infdetection(ppv);
  [r4, out4] = dev_newtonxpipg_infdetection_simplified(ppv_newton); 
  out(i) = out4.time;

  [x, w] = dev_newtonxpipg_infdetection(ppv_newton);
  out2 = dev_newtonxpipg(ppv_newton);
% disp("iteration end")
% [x,u,w] = seperation(xi, eta, ppv);
%disp(out3.feasflag)
% 
% time = timeit(@() dev_pipg(ppv));
% disp(['Average run time for pipg is: ', num2str(time*1000), ' ms']);

 % disp(out1.iter8)
end