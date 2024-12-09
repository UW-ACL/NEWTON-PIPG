% Copyright (c) 2021, Autonomous Controls Laboratory, University of Washington, Seattle
% -------------------------------------------------------------------------------------
% 3DoF Powered-Descent Guidance on Mars with lossless convexification for thrust lower 
% bound and thrust pointing constraints
% Coordinate System: (X-Y-Z) -> (East-North-Up)
% -------------------------------------------------------------------------------------
% derived quantities computed immediately after running problem_data.m


ToF                     = N*dt;                        % horizon length (number of nodes)


nx                      = 7;                                    % state vector length
nu                      = 4;                                    % input vector length
nxnu                    = nx+nu;

                                                                
Ac                      = [zeros(3,3) eye(3) zeros(3,1);        % continuous-time system
                           zeros(4,7)];
Bc                      = [zeros(3,4);
                           eye(3) zeros(3,1);
                           zeros(1,3) -alf];
gc                      = [zeros(3,1);g;0];

Ad                      = [eye(3) dt*eye(3) zeros(3,1);         % discrete-time system
                           zeros(4,3) eye(4)];
Bd                      = [dt*dt*0.5*eye(3) zeros(3,1);
                           dt*eye(3) zeros(3,1);
                           zeros(1,3) -alf*dt];
gd                      = [dt*dt*0.5*g;dt*g;0];

tvec                    = (0:dt:(N-1)*dt)';                     % time grid of length N [s]
costht_tp               = cosd(theta_tp);
tangam_gs               = tand(gamma_gs);
cotgam_gs               = cotd(gamma_gs);
ln_mwet                 = log(mwet);
rho1                    = min_throttle*T_max;
rho2                    = max_throttle*T_max;
mu_1                    = rho1 ./ (mwet-alf*rho2*tvec);
mu_2                    = rho2 ./ (mwet-alf*rho2*tvec);
z_0                     = log(mwet - alf*rho2*tvec);
z_1                     = log(mwet - alf*rho1*tvec);
z_min                   = max(log(mdry),z_0);  

% ar                      = 1;
% av                      = 1;
% az                      = 1;
% au                      = 1;
% asig                    = 1;

Ar                      = diag(ar*ones(3,1));
Av                      = diag(av*ones(3,1));
Au                      = diag(au*ones(3,1));
sclAd                   = blkdiag(Ar,Av,az);
invsclAd                = inv(sclAd);
sclBd                   = blkdiag(Au,asig);
invsclBd                = inv(sclBd);

fprintf('Objective function choice: ')
switch obj_flag
    case 'lqr' 
        fprintf('LQR\nIt is *strongly* convex (has quadratic terms of states, inputs and slack variables).\n\n');
    case 'min-effort' 
        fprintf('Control Effort\nIt is *not* strongly convex (has quadratic terms of inputs and slack variables).\n\n');
    case 'min-fuel'
        fprintf('Fuel Consumption\nIt is *not* strongly convex (-ve of final log mass).\n\n')
end

assert((Ar(1,1)==ar)&&(Ar(2,2)==ar)&&(Ar(3,3)==ar),'Scaling for all components of r should be the same.');
assert((Av(1,1)==av)&&(Av(2,2)==av)&&(Av(3,3)==av),'Scaling for all components of v should be the same.');
assert((Au(1,1)==au)&&(Au(2,2)==au)&&(Au(3,3)==au),'Scaling for all components of u should be the same.');
assert(asig==au,'Scaling for u and sig should be same.');

tp_vec                  = blkdiag(Au,asig)*[0; 0; -1/costht_tp; 1];
thrst_bnd_mat           = cell(N-1,1);
thrst_bnd_vec           = cell(N-1,1);
for t = 1:N-1    
    thrst_bnd_mat{t}    = [-mu_1(t) -1;
                            mu_2(t)  1]*diag([az,asig]);
    thrst_bnd_vec{t}    = [-mu_1(t)*(1+z_0(t));
                            mu_2(t)*(1+z_0(t))];
end
gs_mat                  = [1 0 0;
                           0 1 0];
gs_vec                  = [0;0;1/tangam_gs];

