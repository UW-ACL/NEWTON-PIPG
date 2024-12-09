//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_jacob_soc.cpp
//
// Code generation for function 'dev_jacob_soc'
//

// Include files
#include "dev_jacob_soc.h"
#include "abs.h"
#include "dev_jacob_ball.h"
#include "dev_newtonpipg_g_with_timer_data.h"
#include "diag.h"
#include "eig.h"
#include "eml_mtimes_helper.h"
#include "eye.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "blas.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mwmathutil.h"
#include <cstddef>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo ig_emlrtRSI{
    4,               // lineNo
    "dev_jacob_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo jg_emlrtRSI{
    6,               // lineNo
    "dev_jacob_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo kg_emlrtRSI{
    14,              // lineNo
    "dev_jacob_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo lg_emlrtRSI{
    15,              // lineNo
    "dev_jacob_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo mg_emlrtRSI{
    16,              // lineNo
    "dev_jacob_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo ng_emlrtRSI{
    17,              // lineNo
    "dev_jacob_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo og_emlrtRSI{
    18,              // lineNo
    "dev_jacob_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo pg_emlrtRSI{
    41,                // lineNo
    "constructMatrix", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo qg_emlrtRSI{
    44,                // lineNo
    "constructMatrix", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo rg_emlrtRSI{
    48,                // lineNo
    "constructMatrix", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo sg_emlrtRSI{
    50,                // lineNo
    "constructMatrix", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo tg_emlrtRSI{
    41,    // lineNo
    "cat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pathName
};

static emlrtRSInfo ug_emlrtRSI{
    113,        // lineNo
    "cat_impl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pathName
};

static emlrtBCInfo lc_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    3,               // lineNo
    12,              // colNo
    "v",             // aName
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo mc_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    4,               // lineNo
    12,              // colNo
    "v",             // aName
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo nc_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    4,               // lineNo
    15,              // colNo
    "v",             // aName
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m", // pName
    0                                               // checkKind
};

static emlrtECInfo xb_emlrtECI{
    1,               // nDims
    17,              // lineNo
    55,              // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtECInfo yb_emlrtECI{
    1,               // nDims
    17,              // lineNo
    44,              // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtECInfo ac_emlrtECI{
    1,               // nDims
    18,              // lineNo
    46,              // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtECInfo bc_emlrtECI{
    1,               // nDims
    18,              // lineNo
    35,              // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtECInfo cc_emlrtECI{
    2,               // nDims
    19,              // lineNo
    22,              // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtECInfo dc_emlrtECI{
    2,               // nDims
    20,              // lineNo
    22,              // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtECInfo ec_emlrtECI{
    1,                 // nDims
    44,                // lineNo
    55,                // colNo
    "constructMatrix", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtECInfo fc_emlrtECI{
    2,                 // nDims
    44,                // lineNo
    55,                // colNo
    "constructMatrix", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtECInfo gc_emlrtECI{
    1,                 // nDims
    44,                // lineNo
    24,                // colNo
    "constructMatrix", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtECInfo hc_emlrtECI{
    2,                 // nDims
    44,                // lineNo
    24,                // colNo
    "constructMatrix", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtRTEInfo u_emlrtRTEI{
    288,                   // lineNo
    27,                    // colNo
    "check_non_axis_size", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pName
};

static emlrtRTEInfo rg_emlrtRTEI{
    4,               // lineNo
    5,               // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtRTEInfo sg_emlrtRTEI{
    38,              // lineNo
    5,               // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtRTEInfo tg_emlrtRTEI{
    44,              // lineNo
    59,              // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtRTEInfo ug_emlrtRTEI{
    44,              // lineNo
    24,              // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtRTEInfo vg_emlrtRTEI{
    41,    // lineNo
    5,     // colNo
    "cat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pName
};

static emlrtRTEInfo wg_emlrtRTEI{
    48,              // lineNo
    51,              // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtRTEInfo xg_emlrtRTEI{
    308,   // lineNo
    14,    // colNo
    "cat", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pName
};

static emlrtRTEInfo yg_emlrtRTEI{
    17,              // lineNo
    55,              // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtRTEInfo ah_emlrtRTEI{
    17,              // lineNo
    44,              // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtRTEInfo bh_emlrtRTEI{
    19,              // lineNo
    9,               // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtRTEInfo ch_emlrtRTEI{
    20,              // lineNo
    9,               // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtRTEInfo dh_emlrtRTEI{
    10,              // lineNo
    9,               // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtRTEInfo eh_emlrtRTEI{
    11,              // lineNo
    9,               // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtRTEInfo fh_emlrtRTEI{
    6,               // lineNo
    27,              // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtRTEInfo gh_emlrtRTEI{
    7,               // lineNo
    9,               // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtRSInfo vi_emlrtRSI{
    20,              // lineNo
    "dev_jacob_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo wi_emlrtRSI{
    19,              // lineNo
    "dev_jacob_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

// Function Declarations
static void b_times(const emlrtStack &sp, coder::array<creal_T, 1U> &in1,
                    const coder::array<creal_T, 1U> &in2,
                    const coder::array<real_T, 1U> &in3);

// Function Definitions
static void b_times(const emlrtStack &sp, coder::array<creal_T, 1U> &in1,
                    const coder::array<creal_T, 1U> &in2,
                    const coder::array<real_T, 1U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&yg_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    real_T d;
    int32_T i1;
    d = in3[i * stride_1_0];
    i1 = i * stride_0_0;
    in1[i].re = d * in2[i1].re;
    in1[i].im = d * in2[i1].im;
  }
}

void dev_jacob_soc(const emlrtStack &sp, const coder::array<real_T, 1U> &v,
                   real_T epsilon, const coder::array<real_T, 1U> &P,
                   real_T alpha, coder::array<real_T, 2U> &Q_out,
                   coder::array<real_T, 2U> &Q_inv)
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  emlrtProfilerSentinel b_profilerSentinel;
  emlrtProfilerSentinel profilerSentinel;
  coder::array<creal_T, 2U> Q;
  coder::array<creal_T, 2U> lambda_m;
  coder::array<creal_T, 1U> lambda;
  coder::array<creal_T, 1U> r3;
  coder::array<creal_T, 1U> r4;
  coder::array<creal_T, 1U> y;
  coder::array<real_T, 2U> b_I;
  coder::array<real_T, 2U> b_result;
  coder::array<real_T, 2U> r;
  coder::array<real_T, 2U> rightBottomBlock;
  coder::array<real_T, 2U> varargin_2;
  coder::array<real_T, 1U> lambda_inv;
  coder::array<real_T, 1U> z2;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T br;
  real_T normZ2;
  int32_T result[2];
  int32_T loop_ub;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  emlrtMEXProfilingFunctionEntryCPP((char_T *)dev_jacob_soc_complete_name,
                                    static_cast<boolean_T>(isMexOutdated),
                                    &profilerSentinel);
  emlrtMEXProfilingStatement(1, static_cast<boolean_T>(isMexOutdated));
  if (v.size(0) < 1) {
    emlrtDynamicBoundsCheckR2012b(v.size(0), 1, v.size(0), &lc_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  emlrtMEXProfilingStatement(2, static_cast<boolean_T>(isMexOutdated));
  if (v.size(0) - 1 < 1) {
    loop_ub = 0;
  } else {
    if (v.size(0) < 1) {
      emlrtDynamicBoundsCheckR2012b(1, 1, v.size(0), &mc_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    if ((v.size(0) - 1 < 1) || (v.size(0) - 1 > v.size(0))) {
      emlrtDynamicBoundsCheckR2012b(v.size(0) - 1, 1, v.size(0), &nc_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    loop_ub = v.size(0) - 1;
  }
  result[0] = 1;
  result[1] = loop_ub;
  st.site = &ig_emlrtRSI;
  coder::internal::indexShapeCheck(st, v.size(0), result);
  z2.set_size(&rg_emlrtRTEI, &sp, loop_ub);
  for (int32_T i{0}; i < loop_ub; i++) {
    z2[i] = v[i];
  }
  emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
  if (loop_ub == 0) {
    normZ2 = 0.0;
  } else {
    n_t = (ptrdiff_t)loop_ub;
    incx_t = (ptrdiff_t)1;
    normZ2 = dnrm2(&n_t, &(z2.data())[0], &incx_t);
  }
  br = v[v.size(0) - 1];
  if (epsilon * br >= normZ2) {
    int32_T input_sizes_idx_1;
    int32_T loop_ub_tmp;
    emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
    loop_ub = P.size(0);
    z2.set_size(&fh_emlrtRTEI, &sp, P.size(0));
    loop_ub_tmp = (P.size(0) / 2) << 1;
    input_sizes_idx_1 = loop_ub_tmp - 2;
    for (int32_T i{0}; i <= input_sizes_idx_1; i += 2) {
      _mm_storeu_pd(&z2[i], _mm_div_pd(_mm_set1_pd(1.0),
                                       _mm_mul_pd(_mm_set1_pd(alpha),
                                                  _mm_loadu_pd(&P[i]))));
    }
    for (int32_T i{loop_ub_tmp}; i < loop_ub; i++) {
      z2[i] = 1.0 / (alpha * P[i]);
    }
    st.site = &jg_emlrtRSI;
    coder::b_sqrt(st, z2);
    st.site = &jg_emlrtRSI;
    coder::diag(st, z2, Q_out);
    emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
    Q_inv.set_size(&gh_emlrtRTEI, &sp, Q_out.size(0), Q_out.size(1));
    loop_ub = Q_out.size(0) * Q_out.size(1);
    for (int32_T i{0}; i < loop_ub; i++) {
      Q_inv[i] = Q_out[i];
    }
    emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
  } else {
    emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
    if (br <= -epsilon * normZ2) {
      int32_T loop_ub_tmp;
      emlrtMEXProfilingStatement(8, static_cast<boolean_T>(isMexOutdated));
      Q_out.set_size(&dh_emlrtRTEI, &sp, v.size(0), v.size(0));
      loop_ub_tmp = v.size(0) * v.size(0);
      for (int32_T i{0}; i < loop_ub_tmp; i++) {
        Q_out[i] = 0.0;
      }
      emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
      Q_inv.set_size(&eh_emlrtRTEI, &sp, v.size(0), v.size(0));
      for (int32_T i{0}; i < loop_ub_tmp; i++) {
        Q_inv[i] = 0.0;
      }
      emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
    } else {
      __m128d r1;
      __m128d r2;
      real_T bi;
      real_T brm;
      real_T c;
      real_T re;
      int32_T input_sizes_idx_1;
      int32_T loop_ub_tmp;
      int32_T sizes_idx_1;
      boolean_T empty_non_axis_sizes;
      boolean_T sizes_idx_1_tmp;
      emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
      emlrtMEXProfilingStatement(12, static_cast<boolean_T>(isMexOutdated));
      st.site = &kg_emlrtRSI;
      emlrtMEXProfilingFunctionEntryCPP((char_T *)constructMatrix_complete_name,
                                        static_cast<boolean_T>(isMexOutdated),
                                        &b_profilerSentinel);
      //  Ensure z2 is a column vector
      //  Compute the norm of z2
      emlrtMEXProfilingStatement(1, static_cast<boolean_T>(isMexOutdated));
      if (loop_ub == 0) {
        normZ2 = 0.0;
      } else {
        n_t = (ptrdiff_t)loop_ub;
        incx_t = (ptrdiff_t)1;
        normZ2 = dnrm2(&n_t, &(z2.data())[0], &incx_t);
      }
      //  Scalar part
      emlrtMEXProfilingStatement(2, static_cast<boolean_T>(isMexOutdated));
      //  z2 normalized
      emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
      z2.set_size(&sg_emlrtRTEI, &st, loop_ub);
      input_sizes_idx_1 = (loop_ub / 2) << 1;
      sizes_idx_1 = input_sizes_idx_1 - 2;
      for (int32_T i{0}; i <= sizes_idx_1; i += 2) {
        _mm_storeu_pd(&z2[i],
                      _mm_div_pd(_mm_loadu_pd(&v[i]), _mm_set1_pd(normZ2)));
      }
      for (int32_T i{input_sizes_idx_1}; i < loop_ub; i++) {
        z2[i] = v[i] / normZ2;
      }
      //  Identity matrix of size z2
      emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
      b_st.site = &pg_emlrtRSI;
      coder::eye(b_st, static_cast<real_T>(loop_ub), b_I);
      //  Compute the right-bottom block of the matrix
      emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
      b_st.site = &qg_emlrtRSI;
      c_st.site = &w_emlrtRSI;
      c = normZ2 * normZ2;
      r.set_size(&tg_emlrtRTEI, &st, loop_ub, loop_ub);
      for (int32_T i{0}; i < loop_ub; i++) {
        for (int32_T i1{0}; i1 <= sizes_idx_1; i1 += 2) {
          _mm_storeu_pd(&r[i1 + r.size(0) * i],
                        _mm_div_pd(_mm_add_pd(_mm_set1_pd(0.0),
                                              _mm_mul_pd(_mm_loadu_pd(&v[i1]),
                                                         _mm_set1_pd(v[i]))),
                                   _mm_set1_pd(c)));
        }
        for (int32_T i1{input_sizes_idx_1}; i1 < loop_ub; i1++) {
          r[i1 + r.size(0) * i] = v[i1] * v[i] / c;
        }
      }
      if ((b_I.size(0) != r.size(0)) &&
          ((b_I.size(0) != 1) && (r.size(0) != 1))) {
        emlrtDimSizeImpxCheckR2021b(b_I.size(0), r.size(0), &ec_emlrtECI, &st);
      }
      if ((b_I.size(1) != r.size(1)) &&
          ((b_I.size(1) != 1) && (r.size(1) != 1))) {
        emlrtDimSizeImpxCheckR2021b(b_I.size(1), r.size(1), &fc_emlrtECI, &st);
      }
      rightBottomBlock.set_size(&ug_emlrtRTEI, &st, b_I.size(0), b_I.size(1));
      loop_ub_tmp = b_I.size(0) * b_I.size(1);
      input_sizes_idx_1 = (loop_ub_tmp / 2) << 1;
      sizes_idx_1 = input_sizes_idx_1 - 2;
      for (int32_T i{0}; i <= sizes_idx_1; i += 2) {
        r1 = _mm_loadu_pd(&b_I[i]);
        _mm_storeu_pd(&rightBottomBlock[i],
                      _mm_mul_pd(_mm_set1_pd(epsilon), r1));
      }
      for (int32_T i{input_sizes_idx_1}; i < loop_ub_tmp; i++) {
        rightBottomBlock[i] = epsilon * b_I[i];
      }
      normZ2 = br / normZ2;
      if ((b_I.size(0) == r.size(0)) && (b_I.size(1) == r.size(1))) {
        for (int32_T i{0}; i <= sizes_idx_1; i += 2) {
          r1 = _mm_loadu_pd(&b_I[i]);
          r2 = _mm_loadu_pd(&r[i]);
          _mm_storeu_pd(&b_I[i],
                        _mm_mul_pd(_mm_set1_pd(normZ2), _mm_sub_pd(r1, r2)));
        }
        for (int32_T i{input_sizes_idx_1}; i < loop_ub_tmp; i++) {
          b_I[i] = normZ2 * (b_I[i] - r[i]);
        }
      } else {
        b_st.site = &si_emlrtRSI;
        binary_expand_op_28(b_st, b_I, normZ2, r);
      }
      if ((rightBottomBlock.size(0) != b_I.size(0)) &&
          ((rightBottomBlock.size(0) != 1) && (b_I.size(0) != 1))) {
        emlrtDimSizeImpxCheckR2021b(rightBottomBlock.size(0), b_I.size(0),
                                    &gc_emlrtECI, &st);
      }
      if ((rightBottomBlock.size(1) != b_I.size(1)) &&
          ((rightBottomBlock.size(1) != 1) && (b_I.size(1) != 1))) {
        emlrtDimSizeImpxCheckR2021b(rightBottomBlock.size(1), b_I.size(1),
                                    &hc_emlrtECI, &st);
      }
      if ((rightBottomBlock.size(0) == b_I.size(0)) &&
          (rightBottomBlock.size(1) == b_I.size(1))) {
        loop_ub = rightBottomBlock.size(0) * rightBottomBlock.size(1);
        loop_ub_tmp = (loop_ub / 2) << 1;
        input_sizes_idx_1 = loop_ub_tmp - 2;
        for (int32_T i{0}; i <= input_sizes_idx_1; i += 2) {
          r1 = _mm_loadu_pd(&rightBottomBlock[i]);
          r2 = _mm_loadu_pd(&b_I[i]);
          _mm_storeu_pd(&rightBottomBlock[i], _mm_add_pd(r1, r2));
        }
        for (int32_T i{loop_ub_tmp}; i < loop_ub; i++) {
          rightBottomBlock[i] = rightBottomBlock[i] + b_I[i];
        }
      } else {
        b_st.site = &qg_emlrtRSI;
        plus(b_st, rightBottomBlock, b_I);
      }
      //  Assemble the full matrix
      // fullMatrix = [scalarPart, z2Normalized'; z2Normalized,
      // rightBottomBlock];
      emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
      b_st.site = &rg_emlrtRSI;
      c_st.site = &tg_emlrtRSI;
      sizes_idx_1_tmp =
          ((rightBottomBlock.size(0) != 0) && (rightBottomBlock.size(1) != 0));
      if (sizes_idx_1_tmp) {
        loop_ub_tmp = rightBottomBlock.size(0);
      } else if (z2.size(0) != 0) {
        loop_ub_tmp = z2.size(0);
      } else {
        loop_ub_tmp = rightBottomBlock.size(0);
      }
      d_st.site = &ug_emlrtRSI;
      if ((rightBottomBlock.size(0) != loop_ub_tmp) &&
          ((rightBottomBlock.size(0) != 0) &&
           (rightBottomBlock.size(1) != 0))) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &u_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      if ((z2.size(0) != loop_ub_tmp) && (z2.size(0) != 0)) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &u_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      empty_non_axis_sizes = (loop_ub_tmp == 0);
      if (empty_non_axis_sizes || sizes_idx_1_tmp) {
        input_sizes_idx_1 = rightBottomBlock.size(1);
      } else {
        input_sizes_idx_1 = 0;
      }
      if (empty_non_axis_sizes || (z2.size(0) != 0)) {
        sizes_idx_1 = 1;
      } else {
        sizes_idx_1 = 0;
      }
      b_result.set_size(&vg_emlrtRTEI, &c_st, loop_ub_tmp,
                        input_sizes_idx_1 + sizes_idx_1);
      for (int32_T i{0}; i < input_sizes_idx_1; i++) {
        for (int32_T i1{0}; i1 < loop_ub_tmp; i1++) {
          b_result[i1 + b_result.size(0) * i] =
              rightBottomBlock[i1 + loop_ub_tmp * i];
        }
      }
      for (int32_T i{0}; i < sizes_idx_1; i++) {
        for (int32_T i1{0}; i1 < loop_ub_tmp; i1++) {
          b_result[i1 + b_result.size(0) * input_sizes_idx_1] = z2[i1];
        }
      }
      b_st.site = &rg_emlrtRSI;
      varargin_2.set_size(&wg_emlrtRTEI, &b_st, 1, z2.size(0) + 1);
      loop_ub_tmp = z2.size(0);
      for (int32_T i{0}; i < loop_ub_tmp; i++) {
        varargin_2[i] = z2[i];
      }
      varargin_2[z2.size(0)] = 1.0 / epsilon;
      c_st.site = &tg_emlrtRSI;
      sizes_idx_1_tmp = ((b_result.size(0) != 0) && (b_result.size(1) != 0));
      if (sizes_idx_1_tmp) {
        sizes_idx_1 = b_result.size(1);
      } else {
        sizes_idx_1 = varargin_2.size(1);
      }
      d_st.site = &ug_emlrtRSI;
      if ((b_result.size(1) != sizes_idx_1) &&
          ((b_result.size(0) != 0) && (b_result.size(1) != 0))) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &u_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      if (varargin_2.size(1) != sizes_idx_1) {
        emlrtErrorWithMessageIdR2018a(
            &d_st, &u_emlrtRTEI, "MATLAB:catenate:matrixDimensionMismatch",
            "MATLAB:catenate:matrixDimensionMismatch", 0);
      }
      //  Multiply by the scalar epsilon / (epsilon^2 + 1)
      emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
      b_st.site = &sg_emlrtRSI;
      c_st.site = &w_emlrtRSI;
      normZ2 = epsilon / (epsilon * epsilon + 1.0);
      emlrtMEXProfilingStatement(8, static_cast<boolean_T>(isMexOutdated));
      emlrtMEXProfilingFunctionExitCPP(&b_profilerSentinel);
      emlrtMEXProfilingStatement(13, static_cast<boolean_T>(isMexOutdated));
      if (sizes_idx_1_tmp) {
        loop_ub_tmp = b_result.size(0);
      } else {
        loop_ub_tmp = 0;
      }
      b_I.set_size(&xg_emlrtRTEI, &sp, loop_ub_tmp + 1, sizes_idx_1);
      for (int32_T i{0}; i < sizes_idx_1; i++) {
        for (int32_T i1{0}; i1 < loop_ub_tmp; i1++) {
          b_I[i1 + b_I.size(0) * i] = normZ2 * b_result[i1 + loop_ub_tmp * i];
        }
        b_I[loop_ub_tmp + b_I.size(0) * i] = normZ2 * varargin_2[i];
      }
      st.site = &lg_emlrtRSI;
      coder::eig(st, b_I, Q, lambda_m);
      // J = QlambdaQ'
      emlrtMEXProfilingStatement(14, static_cast<boolean_T>(isMexOutdated));
      st.site = &mg_emlrtRSI;
      coder::diag(st, lambda_m, lambda);
      emlrtMEXProfilingStatement(15, static_cast<boolean_T>(isMexOutdated));
      loop_ub = lambda.size(0);
      r3.set_size(&yg_emlrtRTEI, &sp, lambda.size(0));
      for (int32_T i{0}; i < loop_ub; i++) {
        r3[i].re = alpha * lambda[i].re;
        r3[i].im = alpha * lambda[i].im;
      }
      if ((lambda.size(0) != P.size(0)) &&
          ((lambda.size(0) != 1) && (P.size(0) != 1))) {
        emlrtDimSizeImpxCheckR2021b(lambda.size(0), P.size(0), &xb_emlrtECI,
                                    (emlrtConstCTX)&sp);
      }
      if (r3.size(0) == P.size(0)) {
        r4.set_size(&yg_emlrtRTEI, &sp, lambda.size(0));
        for (int32_T i{0}; i < loop_ub; i++) {
          r4[i].re = P[i] * r3[i].re;
          r4[i].im = P[i] * r3[i].im;
        }
      } else {
        st.site = &ng_emlrtRSI;
        b_times(st, r4, r3, P);
      }
      if ((lambda.size(0) != r4.size(0)) &&
          ((lambda.size(0) != 1) && (r4.size(0) != 1))) {
        emlrtDimSizeImpxCheckR2021b(lambda.size(0), r4.size(0), &yb_emlrtECI,
                                    (emlrtConstCTX)&sp);
      }
      st.site = &ng_emlrtRSI;
      if (lambda.size(0) == r4.size(0)) {
        y.set_size(&ah_emlrtRTEI, &st, lambda.size(0));
        for (int32_T i{0}; i < loop_ub; i++) {
          y[i].re = (1.0 - lambda[i].re) + r4[i].re;
          y[i].im = (0.0 - lambda[i].im) + r4[i].im;
        }
      } else {
        b_st.site = &ng_emlrtRSI;
        binary_expand_op_21(b_st, y, lambda, r4);
      }
      b_st.site = &de_emlrtRSI;
      c_st.site = &ee_emlrtRSI;
      if ((lambda.size(0) != 1) && (y.size(0) != 1) &&
          (lambda.size(0) != y.size(0))) {
        emlrtErrorWithMessageIdR2018a(&c_st, &n_emlrtRTEI,
                                      "MATLAB:sizeDimensionsMustMatch",
                                      "MATLAB:sizeDimensionsMustMatch", 0);
      }
      if (lambda.size(0) == y.size(0)) {
        loop_ub = lambda.size(0);
        y.set_size(&me_emlrtRTEI, &sp, lambda.size(0));
        for (int32_T i{0}; i < loop_ub; i++) {
          real_T ai;
          real_T ar;
          ar = lambda[i].re;
          ai = lambda[i].im;
          br = y[i].re;
          bi = y[i].im;
          if (bi == 0.0) {
            if (ai == 0.0) {
              re = ar / br;
              normZ2 = 0.0;
            } else if (ar == 0.0) {
              re = 0.0;
              normZ2 = ai / br;
            } else {
              re = ar / br;
              normZ2 = ai / br;
            }
          } else if (br == 0.0) {
            if (ar == 0.0) {
              re = ai / bi;
              normZ2 = 0.0;
            } else if (ai == 0.0) {
              re = 0.0;
              normZ2 = -(ar / bi);
            } else {
              re = ai / bi;
              normZ2 = -(ar / bi);
            }
          } else {
            brm = muDoubleScalarAbs(br);
            normZ2 = muDoubleScalarAbs(bi);
            if (brm > normZ2) {
              c = bi / br;
              normZ2 = br + c * bi;
              re = (ar + c * ai) / normZ2;
              normZ2 = (ai - c * ar) / normZ2;
            } else if (normZ2 == brm) {
              if (br > 0.0) {
                c = 0.5;
              } else {
                c = -0.5;
              }
              if (bi > 0.0) {
                normZ2 = 0.5;
              } else {
                normZ2 = -0.5;
              }
              re = (ar * c + ai * normZ2) / brm;
              normZ2 = (ai * c - ar * normZ2) / brm;
            } else {
              c = br / bi;
              normZ2 = bi + c * br;
              re = (c * ar + ai) / normZ2;
              normZ2 = (c * ai - ar) / normZ2;
            }
          }
          y[i].re = re;
          y[i].im = normZ2;
        }
        st.site = &ng_emlrtRSI;
        coder::b_abs(st, y, z2);
      } else {
        st.site = &ng_emlrtRSI;
        binary_expand_op_20(st, z2, ng_emlrtRSI, lambda, y);
      }
      st.site = &ng_emlrtRSI;
      coder::b_sqrt(st, z2);
      emlrtMEXProfilingStatement(16, static_cast<boolean_T>(isMexOutdated));
      if ((r3.size(0) != P.size(0)) &&
          ((r3.size(0) != 1) && (P.size(0) != 1))) {
        emlrtDimSizeImpxCheckR2021b(r3.size(0), P.size(0), &ac_emlrtECI,
                                    (emlrtConstCTX)&sp);
      }
      loop_ub = lambda.size(0);
      if ((lambda.size(0) != r4.size(0)) &&
          ((lambda.size(0) != 1) && (r4.size(0) != 1))) {
        emlrtDimSizeImpxCheckR2021b(lambda.size(0), r4.size(0), &bc_emlrtECI,
                                    (emlrtConstCTX)&sp);
      }
      if (lambda.size(0) == r4.size(0)) {
        for (int32_T i{0}; i < loop_ub; i++) {
          br = (1.0 - lambda[i].re) + r4[i].re;
          bi = (0.0 - lambda[i].im) + r4[i].im;
          if (bi == 0.0) {
            re = 1.0 / br;
            normZ2 = 0.0;
          } else if (br == 0.0) {
            re = 0.0;
            normZ2 = -(1.0 / bi);
          } else {
            brm = muDoubleScalarAbs(br);
            normZ2 = muDoubleScalarAbs(bi);
            if (brm > normZ2) {
              c = bi / br;
              normZ2 = br + c * bi;
              re = (c * 0.0 + 1.0) / normZ2;
              normZ2 = (0.0 - c) / normZ2;
            } else if (normZ2 == brm) {
              if (br > 0.0) {
                c = 0.5;
              } else {
                c = -0.5;
              }
              if (bi > 0.0) {
                normZ2 = 0.5;
              } else {
                normZ2 = -0.5;
              }
              re = (c + 0.0 * normZ2) / brm;
              normZ2 = (0.0 * c - normZ2) / brm;
            } else {
              c = br / bi;
              normZ2 = bi + c * br;
              re = c / normZ2;
              normZ2 = (c * 0.0 - 1.0) / normZ2;
            }
          }
          lambda[i].re = re;
          lambda[i].im = normZ2;
        }
        st.site = &og_emlrtRSI;
        coder::b_abs(st, lambda, lambda_inv);
      } else {
        st.site = &og_emlrtRSI;
        binary_expand_op_19(st, lambda_inv, og_emlrtRSI, lambda, r4);
      }
      st.site = &og_emlrtRSI;
      coder::b_sqrt(st, lambda_inv);
      emlrtMEXProfilingStatement(17, static_cast<boolean_T>(isMexOutdated));
      loop_ub = Q.size(1);
      if ((lambda_inv.size(0) != Q.size(1)) &&
          ((Q.size(1) != 1) && (lambda_inv.size(0) != 1))) {
        emlrtDimSizeImpxCheckR2021b(Q.size(1), lambda_inv.size(0), &cc_emlrtECI,
                                    (emlrtConstCTX)&sp);
      }
      if (lambda_inv.size(0) == Q.size(1)) {
        loop_ub_tmp = Q.size(0);
        Q_inv.set_size(&bh_emlrtRTEI, &sp, Q.size(0), Q.size(1));
        for (int32_T i{0}; i < loop_ub; i++) {
          for (int32_T i1{0}; i1 < loop_ub_tmp; i1++) {
            Q_inv[i1 + Q_inv.size(0) * i] =
                Q[i1 + Q.size(0) * i].re * lambda_inv[i];
          }
        }
      } else {
        st.site = &wi_emlrtRSI;
        binary_expand_op_17(st, Q_inv, Q, lambda_inv);
      }
      // check the shape of lmbda_inv
      emlrtMEXProfilingStatement(18, static_cast<boolean_T>(isMexOutdated));
      loop_ub = Q.size(1);
      if ((z2.size(0) != Q.size(1)) &&
          ((Q.size(1) != 1) && (z2.size(0) != 1))) {
        emlrtDimSizeImpxCheckR2021b(Q.size(1), z2.size(0), &dc_emlrtECI,
                                    (emlrtConstCTX)&sp);
      }
      if (z2.size(0) == Q.size(1)) {
        loop_ub_tmp = Q.size(0);
        Q_out.set_size(&ch_emlrtRTEI, &sp, Q.size(0), Q.size(1));
        for (int32_T i{0}; i < loop_ub; i++) {
          for (int32_T i1{0}; i1 < loop_ub_tmp; i1++) {
            Q_out[i1 + Q_out.size(0) * i] = Q[i1 + Q.size(0) * i].re * z2[i];
          }
        }
      } else {
        st.site = &vi_emlrtRSI;
        binary_expand_op_17(st, Q_out, Q, z2);
      }
      // Q.* v'
      emlrtMEXProfilingStatement(19, static_cast<boolean_T>(isMexOutdated));
    }
  }
  emlrtMEXProfilingStatement(20, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingFunctionExitCPP(&profilerSentinel);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void plus(const emlrtStack &sp, coder::array<real_T, 2U> &in1,
          const coder::array<real_T, 2U> &in2)
{
  coder::array<real_T, 2U> b_in1;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  if (in2.size(1) == 1) {
    b_loop_ub = in1.size(1);
  } else {
    b_loop_ub = in2.size(1);
  }
  b_in1.set_size(&ug_emlrtRTEI, &sp, loop_ub, b_loop_ub);
  stride_0_0 = (in1.size(0) != 1);
  stride_0_1 = (in1.size(1) != 1);
  stride_1_0 = (in2.size(0) != 1);
  stride_1_1 = (in2.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      b_in1[i1 + b_in1.size(0) * i] =
          in1[i1 * stride_0_0 + in1.size(0) * aux_0_1] +
          in2[i1 * stride_1_0 + in2.size(0) * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  in1.set_size(&ug_emlrtRTEI, &sp, loop_ub, b_loop_ub);
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] = b_in1[i1 + b_in1.size(0) * i];
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (dev_jacob_soc.cpp)
