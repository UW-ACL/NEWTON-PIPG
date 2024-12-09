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
#include "dev_newtonpipg_pcg_data.h"
#include "rt_nonfinite.h"
#include <cstring>

// Variable Definitions
static emlrtRSInfo lc_emlrtRSI{
    10,             // lineNo
    "dev_solve_Lv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_solve_Lv.m" // pathName
};

static emlrtRSInfo mc_emlrtRSI{
    12,             // lineNo
    "dev_solve_Lv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_solve_Lv.m" // pathName
};

static emlrtECInfo e_emlrtECI{
    1,              // nDims
    12,             // lineNo
    22,             // colNo
    "dev_solve_Lv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_solve_Lv.m" // pName
};

static emlrtECInfo f_emlrtECI{
    -1,             // nDims
    10,             // lineNo
    13,             // colNo
    "dev_solve_Lv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_solve_Lv.m" // pName
};

static emlrtBCInfo emlrtBCI{
    1,              // iFirst
    320,            // iLast
    12,             // lineNo
    46,             // colNo
    "X",            // aName
    "dev_solve_Lv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_solve_Lv.m", // pName
    0                                                  // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    1,              // iFirst
    320,            // iLast
    10,             // lineNo
    15,             // colNo
    "X",            // aName
    "dev_solve_Lv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_solve_Lv.m", // pName
    3                                                  // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    1,              // iFirst
    320,            // iLast
    12,             // lineNo
    24,             // colNo
    "v",            // aName
    "dev_solve_Lv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_solve_Lv.m", // pName
    0                                                  // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    8,                              // lineNo
    25,                             // colNo
    "B",                            // aName
    "small_lower_triangular_solve", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\small_lower_triangular_solve.m", // pName
    0 // checkKind
};

// Function Definitions
void dev_solve_Lv(const emlrtStack *sp, const real_T L[10240],
                  const real_T v[320], real_T X[320])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T b_X[16];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  std::memset(&X[0], 0, 320U * sizeof(real_T));
  for (int32_T t{0}; t < 20; t++) {
    int32_T a;
    int32_T b;
    int32_T i;
    int32_T idx_size_idx_1;
    int16_T idx_data[320];
    a = (t << 4) + 1;
    b = (t + 1) << 4;
    if (b < a) {
      idx_size_idx_1 = 0;
    } else {
      b -= a;
      idx_size_idx_1 = b + 1;
      for (i = 0; i <= b; i++) {
        idx_data[i] = static_cast<int16_T>(a + i);
      }
    }
    if (t + 1 == 1) {
      int16_T tmp_data[320];
      for (i = 0; i < idx_size_idx_1; i++) {
        b = idx_data[i];
        if (b > 320) {
          emlrtDynamicBoundsCheckR2012b(b, 1, 320, &b_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        tmp_data[i] = static_cast<int16_T>(b);
      }
      if (idx_size_idx_1 != 16) {
        emlrtSubAssignSizeCheck1dR2017a(idx_size_idx_1, 16, &f_emlrtECI,
                                        (emlrtConstCTX)sp);
      }
      st.site = &lc_emlrtRSI;
      std::memset(&b_X[0], 0, 16U * sizeof(real_T));
      for (a = 0; a < 16; a++) {
        if (a + 1 > idx_size_idx_1) {
          emlrtDynamicBoundsCheckR2012b(a + 1, 1, idx_size_idx_1, &d_emlrtBCI,
                                        &st);
        }
        b_X[a] = v[idx_data[a] - 1];
        for (b = 0; b < a; b++) {
          b_X[a] -= L[a + (b << 4)] * b_X[b];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        b_X[a] /= L[a + (a << 4)];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      for (i = 0; i < 16; i++) {
        X[tmp_data[i] - 1] = b_X[i];
      }
    } else {
      real_T b_tmp_data[320];
      real_T temp_v[16];
      int16_T tmp_data[320];
      for (i = 0; i < idx_size_idx_1; i++) {
        b = idx_data[i] - 16;
        if ((b < 1) || (b > 320)) {
          emlrtDynamicBoundsCheckR2012b(b, 1, 320, &emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        b_tmp_data[i] = X[b - 1];
      }
      for (i = 0; i < idx_size_idx_1; i++) {
        b = idx_data[i];
        if (b > 320) {
          emlrtDynamicBoundsCheckR2012b(b, 1, 320, &c_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      if ((idx_size_idx_1 != 16) && (idx_size_idx_1 != 1)) {
        emlrtDimSizeImpxCheckR2021b(idx_size_idx_1, 16, &e_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      st.site = &mc_emlrtRSI;
      b_st.site = &v_emlrtRSI;
      if (idx_size_idx_1 != 16) {
        if (idx_size_idx_1 == 1) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &e_emlrtRTEI,
              "Coder:toolbox:mtimes_noDynamicScalarExpansion",
              "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                        "MATLAB:innerdim", 0);
        }
      }
      for (a = 0; a < 16; a++) {
        real_T d;
        d = 0.0;
        for (i = 0; i < 16; i++) {
          d += L[((a + (i << 4)) + (t << 9)) + 256] * b_tmp_data[i];
        }
        i = idx_data[a];
        temp_v[a] = v[i - 1] - d;
        tmp_data[a] = static_cast<int16_T>(i);
        b_X[a] = 0.0;
      }
      for (a = 0; a < 16; a++) {
        b_X[a] = temp_v[a];
        for (b = 0; b < a; b++) {
          b_X[a] -= L[(a + (b << 4)) + (t << 9)] * b_X[b];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
        b_X[a] /= L[(a + (a << 4)) + (t << 9)];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      for (i = 0; i < 16; i++) {
        X[tmp_data[i] - 1] = b_X[i];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

// End of code generation (dev_solve_Lv.cpp)
