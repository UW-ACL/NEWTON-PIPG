//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonpipg_g_with_timer.cpp
//
// Code generation for function 'dev_newtonpipg_g_with_timer'
//

// Include files
#include "dev_newtonpipg_g_with_timer.h"
#include "dev_HZ_g.h"
#include "dev_HtZ_g.h"
#include "dev_g_newton_pipg_update_withtimer.h"
#include "dev_newtonpipg_g_with_timer_data.h"
#include "dev_newtonpipg_g_with_timer_mexutil.h"
#include "dev_newtonpipg_g_with_timer_types.h"
#include "dev_xpipg_onestep_g.h"
#include "mpower.h"
#include "norm.h"
#include "rt_nonfinite.h"
#include "tic.h"
#include "toc.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstdio>
#include <emmintrin.h>

// Variable Definitions
static emlrtRTEInfo emlrtRTEI{
    80,                            // lineNo
    9,                             // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo b_emlrtRTEI{
    99,                            // lineNo
    13,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRSInfo emlrtRSI{
    55,                            // lineNo
    "dev_newtonpipg_g_with_timer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    56,                            // lineNo
    "dev_newtonpipg_g_with_timer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    64,                            // lineNo
    "dev_newtonpipg_g_with_timer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    73,                            // lineNo
    "dev_newtonpipg_g_with_timer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    74,                            // lineNo
    "dev_newtonpipg_g_with_timer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    76,                            // lineNo
    "dev_newtonpipg_g_with_timer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    80,                            // lineNo
    "dev_newtonpipg_g_with_timer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    96,                            // lineNo
    "dev_newtonpipg_g_with_timer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    99,                            // lineNo
    "dev_newtonpipg_g_with_timer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pathName
};

static emlrtRSInfo j_emlrtRSI{
    103,                           // lineNo
    "dev_newtonpipg_g_with_timer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pathName
};

static emlrtRSInfo k_emlrtRSI{
    111,                           // lineNo
    "dev_newtonpipg_g_with_timer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    116,                           // lineNo
    "dev_newtonpipg_g_with_timer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pathName
};

static emlrtRSInfo m_emlrtRSI{
    126,                           // lineNo
    "dev_newtonpipg_g_with_timer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    144,                           // lineNo
    "dev_newtonpipg_g_with_timer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pathName
};

static emlrtRSInfo
    y_emlrtRSI{
        84,         // lineNo
        "fltpower", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" // pathName
    };

static emlrtRSInfo ab_emlrtRSI{
    47,      // lineNo
    "ixfun", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" // pathName
};

static emlrtRSInfo
    bb_emlrtRSI{
        142,                  // lineNo
        "scalar_float_power", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" // pathName
    };

static emlrtECInfo emlrtECI{
    1,                             // nDims
    113,                           // lineNo
    29,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtBCInfo emlrtBCI{
    1,                             // iFirst
    616,                           // iLast
    113,                           // lineNo
    45,                            // colNo
    "dzw",                         // aName
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m", // pName
    0                                                             // checkKind
};

static emlrtDCInfo emlrtDCI{
    113,                           // lineNo
    45,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m", // pName
    1                                                             // checkKind
};

static emlrtECInfo b_emlrtECI{
    1,                             // nDims
    112,                           // lineNo
    28,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtBCInfo b_emlrtBCI{
    1,                             // iFirst
    616,                           // iLast
    112,                           // lineNo
    44,                            // colNo
    "dzw",                         // aName
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m", // pName
    0                                                             // checkKind
};

static emlrtDCInfo b_emlrtDCI{
    112,                           // lineNo
    44,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m", // pName
    1                                                             // checkKind
};

static emlrtRTEInfo d_emlrtRTEI{
    110,                           // lineNo
    23,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtECInfo c_emlrtECI{
    1,                             // nDims
    88,                            // lineNo
    52,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtECInfo d_emlrtECI{
    1,                             // nDims
    88,                            // lineNo
    13,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo e_emlrtRTEI{
    72,                            // lineNo
    9,                             // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtDCInfo c_emlrtDCI{
    29,                            // lineNo
    16,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m", // pName
    1                                                             // checkKind
};

static emlrtDCInfo d_emlrtDCI{
    29,                            // lineNo
    16,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m", // pName
    4                                                             // checkKind
};

static emlrtDCInfo e_emlrtDCI{
    30,                            // lineNo
    17,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m", // pName
    1                                                             // checkKind
};

static emlrtDCInfo f_emlrtDCI{
    30,                            // lineNo
    17,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m", // pName
    4                                                             // checkKind
};

static emlrtDCInfo g_emlrtDCI{
    69,                            // lineNo
    1,                             // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m", // pName
    1                                                             // checkKind
};

static emlrtDCInfo h_emlrtDCI{
    70,                            // lineNo
    1,                             // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m", // pName
    1                                                             // checkKind
};

static emlrtRTEInfo bb_emlrtRTEI{
    21,                            // lineNo
    1,                             // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo cb_emlrtRTEI{
    34,                            // lineNo
    1,                             // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo db_emlrtRTEI{
    69,                            // lineNo
    1,                             // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo eb_emlrtRTEI{
    70,                            // lineNo
    1,                             // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo fb_emlrtRTEI{
    74,                            // lineNo
    6,                             // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo gb_emlrtRTEI{
    74,                            // lineNo
    11,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo hb_emlrtRTEI{
    83,                            // lineNo
    9,                             // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo ib_emlrtRTEI{
    84,                            // lineNo
    9,                             // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo jb_emlrtRTEI{
    91,                            // lineNo
    9,                             // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo kb_emlrtRTEI{
    92,                            // lineNo
    9,                             // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo lb_emlrtRTEI{
    107,                           // lineNo
    9,                             // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo mb_emlrtRTEI{
    108,                           // lineNo
    9,                             // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo nb_emlrtRTEI{
    112,                           // lineNo
    28,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo ob_emlrtRTEI{
    113,                           // lineNo
    29,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo pb_emlrtRTEI{
    116,                           // lineNo
    14,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo qb_emlrtRTEI{
    116,                           // lineNo
    24,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo rb_emlrtRTEI{
    130,                           // lineNo
    13,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo sb_emlrtRTEI{
    131,                           // lineNo
    13,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo tb_emlrtRTEI{
    138,                           // lineNo
    5,                             // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo ub_emlrtRTEI{
    139,                           // lineNo
    5,                             // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo vb_emlrtRTEI{
    144,                           // lineNo
    10,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo wb_emlrtRTEI{
    144,                           // lineNo
    14,                            // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

static emlrtRTEInfo xb_emlrtRTEI{
    55,                            // lineNo
    5,                             // colNo
    "dev_newtonpipg_g_with_timer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_newtonpipg_g_with_timer.m" // pName
};

// Function Declarations
static const mxArray *b_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[25]);

static void binary_expand_op(
    const emlrtStack &sp, const emlrtRSInfo in1, const struct1_T *in2,
    const real_T in3_data[], const int32_T &in3_size, const real_T in4_data[],
    const int32_T &in4_size, real_T in5, real_T in6, real_T in7,
    const real_T in8[326], const real_T in9[3190], const real_T in10[326],
    const real_T in11[290], real_T in12, real_T in13, real_T in14,
    const real_T in15[660], const real_T in16[660], const real_T in17[290],
    real_T in18[326], real_T in19[290], real_T in20[326], real_T in21[290],
    real_T in22[616], real_T in23[326], real_T in24[290]);

static const mxArray *c_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[66]);

static const mxArray *emlrt_marshallOut(const int32_T u);

static const mxArray *f_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[30]);

static const mxArray *feval(const emlrtStack &sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, const mxArray *m5,
                            emlrtMCInfo &location);

// Function Definitions
static const mxArray *b_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[25])
{
  static const int32_T iv[2]{1, 25};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 25, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void binary_expand_op(
    const emlrtStack &sp, const emlrtRSInfo in1, const struct1_T *in2,
    const real_T in3_data[], const int32_T &in3_size, const real_T in4_data[],
    const int32_T &in4_size, real_T in5, real_T in6, real_T in7,
    const real_T in8[326], const real_T in9[3190], const real_T in10[326],
    const real_T in11[290], real_T in12, real_T in13, real_T in14,
    const real_T in15[660], const real_T in16[660], const real_T in17[290],
    real_T in18[326], real_T in19[290], real_T in20[326], real_T in21[290],
    real_T in22[616], real_T in23[326], real_T in24[290])
{
  coder::array<real_T, 1U> b_in2;
  coder::array<real_T, 1U> c_in2;
  emlrtStack st;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in3_size == 1) {
    loop_ub = in2->xi.size(0);
  } else {
    loop_ub = in3_size;
  }
  b_in2.set_size(&nb_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2->xi.size(0) != 1);
  stride_1_0 = (in3_size != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in2[i] = in2->xi[i * stride_0_0] + in3_data[i * stride_1_0];
  }
  if (in4_size == 1) {
    loop_ub = in2->eta.size(0);
  } else {
    loop_ub = in4_size;
  }
  c_in2.set_size(&ob_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2->eta.size(0) != 1);
  stride_1_0 = (in4_size != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    c_in2[i] = in2->eta[i * stride_0_0] + in4_data[i * stride_1_0];
  }
  st.site = const_cast<emlrtRSInfo *>(&in1);
  dev_xpipg_onestep_g(st, b_in2, c_in2, in5, in6, in7, in8, in9, in10, in11,
                      in12, in13, in14, in13, in15, in16, in17, in18, in19,
                      in20, in21, in22, in23, in24);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static const mxArray *c_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[66])
{
  static const int32_T iv[2]{1, 66};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 66, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const int32_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *static_cast<int32_T *>(emlrtMxGetData(m)) = u;
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *f_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[30])
{
  static const int32_T iv[2]{1, 30};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 30, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *feval(const emlrtStack &sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, const mxArray *m5,
                            emlrtMCInfo &location)
{
  const mxArray *pArrays[5];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  pArrays[4] = m5;
  return emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 1, &m, 5, &pArrays[0],
                               "feval", true, &location);
}

void dev_newtonpipg_g_with_timer(
    c_dev_newtonpipg_g_with_timerSt *SD, const emlrtStack *sp,
    const real_T P[326], const real_T A[3190], const real_T q[326],
    const real_T g[290], real_T N, real_T nx, real_T nu, real_T nineq,
    const real_T proj_index_all[660], const real_T proj_coefficient_all[660],
    const real_T cone_k_polar[290], const real_T z_1[326], real_T lam,
    real_T rho, real_T omg, const struct0_T *newton_coeff, real_T maxit,
    real_T tol, real_T pertub, boolean_T display, struct1_T *out)
{
  static const char_T cv2[66]{
      't', 'h', 'i', 's', ' ', 'i', 's', ' ', 't',  'h', 'e', ' ', '%', 'd',
      ' ', 'i', 'n', 't', 'e', 'r', 'a', 't', 'i',  'o', 'n', ' ', 'f', 'o',
      'r', ' ', 'v', 'e', 'c', 'n', 'e', 'w', 't',  'o', 'n', ',', ' ', 't',
      'h', 'e', ' ', 'r', 'e', 's', 'i', 'd', 'u',  'a', 'l', ' ', 'n', 'o',
      'r', 'm', ' ', 'i', 's', ' ', '%', 'e', '\\', 'n'};
  static const char_T cv4[30]{'t', 'h', 'e', ' ', 'n',  'e', 'w', 't',
                              'o', 'n', ' ', 'r', 'e',  'd', 'u', 'c',
                              'e', 'm', 'e', 'n', 't',  ' ', 'i', 's',
                              ' ', '%', 'f', ' ', '\\', 'n'};
  static const char_T cv1[25]{'A', ' ', 'p', 'i', 'p', 'g',  ' ', 's', 't',
                              'e', 'p', ' ', 't', 'a', 'k',  'e', 's', ' ',
                              '%', 'f', ' ', 'm', 's', '\\', 'n'};
  static const char_T cv3[25]{'t', 'h', 'e', ' ', 'c', 'u',  'r', 'r', 'e',
                              'n', 't', ' ', 'w', 'a', 'i',  't', ' ', 'i',
                              's', ' ', '%', 'd', ' ', '\\', 'n'};
  static const char_T b_cv[7]{'f', 'p', 'r', 'i', 'n', 't', 'f'};
  __m128d r;
  emlrtProfilerSentinel profilerSentinel;
  coder::array<real_T, 1U> J_affine_D_old;
  coder::array<real_T, 1U> J_k_polar_old;
  coder::array<real_T, 1U> b_etan;
  coder::array<real_T, 1U> b_xin;
  coder::array<real_T, 1U> etanewton;
  coder::array<real_T, 1U> xinewton;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
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
  real_T newtonactive;
  real_T newtonwait_factor;
  real_T newtonwaitexp;
  real_T nz;
  real_T sig1;
  real_T sig2;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T line_search_flag;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T scalarLB;
  int32_T vectorUB;
  boolean_T exitg1;
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
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &b_st;
  g_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emlrtMEXProfilingFunctionEntryCPP((char_T *)c_dev_newtonpipg_g_with_timer_c,
                                    static_cast<boolean_T>(isMexOutdated),
                                    &profilerSentinel);
  // P: quadratic penalty, diagonal matrix
  // A: blocks that defines H. (ne + nineq)*(nx + nu)* (N-1)
  // q, g: dense vector in PIPG
  // N: #time grid points. 1:N are all states
  // nx, nu, nineq:# of state, control and inequalities
  // proj_$: projection coefficients, see data_transplant.
  // cone_k_polar: definition of cone_K_p. Diagonal
  // z1: initial condition, random's generated.
  // lam:norm of P; rho, omg: coefficients for Newtonpipg
  // maxit, tol:max # of iterations and convergence tolarence
  // perturb: avoid singularity for newton step. pertub * norm(R) is added to
  // the matrix diagonal
  // newtoncoeff:check the definition below
  // display controls whether we have print-outs
  //  Set up
  emlrtMEXProfilingStatement(2, static_cast<boolean_T>(isMexOutdated));
  out->xi.set_size(&bb_emlrtRTEI, sp, 326);
  for (i = 0; i < 326; i++) {
    out->xi[i] = z_1[i];
  }
  // weird bug
  emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
  nz = (nx * (N - 1.0) + nx) + nu * (N - 1.0);
  emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
  nH_r = (nx + nineq) * N;
  // #rows of H. We have N grid points
  emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
  nH_c = (nx + nu) * (N - 1.0) + nx;
  // #cols of H
  emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
  //  the amount of equalities
  //  Output
  emlrtMEXProfilingStatement(8, static_cast<boolean_T>(isMexOutdated));
  out->converge = true;
  emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
  if (!(nH_c >= 0.0)) {
    emlrtNonNegativeCheckR2012b(nH_c, &d_emlrtDCI, (emlrtConstCTX)sp);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(nH_c));
  if (nH_c != i) {
    emlrtIntegerCheckR2012b(nH_c, &c_emlrtDCI, (emlrtConstCTX)sp);
  }
  emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
  if (!(nH_r >= 0.0)) {
    emlrtNonNegativeCheckR2012b(nH_r, &f_emlrtDCI, (emlrtConstCTX)sp);
  }
  i1 = static_cast<int32_T>(muDoubleScalarFloor(nH_r));
  if (nH_r != i1) {
    emlrtIntegerCheckR2012b(nH_r, &e_emlrtDCI, (emlrtConstCTX)sp);
  }
  emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
  out->solve_time = rtInf;
  emlrtMEXProfilingStatement(12, static_cast<boolean_T>(isMexOutdated));
  out->ntime = 0.0;
  emlrtMEXProfilingStatement(13, static_cast<boolean_T>(isMexOutdated));
  out->k = 0.0;
  emlrtMEXProfilingStatement(14, static_cast<boolean_T>(isMexOutdated));
  line_search_flag = static_cast<int32_T>(nH_r);
  out->eta.set_size(&cb_emlrtRTEI, sp, line_search_flag);
  for (loop_ub_tmp = 0; loop_ub_tmp < line_search_flag; loop_ub_tmp++) {
    out->eta[loop_ub_tmp] = 0.0;
  }
  //  Setup constant for Newton_pipg
  emlrtMEXProfilingStatement(18, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingStatement(19, static_cast<boolean_T>(isMexOutdated));
  linsearch_amount = newton_coeff->linsearch_amount;
  // depends on the cost of each Newton step versus norma steps
  emlrtMEXProfilingStatement(20, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingStatement(21, static_cast<boolean_T>(isMexOutdated));
  newtonwaitexp = newton_coeff->newtonwaitexp;
  // avoid using newton for the third time in one region.
  emlrtMEXProfilingStatement(22, static_cast<boolean_T>(isMexOutdated));
  newtonwait_factor = newton_coeff->newtonwait_factor;
  emlrtMEXProfilingStatement(23, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingStatement(24, static_cast<boolean_T>(isMexOutdated));
  newtonactive = newton_coeff->newtonactive;
  //  Set up coef for pipg
  emlrtMEXProfilingStatement(25, static_cast<boolean_T>(isMexOutdated));
  sig1 = 100.1;
  // not important constants
  emlrtMEXProfilingStatement(26, static_cast<boolean_T>(isMexOutdated));
  sig2 = 200.2;
  emlrtMEXProfilingStatement(27, static_cast<boolean_T>(isMexOutdated));
  while (muDoubleScalarAbs(sig2 - sig1) / sig1 >= 0.005) {
    // Power iterations
    emlrtMEXProfilingStatement(28, static_cast<boolean_T>(isMexOutdated));
    sig2 = sig1;
    emlrtMEXProfilingStatement(29, static_cast<boolean_T>(isMexOutdated));
    st.site = &emlrtRSI;
    dev_HZ_g(st, A, out->xi, nx, etan);
    out->eta.set_size(&xb_emlrtRTEI, sp, 290);
    for (loop_ub_tmp = 0; loop_ub_tmp < 290; loop_ub_tmp++) {
      out->eta[loop_ub_tmp] = etan[loop_ub_tmp];
    }
    // devec
    emlrtMEXProfilingStatement(30, static_cast<boolean_T>(isMexOutdated));
    st.site = &b_emlrtRSI;
    dev_HtZ_g(st, A, out->eta, nx, out->xi);
    // devec
    emlrtMEXProfilingStatement(31, static_cast<boolean_T>(isMexOutdated));
    sig1 = coder::b_norm(out->xi);
    emlrtMEXProfilingStatement(32, static_cast<boolean_T>(isMexOutdated));
    loop_ub = out->xi.size(0);
    scalarLB = (out->xi.size(0) / 2) << 1;
    vectorUB = scalarLB - 2;
    for (loop_ub_tmp = 0; loop_ub_tmp <= vectorUB; loop_ub_tmp += 2) {
      r = _mm_loadu_pd(&out->xi[loop_ub_tmp]);
      _mm_storeu_pd(&out->xi[loop_ub_tmp], _mm_div_pd(r, _mm_set1_pd(sig1)));
    }
    for (loop_ub_tmp = scalarLB; loop_ub_tmp < loop_ub; loop_ub_tmp++) {
      out->xi[loop_ub_tmp] = out->xi[loop_ub_tmp] / sig1;
    }
    emlrtMEXProfilingStatement(33, static_cast<boolean_T>(isMexOutdated));
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //  find alpha beta
  //  Buffer the estimated spectral norm
  emlrtMEXProfilingStatement(34, static_cast<boolean_T>(isMexOutdated));
  sig1 *= 1.1;
  emlrtMEXProfilingStatement(35, static_cast<boolean_T>(isMexOutdated));
  st.site = &c_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  st.site = &c_emlrtRSI;
  sig1 = lam * lam + 4.0 * omg * sig1;
  b_st.site = &w_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  if (sig1 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &c_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  d_st.site = &y_emlrtRSI;
  e_st.site = &ab_emlrtRSI;
  f_st.site = &bb_emlrtRSI;
  if (sig1 < 0.0) {
    emlrtErrorWithMessageIdR2018a(
        &f_st, &y_emlrtRTEI, "Coder:toolbox:ElFunDomainError",
        "Coder:toolbox:ElFunDomainError", 3, 4, 4, "sqrt");
  }
  alpha = 2.0 / (muDoubleScalarSqrt(sig1) + lam);
  emlrtMEXProfilingStatement(36, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingStatement(37, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingStatement(38, static_cast<boolean_T>(isMexOutdated));
  beta = omg * alpha;
  //
  emlrtMEXProfilingStatement(39, static_cast<boolean_T>(isMexOutdated));
  if (nH_c != i) {
    emlrtIntegerCheckR2012b(nH_c, &g_emlrtDCI, (emlrtConstCTX)sp);
  }
  loop_ub_tmp = static_cast<int32_T>(nH_c);
  J_affine_D_old.set_size(&db_emlrtRTEI, sp, loop_ub_tmp);
  if (loop_ub_tmp != i) {
    emlrtIntegerCheckR2012b(nH_c, &g_emlrtDCI, (emlrtConstCTX)sp);
  }
  for (i = 0; i < loop_ub_tmp; i++) {
    J_affine_D_old[i] = 0.0;
  }
  emlrtMEXProfilingStatement(40, static_cast<boolean_T>(isMexOutdated));
  if (nH_r != i1) {
    emlrtIntegerCheckR2012b(nH_r, &h_emlrtDCI, (emlrtConstCTX)sp);
  }
  J_k_polar_old.set_size(&eb_emlrtRTEI, sp, static_cast<int32_T>(nH_r));
  if (static_cast<int32_T>(nH_r) != i1) {
    emlrtIntegerCheckR2012b(nH_r, &h_emlrtDCI, (emlrtConstCTX)sp);
  }
  for (i = 0; i < line_search_flag; i++) {
    J_k_polar_old[i] = 0.0;
  }
  // they should be vectors!
  emlrtMEXProfilingStatement(41, static_cast<boolean_T>(isMexOutdated));
  nH_r = 1.0;
  emlrtMEXProfilingStatement(42, static_cast<boolean_T>(isMexOutdated));
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, maxit, mxDOUBLE_CLASS,
                                static_cast<int32_T>(maxit), &e_emlrtRTEI,
                                (emlrtConstCTX)sp);
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= static_cast<int32_T>(maxit) - 1)) {
    real_T J_affine_D[326];
    real_T temp_prime[326];
    real_T xin[326];
    real_T J_k_polar[290];
    real_T a__1[290];
    boolean_T guard1;
    emlrtMEXProfilingStatement(43, static_cast<boolean_T>(isMexOutdated));
    st.site = &d_emlrtRSI;
    coder::tic(st);
    emlrtMEXProfilingStatement(44, static_cast<boolean_T>(isMexOutdated));
    emlrtMEXProfilingStatement(45, static_cast<boolean_T>(isMexOutdated));
    st.site = &e_emlrtRSI;
    dev_xpipg_onestep_g(st, out->xi, out->eta, alpha, beta, rho, P, A, q, g, N,
                        nx, nu, nx, proj_index_all, proj_coefficient_all,
                        cone_k_polar, xin, etan, J_affine_D, J_k_polar, R,
                        temp_prime, a__1);
    b_xin.set_size(&fb_emlrtRTEI, sp, 326);
    for (i = 0; i < 326; i++) {
      b_xin[i] = xin[i];
    }
    b_etan.set_size(&gb_emlrtRTEI, sp, 290);
    for (i = 0; i < 290; i++) {
      b_etan[i] = etan[i];
    }
    emlrtMEXProfilingStatement(46, static_cast<boolean_T>(isMexOutdated));
    st.site = &f_emlrtRSI;
    b_st.site = &f_emlrtRSI;
    sig1 = coder::toc(b_st) * 1000.0;
    b_st.site = &hc_emlrtRSI;
    c_st.site = &pi_emlrtRSI;
    g_st.site = &qi_emlrtRSI;
    emlrt_marshallIn(c_st,
                     feval(c_st, emlrt_marshallOut(c_st, b_cv),
                           emlrt_marshallOut(static_cast<real_T>(1.0)),
                           b_emlrt_marshallOut(g_st, cv1),
                           emlrt_marshallOut(sig1), emlrtMCI),
                     "<output of feval>");
    emlrtMEXProfilingStatement(47, static_cast<boolean_T>(isMexOutdated));
    std::copy(&R[0], &R[616], &Rn[0]);
    emlrtMEXProfilingStatement(48, static_cast<boolean_T>(isMexOutdated));
    if (display) {
      emlrtMEXProfilingStatement(49, static_cast<boolean_T>(isMexOutdated));
      st.site = &g_emlrtRSI;
      b_st.site = &hc_emlrtRSI;
      if (static_cast<real_T>(k) + 1.0 < 2.147483648E+9) {
        i = k + 1;
      } else {
        i = MAX_int32_T;
      }
      c_st.site = &pi_emlrtRSI;
      g_st.site = &qi_emlrtRSI;
      sig1 = emlrt_marshallIn(
          c_st,
          feval(c_st, emlrt_marshallOut(c_st, b_cv),
                emlrt_marshallOut(static_cast<real_T>(1.0)),
                c_emlrt_marshallOut(g_st, cv2), emlrt_marshallOut(i),
                emlrt_marshallOut(coder::b_norm(R)), emlrtMCI),
          "<output of feval>");
      emlrtDisplayR2012b(emlrt_marshallOut(sig1), "ans", &emlrtRTEI,
                         (emlrtCTX)sp);
      emlrtMEXProfilingStatement(50, static_cast<boolean_T>(isMexOutdated));
    }
    emlrtMEXProfilingStatement(51, static_cast<boolean_T>(isMexOutdated));
    if (static_cast<real_T>(k) + 1.0 == 1.0) {
      emlrtMEXProfilingStatement(52, static_cast<boolean_T>(isMexOutdated));
      J_affine_D_old.set_size(&hb_emlrtRTEI, sp, 326);
      for (i = 0; i < 326; i++) {
        J_affine_D_old[i] = J_affine_D[i];
      }
      emlrtMEXProfilingStatement(53, static_cast<boolean_T>(isMexOutdated));
      J_k_polar_old.set_size(&ib_emlrtRTEI, sp, 290);
      for (i = 0; i < 290; i++) {
        J_k_polar_old[i] = J_k_polar[i];
      }
      emlrtMEXProfilingStatement(54, static_cast<boolean_T>(isMexOutdated));
      nH_r = 1.0;
      emlrtMEXProfilingStatement(55, static_cast<boolean_T>(isMexOutdated));
    }
    emlrtMEXProfilingStatement(56, static_cast<boolean_T>(isMexOutdated));
    if ((J_affine_D_old.size(0) != 326) && (J_affine_D_old.size(0) != 1)) {
      emlrtDimSizeImpxCheckR2021b(J_affine_D_old.size(0), 326, &d_emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    loop_ub_tmp = (J_affine_D_old.size(0) != 1);
    for (i = 0; i < 326; i++) {
      xin[i] = J_affine_D_old[i * loop_ub_tmp] - J_affine_D[i];
    }
    guard1 = false;
    if (coder::c_norm(xin) > 0.0) {
      guard1 = true;
    } else {
      if ((J_k_polar_old.size(0) != 290) && (J_k_polar_old.size(0) != 1)) {
        emlrtDimSizeImpxCheckR2021b(J_k_polar_old.size(0), 290, &c_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      loop_ub_tmp = (J_k_polar_old.size(0) != 1);
      for (i = 0; i < 290; i++) {
        etan[i] = J_k_polar_old[i * loop_ub_tmp] - J_k_polar[i];
      }
      if (coder::d_norm(etan) > 0.0) {
        guard1 = true;
      }
    }
    if (guard1) {
      // check the size of J_k_polar_old.
      emlrtMEXProfilingStatement(57, static_cast<boolean_T>(isMexOutdated));
      nH_r = static_cast<real_T>(k) + 1.0;
      emlrtMEXProfilingStatement(58, static_cast<boolean_T>(isMexOutdated));
      J_affine_D_old.set_size(&jb_emlrtRTEI, sp, 326);
      for (i = 0; i < 326; i++) {
        J_affine_D_old[i] = J_affine_D[i];
      }
      emlrtMEXProfilingStatement(59, static_cast<boolean_T>(isMexOutdated));
      J_k_polar_old.set_size(&kb_emlrtRTEI, sp, 290);
      for (i = 0; i < 290; i++) {
        J_k_polar_old[i] = J_k_polar[i];
      }
      emlrtMEXProfilingStatement(60, static_cast<boolean_T>(isMexOutdated));
      newtonwait_factor = 0.0;
      emlrtMEXProfilingStatement(61, static_cast<boolean_T>(isMexOutdated));
    }
    emlrtMEXProfilingStatement(62, static_cast<boolean_T>(isMexOutdated));
    sig1 = newton_coeff->newtonwaitlinear * newtonwait_factor;
    st.site = &h_emlrtRSI;
    if (static_cast<real_T>(k) + 1.0 >=
        (((newtonactive + nH_r) + sig1) +
         coder::mpower(st, newtonwaitexp, newtonwait_factor)) -
            1.0) {
      int32_T kk_indx;
      boolean_T exitg2;
      emlrtMEXProfilingStatement(63, static_cast<boolean_T>(isMexOutdated));
      nH_r = static_cast<real_T>(k) + 1.0;
      emlrtMEXProfilingStatement(64, static_cast<boolean_T>(isMexOutdated));
      if (display) {
        emlrtMEXProfilingStatement(65, static_cast<boolean_T>(isMexOutdated));
        st.site = &i_emlrtRSI;
        b_st.site = &i_emlrtRSI;
        sig1 = muDoubleScalarRound(
            (((newtonactive + (static_cast<real_T>(k) + 1.0)) + sig1) +
             coder::mpower(b_st, newtonwaitexp, newtonwait_factor)) -
            1.0);
        if (sig1 < 2.147483648E+9) {
          if (sig1 >= -2.147483648E+9) {
            loop_ub_tmp = static_cast<int32_T>(sig1);
          } else {
            loop_ub_tmp = MIN_int32_T;
          }
        } else if (sig1 >= 2.147483648E+9) {
          loop_ub_tmp = MAX_int32_T;
        } else {
          loop_ub_tmp = 0;
        }
        b_st.site = &hc_emlrtRSI;
        c_st.site = &pi_emlrtRSI;
        g_st.site = &qi_emlrtRSI;
        sig1 =
            emlrt_marshallIn(c_st,
                             feval(c_st, emlrt_marshallOut(c_st, b_cv),
                                   emlrt_marshallOut(static_cast<real_T>(1.0)),
                                   b_emlrt_marshallOut(g_st, cv3),
                                   emlrt_marshallOut(loop_ub_tmp), emlrtMCI),
                             "<output of feval>");
        emlrtDisplayR2012b(emlrt_marshallOut(sig1), "ans", &b_emlrtRTEI,
                           (emlrtCTX)sp);
        emlrtMEXProfilingStatement(66, static_cast<boolean_T>(isMexOutdated));
      }
      //  [dzw, flag]  = vec_newtonpipgupdate_linearalgebratrick(alpha, beta,
      //  rho,R,P, J_D, H, Ht, J_k_polar);%R = old - new
      emlrtMEXProfilingStatement(67, static_cast<boolean_T>(isMexOutdated));
      sig1 = coder::b_norm(R);
      std::copy(&R[0], &R[616], &b_R[0]);
      st.site = &j_emlrtRSI;
      e_dev_g_newton_pipg_update_with(
          SD, st, A, P, nx, nu, nx, proj_index_all, proj_coefficient_all,
          J_k_polar, temp_prime, b_R, alpha, beta, rho, pertub * sig1, dzw);
      // maybe we need to robustify this and have a flag
      emlrtMEXProfilingStatement(68, static_cast<boolean_T>(isMexOutdated));
      out->ntime++;
      // %%line search
      emlrtMEXProfilingStatement(69, static_cast<boolean_T>(isMexOutdated));
      loop_ub = out->xi.size(0);
      xinewton.set_size(&lb_emlrtRTEI, sp, out->xi.size(0));
      for (i = 0; i < loop_ub; i++) {
        xinewton[i] = 0.0;
      }
      emlrtMEXProfilingStatement(70, static_cast<boolean_T>(isMexOutdated));
      loop_ub = out->eta.size(0);
      etanewton.set_size(&mb_emlrtRTEI, sp, out->eta.size(0));
      for (i = 0; i < loop_ub; i++) {
        etanewton[i] = 0.0;
      }
      emlrtMEXProfilingStatement(71, static_cast<boolean_T>(isMexOutdated));
      line_search_flag = 0;
      emlrtMEXProfilingStatement(72, static_cast<boolean_T>(isMexOutdated));
      emlrtForLoopVectorCheckR2021a(
          0.0, 1.0, linsearch_amount, mxDOUBLE_CLASS,
          static_cast<int32_T>(linsearch_amount + 1.0), &d_emlrtRTEI,
          (emlrtConstCTX)sp);
      kk_indx = 0;
      exitg2 = false;
      while ((!exitg2) &&
             (kk_indx <= static_cast<int32_T>(linsearch_amount + 1.0) - 1)) {
        int32_T b_loop_ub;
        int32_T c_loop_ub;
        //  ! The point is to include very small variable as the decrease
        //  happens locally.
        emlrtMEXProfilingStatement(73, static_cast<boolean_T>(isMexOutdated));
        st.site = &k_emlrtRSI;
        sig2 = coder::mpower(st, newton_coeff->linesearch_step,
                             -static_cast<real_T>(kk_indx));
        emlrtMEXProfilingStatement(74, static_cast<boolean_T>(isMexOutdated));
        if (nz < 1.0) {
          loop_ub = 0;
        } else {
          if (nz != static_cast<int32_T>(muDoubleScalarFloor(nz))) {
            emlrtIntegerCheckR2012b(nz, &b_emlrtDCI, (emlrtConstCTX)sp);
          }
          if ((static_cast<int32_T>(nz) < 1) ||
              (static_cast<int32_T>(nz) > 616)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nz), 1, 616,
                                          &b_emlrtBCI, (emlrtConstCTX)sp);
          }
          loop_ub = static_cast<int32_T>(nz);
        }
        scalarLB = (loop_ub / 2) << 1;
        vectorUB = scalarLB - 2;
        for (i = 0; i <= vectorUB; i += 2) {
          r = _mm_loadu_pd(&dzw[i]);
          _mm_storeu_pd(&b_R[i], _mm_mul_pd(_mm_set1_pd(sig2), r));
        }
        for (i = scalarLB; i < loop_ub; i++) {
          b_R[i] = sig2 * dzw[i];
        }
        b_loop_ub = out->xi.size(0);
        if ((out->xi.size(0) != loop_ub) &&
            ((out->xi.size(0) != 1) && (loop_ub != 1))) {
          emlrtDimSizeImpxCheckR2021b(out->xi.size(0), loop_ub, &b_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        emlrtMEXProfilingStatement(75, static_cast<boolean_T>(isMexOutdated));
        if (nz + 1.0 > 616.0) {
          i = 0;
          i1 = 0;
        } else {
          if (nz + 1.0 != static_cast<int32_T>(muDoubleScalarFloor(nz + 1.0))) {
            emlrtIntegerCheckR2012b(nz + 1.0, &emlrtDCI, (emlrtConstCTX)sp);
          }
          if ((static_cast<int32_T>(nz + 1.0) < 1) ||
              (static_cast<int32_T>(nz + 1.0) > 616)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nz + 1.0), 1,
                                          616, &emlrtBCI, (emlrtConstCTX)sp);
          }
          i = static_cast<int32_T>(nz + 1.0) - 1;
          i1 = 616;
        }
        c_loop_ub = i1 - i;
        scalarLB = (c_loop_ub / 2) << 1;
        vectorUB = scalarLB - 2;
        for (i1 = 0; i1 <= vectorUB; i1 += 2) {
          r = _mm_loadu_pd(&dzw[i + i1]);
          _mm_storeu_pd(&tmp_data[i1], _mm_mul_pd(_mm_set1_pd(sig2), r));
        }
        for (i1 = scalarLB; i1 < c_loop_ub; i1++) {
          tmp_data[i1] = sig2 * dzw[i + i1];
        }
        loop_ub_tmp = out->eta.size(0);
        if ((out->eta.size(0) != c_loop_ub) &&
            ((out->eta.size(0) != 1) && (c_loop_ub != 1))) {
          emlrtDimSizeImpxCheckR2021b(out->eta.size(0), c_loop_ub, &emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        //  [xinewton, etanewton, ~, ~,~, Rn] = vec_xpipg_onestep( xinewton_old,
        //  etanewton_old,alpha, beta,...
        //      rho,P,H,Ht,q, g,N, nx, nu, proj_index_all,
        //      proj_coefficient_all,cone_k_polar);%checkthis
        emlrtMEXProfilingStatement(76, static_cast<boolean_T>(isMexOutdated));
        emlrtMEXProfilingStatement(77, static_cast<boolean_T>(isMexOutdated));
        if ((out->xi.size(0) == loop_ub) && (out->eta.size(0) == c_loop_ub)) {
          __m128d r1;
          xinewton.set_size(&nb_emlrtRTEI, sp, out->xi.size(0));
          scalarLB = (out->xi.size(0) / 2) << 1;
          vectorUB = scalarLB - 2;
          for (i = 0; i <= vectorUB; i += 2) {
            r = _mm_loadu_pd(&out->xi[i]);
            r1 = _mm_loadu_pd(&b_R[i]);
            _mm_storeu_pd(&xinewton[i], _mm_add_pd(r, r1));
          }
          for (i = scalarLB; i < b_loop_ub; i++) {
            xinewton[i] = out->xi[i] + b_R[i];
          }
          etanewton.set_size(&ob_emlrtRTEI, sp, out->eta.size(0));
          scalarLB = (out->eta.size(0) / 2) << 1;
          vectorUB = scalarLB - 2;
          for (i = 0; i <= vectorUB; i += 2) {
            r = _mm_loadu_pd(&out->eta[i]);
            r1 = _mm_loadu_pd(&tmp_data[i]);
            _mm_storeu_pd(&etanewton[i], _mm_add_pd(r, r1));
          }
          for (i = scalarLB; i < loop_ub_tmp; i++) {
            etanewton[i] = out->eta[i] + tmp_data[i];
          }
          st.site = &l_emlrtRSI;
          dev_xpipg_onestep_g(st, xinewton, etanewton, alpha, beta, rho, P, A,
                              q, g, N, nx, nu, nx, proj_index_all,
                              proj_coefficient_all, cone_k_polar, xin, etan,
                              J_affine_D, J_k_polar, Rn, temp_prime, a__1);
        } else {
          st.site = &l_emlrtRSI;
          binary_expand_op(st, l_emlrtRSI, out, b_R, loop_ub, tmp_data,
                           c_loop_ub, alpha, beta, rho, P, A, q, g, N, nx, nu,
                           proj_index_all, proj_coefficient_all, cone_k_polar,
                           xin, etan, J_affine_D, J_k_polar, Rn, temp_prime,
                           a__1);
        }
        xinewton.set_size(&pb_emlrtRTEI, sp, 326);
        for (i = 0; i < 326; i++) {
          xinewton[i] = xin[i];
        }
        etanewton.set_size(&qb_emlrtRTEI, sp, 290);
        for (i = 0; i < 290; i++) {
          etanewton[i] = etan[i];
        }
        emlrtMEXProfilingStatement(78, static_cast<boolean_T>(isMexOutdated));
        if (coder::b_norm(Rn) <= newton_coeff->newtonratio * sig1) {
          emlrtMEXProfilingStatement(79, static_cast<boolean_T>(isMexOutdated));
          line_search_flag = 1;
          emlrtMEXProfilingStatement(80, static_cast<boolean_T>(isMexOutdated));
          exitg2 = true;
        } else {
          emlrtMEXProfilingStatement(82, static_cast<boolean_T>(isMexOutdated));
          kk_indx++;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
      }
      emlrtMEXProfilingStatement(83, static_cast<boolean_T>(isMexOutdated));
      if (display) {
        emlrtMEXProfilingStatement(84, static_cast<boolean_T>(isMexOutdated));
        st.site = &m_emlrtRSI;
        b_st.site = &hc_emlrtRSI;
        c_st.site = &pi_emlrtRSI;
        g_st.site = &qi_emlrtRSI;
        emlrt_marshallIn(c_st,
                         feval(c_st, emlrt_marshallOut(c_st, b_cv),
                               emlrt_marshallOut(static_cast<real_T>(1.0)),
                               f_emlrt_marshallOut(g_st, cv4),
                               emlrt_marshallOut(coder::b_norm(Rn) / sig1),
                               emlrtMCI),
                         "<output of feval>");
        emlrtMEXProfilingStatement(85, static_cast<boolean_T>(isMexOutdated));
      }
      emlrtMEXProfilingStatement(86, static_cast<boolean_T>(isMexOutdated));
      if (line_search_flag == 1) {
        emlrtMEXProfilingStatement(87, static_cast<boolean_T>(isMexOutdated));
        loop_ub = xinewton.size(0);
        b_xin.set_size(&rb_emlrtRTEI, sp, xinewton.size(0));
        for (i = 0; i < loop_ub; i++) {
          b_xin[i] = xinewton[i];
        }
        emlrtMEXProfilingStatement(88, static_cast<boolean_T>(isMexOutdated));
        loop_ub = etanewton.size(0);
        b_etan.set_size(&sb_emlrtRTEI, sp, etanewton.size(0));
        for (i = 0; i < loop_ub; i++) {
          b_etan[i] = etanewton[i];
        }
        emlrtMEXProfilingStatement(89, static_cast<boolean_T>(isMexOutdated));
        newtonwait_factor = 0.0;
        emlrtMEXProfilingStatement(92, static_cast<boolean_T>(isMexOutdated));
      } else {
        emlrtMEXProfilingStatement(90, static_cast<boolean_T>(isMexOutdated));
        if (coder::b_norm(Rn) / sig1 > 2.0) {
          // magic number Corresponding to case there are very closed to
          // insgularity and not providing any useful information
          emlrtMEXProfilingStatement(91, static_cast<boolean_T>(isMexOutdated));
          newtonwait_factor++;
          emlrtMEXProfilingStatement(92, static_cast<boolean_T>(isMexOutdated));
        }
      }
      emlrtMEXProfilingStatement(93, static_cast<boolean_T>(isMexOutdated));
    }
    emlrtMEXProfilingStatement(94, static_cast<boolean_T>(isMexOutdated));
    loop_ub = b_xin.size(0);
    out->xi.set_size(&tb_emlrtRTEI, sp, b_xin.size(0));
    for (i = 0; i < loop_ub; i++) {
      out->xi[i] = b_xin[i];
    }
    emlrtMEXProfilingStatement(95, static_cast<boolean_T>(isMexOutdated));
    loop_ub = b_etan.size(0);
    out->eta.set_size(&ub_emlrtRTEI, sp, b_etan.size(0));
    for (i = 0; i < loop_ub; i++) {
      out->eta[i] = b_etan[i];
    }
    emlrtMEXProfilingStatement(96, static_cast<boolean_T>(isMexOutdated));
    if (coder::b_norm(R) <= tol) {
      //  [xi, eta,~, ~, ~,R] = vec_xpipg_onestep( xi, eta,alpha, beta,...
      //      rho,P,H,Ht,q, g,N, nx, nu, proj_index_all,
      //      proj_coefficient_all,cone_k_polar);
      emlrtMEXProfilingStatement(97, static_cast<boolean_T>(isMexOutdated));
      emlrtMEXProfilingStatement(98, static_cast<boolean_T>(isMexOutdated));
      st.site = &n_emlrtRSI;
      dev_xpipg_onestep_g(st, b_xin, b_etan, alpha, beta, rho, P, A, q, g, N,
                          nx, nu, nx, proj_index_all, proj_coefficient_all,
                          cone_k_polar, xin, etan, J_affine_D, J_k_polar, R,
                          temp_prime, a__1);
      out->xi.set_size(&vb_emlrtRTEI, sp, 326);
      for (i = 0; i < 326; i++) {
        out->xi[i] = xin[i];
      }
      out->eta.set_size(&wb_emlrtRTEI, sp, 290);
      for (i = 0; i < 290; i++) {
        out->eta[i] = etan[i];
      }
      emlrtMEXProfilingStatement(99, static_cast<boolean_T>(isMexOutdated));
      out->converge = true;
      emlrtMEXProfilingStatement(100, static_cast<boolean_T>(isMexOutdated));
      out->k = static_cast<real_T>(k) + 1.0;
      emlrtMEXProfilingStatement(101, static_cast<boolean_T>(isMexOutdated));
      exitg1 = true;
    } else {
      emlrtMEXProfilingStatement(103, static_cast<boolean_T>(isMexOutdated));
      k++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  }
  // solve_time = toc*1000;
  // out.solve_time = solve_time;
  emlrtMEXProfilingStatement(104, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingStatement(105, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingStatement(106, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingFunctionExitCPP(&profilerSentinel);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (dev_newtonpipg_g_with_timer.cpp)
