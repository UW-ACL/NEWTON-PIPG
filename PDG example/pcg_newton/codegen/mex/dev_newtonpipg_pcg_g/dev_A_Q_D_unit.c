/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_A_Q_D_unit.c
 *
 * Code generation for function 'dev_A_Q_D_unit'
 *
 */

/* Include files */
#include "dev_A_Q_D_unit.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_emxutil.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "rt_nonfinite.h"

/* Function Definitions */
void binary_expand_op_13(const emlrtStack *sp, emxArray_real_T *in1,
                         const real_T in2[3190], int32_T in3,
                         const emxArray_real_T *in4, const emxArray_real_T *in5)
{
  const real_T *in4_data;
  const real_T *in5_data;
  real_T *in1_data;
  int32_T i;
  int32_T in4_idx_0;
  int32_T in5_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  in5_data = in5->data;
  in4_data = in4->data;
  in4_idx_0 = in4->size[1];
  in5_idx_0 = in5->size[0];
  if (in5_idx_0 == 1) {
    loop_ub = in4_idx_0;
  } else {
    loop_ub = in5_idx_0;
  }
  i = in1->size[0] * in1->size[1];
  in1->size[1] = loop_ub;
  in1->size[0] = 10;
  emxEnsureCapacity_real_T(sp, in1, i, &ae_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in4_idx_0 != 1);
  in4_idx_0 = (in5_idx_0 != 1);
  for (i = 0; i < 10; i++) {
    for (in5_idx_0 = 0; in5_idx_0 < loop_ub; in5_idx_0++) {
      in1_data[in5_idx_0 + in1->size[1] * i] =
          in2[(in3 + 29 * ((int32_T)in4_data[in5_idx_0 * stride_0_0] - 1)) +
              319 * i] *
          in5_data[in5_idx_0 * in4_idx_0];
    }
  }
}

/* End of code generation (dev_A_Q_D_unit.c) */
