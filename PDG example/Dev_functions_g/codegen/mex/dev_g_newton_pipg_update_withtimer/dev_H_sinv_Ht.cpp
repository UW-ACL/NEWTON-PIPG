//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_H_sinv_Ht.cpp
//
// Code generation for function 'dev_H_sinv_Ht'
//

// Include files
#include "dev_H_sinv_Ht.h"
#include "dev_A_Q_D_unit.h"
#include "dev_g_newton_pipg_update_withtimer_data.h"
#include "diag.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo lf_emlrtRSI{
    16,              // lineNo
    "dev_H_sinv_Ht", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pathName
};

static emlrtRSInfo mf_emlrtRSI{
    20,              // lineNo
    "dev_H_sinv_Ht", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pathName
};

static emlrtRSInfo nf_emlrtRSI{
    41,                     // lineNo
    "dev_Y_Q_Q_D_sum_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pathName
};

static emlrtRSInfo of_emlrtRSI{
    45,                     // lineNo
    "dev_Y_Q_Q_D_sum_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pathName
};

static emlrtRSInfo pf_emlrtRSI{
    53,                     // lineNo
    "dev_Y_Q_Q_D_sum_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pathName
};

static emlrtRSInfo qf_emlrtRSI{
    58,                     // lineNo
    "dev_Y_Q_Q_D_sum_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pathName
};

