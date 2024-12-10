//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// small_lower_triangular_solve.cpp
//
// Code generation for function 'small_lower_triangular_solve'
//

// Include files
#include "small_lower_triangular_solve.h"
#include "dev_newtonxpipg_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <cstring>

// Function Definitions
void small_lower_triangular_solve(const emlrtStack *sp, const real_T L_data[],
                                  const int32_T L_size[2],
                                  const coder::array<real_T, 1U> &B,
                                  real_T X_data[], int32_T *X_size)
{
  int32_T loop_ub;
  *X_size = L_size[0];
  loop_ub = L_size[0];
  if (loop_ub - 1 >= 0) {
    std::memset(&X_data[0], 0, static_cast<uint32_T>(loop_ub) * sizeof(real_T));
  }
  loop_ub = L_size[0];
  for (int32_T i{0}; i < loop_ub; i++) {
    if (i + 1 > B.size(0)) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, B.size(0), &ed_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (i + 1 > *X_size) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, *X_size, &gd_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    X_data[i] = B[i];
    for (int32_T j{0}; j < i; j++) {
      if (i + 1 > *X_size) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, *X_size, &od_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (i + 1 > L_size[0]) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, L_size[0], &qd_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (j + 1 > L_size[1]) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, L_size[1], &rd_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (j + 1 > *X_size) {
        emlrtDynamicBoundsCheckR2012b(j + 1, 1, *X_size, &sd_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      if (i + 1 > *X_size) {
        emlrtDynamicBoundsCheckR2012b(i + 1, 1, *X_size, &ud_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      X_data[i] -= L_data[i + L_size[0] * j] * X_data[j];
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    if (i + 1 > *X_size) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, *X_size, &id_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (i + 1 > L_size[0]) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, L_size[0], &kd_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (i + 1 > L_size[1]) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, L_size[1], &ld_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if (i + 1 > *X_size) {
      emlrtDynamicBoundsCheckR2012b(i + 1, 1, *X_size, &md_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    X_data[i] /= L_data[i + L_size[0] * i];
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

// End of code generation (small_lower_triangular_solve.cpp)
