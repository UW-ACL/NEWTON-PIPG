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
#include "dev_newtonpipg_compare_withtimer_data.h"
#include "eigSkewHermitianStandard.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstddef>
#include <cstring>

// Variable Definitions
static emlrtRSInfo hd_emlrtRSI{
    125,   // lineNo
    "eig", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pathName
};

static emlrtRSInfo id_emlrtRSI{
    133,   // lineNo
    "eig", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pathName
};

static emlrtRSInfo jd_emlrtRSI{
    141,   // lineNo
    "eig", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pathName
};

static emlrtRSInfo kd_emlrtRSI{
    27,                     // lineNo
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

static emlrtRSInfo be_emlrtRSI{
    26,            // lineNo
    "eigStandard", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigStan"
    "dard.m" // pathName
};

static emlrtRSInfo ce_emlrtRSI{
    45,            // lineNo
    "eigStandard", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigStan"
    "dard.m" // pathName
};

static emlrtRSInfo de_emlrtRSI{
    40,      // lineNo
    "xgeev", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pathName
};

static emlrtRSInfo ee_emlrtRSI{
    159,           // lineNo
    "ceval_xgeev", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" // pathName
};

static emlrtRTEInfo y_emlrtRTEI{
    50,    // lineNo
    27,    // colNo
    "eig", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" // pName
};

// Function Definitions
namespace coder {
void eig(const emlrtStack &sp, const real_T A_data[], const int32_T A_size[2],
         creal_T V_data[], int32_T V_size[2], creal_T D_data[],
         int32_T D_size[2])
{
  static const char_T b_fname[14]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                  '_', 'd', 'g', 'e', 'e', 'v', 'x'};
  static const char_T fname[13]{'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                '_', 'd', 's', 'y', 'e', 'v'};
  ptrdiff_t ihi_t;
  ptrdiff_t ilo_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T b_A_data[121];
  real_T vright_data[121];
  real_T scale_data[11];
  real_T wimag_data[11];
  real_T wreal_data[11];
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
  n_tmp = A_size[1];
  if (A_size[0] != A_size[1]) {
    emlrtErrorWithMessageIdR2018a(&sp, &y_emlrtRTEI,
                                  "MATLAB:eig:inputMustBeSquareStandard",
                                  "MATLAB:eig:inputMustBeSquareStandard", 0);
  }
  V_size[1] = A_size[1];
  V_size[0] = A_size[1];
  D_size[1] = A_size[1];
  D_size[0] = A_size[1];
  if ((A_size[1] != 0) && (A_size[0] != 0)) {
    int32_T k;
    int32_T loop_ub;
    boolean_T p;
    loop_ub = A_size[0] * A_size[1];
    p = true;
    for (k = 0; k < loop_ub; k++) {
      if (p) {
        vleft = A_data[k];
        if (muDoubleScalarIsInf(vleft) || muDoubleScalarIsNaN(vleft)) {
          p = false;
        }
      } else {
        p = false;
      }
    }
    if (!p) {
      int32_T b_i;
      V_size[1] = A_size[1];
      V_size[0] = A_size[1];
      loop_ub = A_size[1] * A_size[1];
      D_size[1] = A_size[1];
      D_size[0] = A_size[1];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        V_data[b_i].re = rtNaN;
        V_data[b_i].im = 0.0;
        D_data[b_i].re = 0.0;
        D_data[b_i].im = 0.0;
      }
      for (k = 0; k < n_tmp; k++) {
        b_i = k + D_size[1] * k;
        D_data[b_i].re = rtNaN;
        D_data[b_i].im = 0.0;
      }
    } else {
      int32_T exitg1;
      int32_T i;
      int32_T j;
      boolean_T exitg2;
      p = (A_size[0] == A_size[1]);
      if (p) {
        j = 0;
        exitg2 = false;
        while ((!exitg2) && (j <= A_size[0] - 1)) {
          i = 0;
          do {
            exitg1 = 0;
            if (i <= j) {
              if (!(A_data[i + A_size[1] * j] == A_data[j + A_size[1] * i])) {
                p = false;
                exitg1 = 1;
              } else {
                i++;
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
        int32_T b_i;
        st.site = &hd_emlrtRSI;
        b_st.site = &kd_emlrtRSI;
        std::copy(&A_data[0], &A_data[loop_ub], &b_A_data[0]);
        c_st.site = &md_emlrtRSI;
        ilo_t = (ptrdiff_t)A_size[1];
        info_t = LAPACKE_dsyev(102, 'V', 'L', ilo_t, &b_A_data[0], ilo_t,
                               &scale_data[0]);
        d_st.site = &nd_emlrtRSI;
        if ((int32_T)info_t < 0) {
          if ((int32_T)info_t == -1010) {
            emlrtErrorWithMessageIdR2018a(&d_st, &x_emlrtRTEI, "MATLAB:nomem",
                                          "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &d_st, &w_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
                "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 13, &fname[0], 12,
                (int32_T)info_t);
          }
        }
        D_size[1] = A_size[1];
        D_size[0] = A_size[1];
        loop_ub = A_size[1] * A_size[1];
        std::memset(&D_data[0], 0,
                    static_cast<uint32_T>(loop_ub) * sizeof(creal_T));
        for (i = 0; i < n_tmp; i++) {
          b_i = i + D_size[1] * i;
          D_data[b_i].re = scale_data[i];
          D_data[b_i].im = 0.0;
        }
        V_size[1] = A_size[1];
        V_size[0] = A_size[0];
        loop_ub = A_size[0] * A_size[1];
        for (b_i = 0; b_i < loop_ub; b_i++) {
          V_data[b_i].re = b_A_data[b_i];
          V_data[b_i].im = 0.0;
        }
        if ((int32_T)info_t != 0) {
          b_st.site = &ld_emlrtRSI;
          internal::warning(b_st);
        }
      } else {
        p = (A_size[0] == A_size[1]);
        if (p) {
          j = 0;
          exitg2 = false;
          while ((!exitg2) && (j <= A_size[0] - 1)) {
            i = 0;
            do {
              exitg1 = 0;
              if (i <= j) {
                if (!(A_data[i + A_size[1] * j] ==
                      -A_data[j + A_size[1] * i])) {
                  p = false;
                  exitg1 = 1;
                } else {
                  i++;
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
          st.site = &id_emlrtRSI;
          eigSkewHermitianStandard(st, A_data, A_size, V_data, V_size, D_data,
                                   D_size);
        } else {
          ptrdiff_t info_t;
          creal_T W_data[11];
          int32_T b_i;
          st.site = &jd_emlrtRSI;
          b_st.site = &be_emlrtRSI;
          c_st.site = &de_emlrtRSI;
          b_i = A_size[0];
          std::copy(&A_data[0], &A_data[loop_ub], &b_A_data[0]);
          info_t = LAPACKE_dgeevx(
              102, 'B', 'N', 'V', 'N', (ptrdiff_t)A_size[0], &b_A_data[0],
              (ptrdiff_t)A_size[1], &wreal_data[0], &wimag_data[0], &vleft,
              (ptrdiff_t)1, &vright_data[0], (ptrdiff_t)A_size[0], &ilo_t,
              &ihi_t, &scale_data[0], &abnrm, &rconde, &rcondv);
          d_st.site = &ee_emlrtRSI;
          if ((int32_T)info_t < 0) {
            if ((int32_T)info_t == -1010) {
              emlrtErrorWithMessageIdR2018a(&d_st, &x_emlrtRTEI, "MATLAB:nomem",
                                            "MATLAB:nomem", 0);
            } else {
              emlrtErrorWithMessageIdR2018a(
                  &d_st, &w_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
                  "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &b_fname[0],
                  12, (int32_T)info_t);
            }
          }
          for (i = 0; i < b_i; i++) {
            W_data[i].re = wreal_data[i];
            W_data[i].im = wimag_data[i];
          }
          V_size[1] = A_size[0];
          V_size[0] = A_size[0];
          loop_ub = A_size[0] * A_size[0];
          for (k = 0; k < loop_ub; k++) {
            V_data[k].re = vright_data[k];
            V_data[k].im = 0.0;
          }
          for (i = 2; i <= b_i; i++) {
            if ((wimag_data[i - 2] > 0.0) && (wimag_data[i - 1] < 0.0)) {
              for (j = 0; j < b_i; j++) {
                loop_ub = j + V_size[1] * (i - 2);
                k = j + V_size[1] * (i - 1);
                vleft = V_data[k].re;
                V_data[loop_ub].im = vleft;
                V_data[k].re = V_data[loop_ub].re;
                V_data[k].im = -vleft;
              }
            }
          }
          D_size[1] = A_size[1];
          D_size[0] = A_size[1];
          loop_ub = A_size[1] * A_size[1];
          std::memset(&D_data[0], 0,
                      static_cast<uint32_T>(loop_ub) * sizeof(creal_T));
          for (k = 0; k < n_tmp; k++) {
            D_data[k + D_size[1] * k] = W_data[k];
          }
          if ((int32_T)info_t != 0) {
            b_st.site = &ce_emlrtRSI;
            internal::warning(b_st);
          }
        }
      }
    }
  }
}

} // namespace coder

// End of code generation (eig.cpp)
