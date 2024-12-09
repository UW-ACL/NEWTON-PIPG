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
#include "anyNonFinite.h"
#include "dev_g_newton_pipg_update_withtimer_data.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "coder_array.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo od_emlrtRSI{
    12,                         // lineNo
    "eigSkewHermitianStandard", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigSkew"
    "HermitianStandard.m" // pathName
};

static emlrtRSInfo pd_emlrtRSI{
    24,                             // lineNo
    "eigRealSkewSymmetricStandard", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigReal"
    "SkewSymmetricStandard.m" // pathName
};

static emlrtRSInfo qd_emlrtRSI{
    22,                             // lineNo
    "eigRealSkewSymmetricStandard", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigReal"
    "SkewSymmetricStandard.m" // pathName
};

static emlrtRSInfo rd_emlrtRSI{
    35,      // lineNo
    "schur", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" // pathName
};

static emlrtRSInfo sd_emlrtRSI{
    43,      // lineNo
    "schur", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" // pathName
};

static emlrtRSInfo td_emlrtRSI{
    66,      // lineNo
    "schur", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" // pathName
};

static emlrtRSInfo ud_emlrtRSI{
    69,      // lineNo
    "schur", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" // pathName
};

static emlrtRSInfo vd_emlrtRSI{
    70,      // lineNo
    "schur", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" // pathName
};

static emlrtRSInfo wd_emlrtRSI{
    83,      // lineNo
    "schur", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" // pathName
};

static emlrtRSInfo xd_emlrtRSI{
    48,     // lineNo
    "triu", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\triu.m" // pathName
};

static emlrtRSInfo yd_emlrtRSI{
    47,     // lineNo
    "triu", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\triu.m" // pathName
};

static emlrtRSInfo ae_emlrtRSI{
    15,       // lineNo
    "xgehrd", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgehrd.m" // pathName
};

static emlrtRSInfo be_emlrtRSI{
    85,             // lineNo
    "ceval_xgehrd", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgehrd.m" // pathName
};

static emlrtRSInfo ce_emlrtRSI{
    72,                // lineNo
    "ceval_xungorghr", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xungorghr.m" // pathName
};

static emlrtRSInfo de_emlrtRSI{
    11,          // lineNo
    "xungorghr", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xungorghr.m" // pathName
};

static emlrtRSInfo ee_emlrtRSI{
    17,       // lineNo
    "xhseqr", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xhseqr.m" // pathName
};

static emlrtRSInfo fe_emlrtRSI{
    128,            // lineNo
    "ceval_xhseqr", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xhseqr.m" // pathName
};

static emlrtRSInfo ge_emlrtRSI{
    151,                   // lineNo
    "extractEigenVectors", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigReal"
    "SkewSymmetricStandard.m" // pathName
};

static emlrtRTEInfo k_emlrtRTEI{
    18,      // lineNo
    15,      // colNo
    "schur", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" // pName
};

static emlrtRTEInfo ld_emlrtRTEI{
    1,        // lineNo
    27,       // colNo
    "xgehrd", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgehrd.m" // pName
};

static emlrtRTEInfo md_emlrtRTEI{
    76,       // lineNo
    22,       // colNo
    "xgehrd", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgehrd.m" // pName
};

static emlrtRTEInfo nd_emlrtRTEI{
    86,       // lineNo
    9,        // colNo
    "xgehrd", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgehrd.m" // pName
};

static emlrtRTEInfo od_emlrtRTEI{
    87,       // lineNo
    9,        // colNo
    "xgehrd", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgehrd.m" // pName
};

static emlrtRTEInfo pd_emlrtRTEI{
    69,      // lineNo
    13,      // colNo
    "schur", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" // pName
};

static emlrtRTEInfo qd_emlrtRTEI{
    111,      // lineNo
    29,       // colNo
    "xhseqr", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xhseqr.m" // pName
};

static emlrtRTEInfo rd_emlrtRTEI{
    112,      // lineNo
    29,       // colNo
    "xhseqr", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xhseqr.m" // pName
};

