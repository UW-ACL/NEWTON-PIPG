//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_jacob_soc.cpp
//
// Code generation for function 'dev_jacob_soc'
//

// Include files
#include "dev_jacob_soc.h"
#include "dev_jacob_ball.h"
#include "dev_newtonpipg_g_N_30_data.h"
#include "diag.h"
#include "div.h"
#include "eig.h"
#include "eml_mtimes_helper.h"
#include "eye.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "blas.h"
#include "coder_bounded_array.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstddef>
#include <cstring>
#include <emmintrin.h>

// Type Definitions
struct cell_wrap_6 {
  coder::bounded_array<real_T, 110U, 2U> f1;
};

// Variable Definitions
static emlrtRSInfo ee_emlrtRSI{
    4,               // lineNo
    "dev_jacob_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo fe_emlrtRSI{
    6,               // lineNo
    "dev_jacob_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo ge_emlrtRSI{
    14,              // lineNo
    "dev_jacob_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo he_emlrtRSI{
    15,              // lineNo
    "dev_jacob_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo ie_emlrtRSI{
    16,              // lineNo
    "dev_jacob_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo je_emlrtRSI{
    17,              // lineNo
    "dev_jacob_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo ke_emlrtRSI{
    18,              // lineNo
    "dev_jacob_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo le_emlrtRSI{
    41,                // lineNo
    "constructMatrix", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo me_emlrtRSI{
    44,                // lineNo
    "constructMatrix", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo ne_emlrtRSI{
    48,                // lineNo
    "constructMatrix", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo oe_emlrtRSI{
    50,                // lineNo
    "constructMatrix", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pathName
};

static emlrtRSInfo pe_emlrtRSI{
    41,    // lineNo
    "cat", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pathName
};

static emlrtRSInfo qe_emlrtRSI{
    113,        // lineNo
    "cat_impl", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pathName
};

static emlrtBCInfo sd_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    3,               // lineNo
    12,              // colNo
    "v",             // aName
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo td_emlrtBCI{
    -1,              // iFirst
    -1,              // iLast
    4,               // lineNo
    15,              // colNo
    "v",             // aName
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m", // pName
    0                                               // checkKind
};

static emlrtECInfo bc_emlrtECI{
    1,               // nDims
    17,              // lineNo
    55,              // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtECInfo cc_emlrtECI{
    1,               // nDims
    17,              // lineNo
    44,              // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtECInfo dc_emlrtECI{
    1,               // nDims
    18,              // lineNo
    46,              // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtECInfo ec_emlrtECI{
    1,               // nDims
    18,              // lineNo
    35,              // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtECInfo fc_emlrtECI{
    2,               // nDims
    19,              // lineNo
    22,              // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtECInfo gc_emlrtECI{
    2,               // nDims
    20,              // lineNo
    22,              // colNo
    "dev_jacob_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtRTEInfo cb_emlrtRTEI{
    288,                   // lineNo
    27,                    // colNo
    "check_non_axis_size", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\cat.m" // pName
};

static emlrtECInfo hc_emlrtECI{
    2,                 // nDims
    44,                // lineNo
    24,                // colNo
    "constructMatrix", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtECInfo ic_emlrtECI{
    1,                 // nDims
    44,                // lineNo
    24,                // colNo
    "constructMatrix", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtECInfo jc_emlrtECI{
    2,                 // nDims
    44,                // lineNo
    55,                // colNo
    "constructMatrix", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

static emlrtECInfo kc_emlrtECI{
    1,                 // nDims
    44,                // lineNo
    55,                // colNo
    "constructMatrix", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_soc.m" // pName
};

// Function Declarations
static void binary_expand_op_28(real_T in1_data[], int32_T in1_size[2],
                                const real_T in2_data[],
                                const int32_T in2_size[2],
                                const real_T in3_data[],
                                const int32_T in3_size[2]);

static void constructMatrix(const emlrtStack &sp, real_T z1,
                            const real_T z2_data[], int32_T z2_size,
                            real_T epsilon, real_T resultMatrix_data[],
                            int32_T resultMatrix_size[2]);

// Function Definitions
static void binary_expand_op_28(real_T in1_data[], int32_T in1_size[2],
                                const real_T in2_data[],
                                const int32_T in2_size[2],
                                const real_T in3_data[],
                                const int32_T in3_size[2])
{
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  if (in3_size[1] == 1) {
    loop_ub = in2_size[1];
  } else {
    loop_ub = in3_size[1];
  }
  in1_size[1] = loop_ub;
  if (in3_size[0] == 1) {
    b_loop_ub = in2_size[0];
  } else {
    b_loop_ub = in3_size[0];
  }
  in1_size[0] = b_loop_ub;
  stride_0_0 = (in2_size[1] != 1);
  stride_0_1 = (in2_size[0] != 1);
  stride_1_0 = (in3_size[1] != 1);
  stride_1_1 = (in3_size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1_data[i1 + in1_size[1] * i] =
          in2_data[i1 * stride_0_0 + in2_size[1] * aux_0_1] +
          in3_data[i1 * stride_1_0 + in3_size[1] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
}

static void constructMatrix(const emlrtStack &sp, real_T z1,
                            const real_T z2_data[], int32_T z2_size,
                            real_T epsilon, real_T resultMatrix_data[],
                            int32_T resultMatrix_size[2])
{
  __m128d r;
  __m128d r1;
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  cell_wrap_6 reshapes[2];
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T b_y_data[121];
  real_T y_data[121];
  real_T result_data[110];
  real_T I_data[100];
  real_T tmp_data[100];
  real_T varargin_2_data[11];
  real_T z2Normalized_data[10];
  real_T c;
  real_T normZ2;
  int32_T I_size[2];
  int32_T b_y_size[2];
  int32_T tmp_size[2];
  int32_T y_size[2];
  int32_T b_y;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T scalarLB_tmp;
  int32_T vectorUB_tmp;
  int32_T y;
  int8_T input_sizes_idx_0_tmp;
  int8_T input_sizes_idx_1;
  boolean_T empty_non_axis_sizes;
  boolean_T sizes_idx_1_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  //  Ensure z2 is a column vector
  //  Compute the norm of z2
  if (z2_size == 0) {
    normZ2 = 0.0;
  } else {
    n_t = (ptrdiff_t)z2_size;
    incx_t = (ptrdiff_t)1;
    normZ2 = dnrm2(&n_t, (real_T *)&z2_data[0], &incx_t);
  }
  //  Scalar part
  //  z2 normalized
  scalarLB_tmp = (z2_size / 2) << 1;
  vectorUB_tmp = scalarLB_tmp - 2;
  for (i = 0; i <= vectorUB_tmp; i += 2) {
    _mm_storeu_pd(&z2Normalized_data[i],
                  _mm_div_pd(_mm_loadu_pd(&z2_data[i]), _mm_set1_pd(normZ2)));
  }
  for (i = scalarLB_tmp; i < z2_size; i++) {
    z2Normalized_data[i] = z2_data[i] / normZ2;
  }
  //  Identity matrix of size z2
  st.site = &le_emlrtRSI;
  coder::eye(st, static_cast<real_T>(z2_size), y_data, y_size);
  y = y_size[1];
  I_size[1] = y_size[1];
  b_y = y_size[0];
  I_size[0] = y_size[0];
  loop_ub_tmp = y_size[0] * y_size[1];
  if (loop_ub_tmp - 1 >= 0) {
    std::copy(&y_data[0], &y_data[loop_ub_tmp], &I_data[0]);
  }
  //  Compute the right-bottom block of the matrix
  st.site = &me_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  c = normZ2 * normZ2;
  tmp_size[1] = z2_size;
  tmp_size[0] = z2_size;
  for (i = 0; i < z2_size; i++) {
    for (i1 = 0; i1 <= vectorUB_tmp; i1 += 2) {
      _mm_storeu_pd(&tmp_data[i1 + z2_size * i],
                    _mm_div_pd(_mm_add_pd(_mm_set1_pd(0.0),
                                          _mm_mul_pd(_mm_loadu_pd(&z2_data[i1]),
                                                     _mm_set1_pd(z2_data[i]))),
                               _mm_set1_pd(c)));
    }
    for (i1 = scalarLB_tmp; i1 < z2_size; i1++) {
      tmp_data[i1 + z2_size * i] = z2_data[i1] * z2_data[i] / c;
    }
  }
  if ((y_size[0] != z2_size) && ((y_size[0] != 1) && (z2_size != 1))) {
    emlrtDimSizeImpxCheckR2021b(y_size[0], z2_size, &kc_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if ((y_size[1] != z2_size) && ((y_size[1] != 1) && (z2_size != 1))) {
    emlrtDimSizeImpxCheckR2021b(y_size[1], z2_size, &jc_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  scalarLB_tmp = (loop_ub_tmp / 2) << 1;
  vectorUB_tmp = scalarLB_tmp - 2;
  for (i = 0; i <= vectorUB_tmp; i += 2) {
    r = _mm_loadu_pd(&I_data[i]);
    _mm_storeu_pd(&y_data[i], _mm_mul_pd(_mm_set1_pd(epsilon), r));
  }
  for (i = scalarLB_tmp; i < loop_ub_tmp; i++) {
    y_data[i] = epsilon * I_data[i];
  }
  normZ2 = z1 / normZ2;
  if ((I_size[1] == z2_size) && (I_size[0] == z2_size)) {
    b_y_size[1] = y;
    b_y_size[0] = b_y;
    for (i = 0; i <= vectorUB_tmp; i += 2) {
      r = _mm_loadu_pd(&I_data[i]);
      r1 = _mm_loadu_pd(&tmp_data[i]);
      _mm_storeu_pd(&b_y_data[i],
                    _mm_mul_pd(_mm_set1_pd(normZ2), _mm_sub_pd(r, r1)));
    }
    for (i = scalarLB_tmp; i < loop_ub_tmp; i++) {
      b_y_data[i] = normZ2 * (I_data[i] - tmp_data[i]);
    }
  } else {
    binary_expand_op_29(b_y_data, b_y_size, normZ2, I_data, I_size, tmp_data,
                        tmp_size);
  }
  if ((b_y != b_y_size[0]) && ((b_y != 1) && (b_y_size[0] != 1))) {
    emlrtDimSizeImpxCheckR2021b(y_size[0], b_y_size[0], &ic_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if ((y != b_y_size[1]) && ((y != 1) && (b_y_size[1] != 1))) {
    emlrtDimSizeImpxCheckR2021b(y_size[1], b_y_size[1], &hc_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if ((y == b_y_size[1]) && (b_y == b_y_size[0])) {
    I_size[1] = y;
    I_size[0] = b_y;
    loop_ub = b_y * y;
    scalarLB_tmp = (loop_ub / 2) << 1;
    vectorUB_tmp = scalarLB_tmp - 2;
    for (i = 0; i <= vectorUB_tmp; i += 2) {
      r = _mm_loadu_pd(&y_data[i]);
      r1 = _mm_loadu_pd(&b_y_data[i]);
      _mm_storeu_pd(&I_data[i], _mm_add_pd(r, r1));
    }
    for (i = scalarLB_tmp; i < loop_ub; i++) {
      I_data[i] = y_data[i] + b_y_data[i];
    }
  } else {
    binary_expand_op_28(I_data, I_size, y_data, y_size, b_y_data, b_y_size);
  }
  //  Assemble the full matrix
  // fullMatrix = [scalarPart, z2Normalized'; z2Normalized, rightBottomBlock];
  st.site = &ne_emlrtRSI;
  b_st.site = &pe_emlrtRSI;
  sizes_idx_1_tmp = ((I_size[0] != 0) && (I_size[1] != 0));
  if (sizes_idx_1_tmp) {
    scalarLB_tmp = I_size[0];
  } else if (z2_size != 0) {
    scalarLB_tmp = z2_size;
  } else {
    scalarLB_tmp = I_size[0];
  }
  c_st.site = &qe_emlrtRSI;
  if ((I_size[0] != scalarLB_tmp) && ((I_size[0] != 0) && (I_size[1] != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &cb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if ((z2_size != scalarLB_tmp) && (z2_size != 0)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &cb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  empty_non_axis_sizes = (scalarLB_tmp == 0);
  if (empty_non_axis_sizes || sizes_idx_1_tmp) {
    input_sizes_idx_1 = static_cast<int8_T>(I_size[1]);
  } else {
    input_sizes_idx_1 = 0;
  }
  input_sizes_idx_0_tmp = static_cast<int8_T>(scalarLB_tmp);
  if ((I_size[1] == input_sizes_idx_1) && (scalarLB_tmp == I_size[0])) {
    reshapes[0].f1.size[1] = input_sizes_idx_1;
    reshapes[0].f1.size[0] = scalarLB_tmp;
    loop_ub = input_sizes_idx_1 * scalarLB_tmp;
    for (i = 0; i < loop_ub; i++) {
      reshapes[0].f1.data[i] = I_data[i];
    }
  } else {
    i = 0;
    i1 = 0;
    loop_ub_tmp = 0;
    vectorUB_tmp = 0;
    reshapes[0].f1.size[1] = input_sizes_idx_1;
    reshapes[0].f1.size[0] = scalarLB_tmp;
    for (loop_ub = 0; loop_ub < input_sizes_idx_0_tmp * input_sizes_idx_1;
         loop_ub++) {
      reshapes[0].f1.data[i1 + reshapes[0].f1.size[1] * i] =
          I_data[vectorUB_tmp + I_size[1] * loop_ub_tmp];
      i++;
      loop_ub_tmp++;
      if (i > reshapes[0].f1.size[0] - 1) {
        i = 0;
        i1++;
      }
      if (loop_ub_tmp > I_size[0] - 1) {
        loop_ub_tmp = 0;
        vectorUB_tmp++;
      }
    }
  }
  if (empty_non_axis_sizes || (z2_size != 0)) {
    input_sizes_idx_1 = 1;
  } else {
    input_sizes_idx_1 = 0;
  }
  i = 0;
  i1 = 0;
  reshapes[1].f1.size[1] = input_sizes_idx_1;
  reshapes[1].f1.size[0] = scalarLB_tmp;
  for (loop_ub_tmp = 0; loop_ub_tmp < input_sizes_idx_0_tmp * input_sizes_idx_1;
       loop_ub_tmp++) {
    reshapes[1].f1.data[i1 + reshapes[1].f1.size[1] * i] =
        z2Normalized_data[loop_ub_tmp];
    i++;
    if (i > reshapes[1].f1.size[0] - 1) {
      i = 0;
      i1++;
    }
  }
  y = reshapes[0].f1.size[1] + reshapes[1].f1.size[1];
  loop_ub = reshapes[0].f1.size[0];
  b_y = reshapes[0].f1.size[0];
  for (i = 0; i < loop_ub; i++) {
    scalarLB_tmp = reshapes[0].f1.size[1];
    for (i1 = 0; i1 < scalarLB_tmp; i1++) {
      result_data[i1 + y * i] =
          reshapes[0].f1.data[i1 + reshapes[0].f1.size[1] * i];
    }
  }
  loop_ub = reshapes[1].f1.size[0];
  for (i = 0; i < loop_ub; i++) {
    scalarLB_tmp = reshapes[1].f1.size[1];
    if (scalarLB_tmp - 1 >= 0) {
      result_data[reshapes[0].f1.size[1] + y * i] =
          reshapes[1].f1.data[reshapes[1].f1.size[1] * i];
    }
  }
  st.site = &ne_emlrtRSI;
  if (z2_size - 1 >= 0) {
    std::copy(&z2Normalized_data[0], &z2Normalized_data[z2_size],
              &varargin_2_data[0]);
  }
  varargin_2_data[z2_size] = 1.0 / epsilon;
  b_st.site = &pe_emlrtRSI;
  sizes_idx_1_tmp = ((reshapes[0].f1.size[0] != 0) && (y != 0));
  if (sizes_idx_1_tmp) {
    input_sizes_idx_1 = static_cast<int8_T>(y);
  } else {
    input_sizes_idx_1 = static_cast<int8_T>(z2_size + 1);
  }
  c_st.site = &qe_emlrtRSI;
  if ((y != input_sizes_idx_1) && ((reshapes[0].f1.size[0] != 0) && (y != 0))) {
    emlrtErrorWithMessageIdR2018a(&c_st, &cb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (z2_size + 1 != input_sizes_idx_1) {
    emlrtErrorWithMessageIdR2018a(&c_st, &cb_emlrtRTEI,
                                  "MATLAB:catenate:matrixDimensionMismatch",
                                  "MATLAB:catenate:matrixDimensionMismatch", 0);
  }
  if (sizes_idx_1_tmp) {
    input_sizes_idx_0_tmp = static_cast<int8_T>(b_y);
  } else {
    input_sizes_idx_0_tmp = 0;
  }
  if ((y == input_sizes_idx_1) && (input_sizes_idx_0_tmp == b_y)) {
    reshapes[0].f1.size[1] = input_sizes_idx_1;
    reshapes[0].f1.size[0] = input_sizes_idx_0_tmp;
    loop_ub = input_sizes_idx_1 * input_sizes_idx_0_tmp;
    for (i = 0; i < loop_ub; i++) {
      reshapes[0].f1.data[i] = result_data[i];
    }
  } else {
    i = 0;
    i1 = 0;
    loop_ub_tmp = 0;
    vectorUB_tmp = 0;
    reshapes[0].f1.size[1] = input_sizes_idx_1;
    reshapes[0].f1.size[0] = input_sizes_idx_0_tmp;
    for (loop_ub = 0; loop_ub < input_sizes_idx_0_tmp * input_sizes_idx_1;
         loop_ub++) {
      reshapes[0].f1.data[i1 + reshapes[0].f1.size[1] * i] =
          result_data[vectorUB_tmp + y * loop_ub_tmp];
      i++;
      loop_ub_tmp++;
      if (i > reshapes[0].f1.size[0] - 1) {
        i = 0;
        i1++;
      }
      if (loop_ub_tmp > b_y - 1) {
        loop_ub_tmp = 0;
        vectorUB_tmp++;
      }
    }
  }
  if (z2_size + 1 == input_sizes_idx_1) {
    reshapes[1].f1.size[1] = input_sizes_idx_1;
    reshapes[1].f1.size[0] = 1;
    loop_ub = input_sizes_idx_1;
    for (i = 0; i < loop_ub; i++) {
      reshapes[1].f1.data[i] = varargin_2_data[i];
    }
  } else {
    i = 0;
    reshapes[1].f1.size[1] = input_sizes_idx_1;
    reshapes[1].f1.size[0] = 1;
    for (i1 = 0; i1 < input_sizes_idx_1; i1++) {
      reshapes[1].f1.data[i] = varargin_2_data[i1];
      i++;
    }
  }
  //  Multiply by the scalar epsilon / (epsilon^2 + 1)
  st.site = &oe_emlrtRSI;
  b_st.site = &bb_emlrtRSI;
  normZ2 = epsilon / (epsilon * epsilon + 1.0);
  loop_ub = reshapes[0].f1.size[1];
  resultMatrix_size[1] = reshapes[0].f1.size[1];
  resultMatrix_size[0] = reshapes[0].f1.size[0] + 1;
  loop_ub_tmp = reshapes[0].f1.size[0];
  for (i = 0; i < loop_ub_tmp; i++) {
    scalarLB_tmp = (reshapes[0].f1.size[1] / 2) << 1;
    vectorUB_tmp = scalarLB_tmp - 2;
    for (i1 = 0; i1 <= vectorUB_tmp; i1 += 2) {
      r = _mm_loadu_pd(&reshapes[0].f1.data[i1 + reshapes[0].f1.size[1] * i]);
      _mm_storeu_pd(&resultMatrix_data[i1 + resultMatrix_size[1] * i],
                    _mm_mul_pd(_mm_set1_pd(normZ2), r));
    }
    for (i1 = scalarLB_tmp; i1 < loop_ub; i1++) {
      resultMatrix_data[i1 + resultMatrix_size[1] * i] =
          normZ2 * reshapes[0].f1.data[i1 + reshapes[0].f1.size[1] * i];
    }
  }
  loop_ub = reshapes[1].f1.size[1];
  scalarLB_tmp = (reshapes[1].f1.size[1] / 2) << 1;
  vectorUB_tmp = scalarLB_tmp - 2;
  for (i = 0; i <= vectorUB_tmp; i += 2) {
    r = _mm_loadu_pd(&reshapes[1].f1.data[i]);
    _mm_storeu_pd(&resultMatrix_data[i + resultMatrix_size[1] * loop_ub_tmp],
                  _mm_mul_pd(_mm_set1_pd(normZ2), r));
  }
  for (i = scalarLB_tmp; i < loop_ub; i++) {
    resultMatrix_data[i + resultMatrix_size[1] * loop_ub_tmp] =
        normZ2 * reshapes[1].f1.data[i];
  }
}

void dev_jacob_soc(const emlrtStack &sp, const real_T v_data[], int32_T v_size,
                   real_T epsilon, const real_T P_data[], int32_T P_size,
                   real_T alpha, real_T Q_out_data[], int32_T Q_out_size[2],
                   real_T Q_inv_data[], int32_T Q_inv_size[2])
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  creal_T b_tmp_data[121];
  creal_T tmp_data[121];
  creal_T d_tmp_data[11];
  creal_T lambda_data[11];
  creal_T y_data[11];
  real_T J_data[121];
  real_T lambda_between_data[11];
  real_T z2_data[10];
  real_T br;
  real_T im;
  int32_T J_size[2];
  int32_T Q_size[2];
  int32_T lambda_between[2];
  int32_T b_loop_ub;
  int32_T c_loop_ub;
  int32_T loop_ub;
  int32_T y_size;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (v_size < 1) {
    emlrtDynamicBoundsCheckR2012b(v_size, 1, v_size, &sd_emlrtBCI,
                                  (emlrtConstCTX)&sp);
  }
  if (v_size - 1 < 1) {
    loop_ub = 0;
  } else {
    if ((v_size - 1 < 1) || (v_size - 1 > v_size)) {
      emlrtDynamicBoundsCheckR2012b(v_size - 1, 1, v_size, &td_emlrtBCI,
                                    (emlrtConstCTX)&sp);
    }
    loop_ub = v_size - 1;
  }
  lambda_between[0] = 1;
  lambda_between[1] = loop_ub;
  st.site = &ee_emlrtRSI;
  coder::internal::indexShapeCheck(st, v_size, lambda_between);
  if (loop_ub - 1 >= 0) {
    std::copy(&v_data[0], &v_data[loop_ub], &z2_data[0]);
  }
  if (loop_ub == 0) {
    im = 0.0;
  } else {
    n_t = (ptrdiff_t)loop_ub;
    incx_t = (ptrdiff_t)1;
    im = dnrm2(&n_t, &z2_data[0], &incx_t);
  }
  br = v_data[v_size - 1];
  if (epsilon * br >= im) {
    y_size = P_size;
    b_loop_ub = (P_size / 2) << 1;
    c_loop_ub = b_loop_ub - 2;
    for (int32_T i{0}; i <= c_loop_ub; i += 2) {
      _mm_storeu_pd(
          &lambda_between_data[i],
          _mm_div_pd(_mm_set1_pd(1.0),
                     _mm_mul_pd(_mm_set1_pd(alpha), _mm_loadu_pd(&P_data[i]))));
    }
    for (int32_T i{b_loop_ub}; i < P_size; i++) {
      lambda_between_data[i] = 1.0 / (alpha * P_data[i]);
    }
    st.site = &fe_emlrtRSI;
    coder::b_sqrt(st, lambda_between_data, y_size);
    Q_out_size[1] = y_size;
    Q_out_size[0] = y_size;
    b_loop_ub = y_size * y_size;
    if (b_loop_ub - 1 >= 0) {
      std::memset(&Q_out_data[0], 0,
                  static_cast<uint32_T>(b_loop_ub) * sizeof(real_T));
    }
    for (c_loop_ub = 0; c_loop_ub < y_size; c_loop_ub++) {
      Q_out_data[c_loop_ub + y_size * c_loop_ub] =
          lambda_between_data[c_loop_ub];
    }
    Q_inv_size[1] = y_size;
    Q_inv_size[0] = y_size;
    if (b_loop_ub - 1 >= 0) {
      std::copy(&Q_out_data[0], &Q_out_data[b_loop_ub], &Q_inv_data[0]);
    }
  } else if (br <= -epsilon * im) {
    Q_out_size[1] = v_size;
    Q_out_size[0] = v_size;
    b_loop_ub = v_size * v_size;
    Q_inv_size[1] = v_size;
    Q_inv_size[0] = v_size;
    if (b_loop_ub - 1 >= 0) {
      std::memset(&Q_out_data[0], 0,
                  static_cast<uint32_T>(b_loop_ub) * sizeof(real_T));
      std::memset(&Q_inv_data[0], 0,
                  static_cast<uint32_T>(b_loop_ub) * sizeof(real_T));
    }
  } else {
    creal_T Q_data[121];
    creal_T c_tmp_data[11];
    real_T b_J_data[121];
    real_T lambda_inv_data[11];
    real_T bi;
    real_T brm;
    real_T re;
    int32_T tmp_size[2];
    int32_T d_loop_ub;
    st.site = &ge_emlrtRSI;
    constructMatrix(st, br, z2_data, loop_ub, epsilon, J_data, lambda_between);
    loop_ub = lambda_between[0];
    J_size[1] = lambda_between[0];
    d_loop_ub = lambda_between[1];
    J_size[0] = lambda_between[1];
    for (int32_T i{0}; i < d_loop_ub; i++) {
      for (int32_T k{0}; k < loop_ub; k++) {
        b_J_data[k + J_size[1] * i] = J_data[i + lambda_between[1] * k];
      }
    }
    st.site = &he_emlrtRSI;
    coder::eig(st, b_J_data, J_size, tmp_data, lambda_between, b_tmp_data,
               tmp_size);
    loop_ub = lambda_between[0];
    Q_size[1] = lambda_between[0];
    d_loop_ub = lambda_between[1];
    Q_size[0] = lambda_between[1];
    for (int32_T i{0}; i < d_loop_ub; i++) {
      for (int32_T k{0}; k < loop_ub; k++) {
        Q_data[k + Q_size[1] * i] = tmp_data[i + lambda_between[1] * k];
      }
    }
    // J = QlambdaQ'
    b_loop_ub = tmp_size[0];
    lambda_between[1] = tmp_size[0];
    c_loop_ub = tmp_size[1];
    lambda_between[0] = tmp_size[1];
    for (int32_T i{0}; i < c_loop_ub; i++) {
      for (int32_T k{0}; k < b_loop_ub; k++) {
        tmp_data[k + lambda_between[1] * i] = b_tmp_data[i + tmp_size[1] * k];
      }
    }
    st.site = &ie_emlrtRSI;
    b_loop_ub = coder::diag(st, tmp_data, lambda_between, lambda_data);
    for (int32_T i{0}; i < b_loop_ub; i++) {
      c_tmp_data[i].re = alpha * lambda_data[i].re;
      c_tmp_data[i].im = alpha * lambda_data[i].im;
    }
    if ((b_loop_ub != P_size) && ((b_loop_ub != 1) && (P_size != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_loop_ub, P_size, &bc_emlrtECI,
                                  (emlrtConstCTX)&sp);
    }
    if (b_loop_ub == P_size) {
      c_loop_ub = b_loop_ub;
      for (int32_T i{0}; i < b_loop_ub; i++) {
        im = P_data[i];
        d_tmp_data[i].re = im * c_tmp_data[i].re;
        d_tmp_data[i].im = im * c_tmp_data[i].im;
      }
    } else {
      c_loop_ub = times(d_tmp_data, c_tmp_data, b_loop_ub, P_data, P_size);
    }
    if ((b_loop_ub != c_loop_ub) && ((b_loop_ub != 1) && (c_loop_ub != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_loop_ub, c_loop_ub, &cc_emlrtECI,
                                  (emlrtConstCTX)&sp);
    }
    st.site = &je_emlrtRSI;
    if (b_loop_ub == c_loop_ub) {
      y_size = b_loop_ub;
      for (int32_T i{0}; i < b_loop_ub; i++) {
        y_data[i].re = (1.0 - lambda_data[i].re) + d_tmp_data[i].re;
        y_data[i].im = (0.0 - lambda_data[i].im) + d_tmp_data[i].im;
      }
    } else {
      y_size = binary_expand_op_22(y_data, lambda_data, b_loop_ub, d_tmp_data,
                                   c_loop_ub);
    }
    b_st.site = &vc_emlrtRSI;
    c_st.site = &wc_emlrtRSI;
    if ((b_loop_ub != 1) && (y_size != 1) && (b_loop_ub != y_size)) {
      emlrtErrorWithMessageIdR2018a(&c_st, &u_emlrtRTEI,
                                    "MATLAB:sizeDimensionsMustMatch",
                                    "MATLAB:sizeDimensionsMustMatch", 0);
    }
    if (b_loop_ub == y_size) {
      y_size = b_loop_ub;
      for (int32_T i{0}; i < b_loop_ub; i++) {
        real_T ai;
        real_T ar;
        ar = lambda_data[i].re;
        ai = lambda_data[i].im;
        br = y_data[i].re;
        bi = y_data[i].im;
        if (bi == 0.0) {
          if (ai == 0.0) {
            re = ar / br;
            im = 0.0;
          } else if (ar == 0.0) {
            re = 0.0;
            im = ai / br;
          } else {
            re = ar / br;
            im = ai / br;
          }
        } else if (br == 0.0) {
          if (ar == 0.0) {
            re = ai / bi;
            im = 0.0;
          } else if (ai == 0.0) {
            re = 0.0;
            im = -(ar / bi);
          } else {
            re = ai / bi;
            im = -(ar / bi);
          }
        } else {
          brm = muDoubleScalarAbs(br);
          im = muDoubleScalarAbs(bi);
          if (brm > im) {
            im = bi / br;
            br += im * bi;
            re = (ar + im * ai) / br;
            im = (ai - im * ar) / br;
          } else if (im == brm) {
            if (br > 0.0) {
              br = 0.5;
            } else {
              br = -0.5;
            }
            if (bi > 0.0) {
              im = 0.5;
            } else {
              im = -0.5;
            }
            re = (ar * br + ai * im) / brm;
            im = (ai * br - ar * im) / brm;
          } else {
            im = br / bi;
            br = bi + im * br;
            re = (im * ar + ai) / br;
            im = (im * ai - ar) / br;
          }
        }
        y_data[i].re = re;
        y_data[i].im = im;
      }
    } else {
      rdivide(y_data, y_size, lambda_data, b_loop_ub);
    }
    if (y_size != 0) {
      for (int32_T k{0}; k < y_size; k++) {
        lambda_between_data[k] =
            muDoubleScalarHypot(y_data[k].re, y_data[k].im);
      }
    }
    st.site = &je_emlrtRSI;
    coder::b_sqrt(st, lambda_between_data, y_size);
    if ((b_loop_ub != P_size) && ((b_loop_ub != 1) && (P_size != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_loop_ub, P_size, &dc_emlrtECI,
                                  (emlrtConstCTX)&sp);
    }
    if ((b_loop_ub != c_loop_ub) && ((b_loop_ub != 1) && (c_loop_ub != 1))) {
      emlrtDimSizeImpxCheckR2021b(b_loop_ub, c_loop_ub, &ec_emlrtECI,
                                  (emlrtConstCTX)&sp);
    }
    if (b_loop_ub == c_loop_ub) {
      for (int32_T i{0}; i < b_loop_ub; i++) {
        br = (1.0 - lambda_data[i].re) + d_tmp_data[i].re;
        bi = (0.0 - lambda_data[i].im) + d_tmp_data[i].im;
        if (bi == 0.0) {
          re = 1.0 / br;
          im = 0.0;
        } else if (br == 0.0) {
          re = 0.0;
          im = -(1.0 / bi);
        } else {
          brm = muDoubleScalarAbs(br);
          im = muDoubleScalarAbs(bi);
          if (brm > im) {
            im = bi / br;
            br += im * bi;
            re = (im * 0.0 + 1.0) / br;
            im = (0.0 - im) / br;
          } else if (im == brm) {
            if (br > 0.0) {
              br = 0.5;
            } else {
              br = -0.5;
            }
            if (bi > 0.0) {
              im = 0.5;
            } else {
              im = -0.5;
            }
            re = (br + 0.0 * im) / brm;
            im = (0.0 * br - im) / brm;
          } else {
            im = br / bi;
            br = bi + im * br;
            re = im / br;
            im = (im * 0.0 - 1.0) / br;
          }
        }
        lambda_data[i].re = re;
        lambda_data[i].im = im;
      }
    } else {
      binary_expand_op_21(lambda_data, b_loop_ub, d_tmp_data, c_loop_ub);
    }
    if (b_loop_ub != 0) {
      for (int32_T k{0}; k < b_loop_ub; k++) {
        lambda_inv_data[k] =
            muDoubleScalarHypot(lambda_data[k].re, lambda_data[k].im);
      }
    }
    st.site = &ke_emlrtRSI;
    coder::b_sqrt(st, lambda_inv_data, b_loop_ub);
    if ((loop_ub != b_loop_ub) && ((loop_ub != 1) && (b_loop_ub != 1))) {
      emlrtDimSizeImpxCheckR2021b(loop_ub, b_loop_ub, &fc_emlrtECI,
                                  (emlrtConstCTX)&sp);
    }
    if (Q_size[1] == b_loop_ub) {
      Q_inv_size[1] = loop_ub;
      Q_inv_size[0] = d_loop_ub;
      for (int32_T i{0}; i < d_loop_ub; i++) {
        for (int32_T k{0}; k < loop_ub; k++) {
          Q_inv_data[k + loop_ub * i] =
              Q_data[k + Q_size[1] * i].re * lambda_inv_data[k];
        }
      }
    } else {
      binary_expand_op_19(Q_inv_data, Q_inv_size, Q_data, Q_size,
                          lambda_inv_data, b_loop_ub);
    }
    // check the shape of lmbda_inv
    loop_ub = Q_size[1];
    if ((Q_size[1] != y_size) && ((Q_size[1] != 1) && (y_size != 1))) {
      emlrtDimSizeImpxCheckR2021b(Q_size[1], y_size, &gc_emlrtECI,
                                  (emlrtConstCTX)&sp);
    }
    if (Q_size[1] == y_size) {
      Q_out_size[1] = Q_size[1];
      d_loop_ub = Q_size[0];
      Q_out_size[0] = Q_size[0];
      for (int32_T i{0}; i < d_loop_ub; i++) {
        for (int32_T k{0}; k < loop_ub; k++) {
          Q_out_data[k + Q_out_size[1] * i] =
              Q_data[k + Q_size[1] * i].re * lambda_between_data[k];
        }
      }
    } else {
      binary_expand_op_19(Q_out_data, Q_out_size, Q_data, Q_size,
                          lambda_between_data, y_size);
    }
    // Q.* v'
  }
}

// End of code generation (dev_jacob_soc.cpp)
