//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// eigSkewHermitianStandard.cpp
//
// Code generation for function 'eigSkewHermitianStandard'
//

// Include files
#include "eigSkewHermitianStandard.h"
#include "dev_newtonpipg_g_N_30_data.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstddef>
#include <cstring>

// Variable Definitions
static emlrtRSInfo nd_emlrtRSI{
    12,                         // lineNo
    "eigSkewHermitianStandard", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigSkew"
    "HermitianStandard.m" // pathName
};

static emlrtRSInfo od_emlrtRSI{
    22,                             // lineNo
    "eigRealSkewSymmetricStandard", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigReal"
    "SkewSymmetricStandard.m" // pathName
};

static emlrtRSInfo pd_emlrtRSI{
    66,      // lineNo
    "schur", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" // pathName
};

static emlrtRSInfo qd_emlrtRSI{
    69,      // lineNo
    "schur", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" // pathName
};

static emlrtRSInfo rd_emlrtRSI{
    70,      // lineNo
    "schur", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" // pathName
};

static emlrtRSInfo sd_emlrtRSI{
    83,      // lineNo
    "schur", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" // pathName
};

static emlrtRSInfo td_emlrtRSI{
    15,       // lineNo
    "xgehrd", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgehrd.m" // pathName
};

static emlrtRSInfo ud_emlrtRSI{
    85,             // lineNo
    "ceval_xgehrd", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgehrd.m" // pathName
};

static emlrtRSInfo vd_emlrtRSI{
    72,                // lineNo
    "ceval_xungorghr", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xungorghr.m" // pathName
};

static emlrtRSInfo wd_emlrtRSI{
    11,          // lineNo
    "xungorghr", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xungorghr.m" // pathName
};

static emlrtRSInfo xd_emlrtRSI{
    17,       // lineNo
    "xhseqr", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xhseqr.m" // pathName
};

static emlrtRSInfo yd_emlrtRSI{
    128,            // lineNo
    "ceval_xhseqr", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xhseqr.m" // pathName
};

static emlrtRTEInfo ab_emlrtRTEI{
    18,      // lineNo
    15,      // colNo
    "schur", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" // pName
};

