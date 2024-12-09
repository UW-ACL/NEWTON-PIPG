/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_jacob_ball.c
 *
 * Code generation for function 'dev_jacob_ball'
 *
 */

/* Include files */
#include "dev_jacob_ball.h"
#include "abs.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_emxutil.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "diag.h"
#include "eig.h"
#include "eye.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "blas.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <stddef.h>

/* Variable Definitions */
static emlrtRSInfo td_emlrtRSI = {
    3,                /* lineNo */
    "dev_jacob_ball", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pathName */
};

static emlrtRSInfo ud_emlrtRSI = {
    8,                /* lineNo */
    "dev_jacob_ball", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pathName */
};

static emlrtRSInfo vd_emlrtRSI = {
    10,               /* lineNo */
    "dev_jacob_ball", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pathName */
};

static emlrtRSInfo wd_emlrtRSI = {
    11,               /* lineNo */
    "dev_jacob_ball", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pathName */
};

static emlrtRSInfo xd_emlrtRSI = {
    12,               /* lineNo */
    "dev_jacob_ball", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pathName */
};

static emlrtRSInfo yd_emlrtRSI = {
    13,               /* lineNo */
    "dev_jacob_ball", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pathName */
};

static emlrtECInfo ob_emlrtECI = {
    2,                /* nDims */
    15,               /* lineNo */
    18,               /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtECInfo pb_emlrtECI = {
    2,                /* nDims */
    14,               /* lineNo */
    18,               /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtECInfo qb_emlrtECI = {
    1,                /* nDims */
    13,               /* lineNo */
    31,               /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtECInfo rb_emlrtECI = {
    1,                /* nDims */
    13,               /* lineNo */
    42,               /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtECInfo sb_emlrtECI = {
    1,                /* nDims */
    12,               /* lineNo */
    40,               /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtECInfo tb_emlrtECI = {
    1,                /* nDims */
    12,               /* lineNo */
    51,               /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtECInfo ub_emlrtECI = {
    2,                /* nDims */
    8,                /* lineNo */
    9,                /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtECInfo vb_emlrtECI = {
    1,                /* nDims */
    8,                /* lineNo */
    9,                /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtRTEInfo bg_emlrtRTEI = {
    3,                /* lineNo */
    19,               /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtRTEInfo cg_emlrtRTEI = {
    5,                /* lineNo */
    5,                /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtRTEInfo dg_emlrtRTEI = {
    8,                /* lineNo */
    35,               /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtRTEInfo fg_emlrtRTEI = {
    10,               /* lineNo */
    6,                /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtRTEInfo gg_emlrtRTEI = {
    10,               /* lineNo */
    9,                /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtRTEInfo hg_emlrtRTEI = {
    12,               /* lineNo */
    51,               /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtRTEInfo ig_emlrtRTEI = {
    12,               /* lineNo */
    40,               /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtRTEInfo jg_emlrtRTEI = {
    14,               /* lineNo */
    5,                /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtRTEInfo kg_emlrtRTEI = {
    15,               /* lineNo */
    5,                /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtRTEInfo lg_emlrtRTEI = {
    11,               /* lineNo */
    5,                /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtRTEInfo mg_emlrtRTEI = {
    12,               /* lineNo */
    5,                /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtRTEInfo ng_emlrtRTEI = {
    13,               /* lineNo */
    5,                /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtRTEInfo og_emlrtRTEI = {
    1,                /* lineNo */
    27,               /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtRTEInfo pg_emlrtRTEI = {
    8,                /* lineNo */
    9,                /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtRTEInfo qg_emlrtRTEI = {
    8,                /* lineNo */
    17,               /* colNo */
    "dev_jacob_ball", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pName */
};

static emlrtRSInfo wi_emlrtRSI = {
    15,               /* lineNo */
    "dev_jacob_ball", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pathName */
};

static emlrtRSInfo xi_emlrtRSI = {
    14,               /* lineNo */
    "dev_jacob_ball", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" /* pathName */
};

/* Function Declarations */
static void binary_expand_op_27(const emlrtStack *sp, const emlrtRSInfo in1,
                                const emxArray_real_T *in2,
                                const emxArray_real_T *in3, real_T in4,
                                emxArray_creal_T *in5, emxArray_creal_T *in6);

/* Function Definitions */
static void binary_expand_op_27(const emlrtStack *sp, const emlrtRSInfo in1,
                                const emxArray_real_T *in2,
                                const emxArray_real_T *in3, real_T in4,
                                emxArray_creal_T *in5, emxArray_creal_T *in6)
{
  emlrtStack st;
  emxArray_real_T *b_in2;
  const real_T *in2_data;
  const real_T *in3_data;
  real_T *b_in2_data;
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
  st.prev = sp;
  st.tls = sp->tls;
  in3_data = in3->data;
  in2_data = in2->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in2, 2, &eg_emlrtRTEI);
  if (in3->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in3->size[0];
  }
  i = b_in2->size[0] * b_in2->size[1];
  b_in2->size[1] = loop_ub;
  if (in3->size[1] == 1) {
    b_loop_ub = in2->size[1];
  } else {
    b_loop_ub = in3->size[1];
  }
  b_in2->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, b_in2, i, &eg_emlrtRTEI);
  b_in2_data = b_in2->data;
  stride_0_0 = (in2->size[0] != 1);
  stride_0_1 = (in2->size[1] != 1);
  stride_1_0 = (in3->size[0] != 1);
  stride_1_1 = (in3->size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      b_in2_data[i1 + b_in2->size[1] * i] =
          (in2_data[aux_0_1 + in2->size[1] * (i1 * stride_0_0)] -
           in3_data[aux_1_1 + in3->size[1] * (i1 * stride_1_0)]) *
          in4;
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  st.site = (emlrtRSInfo *)&in1;
  eig(&st, b_in2, in5, in6);
  emxFree_real_T(sp, &b_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void binary_expand_op_22(const emlrtStack *sp, emxArray_real_T *in1,
                         const emxArray_creal_T *in2,
                         const emxArray_real_T *in3)
{
  const creal_T *in2_data;
  const real_T *in3_data;
  real_T *in1_data;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T in3_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  in3_data = in3->data;
  in2_data = in2->data;
  in3_idx_0 = in3->size[0];
  if (in3_idx_0 == 1) {
    loop_ub = in2->size[1];
  } else {
    loop_ub = in3_idx_0;
  }
  i = in1->size[0] * in1->size[1];
  in1->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, in1, i, &kg_emlrtRTEI);
  b_loop_ub = in2->size[0];
  i = in1->size[0] * in1->size[1];
  in1->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, in1, i, &kg_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in2->size[1] != 1);
  in3_idx_0 = (in3_idx_0 != 1);
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1->size[1] * i] =
          in2_data[i1 * stride_0_0 + in2->size[1] * i].re *
          in3_data[i1 * in3_idx_0];
    }
  }
}

void binary_expand_op_24(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, const emxArray_creal_T *in4,
                         const emxArray_creal_T *in5)
{
  emlrtStack st;
  emxArray_creal_T *in3;
  const creal_T *in4_data;
  const creal_T *in5_data;
  creal_T *in3_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in5_data = in5->data;
  in4_data = in4->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_creal_T(sp, &in3, 1, &lf_emlrtRTEI);
  if (in5->size[0] == 1) {
    loop_ub = in4->size[0];
  } else {
    loop_ub = in5->size[0];
  }
  i = in3->size[0];
  in3->size[0] = loop_ub;
  emxEnsureCapacity_creal_T(sp, in3, i, &lf_emlrtRTEI);
  in3_data = in3->data;
  stride_0_0 = (in4->size[0] != 1);
  stride_1_0 = (in5->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    real_T bi;
    real_T br;
    int32_T b_br_tmp;
    int32_T br_tmp;
    br_tmp = i * stride_0_0;
    b_br_tmp = i * stride_1_0;
    br = (1.0 - in4_data[br_tmp].re) + in5_data[b_br_tmp].re;
    bi = (0.0 - in4_data[br_tmp].im) + in5_data[b_br_tmp].im;
    if (bi == 0.0) {
      in3_data[i].re = 1.0 / br;
      in3_data[i].im = 0.0;
    } else if (br == 0.0) {
      in3_data[i].re = 0.0;
      in3_data[i].im = -(1.0 / bi);
    } else {
      real_T bim;
      real_T brm;
      brm = muDoubleScalarAbs(br);
      bim = muDoubleScalarAbs(bi);
      if (brm > bim) {
        real_T s;
        s = bi / br;
        bim = br + s * bi;
        in3_data[i].re = (s * 0.0 + 1.0) / bim;
        in3_data[i].im = (0.0 - s) / bim;
      } else if (bim == brm) {
        real_T s;
        if (br > 0.0) {
          s = 0.5;
        } else {
          s = -0.5;
        }
        if (bi > 0.0) {
          bim = 0.5;
        } else {
          bim = -0.5;
        }
        in3_data[i].re = (s + 0.0 * bim) / brm;
        in3_data[i].im = (0.0 * s - bim) / brm;
      } else {
        real_T s;
        s = br / bi;
        bim = bi + s * br;
        in3_data[i].re = s / bim;
        in3_data[i].im = (s * 0.0 - 1.0) / bim;
      }
    }
  }
  st.site = (emlrtRSInfo *)&in2;
  c_abs(&st, in3, in1);
  emxFree_creal_T(sp, &in3);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void binary_expand_op_25(const emlrtStack *sp, emxArray_real_T *in1,
                         const emlrtRSInfo in2, const emxArray_creal_T *in3,
                         const emxArray_creal_T *in4)
{
  emlrtStack st;
  emxArray_creal_T *b_in3;
  const creal_T *in3_data;
  const creal_T *in4_data;
  creal_T *b_in3_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in4_data = in4->data;
  in3_data = in3->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_creal_T(sp, &b_in3, 1, &lf_emlrtRTEI);
  if (in4->size[0] == 1) {
    loop_ub = in3->size[0];
  } else {
    loop_ub = in4->size[0];
  }
  i = b_in3->size[0];
  b_in3->size[0] = loop_ub;
  emxEnsureCapacity_creal_T(sp, b_in3, i, &lf_emlrtRTEI);
  b_in3_data = b_in3->data;
  stride_0_0 = (in3->size[0] != 1);
  stride_1_0 = (in4->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    real_T ai;
    real_T ar;
    real_T bi;
    real_T br;
    int32_T ar_tmp;
    ar_tmp = i * stride_0_0;
    ar = in3_data[ar_tmp].re;
    ai = in3_data[ar_tmp].im;
    ar_tmp = i * stride_1_0;
    br = in4_data[ar_tmp].re;
    bi = in4_data[ar_tmp].im;
    if (bi == 0.0) {
      if (ai == 0.0) {
        b_in3_data[i].re = ar / br;
        b_in3_data[i].im = 0.0;
      } else if (ar == 0.0) {
        b_in3_data[i].re = 0.0;
        b_in3_data[i].im = ai / br;
      } else {
        b_in3_data[i].re = ar / br;
        b_in3_data[i].im = ai / br;
      }
    } else if (br == 0.0) {
      if (ar == 0.0) {
        b_in3_data[i].re = ai / bi;
        b_in3_data[i].im = 0.0;
      } else if (ai == 0.0) {
        b_in3_data[i].re = 0.0;
        b_in3_data[i].im = -(ar / bi);
      } else {
        b_in3_data[i].re = ai / bi;
        b_in3_data[i].im = -(ar / bi);
      }
    } else {
      real_T bim;
      real_T brm;
      brm = muDoubleScalarAbs(br);
      bim = muDoubleScalarAbs(bi);
      if (brm > bim) {
        real_T s;
        s = bi / br;
        bim = br + s * bi;
        b_in3_data[i].re = (ar + s * ai) / bim;
        b_in3_data[i].im = (ai - s * ar) / bim;
      } else if (bim == brm) {
        real_T s;
        if (br > 0.0) {
          s = 0.5;
        } else {
          s = -0.5;
        }
        if (bi > 0.0) {
          bim = 0.5;
        } else {
          bim = -0.5;
        }
        b_in3_data[i].re = (ar * s + ai * bim) / brm;
        b_in3_data[i].im = (ai * s - ar * bim) / brm;
      } else {
        real_T s;
        s = br / bi;
        bim = bi + s * br;
        b_in3_data[i].re = (s * ar + ai) / bim;
        b_in3_data[i].im = (s * ai - ar) / bim;
      }
    }
  }
  st.site = (emlrtRSInfo *)&in2;
  c_abs(&st, b_in3, in1);
  emxFree_creal_T(sp, &b_in3);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void binary_expand_op_26(const emlrtStack *sp, emxArray_creal_T *in1,
                         const emxArray_creal_T *in3,
                         const emxArray_creal_T *in4)
{
  const creal_T *in3_data;
  const creal_T *in4_data;
  creal_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in4_data = in4->data;
  in3_data = in3->data;
  if (in4->size[0] == 1) {
    loop_ub = in3->size[0];
  } else {
    loop_ub = in4->size[0];
  }
  i = in1->size[0];
  in1->size[0] = loop_ub;
  emxEnsureCapacity_creal_T(sp, in1, i, &ig_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in3->size[0] != 1);
  stride_1_0 = (in4->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    int32_T i1;
    int32_T i2;
    i1 = i * stride_0_0;
    i2 = i * stride_1_0;
    in1_data[i].re = (1.0 - in3_data[i1].re) + in4_data[i2].re;
    in1_data[i].im = (0.0 - in3_data[i1].im) + in4_data[i2].im;
  }
}

void dev_jacob_ball(const emlrtStack *sp, const emxArray_real_T *v, real_T R,
                    const emxArray_real_T *P, real_T alpha,
                    emxArray_real_T *Q_out, emxArray_real_T *Q_inv)
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_creal_T *Q;
  emxArray_creal_T *lambda;
  emxArray_creal_T *r2;
  emxArray_creal_T *r3;
  emxArray_creal_T *r5;
  emxArray_creal_T *r6;
  emxArray_creal_T *y;
  emxArray_real_T *b;
  emxArray_real_T *b_b;
  emxArray_real_T *lambda_between;
  emxArray_real_T *lambda_inv;
  emxArray_real_T *r1;
  creal_T *Q_data;
  creal_T *lambda_data;
  creal_T *r4;
  creal_T *y_data;
  const real_T *P_data;
  const real_T *v_data;
  real_T a;
  real_T *Q_out_data;
  real_T *lambda_between_data;
  real_T *lambda_inv_data;
  int32_T i;
  int32_T i1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  P_data = P->data;
  v_data = v->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (v->size[0] == 0) {
    a = 0.0;
  } else {
    n_t = (ptrdiff_t)v->size[0];
    incx_t = (ptrdiff_t)1;
    a = dnrm2(&n_t, (real_T *)&v_data[0], &incx_t);
  }
  emxInit_real_T(sp, &lambda_between, 1, &mg_emlrtRTEI);
  if (a <= R) {
    int32_T loop_ub;
    int32_T scalarLB;
    int32_T vectorUB;
    loop_ub = P->size[0];
    i = lambda_between->size[0];
    lambda_between->size[0] = P->size[0];
    emxEnsureCapacity_real_T(sp, lambda_between, i, &bg_emlrtRTEI);
    lambda_between_data = lambda_between->data;
    scalarLB = (P->size[0] / 2) << 1;
    vectorUB = scalarLB - 2;
    for (i = 0; i <= vectorUB; i += 2) {
      _mm_storeu_pd(
          &lambda_between_data[i],
          _mm_div_pd(_mm_set1_pd(1.0),
                     _mm_mul_pd(_mm_set1_pd(alpha), _mm_loadu_pd(&P_data[i]))));
    }
    for (i = scalarLB; i < loop_ub; i++) {
      lambda_between_data[i] = 1.0 / (alpha * P_data[i]);
    }
    st.site = &td_emlrtRSI;
    b_sqrt(&st, lambda_between);
    st.site = &td_emlrtRSI;
    diag(&st, lambda_between, Q_out);
    Q_out_data = Q_out->data;
    i = Q_inv->size[0] * Q_inv->size[1];
    Q_inv->size[1] = Q_out->size[1];
    Q_inv->size[0] = Q_out->size[0];
    emxEnsureCapacity_real_T(sp, Q_inv, i, &cg_emlrtRTEI);
    lambda_between_data = Q_inv->data;
    loop_ub = Q_out->size[1] * Q_out->size[0];
    for (i = 0; i < loop_ub; i++) {
      lambda_between_data[i] = Q_out_data[i];
    }
  } else {
    real_T b_a;
    real_T bi;
    real_T br;
    real_T brm;
    real_T re;
    int32_T loop_ub;
    int32_T scalarLB;
    int32_T v_idx_0_tmp;
    int32_T vectorUB;
    b_a = 1.0 / a;
    emxInit_real_T(sp, &b, 2, &qg_emlrtRTEI);
    st.site = &ud_emlrtRSI;
    eye(&st, v->size[0], b);
    lambda_inv_data = b->data;
    loop_ub = b->size[1] * b->size[0];
    scalarLB = (loop_ub / 2) << 1;
    vectorUB = scalarLB - 2;
    for (i = 0; i <= vectorUB; i += 2) {
      __m128d r;
      r = _mm_loadu_pd(&lambda_inv_data[i]);
      _mm_storeu_pd(&lambda_inv_data[i], _mm_mul_pd(_mm_set1_pd(b_a), r));
    }
    for (i = scalarLB; i < loop_ub; i++) {
      lambda_inv_data[i] *= b_a;
    }
    st.site = &ud_emlrtRSI;
    b_st.site = &gb_emlrtRSI;
    a = muDoubleScalarPower(a, 3.0);
    v_idx_0_tmp = v->size[0];
    emxInit_real_T(sp, &r1, 2, &pg_emlrtRTEI);
    i = r1->size[0] * r1->size[1];
    r1->size[1] = v->size[0];
    r1->size[0] = v->size[0];
    emxEnsureCapacity_real_T(sp, r1, i, &dg_emlrtRTEI);
    Q_out_data = r1->data;
    for (i = 0; i < v_idx_0_tmp; i++) {
      scalarLB = (v_idx_0_tmp / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i1 = 0; i1 <= vectorUB; i1 += 2) {
        _mm_storeu_pd(
            &Q_out_data[i1 + r1->size[1] * i],
            _mm_div_pd(_mm_add_pd(_mm_set1_pd(0.0),
                                  _mm_mul_pd(_mm_loadu_pd(&v_data[i1]),
                                             _mm_set1_pd(v_data[i]))),
                       _mm_set1_pd(a)));
      }
      for (i1 = scalarLB; i1 < v_idx_0_tmp; i1++) {
        Q_out_data[i1 + r1->size[1] * i] = v_data[i1] * v_data[i] / a;
      }
    }
    loop_ub = b->size[0];
    if ((b->size[0] != r1->size[0]) &&
        ((b->size[0] != 1) && (r1->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(b->size[0], r1->size[0], &vb_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    v_idx_0_tmp = b->size[1];
    if ((b->size[1] != r1->size[1]) &&
        ((b->size[1] != 1) && (r1->size[1] != 1))) {
      emlrtDimSizeImpxCheckR2021b(b->size[1], r1->size[1], &ub_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    /* maybe we can accelerate this */
    emxInit_creal_T(sp, &r2, 2, &fg_emlrtRTEI);
    emxInit_creal_T(sp, &r3, 2, &gg_emlrtRTEI);
    if ((b->size[0] == r1->size[0]) && (b->size[1] == r1->size[1])) {
      emxInit_real_T(sp, &b_b, 2, &eg_emlrtRTEI);
      i = b_b->size[0] * b_b->size[1];
      b_b->size[1] = b->size[0];
      b_b->size[0] = b->size[1];
      emxEnsureCapacity_real_T(sp, b_b, i, &eg_emlrtRTEI);
      lambda_between_data = b_b->data;
      for (i = 0; i < v_idx_0_tmp; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          lambda_between_data[i1 + b_b->size[1] * i] =
              (lambda_inv_data[i + b->size[1] * i1] -
               Q_out_data[i + r1->size[1] * i1]) *
              R;
        }
      }
      st.site = &vd_emlrtRSI;
      eig(&st, b_b, r2, r3);
      y_data = r3->data;
      r4 = r2->data;
      emxFree_real_T(sp, &b_b);
    } else {
      st.site = &vd_emlrtRSI;
      binary_expand_op_27(&st, vd_emlrtRSI, b, r1, R, r2, r3);
      y_data = r3->data;
      r4 = r2->data;
    }
    emxFree_real_T(sp, &b);
    emxFree_real_T(sp, &r1);
    emxInit_creal_T(sp, &Q, 2, &og_emlrtRTEI);
    loop_ub = r2->size[0];
    i = Q->size[0] * Q->size[1];
    Q->size[1] = r2->size[0];
    v_idx_0_tmp = r2->size[1];
    Q->size[0] = r2->size[1];
    emxEnsureCapacity_creal_T(sp, Q, i, &fg_emlrtRTEI);
    Q_data = Q->data;
    for (i = 0; i < v_idx_0_tmp; i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        Q_data[i1 + Q->size[1] * i] = r4[i + r2->size[1] * i1];
      }
    }
    /* J = QlambdaQ' */
    scalarLB = r3->size[0];
    i = r2->size[0] * r2->size[1];
    r2->size[1] = r3->size[0];
    vectorUB = r3->size[1];
    r2->size[0] = r3->size[1];
    emxEnsureCapacity_creal_T(sp, r2, i, &gg_emlrtRTEI);
    r4 = r2->data;
    for (i = 0; i < vectorUB; i++) {
      for (i1 = 0; i1 < scalarLB; i1++) {
        r4[i1 + r2->size[1] * i] = y_data[i + r3->size[1] * i1];
      }
    }
    emxFree_creal_T(sp, &r3);
    emxInit_creal_T(sp, &lambda, 1, &lg_emlrtRTEI);
    st.site = &wd_emlrtRSI;
    b_diag(&st, r2, lambda);
    lambda_data = lambda->data;
    emxFree_creal_T(sp, &r2);
    emxInit_creal_T(sp, &r5, 1, &hg_emlrtRTEI);
    scalarLB = lambda->size[0];
    i = r5->size[0];
    r5->size[0] = lambda->size[0];
    emxEnsureCapacity_creal_T(sp, r5, i, &hg_emlrtRTEI);
    y_data = r5->data;
    for (i = 0; i < scalarLB; i++) {
      y_data[i].re = alpha * lambda_data[i].re;
      y_data[i].im = alpha * lambda_data[i].im;
    }
    if ((lambda->size[0] != P->size[0]) &&
        ((lambda->size[0] != 1) && (P->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(lambda->size[0], P->size[0], &tb_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    emxInit_creal_T(sp, &r6, 1, &hg_emlrtRTEI);
    if (r5->size[0] == P->size[0]) {
      i = r6->size[0];
      r6->size[0] = lambda->size[0];
      emxEnsureCapacity_creal_T(sp, r6, i, &hg_emlrtRTEI);
      r4 = r6->data;
      for (i = 0; i < scalarLB; i++) {
        r4[i].re = P_data[i] * y_data[i].re;
        r4[i].im = P_data[i] * y_data[i].im;
      }
    } else {
      st.site = &xd_emlrtRSI;
      times(&st, r6, r5, P);
      r4 = r6->data;
    }
    if ((lambda->size[0] != r6->size[0]) &&
        ((lambda->size[0] != 1) && (r6->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(lambda->size[0], r6->size[0], &sb_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    st.site = &xd_emlrtRSI;
    emxInit_creal_T(&st, &y, 1, &ig_emlrtRTEI);
    if (lambda->size[0] == r6->size[0]) {
      i = y->size[0];
      y->size[0] = lambda->size[0];
      emxEnsureCapacity_creal_T(&st, y, i, &ig_emlrtRTEI);
      y_data = y->data;
      for (i = 0; i < scalarLB; i++) {
        y_data[i].re = (1.0 - lambda_data[i].re) + r4[i].re;
        y_data[i].im = (0.0 - lambda_data[i].im) + r4[i].im;
      }
    } else {
      b_st.site = &xd_emlrtRSI;
      binary_expand_op_26(&b_st, y, lambda, r6);
    }
    b_st.site = &gd_emlrtRSI;
    c_st.site = &hd_emlrtRSI;
    if ((lambda->size[0] != 1) && (y->size[0] != 1) &&
        (lambda->size[0] != y->size[0])) {
      emlrtErrorWithMessageIdR2018a(&c_st, &o_emlrtRTEI,
                                    "MATLAB:sizeDimensionsMustMatch",
                                    "MATLAB:sizeDimensionsMustMatch", 0);
    }
    if (lambda->size[0] == y->size[0]) {
      scalarLB = lambda->size[0];
      i = y->size[0];
      y->size[0] = lambda->size[0];
      emxEnsureCapacity_creal_T(sp, y, i, &lf_emlrtRTEI);
      y_data = y->data;
      for (i = 0; i < scalarLB; i++) {
        real_T ai;
        real_T ar;
        ar = lambda_data[i].re;
        ai = lambda_data[i].im;
        br = y_data[i].re;
        bi = y_data[i].im;
        if (bi == 0.0) {
          if (ai == 0.0) {
            re = ar / br;
            a = 0.0;
          } else if (ar == 0.0) {
            re = 0.0;
            a = ai / br;
          } else {
            re = ar / br;
            a = ai / br;
          }
        } else if (br == 0.0) {
          if (ar == 0.0) {
            re = ai / bi;
            a = 0.0;
          } else if (ai == 0.0) {
            re = 0.0;
            a = -(ar / bi);
          } else {
            re = ai / bi;
            a = -(ar / bi);
          }
        } else {
          brm = muDoubleScalarAbs(br);
          a = muDoubleScalarAbs(bi);
          if (brm > a) {
            b_a = bi / br;
            a = br + b_a * bi;
            re = (ar + b_a * ai) / a;
            a = (ai - b_a * ar) / a;
          } else if (a == brm) {
            if (br > 0.0) {
              b_a = 0.5;
            } else {
              b_a = -0.5;
            }
            if (bi > 0.0) {
              a = 0.5;
            } else {
              a = -0.5;
            }
            re = (ar * b_a + ai * a) / brm;
            a = (ai * b_a - ar * a) / brm;
          } else {
            b_a = br / bi;
            a = bi + b_a * br;
            re = (b_a * ar + ai) / a;
            a = (b_a * ai - ar) / a;
          }
        }
        y_data[i].re = re;
        y_data[i].im = a;
      }
      st.site = &xd_emlrtRSI;
      c_abs(&st, y, lambda_between);
    } else {
      st.site = &xd_emlrtRSI;
      binary_expand_op_25(&st, lambda_between, xd_emlrtRSI, lambda, y);
    }
    emxFree_creal_T(sp, &y);
    st.site = &xd_emlrtRSI;
    b_sqrt(&st, lambda_between);
    lambda_between_data = lambda_between->data;
    if ((r5->size[0] != P->size[0]) &&
        ((r5->size[0] != 1) && (P->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(r5->size[0], P->size[0], &rb_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    emxFree_creal_T(sp, &r5);
    scalarLB = lambda->size[0];
    if ((lambda->size[0] != r6->size[0]) &&
        ((lambda->size[0] != 1) && (r6->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(lambda->size[0], r6->size[0], &qb_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    emxInit_real_T(sp, &lambda_inv, 1, &ng_emlrtRTEI);
    if (lambda->size[0] == r6->size[0]) {
      for (i = 0; i < scalarLB; i++) {
        br = (1.0 - lambda_data[i].re) + r4[i].re;
        bi = (0.0 - lambda_data[i].im) + r4[i].im;
        if (bi == 0.0) {
          re = 1.0 / br;
          a = 0.0;
        } else if (br == 0.0) {
          re = 0.0;
          a = -(1.0 / bi);
        } else {
          brm = muDoubleScalarAbs(br);
          a = muDoubleScalarAbs(bi);
          if (brm > a) {
            b_a = bi / br;
            a = br + b_a * bi;
            re = (b_a * 0.0 + 1.0) / a;
            a = (0.0 - b_a) / a;
          } else if (a == brm) {
            if (br > 0.0) {
              b_a = 0.5;
            } else {
              b_a = -0.5;
            }
            if (bi > 0.0) {
              a = 0.5;
            } else {
              a = -0.5;
            }
            re = (b_a + 0.0 * a) / brm;
            a = (0.0 * b_a - a) / brm;
          } else {
            b_a = br / bi;
            a = bi + b_a * br;
            re = b_a / a;
            a = (b_a * 0.0 - 1.0) / a;
          }
        }
        lambda_data[i].re = re;
        lambda_data[i].im = a;
      }
      st.site = &yd_emlrtRSI;
      c_abs(&st, lambda, lambda_inv);
    } else {
      st.site = &yd_emlrtRSI;
      binary_expand_op_24(&st, lambda_inv, yd_emlrtRSI, lambda, r6);
    }
    emxFree_creal_T(sp, &r6);
    emxFree_creal_T(sp, &lambda);
    st.site = &yd_emlrtRSI;
    b_sqrt(&st, lambda_inv);
    lambda_inv_data = lambda_inv->data;
    if ((loop_ub != lambda_between->size[0]) &&
        ((loop_ub != 1) && (lambda_between->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(loop_ub, lambda_between->size[0],
                                  &pb_emlrtECI, (emlrtConstCTX)sp);
    }
    if (Q->size[1] == lambda_between->size[0]) {
      i = Q_out->size[0] * Q_out->size[1];
      Q_out->size[1] = loop_ub;
      Q_out->size[0] = v_idx_0_tmp;
      emxEnsureCapacity_real_T(sp, Q_out, i, &jg_emlrtRTEI);
      Q_out_data = Q_out->data;
      for (i = 0; i < v_idx_0_tmp; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Q_out_data[i1 + Q_out->size[1] * i] =
              Q_data[i1 + Q->size[1] * i].re * lambda_between_data[i1];
        }
      }
    } else {
      st.site = &xi_emlrtRSI;
      binary_expand_op_22(&st, Q_out, Q, lambda_between);
    }
    /* Q.* v' */
    loop_ub = Q->size[1];
    if ((Q->size[1] != lambda_inv->size[0]) &&
        ((Q->size[1] != 1) && (lambda_inv->size[0] != 1))) {
      emlrtDimSizeImpxCheckR2021b(Q->size[1], lambda_inv->size[0], &ob_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    if (Q->size[1] == lambda_inv->size[0]) {
      i = Q_inv->size[0] * Q_inv->size[1];
      Q_inv->size[1] = Q->size[1];
      v_idx_0_tmp = Q->size[0];
      Q_inv->size[0] = Q->size[0];
      emxEnsureCapacity_real_T(sp, Q_inv, i, &kg_emlrtRTEI);
      lambda_between_data = Q_inv->data;
      for (i = 0; i < v_idx_0_tmp; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          lambda_between_data[i1 + Q_inv->size[1] * i] =
              Q_data[i1 + Q->size[1] * i].re * lambda_inv_data[i1];
        }
      }
    } else {
      st.site = &wi_emlrtRSI;
      binary_expand_op_22(&st, Q_inv, Q, lambda_inv);
    }
    emxFree_creal_T(sp, &Q);
    emxFree_real_T(sp, &lambda_inv);
    /* check the shape of lmbda_inv */
  }
  emxFree_real_T(sp, &lambda_between);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void times(const emlrtStack *sp, emxArray_creal_T *in1,
           const emxArray_creal_T *in2, const emxArray_real_T *in3)
{
  const creal_T *in2_data;
  creal_T *in1_data;
  const real_T *in3_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in3_data = in3->data;
  in2_data = in2->data;
  if (in3->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in3->size[0];
  }
  i = in1->size[0];
  in1->size[0] = loop_ub;
  emxEnsureCapacity_creal_T(sp, in1, i, &hg_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in3->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    real_T d;
    int32_T i1;
    d = in3_data[i * stride_1_0];
    i1 = i * stride_0_0;
    in1_data[i].re = d * in2_data[i1].re;
    in1_data[i].im = d * in2_data[i1].im;
  }
}

/* End of code generation (dev_jacob_ball.c) */
