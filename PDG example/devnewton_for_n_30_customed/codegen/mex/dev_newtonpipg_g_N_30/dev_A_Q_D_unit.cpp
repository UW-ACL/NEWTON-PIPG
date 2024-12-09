//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_A_Q_D_unit.cpp
//
// Code generation for function 'dev_A_Q_D_unit'
//

// Include files
#include "dev_A_Q_D_unit.h"
#include "rt_nonfinite.h"

// Function Definitions
void binary_expand_op_30(real_T in1_data[], int32_T in1_size[2],
                         const real_T in2[3190], int32_T in3, int32_T in4,
                         int32_T in5, const real_T in6_data[],
                         const int32_T &in6_size)
{
  int32_T i;
  int32_T in6_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  in6_idx_0 = in6_size;
  i = in5 - in4;
  if (in6_idx_0 == 1) {
    loop_ub = i;
  } else {
    loop_ub = in6_idx_0;
  }
  in1_size[1] = loop_ub;
  in1_size[0] = 10;
  stride_0_0 = (i != 1);
  in6_idx_0 = (in6_idx_0 != 1);
  for (i = 0; i < 10; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1_data[i1 + in1_size[1] * i] =
          in2[(in3 + 29 * (in4 + i1 * stride_0_0)) + 319 * i] *
          in6_data[i1 * in6_idx_0];
    }
  }
}

void binary_expand_op_36(real_T in1_data[], int32_T in1_size[2],
                         const real_T in2[3190], int32_T in3, real_T in4,
                         const real_T in5_data[], const int32_T &in5_size)
{
  int32_T in5_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  in5_idx_0 = in5_size;
  if (in5_idx_0 == 1) {
    loop_ub = 12 - static_cast<int32_T>(in4);
  } else {
    loop_ub = in5_idx_0;
  }
  in1_size[1] = loop_ub;
  in1_size[0] = 10;
  stride_0_0 = (12 - static_cast<int32_T>(in4) != 1);
  in5_idx_0 = (in5_idx_0 != 1);
  for (int32_T i{0}; i < 10; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1_data[i1 + in1_size[1] * i] =
          in2[(in3 + 29 * ((static_cast<int32_T>(in4) + i1 * stride_0_0) - 1)) +
              319 * i] *
          in5_data[i1 * in5_idx_0];
    }
  }
}

// End of code generation (dev_A_Q_D_unit.cpp)
