//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// chol.cpp
//
// Code generation for function 'chol'
//

// Include files
#include "chol.h"
#include "dev_newtonpipg_g_with_timer_data.h"
#include "rt_nonfinite.h"
#include "lapacke.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo uh_emlrtRSI{
    84,     // lineNo
    "chol", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\chol.m" // pathName
};

static emlrtRSInfo vh_emlrtRSI{
    93,     // lineNo
    "chol", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\chol.m" // pathName
};

static emlrtRSInfo wh_emlrtRSI{
    94,     // lineNo
    "chol", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\chol.m" // pathName
};

static emlrtRSInfo xh_emlrtRSI{
    79,             // lineNo
    "ceval_xpotrf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xpotrf.m" // pathName
};

static emlrtRSInfo yh_emlrtRSI{
    13,       // lineNo
    "xpotrf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xpotrf.m" // pathName
};

// Function Definitions
namespace coder {
namespace internal {
int32_T chol(const emlrtStack &sp, real_T A[100], int32_T &jmax)
{
  static const char_T fname[19]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 'p', 'o', 't', 'r', 'f',
                                '_', 'w', 'o', 'r', 'k'};
  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  int32_T flag;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &uh_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &yh_emlrtRSI;
  info_t = LAPACKE_dpotrf_work(102, 'L', (ptrdiff_t)10, &A[0], (ptrdiff_t)10);
  c_st.site = &xh_emlrtRSI;
  if ((int32_T)info_t < 0) {
    if ((int32_T)info_t == -1010) {
      emlrtErrorWithMessageIdR2018a(&c_st, &q_emlrtRTEI, "MATLAB:nomem",
                                    "MATLAB:nomem", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&c_st, &p_emlrtRTEI,
                                    "Coder:toolbox:LAPACKCallErrorInfo",
                                    "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                    19, &fname[0], 12, (int32_T)info_t);
    }
  }
  flag = (int32_T)info_t;
  if ((int32_T)info_t == 0) {
    jmax = 10;
  } else {
    jmax = (int32_T)info_t - 1;
  }
  st.site = &vh_emlrtRSI;
  for (int32_T j{2}; j <= jmax; j++) {
    st.site = &wh_emlrtRSI;
    for (int32_T i{0}; i <= j - 2; i++) {
      A[i + 10 * (j - 1)] = 0.0;
    }
  }
  return flag;
}

} // namespace internal
} // namespace coder

// End of code generation (chol.cpp)
