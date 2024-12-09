/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * sqrt.c
 *
 * Code generation for function 'sqrt'
 *
 */

/* Include files */
#include "sqrt.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "eml_int_forloop_overflow_check.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <emmintrin.h>

/* Variable Definitions */
static emlrtRSInfo ld_emlrtRSI = {
    12,     /* lineNo */
    "sqrt", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" /* pathName
                                                                       */
};

static emlrtRSInfo md_emlrtRSI = {
    16,     /* lineNo */
    "sqrt", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" /* pathName
                                                                       */
};

static emlrtRSInfo nd_emlrtRSI = {
    37,              /* lineNo */
    "isDomainError", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\isDomainError.m" /* pathName */
};

static emlrtRSInfo od_emlrtRSI =
    {
        38,          /* lineNo */
        "vAllOrAny", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\vAllOrAny.m" /* pathName */
};

static emlrtRSInfo pd_emlrtRSI =
    {
        68,         /* lineNo */
        "genloops", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+"
        "internal\\vAllOrAny.m" /* pathName */
};

static emlrtRSInfo qd_emlrtRSI = {
    31,                           /* lineNo */
    "applyScalarFunctionInPlace", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunctionInPlace.m" /* pathName */
};

static emlrtRSInfo rd_emlrtRSI = {
    60,         /* lineNo */
    "genloops", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\applyScalarFunctionInPlace.m" /* pathName */
};

static emlrtRTEInfo d_emlrtRTEI = {
    13,     /* lineNo */
    9,      /* colNo */
    "sqrt", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" /* pName
                                                                       */
};

/* Function Definitions */
void b_sqrt(const emlrtStack *sp, emxArray_real_T *x)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack st;
  real_T *x_data;
  int32_T b_tmp;
  int32_T k;
  int32_T scalarLB;
  int32_T vectorUB;
  boolean_T p;
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
  x_data = x->data;
  st.site = &ld_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  c_st.site = &od_emlrtRSI;
  p = false;
  b_tmp = x->size[0];
  d_st.site = &pd_emlrtRSI;
  if (x->size[0] > 2147483646) {
    e_st.site = &fb_emlrtRSI;
    check_forloop_overflow_error(&e_st);
  }
  for (k = 0; k < b_tmp; k++) {
    if (p || (x_data[k] < 0.0)) {
      p = true;
    }
  }
  if (p) {
    emlrtErrorWithMessageIdR2018a(
        sp, &d_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  st.site = &md_emlrtRSI;
  b_st.site = &qd_emlrtRSI;
  c_st.site = &rd_emlrtRSI;
  if (x->size[0] > 2147483646) {
    d_st.site = &fb_emlrtRSI;
    check_forloop_overflow_error(&d_st);
  }
  scalarLB = (b_tmp / 2) << 1;
  vectorUB = scalarLB - 2;
  for (k = 0; k <= vectorUB; k += 2) {
    __m128d r;
    r = _mm_loadu_pd(&x_data[k]);
    _mm_storeu_pd(&x_data[k], _mm_sqrt_pd(r));
  }
  for (k = scalarLB; k < b_tmp; k++) {
    x_data[k] = muDoubleScalarSqrt(x_data[k]);
  }
}

/* End of code generation (sqrt.c) */
