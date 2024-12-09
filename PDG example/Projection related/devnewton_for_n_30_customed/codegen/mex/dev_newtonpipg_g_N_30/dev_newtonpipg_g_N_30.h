//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonpipg_g_N_30.h
//
// Code generation for function 'dev_newtonpipg_g_N_30'
//

#pragma once

// Include files
#include "dev_newtonpipg_g_N_30_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Function Declarations
void dev_newtonpipg_g_N_30(
    dev_newtonpipg_g_N_30StackData *SD, const emlrtStack *sp,
    const real_T P[326], const real_T A[3190], const real_T q[326],
    const real_T g[290], real_T N, real_T nx, real_T nu, real_T nineq,
    const real_T proj_index_all[660], const real_T proj_coefficient_all[660],
    const real_T cone_k_polar[290], const real_T z_1[326], real_T lam,
    real_T rho, real_T omg, const struct0_T *newton_coeff, real_T maxit,
    real_T tol, real_T pertub, boolean_T display, struct1_T *out);

// End of code generation (dev_newtonpipg_g_N_30.h)
