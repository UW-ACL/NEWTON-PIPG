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
#include "dev_newtonpipg_g_with_timer_data.h"
#include "proj_D_unit_with_affinejacobian.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mwmathutil.h"
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo hb_emlrtRSI{
    8,                     // lineNo
    "dev_xpipg_onestep_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pathName
};

static emlrtRSInfo ib_emlrtRSI{
    9,                     // lineNo
    "dev_xpipg_onestep_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pathName
};

static emlrtRSInfo jb_emlrtRSI{
    11,                    // lineNo
    "dev_xpipg_onestep_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pathName
};

static emlrtRSInfo kb_emlrtRSI{
    16,                           // lineNo
    "proj_D_with_affinejacobian", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" // pathName
};

static emlrtECInfo j_emlrtECI{
    1,                     // nDims
    8,                     // lineNo
    26,                    // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

static emlrtECInfo k_emlrtECI{
    1,                     // nDims
    8,                     // lineNo
    14,                    // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

static emlrtECInfo l_emlrtECI{
    1,                     // nDims
    11,                    // lineNo
    13,                    // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

static emlrtECInfo m_emlrtECI{
    1,                     // nDims
    13,                    // lineNo
    8,                     // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

static emlrtECInfo n_emlrtECI{
    1,                     // nDims
    14,                    // lineNo
    9,                     // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

static emlrtECInfo o_emlrtECI{
    1,                     // nDims
    15,                    // lineNo
    5,                     // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

static emlrtRTEInfo j_emlrtRTEI{
    7,                            // lineNo
    9,                            // colNo
    "proj_D_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" // pName
};

static emlrtBCInfo p_emlrtBCI{
    1,                            // iFirst
    30,                           // iLast
    8,                            // lineNo
    42,                           // colNo
    "proj_index_all",             // aName
    "proj_D_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m", // pName
    0                                     // checkKind
};

static emlrtECInfo p_emlrtECI{
    -1,                           // nDims
    16,                           // lineNo
    6,                            // colNo
    "proj_D_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" // pName
};

static emlrtECInfo q_emlrtECI{
    -1,                           // nDims
    16,                           // lineNo
    23,                           // colNo
    "proj_D_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" // pName
};

static emlrtDCInfo q_emlrtDCI{
    15,                           // lineNo
    18,                           // colNo
    "proj_D_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m", // pName
    1                                     // checkKind
};

static emlrtBCInfo q_emlrtBCI{
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

static emlrtRTEInfo gc_emlrtRTEI{
    13,                           // lineNo
    9,                            // colNo
    "proj_D_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" // pName
};

static emlrtRTEInfo hc_emlrtRTEI{
    11,                           // lineNo
    9,                            // colNo
    "proj_D_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" // pName
};

static emlrtRTEInfo ic_emlrtRTEI{
    15,                           // lineNo
    15,                           // colNo
    "proj_D_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" // pName
};

static emlrtRTEInfo jc_emlrtRTEI{
    16,                           // lineNo
    8,                            // colNo
    "proj_D_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" // pName
};

static emlrtRTEInfo kc_emlrtRTEI{
    13,                    // lineNo
    8,                     // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

static emlrtRTEInfo lc_emlrtRTEI{
    14,                    // lineNo
    9,                     // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

static emlrtRTEInfo mc_emlrtRTEI{
    15,                    // lineNo
    22,                    // colNo
    "dev_xpipg_onestep_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" // pName
};

// Function Declarations
static void binary_expand_op_3(real_T in1[616], const real_T in2[326],
                               const real_T in3[290],
                               const coder::array<real_T, 1U> &in4);

static void binary_expand_op_4(real_T in1[290],
                               const coder::array<real_T, 1U> &in2, real_T in3);

static void binary_expand_op_5(real_T in1[326],
                               const coder::array<real_T, 1U> &in2, real_T in3);

static void binary_expand_op_7(const emlrtStack &sp, const emlrtRSInfo in2,
                               const real_T in3[3190], const real_T in4[326],
                               const coder::array<real_T, 1U> &in5, real_T in6,
                               real_T in1[290]);

static void binary_expand_op_8(real_T in1[326],
                               const coder::array<real_T, 1U> &in2, real_T in3,
                               const real_T in4[326], const real_T in5[326],
                               const coder::array<real_T, 1U> &in6);

// Function Definitions
static void binary_expand_op_3(real_T in1[616], const real_T in2[326],
                               const real_T in3[290],
                               const coder::array<real_T, 1U> &in4)
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
  stride_0_0 = (in4.size(0) != 1);
  for (int32_T i{0}; i < 616; i++) {
    in1[i] += in4[i * stride_0_0];
  }
}

static void binary_expand_op_4(real_T in1[290],
                               const coder::array<real_T, 1U> &in2, real_T in3)
{
  int32_T stride_0_0;
  stride_0_0 = (in2.size(0) != 1);
  for (int32_T i{0}; i < 290; i++) {
    in1[i] = in2[i * stride_0_0] + in3 * in1[i];
  }
}

static void binary_expand_op_5(real_T in1[326],
                               const coder::array<real_T, 1U> &in2, real_T in3)
{
  int32_T stride_0_0;
  stride_0_0 = (in2.size(0) != 1);
  for (int32_T i{0}; i < 326; i++) {
    in1[i] = in2[i * stride_0_0] + in3 * in1[i];
  }
}

static void binary_expand_op_7(const emlrtStack &sp, const emlrtRSInfo in2,
                               const real_T in3[3190], const real_T in4[326],
                               const coder::array<real_T, 1U> &in5, real_T in6,
                               real_T in1[290])
{
  emlrtStack st;
  real_T dv[326];
  int32_T stride_0_0;
  st.prev = &sp;
  st.tls = sp.tls;
  stride_0_0 = (in5.size(0) != 1);
  for (int32_T i{0}; i < 326; i++) {
    dv[i] = 2.0 * in4[i] - in5[i * stride_0_0];
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  dev_HZ_g(st, in3, dv, in6, in1);
}

static void binary_expand_op_8(real_T in1[326],
                               const coder::array<real_T, 1U> &in2, real_T in3,
                               const real_T in4[326], const real_T in5[326],
                               const coder::array<real_T, 1U> &in6)
{
  int32_T stride_0_0_tmp;
  int32_T stride_2_0;
  stride_0_0_tmp = (in2.size(0) != 1);
  stride_2_0 = (in6.size(0) != 1);
  for (int32_T i{0}; i < 326; i++) {
    real_T d;
    d = in2[i * stride_0_0_tmp];
    in1[i] = d - in3 * ((in4[i] * d + in5[i]) + in6[i * stride_2_0]);
  }
}

void dev_xpipg_onestep_g(
    const emlrtStack &sp, const coder::array<real_T, 1U> &xi,
    const coder::array<real_T, 1U> &eta, real_T alpha, real_T beta, real_T rho,
    const real_T P[326], const real_T A[3190], const real_T q[326],
    const real_T g[290], real_T N, real_T nx, real_T nu, real_T ne,
    const real_T proj_index_all[660], const real_T proj_coefficient_all[660],
    const real_T cone_k_polar[290], real_T xi_n[326], real_T eta_n[290],
    real_T J_affine_D[326], real_T J_k_polar[290], real_T R[616],
    real_T temp_prime[326], real_T temp_dual[290])
{
  __m128d r1;
  __m128d r2;
  emlrtProfilerSentinel b_profilerSentinel;
  emlrtProfilerSentinel c_profilerSentinel;
  emlrtProfilerSentinel profilerSentinel;
  coder::array<real_T, 2U> z_temp_index;
  coder::array<real_T, 1U> b_temp_prime;
  coder::array<real_T, 1U> r;
  coder::array<real_T, 1U> r3;
  coder::array<int16_T, 2U> r4;
  emlrtStack b_st;
  emlrtStack st;
  real_T dv[326];
  real_T c_i;
  int32_T b_loop_ub;
  int32_T i;
  int32_T loop_ub;
  int32_T scalarLB;
  int32_T vectorUB;
  boolean_T b;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  emlrtMEXProfilingFunctionEntryCPP((char_T *)c_dev_xpipg_onestep_g_complete_,
                                    static_cast<boolean_T>(isMexOutdated),
                                    &profilerSentinel);
  // P must be a vector
  // A is the matrix defining H, here we only have zero order hold for the
  // simplicity of programming.
  //  temp_prime = xi - alpha*(P.* xi + q + Ht * eta);
  emlrtMEXProfilingStatement(1, static_cast<boolean_T>(isMexOutdated));
  loop_ub = xi.size(0);
  b = ((xi.size(0) != 326) && (xi.size(0) != 1));
  if (b) {
    emlrtDimSizeImpxCheckR2021b(326, xi.size(0), &j_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  st.site = &hb_emlrtRSI;
  dev_HtZ_g(st, A, eta, ne, r);
  if ((r.size(0) != 326) && (r.size(0) != 1)) {
    emlrtDimSizeImpxCheckR2021b(326, r.size(0), &j_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if ((xi.size(0) != 326) && (xi.size(0) != 1)) {
    emlrtDimSizeImpxCheckR2021b(xi.size(0), 326, &k_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if ((xi.size(0) == 326) && (r.size(0) == 326) && (xi.size(0) == 326)) {
    for (i = 0; i <= 324; i += 2) {
      r1 = _mm_loadu_pd(&xi[i]);
      r2 = _mm_loadu_pd(&r[i]);
      _mm_storeu_pd(
          &temp_prime[i],
          _mm_sub_pd(
              r1, _mm_mul_pd(
                      _mm_set1_pd(alpha),
                      _mm_add_pd(_mm_add_pd(_mm_mul_pd(_mm_loadu_pd(&P[i]), r1),
                                            _mm_loadu_pd(&q[i])),
                                 r2))));
    }
  } else {
    binary_expand_op_8(temp_prime, xi, alpha, P, q, r);
  }
  emlrtMEXProfilingStatement(2, static_cast<boolean_T>(isMexOutdated));
  st.site = &ib_emlrtRSI;
  emlrtMEXProfilingFunctionEntryCPP((char_T *)c_proj_D_with_affinejacobian_co,
                                    static_cast<boolean_T>(isMexOutdated),
                                    &b_profilerSentinel);
  // Compute the projection to set D.
  // nx, nu are legacy. They stands for the number of control and input
  emlrtMEXProfilingStatement(1, static_cast<boolean_T>(isMexOutdated));
  std::memset(&xi_n[0], 0, 326U * sizeof(real_T));
  emlrtMEXProfilingStatement(2, static_cast<boolean_T>(isMexOutdated));
  std::memset(&J_affine_D[0], 0, 326U * sizeof(real_T));
  emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
  i = static_cast<int32_T>(N);
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, N, mxDOUBLE_CLASS,
                                static_cast<int32_T>(N), &j_emlrtRTEI, &st);
  for (int32_T b_i{0}; b_i < i; b_i++) {
    // if it is random use N+1. Not robust!
    emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
    if ((b_i + 1 < 1) || (b_i + 1 > 30)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, 30, &p_emlrtBCI, &st);
    }
    emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
    emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
    if (static_cast<real_T>(b_i) + 1.0 < N) {
      emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
      c_i = nx + nu;
      if (muDoubleScalarIsNaN(c_i)) {
        z_temp_index.set_size(&ec_emlrtRTEI, &st, 1, 1);
        z_temp_index[0] = rtNaN;
      } else if (c_i < 1.0) {
        z_temp_index.set_size(&ec_emlrtRTEI, &st, z_temp_index.size(0), 0);
      } else {
        z_temp_index.set_size(&ec_emlrtRTEI, &st, 1,
                              static_cast<int32_T>(c_i - 1.0) + 1);
        b_loop_ub = static_cast<int32_T>(c_i - 1.0);
        for (int32_T i1{0}; i1 <= b_loop_ub; i1++) {
          z_temp_index[i1] = static_cast<real_T>(i1) + 1.0;
        }
      }
      z_temp_index.set_size(&hc_emlrtRTEI, &st, 1, z_temp_index.size(1));
      c_i *= (static_cast<real_T>(b_i) + 1.0) - 1.0;
      b_loop_ub = z_temp_index.size(1) - 1;
      scalarLB = (z_temp_index.size(1) / 2) << 1;
      vectorUB = scalarLB - 2;
      for (int32_T i1{0}; i1 <= vectorUB; i1 += 2) {
        r1 = _mm_loadu_pd(&z_temp_index[i1]);
        _mm_storeu_pd(&z_temp_index[i1], _mm_add_pd(_mm_set1_pd(c_i), r1));
      }
      for (int32_T i1{scalarLB}; i1 <= b_loop_ub; i1++) {
        z_temp_index[i1] = c_i + z_temp_index[i1];
      }
      emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
    } else {
      emlrtMEXProfilingStatement(8, static_cast<boolean_T>(isMexOutdated));
      emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
      if (muDoubleScalarIsNaN(nx)) {
        z_temp_index.set_size(&ec_emlrtRTEI, &st, 1, 1);
        z_temp_index[0] = rtNaN;
      } else if (nx < 1.0) {
        z_temp_index.set_size(&ec_emlrtRTEI, &st, z_temp_index.size(0), 0);
      } else {
        z_temp_index.set_size(&ec_emlrtRTEI, &st, 1,
                              static_cast<int32_T>(nx - 1.0) + 1);
        b_loop_ub = static_cast<int32_T>(nx - 1.0);
        for (int32_T i1{0}; i1 <= b_loop_ub; i1++) {
          z_temp_index[i1] = static_cast<real_T>(i1) + 1.0;
        }
      }
      z_temp_index.set_size(&gc_emlrtRTEI, &st, 1, z_temp_index.size(1));
      c_i = ((static_cast<real_T>(b_i) + 1.0) - 1.0) * (nx + nu);
      b_loop_ub = z_temp_index.size(1) - 1;
      scalarLB = (z_temp_index.size(1) / 2) << 1;
      vectorUB = scalarLB - 2;
      for (int32_T i1{0}; i1 <= vectorUB; i1 += 2) {
        r1 = _mm_loadu_pd(&z_temp_index[i1]);
        _mm_storeu_pd(&z_temp_index[i1], _mm_add_pd(_mm_set1_pd(c_i), r1));
      }
      for (int32_T i1{scalarLB}; i1 <= b_loop_ub; i1++) {
        z_temp_index[i1] = c_i + z_temp_index[i1];
      }
      emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
    }
    emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
    b_loop_ub = z_temp_index.size(1);
    for (int32_T i1{0}; i1 < b_loop_ub; i1++) {
      if (z_temp_index[i1] !=
          static_cast<int32_T>(muDoubleScalarFloor(z_temp_index[i1]))) {
        emlrtIntegerCheckR2012b(z_temp_index[i1], &q_emlrtDCI, &st);
      }
      scalarLB = static_cast<int32_T>(z_temp_index[i1]);
      if ((scalarLB < 1) || (scalarLB > 326)) {
        emlrtDynamicBoundsCheckR2012b(scalarLB, 1, 326, &q_emlrtBCI, &st);
      }
    }
    emlrtMEXProfilingStatement(12, static_cast<boolean_T>(isMexOutdated));
    b_temp_prime.set_size(&ic_emlrtRTEI, &st, z_temp_index.size(1));
    for (int32_T i1{0}; i1 < b_loop_ub; i1++) {
      b_temp_prime[i1] = temp_prime[static_cast<int32_T>(z_temp_index[i1]) - 1];
    }
    b_st.site = &kb_emlrtRSI;
    d_proj_D_unit_with_affinejacobi(b_st, b_temp_prime,
                                    &proj_index_all[22 * b_i],
                                    &proj_coefficient_all[22 * b_i], r, r3);
    r4.set_size(&jc_emlrtRTEI, &st, 1, z_temp_index.size(1));
    for (int32_T i1{0}; i1 < b_loop_ub; i1++) {
      r4[i1] = static_cast<int16_T>(z_temp_index[i1]);
    }
    if (r.size(0) != z_temp_index.size(1)) {
      emlrtSubAssignSizeCheck1dR2017a(z_temp_index.size(1), r.size(0),
                                      &p_emlrtECI, &st);
    }
    for (int32_T i1{0}; i1 < b_loop_ub; i1++) {
      xi_n[r4[i1] - 1] = r[i1];
    }
    if (r3.size(0) != z_temp_index.size(1)) {
      emlrtSubAssignSizeCheck1dR2017a(z_temp_index.size(1), r3.size(0),
                                      &q_emlrtECI, &st);
    }
    for (int32_T i1{0}; i1 < b_loop_ub; i1++) {
      J_affine_D[r4[i1] - 1] = r3[i1];
    }
    emlrtMEXProfilingStatement(13, static_cast<boolean_T>(isMexOutdated));
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emlrtMEXProfilingFunctionExitCPP(&b_profilerSentinel);
  // temp_dual = eta + beta* (H * (2*z - xi)-g);
  emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
  b_loop_ub = eta.size(0);
  if ((eta.size(0) != 290) && (eta.size(0) != 1)) {
    emlrtDimSizeImpxCheckR2021b(eta.size(0), 290, &l_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if (xi.size(0) == 326) {
    for (i = 0; i <= 324; i += 2) {
      r1 = _mm_loadu_pd(&xi_n[i]);
      _mm_storeu_pd(&dv[i], _mm_sub_pd(_mm_mul_pd(_mm_set1_pd(2.0), r1),
                                       _mm_loadu_pd(&xi[i])));
    }
    st.site = &jb_emlrtRSI;
    dev_HZ_g(st, A, dv, ne, temp_dual);
  } else {
    st.site = &jb_emlrtRSI;
    binary_expand_op_7(st, jb_emlrtRSI, A, xi_n, xi, ne, temp_dual);
  }
  for (i = 0; i <= 288; i += 2) {
    r1 = _mm_loadu_pd(&temp_dual[i]);
    _mm_storeu_pd(&temp_dual[i], _mm_sub_pd(r1, _mm_loadu_pd(&g[i])));
  }
  if (eta.size(0) == 290) {
    for (i = 0; i <= 288; i += 2) {
      r1 = _mm_loadu_pd(&temp_dual[i]);
      _mm_storeu_pd(
          &temp_dual[i],
          _mm_add_pd(_mm_loadu_pd(&eta[i]), _mm_mul_pd(_mm_set1_pd(beta), r1)));
    }
  } else {
    binary_expand_op_4(temp_dual, eta, beta);
  }
  emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingFunctionEntryCPP((char_T *)c_proj_k_polar_with_jacobian_co,
                                    static_cast<boolean_T>(isMexOutdated),
                                    &c_profilerSentinel);
  //  compute the projection to cone_k_polar;
  // J is a vector.
  emlrtMEXProfilingStatement(2, static_cast<boolean_T>(isMexOutdated));
  for (int32_T b_i{0}; b_i < 290; b_i++) {
    J_k_polar[b_i] = 1.0;
  }
  emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
  for (int32_T b_i{0}; b_i < 290; b_i++) {
    emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
    if (cone_k_polar[b_i] == 0.0) {
      emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
      eta_n[b_i] = temp_dual[b_i];
      //  projection to Rn
      emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
    } else {
      emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
      c_i = temp_dual[b_i];
      if (c_i >= 0.0) {
        emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
        eta_n[b_i] = 0.0;
        emlrtMEXProfilingStatement(8, static_cast<boolean_T>(isMexOutdated));
        J_k_polar[b_i] = 0.0;
        emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
      } else {
        emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
        emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
        eta_n[b_i] = c_i;
        emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
      }
    }
    emlrtMEXProfilingStatement(12, static_cast<boolean_T>(isMexOutdated));
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  emlrtMEXProfilingFunctionExitCPP(&c_profilerSentinel);
  emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
  r.set_size(&kc_emlrtRTEI, &sp, xi.size(0));
  scalarLB = (xi.size(0) / 2) << 1;
  vectorUB = scalarLB - 2;
  for (i = 0; i <= vectorUB; i += 2) {
    _mm_storeu_pd(&r[i],
                  _mm_mul_pd(_mm_set1_pd(1.0 - rho), _mm_loadu_pd(&xi[i])));
  }
  for (i = scalarLB; i < loop_ub; i++) {
    r[i] = (1.0 - rho) * xi[i];
  }
  if ((r.size(0) != 326) && (r.size(0) != 1)) {
    emlrtDimSizeImpxCheckR2021b(r.size(0), 326, &m_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if (r.size(0) == 326) {
    for (i = 0; i <= 324; i += 2) {
      r1 = _mm_loadu_pd(&xi_n[i]);
      r2 = _mm_loadu_pd(&r[i]);
      _mm_storeu_pd(&xi_n[i], _mm_add_pd(r2, _mm_mul_pd(_mm_set1_pd(rho), r1)));
    }
  } else {
    binary_expand_op_5(xi_n, r, rho);
  }
  emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
  r.set_size(&lc_emlrtRTEI, &sp, eta.size(0));
  scalarLB = (eta.size(0) / 2) << 1;
  vectorUB = scalarLB - 2;
  for (i = 0; i <= vectorUB; i += 2) {
    _mm_storeu_pd(&r[i],
                  _mm_mul_pd(_mm_set1_pd(1.0 - rho), _mm_loadu_pd(&eta[i])));
  }
  for (i = scalarLB; i < b_loop_ub; i++) {
    r[i] = (1.0 - rho) * eta[i];
  }
  if ((r.size(0) != 290) && (r.size(0) != 1)) {
    emlrtDimSizeImpxCheckR2021b(r.size(0), 290, &n_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if (r.size(0) == 290) {
    for (i = 0; i <= 288; i += 2) {
      r1 = _mm_loadu_pd(&eta_n[i]);
      r2 = _mm_loadu_pd(&r[i]);
      _mm_storeu_pd(&eta_n[i],
                    _mm_add_pd(r2, _mm_mul_pd(_mm_set1_pd(rho), r1)));
    }
  } else {
    binary_expand_op_4(eta_n, r, rho);
  }
  emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
  i = xi.size(0) + eta.size(0);
  r.set_size(&mc_emlrtRTEI, &sp, i);
  for (int32_T i1{0}; i1 < loop_ub; i1++) {
    r[i1] = xi[i1];
  }
  for (int32_T i1{0}; i1 < b_loop_ub; i1++) {
    r[i1 + xi.size(0)] = eta[i1];
  }
  if ((i != 616) && (i != 1)) {
    emlrtDimSizeImpxCheckR2021b(616, i, &o_emlrtECI, (emlrtConstCTX)&sp);
  }
  if (r.size(0) == 616) {
    for (i = 0; i <= 324; i += 2) {
      r1 = _mm_loadu_pd(&xi_n[i]);
      _mm_storeu_pd(&R[i], _mm_mul_pd(r1, _mm_set1_pd(-1.0)));
    }
    for (i = 0; i <= 288; i += 2) {
      r1 = _mm_loadu_pd(&eta_n[i]);
      _mm_storeu_pd(&R[i + 326], _mm_mul_pd(r1, _mm_set1_pd(-1.0)));
    }
    for (i = 0; i <= 614; i += 2) {
      r1 = _mm_loadu_pd(&R[i]);
      r2 = _mm_loadu_pd(&r[i]);
      _mm_storeu_pd(&R[i], _mm_add_pd(r1, r2));
    }
  } else {
    binary_expand_op_3(R, xi_n, eta_n, r);
  }
  emlrtMEXProfilingStatement(8, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingFunctionExitCPP(&profilerSentinel);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (dev_xpipg_onestep_g.cpp)
