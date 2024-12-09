/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_g_PCG_newton_pipg_update.h
 *
 * Code generation for function 'dev_g_PCG_newton_pipg_update'
 *
 */

#pragma once

/* Include files */
#include "dev_newtonpipg_pcg_g_types.h"
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
void binary_expand_op_14(real_T in1[616], const real_T in2[326],
                         const emxArray_real_T *in3, const real_T in4[290]);

void dev_g_PCG_newton_pipg_update(
    dev_newtonpipg_pcg_gStackData *SD, const emlrtStack *sp,
    const real_T A[3190], const real_T P[326], real_T nx, real_T nu, real_T ne,
    const real_T proj_index_all[660], const real_T proj_coefficient_all[660],
    const real_T diag_J_k_p[290], const real_T temp_prime[326], real_T R[616],
    real_T alpha, real_T beta, real_T rho, real_T delta_Y, real_T dzw[616],
    real_T chol_y[5800]);

/* End of code generation (dev_g_PCG_newton_pipg_update.h) */
