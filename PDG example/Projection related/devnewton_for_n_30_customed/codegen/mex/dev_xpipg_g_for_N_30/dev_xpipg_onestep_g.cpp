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
#include "dev_xpipg_g_for_N_30_data.h"
#include "proj_D_unit_with_affinejacobian.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo bb_emlrtRSI{
    8,                     // lineNo
    "dev_xpipg_onestep_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pathName
};

static emlrtRSInfo cb_emlrtRSI{
    9,                     // lineNo
    "dev_xpipg_onestep_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pathName
};

static emlrtRSInfo db_emlrtRSI{
    11,                    // lineNo
    "dev_xpipg_onestep_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pathName
};

static emlrtRSInfo eb_emlrtRSI{
    16,                           // lineNo
    "proj_D_with_affinejacobian", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" // pathName
};

static emlrtECInfo e_emlrtECI{
    1,                     // nDims
    8,                     // lineNo
    26,                    // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

static emlrtECInfo f_emlrtECI{
    1,                     // nDims
    8,                     // lineNo
    14,                    // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

static emlrtECInfo g_emlrtECI{
    1,                     // nDims
    11,                    // lineNo
    13,                    // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

static emlrtECInfo h_emlrtECI{
    1,                     // nDims
    13,                    // lineNo
    8,                     // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

static emlrtECInfo i_emlrtECI{
    1,                     // nDims
    14,                    // lineNo
    9,                     // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

static emlrtECInfo j_emlrtECI{
    1,                     // nDims
    15,                    // lineNo
    5,                     // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

static emlrtRTEInfo n_emlrtRTEI{
    7,                            // lineNo
    9,                            // colNo
    "proj_D_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" // pName
};

static emlrtECInfo k_emlrtECI{
    -1,                           // nDims
    16,                           // lineNo
    6,                            // colNo
    "proj_D_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" // pName
};

static emlrtECInfo l_emlrtECI{
    -1,                           // nDims
    16,                           // lineNo
    23,                           // colNo
    "proj_D_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" // pName
};

static emlrtBCInfo l_emlrtBCI{
    1,          // iFirst
    290,        // iLast
    17,         // lineNo
    64,         // colNo
    "out",      // aName
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo m_emlrtBCI{
    1,          // iFirst
    326,        // iLast
    17,         // lineNo
    108,        // colNo
    "z",        // aName
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo n_emlrtBCI{
    1,          // iFirst
    290,        // iLast
    17,         // lineNo
    23,         // colNo
    "out",      // aName
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo j_emlrtDCI{
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

static void binary_expand_op_6(real_T in1[290], const real_T in2_data[],
                               const int32_T &in2_size, real_T in3,
                               const real_T in4[290]);

static void binary_expand_op_7(real_T in1[326], const real_T in2[326],
                               const real_T in3_data[],
                               const int32_T &in3_size);

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

static void binary_expand_op_6(real_T in1[290], const real_T in2_data[],
                               const int32_T &in2_size, real_T in3,
                               const real_T in4[290])
{
  int32_T stride_0_0;
  stride_0_0 = (in2_size != 1);
  for (int32_T i{0}; i < 290; i++) {
    in1[i] = in2_data[i * stride_0_0] + in3 * (in1[i] - in4[i]);
  }
}

static void binary_expand_op_7(real_T in1[326], const real_T in2[326],
                               const real_T in3_data[], const int32_T &in3_size)
{
  int32_T stride_0_0;
  stride_0_0 = (in3_size != 1);
  for (int32_T i{0}; i < 326; i++) {
    in1[i] = 2.0 * in2[i] - in3_data[i * stride_0_0];
  }
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
    real_T J_affine_D[326], real_T J_k_polar[290], real_T R[616])
{
  __m128d r;
  __m128d r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T e_tmp_data[686];
  real_T y_data[360];
  real_T temp_prime[326];
  real_T tmp_data[326];
  real_T temp_dual[290];
  real_T b_tmp_data[11];
  real_T c_tmp_data[11];
  real_T z_temp_index_data[11];
  real_T b_temp_prime[10];
  real_T c_i;
  int32_T i;
  int32_T i1;
  int32_T index_Hstart;
  int32_T index_zstart;
  int32_T scalarLB;
  int32_T vectorUB;
  int32_T z_temp_index_idx_0;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  // P must be a vector
  // A is the matrix defining H, here we only have zero order hold for the
  // simplicity of programming.
  //  temp_prime = xi - alpha*(P.* xi + q + Ht * eta);
  if ((xi_size != 326) && (xi_size != 1)) {
    emlrtDimSizeImpxCheckR2021b(326, xi_size, &e_emlrtECI, (emlrtConstCTX)&sp);
  }
  st.site = &bb_emlrtRSI;
  z_temp_index_idx_0 = dev_HtZ_g(st, A, eta_data, eta_size, ne, tmp_data);
  if ((z_temp_index_idx_0 != 326) && (z_temp_index_idx_0 != 1)) {
    emlrtDimSizeImpxCheckR2021b(326, z_temp_index_idx_0, &e_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if ((xi_size != 326) && (xi_size != 1)) {
    emlrtDimSizeImpxCheckR2021b(xi_size, 326, &f_emlrtECI, (emlrtConstCTX)&sp);
  }
  if ((xi_size == 326) && (z_temp_index_idx_0 == 326) && (xi_size == 326)) {
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
                       z_temp_index_idx_0);
  }
  st.site = &cb_emlrtRSI;
  // Compute the projection to set D.
  // nx, nu are legacy. They stands for the number of control and input
  std::memset(&xi_n[0], 0, 326U * sizeof(real_T));
  std::memset(&J_affine_D[0], 0, 326U * sizeof(real_T));
  i = static_cast<int32_T>(N);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, N, mxDOUBLE_CLASS,
                                static_cast<int32_T>(N), &n_emlrtRTEI, &st);
  for (int32_T b_i{0}; b_i < i; b_i++) {
    real_T b_proj_coefficient_all[22];
    real_T b_proj_index_all[22];
    real_T temp_prime_data[11];
    int16_T d_tmp_data[11];
    // if it is random use N+1. Not robust!
    if (static_cast<real_T>(b_i) + 1.0 < N) {
      c_i = nx + nu;
      if (c_i < 1.0) {
        index_zstart = 0;
      } else {
        index_Hstart = static_cast<int32_T>(c_i - 1.0) + 1;
        index_zstart = static_cast<int32_T>(c_i - 1.0) + 1;
        for (i1 = 0; i1 < index_Hstart; i1++) {
          z_temp_index_data[i1] = static_cast<real_T>(i1) + 1.0;
        }
      }
      c_i *= (static_cast<real_T>(b_i) + 1.0) - 1.0;
      index_Hstart = index_zstart - 1;
      scalarLB = (index_zstart / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i1 = 0; i1 <= vectorUB; i1 += 2) {
        r = _mm_loadu_pd(&z_temp_index_data[i1]);
        _mm_storeu_pd(&z_temp_index_data[i1], _mm_add_pd(_mm_set1_pd(c_i), r));
      }
      for (i1 = scalarLB; i1 <= index_Hstart; i1++) {
        z_temp_index_data[i1] += c_i;
      }
    } else {
      if (nx < 1.0) {
        index_zstart = 0;
      } else {
        index_Hstart = static_cast<int32_T>(nx - 1.0) + 1;
        index_zstart = static_cast<int32_T>(nx - 1.0) + 1;
        for (i1 = 0; i1 < index_Hstart; i1++) {
          z_temp_index_data[i1] = static_cast<real_T>(i1) + 1.0;
        }
      }
      c_i = ((static_cast<real_T>(b_i) + 1.0) - 1.0) * (nx + nu);
      index_Hstart = index_zstart - 1;
      scalarLB = (index_zstart / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i1 = 0; i1 <= vectorUB; i1 += 2) {
        r = _mm_loadu_pd(&z_temp_index_data[i1]);
        _mm_storeu_pd(&z_temp_index_data[i1], _mm_add_pd(_mm_set1_pd(c_i), r));
      }
      for (i1 = scalarLB; i1 <= index_Hstart; i1++) {
        z_temp_index_data[i1] += c_i;
      }
    }
    for (i1 = 0; i1 < index_zstart; i1++) {
      c_i = z_temp_index_data[i1];
      if (c_i != static_cast<int32_T>(muDoubleScalarFloor(c_i))) {
        emlrtIntegerCheckR2012b(c_i, &j_emlrtDCI, &st);
      }
      if ((static_cast<int32_T>(c_i) < 1) ||
          (static_cast<int32_T>(c_i) > 326)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i), 1, 326,
                                      &o_emlrtBCI, &st);
      }
    }
    for (i1 = 0; i1 < index_zstart; i1++) {
      temp_prime_data[i1] =
          temp_prime[static_cast<int32_T>(z_temp_index_data[i1]) - 1];
    }
    for (i1 = 0; i1 < 2; i1++) {
      for (vectorUB = 0; vectorUB < 11; vectorUB++) {
        index_Hstart = (b_i + 30 * vectorUB) + 330 * i1;
        scalarLB = vectorUB + 11 * i1;
        b_proj_index_all[scalarLB] = proj_index_all[index_Hstart];
        b_proj_coefficient_all[scalarLB] = proj_coefficient_all[index_Hstart];
      }
    }
    b_st.site = &eb_emlrtRSI;
    index_Hstart = proj_D_unit_with_affinejacobian(
        b_st, temp_prime_data, index_zstart, b_proj_index_all,
        b_proj_coefficient_all, b_tmp_data, c_tmp_data, scalarLB);
    for (i1 = 0; i1 < index_zstart; i1++) {
      d_tmp_data[i1] = static_cast<int16_T>(z_temp_index_data[i1]);
    }
    if (index_zstart != index_Hstart) {
      emlrtSubAssignSizeCheck1dR2017a(index_zstart, index_Hstart, &k_emlrtECI,
                                      &st);
    }
    for (i1 = 0; i1 < index_zstart; i1++) {
      xi_n[d_tmp_data[i1] - 1] = b_tmp_data[i1];
    }
    if (index_zstart != scalarLB) {
      emlrtSubAssignSizeCheck1dR2017a(index_zstart, scalarLB, &l_emlrtECI, &st);
    }
    for (i1 = 0; i1 < index_zstart; i1++) {
      J_affine_D[d_tmp_data[i1] - 1] = c_tmp_data[i1];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  // temp_dual = eta + beta* (H * (2*z - xi)-g);
  if ((eta_size != 290) && (eta_size != 1)) {
    emlrtDimSizeImpxCheckR2021b(eta_size, 290, &g_emlrtECI, (emlrtConstCTX)&sp);
  }
  st.site = &db_emlrtRSI;
  if (xi_size == 326) {
    for (i = 0; i <= 324; i += 2) {
      r = _mm_loadu_pd(&xi_n[i]);
      _mm_storeu_pd(&temp_prime[i], _mm_sub_pd(_mm_mul_pd(_mm_set1_pd(2.0), r),
                                               _mm_loadu_pd(&xi_data[i])));
    }
  } else {
    binary_expand_op_7(temp_prime, xi_n, xi_data, xi_size);
  }
  // This function is only designed for PDG
  // We assume that the B matrix, an indentity matrix arounded by zero matrix.
  // If we are applying First order hold, we need to fix this to more general
  // settings.
  // A is the matrix including all equalities. n_e is the amount of equalities,
  // which is also the amount of state variable at time t.
  std::memset(&temp_dual[0], 0, 290U * sizeof(real_T));
  for (int32_T b_i{0}; b_i < 29; b_i++) {
    real_T d;
    int32_T i2;
    index_Hstart = b_i * 10 + 1;
    index_zstart = b_i * 11 + 11;
    if (index_zstart - 10 > index_zstart) {
      i = 0;
      i1 = 0;
    } else {
      i = index_zstart - 11;
      i1 = index_zstart;
    }
    if (index_Hstart > index_Hstart + 9) {
      vectorUB = 0;
      scalarLB = 0;
    } else {
      vectorUB = index_Hstart - 1;
      scalarLB = index_Hstart + 9;
    }
    scalarLB -= vectorUB;
    if (scalarLB != 10) {
      emlrtSubAssignSizeCheck1dR2017a(scalarLB, 10, &emlrtECI, &st);
    }
    b_st.site = &o_emlrtRSI;
    c_st.site = &r_emlrtRSI;
    i1 -= i;
    if (i1 != 11) {
      if (i1 == 1) {
        emlrtErrorWithMessageIdR2018a(
            &c_st, &k_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&c_st, &j_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    for (i1 = 0; i1 < 10; i1++) {
      c_i = 0.0;
      for (scalarLB = 0; scalarLB < 11; scalarLB++) {
        c_i += temp_prime[i + scalarLB] * A[(b_i + 29 * scalarLB) + 319 * i1];
      }
      b_temp_prime[i1] = c_i;
    }
    std::copy(&b_temp_prime[0], &b_temp_prime[10], &temp_dual[vectorUB]);
    c_i = (static_cast<real_T>(index_Hstart) + ne) - 1.0;
    if (index_Hstart > c_i) {
      i = 0;
      i1 = 0;
    } else {
      i = index_Hstart - 1;
      if (c_i != static_cast<int32_T>(muDoubleScalarFloor(c_i))) {
        emlrtIntegerCheckR2012b(c_i, &e_emlrtDCI, &st);
      }
      if ((static_cast<int32_T>(c_i) < 1) ||
          (static_cast<int32_T>(c_i) > 290)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i), 1, 290,
                                      &l_emlrtBCI, &st);
      }
      i1 = static_cast<int32_T>(c_i);
    }
    d = (((static_cast<real_T>(index_zstart) - 10.0) + 11.0) + ne) - 1.0;
    if ((static_cast<real_T>(index_zstart) - 10.0) + 11.0 > d) {
      index_zstart = 0;
      vectorUB = 0;
    } else {
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &f_emlrtDCI, &st);
      }
      if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > 326)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 326,
                                      &m_emlrtBCI, &st);
      }
      vectorUB = static_cast<int32_T>(d);
    }
    z_temp_index_idx_0 = i1 - i;
    scalarLB = vectorUB - index_zstart;
    if ((z_temp_index_idx_0 != scalarLB) &&
        ((z_temp_index_idx_0 != 1) && (scalarLB != 1))) {
      emlrtDimSizeImpxCheckR2021b(z_temp_index_idx_0, scalarLB, &b_emlrtECI,
                                  &st);
    }
    if (index_Hstart > c_i) {
      i2 = 0;
      index_Hstart = 0;
    } else {
      i2 = index_Hstart - 1;
      if (c_i != static_cast<int32_T>(muDoubleScalarFloor(c_i))) {
        emlrtIntegerCheckR2012b(c_i, &g_emlrtDCI, &st);
      }
      if ((static_cast<int32_T>(c_i) < 1) ||
          (static_cast<int32_T>(c_i) > 290)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(c_i), 1, 290,
                                      &n_emlrtBCI, &st);
      }
      index_Hstart = static_cast<int32_T>(c_i);
    }
    if (z_temp_index_idx_0 == scalarLB) {
      scalarLB = (z_temp_index_idx_0 / 2) << 1;
      vectorUB = scalarLB - 2;
      for (i1 = 0; i1 <= vectorUB; i1 += 2) {
        r = _mm_loadu_pd(&temp_dual[i + i1]);
        r1 = _mm_loadu_pd(&temp_prime[index_zstart + i1]);
        _mm_storeu_pd(&tmp_data[i1], _mm_add_pd(r, r1));
      }
      for (i1 = scalarLB; i1 < z_temp_index_idx_0; i1++) {
        tmp_data[i1] = temp_dual[i + i1] + temp_prime[index_zstart + i1];
      }
    } else {
      z_temp_index_idx_0 = binary_expand_op_2(
          tmp_data, temp_dual, i, i1, temp_prime, index_zstart, vectorUB);
    }
    i = index_Hstart - i2;
    if (i != z_temp_index_idx_0) {
      emlrtSubAssignSizeCheck1dR2017a(i, z_temp_index_idx_0, &c_emlrtECI, &st);
    }
    index_Hstart = static_cast<int16_T>(i);
    for (i = 0; i < index_Hstart; i++) {
      temp_dual[i2 + i] = tmp_data[i];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  if (eta_size == 290) {
    for (i = 0; i <= 288; i += 2) {
      r = _mm_loadu_pd(&temp_dual[i]);
      _mm_storeu_pd(&temp_dual[i],
                    _mm_add_pd(_mm_loadu_pd(&eta_data[i]),
                               _mm_mul_pd(_mm_set1_pd(beta),
                                          _mm_sub_pd(r, _mm_loadu_pd(&g[i])))));
    }
  } else {
    binary_expand_op_6(temp_dual, eta_data, eta_size, beta, g);
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
    emlrtDimSizeImpxCheckR2021b(xi_size, 326, &h_emlrtECI, (emlrtConstCTX)&sp);
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
    emlrtDimSizeImpxCheckR2021b(eta_size, 290, &i_emlrtECI, (emlrtConstCTX)&sp);
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
  index_Hstart = xi_size + eta_size;
  if (xi_size - 1 >= 0) {
    std::copy(&xi_data[0], &xi_data[xi_size], &e_tmp_data[0]);
  }
  for (i = 0; i < eta_size; i++) {
    e_tmp_data[i + xi_size] = eta_data[i];
  }
  if (index_Hstart != 616) {
    emlrtDimSizeImpxCheckR2021b(616, index_Hstart, &j_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if (index_Hstart == 616) {
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
    binary_expand_op_3(R, xi_n, eta_n, e_tmp_data, index_Hstart);
  }
}

// End of code generation (dev_xpipg_onestep_g.cpp)
