//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_HtZ_g.cpp
//
// Code generation for function 'dev_HtZ_g'
//

// Include files
#include "dev_HtZ_g.h"
#include "dev_xpipg_g_for_N_30_withtimer_data.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo o_emlrtRSI{
    14,          // lineNo
    "dev_HtZ_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" // pathName
};

static emlrtRSInfo p_emlrtRSI{
    18,          // lineNo
    "dev_HtZ_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" // pathName
};

static emlrtRSInfo q_emlrtRSI{
    20,          // lineNo
    "dev_HtZ_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" // pathName
};

static emlrtECInfo d_emlrtECI{
    -1,          // nDims
    20,          // lineNo
    5,           // colNo
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" // pName
};

static emlrtDCInfo h_emlrtDCI{
    8,           // lineNo
    1,           // colNo
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    1                                           // checkKind
};

static emlrtDCInfo i_emlrtDCI{
    8,           // lineNo
    1,           // colNo
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    4                                           // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    14,          // lineNo
    36,          // colNo
    "w",         // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    18,          // lineNo
    50,          // colNo
    "w",         // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo h_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    14,          // lineNo
    9,           // colNo
    "out",       // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo i_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    18,          // lineNo
    9,           // colNo
    "out",       // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo j_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    20,          // lineNo
    34,          // colNo
    "out",       // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo k_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    20,          // lineNo
    57,          // colNo
    "w",         // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

static emlrtBCInfo l_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    20,          // lineNo
    9,           // colNo
    "out",       // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

// Function Definitions
int32_T dev_HtZ_g(const emlrtStack &sp, const real_T A[3190],
                  const real_T w_data[], int32_T w_size, real_T ne,
                  real_T out_data[])
{
  emlrtStack st;
  real_T y_data[11];
  real_T temp_w_data[7];
  real_T s;
  int32_T y_size[2];
  int32_T i;
  int32_T loop_ub;
  int32_T out_size;
  int32_T out_size_tmp;
  int32_T scalarLB;
  int32_T vectorUB;
  st.prev = &sp;
  st.tls = sp.tls;
  // n_e stands for the amount of equaitons in A. The other definition are the
  // same.
  if (!(ne + 319.0 >= 0.0)) {
    emlrtNonNegativeCheckR2012b(ne + 319.0, &i_emlrtDCI, (emlrtConstCTX)&sp);
  }
  s = static_cast<int32_T>(muDoubleScalarFloor(ne + 319.0));
  if (ne + 319.0 != s) {
    emlrtIntegerCheckR2012b(ne + 319.0, &h_emlrtDCI, (emlrtConstCTX)&sp);
  }
  out_size_tmp = static_cast<int32_T>(ne + 319.0);
  out_size = static_cast<int32_T>(ne + 319.0);
  if (ne + 319.0 != s) {
    emlrtIntegerCheckR2012b(ne + 319.0, &h_emlrtDCI, (emlrtConstCTX)&sp);
  }
  if (out_size_tmp - 1 >= 0) {
    std::memset(&out_data[0], 0,
                static_cast<uint32_T>(out_size_tmp) * sizeof(real_T));
  }
  if (ne < 1.0) {
    y_size[1] = 0;
  } else {
    out_size_tmp = static_cast<int32_T>(ne - 1.0) + 1;
    y_size[1] = static_cast<int32_T>(ne - 1.0) + 1;
    for (i = 0; i < out_size_tmp; i++) {
      y_data[i] = static_cast<real_T>(i) + 1.0;
    }
  }
  loop_ub = y_size[1];
  scalarLB = (y_size[1] / 2) << 1;
  vectorUB = scalarLB - 2;
  for (int32_T b_i{0}; b_i < 30; b_i++) {
    int32_T i2;
    int16_T temp_index[10];
    int16_T i1;
    i1 = static_cast<int16_T>(10 * b_i + 1);
    for (i = 0; i < 10; i++) {
      temp_index[i] = static_cast<int16_T>(i + i1);
    }
    i = 10 * (b_i - 1);
    for (i2 = 0; i2 <= vectorUB; i2 += 2) {
      __m128d r;
      r = _mm_loadu_pd(&y_data[i2]);
      _mm_storeu_pd(&temp_w_data[i2],
                    _mm_add_pd(_mm_set1_pd(static_cast<real_T>(i)), r));
    }
    for (i2 = scalarLB; i2 < loop_ub; i2++) {
      temp_w_data[i2] = static_cast<real_T>(i) + y_data[i2];
    }
    if (b_i + 1 == 1) {
      real_T b_y[11];
      st.site = &o_emlrtRSI;
      coder::internal::indexShapeCheck(st, w_size);
      for (i = 0; i < 10; i++) {
        i2 = temp_index[i];
        if (i2 > w_size) {
          emlrtDynamicBoundsCheckR2012b(i2, 1, w_size, &f_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
      }
      for (out_size_tmp = 0; out_size_tmp < 11; out_size_tmp++) {
        s = 0.0;
        for (int32_T k{0}; k < 10; k++) {
          i = out_size_tmp + k * 11;
          s += A[29 * (i % 11) + 319 * (i / 11)] * w_data[temp_index[k] - 1];
        }
        b_y[out_size_tmp] = s;
      }
      for (i = 0; i < 11; i++) {
        if (i + 1 > static_cast<int32_T>(ne + 319.0)) {
          emlrtDynamicBoundsCheckR2012b(i + 1, 1,
                                        static_cast<int32_T>(ne + 319.0),
                                        &h_emlrtBCI, (emlrtConstCTX)&sp);
        }
        out_data[i] = b_y[i];
      }
    } else {
      real_T c_tmp_data[7];
      real_T tmp_data[7];
      int32_T y[2];
      int32_T k;
      int32_T y_size_idx_1;
      uint32_T b_y_data[11];
      int16_T b_tmp_data[7];
      if (b_i + 1 <= 29) {
        real_T b_y[11];
        st.site = &p_emlrtRSI;
        coder::internal::indexShapeCheck(st, w_size);
        for (i = 0; i < 10; i++) {
          i2 = temp_index[i];
          if (i2 > w_size) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, w_size, &g_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
        }
        for (out_size_tmp = 0; out_size_tmp < 11; out_size_tmp++) {
          s = 0.0;
          for (k = 0; k < 10; k++) {
            i = out_size_tmp + k * 11;
            s += A[(b_i + 29 * (i % 11)) + 319 * (i / 11)] *
                 w_data[temp_index[k] - 1];
          }
          b_y[out_size_tmp] = s;
        }
        i = 11 * b_i + 1;
        for (i2 = 0; i2 < 11; i2++) {
          k = i2 + i;
          if (k > static_cast<int32_T>(ne + 319.0)) {
            emlrtDynamicBoundsCheckR2012b(k, 1,
                                          static_cast<int32_T>(ne + 319.0),
                                          &i_emlrtBCI, (emlrtConstCTX)&sp);
          }
          out_data[k - 1] = b_y[i2];
        }
      }
      y[0] = 1;
      y[1] = y_size[1];
      st.site = &q_emlrtRSI;
      coder::internal::indexShapeCheck(st, static_cast<int32_T>(ne + 319.0), y);
      y[0] = 1;
      out_size_tmp = y_size[1];
      y[1] = y_size[1];
      st.site = &q_emlrtRSI;
      coder::internal::indexShapeCheck(st, w_size, y);
      i = 11 * b_i;
      for (i2 = 0; i2 < loop_ub; i2++) {
        k = static_cast<int32_T>(static_cast<real_T>(i) + y_data[i2]);
        if ((k < 1) || (k > static_cast<int32_T>(ne + 319.0))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, static_cast<int32_T>(ne + 319.0),
                                        &j_emlrtBCI, (emlrtConstCTX)&sp);
        }
        tmp_data[i2] = out_data[k - 1];
      }
      for (i2 = 0; i2 < out_size_tmp; i2++) {
        k = static_cast<int32_T>(temp_w_data[i2]);
        if ((k < 1) || (k > w_size)) {
          emlrtDynamicBoundsCheckR2012b(k, 1, w_size, &k_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
      }
      if (ne < 1.0) {
        y_size_idx_1 = 0;
      } else {
        out_size_tmp = static_cast<int32_T>(ne - 1.0) + 1;
        y_size_idx_1 = static_cast<int32_T>(ne - 1.0) + 1;
        for (i2 = 0; i2 < out_size_tmp; i2++) {
          b_y_data[i2] = static_cast<uint32_T>(i2) + 1U;
        }
      }
      for (i2 = 0; i2 < y_size_idx_1; i2++) {
        k = static_cast<int32_T>(static_cast<uint32_T>(i) + b_y_data[i2]);
        if ((k < 1) || (k > static_cast<int32_T>(ne + 319.0))) {
          emlrtDynamicBoundsCheckR2012b(k, 1, static_cast<int32_T>(ne + 319.0),
                                        &l_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_tmp_data[i2] = static_cast<int16_T>(k);
      }
      out_size_tmp = y_size[1];
      for (i = 0; i < loop_ub; i++) {
        c_tmp_data[i] =
            tmp_data[i] + w_data[static_cast<int32_T>(temp_w_data[i]) - 1];
      }
      if (y_size_idx_1 != out_size_tmp) {
        emlrtSubAssignSizeCheck1dR2017a(y_size_idx_1, out_size_tmp, &d_emlrtECI,
                                        (emlrtConstCTX)&sp);
      }
      for (i = 0; i < y_size_idx_1; i++) {
        out_data[b_tmp_data[i] - 1] = c_tmp_data[i];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  return out_size;
}

// End of code generation (dev_HtZ_g.cpp)
