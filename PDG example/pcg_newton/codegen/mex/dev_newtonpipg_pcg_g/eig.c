/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eig.c
 *
 * Code generation for function 'eig'
 *
 */

/* Include files */
#include "eig.h"
#include "anyNonFinite.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_emxutil.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "eigSkewHermitianStandard.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "lapacke.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo de_emlrtRSI = {
    81,    /* lineNo */
    "eig", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pathName
                                                                       */
};

static emlrtRSInfo ee_emlrtRSI = {
    90,    /* lineNo */
    "eig", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pathName
                                                                       */
};

static emlrtRSInfo fe_emlrtRSI = {
    125,   /* lineNo */
    "eig", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pathName
                                                                       */
};

static emlrtRSInfo ge_emlrtRSI = {
    133,   /* lineNo */
    "eig", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pathName
                                                                       */
};

static emlrtRSInfo he_emlrtRSI = {
    141,   /* lineNo */
    "eig", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pathName
                                                                       */
};

static emlrtRSInfo le_emlrtRSI = {
    27,                     /* lineNo */
    "eigHermitianStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHerm"
    "itianStandard.m" /* pathName */
};

static emlrtRSInfo me_emlrtRSI = {
    29,                     /* lineNo */
    "eigHermitianStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHerm"
    "itianStandard.m" /* pathName */
};

static emlrtRSInfo ne_emlrtRSI = {
    40,                     /* lineNo */
    "eigHermitianStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHerm"
    "itianStandard.m" /* pathName */
};

static emlrtRSInfo oe_emlrtRSI = {
    10,        /* lineNo */
    "xsyheev", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xsyheev.m" /* pathName */
};

static emlrtRSInfo pe_emlrtRSI = {
    61,              /* lineNo */
    "ceval_xsyheev", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xsyheev.m" /* pathName */
};

static emlrtRSInfo jf_emlrtRSI = {
    26,            /* lineNo */
    "eigStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigStan"
    "dard.m" /* pathName */
};

static emlrtRSInfo kf_emlrtRSI = {
    28,            /* lineNo */
    "eigStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigStan"
    "dard.m" /* pathName */
};

static emlrtRSInfo lf_emlrtRSI = {
    45,            /* lineNo */
    "eigStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigStan"
    "dard.m" /* pathName */
};

static emlrtRSInfo mf_emlrtRSI = {
    40,      /* lineNo */
    "xgeev", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" /* pathName */
};

static emlrtRSInfo nf_emlrtRSI = {
    174,           /* lineNo */
    "ceval_xgeev", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" /* pathName */
};

static emlrtRSInfo of_emlrtRSI = {
    172,           /* lineNo */
    "ceval_xgeev", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" /* pathName */
};

static emlrtRSInfo pf_emlrtRSI = {
    164,           /* lineNo */
    "ceval_xgeev", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" /* pathName */
};

static emlrtRSInfo qf_emlrtRSI = {
    159,           /* lineNo */
    "ceval_xgeev", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" /* pathName */
};

static emlrtRTEInfo s_emlrtRTEI = {
    50,    /* lineNo */
    27,    /* colNo */
    "eig", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pName
                                                                       */
};

static emlrtRTEInfo sg_emlrtRTEI = {
    56,    /* lineNo */
    24,    /* colNo */
    "eig", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pName
                                                                       */
};

static emlrtRTEInfo tg_emlrtRTEI = {
    60,    /* lineNo */
    28,    /* colNo */
    "eig", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pName
                                                                       */
};

static emlrtRTEInfo ug_emlrtRTEI = {
    85,    /* lineNo */
    9,     /* colNo */
    "eig", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pName
                                                                       */
};

static emlrtRTEInfo vg_emlrtRTEI = {
    89,    /* lineNo */
    13,    /* colNo */
    "eig", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pName
                                                                       */
};

static emlrtRTEInfo wg_emlrtRTEI = {
    1,         /* lineNo */
    30,        /* colNo */
    "xsyheev", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xsyheev.m" /* pName */
};

