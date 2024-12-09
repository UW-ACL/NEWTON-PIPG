//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_g_newton_pipg_update_withtimer.cpp
//
// Code generation for function 'dev_g_newton_pipg_update_withtimer'
//

// Include files
#include "dev_g_newton_pipg_update_withtimer.h"
#include "dev_HZ_g.h"
#include "dev_H_sinv_Ht.h"
#include "dev_HtZ_g.h"
#include "dev_S_inv_g.h"
#include "dev_Y_multi_vector.h"
#include "dev_cholesky_special.h"
#include "dev_g_A_Q_D.h"
#include "dev_g_Q_multi_vector.h"
#include "dev_g_multiply_J_k.h"
#include "dev_g_newton_pipg_update_withtimer_data.h"
#include "dev_g_newton_pipg_update_withtimer_mexutil.h"
#include "dev_solve_LTv.h"
#include "dev_solve_Lv.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "tic.h"
#include "toc.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo emlrtRSI{
    12,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo b_emlrtRSI{
    17,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo c_emlrtRSI{
    19,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo d_emlrtRSI{
    21,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo e_emlrtRSI{
    22,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo f_emlrtRSI{
    23,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo g_emlrtRSI{
    25,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo h_emlrtRSI{
    26,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo i_emlrtRSI{
    27,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo j_emlrtRSI{
    29,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo k_emlrtRSI{
    30,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo l_emlrtRSI{
    31,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo m_emlrtRSI{
    32,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo n_emlrtRSI{
    34,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo o_emlrtRSI{
    35,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo p_emlrtRSI{
    36,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo q_emlrtRSI{
    37,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo r_emlrtRSI{
    39,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo s_emlrtRSI{
    40,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo t_emlrtRSI{
    41,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo u_emlrtRSI{
    43,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo v_emlrtRSI{
    45,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo w_emlrtRSI{
    47,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo x_emlrtRSI{
    48,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo y_emlrtRSI{
    49,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo ab_emlrtRSI{
    50,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo bb_emlrtRSI{
    51,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo cb_emlrtRSI{
    52,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo db_emlrtRSI{
    54,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo eb_emlrtRSI{
    55,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo fb_emlrtRSI{
    56,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo gb_emlrtRSI{
    57,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo hb_emlrtRSI{
    58,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo ib_emlrtRSI{
    60,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo sb_emlrtRSI{
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

static emlrtECInfo emlrtECI{
    1,                                    // nDims
    58,                                   // lineNo
    11,                                   // colNo
    "dev_g_newton_pipg_update_withtimer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pName
};

static emlrtBCInfo emlrtBCI{
    1,                      // iFirst
    326,                    // iLast
    12,                     // lineNo
    16,                     // colNo
    "v",                    // aName
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtRSInfo xg_emlrtRSI{
    66,        // lineNo
    "fprintf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" // pathName
};

static emlrtRSInfo yg_emlrtRSI{
    68,        // lineNo
    "fprintf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" // pathName
};

// Function Declarations
static const mxArray *b_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[14]);

static void binary_expand_op(real_T in1[616], const real_T in2[326],
                             const coder::array<real_T, 1U> &in3,
                             const real_T in4[290]);

static const mxArray *emlrt_marshallOut(const real_T u);

static const mxArray *emlrt_marshallOut(const emlrtStack &sp,
                                        const char_T u[7]);

static const mxArray *feval(const emlrtStack &sp, const mxArray *m1,
                            const mxArray *m2, const mxArray *m3,
                            const mxArray *m4, emlrtMCInfo &location);

// Function Definitions
static const mxArray *b_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[14])
{
  static const int32_T iv[2]{1, 14};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 14, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static void binary_expand_op(real_T in1[616], const real_T in2[326],
                             const coder::array<real_T, 1U> &in3,
                             const real_T in4[290])
{
  int32_T stride_0_0;
  stride_0_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < 326; i++) {
    in1[i] = in2[i] - in3[i * stride_0_0];
  }
  std::copy(&in4[0], &in4[290], &in1[326]);
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

void dev_g_newton_pipg_update_withtimer(
    const emlrtStack *sp, const real_T A[3190], const real_T P[326], real_T nx,
    real_T nu, real_T ne, const real_T proj_index_all[660],
    const real_T proj_coefficient_all[660], const real_T diag_J_k_p[290],
    const real_T temp_prime[326], real_T R[616], real_T alpha, real_T beta,
    real_T rho, real_T delta_Y, real_T dzw[616])
{
  static const int32_T iv[2]{1, 26};
  static const int32_T iv1[2]{1, 25};
  static const int32_T iv2[2]{1, 24};
  static const int32_T iv3[2]{1, 16};
  static const int32_T iv4[2]{1, 16};
  static const int32_T iv5[2]{1, 18};
  static const int32_T iv7[2]{1, 16};
  static const char_T u[26]{'n', 'e', 'w', 't', 'o', 'n', '_', 's', 'e',
                            't', 'u', 'p', ' ', 't', 'a', 'k', 'e', 's',
                            ' ', '%', 'f', ' ', 'm', 's', ' ', ' '};
  static const char_T b_u[25]{'d', 'e', 'v', '_', 'S', '_', 'i', 'n', 'v',
                              '_', 'g', ' ', 't', 'a', 'k', 'e', 's', ' ',
                              '%', 'f', ' ', 'm', 's', ' ', ' '};
  static const char_T c_u[24]{'d', 'e', 'v', '_', 'g', '_', 'A',  '_',
                              'Q', '_', 'D', 't', 'a', 'k', 'e',  's',
                              ' ', '%', 'f', ' ', 'm', 's', '\\', 'n'};
  static const char_T f_u[18]{'s', 't', 'e', 'p', ' ', '3', ' ', '3',  ' ',
                              '%', 'f', ' ', 'm', 's', ' ', ' ', '\\', 'n'};
  static const char_T d_u[16]{'s', 't', 'e', 'p', ' ', '3', ' ', '1',
                              ' ', '%', 'f', ' ', 'm', 's', ' ', ' '};
  static const char_T e_u[16]{'s', 't', 'e', 'p', ' ', '3', ' ', '2',
                              ' ', '%', 'f', ' ', 'm', 's', ' ', ' '};
  static const char_T g_u[16]{'s', 't', 'e', 'p', ' ', '9', ' ',  '%',
                              'f', ' ', 'm', 's', ' ', ' ', '\\', 'n'};
  static const char_T cv1[14]{'s', 't', 'e', 'p', ' ', '4', ' ',
                              '%', 'f', ' ', 'm', 's', ' ', ' '};
  static const char_T cv2[14]{'s', 't', 'e', 'p', ' ', '5', ' ',
                              '%', 'f', ' ', 'm', 's', ' ', ' '};
  static const char_T cv3[14]{'s', 't', 'e', 'p', ' ', '6', ' ',
                              '%', 'f', ' ', 'm', 's', ' ', ' '};
  static const char_T cv4[14]{'s', 't', 'e', 'p', ' ', '7', ' ',
                              '%', 'f', ' ', 'm', 's', ' ', ' '};
  static const char_T cv5[14]{'s', 't', 'e', 'p', ' ', '8', ' ',
                              '%', 'f', ' ', 'm', 's', ' ', ' '};
  static const char_T b_cv[7]{'f', 'p', 'r', 'i', 'n', 't', 'f'};
  __m128d r;
  __m128d r1;
  coder::array<real_T, 3U> Q;
  coder::array<real_T, 3U> Q_inv;
  coder::array<real_T, 2U> b_Q_inv;
  coder::array<real_T, 2U> v_temp_index;
  coder::array<real_T, 1U> b;
  coder::array<real_T, 1U> b_R_z;
  coder::array<real_T, 1U> b_v;
  coder::array<real_T, 1U> v;
  coder::array<int32_T, 2U> r2;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emlrtTimespec savedTime;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *g_y;
  const mxArray *m;
  const mxArray *y;
  real_T Y[5800];
  real_T chol_y[5800];
  real_T A_n[3190];
  real_T R_z[326];
  real_T out[326];
  real_T R_w_new[290];
  real_T b_one_minus_jkdeltaw[290];
  real_T dv[290];
  real_T one_minus_jkdeltaw[290];
  real_T a;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  // Function for Newton pipg update.
  // A is the matrix defining the matrix H. For further definition, check
  // data_tranplant file. P is the quadratic cost
  // nx = #state, nu = #control, ne = #equality
  // proj_* are pojrection coefficients. diag_J_k_p, R and temp_prime comes from
  // pipgupdate.alpha, beta are pipg coeffcients. delta_Y is used to stablelize
  // the algo.
  // P, diag_J_k_p must be vector
  //  setup
  st.site = &emlrtRSI;
  coder::tic(st, savedTime);
  for (int32_T i{0}; i <= 614; i += 2) {
    r = _mm_loadu_pd(&R[i]);
    _mm_storeu_pd(&R[i], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }
  for (int32_T b_i{0}; b_i <= 324; b_i += 2) {
    r = _mm_loadu_pd(&R[b_i]);
    _mm_storeu_pd(&R_z[b_i], _mm_div_pd(r, _mm_set1_pd(rho)));
  }
  a = -2.0 * beta;
  st.site = &b_emlrtRSI;
  dev_HZ_g(st, A, R_z, ne, R_w_new);
  for (int32_T i{0}; i <= 288; i += 2) {
    r = _mm_loadu_pd(&R_w_new[i]);
    r1 = _mm_loadu_pd(&R[i + 326]);
    _mm_storeu_pd(
        &R_w_new[i],
        _mm_add_pd(
            _mm_mul_pd(_mm_mul_pd(_mm_set1_pd(a), _mm_loadu_pd(&diag_J_k_p[i])),
                       r),
            _mm_div_pd(r1, _mm_set1_pd(rho))));
  }
  // check?
  st.site = &c_emlrtRSI;
  b_st.site = &c_emlrtRSI;
  a = coder::toc(b_st, savedTime) * 1000.0;
  b_st.site = &sb_emlrtRSI;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(&b_st, 26, m, &u[0]);
  emlrtAssign(&y, m);
  c_st.site = &xg_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(1.0), y, emlrt_marshallOut(a),
                         emlrtMCI),
                   "<output of feval>");
  //  Factorization of J_D
  st.site = &d_emlrtRSI;
  coder::tic(st, savedTime);
  st.site = &e_emlrtRSI;
  dev_S_inv_g(st, temp_prime, nx, nu, proj_index_all, proj_coefficient_all, P,
              alpha, Q, Q_inv);
  // This Q*Q' =  Sinv * J_D; Q_inv * Q_inv' = S^-1;
  st.site = &f_emlrtRSI;
  b_st.site = &f_emlrtRSI;
  a = coder::toc(b_st, savedTime) * 1000.0;
  b_st.site = &sb_emlrtRSI;
  b_y = nullptr;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(&b_st, 25, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_st.site = &xg_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(1.0), b_y, emlrt_marshallOut(a),
                         emlrtMCI),
                   "<output of feval>");
  // step 2 update A
  st.site = &g_emlrtRSI;
  coder::tic(st, savedTime);
  std::copy(&A[0], &A[3190], &A_n[0]);
  st.site = &h_emlrtRSI;
  dev_g_A_Q_D(st, A_n, Q, proj_index_all);
  // H*Q_D
  st.site = &i_emlrtRSI;
  b_st.site = &i_emlrtRSI;
  a = coder::toc(b_st, savedTime) * 1000.0;
  b_st.site = &sb_emlrtRSI;
  c_y = nullptr;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(&b_st, 24, m, &c_u[0]);
  emlrtAssign(&c_y, m);
  c_st.site = &xg_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(1.0), c_y, emlrt_marshallOut(a),
                         emlrtMCI),
                   "<output of feval>");
  // step 3 compute H_Sinv_JD_Ht
  st.site = &j_emlrtRSI;
  coder::tic(st, savedTime);
  st.site = &k_emlrtRSI;
  dev_H_sinv_Ht(st, A_n, Q, proj_index_all, nx, Y);
  st.site = &l_emlrtRSI;
  b_st.site = &l_emlrtRSI;
  a = coder::toc(b_st, savedTime) * 1000.0;
  b_st.site = &sb_emlrtRSI;
  d_y = nullptr;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a(&b_st, 16, m, &d_u[0]);
  emlrtAssign(&d_y, m);
  c_st.site = &xg_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(1.0), d_y, emlrt_marshallOut(a),
                         emlrtMCI),
                   "<output of feval>");
  st.site = &m_emlrtRSI;
  coder::tic(st, savedTime);
  a = alpha * beta;
  for (int32_T i{0}; i <= 5798; i += 2) {
    r = _mm_loadu_pd(&Y[i]);
    _mm_storeu_pd(&Y[i], _mm_mul_pd(r, _mm_set1_pd(a)));
  }
  real_T Y_out[5800];
  //  beta* alpha * H *Sinv* J_D*Ht;
  st.site = &n_emlrtRSI;
  b_st.site = &n_emlrtRSI;
  a = coder::toc(b_st, savedTime) * 1000.0;
  b_st.site = &sb_emlrtRSI;
  e_y = nullptr;
  m = emlrtCreateCharArray(2, &iv4[0]);
  emlrtInitCharArrayR2013a(&b_st, 16, m, &e_u[0]);
  emlrtAssign(&e_y, m);
  c_st.site = &xg_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(1.0), e_y, emlrt_marshallOut(a),
                         emlrtMCI),
                   "<output of feval>");
  st.site = &o_emlrtRSI;
  coder::tic(st, savedTime);
  st.site = &p_emlrtRSI;
  dev_g_multiply_J_k(st, Y, diag_J_k_p, delta_Y, Y_out);
  // final matrix
  st.site = &q_emlrtRSI;
  b_st.site = &q_emlrtRSI;
  a = coder::toc(b_st, savedTime) * 1000.0;
  b_st.site = &sb_emlrtRSI;
  f_y = nullptr;
  m = emlrtCreateCharArray(2, &iv5[0]);
  emlrtInitCharArrayR2013a(&b_st, 18, m, &f_u[0]);
  emlrtAssign(&f_y, m);
  c_st.site = &xg_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(1.0), f_y, emlrt_marshallOut(a),
                         emlrtMCI),
                   "<output of feval>");
  // Step 4 compute
  st.site = &r_emlrtRSI;
  coder::tic(st, savedTime);
  st.site = &s_emlrtRSI;
  dev_cholesky_special(st, Y_out, chol_y);
  st.site = &t_emlrtRSI;
  b_st.site = &t_emlrtRSI;
  a = coder::toc(b_st, savedTime) * 1000.0;
  b_st.site = &sb_emlrtRSI;
  c_st.site = &xg_emlrtRSI;
  d_st.site = &yg_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(1.0), b_emlrt_marshallOut(d_st, cv1),
                         emlrt_marshallOut(a), emlrtMCI),
                   "<output of feval>");
  // Step 5 righthand side
  st.site = &u_emlrtRSI;
  coder::tic(st, savedTime);
  for (int32_T b_i{0}; b_i <= 288; b_i += 2) {
    r = _mm_loadu_pd(&R_w_new[b_i]);
    _mm_storeu_pd(&one_minus_jkdeltaw[b_i],
                  _mm_sub_pd(r, _mm_mul_pd(_mm_loadu_pd(&diag_J_k_p[b_i]), r)));
  }
  // reform this what is the size of diag_J_k_p..*%check
  st.site = &v_emlrtRSI;
  b_st.site = &v_emlrtRSI;
  a = coder::toc(b_st, savedTime) * 1000.0;
  b_st.site = &sb_emlrtRSI;
  c_st.site = &xg_emlrtRSI;
  d_st.site = &yg_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(1.0), b_emlrt_marshallOut(d_st, cv2),
                         emlrt_marshallOut(a), emlrtMCI),
                   "<output of feval>");
  // %%%%3
  st.site = &w_emlrtRSI;
  coder::tic(st, savedTime);
  st.site = &x_emlrtRSI;
  // trans is a true or false. if trans = false we compute Q'v . otherwise Qv
  std::memset(&out[0], 0, 326U * sizeof(real_T));
  loop_ub_tmp = Q_inv.size(1);
  loop_ub = Q_inv.size(0);
  for (int32_T b_i{0}; b_i < 30; b_i++) {
    if (b_i + 1 < 30) {
      a = nx + nu;
      if (muDoubleScalarIsNaN(a)) {
        v_temp_index.set_size(&s_emlrtRTEI, &st, 1, 1);
        v_temp_index[0] = rtNaN;
      } else if (a < 1.0) {
        v_temp_index.set_size(&s_emlrtRTEI, &st, v_temp_index.size(0), 0);
      } else {
        v_temp_index.set_size(&s_emlrtRTEI, &st, 1,
                              static_cast<int32_T>(a - 1.0) + 1);
        b_loop_ub = static_cast<int32_T>(a - 1.0);
        for (int32_T i{0}; i <= b_loop_ub; i++) {
          v_temp_index[i] = static_cast<real_T>(i) + 1.0;
        }
      }
      v_temp_index.set_size(&u_emlrtRTEI, &st, 1, v_temp_index.size(1));
      a *= (static_cast<real_T>(b_i) + 1.0) - 1.0;
      b_loop_ub = v_temp_index.size(1) - 1;
      scalarLB = (v_temp_index.size(1) / 2) << 1;
      vectorUB = scalarLB - 2;
      for (int32_T i{0}; i <= vectorUB; i += 2) {
        r = _mm_loadu_pd(&v_temp_index[i]);
        _mm_storeu_pd(&v_temp_index[i], _mm_add_pd(_mm_set1_pd(a), r));
      }
      for (int32_T i{scalarLB}; i <= b_loop_ub; i++) {
        v_temp_index[i] = a + v_temp_index[i];
      }
    } else {
      if (muDoubleScalarIsNaN(nx)) {
        v_temp_index.set_size(&s_emlrtRTEI, &st, 1, 1);
        v_temp_index[0] = rtNaN;
      } else if (nx < 1.0) {
        v_temp_index.set_size(&s_emlrtRTEI, &st, v_temp_index.size(0), 0);
      } else {
        v_temp_index.set_size(&s_emlrtRTEI, &st, 1,
                              static_cast<int32_T>(nx - 1.0) + 1);
        b_loop_ub = static_cast<int32_T>(nx - 1.0);
        for (int32_T i{0}; i <= b_loop_ub; i++) {
          v_temp_index[i] = static_cast<real_T>(i) + 1.0;
        }
      }
      v_temp_index.set_size(&t_emlrtRTEI, &st, 1, v_temp_index.size(1));
      a = 29.0 * (nx + nu);
      b_loop_ub = v_temp_index.size(1) - 1;
      scalarLB = (v_temp_index.size(1) / 2) << 1;
      vectorUB = scalarLB - 2;
      for (int32_T i{0}; i <= vectorUB; i += 2) {
        r = _mm_loadu_pd(&v_temp_index[i]);
        _mm_storeu_pd(&v_temp_index[i], _mm_add_pd(_mm_set1_pd(a), r));
      }
      for (int32_T i{scalarLB}; i <= b_loop_ub; i++) {
        v_temp_index[i] = a + v_temp_index[i];
      }
    }
    scalarLB = v_temp_index.size(1);
    for (int32_T i{0}; i < scalarLB; i++) {
      if (v_temp_index[i] !=
          static_cast<int32_T>(muDoubleScalarFloor(v_temp_index[i]))) {
        emlrtIntegerCheckR2012b(v_temp_index[i], &emlrtDCI, &st);
      }
      vectorUB = static_cast<int32_T>(v_temp_index[i]);
      if ((vectorUB < 1) || (vectorUB > 326)) {
        emlrtDynamicBoundsCheckR2012b(vectorUB, 1, 326, &emlrtBCI, &st);
      }
    }
    r2.set_size(&v_emlrtRTEI, &st, 1, v_temp_index.size(1));
    b_R_z.set_size(&w_emlrtRTEI, &st, v_temp_index.size(1));
    for (int32_T i{0}; i < scalarLB; i++) {
      a = v_temp_index[i];
      r2[i] = static_cast<int32_T>(a);
      b_R_z[i] = R_z[static_cast<int32_T>(a) - 1];
    }
    b_Q_inv.set_size(&x_emlrtRTEI, &st, Q_inv.size(0), loop_ub_tmp);
    for (int32_T i{0}; i < loop_ub_tmp; i++) {
      for (vectorUB = 0; vectorUB < loop_ub; vectorUB++) {
        b_Q_inv[vectorUB + b_Q_inv.size(0) * i] =
            Q_inv[(vectorUB + Q_inv.size(0) * i) +
                  Q_inv.size(0) * Q_inv.size(1) * b_i];
      }
    }
    b_st.site = &hg_emlrtRSI;
    Q_v_unit(b_st, b_R_z, b_Q_inv, &proj_index_all[22 * b_i], b);
    if (b.size(0) != v_temp_index.size(1)) {
      emlrtSubAssignSizeCheck1dR2017a(v_temp_index.size(1), b.size(0),
                                      &b_emlrtECI, &st);
    }
    for (int32_T i{0}; i < scalarLB; i++) {
      out[r2[i] - 1] = b[i];
    }
    // Specified! only for the LCvx case
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  st.site = &x_emlrtRSI;
  // trans is a true or false. if trans = false we compute Q'v . otherwise Qv
  std::memset(&R_z[0], 0, 326U * sizeof(real_T));
  loop_ub = Q_inv.size(0);
  for (int32_T b_i{0}; b_i < 30; b_i++) {
    if (b_i + 1 < 30) {
      a = nx + nu;
      if (muDoubleScalarIsNaN(a)) {
        v_temp_index.set_size(&s_emlrtRTEI, &st, 1, 1);
        v_temp_index[0] = rtNaN;
      } else if (a < 1.0) {
        v_temp_index.set_size(&s_emlrtRTEI, &st, v_temp_index.size(0), 0);
      } else {
        v_temp_index.set_size(&s_emlrtRTEI, &st, 1,
                              static_cast<int32_T>(a - 1.0) + 1);
        b_loop_ub = static_cast<int32_T>(a - 1.0);
        for (int32_T i{0}; i <= b_loop_ub; i++) {
          v_temp_index[i] = static_cast<real_T>(i) + 1.0;
        }
      }
      v_temp_index.set_size(&u_emlrtRTEI, &st, 1, v_temp_index.size(1));
      a *= (static_cast<real_T>(b_i) + 1.0) - 1.0;
      b_loop_ub = v_temp_index.size(1) - 1;
      scalarLB = (v_temp_index.size(1) / 2) << 1;
      vectorUB = scalarLB - 2;
      for (int32_T i{0}; i <= vectorUB; i += 2) {
        r = _mm_loadu_pd(&v_temp_index[i]);
        _mm_storeu_pd(&v_temp_index[i], _mm_add_pd(_mm_set1_pd(a), r));
      }
      for (int32_T i{scalarLB}; i <= b_loop_ub; i++) {
        v_temp_index[i] = a + v_temp_index[i];
      }
    } else {
      if (muDoubleScalarIsNaN(nx)) {
        v_temp_index.set_size(&s_emlrtRTEI, &st, 1, 1);
        v_temp_index[0] = rtNaN;
      } else if (nx < 1.0) {
        v_temp_index.set_size(&s_emlrtRTEI, &st, v_temp_index.size(0), 0);
      } else {
        v_temp_index.set_size(&s_emlrtRTEI, &st, 1,
                              static_cast<int32_T>(nx - 1.0) + 1);
        b_loop_ub = static_cast<int32_T>(nx - 1.0);
        for (int32_T i{0}; i <= b_loop_ub; i++) {
          v_temp_index[i] = static_cast<real_T>(i) + 1.0;
        }
      }
      v_temp_index.set_size(&t_emlrtRTEI, &st, 1, v_temp_index.size(1));
      a = 29.0 * (nx + nu);
      b_loop_ub = v_temp_index.size(1) - 1;
      scalarLB = (v_temp_index.size(1) / 2) << 1;
      vectorUB = scalarLB - 2;
      for (int32_T i{0}; i <= vectorUB; i += 2) {
        r = _mm_loadu_pd(&v_temp_index[i]);
        _mm_storeu_pd(&v_temp_index[i], _mm_add_pd(_mm_set1_pd(a), r));
      }
      for (int32_T i{scalarLB}; i <= b_loop_ub; i++) {
        v_temp_index[i] = a + v_temp_index[i];
      }
    }
    scalarLB = v_temp_index.size(1);
    for (int32_T i{0}; i < scalarLB; i++) {
      if (v_temp_index[i] !=
          static_cast<int32_T>(muDoubleScalarFloor(v_temp_index[i]))) {
        emlrtIntegerCheckR2012b(v_temp_index[i], &emlrtDCI, &st);
      }
      vectorUB = static_cast<int32_T>(v_temp_index[i]);
      if ((vectorUB < 1) || (vectorUB > 326)) {
        emlrtDynamicBoundsCheckR2012b(vectorUB, 1, 326, &emlrtBCI, &st);
      }
    }
    r2.set_size(&v_emlrtRTEI, &st, 1, v_temp_index.size(1));
    b_R_z.set_size(&w_emlrtRTEI, &st, v_temp_index.size(1));
    for (int32_T i{0}; i < scalarLB; i++) {
      a = v_temp_index[i];
      r2[i] = static_cast<int32_T>(a);
      b_R_z[i] = out[static_cast<int32_T>(a) - 1];
    }
    b_Q_inv.set_size(&x_emlrtRTEI, &st, Q_inv.size(0), loop_ub_tmp);
    for (int32_T i{0}; i < loop_ub_tmp; i++) {
      for (vectorUB = 0; vectorUB < loop_ub; vectorUB++) {
        b_Q_inv[vectorUB + b_Q_inv.size(0) * i] =
            Q_inv[(vectorUB + Q_inv.size(0) * i) +
                  Q_inv.size(0) * Q_inv.size(1) * b_i];
      }
    }
    b_st.site = &hg_emlrtRSI;
    b_Q_v_unit(b_st, b_R_z, b_Q_inv, &proj_index_all[22 * b_i], b);
    if (b.size(0) != v_temp_index.size(1)) {
      emlrtSubAssignSizeCheck1dR2017a(v_temp_index.size(1), b.size(0),
                                      &b_emlrtECI, &st);
    }
    for (int32_T i{0}; i < scalarLB; i++) {
      R_z[r2[i] - 1] = b[i];
    }
    // Specified! only for the LCvx case
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  st.site = &y_emlrtRSI;
  b_st.site = &y_emlrtRSI;
  a = coder::toc(b_st, savedTime) * 1000.0;
  b_st.site = &sb_emlrtRSI;
  c_st.site = &xg_emlrtRSI;
  d_st.site = &yg_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(1.0), b_emlrt_marshallOut(d_st, cv3),
                         emlrt_marshallOut(a), emlrtMCI),
                   "<output of feval>");
  st.site = &ab_emlrtRSI;
  coder::tic(st, savedTime);
  st.site = &bb_emlrtRSI;
  dev_HZ_g(st, A, R_z, ne, dv);
  for (int32_T i{0}; i <= 288; i += 2) {
    r = _mm_loadu_pd(&one_minus_jkdeltaw[i]);
    _mm_storeu_pd(&b_one_minus_jkdeltaw[i],
                  _mm_sub_pd(r, _mm_mul_pd(_mm_loadu_pd(&diag_J_k_p[i]), r)));
  }
  st.site = &bb_emlrtRSI;
  dev_Y_multi_vector(st, Y, b_one_minus_jkdeltaw, one_minus_jkdeltaw);
  for (int32_T i{0}; i <= 288; i += 2) {
    __m128d r3;
    r = _mm_loadu_pd(&dv[i]);
    r1 = _mm_loadu_pd(&R_w_new[i]);
    r3 = _mm_loadu_pd(&one_minus_jkdeltaw[i]);
    _mm_storeu_pd(
        &R_w_new[i],
        _mm_sub_pd(
            _mm_add_pd(r1, _mm_mul_pd(_mm_mul_pd(_mm_set1_pd(beta),
                                                 _mm_loadu_pd(&diag_J_k_p[i])),
                                      r)),
            r3));
  }
  st.site = &cb_emlrtRSI;
  b_st.site = &cb_emlrtRSI;
  a = coder::toc(b_st, savedTime) * 1000.0;
  b_st.site = &sb_emlrtRSI;
  c_st.site = &xg_emlrtRSI;
  d_st.site = &yg_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(1.0), b_emlrt_marshallOut(d_st, cv4),
                         emlrt_marshallOut(a), emlrtMCI),
                   "<output of feval>");
  // solve dw
  st.site = &db_emlrtRSI;
  coder::tic(st, savedTime);
  st.site = &eb_emlrtRSI;
  dev_solve_Lv(st, chol_y, R_w_new, dv);
  st.site = &eb_emlrtRSI;
  dev_solve_LTv(st, chol_y, dv, one_minus_jkdeltaw);
  st.site = &fb_emlrtRSI;
  b_st.site = &fb_emlrtRSI;
  a = coder::toc(b_st, savedTime) * 1000.0;
  b_st.site = &sb_emlrtRSI;
  c_st.site = &xg_emlrtRSI;
  d_st.site = &yg_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(1.0), b_emlrt_marshallOut(d_st, cv5),
                         emlrt_marshallOut(a), emlrtMCI),
                   "<output of feval>");
  st.site = &gb_emlrtRSI;
  coder::tic(st, savedTime);
  st.site = &hb_emlrtRSI;
  b_st.site = &hb_emlrtRSI;
  dev_HtZ_g(b_st, A, one_minus_jkdeltaw, ne, v);
  // trans is a true or false. if trans = false we compute Q'v . otherwise Qv
  loop_ub = v.size(0);
  b_R_z.set_size(&y_emlrtRTEI, &st, v.size(0));
  for (int32_T i{0}; i < loop_ub; i++) {
    b_R_z[i] = 0.0;
  }
  loop_ub_tmp = Q.size(1);
  b_loop_ub = Q.size(0);
  for (int32_T b_i{0}; b_i < 30; b_i++) {
    int32_T iv6[2];
    int32_T c_loop_ub;
    if (b_i + 1 < 30) {
      a = nx + nu;
      if (muDoubleScalarIsNaN(a)) {
        v_temp_index.set_size(&s_emlrtRTEI, &st, 1, 1);
        v_temp_index[0] = rtNaN;
      } else if (a < 1.0) {
        v_temp_index.set_size(&s_emlrtRTEI, &st, v_temp_index.size(0), 0);
      } else {
        v_temp_index.set_size(&s_emlrtRTEI, &st, 1,
                              static_cast<int32_T>(a - 1.0) + 1);
        c_loop_ub = static_cast<int32_T>(a - 1.0);
        for (int32_T i{0}; i <= c_loop_ub; i++) {
          v_temp_index[i] = static_cast<real_T>(i) + 1.0;
        }
      }
      v_temp_index.set_size(&u_emlrtRTEI, &st, 1, v_temp_index.size(1));
      a *= (static_cast<real_T>(b_i) + 1.0) - 1.0;
      c_loop_ub = v_temp_index.size(1) - 1;
      scalarLB = (v_temp_index.size(1) / 2) << 1;
      vectorUB = scalarLB - 2;
      for (int32_T i{0}; i <= vectorUB; i += 2) {
        r = _mm_loadu_pd(&v_temp_index[i]);
        _mm_storeu_pd(&v_temp_index[i], _mm_add_pd(_mm_set1_pd(a), r));
      }
      for (int32_T i{scalarLB}; i <= c_loop_ub; i++) {
        v_temp_index[i] = a + v_temp_index[i];
      }
    } else {
      if (muDoubleScalarIsNaN(nx)) {
        v_temp_index.set_size(&s_emlrtRTEI, &st, 1, 1);
        v_temp_index[0] = rtNaN;
      } else if (nx < 1.0) {
        v_temp_index.set_size(&s_emlrtRTEI, &st, v_temp_index.size(0), 0);
      } else {
        v_temp_index.set_size(&s_emlrtRTEI, &st, 1,
                              static_cast<int32_T>(nx - 1.0) + 1);
        c_loop_ub = static_cast<int32_T>(nx - 1.0);
        for (int32_T i{0}; i <= c_loop_ub; i++) {
          v_temp_index[i] = static_cast<real_T>(i) + 1.0;
        }
      }
      v_temp_index.set_size(&t_emlrtRTEI, &st, 1, v_temp_index.size(1));
      a = 29.0 * (nx + nu);
      c_loop_ub = v_temp_index.size(1) - 1;
      scalarLB = (v_temp_index.size(1) / 2) << 1;
      vectorUB = scalarLB - 2;
      for (int32_T i{0}; i <= vectorUB; i += 2) {
        r = _mm_loadu_pd(&v_temp_index[i]);
        _mm_storeu_pd(&v_temp_index[i], _mm_add_pd(_mm_set1_pd(a), r));
      }
      for (int32_T i{scalarLB}; i <= c_loop_ub; i++) {
        v_temp_index[i] = a + v_temp_index[i];
      }
    }
    iv6[0] = (*(int32_T(*)[2])v_temp_index.size())[0];
    iv6[1] = (*(int32_T(*)[2])v_temp_index.size())[1];
    b_st.site = &wg_emlrtRSI;
    coder::internal::indexShapeCheck(b_st, v.size(0), iv6);
    scalarLB = v_temp_index.size(1);
    for (int32_T i{0}; i < scalarLB; i++) {
      if (v_temp_index[i] !=
          static_cast<int32_T>(muDoubleScalarFloor(v_temp_index[i]))) {
        emlrtIntegerCheckR2012b(v_temp_index[i], &emlrtDCI, &st);
      }
      vectorUB = static_cast<int32_T>(v_temp_index[i]);
      if ((vectorUB < 1) || (vectorUB > loop_ub)) {
        emlrtDynamicBoundsCheckR2012b(vectorUB, 1, loop_ub, &b_emlrtBCI, &st);
      }
    }
    r2.set_size(&v_emlrtRTEI, &st, 1, v_temp_index.size(1));
    for (int32_T i{0}; i < scalarLB; i++) {
      vectorUB = static_cast<int32_T>(v_temp_index[i]);
      if ((vectorUB < 1) || (vectorUB > loop_ub)) {
        emlrtDynamicBoundsCheckR2012b(vectorUB, 1, loop_ub, &c_emlrtBCI, &st);
      }
      r2[i] = vectorUB;
    }
    b_v.set_size(&w_emlrtRTEI, &st, v_temp_index.size(1));
    for (int32_T i{0}; i < scalarLB; i++) {
      b_v[i] = v[static_cast<int32_T>(v_temp_index[i]) - 1];
    }
    b_Q_inv.set_size(&x_emlrtRTEI, &st, Q.size(0), loop_ub_tmp);
    for (int32_T i{0}; i < loop_ub_tmp; i++) {
      for (vectorUB = 0; vectorUB < b_loop_ub; vectorUB++) {
        b_Q_inv[vectorUB + b_Q_inv.size(0) * i] =
            Q[(vectorUB + Q.size(0) * i) + Q.size(0) * Q.size(1) * b_i];
      }
    }
    b_st.site = &hg_emlrtRSI;
    Q_v_unit(b_st, b_v, b_Q_inv, &proj_index_all[22 * b_i], b);
    c_loop_ub = r2.size(1);
    if (b.size(0) != r2.size(1)) {
      emlrtSubAssignSizeCheck1dR2017a(r2.size(1), b.size(0), &b_emlrtECI, &st);
    }
    for (int32_T i{0}; i < c_loop_ub; i++) {
      b_R_z[r2[i] - 1] = b[i];
    }
    // Specified! only for the LCvx case
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  st.site = &hb_emlrtRSI;
  dev_g_Q_multi_vector(st, Q, b_R_z, proj_index_all, nx, nu, b);
  loop_ub = b.size(0);
  scalarLB = (b.size(0) / 2) << 1;
  vectorUB = scalarLB - 2;
  for (int32_T i{0}; i <= vectorUB; i += 2) {
    r = _mm_loadu_pd(&b[i]);
    _mm_storeu_pd(&b[i], _mm_mul_pd(_mm_set1_pd(alpha), r));
  }
  for (int32_T i{scalarLB}; i < loop_ub; i++) {
    b[i] = alpha * b[i];
  }
  if ((b.size(0) != 326) && (b.size(0) != 1)) {
    emlrtDimSizeImpxCheckR2021b(326, b.size(0), &emlrtECI, (emlrtConstCTX)sp);
  }
  if (b.size(0) == 326) {
    for (int32_T i{0}; i <= 324; i += 2) {
      r = _mm_loadu_pd(&R_z[i]);
      r1 = _mm_loadu_pd(&b[i]);
      _mm_storeu_pd(&dzw[i], _mm_sub_pd(r, r1));
    }
    std::copy(&one_minus_jkdeltaw[0], &one_minus_jkdeltaw[290], &dzw[326]);
  } else {
    binary_expand_op(dzw, R_z, b, one_minus_jkdeltaw);
  }
  st.site = &ib_emlrtRSI;
  b_st.site = &ib_emlrtRSI;
  a = coder::toc(b_st, savedTime) * 1000.0;
  b_st.site = &sb_emlrtRSI;
  g_y = nullptr;
  m = emlrtCreateCharArray(2, &iv7[0]);
  emlrtInitCharArrayR2013a(&b_st, 16, m, &g_u[0]);
  emlrtAssign(&g_y, m);
  c_st.site = &xg_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(1.0), g_y, emlrt_marshallOut(a),
                         emlrtMCI),
                   "<output of feval>");
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (dev_g_newton_pipg_update_withtimer.cpp)
