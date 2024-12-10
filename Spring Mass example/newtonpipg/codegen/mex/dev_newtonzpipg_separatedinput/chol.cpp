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
#include "rt_nonfinite.h"
#include "lapacke.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo hc_emlrtRSI{
    84,     // lineNo
    "chol", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\chol.m" // pathName
};

static emlrtRSInfo ic_emlrtRSI{
    79,             // lineNo
    "ceval_xpotrf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xpotrf.m" // pathName
};

static emlrtRSInfo jc_emlrtRSI{
    13,       // lineNo
    "xpotrf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xpotrf.m" // pathName
};

static emlrtRTEInfo m_emlrtRTEI{
    44,          // lineNo
    13,          // colNo
    "infocheck", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\infocheck.m" // pName
};

static emlrtRTEInfo n_emlrtRTEI{
    47,          // lineNo
    13,          // colNo
    "infocheck", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\infocheck.m" // pName
};

// Function Definitions
namespace coder {
namespace internal {
void chol(const emlrtStack *sp, real_T A[256], int32_T *flag, int32_T *jmax)
{
  static const char_T fname[19]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 'p', 'o', 't', 'r', 'f',
                                '_', 'w', 'o', 'r', 'k'};
  ptrdiff_t info_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  st.site = &hc_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  b_st.site = &jc_emlrtRSI;
  info_t = LAPACKE_dpotrf_work(102, 'L', (ptrdiff_t)16, &A[0], (ptrdiff_t)16);
  c_st.site = &ic_emlrtRSI;
  if ((int32_T)info_t < 0) {
    if ((int32_T)info_t == -1010) {
      emlrtErrorWithMessageIdR2018a(&c_st, &m_emlrtRTEI, "MATLAB:nomem",
                                    "MATLAB:nomem", 0);
    } else {
      emlrtErrorWithMessageIdR2018a(&c_st, &n_emlrtRTEI,
                                    "Coder:toolbox:LAPACKCallErrorInfo",
                                    "Coder:toolbox:LAPACKCallErrorInfo", 5, 4,
                                    19, &fname[0], 12, (int32_T)info_t);
    }
  }
  *flag = (int32_T)info_t;
  if ((int32_T)info_t == 0) {
    *jmax = 16;
  } else {
    *jmax = (int32_T)info_t - 1;
  }
  for (int32_T j{2}; j <= *jmax; j++) {
    for (int32_T i{0}; i <= j - 2; i++) {
      A[i + ((j - 1) << 4)] = 0.0;
    }
  }
}

} // namespace internal
} // namespace coder

// End of code generation (chol.cpp)
