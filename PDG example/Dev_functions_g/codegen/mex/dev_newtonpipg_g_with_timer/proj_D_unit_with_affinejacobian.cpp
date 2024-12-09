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
#include "dev_newtonpipg_g_with_timer_data.h"
#include "indexShapeCheck.h"
#include "ixfun.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mwmathutil.h"
#include <cstddef>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo lb_emlrtRSI{
    10,                                // lineNo
    "proj_D_unit_with_affinejacobian", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pathName
};

static emlrtRSInfo mb_emlrtRSI{
    13,                                // lineNo
    "proj_D_unit_with_affinejacobian", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pathName
};

static emlrtRSInfo nb_emlrtRSI{
    15,                                // lineNo
    "proj_D_unit_with_affinejacobian", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pathName
};

static emlrtRSInfo ob_emlrtRSI{
    18,                                // lineNo
    "proj_D_unit_with_affinejacobian", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pathName
};

static emlrtRSInfo pb_emlrtRSI{
    20,                                // lineNo
    "proj_D_unit_with_affinejacobian", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pathName
};

static emlrtRSInfo rb_emlrtRSI{
    2,          // lineNo
    "proj_box", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_box.m" // pathName
};

static emlrtRSInfo sb_emlrtRSI{
    15,    // lineNo
    "min", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" // pathName
};

