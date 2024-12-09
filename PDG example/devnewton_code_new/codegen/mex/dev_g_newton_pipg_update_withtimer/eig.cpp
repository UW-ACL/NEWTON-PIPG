//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// eig.cpp
//
// Code generation for function 'eig'
//

// Include files
#include "eig.h"
#include "anyNonFinite.h"
#include "dev_g_newton_pipg_update_withtimer_data.h"
#include "eigSkewHermitianStandard.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "coder_array.h"
#include "lapacke.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo bd_emlrtRSI{
    81,    // lineNo
    "eig", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pathName
};

static emlrtRSInfo cd_emlrtRSI{
    90,    // lineNo
    "eig", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pathName
};

static emlrtRSInfo dd_emlrtRSI{
    125,   // lineNo
    "eig", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pathName
};

static emlrtRSInfo ed_emlrtRSI{
    133,   // lineNo
    "eig", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pathName
};

static emlrtRSInfo fd_emlrtRSI{
    141,   // lineNo
    "eig", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pathName
};

static emlrtRSInfo jd_emlrtRSI{
    27,                     // lineNo
    "eigHermitianStandard", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHerm"
    "itianStandard.m" // pathName
};

static emlrtRSInfo kd_emlrtRSI{
    29,                     // lineNo
    "eigHermitianStandard", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHerm"
    "itianStandard.m" // pathName
};

static emlrtRSInfo ld_emlrtRSI{
    40,                     // lineNo
    "eigHermitianStandard", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHerm"
    "itianStandard.m" // pathName
};

static emlrtRSInfo md_emlrtRSI{
    10,        // lineNo
    "xsyheev", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xsyheev.m" // pathName
};

static emlrtRSInfo nd_emlrtRSI{
    61,              // lineNo
    "ceval_xsyheev", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xsyheev.m" // pathName
};

static emlrtRSInfo he_emlrtRSI{
    26,            // lineNo
    "eigStandard", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigStan"
    "dard.m" // pathName
};

static emlrtRSInfo ie_emlrtRSI{
    28,            // lineNo
    "eigStandard", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigStan"
    "dard.m" // pathName
};

static emlrtRSInfo je_emlrtRSI{
    45,            // lineNo
    "eigStandard", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigStan"
    "dard.m" // pathName
};

static emlrtRSInfo ke_emlrtRSI{
    40,      // lineNo
    "xgeev", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pathName
};

static emlrtRSInfo le_emlrtRSI{
    174,           // lineNo
    "ceval_xgeev", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pathName
};

static emlrtRSInfo me_emlrtRSI{
    172,           // lineNo
    "ceval_xgeev", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pathName
};

static emlrtRSInfo ne_emlrtRSI{
    164,           // lineNo
    "ceval_xgeev", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pathName
};

static emlrtRSInfo oe_emlrtRSI{
    159,           // lineNo
    "ceval_xgeev", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pathName
};

static emlrtRTEInfo j_emlrtRTEI{
    50,    // lineNo
    27,    // colNo
    "eig", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pName
};

static emlrtRTEInfo uc_emlrtRTEI{
    56,    // lineNo
    24,    // colNo
    "eig", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pName
};

static emlrtRTEInfo vc_emlrtRTEI{
    60,    // lineNo
    28,    // colNo
    "eig", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pName
};

static emlrtRTEInfo wc_emlrtRTEI{
    40,      // lineNo
    37,      // colNo
    "xgeev", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pName
};

static emlrtRTEInfo xc_emlrtRTEI{
    99,      // lineNo
    24,      // colNo
    "xgeev", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pName
};

static emlrtRTEInfo yc_emlrtRTEI{
    102,     // lineNo
    21,      // colNo
    "xgeev", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pName
};

static emlrtRTEInfo ad_emlrtRTEI{
    131,     // lineNo
    29,      // colNo
    "xgeev", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pName
};

