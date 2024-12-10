//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_HtZ.cpp
//
// Code generation for function 'dev_HtZ'
//

// Include files
#include "dev_HtZ.h"
#include "dev_newtonzpipg_separatedinput_data.h"
#include "rt_nonfinite.h"
#include <algorithm>
#include <cstring>

// Variable Definitions
static emlrtRSInfo v_emlrtRSI{
    22,        // lineNo
    "dev_HtZ", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_HtZ.m" // pathName
};

static emlrtRSInfo w_emlrtRSI{
    23,        // lineNo
    "dev_HtZ", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_HtZ.m" // pathName
};

static emlrtECInfo emlrtECI{
    1,         // nDims
    22,        // lineNo
    10,        // colNo
    "dev_HtZ", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_HtZ.m" // pName
};

static emlrtECInfo b_emlrtECI{
    1,         // nDims
    23,        // lineNo
    10,        // colNo
    "dev_HtZ", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_HtZ.m" // pName
};

static emlrtECInfo c_emlrtECI{
    -1,        // nDims
    25,        // lineNo
    5,         // colNo
    "dev_HtZ", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_HtZ.m" // pName
};

static emlrtECInfo d_emlrtECI{
    -1,        // nDims
    26,        // lineNo
    5,         // colNo
    "dev_HtZ", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_HtZ.m" // pName
};

// Function Declarations
static void binary_expand_op(real_T in1[496], int32_T in2, int32_T in4,
                             int32_T in5, const real_T in6[256],
                             const real_T in7[320], int32_T in8, int32_T in10,
                             int32_T in11, const real_T in12[128],
                             int32_T in13);

// Function Definitions
static void binary_expand_op(real_T in1[496], int32_T in2, int32_T in4,
                             int32_T in5, const real_T in6[256],
                             const real_T in7[320], int32_T in8, int32_T in10,
                             int32_T in11, const real_T in12[128], int32_T in13)
{
  real_T b_in6[16];
  real_T in1_data[16];
  real_T b_in12[8];
  real_T b_in1_data[8];
  real_T d;
  int32_T stride_0_1;
  for (int32_T i{0}; i < 16; i++) {
    d = 0.0;
    for (stride_0_1 = 0; stride_0_1 < 16; stride_0_1++) {
      d += in6[i + (stride_0_1 << 4)] * in7[in8 + stride_0_1];
    }
    b_in6[i] = d;
  }
  for (int32_T i{0}; i < 8; i++) {
    d = 0.0;
    for (stride_0_1 = 0; stride_0_1 < 16; stride_0_1++) {
      d += in12[i + (stride_0_1 << 3)] * in7[in13 + stride_0_1];
    }
    b_in12[i] = d;
  }
  stride_0_1 = (in5 - in4 != 1);
  for (int32_T i{0}; i < 16; i++) {
    in1_data[i] = in1[in4 + i * stride_0_1] - b_in6[i];
  }
  stride_0_1 = (in11 - in10 != 1);
  for (int32_T i{0}; i < 8; i++) {
    b_in1_data[i] = in1[in10 + i * stride_0_1] - b_in12[i];
  }
  std::copy(&in1_data[0], &in1_data[16], &in1[in2]);
  std::copy(&b_in1_data[0], &b_in1_data[8], &in1[in2 + 16]);
}

void dev_HtZ(const emlrtStack *sp, const real_T At[256], const real_T Bt[128],
             const real_T z[320], real_T out[496])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T b_out[16];
  real_T c_out[8];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  //  In this function, we define a simple version of H transpose multiply z.
  //  Each column of H transpose is [-A', -B', I]
  //  By simple, we mean in the matrix H transpose, both A and B are fixed
  //  function. This should be sufficient in estimating the speed for
  //  computation.
  // fix this. We should only fid in A', B' instead of A and B. UNFIXED!!!!
  std::memset(&out[0], 0, 496U * sizeof(real_T));
  for (int32_T t{0}; t < 20; t++) {
    int32_T e1;
    int32_T i;
    int32_T i1;
    int32_T i2;
    int32_T i3;
    int32_T i4;
    int32_T i5;
    int32_T i6;
    int32_T i7;
    int32_T s1;
    int32_T s1m;
    int32_T ze1;
    int32_T zs1;
    s1 = t * 24;
    e1 = (t + 1) * 24;
    zs1 = t << 4;
    ze1 = (t + 1) << 4;
    s1m = t * 24 + 16;
    if (s1 + 1 > s1m) {
      i = 0;
      i1 = 0;
    } else {
      i = s1;
      i1 = s1m;
    }
    if (zs1 + 1 > ze1) {
      i2 = 0;
      i3 = 0;
    } else {
      i2 = zs1;
      i3 = ze1;
    }
    i4 = i1 - i;
    if ((i4 != 16) && (i4 != 1)) {
      emlrtDimSizeImpxCheckR2021b(i4, 16, &emlrtECI, (emlrtConstCTX)sp);
    }
    st.site = &v_emlrtRSI;
    b_st.site = &u_emlrtRSI;
    i3 -= i2;
    if (i3 != 16) {
      if (i3 == 1) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &e_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    if (s1m + 1 > e1) {
      s1m = 0;
      i3 = 0;
    } else {
      i3 = e1;
    }
    if (zs1 + 1 > ze1) {
      i5 = 0;
      i6 = 0;
    } else {
      i5 = zs1;
      i6 = ze1;
    }
    i7 = i3 - s1m;
    if ((i7 != 8) && (i7 != 1)) {
      emlrtDimSizeImpxCheckR2021b(i7, 8, &b_emlrtECI, (emlrtConstCTX)sp);
    }
    st.site = &w_emlrtRSI;
    b_st.site = &u_emlrtRSI;
    i6 -= i5;
    if (i6 != 16) {
      if (i6 == 1) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &e_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &d_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    if (s1 + 1 > e1) {
      s1 = 0;
      i6 = 0;
    } else {
      i6 = e1;
    }
    i6 -= s1;
    if (i6 != 24) {
      emlrtSubAssignSizeCheck1dR2017a(i6, 24, &c_emlrtECI, (emlrtConstCTX)sp);
    }
    if ((i4 == 16) && (i7 == 8)) {
      real_T d;
      for (i1 = 0; i1 < 16; i1++) {
        d = 0.0;
        for (i3 = 0; i3 < 16; i3++) {
          d += At[i1 + (i3 << 4)] * z[i2 + i3];
        }
        b_out[i1] = out[i + i1] - d;
      }
      for (i = 0; i < 8; i++) {
        d = 0.0;
        for (i1 = 0; i1 < 16; i1++) {
          d += Bt[i + (i1 << 3)] * z[i5 + i1];
        }
        c_out[i] = out[s1m + i] - d;
      }
      std::copy(&b_out[0], &b_out[16], &out[s1]);
      std::copy(&c_out[0], &c_out[8], &out[s1 + 16]);
    } else {
      binary_expand_op(out, s1, i, i1, At, z, i2, s1m, i3, Bt, i5);
    }
    if (zs1 + 1 > ze1) {
      zs1 = 0;
      ze1 = 0;
    }
    s1 = ze1 - zs1;
    if (s1 != 16) {
      emlrtSubAssignSizeCheck1dR2017a(16, s1, &d_emlrtECI, (emlrtConstCTX)sp);
    }
    std::copy(&z[zs1],
              &z[static_cast<int32_T>(static_cast<uint32_T>(zs1) + 16U)],
              &out[e1]);
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
}

// End of code generation (dev_HtZ.cpp)