% reference state trajectory
r_ref                   = zeros(3,N);
v_ref                   = zeros(3,N);
z_ref                   = zeros(1,N);
for t = 0:N-1
    r_ref(:,t+1)        = ((N-1-t)*r_init/(N-1) + t*r_fin/(N-1))/ar; 
    v_ref(:,t+1)        = ((N-1-t)*v_init/(N-1) + t*v_fin/(N-1))/av;
    z_ref(t+1)          = ((N-1-t)*ln_mwet/(N-1) + t*log(mdry)/(N-1))/az;
end

assert(z_min(end)>=log(mdry),'Lower-bound on final vehicle mass is smaller than dry mass.');

% Construction of convex optimization problem properties with states and
% control inputs stacked into a vector
% x = [r0^T v0^T z0 u0^T sig0 ... rN-2^T vN-2^T zN-2 uN-2^T sigN-2 rN-1^T vN-1^T zN-1]
% see eq. (1) of https://arxiv.org/pdf/2108.10260.pdf

len_x                                                                   = nx*N + nu*(N-1);

G                                                                       = zeros(len_x,len_x);
h                                                                       = zeros(len_x,1);

switch obj_flag
    case 'min-fuel'
        h(end)                                                          = -1;
    case 'lqr'
        for t = 1:N-1
            G((t-1)*nxnu+1:t*nxnu,(t-1)*nxnu+1:t*nxnu)                  = eye(nxnu);
            h((t-1)*nxnu+1:t*nxnu)                                      = [-r_ref(:,t);-v_ref(:,t);-z_ref(t);zeros(nu,1)];
        end
        h((N-1)*nxnu+1:len_x)                                           = [-r_ref(:,N);-v_ref(:,N);-z_ref(N)];
        G((N-1)*nxnu+1:len_x,(N-1)*nxnu+1:len_x)                        = eye(nx);
    case 'min-effort'
        for t = 1:N-1
            G((t-1)*11+1:t*11,(t-1)*11+1:t*11)                          = blkdiag(zeros(7,7),eye(4));
        end
end
G                                                                       = sparse(G);
h                                                                       = sparse(h);

H                                                                       = zeros((N-1)*nx+N-1+(N-1)*2,len_x);
phi                                                                     = [kron(ones(N-1,1),invsclAd*gd);zeros(3*N-3,1)];
for t = 1:N-1
    H((t-1)*nx+1:t*nx,(t-1)*nxnu+1:(t-1)*nxnu+nxnu+nx)                  = [-invsclAd*Ad*sclAd -invsclAd*Bd*sclBd eye(nx)];
    H((N-1)*nx+t,(t-1)*nxnu+1:t*nxnu)                                   = [zeros(1,nx) -tp_vec'];
    H((N-1)*(nx+1)+(t-1)*2+1:(N-1)*(nx+1)+t*2,(t-1)*nxnu+1:t*nxnu)      = [zeros(2,6) -thrst_bnd_mat{t}(:,1) zeros(2,3) -thrst_bnd_mat{t}(:,2)];
    phi((N-1)*(nx+1)+(t-1)*2+1:(N-1)*(nx+1)+t*2)                        = -thrst_bnd_vec{t};
end
H                                                                       = sparse(H);
HT                                                                      = transpose(H);
phi                                                                     = sparse(phi);

Hfull                                                                   = full(H);
HTfull                                                                  = full(HT);
Gfull                                                                   = full(G);
phifull                                                                 = full(phi);
hfull                                                                   = full(h);

% PIPG parameters

lambdaMax_G                                                             = max(diag(Gfull));
lambdaMin_G                                                             = min(diag(Gfull));
singlvalMax_HTH                                                         = max(svd(full(HT*H)));
alf_const_pipg                                                          = 4/(sqrt(lambdaMax_G^2 + 16*singlvalMax_HTH)+lambdaMax_G);
params_pipg_var                                                         = [lambdaMin_G,lambdaMin_G+2*lambdaMax_G,kmax,rstrt]; %,singlvalMax_HTH];
params_pipg_const                                                       = [kmax,alf_const_pipg];
params_setD                                                             = [N,cotgam_gs,vmax/av,r_init'/ar,v_init'/av,ln_mwet/az,r_fin'/ar,v_fin'/av,z_min'/az,z_1'/az];
params_coneK                                                            = [nx,N];

