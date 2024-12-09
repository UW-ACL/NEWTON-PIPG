/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * proj_D_unit_with_affinejacobian.c
 *
 * Code generation for function 'proj_D_unit_with_affinejacobian'
 *
 */

/* Include files */
#include "proj_D_unit_with_affinejacobian.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_emxutil.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void binary_expand_op_3(const emlrtStack *sp, emxArray_real_T *in1,
                        const emxArray_boolean_T *in2,
                        const emxArray_boolean_T *in3)
{
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  const boolean_T *in2_data;
  const boolean_T *in3_data;
  in3_data = in3->data;
  in2_data = in2->data;
  if (in3->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in3->size[0];
  }
  i = in1->size[0];
  in1->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, in1, i, &ld_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in3->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = ((!in2_data[i * stride_0_0]) && (!in3_data[i * stride_1_0]));
  }
}

/* End of code generation (proj_D_unit_with_affinejacobian.c) */
