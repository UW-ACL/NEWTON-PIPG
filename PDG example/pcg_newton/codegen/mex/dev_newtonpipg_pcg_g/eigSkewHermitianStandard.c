/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * eigSkewHermitianStandard.c
 *
 * Code generation for function 'eigSkewHermitianStandard'
 *
 */

/* Include files */
#include "eigSkewHermitianStandard.h"
#include "anyNonFinite.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_emxutil.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "warning.h"
#include "lapacke.h"
#include "mwmathutil.h"
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo qe_emlrtRSI = {
    12,                         /* lineNo */
    "eigSkewHermitianStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigSkew"
    "HermitianStandard.m" /* pathName */
};

static emlrtRSInfo re_emlrtRSI = {
    24,                             /* lineNo */
    "eigRealSkewSymmetricStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigReal"
    "SkewSymmetricStandard.m" /* pathName */
};

static emlrtRSInfo se_emlrtRSI = {
    22,                             /* lineNo */
    "eigRealSkewSymmetricStandard", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigReal"
    "SkewSymmetricStandard.m" /* pathName */
};

static emlrtRSInfo te_emlrtRSI = {
    35,      /* lineNo */
    "schur", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pathName
                                                                         */
};

static emlrtRSInfo ue_emlrtRSI = {
    43,      /* lineNo */
    "schur", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pathName
                                                                         */
};

static emlrtRSInfo ve_emlrtRSI = {
    66,      /* lineNo */
    "schur", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pathName
                                                                         */
};

static emlrtRSInfo we_emlrtRSI = {
    69,      /* lineNo */
    "schur", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pathName
                                                                         */
};

static emlrtRSInfo xe_emlrtRSI = {
    70,      /* lineNo */
    "schur", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pathName
                                                                         */
};

static emlrtRSInfo ye_emlrtRSI = {
    83,      /* lineNo */
    "schur", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pathName
                                                                         */
};

static emlrtRSInfo af_emlrtRSI = {
    48,     /* lineNo */
    "triu", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\triu.m" /* pathName
                                                                       */
};

static emlrtRSInfo bf_emlrtRSI = {
    47,     /* lineNo */
    "triu", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\triu.m" /* pathName
                                                                       */
};

static emlrtRSInfo cf_emlrtRSI = {
    15,       /* lineNo */
    "xgehrd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgehrd.m" /* pathName */
};

static emlrtRSInfo df_emlrtRSI = {
    85,             /* lineNo */
    "ceval_xgehrd", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgehrd.m" /* pathName */
};

static emlrtRSInfo ef_emlrtRSI = {
    72,                /* lineNo */
    "ceval_xungorghr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xungorghr.m" /* pathName */
};

static emlrtRSInfo ff_emlrtRSI = {
    11,          /* lineNo */
    "xungorghr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xungorghr.m" /* pathName */
};

static emlrtRSInfo gf_emlrtRSI = {
    17,       /* lineNo */
    "xhseqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xhseqr.m" /* pathName */
};

static emlrtRSInfo hf_emlrtRSI = {
    128,            /* lineNo */
    "ceval_xhseqr", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xhseqr.m" /* pathName */
};

static emlrtRSInfo if_emlrtRSI = {
    151,                   /* lineNo */
    "extractEigenVectors", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigReal"
    "SkewSymmetricStandard.m" /* pathName */
};

static emlrtRTEInfo t_emlrtRTEI = {
    18,      /* lineNo */
    15,      /* colNo */
    "schur", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pName
                                                                         */
};

static emlrtRTEInfo oh_emlrtRTEI = {
    42,      /* lineNo */
    9,       /* colNo */
    "schur", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pName
                                                                         */
};

static emlrtRTEInfo ph_emlrtRTEI = {
    1,        /* lineNo */
    27,       /* colNo */
    "xgehrd", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgehrd.m" /* pName */
};

static emlrtRTEInfo qh_emlrtRTEI = {
    76,       /* lineNo */
    22,       /* colNo */
    "xgehrd", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgehrd.m" /* pName */
};

static emlrtRTEInfo rh_emlrtRTEI = {
    46,      /* lineNo */
    9,       /* colNo */
    "schur", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pName
                                                                         */
};