static emlrtRSInfo
    tb_emlrtRSI{
        31,         // lineNo
        "minOrMax", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo
    ub_emlrtRSI{
        67,         // lineNo
        "minimum2", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo vb_emlrtRSI{
    63,               // lineNo
    "binaryMinOrMax", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\binaryMinOrMax.m" // pathName
};

static emlrtRSInfo wb_emlrtRSI{
    57,      // lineNo
    "ixfun", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" // pathName
};

static emlrtRSInfo xb_emlrtRSI{
    102,                          // lineNo
    "binaryImplicitExpansionFun", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" // pathName
};

static emlrtRSInfo yb_emlrtRSI{
    15,    // lineNo
    "max", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m" // pathName
};

static emlrtRSInfo
    ac_emlrtRSI{
        29,         // lineNo
        "minOrMax", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo
    bc_emlrtRSI{
        58,         // lineNo
        "maximum2", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" // pathName
    };

static emlrtRSInfo cc_emlrtRSI{
    3,          // lineNo
    "proj_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_soc.m" // pathName
};

static emlrtRSInfo dc_emlrtRSI{
    10,         // lineNo
    "proj_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_soc.m" // pathName
};

static emlrtRSInfo ec_emlrtRSI{
    11,         // lineNo
    "proj_soc", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_soc.m" // pathName
};

static emlrtECInfo r_emlrtECI{
    1,           // nDims
    28,          // lineNo
    19,          // colNo
    "jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtBCInfo r_emlrtBCI{
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

static emlrtBCInfo s_emlrtBCI{
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

static emlrtBCInfo t_emlrtBCI{
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

static emlrtECInfo s_emlrtECI{
    -1,                                // nDims
    15,                                // lineNo
    9,                                 // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtECInfo t_emlrtECI{
    -1,                                // nDims
    20,                                // lineNo
    9,                                 // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtECInfo u_emlrtECI{
    -1,                                // nDims
    18,                                // lineNo
    9,                                 // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtECInfo v_emlrtECI{
    -1,                                // nDims
    13,                                // lineNo
    9,                                 // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtBCInfo u_emlrtBCI{
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

static emlrtDCInfo r_emlrtDCI{
    7,                                 // lineNo
    22,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    1                                          // checkKind
};

static emlrtDCInfo s_emlrtDCI{
    13,                                // lineNo
    11,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo v_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    13,                                // lineNo
    11,                                // colNo
    "z",                               // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo t_emlrtDCI{
    18,                                // lineNo
    11,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo w_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    18,                                // lineNo
    11,                                // colNo
    "z",                               // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtDCInfo u_emlrtDCI{
    20,                                // lineNo
    11,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    1                                          // checkKind
};

static emlrtBCInfo x_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    20,                                // lineNo
    11,                                // colNo
    "z",                               // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo y_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    18,                                // lineNo
    38,                                // colNo
    "z0",                              // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo ab_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    13,                                // lineNo
    37,                                // colNo
    "z0",                              // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo bb_emlrtBCI{
    1,                                 // iFirst
    11,                                // iLast
    13,                                // lineNo
    69,                                // colNo
    "proj_coefficients",               // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo cb_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    20,                                // lineNo
    37,                                // colNo
    "z0",                              // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo db_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    15,                                // lineNo
    14,                                // colNo
    "J_af",                            // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtBCInfo eb_emlrtBCI{
    -1,                                // iFirst
    -1,                                // iLast
    15,                                // lineNo
    41,                                // colNo
    "z0",                              // aName
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", // pName
    0                                          // checkKind
};

static emlrtRTEInfo nc_emlrtRTEI{
    4,                                 // lineNo
    1,                                 // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtRTEInfo oc_emlrtRTEI{
    5,                                 // lineNo
    1,                                 // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtRTEInfo pc_emlrtRTEI{
    10,                                // lineNo
    5,                                 // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtRTEInfo qc_emlrtRTEI{
    20,                                // lineNo
    11,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtRTEInfo rc_emlrtRTEI{
    20,                                // lineNo
    34,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtRTEInfo sc_emlrtRTEI{
    3,          // lineNo
    5,          // colNo
    "proj_soc", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_soc.m" // pName
};

static emlrtRTEInfo tc_emlrtRTEI{
    20,                                // lineNo
    25,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtRTEInfo uc_emlrtRTEI{
    18,                                // lineNo
    11,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtRTEInfo vc_emlrtRTEI{
    18,                                // lineNo
    35,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtRTEInfo wc_emlrtRTEI{
    13,                                // lineNo
    11,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtRTEInfo xc_emlrtRTEI{
    13,                                // lineNo
    34,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtRTEInfo yc_emlrtRTEI{
    13,                                // lineNo
    69,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtRTEInfo ad_emlrtRTEI{
    13,                                // lineNo
    49,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtRTEInfo bd_emlrtRTEI{
    14,                                // lineNo
    15,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtRTEInfo cd_emlrtRTEI{
    15,    // lineNo
    5,     // colNo
    "min", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" // pName
};

static emlrtRTEInfo dd_emlrtRTEI{
    13,                                // lineNo
    25,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtRTEInfo ed_emlrtRTEI{
    15,                                // lineNo
    14,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtRTEInfo fd_emlrtRTEI{
    15,                                // lineNo
    38,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtRTEInfo gd_emlrtRTEI{
    15,                                // lineNo
    53,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtRTEInfo hd_emlrtRTEI{
    28,                                // lineNo
    20,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtRTEInfo id_emlrtRTEI{
    28,                                // lineNo
    27,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtRTEInfo jd_emlrtRTEI{
    15,                                // lineNo
    28,                                // colNo
    "proj_D_unit_with_affinejacobian", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pName
};

static emlrtRSInfo ti_emlrtRSI{
    28,          // lineNo
    "jacob_box", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" // pathName
};

// Function Definitions
void binary_expand_op_9(const emlrtStack &sp, coder::array<real_T, 1U> &in1,
                        const coder::array<boolean_T, 1U> &in2,
                        const coder::array<boolean_T, 1U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&jd_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = ((!in2[i * stride_0_0]) && (!in3[i * stride_1_0]));
  }
}

void d_proj_D_unit_with_affinejacobi(const emlrtStack &sp,
                                     const coder::array<real_T, 1U> &z0,
                                     const real_T proj_index[22],
                                     const real_T proj_coefficients[22],
                                     coder::array<real_T, 1U> &z,
                                     coder::array<real_T, 1U> &J_af)
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  emlrtProfilerSentinel b_profilerSentinel;
  emlrtProfilerSentinel c_profilerSentinel;
  emlrtProfilerSentinel d_profilerSentinel;
  emlrtProfilerSentinel e_profilerSentinel;
  emlrtProfilerSentinel profilerSentinel;
  coder::array<real_T, 2U> temp_index;
  coder::array<real_T, 1U> l;
  coder::array<real_T, 1U> minval;
  coder::array<real_T, 1U> u_tmp;
  coder::array<real_T, 1U> v0;
  coder::array<real_T, 1U> z2;
  coder::array<int32_T, 2U> r;
  coder::array<boolean_T, 1U> r2;
  coder::array<boolean_T, 1U> r3;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack st;
  real_T temp;
  int32_T i;
  int32_T loop_ub;
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
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  emlrtMEXProfilingFunctionEntryCPP((char_T *)c_proj_D_unit_with_affinejacobi,
                                    static_cast<boolean_T>(isMexOutdated),
                                    &profilerSentinel);
  // compute the projection of z0 at each time grid point
  emlrtMEXProfilingStatement(1, static_cast<boolean_T>(isMexOutdated));
  temp = 1.0;
  emlrtMEXProfilingStatement(2, static_cast<boolean_T>(isMexOutdated));
  loop_ub = z0.size(0);
  z.set_size(&nc_emlrtRTEI, &sp, z0.size(0));
  for (i = 0; i < loop_ub; i++) {
    z[i] = 0.0;
  }
  emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
  J_af.set_size(&oc_emlrtRTEI, &sp, z0.size(0));
  for (i = 0; i < loop_ub; i++) {
    J_af[i] = 0.0;
  }
  emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
  exitg1 = false;
  while ((!exitg1) && (temp <= z0.size(0))) {
    emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
    if (temp != static_cast<int32_T>(muDoubleScalarFloor(temp))) {
      emlrtIntegerCheckR2012b(temp, &r_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(temp) < 1) || (static_cast<int32_T>(temp) > 11)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, 11,
                                    &u_emlrtBCI, (emlrtConstCTX)&sp);
    }
    i = (static_cast<int32_T>(temp) - 1) << 1;
    if (proj_index[i] == rtInf) {
      emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
      exitg1 = true;
    } else {
      real_T d;
      int32_T b_loop_ub;
      int32_T vectorUB;
      emlrtMEXProfilingStatement(8, static_cast<boolean_T>(isMexOutdated));
      st.site = &lb_emlrtRSI;
      b_st.site = &qb_emlrtRSI;
      d = proj_index[i];
      if (muDoubleScalarIsNaN(d)) {
        temp_index.set_size(&pc_emlrtRTEI, &b_st, 1, 1);
        temp_index[0] = rtNaN;
      } else if (d < temp) {
        temp_index.set_size(&pc_emlrtRTEI, &b_st, 1, 0);
      } else if (muDoubleScalarIsInf(d) && (temp == d)) {
        temp_index.set_size(&pc_emlrtRTEI, &b_st, 1, 1);
        temp_index[0] = rtNaN;
      } else {
        b_loop_ub = static_cast<int32_T>(d - temp);
        temp_index.set_size(&pc_emlrtRTEI, &b_st, 1, b_loop_ub + 1);
        for (vectorUB = 0; vectorUB <= b_loop_ub; vectorUB++) {
          temp_index[vectorUB] = temp + static_cast<real_T>(vectorUB);
        }
      }
      emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
      emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
      temp = proj_index[i + 1];
      if (temp == 1.0) {
        real_T nm2;
        int32_T iv[2];
        int32_T c_loop_ub;
        emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
        emlrtMEXProfilingStatement(12, static_cast<boolean_T>(isMexOutdated));
        iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
        iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
        st.site = &mb_emlrtRSI;
        coder::internal::indexShapeCheck(st, z0.size(0), iv);
        b_loop_ub = temp_index.size(1);
        r.set_size(&wc_emlrtRTEI, &sp, 1, temp_index.size(1));
        for (i = 0; i < b_loop_ub; i++) {
          if (temp_index[i] !=
              static_cast<int32_T>(muDoubleScalarFloor(temp_index[i]))) {
            emlrtIntegerCheckR2012b(temp_index[i], &s_emlrtDCI,
                                    (emlrtConstCTX)&sp);
          }
          vectorUB = static_cast<int32_T>(temp_index[i]);
          if ((vectorUB < 1) || (vectorUB > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(vectorUB, 1, loop_ub, &v_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          r[i] = vectorUB;
        }
        st.site = &mb_emlrtRSI;
        v0.set_size(&xc_emlrtRTEI, &st, temp_index.size(1));
        for (i = 0; i < b_loop_ub; i++) {
          vectorUB = static_cast<int32_T>(temp_index[i]);
          if ((vectorUB < 1) || (vectorUB > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(vectorUB, 1, loop_ub, &ab_emlrtBCI,
                                          &st);
          }
          v0[i] = z0[vectorUB - 1];
        }
        z2.set_size(&yc_emlrtRTEI, &st, temp_index.size(1));
        for (i = 0; i < b_loop_ub; i++) {
          z2[i] = temp_index[i];
        }
        l.set_size(&ad_emlrtRTEI, &st, temp_index.size(1));
        for (i = 0; i < b_loop_ub; i++) {
          vectorUB = static_cast<int32_T>(z2[i]);
          if ((vectorUB < 1) || (vectorUB > 11)) {
            emlrtDynamicBoundsCheckR2012b(vectorUB, 1, 11, &bb_emlrtBCI, &st);
          }
          l[i] = proj_coefficients[((vectorUB - 1) << 1) + 1];
        }
        u_tmp.set_size(&bd_emlrtRTEI, &st, temp_index.size(1));
        for (i = 0; i < b_loop_ub; i++) {
          u_tmp[i] = proj_coefficients[(static_cast<int32_T>(z2[i]) - 1) << 1];
        }
        emlrtMEXProfilingFunctionEntryCPP((char_T *)proj_box_complete_name,
                                          static_cast<boolean_T>(isMexOutdated),
                                          &d_profilerSentinel);
        emlrtMEXProfilingStatement(1, static_cast<boolean_T>(isMexOutdated));
        b_st.site = &rb_emlrtRSI;
        c_st.site = &sb_emlrtRSI;
        d_st.site = &tb_emlrtRSI;
        e_st.site = &ub_emlrtRSI;
        f_st.site = &vb_emlrtRSI;
        g_st.site = &wb_emlrtRSI;
        if (u_tmp.size(0) == temp_index.size(1)) {
          c_loop_ub = v0.size(0);
          minval.set_size(&cd_emlrtRTEI, &g_st, v0.size(0));
          for (i = 0; i < c_loop_ub; i++) {
            temp = v0[i];
            nm2 = u_tmp[i];
            minval[i] = muDoubleScalarMin(temp, nm2);
          }
        } else {
          h_st.site = &xb_emlrtRSI;
          coder::internal::expand_min(h_st, v0, u_tmp, minval);
        }
        b_st.site = &rb_emlrtRSI;
        c_st.site = &yb_emlrtRSI;
        d_st.site = &ac_emlrtRSI;
        e_st.site = &bc_emlrtRSI;
        f_st.site = &vb_emlrtRSI;
        g_st.site = &wb_emlrtRSI;
        if (l.size(0) == minval.size(0)) {
          c_loop_ub = l.size(0);
          z2.set_size(&dd_emlrtRTEI, &g_st, l.size(0));
          for (i = 0; i < c_loop_ub; i++) {
            temp = l[i];
            nm2 = minval[i];
            z2[i] = muDoubleScalarMax(temp, nm2);
          }
        } else {
          h_st.site = &xb_emlrtRSI;
          coder::internal::expand_max(h_st, l, minval, z2);
        }
        emlrtMEXProfilingStatement(2, static_cast<boolean_T>(isMexOutdated));
        emlrtMEXProfilingFunctionExitCPP(&d_profilerSentinel);
        c_loop_ub = r.size(1);
        if (z2.size(0) != r.size(1)) {
          emlrtSubAssignSizeCheck1dR2017a(r.size(1), z2.size(0), &v_emlrtECI,
                                          (emlrtConstCTX)&sp);
        }
        for (i = 0; i < c_loop_ub; i++) {
          z[r[i] - 1] = z2[i];
        }
        emlrtMEXProfilingStatement(13, static_cast<boolean_T>(isMexOutdated));
        emlrtMEXProfilingStatement(14, static_cast<boolean_T>(isMexOutdated));
        iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
        iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
        st.site = &nb_emlrtRSI;
        coder::internal::indexShapeCheck(st, z0.size(0), iv);
        r.set_size(&ed_emlrtRTEI, &sp, 1, temp_index.size(1));
        for (i = 0; i < b_loop_ub; i++) {
          vectorUB = static_cast<int32_T>(temp_index[i]);
          if ((vectorUB < 1) || (vectorUB > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(vectorUB, 1, loop_ub, &db_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          r[i] = vectorUB;
        }
        st.site = &nb_emlrtRSI;
        z2.set_size(&fd_emlrtRTEI, &st, temp_index.size(1));
        for (i = 0; i < b_loop_ub; i++) {
          vectorUB = static_cast<int32_T>(temp_index[i]);
          if ((vectorUB < 1) || (vectorUB > loop_ub)) {
            emlrtDynamicBoundsCheckR2012b(vectorUB, 1, loop_ub, &eb_emlrtBCI,
                                          &st);
          }
          z2[i] = z0[vectorUB - 1];
        }
        l.set_size(&gd_emlrtRTEI, &st, temp_index.size(1));
        for (i = 0; i < b_loop_ub; i++) {
          l[i] = proj_coefficients[((static_cast<int32_T>(temp_index[i]) - 1)
                                    << 1) +
                                   1];
        }
        emlrtMEXProfilingFunctionEntryCPP((char_T *)jacob_box_complete_name,
                                          static_cast<boolean_T>(isMexOutdated),
                                          &e_profilerSentinel);
        emlrtMEXProfilingStatement(1, static_cast<boolean_T>(isMexOutdated));
        if (z2.size(0) == l.size(0)) {
          b_loop_ub = z2.size(0);
          r2.set_size(&hd_emlrtRTEI, &st, z2.size(0));
          for (i = 0; i < b_loop_ub; i++) {
            r2[i] = (z2[i] <= l[i]);
          }
        } else {
          b_st.site = &ti_emlrtRSI;
          le(b_st, r2, z2, l);
        }
        if (z2.size(0) == u_tmp.size(0)) {
          b_loop_ub = z2.size(0);
          r3.set_size(&id_emlrtRTEI, &st, z2.size(0));
          for (i = 0; i < b_loop_ub; i++) {
            r3[i] = (z2[i] >= u_tmp[i]);
          }
        } else {
          b_st.site = &ti_emlrtRSI;
          ge(b_st, r3, z2, u_tmp);
        }
        b_loop_ub = r2.size(0);
        if ((r2.size(0) != r3.size(0)) &&
            ((r2.size(0) != 1) && (r3.size(0) != 1))) {
          emlrtDimSizeImpxCheckR2021b(r2.size(0), r3.size(0), &r_emlrtECI, &st);
        }
        if (r2.size(0) == r3.size(0)) {
          z2.set_size(&jd_emlrtRTEI, &st, r2.size(0));
          for (i = 0; i < b_loop_ub; i++) {
            z2[i] = ((!r2[i]) && (!r3[i]));
          }
        } else {
          b_st.site = &ti_emlrtRSI;
          binary_expand_op_9(b_st, z2, r2, r3);
        }
        emlrtMEXProfilingStatement(2, static_cast<boolean_T>(isMexOutdated));
        emlrtMEXProfilingFunctionExitCPP(&e_profilerSentinel);
        b_loop_ub = r.size(1);
        if (z2.size(0) != r.size(1)) {
          emlrtSubAssignSizeCheck1dR2017a(r.size(1), z2.size(0), &s_emlrtECI,
                                          (emlrtConstCTX)&sp);
        }
        for (i = 0; i < b_loop_ub; i++) {
          J_af[r[i] - 1] = z2[i];
        }
        emlrtMEXProfilingStatement(19, static_cast<boolean_T>(isMexOutdated));
      } else {
        emlrtMEXProfilingStatement(15, static_cast<boolean_T>(isMexOutdated));
        if (temp == 2.0) {
          real_T nm2;
          int32_T iv[2];
          int32_T scalarLB;
          emlrtMEXProfilingStatement(16, static_cast<boolean_T>(isMexOutdated));
          iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
          iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
          st.site = &ob_emlrtRSI;
          coder::internal::indexShapeCheck(st, z0.size(0), iv);
          b_loop_ub = temp_index.size(1);
          r.set_size(&uc_emlrtRTEI, &sp, 1, temp_index.size(1));
          for (vectorUB = 0; vectorUB < b_loop_ub; vectorUB++) {
            if (temp_index[vectorUB] !=
                static_cast<int32_T>(
                    muDoubleScalarFloor(temp_index[vectorUB]))) {
              emlrtIntegerCheckR2012b(temp_index[vectorUB], &t_emlrtDCI,
                                      (emlrtConstCTX)&sp);
            }
            scalarLB = static_cast<int32_T>(temp_index[vectorUB]);
            if ((scalarLB < 1) || (scalarLB > loop_ub)) {
              emlrtDynamicBoundsCheckR2012b(scalarLB, 1, loop_ub, &w_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            r[vectorUB] = scalarLB;
          }
          z2.set_size(&vc_emlrtRTEI, &sp, temp_index.size(1));
          for (vectorUB = 0; vectorUB < b_loop_ub; vectorUB++) {
            scalarLB = static_cast<int32_T>(temp_index[vectorUB]);
            if ((scalarLB < 1) || (scalarLB > loop_ub)) {
              emlrtDynamicBoundsCheckR2012b(scalarLB, 1, loop_ub, &y_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            z2[vectorUB] = z0[scalarLB - 1];
          }
          emlrtMEXProfilingFunctionEntryCPP(
              (char_T *)proj_ball_complete_name,
              static_cast<boolean_T>(isMexOutdated), &b_profilerSentinel);
          // Projection to a ball center at 0.
          emlrtMEXProfilingStatement(1, static_cast<boolean_T>(isMexOutdated));
          if (temp_index.size(1) == 0) {
            temp = 0.0;
          } else {
            n_t = (ptrdiff_t)temp_index.size(1);
            incx_t = (ptrdiff_t)1;
            temp = dnrm2(&n_t, &(z2.data())[0], &incx_t);
          }
          emlrtMEXProfilingStatement(2, static_cast<boolean_T>(isMexOutdated));
          nm2 = proj_coefficients[i];
          if (temp > nm2) {
            emlrtMEXProfilingStatement(3,
                                       static_cast<boolean_T>(isMexOutdated));
            b_loop_ub = z2.size(0);
            scalarLB = (z2.size(0) / 2) << 1;
            vectorUB = scalarLB - 2;
            for (i = 0; i <= vectorUB; i += 2) {
              __m128d r1;
              r1 = _mm_loadu_pd(&z2[i]);
              _mm_storeu_pd(&z2[i],
                            _mm_mul_pd(_mm_div_pd(r1, _mm_set1_pd(temp)),
                                       _mm_set1_pd(nm2)));
            }
            for (i = scalarLB; i < b_loop_ub; i++) {
              z2[i] = z2[i] / temp * nm2;
            }
            emlrtMEXProfilingStatement(6,
                                       static_cast<boolean_T>(isMexOutdated));
          } else {
            emlrtMEXProfilingStatement(4,
                                       static_cast<boolean_T>(isMexOutdated));
            emlrtMEXProfilingStatement(5,
                                       static_cast<boolean_T>(isMexOutdated));
            emlrtMEXProfilingStatement(6,
                                       static_cast<boolean_T>(isMexOutdated));
          }
          emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
          emlrtMEXProfilingFunctionExitCPP(&b_profilerSentinel);
          b_loop_ub = r.size(1);
          if (z2.size(0) != r.size(1)) {
            emlrtSubAssignSizeCheck1dR2017a(r.size(1), z2.size(0), &u_emlrtECI,
                                            (emlrtConstCTX)&sp);
          }
          for (i = 0; i < b_loop_ub; i++) {
            z[r[i] - 1] = z2[i];
          }
          emlrtMEXProfilingStatement(19, static_cast<boolean_T>(isMexOutdated));
        } else {
          emlrtMEXProfilingStatement(17, static_cast<boolean_T>(isMexOutdated));
          if (temp == 3.0) {
            real_T d1;
            real_T nm2;
            int32_T iv[2];
            int32_T c_loop_ub;
            int32_T scalarLB;
            emlrtMEXProfilingStatement(18,
                                       static_cast<boolean_T>(isMexOutdated));
            iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
            iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
            st.site = &pb_emlrtRSI;
            coder::internal::indexShapeCheck(st, z0.size(0), iv);
            b_loop_ub = temp_index.size(1);
            r.set_size(&qc_emlrtRTEI, &sp, 1, temp_index.size(1));
            for (vectorUB = 0; vectorUB < b_loop_ub; vectorUB++) {
              if (temp_index[vectorUB] !=
                  static_cast<int32_T>(
                      muDoubleScalarFloor(temp_index[vectorUB]))) {
                emlrtIntegerCheckR2012b(temp_index[vectorUB], &u_emlrtDCI,
                                        (emlrtConstCTX)&sp);
              }
              scalarLB = static_cast<int32_T>(temp_index[vectorUB]);
              if ((scalarLB < 1) || (scalarLB > loop_ub)) {
                emlrtDynamicBoundsCheckR2012b(scalarLB, 1, loop_ub, &x_emlrtBCI,
                                              (emlrtConstCTX)&sp);
              }
              r[vectorUB] = scalarLB;
            }
            st.site = &pb_emlrtRSI;
            v0.set_size(&rc_emlrtRTEI, &st, temp_index.size(1));
            for (vectorUB = 0; vectorUB < b_loop_ub; vectorUB++) {
              scalarLB = static_cast<int32_T>(temp_index[vectorUB]);
              if ((scalarLB < 1) || (scalarLB > loop_ub)) {
                emlrtDynamicBoundsCheckR2012b(scalarLB, 1, loop_ub,
                                              &cb_emlrtBCI, &st);
              }
              v0[vectorUB] = z0[scalarLB - 1];
            }
            emlrtMEXProfilingFunctionEntryCPP(
                (char_T *)proj_soc_complete_name,
                static_cast<boolean_T>(isMexOutdated), &c_profilerSentinel);
            emlrtMEXProfilingStatement(1,
                                       static_cast<boolean_T>(isMexOutdated));
            if (temp_index.size(1) < 1) {
              emlrtDynamicBoundsCheckR2012b(
                  temp_index.size(1), 1, temp_index.size(1), &t_emlrtBCI, &st);
            }
            emlrtMEXProfilingStatement(2,
                                       static_cast<boolean_T>(isMexOutdated));
            if (temp_index.size(1) - 1 < 1) {
              c_loop_ub = 0;
            } else {
              if (temp_index.size(1) < 1) {
                emlrtDynamicBoundsCheckR2012b(1, 1, temp_index.size(1),
                                              &s_emlrtBCI, &st);
              }
              if ((temp_index.size(1) - 1 < 1) ||
                  (temp_index.size(1) - 1 > temp_index.size(1))) {
                emlrtDynamicBoundsCheckR2012b(temp_index.size(1) - 1, 1,
                                              temp_index.size(1), &r_emlrtBCI,
                                              &st);
              }
              c_loop_ub = temp_index.size(1) - 1;
            }
            iv[0] = 1;
            iv[1] = c_loop_ub;
            b_st.site = &cc_emlrtRSI;
            coder::internal::indexShapeCheck(b_st, temp_index.size(1), iv);
            z2.set_size(&sc_emlrtRTEI, &st, c_loop_ub);
            for (vectorUB = 0; vectorUB < c_loop_ub; vectorUB++) {
              z2[vectorUB] = v0[vectorUB];
            }
            emlrtMEXProfilingStatement(3,
                                       static_cast<boolean_T>(isMexOutdated));
            if (c_loop_ub == 0) {
              nm2 = 0.0;
            } else {
              n_t = (ptrdiff_t)c_loop_ub;
              incx_t = (ptrdiff_t)1;
              nm2 = dnrm2(&n_t, &(z2.data())[0], &incx_t);
            }
            emlrtMEXProfilingStatement(4,
                                       static_cast<boolean_T>(isMexOutdated));
            temp = z0[static_cast<int32_T>(temp_index[temp_index.size(1) - 1]) -
                      1];
            d1 = proj_coefficients[i];
            if (d1 * temp >= nm2) {
              emlrtMEXProfilingStatement(5,
                                         static_cast<boolean_T>(isMexOutdated));
              z2.set_size(&tc_emlrtRTEI, &st, c_loop_ub + 1);
              for (i = 0; i < c_loop_ub; i++) {
                z2[i] = v0[i];
              }
              z2[c_loop_ub] = temp;
              emlrtMEXProfilingStatement(12,
                                         static_cast<boolean_T>(isMexOutdated));
            } else {
              emlrtMEXProfilingStatement(6,
                                         static_cast<boolean_T>(isMexOutdated));
              if (temp <= -d1 * nm2) {
                emlrtMEXProfilingStatement(
                    7, static_cast<boolean_T>(isMexOutdated));
                z2.set_size(&tc_emlrtRTEI, &st, temp_index.size(1));
                for (i = 0; i < b_loop_ub; i++) {
                  z2[i] = 0.0;
                }
                emlrtMEXProfilingStatement(
                    12, static_cast<boolean_T>(isMexOutdated));
              } else {
                real_T a;
                real_T a_tmp;
                emlrtMEXProfilingStatement(
                    8, static_cast<boolean_T>(isMexOutdated));
                emlrtMEXProfilingStatement(
                    9, static_cast<boolean_T>(isMexOutdated));
                b_st.site = &dc_emlrtRSI;
                c_st.site = &w_emlrtRSI;
                d_st.site = &x_emlrtRSI;
                emlrtMEXProfilingStatement(
                    10, static_cast<boolean_T>(isMexOutdated));
                b_st.site = &ec_emlrtRSI;
                c_st.site = &w_emlrtRSI;
                d_st.site = &x_emlrtRSI;
                a_tmp = d1 * d1 + 1.0;
                a = d1 / a_tmp * (temp / nm2 + d1);
                emlrtMEXProfilingStatement(
                    11, static_cast<boolean_T>(isMexOutdated));
                z2.set_size(&tc_emlrtRTEI, &st, c_loop_ub + 1);
                scalarLB = (c_loop_ub / 2) << 1;
                vectorUB = scalarLB - 2;
                for (i = 0; i <= vectorUB; i += 2) {
                  __m128d r1;
                  r1 = _mm_loadu_pd(&v0[i]);
                  _mm_storeu_pd(&z2[i], _mm_mul_pd(_mm_set1_pd(a), r1));
                }
                for (i = scalarLB; i < c_loop_ub; i++) {
                  z2[i] = a * v0[i];
                }
                z2[c_loop_ub] = 1.0 / a_tmp * (temp + d1 * nm2);
                emlrtMEXProfilingStatement(
                    12, static_cast<boolean_T>(isMexOutdated));
              }
            }
            emlrtMEXProfilingStatement(13,
                                       static_cast<boolean_T>(isMexOutdated));
            emlrtMEXProfilingFunctionExitCPP(&c_profilerSentinel);
            b_loop_ub = r.size(1);
            if (z2.size(0) != r.size(1)) {
              emlrtSubAssignSizeCheck1dR2017a(r.size(1), z2.size(0),
                                              &t_emlrtECI, (emlrtConstCTX)&sp);
            }
            for (i = 0; i < b_loop_ub; i++) {
              z[r[i] - 1] = z2[i];
            }
            emlrtMEXProfilingStatement(19,
                                       static_cast<boolean_T>(isMexOutdated));
          }
        }
      }
      // update
      emlrtMEXProfilingStatement(20, static_cast<boolean_T>(isMexOutdated));
      temp = d + 1.0;
      emlrtMEXProfilingStatement(21, static_cast<boolean_T>(isMexOutdated));
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
  }
  emlrtMEXProfilingStatement(22, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingFunctionExitCPP(&profilerSentinel);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void ge(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
        const coder::array<real_T, 1U> &in2,
        const coder::array<real_T, 1U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&id_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_0] >= in3[i * stride_1_0]);
  }
}

void le(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
        const coder::array<real_T, 1U> &in2,
        const coder::array<real_T, 1U> &in3)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in3.size(0) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in3.size(0);
  }
  in1.set_size(&hd_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_0] <= in3[i * stride_1_0]);
  }
}

// End of code generation (proj_D_unit_with_affinejacobian.cpp)
