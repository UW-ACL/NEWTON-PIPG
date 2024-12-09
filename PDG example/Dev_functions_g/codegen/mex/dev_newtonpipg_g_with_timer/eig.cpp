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
#include "dev_newtonpipg_g_with_timer_data.h"
#include "eigSkewHermitianStandard.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "coder_array.h"
#include "lapacke.h"
#include <cstddef>

// Variable Definitions
static emlrtRSInfo te_emlrtRSI{
    81,    // lineNo
    "eig", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pathName
};

static emlrtRSInfo ue_emlrtRSI{
    90,    // lineNo
    "eig", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pathName
};

static emlrtRSInfo ve_emlrtRSI{
    125,   // lineNo
    "eig", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pathName
};

static emlrtRSInfo we_emlrtRSI{
    133,   // lineNo
    "eig", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pathName
};

static emlrtRSInfo xe_emlrtRSI{
    141,   // lineNo
    "eig", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pathName
};

static emlrtRSInfo cf_emlrtRSI{
    27,                     // lineNo
    "eigHermitianStandard", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHerm"
    "itianStandard.m" // pathName
};

static emlrtRSInfo df_emlrtRSI{
    29,                     // lineNo
    "eigHermitianStandard", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHerm"
    "itianStandard.m" // pathName
};

static emlrtRSInfo ef_emlrtRSI{
    40,                     // lineNo
    "eigHermitianStandard", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHerm"
    "itianStandard.m" // pathName
};

static emlrtRSInfo ff_emlrtRSI{
    10,        // lineNo
    "xsyheev", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xsyheev.m" // pathName
};

static emlrtRSInfo gf_emlrtRSI{
    61,              // lineNo
    "ceval_xsyheev", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xsyheev.m" // pathName
};

static emlrtRSInfo ag_emlrtRSI{
    26,            // lineNo
    "eigStandard", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigStan"
    "dard.m" // pathName
};

static emlrtRSInfo bg_emlrtRSI{
    28,            // lineNo
    "eigStandard", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigStan"
    "dard.m" // pathName
};

static emlrtRSInfo cg_emlrtRSI{
    45,            // lineNo
    "eigStandard", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigStan"
    "dard.m" // pathName
};

static emlrtRSInfo dg_emlrtRSI{
    40,      // lineNo
    "xgeev", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pathName
};

static emlrtRSInfo eg_emlrtRSI{
    174,           // lineNo
    "ceval_xgeev", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pathName
};

static emlrtRSInfo fg_emlrtRSI{
    172,           // lineNo
    "ceval_xgeev", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pathName
};

static emlrtRSInfo gg_emlrtRSI{
    164,           // lineNo
    "ceval_xgeev", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pathName
};

static emlrtRSInfo hg_emlrtRSI{
    159,           // lineNo
    "ceval_xgeev", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pathName
};

static emlrtRTEInfo r_emlrtRTEI{
    50,    // lineNo
    27,    // colNo
    "eig", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pName
};

static emlrtRTEInfo lf_emlrtRTEI{
    56,    // lineNo
    24,    // colNo
    "eig", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pName
};

static emlrtRTEInfo mf_emlrtRTEI{
    60,    // lineNo
    28,    // colNo
    "eig", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pName
};

static emlrtRTEInfo nf_emlrtRTEI{
    40,      // lineNo
    37,      // colNo
    "xgeev", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pName
};

static emlrtRTEInfo of_emlrtRTEI{
    99,      // lineNo
    24,      // colNo
    "xgeev", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pName
};

static emlrtRTEInfo pf_emlrtRTEI{
    102,     // lineNo
    21,      // colNo
    "xgeev", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pName
};

static emlrtRTEInfo qf_emlrtRTEI{
    131,     // lineNo
    29,      // colNo
    "xgeev", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pName
};

static emlrtRTEInfo rf_emlrtRTEI{
    132,     // lineNo
    29,      // colNo
    "xgeev", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pName
};

static emlrtRTEInfo sf_emlrtRTEI{
    134,     // lineNo
    35,      // colNo
    "xgeev", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pName
};

