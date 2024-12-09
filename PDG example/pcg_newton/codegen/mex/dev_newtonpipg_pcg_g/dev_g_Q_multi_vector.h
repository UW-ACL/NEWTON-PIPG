/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_g_Q_multi_vector.h
 *
 * Code generation for function 'dev_g_Q_multi_vector'
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
void b_dev_g_Q_multi_vector(const emlrtStack *sp, const emxArray_real_T *Q,
                            const real_T v[326],
                            const real_T proj_index_all[660], real_T nx,
                            real_T nu, real_T out[326]);

void c_dev_g_Q_multi_vector(const emlrtStack *sp, const emxArray_real_T *Q,
                            const emxArray_real_T *v,
                            const real_T proj_index_all[660], real_T nx,
                            real_T nu, emxArray_real_T *out);

void d_dev_g_Q_multi_vector(const emlrtStack *sp, const emxArray_real_T *Q,
                            const emxArray_real_T *v,
                            const real_T proj_index_all[660], real_T nx,
                            real_T nu, emxArray_real_T *out);

void dev_g_Q_multi_vector(const emlrtStack *sp, const emxArray_real_T *Q,
                          const real_T v[326], const real_T proj_index_all[660],
                          real_T nx, real_T nu, real_T out[326]);

/* End of code generation (dev_g_Q_multi_vector.h) */
