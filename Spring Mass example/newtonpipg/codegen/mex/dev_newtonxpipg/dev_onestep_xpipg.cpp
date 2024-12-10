//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_onestep_xpipg.cpp
//
// Code generation for function 'dev_onestep_xpipg'
//

// Include files
#include "dev_onestep_xpipg.h"
#include "dev_HZ.h"
#include "dev_HtZ.h"
#include "eml_int_forloop_overflow_check.h"
#include "eml_mtimes_helper.h"
#include "ixfun.h"
#include "rt_nonfinite.h"
#include "sparse.h"
#include "coder_array.h"
#include "mwmathutil.h"

// Variable Definitions
static emlrtRSInfo jb_emlrtRSI{
    6,                   // lineNo
    "dev_onestep_xpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pathName
};

static emlrtRSInfo kb_emlrtRSI{
    7,                   // lineNo
    "dev_onestep_xpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pathName
};

static emlrtRSInfo lb_emlrtRSI{
    292,           // lineNo
    "sparse/plus", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtRSInfo mb_emlrtRSI{
    161,            // lineNo
    "sparse/binOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo nb_emlrtRSI{
    411,                     // lineNo
    "sparseFullEqsizeBinOp", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pathName
};

static emlrtRSInfo ob_emlrtRSI{
    20,                               // lineNo
    "eml_int_forloop_overflow_check", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_"
    "overflow_check.m" // pathName
};

static emlrtRSInfo pb_emlrtRSI{
    15,    // lineNo
    "min", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" // pathName
};

static emlrtRSInfo
    qb_emlrtRSI{
        31,         // lineNo
        "minOrMax", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo
    rb_emlrtRSI{
        67,         // lineNo
        "minimum2", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo sb_emlrtRSI{
    63,               // lineNo
    "binaryMinOrMax", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\binaryMinOrMax.m" // pathName
};

static emlrtRSInfo tb_emlrtRSI{
    57,      // lineNo
    "ixfun", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" // pathName
};

static emlrtRSInfo ub_emlrtRSI{
    102,                          // lineNo
    "binaryImplicitExpansionFun", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" // pathName
};

static emlrtRSInfo vb_emlrtRSI{
    15,    // lineNo
    "max", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\max.m" // pathName
};

static emlrtRSInfo
    wb_emlrtRSI{
        29,         // lineNo
        "minOrMax", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo
    xb_emlrtRSI{
        58,         // lineNo
        "maximum2", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo yb_emlrtRSI{
    297,            // lineNo
    "sparse/minus", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\sparse.m" // pathName
};

static emlrtECInfo h_emlrtECI{
    1,                   // nDims
    6,                   // lineNo
    41,                  // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtECInfo i_emlrtECI{
    1,                   // nDims
    6,                   // lineNo
    27,                  // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtECInfo j_emlrtECI{
    1,                   // nDims
    7,                   // lineNo
    30,                  // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtECInfo k_emlrtECI{
    1,                   // nDims
    7,                   // lineNo
    5,                   // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtECInfo l_emlrtECI{
    1,                   // nDims
    9,                   // lineNo
    7,                   // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtECInfo m_emlrtECI{
    1,                   // nDims
    9,                   // lineNo
    19,                  // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtECInfo n_emlrtECI{
    1,                   // nDims
    9,                   // lineNo
    6,                   // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtECInfo o_emlrtECI{
    1,                   // nDims
    10,                  // lineNo
    8,                   // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtECInfo p_emlrtECI{
    1,                   // nDims
    11,                  // lineNo
    9,                   // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtECInfo q_emlrtECI{
    1,                   // nDims
    12,                  // lineNo
    5,                   // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtRTEInfo i_emlrtRTEI{
    59,             // lineNo
    27,             // colNo
    "sparse/binOp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pName
};

static emlrtRTEInfo tb_emlrtRTEI{
    6,                   // lineNo
    41,                  // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtRTEInfo ub_emlrtRTEI{
    125,     // lineNo
    5,       // colNo
    "binOp", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\shared\\coder\\coder\\+coder\\+internal\\@"
    "sparse\\binOp.m" // pName
};

static emlrtRTEInfo vb_emlrtRTEI{
    6,                   // lineNo
    27,                  // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtRTEInfo wb_emlrtRTEI{
    15,    // lineNo
    5,     // colNo
    "min", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" // pName
};

static emlrtRTEInfo xb_emlrtRTEI{
    6,                   // lineNo
    1,                   // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtRTEInfo yb_emlrtRTEI{
    7,                   // lineNo
    30,                  // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtRTEInfo ac_emlrtRTEI{
    9,                   // lineNo
    7,                   // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtRTEInfo bc_emlrtRTEI{
    9,                   // lineNo
    19,                  // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtRTEInfo cc_emlrtRTEI{
    9,                   // lineNo
    1,                   // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtRTEInfo dc_emlrtRTEI{
    10,                  // lineNo
    8,                   // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtRTEInfo ec_emlrtRTEI{
    11,                  // lineNo
    9,                   // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtRTEInfo fc_emlrtRTEI{
    11,                  // lineNo
    28,                  // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtRTEInfo gc_emlrtRTEI{
    12,                  // lineNo
    5,                   // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtRTEInfo hc_emlrtRTEI{
    12,                  // lineNo
    22,                  // colNo
    "dev_onestep_xpipg", // fName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pName
};

static emlrtRSInfo jd_emlrtRSI{
    12,                  // lineNo
    "dev_onestep_xpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pathName
};

static emlrtRSInfo kd_emlrtRSI{
    11,                  // lineNo
    "dev_onestep_xpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pathName
};

static emlrtRSInfo ld_emlrtRSI{
    10,                  // lineNo
    "dev_onestep_xpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pathName
};

static emlrtRSInfo
    md_emlrtRSI{
        76,                  // lineNo
        "eml_mtimes_helper", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2022b\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pathName
    };

static emlrtRSInfo nd_emlrtRSI{
    9,                   // lineNo
    "dev_onestep_xpipg", // fcnName
    "C:\\Users\\dayou\\OneDrive\\Documents\\MATLAB\\Newtonpipg+"
    "paper\\newtonpipg\\dev_onestep_xpipg.m" // pathName
};

// Function Declarations
static void b_binary_expand_op(const emlrtStack *sp,
                               coder::array<real_T, 1U> &in1,
                               const coder::array<boolean_T, 1U> &in2,
                               const coder::array<boolean_T, 1U> &in3);

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 1U> &in1,
                             const emlrtRSInfo in2, const real_T in3[1024],
                             const real_T in4[512],
                             const coder::array<real_T, 1U> &in5,
                             const coder::array<real_T, 1U> &in6);

static void eq(const emlrtStack *sp, coder::array<boolean_T, 1U> &in1,
               const coder::array<real_T, 1U> &in2, const real_T in3_data[],
               const int32_T *in3_size);

static void minus(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                  const coder::array<real_T, 1U> &in2);

static void plus(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                 const coder::array<real_T, 1U> &in2);

static void times(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                  const real_T in2_data[], const int32_T *in2_size,
                  const coder::array<real_T, 1U> &in3);

// Function Definitions
static void b_binary_expand_op(const emlrtStack *sp,
                               coder::array<real_T, 1U> &in1,
                               const coder::array<boolean_T, 1U> &in2,
                               const coder::array<boolean_T, 1U> &in3)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    i = in2.size(0);
  } else {
    i = in3.size(0);
  }
  in1.set_size(&cc_emlrtRTEI, sp, i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] = static_cast<real_T>(in2[i * stride_0_0]) +
             static_cast<real_T>(in3[i * stride_1_0]);
  }
}

static void binary_expand_op(const emlrtStack *sp,
                             coder::array<real_T, 1U> &in1,
                             const emlrtRSInfo in2, const real_T in3[1024],
                             const real_T in4[512],
                             const coder::array<real_T, 1U> &in5,
                             const coder::array<real_T, 1U> &in6)
{
  coder::array<real_T, 1U> b_in5;
  emlrtStack st;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in6.size(0) == 1) {
    i = in5.size(0);
  } else {
    i = in6.size(0);
  }
  b_in5.set_size(&yb_emlrtRTEI, sp, i);
  stride_0_0 = (in5.size(0) != 1);
  stride_1_0 = (in6.size(0) != 1);
  if (in6.size(0) == 1) {
    loop_ub = in5.size(0);
  } else {
    loop_ub = in6.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in5[i] = in5[i * stride_0_0] - in6[i * stride_1_0];
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  dev_HZ(&st, in3, in4, b_in5, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void eq(const emlrtStack *sp, coder::array<boolean_T, 1U> &in1,
               const coder::array<real_T, 1U> &in2, const real_T in3_data[],
               const int32_T *in3_size)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (*in3_size == 1) {
    i = in2.size(0);
  } else {
    i = *in3_size;
  }
  in1.set_size(&bc_emlrtRTEI, sp, i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (*in3_size != 1);
  if (*in3_size == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = *in3_size;
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_0] == in3_data[i * stride_1_0]);
  }
}

static void minus(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                  const coder::array<real_T, 1U> &in2)
{
  coder::array<real_T, 1U> b_in2;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in1.size(0) == 1) {
    i = in2.size(0);
  } else {
    i = in1.size(0);
  }
  b_in2.set_size(&vb_emlrtRTEI, sp, i);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in1.size(0) != 1);
  if (in1.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in1.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in2[i] = in2[i * stride_0_0] - in1[i * stride_1_0];
  }
  in1.set_size(&vb_emlrtRTEI, sp, b_in2.size(0));
  loop_ub = b_in2.size(0);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in2[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void plus(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                 const coder::array<real_T, 1U> &in2)
{
  coder::array<real_T, 1U> b_in1;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  if (in2.size(0) == 1) {
    i = in1.size(0);
  } else {
    i = in2.size(0);
  }
  b_in1.set_size(&gc_emlrtRTEI, sp, i);
  stride_0_0 = (in1.size(0) != 1);
  stride_1_0 = (in2.size(0) != 1);
  if (in2.size(0) == 1) {
    loop_ub = in1.size(0);
  } else {
    loop_ub = in2.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    b_in1[i] = in1[i * stride_0_0] + in2[i * stride_1_0];
  }
  in1.set_size(&gc_emlrtRTEI, sp, b_in1.size(0));
  loop_ub = b_in1.size(0);
  for (i = 0; i < loop_ub; i++) {
    in1[i] = b_in1[i];
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void times(const emlrtStack *sp, coder::array<real_T, 1U> &in1,
                  const real_T in2_data[], const int32_T *in2_size,
                  const coder::array<real_T, 1U> &in3)
{
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    i = *in2_size;
  } else {
    i = in3.size(0);
  }
  in1.set_size(&tb_emlrtRTEI, sp, i);
  stride_0_0 = (*in2_size != 1);
  stride_1_0 = (in3.size(0) != 1);
  if (in3.size(0) == 1) {
    loop_ub = *in2_size;
  } else {
    loop_ub = in3.size(0);
  }
  for (i = 0; i < loop_ub; i++) {
    in1[i] = in2_data[i * stride_0_0] * in3[i * stride_1_0];
  }
}

void dev_onestep_xpipg(
    const emlrtStack *sp, const coder::array<real_T, 1U> &xi,
    const coder::array<real_T, 1U> &eta, real_T alpha, real_T beta, real_T rho,
    const real_T P_diag_data[], int32_T P_diag_size, const real_T A[1024],
    const real_T B[512], const real_T At[1024], const real_T Bt[512],
    const coder::sparse *q, const coder::sparse *g, const real_T zmin_data[],
    int32_T zmin_size, const real_T zmax_data[], int32_T zmax_size,
    coder::array<real_T, 1U> &xi_n, coder::array<real_T, 1U> &eta_n,
    coder::array<real_T, 1U> &Id, coder::array<real_T, 1U> &R)
{
  coder::array<real_T, 1U> S;
  coder::array<real_T, 1U> a;
  coder::array<real_T, 1U> z;
  coder::array<boolean_T, 1U> r;
  coder::array<boolean_T, 1U> r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack st;
  real_T varargin_2;
  int32_T fullRowIncrement;
  int32_T idx;
  int32_T idxInc;
  int32_T y;
  boolean_T x[2];
  boolean_T b_y;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  //  This function calculates an one step PIPG
  //  rho = 1 makes it the conventional parameter.
  // todo
  // change P*xi
  if ((P_diag_size != xi.size(0)) &&
      ((P_diag_size != 1) && (xi.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(P_diag_size, xi.size(0), &h_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if (P_diag_size == xi.size(0)) {
    a.set_size(&tb_emlrtRTEI, sp, P_diag_size);
    for (fullRowIncrement = 0; fullRowIncrement < P_diag_size;
         fullRowIncrement++) {
      a[fullRowIncrement] =
          P_diag_data[fullRowIncrement] * xi[fullRowIncrement];
    }
  } else {
    st.site = &jb_emlrtRSI;
    times(&st, a, P_diag_data, &P_diag_size, xi);
  }
  st.site = &jb_emlrtRSI;
  dev_HtZ(&st, At, Bt, eta, S);
  if ((a.size(0) != S.size(0)) && ((a.size(0) != 1) && (S.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(a.size(0), S.size(0), &h_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  st.site = &jb_emlrtRSI;
  if (a.size(0) == S.size(0)) {
    idxInc = a.size(0);
    for (fullRowIncrement = 0; fullRowIncrement < idxInc; fullRowIncrement++) {
      a[fullRowIncrement] = a[fullRowIncrement] + S[fullRowIncrement];
    }
  } else {
    b_st.site = &jb_emlrtRSI;
    plus(&b_st, a, S);
  }
  b_st.site = &lb_emlrtRSI;
  if ((a.size(0) != 1) && (q->m != 1) && (a.size(0) != q->m)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &i_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  idxInc = a.size(0);
  y = muIntScalarMax_sint32(idxInc, q->m);
  S.set_size(&ub_emlrtRTEI, &b_st, y);
  for (fullRowIncrement = 0; fullRowIncrement < y; fullRowIncrement++) {
    S[fullRowIncrement] = 0.0;
  }
  c_st.site = &mb_emlrtRSI;
  x[0] = (q->m == a.size(0));
  x[1] = true;
  b_y = true;
  idxInc = 0;
  exitg1 = false;
  while ((!exitg1) && (idxInc < 2)) {
    if (!x[idxInc]) {
      b_y = false;
      exitg1 = true;
    } else {
      idxInc++;
    }
  }
  if (b_y) {
    idxInc = 1;
    fullRowIncrement = 1;
  } else {
    idxInc = (q->m != 1);
    fullRowIncrement = (a.size(0) != 1);
  }
  idx = q->colidx[0];
  d_st.site = &nb_emlrtRSI;
  if (y > 2147483646) {
    e_st.site = &ob_emlrtRSI;
    coder::check_forloop_overflow_error(&e_st);
  }
  for (int32_T row{0}; row < y; row++) {
    if ((idx < q->colidx[1]) &&
        ((row + 1 == q->rowidx[idx - 1]) || (idxInc == 0))) {
      S[row] = a[row * fullRowIncrement] + q->d[idx - 1];
      idx += idxInc;
    } else {
      S[row] = a[row * fullRowIncrement];
    }
  }
  idxInc = S.size(0);
  for (fullRowIncrement = 0; fullRowIncrement < idxInc; fullRowIncrement++) {
    S[fullRowIncrement] = alpha * S[fullRowIncrement];
  }
  if ((xi.size(0) != S.size(0)) && ((xi.size(0) != 1) && (S.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(xi.size(0), S.size(0), &i_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  st.site = &jb_emlrtRSI;
  if (xi.size(0) == S.size(0)) {
    S.set_size(&vb_emlrtRTEI, &st, xi.size(0));
    idxInc = xi.size(0);
    for (fullRowIncrement = 0; fullRowIncrement < idxInc; fullRowIncrement++) {
      S[fullRowIncrement] = xi[fullRowIncrement] - S[fullRowIncrement];
    }
  } else {
    b_st.site = &jb_emlrtRSI;
    minus(&b_st, S, xi);
  }
  b_st.site = &pb_emlrtRSI;
  c_st.site = &qb_emlrtRSI;
  d_st.site = &rb_emlrtRSI;
  e_st.site = &sb_emlrtRSI;
  f_st.site = &tb_emlrtRSI;
  if (zmax_size == S.size(0)) {
    a.set_size(&wb_emlrtRTEI, &f_st, zmax_size);
    for (fullRowIncrement = 0; fullRowIncrement < zmax_size;
         fullRowIncrement++) {
      varargin_2 = S[fullRowIncrement];
      a[fullRowIncrement] =
          muDoubleScalarMin(zmax_data[fullRowIncrement], varargin_2);
    }
  } else {
    g_st.site = &ub_emlrtRSI;
    coder::internal::expand_min(&g_st, zmax_data, zmax_size, S, a);
  }
  st.site = &jb_emlrtRSI;
  b_st.site = &vb_emlrtRSI;
  c_st.site = &wb_emlrtRSI;
  d_st.site = &xb_emlrtRSI;
  e_st.site = &sb_emlrtRSI;
  f_st.site = &tb_emlrtRSI;
  if (zmin_size == a.size(0)) {
    z.set_size(&xb_emlrtRTEI, &f_st, zmin_size);
    for (fullRowIncrement = 0; fullRowIncrement < zmin_size;
         fullRowIncrement++) {
      varargin_2 = a[fullRowIncrement];
      z[fullRowIncrement] =
          muDoubleScalarMax(zmin_data[fullRowIncrement], varargin_2);
    }
  } else {
    g_st.site = &ub_emlrtRSI;
    coder::internal::expand_max(&g_st, zmin_data, zmin_size, a, z);
  }
  //  use dev_HtZ function here
  S.set_size(&yb_emlrtRTEI, sp, z.size(0));
  idxInc = z.size(0);
  for (fullRowIncrement = 0; fullRowIncrement < idxInc; fullRowIncrement++) {
    S[fullRowIncrement] = 2.0 * z[fullRowIncrement];
  }
  if ((S.size(0) != xi.size(0)) && ((S.size(0) != 1) && (xi.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(S.size(0), xi.size(0), &j_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  st.site = &kb_emlrtRSI;
  if (S.size(0) == xi.size(0)) {
    idxInc = S.size(0);
    for (fullRowIncrement = 0; fullRowIncrement < idxInc; fullRowIncrement++) {
      S[fullRowIncrement] = S[fullRowIncrement] - xi[fullRowIncrement];
    }
    b_st.site = &kb_emlrtRSI;
    dev_HZ(&b_st, A, B, S, a);
  } else {
    b_st.site = &kb_emlrtRSI;
    binary_expand_op(&b_st, a, kb_emlrtRSI, A, B, S, xi);
  }
  b_st.site = &yb_emlrtRSI;
  if ((a.size(0) != 1) && (g->m != 1) && (a.size(0) != g->m)) {
    emlrtErrorWithMessageIdR2018a(&b_st, &i_emlrtRTEI, "MATLAB:dimagree",
                                  "MATLAB:dimagree", 0);
  }
  idxInc = a.size(0);
  y = muIntScalarMax_sint32(idxInc, g->m);
  S.set_size(&ub_emlrtRTEI, &b_st, y);
  for (fullRowIncrement = 0; fullRowIncrement < y; fullRowIncrement++) {
    S[fullRowIncrement] = 0.0;
  }
  c_st.site = &mb_emlrtRSI;
  x[0] = (g->m == a.size(0));
  x[1] = true;
  b_y = true;
  idxInc = 0;
  exitg1 = false;
  while ((!exitg1) && (idxInc < 2)) {
    if (!x[idxInc]) {
      b_y = false;
      exitg1 = true;
    } else {
      idxInc++;
    }
  }
  if (b_y) {
    idxInc = 1;
    fullRowIncrement = 1;
  } else {
    idxInc = (g->m != 1);
    fullRowIncrement = (a.size(0) != 1);
  }
  idx = g->colidx[0];
  d_st.site = &nb_emlrtRSI;
  if (y > 2147483646) {
    e_st.site = &ob_emlrtRSI;
    coder::check_forloop_overflow_error(&e_st);
  }
  for (int32_T row{0}; row < y; row++) {
    if ((idx < g->colidx[1]) &&
        ((row + 1 == g->rowidx[idx - 1]) || (idxInc == 0))) {
      S[row] = a[row * fullRowIncrement] - g->d[idx - 1];
      idx += idxInc;
    } else {
      S[row] = a[row * fullRowIncrement];
    }
  }
  idxInc = S.size(0);
  for (fullRowIncrement = 0; fullRowIncrement < idxInc; fullRowIncrement++) {
    S[fullRowIncrement] = beta * S[fullRowIncrement];
  }
  if ((eta.size(0) != S.size(0)) && ((eta.size(0) != 1) && (S.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(eta.size(0), S.size(0), &k_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  //  use dev_HZ function here
  //  there is no constraint on the dual variable
  if ((z.size(0) != zmin_size) && ((z.size(0) != 1) && (zmin_size != 1))) {
    emlrtDimSizeImpxCheckR2021b(z.size(0), zmin_size, &l_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if ((z.size(0) != zmax_size) && ((z.size(0) != 1) && (zmax_size != 1))) {
    emlrtDimSizeImpxCheckR2021b(z.size(0), zmax_size, &m_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if (z.size(0) == zmin_size) {
    r.set_size(&ac_emlrtRTEI, sp, z.size(0));
    idxInc = z.size(0);
    for (fullRowIncrement = 0; fullRowIncrement < idxInc; fullRowIncrement++) {
      r[fullRowIncrement] =
          (z[fullRowIncrement] == zmin_data[fullRowIncrement]);
    }
  } else {
    st.site = &nd_emlrtRSI;
    eq(&st, r, z, zmin_data, &zmin_size);
  }
  if (z.size(0) == zmax_size) {
    r1.set_size(&bc_emlrtRTEI, sp, z.size(0));
    idxInc = z.size(0);
    for (fullRowIncrement = 0; fullRowIncrement < idxInc; fullRowIncrement++) {
      r1[fullRowIncrement] =
          (z[fullRowIncrement] == zmax_data[fullRowIncrement]);
    }
  } else {
    st.site = &nd_emlrtRSI;
    eq(&st, r1, z, zmax_data, &zmax_size);
  }
  if ((r.size(0) != r1.size(0)) && ((r.size(0) != 1) && (r1.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(r.size(0), r1.size(0), &n_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if (r.size(0) == r1.size(0)) {
    Id.set_size(&cc_emlrtRTEI, sp, r.size(0));
    idxInc = r.size(0);
    for (fullRowIncrement = 0; fullRowIncrement < idxInc; fullRowIncrement++) {
      Id[fullRowIncrement] = static_cast<real_T>(r[fullRowIncrement]) +
                             static_cast<real_T>(r1[fullRowIncrement]);
    }
  } else {
    st.site = &nd_emlrtRSI;
    b_binary_expand_op(&st, Id, r, r1);
  }
  //  Maybe non-necessary in computing the activated set.
  xi_n.set_size(&dc_emlrtRTEI, sp, xi.size(0));
  idxInc = xi.size(0);
  for (fullRowIncrement = 0; fullRowIncrement < idxInc; fullRowIncrement++) {
    xi_n[fullRowIncrement] = (1.0 - rho) * xi[fullRowIncrement];
  }
  idxInc = z.size(0);
  for (fullRowIncrement = 0; fullRowIncrement < idxInc; fullRowIncrement++) {
    z[fullRowIncrement] = rho * z[fullRowIncrement];
  }
  if ((xi_n.size(0) != z.size(0)) &&
      ((xi_n.size(0) != 1) && (z.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(xi_n.size(0), z.size(0), &o_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if (xi_n.size(0) == z.size(0)) {
    idxInc = xi_n.size(0);
    for (fullRowIncrement = 0; fullRowIncrement < idxInc; fullRowIncrement++) {
      xi_n[fullRowIncrement] = xi_n[fullRowIncrement] + z[fullRowIncrement];
    }
  } else {
    st.site = &ld_emlrtRSI;
    plus(&st, xi_n, z);
  }
  eta_n.set_size(&ec_emlrtRTEI, sp, eta.size(0));
  idxInc = eta.size(0);
  for (fullRowIncrement = 0; fullRowIncrement < idxInc; fullRowIncrement++) {
    eta_n[fullRowIncrement] = (1.0 - rho) * eta[fullRowIncrement];
  }
  if (eta.size(0) == S.size(0)) {
    S.set_size(&fc_emlrtRTEI, sp, eta.size(0));
    idxInc = eta.size(0);
    for (fullRowIncrement = 0; fullRowIncrement < idxInc; fullRowIncrement++) {
      S[fullRowIncrement] = rho * (eta[fullRowIncrement] + S[fullRowIncrement]);
    }
  } else {
    st.site = &md_emlrtRSI;
    binary_expand_op(&st, S, rho, eta);
  }
  if ((eta_n.size(0) != S.size(0)) &&
      ((eta_n.size(0) != 1) && (S.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(eta_n.size(0), S.size(0), &p_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if (eta_n.size(0) == S.size(0)) {
    idxInc = eta_n.size(0);
    for (fullRowIncrement = 0; fullRowIncrement < idxInc; fullRowIncrement++) {
      eta_n[fullRowIncrement] = eta_n[fullRowIncrement] + S[fullRowIncrement];
    }
  } else {
    st.site = &kd_emlrtRSI;
    plus(&st, eta_n, S);
  }
  R.set_size(&gc_emlrtRTEI, sp, xi_n.size(0) + eta_n.size(0));
  idxInc = xi_n.size(0);
  for (fullRowIncrement = 0; fullRowIncrement < idxInc; fullRowIncrement++) {
    R[fullRowIncrement] = -xi_n[fullRowIncrement];
  }
  idxInc = eta_n.size(0);
  for (fullRowIncrement = 0; fullRowIncrement < idxInc; fullRowIncrement++) {
    R[fullRowIncrement + xi_n.size(0)] = -eta_n[fullRowIncrement];
  }
  S.set_size(&hc_emlrtRTEI, sp, xi.size(0) + eta.size(0));
  idxInc = xi.size(0);
  for (fullRowIncrement = 0; fullRowIncrement < idxInc; fullRowIncrement++) {
    S[fullRowIncrement] = xi[fullRowIncrement];
  }
  idxInc = eta.size(0);
  for (fullRowIncrement = 0; fullRowIncrement < idxInc; fullRowIncrement++) {
    S[fullRowIncrement + xi.size(0)] = eta[fullRowIncrement];
  }
  if ((R.size(0) != S.size(0)) && ((R.size(0) != 1) && (S.size(0) != 1))) {
    emlrtDimSizeImpxCheckR2021b(R.size(0), S.size(0), &q_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if (R.size(0) == S.size(0)) {
    idxInc = R.size(0);
    for (fullRowIncrement = 0; fullRowIncrement < idxInc; fullRowIncrement++) {
      R[fullRowIncrement] = R[fullRowIncrement] + S[fullRowIncrement];
    }
  } else {
    st.site = &jd_emlrtRSI;
    plus(&st, R, S);
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

// End of code generation (dev_onestep_xpipg.cpp)
