/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_S_inv_g.h
 *
 * Code generation for function 'dev_S_inv_g'
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
void binary_expand_op_18(const emlrtStack *sp, emxArray_real_T *in1,
                         const emxArray_real_T *in2, const emxArray_real_T *in3,
                         const emxArray_real_T *in4);

void dev_S_inv_g(const emlrtStack *sp, const real_T z0[326], real_T nx,
                 real_T nu, const real_T proj_index_all[660],
                 const real_T proj_coefficients_all[660], const real_T P[326],
                 real_T alpha, emxArray_real_T *Q, emxArray_real_T *Q_inv);

/* End of code generation (dev_S_inv_g.h) */