static emlrtRTEInfo sd_emlrtRTEI{
    129,      // lineNo
    9,        // colNo
    "xhseqr", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xhseqr.m" // pName
};

static emlrtRTEInfo td_emlrtRTEI{
    130,      // lineNo
    9,        // colNo
    "xhseqr", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xhseqr.m" // pName
};

static emlrtRTEInfo ud_emlrtRTEI{
    42,      // lineNo
    9,       // colNo
    "schur", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" // pName
};

static emlrtRTEInfo vd_emlrtRTEI{
    46,      // lineNo
    9,       // colNo
    "schur", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" // pName
};

static emlrtRTEInfo wd_emlrtRTEI{
    23,                             // lineNo
    9,                              // colNo
    "eigRealSkewSymmetricStandard", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigReal"
    "SkewSymmetricStandard.m" // pName
};

static emlrtRTEInfo xd_emlrtRTEI{
    24,                             // lineNo
    9,                              // colNo
    "eigRealSkewSymmetricStandard", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigReal"
    "SkewSymmetricStandard.m" // pName
};

// Function Definitions
namespace coder {
void eigSkewHermitianStandard(const emlrtStack &sp, const array<real_T, 2U> &A,
                              array<creal_T, 2U> &V, array<creal_T, 2U> &D)
{
  static const char_T b_fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                  '_', 'd', 'o', 'r', 'g', 'h', 'r'};
  static const char_T c_fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                  '_', 'd', 'h', 's', 'e', 'q', 'r'};
  static const char_T fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 'g', 'e', 'h', 'r', 'd'};
  array<real_T, 2U> U;
  array<real_T, 2U> b_A;
  array<real_T, 2U> wi;
  array<real_T, 2U> wr;
  array<real_T, 1U> tau;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T lambda;
  int32_T exitg1;
  int32_T i;
  int32_T istart;
  int32_T j;
  int32_T m;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  st.site = &od_emlrtRSI;
  b_st.site = &qd_emlrtRSI;
  if (A.size(0) != A.size(1)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &k_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  c_st.site = &rd_emlrtRSI;
  if (internal::anyNonFinite(c_st, A)) {
    int32_T loop_ub_tmp;
    uint32_T unnamed_idx_0_tmp;
    unnamed_idx_0_tmp = static_cast<uint32_T>(A.size(0));
    U.set_size(&ud_emlrtRTEI, &b_st, A.size(0), A.size(1));
    loop_ub_tmp = A.size(0) * A.size(1);
    for (j = 0; j < loop_ub_tmp; j++) {
      U[j] = rtNaN;
    }
    c_st.site = &sd_emlrtRSI;
    m = A.size(0);
    if ((A.size(0) != 0) && (A.size(1) != 0) && (A.size(0) > 1)) {
      int32_T jend;
      istart = 2;
      if (A.size(0) - 2 < A.size(1) - 1) {
        jend = A.size(0) - 1;
      } else {
        jend = A.size(1);
      }
      d_st.site = &yd_emlrtRSI;
      for (j = 0; j < jend; j++) {
        d_st.site = &xd_emlrtRSI;
        if ((istart <= static_cast<int32_T>(unnamed_idx_0_tmp)) &&
            (static_cast<int32_T>(unnamed_idx_0_tmp) > 2147483646)) {
          e_st.site = &cc_emlrtRSI;
          check_forloop_overflow_error(e_st);
        }
        for (i = istart; i <= m; i++) {
          U[(i + U.size(0) * j) - 1] = 0.0;
        }
        istart++;
      }
    }
    b_A.set_size(&vd_emlrtRTEI, &b_st, A.size(0), A.size(1));
    for (j = 0; j < loop_ub_tmp; j++) {
      b_A[j] = rtNaN;
    }
  } else {
    ptrdiff_t info_t;
    int32_T jend;
    boolean_T b_p;
    boolean_T p;
    c_st.site = &td_emlrtRSI;
    j = A.size(0);
    b_A.set_size(&ld_emlrtRTEI, &c_st, A.size(0), A.size(1));
    istart = A.size(0) * A.size(1);
    for (m = 0; m < istart; m++) {
      b_A[m] = A[m];
    }
    d_st.site = &ae_emlrtRSI;
    if (b_A.size(0) < 1) {
      istart = 0;
    } else {
      istart = b_A.size(0) - 1;
    }
    tau.set_size(&md_emlrtRTEI, &d_st, istart);
    if (b_A.size(0) > 1) {
      info_t = LAPACKE_dgehrd(102, (ptrdiff_t)b_A.size(0), (ptrdiff_t)1,
                              (ptrdiff_t)b_A.size(0), &(b_A.data())[0],
                              (ptrdiff_t)muIntScalarMax_sint32(1, j),
                              &(tau.data())[0]);
      e_st.site = &be_emlrtRSI;
      if ((int32_T)info_t != 0) {
        p = true;
        if ((int32_T)info_t != -5) {
          if ((int32_T)info_t == -1010) {
            emlrtErrorWithMessageIdR2018a(&e_st, &i_emlrtRTEI, "MATLAB:nomem",
                                          "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &e_st, &h_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
                "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &fname[0], 12,
                (int32_T)info_t);
          }
        }
      } else {
        p = false;
      }
      if (p) {
        m = b_A.size(0);
        istart = b_A.size(1);
        b_A.set_size(&nd_emlrtRTEI, &d_st, m, istart);
        istart *= m;
        for (j = 0; j < istart; j++) {
          b_A[j] = rtNaN;
        }
        m = tau.size(0);
        tau.set_size(&od_emlrtRTEI, &d_st, m);
        for (j = 0; j < m; j++) {
          tau[j] = rtNaN;
        }
      }
    }
    c_st.site = &ud_emlrtRSI;
    j = b_A.size(0);
    U.set_size(&pd_emlrtRTEI, &c_st, b_A.size(0), b_A.size(1));
    istart = b_A.size(0) * b_A.size(1);
    for (m = 0; m < istart; m++) {
      U[m] = b_A[m];
    }
    d_st.site = &de_emlrtRSI;
    if (A.size(0) != 0) {
      if (A.size(0) == 1) {
        U[0] = 1.0;
      } else {
        info_t = LAPACKE_dorghr(102, (ptrdiff_t)A.size(0), (ptrdiff_t)1,
                                (ptrdiff_t)A.size(0), &(U.data())[0],
                                (ptrdiff_t)A.size(0), &(tau.data())[0]);
        e_st.site = &ce_emlrtRSI;
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
              emlrtErrorWithMessageIdR2018a(&e_st, &i_emlrtRTEI, "MATLAB:nomem",
                                            "MATLAB:nomem", 0);
            } else {
              emlrtErrorWithMessageIdR2018a(
                  &e_st, &h_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
                  "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &b_fname[0],
                  12, (int32_T)info_t);
            }
          }
        } else {
          p = false;
        }
        if (p) {
          m = U.size(0);
          istart = U.size(1);
          U.set_size(&pd_emlrtRTEI, &d_st, m, istart);
          istart *= m;
          for (m = 0; m < istart; m++) {
            U[m] = rtNaN;
          }
        }
      }
    }
    c_st.site = &vd_emlrtRSI;
    d_st.site = &ee_emlrtRSI;
    info_t = (ptrdiff_t)b_A.size(0);
    if ((b_A.size(0) != 0) && (b_A.size(1) != 0)) {
      wr.set_size(&qd_emlrtRTEI, &d_st, 1, b_A.size(0));
      wi.set_size(&rd_emlrtRTEI, &d_st, 1, b_A.size(0));
      info_t = LAPACKE_dhseqr(102, 'S', 'V', info_t, (ptrdiff_t)1,
                              (ptrdiff_t)b_A.size(0), &(b_A.data())[0], info_t,
                              &wr[0], &wi[0], &(U.data())[0],
                              (ptrdiff_t)muIntScalarMax_sint32(1, j));
      jend = (int32_T)info_t;
      e_st.site = &fe_emlrtRSI;
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
            emlrtErrorWithMessageIdR2018a(&e_st, &i_emlrtRTEI, "MATLAB:nomem",
                                          "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &e_st, &h_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
                "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &c_fname[0], 12,
                (int32_T)info_t);
          }
        }
      } else {
        p = false;
      }
      if (p) {
        m = b_A.size(0);
        istart = b_A.size(1);
        b_A.set_size(&sd_emlrtRTEI, &d_st, m, istart);
        istart *= m;
        for (j = 0; j < istart; j++) {
          b_A[j] = rtNaN;
        }
        m = U.size(0);
        istart = U.size(1);
        U.set_size(&td_emlrtRTEI, &d_st, m, istart);
        istart *= m;
        for (j = 0; j < istart; j++) {
          U[j] = rtNaN;
        }
      }
    } else {
      jend = 0;
    }
    if (jend != 0) {
      c_st.site = &wd_emlrtRSI;
      internal::b_warning(c_st);
    }
  }
  m = b_A.size(0);
  D.set_size(&wd_emlrtRTEI, &st, b_A.size(0), b_A.size(0));
  istart = b_A.size(0) * b_A.size(0);
  for (j = 0; j < istart; j++) {
    D[j].re = 0.0;
    D[j].im = 0.0;
  }
  i = 1;
  do {
    exitg1 = 0;
    if (i <= m) {
      if (i != m) {
        lambda = b_A[i + b_A.size(0) * (i - 1)];
        if (lambda != 0.0) {
          lambda = muDoubleScalarAbs(lambda);
          D[(i + D.size(0) * (i - 1)) - 1].re = 0.0;
          D[(i + D.size(0) * (i - 1)) - 1].im = lambda;
          D[i + D.size(0) * i].re = 0.0;
          D[i + D.size(0) * i].im = -lambda;
          i += 2;
        } else {
          i++;
        }
      } else {
        i++;
      }
    } else {
      exitg1 = 1;
    }
  } while (exitg1 == 0);
  b_st.site = &pd_emlrtRSI;
  V.set_size(&xd_emlrtRTEI, &b_st, U.size(0), U.size(1));
  istart = U.size(0) * U.size(1);
  for (j = 0; j < istart; j++) {
    V[j].re = U[j];
    V[j].im = 0.0;
  }
  j = 1;
  m = b_A.size(0);
  do {
    exitg1 = 0;
    if (j <= m) {
      if (j != m) {
        lambda = b_A[j + b_A.size(0) * (j - 1)];
        if (lambda != 0.0) {
          if (lambda < 0.0) {
            istart = 1;
          } else {
            istart = -1;
          }
          c_st.site = &ge_emlrtRSI;
          if (m > 2147483646) {
            d_st.site = &cc_emlrtRSI;
            check_forloop_overflow_error(d_st);
          }
          for (i = 0; i < m; i++) {
            real_T ai;
            lambda = V[i + V.size(0) * (j - 1)].re;
            ai = static_cast<real_T>(istart) * V[i + V.size(0) * j].re;
            if (ai == 0.0) {
              V[i + V.size(0) * (j - 1)].re = lambda / 1.4142135623730951;
              V[i + V.size(0) * (j - 1)].im = 0.0;
            } else if (lambda == 0.0) {
              V[i + V.size(0) * (j - 1)].re = 0.0;
              V[i + V.size(0) * (j - 1)].im = ai / 1.4142135623730951;
            } else {
              V[i + V.size(0) * (j - 1)].re = lambda / 1.4142135623730951;
              V[i + V.size(0) * (j - 1)].im = ai / 1.4142135623730951;
            }
            V[i + V.size(0) * j].re = V[i + V.size(0) * (j - 1)].re;
            V[i + V.size(0) * j].im = -V[i + V.size(0) * (j - 1)].im;
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
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (eigSkewHermitianStandard.cpp)