static emlrtRTEInfo bd_emlrtRTEI{
    132,     // lineNo
    29,      // colNo
    "xgeev", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pName
};

static emlrtRTEInfo cd_emlrtRTEI{
    134,     // lineNo
    35,      // colNo
    "xgeev", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pName
};

static emlrtRTEInfo dd_emlrtRTEI{
    168,     // lineNo
    16,      // colNo
    "xgeev", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pName
};

static emlrtRTEInfo ed_emlrtRTEI{
    27,            // lineNo
    13,            // colNo
    "eigStandard", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigStan"
    "dard.m" // pName
};

static emlrtRTEInfo fd_emlrtRTEI{
    1,         // lineNo
    30,        // colNo
    "xsyheev", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xsyheev.m" // pName
};

static emlrtRTEInfo gd_emlrtRTEI{
    47,        // lineNo
    20,        // colNo
    "xsyheev", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xsyheev.m" // pName
};

static emlrtRTEInfo hd_emlrtRTEI{
    28,                     // lineNo
    9,                      // colNo
    "eigHermitianStandard", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHerm"
    "itianStandard.m" // pName
};

static emlrtRTEInfo id_emlrtRTEI{
    33,                     // lineNo
    5,                      // colNo
    "eigHermitianStandard", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHerm"
    "itianStandard.m" // pName
};

static emlrtRTEInfo jd_emlrtRTEI{
    85,    // lineNo
    9,     // colNo
    "eig", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pName
};

static emlrtRTEInfo kd_emlrtRTEI{
    89,    // lineNo
    13,    // colNo
    "eig", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pName
};

