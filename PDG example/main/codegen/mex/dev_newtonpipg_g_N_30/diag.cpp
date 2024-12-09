//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// diag.cpp
//
// Code generation for function 'diag'
//

// Include files
#include "diag.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <cstring>

// Variable Definitions
static emlrtRTEInfo bb_emlrtRTEI{
    102,    // lineNo
    19,     // colNo
    "diag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m" // pName
};

// Function Definitions
namespace coder {
int32_T diag(const emlrtStack &sp, const creal_T v_data[],
             const int32_T v_size[2], creal_T d_data[])
{
  int32_T d_size;
  if ((v_size[0] == 1) && (v_size[1] == 1)) {
    d_size = 1;
    d_data[0] = v_data[0];
  } else {
    int32_T i;
    if ((v_size[0] == 1) || (v_size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &sp, &bb_emlrtRTEI, "Coder:toolbox:diag_varsizedMatrixVector",
          "Coder:toolbox:diag_varsizedMatrixVector", 0);
    }
    if (v_size[1] > 0) {
      d_size = muIntScalarMin_sint32(v_size[0], v_size[1]);
    } else {
      d_size = 0;
    }
    i = d_size - 1;
    for (int32_T k{0}; k <= i; k++) {
      d_data[k] = v_data[k + v_size[1] * k];
    }
  }
  return d_size;
}

void diag(const real_T v_data[], int32_T v_size, real_T d_data[],
          int32_T d_size[2])
{
  int32_T loop_ub;
  d_size[1] = v_size;
  d_size[0] = v_size;
  loop_ub = v_size * v_size;
  if (loop_ub - 1 >= 0) {
    std::memset(&d_data[0], 0, static_cast<uint32_T>(loop_ub) * sizeof(real_T));
  }
  for (loop_ub = 0; loop_ub < v_size; loop_ub++) {
    d_data[loop_ub + v_size * loop_ub] = v_data[loop_ub];
  }
}

int32_T diag(const emlrtStack &sp, const real_T v_data[],
             const int32_T v_size[2], real_T d_data[])
{
  int32_T d_size;
  if ((v_size[0] == 1) && (v_size[1] == 1)) {
    d_size = 1;
    d_data[0] = v_data[0];
  } else {
    int32_T i;
    if ((v_size[0] == 1) || (v_size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &sp, &bb_emlrtRTEI, "Coder:toolbox:diag_varsizedMatrixVector",
          "Coder:toolbox:diag_varsizedMatrixVector", 0);
    }
    if (v_size[1] > 0) {
      d_size = muIntScalarMin_sint32(v_size[0], v_size[1]);
    } else {
      d_size = 0;
    }
    i = d_size - 1;
    for (int32_T k{0}; k <= i; k++) {
      d_data[k] = v_data[k + v_size[1] * k];
    }
  }
  return d_size;
}

} // namespace coder

// End of code generation (diag.cpp)
