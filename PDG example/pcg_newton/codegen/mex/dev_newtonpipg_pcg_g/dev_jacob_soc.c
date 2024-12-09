/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_jacob_soc.c
 *
 * Code generation for function 'dev_jacob_soc'
 *
 */

/* Include files */
#include "dev_jacob_soc.h"
#include "abs.h"
#include "assertCompatibleDims.h"
#include "dev_jacob_ball.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_emxutil.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "diag.h"
#include "eig.h"
#include "eml_mtimes_helper.h"
#include "eye.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "blas.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo rf_emlrtRSI = {
    4,               /* lineNo */
    "dev_jacob_soc", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pathName */
};

static emlrtRSInfo sf_emlrtRSI = {
    6,               /* lineNo */
    "dev_jacob_soc", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pathName */
};

static emlrtRSInfo tf_emlrtRSI = {
    14,              /* lineNo */
    "dev_jacob_soc", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pathName */
};

static emlrtRSInfo uf_emlrtRSI = {
    15,              /* lineNo */
    "dev_jacob_soc", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pathName */
};

static emlrtRSInfo vf_emlrtRSI = {
    16,              /* lineNo */
    "dev_jacob_soc", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pathName */
};

static emlrtRSInfo wf_emlrtRSI = {
    17,              /* lineNo */
    "dev_jacob_soc", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pathName */
};

static emlrtRSInfo xf_emlrtRSI = {
    18,              /* lineNo */
    "dev_jacob_soc", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pathName */
};

static emlrtRSInfo yf_emlrtRSI = {
    41,                /* lineNo */
    "constructMatrix", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pathName */
};

static emlrtRSInfo ag_emlrtRSI = {
    44,                /* lineNo */
    "constructMatrix", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pathName */
};

static emlrtRSInfo bg_emlrtRSI = {
    48,                /* lineNo */
    "constructMatrix", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pathName */
};

static emlrtRSInfo cg_emlrtRSI = {
    50,                /* lineNo */
    "constructMatrix", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pathName */
};

static emlrtRSInfo dg_emlrtRSI = {
    41,    /* lineNo */
    "cat", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                          */
};

static emlrtRSInfo eg_emlrtRSI = {
    113,        /* lineNo */
    "cat_impl", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pathName
                                                                          */
};

static emlrtRTEInfo v_emlrtRTEI = {
    288,                   /* lineNo */
    27,                    /* colNo */
    "check_non_axis_size", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pName
                                                                          */
};

