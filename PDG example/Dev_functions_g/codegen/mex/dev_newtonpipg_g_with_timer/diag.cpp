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
#include "dev_newtonpipg_g_with_timer_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo je_emlrtRSI{
    90,     // lineNo
    "diag", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m" // pathName
};

static emlrtRTEInfo t_emlrtRTEI{
    102,    // lineNo
    19,     // colNo
    "diag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m" // pName
};

static emlrtRTEInfo jf_emlrtRTEI{
    82,     // lineNo
    5,      // colNo
    "diag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m" // pName
};

static emlrtRTEInfo pg_emlrtRTEI{
    109,    // lineNo
    24,     // colNo
    "diag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m" // pName
};

static emlrtRTEInfo qg_emlrtRTEI{
    100,    // lineNo
    5,      // colNo
    "diag", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m" // pName
};

// Function Definitions
namespace coder {
void diag(const emlrtStack &sp, const array<creal_T, 2U> &v,
          array<creal_T, 1U> &d)
{
  if ((v.size(0) == 1) && (v.size(1) == 1)) {
    d.set_size(&qg_emlrtRTEI, &sp, 1);
    d[0] = v[0];
  } else {
    int32_T m;
    int32_T n;
    if ((v.size(0) == 1) || (v.size(1) == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &sp, &t_emlrtRTEI, "Coder:toolbox:diag_varsizedMatrixVector",
          "Coder:toolbox:diag_varsizedMatrixVector", 0);
    }
    m = v.size(0);
    n = v.size(1);
    if (v.size(1) > 0) {
      m = muIntScalarMin_sint32(m, n);
    } else {
      m = 0;
    }
    d.set_size(&pg_emlrtRTEI, &sp, m);
    m--;
    for (n = 0; n <= m; n++) {
      d[n] = v[n + v.size(0) * n];
    }
  }
}

void diag(const emlrtStack &sp, const array<real_T, 1U> &v,
          array<real_T, 2U> &d)
{
  emlrtStack b_st;
  emlrtStack st;
  int32_T loop_ub;
  int32_T nv_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  nv_tmp = v.size(0);
  d.set_size(&jf_emlrtRTEI, &sp, v.size(0), v.size(0));
  loop_ub = v.size(0) * v.size(0);
  for (int32_T i{0}; i < loop_ub; i++) {
    d[i] = 0.0;
  }
  st.site = &je_emlrtRSI;
  if (v.size(0) > 2147483646) {
    b_st.site = &v_emlrtRSI;
    check_forloop_overflow_error(b_st);
  }
  for (loop_ub = 0; loop_ub < nv_tmp; loop_ub++) {
    d[loop_ub + d.size(0) * loop_ub] = v[loop_ub];
  }
}

void diag(const emlrtStack &sp, const array<real_T, 2U> &v,
          array<real_T, 1U> &d)
{
  if ((v.size(0) == 1) && (v.size(1) == 1)) {
    d.set_size(&qg_emlrtRTEI, &sp, 1);
    d[0] = v[0];
  } else {
    int32_T m;
    int32_T n;
    if ((v.size(0) == 1) || (v.size(1) == 1)) {
      emlrtErrorWithMessageIdR2018a(
          &sp, &t_emlrtRTEI, "Coder:toolbox:diag_varsizedMatrixVector",
          "Coder:toolbox:diag_varsizedMatrixVector", 0);
    }
    m = v.size(0);
    n = v.size(1);
    if (v.size(1) > 0) {
      m = muIntScalarMin_sint32(m, n);
    } else {
      m = 0;
    }
    d.set_size(&pg_emlrtRTEI, &sp, m);
    m--;
    for (n = 0; n <= m; n++) {
      d[n] = v[n + v.size(0) * n];
    }
  }
}

} // namespace coder

// End of code generation (diag.cpp)
