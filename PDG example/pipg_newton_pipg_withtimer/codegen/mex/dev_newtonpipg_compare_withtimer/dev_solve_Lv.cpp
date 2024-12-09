//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_solve_Lv.cpp
//
// Code generation for function 'dev_solve_Lv'
//

// Include files
#include "dev_solve_Lv.h"
#include "dev_newtonpipg_compare_withtimer_data.h"
#include "rt_nonfinite.h"
#include <cstring>

// Variable Definitions
static emlrtRSInfo cg_emlrtRSI{
    10,             // lineNo
    "dev_solve_Lv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" // pathName
};

static emlrtRSInfo dg_emlrtRSI{
    12,             // lineNo
    "dev_solve_Lv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" // pathName
};

static emlrtBCInfo lg_emlrtBCI{
    1,              // iFirst
    290,            // iLast
    12,             // lineNo
    24,             // colNo
    "v",            // aName
    "dev_solve_Lv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo mg_emlrtBCI{
    1,              // iFirst
    290,            // iLast
    10,             // lineNo
    15,             // colNo
    "X",            // aName
    "dev_solve_Lv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m", // pName
    3                                             // checkKind
};

static emlrtBCInfo ng_emlrtBCI{
    1,              // iFirst
    290,            // iLast
    12,             // lineNo
    46,             // colNo
    "X",            // aName
    "dev_solve_Lv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo og_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    8,                              // lineNo
    25,                             // colNo
    "B",                            // aName
    "small_lower_triangular_solve", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\small_lower_triangular_solve.m", // pName
    0                                                             // checkKind
};

static emlrtECInfo yc_emlrtECI{
    1,              // nDims
    12,             // lineNo
    22,             // colNo
    "dev_solve_Lv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" // pName
};

static emlrtECInfo ad_emlrtECI{
    -1,             // nDims
    10,             // lineNo
    13,             // colNo
    "dev_solve_Lv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" // pName
};

// Function Definitions
void dev_solve_Lv(const emlrtStack &sp, const real_T L[5800],
                  const real_T v[290], real_T X[290])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T b_X[10];
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  std::memset(&X[0], 0, 290U * sizeof(real_T));
  for (int32_T t{0}; t < 29; t++) {
    int32_T a;
    int32_T b;
    int32_T i;
    int16_T idx_data[290];
    a = t * 10;
    b = (t + 1) * 10;
    if (b < a + 1) {
      b = 0;
    } else {
      b -= a;
      for (i = 0; i < b; i++) {
        idx_data[i] = static_cast<int16_T>((a + i) + 1);
      }
    }
    if (t + 1 == 1) {
      int16_T tmp_data[290];
      for (i = 0; i < b; i++) {
        a = idx_data[i];
        if (a > 290) {
          emlrtDynamicBoundsCheckR2012b(a, 1, 290, &mg_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        tmp_data[i] = static_cast<int16_T>(a);
      }
      if (b != 10) {
        emlrtSubAssignSizeCheck1dR2017a(b, 10, &ad_emlrtECI,
                                        (emlrtConstCTX)&sp);
      }
      st.site = &cg_emlrtRSI;
      std::memset(&b_X[0], 0, 10U * sizeof(real_T));
      for (a = 0; a < 10; a++) {
        if (a + 1 > b) {
          emlrtDynamicBoundsCheckR2012b(a + 1, 1, b, &og_emlrtBCI, &st);
        }
        b_X[a] = v[idx_data[a % b + b * (a / b)] - 1];
        for (int32_T j{0}; j < a; j++) {
          i = j + a * 10;
          b_X[a] -= L[58 * (i % 10) + 580 * (i / 10)] * b_X[j];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        i = a + a * 10;
        b_X[a] /= L[58 * (i % 10) + 580 * (i / 10)];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      for (i = 0; i < b; i++) {
        X[tmp_data[i] - 1] = b_X[i];
      }
    } else {
      real_T b_tmp_data[290];
      real_T temp_v[10];
      int16_T tmp_data[290];
      for (i = 0; i < b; i++) {
        a = idx_data[i] - 10;
        if ((a < 1) || (a > 290)) {
          emlrtDynamicBoundsCheckR2012b(a, 1, 290, &ng_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        b_tmp_data[i] = X[a - 1];
      }
      for (i = 0; i < b; i++) {
        a = idx_data[i];
        if (a > 290) {
          emlrtDynamicBoundsCheckR2012b(a, 1, 290, &lg_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
      }
      if ((b != 10) && (b != 1)) {
        emlrtDimSizeImpxCheckR2021b(b, 10, &yc_emlrtECI, (emlrtConstCTX)&sp);
      }
      st.site = &dg_emlrtRSI;
      b_st.site = &s_emlrtRSI;
      if (b != 10) {
        if (b == 1) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &o_emlrtRTEI,
              "Coder:toolbox:mtimes_noDynamicScalarExpansion",
              "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &n_emlrtRTEI, "MATLAB:innerdim",
                                        "MATLAB:innerdim", 0);
        }
      }
      for (i = 0; i < 10; i++) {
        real_T d;
        d = 0.0;
        for (a = 0; a < 10; a++) {
          d += b_tmp_data[a] * L[((t + 58 * a) + 580 * i) + 29];
        }
        a = idx_data[i];
        temp_v[i] = v[a - 1] - d;
        tmp_data[i] = static_cast<int16_T>(a);
      }
      std::memset(&b_X[0], 0, 10U * sizeof(real_T));
      for (a = 0; a < 10; a++) {
        b_X[a] = temp_v[a];
        for (int32_T j{0}; j < a; j++) {
          i = j + a * 10;
          b_X[a] -= L[(t + 58 * (i % 10)) + 580 * (i / 10)] * b_X[j];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }
        i = a + a * 10;
        b_X[a] /= L[(t + 58 * (i % 10)) + 580 * (i / 10)];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }
      for (i = 0; i < 10; i++) {
        X[tmp_data[i] - 1] = b_X[i];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
}

// End of code generation (dev_solve_Lv.cpp)
