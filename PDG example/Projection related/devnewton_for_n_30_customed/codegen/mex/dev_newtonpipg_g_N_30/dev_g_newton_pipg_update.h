//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_g_newton_pipg_update.h
//
// Code generation for function 'dev_g_newton_pipg_update'
//

#pragma once

// Include files
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Type Declarations
struct dev_newtonpipg_g_N_30StackData;

// Function Declarations
void b_dev_g_newton_pipg_update(
    dev_newtonpipg_g_N_30StackData *SD, const emlrtStack &sp,
    const real_T A[3190], const real_T P[326], real_T nx, real_T nu, real_T ne,
    const real_T proj_index_all[660], const real_T proj_coefficient_all[660],
    const real_T diag_J_k_p[290], const real_T temp_prime[326], real_T R[616],
    real_T alpha, real_T beta, real_T rho, real_T delta_Y, real_T dzw[616]);

// End of code generation (dev_g_newton_pipg_update.h)
