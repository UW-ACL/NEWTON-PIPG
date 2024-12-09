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
#include "dev_g_multiply_symmetric.h"
#include "dev_newtonpipg_compare_withtimer_data.h"
#include "diag.h"
#include "mtimes.h"
#include "power.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo bf_emlrtRSI{
    16,              // lineNo
    "dev_H_sinv_Ht", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pathName
};

static emlrtRSInfo cf_emlrtRSI{
    20,              // lineNo
    "dev_H_sinv_Ht", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pathName
};

static emlrtRSInfo df_emlrtRSI{
    48,                     // lineNo
    "dev_Y_Q_Q_D_sum_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pathName
};

static emlrtRSInfo ef_emlrtRSI{
    53,                     // lineNo
    "dev_Y_Q_Q_D_sum_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pathName
};

static emlrtRSInfo ff_emlrtRSI{
    63,                     // lineNo
    "dev_Y_Q_Q_D_sum_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pathName
};

static emlrtRSInfo gf_emlrtRSI{
    68,                     // lineNo
    "dev_Y_Q_Q_D_sum_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pathName
};

static emlrtDCInfo kc_emlrtDCI{
    20,              // lineNo
    11,              // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo vd_emlrtBCI{
    1,               // iFirst
    10,              // iLast
    20,              // lineNo
    11,              // colNo
    "Y",             // aName
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtECInfo lc_emlrtECI{
    -1,              // nDims
    20,              // lineNo
    5,               // colNo
    "dev_H_sinv_Ht", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtBCInfo qe_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    23,               // lineNo
    20,               // colNo
    "out",            // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

static emlrtBCInfo re_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    23,               // lineNo
    26,               // colNo
    "out",            // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

static emlrtBCInfo se_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    25,               // lineNo
    20,               // colNo
    "out",            // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

static emlrtBCInfo te_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    25,               // lineNo
    26,               // colNo
    "out",            // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

static emlrtBCInfo ue_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    34,               // lineNo
    20,               // colNo
    "out",            // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

static emlrtBCInfo ve_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    34,               // lineNo
    26,               // colNo
    "out",            // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

static emlrtBCInfo we_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    36,               // lineNo
    20,               // colNo
    "out",            // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

static emlrtBCInfo xe_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    36,               // lineNo
    26,               // colNo
    "out",            // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

static emlrtDCInfo uc_emlrtDCI{
    7,                // lineNo
    18,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    1                                                // checkKind
};

static emlrtDCInfo vc_emlrtDCI{
    7,                // lineNo
    18,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    4                                                // checkKind
};

static emlrtBCInfo wg_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    48,                     // lineNo
    54,                     // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo xg_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    48,                     // lineNo
    60,                     // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo yg_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    48,                     // lineNo
    63,                     // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ah_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    48,                     // lineNo
    69,                     // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtRTEInfo gb_emlrtRTEI{
    49,                     // lineNo
    21,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtBCInfo bh_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    48,                     // lineNo
    22,                     // colNo
    "out_temp",             // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ch_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    48,                     // lineNo
    28,                     // colNo
    "out_temp",             // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo dh_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    48,                     // lineNo
    31,                     // colNo
    "out_temp",             // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo eh_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    48,                     // lineNo
    37,                     // colNo
    "out_temp",             // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtECInfo dd_emlrtECI{
    -1,                     // nDims
    48,                     // lineNo
    13,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtBCInfo fh_emlrtBCI{
    1,                      // iFirst
    10,                     // iLast
    53,                     // lineNo
    37,                     // colNo
    "Y",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo gh_emlrtBCI{
    1,                      // iFirst
    10,                     // iLast
    53,                     // lineNo
    43,                     // colNo
    "Y",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo hh_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    53,                     // lineNo
    84,                     // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ih_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    53,                     // lineNo
    90,                     // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo jh_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    53,                     // lineNo
    93,                     // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo kh_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    53,                     // lineNo
    99,                     // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtECInfo ed_emlrtECI{
    1,                      // nDims
    53,                     // lineNo
    35,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtECInfo fd_emlrtECI{
    2,                      // nDims
    53,                     // lineNo
    35,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtECInfo gd_emlrtECI{
    -1,                     // nDims
    53,                     // lineNo
    13,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtBCInfo lh_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    63,                     // lineNo
    90,                     // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo ld_emlrtDCI{
    63,                     // lineNo
    96,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo mh_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    63,                     // lineNo
    96,                     // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo nh_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    63,                     // lineNo
    117,                    // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo md_emlrtDCI{
    63,                     // lineNo
    123,                    // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo oh_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    63,                     // lineNo
    123,                    // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ph_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    63,                     // lineNo
    22,                     // colNo
    "out_temp",             // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo nd_emlrtDCI{
    63,                     // lineNo
    28,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo qh_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    63,                     // lineNo
    28,                     // colNo
    "out_temp",             // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo rh_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    63,                     // lineNo
    49,                     // colNo
    "out_temp",             // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo od_emlrtDCI{
    63,                     // lineNo
    55,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo sh_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    63,                     // lineNo
    55,                     // colNo
    "out_temp",             // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtECInfo hd_emlrtECI{
    -1,                     // nDims
    63,                     // lineNo
    13,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtRTEInfo hb_emlrtRTEI{
    64,                     // lineNo
    21,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtBCInfo th_emlrtBCI{
    1,                      // iFirst
    10,                     // iLast
    68,                     // lineNo
    73,                     // colNo
    "Y",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo pd_emlrtDCI{
    68,                     // lineNo
    79,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo uh_emlrtBCI{
    1,                      // iFirst
    10,                     // iLast
    68,                     // lineNo
    79,                     // colNo
    "Y",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo qd_emlrtDCI{
    68,                     // lineNo
    106,                    // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo vh_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    68,                     // lineNo
    156,                    // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo rd_emlrtDCI{
    68,                     // lineNo
    162,                    // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo wh_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    68,                     // lineNo
    162,                    // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo xh_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    68,                     // lineNo
    183,                    // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo sd_emlrtDCI{
    68,                     // lineNo
    189,                    // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo yh_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    68,                     // lineNo
    189,                    // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo td_emlrtDCI{
    68,                     // lineNo
    219,                    // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo ai_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    68,                     // lineNo
    219,                    // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo ud_emlrtDCI{
    68,                     // lineNo
    246,                    // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo bi_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    68,                     // lineNo
    246,                    // colNo
    "Q",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtECInfo id_emlrtECI{
    1,                      // nDims
    68,                     // lineNo
    71,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtECInfo jd_emlrtECI{
    2,                      // nDims
    68,                     // lineNo
    71,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtBCInfo ci_emlrtBCI{
    1,                      // iFirst
    10,                     // iLast
    68,                     // lineNo
    15,                     // colNo
    "Y",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo vd_emlrtDCI{
    68,                     // lineNo
    21,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo di_emlrtBCI{
    1,                      // iFirst
    10,                     // iLast
    68,                     // lineNo
    21,                     // colNo
    "Y",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtDCInfo wd_emlrtDCI{
    68,                     // lineNo
    48,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtECInfo kd_emlrtECI{
    -1,                     // nDims
    68,                     // lineNo
    13,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" // pName
};

static emlrtDCInfo xd_emlrtDCI{
    31,                     // lineNo
    18,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtDCInfo yd_emlrtDCI{
    31,                     // lineNo
    18,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    4                                               // checkKind
};

static emlrtBCInfo ei_emlrtBCI{
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

static emlrtDCInfo ae_emlrtDCI{
    36,                     // lineNo
    22,                     // colNo
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    1                                               // checkKind
};

static emlrtBCInfo fi_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    65,                     // lineNo
    48,                     // colNo
    "out_temp",             // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo gi_emlrtBCI{
    1,                      // iFirst
    10,                     // iLast
    65,                     // lineNo
    19,                     // colNo
    "Y",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    3                                               // checkKind
};

static emlrtBCInfo hi_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    50,                     // lineNo
    48,                     // colNo
    "out_temp",             // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    0                                               // checkKind
};

static emlrtBCInfo ii_emlrtBCI{
    1,                      // iFirst
    10,                     // iLast
    50,                     // lineNo
    19,                     // colNo
    "Y",                    // aName
    "dev_Y_Q_Q_D_sum_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", // pName
    3                                               // checkKind
};

// Function Declarations
static void binary_expand_op_38(real_T in1_data[], int32_T in1_size[2],
                                const real_T in2[100], int32_T in3, int32_T in4,
                                int32_T in5, int32_T in6);

static void binary_expand_op_39(real_T in1_data[], int32_T in1_size[2],
                                const real_T in2[100], int32_T in3, int32_T in4,
                                int32_T in5, int32_T in6);

static void dev_Y_Q_Q_D_sum_unit(const emlrtStack &sp, real_T Y[100],
                                 const real_T Q_data[], const int32_T Q_size[2],
                                 const real_T proj_index[22], real_T L);

// Function Definitions
static void binary_expand_op_38(real_T in1_data[], int32_T in1_size[2],
                                const real_T in2[100], int32_T in3, int32_T in4,
                                int32_T in5, int32_T in6)
{
  real_T in2_data[49];
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  i = in4 - in3;
  if (in1_size[1] == 1) {
    loop_ub = i;
  } else {
    loop_ub = in1_size[1];
  }
  i1 = in6 - in5;
  if (in1_size[0] == 1) {
    b_loop_ub = i1;
  } else {
    b_loop_ub = in1_size[0];
  }
  stride_0_0 = (i != 1);
  stride_0_1 = (i1 != 1);
  stride_1_0 = (in1_size[1] != 1);
  stride_1_1 = (in1_size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in2_data[i1 + loop_ub * i] =
          in2[(in3 + i1 * stride_0_0) + 10 * (in5 + aux_0_1)] +
          in1_data[i1 * stride_1_0 + in1_size[1] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  in1_size[1] = loop_ub;
  in1_size[0] = b_loop_ub;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1_size[1] * i] = in2_data[i1 + loop_ub * i];
    }
  }
}

static void binary_expand_op_39(real_T in1_data[], int32_T in1_size[2],
                                const real_T in2[100], int32_T in3, int32_T in4,
                                int32_T in5, int32_T in6)
{
  real_T in2_data[121];
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_0_1;
  int32_T stride_1_0;
  int32_T stride_1_1;
  i = in4 - in3;
  if (in1_size[1] == 1) {
    loop_ub = i;
  } else {
    loop_ub = in1_size[1];
  }
  i1 = in6 - in5;
  if (in1_size[0] == 1) {
    b_loop_ub = i1;
  } else {
    b_loop_ub = in1_size[0];
  }
  stride_0_0 = (i != 1);
  stride_0_1 = (i1 != 1);
  stride_1_0 = (in1_size[1] != 1);
  stride_1_1 = (in1_size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in2_data[i1 + loop_ub * i] =
          in2[(in3 + i1 * stride_0_0) + 10 * (in5 + aux_0_1)] +
          in1_data[i1 * stride_1_0 + in1_size[1] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += stride_0_1;
  }
  in1_size[1] = loop_ub;
  in1_size[0] = b_loop_ub;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1_size[1] * i] = in2_data[i1 + loop_ub * i];
    }
  }
}

static void dev_Y_Q_Q_D_sum_unit(const emlrtStack &sp, real_T Y[100],
                                 const real_T Q_data[], const int32_T Q_size[2],
                                 const real_T proj_index[22], real_T L)
{
  emlrtStack st;
  real_T c_tmp_data[121];
  real_T d_tmp_data[100];
  real_T c_Q_data[49];
  real_T e_Q_data[49];
  real_T out_temp_data[49];
  real_T b_tmp_data[11];
  real_T tmp_data[11];
  real_T d;
  real_T temp;
  int32_T b_Q_size[2];
  int32_T c_Q_size[2];
  int32_T d_Q_size[2];
  int32_T e_Q_size[2];
  int32_T iv[2];
  int32_T iv1[2];
  int32_T flag;
  int32_T loop_ub;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  // WE want to compute the innerproduct of Q and Q'.
  if (!(L >= 0.0)) {
    emlrtNonNegativeCheckR2012b(L, &yd_emlrtDCI, (emlrtConstCTX)&sp);
  }
  d = static_cast<int32_T>(muDoubleScalarFloor(L));
  if (L != d) {
    emlrtIntegerCheckR2012b(L, &xd_emlrtDCI, (emlrtConstCTX)&sp);
  }
  loop_ub = static_cast<int32_T>(L) * static_cast<int32_T>(L);
  if (loop_ub - 1 >= 0) {
    std::memset(&out_temp_data[0], 0,
                static_cast<uint32_T>(loop_ub) * sizeof(real_T));
  }
  temp = 1.0;
  flag = 0;
  exitg1 = false;
  while ((!exitg1) && (temp <= Q_size[1])) {
    if (temp != static_cast<int32_T>(muDoubleScalarFloor(temp))) {
      emlrtIntegerCheckR2012b(temp, &ae_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(temp) < 1) || (static_cast<int32_T>(temp) > 11)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, 11,
                                    &ei_emlrtBCI, (emlrtConstCTX)&sp);
    }
    d = proj_index[static_cast<int32_T>(temp) - 1];
    if (d == rtInf) {
      exitg1 = true;
    } else {
      if (d >= L) {
        real_T d1;
        flag = 1;
        d1 = proj_index[static_cast<int32_T>(temp) + 10];
        if (d1 == 1.0) {
          int32_T tmp_size[2];
          int32_T b_loop_ub;
          int32_T i;
          int32_T i1;
          int32_T i2;
          int32_T i3;
          int32_T i4;
          int32_T i5;
          int32_T i6;
          int32_T i7;
          int32_T vectorUB;
          int8_T unnamed_idx_0;
          int8_T unnamed_idx_1;
          //  Q(temp_index, temp_index)  =
          //  dev_jacob_box(z0(temp_index),proj_coefficients(2,temp_index)' ...
          //       , proj_coefficients(1, temp_index)', P(temp_index), alpha);
          if (temp > L) {
            i = 0;
            i3 = 0;
            i1 = 0;
            i2 = 0;
            i4 = 0;
            i5 = 0;
            i6 = 0;
            i7 = 0;
          } else {
            if ((static_cast<int32_T>(temp) < 1) ||
                (static_cast<int32_T>(temp) > Q_size[0])) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                            Q_size[0], &wg_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            i = static_cast<int32_T>(temp) - 1;
            if ((static_cast<int32_T>(L) < 1) ||
                (static_cast<int32_T>(L) > Q_size[0])) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(L), 1,
                                            Q_size[0], &xg_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            i3 = static_cast<int32_T>(L);
            if ((static_cast<int32_T>(temp) < 1) ||
                (static_cast<int32_T>(temp) > Q_size[1])) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                            Q_size[1], &yg_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            i1 = static_cast<int32_T>(temp) - 1;
            if ((static_cast<int32_T>(L) < 1) ||
                (static_cast<int32_T>(L) > Q_size[1])) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(L), 1,
                                            Q_size[1], &ah_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            i2 = static_cast<int32_T>(L);
            if ((static_cast<int32_T>(temp) < 1) ||
                (static_cast<int32_T>(temp) > static_cast<int32_T>(L))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                            static_cast<int32_T>(L),
                                            &bh_emlrtBCI, (emlrtConstCTX)&sp);
            }
            i4 = static_cast<int32_T>(temp) - 1;
            if (static_cast<int32_T>(L) < 1) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(L), 1,
                                            static_cast<int32_T>(L),
                                            &ch_emlrtBCI, (emlrtConstCTX)&sp);
            }
            i5 = static_cast<int32_T>(L);
            if ((static_cast<int32_T>(temp) < 1) ||
                (static_cast<int32_T>(temp) > static_cast<int32_T>(L))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                            static_cast<int32_T>(L),
                                            &dh_emlrtBCI, (emlrtConstCTX)&sp);
            }
            i6 = static_cast<int32_T>(temp) - 1;
            if (static_cast<int32_T>(L) < 1) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(L), 1,
                                            static_cast<int32_T>(L),
                                            &eh_emlrtBCI, (emlrtConstCTX)&sp);
            }
            i7 = static_cast<int32_T>(L);
          }
          loop_ub = i2 - i1;
          c_Q_size[1] = loop_ub;
          b_loop_ub = i3 - i;
          c_Q_size[0] = b_loop_ub;
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            for (i2 = 0; i2 < loop_ub; i2++) {
              c_Q_data[i2 + loop_ub * i3] =
                  Q_data[(i1 + i2) + Q_size[1] * (i + i3)];
            }
          }
          int32_T tmp_data_tmp;
          st.site = &df_emlrtRSI;
          vectorUB = coder::diag(st, c_Q_data, c_Q_size, tmp_data);
          tmp_data_tmp = coder::power(tmp_data, vectorUB, b_tmp_data);
          coder::diag(b_tmp_data, tmp_data_tmp, c_tmp_data, tmp_size);
          i = i5 - i4;
          iv[0] = i;
          i3 = i7 - i6;
          iv[1] = i3;
          iv1[0] = tmp_size[0];
          iv1[1] = tmp_size[1];
          emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &dd_emlrtECI,
                                        (emlrtCTX)&sp);
          unnamed_idx_0 = static_cast<int8_T>(i);
          unnamed_idx_1 = static_cast<int8_T>(i3);
          if ((tmp_size[1] == static_cast<int8_T>(i3)) &&
              (static_cast<int8_T>(i) == tmp_size[0])) {
            c_Q_size[1] = static_cast<int8_T>(i3);
            c_Q_size[0] = static_cast<int8_T>(i);
            loop_ub = static_cast<int8_T>(i3) * static_cast<int8_T>(i);
            if (loop_ub - 1 >= 0) {
              std::copy(&c_tmp_data[0], &c_tmp_data[loop_ub], &c_Q_data[0]);
            }
          } else {
            i1 = 0;
            i2 = 0;
            i5 = 0;
            i7 = 0;
            c_Q_size[1] = static_cast<int8_T>(i3);
            c_Q_size[0] = static_cast<int8_T>(i);
            for (int32_T i8{0}; i8 < unnamed_idx_0 * unnamed_idx_1; i8++) {
              c_Q_data[i2 + static_cast<int8_T>(i3) * i1] =
                  c_tmp_data[i7 + tmp_size[1] * i5];
              i1++;
              i5++;
              if (i1 > static_cast<int8_T>(i) - 1) {
                i1 = 0;
                i2++;
              }
              if (i5 > tmp_size[0] - 1) {
                i5 = 0;
                i7++;
              }
            }
          }
          loop_ub = c_Q_size[0];
          for (i = 0; i < loop_ub; i++) {
            b_loop_ub = c_Q_size[1];
            for (i3 = 0; i3 < b_loop_ub; i3++) {
              out_temp_data[(i6 + i3) + static_cast<int32_T>(L) * (i4 + i)] =
                  c_Q_data[i3 + c_Q_size[1] * i];
            }
          }
          //  to save computation.weird
          d1 = muDoubleScalarMin(L, d);
          i = static_cast<int32_T>(d1 + (1.0 - temp));
          emlrtForLoopVectorCheckR2021a(temp, 1.0, d1, mxDOUBLE_CLASS, i,
                                        &gb_emlrtRTEI, (emlrtConstCTX)&sp);
          for (vectorUB = 0; vectorUB < i; vectorUB++) {
            uint32_T j;
            j = static_cast<uint32_T>(temp) + static_cast<uint32_T>(vectorUB);
            if ((static_cast<int32_T>(j) < 1) ||
                (static_cast<int32_T>(j) > static_cast<int32_T>(L))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                            static_cast<int32_T>(L),
                                            &hi_emlrtBCI, (emlrtConstCTX)&sp);
            }
            if ((static_cast<int32_T>(j) < 1) ||
                (static_cast<int32_T>(j) > 10)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1, 10,
                                            &ii_emlrtBCI, (emlrtConstCTX)&sp);
            }
            i3 =
                (static_cast<int32_T>(j) + 10 * (static_cast<int32_T>(j) - 1)) -
                1;
            Y[i3] += out_temp_data[(static_cast<int32_T>(j) +
                                    static_cast<int32_T>(L) *
                                        (static_cast<int32_T>(j) - 1)) -
                                   1];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
            }
          }
        } else if ((d1 == 2.0) || (d1 == 3.0)) {
          int32_T tmp_size[2];
          int32_T b_loop_ub;
          int32_T i;
          int32_T i1;
          int32_T i2;
          int32_T i3;
          int32_T i4;
          int32_T i5;
          int32_T i6;
          int32_T i7;
          int32_T i8;
          int32_T scalarLB;
          int32_T tmp_data_tmp;
          int32_T vectorUB;
          int8_T unnamed_idx_0;
          if (temp > L) {
            i = 0;
            i3 = 0;
            i1 = 0;
            i2 = 0;
            i4 = 0;
            i5 = 0;
            i6 = 0;
            i7 = 0;
            i8 = 0;
            tmp_data_tmp = 0;
            scalarLB = 0;
            vectorUB = 0;
          } else {
            if ((static_cast<int32_T>(temp) < 1) ||
                (static_cast<int32_T>(temp) > 10)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, 10,
                                            &fh_emlrtBCI, (emlrtConstCTX)&sp);
            }
            i = static_cast<int32_T>(temp) - 1;
            if ((static_cast<int32_T>(L) < 1) ||
                (static_cast<int32_T>(L) > 10)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(L), 1, 10,
                                            &gh_emlrtBCI, (emlrtConstCTX)&sp);
            }
            i3 = static_cast<int32_T>(L);
            i1 = static_cast<int32_T>(temp) - 1;
            i2 = static_cast<int32_T>(L);
            if ((static_cast<int32_T>(temp) < 1) ||
                (static_cast<int32_T>(temp) > Q_size[0])) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                            Q_size[0], &hh_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            i4 = static_cast<int32_T>(temp) - 1;
            if ((static_cast<int32_T>(L) < 1) ||
                (static_cast<int32_T>(L) > Q_size[0])) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(L), 1,
                                            Q_size[0], &ih_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            i5 = static_cast<int32_T>(L);
            if ((static_cast<int32_T>(temp) < 1) ||
                (static_cast<int32_T>(temp) > Q_size[1])) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                            Q_size[1], &jh_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            i6 = static_cast<int32_T>(temp) - 1;
            if ((static_cast<int32_T>(L) < 1) ||
                (static_cast<int32_T>(L) > Q_size[1])) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(L), 1,
                                            Q_size[1], &kh_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            i7 = static_cast<int32_T>(L);
            i8 = static_cast<int32_T>(temp) - 1;
            tmp_data_tmp = static_cast<int32_T>(L);
            scalarLB = static_cast<int32_T>(temp) - 1;
            vectorUB = static_cast<int32_T>(L);
          }
          loop_ub = i7 - i6;
          c_Q_size[1] = loop_ub;
          b_loop_ub = i5 - i4;
          c_Q_size[0] = b_loop_ub;
          for (i5 = 0; i5 < b_loop_ub; i5++) {
            for (i7 = 0; i7 < loop_ub; i7++) {
              c_Q_data[i7 + loop_ub * i5] =
                  Q_data[(i6 + i7) + Q_size[1] * (i4 + i5)];
            }
          }
          loop_ub = tmp_data_tmp - i8;
          e_Q_size[1] = loop_ub;
          b_loop_ub = vectorUB - scalarLB;
          e_Q_size[0] = b_loop_ub;
          for (i4 = 0; i4 < b_loop_ub; i4++) {
            for (i5 = 0; i5 < loop_ub; i5++) {
              e_Q_data[i5 + loop_ub * i4] =
                  Q_data[(scalarLB + i4) + Q_size[1] * (i8 + i5)];
            }
          }
          st.site = &ef_emlrtRSI;
          dev_g_multiply_symmetric(st, c_Q_data, c_Q_size, e_Q_data, e_Q_size,
                                   c_tmp_data, tmp_size);
          c_Q_size[1] = tmp_size[1];
          c_Q_size[0] = tmp_size[0];
          loop_ub = tmp_size[0] * tmp_size[1];
          if (loop_ub - 1 >= 0) {
            std::copy(&c_tmp_data[0], &c_tmp_data[loop_ub], &c_Q_data[0]);
          }
          loop_ub = i3 - i;
          if ((loop_ub != tmp_size[0]) &&
              ((loop_ub != 1) && (tmp_size[0] != 1))) {
            emlrtDimSizeImpxCheckR2021b(loop_ub, tmp_size[0], &ed_emlrtECI,
                                        (emlrtConstCTX)&sp);
          }
          b_loop_ub = i2 - i1;
          if ((b_loop_ub != tmp_size[1]) &&
              ((b_loop_ub != 1) && (tmp_size[1] != 1))) {
            emlrtDimSizeImpxCheckR2021b(b_loop_ub, tmp_size[1], &fd_emlrtECI,
                                        (emlrtConstCTX)&sp);
          }
          if (temp > L) {
            i4 = 0;
            i5 = 0;
            i6 = 0;
          } else {
            i4 = static_cast<int32_T>(temp) - 1;
            i5 = static_cast<int32_T>(L);
            i6 = static_cast<int32_T>(temp) - 1;
          }
          if ((b_loop_ub == tmp_size[1]) && (loop_ub == tmp_size[0])) {
            c_Q_size[1] = b_loop_ub;
            c_Q_size[0] = loop_ub;
            for (i3 = 0; i3 < loop_ub; i3++) {
              scalarLB = (b_loop_ub / 2) << 1;
              vectorUB = scalarLB - 2;
              for (i2 = 0; i2 <= vectorUB; i2 += 2) {
                __m128d r;
                __m128d r1;
                r = _mm_loadu_pd(&Y[(i1 + i2) + 10 * (i + i3)]);
                i7 = i2 + b_loop_ub * i3;
                r1 = _mm_loadu_pd(&c_Q_data[i7]);
                _mm_storeu_pd(&c_Q_data[i7], _mm_add_pd(r, r1));
              }
              for (i2 = scalarLB; i2 < b_loop_ub; i2++) {
                tmp_data_tmp = i2 + b_loop_ub * i3;
                c_Q_data[tmp_data_tmp] += Y[(i1 + i2) + 10 * (i + i3)];
              }
            }
          } else {
            binary_expand_op_38(c_Q_data, c_Q_size, Y, i1, i2, i, i3);
          }
          i = i5 - i4;
          iv[0] = i;
          iv[1] = i;
          iv1[0] = c_Q_size[0];
          iv1[1] = c_Q_size[1];
          emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &gd_emlrtECI,
                                        (emlrtCTX)&sp);
          unnamed_idx_0 = static_cast<int8_T>(i);
          if ((c_Q_size[1] == static_cast<int8_T>(i)) &&
              (static_cast<int8_T>(i) == c_Q_size[0])) {
            e_Q_size[1] = static_cast<int8_T>(i);
            e_Q_size[0] = static_cast<int8_T>(i);
            vectorUB = static_cast<int8_T>(i) * static_cast<int8_T>(i);
            if (vectorUB - 1 >= 0) {
              std::copy(&c_Q_data[0], &c_Q_data[vectorUB], &e_Q_data[0]);
            }
          } else {
            i3 = 0;
            i1 = 0;
            i2 = 0;
            i5 = 0;
            e_Q_size[1] = static_cast<int8_T>(i);
            e_Q_size[0] = static_cast<int8_T>(i);
            for (i7 = 0; i7 < unnamed_idx_0 * unnamed_idx_0; i7++) {
              e_Q_data[i1 + static_cast<int8_T>(i) * i3] =
                  c_Q_data[i5 + c_Q_size[1] * i2];
              i3++;
              i2++;
              if (i3 > static_cast<int8_T>(i) - 1) {
                i3 = 0;
                i1++;
              }
              if (i2 > c_Q_size[0] - 1) {
                i2 = 0;
                i5++;
              }
            }
          }
          vectorUB = e_Q_size[0];
          for (i = 0; i < vectorUB; i++) {
            for (i3 = 0; i3 < vectorUB; i3++) {
              Y[(i6 + i3) + 10 * (i4 + i)] = e_Q_data[i3 + e_Q_size[1] * i];
            }
          }
          //  a faster way is to treat diagbonal cases vs dense cases
          //  differently. Q(temp_index, temp_index) =
          //  dev_jacob_ball(z0(temp_index), proj_coefficients(1,temp),
          //  P(temp_index), alpha);
        }
      } else {
        real_T d1;
        d1 = proj_index[static_cast<int32_T>(temp) + 10];
        if (d1 == 1.0) {
          real_T b_Q_data[121];
          int32_T tmp_size[2];
          int32_T b_loop_ub;
          int32_T i;
          int32_T i1;
          int32_T i2;
          int32_T i3;
          int32_T i4;
          int32_T i5;
          int32_T i6;
          int32_T i7;
          int32_T vectorUB;
          int8_T unnamed_idx_0;
          int8_T unnamed_idx_1;
          //  Q(temp_index, temp_index)  =
          //  dev_jacob_box(z0(temp_index),proj_coefficients(2,temp_index)' ...
          //       , proj_coefficients(1, temp_index)', P(temp_index), alpha);
          if (temp > d) {
            i = 0;
            i1 = 0;
            i2 = 0;
            i4 = 0;
            i5 = 0;
            i6 = 0;
            i7 = 0;
            i3 = 0;
          } else {
            if ((static_cast<int32_T>(temp) < 1) ||
                (static_cast<int32_T>(temp) > Q_size[0])) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                            Q_size[0], &lh_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            i = static_cast<int32_T>(temp) - 1;
            i3 = static_cast<int32_T>(muDoubleScalarFloor(d));
            if (d != i3) {
              emlrtIntegerCheckR2012b(d, &ld_emlrtDCI, (emlrtConstCTX)&sp);
            }
            i1 = static_cast<int32_T>(d);
            if ((d < 1.0) || (i1 > Q_size[0])) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                            Q_size[0], &mh_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            if ((static_cast<int32_T>(temp) < 1) ||
                (static_cast<int32_T>(temp) > Q_size[1])) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                            Q_size[1], &nh_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            i2 = static_cast<int32_T>(temp) - 1;
            if (i1 != i3) {
              emlrtIntegerCheckR2012b(d, &md_emlrtDCI, (emlrtConstCTX)&sp);
            }
            if ((d < 1.0) || (i1 > Q_size[1])) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                            Q_size[1], &oh_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            i4 = i1;
            if ((static_cast<int32_T>(temp) < 1) ||
                (static_cast<int32_T>(temp) > static_cast<int32_T>(L))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                            static_cast<int32_T>(L),
                                            &ph_emlrtBCI, (emlrtConstCTX)&sp);
            }
            i5 = static_cast<int32_T>(temp) - 1;
            if (i1 != i3) {
              emlrtIntegerCheckR2012b(d, &nd_emlrtDCI, (emlrtConstCTX)&sp);
            }
            if ((d < 1.0) || (i1 > static_cast<int32_T>(L))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                            static_cast<int32_T>(L),
                                            &qh_emlrtBCI, (emlrtConstCTX)&sp);
            }
            i6 = i1;
            if ((static_cast<int32_T>(temp) < 1) ||
                (static_cast<int32_T>(temp) > static_cast<int32_T>(L))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                            static_cast<int32_T>(L),
                                            &rh_emlrtBCI, (emlrtConstCTX)&sp);
            }
            i7 = static_cast<int32_T>(temp) - 1;
            if (i1 != i3) {
              emlrtIntegerCheckR2012b(d, &od_emlrtDCI, (emlrtConstCTX)&sp);
            }
            if ((d < 1.0) || (i1 > static_cast<int32_T>(L))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                            static_cast<int32_T>(L),
                                            &sh_emlrtBCI, (emlrtConstCTX)&sp);
            }
            i3 = i1;
          }
          loop_ub = i4 - i2;
          b_Q_size[1] = loop_ub;
          b_loop_ub = i1 - i;
          b_Q_size[0] = b_loop_ub;
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            for (i4 = 0; i4 < loop_ub; i4++) {
              b_Q_data[i4 + loop_ub * i1] =
                  Q_data[(i2 + i4) + Q_size[1] * (i + i1)];
            }
          }
          int32_T tmp_data_tmp;
          st.site = &ff_emlrtRSI;
          vectorUB = coder::diag(st, b_Q_data, b_Q_size, tmp_data);
          tmp_data_tmp = coder::power(tmp_data, vectorUB, b_tmp_data);
          coder::diag(b_tmp_data, tmp_data_tmp, c_tmp_data, tmp_size);
          i = i6 - i5;
          iv[0] = i;
          i3 -= i7;
          iv[1] = i3;
          iv1[0] = tmp_size[0];
          iv1[1] = tmp_size[1];
          emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &hd_emlrtECI,
                                        (emlrtCTX)&sp);
          unnamed_idx_0 = static_cast<int8_T>(i);
          unnamed_idx_1 = static_cast<int8_T>(i3);
          if ((tmp_size[1] == static_cast<int8_T>(i3)) &&
              (static_cast<int8_T>(i) == tmp_size[0])) {
            c_Q_size[1] = static_cast<int8_T>(i3);
            c_Q_size[0] = static_cast<int8_T>(i);
            vectorUB = static_cast<int8_T>(i3) * static_cast<int8_T>(i);
            if (vectorUB - 1 >= 0) {
              std::copy(&c_tmp_data[0], &c_tmp_data[vectorUB], &c_Q_data[0]);
            }
          } else {
            i1 = 0;
            i2 = 0;
            i4 = 0;
            i6 = 0;
            c_Q_size[1] = static_cast<int8_T>(i3);
            c_Q_size[0] = static_cast<int8_T>(i);
            for (int32_T i8{0}; i8 < unnamed_idx_0 * unnamed_idx_1; i8++) {
              c_Q_data[i2 + static_cast<int8_T>(i3) * i1] =
                  c_tmp_data[i6 + tmp_size[1] * i4];
              i1++;
              i4++;
              if (i1 > static_cast<int8_T>(i) - 1) {
                i1 = 0;
                i2++;
              }
              if (i4 > tmp_size[0] - 1) {
                i4 = 0;
                i6++;
              }
            }
          }
          loop_ub = c_Q_size[0];
          for (i = 0; i < loop_ub; i++) {
            b_loop_ub = c_Q_size[1];
            for (i3 = 0; i3 < b_loop_ub; i3++) {
              out_temp_data[(i7 + i3) + static_cast<int32_T>(L) * (i5 + i)] =
                  c_Q_data[i3 + c_Q_size[1] * i];
            }
          }
          //  to save computation.weird
          d1 = muDoubleScalarMin(L, d);
          i = static_cast<int32_T>(d1 + (1.0 - temp));
          emlrtForLoopVectorCheckR2021a(temp, 1.0, d1, mxDOUBLE_CLASS, i,
                                        &hb_emlrtRTEI, (emlrtConstCTX)&sp);
          for (vectorUB = 0; vectorUB < i; vectorUB++) {
            uint32_T j;
            j = static_cast<uint32_T>(temp) + static_cast<uint32_T>(vectorUB);
            if ((static_cast<int32_T>(j) < 1) ||
                (static_cast<int32_T>(j) > static_cast<int32_T>(L))) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1,
                                            static_cast<int32_T>(L),
                                            &fi_emlrtBCI, (emlrtConstCTX)&sp);
            }
            if ((static_cast<int32_T>(j) < 1) ||
                (static_cast<int32_T>(j) > 10)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(j), 1, 10,
                                            &gi_emlrtBCI, (emlrtConstCTX)&sp);
            }
            i3 =
                (static_cast<int32_T>(j) + 10 * (static_cast<int32_T>(j) - 1)) -
                1;
            Y[i3] += out_temp_data[(static_cast<int32_T>(j) +
                                    static_cast<int32_T>(L) *
                                        (static_cast<int32_T>(j) - 1)) -
                                   1];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
            }
          }
        } else if ((d1 == 2.0) || (d1 == 3.0)) {
          real_T b_Q_data[121];
          real_T d_Q_data[121];
          int32_T tmp_size[2];
          int32_T b_loop_ub;
          int32_T i;
          int32_T i1;
          int32_T i2;
          int32_T i3;
          int32_T i4;
          int32_T i5;
          int32_T i6;
          int32_T i7;
          int32_T i8;
          int32_T scalarLB;
          int32_T tmp_data_tmp;
          int32_T vectorUB;
          int8_T unnamed_idx_0;
          int8_T unnamed_idx_1;
          if (temp > d) {
            i = 0;
            i1 = 0;
            i2 = 0;
            i4 = 0;
            i5 = 0;
            i6 = 0;
            i7 = 0;
            i8 = 0;
            tmp_data_tmp = 0;
            scalarLB = 0;
            vectorUB = 0;
            i3 = 0;
          } else {
            if ((static_cast<int32_T>(temp) < 1) ||
                (static_cast<int32_T>(temp) > 10)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, 10,
                                            &th_emlrtBCI, (emlrtConstCTX)&sp);
            }
            i = static_cast<int32_T>(temp) - 1;
            i3 = static_cast<int32_T>(muDoubleScalarFloor(d));
            if (d != i3) {
              emlrtIntegerCheckR2012b(d, &pd_emlrtDCI, (emlrtConstCTX)&sp);
            }
            if ((d < 1.0) || (d > 10.0)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 10,
                                            &uh_emlrtBCI, (emlrtConstCTX)&sp);
            }
            i1 = static_cast<int32_T>(d);
            i2 = static_cast<int32_T>(temp) - 1;
            if (i1 != i3) {
              emlrtIntegerCheckR2012b(d, &qd_emlrtDCI, (emlrtConstCTX)&sp);
            }
            i4 = i1;
            if ((static_cast<int32_T>(temp) < 1) ||
                (static_cast<int32_T>(temp) > Q_size[0])) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                            Q_size[0], &vh_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            i5 = static_cast<int32_T>(temp) - 1;
            if (i1 != i3) {
              emlrtIntegerCheckR2012b(d, &rd_emlrtDCI, (emlrtConstCTX)&sp);
            }
            if ((d < 1.0) || (i1 > Q_size[0])) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                            Q_size[0], &wh_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            i6 = i1;
            if ((static_cast<int32_T>(temp) < 1) ||
                (static_cast<int32_T>(temp) > Q_size[1])) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                            Q_size[1], &xh_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            i7 = static_cast<int32_T>(temp) - 1;
            if (i1 != i3) {
              emlrtIntegerCheckR2012b(d, &sd_emlrtDCI, (emlrtConstCTX)&sp);
            }
            if ((d < 1.0) || (i1 > Q_size[1])) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                            Q_size[1], &yh_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            i8 = i1;
            tmp_data_tmp = static_cast<int32_T>(temp) - 1;
            if (i1 != i3) {
              emlrtIntegerCheckR2012b(d, &td_emlrtDCI, (emlrtConstCTX)&sp);
            }
            if ((d < 1.0) || (i1 > Q_size[0])) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                            Q_size[0], &ai_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            scalarLB = i1;
            vectorUB = static_cast<int32_T>(temp) - 1;
            if (i1 != i3) {
              emlrtIntegerCheckR2012b(d, &ud_emlrtDCI, (emlrtConstCTX)&sp);
            }
            if ((d < 1.0) || (i1 > Q_size[1])) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                            Q_size[1], &bi_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            i3 = i1;
          }
          loop_ub = i8 - i7;
          b_Q_size[1] = loop_ub;
          b_loop_ub = i6 - i5;
          b_Q_size[0] = b_loop_ub;
          for (i6 = 0; i6 < b_loop_ub; i6++) {
            for (i8 = 0; i8 < loop_ub; i8++) {
              b_Q_data[i8 + loop_ub * i6] =
                  Q_data[(i7 + i8) + Q_size[1] * (i5 + i6)];
            }
          }
          loop_ub = scalarLB - tmp_data_tmp;
          d_Q_size[1] = loop_ub;
          b_loop_ub = i3 - vectorUB;
          d_Q_size[0] = b_loop_ub;
          for (i3 = 0; i3 < b_loop_ub; i3++) {
            for (i5 = 0; i5 < loop_ub; i5++) {
              d_Q_data[i5 + loop_ub * i3] =
                  Q_data[(vectorUB + i3) + Q_size[1] * (tmp_data_tmp + i5)];
            }
          }
          st.site = &gf_emlrtRSI;
          dev_g_multiply_symmetric(st, b_Q_data, b_Q_size, d_Q_data, d_Q_size,
                                   c_tmp_data, tmp_size);
          loop_ub = i1 - i;
          if ((loop_ub != tmp_size[0]) &&
              ((loop_ub != 1) && (tmp_size[0] != 1))) {
            emlrtDimSizeImpxCheckR2021b(loop_ub, tmp_size[0], &id_emlrtECI,
                                        (emlrtConstCTX)&sp);
          }
          b_loop_ub = i4 - i2;
          if ((b_loop_ub != tmp_size[1]) &&
              ((b_loop_ub != 1) && (tmp_size[1] != 1))) {
            emlrtDimSizeImpxCheckR2021b(b_loop_ub, tmp_size[1], &jd_emlrtECI,
                                        (emlrtConstCTX)&sp);
          }
          if (temp > d) {
            i3 = 0;
            i6 = 0;
            i7 = 0;
            i5 = 0;
          } else {
            if ((static_cast<int32_T>(temp) < 1) ||
                (static_cast<int32_T>(temp) > 10)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, 10,
                                            &ci_emlrtBCI, (emlrtConstCTX)&sp);
            }
            i3 = static_cast<int32_T>(temp) - 1;
            i5 = static_cast<int32_T>(muDoubleScalarFloor(d));
            if (d != i5) {
              emlrtIntegerCheckR2012b(d, &vd_emlrtDCI, (emlrtConstCTX)&sp);
            }
            if ((d < 1.0) || (d > 10.0)) {
              emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 10,
                                            &di_emlrtBCI, (emlrtConstCTX)&sp);
            }
            i6 = static_cast<int32_T>(d);
            i7 = static_cast<int32_T>(temp) - 1;
            if (i6 != i5) {
              emlrtIntegerCheckR2012b(d, &wd_emlrtDCI, (emlrtConstCTX)&sp);
            }
            i5 = static_cast<int32_T>(d);
          }
          if ((b_loop_ub == tmp_size[1]) && (loop_ub == tmp_size[0])) {
            tmp_size[1] = b_loop_ub;
            tmp_size[0] = loop_ub;
            for (i1 = 0; i1 < loop_ub; i1++) {
              scalarLB = (b_loop_ub / 2) << 1;
              vectorUB = scalarLB - 2;
              for (i4 = 0; i4 <= vectorUB; i4 += 2) {
                __m128d r;
                __m128d r1;
                r = _mm_loadu_pd(&Y[(i2 + i4) + 10 * (i + i1)]);
                i8 = i4 + b_loop_ub * i1;
                r1 = _mm_loadu_pd(&c_tmp_data[i8]);
                _mm_storeu_pd(&c_tmp_data[i8], _mm_add_pd(r, r1));
              }
              for (i4 = scalarLB; i4 < b_loop_ub; i4++) {
                tmp_data_tmp = i4 + b_loop_ub * i1;
                c_tmp_data[tmp_data_tmp] += Y[(i2 + i4) + 10 * (i + i1)];
              }
            }
          } else {
            binary_expand_op_39(c_tmp_data, tmp_size, Y, i2, i4, i, i1);
          }
          i = i6 - i3;
          iv[0] = i;
          i1 = i5 - i7;
          iv[1] = i1;
          iv1[0] = tmp_size[0];
          iv1[1] = tmp_size[1];
          emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &kd_emlrtECI,
                                        (emlrtCTX)&sp);
          unnamed_idx_0 = static_cast<int8_T>(i);
          unnamed_idx_1 = static_cast<int8_T>(i1);
          if ((tmp_size[1] == static_cast<int8_T>(i1)) &&
              (static_cast<int8_T>(i) == tmp_size[0])) {
            tmp_data_tmp = static_cast<int8_T>(i1);
            scalarLB = static_cast<int8_T>(i);
            vectorUB = static_cast<int8_T>(i1) * static_cast<int8_T>(i);
            if (vectorUB - 1 >= 0) {
              std::copy(&c_tmp_data[0], &c_tmp_data[vectorUB], &d_tmp_data[0]);
            }
          } else {
            i2 = 0;
            i4 = 0;
            i5 = 0;
            i6 = 0;
            tmp_data_tmp = static_cast<int8_T>(i1);
            scalarLB = static_cast<int8_T>(i);
            for (i8 = 0; i8 < unnamed_idx_0 * unnamed_idx_1; i8++) {
              d_tmp_data[i4 + static_cast<int8_T>(i1) * i2] =
                  c_tmp_data[i6 + tmp_size[1] * i5];
              i2++;
              i5++;
              if (i2 > static_cast<int8_T>(i) - 1) {
                i2 = 0;
                i4++;
              }
              if (i5 > tmp_size[0] - 1) {
                i5 = 0;
                i6++;
              }
            }
          }
          for (i = 0; i < scalarLB; i++) {
            for (i1 = 0; i1 < tmp_data_tmp; i1++) {
              Y[(i7 + i1) + 10 * (i3 + i)] = d_tmp_data[i1 + tmp_data_tmp * i];
            }
          }
          //  a faster way is to treat diagbonal cases vs dense cases
          //  differently. Q(temp_index, temp_index) =
          //  dev_jacob_ball(z0(temp_index), proj_coefficients(1,temp),
          //  P(temp_index), alpha);
        }
      }
      // update
      if (flag == 1) {
        exitg1 = true;
      } else {
        temp = d + 1.0;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }
    }
  }
}

