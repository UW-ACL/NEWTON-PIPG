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
#include "dev_jacob_soc.h"
#include "dev_newtonpipg_g_with_timer_data.h"
#include "diag.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo eh_emlrtRSI{
    16,              // lineNo
    "dev_H_sinv_Ht", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pathName
};

static emlrtRSInfo fh_emlrtRSI{
    20,              // lineNo
    "dev_H_sinv_Ht", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pathName
};

static emlrtRSInfo gh_emlrtRSI{
    41,                     // lineNo
    "dev_Y_Q_Q_D_sum_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pathName
};

static emlrtRSInfo hh_emlrtRSI{
    45,                     // lineNo
    "dev_Y_Q_Q_D_sum_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pathName
};

static emlrtRSInfo ih_emlrtRSI{
    53,                     // lineNo
    "dev_Y_Q_Q_D_sum_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pathName
};

static emlrtRSInfo jh_emlrtRSI{
    58,                     // lineNo
    "dev_Y_Q_Q_D_sum_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pathName
};

static emlrtDCInfo kb_emlrtDCI{
    20,              // lineNo
    10,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo oc_emlrtBCI{
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

static emlrtECInfo ic_emlrtECI{
    -1,              // nDims
    20,              // lineNo
    4,               // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtDCInfo lb_emlrtDCI{
    7,                // lineNo
    18,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    1                                                // checkKind
};

static emlrtDCInfo mb_emlrtDCI{
    7,                // lineNo
    18,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    4                                                // checkKind
};

static emlrtDCInfo nb_emlrtDCI{
    20,              // lineNo
    20,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo rc_emlrtBCI{
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

static emlrtBCInfo vc_emlrtBCI{
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

static emlrtBCInfo be_emlrtBCI{
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

static emlrtBCInfo ce_emlrtBCI{
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

static emlrtECInfo wc_emlrtECI{
    -1,                     // nDims
    58,                     // lineNo
    9,                      // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtECInfo xc_emlrtECI{
    2,                      // nDims
    58,                     // lineNo
    37,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtECInfo yc_emlrtECI{
    1,                      // nDims
    58,                     // lineNo
    37,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtECInfo ad_emlrtECI{
    -1,                     // nDims
    53,                     // lineNo
    9,                      // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo ab_emlrtRTEI{
    54,                     // lineNo
    18,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtDCInfo cc_emlrtDCI{
    31,                     // lineNo
    18,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo dc_emlrtDCI{
    31,                     // lineNo
    18,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    4                                               // checkKind
};

static emlrtDCInfo ec_emlrtDCI{
    31,                     // lineNo
    1,                      // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo de_emlrtBCI{
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

static emlrtDCInfo fc_emlrtDCI{
    36,                     // lineNo
    22,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo ee_emlrtBCI{
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

static emlrtDCInfo gc_emlrtDCI{
    58,                     // lineNo
    39,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo hc_emlrtDCI{
    53,                     // lineNo
    18,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo fe_emlrtBCI{
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

static emlrtBCInfo ge_emlrtBCI{
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

static emlrtBCInfo he_emlrtBCI{
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

static emlrtBCInfo ie_emlrtBCI{
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

static emlrtBCInfo je_emlrtBCI{
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

static emlrtBCInfo ke_emlrtBCI{
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

static emlrtBCInfo le_emlrtBCI{
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

static emlrtBCInfo me_emlrtBCI{
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

static emlrtBCInfo ne_emlrtBCI{
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

static emlrtBCInfo oe_emlrtBCI{
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

static emlrtBCInfo pe_emlrtBCI{
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

static emlrtBCInfo qe_emlrtBCI{
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

static emlrtBCInfo re_emlrtBCI{
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

static emlrtBCInfo se_emlrtBCI{
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

static emlrtBCInfo te_emlrtBCI{
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

static emlrtBCInfo ue_emlrtBCI{
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

static emlrtBCInfo ve_emlrtBCI{
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

static emlrtBCInfo we_emlrtBCI{
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

static emlrtBCInfo xe_emlrtBCI{
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

static emlrtBCInfo ye_emlrtBCI{
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

static emlrtBCInfo af_emlrtBCI{
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

static emlrtRTEInfo jh_emlrtRTEI{
    16,              // lineNo
    88,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo kh_emlrtRTEI{
    20,              // lineNo
    46,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo lh_emlrtRTEI{
    20,              // lineNo
    20,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo nh_emlrtRTEI{
    17,               // lineNo
    9,                // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

static emlrtRTEInfo ph_emlrtRTEI{
    31,               // lineNo
    51,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

static emlrtRTEInfo sh_emlrtRTEI{
    29,               // lineNo
    35,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

static emlrtRTEInfo yi_emlrtRTEI{
    31,              // lineNo
    1,               // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo aj_emlrtRTEI{
    45,              // lineNo
    9,               // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo bj_emlrtRTEI{
    41,              // lineNo
    9,               // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo cj_emlrtRTEI{
    58,              // lineNo
    51,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo dj_emlrtRTEI{
    58,              // lineNo
    37,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo ej_emlrtRTEI{
    58,              // lineNo
    117,             // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo fj_emlrtRTEI{
    58,              // lineNo
    65,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo gj_emlrtRTEI{
    58,              // lineNo
    11,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo hj_emlrtRTEI{
    58,              // lineNo
    23,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo ij_emlrtRTEI{
    53,              // lineNo
    18,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo jj_emlrtRTEI{
    53,              // lineNo
    30,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo kj_emlrtRTEI{
    53,              // lineNo
    54,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

// Function Declarations
static void dev_Y_Q_Q_D_sum_unit(const emlrtStack &sp, real_T Y[100],
                                 const coder::array<real_T, 2U> &Q,
                                 const real_T proj_index[22], real_T L);

// Function Definitions
static void dev_Y_Q_Q_D_sum_unit(const emlrtStack &sp, real_T Y[100],
                                 const coder::array<real_T, 2U> &Q,
                                 const real_T proj_index[22], real_T L)
{
  emlrtProfilerSentinel b_profilerSentinel;
  emlrtProfilerSentinel profilerSentinel;
  coder::array<real_T, 2U> B;
  coder::array<real_T, 2U> b_Q;
  coder::array<real_T, 2U> out_temp;
  coder::array<real_T, 2U> r2;
  coder::array<real_T, 2U> temp_index;
  coder::array<real_T, 1U> a;
  coder::array<int32_T, 1U> r;
  coder::array<int32_T, 1U> r1;
  emlrtStack b_st;
  emlrtStack st;
  real_T temp;
  int32_T iv[2];
  int32_T flag;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  emlrtMEXProfilingFunctionEntryCPP((char_T *)c_dev_Y_Q_Q_D_sum_unit_complete,
                                    static_cast<boolean_T>(isMexOutdated),
                                    &profilerSentinel);
  // WE want to compute the innerproduct of Q and Q'.
  emlrtMEXProfilingStatement(1, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingStatement(2, static_cast<boolean_T>(isMexOutdated));
  if (!(L >= 0.0)) {
    emlrtNonNegativeCheckR2012b(L, &dc_emlrtDCI, (emlrtConstCTX)&sp);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(L));
  if (L != i) {
    emlrtIntegerCheckR2012b(L, &cc_emlrtDCI, (emlrtConstCTX)&sp);
  }
  i1 = static_cast<int32_T>(L);
  out_temp.set_size(&yi_emlrtRTEI, &sp, i1, i1);
  if (i1 != i) {
    emlrtIntegerCheckR2012b(L, &ec_emlrtDCI, (emlrtConstCTX)&sp);
  }
  loop_ub = i1 * i1;
  for (i = 0; i < loop_ub; i++) {
    out_temp[i] = 0.0;
  }
  emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
  temp = 1.0;
  emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
  flag = 0;
  emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
  exitg1 = false;
  while ((!exitg1) && (temp <= Q.size(1))) {
    emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
    if (temp != static_cast<int32_T>(muDoubleScalarFloor(temp))) {
      emlrtIntegerCheckR2012b(temp, &fc_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(temp) < 1) || (static_cast<int32_T>(temp) > 11)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, 11,
                                    &de_emlrtBCI, (emlrtConstCTX)&sp);
    }
    i = (static_cast<int32_T>(temp) - 1) << 1;
    if (proj_index[i] == rtInf) {
      emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
      exitg1 = true;
    } else {
      real_T Const_type;
      real_T d;
      int32_T i2;
      emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
      d = proj_index[i];
      if (d >= L) {
        emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
        st.site = &gh_emlrtRSI;
        b_st.site = &qb_emlrtRSI;
        if (L < temp) {
          temp_index.set_size(&bj_emlrtRTEI, &b_st, 1, 0);
        } else {
          loop_ub = static_cast<int32_T>(L - temp);
          temp_index.set_size(&bj_emlrtRTEI, &b_st, 1, loop_ub + 1);
          for (i2 = 0; i2 <= loop_ub; i2++) {
            temp_index[i2] = temp + static_cast<real_T>(i2);
          }
        }
        emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
        Const_type = proj_index[i + 1];
        emlrtMEXProfilingStatement(12, static_cast<boolean_T>(isMexOutdated));
        flag = 1;
        emlrtMEXProfilingStatement(16, static_cast<boolean_T>(isMexOutdated));
      } else {
        emlrtMEXProfilingStatement(13, static_cast<boolean_T>(isMexOutdated));
        emlrtMEXProfilingStatement(14, static_cast<boolean_T>(isMexOutdated));
        st.site = &hh_emlrtRSI;
        b_st.site = &qb_emlrtRSI;
        if (muDoubleScalarIsNaN(d)) {
          temp_index.set_size(&aj_emlrtRTEI, &b_st, 1, 1);
          temp_index[0] = rtNaN;
        } else if (d < temp) {
          temp_index.set_size(&aj_emlrtRTEI, &b_st, 1, 0);
        } else if (muDoubleScalarIsInf(d) && (temp == d)) {
          temp_index.set_size(&aj_emlrtRTEI, &b_st, 1, 1);
          temp_index[0] = rtNaN;
        } else {
          loop_ub = static_cast<int32_T>(d - temp);
          temp_index.set_size(&aj_emlrtRTEI, &b_st, 1, loop_ub + 1);
          for (i2 = 0; i2 <= loop_ub; i2++) {
            temp_index[i2] = temp + static_cast<real_T>(i2);
          }
        }
        emlrtMEXProfilingStatement(15, static_cast<boolean_T>(isMexOutdated));
        Const_type = proj_index[i + 1];
        emlrtMEXProfilingStatement(16, static_cast<boolean_T>(isMexOutdated));
      }
      emlrtMEXProfilingStatement(17, static_cast<boolean_T>(isMexOutdated));
      if (Const_type == 1.0) {
        int32_T b_loop_ub;
        //  Q(temp_index, temp_index)  =
        //  dev_jacob_box(z0(temp_index),proj_coefficients(2,temp_index)' ...
        //       , proj_coefficients(1, temp_index)', P(temp_index), alpha);
        emlrtMEXProfilingStatement(18, static_cast<boolean_T>(isMexOutdated));
        loop_ub = temp_index.size(1);
        a.set_size(&ij_emlrtRTEI, &sp, temp_index.size(1));
        for (i = 0; i < loop_ub; i++) {
          a[i] = temp_index[i];
        }
        r.set_size(&ij_emlrtRTEI, &sp, temp_index.size(1));
        for (i = 0; i < loop_ub; i++) {
          if (a[i] != static_cast<int32_T>(muDoubleScalarFloor(a[i]))) {
            emlrtIntegerCheckR2012b(a[i], &hc_emlrtDCI, (emlrtConstCTX)&sp);
          }
          i2 = static_cast<int32_T>(a[i]);
          if ((i2 < 1) || (i2 > out_temp.size(0))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, out_temp.size(0), &fe_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          r[i] = i2 - 1;
        }
        r1.set_size(&jj_emlrtRTEI, &sp, temp_index.size(1));
        for (i = 0; i < loop_ub; i++) {
          i2 = static_cast<int32_T>(a[i]);
          if ((i2 < 1) || (i2 > i1)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, static_cast<int32_T>(L),
                                          &ge_emlrtBCI, (emlrtConstCTX)&sp);
          }
          r1[i] = i2 - 1;
        }
        st.site = &ih_emlrtRSI;
        b_Q.set_size(&kj_emlrtRTEI, &st, temp_index.size(1),
                     temp_index.size(1));
        for (i = 0; i < loop_ub; i++) {
          for (i2 = 0; i2 < loop_ub; i2++) {
            int32_T b_i;
            int32_T k;
            b_i = static_cast<int32_T>(temp_index[i2]);
            if ((b_i < 1) || (b_i > Q.size(0))) {
              emlrtDynamicBoundsCheckR2012b(b_i, 1, Q.size(0), &je_emlrtBCI,
                                            &st);
            }
            k = static_cast<int32_T>(temp_index[i]);
            if ((k < 1) || (k > Q.size(1))) {
              emlrtDynamicBoundsCheckR2012b(k, 1, Q.size(1), &ke_emlrtBCI, &st);
            }
            b_Q[i2 + b_Q.size(0) * i] = Q[(b_i + Q.size(0) * (k - 1)) - 1];
          }
        }
        b_st.site = &ih_emlrtRSI;
        coder::diag(b_st, b_Q, a);
        loop_ub = a.size(0);
        for (i = 0; i < loop_ub; i++) {
          Const_type = a[i];
          a[i] = Const_type * Const_type;
        }
        st.site = &ih_emlrtRSI;
        coder::diag(st, a, b_Q);
        loop_ub = r.size(0);
        iv[0] = r.size(0);
        b_loop_ub = r1.size(0);
        iv[1] = r1.size(0);
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, b_Q.size(), 2, &ad_emlrtECI,
                                      (emlrtCTX)&sp);
        iv[0] = r.size(0);
        for (i = 0; i < b_loop_ub; i++) {
          for (i2 = 0; i2 < loop_ub; i2++) {
            out_temp[r[i2] + out_temp.size(0) * r1[i]] = b_Q[i2 + iv[0] * i];
          }
        }
        //  to save computation.weird
        emlrtMEXProfilingStatement(19, static_cast<boolean_T>(isMexOutdated));
        Const_type = muDoubleScalarMin(L, d);
        i = static_cast<int32_T>(Const_type + (1.0 - temp));
        emlrtForLoopVectorCheckR2021a(temp, 1.0, Const_type, mxDOUBLE_CLASS, i,
                                      &ab_emlrtRTEI, (emlrtConstCTX)&sp);
        for (b_loop_ub = 0; b_loop_ub < i; b_loop_ub++) {
          uint32_T j;
          j = static_cast<uint32_T>(temp) + static_cast<uint32_T>(b_loop_ub);
          emlrtMEXProfilingStatement(20, static_cast<boolean_T>(isMexOutdated));
          if ((static_cast<int32_T>(j) < 1) ||
              (static_cast<int32_T>(j) > out_temp.size(0))) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                          out_temp.size(0), &ne_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(j) < 1) || (static_cast<int32_T>(j) > i1)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                          static_cast<int32_T>(L), &oe_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(j) < 1) || (static_cast<int32_T>(j) > 10)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1, 10,
                                          &pe_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i2 = (static_cast<int32_T>(j) + 10 * (static_cast<int32_T>(j) - 1)) -
               1;
          Y[i2] += out_temp[(static_cast<int32_T>(j) +
                             out_temp.size(0) * (static_cast<int32_T>(j) - 1)) -
                            1];
          emlrtMEXProfilingStatement(21, static_cast<boolean_T>(isMexOutdated));
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }
        emlrtMEXProfilingStatement(24, static_cast<boolean_T>(isMexOutdated));
      } else {
        emlrtMEXProfilingStatement(22, static_cast<boolean_T>(isMexOutdated));
        if ((Const_type == 2.0) || (Const_type == 3.0)) {
          int32_T b_i;
          int32_T b_loop_ub;
          int32_T k;
          emlrtMEXProfilingStatement(23, static_cast<boolean_T>(isMexOutdated));
          loop_ub = temp_index.size(1);
          a.set_size(&cj_emlrtRTEI, &sp, temp_index.size(1));
          for (i = 0; i < loop_ub; i++) {
            a[i] = temp_index[i];
          }
          b_Q.set_size(&dj_emlrtRTEI, &sp, temp_index.size(1),
                       temp_index.size(1));
          for (i = 0; i < loop_ub; i++) {
            for (i2 = 0; i2 < loop_ub; i2++) {
              if (temp_index[i2] !=
                  static_cast<int32_T>(muDoubleScalarFloor(temp_index[i2]))) {
                emlrtIntegerCheckR2012b(temp_index[i2], &gc_emlrtDCI,
                                        (emlrtConstCTX)&sp);
              }
              b_i = static_cast<int32_T>(temp_index[i2]);
              if ((b_i < 1) || (b_i > 10)) {
                emlrtDynamicBoundsCheckR2012b(b_i, 1, 10, &ee_emlrtBCI,
                                              (emlrtConstCTX)&sp);
              }
              b_Q[i2 + b_Q.size(0) * i] =
                  Y[(b_i + 10 * (static_cast<int32_T>(a[i]) - 1)) - 1];
            }
          }
          st.site = &jh_emlrtRSI;
          for (i = 0; i < loop_ub; i++) {
            i2 = static_cast<int32_T>(a[i]);
            if ((i2 < 1) || (i2 > Q.size(0))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, Q.size(0), &he_emlrtBCI,
                                            &st);
            }
          }
          for (i = 0; i < loop_ub; i++) {
            i2 = static_cast<int32_T>(a[i]);
            if ((i2 < 1) || (i2 > Q.size(1))) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, Q.size(1), &ie_emlrtBCI,
                                            &st);
            }
          }
          B.set_size(&ej_emlrtRTEI, &st, temp_index.size(1),
                     temp_index.size(1));
          for (i = 0; i < loop_ub; i++) {
            for (i2 = 0; i2 < loop_ub; i2++) {
              b_i = static_cast<int32_T>(a[i2]);
              if ((b_i < 1) || (b_i > Q.size(1))) {
                emlrtDynamicBoundsCheckR2012b(b_i, 1, Q.size(1), &le_emlrtBCI,
                                              &st);
              }
              k = static_cast<int32_T>(a[i]);
              if ((k < 1) || (k > Q.size(0))) {
                emlrtDynamicBoundsCheckR2012b(k, 1, Q.size(0), &me_emlrtBCI,
                                              &st);
              }
              B[i2 + B.size(0) * i] = Q[(k + Q.size(0) * (b_i - 1)) - 1];
            }
          }
          emlrtMEXProfilingFunctionEntryCPP(
              (char_T *)c_dev_g_multiply_symmetric_comp,
              static_cast<boolean_T>(isMexOutdated), &b_profilerSentinel);
          //  Get the size of the matrices
          emlrtMEXProfilingStatement(1, static_cast<boolean_T>(isMexOutdated));
          emlrtMEXProfilingStatement(2, static_cast<boolean_T>(isMexOutdated));
          //  Initialize the resulting matrix C
          emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
          r2.set_size(&fj_emlrtRTEI, &st, temp_index.size(1),
                      temp_index.size(1));
          b_loop_ub = a.size(0) * a.size(0);
          for (i = 0; i < b_loop_ub; i++) {
            r2[i] = 0.0;
          }
          //  Calculate the product A * B, leveraging its symmetric property
          emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
          for (b_i = 0; b_i < loop_ub; b_i++) {
            emlrtMEXProfilingStatement(5,
                                       static_cast<boolean_T>(isMexOutdated));
            for (b_loop_ub = 0; b_loop_ub <= b_i; b_loop_ub++) {
              emlrtMEXProfilingStatement(6,
                                         static_cast<boolean_T>(isMexOutdated));
              for (k = 0; k < loop_ub; k++) {
                emlrtMEXProfilingStatement(
                    7, static_cast<boolean_T>(isMexOutdated));
                if (b_i + 1 > loop_ub) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, loop_ub,
                                                &ce_emlrtBCI, &st);
                }
                if (k + 1 > loop_ub) {
                  emlrtDynamicBoundsCheckR2012b(k + 1, 1, loop_ub, &be_emlrtBCI,
                                                &st);
                }
                if (b_i + 1 > r2.size(0)) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, r2.size(0),
                                                &ue_emlrtBCI, &st);
                }
                if (b_loop_ub + 1 > r2.size(1)) {
                  emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1, r2.size(1),
                                                &ve_emlrtBCI, &st);
                }
                if (k + 1 > B.size(0)) {
                  emlrtDynamicBoundsCheckR2012b(k + 1, 1, B.size(0),
                                                &we_emlrtBCI, &st);
                }
                if (b_loop_ub + 1 > B.size(1)) {
                  emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1, B.size(1),
                                                &xe_emlrtBCI, &st);
                }
                if (b_i + 1 > r2.size(0)) {
                  emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, r2.size(0),
                                                &ye_emlrtBCI, &st);
                }
                if (b_loop_ub + 1 > r2.size(1)) {
                  emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1, r2.size(1),
                                                &af_emlrtBCI, &st);
                }
                r2[b_i + r2.size(0) * b_loop_ub] =
                    r2[b_i + r2.size(0) * b_loop_ub] +
                    Q[(static_cast<int32_T>(a[b_i]) +
                       Q.size(0) * (static_cast<int32_T>(a[k]) - 1)) -
                      1] *
                        B[k + B.size(0) * b_loop_ub];
                emlrtMEXProfilingStatement(
                    8, static_cast<boolean_T>(isMexOutdated));
                if (*emlrtBreakCheckR2012bFlagVar != 0) {
                  emlrtBreakCheckR2012b(&st);
                }
              }
              //  Use the computed value for the symmetric element
              emlrtMEXProfilingStatement(9,
                                         static_cast<boolean_T>(isMexOutdated));
              if (b_i + 1 > r2.size(0)) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, r2.size(0),
                                              &qe_emlrtBCI, &st);
              }
              if (b_loop_ub + 1 > r2.size(1)) {
                emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1, r2.size(1),
                                              &re_emlrtBCI, &st);
              }
              if (b_loop_ub + 1 > r2.size(0)) {
                emlrtDynamicBoundsCheckR2012b(b_loop_ub + 1, 1, r2.size(0),
                                              &se_emlrtBCI, &st);
              }
              if (b_i + 1 > r2.size(1)) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, r2.size(1),
                                              &te_emlrtBCI, &st);
              }
              r2[b_loop_ub + r2.size(0) * b_i] =
                  r2[b_i + r2.size(0) * b_loop_ub];
              emlrtMEXProfilingStatement(10,
                                         static_cast<boolean_T>(isMexOutdated));
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(&st);
              }
            }
            emlrtMEXProfilingStatement(11,
                                       static_cast<boolean_T>(isMexOutdated));
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
          emlrtMEXProfilingStatement(12, static_cast<boolean_T>(isMexOutdated));
          emlrtMEXProfilingFunctionExitCPP(&b_profilerSentinel);
          if ((r2.size(0) != temp_index.size(1)) &&
              ((temp_index.size(1) != 1) && (r2.size(0) != 1))) {
            emlrtDimSizeImpxCheckR2021b(temp_index.size(1), r2.size(0),
                                        &yc_emlrtECI, (emlrtConstCTX)&sp);
          }
          if ((temp_index.size(1) != r2.size(1)) &&
              ((temp_index.size(1) != 1) && (r2.size(1) != 1))) {
            emlrtDimSizeImpxCheckR2021b(temp_index.size(1), r2.size(1),
                                        &xc_emlrtECI, (emlrtConstCTX)&sp);
          }
          r.set_size(&gj_emlrtRTEI, &sp, temp_index.size(1));
          r1.set_size(&hj_emlrtRTEI, &sp, temp_index.size(1));
          for (i = 0; i < loop_ub; i++) {
            Const_type = temp_index[i];
            r[i] = static_cast<int32_T>(Const_type) - 1;
            r1[i] = static_cast<int32_T>(Const_type) - 1;
          }
          if ((b_Q.size(0) == r2.size(0)) && (b_Q.size(1) == r2.size(1))) {
            b_loop_ub = b_Q.size(0) * b_Q.size(1);
            b_i = (b_loop_ub / 2) << 1;
            k = b_i - 2;
            for (i = 0; i <= k; i += 2) {
              __m128d r3;
              __m128d r4;
              r3 = _mm_loadu_pd(&b_Q[i]);
              r4 = _mm_loadu_pd(&r2[i]);
              _mm_storeu_pd(&b_Q[i], _mm_add_pd(r3, r4));
            }
            for (i = b_i; i < b_loop_ub; i++) {
              b_Q[i] = b_Q[i] + r2[i];
            }
          } else {
            st.site = &jh_emlrtRSI;
            plus(st, b_Q, r2);
          }
          iv[0] = temp_index.size(1);
          iv[1] = temp_index.size(1);
          emlrtSubAssignSizeCheckR2012b(&iv[0], 2, b_Q.size(), 2, &wc_emlrtECI,
                                        (emlrtCTX)&sp);
          iv[0] = temp_index.size(1);
          for (i = 0; i < loop_ub; i++) {
            for (i2 = 0; i2 < loop_ub; i2++) {
              Y[r[i2] + 10 * r1[i]] = b_Q[i2 + iv[0] * i];
            }
          }
          //  a faster way is to treat diagbonal cases vs dense cases
          //  differently. Q(temp_index, temp_index) =
          //  dev_jacob_ball(z0(temp_index), proj_coefficients(1,temp),
          //  P(temp_index), alpha);
          emlrtMEXProfilingStatement(24, static_cast<boolean_T>(isMexOutdated));
        }
      }
      // update
      emlrtMEXProfilingStatement(25, static_cast<boolean_T>(isMexOutdated));
      if (flag == 1) {
        emlrtMEXProfilingStatement(26, static_cast<boolean_T>(isMexOutdated));
        exitg1 = true;
      } else {
        emlrtMEXProfilingStatement(28, static_cast<boolean_T>(isMexOutdated));
        temp = d + 1.0;
        emlrtMEXProfilingStatement(29, static_cast<boolean_T>(isMexOutdated));
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }
    }
  }
  emlrtMEXProfilingStatement(30, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingFunctionExitCPP(&profilerSentinel);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void dev_H_sinv_Ht(const emlrtStack &sp, const real_T A[3190],
                   const coder::array<real_T, 3U> &Q,
                   const real_T proj_index_all[660], real_T nx, real_T Y[5800])
{
  emlrtProfilerSentinel b_profilerSentinel;
  emlrtProfilerSentinel c_profilerSentinel;
  emlrtProfilerSentinel profilerSentinel;
  coder::array<real_T, 2U> b_A;
  coder::array<real_T, 2U> b_Q;
  coder::array<real_T, 2U> c_Q;
  coder::array<real_T, 2U> r;
  coder::array<real_T, 2U> r3;
  coder::array<real_T, 2U> temp_index;
  coder::array<real_T, 1U> b_tmp;
  coder::array<real_T, 1U> r1;
  coder::array<int8_T, 1U> r2;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T C[100];
  int32_T iv[2];
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  emlrtMEXProfilingFunctionEntryCPP((char_T *)dev_H_sinv_Ht_complete_name,
                                    static_cast<boolean_T>(isMexOutdated),
                                    &profilerSentinel);
  // Remember the symetric in multiplication.
  //  the Y matrix is a 4 dimensional matrix. t is for the t th row HsHt and
  //  the third index is for the location. 1 for diag and 2 for the subdiag
  //  below the diag.
  //  Y(:, :, 2, t) is the block on tth row and t-1 column
  //  hense Y(:, :, 2, 1) = 0, t has realization for only t >0
  emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
  std::memset(&Y[0], 0, 5800U * sizeof(real_T));
  emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
  loop_ub_tmp = Q.size(1);
  loop_ub = Q.size(0);
  for (int32_T i{0}; i < 29; i++) {
    real_T B[110];
    real_T d;
    int32_T b_i;
    int32_T c_i;
    int32_T i1;
    int32_T j;
    int32_T k;
    //  Y(:,:,1, i) = dev_g_multiply_symmetric(A(:, :, i), A(:, :,i)');
    emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
    for (b_i = 0; b_i < 10; b_i++) {
      for (i1 = 0; i1 < 11; i1++) {
        B[i1 + 11 * b_i] = A[(b_i + 10 * i1) + 110 * i];
      }
    }
    emlrtMEXProfilingFunctionEntryCPP((char_T *)c_dev_g_multiply_symmetric_comp,
                                      static_cast<boolean_T>(isMexOutdated),
                                      &b_profilerSentinel);
    //  Get the size of the matrices
    //  Initialize the resulting matrix C
    emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
    std::memset(&C[0], 0, 100U * sizeof(real_T));
    //  Calculate the product A * B, leveraging its symmetric property
    emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
    for (c_i = 0; c_i < 10; c_i++) {
      emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
      for (j = 0; j <= c_i; j++) {
        emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
        b_i = c_i + 10 * j;
        d = C[b_i];
        for (k = 0; k < 11; k++) {
          emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
          d += A[(c_i + 10 * k) + 110 * i] * B[k + 11 * j];
          emlrtMEXProfilingStatement(8, static_cast<boolean_T>(isMexOutdated));
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }
        C[b_i] = d;
        //  Use the computed value for the symmetric element
        emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
        C[j + 10 * c_i] = C[b_i];
        emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }
      emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
    emlrtMEXProfilingStatement(12, static_cast<boolean_T>(isMexOutdated));
    emlrtMEXProfilingFunctionExitCPP(&b_profilerSentinel);
    std::copy(&C[0], &C[100], &Y[i * 200]);
    b_Q.set_size(&jh_emlrtRTEI, &sp, Q.size(0), loop_ub_tmp);
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_Q[i1 + b_Q.size(0) * b_i] =
            Q[(i1 + Q.size(0) * b_i) + Q.size(0) * Q.size(1) * (i + 1)];
      }
    }
    st.site = &eh_emlrtRSI;
    dev_Y_Q_Q_D_sum_unit(st, &Y[200 * i], b_Q, &proj_index_all[22 * (i + 1)],
                         nx);
    emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
    if (i + 1 == 1) {
      emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
    } else {
      real_T temp;
      int32_T b_loop_ub;
      int32_T flag;
      boolean_T exitg1;
      emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
      if (nx < 1.0) {
        k = 0;
      } else {
        if (nx != static_cast<int32_T>(muDoubleScalarFloor(nx))) {
          emlrtIntegerCheckR2012b(nx, &kb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(nx) < 1) || (static_cast<int32_T>(nx) > 10)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1, 10,
                                        &oc_emlrtBCI, (emlrtConstCTX)&sp);
        }
        k = static_cast<int32_T>(nx);
      }
      st.site = &fh_emlrtRSI;
      b_Q.set_size(&kh_emlrtRTEI, &st, loop_ub_tmp, Q.size(0));
      for (b_i = 0; b_i < loop_ub; b_i++) {
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          b_Q[i1 + b_Q.size(0) * b_i] =
              Q[(b_i + Q.size(0) * i1) + Q.size(0) * Q.size(1) * i];
        }
      }
      emlrtMEXProfilingFunctionEntryCPP((char_T *)dev_A_Q_D_unit_complete_name,
                                        static_cast<boolean_T>(isMexOutdated),
                                        &c_profilerSentinel);
      // WE want to compute the innerproduct of A and Q.
      // When col(A) \neq row(Q), we need an L such that only the first L column
      // multiply the top square block of Q that ahs size L
      emlrtMEXProfilingStatement(2, static_cast<boolean_T>(isMexOutdated));
      if (!(nx >= 0.0)) {
        emlrtNonNegativeCheckR2012b(nx, &mb_emlrtDCI, &st);
      }
      d = static_cast<int32_T>(muDoubleScalarFloor(nx));
      if (nx != d) {
        emlrtIntegerCheckR2012b(nx, &lb_emlrtDCI, &st);
      }
      r.set_size(&lh_emlrtRTEI, &st, 10, static_cast<int32_T>(nx));
      if (nx != d) {
        emlrtIntegerCheckR2012b(nx, &nb_emlrtDCI, &st);
      }
      b_loop_ub = 10 * static_cast<int32_T>(nx);
      for (b_i = 0; b_i < b_loop_ub; b_i++) {
        r[b_i] = 0.0;
      }
      emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
      temp = 1.0;
      emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
      flag = 0;
      emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
      exitg1 = false;
      while ((!exitg1) && (temp <= 11.0)) {
        emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
        if (temp != static_cast<int32_T>(muDoubleScalarFloor(temp))) {
          emlrtIntegerCheckR2012b(temp, &ob_emlrtDCI, &st);
        }
        if ((static_cast<int32_T>(temp) < 1) ||
            (static_cast<int32_T>(temp) > 11)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, 11,
                                        &pc_emlrtBCI, &st);
        }
        b_i = ((static_cast<int32_T>(temp) - 1) << 1) + 22 * i;
        if (proj_index_all[b_i] == rtInf) {
          emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
          exitg1 = true;
        } else {
          emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
          d = proj_index_all[b_i];
          if (d >= nx) {
            emlrtMEXProfilingStatement(10,
                                       static_cast<boolean_T>(isMexOutdated));
            b_st.site = &wg_emlrtRSI;
            c_st.site = &qb_emlrtRSI;
            if (nx < temp) {
              temp_index.set_size(&nh_emlrtRTEI, &c_st, 1, 0);
            } else {
              b_loop_ub = static_cast<int32_T>(nx - temp);
              temp_index.set_size(&nh_emlrtRTEI, &c_st, 1, b_loop_ub + 1);
              for (i1 = 0; i1 <= b_loop_ub; i1++) {
                temp_index[i1] = temp + static_cast<real_T>(i1);
              }
            }
            emlrtMEXProfilingStatement(11,
                                       static_cast<boolean_T>(isMexOutdated));
            temp = proj_index_all[b_i + 1];
            emlrtMEXProfilingStatement(12,
                                       static_cast<boolean_T>(isMexOutdated));
            flag = 1;
            emlrtMEXProfilingStatement(16,
                                       static_cast<boolean_T>(isMexOutdated));
          } else {
            emlrtMEXProfilingStatement(13,
                                       static_cast<boolean_T>(isMexOutdated));
            emlrtMEXProfilingStatement(14,
                                       static_cast<boolean_T>(isMexOutdated));
            b_st.site = &xg_emlrtRSI;
            c_st.site = &qb_emlrtRSI;
            if (muDoubleScalarIsNaN(d)) {
              temp_index.set_size(&mh_emlrtRTEI, &c_st, 1, 1);
              temp_index[0] = rtNaN;
            } else if (d < temp) {
              temp_index.set_size(&mh_emlrtRTEI, &c_st, 1, 0);
            } else if (muDoubleScalarIsInf(d) && (temp == d)) {
              temp_index.set_size(&mh_emlrtRTEI, &c_st, 1, 1);
              temp_index[0] = rtNaN;
            } else {
              b_loop_ub = static_cast<int32_T>(d - temp);
              temp_index.set_size(&mh_emlrtRTEI, &c_st, 1, b_loop_ub + 1);
              for (i1 = 0; i1 <= b_loop_ub; i1++) {
                temp_index[i1] = temp + static_cast<real_T>(i1);
              }
            }
            emlrtMEXProfilingStatement(15,
                                       static_cast<boolean_T>(isMexOutdated));
            temp = proj_index_all[b_i + 1];
            emlrtMEXProfilingStatement(16,
                                       static_cast<boolean_T>(isMexOutdated));
          }
          emlrtMEXProfilingStatement(17, static_cast<boolean_T>(isMexOutdated));
          if (temp == 1.0) {
            //  Q(temp_index, temp_index)  =
            //  dev_jacob_box(z0(temp_index),proj_coefficients(2,temp_index)'
            //  ...
            //       , proj_coefficients(1, temp_index)', P(temp_index), alpha);
            emlrtMEXProfilingStatement(18,
                                       static_cast<boolean_T>(isMexOutdated));
            b_loop_ub = temp_index.size(1);
            r1.set_size(&sh_emlrtRTEI, &st, temp_index.size(1));
            for (b_i = 0; b_i < b_loop_ub; b_i++) {
              r1[b_i] = temp_index[b_i];
            }
            for (b_i = 0; b_i < b_loop_ub; b_i++) {
              if (r1[b_i] !=
                  static_cast<int32_T>(muDoubleScalarFloor(r1[b_i]))) {
                emlrtIntegerCheckR2012b(r1[b_i], &qb_emlrtDCI, &st);
              }
              i1 = static_cast<int32_T>(r1[b_i]);
              if ((i1 < 1) || (i1 > 11)) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, 11, &qc_emlrtBCI, &st);
              }
            }
            c_Q.set_size(&th_emlrtRTEI, &st, temp_index.size(1),
                         temp_index.size(1));
            for (b_i = 0; b_i < b_loop_ub; b_i++) {
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                c_i = static_cast<int32_T>(temp_index[i1]);
                if ((c_i < 1) || (c_i > loop_ub_tmp)) {
                  emlrtDynamicBoundsCheckR2012b(c_i, 1, loop_ub_tmp,
                                                &sc_emlrtBCI, &st);
                }
                j = static_cast<int32_T>(temp_index[b_i]);
                if ((j < 1) || (j > loop_ub)) {
                  emlrtDynamicBoundsCheckR2012b(j, 1, loop_ub, &tc_emlrtBCI,
                                                &st);
                }
                c_Q[i1 + c_Q.size(0) * b_i] =
                    b_Q[(c_i + b_Q.size(0) * (j - 1)) - 1];
              }
            }
            b_st.site = &yg_emlrtRSI;
            coder::diag(b_st, c_Q, b_tmp);
            if ((b_tmp.size(0) != temp_index.size(1)) &&
                ((temp_index.size(1) != 1) && (b_tmp.size(0) != 1))) {
              emlrtDimSizeImpxCheckR2021b(temp_index.size(1), b_tmp.size(0),
                                          &jc_emlrtECI, &st);
            }
            r2.set_size(&uh_emlrtRTEI, &st, temp_index.size(1));
            for (b_i = 0; b_i < b_loop_ub; b_i++) {
              i1 = static_cast<int8_T>(r1[b_i]);
              if ((i1 < 1) || (i1 > static_cast<int32_T>(nx))) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, static_cast<int32_T>(nx),
                                              &vc_emlrtBCI, &st);
              }
              r2[b_i] = static_cast<int8_T>(i1 - 1);
            }
            if (r1.size(0) == b_tmp.size(0)) {
              r3.set_size(&vh_emlrtRTEI, &st, 10, temp_index.size(1));
              for (b_i = 0; b_i < b_loop_ub; b_i++) {
                for (i1 = 0; i1 <= 8; i1 += 2) {
                  _mm_storeu_pd(
                      &r3[i1 + 10 * b_i],
                      _mm_mul_pd(
                          _mm_loadu_pd(
                              &A[(i1 +
                                  10 * (static_cast<int32_T>(r1[b_i]) - 1)) +
                                 110 * i]),
                          _mm_set1_pd(b_tmp[b_i])));
                }
              }
            } else {
              b_st.site = &yg_emlrtRSI;
              binary_expand_op_29(b_st, r3, A, i, r1, b_tmp);
            }
            iv[0] = 10;
            b_loop_ub = r2.size(0);
            iv[1] = r2.size(0);
            emlrtSubAssignSizeCheckR2012b(&iv[0], 2, r3.size(), 2, &kc_emlrtECI,
                                          &st);
            for (b_i = 0; b_i < b_loop_ub; b_i++) {
              for (i1 = 0; i1 < 10; i1++) {
                r[i1 + 10 * r2[b_i]] = r3[i1 + 10 * b_i];
              }
            }
            //  to save computation.
            emlrtMEXProfilingStatement(21,
                                       static_cast<boolean_T>(isMexOutdated));
          } else {
            emlrtMEXProfilingStatement(19,
                                       static_cast<boolean_T>(isMexOutdated));
            if ((temp == 2.0) || (temp == 3.0)) {
              emlrtMEXProfilingStatement(20,
                                         static_cast<boolean_T>(isMexOutdated));
              b_loop_ub = temp_index.size(1);
              r1.set_size(&oh_emlrtRTEI, &st, temp_index.size(1));
              for (b_i = 0; b_i < b_loop_ub; b_i++) {
                if (temp_index[b_i] != static_cast<int32_T>(muDoubleScalarFloor(
                                           temp_index[b_i]))) {
                  emlrtIntegerCheckR2012b(temp_index[b_i], &pb_emlrtDCI, &st);
                }
                r1[b_i] = temp_index[b_i];
              }
              c_i = r1.size(0);
              r2.set_size(&oh_emlrtRTEI, &st, r1.size(0));
              for (b_i = 0; b_i < c_i; b_i++) {
                i1 = static_cast<int8_T>(r1[b_i]);
                if ((i1 < 1) || (i1 > static_cast<int32_T>(nx))) {
                  emlrtDynamicBoundsCheckR2012b(i1, 1, static_cast<int32_T>(nx),
                                                &rc_emlrtBCI, &st);
                }
                r2[b_i] = static_cast<int8_T>(i1 - 1);
              }
              b_st.site = &ah_emlrtRSI;
              b_tmp.set_size(&ph_emlrtRTEI, &b_st, temp_index.size(1));
              for (b_i = 0; b_i < b_loop_ub; b_i++) {
                b_tmp[b_i] = temp_index[b_i];
              }
              for (b_i = 0; b_i < b_loop_ub; b_i++) {
                i1 = static_cast<int32_T>(b_tmp[b_i]);
                if ((i1 < 1) || (i1 > loop_ub_tmp)) {
                  emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub_tmp,
                                                &uc_emlrtBCI, &b_st);
                }
              }
              for (b_i = 0; b_i < b_loop_ub; b_i++) {
                i1 = static_cast<int32_T>(b_tmp[b_i]);
                if ((i1 < 1) || (i1 > loop_ub)) {
                  emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub, &wc_emlrtBCI,
                                                &b_st);
                }
              }
              c_st.site = &r_emlrtRSI;
              if (r1.size(0) != b_tmp.size(0)) {
                if (b_tmp.size(0) == 1) {
                  emlrtErrorWithMessageIdR2018a(
                      &c_st, &g_emlrtRTEI,
                      "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                      "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
                } else {
                  emlrtErrorWithMessageIdR2018a(&c_st, &f_emlrtRTEI,
                                                "MATLAB:innerdim",
                                                "MATLAB:innerdim", 0);
                }
              }
              b_A.set_size(&qh_emlrtRTEI, &b_st, 10, r1.size(0));
              c_Q.set_size(&rh_emlrtRTEI, &b_st, temp_index.size(1),
                           temp_index.size(1));
              for (b_i = 0; b_i < c_i; b_i++) {
                for (i1 = 0; i1 < 10; i1++) {
                  b_A[i1 + 10 * b_i] =
                      A[(i1 + 10 * (static_cast<int32_T>(r1[b_i]) - 1)) +
                        110 * i];
                }
                for (i1 = 0; i1 < b_loop_ub; i1++) {
                  c_Q[i1 + c_Q.size(0) * b_i] =
                      b_Q[(static_cast<int32_T>(b_tmp[i1]) +
                           b_Q.size(0) *
                               (static_cast<int32_T>(b_tmp[b_i]) - 1)) -
                          1];
                }
              }
              c_st.site = &bh_emlrtRSI;
              coder::internal::blas::mtimes(c_st, b_A, c_Q, r3);
              iv[0] = 10;
              b_loop_ub = r2.size(0);
              iv[1] = r2.size(0);
              emlrtSubAssignSizeCheckR2012b(&iv[0], 2, r3.size(), 2,
                                            &lc_emlrtECI, &st);
              for (b_i = 0; b_i < b_loop_ub; b_i++) {
                for (i1 = 0; i1 < 10; i1++) {
                  r[i1 + 10 * r2[b_i]] = r3[i1 + 10 * b_i];
                }
              }
              //  a faster way is to treat diagbonal cases vs dense cases
              //  differently. Q(temp_index, temp_index) =
              //  dev_jacob_ball(z0(temp_index), proj_coefficients(1,temp),
              //  P(temp_index), alpha);
              emlrtMEXProfilingStatement(21,
                                         static_cast<boolean_T>(isMexOutdated));
            }
          }
          // update
          emlrtMEXProfilingStatement(22, static_cast<boolean_T>(isMexOutdated));
          if (flag == 1) {
            emlrtMEXProfilingStatement(23,
                                       static_cast<boolean_T>(isMexOutdated));
            exitg1 = true;
          } else {
            emlrtMEXProfilingStatement(25,
                                       static_cast<boolean_T>(isMexOutdated));
            temp = d + 1.0;
            emlrtMEXProfilingStatement(26,
                                       static_cast<boolean_T>(isMexOutdated));
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
        }
      }
      emlrtMEXProfilingFunctionExitCPP(&c_profilerSentinel);
      iv[0] = 10;
      iv[1] = k;
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, r.size(), 2, &ic_emlrtECI,
                                    (emlrtCTX)&sp);
      for (b_i = 0; b_i < k; b_i++) {
        for (i1 = 0; i1 < 10; i1++) {
          Y[((i1 + 10 * b_i) + 200 * i) + 100] = r[i1 + 10 * b_i];
        }
      }
      // Remember to transpose Q
      emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingFunctionExitCPP(&profilerSentinel);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (dev_H_sinv_Ht.cpp)