static emlrtRTEInfo xg_emlrtRTEI = {
    40,      /* lineNo */
    37,      /* colNo */
    "xgeev", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" /* pName */
};

static emlrtRTEInfo yg_emlrtRTEI = {
    47,        /* lineNo */
    20,        /* colNo */
    "xsyheev", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xsyheev.m" /* pName */
};

static emlrtRTEInfo ah_emlrtRTEI = {
    99,      /* lineNo */
    24,      /* colNo */
    "xgeev", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" /* pName */
};

static emlrtRTEInfo bh_emlrtRTEI = {
    102,     /* lineNo */
    21,      /* colNo */
    "xgeev", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" /* pName */
};

static emlrtRTEInfo ch_emlrtRTEI = {
    131,     /* lineNo */
    29,      /* colNo */
    "xgeev", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" /* pName */
};

static emlrtRTEInfo dh_emlrtRTEI = {
    28,                     /* lineNo */
    9,                      /* colNo */
    "eigHermitianStandard", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHerm"
    "itianStandard.m" /* pName */
};

static emlrtRTEInfo eh_emlrtRTEI = {
    132,     /* lineNo */
    29,      /* colNo */
    "xgeev", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" /* pName */
};

static emlrtRTEInfo fh_emlrtRTEI = {
    134,     /* lineNo */
    35,      /* colNo */
    "xgeev", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" /* pName */
};

static emlrtRTEInfo gh_emlrtRTEI = {
    33,                     /* lineNo */
    5,                      /* colNo */
    "eigHermitianStandard", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigHerm"
    "itianStandard.m" /* pName */
};

static emlrtRTEInfo hh_emlrtRTEI = {
    168,     /* lineNo */
    16,      /* colNo */
    "xgeev", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" /* pName */
};

static emlrtRTEInfo ih_emlrtRTEI = {
    27,            /* lineNo */
    13,            /* colNo */
    "eigStandard", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigStan"
    "dard.m" /* pName */
};

static emlrtRTEInfo jh_emlrtRTEI = {
    1,     /* lineNo */
    20,    /* colNo */
    "eig", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\eig.m" /* pName
                                                                       */
};

static emlrtRTEInfo kh_emlrtRTEI = {
    99,      /* lineNo */
    1,       /* colNo */
    "xgeev", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" /* pName */
};

static emlrtRTEInfo lh_emlrtRTEI = {
    131,     /* lineNo */
    5,       /* colNo */
    "xgeev", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" /* pName */
};

static emlrtRTEInfo mh_emlrtRTEI = {
    132,     /* lineNo */
    5,       /* colNo */
    "xgeev", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" /* pName */
};

static emlrtRTEInfo nh_emlrtRTEI = {
    134,     /* lineNo */
    10,      /* colNo */
    "xgeev", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgeev.m" /* pName */
};