void dev_H_sinv_Ht(const emlrtStack &sp, const real_T A[3190],
                   const real_T Q_data[], const int32_T Q_size[3],
                   const real_T proj_index_all[660], real_T nx, real_T Y[5800])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T y_data[110];
  real_T C[100];
  real_T tmp_data[70];
  real_T b_tmp_data[11];
  int32_T A_size[2];
  int32_T b_A_size[2];
  int32_T b_Q_size[2];
  int32_T c_Q_size[2];
  int32_T iv[2];
  int32_T iv1[2];
  int32_T y[2];
  int32_T y_size[2];
  int32_T Q_idx_0;
  int32_T c_i;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  // Remember the symetric in multiplication.
  //  the Y matrix is a 4 dimensional matrix. t is for the t th row HsHt and
  //  the third index is for the location. 1 for diag and 2 for the subdiag
  //  below the diag.
  //  Y(:, :, 2, t) is the block on tth row and t-1 column
  //  hense Y(:, :, 2, 1) = 0, t has realization for only t >0
  std::memset(&Y[0], 0, 5800U * sizeof(real_T));
  loop_ub_tmp = Q_size[0];
  loop_ub = Q_size[1];
  Q_idx_0 = Q_size[1];
  iv[0] = loop_ub_tmp;
  iv[1] = Q_size[1];
  for (int32_T i{0}; i < 29; i++) {
    real_T b_Q_data[121];
    real_T B[110];
    real_T b_proj_index_all[22];
    real_T d;
    int32_T b_i;
    int32_T i1;
    int32_T j;
    int32_T k;
    //  Y(:,:,1, i) = dev_g_multiply_symmetric(A(:, :, i), A(:, :,i)');
    for (b_i = 0; b_i < 11; b_i++) {
      for (i1 = 0; i1 < 10; i1++) {
        B[i1 + 10 * b_i] = A[(i + 29 * b_i) + 319 * i1];
      }
    }
    //  Get the size of the matrices
    //  Initialize the resulting matrix C
    std::memset(&C[0], 0, 100U * sizeof(real_T));
    //  Calculate the product A * B, leveraging its symmetric property
    for (c_i = 0; c_i < 10; c_i++) {
      for (j = 0; j <= c_i; j++) {
        b_i = j + 10 * c_i;
        d = C[b_i];
        for (k = 0; k < 11; k++) {
          i1 = k + c_i * 11;
          d += A[(i + 29 * (i1 % 11)) + 319 * (i1 / 11)] * B[j + 10 * k];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
          }
        }
        C[b_i] = d;
        //  Use the computed value for the symmetric element
        C[c_i + 10 * j] = C[b_i];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      for (i1 = 0; i1 < loop_ub; i1++) {
        b_Q_data[i1 + loop_ub * b_i] =
            Q_data[((i + 30 * i1) + 30 * Q_size[1] * b_i) + 1];
      }
    }
    for (b_i = 0; b_i < 2; b_i++) {
      for (i1 = 0; i1 < 11; i1++) {
        b_proj_index_all[i1 + 11 * b_i] =
            proj_index_all[((i + 30 * i1) + 330 * b_i) + 1];
      }
    }
    st.site = &bf_emlrtRSI;
    dev_Y_Q_Q_D_sum_unit(st, C, b_Q_data, iv, b_proj_index_all, nx);
    for (b_i = 0; b_i < 10; b_i++) {
      for (i1 = 0; i1 < 10; i1++) {
        Y[(i + 58 * i1) + 580 * b_i] = C[i1 + 10 * b_i];
      }
    }
    if (i + 1 != 1) {
      real_T c_Q_data[121];
      real_T temp;
      int32_T b_loop_ub;
      int32_T c_loop_ub;
      int32_T flag;
      boolean_T exitg1;
      if (nx < 1.0) {
        b_loop_ub = 0;
      } else {
        if (nx != static_cast<int32_T>(muDoubleScalarFloor(nx))) {
          emlrtIntegerCheckR2012b(nx, &kc_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(nx) < 1) || (static_cast<int32_T>(nx) > 10)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1, 10,
                                        &vd_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_loop_ub = static_cast<int32_T>(nx);
      }
      st.site = &cf_emlrtRSI;
      for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_Q_data[i1 + Q_idx_0 * b_i] =
              Q_data[(i + 30 * i1) + 30 * Q_size[1] * b_i];
        }
      }
      c_i = Q_size[1];
      for (b_i = 0; b_i < loop_ub; b_i++) {
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          c_Q_data[i1 + loop_ub_tmp * b_i] = b_Q_data[b_i + c_i * i1];
        }
      }
      // WE want to compute the innerproduct of A and Q.
      // When col(A) \neq row(Q), we need an L such that only the first L column
      // multiply the top square block of Q that ahs size L
      if (!(nx >= 0.0)) {
        emlrtNonNegativeCheckR2012b(nx, &vc_emlrtDCI, &st);
      }
      d = static_cast<int32_T>(muDoubleScalarFloor(nx));
      if (nx != d) {
        emlrtIntegerCheckR2012b(nx, &uc_emlrtDCI, &st);
      }
      c_loop_ub = static_cast<int32_T>(nx) * 10;
      if (c_loop_ub - 1 >= 0) {
        std::memset(&tmp_data[0], 0,
                    static_cast<uint32_T>(c_loop_ub) * sizeof(real_T));
      }
      temp = 1.0;
      flag = 0;
      exitg1 = false;
      while ((!exitg1) && (temp <= 11.0)) {
        if (temp != static_cast<int32_T>(muDoubleScalarFloor(temp))) {
          emlrtIntegerCheckR2012b(temp, &lc_emlrtDCI, &st);
        }
        if ((static_cast<int32_T>(temp) < 1) ||
            (static_cast<int32_T>(temp) > 11)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, 11,
                                        &wd_emlrtBCI, &st);
        }
        d = proj_index_all[i + 30 * ((static_cast<int32_T>(temp) - 1) % 11)];
        if (d == rtInf) {
          exitg1 = true;
        } else {
          if (d >= nx) {
            real_T d1;
            flag = 1;
            d1 = proj_index_all
                [(i + 30 * ((static_cast<int32_T>(temp) + 10) % 11)) + 330];
            if (d1 == 1.0) {
              real_T d_Q_data[49];
              int32_T i2;
              int32_T i3;
              int32_T i4;
              int32_T i5;
              //  Q(temp_index, temp_index)  =
              //  dev_jacob_box(z0(temp_index),proj_coefficients(2,temp_index)'
              //  ...
              //       , proj_coefficients(1, temp_index)', P(temp_index),
              //       alpha);
              if (temp > nx) {
                b_i = 0;
                i1 = 0;
                i2 = 0;
                i3 = 0;
                i4 = 0;
                i5 = 0;
              } else {
                b_i = static_cast<int32_T>(temp) - 1;
                i1 = static_cast<int32_T>(nx);
                if ((static_cast<int32_T>(temp) < 1) ||
                    (static_cast<int32_T>(temp) > loop_ub)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                                loop_ub, &xd_emlrtBCI, &st);
                }
                i2 = static_cast<int32_T>(temp) - 1;
                if ((static_cast<int32_T>(nx) < 1) ||
                    (static_cast<int32_T>(nx) > loop_ub)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1,
                                                loop_ub, &yd_emlrtBCI, &st);
                }
                i3 = static_cast<int32_T>(nx);
                if ((static_cast<int32_T>(temp) < 1) ||
                    (static_cast<int32_T>(temp) > loop_ub_tmp)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                                loop_ub_tmp, &ae_emlrtBCI, &st);
                }
                i4 = static_cast<int32_T>(temp) - 1;
                if ((static_cast<int32_T>(nx) < 1) ||
                    (static_cast<int32_T>(nx) > loop_ub_tmp)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1,
                                                loop_ub_tmp, &be_emlrtBCI, &st);
                }
                i5 = static_cast<int32_T>(nx);
              }
              c_loop_ub = i5 - i4;
              c_Q_size[1] = c_loop_ub;
              k = i3 - i2;
              c_Q_size[0] = k;
              for (i3 = 0; i3 < k; i3++) {
                for (i5 = 0; i5 < c_loop_ub; i5++) {
                  d_Q_data[i5 + c_loop_ub * i3] =
                      c_Q_data[(i4 + i5) + loop_ub_tmp * (i2 + i3)];
                }
              }
              b_st.site = &we_emlrtRSI;
              c_i = coder::diag(b_st, d_Q_data, c_Q_size, b_tmp_data);
              c_loop_ub = i1 - b_i;
              if ((c_loop_ub != c_i) && ((c_loop_ub != 1) && (c_i != 1))) {
                emlrtDimSizeImpxCheckR2021b(c_loop_ub, c_i, &mc_emlrtECI, &st);
              }
              if (temp > nx) {
                i2 = 0;
                i3 = 0;
              } else {
                if ((static_cast<int32_T>(temp) < 1) ||
                    (static_cast<int32_T>(temp) > static_cast<int32_T>(nx))) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                                static_cast<int32_T>(nx),
                                                &qe_emlrtBCI, &st);
                }
                i2 = static_cast<int32_T>(temp) - 1;
                if (static_cast<int32_T>(nx) < 1) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1,
                                                static_cast<int32_T>(nx),
                                                &re_emlrtBCI, &st);
                }
                i3 = static_cast<int32_T>(nx);
              }
              if (c_loop_ub == c_i) {
                y_size[1] = c_loop_ub;
                y_size[0] = 10;
                for (i1 = 0; i1 < 10; i1++) {
                  for (i4 = 0; i4 < c_loop_ub; i4++) {
                    y_data[i4 + c_loop_ub * i1] =
                        A[(i + 29 * (b_i + i4)) + 319 * i1] * b_tmp_data[i4];
                  }
                }
              } else {
                binary_expand_op_30(y_data, y_size, A, i, b_i, i1, b_tmp_data,
                                    c_i);
              }
              iv1[0] = 10;
              b_i = i3 - i2;
              iv1[1] = b_i;
              y[0] = 10;
              y[1] = y_size[1];
              emlrtSubAssignSizeCheckR2012b(&iv1[0], 2, &y[0], 2, &oc_emlrtECI,
                                            &st);
              c_loop_ub = static_cast<int8_T>(b_i);
              for (b_i = 0; b_i < 10; b_i++) {
                for (i1 = 0; i1 < c_loop_ub; i1++) {
                  tmp_data[(i2 + i1) + static_cast<int32_T>(nx) * b_i] =
                      y_data[i1 + y_size[1] * b_i];
                }
              }
              //  to save computation.
            } else if ((d1 == 2.0) || (d1 == 3.0)) {
              real_T A_data[70];
              real_T d_Q_data[49];
              int32_T i2;
              int32_T i3;
              int32_T i4;
              int32_T i5;
              if (temp > nx) {
                b_i = 1;
                i1 = 0;
                i2 = 1;
                i3 = 0;
                i4 = 0;
                i5 = 0;
                c_i = 0;
                j = 0;
              } else {
                b_i = static_cast<int32_T>(temp);
                i1 = static_cast<int32_T>(nx);
                if ((static_cast<int32_T>(temp) < 1) ||
                    (static_cast<int32_T>(temp) > loop_ub)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                                loop_ub, &ce_emlrtBCI, &st);
                }
                i2 = static_cast<int32_T>(temp);
                if ((static_cast<int32_T>(nx) < 1) ||
                    (static_cast<int32_T>(nx) > loop_ub)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1,
                                                loop_ub, &de_emlrtBCI, &st);
                }
                i3 = static_cast<int32_T>(nx);
                if ((static_cast<int32_T>(temp) < 1) ||
                    (static_cast<int32_T>(temp) > loop_ub_tmp)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                                loop_ub_tmp, &ee_emlrtBCI, &st);
                }
                i4 = static_cast<int32_T>(temp) - 1;
                if ((static_cast<int32_T>(nx) < 1) ||
                    (static_cast<int32_T>(nx) > loop_ub_tmp)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1,
                                                loop_ub_tmp, &fe_emlrtBCI, &st);
                }
                i5 = static_cast<int32_T>(nx);
                if ((static_cast<int32_T>(temp) < 1) ||
                    (static_cast<int32_T>(temp) > static_cast<int32_T>(nx))) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                                static_cast<int32_T>(nx),
                                                &se_emlrtBCI, &st);
                }
                c_i = static_cast<int32_T>(temp) - 1;
                if (static_cast<int32_T>(nx) < 1) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1,
                                                static_cast<int32_T>(nx),
                                                &te_emlrtBCI, &st);
                }
                j = static_cast<int32_T>(nx);
              }
              b_st.site = &ve_emlrtRSI;
              c_st.site = &s_emlrtRSI;
              c_loop_ub = i3 - i2;
              k = i1 - b_i;
              if (k != c_loop_ub) {
                if ((c_loop_ub + 1 == 1) && (i5 - i4 == 1)) {
                  emlrtErrorWithMessageIdR2018a(
                      &c_st, &o_emlrtRTEI,
                      "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                      "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
                } else {
                  emlrtErrorWithMessageIdR2018a(&c_st, &n_emlrtRTEI,
                                                "MATLAB:innerdim",
                                                "MATLAB:innerdim", 0);
                }
              }
              b_A_size[1] = k + 1;
              b_A_size[0] = 10;
              for (i1 = 0; i1 < 10; i1++) {
                for (i3 = 0; i3 <= k; i3++) {
                  A_data[i3 + (k + 1) * i1] =
                      A[(i + 29 * ((b_i + i3) - 1)) + 319 * i1];
                }
              }
              k = i5 - i4;
              c_Q_size[1] = k;
              c_Q_size[0] = c_loop_ub + 1;
              for (b_i = 0; b_i <= c_loop_ub; b_i++) {
                for (i1 = 0; i1 < k; i1++) {
                  d_Q_data[i1 + k * b_i] =
                      c_Q_data[(i4 + i1) + loop_ub_tmp * ((i2 + b_i) - 1)];
                }
              }
              coder::internal::blas::mtimes(A_data, b_A_size, d_Q_data,
                                            c_Q_size, y_data, y_size);
              iv1[0] = 10;
              b_i = j - c_i;
              iv1[1] = b_i;
              y[0] = 10;
              y[1] = y_size[1];
              emlrtSubAssignSizeCheckR2012b(&iv1[0], 2, &y[0], 2, &pc_emlrtECI,
                                            &st);
              c_loop_ub = static_cast<int8_T>(b_i);
              for (b_i = 0; b_i < 10; b_i++) {
                for (i1 = 0; i1 < c_loop_ub; i1++) {
                  tmp_data[(c_i + i1) + static_cast<int32_T>(nx) * b_i] =
                      y_data[i1 + y_size[1] * b_i];
                }
              }
              //  a faster way is to treat diagbonal cases vs dense cases
              //  differently. Q(temp_index, temp_index) =
              //  dev_jacob_ball(z0(temp_index), proj_coefficients(1,temp),
              //  P(temp_index), alpha);
            }
            // update
            temp = d + 1.0;
          } else {
            real_T d1;
            d1 = proj_index_all
                [(i + 30 * ((static_cast<int32_T>(temp) + 10) % 11)) + 330];
            if (d1 == 1.0) {
              int32_T i2;
              int32_T i3;
              int32_T i4;
              int32_T i5;
              if (temp > d) {
                b_i = 0;
                i1 = 0;
                i2 = 0;
                i3 = 0;
                i4 = 0;
                i5 = 0;
              } else {
                b_i = static_cast<int32_T>(temp) - 1;
                d1 = static_cast<int32_T>(muDoubleScalarFloor(d));
                if (d != d1) {
                  emlrtIntegerCheckR2012b(d, &mc_emlrtDCI, &st);
                }
                if ((static_cast<int32_T>(d) < 1) ||
                    (static_cast<int32_T>(d) > 11)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 11,
                                                &ge_emlrtBCI, &st);
                }
                i1 = static_cast<int32_T>(d);
                if ((static_cast<int32_T>(temp) < 1) ||
                    (static_cast<int32_T>(temp) > loop_ub)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                                loop_ub, &he_emlrtBCI, &st);
                }
                i2 = static_cast<int32_T>(temp) - 1;
                if (d != d1) {
                  emlrtIntegerCheckR2012b(d, &nc_emlrtDCI, &st);
                }
                if ((static_cast<int32_T>(d) < 1) ||
                    (static_cast<int32_T>(d) > loop_ub)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                                loop_ub, &ie_emlrtBCI, &st);
                }
                i3 = static_cast<int32_T>(d);
                if ((static_cast<int32_T>(temp) < 1) ||
                    (static_cast<int32_T>(temp) > loop_ub_tmp)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                                loop_ub_tmp, &je_emlrtBCI, &st);
                }
                i4 = static_cast<int32_T>(temp) - 1;
                if (d != d1) {
                  emlrtIntegerCheckR2012b(d, &oc_emlrtDCI, &st);
                }
                if ((static_cast<int32_T>(d) < 1) ||
                    (static_cast<int32_T>(d) > loop_ub_tmp)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                                loop_ub_tmp, &ke_emlrtBCI, &st);
                }
                i5 = static_cast<int32_T>(d);
              }
              c_loop_ub = i5 - i4;
              b_Q_size[1] = c_loop_ub;
              k = i3 - i2;
              b_Q_size[0] = k;
              for (i3 = 0; i3 < k; i3++) {
                for (i5 = 0; i5 < c_loop_ub; i5++) {
                  b_Q_data[i5 + c_loop_ub * i3] =
                      c_Q_data[(i4 + i5) + loop_ub_tmp * (i2 + i3)];
                }
              }
              b_st.site = &ue_emlrtRSI;
              c_i = coder::diag(b_st, b_Q_data, b_Q_size, b_tmp_data);
              c_loop_ub = i1 - b_i;
              if ((c_loop_ub != c_i) && ((c_loop_ub != 1) && (c_i != 1))) {
                emlrtDimSizeImpxCheckR2021b(c_loop_ub, c_i, &nc_emlrtECI, &st);
              }
              if (temp > d) {
                i2 = 0;
                i3 = 0;
              } else {
                if ((static_cast<int32_T>(temp) < 1) ||
                    (static_cast<int32_T>(temp) > static_cast<int32_T>(nx))) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                                static_cast<int32_T>(nx),
                                                &ue_emlrtBCI, &st);
                }
                i2 = static_cast<int32_T>(temp) - 1;
                if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
                  emlrtIntegerCheckR2012b(d, &sc_emlrtDCI, &st);
                }
                if ((static_cast<int32_T>(d) < 1) ||
                    (static_cast<int32_T>(d) > static_cast<int32_T>(nx))) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                                static_cast<int32_T>(nx),
                                                &ve_emlrtBCI, &st);
                }
                i3 = static_cast<int32_T>(d);
              }
              if (c_loop_ub == c_i) {
                y_size[1] = c_loop_ub;
                y_size[0] = 10;
                for (i1 = 0; i1 < 10; i1++) {
                  for (i4 = 0; i4 < c_loop_ub; i4++) {
                    y_data[i4 + c_loop_ub * i1] =
                        A[(i + 29 * (b_i + i4)) + 319 * i1] * b_tmp_data[i4];
                  }
                }
              } else {
                binary_expand_op_30(y_data, y_size, A, i, b_i, i1, b_tmp_data,
                                    c_i);
              }
              iv1[0] = 10;
              b_i = i3 - i2;
              iv1[1] = b_i;
              y[0] = 10;
              y[1] = y_size[1];
              emlrtSubAssignSizeCheckR2012b(&iv1[0], 2, &y[0], 2, &qc_emlrtECI,
                                            &st);
              c_loop_ub = static_cast<int8_T>(b_i);
              for (b_i = 0; b_i < 10; b_i++) {
                for (i1 = 0; i1 < c_loop_ub; i1++) {
                  tmp_data[(i2 + i1) + static_cast<int32_T>(nx) * b_i] =
                      y_data[i1 + y_size[1] * b_i];
                }
              }
              //  to save computation.
            } else if ((d1 == 2.0) || (d1 == 3.0)) {
              int32_T i2;
              int32_T i3;
              int32_T i4;
              int32_T i5;
              if (temp > d) {
                b_i = 1;
                i1 = 0;
                i2 = 1;
                i3 = 0;
                i4 = 0;
                i5 = 0;
                c_i = 0;
                j = 0;
              } else {
                b_i = static_cast<int32_T>(temp);
                d1 = static_cast<int32_T>(muDoubleScalarFloor(d));
                if (d != d1) {
                  emlrtIntegerCheckR2012b(d, &pc_emlrtDCI, &st);
                }
                if ((static_cast<int32_T>(d) < 1) ||
                    (static_cast<int32_T>(d) > 11)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 11,
                                                &le_emlrtBCI, &st);
                }
                i1 = static_cast<int32_T>(d);
                if ((static_cast<int32_T>(temp) < 1) ||
                    (static_cast<int32_T>(temp) > loop_ub)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                                loop_ub, &me_emlrtBCI, &st);
                }
                i2 = static_cast<int32_T>(temp);
                if (d != d1) {
                  emlrtIntegerCheckR2012b(d, &qc_emlrtDCI, &st);
                }
                if ((static_cast<int32_T>(d) < 1) ||
                    (static_cast<int32_T>(d) > loop_ub)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                                loop_ub, &ne_emlrtBCI, &st);
                }
                i3 = static_cast<int32_T>(d);
                if ((static_cast<int32_T>(temp) < 1) ||
                    (static_cast<int32_T>(temp) > loop_ub_tmp)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                                loop_ub_tmp, &oe_emlrtBCI, &st);
                }
                i4 = static_cast<int32_T>(temp) - 1;
                if (d != d1) {
                  emlrtIntegerCheckR2012b(d, &rc_emlrtDCI, &st);
                }
                if ((static_cast<int32_T>(d) < 1) ||
                    (static_cast<int32_T>(d) > loop_ub_tmp)) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                                loop_ub_tmp, &pe_emlrtBCI, &st);
                }
                i5 = static_cast<int32_T>(d);
                if ((static_cast<int32_T>(temp) < 1) ||
                    (static_cast<int32_T>(temp) > static_cast<int32_T>(nx))) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                                static_cast<int32_T>(nx),
                                                &we_emlrtBCI, &st);
                }
                c_i = static_cast<int32_T>(temp) - 1;
                if (d != d1) {
                  emlrtIntegerCheckR2012b(d, &tc_emlrtDCI, &st);
                }
                if ((static_cast<int32_T>(d) < 1) ||
                    (static_cast<int32_T>(d) > static_cast<int32_T>(nx))) {
                  emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1,
                                                static_cast<int32_T>(nx),
                                                &xe_emlrtBCI, &st);
                }
                j = static_cast<int32_T>(d);
              }
              b_st.site = &te_emlrtRSI;
              c_st.site = &s_emlrtRSI;
              c_loop_ub = i3 - i2;
              k = i1 - b_i;
              if (k != c_loop_ub) {
                if ((c_loop_ub + 1 == 1) && (i5 - i4 == 1)) {
                  emlrtErrorWithMessageIdR2018a(
                      &c_st, &o_emlrtRTEI,
                      "Coder:toolbox:mtimes_noDynamicScalarExpansion",
                      "Coder:toolbox:mtimes_noDynamicScalarExpansion", 0);
                } else {
                  emlrtErrorWithMessageIdR2018a(&c_st, &n_emlrtRTEI,
                                                "MATLAB:innerdim",
                                                "MATLAB:innerdim", 0);
                }
              }
              A_size[1] = k + 1;
              A_size[0] = 10;
              for (i1 = 0; i1 < 10; i1++) {
                for (i3 = 0; i3 <= k; i3++) {
                  B[i3 + (k + 1) * i1] =
                      A[(i + 29 * ((b_i + i3) - 1)) + 319 * i1];
                }
              }
              k = i5 - i4;
              b_Q_size[1] = k;
              b_Q_size[0] = c_loop_ub + 1;
              for (b_i = 0; b_i <= c_loop_ub; b_i++) {
                for (i1 = 0; i1 < k; i1++) {
                  b_Q_data[i1 + k * b_i] =
                      c_Q_data[(i4 + i1) + loop_ub_tmp * ((i2 + b_i) - 1)];
                }
              }
              coder::internal::blas::mtimes(B, A_size, b_Q_data, b_Q_size,
                                            y_data, y_size);
              iv1[0] = 10;
              b_i = j - c_i;
              iv1[1] = b_i;
              y[0] = 10;
              y[1] = y_size[1];
              emlrtSubAssignSizeCheckR2012b(&iv1[0], 2, &y[0], 2, &rc_emlrtECI,
                                            &st);
              c_loop_ub = static_cast<int8_T>(b_i);
              for (b_i = 0; b_i < 10; b_i++) {
                for (i1 = 0; i1 < c_loop_ub; i1++) {
                  tmp_data[(c_i + i1) + static_cast<int32_T>(nx) * b_i] =
                      y_data[i1 + y_size[1] * b_i];
                }
              }
              //  a faster way is to treat diagbonal cases vs dense cases
              //  differently.
            }
            // update
            temp = d + 1.0;
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
          if (flag == 1) {
            exitg1 = true;
          }
        }
      }
      iv1[0] = 10;
      iv1[1] = b_loop_ub;
      y[0] = 10;
      y[1] = static_cast<int32_T>(nx);
      emlrtSubAssignSizeCheckR2012b(&iv1[0], 2, &y[0], 2, &lc_emlrtECI,
                                    (emlrtCTX)&sp);
      for (b_i = 0; b_i < 10; b_i++) {
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          Y[((i + 58 * i1) + 580 * b_i) + 29] =
              tmp_data[i1 + static_cast<int32_T>(nx) * b_i];
        }
      }
      // Remember to transpose Q
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
}

// End of code generation (dev_H_sinv_Ht.cpp)