static emlrtECInfo wb_emlrtECI = {
    2,                 /* nDims */
    44,                /* lineNo */
    24,                /* colNo */
    "constructMatrix", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtECInfo xb_emlrtECI = {
    1,                 /* nDims */
    44,                /* lineNo */
    24,                /* colNo */
    "constructMatrix", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtECInfo yb_emlrtECI = {
    2,                 /* nDims */
    44,                /* lineNo */
    55,                /* colNo */
    "constructMatrix", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtECInfo ac_emlrtECI = {
    1,                 /* nDims */
    44,                /* lineNo */
    55,                /* colNo */
    "constructMatrix", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtECInfo bc_emlrtECI = {
    2,               /* nDims */
    20,              /* lineNo */
    22,              /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtECInfo cc_emlrtECI = {
    2,               /* nDims */
    19,              /* lineNo */
    22,              /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtECInfo dc_emlrtECI = {
    1,               /* nDims */
    18,              /* lineNo */
    35,              /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtECInfo ec_emlrtECI = {
    1,               /* nDims */
    18,              /* lineNo */
    46,              /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtECInfo fc_emlrtECI = {
    1,               /* nDims */
    17,              /* lineNo */
    44,              /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtECInfo gc_emlrtECI = {
    1,               /* nDims */
    17,              /* lineNo */
    55,              /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtBCInfo rc_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    4,               /* lineNo */
    15,              /* colNo */
    "v",             /* aName */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo sc_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    4,               /* lineNo */
    12,              /* colNo */
    "v",             /* aName */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo tc_emlrtBCI = {
    -1,              /* iFirst */
    -1,              /* iLast */
    3,               /* lineNo */
    12,              /* colNo */
    "v",             /* aName */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m", /* pName */
    0                                               /* checkKind */
};

static emlrtRTEInfo hi_emlrtRTEI = {
    4,               /* lineNo */
    5,               /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo ii_emlrtRTEI = {
    6,               /* lineNo */
    27,              /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo ji_emlrtRTEI = {
    10,              /* lineNo */
    9,               /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo ki_emlrtRTEI = {
    11,              /* lineNo */
    9,               /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo li_emlrtRTEI = {
    38,              /* lineNo */
    5,               /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo mi_emlrtRTEI = {
    7,               /* lineNo */
    9,               /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo ni_emlrtRTEI = {
    44,              /* lineNo */
    59,              /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo oi_emlrtRTEI = {
    44,              /* lineNo */
    24,              /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo pi_emlrtRTEI = {
    125,   /* lineNo */
    9,     /* colNo */
    "cat", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pName
                                                                          */
};

static emlrtRTEInfo qi_emlrtRTEI = {
    41,    /* lineNo */
    5,     /* colNo */
    "cat", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pName
                                                                          */
};

static emlrtRTEInfo ri_emlrtRTEI = {
    48,              /* lineNo */
    51,              /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo si_emlrtRTEI = {
    15,              /* lineNo */
    29,              /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo ti_emlrtRTEI = {
    15,              /* lineNo */
    10,              /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo ui_emlrtRTEI = {
    15,              /* lineNo */
    13,              /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo vi_emlrtRTEI = {
    17,              /* lineNo */
    55,              /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo wi_emlrtRTEI = {
    17,              /* lineNo */
    44,              /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo xi_emlrtRTEI = {
    19,              /* lineNo */
    9,               /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo yi_emlrtRTEI = {
    20,              /* lineNo */
    9,               /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo aj_emlrtRTEI = {
    16,              /* lineNo */
    9,               /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo bj_emlrtRTEI = {
    18,              /* lineNo */
    9,               /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo cj_emlrtRTEI = {
    1,               /* lineNo */
    28,              /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo dj_emlrtRTEI = {
    41,              /* lineNo */
    5,               /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo ej_emlrtRTEI = {
    44,              /* lineNo */
    5,               /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo fj_emlrtRTEI = {
    44,              /* lineNo */
    55,              /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo gj_emlrtRTEI = {
    48,              /* lineNo */
    19,              /* colNo */
    "dev_jacob_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pName */
};

static emlrtRTEInfo hj_emlrtRTEI = {
    116,   /* lineNo */
    1,     /* colNo */
    "cat", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" /* pName
                                                                          */
};

static emlrtRSInfo ui_emlrtRSI = {
    20,              /* lineNo */
    "dev_jacob_soc", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pathName */
};

static emlrtRSInfo vi_emlrtRSI = {
    19,              /* lineNo */
    "dev_jacob_soc", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" /* pathName */
};

/* Function Declarations */
static void plus(const emlrtStack *sp, emxArray_real_T *in1,
                 const emxArray_real_T *in2);

/* Function Definitions */
static void plus(const emlrtStack *sp, emxArray_real_T *in1,
                 const emxArray_real_T *in2)
{
  emxArray_real_T *b_in1;
  const real_T *in2_data;
  real_T *b_in1_data;
  real_T *in1_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in2_data = in2->data;
  in1_data = in1->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in1, 2, &oi_emlrtRTEI);
  if (in2->size[1] == 1) {
    loop_ub = in1->size[1];
  } else {
    loop_ub = in2->size[1];
  }
  i = b_in1->size[0] * b_in1->size[1];
  b_in1->size[1] = loop_ub;
  if (in2->size[0] == 1) {
    b_loop_ub = in1->size[0];
  } else {
    b_loop_ub = in2->size[0];
  }
  b_in1->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, b_in1, i, &oi_emlrtRTEI);
  b_in1_data = b_in1->data;
  stride_0_0 = (in1->size[1] != 1);
  stride_0_1 = (in1->size[0] != 1);
  stride_1_0 = (in2->size[1] != 1);
  stride_1_1 = (in2->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_in1_data[i1 + b_in1->size[1] * i] =
          in1_data[i1 * stride_0_0 + in1->size[1] * aux_0_1] +
          in2_data[i1 * stride_1_0 + in2->size[1] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  i = in1->size[0] * in1->size[1];
  in1->size[1] = loop_ub;
  in1->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, in1, i, &oi_emlrtRTEI);
  in1_data = in1->data;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1->size[1] * i] = b_in1_data[i1 + b_in1->size[1] * i];
    }
  }
  emxFree_real_T(sp, &b_in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void dev_jacob_soc(const emlrtStack *sp, const emxArray_real_T *v,
                   real_T epsilon, const emxArray_real_T *P, real_T alpha,
                   emxArray_real_T *Q_out, emxArray_real_T *Q_inv)
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  cell_wrap_6 reshapes[2];
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_creal_T *Q;
  emxArray_creal_T *lambda;
  emxArray_creal_T *r;
  emxArray_creal_T *r1;
  emxArray_creal_T *r2;
  emxArray_creal_T *r3;
  emxArray_creal_T *y;
  emxArray_real_T *b_I;
  emxArray_real_T *lambda_inv;
  emxArray_real_T *r4;
  emxArray_real_T *result;
  emxArray_real_T *rightBottomBlock;
  emxArray_real_T *varargin_2;
  emxArray_real_T *z2;
  creal_T *Q_data;
  creal_T *lambda_data;
  creal_T *r8;
  creal_T *y_data;
  const real_T *P_data;
  const real_T *v_data;
  real_T br;
  real_T normZ2;
  real_T *I_data;
  real_T *r5;
  real_T *rightBottomBlock_data;
  real_T *z2_data;
  int32_T sizes[2];
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  P_data = P->data;
  v_data = v->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (v->size[0] < 1) {
    emlrtDynamicBoundsCheckR2012b(v->size[0], 1, v->size[0], &tc_emlrtBCI,
                                  (emlrtConstCTX)sp);
  }
  if (v->size[0] - 1 < 1) {
    loop_ub = 0;
  } else {
    if (v->size[0] < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, v->size[0], &sc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    if ((v->size[0] - 1 < 1) || (v->size[0] - 1 > v->size[0])) {
      emlrtDynamicBoundsCheckR2012b(v->size[0] - 1, 1, v->size[0], &rc_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    loop_ub = v->size[0] - 1;
  }
  sizes[0] = 1;
  sizes[1] = loop_ub;
  st.site = &rf_emlrtRSI;
  indexShapeCheck(&st, v->size[0], sizes);
  emxInit_real_T(sp, &z2, 1, &hi_emlrtRTEI);
  i = z2->size[0];
  z2->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, z2, i, &hi_emlrtRTEI);
  z2_data = z2->data;
  for (i = 0; i < loop_ub; i++) {
    z2_data[i] = v_data[i];
  }
  if (loop_ub == 0) {
    normZ2 = 0.0;
  } else {
    n_t = (ptrdiff_t)loop_ub;
    incx_t = (ptrdiff_t)1;
    normZ2 = dnrm2(&n_t, &z2_data[0], &incx_t);
  }
  br = v_data[v->size[0] - 1];
  emxInit_creal_T(sp, &lambda, 1, &aj_emlrtRTEI);
  emxInit_real_T(sp, &lambda_inv, 1, &bj_emlrtRTEI);
  emxInit_creal_T(sp, &Q, 2, &cj_emlrtRTEI);
  emxInit_creal_T(sp, &r, 2, &ti_emlrtRTEI);
  emxInit_creal_T(sp, &r1, 2, &ui_emlrtRTEI);
  emxInit_creal_T(sp, &r2, 1, &vi_emlrtRTEI);
  emxInit_creal_T(sp, &y, 1, &wi_emlrtRTEI);
  emxInit_creal_T(sp, &r3, 1, &vi_emlrtRTEI);
  emxInit_real_T(sp, &b_I, 2, &dj_emlrtRTEI);
  emxInit_real_T(sp, &rightBottomBlock, 2, &ej_emlrtRTEI);
  emxInit_real_T(sp, &r4, 2, &fj_emlrtRTEI);
  emxInit_real_T(sp, &result, 2, &gj_emlrtRTEI);
  emxInit_real_T(sp, &varargin_2, 2, &ri_emlrtRTEI);
  emxInitMatrix_cell_wrap_6(sp, reshapes, &hj_emlrtRTEI);
  if (epsilon * br >= normZ2) {
    int32_T input_sizes_idx_1;
    int32_T scalarLB_tmp;
    loop_ub = P->size[0];
    i = z2->size[0];
    z2->size[0] = P->size[0];
    emxEnsureCapacity_real_T(sp, z2, i, &ii_emlrtRTEI);
    z2_data = z2->data;
    scalarLB_tmp = (P->size[0] / 2) << 1;
    input_sizes_idx_1 = scalarLB_tmp - 2;
    for (i = 0; i <= input_sizes_idx_1; i += 2) {
      _mm_storeu_pd(
          &z2_data[i],
          _mm_div_pd(_mm_set1_pd(1.0),
                     _mm_mul_pd(_mm_set1_pd(alpha), _mm_loadu_pd(&P_data[i]))));
    }
    for (i = scalarLB_tmp; i < loop_ub; i++) {
      z2_data[i] = 1.0 / (alpha * P_data[i]);
    }
    st.site = &sf_emlrtRSI;
    b_sqrt(&st, z2);
    st.site = &sf_emlrtRSI;
    diag(&st, z2, Q_out);
    rightBottomBlock_data = Q_out->data;
    i = Q_inv->size[0] * Q_inv->size[1];
    Q_inv->size[1] = Q_out->size[1];
    Q_inv->size[0] = Q_out->size[0];
    emxEnsureCapacity_real_T(sp, Q_inv, i, &mi_emlrtRTEI);
    I_data = Q_inv->data;
    loop_ub = Q_out->size[1] * Q_out->size[0];
    for (i = 0; i < loop_ub; i++) {
      I_data[i] = rightBottomBlock_data[i];
    }
  } else if (br <= -epsilon * normZ2) {
    int32_T loop_ub_tmp;
    i = Q_out->size[0] * Q_out->size[1];
    Q_out->size[1] = v->size[0];
    Q_out->size[0] = v->size[0];
    emxEnsureCapacity_real_T(sp, Q_out, i, &ji_emlrtRTEI);
    rightBottomBlock_data = Q_out->data;
    loop_ub_tmp = v->size[0] * v->size[0];
    for (i = 0; i < loop_ub_tmp; i++) {
      rightBottomBlock_data[i] = 0.0;
    }
    i = Q_inv->size[0] * Q_inv->size[1];
    Q_inv->size[1] = v->size[0];
    Q_inv->size[0] = v->size[0];
    emxEnsureCapacity_real_T(sp, Q_inv, i, &ki_emlrtRTEI);
    I_data = Q_inv->data;
    for (i = 0; i < loop_ub_tmp; i++) {
      I_data[i] = 0.0;
    }
  } else {
    __m128d r6;
    __m128d r7;
    real_T bi;
    real_T brm;
    real_T c;
    real_T re;
    int32_T input_sizes_idx_1;
    int32_T loop_ub_tmp;
    int32_T scalarLB_tmp;
    boolean_T empty_non_axis_sizes;
    boolean_T sizes_tmp;
    st.site = &tf_emlrtRSI;
    /*  Ensure z2 is a column vector */
    /*  Compute the norm of z2 */
    if (loop_ub == 0) {
      normZ2 = 0.0;
    } else {
      n_t = (ptrdiff_t)loop_ub;
      incx_t = (ptrdiff_t)1;
      normZ2 = dnrm2(&n_t, &z2_data[0], &incx_t);
    }
    /*  Scalar part */
    /*  z2 normalized */
    i = z2->size[0];
    z2->size[0] = loop_ub;
    emxEnsureCapacity_real_T(&st, z2, i, &li_emlrtRTEI);
    z2_data = z2->data;
    scalarLB_tmp = (loop_ub / 2) << 1;
    input_sizes_idx_1 = scalarLB_tmp - 2;
    for (i = 0; i <= input_sizes_idx_1; i += 2) {
      _mm_storeu_pd(&z2_data[i],
                    _mm_div_pd(_mm_loadu_pd(&v_data[i]), _mm_set1_pd(normZ2)));
    }
    for (i = scalarLB_tmp; i < loop_ub; i++) {
      z2_data[i] = v_data[i] / normZ2;
    }
    /*  Identity matrix of size z2 */
    b_st.site = &yf_emlrtRSI;
    eye(&b_st, loop_ub, b_I);
    I_data = b_I->data;
    /*  Compute the right-bottom block of the matrix */
    b_st.site = &ag_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    c = normZ2 * normZ2;
    i = r4->size[0] * r4->size[1];
    r4->size[1] = loop_ub;
    r4->size[0] = loop_ub;
    emxEnsureCapacity_real_T(&st, r4, i, &ni_emlrtRTEI);
    r5 = r4->data;
    for (i = 0; i < loop_ub; i++) {
      for (i1 = 0; i1 <= input_sizes_idx_1; i1 += 2) {
        _mm_storeu_pd(
            &r5[i1 + r4->size[1] * i],
            _mm_div_pd(_mm_add_pd(_mm_set1_pd(0.0),
                                  _mm_mul_pd(_mm_loadu_pd(&v_data[i1]),
                                             _mm_set1_pd(v_data[i]))),
                       _mm_set1_pd(c)));
      }
      for (i1 = scalarLB_tmp; i1 < loop_ub; i1++) {
        r5[i1 + r4->size[1] * i] = v_data[i1] * v_data[i] / c;
      }
    }
    if ((b_I->size[0] != r4->size[0]) &&
        ((b_I->size[0] != 1) && (r4->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_I->size[0], r4->size[0], &ac_emlrtECI, &st);
    }
    if ((b_I->size[1] != r4->size[1]) &&
        ((b_I->size[1] != 1) && (r4->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_I->size[1], r4->size[1], &yb_emlrtECI, &st);
    }
    i = rightBottomBlock->size[0] * rightBottomBlock->size[1];
    rightBottomBlock->size[1] = b_I->size[1];
    rightBottomBlock->size[0] = b_I->size[0];
    emxEnsureCapacity_real_T(&st, rightBottomBlock, i, &oi_emlrtRTEI);
    rightBottomBlock_data = rightBottomBlock->data;
    loop_ub_tmp = b_I->size[1] * b_I->size[0];
    scalarLB_tmp = (loop_ub_tmp / 2) << 1;
    input_sizes_idx_1 = scalarLB_tmp - 2;
    for (i = 0; i <= input_sizes_idx_1; i += 2) {
      r6 = _mm_loadu_pd(&I_data[i]);
      _mm_storeu_pd(&rightBottomBlock_data[i],
                    _mm_mul_pd(_mm_set1_pd(epsilon), r6));
    }
    for (i = scalarLB_tmp; i < loop_ub_tmp; i++) {
      rightBottomBlock_data[i] = epsilon * I_data[i];
    }
    normZ2 = br / normZ2;
    if ((b_I->size[1] == r4->size[1]) && (b_I->size[0] == r4->size[0])) {
      for (i = 0; i <= input_sizes_idx_1; i += 2) {
        r6 = _mm_loadu_pd(&I_data[i]);
        r7 = _mm_loadu_pd(&r5[i]);
        _mm_storeu_pd(&I_data[i],
                      _mm_mul_pd(_mm_set1_pd(normZ2), _mm_sub_pd(r6, r7)));
      }
      for (i = scalarLB_tmp; i < loop_ub_tmp; i++) {
        I_data[i] = normZ2 * (I_data[i] - r5[i]);
      }
    } else {
      b_st.site = &ti_emlrtRSI;
      binary_expand_op_33(&b_st, b_I, normZ2, r4);
      I_data = b_I->data;
    }
    if ((rightBottomBlock->size[0] != b_I->size[0]) &&
        ((rightBottomBlock->size[0] != 1) && (b_I->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(rightBottomBlock->size[0], b_I->size[0],
                                  &xb_emlrtECI, &st);
    }
    if ((rightBottomBlock->size[1] != b_I->size[1]) &&
        ((rightBottomBlock->size[1] != 1) && (b_I->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(rightBottomBlock->size[1], b_I->size[1],
                                  &wb_emlrtECI, &st);
    }
    if ((rightBottomBlock->size[1] == b_I->size[1]) &&
        (rightBottomBlock->size[0] == b_I->size[0])) {
      loop_ub = rightBottomBlock->size[1] * rightBottomBlock->size[0];
      scalarLB_tmp = (loop_ub / 2) << 1;
      input_sizes_idx_1 = scalarLB_tmp - 2;
      for (i = 0; i <= input_sizes_idx_1; i += 2) {
        r6 = _mm_loadu_pd(&rightBottomBlock_data[i]);
        r7 = _mm_loadu_pd(&I_data[i]);
        _mm_storeu_pd(&rightBottomBlock_data[i], _mm_add_pd(r6, r7));
      }
      for (i = scalarLB_tmp; i < loop_ub; i++) {
        rightBottomBlock_data[i] += I_data[i];
      }
    } else {
      b_st.site = &ag_emlrtRSI;
      plus(&b_st, rightBottomBlock, b_I);
      rightBottomBlock_data = rightBottomBlock->data;
    }
    /*  Assemble the full matrix */
    /* fullMatrix = [scalarPart, z2Normalized'; z2Normalized, rightBottomBlock];
     */
    b_st.site = &bg_emlrtRSI;
    c_st.site = &dg_emlrtRSI;
    sizes_tmp =
        ((rightBottomBlock->size[0] != 0) && (rightBottomBlock->size[1] != 0));
    if (sizes_tmp) {
      scalarLB_tmp = rightBottomBlock->size[0];
    } else if (z2->size[0] != 0) {
      scalarLB_tmp = z2->size[0];
    } else {
      scalarLB_tmp = rightBottomBlock->size[0];
    }
    d_st.site = &eg_emlrtRSI;
    if ((rightBottomBlock->size[0] != scalarLB_tmp) &&
        ((rightBottomBlock->size[0] != 0) &&
         (rightBottomBlock->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &v_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if ((z2->size[0] != scalarLB_tmp) && (z2->size[0] != 0)) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &v_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    empty_non_axis_sizes = (scalarLB_tmp == 0);
    if (empty_non_axis_sizes || sizes_tmp) {
      input_sizes_idx_1 = rightBottomBlock->size[1];
    } else {
      input_sizes_idx_1 = 0;
    }
    if ((rightBottomBlock->size[1] == input_sizes_idx_1) &&
        (scalarLB_tmp == rightBottomBlock->size[0])) {
      i = reshapes[0].f1->size[0] * reshapes[0].f1->size[1];
      reshapes[0].f1->size[1] = input_sizes_idx_1;
      reshapes[0].f1->size[0] = scalarLB_tmp;
      emxEnsureCapacity_real_T(&c_st, reshapes[0].f1, i, &pi_emlrtRTEI);
      loop_ub = scalarLB_tmp * input_sizes_idx_1;
      for (i = 0; i < loop_ub; i++) {
        reshapes[0].f1->data[i] = rightBottomBlock_data[i];
      }
    } else {
      i = 0;
      i1 = 0;
      b_loop_ub = 0;
      loop_ub_tmp = 0;
      loop_ub = reshapes[0].f1->size[0] * reshapes[0].f1->size[1];
      reshapes[0].f1->size[1] = input_sizes_idx_1;
      reshapes[0].f1->size[0] = scalarLB_tmp;
      emxEnsureCapacity_real_T(&c_st, reshapes[0].f1, loop_ub, &pi_emlrtRTEI);
      for (loop_ub = 0; loop_ub < scalarLB_tmp * input_sizes_idx_1; loop_ub++) {
        reshapes[0].f1->data[i1 + reshapes[0].f1->size[1] * i] =
            rightBottomBlock_data[loop_ub_tmp +
                                  rightBottomBlock->size[1] * b_loop_ub];
        i++;
        b_loop_ub++;
        if (i > reshapes[0].f1->size[0] - 1) {
          i = 0;
          i1++;
        }
        if (b_loop_ub > rightBottomBlock->size[0] - 1) {
          b_loop_ub = 0;
          loop_ub_tmp++;
        }
      }
    }
    if (empty_non_axis_sizes || (z2->size[0] != 0)) {
      sizes[1] = 1;
    } else {
      sizes[1] = 0;
    }
    input_sizes_idx_1 = sizes[1];
    i = 0;
    i1 = 0;
    b_loop_ub = reshapes[1].f1->size[0] * reshapes[1].f1->size[1];
    reshapes[1].f1->size[1] = sizes[1];
    reshapes[1].f1->size[0] = scalarLB_tmp;
    emxEnsureCapacity_real_T(&c_st, reshapes[1].f1, b_loop_ub, &pi_emlrtRTEI);
    for (b_loop_ub = 0; b_loop_ub < scalarLB_tmp * input_sizes_idx_1;
         b_loop_ub++) {
      reshapes[1].f1->data[i1 + reshapes[1].f1->size[1] * i] =
          z2_data[b_loop_ub];
      i++;
      if (i > reshapes[1].f1->size[0] - 1) {
        i = 0;
        i1++;
      }
    }
    i = result->size[0] * result->size[1];
    result->size[1] = reshapes[0].f1->size[1] + reshapes[1].f1->size[1];
    loop_ub = reshapes[0].f1->size[0];
    result->size[0] = reshapes[0].f1->size[0];
    emxEnsureCapacity_real_T(&c_st, result, i, &qi_emlrtRTEI);
    rightBottomBlock_data = result->data;
    for (i = 0; i < loop_ub; i++) {
      loop_ub_tmp = reshapes[0].f1->size[1];
      for (i1 = 0; i1 < loop_ub_tmp; i1++) {
        rightBottomBlock_data[i1 + result->size[1] * i] =
            reshapes[0].f1->data[i1 + reshapes[0].f1->size[1] * i];
      }
      b_loop_ub = reshapes[1].f1->size[1];
      for (i1 = 0; i1 < b_loop_ub; i1++) {
        rightBottomBlock_data[loop_ub_tmp + result->size[1] * i] =
            reshapes[1].f1->data[reshapes[1].f1->size[1] * i];
      }
    }
    b_st.site = &bg_emlrtRSI;
    i = varargin_2->size[0] * varargin_2->size[1];
    varargin_2->size[1] = z2->size[0] + 1;
    varargin_2->size[0] = 1;
    emxEnsureCapacity_real_T(&b_st, varargin_2, i, &ri_emlrtRTEI);
    I_data = varargin_2->data;
    loop_ub_tmp = z2->size[0];
    for (i = 0; i < loop_ub_tmp; i++) {
      I_data[i] = z2_data[i];
    }
    I_data[z2->size[0]] = 1.0 / epsilon;
    c_st.site = &dg_emlrtRSI;
    sizes_tmp = ((result->size[0] != 0) && (result->size[1] != 0));
    if (sizes_tmp) {
      sizes[1] = result->size[1];
    } else {
      sizes[1] = varargin_2->size[1];
    }
    d_st.site = &eg_emlrtRSI;
    if ((result->size[1] != sizes[1]) &&
        ((result->size[0] != 0) && (result->size[1] != 0))) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &v_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if (varargin_2->size[1] != sizes[1]) {
      emlrtErrorWithMessageIdR2018a(
          &d_st, &v_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
          "MATLAB:catenate:matrixDimensionMismatch", 0);
    }
    if (sizes_tmp) {
      scalarLB_tmp = result->size[0];
    } else {
      scalarLB_tmp = 0;
    }
    input_sizes_idx_1 = sizes[1];
    if ((result->size[1] == sizes[1]) && (scalarLB_tmp == result->size[0])) {
      i = reshapes[0].f1->size[0] * reshapes[0].f1->size[1];
      reshapes[0].f1->size[1] = sizes[1];
      reshapes[0].f1->size[0] = scalarLB_tmp;
      emxEnsureCapacity_real_T(&c_st, reshapes[0].f1, i, &pi_emlrtRTEI);
      loop_ub = scalarLB_tmp * sizes[1];
      for (i = 0; i < loop_ub; i++) {
        reshapes[0].f1->data[i] = rightBottomBlock_data[i];
      }
    } else {
      i = 0;
      i1 = 0;
      b_loop_ub = 0;
      loop_ub_tmp = 0;
      loop_ub = reshapes[0].f1->size[0] * reshapes[0].f1->size[1];
      reshapes[0].f1->size[1] = sizes[1];
      reshapes[0].f1->size[0] = scalarLB_tmp;
      emxEnsureCapacity_real_T(&c_st, reshapes[0].f1, loop_ub, &pi_emlrtRTEI);
      for (loop_ub = 0; loop_ub < scalarLB_tmp * input_sizes_idx_1; loop_ub++) {
        reshapes[0].f1->data[i1 + reshapes[0].f1->size[1] * i] =
            rightBottomBlock_data[loop_ub_tmp + result->size[1] * b_loop_ub];
        i++;
        b_loop_ub++;
        if (i > reshapes[0].f1->size[0] - 1) {
          i = 0;
          i1++;
        }
        if (b_loop_ub > result->size[0] - 1) {
          b_loop_ub = 0;
          loop_ub_tmp++;
        }
      }
    }
    input_sizes_idx_1 = sizes[1];
    if (varargin_2->size[1] == sizes[1]) {
      i = reshapes[1].f1->size[0] * reshapes[1].f1->size[1];
      reshapes[1].f1->size[1] = sizes[1];
      reshapes[1].f1->size[0] = 1;
      emxEnsureCapacity_real_T(&c_st, reshapes[1].f1, i, &pi_emlrtRTEI);
      loop_ub = sizes[1];
      for (i = 0; i < loop_ub; i++) {
        reshapes[1].f1->data[i] = I_data[i];
      }
    } else {
      i = 0;
      i1 = reshapes[1].f1->size[0] * reshapes[1].f1->size[1];
      reshapes[1].f1->size[1] = sizes[1];
      reshapes[1].f1->size[0] = 1;
      emxEnsureCapacity_real_T(&c_st, reshapes[1].f1, i1, &pi_emlrtRTEI);
      for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
        reshapes[1].f1->data[i] = I_data[i1];
        i++;
      }
    }
    /*  Multiply by the scalar epsilon / (epsilon^2 + 1) */
    b_st.site = &cg_emlrtRSI;
    c_st.site = &gb_emlrtRSI;
    normZ2 = epsilon / (epsilon * epsilon + 1.0);
    i = b_I->size[0] * b_I->size[1];
    b_I->size[1] = reshapes[0].f1->size[0] + 1;
    loop_ub = reshapes[0].f1->size[1];
    b_I->size[0] = reshapes[0].f1->size[1];
    emxEnsureCapacity_real_T(sp, b_I, i, &si_emlrtRTEI);
    I_data = b_I->data;
    for (i = 0; i < loop_ub; i++) {
      loop_ub_tmp = reshapes[0].f1->size[0];
      for (i1 = 0; i1 < loop_ub_tmp; i1++) {
        I_data[i1 + b_I->size[1] * i] =
            normZ2 * reshapes[0].f1->data[i + reshapes[0].f1->size[1] * i1];
      }
      I_data[loop_ub_tmp + b_I->size[1] * i] = normZ2 * reshapes[1].f1->data[i];
    }
    st.site = &uf_emlrtRSI;
    eig(&st, b_I, r, r1);
    y_data = r1->data;
    r8 = r->data;
    loop_ub = r->size[0];
    i = Q->size[0] * Q->size[1];
    Q->size[1] = r->size[0];
    b_loop_ub = r->size[1];
    Q->size[0] = r->size[1];
    emxEnsureCapacity_creal_T(sp, Q, i, &ti_emlrtRTEI);
    Q_data = Q->data;
    for (i = 0; i < b_loop_ub; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        Q_data[i1 + Q->size[1] * i] = r8[i + r->size[1] * i1];
      }
    }
    /* J = QlambdaQ' */
    scalarLB_tmp = r1->size[0];
    i = r->size[0] * r->size[1];
    r->size[1] = r1->size[0];
    input_sizes_idx_1 = r1->size[1];
    r->size[0] = r1->size[1];
    emxEnsureCapacity_creal_T(sp, r, i, &ui_emlrtRTEI);
    r8 = r->data;
    for (i = 0; i < input_sizes_idx_1; i++) {
      for (i1 = 0; i1 < scalarLB_tmp; i1++) {
        r8[i1 + r->size[1] * i] = y_data[i + r1->size[1] * i1];
      }
    }
    st.site = &vf_emlrtRSI;
    b_diag(&st, r, lambda);
    lambda_data = lambda->data;
    scalarLB_tmp = lambda->size[0];
    i = r2->size[0];
    r2->size[0] = lambda->size[0];
    emxEnsureCapacity_creal_T(sp, r2, i, &vi_emlrtRTEI);
    y_data = r2->data;
    for (i = 0; i < scalarLB_tmp; i++) {
      y_data[i].re = alpha * lambda_data[i].re;
      y_data[i].im = alpha * lambda_data[i].im;
    }
    if ((lambda->size[0] != P->size[0]) &&
        ((lambda->size[0] != 1) && (P->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(lambda->size[0], P->size[0], &gc_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if (r2->size[0] == P->size[0]) {
      i = r3->size[0];
      r3->size[0] = lambda->size[0];
      emxEnsureCapacity_creal_T(sp, r3, i, &vi_emlrtRTEI);
      r8 = r3->data;
      for (i = 0; i < scalarLB_tmp; i++) {
        r8[i].re = P_data[i] * y_data[i].re;
        r8[i].im = P_data[i] * y_data[i].im;
      }
    } else {
      st.site = &wf_emlrtRSI;
      times(&st, r3, r2, P);
      r8 = r3->data;
    }
    if ((lambda->size[0] != r3->size[0]) &&
        ((lambda->size[0] != 1) && (r3->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(lambda->size[0], r3->size[0], &fc_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    st.site = &wf_emlrtRSI;
    if (lambda->size[0] == r3->size[0]) {
      i = y->size[0];
      y->size[0] = lambda->size[0];
      emxEnsureCapacity_creal_T(&st, y, i, &wi_emlrtRTEI);
      y_data = y->data;
      for (i = 0; i < scalarLB_tmp; i++) {
        y_data[i].re = (1.0 - lambda_data[i].re) + r8[i].re;
        y_data[i].im = (0.0 - lambda_data[i].im) + r8[i].im;
      }
    } else {
      b_st.site = &wf_emlrtRSI;
      binary_expand_op_26(&b_st, y, lambda, r3);
    }
    b_st.site = &gd_emlrtRSI;
    c_st.site = &hd_emlrtRSI;
    b_assertCompatibleDims(&c_st, lambda, y);
    if (lambda->size[0] == y->size[0]) {
      scalarLB_tmp = lambda->size[0];
      i = y->size[0];
      y->size[0] = lambda->size[0];
      emxEnsureCapacity_creal_T(sp, y, i, &lf_emlrtRTEI);
      y_data = y->data;
      for (i = 0; i < scalarLB_tmp; i++) {
        real_T ai;
        real_T ar;
        ar = lambda_data[i].re;
        ai = lambda_data[i].im;
        br = y_data[i].re;
        bi = y_data[i].im;
        if (bi == 0.0) {
          if (ai == 0.0) {
            re = ar / br;
            normZ2 = 0.0;
          } else if (ar == 0.0) {
            re = 0.0;
            normZ2 = ai / br;
          } else {
            re = ar / br;
            normZ2 = ai / br;
          }
        } else if (br == 0.0) {
          if (ar == 0.0) {
            re = ai / bi;
            normZ2 = 0.0;
          } else if (ai == 0.0) {
            re = 0.0;
            normZ2 = -(ar / bi);
          } else {
            re = ai / bi;
            normZ2 = -(ar / bi);
          }
        } else {
          brm = muDoubleScalarAbs(br);
          normZ2 = muDoubleScalarAbs(bi);
          if (brm > normZ2) {
            c = bi / br;
            normZ2 = br + c * bi;
            re = (ar + c * ai) / normZ2;
            normZ2 = (ai - c * ar) / normZ2;
          } else if (normZ2 == brm) {
            if (br > 0.0) {
              c = 0.5;
            } else {
              c = -0.5;
            }
            if (bi > 0.0) {
              normZ2 = 0.5;
            } else {
              normZ2 = -0.5;
            }
            re = (ar * c + ai * normZ2) / brm;
            normZ2 = (ai * c - ar * normZ2) / brm;
          } else {
            c = br / bi;
            normZ2 = bi + c * br;
            re = (c * ar + ai) / normZ2;
            normZ2 = (c * ai - ar) / normZ2;
          }
        }
        y_data[i].re = re;
        y_data[i].im = normZ2;
      }
      st.site = &wf_emlrtRSI;
      c_abs(&st, y, z2);
    } else {
      st.site = &wf_emlrtRSI;
      binary_expand_op_25(&st, z2, wf_emlrtRSI, lambda, y);
    }
    st.site = &wf_emlrtRSI;
    b_sqrt(&st, z2);
    z2_data = z2->data;
    if ((r2->size[0] != P->size[0]) &&
        ((r2->size[0] != 1) && (P->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(r2->size[0], P->size[0], &ec_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    scalarLB_tmp = lambda->size[0];
    if ((lambda->size[0] != r3->size[0]) &&
        ((lambda->size[0] != 1) && (r3->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(lambda->size[0], r3->size[0], &dc_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if (lambda->size[0] == r3->size[0]) {
      for (i = 0; i < scalarLB_tmp; i++) {
        br = (1.0 - lambda_data[i].re) + r8[i].re;
        bi = (0.0 - lambda_data[i].im) + r8[i].im;
        if (bi == 0.0) {
          re = 1.0 / br;
          normZ2 = 0.0;
        } else if (br == 0.0) {
          re = 0.0;
          normZ2 = -(1.0 / bi);
        } else {
          brm = muDoubleScalarAbs(br);
          normZ2 = muDoubleScalarAbs(bi);
          if (brm > normZ2) {
            c = bi / br;
            normZ2 = br + c * bi;
            re = (c * 0.0 + 1.0) / normZ2;
            normZ2 = (0.0 - c) / normZ2;
          } else if (normZ2 == brm) {
            if (br > 0.0) {
              c = 0.5;
            } else {
              c = -0.5;
            }
            if (bi > 0.0) {
              normZ2 = 0.5;
            } else {
              normZ2 = -0.5;
            }
            re = (c + 0.0 * normZ2) / brm;
            normZ2 = (0.0 * c - normZ2) / brm;
          } else {
            c = br / bi;
            normZ2 = bi + c * br;
            re = c / normZ2;
            normZ2 = (c * 0.0 - 1.0) / normZ2;
          }
        }
        lambda_data[i].re = re;
        lambda_data[i].im = normZ2;
      }
      st.site = &xf_emlrtRSI;
      c_abs(&st, lambda, lambda_inv);
    } else {
      st.site = &xf_emlrtRSI;
      binary_expand_op_24(&st, lambda_inv, xf_emlrtRSI, lambda, r3);
    }
    st.site = &xf_emlrtRSI;
    b_sqrt(&st, lambda_inv);
    rightBottomBlock_data = lambda_inv->data;
    if ((loop_ub != lambda_inv->size[0]) &&
        ((loop_ub != 1) && (lambda_inv->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(loop_ub, lambda_inv->size[0], &cc_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if (Q->size[1] == lambda_inv->size[0]) {
      i = Q_inv->size[0] * Q_inv->size[1];
      Q_inv->size[1] = loop_ub;
      Q_inv->size[0] = b_loop_ub;
      emxEnsureCapacity_real_T(sp, Q_inv, i, &xi_emlrtRTEI);
      I_data = Q_inv->data;
      for (i = 0; i < b_loop_ub; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          I_data[i1 + Q_inv->size[1] * i] =
              Q_data[i1 + Q->size[1] * i].re * rightBottomBlock_data[i1];
        }
      }
    } else {
      st.site = &vi_emlrtRSI;
      binary_expand_op_22(&st, Q_inv, Q, lambda_inv);
    }
    /* check the shape of lmbda_inv */
    loop_ub = Q->size[1];
    if ((Q->size[1] != z2->size[0]) &&
        ((Q->size[1] != 1) && (z2->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Q->size[1], z2->size[0], &bc_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if (Q->size[1] == z2->size[0]) {
      i = Q_out->size[0] * Q_out->size[1];
      Q_out->size[1] = Q->size[1];
      b_loop_ub = Q->size[0];
      Q_out->size[0] = Q->size[0];
      emxEnsureCapacity_real_T(sp, Q_out, i, &yi_emlrtRTEI);
      rightBottomBlock_data = Q_out->data;
      for (i = 0; i < b_loop_ub; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          rightBottomBlock_data[i1 + Q_out->size[1] * i] =
              Q_data[i1 + Q->size[1] * i].re * z2_data[i1];
        }
      }
    } else {
      st.site = &ui_emlrtRSI;
      binary_expand_op_22(&st, Q_out, Q, z2);
    }
    /* Q.* v' */
  }
  emxFreeMatrix_cell_wrap_6(sp, reshapes);
  emxFree_real_T(sp, &varargin_2);
  emxFree_real_T(sp, &result);
  emxFree_real_T(sp, &r4);
  emxFree_real_T(sp, &rightBottomBlock);
  emxFree_real_T(sp, &b_I);
  emxFree_creal_T(sp, &r3);
  emxFree_creal_T(sp, &y);
  emxFree_creal_T(sp, &r2);
  emxFree_creal_T(sp, &r1);
  emxFree_creal_T(sp, &r);
  emxFree_creal_T(sp, &Q);
  emxFree_real_T(sp, &lambda_inv);
  emxFree_creal_T(sp, &lambda);
  emxFree_real_T(sp, &z2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (dev_jacob_soc.c) */
