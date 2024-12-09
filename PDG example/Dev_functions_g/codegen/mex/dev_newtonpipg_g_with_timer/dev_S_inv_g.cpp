//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_S_inv_g.cpp
//
// Code generation for function 'dev_S_inv_g'
//

// Include files
#include "dev_S_inv_g.h"
#include "abs.h"
#include "dev_jacob_ball.h"
#include "dev_jacob_soc.h"
#include "dev_newtonpipg_g_with_timer_data.h"
#include "diag.h"
#include "eig.h"
#include "eye.h"
#include "indexShapeCheck.h"
#include "proj_D_unit_with_affinejacobian.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "blas.h"
#include "coder_array.h"
#include "emlrt.h"
#include "mwmathutil.h"
#include <cstddef>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo rd_emlrtRSI{
    17,            // lineNo
    "dev_S_inv_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo sd_emlrtRSI{
    19,            // lineNo
    "dev_S_inv_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo td_emlrtRSI{
    38,             // lineNo
    "jacob_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo ud_emlrtRSI{
    41,             // lineNo
    "jacob_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo vd_emlrtRSI{
    42,             // lineNo
    "jacob_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo wd_emlrtRSI{
    44,             // lineNo
    "jacob_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo xd_emlrtRSI{
    46,             // lineNo
    "jacob_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo yd_emlrtRSI{
    56,              // lineNo
    "dev_jacob_box", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo ae_emlrtRSI{
    57,              // lineNo
    "dev_jacob_box", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo be_emlrtRSI{
    58,              // lineNo
    "dev_jacob_box", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo ce_emlrtRSI{
    59,              // lineNo
    "dev_jacob_box", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo ke_emlrtRSI{
    3,                // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

static emlrtRSInfo le_emlrtRSI{
    8,                // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

static emlrtRSInfo me_emlrtRSI{
    10,               // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

static emlrtRSInfo ne_emlrtRSI{
    11,               // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

static emlrtRSInfo oe_emlrtRSI{
    12,               // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

static emlrtRSInfo pe_emlrtRSI{
    13,               // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

static emlrtECInfo y_emlrtECI{
    -1,            // nDims
    17,            // lineNo
    10,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtBCInfo hb_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    19,            // lineNo
    12,            // colNo
    "Q",           // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo w_emlrtDCI{
    19,            // lineNo
    14,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo ib_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    19,            // lineNo
    14,            // colNo
    "Q",           // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo jb_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    19,            // lineNo
    17,            // colNo
    "Q",           // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo x_emlrtDCI{
    19,            // lineNo
    19,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo kb_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    19,            // lineNo
    19,            // colNo
    "Q",           // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtECInfo ab_emlrtECI{
    -1,            // nDims
    19,            // lineNo
    10,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo bb_emlrtECI{
    -1,            // nDims
    17,            // lineNo
    20,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtBCInfo lb_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    19,            // lineNo
    32,            // colNo
    "Q_inv",       // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo y_emlrtDCI{
    19,            // lineNo
    34,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo mb_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    19,            // lineNo
    34,            // colNo
    "Q_inv",       // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo nb_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    19,            // lineNo
    37,            // colNo
    "Q_inv",       // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo ab_emlrtDCI{
    19,            // lineNo
    39,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo ob_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    19,            // lineNo
    39,            // colNo
    "Q_inv",       // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtECInfo cb_emlrtECI{
    -1,            // nDims
    19,            // lineNo
    26,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtDCInfo bb_emlrtDCI{
    4,             // lineNo
    11,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtDCInfo cb_emlrtDCI{
    4,             // lineNo
    11,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    4                                             // checkKind
};

static emlrtDCInfo db_emlrtDCI{
    4,             // lineNo
    1,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtDCInfo eb_emlrtDCI{
    4,             // lineNo
    1,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    4                                             // checkKind
};

static emlrtBCInfo pb_emlrtBCI{
    1,             // iFirst
    326,           // iLast
    14,            // lineNo
    18,            // colNo
    "z0",          // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo fb_emlrtDCI{
    14,            // lineNo
    18,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtECInfo db_emlrtECI{
    2,                // nDims
    15,               // lineNo
    18,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo eb_emlrtECI{
    2,                // nDims
    14,               // lineNo
    18,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo fb_emlrtECI{
    1,                // nDims
    13,               // lineNo
    31,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo gb_emlrtECI{
    1,                // nDims
    13,               // lineNo
    42,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo hb_emlrtECI{
    1,                // nDims
    12,               // lineNo
    40,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo ib_emlrtECI{
    1,                // nDims
    12,               // lineNo
    51,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo jb_emlrtECI{
    2,                // nDims
    8,                // lineNo
    9,                // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo kb_emlrtECI{
    1,                // nDims
    8,                // lineNo
    9,                // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo lb_emlrtECI{
    1,               // nDims
    57,              // lineNo
    27,              // colNo
    "dev_jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo mb_emlrtECI{
    1,               // nDims
    57,              // lineNo
    38,              // colNo
    "dev_jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo nb_emlrtECI{
    1,               // nDims
    56,              // lineNo
    36,              // colNo
    "dev_jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo ob_emlrtECI{
    1,               // nDims
    56,              // lineNo
    47,              // colNo
    "dev_jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo pb_emlrtECI{
    1,               // nDims
    54,              // lineNo
    28,              // colNo
    "dev_jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo qb_emlrtECI{
    1,               // nDims
    54,              // lineNo
    29,              // colNo
    "dev_jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo rb_emlrtECI{
    -1,             // nDims
    46,             // lineNo
    36,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo sb_emlrtECI{
    -1,             // nDims
    44,             // lineNo
    36,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo tb_emlrtECI{
    -1,             // nDims
    41,             // lineNo
    35,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo ub_emlrtECI{
    -1,             // nDims
    46,             // lineNo
    10,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo vb_emlrtECI{
    -1,             // nDims
    44,             // lineNo
    10,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo wb_emlrtECI{
    -1,             // nDims
    41,             // lineNo
    9,              // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtBCInfo qb_emlrtBCI{
    1,              // iFirst
    11,             // iLast
    35,             // lineNo
    22,             // colNo
    "proj_index",   // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo gb_emlrtDCI{
    35,             // lineNo
    22,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo rb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    41,             // lineNo
    86,             // colNo
    "z0",           // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo hb_emlrtDCI{
    41,             // lineNo
    86,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo sb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    44,             // lineNo
    87,             // colNo
    "z0",           // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo ib_emlrtDCI{
    44,             // lineNo
    87,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo tb_emlrtBCI{
    1,                   // iFirst
    11,                  // iLast
    41,                  // lineNo
    118,                 // colNo
    "proj_coefficients", // aName
    "jacob_D_unit",      // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo ub_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    46,             // lineNo
    86,             // colNo
    "z0",           // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo jb_emlrtDCI{
    46,             // lineNo
    86,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo vb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    44,             // lineNo
    129,            // colNo
    "P",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo wb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    46,             // lineNo
    128,            // colNo
    "P",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo xb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    42,             // lineNo
    52,             // colNo
    "P",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo yb_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    46,             // lineNo
    12,             // colNo
    "Q",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo ac_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    46,             // lineNo
    24,             // colNo
    "Q",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo bc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    46,             // lineNo
    42,             // colNo
    "Q_inv",        // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo cc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    46,             // lineNo
    54,             // colNo
    "Q_inv",        // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo dc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    44,             // lineNo
    12,             // colNo
    "Q",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo ec_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    44,             // lineNo
    24,             // colNo
    "Q",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo fc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    44,             // lineNo
    42,             // colNo
    "Q_inv",        // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo gc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    44,             // lineNo
    54,             // colNo
    "Q_inv",        // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo hc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    41,             // lineNo
    11,             // colNo
    "Q",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo ic_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    41,             // lineNo
    23,             // colNo
    "Q",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo jc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    41,             // lineNo
    41,             // colNo
    "Q_inv",        // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo kc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    41,             // lineNo
    53,             // colNo
    "Q_inv",        // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtRTEInfo qd_emlrtRTEI{
    4,             // lineNo
    1,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo rd_emlrtRTEI{
    5,             // lineNo
    1,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo sd_emlrtRTEI{
    12,            // lineNo
    9,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo td_emlrtRTEI{
    10,            // lineNo
    9,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo ud_emlrtRTEI{
    14,            // lineNo
    5,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo vd_emlrtRTEI{
    15,            // lineNo
    5,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo wd_emlrtRTEI{
    31,            // lineNo
    1,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo xd_emlrtRTEI{
    32,            // lineNo
    1,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo yd_emlrtRTEI{
    38,            // lineNo
    5,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo ae_emlrtRTEI{
    46,            // lineNo
    83,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo be_emlrtRTEI{
    46,            // lineNo
    126,           // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo ce_emlrtRTEI{
    46,            // lineNo
    12,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo de_emlrtRTEI{
    46,            // lineNo
    24,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo ee_emlrtRTEI{
    46,            // lineNo
    42,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo fe_emlrtRTEI{
    46,            // lineNo
    54,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo ge_emlrtRTEI{
    44,            // lineNo
    84,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo he_emlrtRTEI{
    44,            // lineNo
    127,           // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo ie_emlrtRTEI{
    8,                // lineNo
    35,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtRTEInfo ne_emlrtRTEI{
    14,               // lineNo
    5,                // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtRTEInfo pe_emlrtRTEI{
    5,                // lineNo
    5,                // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtRTEInfo qe_emlrtRTEI{
    44,            // lineNo
    12,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo re_emlrtRTEI{
    44,            // lineNo
    24,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo se_emlrtRTEI{
    44,            // lineNo
    42,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo te_emlrtRTEI{
    44,            // lineNo
    54,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo ue_emlrtRTEI{
    41,            // lineNo
    83,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo ve_emlrtRTEI{
    41,            // lineNo
    118,           // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo we_emlrtRTEI{
    41,            // lineNo
    98,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo xe_emlrtRTEI{
    42,            // lineNo
    15,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo ye_emlrtRTEI{
    54,            // lineNo
    29,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo af_emlrtRTEI{
    54,            // lineNo
    36,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo bf_emlrtRTEI{
    55,            // lineNo
    1,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo cf_emlrtRTEI{
    56,            // lineNo
    47,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo df_emlrtRTEI{
    56,            // lineNo
    36,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo ef_emlrtRTEI{
    41,            // lineNo
    11,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo ff_emlrtRTEI{
    41,            // lineNo
    23,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo gf_emlrtRTEI{
    41,            // lineNo
    41,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo hf_emlrtRTEI{
    41,            // lineNo
    53,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRSInfo ui_emlrtRSI{
    54,              // lineNo
    "dev_jacob_box", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo xi_emlrtRSI{
    15,               // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

static emlrtRSInfo yi_emlrtRSI{
    14,               // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

// Function Declarations
static void binary_expand_op_12(const emlrtStack &sp,
                                coder::array<real_T, 1U> &in1,
                                const emlrtRSInfo in2,
                                const coder::array<real_T, 1U> &in3,
                                const coder::array<real_T, 1U> &in4);

static void binary_expand_op_13(const emlrtStack &sp,
                                coder::array<real_T, 1U> &in1,
                                const emlrtRSInfo in2,
                                const coder::array<real_T, 1U> &in3);

static void binary_expand_op_14(const emlrtStack &sp,
                                coder::array<real_T, 1U> &in1,
                                const coder::array<real_T, 1U> &in2,
                                const coder::array<real_T, 1U> &in3);

static void binary_expand_op_15(const emlrtStack &sp,
                                coder::array<real_T, 1U> &in1,
                                const coder::array<real_T, 1U> &in2,
                                const coder::array<real_T, 1U> &in3,
                                const coder::array<real_T, 2U> &in4);

static void
jacob_D_unit(const emlrtStack &sp, const coder::array<real_T, 1U> &z0,
             const real_T proj_index[22], const real_T proj_coefficients[22],
             const coder::array<real_T, 1U> &P, real_T alpha,
             coder::array<real_T, 2U> &Q, coder::array<real_T, 2U> &Q_inv);

// Function Definitions
static void binary_expand_op_12(const emlrtStack &sp,
                                coder::array<real_T, 1U> &in1,
                                const emlrtRSInfo in2,
                                const coder::array<real_T, 1U> &in3,
                                const coder::array<real_T, 1U> &in4)
{
  coder::array<real_T, 1U> r;
  emlrtStack st;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in4.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in4.size(0);
  }
  r.set_size(&me_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    r[i] = 1.0 / ((1.0 - in3[i * stride_0_0]) + in4[i * stride_1_0]);
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  coder::b_abs(st, r, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op_13(const emlrtStack &sp,
                                coder::array<real_T, 1U> &in1,
                                const emlrtRSInfo in2,
                                const coder::array<real_T, 1U> &in3)
{
  coder::array<real_T, 1U> b_in3;
  emlrtStack st;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  if (in1.size(0) == 1) {
    loop_ub = in3.size(0);
  } else {
    loop_ub = in1.size(0);
  }
  b_in3.set_size(&me_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in1.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in3[i] = in3[i * stride_0_0] / in1[i * stride_1_0];
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  coder::b_abs(st, b_in3, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op_14(const emlrtStack &sp,
                                coder::array<real_T, 1U> &in1,
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
  in1.set_size(&df_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = (1.0 - in2[i * stride_0_0]) + in3[i * stride_1_0];
  }
}

static void binary_expand_op_15(const emlrtStack &sp,
                                coder::array<real_T, 1U> &in1,
                                const coder::array<real_T, 1U> &in2,
                                const coder::array<real_T, 1U> &in3,
                                const coder::array<real_T, 2U> &in4)
{
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  if (in4.size(1) == 1) {
    loop_ub = in2.size(0);
  } else {
    loop_ub = in4.size(1);
  }
  in1.set_size(&cf_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in4.size(1) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = in2[i * stride_0_0] *
             in3[static_cast<int32_T>(in4[i * stride_1_0]) - 1];
  }
}

static void
jacob_D_unit(const emlrtStack &sp, const coder::array<real_T, 1U> &z0,
             const real_T proj_index[22], const real_T proj_coefficients[22],
             const coder::array<real_T, 1U> &P, real_T alpha,
             coder::array<real_T, 2U> &Q, coder::array<real_T, 2U> &Q_inv)
{
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  emlrtProfilerSentinel b_profilerSentinel;
  emlrtProfilerSentinel c_profilerSentinel;
  emlrtProfilerSentinel profilerSentinel;
  coder::array<creal_T, 2U> c_Q;
  coder::array<creal_T, 2U> lambda_m;
  coder::array<creal_T, 1U> b_lambda;
  coder::array<creal_T, 1U> d_lambda;
  coder::array<creal_T, 1U> r7;
  coder::array<creal_T, 1U> r9;
  coder::array<creal_T, 1U> y;
  coder::array<real_T, 2U> b_Q;
  coder::array<real_T, 2U> d_Q;
  coder::array<real_T, 2U> r;
  coder::array<real_T, 2U> temp_index;
  coder::array<real_T, 1U> c_lambda;
  coder::array<real_T, 1U> lambda;
  coder::array<real_T, 1U> lambda_between;
  coder::array<real_T, 1U> lambda_inv;
  coder::array<real_T, 1U> r6;
  coder::array<int32_T, 1U> r1;
  coder::array<int32_T, 1U> r2;
  coder::array<uint32_T, 1U> l_tmp;
  coder::array<boolean_T, 1U> r3;
  coder::array<boolean_T, 1U> r5;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  real_T temp;
  int32_T iv[2];
  int32_T i;
  int32_T i1;
  int32_T loop_ub_tmp;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  emlrtMEXProfilingFunctionEntryCPP((char_T *)jacob_D_unit_complete_name,
                                    static_cast<boolean_T>(isMexOutdated),
                                    &profilerSentinel);
  emlrtMEXProfilingStatement(1, static_cast<boolean_T>(isMexOutdated));
  i = z0.size(0);
  Q.set_size(&wd_emlrtRTEI, &sp, z0.size(0), z0.size(0));
  loop_ub_tmp = z0.size(0) * z0.size(0);
  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    Q[i1] = 0.0;
  }
  emlrtMEXProfilingStatement(2, static_cast<boolean_T>(isMexOutdated));
  Q_inv.set_size(&xd_emlrtRTEI, &sp, z0.size(0), z0.size(0));
  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    Q_inv[i1] = 0.0;
  }
  emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
  temp = 1.0;
  emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
  exitg1 = false;
  while ((!exitg1) && (temp <= z0.size(0))) {
    emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
    if (temp != static_cast<int32_T>(muDoubleScalarFloor(temp))) {
      emlrtIntegerCheckR2012b(temp, &gb_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(temp) < 1) || (static_cast<int32_T>(temp) > 11)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, 11,
                                    &qb_emlrtBCI, (emlrtConstCTX)&sp);
    }
    i1 = (static_cast<int32_T>(temp) - 1) << 1;
    if (proj_index[i1] == rtInf) {
      emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
      exitg1 = true;
    } else {
      real_T a;
      real_T d;
      int32_T i2;
      int32_T loop_ub;
      emlrtMEXProfilingStatement(8, static_cast<boolean_T>(isMexOutdated));
      st.site = &td_emlrtRSI;
      b_st.site = &qb_emlrtRSI;
      d = proj_index[i1];
      if (muDoubleScalarIsNaN(d)) {
        temp_index.set_size(&yd_emlrtRTEI, &b_st, 1, 1);
        temp_index[0] = rtNaN;
      } else if (d < temp) {
        temp_index.set_size(&yd_emlrtRTEI, &b_st, 1, 0);
      } else if (muDoubleScalarIsInf(d) && (temp == d)) {
        temp_index.set_size(&yd_emlrtRTEI, &b_st, 1, 1);
        temp_index[0] = rtNaN;
      } else {
        loop_ub = static_cast<int32_T>(d - temp);
        temp_index.set_size(&yd_emlrtRTEI, &b_st, 1, loop_ub + 1);
        for (i2 = 0; i2 <= loop_ub; i2++) {
          temp_index[i2] = temp + static_cast<real_T>(i2);
        }
      }
      emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
      emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
      a = proj_index[i1 + 1];
      if (a == 1.0) {
        __m128d r4;
        __m128d r8;
        int32_T b_loop_ub;
        int32_T c_loop_ub;
        int32_T vectorUB;
        emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
        emlrtMEXProfilingStatement(12, static_cast<boolean_T>(isMexOutdated));
        iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
        iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
        st.site = &ud_emlrtRSI;
        coder::internal::indexShapeCheck(st, z0.size(0), iv);
        iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
        iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
        st.site = &vd_emlrtRSI;
        coder::internal::indexShapeCheck(st, P.size(0), iv);
        st.site = &ud_emlrtRSI;
        loop_ub = temp_index.size(1);
        lambda_between.set_size(&ue_emlrtRTEI, &st, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          if (temp_index[i1] !=
              static_cast<int32_T>(muDoubleScalarFloor(temp_index[i1]))) {
            emlrtIntegerCheckR2012b(temp_index[i1], &hb_emlrtDCI, &st);
          }
          i2 = static_cast<int32_T>(temp_index[i1]);
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &rb_emlrtBCI, &st);
          }
          lambda_between[i1] = z0[i2 - 1];
        }
        l_tmp.set_size(&ve_emlrtRTEI, &st, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          l_tmp[i1] = static_cast<uint32_T>(temp_index[i1]);
        }
        lambda_inv.set_size(&we_emlrtRTEI, &st, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          if ((static_cast<int32_T>(l_tmp[i1]) < 1) ||
              (static_cast<int32_T>(l_tmp[i1]) > 11)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(l_tmp[i1]), 1,
                                          11, &tb_emlrtBCI, &st);
          }
          lambda_inv[i1] =
              proj_coefficients[((static_cast<int32_T>(l_tmp[i1]) - 1) << 1) +
                                1];
        }
        lambda.set_size(&xe_emlrtRTEI, &st, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          lambda[i1] =
              proj_coefficients[(static_cast<int32_T>(l_tmp[i1]) - 1) << 1];
        }
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = static_cast<int32_T>(temp_index[i1]);
          if ((i2 < 1) || (i2 > P.size(0))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, P.size(0), &xb_emlrtBCI, &st);
          }
        }
        emlrtMEXProfilingFunctionEntryCPP((char_T *)dev_jacob_box_complete_name,
                                          static_cast<boolean_T>(isMexOutdated),
                                          &c_profilerSentinel);
        emlrtMEXProfilingStatement(1, static_cast<boolean_T>(isMexOutdated));
        if ((lambda_inv.size(0) != temp_index.size(1)) &&
            ((temp_index.size(1) != 1) && (lambda_inv.size(0) != 1))) {
          emlrtDimSizeImpxCheckR2021b(temp_index.size(1), lambda_inv.size(0),
                                      &qb_emlrtECI, &st);
        }
        if (lambda_between.size(0) == lambda_inv.size(0)) {
          b_loop_ub = lambda_between.size(0);
          r3.set_size(&ye_emlrtRTEI, &st, lambda_between.size(0));
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            r3[i1] = (lambda_between[i1] <= lambda_inv[i1]);
          }
        } else {
          b_st.site = &ui_emlrtRSI;
          le(b_st, r3, lambda_between, lambda_inv);
        }
        if (lambda_between.size(0) == lambda.size(0)) {
          b_loop_ub = lambda_between.size(0);
          r5.set_size(&af_emlrtRTEI, &st, lambda_between.size(0));
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            r5[i1] = (lambda_between[i1] >= lambda[i1]);
          }
        } else {
          b_st.site = &ui_emlrtRSI;
          ge(b_st, r5, lambda_between, lambda);
        }
        b_loop_ub = r3.size(0);
        if ((r3.size(0) != r5.size(0)) &&
            ((r3.size(0) != 1) && (r5.size(0) != 1))) {
          emlrtDimSizeImpxCheckR2021b(r3.size(0), r5.size(0), &pb_emlrtECI,
                                      &st);
        }
        // %%Jacobian of box should be computed after projection!.
        emlrtMEXProfilingStatement(2, static_cast<boolean_T>(isMexOutdated));
        if (r3.size(0) == r5.size(0)) {
          lambda.set_size(&bf_emlrtRTEI, &st, r3.size(0));
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            lambda[i1] = ((!r3[i1]) && (!r5[i1]));
          }
        } else {
          b_st.site = &si_emlrtRSI;
          binary_expand_op_9(b_st, lambda, r3, r5);
        }
        emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
        b_loop_ub = lambda.size(0);
        lambda_inv.set_size(&cf_emlrtRTEI, &st, lambda.size(0));
        loop_ub_tmp = (lambda.size(0) / 2) << 1;
        vectorUB = loop_ub_tmp - 2;
        for (i1 = 0; i1 <= vectorUB; i1 += 2) {
          r4 = _mm_loadu_pd(&lambda[i1]);
          _mm_storeu_pd(&lambda_inv[i1], _mm_mul_pd(_mm_set1_pd(alpha), r4));
        }
        for (i1 = loop_ub_tmp; i1 < b_loop_ub; i1++) {
          lambda_inv[i1] = alpha * lambda[i1];
        }
        c_loop_ub = lambda_inv.size(0);
        if ((lambda_inv.size(0) != temp_index.size(1)) &&
            ((lambda_inv.size(0) != 1) && (temp_index.size(1) != 1))) {
          emlrtDimSizeImpxCheckR2021b(lambda_inv.size(0), temp_index.size(1),
                                      &ob_emlrtECI, &st);
        }
        if (lambda_inv.size(0) == temp_index.size(1)) {
          r6.set_size(&cf_emlrtRTEI, &st, lambda_inv.size(0));
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            r6[i1] =
                lambda_inv[i1] * P[static_cast<int32_T>(temp_index[i1]) - 1];
          }
        } else {
          b_st.site = &yd_emlrtRSI;
          binary_expand_op_15(b_st, r6, lambda_inv, P, temp_index);
        }
        if ((lambda.size(0) != r6.size(0)) &&
            ((lambda.size(0) != 1) && (r6.size(0) != 1))) {
          emlrtDimSizeImpxCheckR2021b(lambda.size(0), r6.size(0), &nb_emlrtECI,
                                      &st);
        }
        b_st.site = &yd_emlrtRSI;
        if (lambda.size(0) == r6.size(0)) {
          lambda_between.set_size(&df_emlrtRTEI, &b_st, lambda.size(0));
          for (i1 = 0; i1 <= vectorUB; i1 += 2) {
            r4 = _mm_loadu_pd(&lambda[i1]);
            r8 = _mm_loadu_pd(&r6[i1]);
            _mm_storeu_pd(&lambda_between[i1],
                          _mm_add_pd(_mm_sub_pd(_mm_set1_pd(1.0), r4), r8));
          }
          for (i1 = loop_ub_tmp; i1 < b_loop_ub; i1++) {
            lambda_between[i1] = (1.0 - lambda[i1]) + r6[i1];
          }
        } else {
          c_st.site = &yd_emlrtRSI;
          binary_expand_op_14(c_st, lambda_between, lambda, r6);
        }
        c_st.site = &de_emlrtRSI;
        d_st.site = &ee_emlrtRSI;
        if ((lambda.size(0) != 1) && (lambda_between.size(0) != 1) &&
            (lambda.size(0) != lambda_between.size(0))) {
          emlrtErrorWithMessageIdR2018a(&d_st, &n_emlrtRTEI,
                                        "MATLAB:sizeDimensionsMustMatch",
                                        "MATLAB:sizeDimensionsMustMatch", 0);
        }
        if (lambda.size(0) == lambda_between.size(0)) {
          b_loop_ub = lambda.size(0);
          c_lambda.set_size(&me_emlrtRTEI, &st, lambda.size(0));
          loop_ub_tmp = (lambda.size(0) / 2) << 1;
          vectorUB = loop_ub_tmp - 2;
          for (i1 = 0; i1 <= vectorUB; i1 += 2) {
            r4 = _mm_loadu_pd(&lambda[i1]);
            r8 = _mm_loadu_pd(&lambda_between[i1]);
            _mm_storeu_pd(&c_lambda[i1], _mm_div_pd(r4, r8));
          }
          for (i1 = loop_ub_tmp; i1 < b_loop_ub; i1++) {
            c_lambda[i1] = lambda[i1] / lambda_between[i1];
          }
          b_st.site = &yd_emlrtRSI;
          coder::b_abs(b_st, c_lambda, lambda_between);
        } else {
          b_st.site = &yd_emlrtRSI;
          binary_expand_op_13(b_st, lambda_between, yd_emlrtRSI, lambda);
        }
        b_st.site = &yd_emlrtRSI;
        coder::b_sqrt(b_st, lambda_between);
        emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
        if ((lambda_inv.size(0) != temp_index.size(1)) &&
            ((lambda_inv.size(0) != 1) && (temp_index.size(1) != 1))) {
          emlrtDimSizeImpxCheckR2021b(lambda_inv.size(0), temp_index.size(1),
                                      &mb_emlrtECI, &st);
        }
        b_loop_ub = lambda.size(0);
        if ((lambda.size(0) != r6.size(0)) &&
            ((lambda.size(0) != 1) && (r6.size(0) != 1))) {
          emlrtDimSizeImpxCheckR2021b(lambda.size(0), r6.size(0), &lb_emlrtECI,
                                      &st);
        }
        if (lambda.size(0) == r6.size(0)) {
          loop_ub_tmp = (lambda.size(0) / 2) << 1;
          vectorUB = loop_ub_tmp - 2;
          for (i1 = 0; i1 <= vectorUB; i1 += 2) {
            __m128d r10;
            r4 = _mm_loadu_pd(&lambda[i1]);
            r8 = _mm_loadu_pd(&r6[i1]);
            r10 = _mm_set1_pd(1.0);
            _mm_storeu_pd(&lambda[i1],
                          _mm_div_pd(r10, _mm_add_pd(_mm_sub_pd(r10, r4), r8)));
          }
          for (i1 = loop_ub_tmp; i1 < b_loop_ub; i1++) {
            lambda[i1] = 1.0 / ((1.0 - lambda[i1]) + r6[i1]);
          }
          b_st.site = &ae_emlrtRSI;
          coder::b_abs(b_st, lambda, lambda_inv);
        } else {
          b_st.site = &ae_emlrtRSI;
          binary_expand_op_12(b_st, lambda_inv, ae_emlrtRSI, lambda, r6);
        }
        b_st.site = &ae_emlrtRSI;
        coder::b_sqrt(b_st, lambda_inv);
        emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
        b_st.site = &be_emlrtRSI;
        coder::diag(b_st, lambda_between, r);
        emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
        b_st.site = &ce_emlrtRSI;
        coder::diag(b_st, lambda_inv, b_Q);
        emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
        emlrtMEXProfilingFunctionExitCPP(&c_profilerSentinel);
        r1.set_size(&ef_emlrtRTEI, &sp, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          if ((static_cast<int32_T>(l_tmp[i1]) < 1) ||
              (static_cast<int32_T>(l_tmp[i1]) > i)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(l_tmp[i1]), 1, i,
                                          &hc_emlrtBCI, (emlrtConstCTX)&sp);
          }
          r1[i1] = static_cast<int32_T>(l_tmp[i1]) - 1;
        }
        r2.set_size(&ff_emlrtRTEI, &sp, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          if ((static_cast<int32_T>(l_tmp[i1]) < 1) ||
              (static_cast<int32_T>(l_tmp[i1]) > i)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(l_tmp[i1]), 1, i,
                                          &ic_emlrtBCI, (emlrtConstCTX)&sp);
          }
          r2[i1] = static_cast<int32_T>(l_tmp[i1]) - 1;
        }
        b_loop_ub = r1.size(0);
        iv[0] = r1.size(0);
        c_loop_ub = r2.size(0);
        iv[1] = r2.size(0);
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, r.size(), 2, &wb_emlrtECI,
                                      (emlrtCTX)&sp);
        iv[0] = r1.size(0);
        for (i1 = 0; i1 < c_loop_ub; i1++) {
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            Q[r1[i2] + Q.size(0) * r2[i1]] = r[i2 + iv[0] * i1];
          }
        }
        r1.set_size(&gf_emlrtRTEI, &sp, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          if ((static_cast<int32_T>(l_tmp[i1]) < 1) ||
              (static_cast<int32_T>(l_tmp[i1]) > i)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(l_tmp[i1]), 1, i,
                                          &jc_emlrtBCI, (emlrtConstCTX)&sp);
          }
          r1[i1] = static_cast<int32_T>(l_tmp[i1]) - 1;
        }
        r2.set_size(&hf_emlrtRTEI, &sp, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          if ((static_cast<int32_T>(l_tmp[i1]) < 1) ||
              (static_cast<int32_T>(l_tmp[i1]) > i)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(l_tmp[i1]), 1, i,
                                          &kc_emlrtBCI, (emlrtConstCTX)&sp);
          }
          r2[i1] = static_cast<int32_T>(l_tmp[i1]) - 1;
        }
        loop_ub = r1.size(0);
        iv[0] = r1.size(0);
        b_loop_ub = r2.size(0);
        iv[1] = r2.size(0);
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, b_Q.size(), 2, &tb_emlrtECI,
                                      (emlrtCTX)&sp);
        iv[0] = r1.size(0);
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          for (i2 = 0; i2 < loop_ub; i2++) {
            Q_inv[r1[i2] + Q_inv.size(0) * r2[i1]] = b_Q[i2 + iv[0] * i1];
          }
        }
        emlrtMEXProfilingStatement(17, static_cast<boolean_T>(isMexOutdated));
      } else {
        emlrtMEXProfilingStatement(13, static_cast<boolean_T>(isMexOutdated));
        if (a == 2.0) {
          real_T b_proj_coefficients;
          int32_T b_loop_ub;
          int32_T c_loop_ub;
          emlrtMEXProfilingStatement(14, static_cast<boolean_T>(isMexOutdated));
          iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
          iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
          st.site = &wd_emlrtRSI;
          coder::internal::indexShapeCheck(st, z0.size(0), iv);
          iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
          iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
          st.site = &wd_emlrtRSI;
          coder::internal::indexShapeCheck(st, P.size(0), iv);
          st.site = &wd_emlrtRSI;
          loop_ub = temp_index.size(1);
          lambda_inv.set_size(&ge_emlrtRTEI, &st, temp_index.size(1));
          for (i2 = 0; i2 < loop_ub; i2++) {
            if (temp_index[i2] !=
                static_cast<int32_T>(muDoubleScalarFloor(temp_index[i2]))) {
              emlrtIntegerCheckR2012b(temp_index[i2], &ib_emlrtDCI, &st);
            }
            loop_ub_tmp = static_cast<int32_T>(temp_index[i2]);
            if ((loop_ub_tmp < 1) || (loop_ub_tmp > i)) {
              emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, i, &sb_emlrtBCI,
                                            &st);
            }
            lambda_inv[i2] = z0[loop_ub_tmp - 1];
          }
          lambda_between.set_size(&he_emlrtRTEI, &st, temp_index.size(1));
          for (i2 = 0; i2 < loop_ub; i2++) {
            loop_ub_tmp = static_cast<int32_T>(temp_index[i2]);
            if ((loop_ub_tmp < 1) || (loop_ub_tmp > P.size(0))) {
              emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, P.size(0),
                                            &vb_emlrtBCI, &st);
            }
            lambda_between[i2] = P[loop_ub_tmp - 1];
          }
          emlrtMEXProfilingFunctionEntryCPP(
              (char_T *)dev_jacob_ball_complete_name,
              static_cast<boolean_T>(isMexOutdated), &b_profilerSentinel);
          emlrtMEXProfilingStatement(1, static_cast<boolean_T>(isMexOutdated));
          if (temp_index.size(1) == 0) {
            a = 0.0;
          } else {
            n_t = (ptrdiff_t)temp_index.size(1);
            incx_t = (ptrdiff_t)1;
            a = dnrm2(&n_t, &(lambda_inv.data())[0], &incx_t);
          }
          b_proj_coefficients = proj_coefficients[i1];
          if (a <= b_proj_coefficients) {
            int32_T vectorUB;
            emlrtMEXProfilingStatement(2,
                                       static_cast<boolean_T>(isMexOutdated));
            b_loop_ub = lambda_between.size(0);
            loop_ub_tmp = (lambda_between.size(0) / 2) << 1;
            vectorUB = loop_ub_tmp - 2;
            for (i1 = 0; i1 <= vectorUB; i1 += 2) {
              __m128d r4;
              r4 = _mm_loadu_pd(&lambda_between[i1]);
              _mm_storeu_pd(&lambda_between[i1],
                            _mm_div_pd(_mm_set1_pd(1.0),
                                       _mm_mul_pd(_mm_set1_pd(alpha), r4)));
            }
            for (i1 = loop_ub_tmp; i1 < b_loop_ub; i1++) {
              lambda_between[i1] = 1.0 / (alpha * lambda_between[i1]);
            }
            b_st.site = &ke_emlrtRSI;
            coder::b_sqrt(b_st, lambda_between);
            b_st.site = &ke_emlrtRSI;
            coder::diag(b_st, lambda_between, b_Q);
            emlrtMEXProfilingStatement(3,
                                       static_cast<boolean_T>(isMexOutdated));
            emlrtMEXProfilingStatement(4,
                                       static_cast<boolean_T>(isMexOutdated));
            r.set_size(&pe_emlrtRTEI, &st, b_Q.size(0), b_Q.size(1));
            b_loop_ub = b_Q.size(0) * b_Q.size(1);
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              r[i1] = b_Q[i1];
            }
            emlrtMEXProfilingStatement(15,
                                       static_cast<boolean_T>(isMexOutdated));
          } else {
            __m128d r4;
            real_T b_a;
            real_T bi;
            int32_T vectorUB;
            emlrtMEXProfilingStatement(5,
                                       static_cast<boolean_T>(isMexOutdated));
            emlrtMEXProfilingStatement(6,
                                       static_cast<boolean_T>(isMexOutdated));
            emlrtMEXProfilingStatement(7,
                                       static_cast<boolean_T>(isMexOutdated));
            b_a = 1.0 / a;
            b_st.site = &le_emlrtRSI;
            coder::eye(b_st, static_cast<real_T>(temp_index.size(1)), b_Q);
            b_loop_ub = b_Q.size(0) * b_Q.size(1);
            loop_ub_tmp = (b_loop_ub / 2) << 1;
            vectorUB = loop_ub_tmp - 2;
            for (i1 = 0; i1 <= vectorUB; i1 += 2) {
              r4 = _mm_loadu_pd(&b_Q[i1]);
              _mm_storeu_pd(&b_Q[i1], _mm_mul_pd(_mm_set1_pd(b_a), r4));
            }
            for (i1 = loop_ub_tmp; i1 < b_loop_ub; i1++) {
              b_Q[i1] = b_a * b_Q[i1];
            }
            b_st.site = &le_emlrtRSI;
            c_st.site = &w_emlrtRSI;
            a = muDoubleScalarPower(a, 3.0);
            b_loop_ub = lambda_inv.size(0);
            r.set_size(&ie_emlrtRTEI, &st, lambda_inv.size(0),
                       lambda_inv.size(0));
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              loop_ub_tmp = (lambda_inv.size(0) / 2) << 1;
              vectorUB = loop_ub_tmp - 2;
              for (i2 = 0; i2 <= vectorUB; i2 += 2) {
                r4 = _mm_loadu_pd(&lambda_inv[i2]);
                _mm_storeu_pd(
                    &r[i2 + r.size(0) * i1],
                    _mm_div_pd(
                        _mm_add_pd(_mm_set1_pd(0.0),
                                   _mm_mul_pd(r4, _mm_set1_pd(lambda_inv[i1]))),
                        _mm_set1_pd(a)));
              }
              for (i2 = loop_ub_tmp; i2 < b_loop_ub; i2++) {
                r[i2 + r.size(0) * i1] = lambda_inv[i2] * lambda_inv[i1] / a;
              }
            }
            if ((b_Q.size(0) != r.size(0)) &&
                ((b_Q.size(0) != 1) && (r.size(0) != 1))) {
              emlrtDimSizeImpxCheckR2021b(b_Q.size(0), r.size(0), &kb_emlrtECI,
                                          &st);
            }
            if ((b_Q.size(1) != r.size(1)) &&
                ((b_Q.size(1) != 1) && (r.size(1) != 1))) {
              emlrtDimSizeImpxCheckR2021b(b_Q.size(1), r.size(1), &jb_emlrtECI,
                                          &st);
            }
            emlrtMEXProfilingStatement(8,
                                       static_cast<boolean_T>(isMexOutdated));
            // maybe we can accelerate this
            emlrtMEXProfilingStatement(9,
                                       static_cast<boolean_T>(isMexOutdated));
            if ((b_Q.size(0) == r.size(0)) && (b_Q.size(1) == r.size(1))) {
              d_Q.set_size(&je_emlrtRTEI, &st, b_Q.size(0), b_Q.size(1));
              b_loop_ub = b_Q.size(0) * b_Q.size(1);
              loop_ub_tmp = (b_loop_ub / 2) << 1;
              vectorUB = loop_ub_tmp - 2;
              for (i1 = 0; i1 <= vectorUB; i1 += 2) {
                __m128d r8;
                r4 = _mm_loadu_pd(&b_Q[i1]);
                r8 = _mm_loadu_pd(&r[i1]);
                _mm_storeu_pd(&d_Q[i1],
                              _mm_mul_pd(_mm_sub_pd(r4, r8),
                                         _mm_set1_pd(b_proj_coefficients)));
              }
              for (i1 = loop_ub_tmp; i1 < b_loop_ub; i1++) {
                d_Q[i1] = (b_Q[i1] - r[i1]) * b_proj_coefficients;
              }
              b_st.site = &me_emlrtRSI;
              coder::eig(b_st, d_Q, c_Q, lambda_m);
            } else {
              b_st.site = &me_emlrtRSI;
              binary_expand_op_22(b_st, me_emlrtRSI, b_Q, r, proj_coefficients,
                                  temp, c_Q, lambda_m);
            }
            // J = QlambdaQ'
            emlrtMEXProfilingStatement(10,
                                       static_cast<boolean_T>(isMexOutdated));
            b_st.site = &ne_emlrtRSI;
            coder::diag(b_st, lambda_m, b_lambda);
            emlrtMEXProfilingStatement(11,
                                       static_cast<boolean_T>(isMexOutdated));
            b_loop_ub = b_lambda.size(0);
            r7.set_size(&ke_emlrtRTEI, &st, b_lambda.size(0));
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              r7[i1].re = alpha * b_lambda[i1].re;
              r7[i1].im = alpha * b_lambda[i1].im;
            }
            if ((b_lambda.size(0) != temp_index.size(1)) &&
                ((b_lambda.size(0) != 1) && (temp_index.size(1) != 1))) {
              emlrtDimSizeImpxCheckR2021b(b_lambda.size(0), temp_index.size(1),
                                          &ib_emlrtECI, &st);
            }
            if (r7.size(0) == lambda_between.size(0)) {
              r9.set_size(&ke_emlrtRTEI, &st, b_lambda.size(0));
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                r9[i1].re = lambda_between[i1] * r7[i1].re;
                r9[i1].im = lambda_between[i1] * r7[i1].im;
              }
            } else {
              b_st.site = &oe_emlrtRSI;
              times(b_st, r9, r7, lambda_between);
            }
            if ((b_lambda.size(0) != r9.size(0)) &&
                ((b_lambda.size(0) != 1) && (r9.size(0) != 1))) {
              emlrtDimSizeImpxCheckR2021b(b_lambda.size(0), r9.size(0),
                                          &hb_emlrtECI, &st);
            }
            b_st.site = &oe_emlrtRSI;
            if (b_lambda.size(0) == r9.size(0)) {
              y.set_size(&le_emlrtRTEI, &b_st, b_lambda.size(0));
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                y[i1].re = (1.0 - b_lambda[i1].re) + r9[i1].re;
                y[i1].im = (0.0 - b_lambda[i1].im) + r9[i1].im;
              }
            } else {
              c_st.site = &oe_emlrtRSI;
              binary_expand_op_21(c_st, y, b_lambda, r9);
            }
            c_st.site = &de_emlrtRSI;
            d_st.site = &ee_emlrtRSI;
            if ((b_lambda.size(0) != 1) && (y.size(0) != 1) &&
                (b_lambda.size(0) != y.size(0))) {
              emlrtErrorWithMessageIdR2018a(
                  &d_st, &n_emlrtRTEI, "MATLAB:sizeDimensionsMustMatch",
                  "MATLAB:sizeDimensionsMustMatch", 0);
            }
            if (b_lambda.size(0) == y.size(0)) {
              b_loop_ub = b_lambda.size(0);
              d_lambda.set_size(&me_emlrtRTEI, &st, b_lambda.size(0));
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                real_T ai;
                temp = b_lambda[i1].re;
                ai = b_lambda[i1].im;
                b_a = y[i1].re;
                bi = y[i1].im;
                if (bi == 0.0) {
                  if (ai == 0.0) {
                    d_lambda[i1].re = temp / b_a;
                    d_lambda[i1].im = 0.0;
                  } else if (temp == 0.0) {
                    d_lambda[i1].re = 0.0;
                    d_lambda[i1].im = ai / b_a;
                  } else {
                    d_lambda[i1].re = temp / b_a;
                    d_lambda[i1].im = ai / b_a;
                  }
                } else if (b_a == 0.0) {
                  if (temp == 0.0) {
                    d_lambda[i1].re = ai / bi;
                    d_lambda[i1].im = 0.0;
                  } else if (ai == 0.0) {
                    d_lambda[i1].re = 0.0;
                    d_lambda[i1].im = -(temp / bi);
                  } else {
                    d_lambda[i1].re = ai / bi;
                    d_lambda[i1].im = -(temp / bi);
                  }
                } else {
                  b_proj_coefficients = muDoubleScalarAbs(b_a);
                  a = muDoubleScalarAbs(bi);
                  if (b_proj_coefficients > a) {
                    b_proj_coefficients = bi / b_a;
                    a = b_a + b_proj_coefficients * bi;
                    d_lambda[i1].re = (temp + b_proj_coefficients * ai) / a;
                    d_lambda[i1].im = (ai - b_proj_coefficients * temp) / a;
                  } else if (a == b_proj_coefficients) {
                    if (b_a > 0.0) {
                      b_a = 0.5;
                    } else {
                      b_a = -0.5;
                    }
                    if (bi > 0.0) {
                      a = 0.5;
                    } else {
                      a = -0.5;
                    }
                    d_lambda[i1].re =
                        (temp * b_a + ai * a) / b_proj_coefficients;
                    d_lambda[i1].im =
                        (ai * b_a - temp * a) / b_proj_coefficients;
                  } else {
                    b_proj_coefficients = b_a / bi;
                    a = bi + b_proj_coefficients * b_a;
                    d_lambda[i1].re = (b_proj_coefficients * temp + ai) / a;
                    d_lambda[i1].im = (b_proj_coefficients * ai - temp) / a;
                  }
                }
              }
              b_st.site = &oe_emlrtRSI;
              coder::b_abs(b_st, d_lambda, lambda_between);
            } else {
              b_st.site = &oe_emlrtRSI;
              binary_expand_op_20(b_st, lambda_between, oe_emlrtRSI, b_lambda,
                                  y);
            }
            b_st.site = &oe_emlrtRSI;
            coder::b_sqrt(b_st, lambda_between);
            emlrtMEXProfilingStatement(12,
                                       static_cast<boolean_T>(isMexOutdated));
            if ((r7.size(0) != temp_index.size(1)) &&
                ((r7.size(0) != 1) && (temp_index.size(1) != 1))) {
              emlrtDimSizeImpxCheckR2021b(r7.size(0), temp_index.size(1),
                                          &gb_emlrtECI, &st);
            }
            b_loop_ub = b_lambda.size(0);
            if ((b_lambda.size(0) != r9.size(0)) &&
                ((b_lambda.size(0) != 1) && (r9.size(0) != 1))) {
              emlrtDimSizeImpxCheckR2021b(b_lambda.size(0), r9.size(0),
                                          &fb_emlrtECI, &st);
            }
            if (b_lambda.size(0) == r9.size(0)) {
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                b_a = (1.0 - b_lambda[i1].re) + r9[i1].re;
                bi = (0.0 - b_lambda[i1].im) + r9[i1].im;
                if (bi == 0.0) {
                  temp = 1.0 / b_a;
                  a = 0.0;
                } else if (b_a == 0.0) {
                  temp = 0.0;
                  a = -(1.0 / bi);
                } else {
                  b_proj_coefficients = muDoubleScalarAbs(b_a);
                  a = muDoubleScalarAbs(bi);
                  if (b_proj_coefficients > a) {
                    b_proj_coefficients = bi / b_a;
                    a = b_a + b_proj_coefficients * bi;
                    temp = (b_proj_coefficients * 0.0 + 1.0) / a;
                    a = (0.0 - b_proj_coefficients) / a;
                  } else if (a == b_proj_coefficients) {
                    if (b_a > 0.0) {
                      b_a = 0.5;
                    } else {
                      b_a = -0.5;
                    }
                    if (bi > 0.0) {
                      a = 0.5;
                    } else {
                      a = -0.5;
                    }
                    temp = (b_a + 0.0 * a) / b_proj_coefficients;
                    a = (0.0 * b_a - a) / b_proj_coefficients;
                  } else {
                    b_proj_coefficients = b_a / bi;
                    a = bi + b_proj_coefficients * b_a;
                    temp = b_proj_coefficients / a;
                    a = (b_proj_coefficients * 0.0 - 1.0) / a;
                  }
                }
                b_lambda[i1].re = temp;
                b_lambda[i1].im = a;
              }
              b_st.site = &pe_emlrtRSI;
              coder::b_abs(b_st, b_lambda, lambda_inv);
            } else {
              b_st.site = &pe_emlrtRSI;
              binary_expand_op_19(b_st, lambda_inv, pe_emlrtRSI, b_lambda, r9);
            }
            b_st.site = &pe_emlrtRSI;
            coder::b_sqrt(b_st, lambda_inv);
            emlrtMEXProfilingStatement(13,
                                       static_cast<boolean_T>(isMexOutdated));
            b_loop_ub = c_Q.size(1);
            if ((lambda_between.size(0) != c_Q.size(1)) &&
                ((c_Q.size(1) != 1) && (lambda_between.size(0) != 1))) {
              emlrtDimSizeImpxCheckR2021b(c_Q.size(1), lambda_between.size(0),
                                          &eb_emlrtECI, &st);
            }
            if (lambda_between.size(0) == c_Q.size(1)) {
              c_loop_ub = c_Q.size(0);
              b_Q.set_size(&ne_emlrtRTEI, &st, c_Q.size(0), c_Q.size(1));
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                for (i2 = 0; i2 < c_loop_ub; i2++) {
                  b_Q[i2 + b_Q.size(0) * i1] =
                      c_Q[i2 + c_Q.size(0) * i1].re * lambda_between[i1];
                }
              }
            } else {
              b_st.site = &yi_emlrtRSI;
              binary_expand_op_17(b_st, b_Q, c_Q, lambda_between);
            }
            // Q.* v'
            emlrtMEXProfilingStatement(14,
                                       static_cast<boolean_T>(isMexOutdated));
            b_loop_ub = c_Q.size(1);
            if ((lambda_inv.size(0) != c_Q.size(1)) &&
                ((c_Q.size(1) != 1) && (lambda_inv.size(0) != 1))) {
              emlrtDimSizeImpxCheckR2021b(c_Q.size(1), lambda_inv.size(0),
                                          &db_emlrtECI, &st);
            }
            if (lambda_inv.size(0) == c_Q.size(1)) {
              c_loop_ub = c_Q.size(0);
              r.set_size(&oe_emlrtRTEI, &st, c_Q.size(0), c_Q.size(1));
              for (i1 = 0; i1 < b_loop_ub; i1++) {
                for (i2 = 0; i2 < c_loop_ub; i2++) {
                  r[i2 + r.size(0) * i1] =
                      c_Q[i2 + c_Q.size(0) * i1].re * lambda_inv[i1];
                }
              }
            } else {
              b_st.site = &xi_emlrtRSI;
              binary_expand_op_17(b_st, r, c_Q, lambda_inv);
            }
            // check the shape of lmbda_inv
            emlrtMEXProfilingStatement(15,
                                       static_cast<boolean_T>(isMexOutdated));
          }
          emlrtMEXProfilingFunctionExitCPP(&b_profilerSentinel);
          lambda_inv.set_size(&qe_emlrtRTEI, &sp, temp_index.size(1));
          for (i1 = 0; i1 < loop_ub; i1++) {
            lambda_inv[i1] = temp_index[i1];
          }
          r1.set_size(&qe_emlrtRTEI, &sp, temp_index.size(1));
          for (i1 = 0; i1 < loop_ub; i1++) {
            i2 = static_cast<int32_T>(lambda_inv[i1]);
            if ((i2 < 1) || (i2 > i)) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i, &dc_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            r1[i1] = i2 - 1;
          }
          r2.set_size(&re_emlrtRTEI, &sp, temp_index.size(1));
          for (i1 = 0; i1 < loop_ub; i1++) {
            i2 = static_cast<int32_T>(lambda_inv[i1]);
            if ((i2 < 1) || (i2 > i)) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i, &ec_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            r2[i1] = i2 - 1;
          }
          b_loop_ub = r1.size(0);
          iv[0] = r1.size(0);
          c_loop_ub = r2.size(0);
          iv[1] = r2.size(0);
          emlrtSubAssignSizeCheckR2012b(&iv[0], 2, b_Q.size(), 2, &vb_emlrtECI,
                                        (emlrtCTX)&sp);
          iv[0] = r1.size(0);
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            for (i2 = 0; i2 < b_loop_ub; i2++) {
              Q[r1[i2] + Q.size(0) * r2[i1]] = b_Q[i2 + iv[0] * i1];
            }
          }
          r1.set_size(&se_emlrtRTEI, &sp, temp_index.size(1));
          for (i1 = 0; i1 < loop_ub; i1++) {
            i2 = static_cast<int32_T>(lambda_inv[i1]);
            if ((i2 < 1) || (i2 > i)) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i, &fc_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            r1[i1] = i2 - 1;
          }
          r2.set_size(&te_emlrtRTEI, &sp, temp_index.size(1));
          for (i1 = 0; i1 < loop_ub; i1++) {
            i2 = static_cast<int32_T>(lambda_inv[i1]);
            if ((i2 < 1) || (i2 > i)) {
              emlrtDynamicBoundsCheckR2012b(i2, 1, i, &gc_emlrtBCI,
                                            (emlrtConstCTX)&sp);
            }
            r2[i1] = i2 - 1;
          }
          loop_ub = r1.size(0);
          iv[0] = r1.size(0);
          b_loop_ub = r2.size(0);
          iv[1] = r2.size(0);
          emlrtSubAssignSizeCheckR2012b(&iv[0], 2, r.size(), 2, &sb_emlrtECI,
                                        (emlrtCTX)&sp);
          iv[0] = r1.size(0);
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            for (i2 = 0; i2 < loop_ub; i2++) {
              Q_inv[r1[i2] + Q_inv.size(0) * r2[i1]] = r[i2 + iv[0] * i1];
            }
          }
          emlrtMEXProfilingStatement(17, static_cast<boolean_T>(isMexOutdated));
        } else {
          emlrtMEXProfilingStatement(15, static_cast<boolean_T>(isMexOutdated));
          if (a == 3.0) {
            int32_T b_loop_ub;
            int32_T c_loop_ub;
            emlrtMEXProfilingStatement(16,
                                       static_cast<boolean_T>(isMexOutdated));
            iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
            iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
            st.site = &xd_emlrtRSI;
            coder::internal::indexShapeCheck(st, z0.size(0), iv);
            iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
            iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
            st.site = &xd_emlrtRSI;
            coder::internal::indexShapeCheck(st, P.size(0), iv);
            loop_ub = temp_index.size(1);
            lambda_inv.set_size(&ae_emlrtRTEI, &sp, temp_index.size(1));
            for (i2 = 0; i2 < loop_ub; i2++) {
              if (temp_index[i2] !=
                  static_cast<int32_T>(muDoubleScalarFloor(temp_index[i2]))) {
                emlrtIntegerCheckR2012b(temp_index[i2], &jb_emlrtDCI,
                                        (emlrtConstCTX)&sp);
              }
              loop_ub_tmp = static_cast<int32_T>(temp_index[i2]);
              if ((loop_ub_tmp < 1) || (loop_ub_tmp > i)) {
                emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, i, &ub_emlrtBCI,
                                              (emlrtConstCTX)&sp);
              }
              lambda_inv[i2] = z0[loop_ub_tmp - 1];
            }
            lambda_between.set_size(&be_emlrtRTEI, &sp, temp_index.size(1));
            for (i2 = 0; i2 < loop_ub; i2++) {
              loop_ub_tmp = static_cast<int32_T>(temp_index[i2]);
              if ((loop_ub_tmp < 1) || (loop_ub_tmp > P.size(0))) {
                emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, P.size(0),
                                              &wb_emlrtBCI, (emlrtConstCTX)&sp);
              }
              lambda_between[i2] = P[loop_ub_tmp - 1];
            }
            st.site = &xd_emlrtRSI;
            dev_jacob_soc(st, lambda_inv, proj_coefficients[i1], lambda_between,
                          alpha, r, b_Q);
            lambda_inv.set_size(&ce_emlrtRTEI, &sp, temp_index.size(1));
            for (i1 = 0; i1 < loop_ub; i1++) {
              lambda_inv[i1] = temp_index[i1];
            }
            r1.set_size(&ce_emlrtRTEI, &sp, temp_index.size(1));
            for (i1 = 0; i1 < loop_ub; i1++) {
              i2 = static_cast<int32_T>(lambda_inv[i1]);
              if ((i2 < 1) || (i2 > i)) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, i, &yb_emlrtBCI,
                                              (emlrtConstCTX)&sp);
              }
              r1[i1] = i2 - 1;
            }
            r2.set_size(&de_emlrtRTEI, &sp, temp_index.size(1));
            for (i1 = 0; i1 < loop_ub; i1++) {
              i2 = static_cast<int32_T>(lambda_inv[i1]);
              if ((i2 < 1) || (i2 > i)) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, i, &ac_emlrtBCI,
                                              (emlrtConstCTX)&sp);
              }
              r2[i1] = i2 - 1;
            }
            b_loop_ub = r1.size(0);
            iv[0] = r1.size(0);
            c_loop_ub = r2.size(0);
            iv[1] = r2.size(0);
            emlrtSubAssignSizeCheckR2012b(&iv[0], 2, r.size(), 2, &ub_emlrtECI,
                                          (emlrtCTX)&sp);
            iv[0] = r1.size(0);
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              for (i2 = 0; i2 < b_loop_ub; i2++) {
                Q[r1[i2] + Q.size(0) * r2[i1]] = r[i2 + iv[0] * i1];
              }
            }
            r1.set_size(&ee_emlrtRTEI, &sp, temp_index.size(1));
            for (i1 = 0; i1 < loop_ub; i1++) {
              i2 = static_cast<int32_T>(lambda_inv[i1]);
              if ((i2 < 1) || (i2 > i)) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, i, &bc_emlrtBCI,
                                              (emlrtConstCTX)&sp);
              }
              r1[i1] = i2 - 1;
            }
            r2.set_size(&fe_emlrtRTEI, &sp, temp_index.size(1));
            for (i1 = 0; i1 < loop_ub; i1++) {
              i2 = static_cast<int32_T>(lambda_inv[i1]);
              if ((i2 < 1) || (i2 > i)) {
                emlrtDynamicBoundsCheckR2012b(i2, 1, i, &cc_emlrtBCI,
                                              (emlrtConstCTX)&sp);
              }
              r2[i1] = i2 - 1;
            }
            loop_ub = r1.size(0);
            iv[0] = r1.size(0);
            b_loop_ub = r2.size(0);
            iv[1] = r2.size(0);
            emlrtSubAssignSizeCheckR2012b(&iv[0], 2, b_Q.size(), 2,
                                          &rb_emlrtECI, (emlrtCTX)&sp);
            iv[0] = r1.size(0);
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              for (i2 = 0; i2 < loop_ub; i2++) {
                Q_inv[r1[i2] + Q_inv.size(0) * r2[i1]] = b_Q[i2 + iv[0] * i1];
              }
            }
            emlrtMEXProfilingStatement(17,
                                       static_cast<boolean_T>(isMexOutdated));
          }
        }
      }
      // update
      emlrtMEXProfilingStatement(18, static_cast<boolean_T>(isMexOutdated));
      temp = d + 1.0;
      emlrtMEXProfilingStatement(19, static_cast<boolean_T>(isMexOutdated));
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
  }
  emlrtMEXProfilingStatement(20, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingFunctionExitCPP(&profilerSentinel);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

void dev_S_inv_g(const emlrtStack &sp, const real_T z0[326], real_T nx,
                 real_T nu, const real_T proj_index_all[660],
                 const real_T proj_coefficients_all[660], const real_T P[326],
                 real_T alpha, coder::array<real_T, 3U> &Q,
                 coder::array<real_T, 3U> &Q_inv)
{
  emlrtProfilerSentinel profilerSentinel;
  coder::array<real_T, 2U> r1;
  coder::array<real_T, 2U> r2;
  coder::array<real_T, 2U> z_temp_index;
  coder::array<real_T, 1U> P_temp;
  coder::array<real_T, 1U> z0_temp;
  emlrtStack st;
  real_T b;
  real_T i;
  int32_T b_Q[2];
  int32_T b_i;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)&sp);
  emlrtMEXProfilingFunctionEntryCPP((char_T *)dev_S_inv_g_complete_name,
                                    static_cast<boolean_T>(isMexOutdated),
                                    &profilerSentinel);
  //  the output is the eigenvalue decomposition of S_inv. P is the diagonal
  //  matrix in the objectfunciton
  emlrtMEXProfilingStatement(1, static_cast<boolean_T>(isMexOutdated));
  b = nx + nu;
  if (!(b >= 0.0)) {
    emlrtNonNegativeCheckR2012b(b, &cb_emlrtDCI, (emlrtConstCTX)&sp);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(b));
  if (b != i) {
    emlrtIntegerCheckR2012b(b, &bb_emlrtDCI, (emlrtConstCTX)&sp);
  }
  Q.set_size(&qd_emlrtRTEI, &sp, static_cast<int32_T>(b),
             static_cast<int32_T>(b), 30);
  if (b != i) {
    emlrtIntegerCheckR2012b(b, &db_emlrtDCI, (emlrtConstCTX)&sp);
  }
  if (!(b >= 0.0)) {
    emlrtNonNegativeCheckR2012b(b, &eb_emlrtDCI, (emlrtConstCTX)&sp);
  }
  if (b != i) {
    emlrtIntegerCheckR2012b(b, &db_emlrtDCI, (emlrtConstCTX)&sp);
  }
  loop_ub_tmp = static_cast<int32_T>(b) * static_cast<int32_T>(b) * 30;
  for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
    Q[b_i] = 0.0;
  }
  //  1:n-1 are nx+nu**2 but the Nth is nx**2.
  emlrtMEXProfilingStatement(2, static_cast<boolean_T>(isMexOutdated));
  loop_ub = static_cast<int32_T>(b);
  Q_inv.set_size(&rd_emlrtRTEI, &sp, static_cast<int32_T>(b),
                 static_cast<int32_T>(b), 30);
  for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
    Q_inv[b_i] = 0.0;
  }
  emlrtMEXProfilingStatement(3, static_cast<boolean_T>(isMexOutdated));
  for (int32_T c_i{0}; c_i < 30; c_i++) {
    int32_T b_loop_ub;
    int32_T i1;
    int32_T vectorUB;
    emlrtMEXProfilingStatement(4, static_cast<boolean_T>(isMexOutdated));
    emlrtMEXProfilingStatement(5, static_cast<boolean_T>(isMexOutdated));
    emlrtMEXProfilingStatement(6, static_cast<boolean_T>(isMexOutdated));
    if (c_i + 1 < 30) {
      emlrtMEXProfilingStatement(7, static_cast<boolean_T>(isMexOutdated));
      if (b < 1.0) {
        z_temp_index.set_size(&ec_emlrtRTEI, &sp, z_temp_index.size(0), 0);
      } else {
        z_temp_index.set_size(&ec_emlrtRTEI, &sp, 1,
                              static_cast<int32_T>(b - 1.0) + 1);
        b_loop_ub = static_cast<int32_T>(b - 1.0);
        for (b_i = 0; b_i <= b_loop_ub; b_i++) {
          z_temp_index[b_i] = static_cast<real_T>(b_i) + 1.0;
        }
      }
      z_temp_index.set_size(&td_emlrtRTEI, &sp, 1, z_temp_index.size(1));
      i = ((static_cast<real_T>(c_i) + 1.0) - 1.0) * b;
      b_loop_ub = z_temp_index.size(1) - 1;
      loop_ub_tmp = (z_temp_index.size(1) / 2) << 1;
      vectorUB = loop_ub_tmp - 2;
      for (b_i = 0; b_i <= vectorUB; b_i += 2) {
        __m128d r;
        r = _mm_loadu_pd(&z_temp_index[b_i]);
        _mm_storeu_pd(&z_temp_index[b_i], _mm_add_pd(_mm_set1_pd(i), r));
      }
      for (b_i = loop_ub_tmp; b_i <= b_loop_ub; b_i++) {
        z_temp_index[b_i] = i + z_temp_index[b_i];
      }
      emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
    } else {
      emlrtMEXProfilingStatement(8, static_cast<boolean_T>(isMexOutdated));
      emlrtMEXProfilingStatement(9, static_cast<boolean_T>(isMexOutdated));
      if (muDoubleScalarIsNaN(nx)) {
        z_temp_index.set_size(&ec_emlrtRTEI, &sp, 1, 1);
        z_temp_index[0] = rtNaN;
      } else if (nx < 1.0) {
        z_temp_index.set_size(&ec_emlrtRTEI, &sp, z_temp_index.size(0), 0);
      } else {
        z_temp_index.set_size(&ec_emlrtRTEI, &sp, 1,
                              static_cast<int32_T>(nx - 1.0) + 1);
        b_loop_ub = static_cast<int32_T>(nx - 1.0);
        for (b_i = 0; b_i <= b_loop_ub; b_i++) {
          z_temp_index[b_i] = static_cast<real_T>(b_i) + 1.0;
        }
      }
      z_temp_index.set_size(&sd_emlrtRTEI, &sp, 1, z_temp_index.size(1));
      i = 29.0 * b;
      b_loop_ub = z_temp_index.size(1) - 1;
      loop_ub_tmp = (z_temp_index.size(1) / 2) << 1;
      vectorUB = loop_ub_tmp - 2;
      for (b_i = 0; b_i <= vectorUB; b_i += 2) {
        __m128d r;
        r = _mm_loadu_pd(&z_temp_index[b_i]);
        _mm_storeu_pd(&z_temp_index[b_i], _mm_add_pd(_mm_set1_pd(i), r));
      }
      for (b_i = loop_ub_tmp; b_i <= b_loop_ub; b_i++) {
        z_temp_index[b_i] = i + z_temp_index[b_i];
      }
      emlrtMEXProfilingStatement(10, static_cast<boolean_T>(isMexOutdated));
    }
    emlrtMEXProfilingStatement(11, static_cast<boolean_T>(isMexOutdated));
    b_loop_ub = z_temp_index.size(1);
    z0_temp.set_size(&ud_emlrtRTEI, &sp, z_temp_index.size(1));
    for (b_i = 0; b_i < b_loop_ub; b_i++) {
      if (z_temp_index[b_i] !=
          static_cast<int32_T>(muDoubleScalarFloor(z_temp_index[b_i]))) {
        emlrtIntegerCheckR2012b(z_temp_index[b_i], &fb_emlrtDCI,
                                (emlrtConstCTX)&sp);
      }
      i1 = static_cast<int32_T>(z_temp_index[b_i]);
      if ((i1 < 1) || (i1 > 326)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, 326, &pb_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      z0_temp[b_i] = z0[i1 - 1];
    }
    emlrtMEXProfilingStatement(12, static_cast<boolean_T>(isMexOutdated));
    P_temp.set_size(&vd_emlrtRTEI, &sp, z_temp_index.size(1));
    for (b_i = 0; b_i < b_loop_ub; b_i++) {
      P_temp[b_i] = P[static_cast<int32_T>(z_temp_index[b_i]) - 1];
    }
    emlrtMEXProfilingStatement(13, static_cast<boolean_T>(isMexOutdated));
    if (c_i + 1 < 30) {
      emlrtMEXProfilingStatement(14, static_cast<boolean_T>(isMexOutdated));
      st.site = &rd_emlrtRSI;
      jacob_D_unit(st, z0_temp, &proj_index_all[22 * c_i],
                   &proj_coefficients_all[22 * c_i], P_temp, alpha, r1, r2);
      loop_ub_tmp = Q.size(0);
      b_Q[0] = Q.size(0);
      vectorUB = Q.size(1);
      b_Q[1] = Q.size(1);
      emlrtSubAssignSizeCheckR2012b(&b_Q[0], 2, r1.size(), 2, &y_emlrtECI,
                                    (emlrtCTX)&sp);
      b_Q[0] = Q.size(0);
      for (b_i = 0; b_i < vectorUB; b_i++) {
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          Q[(i1 + Q.size(0) * b_i) + Q.size(0) * Q.size(1) * c_i] =
              r1[i1 + b_Q[0] * b_i];
        }
      }
      b_Q[0] = static_cast<int32_T>(b);
      b_Q[1] = static_cast<int32_T>(b);
      emlrtSubAssignSizeCheckR2012b(&b_Q[0], 2, r2.size(), 2, &bb_emlrtECI,
                                    (emlrtCTX)&sp);
      for (b_i = 0; b_i < loop_ub; b_i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Q_inv[(i1 + Q_inv.size(0) * b_i) +
                Q_inv.size(0) * Q_inv.size(1) * c_i] =
              r2[i1 + static_cast<int32_T>(b) * b_i];
        }
      }
      emlrtMEXProfilingStatement(17, static_cast<boolean_T>(isMexOutdated));
    } else {
      emlrtMEXProfilingStatement(15, static_cast<boolean_T>(isMexOutdated));
      emlrtMEXProfilingStatement(16, static_cast<boolean_T>(isMexOutdated));
      st.site = &sd_emlrtRSI;
      jacob_D_unit(st, z0_temp, &proj_index_all[22 * c_i],
                   &proj_coefficients_all[22 * c_i], P_temp, alpha, r1, r2);
      if (nx < 1.0) {
        b_loop_ub = 0;
        loop_ub_tmp = 0;
      } else {
        if (Q.size(0) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, Q.size(0), &hb_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        b_i = static_cast<int32_T>(muDoubleScalarFloor(nx));
        if (nx != b_i) {
          emlrtIntegerCheckR2012b(nx, &w_emlrtDCI, (emlrtConstCTX)&sp);
        }
        b_loop_ub = static_cast<int32_T>(nx);
        if (b_loop_ub > Q.size(0)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1, Q.size(0),
                                        &ib_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if (Q.size(1) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, Q.size(1), &jb_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (b_loop_ub != b_i) {
          emlrtIntegerCheckR2012b(nx, &x_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if (b_loop_ub > Q.size(1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1, Q.size(1),
                                        &kb_emlrtBCI, (emlrtConstCTX)&sp);
        }
        loop_ub_tmp = b_loop_ub;
      }
      b_Q[0] = b_loop_ub;
      b_Q[1] = loop_ub_tmp;
      emlrtSubAssignSizeCheckR2012b(&b_Q[0], 2, r1.size(), 2, &ab_emlrtECI,
                                    (emlrtCTX)&sp);
      for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          Q[(i1 + Q.size(0) * b_i) + Q.size(0) * Q.size(1) * 29] =
              r1[i1 + b_loop_ub * b_i];
        }
      }
      if (nx < 1.0) {
        b_loop_ub = 0;
        loop_ub_tmp = 0;
      } else {
        if (static_cast<int32_T>(b) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, static_cast<int32_T>(b),
                                        &lb_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_i = static_cast<int32_T>(muDoubleScalarFloor(nx));
        if (nx != b_i) {
          emlrtIntegerCheckR2012b(nx, &y_emlrtDCI, (emlrtConstCTX)&sp);
        }
        b_loop_ub = static_cast<int32_T>(nx);
        if (b_loop_ub > static_cast<int32_T>(b)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1,
                                        static_cast<int32_T>(b), &mb_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (static_cast<int32_T>(b) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, static_cast<int32_T>(b),
                                        &nb_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if (b_loop_ub != b_i) {
          emlrtIntegerCheckR2012b(nx, &ab_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if (b_loop_ub > static_cast<int32_T>(b)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1,
                                        static_cast<int32_T>(b), &ob_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        loop_ub_tmp = b_loop_ub;
      }
      b_Q[0] = b_loop_ub;
      b_Q[1] = loop_ub_tmp;
      emlrtSubAssignSizeCheckR2012b(&b_Q[0], 2, r2.size(), 2, &cb_emlrtECI,
                                    (emlrtCTX)&sp);
      for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          Q_inv[(i1 + Q_inv.size(0) * b_i) +
                Q_inv.size(0) * Q_inv.size(1) * 29] = r2[i1 + b_loop_ub * b_i];
        }
      }
      // Specified! only for the LCvx case
      emlrtMEXProfilingStatement(17, static_cast<boolean_T>(isMexOutdated));
    }
    emlrtMEXProfilingStatement(18, static_cast<boolean_T>(isMexOutdated));
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  emlrtMEXProfilingStatement(19, static_cast<boolean_T>(isMexOutdated));
  emlrtMEXProfilingFunctionExitCPP(&profilerSentinel);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (dev_S_inv_g.cpp)
