//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_Y_multi_vector.cpp
//
// Code generation for function 'dev_Y_multi_vector'
//

// Include files
#include "dev_Y_multi_vector.h"
#include "dev_newtonpipg_g_with_timer_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "emlrt.h"
#include <algorithm>
#include <cstring>

// Variable Definitions
static emlrtRSInfo fi_emlrtRSI{
    16,                   // lineNo
    "dev_Y_multi_vector", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_Y_multi_vector.m" // pathName
};

static emlrtRSInfo gi_emlrtRSI{
    11,                   // lineNo
    "dev_Y_multi_vector", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_Y_multi_vector.m" // pathName
};

static emlrtRTEInfo li_emlrtRTEI{
    16,                   // lineNo
    68,                   // colNo
    "dev_Y_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_Y_multi_vector.m" // pName
};

// Function Definitions
void dev_Y_multi_vector(const emlrtStack &sp, const real_T Y[5800],
                        const real_T v[290], real_T out[290])
{
  emlrtProfilerSentinel profilerSentinel;
  coder::array<real_T, 2U> b;
  emlrtStack b_st;
  emlrtStack st;
  real_T b_v[10];
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  emlrtMEXProfilingFunctionEntryCPP((char_T *)c_dev_Y_multi_vector_complete_n,
                                    static_cast<boolean_T>(isMexOutdated),
                                    &profilerSentinel);
  emlrtMEXProfilingStatement(1, static_cast<boolean_T>(isMexOutdated));
  std::memset(&out[0], 0, 290U * sizeof(real_T));
  emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
  for (int32_T i{0}; i < 29; i++) {
    emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
    if (i + 1 == 1) {
      emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
      for (int32_T b_i{0}; b_i < 10; b_i++) {
        real_T d;
        real_T s;
        int32_T aoffset;
        aoffset = b_i * 10;
        s = 0.0;
        d = 0.0;
        for (int32_T k{0}; k < 10; k++) {
          s += Y[(aoffset + k) + 300] * v[k + 10];
          d += Y[b_i + 10 * k] * v[k];
        }
        out[b_i] = d + s;
      }
      emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
    } else {
      emlrtMEXProfilingStatement(8, static_cast<boolean_T>(isMexOutdated));
      if (i + 1 == 29) {
        emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
        st.site = &gi_emlrtRSI;
        for (int32_T c_i{0}; c_i < 10; c_i++) {
          real_T d;
          real_T s;
          d = 0.0;
          s = 0.0;
          for (int32_T i1{0}; i1 < 10; i1++) {
            int32_T b_i;
            b_i = c_i + 10 * i1;
            d += Y[b_i + 5600] * v[i1 + 280];
            s += Y[b_i + 5700] * v[i1 + 270];
          }
          out[c_i + 280] = d + s;
        }
        emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
      } else {
        real_T y[10];
        real_T s;
        int32_T aoffset;
        int32_T c_i;
        int32_T i1;
        int32_T temp;
        emlrtMEXProfilingStatement(13, static_cast<boolean_T>(isMexOutdated));
        temp = i * 10;
        emlrtMEXProfilingStatement(14, static_cast<boolean_T>(isMexOutdated));
        emlrtMEXProfilingStatement(15, static_cast<boolean_T>(isMexOutdated));
        if (temp - 9 > temp) {
          c_i = 0;
          i1 = 0;
        } else {
          c_i = temp - 10;
          i1 = temp;
        }
        st.site = &fi_emlrtRSI;
        b_st.site = &r_emlrtRSI;
        i1 -= c_i;
        if (i1 != 10) {
          if (i1 == 1) {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &g_emlrtRTEI,
                "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
          } else {
            emlrtErrorWithMessageIdR2018a(
                &b_st, &f_emlrtRTEI, "MATLAB:innerdim", "MATLAB:innerdim", 0);
          }
        }
        st.site = &fi_emlrtRSI;
        b.set_size(&li_emlrtRTEI, &st, 1, 10);
        for (i1 = 0; i1 < 10; i1++) {
          b[i1] = v[(temp + i1) + 10];
        }
        for (int32_T b_i{0}; b_i < 10; b_i++) {
          aoffset = b_i * 10;
          s = 0.0;
          for (int32_T k{0}; k < 10; k++) {
            i1 = aoffset + k;
            s += Y[((i1 % 10 + 10 * (i1 / 10)) + 200 * (i + 1)) + 100] * b[k];
          }
          y[b_i] = s;
        }
        std::copy(&v[temp],
                  &v[static_cast<int32_T>(static_cast<uint32_T>(temp) + 10U)],
                  &b_v[0]);
        for (i1 = 0; i1 < 10; i1++) {
          real_T d;
          d = 0.0;
          s = 0.0;
          for (int32_T b_i{0}; b_i < 10; b_i++) {
            aoffset = (i1 + 10 * b_i) + 200 * i;
            d += Y[aoffset] * b_v[b_i];
            s += Y[aoffset + 100] * v[c_i + b_i];
          }
          out[i1 + temp] = (d + s) + y[i1];
        }
        emlrtMEXProfilingStatement(16, static_cast<boolean_T>(isMexOutdated));
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  emlrtMEXProfilingStatement(17, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingFunctionExitCPP(&profilerSentinel);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (dev_Y_multi_vector.cpp)