if strcmp(obj_flag,'lqr')
params_pipg_var_c                                                       = [lambdaMin_G,lambdaMin_G+2*lambdaMax_G,kmax,rstrt,nx,N,params_setD(2:end)]; %,singlvalMax_HTH];
%save('./solver/pipg_var_c_data.mat','Hfull','HTfull','phifull','Gfull','hfull','params_pipg_var_c')
pipg_var_c_arg                                                          = struct;
pipg_var_c_arg.N                                                        = N;
pipg_var_c_arg.H                                                        = H;
pipg_var_c_arg.HT                                                       = HT;
pipg_var_c_arg.G                                                        = G;
pipg_var_c_arg.phi                                                      = phi;
pipg_var_c_arg.h                                                        = h;
pipg_var_c_arg.params_pipg_var_c                                        = params_pipg_var_c;
%save('./solver/pipg_var_c_args.mat','pipg_var_c_arg');
elseif strcmp(obj_flag,'min-fuel')
% not saving pipg_const_c_data since code is not generated for pipg_const_c_load().
% pipg_const_c_load() cannot accept sparse G, H, phi, h
params_pipg_const_c                                                     = [kmax,nx,N,params_setD(2:end)];
pipg_const_c_arg                                                        = struct;
pipg_const_c_arg.N                                                      = N;
pipg_const_c_arg.H                                                      = H;
pipg_const_c_arg.HT                                                     = HT;
pipg_const_c_arg.phi                                                    = phi;
pipg_const_c_arg.h                                                      = h;

pipg_const_c_arg.params_pipg_const_c                                    = params_pipg_const_c;
%save('./solver/pipg_const_c_args.mat','pipg_const_c_arg');
end

Xinit_pipg                                                              = randn(len_x,1);
Vinit_pipg                                                              = randn((nx+3)*(N-1),1);

% parameters for PIPG decomposed
params_d                                                                = struct;
params_d.N                                                              = N;
params_d.rstrt                                                          = rstrt;
params_d.kmax                                                           = kmax;
params_d.mu                                                             = lambdaMin_G;
% params_d.singlvalMax_HTH                                                = singlvalMax_HTH;
params_d.mup2lam                                                        = lambdaMin_G+2*lambdaMax_G;
params_d.rinit                                                          = r_init'/ar;
params_d.vinit                                                          = v_init'/av;
params_d.zinit                                                          = ln_mwet/az;
params_d.rfin                                                           = r_fin'/ar;
params_d.vfin                                                           = v_fin'/av;
params_d.r_ref                                                          = r_ref';
params_d.v_ref                                                          = v_ref';
params_d.z_ref                                                          = z_ref';
params_d.dt                                                             = dt;
params_d.GamZ                                                           = zeros(N-1,2);
params_d.GamSig                                                         = zeros(N-1,2);
params_d.zsig_vec                                                       = zeros(N-1,2);
params_d.Lam                                                            = -tp_vec';
for t = 1:N-1
    params_d.GamZ(t,:)                                                  = -thrst_bnd_mat{t}(:,1)';    
    params_d.GamSig(t,:)                                                = -thrst_bnd_mat{t}(:,2)';
    params_d.zsig_vec(t,:)                                              = -thrst_bnd_vec{t}';   
end
params_d.cotgam_gs                                                      = cotgam_gs;
params_d.vmax                                                           = vmax/av;
params_d.z_1                                                            = z_1/az;
params_d.z_0                                                            = z_min/az;
params_d.g                                                              = g';  
params_d.alf_z                                                          = alf;
params_d.sectht_tp                                                      = 1/costht_tp;
params_d.a_r                                                            = ar;
params_d.a_v                                                            = av;
params_d.a_z                                                            = az;
params_d.a_u                                                            = au;
params_d.a_sig                                                          = asig;

