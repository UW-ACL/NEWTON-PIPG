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
#include "dev_g_newton_pipg_update_withtimer_data.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include <cstring>

// Variable Definitions
static emlrtRSInfo rg_emlrtRSI{
    8,               // lineNo
    "dev_solve_LTv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pathName
};

static emlrtRSInfo sg_emlrtRSI{
    10,              // lineNo
    "dev_solve_LTv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pathName
};

static emlrtRSInfo tg_emlrtRSI{
    12,              // lineNo
    "dev_solve_LTv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pathName
};

static emlrtRSInfo ug_emlrtRSI{
    13,              // lineNo
    "dev_solve_LTv", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pathName
};

static emlrtECInfo fc_emlrtECI{
    -1,              // nDims
    10,              // lineNo
    13,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pName
};

static emlrtECInfo gc_emlrtECI{
    1,               // nDims
    12,              // lineNo
    22,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pName
};

static emlrtBCInfo od_emlrtBCI{
    1,               // iFirst
    290,             // iLast
    12,              // lineNo
    49,              // colNo
    "X",             // aName
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m", // pName
    0                                              // checkKind
};

static emlrtDCInfo ib_emlrtDCI{
    12,              // lineNo
    49,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m", // pName
    1                                              // checkKind
};

static emlrtDCInfo jb_emlrtDCI{
    10,              // lineNo
    15,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m", // pName
    1                                              // checkKind
};

static emlrtBCInfo pd_emlrtBCI{
    1,               // iFirst
    290,             // iLast
    10,              // lineNo
    15,              // colNo
    "X",             // aName
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m", // pName
    3                                              // checkKind
};

static emlrtDCInfo kb_emlrtDCI{
    12,              // lineNo
    24,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m", // pName
    1                                              // checkKind
};

static emlrtBCInfo qd_emlrtBCI{
    1,               // iFirst
    290,             // iLast
    12,              // lineNo
    24,              // colNo
    "v",             // aName
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m", // pName
    0                                              // checkKind
};

static emlrtBCInfo rd_emlrtBCI{
    -1,                       // iFirst
    -1,                       // iLast
    8,                        // lineNo
    25,                       // colNo
    "B",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\upper_triangular_solve.m", // pName
    0                                                       // checkKind
};

static emlrtBCInfo sd_emlrtBCI{
    1,                        // iFirst
    10,                       // iLast
    10,                       // lineNo
    42,                       // colNo
    "U",                      // aName
    "upper_triangular_solve", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\upper_triangular_solve.m", // pName
    0                                                       // checkKind
};

static emlrtRTEInfo kg_emlrtRTEI{
    8,               // lineNo
    9,               // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pName
};

static emlrtRTEInfo lg_emlrtRTEI{
    12,              // lineNo
    47,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pName
};

static emlrtRTEInfo mg_emlrtRTEI{
    13,              // lineNo
    15,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pName
};

static emlrtRTEInfo ng_emlrtRTEI{
    10,              // lineNo
    15,              // colNo
    "dev_solve_LTv", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\devnewton_code\\dev_solve_LTv.m" // pName
};

