//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// eml_mtimes_helper.cpp
//
// Code generation for function 'eml_mtimes_helper'
//

// Include files
#include "eml_mtimes_helper.h"
#include "rt_nonfinite.h"

// Function Definitions
void binary_expand_op_29(real_T in1_data[], int32_T in1_size[2], real_T in2,
                         const real_T in3_data[], const int32_T in3_size[2],
                         const real_T in4_data[], const int32_T in4_size[2])
{
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  if (in4_size[1] == 1) {
    loop_ub = in3_size[1];
  } else {
    loop_ub = in4_size[1];
  }
  in1_size[1] = loop_ub;
  if (in4_size[0] == 1) {
    b_loop_ub = in3_size[0];
  } else {
    b_loop_ub = in4_size[0];
  }
  in1_size[0] = b_loop_ub;
  stride_0_0 = (in3_size[1] != 1);
  stride_0_1 = (in3_size[0] != 1);
  stride_1_0 = (in4_size[1] != 1);
  stride_1_1 = (in4_size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1_data[i1 + in1_size[1] * i] =
          in2 * (in3_data[i1 * stride_0_0 + in3_size[1] * aux_0_1] -
                 in4_data[i1 * stride_1_0 + in4_size[1] * aux_1_1]);
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

// End of code generation (eml_mtimes_helper.cpp)
