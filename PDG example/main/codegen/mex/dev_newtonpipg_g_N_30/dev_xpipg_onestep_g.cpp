//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_xpipg_onestep_g.cpp
//
// Code generation for function 'dev_xpipg_onestep_g'
//

// Include files
#include "dev_xpipg_onestep_g.h"
#include "dev_HZ_g.h"
#include "dev_HtZ_g.h"
#include "dev_newtonpipg_g_N_30_data.h"
#include "proj_D_unit_with_affinejacobian.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo gb_emlrtRSI{
    8,                     // lineNo
    "dev_xpipg_onestep_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pathName
};

static emlrtRSInfo hb_emlrtRSI{
    9,                     // lineNo
    "dev_xpipg_onestep_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pathName
};

static emlrtRSInfo ib_emlrtRSI{
    11,                    // lineNo
    "dev_xpipg_onestep_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pathName
};

static emlrtRSInfo jb_emlrtRSI{
    16,                           // lineNo
    "proj_D_with_affinejacobian", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" // pathName
};

static emlrtECInfo i_emlrtECI{
    1,                     // nDims
    8,                     // lineNo
    26,                    // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

static emlrtECInfo j_emlrtECI{
    1,                     // nDims
    8,                     // lineNo
    14,                    // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

static emlrtECInfo k_emlrtECI{
    1,                     // nDims
    11,                    // lineNo
    13,                    // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

static emlrtECInfo l_emlrtECI{
    1,                     // nDims
    13,                    // lineNo
    8,                     // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

static emlrtECInfo m_emlrtECI{
    1,                     // nDims
    14,                    // lineNo
    9,                     // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

static emlrtECInfo n_emlrtECI{
    1,                     // nDims
    15,                    // lineNo
    5,                     // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

static emlrtRTEInfo r_emlrtRTEI{
    7,                            // lineNo
    9,                            // colNo
    "proj_D_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" // pName
};

static emlrtECInfo o_emlrtECI{
    -1,                           // nDims
    16,                           // lineNo
    6,                            // colNo
    "proj_D_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" // pName
};

static emlrtECInfo p_emlrtECI{
    -1,                           // nDims
    16,                           // lineNo
    23,                           // colNo
    "proj_D_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" // pName
};

static emlrtDCInfo l_emlrtDCI{
    15,                           // lineNo
    18,                           // colNo
    "proj_D_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m", // pName
    1                                     // checkKind
};

static emlrtBCInfo o_emlrtBCI{
    1,                            // iFirst
    326,                          // iLast
    15,                           // lineNo
    18,                           // colNo
    "z0",                         // aName
    "proj_D_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m", // pName
    0                                     // checkKind
};

// Function Declarations
static void binary_expand_op_3(real_T in1[616], const real_T in2[326],
                               const real_T in3[290], const real_T in4_data[],
                               const int32_T &in4_size);

static void binary_expand_op_4(real_T in1[290], const real_T in2_data[],
                               const int32_T &in2_size, real_T in3);

static void binary_expand_op_5(real_T in1[326], const real_T in2_data[],
                               const int32_T &in2_size, real_T in3);

static void binary_expand_op_7(const emlrtStack &sp, const emlrtRSInfo in2,
                               const real_T in3[3190], const real_T in4[326],
                               const real_T in5_data[], const int32_T &in5_size,
                               real_T in6, real_T in1[290]);

static void binary_expand_op_8(real_T in1[326], const real_T in2_data[],
                               const int32_T &in2_size, real_T in3,
                               const real_T in4[326], const real_T in5[326],
                               const real_T in6_data[],
                               const int32_T &in6_size);

// Function Definitions
static void binary_expand_op_3(real_T in1[616], const real_T in2[326],
                               const real_T in3[290], const real_T in4_data[],
                               const int32_T &in4_size)
{
  __m128d r;
  int32_T stride_0_0;
  for (int32_T i{0}; i <= 324; i += 2) {
    r = _mm_loadu_pd(&in2[i]);
    _mm_storeu_pd(&in1[i], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }
  for (int32_T i{0}; i <= 288; i += 2) {
    r = _mm_loadu_pd(&in3[i]);
    _mm_storeu_pd(&in1[i + 326], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }
  stride_0_0 = (in4_size != 1);
  for (int32_T i{0}; i < 616; i++) {
    in1[i] += in4_data[i * stride_0_0];
  }
}

static void binary_expand_op_4(real_T in1[290], const real_T in2_data[],
                               const int32_T &in2_size, real_T in3)
{
  int32_T stride_0_0;
  stride_0_0 = (in2_size != 1);
  for (int32_T i{0}; i < 290; i++) {
    in1[i] = in2_data[i * stride_0_0] + in3 * in1[i];
  }
}

static void binary_expand_op_5(real_T in1[326], const real_T in2_data[],
                               const int32_T &in2_size, real_T in3)
{
  int32_T stride_0_0;
  stride_0_0 = (in2_size != 1);
  for (int32_T i{0}; i < 326; i++) {
    in1[i] = in2_data[i * stride_0_0] + in3 * in1[i];
  }
}

static void binary_expand_op_7(const emlrtStack &sp, const emlrtRSInfo in2,
                               const real_T in3[3190], const real_T in4[326],
                               const real_T in5_data[], const int32_T &in5_size,
                               real_T in6, real_T in1[290])
{
  emlrtStack st;
  real_T dv[326];
  int32_T stride_0_0;
  st.prev = &sp;
  st.tls = sp.tls;
  stride_0_0 = (in5_size != 1);
  for (int32_T i{0}; i < 326; i++) {
    dv[i] = 2.0 * in4[i] - in5_data[i * stride_0_0];
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  dev_HZ_g(st, in3, dv, in6, in1);
}

static void binary_expand_op_8(real_T in1[326], const real_T in2_data[],
                               const int32_T &in2_size, real_T in3,
                               const real_T in4[326], const real_T in5[326],
                               const real_T in6_data[], const int32_T &in6_size)
{
  int32_T stride_0_0_tmp;
  int32_T stride_2_0;
  stride_0_0_tmp = (in2_size != 1);
  stride_2_0 = (in6_size != 1);
  for (int32_T i{0}; i < 326; i++) {
    real_T d;
    d = in2_data[i * stride_0_0_tmp];
    in1[i] = d - in3 * ((in4[i] * d + in5[i]) + in6_data[i * stride_2_0]);
  }
}

void dev_xpipg_onestep_g(
    const emlrtStack &sp, const real_T xi_data[], int32_T xi_size,
    const real_T eta_data[], int32_T eta_size, real_T alpha, real_T beta,
    real_T rho, const real_T P[326], const real_T A[3190], const real_T q[326],
    const real_T g[290], real_T N, real_T nx, real_T nu, real_T ne,
    const real_T proj_index_all[660], const real_T proj_coefficient_all[660],
    const real_T cone_k_polar[290], real_T xi_n[326], real_T eta_n[290],
    real_T J_affine_D[326], real_T J_k_polar[290], real_T R[616],
    real_T temp_prime[326], real_T temp_dual[290])
{
  __m128d r;
  __m128d r1;
  emlrtStack b_st;
  emlrtStack st;
  real_T e_tmp_data[976];
  real_T y_data[616];
  real_T tmp_data[326];
  real_T b_tmp_data[11];
  real_T c_tmp_data[11];
  real_T z_temp_index_data[11];
  real_T c_i;
  int32_T i;
  int32_T scalarLB;
  int32_T tmp_size;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  // P must be a vector
  // A is the matrix defining H, here we only have zero order hold for the
  // simplicity of programming.
  //  temp_prime = xi - alpha*(P.* xi + q + Ht * eta);
  if ((xi_size != 326) && (xi_size != 1)) {
    emlrtDimSizeImpxCheckR2021b(326, xi_size, &i_emlrtECI, (emlrtConstCTX)&sp);
  }
  st.site = &gb_emlrtRSI;
  tmp_size = dev_HtZ_g(st, A, eta_data, eta_size, ne, tmp_data);
  if ((tmp_size != 326) && (tmp_size != 1)) {
    emlrtDimSizeImpxCheckR2021b(326, tmp_size, &i_emlrtECI, (emlrtConstCTX)&sp);
  }
  if ((xi_size != 326) && (xi_size != 1)) {
    emlrtDimSizeImpxCheckR2021b(xi_size, 326, &j_emlrtECI, (emlrtConstCTX)&sp);
  }
  if ((xi_size == 326) && (tmp_size == 326) && (xi_size == 326)) {
    for (i = 0; i <= 324; i += 2) {
      r = _mm_loadu_pd(&xi_data[i]);
      r1 = _mm_loadu_pd(&tmp_data[i]);
      _mm_storeu_pd(
          &temp_prime[i],
          _mm_sub_pd(
              r, _mm_mul_pd(
                     _mm_set1_pd(alpha),
                     _mm_add_pd(_mm_add_pd(_mm_mul_pd(_mm_loadu_pd(&P[i]), r),
                                           _mm_loadu_pd(&q[i])),
                                r1))));
    }
  } else {
    binary_expand_op_8(temp_prime, xi_data, xi_size, alpha, P, q, tmp_data,
                       tmp_size);
  }
  st.site = &hb_emlrtRSI;
  // Compute the projection to set D.
  // nx, nu are legacy. They stands for the number of control and input
  std::memset(&xi_n[0], 0, 326U * sizeof(real_T));
  std::memset(&J_affine_D[0], 0, 326U * sizeof(real_T));
  i = static_cast<int32_T>(N);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, N, mxDOUBLE_CLASS,
                                static_cast<int32_T>(N), &r_emlrtRTEI, &st);
  for (int32_T b_i{0}; b_i < i; b_i++) {
    real_T b_proj_coefficient_all[22];
    real_T b_proj_index_all[22];
    real_T temp_prime_data[11];
    int32_T z_temp_index_size_idx_1;
    int16_T d_tmp_data[11];
    // if it is random use N+1. Not robust!
    if (static_cast<real_T>(b_i) + 1.0 < N) {
      c_i = nx + nu;
      if (c_i < 1.0) {
        z_temp_index_size_idx_1 = 0;
      } else {
        tmp_size = static_cast<int32_T>(c_i - 1.0) + 1;
        z_temp_index_size_idx_1 = static_cast<int32_T>(c_i - 1.0) + 1;
        for (int32_T i1{0}; i1 < tmp_size; i1++) {
          z_temp_index_data[i1] = static_cast<real_T>(i1) + 1.0;
        }
      }
      c_i *= (static_cast<real_T>(b_i) + 1.0) - 1.0;
      tmp_size = z_temp_index_size_idx_1 - 1;
      scalarLB = (z_temp_index_size_idx_1 / 2) << 1;
      vectorUB = scalarLB - 2;
      for (int32_T i1{0}; i1 <= vectorUB; i1 += 2) {
        r = _mm_loadu_pd(&z_temp_index_data[i1]);
        _mm_storeu_pd(&z_temp_index_data[i1], _mm_add_pd(_mm_set1_pd(c_i), r));
      }
      for (int32_T i1{scalarLB}; i1 <= tmp_size; i1++) {
        z_temp_index_data[i1] += c_i;
      }
    } else {
      if (nx < 1.0) {
        z_temp_index_size_idx_1 = 0;
      } else {
        tmp_size = static_cast<int32_T>(nx - 1.0) + 1;
        z_temp_index_size_idx_1 = static_cast<int32_T>(nx - 1.0) + 1;
        for (int32_T i1{0}; i1 < tmp_size; i1++) {
          z_temp_index_data[i1] = static_cast<real_T>(i1) + 1.0;
        }
      }
      c_i = ((static_cast<real_T>(b_i) + 1.0) - 1.0) * (nx + nu);
      tmp_size = z_temp_index_size_idx_1 - 1;
      scalarLB = (z_temp_index_size_idx_1 / 2) << 1;
      vectorUB = scalarLB - 2;
      for (int32_T i1{0}; i1 <= vectorUB; i1 += 2) {
        r = _mm_loadu_pd(&z_temp_index_data[i1]);
        _mm_storeu_pd(&z_temp_index_data[i1], _mm_add_pd(_mm_set1_pd(c_i), r));
      }
      for (int32_T i1{scalarLB}; i1 <= tmp_size; i1++) {
        z_temp_index_data[i1] += c_i;
      }
    }
    for (int32_T i1{0}; i1 < z_temp_index_size_idx_1; i1++) {
      c_i = z_temp_index_data[i1];
      if (c_i != static_cast<int32_T>(muDoubleScalarFloor(c_i))) {
        emlrtIntegerCheckR2012b(c_i, &l_emlrtDCI, &st);
      }
      if ((static_cast<int32_T>(c_i) < 1) ||
          (static_cast<int32_T>(c_i) > 326)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i), 1, 326,
                                      &o_emlrtBCI, &st);
      }
    }
    for (int32_T i1{0}; i1 < z_temp_index_size_idx_1; i1++) {
      temp_prime_data[i1] =
          temp_prime[static_cast<int32_T>(z_temp_index_data[i1]) - 1];
    }
    for (int32_T i1{0}; i1 < 2; i1++) {
      for (vectorUB = 0; vectorUB < 11; vectorUB++) {
        tmp_size = (b_i + 30 * vectorUB) + 330 * i1;
        scalarLB = vectorUB + 11 * i1;
        b_proj_index_all[scalarLB] = proj_index_all[tmp_size];
        b_proj_coefficient_all[scalarLB] = proj_coefficient_all[tmp_size];
      }
    }
    b_st.site = &jb_emlrtRSI;
    tmp_size = proj_D_unit_with_affinejacobian(
        b_st, temp_prime_data, z_temp_index_size_idx_1, b_proj_index_all,
        b_proj_coefficient_all, b_tmp_data, c_tmp_data, scalarLB);
    for (int32_T i1{0}; i1 < z_temp_index_size_idx_1; i1++) {
      d_tmp_data[i1] = static_cast<int16_T>(z_temp_index_data[i1]);
    }
    if (z_temp_index_size_idx_1 != tmp_size) {
      emlrtSubAssignSizeCheck1dR2017a(z_temp_index_size_idx_1, tmp_size,
                                      &o_emlrtECI, &st);
    }
    for (int32_T i1{0}; i1 < z_temp_index_size_idx_1; i1++) {
      xi_n[d_tmp_data[i1] - 1] = b_tmp_data[i1];
    }
    if (z_temp_index_size_idx_1 != scalarLB) {
      emlrtSubAssignSizeCheck1dR2017a(z_temp_index_size_idx_1, scalarLB,
                                      &p_emlrtECI, &st);
    }
    for (int32_T i1{0}; i1 < z_temp_index_size_idx_1; i1++) {
      J_affine_D[d_tmp_data[i1] - 1] = c_tmp_data[i1];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  // temp_dual = eta + beta* (H * (2*z - xi)-g);
  if ((eta_size != 290) && (eta_size != 1)) {
    emlrtDimSizeImpxCheckR2021b(eta_size, 290, &k_emlrtECI, (emlrtConstCTX)&sp);
  }
  if (xi_size == 326) {
    for (i = 0; i <= 324; i += 2) {
      r = _mm_loadu_pd(&xi_n[i]);
      _mm_storeu_pd(&tmp_data[i], _mm_sub_pd(_mm_mul_pd(_mm_set1_pd(2.0), r),
                                             _mm_loadu_pd(&xi_data[i])));
    }
    st.site = &ib_emlrtRSI;
    dev_HZ_g(st, A, tmp_data, ne, temp_dual);
  } else {
    st.site = &ib_emlrtRSI;
    binary_expand_op_7(st, ib_emlrtRSI, A, xi_n, xi_data, xi_size, ne,
                       temp_dual);
  }
  for (i = 0; i <= 288; i += 2) {
    r = _mm_loadu_pd(&temp_dual[i]);
    _mm_storeu_pd(&temp_dual[i], _mm_sub_pd(r, _mm_loadu_pd(&g[i])));
  }
  if (eta_size == 290) {
    for (i = 0; i <= 288; i += 2) {
      r = _mm_loadu_pd(&temp_dual[i]);
      _mm_storeu_pd(&temp_dual[i],
                    _mm_add_pd(_mm_loadu_pd(&eta_data[i]),
                               _mm_mul_pd(_mm_set1_pd(beta), r)));
    }
  } else {
    binary_expand_op_4(temp_dual, eta_data, eta_size, beta);
  }
  //  compute the projection to cone_k_polar;
  // J is a vector.
  for (int32_T b_i{0}; b_i < 290; b_i++) {
    J_k_polar[b_i] = 1.0;
  }
  for (int32_T b_i{0}; b_i < 290; b_i++) {
    if (cone_k_polar[b_i] == 0.0) {
      eta_n[b_i] = temp_dual[b_i];
      //  projection to Rn
    } else {
      c_i = temp_dual[b_i];
      if (c_i >= 0.0) {
        eta_n[b_i] = 0.0;
        J_k_polar[b_i] = 0.0;
      } else {
        eta_n[b_i] = c_i;
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  scalarLB = (xi_size / 2) << 1;
  vectorUB = scalarLB - 2;
  for (i = 0; i <= vectorUB; i += 2) {
    _mm_storeu_pd(&y_data[i], _mm_mul_pd(_mm_set1_pd(1.0 - rho),
                                         _mm_loadu_pd(&xi_data[i])));
  }
  for (i = scalarLB; i < xi_size; i++) {
    y_data[i] = (1.0 - rho) * xi_data[i];
  }
  if ((xi_size != 326) && (xi_size != 1)) {
    emlrtDimSizeImpxCheckR2021b(xi_size, 326, &l_emlrtECI, (emlrtConstCTX)&sp);
  }
  if (xi_size == 326) {
    for (i = 0; i <= 324; i += 2) {
      r = _mm_loadu_pd(&xi_n[i]);
      r1 = _mm_loadu_pd(&y_data[i]);
      _mm_storeu_pd(&xi_n[i], _mm_add_pd(r1, _mm_mul_pd(_mm_set1_pd(rho), r)));
    }
  } else {
    binary_expand_op_5(xi_n, y_data, xi_size, rho);
  }
  scalarLB = (eta_size / 2) << 1;
  vectorUB = scalarLB - 2;
  for (i = 0; i <= vectorUB; i += 2) {
    _mm_storeu_pd(&y_data[i], _mm_mul_pd(_mm_set1_pd(1.0 - rho),
                                         _mm_loadu_pd(&eta_data[i])));
  }
  for (i = scalarLB; i < eta_size; i++) {
    y_data[i] = (1.0 - rho) * eta_data[i];
  }
  if ((eta_size != 290) && (eta_size != 1)) {
    emlrtDimSizeImpxCheckR2021b(eta_size, 290, &m_emlrtECI, (emlrtConstCTX)&sp);
  }
  if (eta_size == 290) {
    for (i = 0; i <= 288; i += 2) {
      r = _mm_loadu_pd(&eta_n[i]);
      r1 = _mm_loadu_pd(&y_data[i]);
      _mm_storeu_pd(&eta_n[i], _mm_add_pd(r1, _mm_mul_pd(_mm_set1_pd(rho), r)));
    }
  } else {
    binary_expand_op_4(eta_n, y_data, eta_size, rho);
  }
  tmp_size = xi_size + eta_size;
  if (xi_size - 1 >= 0) {
    std::copy(&xi_data[0], &xi_data[xi_size], &e_tmp_data[0]);
  }
  for (i = 0; i < eta_size; i++) {
    e_tmp_data[i + xi_size] = eta_data[i];
  }
  if (tmp_size != 616) {
    emlrtDimSizeImpxCheckR2021b(616, tmp_size, &n_emlrtECI, (emlrtConstCTX)&sp);
  }
  if (tmp_size == 616) {
    for (i = 0; i <= 324; i += 2) {
      r = _mm_loadu_pd(&xi_n[i]);
      _mm_storeu_pd(&R[i], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
    }
    for (i = 0; i <= 288; i += 2) {
      r = _mm_loadu_pd(&eta_n[i]);
      _mm_storeu_pd(&R[i + 326], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
    }
    for (i = 0; i <= 614; i += 2) {
      r = _mm_loadu_pd(&R[i]);
      r1 = _mm_loadu_pd(&e_tmp_data[i]);
      _mm_storeu_pd(&R[i], _mm_add_pd(r, r1));
    }
  } else {
    binary_expand_op_3(R, xi_n, eta_n, e_tmp_data, tmp_size);
  }
}

// End of code generation (dev_xpipg_onestep_g.cpp)
