//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// proj_D_unit_with_affinejacobian.cpp
//
// Code generation for function 'proj_D_unit_with_affinejacobian'
//

// Include files
#include "proj_D_unit_with_affinejacobian.h"
#include "dev_newtonpipg_compare_withtimer_data.h"
#include "indexShapeCheck.h"
#include "ixfun.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "mwmathutil.h"
#include <cstddef>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo lb_emlrtRSI{
    12,                                // lineNo
    "proj_D_unit_with_affinejacobian", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pathName
};

static emlrtRSInfo mb_emlrtRSI{
    14,                                // lineNo
    "proj_D_unit_with_affinejacobian", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pathName
};

static emlrtRSInfo nb_emlrtRSI{
    17,                                // lineNo
    "proj_D_unit_with_affinejacobian", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pathName
};

static emlrtRSInfo ob_emlrtRSI{
    19,                                // lineNo
    "proj_D_unit_with_affinejacobian", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pathName
};

static emlrtRSInfo pb_emlrtRSI{
    2,          // lineNo
    "proj_box", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_box.m" // pathName
};

static emlrtRSInfo qb_emlrtRSI{
    15,    // lineNo
    "min", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" // pathName
};

static emlrtRSInfo
    rb_emlrtRSI{
        31,         // lineNo
        "minOrMax", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo
    sb_emlrtRSI{
        67,         // lineNo
        "minimum2", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo tb_emlrtRSI{
    63,               // lineNo
    "binaryMinOrMax", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\binaryMinOrMax.m" // pathName
};

static emlrtRSInfo ub_emlrtRSI{
    57,      // lineNo
    "ixfun", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" // pathName
};

static emlrtRSInfo vb_emlrtRSI{
    102,                          // lineNo
    "binaryImplicitExpansionFun", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" // pathName
};

static emlrtRSInfo wb_emlrtRSI{
    15,    // lineNo
    "max", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m" // pathName
};

static emlrtRSInfo
    xb_emlrtRSI{
        29,         // lineNo
        "minOrMax", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo
    yb_emlrtRSI{
        58,         // lineNo
        "maximum2", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo ac_emlrtRSI{
    3,          // lineNo
    "proj_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_soc.m" // pathName
};

static emlrtRSInfo bc_emlrtRSI{
    10,         // lineNo
    "proj_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_soc.m" // pathName
};

static emlrtRSInfo cc_emlrtRSI{
    11,         // lineNo
    "proj_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_soc.m" // pathName
};

static emlrtECInfo q_emlrtECI{
    1,           // nDims
    27,          // lineNo
    19,          // colNo
    "jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtECInfo r_emlrtECI{
    1,           // nDims
    27,          // lineNo
    27,          // colNo
    "jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtECInfo s_emlrtECI{
    1,           // nDims
    27,          // lineNo
    20,          // colNo
    "jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtBCInfo q_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    3,          // lineNo
    16,         // colNo
    "v0",       // aName
    "proj_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_soc.m", // pName
    0                   // checkKind
};

static emlrtBCInfo r_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    3,          // lineNo
    13,         // colNo
    "v0",       // aName
    "proj_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_soc.m", // pName
    0                   // checkKind
};

static emlrtBCInfo s_emlrtBCI{
    -1,         // iFirst
    -1,         // iLast
    2,          // lineNo
    13,         // colNo
    "v0",       // aName
    "proj_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_soc.m", // pName
    0                   // checkKind
};

static emlrtECInfo t_emlrtECI{
    -1,                                // nDims
    14,                                // lineNo
    9,                                 // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtBCInfo t_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    14,                                // lineNo
    20,                                // colNo
    "J_af",                            // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo m_emlrtDCI{
    14,                                // lineNo
    20,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo u_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    14,                                // lineNo
    14,                                // colNo
    "J_af",                            // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtECInfo u_emlrtECI{
    -1,                                // nDims
    19,                                // lineNo
    9,                                 // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtBCInfo v_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    19,                                // lineNo
    17,                                // colNo
    "z",                               // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo n_emlrtDCI{
    19,                                // lineNo
    17,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo w_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    19,                                // lineNo
    11,                                // colNo
    "z",                               // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo x_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    19,                                // lineNo
    58,                                // colNo
    "z0",                              // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo o_emlrtDCI{
    19,                                // lineNo
    58,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo y_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    19,                                // lineNo
    52,                                // colNo
    "z0",                              // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtECInfo v_emlrtECI{
    -1,                                // nDims
    17,                                // lineNo
    9,                                 // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtBCInfo ab_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    17,                                // lineNo
    17,                                // colNo
    "z",                               // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo p_emlrtDCI{
    17,                                // lineNo
    17,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo bb_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    17,                                // lineNo
    11,                                // colNo
    "z",                               // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo cb_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    17,                                // lineNo
    59,                                // colNo
    "z0",                              // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo q_emlrtDCI{
    17,                                // lineNo
    59,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo db_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    17,                                // lineNo
    53,                                // colNo
    "z0",                              // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo eb_emlrtBCI{
    1,                                 // iFirst
    11,                                // iLast
    15,                                // lineNo
    42,                                // colNo
    "proj_coefficients",               // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo r_emlrtDCI{
    15,                                // lineNo
    42,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo fb_emlrtBCI{
    1,                                 // iFirst
    11,                                // iLast
    14,                                // lineNo
    109,                               // colNo
    "proj_coefficients",               // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo s_emlrtDCI{
    14,                                // lineNo
    109,                               // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo gb_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    14,                                // lineNo
    62,                                // colNo
    "z0",                              // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo t_emlrtDCI{
    14,                                // lineNo
    62,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo hb_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    14,                                // lineNo
    56,                                // colNo
    "z0",                              // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtECInfo w_emlrtECI{
    -1,                                // nDims
    12,                                // lineNo
    9,                                 // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtBCInfo ib_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    12,                                // lineNo
    17,                                // colNo
    "z",                               // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo u_emlrtDCI{
    12,                                // lineNo
    17,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo jb_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    12,                                // lineNo
    11,                                // colNo
    "z",                               // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo kb_emlrtBCI{
    1,                                 // iFirst
    11,                                // iLast
    13,                                // lineNo
    42,                                // colNo
    "proj_coefficients",               // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo v_emlrtDCI{
    13,                                // lineNo
    42,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo lb_emlrtBCI{
    1,                                 // iFirst
    11,                                // iLast
    12,                                // lineNo
    105,                               // colNo
    "proj_coefficients",               // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo w_emlrtDCI{
    12,                                // lineNo
    105,                               // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo mb_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    12,                                // lineNo
    58,                                // colNo
    "z0",                              // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo x_emlrtDCI{
    12,                                // lineNo
    58,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo nb_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    12,                                // lineNo
    52,                                // colNo
    "z0",                              // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo ob_emlrtBCI{
    1,                                 // iFirst
    11,                                // iLast
    7,                                 // lineNo
    22,                                // colNo
    "proj_index",                      // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo y_emlrtDCI{
    7,                                 // lineNo
    22,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    1                                          // checkKind
};

// Function Declarations
static int32_T binary_expand_op_10(boolean_T in1_data[],
                                   const real_T in2_data[], int32_T in3,
                                   int32_T in4, const real_T in5[22],
                                   int32_T in6, int32_T in7);

static int32_T binary_expand_op_11(boolean_T in1_data[],
                                   const real_T in2_data[], int32_T in3,
                                   int32_T in4, const real_T in5[22],
                                   int32_T in6, int32_T in7);

// Function Definitions
static int32_T binary_expand_op_10(boolean_T in1_data[],
                                   const real_T in2_data[], int32_T in3,
                                   int32_T in4, const real_T in5[22],
                                   int32_T in6, int32_T in7)
{
  int32_T i;
  int32_T in1_size;
  int32_T in7_idx_0;
  int32_T stride_0_0;
  in7_idx_0 = in7 - in6;
  i = in4 - in3;
  if (in7_idx_0 == 1) {
    in1_size = i;
  } else {
    in1_size = in7_idx_0;
  }
  stride_0_0 = (i != 1);
  in7_idx_0 = (in7_idx_0 != 1);
  for (i = 0; i < in1_size; i++) {
    in1_data[i] = (in2_data[in3 + i * stride_0_0] >= in5[in6 + i * in7_idx_0]);
  }
  return in1_size;
}

static int32_T binary_expand_op_11(boolean_T in1_data[],
                                   const real_T in2_data[], int32_T in3,
                                   int32_T in4, const real_T in5[22],
                                   int32_T in6, int32_T in7)
{
  int32_T i;
  int32_T in1_size;
  int32_T in7_idx_0;
  int32_T stride_0_0;
  in7_idx_0 = in7 - in6;
  i = in4 - in3;
  if (in7_idx_0 == 1) {
    in1_size = i;
  } else {
    in1_size = in7_idx_0;
  }
  stride_0_0 = (i != 1);
  in7_idx_0 = (in7_idx_0 != 1);
  for (i = 0; i < in1_size; i++) {
    in1_data[i] =
        (in2_data[in3 + i * stride_0_0] <= in5[(in6 + i * in7_idx_0) + 11]);
  }
  return in1_size;
}

int32_T binary_expand_op_9(real_T in1_data[], const boolean_T in2_data[],
                           const int32_T &in2_size, const boolean_T in3_data[],
                           const int32_T &in3_size)
{
  int32_T in1_size;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3_size == 1) {
    in1_size = in2_size;
  } else {
    in1_size = in3_size;
  }
  stride_0_0 = (in2_size != 1);
  stride_1_0 = (in3_size != 1);
  for (int32_T i{0}; i < in1_size; i++) {
    in1_data[i] = ((!in2_data[i * stride_0_0]) && (!in3_data[i * stride_1_0]));
  }
  return in1_size;
}

int32_T proj_D_unit_with_affinejacobian(const emlrtStack &sp,
                                        const real_T z0_data[], int32_T z0_size,
                                        const real_T proj_index[22],
                                        const real_T proj_coefficients[22],
                                        real_T z_data[], real_T J_af_data[],
                                        int32_T &J_af_size)
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  real_T b_z0_data[11];
  real_T z2_data[10];
  real_T temp;
  int32_T z_size;
  boolean_T b_tmp_data[11];
  boolean_T tmp_data[11];
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  e_st.prev = &d_st;
  e_st.tls = d_st.tls;
  f_st.prev = &e_st;
  f_st.tls = e_st.tls;
  g_st.prev = &f_st;
  g_st.tls = f_st.tls;
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  // compute the projection of z0 at each time grid point
  temp = 1.0;
  z_size = z0_size;
  J_af_size = z0_size;
  if (z0_size - 1 >= 0) {
    std::memset(&z_data[0], 0, static_cast<uint32_T>(z0_size) * sizeof(real_T));
    std::memset(&J_af_data[0], 0,
                static_cast<uint32_T>(z0_size) * sizeof(real_T));
  }
  exitg1 = false;
  while ((!exitg1) && (temp <= z0_size)) {
    real_T d;
    if (temp != static_cast<int32_T>(muDoubleScalarFloor(temp))) {
      emlrtIntegerCheckR2012b(temp, &y_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(temp) < 1) || (static_cast<int32_T>(temp) > 11)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, 11,
                                    &ob_emlrtBCI, (emlrtConstCTX)&sp);
    }
    d = proj_index[static_cast<int32_T>(temp) - 1];
    if (d == rtInf) {
      exitg1 = true;
    } else {
      real_T d1;
      d1 = proj_index[static_cast<int32_T>(temp) + 10];
      if (d1 == 1.0) {
        real_T minval_data[11];
        real_T proj_coefficients_data[11];
        int32_T iv[2];
        int32_T b_loop_ub;
        int32_T i;
        int32_T i1;
        int32_T i2;
        int32_T i3;
        int32_T i4;
        int32_T i5;
        int32_T i6;
        int32_T loop_ub;
        int32_T scalarLB;
        int32_T tmp_size;
        int32_T vectorUB;
        if (temp > d) {
          i = 0;
          i1 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          z0_size, &nb_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &x_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &mb_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d);
        }
        iv[0] = 1;
        loop_ub = i1 - i;
        iv[1] = loop_ub;
        st.site = &lb_emlrtRSI;
        coder::internal::indexShapeCheck(st, z0_size, iv);
        if (temp > d) {
          i1 = 0;
          i3 = 0;
          i4 = 0;
          i5 = 0;
          i6 = 0;
          i2 = 0;
        } else {
          i1 = static_cast<int32_T>(temp) - 1;
          i2 = static_cast<int32_T>(muDoubleScalarFloor(d));
          if (d != i2) {
            emlrtIntegerCheckR2012b(d, &w_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (d > 11.0)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 11,
                                          &lb_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i3 = static_cast<int32_T>(d);
          i4 = static_cast<int32_T>(temp) - 1;
          if (static_cast<int32_T>(d) != i2) {
            emlrtIntegerCheckR2012b(d, &v_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (d > 11.0)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 11,
                                          &kb_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i5 = static_cast<int32_T>(d);
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          z0_size, &jb_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i6 = static_cast<int32_T>(temp) - 1;
          if (static_cast<int32_T>(d) != i2) {
            emlrtIntegerCheckR2012b(d, &u_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &ib_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i2 = static_cast<int32_T>(d);
        }
        st.site = &lb_emlrtRSI;
        b_st.site = &pb_emlrtRSI;
        c_st.site = &qb_emlrtRSI;
        d_st.site = &rb_emlrtRSI;
        e_st.site = &sb_emlrtRSI;
        f_st.site = &tb_emlrtRSI;
        g_st.site = &ub_emlrtRSI;
        scalarLB = i5 - i4;
        if (loop_ub == scalarLB) {
          vectorUB = loop_ub;
          for (i5 = 0; i5 < loop_ub; i5++) {
            minval_data[i5] =
                muDoubleScalarMin(z0_data[i + i5], proj_coefficients[i4 + i5]);
          }
        } else {
          for (i5 = 0; i5 < loop_ub; i5++) {
            b_z0_data[i5] = z0_data[i + i5];
          }
          for (i = 0; i < scalarLB; i++) {
            proj_coefficients_data[i] = proj_coefficients[i4 + i];
          }
          h_st.site = &vb_emlrtRSI;
          vectorUB = coder::internal::expand_min(h_st, b_z0_data, loop_ub,
                                                 proj_coefficients_data,
                                                 scalarLB, minval_data);
        }
        b_st.site = &pb_emlrtRSI;
        c_st.site = &wb_emlrtRSI;
        d_st.site = &xb_emlrtRSI;
        e_st.site = &yb_emlrtRSI;
        f_st.site = &tb_emlrtRSI;
        g_st.site = &ub_emlrtRSI;
        scalarLB = i3 - i1;
        if (scalarLB == vectorUB) {
          tmp_size = scalarLB;
          for (i = 0; i < scalarLB; i++) {
            b_z0_data[i] = muDoubleScalarMax(proj_coefficients[(i1 + i) + 11],
                                             minval_data[i]);
          }
        } else {
          for (i = 0; i < scalarLB; i++) {
            proj_coefficients_data[i] = proj_coefficients[(i1 + i) + 11];
          }
          h_st.site = &vb_emlrtRSI;
          tmp_size = coder::internal::expand_max(h_st, proj_coefficients_data,
                                                 scalarLB, minval_data,
                                                 vectorUB, b_z0_data);
        }
        i = i2 - i6;
        if (i != tmp_size) {
          emlrtSubAssignSizeCheck1dR2017a(i, tmp_size, &w_emlrtECI,
                                          (emlrtConstCTX)&sp);
        }
        loop_ub = static_cast<int8_T>(i);
        for (i = 0; i < loop_ub; i++) {
          z_data[i6 + i] = b_z0_data[i];
        }
        if (temp > d) {
          i = 0;
          i1 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          z0_size, &hb_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &t_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &gb_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d);
        }
        iv[0] = 1;
        loop_ub = i1 - i;
        iv[1] = loop_ub;
        st.site = &mb_emlrtRSI;
        coder::internal::indexShapeCheck(st, z0_size, iv);
        if (temp > d) {
          i2 = 0;
          i4 = 0;
          i5 = 0;
          i6 = 0;
          vectorUB = 0;
          i3 = 0;
        } else {
          i2 = static_cast<int32_T>(temp) - 1;
          i3 = static_cast<int32_T>(muDoubleScalarFloor(d));
          if (d != i3) {
            emlrtIntegerCheckR2012b(d, &s_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (d > 11.0)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 11,
                                          &fb_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i4 = static_cast<int32_T>(d);
          i5 = static_cast<int32_T>(temp) - 1;
          if (static_cast<int32_T>(d) != i3) {
            emlrtIntegerCheckR2012b(d, &r_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (d > 11.0)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 11,
                                          &eb_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i6 = static_cast<int32_T>(d);
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          z0_size, &u_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          vectorUB = static_cast<int32_T>(temp) - 1;
          if (static_cast<int32_T>(d) != i3) {
            emlrtIntegerCheckR2012b(d, &m_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &t_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i3 = static_cast<int32_T>(d);
        }
        st.site = &mb_emlrtRSI;
        scalarLB = i4 - i2;
        if ((loop_ub != scalarLB) && ((loop_ub != 1) && (scalarLB != 1))) {
          emlrtDimSizeImpxCheckR2021b(loop_ub, scalarLB, &s_emlrtECI, &st);
        }
        b_loop_ub = i6 - i5;
        if ((loop_ub != b_loop_ub) && ((loop_ub != 1) && (b_loop_ub != 1))) {
          emlrtDimSizeImpxCheckR2021b(loop_ub, b_loop_ub, &r_emlrtECI, &st);
        }
        if (loop_ub == scalarLB) {
          tmp_size = loop_ub;
          for (i4 = 0; i4 < loop_ub; i4++) {
            tmp_data[i4] =
                (z0_data[i + i4] <= proj_coefficients[(i2 + i4) + 11]);
          }
        } else {
          tmp_size = binary_expand_op_11(tmp_data, z0_data, i, i1,
                                         proj_coefficients, i2, i4);
        }
        if (loop_ub == b_loop_ub) {
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_tmp_data[i1] = (z0_data[i + i1] >= proj_coefficients[i5 + i1]);
          }
        } else {
          loop_ub = binary_expand_op_10(b_tmp_data, z0_data, i, i1,
                                        proj_coefficients, i5, i6);
        }
        if ((tmp_size != loop_ub) && ((tmp_size != 1) && (loop_ub != 1))) {
          emlrtDimSizeImpxCheckR2021b(tmp_size, loop_ub, &q_emlrtECI, &st);
        }
        if (tmp_size == loop_ub) {
          for (i = 0; i < tmp_size; i++) {
            b_z0_data[i] = ((!tmp_data[i]) && (!b_tmp_data[i]));
          }
        } else {
          tmp_size = binary_expand_op_9(b_z0_data, tmp_data, tmp_size,
                                        b_tmp_data, loop_ub);
        }
        i = i3 - vectorUB;
        if (i != tmp_size) {
          emlrtSubAssignSizeCheck1dR2017a(i, tmp_size, &t_emlrtECI,
                                          (emlrtConstCTX)&sp);
        }
        loop_ub = static_cast<int8_T>(i);
        for (i = 0; i < loop_ub; i++) {
          J_af_data[vectorUB + i] = b_z0_data[i];
        }
      } else if (d1 == 2.0) {
        real_T nm;
        int32_T iv[2];
        int32_T i;
        int32_T i1;
        int32_T i2;
        int32_T loop_ub;
        int32_T tmp_size;
        if (temp > d) {
          i = 0;
          i1 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          z0_size, &db_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &q_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &cb_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d);
        }
        iv[0] = 1;
        tmp_size = i1 - i;
        iv[1] = tmp_size;
        st.site = &nb_emlrtRSI;
        coder::internal::indexShapeCheck(st, z0_size, iv);
        if (temp > d) {
          i1 = 0;
          i2 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          z0_size, &bb_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(temp) - 1;
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &p_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &ab_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i2 = static_cast<int32_T>(d);
        }
        for (int32_T i3{0}; i3 < tmp_size; i3++) {
          b_z0_data[i3] = z0_data[i + i3];
        }
        // Projection to a ball center at 0.
        if (tmp_size == 0) {
          nm = 0.0;
        } else {
          n_t = (ptrdiff_t)tmp_size;
          incx_t = (ptrdiff_t)1;
          nm = dnrm2(&n_t, &b_z0_data[0], &incx_t);
        }
        temp = proj_coefficients[static_cast<int32_T>(temp) - 1];
        if (nm > temp) {
          int32_T scalarLB;
          int32_T vectorUB;
          scalarLB = (tmp_size / 2) << 1;
          vectorUB = scalarLB - 2;
          for (int32_T i3{0}; i3 <= vectorUB; i3 += 2) {
            _mm_storeu_pd(&b_z0_data[i3],
                          _mm_mul_pd(_mm_div_pd(_mm_loadu_pd(&z0_data[i + i3]),
                                                _mm_set1_pd(nm)),
                                     _mm_set1_pd(temp)));
          }
          for (int32_T i3{scalarLB}; i3 < tmp_size; i3++) {
            b_z0_data[i3] = z0_data[i + i3] / nm * temp;
          }
        }
        i = i2 - i1;
        if (i != tmp_size) {
          emlrtSubAssignSizeCheck1dR2017a(i, tmp_size, &v_emlrtECI,
                                          (emlrtConstCTX)&sp);
        }
        loop_ub = static_cast<int8_T>(i);
        for (i = 0; i < loop_ub; i++) {
          z_data[i1 + i] = b_z0_data[i];
        }
      } else if (d1 == 3.0) {
        real_T nm2;
        int32_T iv[2];
        int32_T b_loop_ub;
        int32_T i;
        int32_T i1;
        int32_T i2;
        int32_T i3;
        int32_T loop_ub;
        int32_T tmp_size;
        if (temp > d) {
          i = 0;
          i1 = -1;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          z0_size, &y_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &o_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &x_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d) - 1;
        }
        iv[0] = 1;
        loop_ub = i1 - i;
        iv[1] = loop_ub + 1;
        st.site = &ob_emlrtRSI;
        coder::internal::indexShapeCheck(st, z0_size, iv);
        if (temp > d) {
          i2 = 0;
          i3 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          z0_size, &w_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i2 = static_cast<int32_T>(temp) - 1;
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &n_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &v_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i3 = static_cast<int32_T>(d);
        }
        st.site = &ob_emlrtRSI;
        if (loop_ub + 1 < 1) {
          emlrtDynamicBoundsCheckR2012b(loop_ub + 1, 1, loop_ub + 1,
                                        &s_emlrtBCI, &st);
        }
        if (loop_ub < 1) {
          b_loop_ub = 0;
        } else {
          if (loop_ub + 1 < 1) {
            emlrtDynamicBoundsCheckR2012b(1, 1, loop_ub + 1, &r_emlrtBCI, &st);
          }
          if (loop_ub > loop_ub + 1) {
            emlrtDynamicBoundsCheckR2012b(loop_ub, 1, loop_ub + 1, &q_emlrtBCI,
                                          &st);
          }
          b_loop_ub = loop_ub;
        }
        iv[0] = 1;
        iv[1] = b_loop_ub;
        b_st.site = &ac_emlrtRSI;
        coder::internal::indexShapeCheck(b_st, loop_ub + 1, iv);
        for (int32_T i4{0}; i4 < b_loop_ub; i4++) {
          z2_data[i4] = z0_data[static_cast<int8_T>(i) + i4];
        }
        if (b_loop_ub == 0) {
          nm2 = 0.0;
        } else {
          n_t = (ptrdiff_t)b_loop_ub;
          incx_t = (ptrdiff_t)1;
          nm2 = dnrm2(&n_t, &z2_data[0], &incx_t);
        }
        d1 = proj_coefficients[static_cast<int32_T>(temp) - 1];
        if (d1 * z0_data[i1] >= nm2) {
          tmp_size = b_loop_ub + 1;
          for (int32_T i4{0}; i4 < b_loop_ub; i4++) {
            b_z0_data[i4] = z0_data[static_cast<int8_T>(i) + i4];
          }
          b_z0_data[b_loop_ub] = z0_data[i1];
        } else if (z0_data[i1] <= -d1 * nm2) {
          tmp_size = loop_ub + 1;
          if (loop_ub >= 0) {
            std::memset(&b_z0_data[0], 0,
                        static_cast<uint32_T>(loop_ub + 1) * sizeof(real_T));
          }
        } else {
          real_T nm;
          int32_T scalarLB;
          int32_T vectorUB;
          b_st.site = &bc_emlrtRSI;
          c_st.site = &w_emlrtRSI;
          d_st.site = &x_emlrtRSI;
          b_st.site = &cc_emlrtRSI;
          c_st.site = &w_emlrtRSI;
          d_st.site = &x_emlrtRSI;
          nm = d1 * d1 + 1.0;
          temp = d1 / nm * (z0_data[i1] / nm2 + d1);
          tmp_size = b_loop_ub + 1;
          scalarLB = b_loop_ub / 2 * 2;
          vectorUB = scalarLB - 2;
          for (int32_T i4{0}; i4 <= vectorUB; i4 += 2) {
            __m128d r;
            r = _mm_loadu_pd(&z0_data[static_cast<int8_T>(i) + i4]);
            r = _mm_mul_pd(_mm_set1_pd(temp), r);
            _mm_storeu_pd(&b_z0_data[i4], r);
          }
          for (int32_T i4{scalarLB}; i4 < b_loop_ub; i4++) {
            b_z0_data[i4] = temp * z0_data[static_cast<int8_T>(i) + i4];
          }
          b_z0_data[b_loop_ub] = 1.0 / nm * (z0_data[i1] + d1 * nm2);
        }
        i = i3 - i2;
        if (i != tmp_size) {
          emlrtSubAssignSizeCheck1dR2017a(i, tmp_size, &u_emlrtECI,
                                          (emlrtConstCTX)&sp);
        }
        loop_ub = static_cast<int8_T>(i);
        for (i = 0; i < loop_ub; i++) {
          z_data[i2 + i] = b_z0_data[i];
        }
      }
      // update
      temp = d + 1.0;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
  }
  return z_size;
}

// End of code generation (proj_D_unit_with_affinejacobian.cpp)
