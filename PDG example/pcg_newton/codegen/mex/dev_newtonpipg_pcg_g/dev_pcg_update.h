/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_pcg_update.h
 *
 * Code generation for function 'dev_pcg_update'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
real_T dev_pcg_update(const emlrtStack *sp, const real_T A[3190],
                      const real_T P[326], const real_T L[5800], real_T nx,
                      real_T nu, real_T ne, const real_T proj_index_all[660],
                      const real_T proj_coefficient_all[660],
                      const real_T diag_J_k_p[290],
                      const real_T temp_prime[326], real_T R[616], real_T alpha,
                      real_T beta, real_T rho, real_T delta_Y, real_T tol,
                      real_T max_iter, real_T dzw[616], real_T *iter,
                      real_T *accuracy);

/* End of code generation (dev_pcg_update.h) */