// Function Definitions
namespace coder {
void eigSkewHermitianStandard(const emlrtStack &sp, const real_T A_data[],
                              const int32_T A_size[2], creal_T V_data[],
                              int32_T V_size[2], creal_T D_data[],
                              int32_T D_size[2])
{
  static const char_T b_fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                  '_', 'd', 'o', 'r', 'g', 'h', 'r'};
  static const char_T c_fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                  '_', 'd', 'h', 's', 'e', 'q', 'r'};
  static const char_T fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 'g', 'e', 'h', 'r', 'd'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T U_data[121];
  real_T b_A_data[121];
  real_T wi_data[11];
  real_T wr_data[11];
  real_T tau_data[10];
  real_T lambda;
  int32_T A_size_idx_0;
  int32_T A_size_idx_1;
  int32_T U_size_idx_1;
  int32_T b_i;
  int32_T exitg1;
  int32_T i;
  int32_T istart;
  int32_T j;
  int32_T loop_ub;
  int32_T sgn;
  boolean_T p;
  st.prev = &sp;
  st.tls = sp.tls;
  st.site = &nd_emlrtRSI;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  b_st.site = &od_emlrtRSI;
  if (A_size[0] != A_size[1]) {
    emlrtErrorWithMessageIdR2018a(&b_st, &ab_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  loop_ub = A_size[0] * A_size[1];
  p = true;
  for (sgn = 0; sgn < loop_ub; sgn++) {
    if (p) {
      lambda = A_data[sgn];
      if (muDoubleScalarIsInf(lambda) || muDoubleScalarIsNaN(lambda)) {
        p = false;
      }
    } else {
      p = false;
    }
  }
  if (!p) {
    sgn = static_cast<int8_T>(A_size[1]);
    U_size_idx_1 = static_cast<int8_T>(A_size[1]);
    A_size_idx_0 = static_cast<int8_T>(A_size[0]);
    loop_ub = static_cast<int8_T>(A_size[1]) * static_cast<int8_T>(A_size[0]);
    for (i = 0; i < loop_ub; i++) {
      U_data[i] = rtNaN;
    }
    if ((static_cast<int8_T>(A_size[1]) != 0) &&
        (static_cast<int8_T>(A_size[0]) != 0) &&
        (static_cast<int8_T>(A_size[1]) > 1)) {
      istart = 2;
      if (static_cast<int8_T>(A_size[1]) - 2 <
          static_cast<int8_T>(A_size[0]) - 1) {
        i = static_cast<int8_T>(A_size[1]) - 1;
      } else {
        i = static_cast<int8_T>(A_size[0]);
      }
      for (j = 0; j < i; j++) {
        for (b_i = istart; b_i <= sgn; b_i++) {
          U_data[(b_i + sgn * j) - 1] = 0.0;
        }
        istart++;
      }
    }
    A_size_idx_1 = static_cast<int8_T>(A_size[1]);
    for (i = 0; i < loop_ub; i++) {
      b_A_data[i] = rtNaN;
    }
  } else {
    ptrdiff_t info_t;
    boolean_T b_p;
    c_st.site = &pd_emlrtRSI;
    A_size_idx_1 = A_size[1];
    A_size_idx_0 = A_size[0];
    if (loop_ub - 1 >= 0) {
      std::copy(&A_data[0], &A_data[loop_ub], &b_A_data[0]);
    }
    d_st.site = &td_emlrtRSI;
    if (A_size[1] < 1) {
      sgn = 0;
    } else {
      sgn = A_size[1] - 1;
    }
    if (A_size[1] > 1) {
      info_t = LAPACKE_dgehrd(102, (ptrdiff_t)A_size[1], (ptrdiff_t)1,
                              (ptrdiff_t)A_size[1], &b_A_data[0],
                              (ptrdiff_t)muIntScalarMax_sint32(1, A_size[1]),
                              &tau_data[0]);
      e_st.site = &ud_emlrtRSI;
      if ((int32_T)info_t != 0) {
        p = true;
        if ((int32_T)info_t != -5) {
          if ((int32_T)info_t == -1010) {
            emlrtErrorWithMessageIdR2018a(&e_st, &x_emlrtRTEI, "MATLAB:nomem",
                                          "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &e_st, &w_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
                "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &fname[0], 12,
                (int32_T)info_t);
          }
        }
      } else {
        p = false;
      }
      if (p) {
        A_size_idx_1 = A_size[1];
        A_size_idx_0 = A_size[0];
        loop_ub = A_size[0] * A_size[1];
        for (i = 0; i < loop_ub; i++) {
          b_A_data[i] = rtNaN;
        }
        for (i = 0; i < sgn; i++) {
          tau_data[i] = rtNaN;
        }
      }
    }
    c_st.site = &qd_emlrtRSI;
    U_size_idx_1 = A_size_idx_1;
    loop_ub = A_size_idx_0 * A_size_idx_1;
    if (loop_ub - 1 >= 0) {
      std::copy(&b_A_data[0], &b_A_data[loop_ub], &U_data[0]);
    }
    d_st.site = &wd_emlrtRSI;
    if (A_size[1] != 0) {
      if (A_size[1] == 1) {
        U_data[0] = 1.0;
      } else {
        info_t = LAPACKE_dorghr(102, (ptrdiff_t)A_size[1], (ptrdiff_t)1,
                                (ptrdiff_t)A_size[1], &U_data[0],
                                (ptrdiff_t)A_size[1], &tau_data[0]);
        e_st.site = &vd_emlrtRSI;
        if ((int32_T)info_t != 0) {
          p = true;
          b_p = false;
          if ((int32_T)info_t == -5) {
            b_p = true;
          } else if ((int32_T)info_t == -7) {
            b_p = true;
          }
          if (!b_p) {
            if ((int32_T)info_t == -1010) {
              emlrtErrorWithMessageIdR2018a(&e_st, &x_emlrtRTEI, "MATLAB:nomem",
                                            "MATLAB:nomem", 0);
            } else {
              emlrtErrorWithMessageIdR2018a(
                  &e_st, &w_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
                  "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &b_fname[0],
                  12, (int32_T)info_t);
            }
          }
        } else {
          p = false;
        }
        if (p) {
          loop_ub = A_size_idx_1 * A_size_idx_0;
          for (i = 0; i < loop_ub; i++) {
            U_data[i] = rtNaN;
          }
        }
      }
    }
    c_st.site = &rd_emlrtRSI;
    d_st.site = &xd_emlrtRSI;
    info_t = (ptrdiff_t)A_size_idx_1;
    if ((A_size_idx_1 != 0) && (A_size_idx_0 != 0)) {
      info_t = LAPACKE_dhseqr(
          102, 'S', 'V', info_t, (ptrdiff_t)1, (ptrdiff_t)A_size_idx_1,
          &b_A_data[0], info_t, &wr_data[0], &wi_data[0], &U_data[0],
          (ptrdiff_t)muIntScalarMax_sint32(1, A_size_idx_1));
      sgn = (int32_T)info_t;
      e_st.site = &yd_emlrtRSI;
      if ((int32_T)info_t < 0) {
        p = true;
        b_p = false;
        if ((int32_T)info_t == -7) {
          b_p = true;
        } else if ((int32_T)info_t == -11) {
          b_p = true;
        }
        if (!b_p) {
          if ((int32_T)info_t == -1010) {
            emlrtErrorWithMessageIdR2018a(&e_st, &x_emlrtRTEI, "MATLAB:nomem",
                                          "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &e_st, &w_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
                "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &c_fname[0], 12,
                (int32_T)info_t);
          }
        }
      } else {
        p = false;
      }
      if (p) {
        loop_ub = A_size_idx_1 * A_size_idx_0;
        for (i = 0; i < loop_ub; i++) {
          b_A_data[i] = rtNaN;
        }
        loop_ub = A_size_idx_1 * A_size_idx_0;
        for (i = 0; i < loop_ub; i++) {
          U_data[i] = rtNaN;
        }
      }
    } else {
      sgn = 0;
    }
    if (sgn != 0) {
      c_st.site = &sd_emlrtRSI;
      internal::b_warning(c_st);
    }
  }
  D_size[1] = A_size_idx_1;
  D_size[0] = A_size_idx_1;
  loop_ub = A_size_idx_1 * A_size_idx_1;
  if (loop_ub - 1 >= 0) {
    std::memset(&D_data[0], 0,
                static_cast<uint32_T>(loop_ub) * sizeof(creal_T));
  }
  b_i = 1;
  do {
    exitg1 = 0;
    if (b_i <= A_size_idx_1) {
      if (b_i != A_size_idx_1) {
        lambda = b_A_data[b_i + A_size_idx_1 * (b_i - 1)];
        if (lambda != 0.0) {
          lambda = muDoubleScalarAbs(lambda);
          i = (b_i + A_size_idx_1 * (b_i - 1)) - 1;
          D_data[i].re = 0.0;
          D_data[i].im = lambda;
          i = b_i + A_size_idx_1 * b_i;
          D_data[i].re = 0.0;
          D_data[i].im = -lambda;
          b_i += 2;
        } else {
          b_i++;
        }
      } else {
        b_i++;
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  V_size[1] = U_size_idx_1;
  V_size[0] = A_size_idx_0;
  loop_ub = A_size_idx_0 * U_size_idx_1;
  for (i = 0; i < loop_ub; i++) {
    V_data[i].re = U_data[i];
    V_data[i].im = 0.0;
  }
  j = 1;
  do {
    exitg1 = 0;
    if (j <= A_size_idx_1) {
      if (j != A_size_idx_1) {
        lambda = b_A_data[j + A_size_idx_1 * (j - 1)];
        if (lambda != 0.0) {
          if (lambda < 0.0) {
            sgn = 1;
          } else {
            sgn = -1;
          }
          for (b_i = 0; b_i < A_size_idx_1; b_i++) {
            real_T ai;
            loop_ub = b_i + U_size_idx_1 * (j - 1);
            lambda = V_data[loop_ub].re;
            istart = b_i + U_size_idx_1 * j;
            ai = static_cast<real_T>(sgn) * V_data[istart].re;
            if (ai == 0.0) {
              V_data[loop_ub].re = lambda / 1.4142135623730951;
              V_data[loop_ub].im = 0.0;
            } else if (lambda == 0.0) {
              V_data[loop_ub].re = 0.0;
              V_data[loop_ub].im = ai / 1.4142135623730951;
            } else {
              V_data[loop_ub].re = lambda / 1.4142135623730951;
              V_data[loop_ub].im = ai / 1.4142135623730951;
            }
            V_data[istart].re = V_data[loop_ub].re;
            V_data[istart].im = -V_data[loop_ub].im;
          }
          j += 2;
        } else {
          j++;
        }
      } else {
        j++;
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);
}

} // namespace coder

// End of code generation (eigSkewHermitianStandard.cpp)
