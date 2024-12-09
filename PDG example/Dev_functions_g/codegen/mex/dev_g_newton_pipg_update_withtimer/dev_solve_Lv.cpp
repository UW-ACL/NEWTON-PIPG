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
#include "dev_g_newton_pipg_update_withtimer_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <cstring>

// Variable Definitions
static emlrtRSInfo og_emlrtRSI{
    8,              // lineNo
    "dev_solve_Lv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" // pathName
};

static emlrtRSInfo pg_emlrtRSI{
    10,             // lineNo
    "dev_solve_Lv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" // pathName
};

static emlrtRSInfo qg_emlrtRSI{
    12,             // lineNo
    "dev_solve_Lv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" // pathName
};

static emlrtECInfo dc_emlrtECI{
    -1,             // nDims
    10,             // lineNo
    13,             // colNo
    "dev_solve_Lv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" // pName
};

static emlrtECInfo ec_emlrtECI{
    1,              // nDims
    12,             // lineNo
    22,             // colNo
    "dev_solve_Lv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" // pName
};

static emlrtBCInfo kd_emlrtBCI{
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

static emlrtDCInfo fb_emlrtDCI{
    12,             // lineNo
    46,             // colNo
    "dev_solve_Lv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m", // pName
    1                                             // checkKind
};

static emlrtDCInfo gb_emlrtDCI{
    10,             // lineNo
    15,             // colNo
    "dev_solve_Lv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo ld_emlrtBCI{
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

static emlrtDCInfo hb_emlrtDCI{
    12,             // lineNo
    24,             // colNo
    "dev_solve_Lv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo md_emlrtBCI{
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

static emlrtBCInfo nd_emlrtBCI{
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

static emlrtRTEInfo gg_emlrtRTEI{
    8,              // lineNo
    9,              // colNo
    "dev_solve_Lv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" // pName
};

static emlrtRTEInfo hg_emlrtRTEI{
    12,             // lineNo
    44,             // colNo
    "dev_solve_Lv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" // pName
};

static emlrtRTEInfo ig_emlrtRTEI{
    13,             // lineNo
    15,             // colNo
    "dev_solve_Lv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" // pName
};

static emlrtRTEInfo jg_emlrtRTEI{
    10,             // lineNo
    15,             // colNo
    "dev_solve_Lv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_Lv.m" // pName
};

// Function Definitions
void dev_solve_Lv(const emlrtStack &sp, const real_T L[5800],
                  const real_T v[290], real_T X[290])
{
  coder::array<real_T, 2U> idx;
  coder::array<real_T, 2U> r;
  coder::array<int16_T, 2U> r1;
  emlrtStack b_st;
  emlrtStack st;
  real_T b_X[10];
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  std::memset(&X[0], 0, 290U * sizeof(real_T));
  for (int32_T t{0}; t < 29; t++) {
    int32_T a;
    int32_T b;
    int32_T loop_ub;
    st.site = &og_emlrtRSI;
    a = t * 10 + 1;
    b = (t + 1) * 10;
    b_st.site = &bc_emlrtRSI;
    if (b < a) {
      idx.set_size(&gg_emlrtRTEI, &b_st, 1, 0);
    } else {
      loop_ub = b - a;
      idx.set_size(&gg_emlrtRTEI, &b_st, 1, loop_ub + 1);
      for (int32_T j{0}; j <= loop_ub; j++) {
        idx[j] = a + j;
      }
    }
    if (t + 1 == 1) {
      loop_ub = idx.size(1);
      r1.set_size(&jg_emlrtRTEI, &sp, 1, idx.size(1));
      for (int32_T j{0}; j < loop_ub; j++) {
        if (idx[j] != idx[j]) {
          emlrtIntegerCheckR2012b(idx[j], &gb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        b = static_cast<int32_T>(idx[j]);
        if (b > 290) {
          emlrtDynamicBoundsCheckR2012b(b, 1, 290, &ld_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        r1[j] = static_cast<int16_T>(idx[j]);
      }
      b = r1.size(1);
      if (r1.size(1) != 10) {
        emlrtSubAssignSizeCheck1dR2017a(r1.size(1), 10, &dc_emlrtECI,
                                        (emlrtConstCTX)&sp);
      }
      st.site = &pg_emlrtRSI;
      std::memset(&b_X[0], 0, 10U * sizeof(real_T));
      for (a = 0; a < 10; a++) {
        if (a + 1 > loop_ub) {
          emlrtDynamicBoundsCheckR2012b(a + 1, 1, loop_ub, &nd_emlrtBCI, &st);
        }
        b_X[a] = v[static_cast<int32_T>(idx[a]) - 1];
        for (int32_T j{0}; j < a; j++) {
          b_X[a] -= L[a + 10 * j] * b_X[j];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        b_X[a] /= L[a + 10 * a];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      for (int32_T j{0}; j < b; j++) {
        X[r1[j] - 1] = b_X[j];
      }
    } else {
      real_T temp_v[10];
      real_T d;
      loop_ub = idx.size(1);
      r.set_size(&hg_emlrtRTEI, &sp, 1, idx.size(1));
      for (int32_T j{0}; j < loop_ub; j++) {
        d = idx[j] - 10.0;
        if (d != d) {
          emlrtIntegerCheckR2012b(d, &fb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > 290)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 290,
                                        &kd_emlrtBCI, (emlrtConstCTX)&sp);
        }
        r[j] = X[static_cast<int32_T>(d) - 1];
      }
      for (int32_T j{0}; j < loop_ub; j++) {
        if (idx[j] != idx[j]) {
          emlrtIntegerCheckR2012b(idx[j], &hb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        b = static_cast<int32_T>(idx[j]);
        if (b > 290) {
          emlrtDynamicBoundsCheckR2012b(b, 1, 290, &md_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
      }
      if ((idx.size(1) != 10) && (idx.size(1) != 1)) {
        emlrtDimSizeImpxCheckR2021b(idx.size(1), 10, &ec_emlrtECI,
                                    (emlrtConstCTX)&sp);
      }
      st.site = &qg_emlrtRSI;
      b_st.site = &pb_emlrtRSI;
      if (idx.size(1) != 10) {
        if (idx.size(1) == 1) {
          emlrtErrorWithMessageIdR2018a(
              &b_st, &c_emlrtRTEI,
              "Coder:toolbox:mtimes_noDynamicScalarExpansion",
              "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
        } else {
          emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI, "MATLAB:innerdim",
                                        "MATLAB:innerdim", 0);
        }
      }
      for (int32_T j{0}; j < 10; j++) {
        d = 0.0;
        for (b = 0; b < 10; b++) {
          d += L[((j + 10 * b) + 200 * t) + 100] * r[b];
        }
        temp_v[j] = v[static_cast<int32_T>(idx[j]) - 1] - d;
      }
      r1.set_size(&ig_emlrtRTEI, &sp, 1, 10);
      for (int32_T j{0}; j < 10; j++) {
        r1[j] = static_cast<int16_T>(idx[j]);
      }
      std::memset(&b_X[0], 0, 10U * sizeof(real_T));
      for (a = 0; a < 10; a++) {
        b_X[a] = temp_v[a];
        for (int32_T j{0}; j < a; j++) {
          b_X[a] -= L[(a + 10 * j) + 200 * t] * b_X[j];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }
        b_X[a] /= L[(a + 10 * a) + 200 * t];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }
      for (int32_T j{0}; j < 10; j++) {
        X[r1[j] - 1] = b_X[j];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (dev_solve_Lv.cpp)
