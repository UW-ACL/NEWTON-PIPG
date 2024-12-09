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
#include "dev_newtonpipg_g_with_timer_data.h"
#include "dev_newtonpipg_g_with_timer_mexutil.h"
#include "dev_newtonpipg_g_with_timer_types.h"
#include "dev_solve_LTv.h"
#include "dev_solve_Lv.h"
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
static emlrtRSInfo ic_emlrtRSI{
    12,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo jc_emlrtRSI{
    17,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo kc_emlrtRSI{
    19,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo lc_emlrtRSI{
    21,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo mc_emlrtRSI{
    22,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo nc_emlrtRSI{
    23,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo oc_emlrtRSI{
    25,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo pc_emlrtRSI{
    26,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo qc_emlrtRSI{
    27,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo rc_emlrtRSI{
    29,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo sc_emlrtRSI{
    30,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo tc_emlrtRSI{
    31,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo uc_emlrtRSI{
    32,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo vc_emlrtRSI{
    34,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo wc_emlrtRSI{
    35,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo xc_emlrtRSI{
    36,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo yc_emlrtRSI{
    37,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo ad_emlrtRSI{
    39,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo bd_emlrtRSI{
    40,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo cd_emlrtRSI{
    41,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo dd_emlrtRSI{
    43,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo ed_emlrtRSI{
    45,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo fd_emlrtRSI{
    47,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo gd_emlrtRSI{
    48,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo hd_emlrtRSI{
    49,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo id_emlrtRSI{
    50,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo jd_emlrtRSI{
    51,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo kd_emlrtRSI{
    52,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo ld_emlrtRSI{
    54,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo md_emlrtRSI{
    55,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo nd_emlrtRSI{
    56,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo od_emlrtRSI{
    57,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo pd_emlrtRSI{
    58,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtRSInfo qd_emlrtRSI{
    60,                                   // lineNo
    "dev_g_newton_pipg_update_withtimer", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pathName
};

static emlrtECInfo w_emlrtECI{
    1,                                    // nDims
    58,                                   // lineNo
    11,                                   // colNo
    "dev_g_newton_pipg_update_withtimer", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_newton_pipg_update_withtimer.m" // pName
};

// Function Declarations
static void binary_expand_op_11(real_T in1[616], const real_T in2[326],
                                const coder::array<real_T, 1U> &in3,
                                const real_T in4[290]);

static const mxArray *d_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[16]);

static const mxArray *e_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[14]);

// Function Definitions
static void binary_expand_op_11(real_T in1[616], const real_T in2[326],
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

static const mxArray *d_emlrt_marshallOut(const emlrtStack &sp,
                                          const char_T u[16])
{
  static const int32_T iv[2]{1, 16};
  const mxArray *m;
  const mxArray *y;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a((emlrtConstCTX)&sp, 16, m, &u[0]);
  emlrtAssign(&y, m);
  return y;
}

static const mxArray *e_emlrt_marshallOut(const emlrtStack &sp,
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

void e_dev_g_newton_pipg_update_with(
    c_dev_newtonpipg_g_with_timerSt *SD, const emlrtStack &sp,
    const real_T A[3190], const real_T P[326], real_T nx, real_T nu, real_T ne,
    const real_T proj_index_all[660], const real_T proj_coefficient_all[660],
    const real_T diag_J_k_p[290], const real_T temp_prime[326], real_T R[616],
    real_T alpha, real_T beta, real_T rho, real_T delta_Y, real_T dzw[616])
{
  static const int32_T iv[2]{1, 26};
  static const int32_T iv1[2]{1, 25};
  static const int32_T iv2[2]{1, 24};
  static const int32_T iv3[2]{1, 18};
  static const char_T u[26]{'n', 'e', 'w', 't', 'o', 'n', '_', 's', 'e',
                            't', 'u', 'p', ' ', 't', 'a', 'k', 'e', 's',
                            ' ', '%', 'f', ' ', 'm', 's', ' ', ' '};
  static const char_T b_u[25]{'d', 'e', 'v', '_', 'S', '_', 'i', 'n', 'v',
                              '_', 'g', ' ', 't', 'a', 'k', 'e', 's', ' ',
                              '%', 'f', ' ', 'm', 's', ' ', ' '};
  static const char_T c_u[24]{'d', 'e', 'v', '_', 'g', '_', 'A',  '_',
                              'Q', '_', 'D', 't', 'a', 'k', 'e',  's',
                              ' ', '%', 'f', ' ', 'm', 's', '\\', 'n'};
  static const char_T d_u[18]{'s', 't', 'e', 'p', ' ', '3', ' ', '3',  ' ',
                              '%', 'f', ' ', 'm', 's', ' ', ' ', '\\', 'n'};
  static const char_T cv1[16]{'s', 't', 'e', 'p', ' ', '3', ' ', '1',
                              ' ', '%', 'f', ' ', 'm', 's', ' ', ' '};
  static const char_T cv2[16]{'s', 't', 'e', 'p', ' ', '3', ' ', '2',
                              ' ', '%', 'f', ' ', 'm', 's', ' ', ' '};
  static const char_T cv8[16]{'s', 't', 'e', 'p', ' ', '9', ' ',  '%',
                              'f', ' ', 'm', 's', ' ', ' ', '\\', 'n'};
  static const char_T cv3[14]{'s', 't', 'e', 'p', ' ', '4', ' ',
                              '%', 'f', ' ', 'm', 's', ' ', ' '};
  static const char_T cv4[14]{'s', 't', 'e', 'p', ' ', '5', ' ',
                              '%', 'f', ' ', 'm', 's', ' ', ' '};
  static const char_T cv5[14]{'s', 't', 'e', 'p', ' ', '6', ' ',
                              '%', 'f', ' ', 'm', 's', ' ', ' '};
  static const char_T cv6[14]{'s', 't', 'e', 'p', ' ', '7', ' ',
                              '%', 'f', ' ', 'm', 's', ' ', ' '};
  static const char_T cv7[14]{'s', 't', 'e', 'p', ' ', '8', ' ',
                              '%', 'f', ' ', 'm', 's', ' ', ' '};
  static const char_T b_cv[7]{'f', 'p', 'r', 'i', 'n', 't', 'f'};
  __m128d r;
  __m128d r1;
  emlrtProfilerSentinel b_profilerSentinel;
  emlrtProfilerSentinel profilerSentinel;
  coder::array<real_T, 3U> Q;
  coder::array<real_T, 3U> Q_inv;
  coder::array<real_T, 2U> b_Q_inv;
  coder::array<real_T, 2U> v_temp_index;
  coder::array<real_T, 1U> b;
  coder::array<real_T, 1U> b_R_z;
  coder::array<int16_T, 2U> r2;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *m;
  const mxArray *y;
  real_T chol_y[5800];
  real_T A_n[3190];
  real_T R_z[326];
  real_T out[326];
  real_T R_w_new[290];
  real_T b_one_minus_jkdeltaw[290];
  real_T dv[290];
  real_T one_minus_jkdeltaw[290];
  real_T a;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &b_st;
  d_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  emlrtMEXProfilingFunctionEntryCPP((char_T *)c_dev_g_newton_pipg_update_with,
                                    static_cast<boolean_T>(isMexOutdated),
                                    &profilerSentinel);
  // Function for Newton pipg update.
  // A is the matrix defining the matrix H. For further definition, check
  // data_tranplant file. P is the quadratic cost
  // nx = #state, nu = #control, ne = #equality
  // proj_* are pojrection coefficients. diag_J_k_p, R and temp_prime comes from
  // pipgupdate.alpha, beta are pipg coeffcients. delta_Y is used to stablelize
  // the algo.
  // P, diag_J_k_p must be vector
  //  setup
  emlrtMEXProfilingStatement(1, static_cast<boolean_T>(isMexOutdated));
  st.site = &ic_emlrtRSI;
  coder::tic(st);
  emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
  for (int32_T i{0}; i <= 614; i += 2) {
    r = _mm_loadu_pd(&R[i]);
    _mm_storeu_pd(&R[i], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }
  emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
  for (int32_T b_i{0}; b_i <= 324; b_i += 2) {
    r = _mm_loadu_pd(&R[b_i]);
    _mm_storeu_pd(&R_z[b_i], _mm_div_pd(r, _mm_set1_pd(rho)));
  }
  emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
  a = -2.0 * beta;
  st.site = &jc_emlrtRSI;
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
  emlrtMEXProfilingStatement(8, static_cast<boolean_T>(isMexOutdated));
  st.site = &kc_emlrtRSI;
  b_st.site = &kc_emlrtRSI;
  a = coder::toc(b_st) * 1000.0;
  b_st.site = &hc_emlrtRSI;
  y = nullptr;
  m = emlrtCreateCharArray(2, &iv[0]);
  emlrtInitCharArrayR2013a(&b_st, 26, m, &u[0]);
  emlrtAssign(&y, m);
  c_st.site = &pi_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(static_cast<real_T>(1.0)), y,
                         emlrt_marshallOut(a), emlrtMCI),
                   "<output of feval>");
  //  Factorization of J_D
  emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
  st.site = &lc_emlrtRSI;
  coder::tic(st);
  emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
  st.site = &mc_emlrtRSI;
  dev_S_inv_g(st, temp_prime, nx, nu, proj_index_all, proj_coefficient_all, P,
              alpha, Q, Q_inv);
  // This Q*Q' =  Sinv * J_D; Q_inv * Q_inv' = S^-1;
  emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
  st.site = &nc_emlrtRSI;
  b_st.site = &nc_emlrtRSI;
  a = coder::toc(b_st) * 1000.0;
  b_st.site = &hc_emlrtRSI;
  b_y = nullptr;
  m = emlrtCreateCharArray(2, &iv1[0]);
  emlrtInitCharArrayR2013a(&b_st, 25, m, &b_u[0]);
  emlrtAssign(&b_y, m);
  c_st.site = &pi_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(static_cast<real_T>(1.0)), b_y,
                         emlrt_marshallOut(a), emlrtMCI),
                   "<output of feval>");
  // 0.174
  // step 2 update A
  emlrtMEXProfilingStatement(12, static_cast<boolean_T>(isMexOutdated));
  st.site = &oc_emlrtRSI;
  coder::tic(st);
  emlrtMEXProfilingStatement(13, static_cast<boolean_T>(isMexOutdated));
  std::copy(&A[0], &A[3190], &A_n[0]);
  st.site = &pc_emlrtRSI;
  dev_g_A_Q_D(st, A_n, Q, proj_index_all);
  // H*Q_D
  emlrtMEXProfilingStatement(14, static_cast<boolean_T>(isMexOutdated));
  st.site = &qc_emlrtRSI;
  b_st.site = &qc_emlrtRSI;
  a = coder::toc(b_st) * 1000.0;
  b_st.site = &hc_emlrtRSI;
  c_y = nullptr;
  m = emlrtCreateCharArray(2, &iv2[0]);
  emlrtInitCharArrayR2013a(&b_st, 24, m, &c_u[0]);
  emlrtAssign(&c_y, m);
  c_st.site = &pi_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(static_cast<real_T>(1.0)), c_y,
                         emlrt_marshallOut(a), emlrtMCI),
                   "<output of feval>");
  // step 3 compute H_Sinv_JD_Ht%0.006
  emlrtMEXProfilingStatement(15, static_cast<boolean_T>(isMexOutdated));
  st.site = &rc_emlrtRSI;
  coder::tic(st);
  emlrtMEXProfilingStatement(16, static_cast<boolean_T>(isMexOutdated));
  st.site = &sc_emlrtRSI;
  dev_H_sinv_Ht(st, A_n, Q, proj_index_all, nx, SD->f0.Y);
  emlrtMEXProfilingStatement(17, static_cast<boolean_T>(isMexOutdated));
  st.site = &tc_emlrtRSI;
  b_st.site = &tc_emlrtRSI;
  a = coder::toc(b_st) * 1000.0;
  b_st.site = &hc_emlrtRSI;
  c_st.site = &pi_emlrtRSI;
  d_st.site = &qi_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(static_cast<real_T>(1.0)),
                         d_emlrt_marshallOut(d_st, cv1), emlrt_marshallOut(a),
                         emlrtMCI),
                   "<output of feval>");
  // 0.06
  emlrtMEXProfilingStatement(18, static_cast<boolean_T>(isMexOutdated));
  st.site = &uc_emlrtRSI;
  coder::tic(st);
  emlrtMEXProfilingStatement(19, static_cast<boolean_T>(isMexOutdated));
  a = alpha * beta;
  for (int32_T i{0}; i <= 5798; i += 2) {
    r = _mm_loadu_pd(&SD->f0.Y[i]);
    _mm_storeu_pd(&SD->f0.Y[i], _mm_mul_pd(r, _mm_set1_pd(a)));
  }
  real_T Y_out[5800];
  //  beta* alpha * H *Sinv* J_D*Ht;
  emlrtMEXProfilingStatement(20, static_cast<boolean_T>(isMexOutdated));
  st.site = &vc_emlrtRSI;
  b_st.site = &vc_emlrtRSI;
  a = coder::toc(b_st) * 1000.0;
  b_st.site = &hc_emlrtRSI;
  c_st.site = &pi_emlrtRSI;
  d_st.site = &qi_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(static_cast<real_T>(1.0)),
                         d_emlrt_marshallOut(d_st, cv2), emlrt_marshallOut(a),
                         emlrtMCI),
                   "<output of feval>");
  emlrtMEXProfilingStatement(21, static_cast<boolean_T>(isMexOutdated));
  st.site = &wc_emlrtRSI;
  coder::tic(st);
  emlrtMEXProfilingStatement(22, static_cast<boolean_T>(isMexOutdated));
  st.site = &xc_emlrtRSI;
  dev_g_multiply_J_k(st, SD->f0.Y, diag_J_k_p, delta_Y, Y_out);
  // final matrix
  emlrtMEXProfilingStatement(23, static_cast<boolean_T>(isMexOutdated));
  st.site = &yc_emlrtRSI;
  b_st.site = &yc_emlrtRSI;
  a = coder::toc(b_st) * 1000.0;
  b_st.site = &hc_emlrtRSI;
  d_y = nullptr;
  m = emlrtCreateCharArray(2, &iv3[0]);
  emlrtInitCharArrayR2013a(&b_st, 18, m, &d_u[0]);
  emlrtAssign(&d_y, m);
  c_st.site = &pi_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(static_cast<real_T>(1.0)), d_y,
                         emlrt_marshallOut(a), emlrtMCI),
                   "<output of feval>");
  // Step 4 compute %0.06
  emlrtMEXProfilingStatement(24, static_cast<boolean_T>(isMexOutdated));
  st.site = &ad_emlrtRSI;
  coder::tic(st);
  emlrtMEXProfilingStatement(25, static_cast<boolean_T>(isMexOutdated));
  st.site = &bd_emlrtRSI;
  dev_cholesky_special(st, Y_out, chol_y);
  emlrtMEXProfilingStatement(26, static_cast<boolean_T>(isMexOutdated));
  st.site = &cd_emlrtRSI;
  b_st.site = &cd_emlrtRSI;
  a = coder::toc(b_st) * 1000.0;
  b_st.site = &hc_emlrtRSI;
  c_st.site = &pi_emlrtRSI;
  d_st.site = &qi_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(static_cast<real_T>(1.0)),
                         e_emlrt_marshallOut(d_st, cv3), emlrt_marshallOut(a),
                         emlrtMCI),
                   "<output of feval>");
  // 0.058
  // Step 5 righthand side
  emlrtMEXProfilingStatement(27, static_cast<boolean_T>(isMexOutdated));
  st.site = &dd_emlrtRSI;
  coder::tic(st);
  emlrtMEXProfilingStatement(28, static_cast<boolean_T>(isMexOutdated));
  for (int32_T b_i{0}; b_i <= 288; b_i += 2) {
    r = _mm_loadu_pd(&R_w_new[b_i]);
    _mm_storeu_pd(&one_minus_jkdeltaw[b_i],
                  _mm_sub_pd(r, _mm_mul_pd(_mm_loadu_pd(&diag_J_k_p[b_i]), r)));
  }
  // reform this what is the size of diag_J_k_p..*%check
  emlrtMEXProfilingStatement(29, static_cast<boolean_T>(isMexOutdated));
  st.site = &ed_emlrtRSI;
  b_st.site = &ed_emlrtRSI;
  a = coder::toc(b_st) * 1000.0;
  b_st.site = &hc_emlrtRSI;
  c_st.site = &pi_emlrtRSI;
  d_st.site = &qi_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(static_cast<real_T>(1.0)),
                         e_emlrt_marshallOut(d_st, cv4), emlrt_marshallOut(a),
                         emlrtMCI),
                   "<output of feval>");
  // %%%%3
  emlrtMEXProfilingStatement(30, static_cast<boolean_T>(isMexOutdated));
  st.site = &fd_emlrtRSI;
  coder::tic(st);
  emlrtMEXProfilingStatement(31, static_cast<boolean_T>(isMexOutdated));
  st.site = &gd_emlrtRSI;
  emlrtMEXProfilingFunctionEntryCPP((char_T *)c_dev_g_Q_multi_vector_complete,
                                    static_cast<boolean_T>(isMexOutdated),
                                    &b_profilerSentinel);
  // trans is a true or false. if trans = false we compute Q'v . otherwise Qv
  emlrtMEXProfilingStatement(1, static_cast<boolean_T>(isMexOutdated));
  std::memset(&out[0], 0, 326U * sizeof(real_T));
  emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
  loop_ub_tmp = Q_inv.size(1);
  loop_ub = Q_inv.size(0);
  for (int32_T b_i{0}; b_i < 30; b_i++) {
    int32_T b_loop_ub;
    emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
    emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
    if (b_i + 1 < 30) {
      emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
      a = nx + nu;
      if (muDoubleScalarIsNaN(a)) {
        v_temp_index.set_size(&ec_emlrtRTEI, &st, 1, 1);
        v_temp_index[0] = rtNaN;
      } else if (a < 1.0) {
        v_temp_index.set_size(&ec_emlrtRTEI, &st, v_temp_index.size(0), 0);
      } else {
        v_temp_index.set_size(&ec_emlrtRTEI, &st, 1,
                              static_cast<int32_T>(a - 1.0) + 1);
        b_loop_ub = static_cast<int32_T>(a - 1.0);
        for (int32_T i{0}; i <= b_loop_ub; i++) {
          v_temp_index[i] = static_cast<real_T>(i) + 1.0;
        }
      }
      v_temp_index.set_size(&md_emlrtRTEI, &st, 1, v_temp_index.size(1));
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
      emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
    } else {
      emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
      emlrtMEXProfilingStatement(8, static_cast<boolean_T>(isMexOutdated));
      if (muDoubleScalarIsNaN(nx)) {
        v_temp_index.set_size(&ec_emlrtRTEI, &st, 1, 1);
        v_temp_index[0] = rtNaN;
      } else if (nx < 1.0) {
        v_temp_index.set_size(&ec_emlrtRTEI, &st, v_temp_index.size(0), 0);
      } else {
        v_temp_index.set_size(&ec_emlrtRTEI, &st, 1,
                              static_cast<int32_T>(nx - 1.0) + 1);
        b_loop_ub = static_cast<int32_T>(nx - 1.0);
        for (int32_T i{0}; i <= b_loop_ub; i++) {
          v_temp_index[i] = static_cast<real_T>(i) + 1.0;
        }
      }
      v_temp_index.set_size(&ld_emlrtRTEI, &st, 1, v_temp_index.size(1));
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
      emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
    }
    emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
    b_loop_ub = v_temp_index.size(1);
    for (int32_T i{0}; i < b_loop_ub; i++) {
      if (v_temp_index[i] !=
          static_cast<int32_T>(muDoubleScalarFloor(v_temp_index[i]))) {
        emlrtIntegerCheckR2012b(v_temp_index[i], &v_emlrtDCI, &st);
      }
      scalarLB = static_cast<int32_T>(v_temp_index[i]);
      if ((scalarLB < 1) || (scalarLB > 326)) {
        emlrtDynamicBoundsCheckR2012b(scalarLB, 1, 326, &gb_emlrtBCI, &st);
      }
    }
    emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
    r2.set_size(&nd_emlrtRTEI, &st, 1, v_temp_index.size(1));
    b_R_z.set_size(&od_emlrtRTEI, &st, v_temp_index.size(1));
    for (int32_T i{0}; i < b_loop_ub; i++) {
      a = v_temp_index[i];
      r2[i] = static_cast<int16_T>(a);
      b_R_z[i] = R_z[static_cast<int32_T>(a) - 1];
    }
    b_Q_inv.set_size(&pd_emlrtRTEI, &st, Q_inv.size(0), loop_ub_tmp);
    for (int32_T i{0}; i < loop_ub_tmp; i++) {
      for (scalarLB = 0; scalarLB < loop_ub; scalarLB++) {
        b_Q_inv[scalarLB + b_Q_inv.size(0) * i] =
            Q_inv[(scalarLB + Q_inv.size(0) * i) +
                  Q_inv.size(0) * Q_inv.size(1) * b_i];
      }
    }
    b_st.site = &ai_emlrtRSI;
    Q_v_unit(b_st, b_R_z, b_Q_inv, &proj_index_all[22 * b_i], b);
    if (b.size(0) != v_temp_index.size(1)) {
      emlrtSubAssignSizeCheck1dR2017a(v_temp_index.size(1), b.size(0),
                                      &x_emlrtECI, &st);
    }
    for (int32_T i{0}; i < b_loop_ub; i++) {
      out[r2[i] - 1] = b[i];
    }
    // Specified! only for the LCvx case
    emlrtMEXProfilingStatement(12, static_cast<boolean_T>(isMexOutdated));
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emlrtMEXProfilingFunctionExitCPP(&b_profilerSentinel);
  st.site = &gd_emlrtRSI;
  dev_g_Q_multi_vector(st, Q_inv, out, proj_index_all, nx, nu, R_z);
  emlrtMEXProfilingStatement(32, static_cast<boolean_T>(isMexOutdated));
  st.site = &hd_emlrtRSI;
  b_st.site = &hd_emlrtRSI;
  a = coder::toc(b_st) * 1000.0;
  b_st.site = &hc_emlrtRSI;
  c_st.site = &pi_emlrtRSI;
  d_st.site = &qi_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(static_cast<real_T>(1.0)),
                         e_emlrt_marshallOut(d_st, cv5), emlrt_marshallOut(a),
                         emlrtMCI),
                   "<output of feval>");
  // 0.07
  emlrtMEXProfilingStatement(33, static_cast<boolean_T>(isMexOutdated));
  st.site = &id_emlrtRSI;
  coder::tic(st);
  emlrtMEXProfilingStatement(34, static_cast<boolean_T>(isMexOutdated));
  st.site = &jd_emlrtRSI;
  dev_HZ_g(st, A, R_z, ne, dv);
  for (int32_T i{0}; i <= 288; i += 2) {
    r = _mm_loadu_pd(&one_minus_jkdeltaw[i]);
    _mm_storeu_pd(&b_one_minus_jkdeltaw[i],
                  _mm_sub_pd(r, _mm_mul_pd(_mm_loadu_pd(&diag_J_k_p[i]), r)));
  }
  st.site = &jd_emlrtRSI;
  dev_Y_multi_vector(st, SD->f0.Y, b_one_minus_jkdeltaw, one_minus_jkdeltaw);
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
  emlrtMEXProfilingStatement(35, static_cast<boolean_T>(isMexOutdated));
  st.site = &kd_emlrtRSI;
  b_st.site = &kd_emlrtRSI;
  a = coder::toc(b_st) * 1000.0;
  b_st.site = &hc_emlrtRSI;
  c_st.site = &pi_emlrtRSI;
  d_st.site = &qi_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(static_cast<real_T>(1.0)),
                         e_emlrt_marshallOut(d_st, cv6), emlrt_marshallOut(a),
                         emlrtMCI),
                   "<output of feval>");
  // solve dw
  emlrtMEXProfilingStatement(36, static_cast<boolean_T>(isMexOutdated));
  st.site = &ld_emlrtRSI;
  coder::tic(st);
  emlrtMEXProfilingStatement(37, static_cast<boolean_T>(isMexOutdated));
  st.site = &md_emlrtRSI;
  dev_solve_Lv(st, chol_y, R_w_new, dv);
  st.site = &md_emlrtRSI;
  dev_solve_LTv(st, chol_y, dv, one_minus_jkdeltaw);
  emlrtMEXProfilingStatement(38, static_cast<boolean_T>(isMexOutdated));
  st.site = &nd_emlrtRSI;
  b_st.site = &nd_emlrtRSI;
  a = coder::toc(b_st) * 1000.0;
  b_st.site = &hc_emlrtRSI;
  c_st.site = &pi_emlrtRSI;
  d_st.site = &qi_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(static_cast<real_T>(1.0)),
                         e_emlrt_marshallOut(d_st, cv7), emlrt_marshallOut(a),
                         emlrtMCI),
                   "<output of feval>");
  emlrtMEXProfilingStatement(39, static_cast<boolean_T>(isMexOutdated));
  st.site = &od_emlrtRSI;
  coder::tic(st);
  emlrtMEXProfilingStatement(40, static_cast<boolean_T>(isMexOutdated));
  st.site = &pd_emlrtRSI;
  dev_HtZ_g(st, A, one_minus_jkdeltaw, ne, b);
  st.site = &pd_emlrtRSI;
  dev_g_Q_multi_vector(st, Q, b, proj_index_all, nx, nu, b_R_z);
  st.site = &pd_emlrtRSI;
  b_dev_g_Q_multi_vector(st, Q, b_R_z, proj_index_all, nx, nu, b);
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
    emlrtDimSizeImpxCheckR2021b(326, b.size(0), &w_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  emlrtMEXProfilingStatement(41, static_cast<boolean_T>(isMexOutdated));
  if (b.size(0) == 326) {
    for (int32_T i{0}; i <= 324; i += 2) {
      r = _mm_loadu_pd(&R_z[i]);
      r1 = _mm_loadu_pd(&b[i]);
      _mm_storeu_pd(&dzw[i], _mm_sub_pd(r, r1));
    }
    std::copy(&one_minus_jkdeltaw[0], &one_minus_jkdeltaw[290], &dzw[326]);
  } else {
    binary_expand_op_11(dzw, R_z, b, one_minus_jkdeltaw);
  }
  emlrtMEXProfilingStatement(42, static_cast<boolean_T>(isMexOutdated));
  st.site = &qd_emlrtRSI;
  b_st.site = &qd_emlrtRSI;
  a = coder::toc(b_st) * 1000.0;
  b_st.site = &hc_emlrtRSI;
  c_st.site = &pi_emlrtRSI;
  d_st.site = &qi_emlrtRSI;
  emlrt_marshallIn(c_st,
                   feval(c_st, emlrt_marshallOut(c_st, b_cv),
                         emlrt_marshallOut(static_cast<real_T>(1.0)),
                         d_emlrt_marshallOut(d_st, cv8), emlrt_marshallOut(a),
                         emlrtMCI),
                   "<output of feval>");
  // 0.07
  emlrtMEXProfilingFunctionExitCPP(&profilerSentinel);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (dev_g_newton_pipg_update_withtimer.cpp)
