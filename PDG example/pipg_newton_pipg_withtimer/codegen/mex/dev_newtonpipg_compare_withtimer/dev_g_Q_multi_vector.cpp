//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_g_Q_multi_vector.cpp
//
// Code generation for function 'dev_g_Q_multi_vector'
//

// Include files
#include "dev_g_Q_multi_vector.h"
#include "dev_newtonpipg_compare_withtimer_data.h"
#include "diag.h"
#include "indexShapeCheck.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "mwmathutil.h"
#include <cstddef>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo wf_emlrtRSI{
    39,         // lineNo
    "Q_v_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pathName
};

static emlrtRSInfo xf_emlrtRSI{
    36,         // lineNo
    "Q_v_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pathName
};

static emlrtRSInfo yf_emlrtRSI{
    34,         // lineNo
    "Q_v_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pathName
};

static emlrtECInfo uc_emlrtECI{
    -1,         // nDims
    39,         // lineNo
    9,          // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtBCInfo lf_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    39,         // lineNo
    21,         // colNo
    "v_out",    // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtDCInfo wc_emlrtDCI{
    39,         // lineNo
    21,         // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

static emlrtBCInfo mf_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    39,         // lineNo
    15,         // colNo
    "v_out",    // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtECInfo vc_emlrtECI{
    -1,         // nDims
    36,         // lineNo
    9,          // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtBCInfo nf_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    36,         // lineNo
    21,         // colNo
    "v_out",    // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtDCInfo xc_emlrtDCI{
    36,         // lineNo
    21,         // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

static emlrtBCInfo of_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    36,         // lineNo
    15,         // colNo
    "v_out",    // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtECInfo wc_emlrtECI{
    -1,         // nDims
    34,         // lineNo
    9,          // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtBCInfo pf_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    34,         // lineNo
    21,         // colNo
    "v_out",    // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtDCInfo yc_emlrtDCI{
    34,         // lineNo
    21,         // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

static emlrtBCInfo qf_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    34,         // lineNo
    15,         // colNo
    "v_out",    // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo rf_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    39,         // lineNo
    112,        // colNo
    "v",        // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtDCInfo ad_emlrtDCI{
    39,         // lineNo
    112,        // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

static emlrtBCInfo sf_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    39,         // lineNo
    106,        // colNo
    "v",        // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo tf_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    39,         // lineNo
    82,         // colNo
    "Q_u",      // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtDCInfo bd_emlrtDCI{
    39,         // lineNo
    82,         // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

static emlrtBCInfo uf_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    39,         // lineNo
    76,         // colNo
    "Q_u",      // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo vf_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    39,         // lineNo
    55,         // colNo
    "Q_u",      // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtDCInfo cd_emlrtDCI{
    39,         // lineNo
    55,         // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

static emlrtBCInfo wf_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    39,         // lineNo
    49,         // colNo
    "Q_u",      // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo xf_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    36,         // lineNo
    113,        // colNo
    "v",        // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtDCInfo dd_emlrtDCI{
    36,         // lineNo
    113,        // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

static emlrtBCInfo yf_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    36,         // lineNo
    107,        // colNo
    "v",        // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo ag_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    36,         // lineNo
    82,         // colNo
    "Q_u",      // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtDCInfo ed_emlrtDCI{
    36,         // lineNo
    82,         // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

static emlrtBCInfo bg_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    36,         // lineNo
    76,         // colNo
    "Q_u",      // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo cg_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    36,         // lineNo
    55,         // colNo
    "Q_u",      // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtDCInfo fd_emlrtDCI{
    36,         // lineNo
    55,         // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

static emlrtBCInfo dg_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    36,         // lineNo
    49,         // colNo
    "Q_u",      // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtECInfo xc_emlrtECI{
    1,          // nDims
    34,         // lineNo
    44,         // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

static emlrtBCInfo eg_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    34,         // lineNo
    117,        // colNo
    "v",        // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtDCInfo gd_emlrtDCI{
    34,         // lineNo
    117,        // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

static emlrtBCInfo fg_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    34,         // lineNo
    111,        // colNo
    "v",        // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo gg_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    34,         // lineNo
    86,         // colNo
    "Q_u",      // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtDCInfo hd_emlrtDCI{
    34,         // lineNo
    86,         // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

static emlrtBCInfo hg_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    34,         // lineNo
    80,         // colNo
    "Q_u",      // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo ig_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    34,         // lineNo
    59,         // colNo
    "Q_u",      // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtDCInfo id_emlrtDCI{
    34,         // lineNo
    59,         // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

static emlrtBCInfo jg_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    34,         // lineNo
    53,         // colNo
    "Q_u",      // aName
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtBCInfo kg_emlrtBCI{
    1,            // iFirst
    11,           // iLast
    29,           // lineNo
    22,           // colNo
    "proj_index", // aName
    "Q_v_unit",   // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

static emlrtDCInfo jd_emlrtDCI{
    29,         // lineNo
    22,         // colNo
    "Q_v_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

// Function Declarations
static int32_T binary_expand_op_32(real_T in1_data[], const real_T in2_data[],
                                   const int32_T &in2_size,
                                   const real_T in3_data[], int32_T in4,
                                   int32_T in5);

// Function Definitions
static int32_T binary_expand_op_32(real_T in1_data[], const real_T in2_data[],
                                   const int32_T &in2_size,
                                   const real_T in3_data[], int32_T in4,
                                   int32_T in5)
{
  int32_T in1_size;
  int32_T in5_idx_0;
  int32_T stride_0_0;
  in5_idx_0 = in5 - in4;
  if (in5_idx_0 == 1) {
    in1_size = in2_size;
  } else {
    in1_size = in5_idx_0;
  }
  stride_0_0 = (in2_size != 1);
  in5_idx_0 = (in5_idx_0 != 1);
  for (int32_T i{0}; i < in1_size; i++) {
    in1_data[i] = in2_data[i * stride_0_0] * in3_data[in4 + i * in5_idx_0];
  }
  return in1_size;
}

int32_T Q_v_unit(const emlrtStack &sp, const real_T v_data[], int32_T v_size,
                 const real_T Q_u_data[], const int32_T Q_u_size[2],
                 const real_T proj_index[22], real_T v_out_data[])
{
  ptrdiff_t k_t;
  ptrdiff_t lda_t;
  ptrdiff_t ldb_t;
  ptrdiff_t ldc_t;
  ptrdiff_t m_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack st;
  real_T b_Q_u_data[121];
  real_T b_tmp_data[11];
  real_T b_v_data[11];
  real_T tmp_data[11];
  real_T beta1;
  real_T temp;
  int32_T b_Q_u_size[2];
  int32_T b_v_size[2];
  int32_T v_out_size;
  char_T TRANSA1;
  char_T TRANSB1;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  v_out_size = v_size;
  if (v_size - 1 >= 0) {
    std::memset(&v_out_data[0], 0,
                static_cast<uint32_T>(v_size) * sizeof(real_T));
  }
  temp = 1.0;
  exitg1 = false;
  while ((!exitg1) && (temp <= v_size)) {
    real_T d;
    if (temp != static_cast<int32_T>(muDoubleScalarFloor(temp))) {
      emlrtIntegerCheckR2012b(temp, &jd_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(temp) < 1) || (static_cast<int32_T>(temp) > 11)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, 11,
                                    &kg_emlrtBCI, (emlrtConstCTX)&sp);
    }
    d = proj_index[static_cast<int32_T>(temp) - 1];
    if (d == rtInf) {
      exitg1 = true;
    } else {
      beta1 = proj_index[static_cast<int32_T>(temp) + 10];
      if (beta1 == 1.0) {
        int32_T iv[2];
        int32_T b_loop_ub;
        int32_T c_loop_ub;
        int32_T i;
        int32_T i1;
        int32_T i2;
        int32_T i3;
        int32_T i4;
        int32_T i5;
        int32_T loop_ub;
        if (temp > d) {
          i = 0;
          i1 = 0;
          i2 = 0;
          i4 = 0;
          i5 = 0;
          i3 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > Q_u_size[0])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          Q_u_size[0], &jg_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          i3 = static_cast<int32_T>(muDoubleScalarFloor(d));
          if (d != i3) {
            emlrtIntegerCheckR2012b(d, &id_emlrtDCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d);
          if ((d < 1.0) || (i1 > Q_u_size[0])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                          Q_u_size[0], &ig_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > Q_u_size[1])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          Q_u_size[1], &hg_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i2 = static_cast<int32_T>(temp) - 1;
          if (i1 != i3) {
            emlrtIntegerCheckR2012b(d, &hd_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (i1 > Q_u_size[1])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                          Q_u_size[1], &gg_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i4 = i1;
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > v_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, v_size,
                                          &fg_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i5 = static_cast<int32_T>(temp) - 1;
          if (i1 != i3) {
            emlrtIntegerCheckR2012b(d, &gd_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (i1 > v_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, v_size,
                                          &eg_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i3 = i1;
        }
        iv[0] = 1;
        loop_ub = i3 - i5;
        iv[1] = loop_ub;
        st.site = &yf_emlrtRSI;
        coder::internal::indexShapeCheck(st, v_size, iv);
        b_loop_ub = i4 - i2;
        b_Q_u_size[1] = b_loop_ub;
        c_loop_ub = i1 - i;
        b_Q_u_size[0] = c_loop_ub;
        for (i1 = 0; i1 < c_loop_ub; i1++) {
          for (i4 = 0; i4 < b_loop_ub; i4++) {
            b_Q_u_data[i4 + b_loop_ub * i1] =
                Q_u_data[(i2 + i4) + Q_u_size[1] * (i + i1)];
          }
        }
        st.site = &yf_emlrtRSI;
        c_loop_ub = coder::diag(st, b_Q_u_data, b_Q_u_size, tmp_data);
        if ((c_loop_ub != loop_ub) && ((c_loop_ub != 1) && (loop_ub != 1))) {
          emlrtDimSizeImpxCheckR2021b(c_loop_ub, loop_ub, &xc_emlrtECI,
                                      (emlrtConstCTX)&sp);
        }
        if (temp > d) {
          i = 0;
          i1 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > v_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, v_size,
                                          &qf_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &yc_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > v_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, v_size,
                                          &pf_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d);
        }
        if (c_loop_ub == loop_ub) {
          int32_T unnamed_idx_0;
          loop_ub = (c_loop_ub / 2) << 1;
          unnamed_idx_0 = loop_ub - 2;
          for (i3 = 0; i3 <= unnamed_idx_0; i3 += 2) {
            __m128d r;
            r = _mm_loadu_pd(&tmp_data[i3]);
            _mm_storeu_pd(&b_tmp_data[i3],
                          _mm_mul_pd(r, _mm_loadu_pd(&v_data[i5 + i3])));
          }
          for (i3 = loop_ub; i3 < c_loop_ub; i3++) {
            b_tmp_data[i3] = tmp_data[i3] * v_data[i5 + i3];
          }
        } else {
          c_loop_ub = binary_expand_op_32(b_tmp_data, tmp_data, c_loop_ub,
                                          v_data, i5, i3);
        }
        i3 = i1 - i;
        if (i3 != c_loop_ub) {
          emlrtSubAssignSizeCheck1dR2017a(i3, c_loop_ub, &wc_emlrtECI,
                                          (emlrtConstCTX)&sp);
        }
        b_loop_ub = static_cast<int8_T>(i3);
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          v_out_data[i + i3] = b_tmp_data[i3];
        }
        // check
      } else if (beta1 != 1.0) {
        int32_T iv[2];
        int32_T b_loop_ub;
        int32_T c_loop_ub;
        int32_T i;
        int32_T i1;
        int32_T i2;
        int32_T i3;
        int32_T i4;
        int32_T i5;
        int32_T loop_ub;
        if (temp > d) {
          i = 0;
          i1 = 0;
          i2 = 0;
          i4 = 0;
          i5 = 0;
          i3 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > Q_u_size[0])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          Q_u_size[0], &dg_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          i3 = static_cast<int32_T>(muDoubleScalarFloor(d));
          if (d != i3) {
            emlrtIntegerCheckR2012b(d, &fd_emlrtDCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d);
          if ((d < 1.0) || (i1 > Q_u_size[0])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                          Q_u_size[0], &cg_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > Q_u_size[1])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          Q_u_size[1], &bg_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i2 = static_cast<int32_T>(temp) - 1;
          if (i1 != i3) {
            emlrtIntegerCheckR2012b(d, &ed_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (i1 > Q_u_size[1])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                          Q_u_size[1], &ag_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i4 = i1;
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > v_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, v_size,
                                          &yf_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i5 = static_cast<int32_T>(temp) - 1;
          if (i1 != i3) {
            emlrtIntegerCheckR2012b(d, &dd_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (i1 > v_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, v_size,
                                          &xf_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i3 = i1;
        }
        iv[0] = 1;
        b_loop_ub = i3 - i5;
        iv[1] = b_loop_ub;
        st.site = &xf_emlrtRSI;
        coder::internal::indexShapeCheck(st, v_size, iv);
        c_loop_ub = i4 - i2;
        loop_ub = i1 - i;
        for (i3 = 0; i3 < loop_ub; i3++) {
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            b_Q_u_data[i1 + c_loop_ub * i3] =
                Q_u_data[(i2 + i1) + Q_u_size[1] * (i + i3)];
          }
        }
        for (i = 0; i < b_loop_ub; i++) {
          b_v_data[i] = v_data[i5 + i];
        }
        if (temp > d) {
          i = 0;
          i3 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > v_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, v_size,
                                          &of_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &xc_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > v_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, v_size,
                                          &nf_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i3 = static_cast<int32_T>(d);
        }
        st.site = &xf_emlrtRSI;
        b_st.site = &s_emlrtRSI;
        if (loop_ub - 1 != b_loop_ub - 1) {
          if (((loop_ub == 1) && (c_loop_ub == 1)) || (b_loop_ub == 1)) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &o_emlrtRTEI,
                "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &n_emlrtRTEI, "MATLAB:innerdim", "MATLAB:innerdim", 0);
          }
        }
        if ((loop_ub == 0) || (c_loop_ub == 0) || (b_loop_ub == 0)) {
          if (c_loop_ub - 1 >= 0) {
            std::memset(&tmp_data[0], 0,
                        static_cast<uint32_T>(c_loop_ub) * sizeof(real_T));
          }
        } else {
          TRANSB1 = 'T';
          TRANSA1 = 'T';
          temp = 1.0;
          beta1 = 0.0;
          m_t = (ptrdiff_t)1;
          n_t = (ptrdiff_t)c_loop_ub;
          k_t = (ptrdiff_t)b_loop_ub;
          lda_t = (ptrdiff_t)b_loop_ub;
          ldb_t = (ptrdiff_t)c_loop_ub;
          ldc_t = (ptrdiff_t)1;
          dgemm(&TRANSA1, &TRANSB1, &m_t, &n_t, &k_t, &temp, &b_v_data[0],
                &lda_t, &b_Q_u_data[0], &ldb_t, &beta1, &tmp_data[0], &ldc_t);
        }
        i3 -= i;
        if (i3 != c_loop_ub) {
          emlrtSubAssignSizeCheck1dR2017a(i3, c_loop_ub, &vc_emlrtECI,
                                          (emlrtConstCTX)&sp);
        }
        b_loop_ub = static_cast<int8_T>(i3);
        for (i3 = 0; i3 < b_loop_ub; i3++) {
          v_out_data[i + i3] = tmp_data[i3];
        }
        // check
      } else {
        int32_T iv[2];
        int32_T b_loop_ub;
        int32_T c_loop_ub;
        int32_T i;
        int32_T i1;
        int32_T i2;
        int32_T i3;
        int32_T i4;
        int32_T i5;
        int32_T loop_ub;
        int32_T unnamed_idx_0;
        if (temp > d) {
          i = 0;
          i1 = 0;
          i2 = 1;
          i4 = 0;
          i5 = 0;
          i3 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > Q_u_size[0])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          Q_u_size[0], &wf_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          i3 = static_cast<int32_T>(muDoubleScalarFloor(d));
          if (d != i3) {
            emlrtIntegerCheckR2012b(d, &cd_emlrtDCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d);
          if ((d < 1.0) || (i1 > Q_u_size[0])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                          Q_u_size[0], &vf_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > Q_u_size[1])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          Q_u_size[1], &uf_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i2 = static_cast<int32_T>(temp);
          if (i1 != i3) {
            emlrtIntegerCheckR2012b(d, &bd_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (i1 > Q_u_size[1])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                          Q_u_size[1], &tf_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i4 = i1;
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > v_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, v_size,
                                          &sf_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i5 = static_cast<int32_T>(temp) - 1;
          if (i1 != i3) {
            emlrtIntegerCheckR2012b(d, &ad_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (i1 > v_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, v_size,
                                          &rf_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i3 = i1;
        }
        iv[0] = 1;
        unnamed_idx_0 = i3 - i5;
        iv[1] = unnamed_idx_0;
        st.site = &wf_emlrtRSI;
        coder::internal::indexShapeCheck(st, v_size, iv);
        if (temp > d) {
          i3 = 0;
          loop_ub = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > v_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, v_size,
                                          &mf_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i3 = static_cast<int32_T>(temp) - 1;
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &wc_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > v_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, v_size,
                                          &lf_emlrtBCI, (emlrtConstCTX)&sp);
          }
          loop_ub = static_cast<int32_T>(d);
        }
        st.site = &wf_emlrtRSI;
        b_st.site = &s_emlrtRSI;
        b_loop_ub = i4 - i2;
        if (b_loop_ub != unnamed_idx_0 - 1) {
          if (((i1 - i == 1) && (b_loop_ub + 1 == 1)) || (unnamed_idx_0 == 1)) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &o_emlrtRTEI,
                "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &n_emlrtRTEI, "MATLAB:innerdim", "MATLAB:innerdim", 0);
          }
        }
        b_Q_u_size[1] = b_loop_ub + 1;
        c_loop_ub = i1 - i;
        b_Q_u_size[0] = c_loop_ub;
        for (i1 = 0; i1 < c_loop_ub; i1++) {
          for (i4 = 0; i4 <= b_loop_ub; i4++) {
            b_Q_u_data[i4 + (b_loop_ub + 1) * i1] =
                Q_u_data[((i2 + i4) + Q_u_size[1] * (i + i1)) - 1];
          }
        }
        b_v_size[1] = unnamed_idx_0;
        b_v_size[0] = 1;
        for (i = 0; i < unnamed_idx_0; i++) {
          b_v_data[i] = v_data[i5 + i];
        }
        c_loop_ub = coder::internal::blas::mtimes(b_Q_u_data, b_Q_u_size,
                                                  b_v_data, b_v_size, tmp_data);
        i = loop_ub - i3;
        if (i != c_loop_ub) {
          emlrtSubAssignSizeCheck1dR2017a(i, c_loop_ub, &uc_emlrtECI,
                                          (emlrtConstCTX)&sp);
        }
        b_loop_ub = static_cast<int8_T>(i);
        for (i = 0; i < b_loop_ub; i++) {
          v_out_data[i3 + i] = tmp_data[i];
        }
      }
      // update
      temp = d + 1.0;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
  }
  return v_out_size;
}

int32_T b_Q_v_unit(const emlrtStack &sp, const real_T v_data[], int32_T v_size,
                   const real_T Q_u_data[], const int32_T Q_u_size[2],
                   const real_T proj_index[22], real_T v_out_data[])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T b_tmp_data[11];
  real_T tmp_data[11];
  real_T temp;
  int32_T b_Q_u_size[2];
  int32_T b_v_size[2];
  int32_T v_out_size;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  v_out_size = v_size;
  if (v_size - 1 >= 0) {
    std::memset(&v_out_data[0], 0,
                static_cast<uint32_T>(v_size) * sizeof(real_T));
  }
  temp = 1.0;
  exitg1 = false;
  while ((!exitg1) && (temp <= v_size)) {
    real_T d;
    if (temp != static_cast<int32_T>(muDoubleScalarFloor(temp))) {
      emlrtIntegerCheckR2012b(temp, &jd_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(temp) < 1) || (static_cast<int32_T>(temp) > 11)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, 11,
                                    &kg_emlrtBCI, (emlrtConstCTX)&sp);
    }
    d = proj_index[static_cast<int32_T>(temp) - 1];
    if (d == rtInf) {
      exitg1 = true;
    } else {
      if (proj_index[static_cast<int32_T>(temp) + 10] == 1.0) {
        real_T b_Q_u_data[121];
        int32_T iv[2];
        int32_T b_loop_ub;
        int32_T i;
        int32_T i1;
        int32_T i2;
        int32_T i3;
        int32_T i4;
        int32_T i5;
        int32_T loop_ub;
        int32_T scalarLB;
        if (temp > d) {
          i = 0;
          i1 = 0;
          scalarLB = 0;
          i3 = 0;
          i4 = 0;
          i2 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > Q_u_size[0])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          Q_u_size[0], &jg_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          i2 = static_cast<int32_T>(muDoubleScalarFloor(d));
          if (d != i2) {
            emlrtIntegerCheckR2012b(d, &id_emlrtDCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d);
          if ((d < 1.0) || (i1 > Q_u_size[0])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                          Q_u_size[0], &ig_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > Q_u_size[1])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          Q_u_size[1], &hg_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          scalarLB = static_cast<int32_T>(temp) - 1;
          if (i1 != i2) {
            emlrtIntegerCheckR2012b(d, &hd_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (i1 > Q_u_size[1])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                          Q_u_size[1], &gg_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i3 = i1;
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > v_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, v_size,
                                          &fg_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i4 = static_cast<int32_T>(temp) - 1;
          if (i1 != i2) {
            emlrtIntegerCheckR2012b(d, &gd_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (i1 > v_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, v_size,
                                          &eg_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i2 = i1;
        }
        iv[0] = 1;
        i5 = i2 - i4;
        iv[1] = i5;
        st.site = &yf_emlrtRSI;
        coder::internal::indexShapeCheck(st, v_size, iv);
        loop_ub = i3 - scalarLB;
        b_Q_u_size[1] = loop_ub;
        b_loop_ub = i1 - i;
        b_Q_u_size[0] = b_loop_ub;
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          for (i3 = 0; i3 < loop_ub; i3++) {
            b_Q_u_data[i3 + loop_ub * i1] =
                Q_u_data[(scalarLB + i3) + Q_u_size[1] * (i + i1)];
          }
        }
        st.site = &yf_emlrtRSI;
        loop_ub = coder::diag(st, b_Q_u_data, b_Q_u_size, tmp_data);
        if ((loop_ub != i5) && ((loop_ub != 1) && (i5 != 1))) {
          emlrtDimSizeImpxCheckR2021b(loop_ub, i5, &xc_emlrtECI,
                                      (emlrtConstCTX)&sp);
        }
        if (temp > d) {
          i = 0;
          i1 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > v_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, v_size,
                                          &qf_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &yc_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > v_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, v_size,
                                          &pf_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d);
        }
        if (loop_ub == i5) {
          int32_T unnamed_idx_0;
          scalarLB = (loop_ub / 2) << 1;
          unnamed_idx_0 = scalarLB - 2;
          for (i2 = 0; i2 <= unnamed_idx_0; i2 += 2) {
            __m128d r;
            r = _mm_loadu_pd(&tmp_data[i2]);
            _mm_storeu_pd(&b_tmp_data[i2],
                          _mm_mul_pd(r, _mm_loadu_pd(&v_data[i4 + i2])));
          }
          for (i2 = scalarLB; i2 < loop_ub; i2++) {
            b_tmp_data[i2] = tmp_data[i2] * v_data[i4 + i2];
          }
        } else {
          loop_ub = binary_expand_op_32(b_tmp_data, tmp_data, loop_ub, v_data,
                                        i4, i2);
        }
        i2 = i1 - i;
        if (i2 != loop_ub) {
          emlrtSubAssignSizeCheck1dR2017a(i2, loop_ub, &wc_emlrtECI,
                                          (emlrtConstCTX)&sp);
        }
        loop_ub = static_cast<int8_T>(i2);
        for (i2 = 0; i2 < loop_ub; i2++) {
          v_out_data[i + i2] = b_tmp_data[i2];
        }
        // check
      } else {
        real_T b_Q_u_data[121];
        real_T b_v_data[11];
        int32_T iv[2];
        int32_T b_loop_ub;
        int32_T i;
        int32_T i1;
        int32_T i2;
        int32_T i3;
        int32_T i4;
        int32_T i5;
        int32_T loop_ub;
        int32_T scalarLB;
        int32_T unnamed_idx_0;
        if (temp > d) {
          i = 0;
          i1 = 0;
          scalarLB = 1;
          i3 = 0;
          i4 = 0;
          i2 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > Q_u_size[0])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          Q_u_size[0], &wf_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          i2 = static_cast<int32_T>(muDoubleScalarFloor(d));
          if (d != i2) {
            emlrtIntegerCheckR2012b(d, &cd_emlrtDCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d);
          if ((d < 1.0) || (i1 > Q_u_size[0])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                          Q_u_size[0], &vf_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > Q_u_size[1])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          Q_u_size[1], &uf_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          scalarLB = static_cast<int32_T>(temp);
          if (i1 != i2) {
            emlrtIntegerCheckR2012b(d, &bd_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (i1 > Q_u_size[1])) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                          Q_u_size[1], &tf_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i3 = i1;
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > v_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, v_size,
                                          &sf_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i4 = static_cast<int32_T>(temp) - 1;
          if (i1 != i2) {
            emlrtIntegerCheckR2012b(d, &ad_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (i1 > v_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, v_size,
                                          &rf_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i2 = i1;
        }
        iv[0] = 1;
        unnamed_idx_0 = i2 - i4;
        iv[1] = unnamed_idx_0;
        st.site = &wf_emlrtRSI;
        coder::internal::indexShapeCheck(st, v_size, iv);
        if (temp > d) {
          i2 = 0;
          i5 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > v_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, v_size,
                                          &mf_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i2 = static_cast<int32_T>(temp) - 1;
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &wc_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > v_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, v_size,
                                          &lf_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i5 = static_cast<int32_T>(d);
        }
        st.site = &wf_emlrtRSI;
        b_st.site = &s_emlrtRSI;
        loop_ub = i3 - scalarLB;
        if (loop_ub != unnamed_idx_0 - 1) {
          if (((i1 - i == 1) && (loop_ub + 1 == 1)) || (unnamed_idx_0 == 1)) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &o_emlrtRTEI,
                "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &n_emlrtRTEI, "MATLAB:innerdim", "MATLAB:innerdim", 0);
          }
        }
        b_Q_u_size[1] = loop_ub + 1;
        b_loop_ub = i1 - i;
        b_Q_u_size[0] = b_loop_ub;
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          for (i3 = 0; i3 <= loop_ub; i3++) {
            b_Q_u_data[i3 + (loop_ub + 1) * i1] =
                Q_u_data[((scalarLB + i3) + Q_u_size[1] * (i + i1)) - 1];
          }
        }
        b_v_size[1] = unnamed_idx_0;
        b_v_size[0] = 1;
        for (i = 0; i < unnamed_idx_0; i++) {
          b_v_data[i] = v_data[i4 + i];
        }
        loop_ub = coder::internal::blas::mtimes(b_Q_u_data, b_Q_u_size,
                                                b_v_data, b_v_size, tmp_data);
        i = i5 - i2;
        if (i != loop_ub) {
          emlrtSubAssignSizeCheck1dR2017a(i, loop_ub, &uc_emlrtECI,
                                          (emlrtConstCTX)&sp);
        }
        loop_ub = static_cast<int8_T>(i);
        for (i = 0; i < loop_ub; i++) {
          v_out_data[i2 + i] = tmp_data[i];
        }
      }
      // update
      temp = d + 1.0;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
  }
  return v_out_size;
}

// End of code generation (dev_g_Q_multi_vector.cpp)