// Function Definitions
void dev_solve_LTv(const emlrtStack &sp, const real_T L[5800],
                   const real_T v[290], real_T X[290])
{
  coder::array<real_T, 2U> idx;
  coder::array<real_T, 2U> r;
  coder::array<int16_T, 2U> r1;
  emlrtStack b_st;
  emlrtStack st;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  std::memset(&X[0], 0, 290U * sizeof(real_T));
  for (int32_T t{0}; t < 29; t++) {
    int32_T a;
    int32_T aoffset;
    int32_T j;
    int32_T loop_ub;
    st.site = &rg_emlrtRSI;
    a = (28 - t) * 10 + 1;
    aoffset = (29 - t) * 10;
    b_st.site = &bc_emlrtRSI;
    if (aoffset < a) {
      idx.set_size(&kg_emlrtRTEI, &b_st, 1, 0);
    } else {
      loop_ub = aoffset - a;
      idx.set_size(&kg_emlrtRTEI, &b_st, 1, loop_ub + 1);
      for (j = 0; j <= loop_ub; j++) {
        idx[j] = a + j;
      }
    }
    if (29 - t == 29) {
      real_T U[100];
      real_T y[10];
      loop_ub = idx.size(1);
      r1.set_size(&ng_emlrtRTEI, &sp, 1, idx.size(1));
      for (j = 0; j < loop_ub; j++) {
        if (idx[j] != idx[j]) {
          emlrtIntegerCheckR2012b(idx[j], &jb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        aoffset = static_cast<int32_T>(idx[j]);
        if (aoffset > 290) {
          emlrtDynamicBoundsCheckR2012b(aoffset, 1, 290, &pd_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        r1[j] = static_cast<int16_T>(idx[j]);
      }
      aoffset = r1.size(1);
      if (r1.size(1) != 10) {
        emlrtSubAssignSizeCheck1dR2017a(r1.size(1), 10, &fc_emlrtECI,
                                        (emlrtConstCTX)&sp);
      }
      st.site = &sg_emlrtRSI;
      for (int32_T i{0}; i < 10; i++) {
        for (j = 0; j < 10; j++) {
          U[j + 10 * i] = L[(i + 10 * j) + 5600];
        }
        y[i] = 0.0;
      }
      for (int32_T i{0}; i < 10; i++) {
        if (10 - i > loop_ub) {
          emlrtDynamicBoundsCheckR2012b(10 - i, 1, loop_ub, &rd_emlrtBCI, &st);
        }
        y[9 - i] = v[static_cast<int32_T>(idx[9 - i]) - 1];
        for (j = 0; j < i; j++) {
          a = (j - i) + 10;
          if (a + 1 > 10) {
            emlrtDynamicBoundsCheckR2012b(a + 1, 1, 10, &sd_emlrtBCI, &st);
          }
          y[9 - i] -= U[9 - (i - 10 * a)] * y[a];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        y[9 - i] /= U[(10 * (9 - i) - i) + 9];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      for (j = 0; j < aoffset; j++) {
        X[r1[j] - 1] = y[j];
      }
    } else {
      real_T U[100];
      real_T temp_v[10];
      real_T y[10];
      real_T s;
      loop_ub = idx.size(1);
      r.set_size(&lg_emlrtRTEI, &sp, 1, idx.size(1));
      for (j = 0; j < loop_ub; j++) {
        s = idx[j] + 10.0;
        if (s != s) {
          emlrtIntegerCheckR2012b(s, &ib_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if (static_cast<int32_T>(s) > 290) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(s), 1, 290,
                                        &od_emlrtBCI, (emlrtConstCTX)&sp);
        }
        r[j] = X[static_cast<int32_T>(s) - 1];
      }
      for (j = 0; j < loop_ub; j++) {
        if (idx[j] != idx[j]) {
          emlrtIntegerCheckR2012b(idx[j], &kb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        aoffset = static_cast<int32_T>(idx[j]);
        if (aoffset > 290) {
          emlrtDynamicBoundsCheckR2012b(aoffset, 1, 290, &qd_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
      }
      if ((idx.size(1) != 10) && (idx.size(1) != 1)) {
        emlrtDimSizeImpxCheckR2021b(idx.size(1), 10, &gc_emlrtECI,
                                    (emlrtConstCTX)&sp);
      }
      st.site = &tg_emlrtRSI;
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
      for (int32_T i{0}; i < 10; i++) {
        aoffset = i * 10;
        s = 0.0;
        for (a = 0; a < 10; a++) {
          j = aoffset + a;
          s += L[((j % 10 + 10 * (j / 10)) + 200 * (29 - t)) + 100] * r[a];
        }
        y[i] = s;
      }
      for (j = 0; j < 10; j++) {
        temp_v[j] = v[static_cast<int32_T>(idx[j]) - 1] - y[j];
      }
      r1.set_size(&mg_emlrtRTEI, &sp, 1, 10);
      for (j = 0; j < 10; j++) {
        r1[j] = static_cast<int16_T>(idx[j]);
      }
      st.site = &ug_emlrtRSI;
      for (int32_T i{0}; i < 10; i++) {
        for (j = 0; j < 10; j++) {
          U[j + 10 * i] = L[(i + 10 * j) + 200 * (28 - t)];
        }
        y[i] = 0.0;
      }
      for (int32_T i{0}; i < 10; i++) {
        y[9 - i] = temp_v[9 - i];
        for (j = 0; j < i; j++) {
          a = (j - i) + 10;
          if (a + 1 > 10) {
            emlrtDynamicBoundsCheckR2012b(a + 1, 1, 10, &sd_emlrtBCI, &st);
          }
          y[9 - i] -= U[9 - (i - 10 * a)] * y[a];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        y[9 - i] /= U[(10 * (9 - i) - i) + 9];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&st);
        }
      }
      for (j = 0; j < 10; j++) {
        X[r1[j] - 1] = y[j];
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (dev_solve_LTv.cpp)
