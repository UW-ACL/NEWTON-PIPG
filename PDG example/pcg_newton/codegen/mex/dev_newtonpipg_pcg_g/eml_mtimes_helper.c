/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eml_mtimes_helper.c
 *
 * Code generation for function 'eml_mtimes_helper'
 *
 */

/* Include files */
#include "eml_mtimes_helper.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_emxutil.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void binary_expand_op_33(const emlrtStack *sp, emxArray_real_T *in1, real_T in2,
                         const emxArray_real_T *in3)
{
  emxArray_real_T *b_in2;
  const real_T *in3_data;
  real_T *in1_data;
  real_T *in2_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in3_data = in3->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in2, 2, &eg_emlrtRTEI);
  if (in3->size[1] == 1) {
    loop_ub = in1->size[1];
  } else {
    loop_ub = in3->size[1];
  }
  i = b_in2->size[0] * b_in2->size[1];
  b_in2->size[1] = loop_ub;
  if (in3->size[0] == 1) {
    b_loop_ub = in1->size[0];
  } else {
    b_loop_ub = in3->size[0];
  }
  b_in2->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, b_in2, i, &eg_emlrtRTEI);
  in2_data = b_in2->data;
  stride_0_0 = (in1->size[1] != 1);
  stride_0_1 = (in1->size[0] != 1);
  stride_1_0 = (in3->size[1] != 1);
  stride_1_1 = (in3->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in2_data[i1 + b_in2->size[1] * i] =
          in2 * (in1_data[i1 * stride_0_0 + in1->size[1] * aux_0_1] -
                 in3_data[i1 * stride_1_0 + in3->size[1] * aux_1_1]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = in1->size[0] * in1->size[1];
  in1->size[1] = loop_ub;
  in1->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, in1, i, &eg_emlrtRTEI);
  in1_data = in1->data;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1->size[1] * i] = in2_data[i1 + b_in2->size[1] * i];
    }
  }
  emxFree_real_T(sp, &b_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (eml_mtimes_helper.c) */