static emlrtRTEInfo sh_emlrtRTEI = {
    69,      /* lineNo */
    13,      /* colNo */
    "schur", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\schur.m" /* pName
                                                                         */
};

static emlrtRTEInfo th_emlrtRTEI = {
    23,                             /* lineNo */
    9,                              /* colNo */
    "eigRealSkewSymmetricStandard", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigReal"
    "SkewSymmetricStandard.m" /* pName */
};

static emlrtRTEInfo uh_emlrtRTEI = {
    86,       /* lineNo */
    9,        /* colNo */
    "xgehrd", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgehrd.m" /* pName */
};

static emlrtRTEInfo vh_emlrtRTEI = {
    87,       /* lineNo */
    9,        /* colNo */
    "xgehrd", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xgehrd.m" /* pName */
};

static emlrtRTEInfo wh_emlrtRTEI = {
    24,                             /* lineNo */
    9,                              /* colNo */
    "eigRealSkewSymmetricStandard", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigReal"
    "SkewSymmetricStandard.m" /* pName */
};

static emlrtRTEInfo xh_emlrtRTEI = {
    111,      /* lineNo */
    29,       /* colNo */
    "xhseqr", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xhseqr.m" /* pName */
};

static emlrtRTEInfo yh_emlrtRTEI = {
    112,      /* lineNo */
    29,       /* colNo */
    "xhseqr", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xhseqr.m" /* pName */
};

static emlrtRTEInfo ai_emlrtRTEI = {
    129,      /* lineNo */
    9,        /* colNo */
    "xhseqr", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xhseqr.m" /* pName */
};

static emlrtRTEInfo bi_emlrtRTEI = {
    130,      /* lineNo */
    9,        /* colNo */
    "xhseqr", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xhseqr.m" /* pName */
};

static emlrtRTEInfo ci_emlrtRTEI = {
    1,                          /* lineNo */
    20,                         /* colNo */
    "eigSkewHermitianStandard", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\private\\eigSkew"
    "HermitianStandard.m" /* pName */
};

static emlrtRTEInfo di_emlrtRTEI = {
    111,      /* lineNo */
    9,        /* colNo */
    "xhseqr", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xhseqr.m" /* pName */
};

static emlrtRTEInfo ei_emlrtRTEI = {
    112,      /* lineNo */
    9,        /* colNo */
    "xhseqr", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\xhseqr.m" /* pName */
};

