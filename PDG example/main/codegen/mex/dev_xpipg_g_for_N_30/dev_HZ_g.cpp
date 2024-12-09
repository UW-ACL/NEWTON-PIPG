//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_HZ_g.cpp
//
// Code generation for function 'dev_HZ_g'
//

// Include files
#include "dev_HZ_g.h"
#include "dev_xpipg_g_for_N_30_types.h"
#include "rt_nonfinite.h"
#include "coder_bounded_array.h"

// Function Definitions
int32_T binary_expand_op(real_T in1_data[], const real_T in2[290], int32_T in3,
                         int32_T in4, const struct0_T *in5, int32_T in6,
                         int32_T in7)
{
  int32_T in1_size;
  int32_T in4_idx_0;
  int32_T in7_idx_0;
  int32_T stride_0_0;
  in4_idx_0 = in4 - in3;
  in7_idx_0 = in7 - in6;
  if (in7_idx_0 == 1) {
    in1_size = in4_idx_0;
  } else {
    in1_size = in7_idx_0;
  }
  stride_0_0 = (in4_idx_0 != 1);
  in4_idx_0 = (in7_idx_0 != 1);
  for (in7_idx_0 = 0; in7_idx_0 < in1_size; in7_idx_0++) {
    in1_data[in7_idx_0] = in2[in3 + in7_idx_0 * stride_0_0] +
                          in5->xi.data[in6 + in7_idx_0 * in4_idx_0];
  }
  return in1_size;
}

int32_T binary_expand_op_2(real_T in1_data[], const real_T in2[290],
                           int32_T in3, int32_T in4, const real_T in5[326],
                           int32_T in6, int32_T in7)
{
  int32_T in1_size;
  int32_T in4_idx_0;
  int32_T in7_idx_0;
  int32_T stride_0_0;
  in4_idx_0 = in4 - in3;
  in7_idx_0 = in7 - in6;
  if (in7_idx_0 == 1) {
    in1_size = in4_idx_0;
  } else {
    in1_size = in7_idx_0;
  }
  stride_0_0 = (in4_idx_0 != 1);
  in4_idx_0 = (in7_idx_0 != 1);
  for (in7_idx_0 = 0; in7_idx_0 < in1_size; in7_idx_0++) {
    in1_data[in7_idx_0] =
        in2[in3 + in7_idx_0 * stride_0_0] + in5[in6 + in7_idx_0 * in4_idx_0];
  }
  return in1_size;
}

// End of code generation (dev_HZ_g.cpp)
