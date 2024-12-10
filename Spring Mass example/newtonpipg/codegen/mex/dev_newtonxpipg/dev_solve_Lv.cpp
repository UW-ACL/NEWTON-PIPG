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
#include "dev_newtonxpipg_data.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include <cstring>

// Variable Definitions
static emlrtRSInfo sb_emlrtRSI{
    10,             // lineNo
    "dev_solve_Lv", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_Lv.m" // pathName
};

static emlrtRSInfo tb_emlrtRSI{
    12,             // lineNo
    "dev_solve_Lv", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_Lv.m" // pathName
};

static emlrtECInfo g_emlrtECI{
    1,              // nDims
    12,             // lineNo
    22,             // colNo
    "dev_solve_Lv", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_Lv.m" // pName
};

static emlrtECInfo h_emlrtECI{
    -1,             // nDims
    10,             // lineNo
    13,             // colNo
    "dev_solve_Lv", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_Lv.m" // pName
};

static emlrtBCInfo emlrtBCI{
    1,              // iFirst
    1632,           // iLast
    12,             // lineNo
    46,             // colNo
    "X",            // aName
    "dev_solve_Lv", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_Lv.m", // pName
    0                                    // checkKind
};

static emlrtBCInfo b_emlrtBCI{
    1,              // iFirst
    1632,           // iLast
    10,             // lineNo
    15,             // colNo
    "X",            // aName
    "dev_solve_Lv", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_Lv.m", // pName
    3                                    // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    1,              // iFirst
    1632,           // iLast
    12,             // lineNo
    24,             // colNo
    "v",            // aName
    "dev_solve_Lv", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_solve_Lv.m", // pName
    0                                    // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    -1,                             // iFirst
    -1,                             // iLast
    8,                              // lineNo
    25,                             // colNo
    "B",                            // aName
    "small_lower_triangular_solve", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\small_lower_triangular_solve.m", // pName
    0                                                    // checkKind
};

// Function Definitions
void dev_solve_Lv(const emlrtStack *sp, const real_T L[104448],
                  const real_T v[1632], real_T X[1632])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T y[32];
  int32_T tmp_size[2];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  std::memset(&X[0], 0, 1632U * sizeof(real_T));
  for (int32_T t{0}; t < 51; t++) {
    int32_T a;
    int32_T b;
    int32_T i;
    int32_T idx_size_idx_1;
    int16_T idx_data[1632];
    a = (t << 5) + 1;
    b = (t + 1) << 5;
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
      int16_T tmp_data[1632];
      for (i = 0; i < idx_size_idx_1; i++) {
        b = idx_data[i];
        if (b > 1632) {
          emlrtDynamicBoundsCheckR2012b(b, 1, 1632, &b_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        tmp_data[i] = static_cast<int16_T>(b);
      }
      if (idx_size_idx_1 != 32) {
        emlrtSubAssignSizeCheck1dR2017a(idx_size_idx_1, 32, &h_emlrtECI,
                                        (emlrtConstCTX)sp);
      }
      st.site = &sb_emlrtRSI;
      std::memset(&y[0], 0, 32U * sizeof(real_T));
      for (a = 0; a < 32; a++) {
        if (a + 1 > idx_size_idx_1) {
          emlrtDynamicBoundsCheckR2012b(a + 1, 1, idx_size_idx_1, &d_emlrtBCI,
                                        &st);
        }
        y[a] = v[idx_data[a] - 1];
        for (b = 0; b < a; b++) {
          y[a] -= L[a + (b << 5)] * y[b];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        y[a] /= L[a + (a << 5)];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      for (i = 0; i < 32; i++) {
        X[tmp_data[i] - 1] = y[i];
      }
    } else {
      real_T b_tmp_data[1632];
      real_T temp_v[32];
      int16_T tmp_data[1632];
      tmp_size[0] = 1;
      tmp_size[1] = idx_size_idx_1;
      for (i = 0; i < idx_size_idx_1; i++) {
        b = idx_data[i] - 32;
        if ((b < 1) || (b > 1632)) {
          emlrtDynamicBoundsCheckR2012b(b, 1, 1632, &emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        b_tmp_data[i] = X[b - 1];
      }
      for (i = 0; i < idx_size_idx_1; i++) {
        b = idx_data[i];
        if (b > 1632) {
          emlrtDynamicBoundsCheckR2012b(b, 1, 1632, &c_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      if ((idx_size_idx_1 != 32) && (idx_size_idx_1 != 1)) {
        emlrtDimSizeImpxCheckR2021b(idx_size_idx_1, 32, &g_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      st.site = &tb_emlrtRSI;
      b_st.site = &u_emlrtRSI;
      if (idx_size_idx_1 != 32) {
        if (idx_size_idx_1 == 1) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &d_emlrtRTEI,
              "Coder:toolbox:mtimes_noDynamicScalarExpansion",
              "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &c_emlrtRTEI, "MATLAB:innerdim",
                                        "MATLAB:innerdim", 0);
        }
      }
      coder::internal::blas::mtimes(&L[(t << 11) + 1024], b_tmp_data, tmp_size,
                                    y);
      for (a = 0; a < 32; a++) {
        i = idx_data[a];
        temp_v[a] = v[i - 1] - y[a];
        tmp_data[a] = static_cast<int16_T>(i);
        y[a] = 0.0;
      }
      for (a = 0; a < 32; a++) {
        y[a] = temp_v[a];
        for (b = 0; b < a; b++) {
          y[a] -= L[(a + (b << 5)) + (t << 11)] * y[b];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
        y[a] /= L[(a + (a << 5)) + (t << 11)];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      for (i = 0; i < 32; i++) {
        X[tmp_data[i] - 1] = y[i];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

// End of code generation (dev_solve_Lv.cpp)
