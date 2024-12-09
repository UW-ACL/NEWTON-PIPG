/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * abs.c
 *
 * Code generation for function 'abs'
 *
 */

/* Include files */
#include "abs.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_emxutil.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"

/* Variable Definitions */
static emlrtRSInfo id_emlrtRSI =
    {
        19,    /* lineNo */
        "abs", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elfun\\abs.m" /* pathName
                                                                          */
};

static emlrtRSInfo jd_emlrtRSI = {
    85,                    /* lineNo */
    "applyScalarFunction", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunction.m" /* pathName */
};

static emlrtRSInfo kd_emlrtRSI = {
    98,         /* lineNo */
    "genloops", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunction.m" /* pathName */
};

static emlrtRTEInfo yf_emlrtRTEI = {
    30,                    /* lineNo */
    21,                    /* colNo */
    "applyScalarFunction", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunction.m" /* pName */
};

/* Function Definitions */
void b_abs(const emlrtStack *sp, const emxArray_real_T *x, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const real_T *x_data;
  real_T *y_data;
  int32_T b;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  x_data = x->data;
  st.site = &id_emlrtRSI;
  b = x->size[0];
  k = y->size[0];
  y->size[0] = x->size[0];
  emxEnsureCapacity_real_T(&st, y, k, &yf_emlrtRTEI);
  y_data = y->data;
  if (x->size[0] != 0) {
    b_st.site = &jd_emlrtRSI;
    c_st.site = &kd_emlrtRSI;
    if (x->size[0] > 2147483646) {
      d_st.site = &fb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (k = 0; k < b; k++) {
      y_data[k] = muDoubleScalarAbs(x_data[k]);
    }
  }
}

void c_abs(const emlrtStack *sp, const emxArray_creal_T *x, emxArray_real_T *y)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const creal_T *x_data;
  real_T *y_data;
  int32_T b;
  int32_T k;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  x_data = x->data;
  st.site = &id_emlrtRSI;
  b = x->size[0];
  k = y->size[0];
  y->size[0] = x->size[0];
  emxEnsureCapacity_real_T(&st, y, k, &yf_emlrtRTEI);
  y_data = y->data;
  if (x->size[0] != 0) {
    b_st.site = &jd_emlrtRSI;
    c_st.site = &kd_emlrtRSI;
    if (x->size[0] > 2147483646) {
      d_st.site = &fb_emlrtRSI;
      check_forloop_overflow_error(&d_st);
    }
    for (k = 0; k < b; k++) {
      y_data[k] = muDoubleScalarHypot(x_data[k].re, x_data[k].im);
    }
  }
}

/* End of code generation (abs.c) */
