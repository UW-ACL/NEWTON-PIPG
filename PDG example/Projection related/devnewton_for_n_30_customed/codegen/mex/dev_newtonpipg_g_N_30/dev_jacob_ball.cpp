//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_jacob_ball.cpp
//
// Code generation for function 'dev_jacob_ball'
//

// Include files
#include "dev_jacob_ball.h"
#include "dev_newtonpipg_g_N_30_data.h"
#include "diag.h"
#include "div.h"
#include "eig.h"
#include "eye.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "blas.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstddef>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo xc_emlrtRSI{
    3,                // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

static emlrtRSInfo yc_emlrtRSI{
    8,                // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

static emlrtRSInfo ad_emlrtRSI{
    10,               // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

static emlrtRSInfo bd_emlrtRSI{
    11,               // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

static emlrtRSInfo cd_emlrtRSI{
    12,               // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

static emlrtRSInfo dd_emlrtRSI{
    13,               // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

static emlrtECInfo sb_emlrtECI{
    2,                // nDims
    15,               // lineNo
    18,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo tb_emlrtECI{
    2,                // nDims
    14,               // lineNo
    18,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo ub_emlrtECI{
    1,                // nDims
    13,               // lineNo
    31,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo vb_emlrtECI{
    1,                // nDims
    13,               // lineNo
    42,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo wb_emlrtECI{
    1,                // nDims
    12,               // lineNo
    40,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo xb_emlrtECI{
    1,                // nDims
    12,               // lineNo
    51,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo yb_emlrtECI{
    2,                // nDims
    8,                // lineNo
    9,                // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo ac_emlrtECI{
    1,                // nDims
    8,                // lineNo
    9,                // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

// Function Declarations
static void binary_expand_op_23(const emlrtStack &sp, const emlrtRSInfo in1,
                                const real_T in2_data[],
                                const int32_T in2_size[2],
                                const real_T in3_data[],
                                const int32_T in3_size[2], real_T in4,
                                creal_T in5_data[], creal_T in6_data[],
                                int32_T in5_size[2], int32_T in6_size[2]);

// Function Definitions
static void binary_expand_op_23(const emlrtStack &sp, const emlrtRSInfo in1,
                                const real_T in2_data[],
                                const int32_T in2_size[2],
                                const real_T in3_data[],
                                const int32_T in3_size[2], real_T in4,
                                creal_T in5_data[], creal_T in6_data[],
                                int32_T in5_size[2], int32_T in6_size[2])
{
  emlrtStack st;
  real_T b_in2_data[121];
  int32_T b_in2_size[2];
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  st.prev = &sp;
  st.tls = sp.tls;
  if (in3_size[0] == 1) {
    loop_ub = in2_size[0];
  } else {
    loop_ub = in3_size[0];
  }
  b_in2_size[1] = loop_ub;
  if (in3_size[1] == 1) {
    b_loop_ub = in2_size[1];
  } else {
    b_loop_ub = in3_size[1];
  }
  b_in2_size[0] = b_loop_ub;
  stride_0_0 = (in2_size[0] != 1);
  stride_0_1 = (in2_size[1] != 1);
  stride_1_0 = (in3_size[0] != 1);
  stride_1_1 = (in3_size[1] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in2_data[i1 + loop_ub * i] =
          (in2_data[aux_0_1 + in2_size[1] * (i1 * stride_0_0)] -
           in3_data[aux_1_1 + in3_size[1] * (i1 * stride_1_0)]) *
          in4;
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  st.site = const_cast<emlrtRSInfo *>(&in1);
  coder::eig(st, b_in2_data, b_in2_size, in5_data, in5_size, in6_data,
             in6_size);
}

void binary_expand_op_19(real_T in1_data[], int32_T in1_size[2],
                         const creal_T in2_data[], const int32_T in2_size[2],
                         const real_T in3_data[], const int32_T &in3_size)
{
  int32_T b_loop_ub;
  int32_T in3_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  in3_idx_0 = in3_size;
  if (in3_idx_0 == 1) {
    loop_ub = in2_size[1];
  } else {
    loop_ub = in3_idx_0;
  }
  in1_size[1] = loop_ub;
  b_loop_ub = in2_size[0];
  in1_size[0] = b_loop_ub;
  stride_0_0 = (in2_size[1] != 1);
  in3_idx_0 = (in3_idx_0 != 1);
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1_data[i1 + in1_size[1] * i] =
          in2_data[i1 * stride_0_0 + in2_size[1] * i].re *
          in3_data[i1 * in3_idx_0];
    }
  }
}

int32_T binary_expand_op_22(creal_T in1_data[], const creal_T in3_data[],
                            const int32_T &in3_size, const creal_T in4_data[],
                            const int32_T &in4_size)
{
  int32_T in1_size;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in4_size == 1) {
    in1_size = in3_size;
  } else {
    in1_size = in4_size;
  }
  stride_0_0 = (in3_size != 1);
  stride_1_0 = (in4_size != 1);
  for (int32_T i{0}; i < in1_size; i++) {
    int32_T i1;
    int32_T i2;
    i1 = i * stride_0_0;
    i2 = i * stride_1_0;
    in1_data[i].re = (1.0 - in3_data[i1].re) + in4_data[i2].re;
    in1_data[i].im = (0.0 - in3_data[i1].im) + in4_data[i2].im;
  }
  return in1_size;
}

void dev_jacob_ball(const emlrtStack &sp, const real_T v_data[], int32_T v_size,
                    real_T R, const real_T P_data[], int32_T P_size,
                    real_T alpha, real_T Q_out_data[], int32_T Q_out_size[2],
                    real_T Q_inv_data[], int32_T Q_inv_size[2])
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  creal_T b_tmp_data[121];
  creal_T c_tmp_data[121];
  creal_T e_tmp_data[11];
  creal_T lambda_data[11];
  creal_T y_data[11];
  real_T b_data[121];
  real_T tmp_data[121];
  real_T lambda_between_data[11];
  real_T a;
  int32_T Q_size[2];
  int32_T b_b_size[2];
  int32_T tmp_size[2];
  int32_T scalarLB;
  int32_T vectorUB;
  int32_T y_size;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (v_size == 0) {
    a = 0.0;
  } else {
    n_t = (ptrdiff_t)v_size;
    incx_t = (ptrdiff_t)1;
    a = dnrm2(&n_t, (real_T *)&v_data[0], &incx_t);
  }
  if (a <= R) {
    y_size = P_size;
    scalarLB = (P_size / 2) << 1;
    vectorUB = scalarLB - 2;
    for (int32_T k{0}; k <= vectorUB; k += 2) {
      _mm_storeu_pd(
          &lambda_between_data[k],
          _mm_div_pd(_mm_set1_pd(1.0),
                     _mm_mul_pd(_mm_set1_pd(alpha), _mm_loadu_pd(&P_data[k]))));
    }
    for (int32_T k{scalarLB}; k < P_size; k++) {
      lambda_between_data[k] = 1.0 / (alpha * P_data[k]);
    }
    st.site = &xc_emlrtRSI;
    coder::b_sqrt(st, lambda_between_data, y_size);
    Q_out_size[1] = y_size;
    Q_out_size[0] = y_size;
    scalarLB = y_size * y_size;
    if (scalarLB - 1 >= 0) {
      std::memset(&Q_out_data[0], 0,
                  static_cast<uint32_T>(scalarLB) * sizeof(real_T));
    }
    for (vectorUB = 0; vectorUB < y_size; vectorUB++) {
      Q_out_data[vectorUB + y_size * vectorUB] = lambda_between_data[vectorUB];
    }
    Q_inv_size[1] = y_size;
    Q_inv_size[0] = y_size;
    if (scalarLB - 1 >= 0) {
      std::copy(&Q_out_data[0], &Q_out_data[scalarLB], &Q_inv_data[0]);
    }
  } else {
    creal_T Q_data[121];
    creal_T d_tmp_data[11];
    real_T lambda_inv_data[11];
    real_T b_a;
    real_T bi;
    real_T br;
    real_T brm;
    real_T re;
    int32_T b_size[2];
    int32_T b_tmp_size[2];
    int32_T c_tmp_size[2];
    int32_T b_loop_ub;
    int32_T loop_ub;
    b_a = 1.0 / a;
    st.site = &yc_emlrtRSI;
    coder::eye(st, static_cast<real_T>(v_size), b_data, b_size);
    loop_ub = b_size[0] * b_size[1];
    scalarLB = (loop_ub / 2) << 1;
    vectorUB = scalarLB - 2;
    for (int32_T k{0}; k <= vectorUB; k += 2) {
      __m128d r;
      r = _mm_loadu_pd(&b_data[k]);
      _mm_storeu_pd(&b_data[k], _mm_mul_pd(_mm_set1_pd(b_a), r));
    }
    for (int32_T k{scalarLB}; k < loop_ub; k++) {
      b_data[k] *= b_a;
    }
    st.site = &yc_emlrtRSI;
    b_st.site = &bb_emlrtRSI;
    a = muDoubleScalarPower(a, 3.0);
    tmp_size[1] = v_size;
    tmp_size[0] = v_size;
    for (int32_T k{0}; k < v_size; k++) {
      scalarLB = (v_size / 2) << 1;
      vectorUB = scalarLB - 2;
      for (y_size = 0; y_size <= vectorUB; y_size += 2) {
        _mm_storeu_pd(
            &tmp_data[y_size + v_size * k],
            _mm_div_pd(_mm_add_pd(_mm_set1_pd(0.0),
                                  _mm_mul_pd(_mm_loadu_pd(&v_data[y_size]),
                                             _mm_set1_pd(v_data[k]))),
                       _mm_set1_pd(a)));
      }
      for (y_size = scalarLB; y_size < v_size; y_size++) {
        tmp_data[y_size + v_size * k] = v_data[y_size] * v_data[k] / a;
      }
    }
    loop_ub = b_size[0];
    if ((b_size[0] != v_size) && ((b_size[0] != 1) && (v_size != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_size[0], v_size, &ac_emlrtECI,
                                  (emlrtConstCTX)&sp);
    }
    b_loop_ub = b_size[1];
    if ((b_size[1] != v_size) && ((b_size[1] != 1) && (v_size != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_size[1], v_size, &yb_emlrtECI,
                                  (emlrtConstCTX)&sp);
    }
    // maybe we can accelerate this
    if ((b_size[0] == v_size) && (b_size[1] == v_size)) {
      real_T b_b_data[121];
      b_b_size[1] = b_size[0];
      b_b_size[0] = b_size[1];
      for (int32_T k{0}; k < b_loop_ub; k++) {
        for (y_size = 0; y_size < loop_ub; y_size++) {
          b_b_data[y_size + b_b_size[1] * k] =
              (b_data[k + b_size[1] * y_size] - tmp_data[k + v_size * y_size]) *
              R;
        }
      }
      st.site = &ad_emlrtRSI;
      coder::eig(st, b_b_data, b_b_size, b_tmp_data, b_tmp_size, c_tmp_data,
                 c_tmp_size);
    } else {
      st.site = &ad_emlrtRSI;
      binary_expand_op_23(st, ad_emlrtRSI, b_data, b_size, tmp_data, tmp_size,
                          R, b_tmp_data, c_tmp_data, b_tmp_size, c_tmp_size);
    }
    loop_ub = b_tmp_size[0];
    Q_size[1] = b_tmp_size[0];
    b_loop_ub = b_tmp_size[1];
    Q_size[0] = b_tmp_size[1];
    for (int32_T k{0}; k < b_loop_ub; k++) {
      for (y_size = 0; y_size < loop_ub; y_size++) {
        Q_data[y_size + Q_size[1] * k] = b_tmp_data[k + b_tmp_size[1] * y_size];
      }
    }
    // J = QlambdaQ'
    scalarLB = c_tmp_size[0];
    b_tmp_size[1] = c_tmp_size[0];
    vectorUB = c_tmp_size[1];
    b_tmp_size[0] = c_tmp_size[1];
    for (int32_T k{0}; k < vectorUB; k++) {
      for (y_size = 0; y_size < scalarLB; y_size++) {
        b_tmp_data[y_size + b_tmp_size[1] * k] =
            c_tmp_data[k + c_tmp_size[1] * y_size];
      }
    }
    st.site = &bd_emlrtRSI;
    vectorUB = coder::diag(st, b_tmp_data, b_tmp_size, lambda_data);
    for (int32_T k{0}; k < vectorUB; k++) {
      d_tmp_data[k].re = alpha * lambda_data[k].re;
      d_tmp_data[k].im = alpha * lambda_data[k].im;
    }
    if ((vectorUB != P_size) && ((vectorUB != 1) && (P_size != 1))) {
      emlrtDimSizeImpxCheckR2021b(vectorUB, P_size, &xb_emlrtECI,
                                  (emlrtConstCTX)&sp);
    }
    if (vectorUB == P_size) {
      scalarLB = vectorUB;
      for (int32_T k{0}; k < vectorUB; k++) {
        a = P_data[k];
        e_tmp_data[k].re = a * d_tmp_data[k].re;
        e_tmp_data[k].im = a * d_tmp_data[k].im;
      }
    } else {
      scalarLB = times(e_tmp_data, d_tmp_data, vectorUB, P_data, P_size);
    }
    if ((vectorUB != scalarLB) && ((vectorUB != 1) && (scalarLB != 1))) {
      emlrtDimSizeImpxCheckR2021b(vectorUB, scalarLB, &wb_emlrtECI,
                                  (emlrtConstCTX)&sp);
    }
    st.site = &cd_emlrtRSI;
    if (vectorUB == scalarLB) {
      y_size = vectorUB;
      for (int32_T k{0}; k < vectorUB; k++) {
        y_data[k].re = (1.0 - lambda_data[k].re) + e_tmp_data[k].re;
        y_data[k].im = (0.0 - lambda_data[k].im) + e_tmp_data[k].im;
      }
    } else {
      y_size = binary_expand_op_22(y_data, lambda_data, vectorUB, e_tmp_data,
                                   scalarLB);
    }
    b_st.site = &vc_emlrtRSI;
    c_st.site = &wc_emlrtRSI;
    if ((vectorUB != 1) && (y_size != 1) && (vectorUB != y_size)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &u_emlrtRTEI,
                                    "MATLAB:sizeDimensionsMustMatch",
                                    "MATLAB:sizeDimensionsMustMatch", 0);
    }
    if (vectorUB == y_size) {
      y_size = vectorUB;
      for (int32_T k{0}; k < vectorUB; k++) {
        real_T ai;
        real_T ar;
        ar = lambda_data[k].re;
        ai = lambda_data[k].im;
        br = y_data[k].re;
        bi = y_data[k].im;
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
        y_data[k].re = re;
        y_data[k].im = a;
      }
    } else {
      rdivide(y_data, y_size, lambda_data, vectorUB);
    }
    if (y_size != 0) {
      for (int32_T k{0}; k < y_size; k++) {
        lambda_between_data[k] =
            muDoubleScalarHypot(y_data[k].re, y_data[k].im);
      }
    }
    st.site = &cd_emlrtRSI;
    coder::b_sqrt(st, lambda_between_data, y_size);
    if ((vectorUB != P_size) && ((vectorUB != 1) && (P_size != 1))) {
      emlrtDimSizeImpxCheckR2021b(vectorUB, P_size, &vb_emlrtECI,
                                  (emlrtConstCTX)&sp);
    }
    if ((vectorUB != scalarLB) && ((vectorUB != 1) && (scalarLB != 1))) {
      emlrtDimSizeImpxCheckR2021b(vectorUB, scalarLB, &ub_emlrtECI,
                                  (emlrtConstCTX)&sp);
    }
    if (vectorUB == scalarLB) {
      for (int32_T k{0}; k < vectorUB; k++) {
        br = (1.0 - lambda_data[k].re) + e_tmp_data[k].re;
        bi = (0.0 - lambda_data[k].im) + e_tmp_data[k].im;
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
        lambda_data[k].re = re;
        lambda_data[k].im = a;
      }
    } else {
      binary_expand_op_21(lambda_data, vectorUB, e_tmp_data, scalarLB);
    }
    if (vectorUB != 0) {
      for (int32_T k{0}; k < vectorUB; k++) {
        lambda_inv_data[k] =
            muDoubleScalarHypot(lambda_data[k].re, lambda_data[k].im);
      }
    }
    st.site = &dd_emlrtRSI;
    coder::b_sqrt(st, lambda_inv_data, vectorUB);
    if ((loop_ub != y_size) && ((loop_ub != 1) && (y_size != 1))) {
      emlrtDimSizeImpxCheckR2021b(loop_ub, y_size, &tb_emlrtECI,
                                  (emlrtConstCTX)&sp);
    }
    if (Q_size[1] == y_size) {
      Q_out_size[1] = loop_ub;
      Q_out_size[0] = b_loop_ub;
      for (int32_T k{0}; k < b_loop_ub; k++) {
        for (y_size = 0; y_size < loop_ub; y_size++) {
          Q_out_data[y_size + loop_ub * k] =
              Q_data[y_size + Q_size[1] * k].re * lambda_between_data[y_size];
        }
      }
    } else {
      binary_expand_op_19(Q_out_data, Q_out_size, Q_data, Q_size,
                          lambda_between_data, y_size);
    }
    // Q.* v'
    loop_ub = Q_size[1];
    if ((Q_size[1] != vectorUB) && ((Q_size[1] != 1) && (vectorUB != 1))) {
      emlrtDimSizeImpxCheckR2021b(Q_size[1], vectorUB, &sb_emlrtECI,
                                  (emlrtConstCTX)&sp);
    }
    if (Q_size[1] == vectorUB) {
      Q_inv_size[1] = Q_size[1];
      b_loop_ub = Q_size[0];
      Q_inv_size[0] = Q_size[0];
      for (int32_T k{0}; k < b_loop_ub; k++) {
        for (y_size = 0; y_size < loop_ub; y_size++) {
          Q_inv_data[y_size + Q_inv_size[1] * k] =
              Q_data[y_size + Q_size[1] * k].re * lambda_inv_data[y_size];
        }
      }
    } else {
      binary_expand_op_19(Q_inv_data, Q_inv_size, Q_data, Q_size,
                          lambda_inv_data, vectorUB);
    }
    // check the shape of lmbda_inv
  }
}

int32_T times(creal_T in1_data[], const creal_T in2_data[],
              const int32_T &in2_size, const real_T in3_data[],
              const int32_T &in3_size)
{
  int32_T in1_size;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3_size == 1) {
    in1_size = in2_size;
  } else {
    in1_size = in3_size;
  }
  stride_0_0 = (in2_size != 1);
  stride_1_0 = (in3_size != 1);
  for (int32_T i{0}; i < in1_size; i++) {
    real_T d;
    int32_T i1;
    d = in3_data[i * stride_1_0];
    i1 = i * stride_0_0;
    in1_data[i].re = d * in2_data[i1].re;
    in1_data[i].im = d * in2_data[i1].im;
  }
  return in1_size;
}

// End of code generation (dev_jacob_ball.cpp)