/* Function Definitions */
void eigSkewHermitianStandard(const emlrtStack *sp, const emxArray_real_T *A,
                              emxArray_creal_T *V, emxArray_creal_T *D)
{
  static const char_T b_fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                     '_', 'd', 'o', 'r', 'g', 'h', 'r'};
  static const char_T c_fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                     '_', 'd', 'h', 's', 'e', 'q', 'r'};
  static const char_T fname[14] = {'L', 'A', 'P', 'A', 'C', 'K', 'E',
                                   '_', 'd', 'g', 'e', 'h', 'r', 'd'};
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  emxArray_real_T *U;
  emxArray_real_T *b_A;
  emxArray_real_T *tau;
  emxArray_real_T *wi;
  emxArray_real_T *wr;
  creal_T *D_data;
  const real_T *A_data;
  real_T lambda;
  real_T *U_data;
  real_T *b_A_data;
  real_T *wi_data;
  real_T *wr_data;
  int32_T exitg1;
  int32_T i;
  int32_T istart;
  int32_T j;
  int32_T jend;
  int32_T m;
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
  st.site = &qe_emlrtRSI;
  b_st.site = &se_emlrtRSI;
  if (A->size[1] != A->size[0]) {
    emlrtErrorWithMessageIdR2018a(&b_st, &t_emlrtRTEI, "Coder:MATLAB:square",
                                  "Coder:MATLAB:square", 0);
  }
  emxInit_real_T(&b_st, &U, 2, &ci_emlrtRTEI);
  emxInit_real_T(&b_st, &b_A, 2, &ci_emlrtRTEI);
  c_st.site = &te_emlrtRSI;
  if (anyNonFinite(&c_st, A)) {
    int32_T loop_ub_tmp;
    uint32_T unnamed_idx_0_tmp;
    unnamed_idx_0_tmp = (uint32_T)A->size[1];
    j = U->size[0] * U->size[1];
    U->size[1] = A->size[1];
    U->size[0] = A->size[0];
    emxEnsureCapacity_real_T(&b_st, U, j, &oh_emlrtRTEI);
    U_data = U->data;
    loop_ub_tmp = A->size[1] * A->size[0];
    for (j = 0; j < loop_ub_tmp; j++) {
      U_data[j] = rtNaN;
    }
    c_st.site = &ue_emlrtRSI;
    m = A->size[1];
    if ((A->size[1] != 0) && (A->size[0] != 0) && (A->size[1] > 1)) {
      istart = 2;
      if (A->size[1] - 2 < A->size[0] - 1) {
        jend = A->size[1] - 1;
      } else {
        jend = A->size[0];
      }
      d_st.site = &bf_emlrtRSI;
      for (j = 0; j < jend; j++) {
        d_st.site = &af_emlrtRSI;
        if ((istart <= (int32_T)unnamed_idx_0_tmp) &&
            ((int32_T)unnamed_idx_0_tmp > 2147483646)) {
          e_st.site = &fb_emlrtRSI;
          check_forloop_overflow_error(&e_st);
        }
        for (i = istart; i <= m; i++) {
          U_data[(i + U->size[1] * j) - 1] = 0.0;
        }
        istart++;
      }
    }
    j = b_A->size[0] * b_A->size[1];
    b_A->size[1] = A->size[1];
    b_A->size[0] = A->size[0];
    emxEnsureCapacity_real_T(&b_st, b_A, j, &rh_emlrtRTEI);
    b_A_data = b_A->data;
    for (j = 0; j < loop_ub_tmp; j++) {
      b_A_data[j] = rtNaN;
    }
  } else {
    ptrdiff_t info_t;
    boolean_T b_p;
    boolean_T p;
    c_st.site = &ve_emlrtRSI;
    j = A->size[1];
    jend = b_A->size[0] * b_A->size[1];
    b_A->size[1] = A->size[1];
    b_A->size[0] = A->size[0];
    emxEnsureCapacity_real_T(&c_st, b_A, jend, &ph_emlrtRTEI);
    b_A_data = b_A->data;
    istart = A->size[1] * A->size[0];
    for (jend = 0; jend < istart; jend++) {
      b_A_data[jend] = A_data[jend];
    }
    d_st.site = &cf_emlrtRSI;
    emxInit_real_T(&d_st, &tau, 1, &ci_emlrtRTEI);
    jend = tau->size[0];
    if (b_A->size[1] < 1) {
      tau->size[0] = 0;
    } else {
      tau->size[0] = b_A->size[1] - 1;
    }
    emxEnsureCapacity_real_T(&d_st, tau, jend, &qh_emlrtRTEI);
    wr_data = tau->data;
    if (b_A->size[1] > 1) {
      info_t = LAPACKE_dgehrd(
          102, (ptrdiff_t)b_A->size[1], (ptrdiff_t)1, (ptrdiff_t)b_A->size[1],
          &b_A_data[0], (ptrdiff_t)muIntScalarMax_sint32(1, j), &wr_data[0]);
      e_st.site = &df_emlrtRSI;
      if ((int32_T)info_t != 0) {
        p = true;
        if ((int32_T)info_t != -5) {
          if ((int32_T)info_t == -1010) {
            emlrtErrorWithMessageIdR2018a(&e_st, &r_emlrtRTEI, "MATLAB:nomem",
                                          "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &e_st, &q_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
                "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &fname[0], 12,
                (int32_T)info_t);
          }
        }
      } else {
        p = false;
      }
      if (p) {
        m = b_A->size[1];
        istart = b_A->size[0];
        j = b_A->size[0] * b_A->size[1];
        b_A->size[1] = m;
        b_A->size[0] = istart;
        emxEnsureCapacity_real_T(&d_st, b_A, j, &uh_emlrtRTEI);
        b_A_data = b_A->data;
        istart *= m;
        for (j = 0; j < istart; j++) {
          b_A_data[j] = rtNaN;
        }
        m = tau->size[0];
        j = tau->size[0];
        tau->size[0] = m;
        emxEnsureCapacity_real_T(&d_st, tau, j, &vh_emlrtRTEI);
        wr_data = tau->data;
        for (j = 0; j < m; j++) {
          wr_data[j] = rtNaN;
        }
      }
    }
    c_st.site = &we_emlrtRSI;
    j = b_A->size[1];
    jend = U->size[0] * U->size[1];
    U->size[1] = b_A->size[1];
    U->size[0] = b_A->size[0];
    emxEnsureCapacity_real_T(&c_st, U, jend, &sh_emlrtRTEI);
    U_data = U->data;
    istart = b_A->size[1] * b_A->size[0];
    for (jend = 0; jend < istart; jend++) {
      U_data[jend] = b_A_data[jend];
    }
    d_st.site = &ff_emlrtRSI;
    if (A->size[1] != 0) {
      if (A->size[1] == 1) {
        U_data[0] = 1.0;
      } else {
        info_t = LAPACKE_dorghr(102, (ptrdiff_t)A->size[1], (ptrdiff_t)1,
                                (ptrdiff_t)A->size[1], &U_data[0],
                                (ptrdiff_t)A->size[1], &wr_data[0]);
        e_st.site = &ef_emlrtRSI;
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
              emlrtErrorWithMessageIdR2018a(&e_st, &r_emlrtRTEI, "MATLAB:nomem",
                                            "MATLAB:nomem", 0);
            } else {
              emlrtErrorWithMessageIdR2018a(
                  &e_st, &q_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
                  "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &b_fname[0],
                  12, (int32_T)info_t);
            }
          }
        } else {
          p = false;
        }
        if (p) {
          m = U->size[1];
          istart = U->size[0];
          jend = U->size[0] * U->size[1];
          U->size[1] = m;
          U->size[0] = istart;
          emxEnsureCapacity_real_T(&d_st, U, jend, &sh_emlrtRTEI);
          U_data = U->data;
          istart *= m;
          for (jend = 0; jend < istart; jend++) {
            U_data[jend] = rtNaN;
          }
        }
      }
    }
    emxFree_real_T(&d_st, &tau);
    c_st.site = &xe_emlrtRSI;
    d_st.site = &gf_emlrtRSI;
    info_t = (ptrdiff_t)b_A->size[1];
    if ((b_A->size[1] != 0) && (b_A->size[0] != 0)) {
      emxInit_real_T(&d_st, &wr, 2, &di_emlrtRTEI);
      jend = wr->size[0] * wr->size[1];
      wr->size[1] = 1;
      wr->size[0] = b_A->size[1];
      emxEnsureCapacity_real_T(&d_st, wr, jend, &xh_emlrtRTEI);
      wr_data = wr->data;
      emxInit_real_T(&d_st, &wi, 2, &ei_emlrtRTEI);
      jend = wi->size[0] * wi->size[1];
      wi->size[1] = 1;
      wi->size[0] = b_A->size[1];
      emxEnsureCapacity_real_T(&d_st, wi, jend, &yh_emlrtRTEI);
      wi_data = wi->data;
      info_t = LAPACKE_dhseqr(102, 'S', 'V', info_t, (ptrdiff_t)1,
                              (ptrdiff_t)b_A->size[1], &b_A_data[0], info_t,
                              &wr_data[0], &wi_data[0], &U_data[0],
                              (ptrdiff_t)muIntScalarMax_sint32(1, j));
      emxFree_real_T(&d_st, &wi);
      emxFree_real_T(&d_st, &wr);
      jend = (int32_T)info_t;
      e_st.site = &hf_emlrtRSI;
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
            emlrtErrorWithMessageIdR2018a(&e_st, &r_emlrtRTEI, "MATLAB:nomem",
                                          "MATLAB:nomem", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &e_st, &q_emlrtRTEI, "Coder:toolbox:LAPACKCallErrorInfo",
                "Coder:toolbox:LAPACKCallErrorInfo", 5, 4, 14, &c_fname[0], 12,
                (int32_T)info_t);
          }
        }
      } else {
        p = false;
      }
      if (p) {
        m = b_A->size[1];
        istart = b_A->size[0];
        j = b_A->size[0] * b_A->size[1];
        b_A->size[1] = m;
        b_A->size[0] = istart;
        emxEnsureCapacity_real_T(&d_st, b_A, j, &ai_emlrtRTEI);
        b_A_data = b_A->data;
        istart *= m;
        for (j = 0; j < istart; j++) {
          b_A_data[j] = rtNaN;
        }
        m = U->size[1];
        istart = U->size[0];
        j = U->size[0] * U->size[1];
        U->size[1] = m;
        U->size[0] = istart;
        emxEnsureCapacity_real_T(&d_st, U, j, &bi_emlrtRTEI);
        U_data = U->data;
        istart *= m;
        for (j = 0; j < istart; j++) {
          U_data[j] = rtNaN;
        }
      }
    } else {
      jend = 0;
    }
    if (jend != 0) {
      c_st.site = &ye_emlrtRSI;
      b_warning(&c_st);
    }
  }
  m = b_A->size[1];
  j = D->size[0] * D->size[1];
  D->size[1] = b_A->size[1];
  D->size[0] = b_A->size[1];
  emxEnsureCapacity_creal_T(&st, D, j, &th_emlrtRTEI);
  D_data = D->data;
  istart = b_A->size[1] * b_A->size[1];
  for (j = 0; j < istart; j++) {
    D_data[j].re = 0.0;
    D_data[j].im = 0.0;
  }
  i = 1;
  do {
    exitg1 = 0;
    if (i <= m) {
      if (i != m) {
        lambda = b_A_data[i + b_A->size[1] * (i - 1)];
        if (lambda != 0.0) {
          lambda = muDoubleScalarAbs(lambda);
          D_data[(i + D->size[1] * (i - 1)) - 1].re = 0.0;
          D_data[(i + D->size[1] * (i - 1)) - 1].im = lambda;
          D_data[i + D->size[1] * i].re = 0.0;
          D_data[i + D->size[1] * i].im = -lambda;
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
  b_st.site = &re_emlrtRSI;
  j = V->size[0] * V->size[1];
  V->size[1] = U->size[1];
  V->size[0] = U->size[0];
  emxEnsureCapacity_creal_T(&b_st, V, j, &wh_emlrtRTEI);
  D_data = V->data;
  istart = U->size[1] * U->size[0];
  for (j = 0; j < istart; j++) {
    D_data[j].re = U_data[j];
    D_data[j].im = 0.0;
  }
  emxFree_real_T(&b_st, &U);
  j = 1;
  m = b_A->size[1];
  do {
    exitg1 = 0;
    if (j <= m) {
      if (j != m) {
        lambda = b_A_data[j + b_A->size[1] * (j - 1)];
        if (lambda != 0.0) {
          if (lambda < 0.0) {
            istart = 1;
          } else {
            istart = -1;
          }
          c_st.site = &if_emlrtRSI;
          if (m > 2147483646) {
            d_st.site = &fb_emlrtRSI;
            check_forloop_overflow_error(&d_st);
          }
          for (i = 0; i < m; i++) {
            real_T ai;
            lambda = D_data[i + V->size[1] * (j - 1)].re;
            ai = (real_T)istart * D_data[i + V->size[1] * j].re;
            if (ai == 0.0) {
              D_data[i + V->size[1] * (j - 1)].re = lambda / 1.4142135623730951;
              D_data[i + V->size[1] * (j - 1)].im = 0.0;
            } else if (lambda == 0.0) {
              D_data[i + V->size[1] * (j - 1)].re = 0.0;
              D_data[i + V->size[1] * (j - 1)].im = ai / 1.4142135623730951;
            } else {
              D_data[i + V->size[1] * (j - 1)].re = lambda / 1.4142135623730951;
              D_data[i + V->size[1] * (j - 1)].im = ai / 1.4142135623730951;
            }
            D_data[i + V->size[1] * j].re = D_data[i + V->size[1] * (j - 1)].re;
            D_data[i + V->size[1] * j].im =
                -D_data[i + V->size[1] * (j - 1)].im;
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
  emxFree_real_T(&b_st, &b_A);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (eigSkewHermitianStandard.c) */