/* Function Definitions */
void eig(const emlrtStack *sp, const emxArray_real_T *A, emxArray_creal_T *V,
         emxArray_creal_T *D)
{
  static const char_T b_fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                     '_', 'd', 'g', 'e', 'e', 'v', 'x'};
  static const char_T fname[13] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 's', 'y', 'e', 'v'};
  ptrdiff_t ihi_t;
  ptrdiff_t ilo_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_creal_T *W;
  emxArray_real_T *b_A;
  emxArray_real_T *scale;
  emxArray_real_T *vright;
  emxArray_real_T *wimag;
  emxArray_real_T *wreal;
  creal_T *V_data;
  creal_T *W_data;
  const real_T *A_data;
  real_T abnrm;
  real_T rconde;
  real_T rcondv;
  real_T vleft;
  real_T *b_A_data;
  real_T *scale_data;
  real_T *vright_data;
  real_T *wimag_data;
  real_T *wreal_data;
  int32_T i;
  int32_T j;
  int32_T n_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  A_data = A->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  n_tmp = A->size[1];
  if (A->size[1] != A->size[0]) {
    emlrtErrorWithMessageIdR2018a(sp, &s_emlrtRTEI,
                                  "MATLAB:eig:inputMustBeSquareStandard",
                                  "MATLAB:eig:inputMustBeSquareStandard", 0);
  }
  i = V->size[0] * V->size[1];
  V->size[1] = A->size[1];
  V->size[0] = A->size[1];
  emxEnsureCapacity_creal_T(sp, V, i, &sg_emlrtRTEI);
  i = D->size[0] * D->size[1];
  D->size[1] = A->size[1];
  D->size[0] = A->size[1];
  emxEnsureCapacity_creal_T(sp, D, i, &tg_emlrtRTEI);
  if ((A->size[1] != 0) && (A->size[0] != 0)) {
    st.site = &de_emlrtRSI;
    if (anyNonFinite(&st, A)) {
      i = V->size[0] * V->size[1];
      V->size[1] = A->size[1];
      V->size[0] = A->size[1];
      emxEnsureCapacity_creal_T(sp, V, i, &ug_emlrtRTEI);
      V_data = V->data;
      j = A->size[1] * A->size[1];
      for (i = 0; i < j; i++) {
        V_data[i].re = rtNaN;
        V_data[i].im = 0.0;
      }
      i = D->size[0] * D->size[1];
      D->size[1] = A->size[1];
      D->size[0] = A->size[1];
      emxEnsureCapacity_creal_T(sp, D, i, &vg_emlrtRTEI);
      V_data = D->data;
      for (i = 0; i < j; i++) {
        V_data[i].re = 0.0;
        V_data[i].im = 0.0;
      }
      st.site = &ee_emlrtRSI;
      if (A->size[1] > 2147483646) {
        b_st.site = &fb_emlrtRSI;
        check_forloop_overflow_error(&b_st);
      }
      for (j = 0; j < n_tmp; j++) {
        V_data[j + D->size[1] * j].re = rtNaN;
        V_data[j + D->size[1] * j].im = 0.0;
      }
    } else {
      int32_T exitg1;
      boolean_T exitg2;
      boolean_T p;
      p = (A->size[1] == A->size[0]);
      if (p) {
        j = 0;
        exitg2 = false;
        while ((!exitg2) && (j <= A->size[0] - 1)) {
          i = 0;
          do {
            exitg1 = 0;
            if (i <= j) {
              if (!(A_data[i + A->size[1] * j] == A_data[j + A->size[1] * i])) {
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
      emxInit_real_T(sp, &b_A, 2, &xg_emlrtRTEI);
      emxInit_real_T(sp, &scale, 1, &kh_emlrtRTEI);
      if (p) {
        ptrdiff_t info_t;
        st.site = &fe_emlrtRSI;
        b_st.site = &le_emlrtRSI;
        i = b_A->size[0] * b_A->size[1];
        b_A->size[1] = A->size[1];
        b_A->size[0] = A->size[0];
        emxEnsureCapacity_real_T(&b_st, b_A, i, &wg_emlrtRTEI);
        b_A_data = b_A->data;
        j = A->size[1] * A->size[0];
        for (i = 0; i < j; i++) {
          b_A_data[i] = A_data[i];
        }
        c_st.site = &oe_emlrtRSI;
        ilo_t = (ptrdiff_t)b_A->size[1];
        i = scale->size[0];
        scale->size[0] = A->size[1];
        emxEnsureCapacity_real_T(&c_st, scale, i, &yg_emlrtRTEI);
        scale_data = scale->data;
        info_t = LAPACKE_dsyev(102, 'V', 'L', ilo_t, &b_A_data[0], ilo_t,
                               &scale_data[0]);
        d_st.site = &pe_emlrtRSI;
        if ((int32_T)info_t < 0) {
          if ((int32_T)info_t == -1010) {
            emlrtErrorWithMessageIdR2018a(&d_st, &r_emlrtRTEI, "MATLAB:nomem",
                                          "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &d_st, &q_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
                "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 13, &fname[0], 12,
                (int32_T)info_t);
          }
        }
        i = D->size[0] * D->size[1];
        D->size[1] = A->size[1];
        D->size[0] = A->size[1];
        emxEnsureCapacity_creal_T(&st, D, i, &dh_emlrtRTEI);
        V_data = D->data;
        j = A->size[1] * A->size[1];
        for (i = 0; i < j; i++) {
          V_data[i].re = 0.0;
          V_data[i].im = 0.0;
        }
        b_st.site = &me_emlrtRSI;
        if (A->size[1] > 2147483646) {
          c_st.site = &fb_emlrtRSI;
          check_forloop_overflow_error(&c_st);
        }
        for (i = 0; i < n_tmp; i++) {
          V_data[i + D->size[1] * i].re = scale_data[i];
          V_data[i + D->size[1] * i].im = 0.0;
        }
        i = V->size[0] * V->size[1];
        V->size[1] = b_A->size[1];
        V->size[0] = b_A->size[0];
        emxEnsureCapacity_creal_T(&st, V, i, &gh_emlrtRTEI);
        V_data = V->data;
        j = b_A->size[1] * b_A->size[0];
        for (i = 0; i < j; i++) {
          V_data[i].re = b_A_data[i];
          V_data[i].im = 0.0;
        }
        if ((int32_T)info_t != 0) {
          b_st.site = &ne_emlrtRSI;
          warning(&b_st);
        }
      } else {
        p = (A->size[1] == A->size[0]);
        if (p) {
          j = 0;
          exitg2 = false;
          while ((!exitg2) && (j <= A->size[0] - 1)) {
            i = 0;
            do {
              exitg1 = 0;
              if (i <= j) {
                if (!(A_data[i + A->size[1] * j] ==
                      -A_data[j + A->size[1] * i])) {
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
          st.site = &ge_emlrtRSI;
          eigSkewHermitianStandard(&st, A, V, D);
        } else {
          ptrdiff_t info_t;
          int32_T b_i;
          st.site = &he_emlrtRSI;
          b_st.site = &jf_emlrtRSI;
          c_st.site = &mf_emlrtRSI;
          i = b_A->size[0] * b_A->size[1];
          b_A->size[1] = A->size[1];
          b_i = A->size[0];
          b_A->size[0] = A->size[0];
          emxEnsureCapacity_real_T(&c_st, b_A, i, &xg_emlrtRTEI);
          b_A_data = b_A->data;
          j = A->size[1] * A->size[0];
          for (i = 0; i < j; i++) {
            b_A_data[i] = A_data[i];
          }
          i = scale->size[0];
          scale->size[0] = A->size[0];
          emxEnsureCapacity_real_T(&c_st, scale, i, &ah_emlrtRTEI);
          scale_data = scale->data;
          emxInit_creal_T(&c_st, &W, 1, &jh_emlrtRTEI);
          i = W->size[0];
          W->size[0] = A->size[0];
          emxEnsureCapacity_creal_T(&c_st, W, i, &bh_emlrtRTEI);
          W_data = W->data;
          emxInit_real_T(&c_st, &wreal, 1, &lh_emlrtRTEI);
          i = wreal->size[0];
          wreal->size[0] = A->size[0];
          emxEnsureCapacity_real_T(&c_st, wreal, i, &ch_emlrtRTEI);
          wreal_data = wreal->data;
          emxInit_real_T(&c_st, &wimag, 1, &mh_emlrtRTEI);
          i = wimag->size[0];
          wimag->size[0] = A->size[0];
          emxEnsureCapacity_real_T(&c_st, wimag, i, &eh_emlrtRTEI);
          wimag_data = wimag->data;
          emxInit_real_T(&c_st, &vright, 2, &nh_emlrtRTEI);
          i = vright->size[0] * vright->size[1];
          vright->size[1] = A->size[0];
          vright->size[0] = A->size[0];
          emxEnsureCapacity_real_T(&c_st, vright, i, &fh_emlrtRTEI);
          vright_data = vright->data;
          info_t = LAPACKE_dgeevx(
              102, 'B', 'N', 'V', 'N', (ptrdiff_t)A->size[0], &b_A_data[0],
              (ptrdiff_t)A->size[1], &wreal_data[0], &wimag_data[0], &vleft,
              (ptrdiff_t)1, &vright_data[0], (ptrdiff_t)A->size[0], &ilo_t,
              &ihi_t, &scale_data[0], &abnrm, &rconde, &rcondv);
          d_st.site = &qf_emlrtRSI;
          if ((int32_T)info_t < 0) {
            if ((int32_T)info_t == -1010) {
              emlrtErrorWithMessageIdR2018a(&d_st, &r_emlrtRTEI, "MATLAB:nomem",
                                            "MATLAB:nomem", 0);
            } else {
              emlrtErrorWithMessageIdR2018a(
                  &d_st, &q_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
                  "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &b_fname[0],
                  12, (int32_T)info_t);
            }
          }
          d_st.site = &pf_emlrtRSI;
          if (A->size[0] > 2147483646) {
            e_st.site = &fb_emlrtRSI;
            check_forloop_overflow_error(&e_st);
          }
          for (i = 0; i < b_i; i++) {
            W_data[i].re = wreal_data[i];
            W_data[i].im = wimag_data[i];
          }
          emxFree_real_T(&c_st, &wreal);
          i = V->size[0] * V->size[1];
          V->size[1] = vright->size[1];
          V->size[0] = vright->size[0];
          emxEnsureCapacity_creal_T(&c_st, V, i, &hh_emlrtRTEI);
          V_data = V->data;
          j = vright->size[1] * vright->size[0];
          for (i = 0; i < j; i++) {
            V_data[i].re = vright_data[i];
            V_data[i].im = 0.0;
          }
          emxFree_real_T(&c_st, &vright);
          d_st.site = &of_emlrtRSI;
          for (i = 2; i <= b_i; i++) {
            if ((wimag_data[i - 2] > 0.0) && (wimag_data[i - 1] < 0.0)) {
              d_st.site = &nf_emlrtRSI;
              if (b_i > 2147483646) {
                e_st.site = &fb_emlrtRSI;
                check_forloop_overflow_error(&e_st);
              }
              for (j = 0; j < b_i; j++) {
                vleft = V_data[j + V->size[1] * (i - 2)].re;
                abnrm = V_data[j + V->size[1] * (i - 1)].re;
                V_data[j + V->size[1] * (i - 2)].im = abnrm;
                V_data[j + V->size[1] * (i - 1)].re = vleft;
                V_data[j + V->size[1] * (i - 1)].im = -abnrm;
              }
            }
          }
          emxFree_real_T(&c_st, &wimag);
          i = D->size[0] * D->size[1];
          D->size[1] = A->size[1];
          D->size[0] = A->size[1];
          emxEnsureCapacity_creal_T(&st, D, i, &ih_emlrtRTEI);
          V_data = D->data;
          j = A->size[1] * A->size[1];
          for (i = 0; i < j; i++) {
            V_data[i].re = 0.0;
            V_data[i].im = 0.0;
          }
          b_st.site = &kf_emlrtRSI;
          if (A->size[1] > 2147483646) {
            c_st.site = &fb_emlrtRSI;
            check_forloop_overflow_error(&c_st);
          }
          for (j = 0; j < n_tmp; j++) {
            V_data[j + D->size[1] * j] = W_data[j];
          }
          emxFree_creal_T(&st, &W);
          if ((int32_T)info_t != 0) {
            b_st.site = &lf_emlrtRSI;
            warning(&b_st);
          }
        }
      }
      emxFree_real_T(sp, &scale);
      emxFree_real_T(sp, &b_A);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (eig.c) */
