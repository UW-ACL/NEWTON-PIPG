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
#include "dev_g_newton_pipg_update_withtimer_data.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo ob_emlrtRSI{
    16,         // lineNo
    "dev_HZ_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m" // pathName
};

static emlrtECInfo c_emlrtECI{
    -1,         // nDims
    16,         // lineNo
    5,          // colNo
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m" // pName
};

static emlrtDCInfo b_emlrtDCI{
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

static emlrtDCInfo c_emlrtDCI{
    17,         // lineNo
    108,        // colNo
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo e_emlrtBCI{
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

static emlrtECInfo d_emlrtECI{
    1,          // nDims
    17,         // lineNo
    46,         // colNo
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m" // pName
};

static emlrtDCInfo d_emlrtDCI{
    17,         // lineNo
    23,         // colNo
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo f_emlrtBCI{
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

static emlrtECInfo e_emlrtECI{
    -1,         // nDims
    17,         // lineNo
    5,          // colNo
    "dev_HZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HZ_g.m" // pName
};

// Function Declarations
static int32_T binary_expand_op_1(real_T in1_data[], const real_T in2[290],
                                  int32_T in3, int32_T in4,
                                  const real_T in5[326], int32_T in6,
                                  int32_T in7);

// Function Definitions
static int32_T binary_expand_op_1(real_T in1_data[], const real_T in2[290],
                                  int32_T in3, int32_T in4,
                                  const real_T in5[326], int32_T in6,
                                  int32_T in7)
{
  int32_T i;
  int32_T in1_size;
  int32_T stride_0_0;
  int32_T stride_1_0;
  i = in7 - in6;
  stride_0_0 = in4 - in3;
  if (i == 1) {
    in1_size = stride_0_0;
  } else {
    in1_size = i;
  }
  stride_0_0 = (stride_0_0 != 1);
  stride_1_0 = (i != 1);
  for (i = 0; i < in1_size; i++) {
    in1_data[i] = in2[in3 + i * stride_0_0] + in5[in6 + i * stride_1_0];
  }
  return in1_size;
}

void dev_HZ_g(const emlrtStack &sp, const real_T A[3190], const real_T z[326],
              real_T n_e, real_T out[290])
{
  emlrtStack b_st;
  emlrtStack st;
  real_T tmp_data[326];
  real_T b_A[10];
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
    int32_T loop_ub;
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
    loop_ub = i2 - vectorUB;
    if (loop_ub != 10) {
      emlrtSubAssignSizeCheck1dR2017a(loop_ub, 10, &c_emlrtECI,
                                      (emlrtConstCTX)&sp);
    }
    st.site = &ob_emlrtRSI;
    b_st.site = &pb_emlrtRSI;
    i1 -= b_i;
    if (i1 != 11) {
      if (i1 == 1) {
        emlrtErrorWithMessageIdR2018a(
            &b_st, &c_emlrtRTEI,
            "Coder:toolbox:mtimes_noDynamicScalarExpansion",
            "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
      } else {
        emlrtErrorWithMessageIdR2018a(&b_st, &b_emlrtRTEI, "MATLAB:innerdim",
                                      "MATLAB:innerdim", 0);
      }
    }
    for (i1 = 0; i1 < 10; i1++) {
      d = 0.0;
      for (i2 = 0; i2 < 11; i2++) {
        d += A[(i1 + 10 * i2) + 110 * i] * z[b_i + i2];
      }
      b_A[i1] = d;
    }
    std::copy(&b_A[0], &b_A[10], &out[vectorUB]);
    d = (static_cast<real_T>(index_Hstart) + n_e) - 1.0;
    if (index_Hstart > d) {
      b_i = 0;
      i1 = 0;
    } else {
      b_i = index_Hstart - 1;
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &b_emlrtDCI, (emlrtConstCTX)&sp);
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
        emlrtIntegerCheckR2012b(d1, &c_emlrtDCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(d1) < 1) || (static_cast<int32_T>(d1) > 326)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d1), 1, 326,
                                      &e_emlrtBCI, (emlrtConstCTX)&sp);
      }
      vectorUB = static_cast<int32_T>(d1);
    }
    loop_ub = i1 - b_i;
    i2 = vectorUB - index_zstart;
    if ((loop_ub != i2) && ((loop_ub != 1) && (i2 != 1))) {
      emlrtDimSizeImpxCheckR2021b(loop_ub, i2, &d_emlrtECI, (emlrtConstCTX)&sp);
    }
    if (index_Hstart > d) {
      i3 = 0;
      i4 = 0;
    } else {
      i3 = index_Hstart - 1;
      if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
        emlrtIntegerCheckR2012b(d, &d_emlrtDCI, (emlrtConstCTX)&sp);
      }
      if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > 290)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 290,
                                      &f_emlrtBCI, (emlrtConstCTX)&sp);
      }
      i4 = static_cast<int32_T>(d);
    }
    if (loop_ub == i2) {
      index_Hstart = (loop_ub / 2) << 1;
      vectorUB = index_Hstart - 2;
      for (i1 = 0; i1 <= vectorUB; i1 += 2) {
        __m128d r;
        r = _mm_loadu_pd(&out[b_i + i1]);
        _mm_storeu_pd(&tmp_data[i1],
                      _mm_add_pd(r, _mm_loadu_pd(&z[index_zstart + i1])));
      }
      for (i1 = index_Hstart; i1 < loop_ub; i1++) {
        tmp_data[i1] = out[b_i + i1] + z[index_zstart + i1];
      }
    } else {
      loop_ub =
          binary_expand_op_1(tmp_data, out, b_i, i1, z, index_zstart, vectorUB);
    }
    index_Hstart = i4 - i3;
    if (index_Hstart != loop_ub) {
      emlrtSubAssignSizeCheck1dR2017a(index_Hstart, loop_ub, &e_emlrtECI,
                                      (emlrtConstCTX)&sp);
    }
    for (b_i = 0; b_i < index_Hstart; b_i++) {
      out[i3 + b_i] = tmp_data[b_i];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
}

// End of code generation (dev_HZ_g.cpp)