static emlrtRTEInfo tf_emlrtRTEI{
    168,     // lineNo
    16,      // colNo
    "xgeev", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pName
};

static emlrtRTEInfo uf_emlrtRTEI{
    27,            // lineNo
    13,            // colNo
    "eigStandard", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigStan"
    "dard.m" // pName
};

static emlrtRTEInfo vf_emlrtRTEI{
    1,         // lineNo
    30,        // colNo
    "xsyheev", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xsyheev.m" // pName
};

static emlrtRTEInfo wf_emlrtRTEI{
    47,        // lineNo
    20,        // colNo
    "xsyheev", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xsyheev.m" // pName
};

static emlrtRTEInfo xf_emlrtRTEI{
    28,                     // lineNo
    9,                      // colNo
    "eigHermitianStandard", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHerm"
    "itianStandard.m" // pName
};

static emlrtRTEInfo yf_emlrtRTEI{
    33,                     // lineNo
    5,                      // colNo
    "eigHermitianStandard", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHerm"
    "itianStandard.m" // pName
};

static emlrtRTEInfo ag_emlrtRTEI{
    85,    // lineNo
    9,     // colNo
    "eig", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pName
};

static emlrtRTEInfo bg_emlrtRTEI{
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
    emlrtErrorWithMessageIdR2018a(&sp, &r_emlrtRTEI,
                                  "MATLAB:eig:inputMustBeSquareStandard",
                                  "MATLAB:eig:inputMustBeSquareStandard", 0);
  }
  V.set_size(&lf_emlrtRTEI, &sp, A.size(0), A.size(0));
  D.set_size(&mf_emlrtRTEI, &sp, A.size(0), A.size(0));
  if ((A.size(0) != 0) && (A.size(1) != 0)) {
    st.site = &te_emlrtRSI;
    if (internal::anyNonFinite(st, A)) {
      int32_T j;
      V.set_size(&ag_emlrtRTEI, &sp, A.size(0), A.size(0));
      j = A.size(0) * A.size(0);
      for (int32_T i{0}; i < j; i++) {
        V[i].re = rtNaN;
        V[i].im = 0.0;
      }
      D.set_size(&bg_emlrtRTEI, &sp, A.size(0), A.size(0));
      for (int32_T i{0}; i < j; i++) {
        D[i].re = 0.0;
        D[i].im = 0.0;
      }
      st.site = &ue_emlrtRSI;
      if (A.size(0) > 2147483646) {
        b_st.site = &v_emlrtRSI;
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
        st.site = &ve_emlrtRSI;
        b_st.site = &cf_emlrtRSI;
        b_A.set_size(&vf_emlrtRTEI, &b_st, A.size(0), A.size(1));
        j = A.size(0) * A.size(1);
        for (int32_T i{0}; i < j; i++) {
          b_A[i] = A[i];
        }
        c_st.site = &ff_emlrtRSI;
        ilo_t = (ptrdiff_t)b_A.size(0);
        scale.set_size(&wf_emlrtRTEI, &c_st, A.size(0));
        info_t = LAPACKE_dsyev(102, 'V', 'L', ilo_t, &(b_A.data())[0], ilo_t,
                               &(scale.data())[0]);
        d_st.site = &gf_emlrtRSI;
        if ((int32_T)info_t < 0) {
          if ((int32_T)info_t == -1010) {
            emlrtErrorWithMessageIdR2018a(&d_st, &q_emlrtRTEI, "MATLAB:nomem",
                                          "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &d_st, &p_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
                "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 13, &fname[0], 12,
                (int32_T)info_t);
          }
        }
        D.set_size(&xf_emlrtRTEI, &st, A.size(0), A.size(0));
        j = A.size(0) * A.size(0);
        for (int32_T i{0}; i < j; i++) {
          D[i].re = 0.0;
          D[i].im = 0.0;
        }
        b_st.site = &df_emlrtRSI;
        if (A.size(0) > 2147483646) {
          c_st.site = &v_emlrtRSI;
          check_forloop_overflow_error(c_st);
        }
        for (b_i = 0; b_i < n_tmp; b_i++) {
          D[b_i + D.size(0) * b_i].re = scale[b_i];
          D[b_i + D.size(0) * b_i].im = 0.0;
        }
        V.set_size(&yf_emlrtRTEI, &st, b_A.size(0), b_A.size(1));
        j = b_A.size(0) * b_A.size(1);
        for (int32_T i{0}; i < j; i++) {
          V[i].re = b_A[i];
          V[i].im = 0.0;
        }
        if ((int32_T)info_t != 0) {
          b_st.site = &ef_emlrtRSI;
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
          st.site = &we_emlrtRSI;
          eigSkewHermitianStandard(st, A, V, D);
        } else {
          ptrdiff_t info_t;
          int32_T i;
          st.site = &xe_emlrtRSI;
          b_st.site = &ag_emlrtRSI;
          c_st.site = &dg_emlrtRSI;
          i = A.size(1);
          b_A.set_size(&nf_emlrtRTEI, &c_st, A.size(0), A.size(1));
          j = A.size(0) * A.size(1);
          for (b_i = 0; b_i < j; b_i++) {
            b_A[b_i] = A[b_i];
          }
          scale.set_size(&of_emlrtRTEI, &c_st, A.size(1));
          W.set_size(&pf_emlrtRTEI, &c_st, A.size(1));
          wreal.set_size(&qf_emlrtRTEI, &c_st, A.size(1));
          wimag.set_size(&rf_emlrtRTEI, &c_st, A.size(1));
          vright.set_size(&sf_emlrtRTEI, &c_st, A.size(1), A.size(1));
          info_t = LAPACKE_dgeevx(
              102, 'B', 'N', 'V', 'N', (ptrdiff_t)A.size(1), &(b_A.data())[0],
              (ptrdiff_t)A.size(0), &(wreal.data())[0], &(wimag.data())[0],
              &vleft, (ptrdiff_t)1, &(vright.data())[0], (ptrdiff_t)A.size(1),
              &ilo_t, &ihi_t, &(scale.data())[0], &abnrm, &rconde, &rcondv);
          d_st.site = &hg_emlrtRSI;
          if ((int32_T)info_t < 0) {
            if ((int32_T)info_t == -1010) {
              emlrtErrorWithMessageIdR2018a(&d_st, &q_emlrtRTEI, "MATLAB:nomem",
                                            "MATLAB:nomem", 0);
            } else {
              emlrtErrorWithMessageIdR2018a(
                  &d_st, &p_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
                  "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &b_fname[0],
                  12, (int32_T)info_t);
            }
          }
          d_st.site = &gg_emlrtRSI;
          if (A.size(1) > 2147483646) {
            e_st.site = &v_emlrtRSI;
            check_forloop_overflow_error(e_st);
          }
          for (b_i = 0; b_i < i; b_i++) {
            W[b_i].re = wreal[b_i];
            W[b_i].im = wimag[b_i];
          }
          V.set_size(&tf_emlrtRTEI, &c_st, vright.size(0), vright.size(1));
          j = vright.size(0) * vright.size(1);
          for (b_i = 0; b_i < j; b_i++) {
            V[b_i].re = vright[b_i];
            V[b_i].im = 0.0;
          }
          d_st.site = &fg_emlrtRSI;
          for (b_i = 2; b_i <= i; b_i++) {
            if ((wimag[b_i - 2] > 0.0) && (wimag[b_i - 1] < 0.0)) {
              d_st.site = &eg_emlrtRSI;
              if (i > 2147483646) {
                e_st.site = &v_emlrtRSI;
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
          D.set_size(&uf_emlrtRTEI, &st, A.size(0), A.size(0));
          j = A.size(0) * A.size(0);
          for (i = 0; i < j; i++) {
            D[i].re = 0.0;
            D[i].im = 0.0;
          }
          b_st.site = &bg_emlrtRSI;
          if (A.size(0) > 2147483646) {
            c_st.site = &v_emlrtRSI;
            check_forloop_overflow_error(c_st);
          }
          for (j = 0; j < n_tmp; j++) {
            D[j + D.size(0) * j] = W[j];
          }
          if ((int32_T)info_t != 0) {
            b_st.site = &cg_emlrtRSI;
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
