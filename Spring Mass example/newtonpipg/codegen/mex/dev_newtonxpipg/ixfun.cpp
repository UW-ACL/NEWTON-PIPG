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
static emlrtRTEInfo j_emlrtRTEI{
    225,          // lineNo
    23,           // colNo
    "expand_min", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" // pName
};

static emlrtRTEInfo k_emlrtRTEI{
    225,          // lineNo
    23,           // colNo
    "expand_max", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" // pName
};

static emlrtRTEInfo ic_emlrtRTEI{
    234,     // lineNo
    20,      // colNo
    "ixfun", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
void expand_max(const emlrtStack *sp, const real_T a_data[], int32_T a_size,
                const ::coder::array<real_T, 1U> &b,
                ::coder::array<real_T, 1U> &c)
{
  int32_T sbk;
  sbk = b.size(0);
  if (b.size(0) == 1) {
    sbk = a_size;
  } else if (a_size == 1) {
    sbk = b.size(0);
  } else {
    sbk = muIntScalarMin_sint32(a_size, sbk);
    if (a_size != b.size(0)) {
      emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI,
                                    "MATLAB:sizeDimensionsMustMatch",
                                    "MATLAB:sizeDimensionsMustMatch", 0);
    }
  }
  c.set_size(&ic_emlrtRTEI, sp, sbk);
  if (sbk != 0) {
    boolean_T b1;
    boolean_T b_b;
    b_b = (a_size != 1);
    b1 = (b.size(0) != 1);
    sbk--;
    for (int32_T k{0}; k <= sbk; k++) {
      c[k] = muDoubleScalarMax(a_data[b_b * k], b[b1 * k]);
    }
  }
}

void expand_min(const emlrtStack *sp, const real_T a_data[], int32_T a_size,
                const ::coder::array<real_T, 1U> &b,
                ::coder::array<real_T, 1U> &c)
{
  int32_T sbk;
  sbk = b.size(0);
  if (b.size(0) == 1) {
    sbk = a_size;
  } else if (a_size == 1) {
    sbk = b.size(0);
  } else {
    sbk = muIntScalarMin_sint32(a_size, sbk);
    if (a_size != b.size(0)) {
      emlrtErrorWithMessageIdR2018a(sp, &j_emlrtRTEI,
                                    "MATLAB:sizeDimensionsMustMatch",
                                    "MATLAB:sizeDimensionsMustMatch", 0);
    }
  }
  c.set_size(&ic_emlrtRTEI, sp, sbk);
  if (sbk != 0) {
    boolean_T b1;
    boolean_T b_b;
    b_b = (a_size != 1);
    b1 = (b.size(0) != 1);
    sbk--;
    for (int32_T k{0}; k <= sbk; k++) {
      c[k] = muDoubleScalarMin(a_data[b_b * k], b[b1 * k]);
    }
  }
}

} // namespace internal
} // namespace coder

// End of code generation (ixfun.cpp)
