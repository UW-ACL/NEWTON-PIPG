//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonpipg_compare_withtimer.cpp
//
// Code generation for function 'dev_newtonpipg_compare_withtimer'
//

// Include files
#include "dev_newtonpipg_compare_withtimer.h"
#include "dev_HZ_g.h"
#include "dev_HtZ_g.h"
#include "dev_g_newton_pipg_update.h"
#include "dev_newtonpipg_compare_withtimer_data.h"
#include "dev_newtonpipg_compare_withtimer_mexutil.h"
#include "dev_newtonpipg_compare_withtimer_types.h"
#include "dev_xpipg_onestep_g.h"
#include "mpower.h"
#include "norm.h"
#include "rt_nonfinite.h"
#include "tic.h"
#include "toc.h"
#include "blas.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstddef>
#include <cstdio>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRTEInfo
    emlrtRTEI{
        97,                                 // lineNo
        9,                                  // colNo
        "dev_newtonpipg_compare_withtimer", // fName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pName
    };

static emlrtRTEInfo
    b_emlrtRTEI{
        116,                                // lineNo
        13,                                 // colNo
        "dev_newtonpipg_compare_withtimer", // fName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pName
    };

static emlrtRSInfo
    emlrtRSI{
        173,                                // lineNo
        "dev_newtonpipg_compare_withtimer", // fcnName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pathName
    };

static emlrtRSInfo
    b_emlrtRSI{
        165,                                // lineNo
        "dev_newtonpipg_compare_withtimer", // fcnName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pathName
    };

static emlrtRSInfo
    c_emlrtRSI{
        156,                                // lineNo
        "dev_newtonpipg_compare_withtimer", // fcnName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pathName
    };

static emlrtRSInfo
    d_emlrtRSI{
        141,                                // lineNo
        "dev_newtonpipg_compare_withtimer", // fcnName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pathName
    };

static emlrtRSInfo
    e_emlrtRSI{
        131,                                // lineNo
        "dev_newtonpipg_compare_withtimer", // fcnName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pathName
    };

static emlrtRSInfo
    f_emlrtRSI{
        126,                                // lineNo
        "dev_newtonpipg_compare_withtimer", // fcnName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pathName
    };

static emlrtRSInfo
    g_emlrtRSI{
        119,                                // lineNo
        "dev_newtonpipg_compare_withtimer", // fcnName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pathName
    };

static emlrtRSInfo
    h_emlrtRSI{
        116,                                // lineNo
        "dev_newtonpipg_compare_withtimer", // fcnName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pathName
    };

static emlrtRSInfo
    i_emlrtRSI{
        113,                                // lineNo
        "dev_newtonpipg_compare_withtimer", // fcnName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pathName
    };

static emlrtRSInfo
    j_emlrtRSI{
        97,                                 // lineNo
        "dev_newtonpipg_compare_withtimer", // fcnName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pathName
    };

static emlrtRSInfo
    k_emlrtRSI{
        92,                                 // lineNo
        "dev_newtonpipg_compare_withtimer", // fcnName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pathName
    };

static emlrtRSInfo
    l_emlrtRSI{
        91,                                 // lineNo
        "dev_newtonpipg_compare_withtimer", // fcnName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pathName
    };

static emlrtRSInfo
    m_emlrtRSI{
        77,                                 // lineNo
        "dev_newtonpipg_compare_withtimer", // fcnName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pathName
    };

static emlrtRSInfo
    n_emlrtRSI{
        69,                                 // lineNo
        "dev_newtonpipg_compare_withtimer", // fcnName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pathName
    };

static emlrtRSInfo
    o_emlrtRSI{
        68,                                 // lineNo
        "dev_newtonpipg_compare_withtimer", // fcnName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pathName
    };

static emlrtRSInfo dc_emlrtRSI{
    38,        // lineNo
    "fprintf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" // pathName
};

static emlrtMCInfo emlrtMCI{
    66,        // lineNo
    18,        // colNo
    "fprintf", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" // pName
};

static emlrtRTEInfo
    e_emlrtRTEI{
        21,                                 // lineNo
        1,                                  // colNo
        "dev_newtonpipg_compare_withtimer", // fName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pName
    };

static emlrtRTEInfo
    f_emlrtRTEI{
        22,                                 // lineNo
        1,                                  // colNo
        "dev_newtonpipg_compare_withtimer", // fName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pName
    };

static emlrtRTEInfo
    g_emlrtRTEI{
        23,                                 // lineNo
        1,                                  // colNo
        "dev_newtonpipg_compare_withtimer", // fName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pName
    };

static emlrtRTEInfo
    h_emlrtRTEI{
        24,                                 // lineNo
        1,                                  // colNo
        "dev_newtonpipg_compare_withtimer", // fName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pName
    };