params_d.rpl_rnd                                                        = randn(N,3);
params_d.r_rnd                                                          = randn(N,3);
params_d.vpl_rnd                                                        = randn(N,3);
params_d.v_rnd                                                          = randn(N,3);
params_d.zpl_rnd                                                        = randn(N,1);
params_d.z_rnd                                                          = randn(N,1);
params_d.fpl_rnd                                                        = randn(N-1,4);
params_d.f_rnd                                                          = randn(N-1,4);
params_d.yrpl_rnd                                                       = randn(N-1,3);
params_d.yr_rnd                                                         = randn(N-1,3);
params_d.yvpl_rnd                                                       = randn(N-1,3);
params_d.yv_rnd                                                         = randn(N-1,3);
params_d.yzpl_rnd                                                       = randn(N-1,1);
params_d.yz_rnd                                                         = randn(N-1,1);
params_d.ytppl_rnd                                                      = randn(N-1,1);
params_d.ytp_rnd                                                        = randn(N-1,1);
params_d.yzsigpl_rnd                                                    = randn(N-1,2);
params_d.yzsig_rnd                                                      = randn(N-1,2);
if strcmp(obj_flag,'lqr')
    %save('./solver/pipg_var_c_d_data.mat','params_d');
elseif strcmp(obj_flag,'min-fuel')
    params_const_d = params_d;
    params_const_d = rmfield(params_const_d,{'mu','mup2lam','r_ref','v_ref','z_ref','rstrt'});
    %save('./solver/pipg_const_c_d_data.mat','params_const_d');
end

% Additional parameters for CVX
params_prsr                                                             = params_d;
params_prsr.slver_name                                                  = slver_name;
params_prsr.prsr_name                                                   = prsr_name;
params_prsr.obj_flag                                                    = obj_flag;
%save(horzcat('./solver/prsr_',obj_flag,'_data.mat'),'params_prsr');

% Additional parameters of BSOCP
params_bsocp.N                                                          = N;
params_bsocp.z0                                                         = z_0;
params_bsocp.z1                                                         = z_1;
params_bsocp.zmin                                                       = z_min;
params_bsocp.mu1                                                        = mu_1;
params_bsocp.mu2                                                        = mu_2;
params_bsocp.rinit_ar                                                   = r_init/ar;
params_bsocp.vinit_av                                                   = v_init/av;
params_bsocp.zinit_az                                                   = ln_mwet/az;
params_bsocp.rfin_ar                                                    = r_fin/ar;
params_bsocp.vfin_av                                                    = v_fin/av;
params_bsocp.rref                                                       = r_ref;
params_bsocp.vref                                                       = v_ref;
params_bsocp.zref                                                       = z_ref;
params_bsocp.Zref                                                       = zeros(11*N-4,1);
for j=1:N-1
    params_bsocp.Zref(11*(j-1)+1:11*j)                                  = [r_ref(:,j);v_ref(:,j);z_ref(j);zeros(4,1)];
end
params_bsocp.Zref(11*(N-1)+1:11*N-4)                                    = [r_ref(:,N);v_ref(:,N);z_ref(N)];
params_bsocp.cot_gs_max                                                 = cotgam_gs;
params_bsocp.cos_tp_max                                                 = costht_tp;
params_bsocp.vmax_av                                                    = vmax/av;
params_bsocp.az                                                         = az;
params_bsocp.au                                                         = au;
params_bsocp.dtavbar                                                    = dt*av/ar;
params_bsocp.dt2aub2ar                                                  = dt*dt*au/(2*ar);
params_bsocp.gdt2b2ar                                                   = dt*dt*g/(2*ar);
params_bsocp.dtaubav                                                    = dt*au/av;
params_bsocp.gdtbav                                                     = dt*g/av;
params_bsocp.alfdtasigbaz                                               = alf*dt*asig/az;
params_bsocp.ar                                                         = ar;
params_bsocp.av                                                         = av;
%save(horzcat('./bsocp/bsocp_',obj_flag,'_data.mat'),'params_bsocp');

%save(horzcat('./solver/scaling_',obj_flag,'_data.mat'),'ar','av','Ar','Av','az','Au','asig');

% diagnostics
% params_diagnose                                                         = struct;
% params_diagnose.H                                                       = H;
% params_diagnose.HT                                                      = HT;
% params_diagnose.G                                                       = G;
% params_diagnose.h                                                       = h;
% params_diagnose.phi                                                     = phi;
% params_diagnose.par_setD                                                = params_setD;
% params_diagnose.par_conK                                                = params_coneK;