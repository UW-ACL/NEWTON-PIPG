//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// abs.cpp
//
// Code generation for function 'abs'
//

// Include files
#include "abs.h"
#include "dev_newtonpipg_g_with_timer_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo
    fe_emlrtRSI{
        19,    // lineNo
        "abs", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m" // pathName
    };

static emlrtRSInfo ge_emlrtRSI{
    74,                    // lineNo
    "applyScalarFunction", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunction.m" // pathName
};

static emlrtRTEInfo if_emlrtRTEI{
    30,                    // lineNo
    21,                    // colNo
    "applyScalarFunction", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunction.m" // pName
};

// Function Definitions
namespace coder {
void b_abs(const emlrtStack &sp, const array<real_T, 1U> &x,
           array<real_T, 1U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T nx_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &fe_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx_tmp = x.size(0);
  y.set_size(&if_emlrtRTEI, &st, x.size(0));
  b_st.site = &ge_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{0}; k < nx_tmp; k++) {
    y[k] = muDoubleScalarAbs(x[k]);
  }
}

void b_abs(const emlrtStack &sp, const array<creal_T, 1U> &x,
           array<real_T, 1U> &y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T nx_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &fe_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  nx_tmp = x.size(0);
  y.set_size(&if_emlrtRTEI, &st, x.size(0));
  b_st.site = &ge_emlrtRSI;
  if (x.size(0) > 2147483646) {
    c_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(c_st);
  }
  for (int32_T k{0}; k < nx_tmp; k++) {
    y[k] = muDoubleScalarHypot(x[k].re, x[k].im);
  }
}

} // namespace coder

// End of code generation (abs.cpp)