static emlrtRTEInfo
    i_emlrtRTEI{
        31,                                 // lineNo
        1,                                  // colNo
        "dev_newtonpipg_compare_withtimer", // fName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pName
    };

static emlrtRTEInfo
    j_emlrtRTEI{
        32,                                 // lineNo
        1,                                  // colNo
        "dev_newtonpipg_compare_withtimer", // fName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pName
    };

static emlrtRTEInfo
    k_emlrtRTEI{
        34,                                 // lineNo
        1,                                  // colNo
        "dev_newtonpipg_compare_withtimer", // fName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pName
    };

static emlrtDCInfo emlrtDCI{
    40,                                 // lineNo
    16,                                 // colNo
    "dev_newtonpipg_compare_withtimer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_withtimer."
    "m", // pName
    4    // checkKind
};

static emlrtDCInfo b_emlrtDCI{
    40,                                 // lineNo
    16,                                 // colNo
    "dev_newtonpipg_compare_withtimer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_withtimer."
    "m", // pName
    1    // checkKind
};

static emlrtRTEInfo
    l_emlrtRTEI{
        90,                                 // lineNo
        9,                                  // colNo
        "dev_newtonpipg_compare_withtimer", // fName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pName
    };

static emlrtECInfo
    emlrtECI{
        1,                                  // nDims
        105,                                // lineNo
        13,                                 // colNo
        "dev_newtonpipg_compare_withtimer", // fName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pName
    };

static emlrtECInfo
    b_emlrtECI{
        1,                                  // nDims
        105,                                // lineNo
        52,                                 // colNo
        "dev_newtonpipg_compare_withtimer", // fName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pName
    };

static emlrtRTEInfo
    m_emlrtRTEI{
        125,                                // lineNo
        23,                                 // colNo
        "dev_newtonpipg_compare_withtimer", // fName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pName
    };

static emlrtDCInfo c_emlrtDCI{
    127,                                // lineNo
    44,                                 // colNo
    "dev_newtonpipg_compare_withtimer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_withtimer."
    "m", // pName
    1    // checkKind
};

static emlrtECInfo
    c_emlrtECI{
        1,                                  // nDims
        127,                                // lineNo
        28,                                 // colNo
        "dev_newtonpipg_compare_withtimer", // fName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pName
    };

static emlrtDCInfo d_emlrtDCI{
    128,                                // lineNo
    45,                                 // colNo
    "dev_newtonpipg_compare_withtimer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_withtimer."
    "m", // pName
    1    // checkKind
};

static emlrtBCInfo emlrtBCI{
    1,                                  // iFirst
    616,                                // iLast
    128,                                // lineNo
    45,                                 // colNo
    "dzw",                              // aName
    "dev_newtonpipg_compare_withtimer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_withtimer."
    "m", // pName
    0    // checkKind
};

static emlrtECInfo
    d_emlrtECI{
        1,                                  // nDims
        128,                                // lineNo
        29,                                 // colNo
        "dev_newtonpipg_compare_withtimer", // fName
        "C:\\Users\\HP\\Documents\\MATLAB\\general "
        "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_"
        "withtimer.m" // pName
    };

static emlrtDCInfo e_emlrtDCI{
    41,                                 // lineNo
    17,                                 // colNo
    "dev_newtonpipg_compare_withtimer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_withtimer."
    "m", // pName
    1    // checkKind
};

static emlrtDCInfo f_emlrtDCI{
    41,                                 // lineNo
    17,                                 // colNo
    "dev_newtonpipg_compare_withtimer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_withtimer."
    "m", // pName
    4    // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    1,                                  // iFirst
    2000,                               // iLast
    158,                                // lineNo
    17,                                 // colNo
    "out.timeout",                      // aName
    "dev_newtonpipg_compare_withtimer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\pipg_newton_pipg_withtimer\\dev_newtonpipg_compare_withtimer."
    "m", // pName
    3    // checkKind
};

static emlrtRSInfo jg_emlrtRSI{
    66,        // lineNo
    "fprintf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" // pathName
};

// Function Declarations
static void binary_expand_op(
    const emlrtStack &sp, const emlrtRSInfo in1, const struct1_T *in2,
    real_T in3, const real_T in4[616], int32_T in5, const real_T in6_data[],
    const int32_T &in6_size, real_T in7, real_T in8, real_T in9,
    const real_T in10[326], const real_T in11[3190], const real_T in12[326],
    const real_T in13[290], real_T in14, real_T in15, real_T in16,
    const real_T in17[660], const real_T in18[660], const real_T in19[290],
    real_T in20[326], real_T in21[290], real_T in22[326], real_T in23[290],
    real_T in24[616], real_T in25[326], real_T in26[290]);

static const mxArray *emlrt_marshallOut(const int32_T u);

