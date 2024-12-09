/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_newtonpipg_pcg_g.c
 *
 * Code generation for function 'dev_newtonpipg_pcg_g'
 *
 */

/* Include files */
#include "dev_newtonpipg_pcg_g.h"
#include "dev_HZ_g.h"
#include "dev_HtZ_g.h"
#include "dev_g_PCG_newton_pipg_update.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_emxutil.h"
#include "dev_newtonpipg_pcg_g_mexutil.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "dev_pcg_update.h"
#include "dev_xpipg_onestep_g.h"
#include "mpower.h"
#include "norm.h"
#include "rt_nonfinite.h"
#include "tic.h"
#include "toc.h"
#include "blas.h"
#include "emlrt.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/* Variable Definitions */
static emlrtRTEInfo emlrtRTEI = {
    70,                     /* lineNo */
    9,                      /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo b_emlrtRTEI = {
    91,                     /* lineNo */
    13,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo c_emlrtRTEI = {
    98,                     /* lineNo */
    16,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRSInfo emlrtRSI = {
    37,                     /* lineNo */
    "dev_newtonpipg_pcg_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pathName */
};

static emlrtRSInfo b_emlrtRSI = {
    44,                     /* lineNo */
    "dev_newtonpipg_pcg_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pathName */
};

static emlrtRSInfo c_emlrtRSI = {
    45,                     /* lineNo */
    "dev_newtonpipg_pcg_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pathName */
};

static emlrtRSInfo d_emlrtRSI = {
    53,                     /* lineNo */
    "dev_newtonpipg_pcg_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pathName */
};

static emlrtRSInfo e_emlrtRSI = {
    67,                     /* lineNo */
    "dev_newtonpipg_pcg_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pathName */
};

static emlrtRSInfo f_emlrtRSI = {
    70,                     /* lineNo */
    "dev_newtonpipg_pcg_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pathName */
};

static emlrtRSInfo g_emlrtRSI = {
    87,                     /* lineNo */
    "dev_newtonpipg_pcg_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pathName */
};

static emlrtRSInfo h_emlrtRSI = {
    91,                     /* lineNo */
    "dev_newtonpipg_pcg_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pathName */
};

static emlrtRSInfo i_emlrtRSI = {
    94,                     /* lineNo */
    "dev_newtonpipg_pcg_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pathName */
};

static emlrtRSInfo j_emlrtRSI = {
    98,                     /* lineNo */
    "dev_newtonpipg_pcg_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pathName */
};

static emlrtRSInfo k_emlrtRSI = {
    101,                    /* lineNo */
    "dev_newtonpipg_pcg_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pathName */
};

static emlrtRSInfo l_emlrtRSI = {
    102,                    /* lineNo */
    "dev_newtonpipg_pcg_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pathName */
};

static emlrtRSInfo m_emlrtRSI = {
    105,                    /* lineNo */
    "dev_newtonpipg_pcg_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pathName */
};

static emlrtRSInfo n_emlrtRSI = {
    113,                    /* lineNo */
    "dev_newtonpipg_pcg_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pathName */
};

static emlrtRSInfo o_emlrtRSI = {
    118,                    /* lineNo */
    "dev_newtonpipg_pcg_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pathName */
};

static emlrtRSInfo p_emlrtRSI = {
    128,                    /* lineNo */
    "dev_newtonpipg_pcg_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pathName */
};

static emlrtRSInfo q_emlrtRSI = {
    149,                    /* lineNo */
    "dev_newtonpipg_pcg_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pathName */
};

static emlrtRSInfo r_emlrtRSI = {
    157,                    /* lineNo */
    "dev_newtonpipg_pcg_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pathName */
};

static emlrtRSInfo jc_emlrtRSI = {
    38,        /* lineNo */
    "fprintf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pathName
                                                                          */
};

static emlrtRSInfo yh_emlrtRSI = {
    35,        /* lineNo */
    "fprintf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pathName
                                                                          */
};

static emlrtMCInfo emlrtMCI = {
    66,        /* lineNo */
    18,        /* colNo */
    "fprintf", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pName
                                                                          */
};

static emlrtECInfo emlrtECI = {
    1,                      /* nDims */
    115,                    /* lineNo */
    29,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtBCInfo emlrtBCI = {
    1,                      /* iFirst */
    616,                    /* iLast */
    115,                    /* lineNo */
    45,                     /* colNo */
    "dzw",                  /* aName */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m", /* pName */
    0                                                 /* checkKind */
};

static emlrtDCInfo emlrtDCI = {
    115,                    /* lineNo */
    45,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m", /* pName */
    1                                                 /* checkKind */
};

static emlrtECInfo b_emlrtECI = {
    1,                      /* nDims */
    114,                    /* lineNo */
    28,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtBCInfo b_emlrtBCI = {
    1,                      /* iFirst */
    616,                    /* iLast */
    114,                    /* lineNo */
    44,                     /* colNo */
    "dzw",                  /* aName */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m", /* pName */
    0                                                 /* checkKind */
};

static emlrtDCInfo b_emlrtDCI = {
    114,                    /* lineNo */
    44,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m", /* pName */
    1                                                 /* checkKind */
};

static emlrtRTEInfo f_emlrtRTEI = {
    112,                    /* lineNo */
    23,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtECInfo c_emlrtECI = {
    1,                      /* nDims */
    78,                     /* lineNo */
    52,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtECInfo d_emlrtECI = {
    1,                      /* nDims */
    78,                     /* lineNo */
    13,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo g_emlrtRTEI = {
    66,                     /* lineNo */
    9,                      /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtDCInfo c_emlrtDCI = {
    15,                     /* lineNo */
    16,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m", /* pName */
    1                                                 /* checkKind */
};

static emlrtDCInfo d_emlrtDCI = {
    15,                     /* lineNo */
    16,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m", /* pName */
    4                                                 /* checkKind */
};

static emlrtDCInfo e_emlrtDCI = {
    16,                     /* lineNo */
    17,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m", /* pName */
    1                                                 /* checkKind */
};

static emlrtDCInfo f_emlrtDCI = {
    16,                     /* lineNo */
    17,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m", /* pName */
    4                                                 /* checkKind */
};

static emlrtDCInfo g_emlrtDCI = {
    58,                     /* lineNo */
    1,                      /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m", /* pName */
    1                                                 /* checkKind */
};

static emlrtDCInfo h_emlrtDCI = {
    59,                     /* lineNo */
    1,                      /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m", /* pName */
    1                                                 /* checkKind */
};

static emlrtRTEInfo bb_emlrtRTEI = {
    6,                      /* lineNo */
    1,                      /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo cb_emlrtRTEI = {
    21,                     /* lineNo */
    1,                      /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo db_emlrtRTEI = {
    44,                     /* lineNo */
    5,                      /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo eb_emlrtRTEI = {
    58,                     /* lineNo */
    1,                      /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo fb_emlrtRTEI = {
    59,                     /* lineNo */
    1,                      /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo gb_emlrtRTEI = {
    67,                     /* lineNo */
    6,                      /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo hb_emlrtRTEI = {
    67,                     /* lineNo */
    11,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo ib_emlrtRTEI = {
    73,                     /* lineNo */
    9,                      /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo jb_emlrtRTEI = {
    74,                     /* lineNo */
    9,                      /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo kb_emlrtRTEI = {
    81,                     /* lineNo */
    9,                      /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo lb_emlrtRTEI = {
    82,                     /* lineNo */
    9,                      /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo mb_emlrtRTEI = {
    143,                    /* lineNo */
    5,                      /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo nb_emlrtRTEI = {
    144,                    /* lineNo */
    5,                      /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo ob_emlrtRTEI = {
    149,                    /* lineNo */
    10,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo pb_emlrtRTEI = {
    109,                    /* lineNo */
    9,                      /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo qb_emlrtRTEI = {
    149,                    /* lineNo */
    14,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo rb_emlrtRTEI = {
    110,                    /* lineNo */
    9,                      /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo sb_emlrtRTEI = {
    132,                    /* lineNo */
    13,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo tb_emlrtRTEI = {
    133,                    /* lineNo */
    13,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo ub_emlrtRTEI = {
    114,                    /* lineNo */
    28,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo vb_emlrtRTEI = {
    118,                    /* lineNo */
    14,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo wb_emlrtRTEI = {
    118,                    /* lineNo */
    24,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRTEInfo xb_emlrtRTEI = {
    115,                    /* lineNo */
    29,                     /* colNo */
    "dev_newtonpipg_pcg_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pcg_newton\\dev_newtonpipg_pcg_g.m" /* pName */
};

static emlrtRSInfo qi_emlrtRSI = {
    66,        /* lineNo */
    "fprintf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pathName
                                                                          */
};

static emlrtRSInfo ri_emlrtRSI = {
    68,        /* lineNo */
    "fprintf", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" /* pathName
                                                                          */
};

/* Function Declarations */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[7]);

static const mxArray *b_feval(const emlrtStack *sp, const mxArray *m1,
                              const mxArray *m2, const mxArray *m3,
                              const mxArray *m4, emlrtMCInfo *location);

static void binary_expand_op(
    const emlrtStack *sp, const emlrtRSInfo in1, const struct1_T *in2,
    const real_T in3_data[], const int32_T *in3_size, const real_T in4_data[],
    const int32_T *in4_size, real_T in5, real_T in6, real_T in7,
    const real_T in8[326], const real_T in9[3190], const real_T in10[326],
    const real_T in11[290], real_T in12, real_T in13, real_T in14,
    const real_T in15[660], const real_T in16[660], const real_T in17[290],
    real_T in18[326], real_T in19[290], real_T in20[326], real_T in21[290],
    real_T in22[616], real_T in23[326], real_T in24[290]);

static const mxArray *c_emlrt_marshallOut(const int32_T u);

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[21]);

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[60]);

static const mxArray *e_feval(const emlrtStack *sp, const mxArray *m1,
                              const mxArray *m2, const mxArray *m3,
                              emlrtMCInfo *location);

static const mxArray *emlrt_marshallOut(const real_T u);

static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[30]);

static const mxArray *f_feval(const emlrtStack *sp, const mxArray *m1,
                              const mxArray *m2, const mxArray *m3,
                              const mxArray *m4, const mxArray *m5,
                              const mxArray *m6, emlrtMCInfo *location);

static const mxArray *feval(const emlrtStack *sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, const mxArray *m5,
                            emlrtMCInfo *location);

/* Function Definitions */
static const mxArray *b_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[7])
{
  static const int32_T iv[2] = {1, 7};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 7, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *b_feval(const emlrtStack *sp, const mxArray *m1,
                              const mxArray *m2, const mxArray *m3,
                              const mxArray *m4, emlrtMCInfo *location)
{
  const mxArray *pArrays[4];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 4, &pArrays[0],
                               "feval", true, location);
}

static void binary_expand_op(
    const emlrtStack *sp, const emlrtRSInfo in1, const struct1_T *in2,
    const real_T in3_data[], const int32_T *in3_size, const real_T in4_data[],
    const int32_T *in4_size, real_T in5, real_T in6, real_T in7,
    const real_T in8[326], const real_T in9[3190], const real_T in10[326],
    const real_T in11[290], real_T in12, real_T in13, real_T in14,
    const real_T in15[660], const real_T in16[660], const real_T in17[290],
    real_T in18[326], real_T in19[290], real_T in20[326], real_T in21[290],
    real_T in22[616], real_T in23[326], real_T in24[290])
{
  emlrtStack st;
  emxArray_real_T *b_in2;
  emxArray_real_T *c_in2;
  real_T *in2_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in2, 1, &ub_emlrtRTEI);
  if (*in3_size == 1) {
    loop_ub = in2->xi->size[0];
  } else {
    loop_ub = *in3_size;
  }
  i = b_in2->size[0];
  b_in2->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_in2, i, &ub_emlrtRTEI);
  in2_data = b_in2->data;
  stride_0_0 = (in2->xi->size[0] != 1);
  stride_1_0 = (*in3_size != 1);
  for (i = 0; i < loop_ub; i++) {
    in2_data[i] = in2->xi->data[i * stride_0_0] + in3_data[i * stride_1_0];
  }
  emxInit_real_T(sp, &c_in2, 1, &xb_emlrtRTEI);
  if (*in4_size == 1) {
    loop_ub = in2->eta->size[0];
  } else {
    loop_ub = *in4_size;
  }
  i = c_in2->size[0];
  c_in2->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, c_in2, i, &xb_emlrtRTEI);
  in2_data = c_in2->data;
  stride_0_0 = (in2->eta->size[0] != 1);
  stride_1_0 = (*in4_size != 1);
  for (i = 0; i < loop_ub; i++) {
    in2_data[i] = in2->eta->data[i * stride_0_0] + in4_data[i * stride_1_0];
  }
  st.site = (emlrtRSInfo *)&in1;
  dev_xpipg_onestep_g(&st, b_in2, c_in2, in5, in6, in7, in8, in9, in10, in11,
                      in12, in13, in14, in13, in15, in16, in17, in18, in19,
                      in20, in21, in22, in23, in24);
  emxFree_real_T(sp, &c_in2);
  emxFree_real_T(sp, &b_in2);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static const mxArray *c_emlrt_marshallOut(const int32_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = u;
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *d_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[21])
{
  static const int32_T iv[2] = {1, 21};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 21, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *e_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[60])
{
  static const int32_T iv[2] = {1, 60};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 60, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *e_feval(const emlrtStack *sp, const mxArray *m1,
                              const mxArray *m2, const mxArray *m3,
                              emlrtMCInfo *location)
{
  const mxArray *pArrays[3];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 3, &pArrays[0],
                               "feval", true, location);
}

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *f_emlrt_marshallOut(const emlrtStack *sp,
                                          const char_T u[30])
{
  static const int32_T iv[2] = {1, 30};
  const mxArray *m;
  const mxArray *y;
  y = NULL;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)sp, 30, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *f_feval(const emlrtStack *sp, const mxArray *m1,
                              const mxArray *m2, const mxArray *m3,
                              const mxArray *m4, const mxArray *m5,
                              const mxArray *m6, emlrtMCInfo *location)
{
  const mxArray *pArrays[6];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  pArrays[4] = m5;
  pArrays[5] = m6;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 6, &pArrays[0],
                               "feval", true, location);
}

static const mxArray *feval(const emlrtStack *sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, const mxArray *m5,
                            emlrtMCInfo *location)
{
  const mxArray *pArrays[5];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  pArrays[4] = m5;
  return emlrtCallMATLABR2012b((emlrtConstCTX)sp, 1, &m, 5, &pArrays[0],
                               "feval", true, location);
}

void dev_newtonpipg_pcg_g(
    dev_newtonpipg_pcg_gStackData *SD, const emlrtStack *sp,
    const real_T P[326], const real_T A[3190], const real_T q[326],
    const real_T g[290], real_T N, real_T nx, real_T nu, real_T nineq,
    const real_T proj_index_all[660], const real_T proj_coefficient_all[660],
    const real_T cone_k_polar[290], const real_T z_1[326], real_T lam,
    real_T rho, real_T omg, const struct0_T *newton_coeff, real_T maxit,
    real_T tol, real_T pertub, boolean_T display, struct1_T *out)
{
  static const int32_T iv[2] = {1, 66};
  static const int32_T iv1[2] = {1, 25};
  static const char_T u[66] = {
      't', 'h', 'i', 's', ' ', 'i', 's', ' ', 't',  'h', 'e', ' ', '%', 'd',
      ' ', 'i', 'n', 't', 'e', 'r', 'a', 't', 'i',  'o', 'n', ' ', 'f', 'o',
      'r', ' ', 'v', 'e', 'c', 'n', 'e', 'w', 't',  'o', 'n', ',', ' ', 't',
      'h', 'e', ' ', 'r', 'e', 's', 'i', 'd', 'u',  'a', 'l', ' ', 'n', 'o',
      'r', 'm', ' ', 'i', 's', ' ', '%', 'e', '\\', 'n'};
  static const char_T cv2[60] = {
      'P', 'C', 'G', ' ', 'f', 'i', 'n', 'i', 'h', 's', 'e',  'd',
      ' ', 'w', 'i', 't', 'h', ' ', 'p', 'c', 'g', '_', 'f',  'l',
      'a', 'g', ' ', '=', ' ', '%', 'd', ',', ' ', 'i', 't',  'e',
      'r', ' ', '=', ' ', '%', 'd', ',', ' ', 'a', 'c', 'c',  'u',
      'r', 'a', 'c', 'y', ' ', '=', ' ', '%', 'e', ' ', '\\', 'n'};
  static const char_T cv3[30] = {'t', 'h', 'e', ' ', 'n',  'e', 'w', 't',
                                 'o', 'n', ' ', 'r', 'e',  'd', 'u', 'c',
                                 'e', 'm', 'e', 'n', 't',  ' ', 'i', 's',
                                 ' ', '%', 'f', ' ', '\\', 'n'};
  static const char_T b_u[25] = {'t', 'h', 'e', ' ', 'c', 'u',  'r', 'r', 'e',
                                 'n', 't', ' ', 'w', 'a', 'i',  't', ' ', 'i',
                                 's', ' ', '%', 'd', ' ', '\\', 'n'};
  static const char_T cv1[21] = {'N', 'e', 'w', 't', 'o', 'n',  '_',
                                 's', 't', 'e', 'p', ' ', 'i',  's',
                                 ' ', 'd', 'o', 'n', 'e', '\\', 'n'};
  static const char_T b_cv[7] = {'f', 'p', 'r', 'i', 'n', 't', 'f'};
  __m128d r;
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emlrtTimespec savedTime;
  emxArray_real_T *J_affine_D_old;
  emxArray_real_T *J_k_polar_old;
  emxArray_real_T *b_etan;
  emxArray_real_T *etanewton;
  emxArray_real_T *xin;
  emxArray_real_T *xinewton;
  const mxArray *b_y;
  const mxArray *m;
  const mxArray *y;
  real_T R[616];
  real_T Rn[616];
  real_T b_R[616];
  real_T dzw[616];
  real_T tmp_data[616];
  real_T etan[290];
  real_T alpha;
  real_T beta;
  real_T linsearch_amount;
  real_T nH_c;
  real_T nH_r;
  real_T newtonwait_factor;
  real_T newtonwaitexp;
  real_T nz;
  real_T pcg_flag;
  real_T sig1;
  real_T sig2;
  real_T temp;
  real_T *J_affine_D_old_data;
  real_T *J_k_polar_old_data;
  real_T *etan_data;
  real_T *etanewton_data;
  real_T *xin_data;
  real_T *xinewton_data;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T kk_indx;
  int32_T line_search_flag;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T scalarLB;
  int32_T tmp_size;
  int32_T vectorUB;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /*  check newton_coeff's definition.  */
  /*  Set up */
  i = out->xi->size[0];
  out->xi->size[0] = 326;
  emxEnsureCapacity_real_T(sp, out->xi, i, &bb_emlrtRTEI);
  for (i = 0; i < 326; i++) {
    out->xi->data[i] = z_1[i];
  }
  /* weird bug */
  nz = (nx * (N - 1.0) + nx) + nu * (N - 1.0);
  nH_r = (nx + nineq) * N;
  /* #rows of H. We have N grid points */
  nH_c = (nx + nu) * (N - 1.0) + nx;
  /* #cols of H */
  /*  the amount of equalities */
  memset(&SD->f1.L[0], 0, 5800U * sizeof(real_T));
  /*  Output */
  out->converge = true;
  if (!(nH_c >= 0.0)) {
    emlrtNonNegativeCheckR2012b(nH_c, &d_emlrtDCI, (emlrtConstCTX)sp);
  }
  i = (int32_T)muDoubleScalarFloor(nH_c);
  if (nH_c != i) {
    emlrtIntegerCheckR2012b(nH_c, &c_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (!(nH_r >= 0.0)) {
    emlrtNonNegativeCheckR2012b(nH_r, &f_emlrtDCI, (emlrtConstCTX)sp);
  }
  i1 = (int32_T)muDoubleScalarFloor(nH_r);
  if (nH_r != i1) {
    emlrtIntegerCheckR2012b(nH_r, &e_emlrtDCI, (emlrtConstCTX)sp);
  }
  out->ntime = 0.0;
  out->pcgtime = 0.0;
  out->k = 0.0;
  line_search_flag = (int32_T)nH_r;
  kk_indx = out->eta->size[0];
  out->eta->size[0] = (int32_T)nH_r;
  emxEnsureCapacity_real_T(sp, out->eta, kk_indx, &cb_emlrtRTEI);
  for (kk_indx = 0; kk_indx < line_search_flag; kk_indx++) {
    out->eta->data[kk_indx] = 0.0;
  }
  /*  Setup constant for Newton_pipg */
  linsearch_amount = newton_coeff->linsearch_amount;
  /* depends on the cost of each Newton step versus norma steps */
  newtonwaitexp = newton_coeff->newtonwaitexp;
  /* avoid using newton for the third time in one region. */
  newtonwait_factor = newton_coeff->newtonwait_factor;
  st.site = &emlrtRSI;
  tic(&st, &savedTime);
  /*  Set up coef for pipg */
  sig1 = 100.1;
  /* not important constants */
  sig2 = 200.2;
  while (muDoubleScalarAbs(sig2 - sig1) / sig1 >= 0.005) {
    /* Power iterations */
    sig2 = sig1;
    st.site = &b_emlrtRSI;
    dev_HZ_g(&st, A, out->xi, nx, etan);
    kk_indx = out->eta->size[0];
    out->eta->size[0] = 290;
    emxEnsureCapacity_real_T(sp, out->eta, kk_indx, &db_emlrtRTEI);
    for (kk_indx = 0; kk_indx < 290; kk_indx++) {
      out->eta->data[kk_indx] = etan[kk_indx];
    }
    /* devec */
    st.site = &c_emlrtRSI;
    dev_HtZ_g(&st, A, out->eta, nx, out->xi);
    /* devec */
    if (out->xi->size[0] == 0) {
      sig1 = 0.0;
    } else {
      n_t = (ptrdiff_t)out->xi->size[0];
      incx_t = (ptrdiff_t)1;
      sig1 = dnrm2(&n_t, &out->xi->data[0], &incx_t);
    }
    loop_ub = out->xi->size[0];
    scalarLB = (out->xi->size[0] / 2) << 1;
    vectorUB = scalarLB - 2;
    for (kk_indx = 0; kk_indx <= vectorUB; kk_indx += 2) {
      r = _mm_loadu_pd(&out->xi->data[kk_indx]);
      _mm_storeu_pd(&out->xi->data[kk_indx], _mm_div_pd(r, _mm_set1_pd(sig1)));
    }
    for (kk_indx = scalarLB; kk_indx < loop_ub; kk_indx++) {
      out->xi->data[kk_indx] /= sig1;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  /*  find alpha beta */
  /*  Buffer the estimated spectral norm */
  sig1 *= 1.1;
  st.site = &d_emlrtRSI;
  b_st.site = &gb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  st.site = &d_emlrtRSI;
  sig1 = lam * lam + 4.0 * omg * sig1;
  b_st.site = &gb_emlrtRSI;
  c_st.site = &hb_emlrtRSI;
  if (sig1 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &e_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  alpha = 2.0 / (muDoubleScalarSqrt(sig1) + lam);
  beta = omg * alpha;
  /*  */
  emxInit_real_T(sp, &J_affine_D_old, 1, &eb_emlrtRTEI);
  if (nH_c != i) {
    emlrtIntegerCheckR2012b(nH_c, &g_emlrtDCI, (emlrtConstCTX)sp);
  }
  loop_ub_tmp = (int32_T)nH_c;
  kk_indx = J_affine_D_old->size[0];
  J_affine_D_old->size[0] = loop_ub_tmp;
  emxEnsureCapacity_real_T(sp, J_affine_D_old, kk_indx, &eb_emlrtRTEI);
  J_affine_D_old_data = J_affine_D_old->data;
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(nH_c, &g_emlrtDCI, (emlrtConstCTX)sp);
  }
  for (i = 0; i < loop_ub_tmp; i++) {
    J_affine_D_old_data[i] = 0.0;
  }
  emxInit_real_T(sp, &J_k_polar_old, 1, &fb_emlrtRTEI);
  if (nH_r != i1) {
    emlrtIntegerCheckR2012b(nH_r, &h_emlrtDCI, (emlrtConstCTX)sp);
  }
  i = J_k_polar_old->size[0];
  kk_indx = (int32_T)nH_r;
  J_k_polar_old->size[0] = kk_indx;
  emxEnsureCapacity_real_T(sp, J_k_polar_old, i, &fb_emlrtRTEI);
  J_k_polar_old_data = J_k_polar_old->data;
  if (kk_indx != i1) {
    emlrtIntegerCheckR2012b(nH_r, &h_emlrtDCI, (emlrtConstCTX)sp);
  }
  for (i = 0; i < line_search_flag; i++) {
    J_k_polar_old_data[i] = 0.0;
  }
  /* they should be vectors! */
  temp = 1.0;
  pcg_flag = 0.0;
  nH_c = 100.0;
  /* only for c-coder */
  /*  Main */
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, maxit, mxDOUBLE_CLASS, (int32_T)maxit,
                                &g_emlrtRTEI, (emlrtConstCTX)sp);
  k = 0;
  emxInit_real_T(sp, &xin, 1, &gb_emlrtRTEI);
  emxInit_real_T(sp, &b_etan, 1, &hb_emlrtRTEI);
  emxInit_real_T(sp, &xinewton, 1, &pb_emlrtRTEI);
  emxInit_real_T(sp, &etanewton, 1, &rb_emlrtRTEI);
  exitg1 = false;
  while ((!exitg1) && (k <= (int32_T)maxit - 1)) {
    real_T J_affine_D[326];
    real_T b_xin[326];
    real_T temp_prime[326];
    real_T J_k_polar[290];
    real_T a__1[290];
    boolean_T guard1;
    st.site = &e_emlrtRSI;
    dev_xpipg_onestep_g(&st, out->xi, out->eta, alpha, beta, rho, P, A, q, g, N,
                        nx, nu, nx, proj_index_all, proj_coefficient_all,
                        cone_k_polar, b_xin, etan, J_affine_D, J_k_polar, R,
                        temp_prime, a__1);
    i = xin->size[0];
    xin->size[0] = 326;
    emxEnsureCapacity_real_T(sp, xin, i, &gb_emlrtRTEI);
    xin_data = xin->data;
    for (i = 0; i < 326; i++) {
      xin_data[i] = b_xin[i];
    }
    i = b_etan->size[0];
    b_etan->size[0] = 290;
    emxEnsureCapacity_real_T(sp, b_etan, i, &hb_emlrtRTEI);
    etan_data = b_etan->data;
    for (i = 0; i < 290; i++) {
      etan_data[i] = etan[i];
    }
    if (display) {
      st.site = &f_emlrtRSI;
      b_st.site = &jc_emlrtRSI;
      y = NULL;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&b_st, 66, m, &u[0]);
      emlrtAssign(&y, m);
      n_t = (ptrdiff_t)616;
      incx_t = (ptrdiff_t)1;
      sig1 = dnrm2(&n_t, &R[0], &incx_t);
      if ((real_T)k + 1.0 < 2.147483648E+9) {
        i = k + 1;
      } else {
        i = MAX_int32_T;
      }
      c_st.site = &qi_emlrtRSI;
      sig1 = emlrt_marshallIn(
          &c_st,
          feval(&c_st, b_emlrt_marshallOut(&c_st, b_cv), emlrt_marshallOut(1.0),
                y, c_emlrt_marshallOut(i), emlrt_marshallOut(sig1), &emlrtMCI),
          "<output of feval>");
      emlrtDisplayR2012b(emlrt_marshallOut(sig1), "ans", &emlrtRTEI,
                         (emlrtCTX)sp);
    }
    if ((real_T)k + 1.0 == 1.0) {
      i = J_affine_D_old->size[0];
      J_affine_D_old->size[0] = 326;
      emxEnsureCapacity_real_T(sp, J_affine_D_old, i, &ib_emlrtRTEI);
      J_affine_D_old_data = J_affine_D_old->data;
      for (i = 0; i < 326; i++) {
        J_affine_D_old_data[i] = J_affine_D[i];
      }
      i = J_k_polar_old->size[0];
      J_k_polar_old->size[0] = 290;
      emxEnsureCapacity_real_T(sp, J_k_polar_old, i, &jb_emlrtRTEI);
      J_k_polar_old_data = J_k_polar_old->data;
      for (i = 0; i < 290; i++) {
        J_k_polar_old_data[i] = J_k_polar[i];
      }
      temp = 1.0;
    }
    if ((J_affine_D_old->size[0] != 326) && (J_affine_D_old->size[0] != 1)) {
      emlrtDimSizeImpxCheckR2021b(J_affine_D_old->size[0], 326, &d_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    loop_ub_tmp = (J_affine_D_old->size[0] != 1);
    for (i = 0; i < 326; i++) {
      b_xin[i] = J_affine_D_old_data[i * loop_ub_tmp] - J_affine_D[i];
    }
    guard1 = false;
    if (b_norm(b_xin) > 0.0) {
      guard1 = true;
    } else {
      if ((J_k_polar_old->size[0] != 290) && (J_k_polar_old->size[0] != 1)) {
        emlrtDimSizeImpxCheckR2021b(J_k_polar_old->size[0], 290, &c_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      loop_ub_tmp = (J_k_polar_old->size[0] != 1);
      for (i = 0; i < 290; i++) {
        etan[i] = J_k_polar_old_data[i * loop_ub_tmp] - J_k_polar[i];
      }
      if (c_norm(etan) > 0.0) {
        guard1 = true;
      }
    }
    if (guard1) {
      /* check the size of J_k_polar_old. */
      temp = (real_T)k + 1.0;
      i = J_affine_D_old->size[0];
      J_affine_D_old->size[0] = 326;
      emxEnsureCapacity_real_T(sp, J_affine_D_old, i, &kb_emlrtRTEI);
      J_affine_D_old_data = J_affine_D_old->data;
      for (i = 0; i < 326; i++) {
        J_affine_D_old_data[i] = J_affine_D[i];
      }
      i = J_k_polar_old->size[0];
      J_k_polar_old->size[0] = 290;
      emxEnsureCapacity_real_T(sp, J_k_polar_old, i, &lb_emlrtRTEI);
      J_k_polar_old_data = J_k_polar_old->data;
      for (i = 0; i < 290; i++) {
        J_k_polar_old_data[i] = J_k_polar[i];
      }
      newtonwait_factor = 0.0;
      /*  used to PCG tol */
    }
    sig1 = newton_coeff->newtonwaitlinear * newtonwait_factor;
    st.site = &g_emlrtRSI;
    if ((real_T)k + 1.0 >= (((newton_coeff->newtonactive + temp) + sig1) +
                            mpower(&st, newtonwaitexp, newtonwait_factor)) -
                               1.0) {
      real_T nR;
      boolean_T exitg2;
      n_t = (ptrdiff_t)616;
      incx_t = (ptrdiff_t)1;
      nR = dnrm2(&n_t, &R[0], &incx_t);
      temp = (real_T)k + 1.0;
      if (display) {
        st.site = &h_emlrtRSI;
        b_st.site = &h_emlrtRSI;
        sig1 = muDoubleScalarRound(
            (sig1 + mpower(&b_st, newtonwaitexp, newtonwait_factor)) - 1.0);
        if (sig1 < 2.147483648E+9) {
          if (sig1 >= -2.147483648E+9) {
            loop_ub_tmp = (int32_T)sig1;
          } else {
            loop_ub_tmp = MIN_int32_T;
          }
        } else if (sig1 >= 2.147483648E+9) {
          loop_ub_tmp = MAX_int32_T;
        } else {
          loop_ub_tmp = 0;
        }
        b_st.site = &jc_emlrtRSI;
        b_y = NULL;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&b_st, 25, m, &b_u[0]);
        emlrtAssign(&b_y, m);
        c_st.site = &qi_emlrtRSI;
        sig1 = emlrt_marshallIn(&c_st,
                                b_feval(&c_st, b_emlrt_marshallOut(&c_st, b_cv),
                                        emlrt_marshallOut(1.0), b_y,
                                        c_emlrt_marshallOut(loop_ub_tmp),
                                        &emlrtMCI),
                                "<output of feval>");
        emlrtDisplayR2012b(emlrt_marshallOut(sig1), "ans", &b_emlrtRTEI,
                           (emlrtCTX)sp);
      }
      if (pcg_flag == 0.0) {
        memcpy(&b_R[0], &R[0], 616U * sizeof(real_T));
        st.site = &i_emlrtRSI;
        dev_g_PCG_newton_pipg_update(SD, &st, A, P, nx, nu, nx, proj_index_all,
                                     proj_coefficient_all, J_k_polar,
                                     temp_prime, b_R, alpha, beta, rho,
                                     pertub * nR, dzw, SD->f1.L);
        /* maybe we need to robustify this and have a flag */
        out->ntime++;
        pcg_flag = 1.0;
        if (display) {
          st.site = &j_emlrtRSI;
          b_st.site = &yh_emlrtRSI;
          c_st.site = &qi_emlrtRSI;
          d_st.site = &ri_emlrtRSI;
          sig1 = emlrt_marshallIn(
              &c_st,
              e_feval(&c_st, b_emlrt_marshallOut(&c_st, b_cv),
                      emlrt_marshallOut(1.0), d_emlrt_marshallOut(&d_st, cv1),
                      &emlrtMCI),
              "<output of feval>");
          emlrtDisplayR2012b(emlrt_marshallOut(sig1), "ans", &c_emlrtRTEI,
                             (emlrtCTX)sp);
        }
      } else {
        st.site = &k_emlrtRSI;
        b_st.site = &gb_emlrtRSI;
        c_st.site = &hb_emlrtRSI;
        memcpy(&b_R[0], &R[0], 616U * sizeof(real_T));
        st.site = &l_emlrtRSI;
        pcg_flag = dev_pcg_update(
            &st, A, P, SD->f1.L, nx, nu, nx, proj_index_all,
            proj_coefficient_all, J_k_polar, temp_prime, b_R, alpha, beta, rho,
            pertub * nR, muDoubleScalarMin(newton_coeff->pcg_max_tol, 1.0),
            newton_coeff->pcg_max_iter, dzw, &sig2, &nH_r);
        out->pcgtime++;
        if (display) {
          st.site = &m_emlrtRSI;
          b_st.site = &jc_emlrtRSI;
          sig1 = muDoubleScalarRound(pcg_flag);
          if (sig1 < 2.147483648E+9) {
            if (sig1 >= -2.147483648E+9) {
              i = (int32_T)sig1;
            } else {
              i = MIN_int32_T;
            }
          } else if (sig1 >= 2.147483648E+9) {
            i = MAX_int32_T;
          } else {
            i = 0;
          }
          sig1 = muDoubleScalarRound(sig2);
          if (sig1 < 2.147483648E+9) {
            if (sig1 >= -2.147483648E+9) {
              i1 = (int32_T)sig1;
            } else {
              i1 = MIN_int32_T;
            }
          } else if (sig1 >= 2.147483648E+9) {
            i1 = MAX_int32_T;
          } else {
            i1 = 0;
          }
          c_st.site = &qi_emlrtRSI;
          d_st.site = &ri_emlrtRSI;
          emlrt_marshallIn(
              &c_st,
              f_feval(&c_st, b_emlrt_marshallOut(&c_st, b_cv),
                      emlrt_marshallOut(1.0), e_emlrt_marshallOut(&d_st, cv2),
                      c_emlrt_marshallOut(i), c_emlrt_marshallOut(i1),
                      emlrt_marshallOut(nH_r), &emlrtMCI),
              "<output of feval>");
        }
      }
      /* %%line search */
      loop_ub = out->xi->size[0];
      i = xinewton->size[0];
      xinewton->size[0] = out->xi->size[0];
      emxEnsureCapacity_real_T(sp, xinewton, i, &pb_emlrtRTEI);
      xinewton_data = xinewton->data;
      for (i = 0; i < loop_ub; i++) {
        xinewton_data[i] = 0.0;
      }
      loop_ub = out->eta->size[0];
      i = etanewton->size[0];
      etanewton->size[0] = out->eta->size[0];
      emxEnsureCapacity_real_T(sp, etanewton, i, &rb_emlrtRTEI);
      etanewton_data = etanewton->data;
      for (i = 0; i < loop_ub; i++) {
        etanewton_data[i] = 0.0;
      }
      line_search_flag = 0;
      emlrtForLoopVectorCheckR2021a(0.0, 1.0, linsearch_amount, mxDOUBLE_CLASS,
                                    (int32_T)(linsearch_amount + 1.0),
                                    &f_emlrtRTEI, (emlrtConstCTX)sp);
      kk_indx = 0;
      exitg2 = false;
      while ((!exitg2) && (kk_indx <= (int32_T)(linsearch_amount + 1.0) - 1)) {
        int32_T b_loop_ub;
        int32_T c_loop_ub;
        /*  ! The point is to include very small variable as the decrease
         * happens locally. */
        st.site = &n_emlrtRSI;
        sig1 = mpower(&st, newton_coeff->linesearch_step, -(real_T)kk_indx);
        if (nz < 1.0) {
          loop_ub = 0;
        } else {
          if (nz != (int32_T)muDoubleScalarFloor(nz)) {
            emlrtIntegerCheckR2012b(nz, &b_emlrtDCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)nz < 1) || ((int32_T)nz > 616)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)nz, 1, 616, &b_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          loop_ub = (int32_T)nz;
        }
        scalarLB = (loop_ub / 2) << 1;
        vectorUB = scalarLB - 2;
        for (i = 0; i <= vectorUB; i += 2) {
          r = _mm_loadu_pd(&dzw[i]);
          _mm_storeu_pd(&b_R[i], _mm_mul_pd(_mm_set1_pd(sig1), r));
        }
        for (i = scalarLB; i < loop_ub; i++) {
          b_R[i] = sig1 * dzw[i];
        }
        b_loop_ub = out->xi->size[0];
        if ((out->xi->size[0] != loop_ub) &&
            ((out->xi->size[0] != 1) && (loop_ub != 1))) {
          emlrtDimSizeImpxCheckR2021b(out->xi->size[0], loop_ub, &b_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if (nz + 1.0 > 616.0) {
          i = 1;
          i1 = 0;
        } else {
          if (nz + 1.0 != (int32_T)muDoubleScalarFloor(nz + 1.0)) {
            emlrtIntegerCheckR2012b(nz + 1.0, &emlrtDCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)(nz + 1.0) < 1) || ((int32_T)(nz + 1.0) > 616)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)(nz + 1.0), 1, 616,
                                          &emlrtBCI, (emlrtConstCTX)sp);
          }
          i = (int32_T)(nz + 1.0);
          i1 = 616;
        }
        c_loop_ub = i1 - i;
        tmp_size = c_loop_ub + 1;
        scalarLB = ((c_loop_ub + 1) / 2) << 1;
        vectorUB = scalarLB - 2;
        for (i1 = 0; i1 <= vectorUB; i1 += 2) {
          r = _mm_loadu_pd(&dzw[(i + i1) - 1]);
          _mm_storeu_pd(&tmp_data[i1], _mm_mul_pd(_mm_set1_pd(sig1), r));
        }
        for (i1 = scalarLB; i1 <= c_loop_ub; i1++) {
          tmp_data[i1] = sig1 * dzw[(i + i1) - 1];
        }
        loop_ub_tmp = out->eta->size[0];
        if ((out->eta->size[0] != c_loop_ub + 1) &&
            ((out->eta->size[0] != 1) && (c_loop_ub + 1 != 1))) {
          emlrtDimSizeImpxCheckR2021b(out->eta->size[0], c_loop_ub + 1,
                                      &emlrtECI, (emlrtConstCTX)sp);
        }
        /*  [xinewton, etanewton, ~, ~,~, Rn] = vec_xpipg_onestep( xinewton_old,
         * etanewton_old,alpha, beta,... */
        /*      rho,P,H,Ht,q, g,N, nx, nu, proj_index_all,
         * proj_coefficient_all,cone_k_polar);%checkthis */
        if ((out->xi->size[0] == loop_ub) &&
            (out->eta->size[0] == c_loop_ub + 1)) {
          __m128d r1;
          i = xinewton->size[0];
          xinewton->size[0] = out->xi->size[0];
          emxEnsureCapacity_real_T(sp, xinewton, i, &ub_emlrtRTEI);
          xinewton_data = xinewton->data;
          scalarLB = (out->xi->size[0] / 2) << 1;
          vectorUB = scalarLB - 2;
          for (i = 0; i <= vectorUB; i += 2) {
            r = _mm_loadu_pd(&out->xi->data[i]);
            r1 = _mm_loadu_pd(&b_R[i]);
            _mm_storeu_pd(&xinewton_data[i], _mm_add_pd(r, r1));
          }
          for (i = scalarLB; i < b_loop_ub; i++) {
            xinewton_data[i] = out->xi->data[i] + b_R[i];
          }
          i = etanewton->size[0];
          etanewton->size[0] = out->eta->size[0];
          emxEnsureCapacity_real_T(sp, etanewton, i, &xb_emlrtRTEI);
          etanewton_data = etanewton->data;
          scalarLB = (out->eta->size[0] / 2) << 1;
          vectorUB = scalarLB - 2;
          for (i = 0; i <= vectorUB; i += 2) {
            r = _mm_loadu_pd(&out->eta->data[i]);
            r1 = _mm_loadu_pd(&tmp_data[i]);
            _mm_storeu_pd(&etanewton_data[i], _mm_add_pd(r, r1));
          }
          for (i = scalarLB; i < loop_ub_tmp; i++) {
            etanewton_data[i] = out->eta->data[i] + tmp_data[i];
          }
          st.site = &o_emlrtRSI;
          dev_xpipg_onestep_g(&st, xinewton, etanewton, alpha, beta, rho, P, A,
                              q, g, N, nx, nu, nx, proj_index_all,
                              proj_coefficient_all, cone_k_polar, b_xin, etan,
                              J_affine_D, J_k_polar, Rn, temp_prime, a__1);
        } else {
          st.site = &o_emlrtRSI;
          binary_expand_op(&st, o_emlrtRSI, out, b_R, &loop_ub, tmp_data,
                           &tmp_size, alpha, beta, rho, P, A, q, g, N, nx, nu,
                           proj_index_all, proj_coefficient_all, cone_k_polar,
                           b_xin, etan, J_affine_D, J_k_polar, Rn, temp_prime,
                           a__1);
        }
        i = xinewton->size[0];
        xinewton->size[0] = 326;
        emxEnsureCapacity_real_T(sp, xinewton, i, &vb_emlrtRTEI);
        xinewton_data = xinewton->data;
        for (i = 0; i < 326; i++) {
          xinewton_data[i] = b_xin[i];
        }
        i = etanewton->size[0];
        etanewton->size[0] = 290;
        emxEnsureCapacity_real_T(sp, etanewton, i, &wb_emlrtRTEI);
        etanewton_data = etanewton->data;
        for (i = 0; i < 290; i++) {
          etanewton_data[i] = etan[i];
        }
        n_t = (ptrdiff_t)616;
        incx_t = (ptrdiff_t)1;
        nH_c = dnrm2(&n_t, &Rn[0], &incx_t);
        if (nH_c <= newton_coeff->newtonratio * nR) {
          line_search_flag = 1;
          exitg2 = true;
        } else {
          kk_indx++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
      }
      if (display) {
        st.site = &p_emlrtRSI;
        b_st.site = &jc_emlrtRSI;
        c_st.site = &qi_emlrtRSI;
        emlrt_marshallIn(&c_st,
                         b_feval(&c_st, b_emlrt_marshallOut(&c_st, b_cv),
                                 emlrt_marshallOut(1.0),
                                 f_emlrt_marshallOut(&c_st, cv3),
                                 emlrt_marshallOut(nH_c / nR), &emlrtMCI),
                         "<output of feval>");
      }
      if (line_search_flag == 1) {
        loop_ub = xinewton->size[0];
        i = xin->size[0];
        xin->size[0] = xinewton->size[0];
        emxEnsureCapacity_real_T(sp, xin, i, &sb_emlrtRTEI);
        xin_data = xin->data;
        for (i = 0; i < loop_ub; i++) {
          xin_data[i] = xinewton_data[i];
        }
        loop_ub = etanewton->size[0];
        i = b_etan->size[0];
        b_etan->size[0] = etanewton->size[0];
        emxEnsureCapacity_real_T(sp, b_etan, i, &tb_emlrtRTEI);
        etan_data = b_etan->data;
        for (i = 0; i < loop_ub; i++) {
          etan_data[i] = etanewton_data[i];
        }
        newtonwait_factor = 0.0;
      } else if (nH_c / nR > 2.0) {
        /* magic number Corresponding to case there are very closed to
         * insgularity and not providing any useful information */
        newtonwait_factor++;
      }
    }
    loop_ub = xin->size[0];
    i = out->xi->size[0];
    out->xi->size[0] = xin->size[0];
    emxEnsureCapacity_real_T(sp, out->xi, i, &mb_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      out->xi->data[i] = xin_data[i];
    }
    loop_ub = b_etan->size[0];
    i = out->eta->size[0];
    out->eta->size[0] = b_etan->size[0];
    emxEnsureCapacity_real_T(sp, out->eta, i, &nb_emlrtRTEI);
    for (i = 0; i < loop_ub; i++) {
      out->eta->data[i] = etan_data[i];
    }
    n_t = (ptrdiff_t)616;
    incx_t = (ptrdiff_t)1;
    sig1 = dnrm2(&n_t, &R[0], &incx_t);
    if (sig1 <= tol) {
      /*  [xi, eta,~, ~, ~,R] = vec_xpipg_onestep( xi, eta,alpha, beta,... */
      /*      rho,P,H,Ht,q, g,N, nx, nu, proj_index_all,
       * proj_coefficient_all,cone_k_polar); */
      st.site = &q_emlrtRSI;
      dev_xpipg_onestep_g(&st, xin, b_etan, alpha, beta, rho, P, A, q, g, N, nx,
                          nu, nx, proj_index_all, proj_coefficient_all,
                          cone_k_polar, b_xin, etan, J_affine_D, J_k_polar, R,
                          temp_prime, a__1);
      i = out->xi->size[0];
      out->xi->size[0] = 326;
      emxEnsureCapacity_real_T(sp, out->xi, i, &ob_emlrtRTEI);
      for (i = 0; i < 326; i++) {
        out->xi->data[i] = b_xin[i];
      }
      i = out->eta->size[0];
      out->eta->size[0] = 290;
      emxEnsureCapacity_real_T(sp, out->eta, i, &qb_emlrtRTEI);
      for (i = 0; i < 290; i++) {
        out->eta->data[i] = etan[i];
      }
      out->converge = true;
      out->k = (real_T)k + 1.0;
      exitg1 = true;
    } else {
      k++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  }
  emxFree_real_T(sp, &etanewton);
  emxFree_real_T(sp, &xinewton);
  emxFree_real_T(sp, &b_etan);
  emxFree_real_T(sp, &xin);
  emxFree_real_T(sp, &J_k_polar_old);
  emxFree_real_T(sp, &J_affine_D_old);
  st.site = &r_emlrtRSI;
  out->solve_time = toc(&st, &savedTime) * 1000.0;
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (dev_newtonpipg_pcg_g.c) */
