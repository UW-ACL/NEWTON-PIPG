rng(100)
xu = randn(nH_c, 1)*10;
zk = randn(nH_r, 1)*10;

xu_proj = proj_D(xu, N, nx, nu, proj_index_all, proj_coefficients_all);
zk_proj = proj_k_polar(zk, cone_k_polar);

[J_D,J_affine_D] = jacob_D_vec(xu, N, nx, nu,  proj_index_all, proj_coefficients_all);
J_kpolar = jacob_k_polar_vec(zk, cone_k_polar);
