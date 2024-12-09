//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// ixfun.cpp
//
// Code generation for function 'ixfun'
//

// Include files
#include "ixfun.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRTEInfo k_emlrtRTEI{
    225,          // lineNo
    23,           // colNo
    "expand_min", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" // pName
};

static emlrtRTEInfo l_emlrtRTEI{
    225,          // lineNo
    23,           // colNo
    "expand_max", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" // pName
};

static emlrtRTEInfo kd_emlrtRTEI{
    234,     // lineNo
    20,      // colNo
    "ixfun", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
void expand_max(const emlrtStack &sp, const array<real_T, 1U> &a,
                const array<real_T, 1U> &b, array<real_T, 1U> &c)
{
  int32_T sak;
  int32_T sbk_tmp;
  sak = a.size(0);
  sbk_tmp = b.size(0);
  if (b.size(0) == 1) {
    sak = a.size(0);
  } else if (a.size(0) == 1) {
    sak = b.size(0);
  } else {
    sak = muIntScalarMin_sint32(sak, sbk_tmp);
    if (a.size(0) != b.size(0)) {
      emlrtErrorWithMessageIdR2018a(&sp, &l_emlrtRTEI,
                                    "MATLAB:sizeDimensionsMustMatch",
                                    "MATLAB:sizeDimensionsMustMatch", 0);
    }
  }
  c.set_size(&kd_emlrtRTEI, &sp, sak);
  if (sak != 0) {
    boolean_T b1;
    boolean_T b_b;
    b_b = (a.size(0) != 1);
    b1 = (b.size(0) != 1);
    sak--;
    for (sbk_tmp = 0; sbk_tmp <= sak; sbk_tmp++) {
      c[sbk_tmp] = muDoubleScalarMax(a[b_b * sbk_tmp], b[b1 * sbk_tmp]);
    }
  }
}

void expand_min(const emlrtStack &sp, const array<real_T, 1U> &a,
                const array<real_T, 1U> &b, array<real_T, 1U> &c)
{
  int32_T sak;
  int32_T sbk_tmp;
  sak = a.size(0);
  sbk_tmp = b.size(0);
  if (b.size(0) == 1) {
    sak = a.size(0);
  } else if (a.size(0) == 1) {
    sak = b.size(0);
  } else {
    sak = muIntScalarMin_sint32(sak, sbk_tmp);
    if (a.size(0) != b.size(0)) {
      emlrtErrorWithMessageIdR2018a(&sp, &k_emlrtRTEI,
                                    "MATLAB:sizeDimensionsMustMatch",
                                    "MATLAB:sizeDimensionsMustMatch", 0);
    }
  }
  c.set_size(&kd_emlrtRTEI, &sp, sak);
  if (sak != 0) {
    boolean_T b1;
    boolean_T b_b;
    b_b = (a.size(0) != 1);
    b1 = (b.size(0) != 1);
    sak--;
    for (sbk_tmp = 0; sbk_tmp <= sak; sbk_tmp++) {
      c[sbk_tmp] = muDoubleScalarMin(a[b_b * sbk_tmp], b[b1 * sbk_tmp]);
    }
  }
}

} // namespace internal
} // namespace coder

// End of code generation (ixfun.cpp)