// Function Definitions
namespace coder {
void eig(const emlrtStack &sp, const array<real_T, 2U> &A,
         array<creal_T, 2U> &V, array<creal_T, 2U> &D)
{
  static const char_T b_fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                  '_', 'd', 'g', 'e', 'e', 'v', 'x'};
  static const char_T fname[13]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 's', 'y', 'e', 'v'};
  ptrdiff_t ihi_t;
  ptrdiff_t ilo_t;
  array<creal_T, 1U> W;
  array<real_T, 2U> b_A;
  array<real_T, 2U> vright;
  array<real_T, 1U> scale;
  array<real_T, 1U> wimag;
  array<real_T, 1U> wreal;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T abnrm;
  real_T rconde;
  real_T rcondv;
  real_T vleft;
  int32_T n_tmp;
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
  n_tmp = A.size(0);
  if (A.size(0) != A.size(1)) {
    emlrtErrorWithMessageIdR2018a(&sp, &j_emlrtRTEI,
                                  "MATLAB:eig:inputMustBeSquareStandard",
                                  "MATLAB:eig:inputMustBeSquareStandard", 0);
  }
  V.set_size(&uc_emlrtRTEI, &sp, A.size(0), A.size(0));
  D.set_size(&vc_emlrtRTEI, &sp, A.size(0), A.size(0));
  if ((A.size(0) != 0) && (A.size(1) != 0)) {
    st.site = &bd_emlrtRSI;
    if (internal::anyNonFinite(st, A)) {
      int32_T j;
      V.set_size(&jd_emlrtRTEI, &sp, A.size(0), A.size(0));
      j = A.size(0) * A.size(0);
      for (int32_T i{0}; i < j; i++) {
        V[i].re = rtNaN;
        V[i].im = 0.0;
      }
      D.set_size(&kd_emlrtRTEI, &sp, A.size(0), A.size(0));
      for (int32_T i{0}; i < j; i++) {
        D[i].re = 0.0;
        D[i].im = 0.0;
      }
      st.site = &cd_emlrtRSI;
      if (A.size(0) > 2147483646) {
        b_st.site = &cc_emlrtRSI;
        check_forloop_overflow_error(b_st);
      }
      for (j = 0; j < n_tmp; j++) {
        D[j + D.size(0) * j].re = rtNaN;
        D[j + D.size(0) * j].im = 0.0;
      }
    } else {
      int32_T b_i;
      int32_T exitg1;
      int32_T j;
      boolean_T exitg2;
      boolean_T p;
      p = (A.size(0) == A.size(1));
      if (p) {
        j = 0;
        exitg2 = false;
        while ((!exitg2) && (j <= A.size(1) - 1)) {
          b_i = 0;
          do {
            exitg1 = 0;
            if (b_i <= j) {
              if (!(A[b_i + A.size(0) * j] == A[j + A.size(0) * b_i])) {
                p = false;
                exitg1 = 1;
              } else {
                b_i++;
              }
            } else {
              j++;
              exitg1 = 2;
            }
          } while (exitg1 == 0);
          if (exitg1 == 1) {
            exitg2 = true;
          }
        }
      }
      if (p) {
        ptrdiff_t info_t;
        st.site = &dd_emlrtRSI;
        b_st.site = &jd_emlrtRSI;
        b_A.set_size(&fd_emlrtRTEI, &b_st, A.size(0), A.size(1));
        j = A.size(0) * A.size(1);
        for (int32_T i{0}; i < j; i++) {
          b_A[i] = A[i];
        }
        c_st.site = &md_emlrtRSI;
        ilo_t = (ptrdiff_t)b_A.size(0);
        scale.set_size(&gd_emlrtRTEI, &c_st, A.size(0));
        info_t = LAPACKE_dsyev(102, 'V', 'L', ilo_t, &(b_A.data())[0], ilo_t,
                               &(scale.data())[0]);
        d_st.site = &nd_emlrtRSI;
        if ((int32_T)info_t < 0) {
          if ((int32_T)info_t == -1010) {
            emlrtErrorWithMessageIdR2018a(&d_st, &i_emlrtRTEI, "MATLAB:nomem",
                                          "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &d_st, &h_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
                "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 13, &fname[0], 12,
                (int32_T)info_t);
          }
        }
        D.set_size(&hd_emlrtRTEI, &st, A.size(0), A.size(0));
        j = A.size(0) * A.size(0);
        for (int32_T i{0}; i < j; i++) {
          D[i].re = 0.0;
          D[i].im = 0.0;
        }
        b_st.site = &kd_emlrtRSI;
        if (A.size(0) > 2147483646) {
          c_st.site = &cc_emlrtRSI;
          check_forloop_overflow_error(c_st);
        }
        for (b_i = 0; b_i < n_tmp; b_i++) {
          D[b_i + D.size(0) * b_i].re = scale[b_i];
          D[b_i + D.size(0) * b_i].im = 0.0;
        }
        V.set_size(&id_emlrtRTEI, &st, b_A.size(0), b_A.size(1));
        j = b_A.size(0) * b_A.size(1);
        for (int32_T i{0}; i < j; i++) {
          V[i].re = b_A[i];
          V[i].im = 0.0;
        }
        if ((int32_T)info_t != 0) {
          b_st.site = &ld_emlrtRSI;
          internal::warning(b_st);
        }
      } else {
        p = (A.size(0) == A.size(1));
        if (p) {
          j = 0;
          exitg2 = false;
          while ((!exitg2) && (j <= A.size(1) - 1)) {
            b_i = 0;
            do {
              exitg1 = 0;
              if (b_i <= j) {
                if (!(A[b_i + A.size(0) * j] == -A[j + A.size(0) * b_i])) {
                  p = false;
                  exitg1 = 1;
                } else {
                  b_i++;
                }
              } else {
                j++;
                exitg1 = 2;
              }
            } while (exitg1 == 0);
            if (exitg1 == 1) {
              exitg2 = true;
            }
          }
        }
        if (p) {
          st.site = &ed_emlrtRSI;
          eigSkewHermitianStandard(st, A, V, D);
        } else {
          ptrdiff_t info_t;
          int32_T i;
          st.site = &fd_emlrtRSI;
          b_st.site = &he_emlrtRSI;
          c_st.site = &ke_emlrtRSI;
          i = A.size(1);
          b_A.set_size(&wc_emlrtRTEI, &c_st, A.size(0), A.size(1));
          j = A.size(0) * A.size(1);
          for (b_i = 0; b_i < j; b_i++) {
            b_A[b_i] = A[b_i];
          }
          scale.set_size(&xc_emlrtRTEI, &c_st, A.size(1));
          W.set_size(&yc_emlrtRTEI, &c_st, A.size(1));
          wreal.set_size(&ad_emlrtRTEI, &c_st, A.size(1));
          wimag.set_size(&bd_emlrtRTEI, &c_st, A.size(1));
          vright.set_size(&cd_emlrtRTEI, &c_st, A.size(1), A.size(1));
          info_t = LAPACKE_dgeevx(
              102, 'B', 'N', 'V', 'N', (ptrdiff_t)A.size(1), &(b_A.data())[0],
              (ptrdiff_t)A.size(0), &(wreal.data())[0], &(wimag.data())[0],
              &vleft, (ptrdiff_t)1, &(vright.data())[0], (ptrdiff_t)A.size(1),
              &ilo_t, &ihi_t, &(scale.data())[0], &abnrm, &rconde, &rcondv);
          d_st.site = &oe_emlrtRSI;
          if ((int32_T)info_t < 0) {
            if ((int32_T)info_t == -1010) {
              emlrtErrorWithMessageIdR2018a(&d_st, &i_emlrtRTEI, "MATLAB:nomem",
                                            "MATLAB:nomem", 0);
            } else {
              emlrtErrorWithMessageIdR2018a(
                  &d_st, &h_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
                  "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &b_fname[0],
                  12, (int32_T)info_t);
            }
          }
          d_st.site = &ne_emlrtRSI;
          if (A.size(1) > 2147483646) {
            e_st.site = &cc_emlrtRSI;
            check_forloop_overflow_error(e_st);
          }
          for (b_i = 0; b_i < i; b_i++) {
            W[b_i].re = wreal[b_i];
            W[b_i].im = wimag[b_i];
          }
          V.set_size(&dd_emlrtRTEI, &c_st, vright.size(0), vright.size(1));
          j = vright.size(0) * vright.size(1);
          for (b_i = 0; b_i < j; b_i++) {
            V[b_i].re = vright[b_i];
            V[b_i].im = 0.0;
          }
          d_st.site = &me_emlrtRSI;
          for (b_i = 2; b_i <= i; b_i++) {
            if ((wimag[b_i - 2] > 0.0) && (wimag[b_i - 1] < 0.0)) {
              d_st.site = &le_emlrtRSI;
              if (i > 2147483646) {
                e_st.site = &cc_emlrtRSI;
                check_forloop_overflow_error(e_st);
              }
              for (j = 0; j < i; j++) {
                vleft = V[j + V.size(0) * (b_i - 2)].re;
                abnrm = V[j + V.size(0) * (b_i - 1)].re;
                V[j + V.size(0) * (b_i - 2)].im = abnrm;
                V[j + V.size(0) * (b_i - 1)].re = vleft;
                V[j + V.size(0) * (b_i - 1)].im = -abnrm;
              }
            }
          }
          D.set_size(&ed_emlrtRTEI, &st, A.size(0), A.size(0));
          j = A.size(0) * A.size(0);
          for (i = 0; i < j; i++) {
            D[i].re = 0.0;
            D[i].im = 0.0;
          }
          b_st.site = &ie_emlrtRSI;
          if (A.size(0) > 2147483646) {
            c_st.site = &cc_emlrtRSI;
            check_forloop_overflow_error(c_st);
          }
          for (j = 0; j < n_tmp; j++) {
            D[j + D.size(0) * j] = W[j];
          }
          if ((int32_T)info_t != 0) {
            b_st.site = &je_emlrtRSI;
            internal::warning(b_st);
          }
        }
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

} // namespace coder

// End of code generation (eig.cpp)
