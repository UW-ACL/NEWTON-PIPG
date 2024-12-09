//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_xpipg_onestep_g.h
//
// Code generation for function 'dev_xpipg_onestep_g'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void dev_xpipg_onestep_g(
    const emlrtStack &sp, const coder::array<real_T, 1U> &xi,
    const coder::array<real_T, 1U> &eta, real_T alpha, real_T beta, real_T rho,
    const real_T P[326], const real_T A[3190], const real_T q[326],
    const real_T g[290], real_T N, real_T nx, real_T nu, real_T ne,
    const real_T proj_index_all[660], const real_T proj_coefficient_all[660],
    const real_T cone_k_polar[290], real_T xi_n[326], real_T eta_n[290],
    real_T J_affine_D[326], real_T J_k_polar[290], real_T R[616],
    real_T temp_prime[326], real_T temp_dual[290]);

// End of code generation (dev_xpipg_onestep_g.h)
