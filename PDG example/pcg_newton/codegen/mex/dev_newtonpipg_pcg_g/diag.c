/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * diag.c
 *
 * Code generation for function 'diag'
 *
 */

/* Include files */
#include "diag.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_emxutil.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo sd_emlrtRSI = {
    90,     /* lineNo */
    "diag", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m" /* pathName
                                                                       */
};

static emlrtRTEInfo u_emlrtRTEI = {
    102,    /* lineNo */
    19,     /* colNo */
    "diag", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m" /* pName
                                                                       */
};

static emlrtRTEInfo ag_emlrtRTEI = {
    82,     /* lineNo */
    5,      /* colNo */
    "diag", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m" /* pName
                                                                       */
};

static emlrtRTEInfo fi_emlrtRTEI = {
    100,    /* lineNo */
    5,      /* colNo */
    "diag", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m" /* pName
                                                                       */
};

static emlrtRTEInfo gi_emlrtRTEI = {
    109,    /* lineNo */
    24,     /* colNo */
    "diag", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elmat\\diag.m" /* pName
                                                                       */
};

/* Function Definitions */
void b_diag(const emlrtStack *sp, const emxArray_creal_T *v,
            emxArray_creal_T *d)
{
  const creal_T *v_data;
  creal_T *d_data;
  int32_T m;
  v_data = v->data;
  if ((v->size[0] == 1) && (v->size[1] == 1)) {
    int32_T n;
    n = d->size[0];
    d->size[0] = 1;
    emxEnsureCapacity_creal_T(sp, d, n, &fi_emlrtRTEI);
    d_data = d->data;
    d_data[0] = v_data[0];
  } else {
    int32_T n;
    if ((v->size[0] == 1) || (v->size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &u_emlrtRTEI, "Coder:toolbox:diag_varsizedMatrixVector",
          "Coder:toolbox:diag_varsizedMatrixVector", 0);
    }
    m = v->size[0];
    n = v->size[1];
    if (v->size[1] > 0) {
      m = muIntScalarMin_sint32(m, n);
    } else {
      m = 0;
    }
    n = d->size[0];
    d->size[0] = m;
    emxEnsureCapacity_creal_T(sp, d, n, &gi_emlrtRTEI);
    d_data = d->data;
    n = m - 1;
    for (m = 0; m <= n; m++) {
      d_data[m] = v_data[m + v->size[1] * m];
    }
  }
}

void c_diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d)
{
  const real_T *v_data;
  real_T *d_data;
  int32_T m;
  v_data = v->data;
  if ((v->size[0] == 1) && (v->size[1] == 1)) {
    int32_T n;
    n = d->size[0];
    d->size[0] = 1;
    emxEnsureCapacity_real_T(sp, d, n, &fi_emlrtRTEI);
    d_data = d->data;
    d_data[0] = v_data[0];
  } else {
    int32_T n;
    if ((v->size[0] == 1) || (v->size[1] == 1)) {
      emlrtErrorWithMessageIdR2018a(
          sp, &u_emlrtRTEI, "Coder:toolbox:diag_varsizedMatrixVector",
          "Coder:toolbox:diag_varsizedMatrixVector", 0);
    }
    m = v->size[0];
    n = v->size[1];
    if (v->size[1] > 0) {
      m = muIntScalarMin_sint32(m, n);
    } else {
      m = 0;
    }
    n = d->size[0];
    d->size[0] = m;
    emxEnsureCapacity_real_T(sp, d, n, &gi_emlrtRTEI);
    d_data = d->data;
    n = m - 1;
    for (m = 0; m <= n; m++) {
      d_data[m] = v_data[m + v->size[1] * m];
    }
  }
}

void diag(const emlrtStack *sp, const emxArray_real_T *v, emxArray_real_T *d)
{
  emlrtStack b_st;
  emlrtStack st;
  const real_T *v_data;
  real_T *d_data;
  int32_T i;
  int32_T loop_ub;
  int32_T nv_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  v_data = v->data;
  nv_tmp = v->size[0];
  i = d->size[0] * d->size[1];
  d->size[1] = v->size[0];
  d->size[0] = v->size[0];
  emxEnsureCapacity_real_T(sp, d, i, &ag_emlrtRTEI);
  d_data = d->data;
  loop_ub = v->size[0] * v->size[0];
  for (i = 0; i < loop_ub; i++) {
    d_data[i] = 0.0;
  }
  st.site = &sd_emlrtRSI;
  if (v->size[0] > 2147483646) {
    b_st.site = &fb_emlrtRSI;
    check_forloop_overflow_error(&b_st);
  }
  for (loop_ub = 0; loop_ub < nv_tmp; loop_ub++) {
    d_data[loop_ub + d->size[1] * loop_ub] = v_data[loop_ub];
  }
}

/* End of code generation (diag.c) */
