//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_HZ_g.cpp
//
// Code generation for function 'dev_HZ_g'
//

// Include files
#include "dev_HZ_g.h"
#include "dev_newtonpipg_g_N_30_data.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo t_emlrtRSI{
    16,         // lineNo
    "dev_HZ_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m" // pathName
};

static emlrtRSInfo u_emlrtRSI{
    17,         // lineNo
    "dev_HZ_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m" // pathName
};

static emlrtBCInfo b_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    16,         // lineNo
    61,         // colNo
    "z",        // aName
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo c_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    16,         // lineNo
    75,         // colNo
    "z",        // aName
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m", // pName
    0                                          // checkKind
};

static emlrtECInfo e_emlrtECI{
    -1,         // nDims
    16,         // lineNo
    5,          // colNo
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m" // pName
};

static emlrtDCInfo g_emlrtDCI{
    17,         // lineNo
    64,         // colNo
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo d_emlrtBCI{
    1,          // iFirst
    290,        // iLast
    17,         // lineNo
    64,         // colNo
    "out",      // aName
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo e_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    17,         // lineNo
    90,         // colNo
    "z",        // aName
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo h_emlrtDCI{
    17,         // lineNo
    108,        // colNo
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo f_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    17,         // lineNo
    108,        // colNo
    "z",        // aName
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m", // pName
    0                                          // checkKind
};

static emlrtECInfo f_emlrtECI{
    1,          // nDims
    17,         // lineNo
    46,         // colNo
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m" // pName
};

static emlrtDCInfo i_emlrtDCI{
    17,         // lineNo
    23,         // colNo
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo g_emlrtBCI{
    1,          // iFirst
    290,        // iLast
    17,         // lineNo
    23,         // colNo
    "out",      // aName
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m", // pName
    0                                          // checkKind
};

static emlrtECInfo g_emlrtECI{
    -1,         // nDims
    17,         // lineNo
    5,          // colNo
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m" // pName
};

static emlrtBCInfo ob_emlrtBCI{
    1,          // iFirst
    326,        // iLast
    17,         // lineNo
    108,        // colNo
    "z",        // aName
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m", // pName
    0                                          // checkKind
};

// Function Declarations
static int32_T binary_expand_op_1(real_T in1_data[], const real_T in2[290],
                                  int32_T in3, int32_T in4,
                                  const real_T in5_data[], int32_T in6,
                                  int32_T in7);

static int32_T binary_expand_op_12(real_T in1_data[], const real_T in2[290],
                                   int32_T in3, int32_T in4,
                                   const real_T in5[326], int32_T in6,
                                   int32_T in7);

// Function Definitions
static int32_T binary_expand_op_1(real_T in1_data[], const real_T in2[290],
                                  int32_T in3, int32_T in4,
                                  const real_T in5_data[], int32_T in6,
                                  int32_T in7)
{
  int32_T in1_size;
  int32_T in4_idx_0;
  int32_T in7_idx_0;
  int32_T stride_0_0;
  in4_idx_0 = in4 - in3;
  in7_idx_0 = in7 - in6;
  if (in7_idx_0 == 1) {
    in1_size = in4_idx_0;
  } else {
    in1_size = in7_idx_0;
  }
  stride_0_0 = (in4_idx_0 != 1);
  in4_idx_0 = (in7_idx_0 != 1);
  for (in7_idx_0 = 0; in7_idx_0 < in1_size; in7_idx_0++) {
    in1_data[in7_idx_0] = in2[in3 + in7_idx_0 * stride_0_0] +
                          in5_data[in6 + in7_idx_0 * in4_idx_0];
  }
  return in1_size;
}

static int32_T binary_expand_op_12(real_T in1_data[], const real_T in2[290],
                                   int32_T in3, int32_T in4,
                                   const real_T in5[326], int32_T in6,
                                   int32_T in7)
{
  int32_T in1_size;
  int32_T in4_idx_0;
  int32_T in7_idx_0;
  int32_T stride_0_0;
  in4_idx_0 = in4 - in3;
  in7_idx_0 = in7 - in6;
  if (in7_idx_0 == 1) {
    in1_size = in4_idx_0;
  } else {
    in1_size = in7_idx_0;
  }
  stride_0_0 = (in4_idx_0 != 1);
  in4_idx_0 = (in7_idx_0 != 1);
  for (in7_idx_0 = 0; in7_idx_0 < in1_size; in7_idx_0++) {
    in1_data[in7_idx_0] =
        in2[in3 + in7_idx_0 * stride_0_0] + in5[in6 + in7_idx_0 * in4_idx_0];
  }
  return in1_size;
}

void dev_HZ_g(const emlrtStack &sp, const real_T A[3190], const real_T z_data[],
              int32_T z_size, real_T n_e, real_T out[290])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T tmp_data[326];
  real_T z[10];
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  // This function is only designed for PDG
  // We assume that the B matrix, an indentity matrix arounded by zero matrix.
  // If we are applying First order hold, we need to fix this to more general
  // settings.
  // A is the matrix including all equalities. n_e is the amount of equalities,
  // which is also the amount of state variable at time t.
  std::memset(&out[0], 0, 290U * sizeof(real_T));
  for (int32_T i{0}; i < 29; i++) {
    real_T d;
    real_T d1;
    int32_T iv[2];
    int32_T b_i;
    int32_T i1;
    int32_T i2;
    int32_T i3;
    int32_T i4;
    int32_T i5;
    int32_T index_Hstart;
    int32_T index_zstart;
    int32_T unnamed_idx_0;
    index_Hstart = i * 10 + 1;
    index_zstart = i * 11 + 1;
    if (index_zstart > index_zstart + 10) {
      b_i = 0;
      i1 = 0;
    } else {
      if (index_zstart > z_size) {
        emlrtDynamicBoundsCheckR2012b(index_zstart, 1, z_size, &b_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      b_i = index_zstart - 1;
      if (index_zstart + 10 > z_size) {
        emlrtDynamicBoundsCheckR2012b(index_zstart + 10, 1, z_size, &c_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i1 = index_zstart + 10;
    }
    iv[0] = 1;
    i1 -= b_i;
    iv[1] = i1;
    st.site = &t_emlrtRSI;
    coder::internal::indexShapeCheck(st, z_size, iv);
    if (index_Hstart > index_Hstart + 9) {
      i2 = 0;
      i3 = 0;
    } else {
      i2 = index_Hstart - 1;
      i3 = index_Hstart + 9;
    }
    i3 -= i2;
    if (i3 != 10) {
      emlrtSubAssignSizeCheck1dR2017a(i3, 10, &e_emlrtECI, (emlrtConstCTX)&sp);
    }
    st.site = &t_emlrtRSI;
    b_st.site = &w_emlrtRSI;
    if (i1 != 11) {
      if (i1 == 1) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &p_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &o_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    for (i1 = 0; i1 < 10; i1++) {
      d = 0.0;
      for (i3 = 0; i3 < 11; i3++) {
        d += z_data[b_i + i3] * A[(i + 29 * i3) + 319 * i1];
      }
      z[i1] = d;
    }
    std::copy(&z[0], &z[10], &out[i2]);
    d = (static_cast<real_T>(index_Hstart) + n_e) - 1.0;
    if (index_Hstart > d) {
      b_i = 0;
      i1 = 0;
    } else {
      b_i = index_Hstart - 1;
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &g_emlrtDCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > 290)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 290,
                                      &d_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i1 = static_cast<int32_T>(d);
    }
    d1 = ((static_cast<real_T>(index_zstart) + 11.0) + n_e) - 1.0;
    if (static_cast<real_T>(index_zstart) + 11.0 > d1) {
      i2 = 0;
      i3 = 0;
    } else {
      if (index_zstart + 11 > z_size) {
        emlrtDynamicBoundsCheckR2012b(index_zstart + 11, 1, z_size, &e_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      i2 = index_zstart + 10;
      if (d1 != static_cast<int32_T>(muDoubleScalarFloor(d1))) {
        emlrtIntegerCheckR2012b(d1, &h_emlrtDCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(d1) < 1) ||
          (static_cast<int32_T>(d1) > z_size)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d1), 1, z_size,
                                      &f_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i3 = static_cast<int32_T>(d1);
    }
    iv[0] = 1;
    index_zstart = i3 - i2;
    iv[1] = index_zstart;
    st.site = &u_emlrtRSI;
    coder::internal::indexShapeCheck(st, z_size, iv);
    unnamed_idx_0 = i1 - b_i;
    if ((unnamed_idx_0 != index_zstart) &&
        ((unnamed_idx_0 != 1) && (index_zstart != 1))) {
      emlrtDimSizeImpxCheckR2021b(unnamed_idx_0, index_zstart, &f_emlrtECI,
                                  (emlrtConstCTX)&sp);
    }
    if (index_Hstart > d) {
      i4 = 0;
      i5 = 0;
    } else {
      i4 = index_Hstart - 1;
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &i_emlrtDCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > 290)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 290,
                                      &g_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i5 = static_cast<int32_T>(d);
    }
    if (unnamed_idx_0 == index_zstart) {
      index_zstart = (unnamed_idx_0 / 2) << 1;
      index_Hstart = index_zstart - 2;
      for (i1 = 0; i1 <= index_Hstart; i1 += 2) {
        __m128d r;
        r = _mm_loadu_pd(&out[b_i + i1]);
        _mm_storeu_pd(&tmp_data[i1],
                      _mm_add_pd(r, _mm_loadu_pd(&z_data[i2 + i1])));
      }
      for (i1 = index_zstart; i1 < unnamed_idx_0; i1++) {
        tmp_data[i1] = out[b_i + i1] + z_data[i2 + i1];
      }
    } else {
      unnamed_idx_0 =
          binary_expand_op_1(tmp_data, out, b_i, i1, z_data, i2, i3);
    }
    b_i = i5 - i4;
    if (b_i != unnamed_idx_0) {
      emlrtSubAssignSizeCheck1dR2017a(b_i, unnamed_idx_0, &g_emlrtECI,
                                      (emlrtConstCTX)&sp);
    }
    index_zstart = static_cast<int16_T>(b_i);
    for (b_i = 0; b_i < index_zstart; b_i++) {
      out[i4 + b_i] = tmp_data[b_i];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
}

void dev_HZ_g(const emlrtStack &sp, const real_T A[3190], const real_T z[326],
              real_T n_e, real_T out[290])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T tmp_data[326];
  real_T b_z[10];
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  // This function is only designed for PDG
  // We assume that the B matrix, an indentity matrix arounded by zero matrix.
  // If we are applying First order hold, we need to fix this to more general
  // settings.
  // A is the matrix including all equalities. n_e is the amount of equalities,
  // which is also the amount of state variable at time t.
  std::memset(&out[0], 0, 290U * sizeof(real_T));
  for (int32_T i{0}; i < 29; i++) {
    real_T d;
    real_T d1;
    int32_T b_i;
    int32_T i1;
    int32_T i2;
    int32_T i3;
    int32_T i4;
    int32_T index_Hstart;
    int32_T index_zstart;
    int32_T unnamed_idx_0;
    int32_T vectorUB;
    index_Hstart = i * 10 + 1;
    index_zstart = i * 11 + 11;
    if (index_zstart - 10 > index_zstart) {
      b_i = 0;
      i1 = 0;
    } else {
      b_i = index_zstart - 11;
      i1 = index_zstart;
    }
    if (index_Hstart > index_Hstart + 9) {
      vectorUB = 0;
      i2 = 0;
    } else {
      vectorUB = index_Hstart - 1;
      i2 = index_Hstart + 9;
    }
    i2 -= vectorUB;
    if (i2 != 10) {
      emlrtSubAssignSizeCheck1dR2017a(i2, 10, &e_emlrtECI, (emlrtConstCTX)&sp);
    }
    st.site = &t_emlrtRSI;
    b_st.site = &w_emlrtRSI;
    i1 -= b_i;
    if (i1 != 11) {
      if (i1 == 1) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &p_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &o_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    for (i1 = 0; i1 < 10; i1++) {
      d = 0.0;
      for (i2 = 0; i2 < 11; i2++) {
        d += z[b_i + i2] * A[(i + 29 * i2) + 319 * i1];
      }
      b_z[i1] = d;
    }
    std::copy(&b_z[0], &b_z[10], &out[vectorUB]);
    d = (static_cast<real_T>(index_Hstart) + n_e) - 1.0;
    if (index_Hstart > d) {
      b_i = 0;
      i1 = 0;
    } else {
      b_i = index_Hstart - 1;
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &g_emlrtDCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > 290)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 290,
                                      &d_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i1 = static_cast<int32_T>(d);
    }
    d1 = (((static_cast<real_T>(index_zstart) - 10.0) + 11.0) + n_e) - 1.0;
    if ((static_cast<real_T>(index_zstart) - 10.0) + 11.0 > d1) {
      index_zstart = 0;
      vectorUB = 0;
    } else {
      if (d1 != static_cast<int32_T>(muDoubleScalarFloor(d1))) {
        emlrtIntegerCheckR2012b(d1, &h_emlrtDCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(d1) < 1) || (static_cast<int32_T>(d1) > 326)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d1), 1, 326,
                                      &ob_emlrtBCI, (emlrtConstCTX)&sp);
      }
      vectorUB = static_cast<int32_T>(d1);
    }
    unnamed_idx_0 = i1 - b_i;
    i2 = vectorUB - index_zstart;
    if ((unnamed_idx_0 != i2) && ((unnamed_idx_0 != 1) && (i2 != 1))) {
      emlrtDimSizeImpxCheckR2021b(unnamed_idx_0, i2, &f_emlrtECI,
                                  (emlrtConstCTX)&sp);
    }
    if (index_Hstart > d) {
      i3 = 0;
      i4 = 0;
    } else {
      i3 = index_Hstart - 1;
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &i_emlrtDCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > 290)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 290,
                                      &g_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i4 = static_cast<int32_T>(d);
    }
    if (unnamed_idx_0 == i2) {
      index_Hstart = (unnamed_idx_0 / 2) << 1;
      vectorUB = index_Hstart - 2;
      for (i1 = 0; i1 <= vectorUB; i1 += 2) {
        __m128d r;
        r = _mm_loadu_pd(&out[b_i + i1]);
        _mm_storeu_pd(&tmp_data[i1],
                      _mm_add_pd(r, _mm_loadu_pd(&z[index_zstart + i1])));
      }
      for (i1 = index_Hstart; i1 < unnamed_idx_0; i1++) {
        tmp_data[i1] = out[b_i + i1] + z[index_zstart + i1];
      }
    } else {
      unnamed_idx_0 = binary_expand_op_12(tmp_data, out, b_i, i1, z,
                                          index_zstart, vectorUB);
    }
    b_i = i4 - i3;
    if (b_i != unnamed_idx_0) {
      emlrtSubAssignSizeCheck1dR2017a(b_i, unnamed_idx_0, &g_emlrtECI,
                                      (emlrtConstCTX)&sp);
    }
    index_Hstart = static_cast<int16_T>(b_i);
    for (b_i = 0; b_i < index_Hstart; b_i++) {
      out[i3 + b_i] = tmp_data[b_i];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
}

// End of code generation (dev_HZ_g.cpp)
