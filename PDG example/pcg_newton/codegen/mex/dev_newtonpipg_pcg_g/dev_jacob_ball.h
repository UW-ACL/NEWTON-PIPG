/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_jacob_ball.h
 *
 * Code generation for function 'dev_jacob_ball'
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
void binary_expand_op_22(const emlrtStack *sp, emxArray_real_T *in1,
                         const emxArray_creal_T *in2,
                         const emxArray_real_T *in3);

void binary_expand_op_24(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, const emxArray_creal_T *in4,
                         const emxArray_creal_T *in5);

void binary_expand_op_25(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, const emxArray_creal_T *in3,
                         const emxArray_creal_T *in4);

void binary_expand_op_26(const emlrtStack *sp, emxArray_creal_T *in1,
                         const emxArray_creal_T *in3,
                         const emxArray_creal_T *in4);

void dev_jacob_ball(const emlrtStack *sp, const emxArray_real_T *v, real_T R,
                    const emxArray_real_T *P, real_T alpha,
                    emxArray_real_T *Q_out, emxArray_real_T *Q_inv);

void times(const emlrtStack *sp, emxArray_creal_T *in1,
           const emxArray_creal_T *in2, const emxArray_real_T *in3);

/* End of code generation (dev_jacob_ball.h) */
