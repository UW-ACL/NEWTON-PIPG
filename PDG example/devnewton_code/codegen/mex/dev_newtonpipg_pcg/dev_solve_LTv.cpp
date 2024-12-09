//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_solve_LTv.cpp
//
// Code generation for function 'dev_solve_LTv'
//

// Include files
#include "dev_solve_LTv.h"
#include "dev_newtonpipg_pcg_data.h"
#include "rt_nonfinite.h"
#include <cstring>

// Variable Definitions
static emlrtRSInfo nc_emlrtRSI{
    10,              // lineNo
    "dev_solve_LTv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pathName
};

static emlrtRSInfo oc_emlrtRSI{
    12,              // lineNo
    "dev_solve_LTv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pathName
};

static emlrtRSInfo pc_emlrtRSI{
    13,              // lineNo
    "dev_solve_LTv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pathName
};

static emlrtECInfo g_emlrtECI{
    1,               // nDims
    12,              // lineNo
    22,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pName
};

static emlrtECInfo h_emlrtECI{
    -1,              // nDims
    10,              // lineNo
    13,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pName
};

static emlrtBCInfo e_emlrtBCI{
    1,               // iFirst
    320,             // iLast
    12,              // lineNo
    49,              // colNo
    "X",             // aName
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_solve_LTv.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    1,               // iFirst
    320,             // iLast
    10,              // lineNo
    15,              // colNo
    "X",             // aName
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_solve_LTv.m", // pName
    3                                                   // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    1,               // iFirst
    320,             // iLast
    12,              // lineNo
    24,              // colNo
    "v",             // aName
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\dev_solve_LTv.m", // pName
    0                                                   // checkKind
};

static emlrtBCInfo h_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    8,                        // lineNo
    25,                       // colNo
    "B",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\upper_triangular_solve.m", // pName
    0                                                            // checkKind
};

static emlrtBCInfo i_emlrtBCI{
    1,                        // iFirst
    16,                       // iLast
    10,                       // lineNo
    42,                       // colNo
    "U",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\Final version with "
    "PCG\\newtonpipg\\devnewton_code\\upper_triangular_solve.m", // pName
    0                                                            // checkKind
};

// Function Definitions
void dev_solve_LTv(const emlrtStack *sp, const real_T L[10240],
                   const real_T v[320], real_T X[320])
{
  emlrtStack b_st;
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  std::memset(&X[0], 0, 320U * sizeof(real_T));
  for (int32_T t{0}; t < 20; t++) {
    int32_T a;
    int32_T aoffset;
    int32_T i;
    int32_T idx_size_idx_1;
    int16_T idx_data[320];
    a = ((19 - t) << 4) + 1;
    aoffset = (20 - t) << 4;
    if (aoffset < a) {
      idx_size_idx_1 = 0;
    } else {
      aoffset -= a;
      idx_size_idx_1 = aoffset + 1;
      for (i = 0; i <= aoffset; i++) {
        idx_data[i] = static_cast<int16_T>(a + i);
      }
    }
    if (20 - t == 20) {
      real_T U[256];
      real_T y[16];
      int16_T tmp_data[320];
      for (i = 0; i < idx_size_idx_1; i++) {
        aoffset = idx_data[i];
        if (aoffset > 320) {
          emlrtDynamicBoundsCheckR2012b(aoffset, 1, 320, &f_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        tmp_data[i] = static_cast<int16_T>(aoffset);
      }
      if (idx_size_idx_1 != 16) {
        emlrtSubAssignSizeCheck1dR2017a(idx_size_idx_1, 16, &h_emlrtECI,
                                        (emlrtConstCTX)sp);
      }
      st.site = &nc_emlrtRSI;
      for (int32_T b_i{0}; b_i < 16; b_i++) {
        for (i = 0; i < 16; i++) {
          U[i + (b_i << 4)] = L[(b_i + (i << 4)) + 9728];
        }
        y[b_i] = 0.0;
      }
      for (int32_T b_i{0}; b_i < 16; b_i++) {
        if (16 - b_i > idx_size_idx_1) {
          emlrtDynamicBoundsCheckR2012b(16 - b_i, 1, idx_size_idx_1,
                                        &h_emlrtBCI, &st);
        }
        y[15 - b_i] = v[idx_data[15 - b_i] - 1];
        for (a = 0; a < b_i; a++) {
          aoffset = (a - b_i) + 16;
          if (aoffset + 1 > 16) {
            emlrtDynamicBoundsCheckR2012b(aoffset + 1, 1, 16, &i_emlrtBCI, &st);
          }
          y[15 - b_i] -= U[15 - (b_i - (aoffset << 4))] * y[aoffset];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        y[15 - b_i] /= U[(((15 - b_i) << 4) - b_i) + 15];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      for (i = 0; i < 16; i++) {
        X[tmp_data[i] - 1] = y[i];
      }
    } else {
      real_T b_tmp_data[320];
      real_T U[256];
      real_T temp_v[16];
      real_T y[16];
      int16_T tmp_data[320];
      for (i = 0; i < idx_size_idx_1; i++) {
        aoffset = idx_data[i] + 16;
        if (aoffset > 320) {
          emlrtDynamicBoundsCheckR2012b(aoffset, 1, 320, &e_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        b_tmp_data[i] = X[aoffset - 1];
      }
      for (i = 0; i < idx_size_idx_1; i++) {
        aoffset = idx_data[i];
        if (aoffset > 320) {
          emlrtDynamicBoundsCheckR2012b(aoffset, 1, 320, &g_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
      }
      if ((idx_size_idx_1 != 16) && (idx_size_idx_1 != 1)) {
        emlrtDimSizeImpxCheckR2021b(idx_size_idx_1, 16, &g_emlrtECI,
                                    (emlrtConstCTX)sp);
      }
      st.site = &oc_emlrtRSI;
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
      for (int32_T b_i{0}; b_i < 16; b_i++) {
        real_T s;
        aoffset = b_i << 4;
        s = 0.0;
        for (a = 0; a < 16; a++) {
          i = aoffset + a;
          s += L[((i % 16 + ((i / 16) << 4)) + ((20 - t) << 9)) + 256] *
               b_tmp_data[a];
        }
        y[b_i] = s;
      }
      for (i = 0; i < 16; i++) {
        aoffset = idx_data[i];
        temp_v[i] = v[aoffset - 1] - y[i];
        tmp_data[i] = static_cast<int16_T>(aoffset);
      }
      st.site = &pc_emlrtRSI;
      for (int32_T b_i{0}; b_i < 16; b_i++) {
        for (i = 0; i < 16; i++) {
          U[i + (b_i << 4)] = L[(b_i + (i << 4)) + ((19 - t) << 9)];
        }
        y[b_i] = 0.0;
      }
      for (int32_T b_i{0}; b_i < 16; b_i++) {
        y[15 - b_i] = temp_v[15 - b_i];
        for (a = 0; a < b_i; a++) {
          aoffset = (a - b_i) + 16;
          if (aoffset + 1 > 16) {
            emlrtDynamicBoundsCheckR2012b(aoffset + 1, 1, 16, &i_emlrtBCI, &st);
          }
          y[15 - b_i] -= U[15 - (b_i - (aoffset << 4))] * y[aoffset];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        y[15 - b_i] /= U[(((15 - b_i) << 4) - b_i) + 15];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      for (i = 0; i < 16; i++) {
        X[tmp_data[i] - 1] = y[i];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

// End of code generation (dev_solve_LTv.cpp)