static const mxArray *emlrt_marshallOut(const real_T u);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const char_T u[7]);

static const mxArray *feval(const emlrtStack &sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, const mxArray *m5,
                            emlrtMCInfo &location);

static const mxArray *feval(const emlrtStack &sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, emlrtMCInfo &location);

// Function Definitions
static void binary_expand_op(
    const emlrtStack &sp, const emlrtRSInfo in1, const struct1_T *in2,
    real_T in3, const real_T in4[616], int32_T in5, const real_T in6_data[],
    const int32_T &in6_size, real_T in7, real_T in8, real_T in9,
    const real_T in10[326], const real_T in11[3190], const real_T in12[326],
    const real_T in13[290], real_T in14, real_T in15, real_T in16,
    const real_T in17[660], const real_T in18[660], const real_T in19[290],
    real_T in20[326], real_T in21[290], real_T in22[326], real_T in23[290],
    real_T in24[616], real_T in25[326], real_T in26[290])
{
  emlrtStack st;
  real_T b_in2_data[616];
  real_T in2_data[360];
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = &sp;
  st.tls = sp.tls;
  if (in5 == 1) {
    loop_ub = in2->xi.size[0];
  } else {
    loop_ub = in5;
  }
  stride_0_0 = (in2->xi.size[0] != 1);
  stride_1_0 = (in5 != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in2_data[i] = in2->xi.data[i * stride_0_0] + in3 * in4[i * stride_1_0];
  }
  stride_1_0 = in6_size;
  stride_0_0 = (in2->eta.size[0] != 1);
  for (int32_T i{0}; i < stride_1_0; i++) {
    b_in2_data[i] = in2->eta.data[i * stride_0_0] + in6_data[i];
  }
  st.site = const_cast<emlrtRSInfo *>(&in1);
  dev_xpipg_onestep_g(st, in2_data, loop_ub, b_in2_data, stride_1_0, in7, in8,
                      in9, in10, in11, in12, in13, in14, in15, in16, in15, in17,
                      in18, in19, in20, in21, in22, in23, in24, in25, in26);
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

static const mxArray *emlrt_marshallOut(const real_T u)
{
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateDoubleScalar(u);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *emlrt_marshallOut(const emlrtStack &sp, const char_T u[7])
{
  static const int32_T iv[2]{1, 7};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 7, m, &u[0]);
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

static const mxArray *feval(const emlrtStack &sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, emlrtMCInfo &location)
{
  const mxArray *pArrays[4];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  pArrays[2] = m3;
  pArrays[3] = m4;
  return emlrtCallMATLABR2012b((emlrtConstCTX)&sp, 1, &m, 4, &pArrays[0],
                               "feval", true, &location);
}

void dev_newtonpipg_compare_withtimer(
    d_dev_newtonpipg_compare_withti *SD, const emlrtStack *sp,
    const real_T P[326], const real_T A[3190], const real_T q[326],
    const real_T g[290], real_T N, real_T nx, real_T nu, real_T nineq,
    const real_T proj_index_all[660], const real_T proj_coefficient_all[660],
    const real_T cone_k_polar[290], const real_T z_1[326], real_T lam,
    real_T rho, real_T omg, const struct0_T *newton_coeff, real_T maxit,
    real_T tol, real_T pertub, boolean_T display, struct1_T *out)
{
  static const int32_T iv[2]{1, 66};
  static const int32_T iv1[2]{1, 25};
  static const int32_T iv2[2]{1, 30};
  static const char_T u[66]{
      't', 'h', 'i', 's', ' ', 'i', 's', ' ', 't',  'h', 'e', ' ', '%', 'd',
      ' ', 'i', 'n', 't', 'e', 'r', 'a', 't', 'i',  'o', 'n', ' ', 'f', 'o',
      'r', ' ', 'v', 'e', 'c', 'n', 'e', 'w', 't',  'o', 'n', ',', ' ', 't',
      'h', 'e', ' ', 'r', 'e', 's', 'i', 'd', 'u',  'a', 'l', ' ', 'n', 'o',
      'r', 'm', ' ', 'i', 's', ' ', '%', 'e', '\\', 'n'};
  static const char_T c_u[30]{'t', 'h', 'e', ' ', 'n',  'e', 'w', 't',
                              'o', 'n', ' ', 'r', 'e',  'd', 'u', 'c',
                              'e', 'm', 'e', 'n', 't',  ' ', 'i', 's',
                              ' ', '%', 'f', ' ', '\\', 'n'};
  static const char_T b_u[25]{'t', 'h', 'e', ' ', 'c', 'u',  'r', 'r', 'e',
                              'n', 't', ' ', 'w', 'a', 'i',  't', ' ', 'i',
                              's', ' ', '%', 'd', ' ', '\\', 'n'};
  static const char_T b_cv[7]{'f', 'p', 'r', 'i', 'n', 't', 'f'};
  __m128d r;
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  real_T R[616];
  real_T b_R[616];
  real_T dzw[616];
  real_T J_affine_D_old_data[360];
  real_T J_k_polar_old_data[360];
  real_T etan_data[360];
  real_T etanewton_data[360];
  real_T J_affine_D[326];
  real_T xin_data[326];
  real_T xinewton_data[326];
  real_T J_k_polar[290];
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
  int32_T J_affine_D_old_size;
  int32_T J_k_polar_old_size;
  int32_T b_loop_ub_tmp;
  int32_T i;
  int32_T k;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T scalarLB;
  int32_T timeind;
  int32_T vectorUB;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
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
  // coder.varsize('z1');
  if (!(nx <= 7.0)) {
    emlrtErrorWithMessageIdR2018a(sp, &e_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (!(nu <= 4.0)) {
    emlrtErrorWithMessageIdR2018a(sp, &f_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (!(N <= 30.0)) {
    emlrtErrorWithMessageIdR2018a(sp, &g_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (!(nineq <= 4.0)) {
    emlrtErrorWithMessageIdR2018a(sp, &h_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  out->xi.size[0] = 326;
  std::copy(&z_1[0], &z_1[326], &out->xi.data[0]);
  // weird bug
  nH_r = (nx + nineq) * N;
  // #rows of H
  nH_c = (nx + nu) * N + nx;
  // #cols of H
  if (!(nH_c <= 360.0)) {
    emlrtErrorWithMessageIdR2018a(sp, &i_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  if (!(nH_r <= 360.0)) {
    emlrtErrorWithMessageIdR2018a(sp, &j_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  nz = (nx * (N - 1.0) + nx) + nu * (N - 1.0);
  if (!(nz <= 360.0)) {
    emlrtErrorWithMessageIdR2018a(sp, &k_emlrtRTEI,
                                  "Coder:builtins:AssertionFailed",
                                  "Coder:builtins:AssertionFailed", 0);
  }
  //  the amount of equalities
  //  Output
  out->converge = true;
  if (!(nH_c >= 0.0)) {
    emlrtNonNegativeCheckR2012b(nH_c, &emlrtDCI, (emlrtConstCTX)sp);
  }
  if (nH_c != muDoubleScalarFloor(nH_c)) {
    emlrtIntegerCheckR2012b(nH_c, &b_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (!(nH_r >= 0.0)) {
    emlrtNonNegativeCheckR2012b(nH_r, &f_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (nH_r != muDoubleScalarFloor(nH_r)) {
    emlrtIntegerCheckR2012b(nH_r, &e_emlrtDCI, (emlrtConstCTX)sp);
  }
  out->ntime = 0.0;
  out->k = 0.0;
  std::memset(&out->timeout[0], 0, 2000U * sizeof(real_T));
  std::memset(&out->pipgR[0], 0, 2000U * sizeof(real_T));
  loop_ub_tmp = static_cast<int32_T>(nH_r);
  out->eta.size[0] = static_cast<int32_T>(nH_r);
  if (loop_ub_tmp - 1 >= 0) {
    std::memset(&out->eta.data[0], 0,
                static_cast<uint32_T>(loop_ub_tmp) * sizeof(real_T));
  }
  //  Setup constant for Newton_pipg
  linsearch_amount = newton_coeff->linsearch_amount;
  // depends on the cost of each Newton step versus norma steps
  newtonwaitexp = newton_coeff->newtonwaitexp;
  // avoid using newton for the third time in one region.
  newtonwait_factor = newton_coeff->newtonwait_factor;
  newtonactive = newton_coeff->newtonactive;
  //  Set up coef for pipg
  sig1 = 100.1;
  // not important constants
  sig2 = 200.2;
  while (muDoubleScalarAbs(sig2 - sig1) / sig1 >= 0.005) {
    // Power iterations
    sig2 = sig1;
    st.site = &o_emlrtRSI;
    dev_HZ_g(st, A, out->xi.data, out->xi.size[0], nx, etan);
    out->eta.size[0] = 290;
    std::copy(&etan[0], &etan[290], &out->eta.data[0]);
    // devec
    st.site = &n_emlrtRSI;
    out->xi.size[0] =
        dev_HtZ_g(st, A, out->eta.data, out->eta.size[0], nx, out->xi.data);
    // devec
    if (out->xi.size[0] == 0) {
      sig1 = 0.0;
    } else {
      n_t = (ptrdiff_t)out->xi.size[0];
      incx_t = (ptrdiff_t)1;
      sig1 = dnrm2(&n_t, &out->xi.data[0], &incx_t);
    }
    loop_ub = out->xi.size[0];
    scalarLB = loop_ub / 2 * 2;
    vectorUB = scalarLB - 2;
    for (i = 0; i <= vectorUB; i += 2) {
      r = _mm_loadu_pd(&out->xi.data[i]);
      r = _mm_div_pd(r, _mm_set1_pd(sig1));
      _mm_storeu_pd(&out->xi.data[i], r);
    }
    for (i = scalarLB; i < loop_ub; i++) {
      out->xi.data[i] /= sig1;
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  //  find alpha beta
  //  Buffer the estimated spectral norm
  sig1 *= 1.1;
  st.site = &m_emlrtRSI;
  b_st.site = &w_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  st.site = &m_emlrtRSI;
  sig1 = lam * lam + 4.0 * omg * sig1;
  b_st.site = &w_emlrtRSI;
  c_st.site = &x_emlrtRSI;
  if (sig1 < 0.0) {
    emlrtErrorWithMessageIdR2018a(&c_st, &d_emlrtRTEI,
                                  "Coder:toolbox:power_domainError",
                                  "Coder:toolbox:power_domainError", 0);
  }
  alpha = 2.0 / (muDoubleScalarSqrt(sig1) + lam);
  beta = omg * alpha;
  //
  b_loop_ub_tmp = static_cast<int32_T>(nH_c);
  J_affine_D_old_size = static_cast<int32_T>(nH_c);
  if (b_loop_ub_tmp - 1 >= 0) {
    std::memset(&J_affine_D_old_data[0], 0,
                static_cast<uint32_T>(b_loop_ub_tmp) * sizeof(real_T));
  }
  J_k_polar_old_size = static_cast<int32_T>(nH_r);
  if (loop_ub_tmp - 1 >= 0) {
    std::memset(&J_k_polar_old_data[0], 0,
                static_cast<uint32_T>(loop_ub_tmp) * sizeof(real_T));
  }
  // they should be vectors!
  sig2 = 1.0;
  nH_r = 0.0;
  timeind = 1;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, maxit, mxDOUBLE_CLASS,
                                static_cast<int32_T>(maxit), &l_emlrtRTEI,
                                (emlrtConstCTX)sp);
  k = 0;
  exitg1 = false;
  while ((!exitg1) && (k <= static_cast<int32_T>(maxit) - 1)) {
    real_T temp_prime[326];
    real_T a__1[290];
    real_T nr;
    int32_T etan_size;
    int32_T xin_size;
    boolean_T guard1;
    st.site = &l_emlrtRSI;
    coder::tic(st);
    st.site = &k_emlrtRSI;
    dev_xpipg_onestep_g(st, out->xi.data, out->xi.size[0], out->eta.data,
                        out->eta.size[0], alpha, beta, rho, P, A, q, g, N, nx,
                        nu, nx, proj_index_all, proj_coefficient_all,
                        cone_k_polar, xinewton_data, etan, J_affine_D,
                        J_k_polar, R, temp_prime, a__1);
    xin_size = 326;
    std::copy(&xinewton_data[0], &xinewton_data[326], &xin_data[0]);
    etan_size = 290;
    std::copy(&etan[0], &etan[290], &etan_data[0]);
    nH_c = coder::b_norm(R);
    nr = nH_c;
    if (display) {
      st.site = &j_emlrtRSI;
      b_st.site = &dc_emlrtRSI;
      y = nullptr;
      m = emlrtCreateCharArray(2, &iv[0]);
      emlrtInitCharArrayR2013a(&b_st, 66, m, &u[0]);
      emlrtAssign(&y, m);
      if (static_cast<real_T>(k) + 1.0 < 2.147483648E+9) {
        i = k + 1;
      } else {
        i = MAX_int32_T;
      }
      c_st.site = &jg_emlrtRSI;
      sig1 = emlrt_marshallIn(c_st,
                              feval(c_st, emlrt_marshallOut(c_st, b_cv),
                                    emlrt_marshallOut(static_cast<real_T>(1.0)),
                                    y, emlrt_marshallOut(i),
                                    emlrt_marshallOut(nH_c), emlrtMCI),
                              "<output of feval>");
      emlrtDisplayR2012b(emlrt_marshallOut(sig1), "ans", &emlrtRTEI,
                         (emlrtCTX)sp);
    }
    if (static_cast<real_T>(k) + 1.0 == 1.0) {
      J_affine_D_old_size = 326;
      std::copy(&J_affine_D[0], &J_affine_D[326], &J_affine_D_old_data[0]);
      J_k_polar_old_size = 290;
      std::copy(&J_k_polar[0], &J_k_polar[290], &J_k_polar_old_data[0]);
      sig2 = 1.0;
    }
    if ((J_affine_D_old_size != 326) && (J_affine_D_old_size != 1)) {
      emlrtDimSizeImpxCheckR2021b(J_affine_D_old_size, 326, &emlrtECI,
                                  (emlrtConstCTX)sp);
    }
    b_loop_ub_tmp = (J_affine_D_old_size != 1);
    for (i = 0; i < 326; i++) {
      xinewton_data[i] = J_affine_D_old_data[i * b_loop_ub_tmp] - J_affine_D[i];
    }
    guard1 = false;
    if (coder::c_norm(xinewton_data) > 0.0) {
      guard1 = true;
    } else {
      if ((J_k_polar_old_size != 290) && (J_k_polar_old_size != 1)) {
        emlrtDimSizeImpxCheckR2021b(J_k_polar_old_size, 290, &b_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      b_loop_ub_tmp = (J_k_polar_old_size != 1);
      for (i = 0; i < 290; i++) {
        etan[i] = J_k_polar_old_data[i * b_loop_ub_tmp] - J_k_polar[i];
      }
      if (coder::d_norm(etan) > 0.0) {
        guard1 = true;
      }
    }
    if (guard1) {
      // check the size of J_k_polar_old.
      sig2 = static_cast<real_T>(k) + 1.0;
      J_affine_D_old_size = 326;
      std::copy(&J_affine_D[0], &J_affine_D[326], &J_affine_D_old_data[0]);
      J_k_polar_old_size = 290;
      std::copy(&J_k_polar[0], &J_k_polar[290], &J_k_polar_old_data[0]);
      newtonwait_factor = 0.0;
    }
    sig1 = newton_coeff->newtonwaitlinear * newtonwait_factor;
    st.site = &i_emlrtRSI;
    if (static_cast<real_T>(k) + 1.0 >=
        (((newtonactive + sig2) + sig1) +
         coder::mpower(st, newtonwaitexp, newtonwait_factor)) -
            1.0) {
      int32_T kk_indx;
      int32_T line_search_flag;
      boolean_T exitg2;
      sig2 = static_cast<real_T>(k) + 1.0;
      if (display) {
        st.site = &h_emlrtRSI;
        b_st.site = &h_emlrtRSI;
        sig1 = muDoubleScalarRound(
            (((newtonactive + (static_cast<real_T>(k) + 1.0)) + sig1) +
             coder::mpower(b_st, newtonwaitexp, newtonwait_factor)) -
            1.0);
        if (sig1 < 2.147483648E+9) {
          if (sig1 >= -2.147483648E+9) {
            b_loop_ub_tmp = static_cast<int32_T>(sig1);
          } else {
            b_loop_ub_tmp = MIN_int32_T;
          }
        } else if (sig1 >= 2.147483648E+9) {
          b_loop_ub_tmp = MAX_int32_T;
        } else {
          b_loop_ub_tmp = 0;
        }
        b_st.site = &dc_emlrtRSI;
        b_y = nullptr;
        m = emlrtCreateCharArray(2, &iv1[0]);
        emlrtInitCharArrayR2013a(&b_st, 25, m, &b_u[0]);
        emlrtAssign(&b_y, m);
        c_st.site = &jg_emlrtRSI;
        sig1 = emlrt_marshallIn(
            c_st,
            feval(c_st, emlrt_marshallOut(c_st, b_cv),
                  emlrt_marshallOut(static_cast<real_T>(1.0)), b_y,
                  emlrt_marshallOut(b_loop_ub_tmp), emlrtMCI),
            "<output of feval>");
        emlrtDisplayR2012b(emlrt_marshallOut(sig1), "ans", &b_emlrtRTEI,
                           (emlrtCTX)sp);
      }
      //  [dzw, flag]  = vec_newtonpipgupdate_linearalgebratrick(alpha, beta,
      //  rho,R,P, J_D, H, Ht, J_k_polar);%R = old - new
      std::copy(&R[0], &R[616], &b_R[0]);
      st.site = &g_emlrtRSI;
      b_dev_g_newton_pipg_update(SD, st, A, P, nx, nu, nx, proj_index_all,
                                 proj_coefficient_all, J_k_polar, temp_prime,
                                 b_R, alpha, beta, rho, pertub * nH_c, dzw);
      // maybe we need to robustify this and have a flag
      out->ntime++;
      // %%line search
      loop_ub = out->xi.size[0];
      b_loop_ub_tmp = out->xi.size[0];
      if (loop_ub - 1 >= 0) {
        std::memset(&xinewton_data[0], 0,
                    static_cast<uint32_T>(loop_ub) * sizeof(real_T));
      }
      loop_ub = out->eta.size[0];
      loop_ub_tmp = out->eta.size[0];
      if (loop_ub - 1 >= 0) {
        std::memset(&etanewton_data[0], 0,
                    static_cast<uint32_T>(loop_ub) * sizeof(real_T));
      }
      line_search_flag = 0;
      emlrtForLoopVectorCheckR2021a(
          0.0, 1.0, linsearch_amount, mxDOUBLE_CLASS,
          static_cast<int32_T>(linsearch_amount + 1.0), &m_emlrtRTEI,
          (emlrtConstCTX)sp);
      kk_indx = 0;
      exitg2 = false;
      while ((!exitg2) &&
             (kk_indx <= static_cast<int32_T>(linsearch_amount + 1.0) - 1)) {
        //  ! The point is to include very small variable as the decrease
        //  happens locally.
        st.site = &f_emlrtRSI;
        sig1 = coder::mpower(st, newton_coeff->linesearch_step,
                             -static_cast<real_T>(kk_indx));
        if (nz < 1.0) {
          i = 0;
        } else {
          if (nz != muDoubleScalarFloor(nz)) {
            emlrtIntegerCheckR2012b(nz, &c_emlrtDCI, (emlrtConstCTX)sp);
          }
          i = static_cast<int32_T>(nz);
        }
        loop_ub = out->xi.size[0];
        if ((out->xi.size[0] != i) && ((out->xi.size[0] != 1) && (i != 1))) {
          emlrtDimSizeImpxCheckR2021b(out->xi.size[0], i, &c_emlrtECI,
                                      (emlrtConstCTX)sp);
        }
        if (nz + 1.0 != static_cast<int32_T>(muDoubleScalarFloor(nz + 1.0))) {
          emlrtIntegerCheckR2012b(nz + 1.0, &d_emlrtDCI, (emlrtConstCTX)sp);
        }
        if ((static_cast<int32_T>(nz + 1.0) < 1) ||
            (static_cast<int32_T>(nz + 1.0) > 616)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nz + 1.0), 1, 616,
                                        &emlrtBCI, (emlrtConstCTX)sp);
        }
        b_loop_ub_tmp = 617 - static_cast<int32_T>(nz + 1.0);
        loop_ub_tmp = -static_cast<int32_T>(nz + 1.0);
        scalarLB = ((617 - static_cast<int32_T>(nz + 1.0)) / 2) << 1;
        vectorUB = scalarLB - 2;
        for (int32_T i1{0}; i1 <= vectorUB; i1 += 2) {
          r = _mm_loadu_pd(&dzw[(static_cast<int32_T>(nz + 1.0) + i1) - 1]);
          _mm_storeu_pd(&b_R[i1], _mm_mul_pd(_mm_set1_pd(sig1), r));
        }
        for (int32_T i1{scalarLB}; i1 <= loop_ub_tmp + 616; i1++) {
          b_R[i1] = sig1 * dzw[(static_cast<int32_T>(nz + 1.0) + i1) - 1];
        }
        loop_ub_tmp = out->eta.size[0];
        if ((out->eta.size[0] != 617 - static_cast<int32_T>(nz + 1.0)) &&
            ((out->eta.size[0] != 1) &&
             (617 - static_cast<int32_T>(nz + 1.0) != 1))) {
          emlrtDimSizeImpxCheckR2021b(out->eta.size[0],
                                      617 - static_cast<int32_T>(nz + 1.0),
                                      &d_emlrtECI, (emlrtConstCTX)sp);
        }
        //  [xinewton, etanewton, ~, ~,~, Rn] = vec_xpipg_onestep( xinewton_old,
        //  etanewton_old,alpha, beta,...
        //      rho,P,H,Ht,q, g,N, nx, nu, proj_index_all,
        //      proj_coefficient_all,cone_k_polar);%checkthis
        if ((out->xi.size[0] == i) &&
            (out->eta.size[0] == 617 - static_cast<int32_T>(nz + 1.0))) {
          __m128d r1;
          scalarLB = (out->xi.size[0] / 2) << 1;
          vectorUB = scalarLB - 2;
          for (i = 0; i <= vectorUB; i += 2) {
            r = _mm_loadu_pd(&dzw[i]);
            r1 = _mm_loadu_pd(&out->xi.data[i]);
            _mm_storeu_pd(&etanewton_data[i],
                          _mm_add_pd(r1, _mm_mul_pd(_mm_set1_pd(sig1), r)));
          }
          for (i = scalarLB; i < loop_ub; i++) {
            etanewton_data[i] = out->xi.data[i] + sig1 * dzw[i];
          }
          scalarLB = (out->eta.size[0] / 2) << 1;
          vectorUB = scalarLB - 2;
          for (i = 0; i <= vectorUB; i += 2) {
            r = _mm_loadu_pd(&out->eta.data[i]);
            r1 = _mm_loadu_pd(&b_R[i]);
            _mm_storeu_pd(&b_R[i], _mm_add_pd(r, r1));
          }
          for (i = scalarLB; i < loop_ub_tmp; i++) {
            b_R[i] += out->eta.data[i];
          }
          st.site = &e_emlrtRSI;
          dev_xpipg_onestep_g(st, etanewton_data, out->xi.size[0], b_R,
                              out->eta.size[0], alpha, beta, rho, P, A, q, g, N,
                              nx, nu, nx, proj_index_all, proj_coefficient_all,
                              cone_k_polar, xinewton_data, etan, J_affine_D,
                              J_k_polar, R, temp_prime, a__1);
        } else {
          st.site = &e_emlrtRSI;
          binary_expand_op(st, e_emlrtRSI, out, sig1, dzw, i, b_R,
                           b_loop_ub_tmp, alpha, beta, rho, P, A, q, g, N, nx,
                           nu, proj_index_all, proj_coefficient_all,
                           cone_k_polar, xinewton_data, etan, J_affine_D,
                           J_k_polar, R, temp_prime, a__1);
        }
        b_loop_ub_tmp = 326;
        loop_ub_tmp = 290;
        std::copy(&etan[0], &etan[290], &etanewton_data[0]);
        if (coder::b_norm(R) <= newton_coeff->newtonratio * nH_c) {
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
        st.site = &d_emlrtRSI;
        b_st.site = &dc_emlrtRSI;
        c_y = nullptr;
        m = emlrtCreateCharArray(2, &iv2[0]);
        emlrtInitCharArrayR2013a(&b_st, 30, m, &c_u[0]);
        emlrtAssign(&c_y, m);
        c_st.site = &jg_emlrtRSI;
        emlrt_marshallIn(c_st,
                         feval(c_st, emlrt_marshallOut(c_st, b_cv),
                               emlrt_marshallOut(static_cast<real_T>(1.0)), c_y,
                               emlrt_marshallOut(coder::b_norm(R) / nH_c),
                               emlrtMCI),
                         "<output of feval>");
      }
      if (line_search_flag == 1) {
        xin_size = b_loop_ub_tmp;
        if (b_loop_ub_tmp - 1 >= 0) {
          std::copy(&xinewton_data[0], &xinewton_data[b_loop_ub_tmp],
                    &xin_data[0]);
        }
        etan_size = loop_ub_tmp;
        if (loop_ub_tmp - 1 >= 0) {
          std::copy(&etanewton_data[0], &etanewton_data[loop_ub_tmp],
                    &etan_data[0]);
        }
        newtonwait_factor = 0.0;
        nr = coder::b_norm(R);
      } else if (coder::b_norm(R) / nH_c > 2.0) {
        // magic number Corresponding to case there are very closed to
        // insgularity and not providing any useful information
        newtonwait_factor++;
      }
    }
    out->xi.size[0] = xin_size;
    if (xin_size - 1 >= 0) {
      std::copy(&xin_data[0], &xin_data[xin_size], &out->xi.data[0]);
    }
    out->eta.size[0] = etan_size;
    if (etan_size - 1 >= 0) {
      std::copy(&etan_data[0], &etan_data[etan_size], &out->eta.data[0]);
    }
    st.site = &c_emlrtRSI;
    sig1 = coder::toc(st);
    nH_r += sig1;
    if (timeind > 2000) {
      emlrtDynamicBoundsCheckR2012b(2001, 1, 2000, &b_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    out->timeout[timeind - 1] = nH_r;
    out->pipgR[timeind - 1] = nr;
    timeind++;
    if (nH_c <= tol) {
      //  [xi, eta,~, ~, ~,R] = vec_xpipg_onestep( xi, eta,alpha, beta,...
      //      rho,P,H,Ht,q, g,N, nx, nu, proj_index_all,
      //      proj_coefficient_all,cone_k_polar);
      st.site = &b_emlrtRSI;
      dev_xpipg_onestep_g(st, xin_data, xin_size, etan_data, etan_size, alpha,
                          beta, rho, P, A, q, g, N, nx, nu, nx, proj_index_all,
                          proj_coefficient_all, cone_k_polar, xinewton_data,
                          etan, J_affine_D, J_k_polar, R, temp_prime, a__1);
      out->xi.size[0] = 326;
      std::copy(&xinewton_data[0], &xinewton_data[326], &out->xi.data[0]);
      out->eta.size[0] = 290;
      std::copy(&etan[0], &etan[290], &out->eta.data[0]);
      out->converge = true;
      out->k = static_cast<real_T>(k) + 1.0;
      exitg1 = true;
    } else {
      k++;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  }
  st.site = &emlrtRSI;
  out->solve_time = coder::toc(st) * 1000.0;
}

// End of code generation (dev_newtonpipg_compare_withtimer.cpp)
