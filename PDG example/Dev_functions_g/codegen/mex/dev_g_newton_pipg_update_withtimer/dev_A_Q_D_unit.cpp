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
#include "dev_g_newton_pipg_update_withtimer_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <emmintrin.h>

// Function Definitions
void binary_expand_op_19(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
                         const coder::array<real_T, 2U> &in2,
                         const coder::array<real_T, 1U> &in3)
{
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T loop_ub;
  int32_T stride_0_1;
  int32_T stride_1_1;
  in1.set_size(&nf_emlrtRTEI, &sp, 10, in1.size(1));
  if (in3.size(0) == 1) {
    loop_ub = in2.size(1);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&nf_emlrtRTEI, &sp, in1.size(0), loop_ub);
  stride_0_1 = (in2.size(1) != 1);
  stride_1_1 = (in3.size(0) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < loop_ub; i++) {
    for (int32_T i1{0}; i1 <= 8; i1 += 2) {
      __m128d r;
      r = _mm_loadu_pd(&in2[i1 + 10 * aux_0_1]);
      _mm_storeu_pd(&in1[i1 + 10 * i],
                    _mm_mul_pd(r, _mm_set1_pd(in3[aux_1_1])));
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

// End of code generation (dev_A_Q_D_unit.cpp)