static emlrtBCInfo nb_emlrtBCI{
    1,               // iFirst
    10,              // iLast
    20,              // lineNo
    10,              // colNo
    "Y",             // aName
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtECInfo ob_emlrtECI{
    -1,              // nDims
    20,              // lineNo
    4,               // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo n_emlrtRTEI{
    54,                     // lineNo
    18,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtECInfo pb_emlrtECI{
    -1,                     // nDims
    53,                     // lineNo
    9,                      // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtECInfo qb_emlrtECI{
    1,                      // nDims
    58,                     // lineNo
    37,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtECInfo rb_emlrtECI{
    2,                      // nDims
    58,                     // lineNo
    37,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtECInfo sb_emlrtECI{
    -1,                     // nDims
    58,                     // lineNo
    9,                      // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtBCInfo ob_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    12,                         // lineNo
    39,                         // colNo
    "A",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo pb_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    12,                         // lineNo
    42,                         // colNo
    "A",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtDCInfo r_emlrtDCI{
    31,                     // lineNo
    18,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo s_emlrtDCI{
    31,                     // lineNo
    18,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    4                                               // checkKind
};

static emlrtDCInfo t_emlrtDCI{
    31,                     // lineNo
    1,                      // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo qb_emlrtBCI{
    1,                      // iFirst
    11,                     // iLast
    36,                     // lineNo
    22,                     // colNo
    "proj_index",           // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo u_emlrtDCI{
    36,                     // lineNo
    22,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo w_emlrtDCI{
    58,                     // lineNo
    39,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo sb_emlrtBCI{
    1,                      // iFirst
    10,                     // iLast
    58,                     // lineNo
    39,                     // colNo
    "Y",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo x_emlrtDCI{
    53,                     // lineNo
    18,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo tb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    53,                     // lineNo
    18,                     // colNo
    "out_temp",             // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ub_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    53,                     // lineNo
    30,                     // colNo
    "out_temp",             // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo vb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    58,                     // lineNo
    92,                     // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo wb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    58,                     // lineNo
    104,                    // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo xb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    53,                     // lineNo
    56,                     // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo yb_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    53,                     // lineNo
    68,                     // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ac_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    58,                     // lineNo
    131,                    // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo bc_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    58,                     // lineNo
    119,                    // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo dc_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    31,               // lineNo
    16,               // colNo
    "out",            // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

static emlrtBCInfo hc_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    29,               // lineNo
    16,               // colNo
    "out",            // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

static emlrtBCInfo jc_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    55,                     // lineNo
    41,                     // colNo
    "out_temp",             // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo kc_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    55,                     // lineNo
    44,                     // colNo
    "out_temp",             // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo lc_emlrtBCI{
    1,                      // iFirst
    10,                     // iLast
    55,                     // lineNo
    15,                     // colNo
    "Y",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    3                                               // checkKind
};

static emlrtBCInfo mc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    15,                         // lineNo
    25,                         // colNo
    "C",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo nc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    15,                         // lineNo
    28,                         // colNo
    "C",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo oc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    15,                         // lineNo
    15,                         // colNo
    "C",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo pc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    15,                         // lineNo
    18,                         // colNo
    "C",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo qc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    12,                         // lineNo
    29,                         // colNo
    "C",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo rc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    12,                         // lineNo
    32,                         // colNo
    "C",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo sc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    12,                         // lineNo
    49,                         // colNo
    "B",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo tc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    12,                         // lineNo
    52,                         // colNo
    "B",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo uc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    12,                         // lineNo
    19,                         // colNo
    "C",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtBCInfo vc_emlrtBCI{
    -1,                         // iFirst
    -1,                         // iLast
    12,                         // lineNo
    22,                         // colNo
    "C",                        // aName
    "dev_g_multiply_symmetric", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", // pName
    0                                                          // checkKind
};

static emlrtRTEInfo se_emlrtRTEI{
    16,              // lineNo
    88,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo te_emlrtRTEI{
    31,              // lineNo
    1,               // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo ue_emlrtRTEI{
    45,              // lineNo
    9,               // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo ve_emlrtRTEI{
    41,              // lineNo
    9,               // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo we_emlrtRTEI{
    58,              // lineNo
    39,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo xe_emlrtRTEI{
    58,              // lineNo
    117,             // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo ye_emlrtRTEI{
    58,              // lineNo
    65,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo af_emlrtRTEI{
    58,              // lineNo
    11,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo bf_emlrtRTEI{
    58,              // lineNo
    23,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo cf_emlrtRTEI{
    58,              // lineNo
    37,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo df_emlrtRTEI{
    53,              // lineNo
    18,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo ef_emlrtRTEI{
    53,              // lineNo
    30,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo ff_emlrtRTEI{
    53,              // lineNo
    54,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo gf_emlrtRTEI{
    20,              // lineNo
    46,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo hf_emlrtRTEI{
    20,              // lineNo
    20,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo jf_emlrtRTEI{
    17,               // lineNo
    9,                // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

// Function Declarations
static void binary_expand_op_20(const emlrtStack &sp,
                                coder::array<real_T, 2U> &in1,
                                const real_T in2[5800], int32_T in3,
                                const coder::array<real_T, 1U> &in4,
                                const coder::array<real_T, 2U> &in5);

// Function Definitions
static void binary_expand_op_20(const emlrtStack &sp,
                                coder::array<real_T, 2U> &in1,
                                const real_T in2[5800], int32_T in3,
                                const coder::array<real_T, 1U> &in4,
                                const coder::array<real_T, 2U> &in5)
{
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T loop_ub;
  int32_T stride_0_0_tmp;
  int32_T stride_1_0;
  int32_T stride_1_1;
  if (in5.size(0) == 1) {
    loop_ub = in4.size(0);
  } else {
    loop_ub = in5.size(0);
  }
  in1.set_size(&cf_emlrtRTEI, &sp, loop_ub, in1.size(1));
  if (in5.size(1) == 1) {
    b_loop_ub = in4.size(0);
  } else {
    b_loop_ub = in5.size(1);
  }
  in1.set_size(&cf_emlrtRTEI, &sp, in1.size(0), b_loop_ub);
  stride_0_0_tmp = (in4.size(0) != 1);
  stride_1_0 = (in5.size(0) != 1);
  stride_1_1 = (in5.size(1) != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (int32_T i{0}; i < b_loop_ub; i++) {
    for (int32_T i1{0}; i1 < loop_ub; i1++) {
      in1[i1 + in1.size(0) * i] =
          in2[((static_cast<int32_T>(in4[i1 * stride_0_0_tmp]) +
                10 * (static_cast<int32_T>(in4[aux_0_1]) - 1)) +
               200 * in3) -
              1] +
          in5[i1 * stride_1_0 + in5.size(0) * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_0_tmp;
  }
}

void dev_H_sinv_Ht(const emlrtStack &sp, const real_T A[3190],
                   const coder::array<real_T, 3U> &Q,
                   const real_T proj_index_all[660], real_T nx, real_T Y[5800])
{
  coder::array<real_T, 2U> b_A;
  coder::array<real_T, 2U> b_B;
  coder::array<real_T, 2U> b_Q;
  coder::array<real_T, 2U> out_temp;
  coder::array<real_T, 2U> r;
  coder::array<real_T, 2U> r3;
  coder::array<real_T, 2U> r4;
  coder::array<real_T, 2U> r5;
  coder::array<real_T, 2U> temp_index;
  coder::array<real_T, 1U> a;
  coder::array<int32_T, 1U> r1;
  coder::array<int32_T, 1U> r2;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T C[100];
  int32_T iv[2];
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  // Remember the symetric in multiplication.
  //  the Y matrix is a 4 dimensional matrix. t is for the t th row HsHt and
  //  the third index is for the location. 1 for diag and 2 for the subdiag
  //  below the diag.
  //  Y(:, :, 2, t) is the block on tth row and t-1 column
  //  hense Y(:, :, 2, 1) = 0, t has realization for only t >0
  std::memset(&Y[0], 0, 5800U * sizeof(real_T));
  loop_ub_tmp = Q.size(1);
  loop_ub = Q.size(0);
  i = static_cast<int32_T>(muDoubleScalarFloor(nx));
  i1 = static_cast<int32_T>(nx);
  b_loop_ub = i1 * i1;
  for (int32_T b_i{0}; b_i < 29; b_i++) {
    real_T B[110];
    real_T Const_type;
    real_T d;
    real_T temp;
    int32_T c_i;
    int32_T c_loop_ub;
    int32_T flag;
    int32_T i2;
    int32_T i3;
    int32_T j;
    int32_T k;
    boolean_T exitg1;
    //  Y(:,:,1, i) = dev_g_multiply_symmetric(A(:, :, i), A(:, :,i)');
    for (i2 = 0; i2 < 10; i2++) {
      for (j = 0; j < 11; j++) {
        B[j + 11 * i2] = A[(i2 + 10 * j) + 110 * b_i];
      }
    }
    //  Get the size of the matrices
    //  Initialize the resulting matrix C
    std::memset(&C[0], 0, 100U * sizeof(real_T));
    //  Calculate the product A * B, leveraging its symmetric property
    for (c_i = 0; c_i < 10; c_i++) {
      for (j = 0; j <= c_i; j++) {
        i2 = c_i + 10 * j;
        d = C[i2];
        for (k = 0; k < 11; k++) {
          d += A[(c_i + 10 * k) + 110 * b_i] * B[k + 11 * j];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }
        C[i2] = d;
        //  Use the computed value for the symmetric element
        C[j + 10 * c_i] = C[i2];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
    st.site = &lf_emlrtRSI;
    b_Q.set_size(&se_emlrtRTEI, &st, Q.size(0), loop_ub_tmp);
    for (i2 = 0; i2 < loop_ub_tmp; i2++) {
      for (j = 0; j < loop_ub; j++) {
        b_Q[j + b_Q.size(0) * i2] =
            Q[(j + Q.size(0) * i2) + Q.size(0) * Q.size(1) * (b_i + 1)];
      }
    }
    std::copy(&C[0], &C[100], &Y[b_i * 200]);
    // WE want to compute the innerproduct of Q and Q'.
    if (!(nx >= 0.0)) {
      emlrtNonNegativeCheckR2012b(nx, &s_emlrtDCI, &st);
    }
    if (nx != i) {
      emlrtIntegerCheckR2012b(nx, &r_emlrtDCI, &st);
    }
    out_temp.set_size(&te_emlrtRTEI, &st, i1, i1);
    if (i1 != i) {
      emlrtIntegerCheckR2012b(nx, &t_emlrtDCI, &st);
    }
    for (i2 = 0; i2 < b_loop_ub; i2++) {
      out_temp[i2] = 0.0;
    }
    temp = 1.0;
    flag = 0;
    exitg1 = false;
    while ((!exitg1) && (temp <= Q.size(1))) {
      if (temp != static_cast<int32_T>(muDoubleScalarFloor(temp))) {
        emlrtIntegerCheckR2012b(temp, &u_emlrtDCI, &st);
      }
      if ((static_cast<int32_T>(temp) < 1) ||
          (static_cast<int32_T>(temp) > 11)) {
        emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, 11,
                                      &qb_emlrtBCI, &st);
      }
      i2 = ((static_cast<int32_T>(temp) - 1) << 1) + 22 * (b_i + 1);
      if (proj_index_all[i2] == rtInf) {
        exitg1 = true;
      } else {
        d = proj_index_all[i2];
        if (d >= nx) {
          b_st.site = &nf_emlrtRSI;
          c_st.site = &bc_emlrtRSI;
          if (nx < temp) {
            temp_index.set_size(&ve_emlrtRTEI, &c_st, 1, 0);
          } else {
            c_loop_ub = static_cast<int32_T>(nx - temp);
            temp_index.set_size(&ve_emlrtRTEI, &c_st, 1, c_loop_ub + 1);
            for (j = 0; j <= c_loop_ub; j++) {
              temp_index[j] = temp + static_cast<real_T>(j);
            }
          }
          Const_type = proj_index_all[i2 + 1];
          flag = 1;
        } else {
          b_st.site = &of_emlrtRSI;
          c_st.site = &bc_emlrtRSI;
          if (muDoubleScalarIsNaN(d)) {
            temp_index.set_size(&ue_emlrtRTEI, &c_st, 1, 1);
            temp_index[0] = rtNaN;
          } else if (d < temp) {
            temp_index.set_size(&ue_emlrtRTEI, &c_st, 1, 0);
          } else if (muDoubleScalarIsInf(d) && (temp == d)) {
            temp_index.set_size(&ue_emlrtRTEI, &c_st, 1, 1);
            temp_index[0] = rtNaN;
          } else {
            c_loop_ub = static_cast<int32_T>(d - temp);
            temp_index.set_size(&ue_emlrtRTEI, &c_st, 1, c_loop_ub + 1);
            for (j = 0; j <= c_loop_ub; j++) {
              temp_index[j] = temp + static_cast<real_T>(j);
            }
          }
          Const_type = proj_index_all[i2 + 1];
        }
        if (Const_type == 1.0) {
          //  Q(temp_index, temp_index)  =
          //  dev_jacob_box(z0(temp_index),proj_coefficients(2,temp_index)' ...
          //       , proj_coefficients(1, temp_index)', P(temp_index), alpha);
          c_loop_ub = temp_index.size(1);
          r1.set_size(&df_emlrtRTEI, &st, temp_index.size(1));
          for (i2 = 0; i2 < c_loop_ub; i2++) {
            if (temp_index[i2] !=
                static_cast<int32_T>(muDoubleScalarFloor(temp_index[i2]))) {
              emlrtIntegerCheckR2012b(temp_index[i2], &x_emlrtDCI, &st);
            }
            j = static_cast<int32_T>(temp_index[i2]);
            if ((j < 1) || (j > out_temp.size(0))) {
              emlrtDynamicBoundsCheckR2012b(j, 1, out_temp.size(0),
                                            &tb_emlrtBCI, &st);
            }
            r1[i2] = j - 1;
          }
          r2.set_size(&ef_emlrtRTEI, &st, temp_index.size(1));
          for (i2 = 0; i2 < c_loop_ub; i2++) {
            j = static_cast<int32_T>(temp_index[i2]);
            if ((j < 1) || (j > i1)) {
              emlrtDynamicBoundsCheckR2012b(j, 1, static_cast<int32_T>(nx),
                                            &ub_emlrtBCI, &st);
            }
            r2[i2] = j - 1;
          }
          b_st.site = &pf_emlrtRSI;
          b_B.set_size(&ff_emlrtRTEI, &b_st, temp_index.size(1),
                       temp_index.size(1));
          for (i2 = 0; i2 < c_loop_ub; i2++) {
            for (j = 0; j < c_loop_ub; j++) {
              i3 = static_cast<int32_T>(temp_index[j]);
              if ((i3 < 1) || (i3 > loop_ub)) {
                emlrtDynamicBoundsCheckR2012b(i3, 1, loop_ub, &xb_emlrtBCI,
                                              &b_st);
              }
              c_i = static_cast<int32_T>(temp_index[i2]);
              if ((c_i < 1) || (c_i > loop_ub_tmp)) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, loop_ub_tmp, &yb_emlrtBCI,
                                              &b_st);
              }
              b_B[j + b_B.size(0) * i2] =
                  b_Q[(i3 + b_Q.size(0) * (c_i - 1)) - 1];
            }
          }
          c_st.site = &pf_emlrtRSI;
          coder::diag(c_st, b_B, a);
          c_loop_ub = a.size(0);
          for (i2 = 0; i2 < c_loop_ub; i2++) {
            Const_type = a[i2];
            a[i2] = Const_type * Const_type;
          }
          b_st.site = &pf_emlrtRSI;
          coder::diag(b_st, a, r3);
          c_loop_ub = r1.size(0);
          iv[0] = r1.size(0);
          k = r2.size(0);
          iv[1] = r2.size(0);
          emlrtSubAssignSizeCheckR2012b(&iv[0], 2, r3.size(), 2, &pb_emlrtECI,
                                        &st);
          iv[0] = r1.size(0);
          for (i2 = 0; i2 < k; i2++) {
            for (j = 0; j < c_loop_ub; j++) {
              out_temp[r1[j] + out_temp.size(0) * r2[i2]] = r3[j + iv[0] * i2];
            }
          }
          //  to save computation.weird
          Const_type = muDoubleScalarMin(nx, d);
          i2 = static_cast<int32_T>(Const_type + (1.0 - temp));
          emlrtForLoopVectorCheckR2021a(temp, 1.0, Const_type, mxDOUBLE_CLASS,
                                        i2, &n_emlrtRTEI, &st);
          for (j = 0; j < i2; j++) {
            uint32_T b_j;
            b_j = static_cast<uint32_T>(temp) + static_cast<uint32_T>(j);
            if ((static_cast<int32_T>(b_j) < 1) ||
                (static_cast<int32_T>(b_j) > out_temp.size(0))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_j), 1,
                                            out_temp.size(0), &jc_emlrtBCI,
                                            &st);
            }
            if ((static_cast<int32_T>(b_j) < 1) ||
                (static_cast<int32_T>(b_j) > i1)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_j), 1,
                                            static_cast<int32_T>(nx),
                                            &kc_emlrtBCI, &st);
            }
            if ((static_cast<int32_T>(b_j) < 1) ||
                (static_cast<int32_T>(b_j) > 10)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(b_j), 1, 10,
                                            &lc_emlrtBCI, &st);
            }
            c_i = ((static_cast<int32_T>(b_j) +
                    10 * (static_cast<int32_T>(b_j) - 1)) +
                   200 * b_i) -
                  1;
            Y[c_i] +=
                out_temp[(static_cast<int32_T>(b_j) +
                          out_temp.size(0) * (static_cast<int32_T>(b_j) - 1)) -
                         1];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
        } else if ((Const_type == 2.0) || (Const_type == 3.0)) {
          c_loop_ub = temp_index.size(1);
          a.set_size(&we_emlrtRTEI, &st, temp_index.size(1));
          for (i2 = 0; i2 < c_loop_ub; i2++) {
            a[i2] = temp_index[i2];
          }
          for (i2 = 0; i2 < c_loop_ub; i2++) {
            if (a[i2] != static_cast<int32_T>(muDoubleScalarFloor(a[i2]))) {
              emlrtIntegerCheckR2012b(a[i2], &w_emlrtDCI, &st);
            }
            j = static_cast<int32_T>(a[i2]);
            if ((j < 1) || (j > 10)) {
              emlrtDynamicBoundsCheckR2012b(j, 1, 10, &sb_emlrtBCI, &st);
            }
          }
          b_st.site = &qf_emlrtRSI;
          for (i2 = 0; i2 < c_loop_ub; i2++) {
            j = static_cast<int32_T>(a[i2]);
            if ((j < 1) || (j > loop_ub)) {
              emlrtDynamicBoundsCheckR2012b(j, 1, loop_ub, &vb_emlrtBCI, &b_st);
            }
          }
          for (i2 = 0; i2 < c_loop_ub; i2++) {
            j = static_cast<int32_T>(a[i2]);
            if ((j < 1) || (j > loop_ub_tmp)) {
              emlrtDynamicBoundsCheckR2012b(j, 1, loop_ub_tmp, &wb_emlrtBCI,
                                            &b_st);
            }
          }
          b_B.set_size(&xe_emlrtRTEI, &b_st, temp_index.size(1),
                       temp_index.size(1));
          for (i2 = 0; i2 < c_loop_ub; i2++) {
            for (j = 0; j < c_loop_ub; j++) {
              i3 = static_cast<int32_T>(a[j]);
              if ((i3 < 1) || (i3 > loop_ub_tmp)) {
                emlrtDynamicBoundsCheckR2012b(i3, 1, loop_ub_tmp, &ac_emlrtBCI,
                                              &b_st);
              }
              c_i = static_cast<int32_T>(a[i2]);
              if ((c_i < 1) || (c_i > loop_ub)) {
                emlrtDynamicBoundsCheckR2012b(c_i, 1, loop_ub, &bc_emlrtBCI,
                                              &b_st);
              }
              b_B[j + b_B.size(0) * i2] =
                  b_Q[(c_i + b_Q.size(0) * (i3 - 1)) - 1];
            }
          }
          //  Get the size of the matrices
          //  Initialize the resulting matrix C
          r3.set_size(&ye_emlrtRTEI, &b_st, temp_index.size(1),
                      temp_index.size(1));
          k = a.size(0) * a.size(0);
          for (i2 = 0; i2 < k; i2++) {
            r3[i2] = 0.0;
          }
          //  Calculate the product A * B, leveraging its symmetric property
          for (c_i = 0; c_i < c_loop_ub; c_i++) {
            for (j = 0; j <= c_i; j++) {
              for (k = 0; k < c_loop_ub; k++) {
                if (c_i + 1 > c_loop_ub) {
                  emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, c_loop_ub,
                                                &ob_emlrtBCI, &b_st);
                }
                if (k + 1 > c_loop_ub) {
                  emlrtDynamicBoundsCheckR2012b(k + 1, 1, c_loop_ub,
                                                &pb_emlrtBCI, &b_st);
                }
                if (c_i + 1 > r3.size(0)) {
                  emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, r3.size(0),
                                                &qc_emlrtBCI, &b_st);
                }
                if (j + 1 > r3.size(1)) {
                  emlrtDynamicBoundsCheckR2012b(j + 1, 1, r3.size(1),
                                                &rc_emlrtBCI, &b_st);
                }
                if (k + 1 > b_B.size(0)) {
                  emlrtDynamicBoundsCheckR2012b(k + 1, 1, b_B.size(0),
                                                &sc_emlrtBCI, &b_st);
                }
                if (j + 1 > b_B.size(1)) {
                  emlrtDynamicBoundsCheckR2012b(j + 1, 1, b_B.size(1),
                                                &tc_emlrtBCI, &b_st);
                }
                if (c_i + 1 > r3.size(0)) {
                  emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, r3.size(0),
                                                &uc_emlrtBCI, &b_st);
                }
                if (j + 1 > r3.size(1)) {
                  emlrtDynamicBoundsCheckR2012b(j + 1, 1, r3.size(1),
                                                &vc_emlrtBCI, &b_st);
                }
                r3[c_i + r3.size(0) * j] =
                    r3[c_i + r3.size(0) * j] +
                    b_Q[(static_cast<int32_T>(a[c_i]) +
                         b_Q.size(0) * (static_cast<int32_T>(a[k]) - 1)) -
                        1] *
                        b_B[k + b_B.size(0) * j];
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(&b_st);
                }
              }
              //  Use the computed value for the symmetric element
              if (c_i + 1 > r3.size(0)) {
                emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, r3.size(0),
                                              &mc_emlrtBCI, &b_st);
              }
              if (j + 1 > r3.size(1)) {
                emlrtDynamicBoundsCheckR2012b(j + 1, 1, r3.size(1),
                                              &nc_emlrtBCI, &b_st);
              }
              if (j + 1 > r3.size(0)) {
                emlrtDynamicBoundsCheckR2012b(j + 1, 1, r3.size(0),
                                              &oc_emlrtBCI, &b_st);
              }
              if (c_i + 1 > r3.size(1)) {
                emlrtDynamicBoundsCheckR2012b(c_i + 1, 1, r3.size(1),
                                              &pc_emlrtBCI, &b_st);
              }
              r3[j + r3.size(0) * c_i] = r3[c_i + r3.size(0) * j];
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(&b_st);
              }
            }
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&b_st);
            }
          }
          if ((r3.size(0) != temp_index.size(1)) &&
              ((temp_index.size(1) != 1) && (r3.size(0) != 1))) {
            emlrtDimSizeImpxCheckR2021b(temp_index.size(1), r3.size(0),
                                        &qb_emlrtECI, &st);
          }
          if ((temp_index.size(1) != r3.size(1)) &&
              ((temp_index.size(1) != 1) && (r3.size(1) != 1))) {
            emlrtDimSizeImpxCheckR2021b(temp_index.size(1), r3.size(1),
                                        &rb_emlrtECI, &st);
          }
          r1.set_size(&af_emlrtRTEI, &st, temp_index.size(1));
          r2.set_size(&bf_emlrtRTEI, &st, temp_index.size(1));
          for (i2 = 0; i2 < c_loop_ub; i2++) {
            Const_type = temp_index[i2];
            r1[i2] = static_cast<int32_T>(Const_type) - 1;
            r2[i2] = static_cast<int32_T>(Const_type) - 1;
          }
          if ((a.size(0) == r3.size(0)) && (a.size(0) == r3.size(1))) {
            b_B.set_size(&cf_emlrtRTEI, &st, temp_index.size(1),
                         temp_index.size(1));
            for (i2 = 0; i2 < c_loop_ub; i2++) {
              for (j = 0; j < c_loop_ub; j++) {
                b_B[j + b_B.size(0) * i2] =
                    Y[((static_cast<int32_T>(a[j]) +
                        10 * (static_cast<int32_T>(a[i2]) - 1)) +
                       200 * b_i) -
                      1] +
                    r3[j + r3.size(0) * i2];
              }
            }
          } else {
            b_st.site = &qf_emlrtRSI;
            binary_expand_op_20(b_st, b_B, Y, b_i, a, r3);
          }
          iv[0] = temp_index.size(1);
          iv[1] = temp_index.size(1);
          emlrtSubAssignSizeCheckR2012b(&iv[0], 2, b_B.size(), 2, &sb_emlrtECI,
                                        &st);
          iv[0] = temp_index.size(1);
          for (i2 = 0; i2 < c_loop_ub; i2++) {
            for (j = 0; j < c_loop_ub; j++) {
              Y[(r1[j] + 10 * r2[i2]) + 200 * b_i] = b_B[j + iv[0] * i2];
            }
          }
          //  a faster way is to treat diagbonal cases vs dense cases
          //  differently. Q(temp_index, temp_index) =
          //  dev_jacob_ball(z0(temp_index), proj_coefficients(1,temp),
          //  P(temp_index), alpha);
        }
        // update
        if (flag == 1) {
          exitg1 = true;
        } else {
          temp = d + 1.0;
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
      }
    }
    if (b_i + 1 != 1) {
      if (nx < 1.0) {
        c_loop_ub = 0;
      } else {
        if (nx > 10.0) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1, 10,
                                        &nb_emlrtBCI, (emlrtConstCTX)&sp);
        }
        c_loop_ub = i1;
      }
      st.site = &mf_emlrtRSI;
      b_Q.set_size(&gf_emlrtRTEI, &st, loop_ub_tmp, Q.size(0));
      for (i2 = 0; i2 < loop_ub; i2++) {
        for (j = 0; j < loop_ub_tmp; j++) {
          b_Q[j + b_Q.size(0) * i2] =
              Q[(i2 + Q.size(0) * j) + Q.size(0) * Q.size(1) * b_i];
        }
      }
      // WE want to compute the innerproduct of A and Q.
      // When col(A) \neq row(Q), we need an L such that only the first L column
      // multiply the top square block of Q that ahs size L
      r.set_size(&hf_emlrtRTEI, &st, 10, i1);
      k = 10 * i1;
      for (i2 = 0; i2 < k; i2++) {
        r[i2] = 0.0;
      }
      temp = 1.0;
      flag = 0;
      exitg1 = false;
      while ((!exitg1) && (temp <= 11.0)) {
        if (temp != static_cast<int32_T>(muDoubleScalarFloor(temp))) {
          emlrtIntegerCheckR2012b(temp, &v_emlrtDCI, &st);
        }
        if ((static_cast<int32_T>(temp) < 1) ||
            (static_cast<int32_T>(temp) > 11)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, 11,
                                        &rb_emlrtBCI, &st);
        }
        i2 = ((static_cast<int32_T>(temp) - 1) << 1) + 22 * b_i;
        if (proj_index_all[i2] == rtInf) {
          exitg1 = true;
        } else {
          d = proj_index_all[i2];
          if (d >= nx) {
            b_st.site = &ef_emlrtRSI;
            c_st.site = &bc_emlrtRSI;
            if (nx < temp) {
              temp_index.set_size(&jf_emlrtRTEI, &c_st, 1, 0);
            } else {
              k = static_cast<int32_T>(nx - temp);
              temp_index.set_size(&jf_emlrtRTEI, &c_st, 1, k + 1);
              for (j = 0; j <= k; j++) {
                temp_index[j] = temp + static_cast<real_T>(j);
              }
            }
            Const_type = proj_index_all[i2 + 1];
            flag = 1;
          } else {
            b_st.site = &ff_emlrtRSI;
            c_st.site = &bc_emlrtRSI;
            if (muDoubleScalarIsNaN(d)) {
              temp_index.set_size(&if_emlrtRTEI, &c_st, 1, 1);
              temp_index[0] = rtNaN;
            } else if (d < temp) {
              temp_index.set_size(&if_emlrtRTEI, &c_st, 1, 0);
            } else if (muDoubleScalarIsInf(d) && (temp == d)) {
              temp_index.set_size(&if_emlrtRTEI, &c_st, 1, 1);
              temp_index[0] = rtNaN;
            } else {
              k = static_cast<int32_T>(d - temp);
              temp_index.set_size(&if_emlrtRTEI, &c_st, 1, k + 1);
              for (j = 0; j <= k; j++) {
                temp_index[j] = temp + static_cast<real_T>(j);
              }
            }
            Const_type = proj_index_all[i2 + 1];
          }
          if (Const_type == 1.0) {
            //  Q(temp_index, temp_index)  =
            //  dev_jacob_box(z0(temp_index),proj_coefficients(2,temp_index)'
            //  ...
            //       , proj_coefficients(1, temp_index)', P(temp_index), alpha);
            k = temp_index.size(1);
            r4.set_size(&nf_emlrtRTEI, &st, 10, temp_index.size(1));
            for (i2 = 0; i2 < k; i2++) {
              j = static_cast<int32_T>(temp_index[i2]);
              for (i3 = 0; i3 < 10; i3++) {
                if (temp_index[i2] !=
                    static_cast<int32_T>(muDoubleScalarFloor(temp_index[i2]))) {
                  emlrtIntegerCheckR2012b(temp_index[i2], &y_emlrtDCI, &st);
                }
                if ((j < 1) || (j > 11)) {
                  emlrtDynamicBoundsCheckR2012b(j, 1, 11, &cc_emlrtBCI, &st);
                }
                r4[i3 + 10 * i2] = A[(i3 + 10 * (j - 1)) + 110 * b_i];
              }
            }
            b_B.set_size(&of_emlrtRTEI, &st, temp_index.size(1),
                         temp_index.size(1));
            for (i2 = 0; i2 < k; i2++) {
              for (j = 0; j < k; j++) {
                i3 = static_cast<int32_T>(temp_index[j]);
                if ((i3 < 1) || (i3 > loop_ub_tmp)) {
                  emlrtDynamicBoundsCheckR2012b(i3, 1, loop_ub_tmp,
                                                &ec_emlrtBCI, &st);
                }
                c_i = static_cast<int32_T>(temp_index[i2]);
                if ((c_i < 1) || (c_i > loop_ub)) {
                  emlrtDynamicBoundsCheckR2012b(c_i, 1, loop_ub, &fc_emlrtBCI,
                                                &st);
                }
                b_B[j + b_B.size(0) * i2] =
                    b_Q[(i3 + b_Q.size(0) * (c_i - 1)) - 1];
              }
            }
            b_st.site = &gf_emlrtRSI;
            coder::diag(b_st, b_B, a);
            if ((a.size(0) != temp_index.size(1)) &&
                ((temp_index.size(1) != 1) && (a.size(0) != 1))) {
              emlrtDimSizeImpxCheckR2021b(temp_index.size(1), a.size(0),
                                          &tb_emlrtECI, &st);
            }
            r1.set_size(&pf_emlrtRTEI, &st, temp_index.size(1));
            for (i2 = 0; i2 < k; i2++) {
              j = static_cast<int32_T>(temp_index[i2]);
              if ((j < 1) || (j > i1)) {
                emlrtDynamicBoundsCheckR2012b(j, 1, static_cast<int32_T>(nx),
                                              &hc_emlrtBCI, &st);
              }
              r1[i2] = j - 1;
            }
            if (a.size(0) == r4.size(1)) {
              k = r4.size(1);
              r5.set_size(&nf_emlrtRTEI, &st, 10, r4.size(1));
              for (i2 = 0; i2 < k; i2++) {
                for (j = 0; j <= 8; j += 2) {
                  __m128d r6;
                  r6 = _mm_loadu_pd(&r4[j + 10 * i2]);
                  _mm_storeu_pd(&r5[j + 10 * i2],
                                _mm_mul_pd(r6, _mm_set1_pd(a[i2])));
                }
              }
            } else {
              b_st.site = &gf_emlrtRSI;
              binary_expand_op_19(b_st, r5, r4, a);
            }
            iv[0] = 10;
            k = r1.size(0);
            iv[1] = r1.size(0);
            emlrtSubAssignSizeCheckR2012b(&iv[0], 2, r5.size(), 2, &ub_emlrtECI,
                                          &st);
            for (i2 = 0; i2 < k; i2++) {
              for (j = 0; j < 10; j++) {
                r[j + 10 * r1[i2]] = r5[j + 10 * i2];
              }
            }
            //  to save computation.
          } else if ((Const_type == 2.0) || (Const_type == 3.0)) {
            k = temp_index.size(1);
            a.set_size(&kf_emlrtRTEI, &st, temp_index.size(1));
            for (i2 = 0; i2 < k; i2++) {
              a[i2] = temp_index[i2];
            }
            for (i2 = 0; i2 < k; i2++) {
              if (a[i2] != static_cast<int32_T>(muDoubleScalarFloor(a[i2]))) {
                emlrtIntegerCheckR2012b(a[i2], &ab_emlrtDCI, &st);
              }
            }
            r1.set_size(&kf_emlrtRTEI, &st, temp_index.size(1));
            for (i2 = 0; i2 < k; i2++) {
              j = static_cast<int32_T>(a[i2]);
              if ((j < 1) || (j > i1)) {
                emlrtDynamicBoundsCheckR2012b(j, 1, static_cast<int32_T>(nx),
                                              &dc_emlrtBCI, &st);
              }
              r1[i2] = j - 1;
            }
            b_st.site = &hf_emlrtRSI;
            for (i2 = 0; i2 < k; i2++) {
              j = static_cast<int32_T>(a[i2]);
              if ((j < 1) || (j > loop_ub_tmp)) {
                emlrtDynamicBoundsCheckR2012b(j, 1, loop_ub_tmp, &gc_emlrtBCI,
                                              &b_st);
              }
            }
            for (i2 = 0; i2 < k; i2++) {
              j = static_cast<int32_T>(a[i2]);
              if ((j < 1) || (j > loop_ub)) {
                emlrtDynamicBoundsCheckR2012b(j, 1, loop_ub, &ic_emlrtBCI,
                                              &b_st);
              }
            }
            b_A.set_size(&lf_emlrtRTEI, &b_st, 10, temp_index.size(1));
            b_B.set_size(&mf_emlrtRTEI, &b_st, temp_index.size(1),
                         temp_index.size(1));
            for (i2 = 0; i2 < k; i2++) {
              for (j = 0; j < 10; j++) {
                b_A[j + 10 * i2] =
                    A[(j + 10 * (static_cast<int32_T>(a[i2]) - 1)) + 110 * b_i];
              }
              for (j = 0; j < k; j++) {
                b_B[j + b_B.size(0) * i2] =
                    b_Q[(static_cast<int32_T>(a[j]) +
                         b_Q.size(0) * (static_cast<int32_T>(a[i2]) - 1)) -
                        1];
              }
            }
            c_st.site = &if_emlrtRSI;
            coder::internal::blas::mtimes(c_st, b_A, b_B, r4);
            iv[0] = 10;
            k = r1.size(0);
            iv[1] = r1.size(0);
            emlrtSubAssignSizeCheckR2012b(&iv[0], 2, r4.size(), 2, &vb_emlrtECI,
                                          &st);
            for (i2 = 0; i2 < k; i2++) {
              for (j = 0; j < 10; j++) {
                r[j + 10 * r1[i2]] = r4[j + 10 * i2];
              }
            }
            //  a faster way is to treat diagbonal cases vs dense cases
            //  differently. Q(temp_index, temp_index) =
            //  dev_jacob_ball(z0(temp_index), proj_coefficients(1,temp),
            //  P(temp_index), alpha);
          }
          // update
          if (flag == 1) {
            exitg1 = true;
          } else {
            temp = d + 1.0;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
        }
      }
      iv[0] = 10;
      iv[1] = c_loop_ub;
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, r.size(), 2, &ob_emlrtECI,
                                    (emlrtCTX)&sp);
      for (i2 = 0; i2 < c_loop_ub; i2++) {
        for (j = 0; j < 10; j++) {
          Y[((j + 10 * i2) + 200 * b_i) + 100] = r[j + 10 * i2];
        }
      }
      // Remember to transpose Q
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (dev_H_sinv_Ht.cpp)
