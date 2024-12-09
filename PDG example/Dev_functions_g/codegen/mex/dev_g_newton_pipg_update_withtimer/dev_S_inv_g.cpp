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
#include "dev_g_newton_pipg_update_withtimer_data.h"
#include "dev_jacob_ball.h"
#include "dev_jacob_soc.h"
#include "diag.h"
#include "eig.h"
#include "eml_mtimes_helper.h"
#include "eye.h"
#include "indexShapeCheck.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "blas.h"
#include "coder_array.h"
#include "mwmathutil.h"
#include <cstddef>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo tb_emlrtRSI{
    17,            // lineNo
    "dev_S_inv_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo ub_emlrtRSI{
    19,            // lineNo
    "dev_S_inv_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo vb_emlrtRSI{
    38,             // lineNo
    "jacob_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo wb_emlrtRSI{
    41,             // lineNo
    "jacob_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo xb_emlrtRSI{
    42,             // lineNo
    "jacob_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo yb_emlrtRSI{
    44,             // lineNo
    "jacob_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo ac_emlrtRSI{
    46,             // lineNo
    "jacob_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo ec_emlrtRSI{
    56,              // lineNo
    "dev_jacob_box", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo fc_emlrtRSI{
    57,              // lineNo
    "dev_jacob_box", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo gc_emlrtRSI{
    58,              // lineNo
    "dev_jacob_box", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo hc_emlrtRSI{
    59,              // lineNo
    "dev_jacob_box", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo pc_emlrtRSI{
    3,                // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

static emlrtRSInfo qc_emlrtRSI{
    8,                // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

static emlrtRSInfo rc_emlrtRSI{
    10,               // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

static emlrtRSInfo sc_emlrtRSI{
    11,               // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

static emlrtRSInfo tc_emlrtRSI{
    12,               // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

static emlrtRSInfo uc_emlrtRSI{
    13,               // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

static emlrtECInfo f_emlrtECI{
    -1,            // nDims
    17,            // lineNo
    10,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtBCInfo g_emlrtBCI{
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

static emlrtDCInfo e_emlrtDCI{
    19,            // lineNo
    14,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo h_emlrtBCI{
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

static emlrtBCInfo i_emlrtBCI{
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

static emlrtDCInfo f_emlrtDCI{
    19,            // lineNo
    19,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo j_emlrtBCI{
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

static emlrtECInfo g_emlrtECI{
    -1,            // nDims
    19,            // lineNo
    10,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo h_emlrtECI{
    -1,            // nDims
    17,            // lineNo
    20,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtBCInfo k_emlrtBCI{
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

static emlrtDCInfo g_emlrtDCI{
    19,            // lineNo
    34,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo l_emlrtBCI{
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

static emlrtBCInfo m_emlrtBCI{
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

static emlrtDCInfo h_emlrtDCI{
    19,            // lineNo
    39,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo n_emlrtBCI{
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

static emlrtECInfo i_emlrtECI{
    -1,            // nDims
    19,            // lineNo
    26,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtDCInfo i_emlrtDCI{
    4,             // lineNo
    11,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtDCInfo j_emlrtDCI{
    4,             // lineNo
    11,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    4                                             // checkKind
};

static emlrtDCInfo k_emlrtDCI{
    4,             // lineNo
    1,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtDCInfo l_emlrtDCI{
    4,             // lineNo
    1,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    4                                             // checkKind
};

static emlrtBCInfo o_emlrtBCI{
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

static emlrtDCInfo m_emlrtDCI{
    14,            // lineNo
    18,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtECInfo j_emlrtECI{
    2,                // nDims
    15,               // lineNo
    18,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo k_emlrtECI{
    2,                // nDims
    14,               // lineNo
    18,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo l_emlrtECI{
    1,                // nDims
    13,               // lineNo
    31,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo m_emlrtECI{
    1,                // nDims
    13,               // lineNo
    42,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo n_emlrtECI{
    1,                // nDims
    12,               // lineNo
    40,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo o_emlrtECI{
    1,                // nDims
    12,               // lineNo
    51,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo p_emlrtECI{
    2,                // nDims
    8,                // lineNo
    9,                // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo q_emlrtECI{
    1,                // nDims
    8,                // lineNo
    9,                // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtECInfo r_emlrtECI{
    1,               // nDims
    57,              // lineNo
    27,              // colNo
    "dev_jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo s_emlrtECI{
    1,               // nDims
    57,              // lineNo
    38,              // colNo
    "dev_jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo t_emlrtECI{
    1,               // nDims
    56,              // lineNo
    36,              // colNo
    "dev_jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo u_emlrtECI{
    1,               // nDims
    56,              // lineNo
    47,              // colNo
    "dev_jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo v_emlrtECI{
    1,               // nDims
    54,              // lineNo
    28,              // colNo
    "dev_jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo w_emlrtECI{
    1,               // nDims
    54,              // lineNo
    29,              // colNo
    "dev_jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo x_emlrtECI{
    -1,             // nDims
    46,             // lineNo
    36,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo y_emlrtECI{
    -1,             // nDims
    44,             // lineNo
    36,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo ab_emlrtECI{
    -1,             // nDims
    41,             // lineNo
    35,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo bb_emlrtECI{
    -1,             // nDims
    46,             // lineNo
    10,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo cb_emlrtECI{
    -1,             // nDims
    44,             // lineNo
    10,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo db_emlrtECI{
    -1,             // nDims
    41,             // lineNo
    9,              // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtBCInfo p_emlrtBCI{
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

static emlrtDCInfo n_emlrtDCI{
    35,             // lineNo
    22,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo q_emlrtBCI{
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

static emlrtDCInfo o_emlrtDCI{
    41,             // lineNo
    86,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo r_emlrtBCI{
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

static emlrtDCInfo p_emlrtDCI{
    44,             // lineNo
    87,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo s_emlrtBCI{
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

static emlrtDCInfo q_emlrtDCI{
    46,             // lineNo
    86,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo t_emlrtBCI{
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

static emlrtBCInfo u_emlrtBCI{
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

static emlrtBCInfo v_emlrtBCI{
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

static emlrtBCInfo w_emlrtBCI{
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

static emlrtBCInfo x_emlrtBCI{
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

static emlrtBCInfo y_emlrtBCI{
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

static emlrtBCInfo ab_emlrtBCI{
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

static emlrtBCInfo bb_emlrtBCI{
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

static emlrtBCInfo cb_emlrtBCI{
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

static emlrtBCInfo db_emlrtBCI{
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

static emlrtBCInfo eb_emlrtBCI{
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

static emlrtBCInfo fb_emlrtBCI{
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

static emlrtBCInfo gb_emlrtBCI{
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

static emlrtBCInfo hb_emlrtBCI{
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

static emlrtBCInfo ib_emlrtBCI{
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

static emlrtBCInfo jb_emlrtBCI{
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

static emlrtRTEInfo ab_emlrtRTEI{
    4,             // lineNo
    1,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo bb_emlrtRTEI{
    5,             // lineNo
    1,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo cb_emlrtRTEI{
    12,            // lineNo
    9,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo db_emlrtRTEI{
    10,            // lineNo
    9,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo eb_emlrtRTEI{
    14,            // lineNo
    5,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo fb_emlrtRTEI{
    15,            // lineNo
    5,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo gb_emlrtRTEI{
    31,            // lineNo
    1,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo hb_emlrtRTEI{
    32,            // lineNo
    1,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo ib_emlrtRTEI{
    38,            // lineNo
    5,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo jb_emlrtRTEI{
    46,            // lineNo
    83,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo kb_emlrtRTEI{
    46,            // lineNo
    126,           // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo lb_emlrtRTEI{
    46,            // lineNo
    12,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo mb_emlrtRTEI{
    46,            // lineNo
    24,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo nb_emlrtRTEI{
    46,            // lineNo
    42,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo ob_emlrtRTEI{
    46,            // lineNo
    54,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo pb_emlrtRTEI{
    44,            // lineNo
    84,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo qb_emlrtRTEI{
    44,            // lineNo
    127,           // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo rb_emlrtRTEI{
    8,                // lineNo
    35,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtRTEInfo wb_emlrtRTEI{
    14,               // lineNo
    5,                // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtRTEInfo yb_emlrtRTEI{
    5,                // lineNo
    5,                // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

static emlrtRTEInfo ac_emlrtRTEI{
    44,            // lineNo
    12,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo bc_emlrtRTEI{
    44,            // lineNo
    24,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo cc_emlrtRTEI{
    44,            // lineNo
    42,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo dc_emlrtRTEI{
    44,            // lineNo
    54,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo ec_emlrtRTEI{
    41,            // lineNo
    83,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo fc_emlrtRTEI{
    41,            // lineNo
    118,           // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo gc_emlrtRTEI{
    41,            // lineNo
    98,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo hc_emlrtRTEI{
    42,            // lineNo
    15,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo ic_emlrtRTEI{
    54,            // lineNo
    29,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo jc_emlrtRTEI{
    54,            // lineNo
    36,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo lc_emlrtRTEI{
    56,            // lineNo
    47,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo mc_emlrtRTEI{
    56,            // lineNo
    36,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo nc_emlrtRTEI{
    41,            // lineNo
    11,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo oc_emlrtRTEI{
    41,            // lineNo
    23,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo pc_emlrtRTEI{
    41,            // lineNo
    41,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRTEInfo qc_emlrtRTEI{
    41,            // lineNo
    53,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtRSInfo ch_emlrtRSI{
    54,              // lineNo
    "dev_jacob_box", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo fh_emlrtRSI{
    15,               // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

static emlrtRSInfo gh_emlrtRSI{
    14,               // lineNo
    "dev_jacob_ball", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pathName
};

// Function Declarations
static void binary_expand_op_2(const emlrtStack &sp,
                               coder::array<real_T, 1U> &in1,
                               const emlrtRSInfo in2,
                               const coder::array<real_T, 1U> &in3,
                               const coder::array<real_T, 1U> &in4);

static void binary_expand_op_3(const emlrtStack &sp,
                               coder::array<real_T, 1U> &in1,
                               const emlrtRSInfo in2,
                               const coder::array<real_T, 1U> &in3);

static void binary_expand_op_4(const emlrtStack &sp,
                               coder::array<real_T, 1U> &in1,
                               const coder::array<real_T, 1U> &in2,
                               const coder::array<real_T, 1U> &in3);

static void binary_expand_op_5(const emlrtStack &sp,
                               coder::array<real_T, 1U> &in1,
                               const coder::array<real_T, 1U> &in2,
                               const coder::array<real_T, 1U> &in3,
                               const coder::array<real_T, 2U> &in4);

static void ge(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
               const coder::array<real_T, 1U> &in2,
               const coder::array<real_T, 1U> &in3);

static void
jacob_D_unit(const emlrtStack &sp, const coder::array<real_T, 1U> &z0,
             const real_T proj_index[22], const real_T proj_coefficients[22],
             const coder::array<real_T, 1U> &P, real_T alpha,
             coder::array<real_T, 2U> &Q, coder::array<real_T, 2U> &Q_inv);

static void le(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
               const coder::array<real_T, 1U> &in2,
               const coder::array<real_T, 1U> &in3);

// Function Definitions
static void binary_expand_op_2(const emlrtStack &sp,
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
  r.set_size(&vb_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in4.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    r[i] = 1.0 / ((1.0 - in3[i * stride_0_0]) + in4[i * stride_1_0]);
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  coder::b_abs(st, r, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op_3(const emlrtStack &sp,
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
  b_in3.set_size(&vb_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in3.size(0) != 1);
  stride_1_0 = (in1.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    b_in3[i] = in3[i * stride_0_0] / in1[i * stride_1_0];
  }
  st.site = const_cast<emlrtRSInfo *>(&in2);
  coder::b_abs(st, b_in3, in1);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void binary_expand_op_4(const emlrtStack &sp,
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
  in1.set_size(&mc_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = (1.0 - in2[i * stride_0_0]) + in3[i * stride_1_0];
  }
}

static void binary_expand_op_5(const emlrtStack &sp,
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
  in1.set_size(&lc_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in4.size(1) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = in2[i * stride_0_0] *
             in3[static_cast<int32_T>(in4[i * stride_1_0]) - 1];
  }
}

static void ge(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
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
  in1.set_size(&jc_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_0] >= in3[i * stride_1_0]);
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
  coder::array<boolean_T, 1U> r4;
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
  i = z0.size(0);
  Q.set_size(&gb_emlrtRTEI, &sp, z0.size(0), z0.size(0));
  loop_ub_tmp = z0.size(0) * z0.size(0);
  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    Q[i1] = 0.0;
  }
  Q_inv.set_size(&hb_emlrtRTEI, &sp, z0.size(0), z0.size(0));
  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    Q_inv[i1] = 0.0;
  }
  temp = 1.0;
  exitg1 = false;
  while ((!exitg1) && (temp <= z0.size(0))) {
    if (temp != static_cast<int32_T>(muDoubleScalarFloor(temp))) {
      emlrtIntegerCheckR2012b(temp, &n_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(temp) < 1) || (static_cast<int32_T>(temp) > 11)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, 11,
                                    &p_emlrtBCI, (emlrtConstCTX)&sp);
    }
    i1 = (static_cast<int32_T>(temp) - 1) << 1;
    if (proj_index[i1] == rtInf) {
      exitg1 = true;
    } else {
      real_T a;
      real_T d;
      int32_T i2;
      int32_T loop_ub;
      st.site = &vb_emlrtRSI;
      b_st.site = &bc_emlrtRSI;
      d = proj_index[i1];
      if (muDoubleScalarIsNaN(d)) {
        temp_index.set_size(&ib_emlrtRTEI, &b_st, 1, 1);
        temp_index[0] = rtNaN;
      } else if (d < temp) {
        temp_index.set_size(&ib_emlrtRTEI, &b_st, 1, 0);
      } else if (muDoubleScalarIsInf(d) && (temp == d)) {
        temp_index.set_size(&ib_emlrtRTEI, &b_st, 1, 1);
        temp_index[0] = rtNaN;
      } else {
        loop_ub = static_cast<int32_T>(d - temp);
        temp_index.set_size(&ib_emlrtRTEI, &b_st, 1, loop_ub + 1);
        for (i2 = 0; i2 <= loop_ub; i2++) {
          temp_index[i2] = temp + static_cast<real_T>(i2);
        }
      }
      a = proj_index[i1 + 1];
      if (a == 1.0) {
        __m128d r3;
        __m128d r8;
        int32_T b_loop_ub;
        int32_T c_loop_ub;
        int32_T vectorUB;
        iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
        iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
        st.site = &wb_emlrtRSI;
        coder::internal::indexShapeCheck(st, z0.size(0), iv);
        iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
        iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
        st.site = &xb_emlrtRSI;
        coder::internal::indexShapeCheck(st, P.size(0), iv);
        st.site = &wb_emlrtRSI;
        loop_ub = temp_index.size(1);
        lambda_between.set_size(&ec_emlrtRTEI, &st, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          if (temp_index[i1] !=
              static_cast<int32_T>(muDoubleScalarFloor(temp_index[i1]))) {
            emlrtIntegerCheckR2012b(temp_index[i1], &o_emlrtDCI, &st);
          }
          i2 = static_cast<int32_T>(temp_index[i1]);
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &q_emlrtBCI, &st);
          }
          lambda_between[i1] = z0[i2 - 1];
        }
        l_tmp.set_size(&fc_emlrtRTEI, &st, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          l_tmp[i1] = static_cast<uint32_T>(temp_index[i1]);
        }
        lambda_inv.set_size(&gc_emlrtRTEI, &st, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          if ((static_cast<int32_T>(l_tmp[i1]) < 1) ||
              (static_cast<int32_T>(l_tmp[i1]) > 11)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(l_tmp[i1]), 1,
                                          11, &t_emlrtBCI, &st);
          }
          lambda_inv[i1] =
              proj_coefficients[((static_cast<int32_T>(l_tmp[i1]) - 1) << 1) +
                                1];
        }
        lambda.set_size(&hc_emlrtRTEI, &st, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          lambda[i1] =
              proj_coefficients[(static_cast<int32_T>(l_tmp[i1]) - 1) << 1];
        }
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = static_cast<int32_T>(temp_index[i1]);
          if ((i2 < 1) || (i2 > P.size(0))) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, P.size(0), &w_emlrtBCI, &st);
          }
        }
        if ((lambda_inv.size(0) != temp_index.size(1)) &&
            ((temp_index.size(1) != 1) && (lambda_inv.size(0) != 1))) {
          emlrtDimSizeImpxCheckR2021b(temp_index.size(1), lambda_inv.size(0),
                                      &w_emlrtECI, &st);
        }
        if (lambda_between.size(0) == lambda_inv.size(0)) {
          b_loop_ub = lambda_between.size(0);
          r4.set_size(&ic_emlrtRTEI, &st, lambda_between.size(0));
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            r4[i1] = (lambda_between[i1] <= lambda_inv[i1]);
          }
        } else {
          b_st.site = &ch_emlrtRSI;
          le(b_st, r4, lambda_between, lambda_inv);
        }
        if (lambda_between.size(0) == lambda.size(0)) {
          b_loop_ub = lambda_between.size(0);
          r5.set_size(&jc_emlrtRTEI, &st, lambda_between.size(0));
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            r5[i1] = (lambda_between[i1] >= lambda[i1]);
          }
        } else {
          b_st.site = &ch_emlrtRSI;
          ge(b_st, r5, lambda_between, lambda);
        }
        b_loop_ub = r4.size(0);
        if ((r4.size(0) != r5.size(0)) &&
            ((r4.size(0) != 1) && (r5.size(0) != 1))) {
          emlrtDimSizeImpxCheckR2021b(r4.size(0), r5.size(0), &v_emlrtECI, &st);
        }
        // %%Jacobian of box should be computed after projection!.
        if (r4.size(0) == r5.size(0)) {
          lambda.set_size(&kc_emlrtRTEI, &st, r4.size(0));
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            lambda[i1] = ((!r4[i1]) && (!r5[i1]));
          }
        } else {
          b_st.site = &bh_emlrtRSI;
          binary_expand_op_6(b_st, lambda, r4, r5);
        }
        b_loop_ub = lambda.size(0);
        lambda_inv.set_size(&lc_emlrtRTEI, &st, lambda.size(0));
        loop_ub_tmp = (lambda.size(0) / 2) << 1;
        vectorUB = loop_ub_tmp - 2;
        for (i1 = 0; i1 <= vectorUB; i1 += 2) {
          r3 = _mm_loadu_pd(&lambda[i1]);
          _mm_storeu_pd(&lambda_inv[i1], _mm_mul_pd(_mm_set1_pd(alpha), r3));
        }
        for (i1 = loop_ub_tmp; i1 < b_loop_ub; i1++) {
          lambda_inv[i1] = alpha * lambda[i1];
        }
        c_loop_ub = lambda_inv.size(0);
        if ((lambda_inv.size(0) != temp_index.size(1)) &&
            ((lambda_inv.size(0) != 1) && (temp_index.size(1) != 1))) {
          emlrtDimSizeImpxCheckR2021b(lambda_inv.size(0), temp_index.size(1),
                                      &u_emlrtECI, &st);
        }
        if (lambda_inv.size(0) == temp_index.size(1)) {
          r6.set_size(&lc_emlrtRTEI, &st, lambda_inv.size(0));
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            r6[i1] =
                lambda_inv[i1] * P[static_cast<int32_T>(temp_index[i1]) - 1];
          }
        } else {
          b_st.site = &ec_emlrtRSI;
          binary_expand_op_5(b_st, r6, lambda_inv, P, temp_index);
        }
        if ((lambda.size(0) != r6.size(0)) &&
            ((lambda.size(0) != 1) && (r6.size(0) != 1))) {
          emlrtDimSizeImpxCheckR2021b(lambda.size(0), r6.size(0), &t_emlrtECI,
                                      &st);
        }
        b_st.site = &ec_emlrtRSI;
        if (lambda.size(0) == r6.size(0)) {
          lambda_between.set_size(&mc_emlrtRTEI, &b_st, lambda.size(0));
          for (i1 = 0; i1 <= vectorUB; i1 += 2) {
            r3 = _mm_loadu_pd(&lambda[i1]);
            r8 = _mm_loadu_pd(&r6[i1]);
            _mm_storeu_pd(&lambda_between[i1],
                          _mm_add_pd(_mm_sub_pd(_mm_set1_pd(1.0), r3), r8));
          }
          for (i1 = loop_ub_tmp; i1 < b_loop_ub; i1++) {
            lambda_between[i1] = (1.0 - lambda[i1]) + r6[i1];
          }
        } else {
          c_st.site = &ec_emlrtRSI;
          binary_expand_op_4(c_st, lambda_between, lambda, r6);
        }
        c_st.site = &ic_emlrtRSI;
        d_st.site = &jc_emlrtRSI;
        if ((lambda.size(0) != 1) && (lambda_between.size(0) != 1) &&
            (lambda.size(0) != lambda_between.size(0))) {
          emlrtErrorWithMessageIdR2018a(&d_st, &e_emlrtRTEI,
                                        "MATLAB:sizeDimensionsMustMatch",
                                        "MATLAB:sizeDimensionsMustMatch", 0);
        }
        if (lambda.size(0) == lambda_between.size(0)) {
          b_loop_ub = lambda.size(0);
          c_lambda.set_size(&vb_emlrtRTEI, &st, lambda.size(0));
          loop_ub_tmp = (lambda.size(0) / 2) << 1;
          vectorUB = loop_ub_tmp - 2;
          for (i1 = 0; i1 <= vectorUB; i1 += 2) {
            r3 = _mm_loadu_pd(&lambda[i1]);
            r8 = _mm_loadu_pd(&lambda_between[i1]);
            _mm_storeu_pd(&c_lambda[i1], _mm_div_pd(r3, r8));
          }
          for (i1 = loop_ub_tmp; i1 < b_loop_ub; i1++) {
            c_lambda[i1] = lambda[i1] / lambda_between[i1];
          }
          b_st.site = &ec_emlrtRSI;
          coder::b_abs(b_st, c_lambda, lambda_between);
        } else {
          b_st.site = &ec_emlrtRSI;
          binary_expand_op_3(b_st, lambda_between, ec_emlrtRSI, lambda);
        }
        b_st.site = &ec_emlrtRSI;
        coder::b_sqrt(b_st, lambda_between);
        if ((lambda_inv.size(0) != temp_index.size(1)) &&
            ((lambda_inv.size(0) != 1) && (temp_index.size(1) != 1))) {
          emlrtDimSizeImpxCheckR2021b(lambda_inv.size(0), temp_index.size(1),
                                      &s_emlrtECI, &st);
        }
        b_loop_ub = lambda.size(0);
        if ((lambda.size(0) != r6.size(0)) &&
            ((lambda.size(0) != 1) && (r6.size(0) != 1))) {
          emlrtDimSizeImpxCheckR2021b(lambda.size(0), r6.size(0), &r_emlrtECI,
                                      &st);
        }
        if (lambda.size(0) == r6.size(0)) {
          loop_ub_tmp = (lambda.size(0) / 2) << 1;
          vectorUB = loop_ub_tmp - 2;
          for (i1 = 0; i1 <= vectorUB; i1 += 2) {
            __m128d r10;
            r3 = _mm_loadu_pd(&lambda[i1]);
            r8 = _mm_loadu_pd(&r6[i1]);
            r10 = _mm_set1_pd(1.0);
            _mm_storeu_pd(&lambda[i1],
                          _mm_div_pd(r10, _mm_add_pd(_mm_sub_pd(r10, r3), r8)));
          }
          for (i1 = loop_ub_tmp; i1 < b_loop_ub; i1++) {
            lambda[i1] = 1.0 / ((1.0 - lambda[i1]) + r6[i1]);
          }
          b_st.site = &fc_emlrtRSI;
          coder::b_abs(b_st, lambda, lambda_inv);
        } else {
          b_st.site = &fc_emlrtRSI;
          binary_expand_op_2(b_st, lambda_inv, fc_emlrtRSI, lambda, r6);
        }
        b_st.site = &fc_emlrtRSI;
        coder::b_sqrt(b_st, lambda_inv);
        b_st.site = &gc_emlrtRSI;
        coder::diag(b_st, lambda_between, r);
        b_st.site = &hc_emlrtRSI;
        coder::diag(b_st, lambda_inv, b_Q);
        r1.set_size(&nc_emlrtRTEI, &sp, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          if ((static_cast<int32_T>(l_tmp[i1]) < 1) ||
              (static_cast<int32_T>(l_tmp[i1]) > i)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(l_tmp[i1]), 1, i,
                                          &gb_emlrtBCI, (emlrtConstCTX)&sp);
          }
          r1[i1] = static_cast<int32_T>(l_tmp[i1]) - 1;
        }
        r2.set_size(&oc_emlrtRTEI, &sp, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          if ((static_cast<int32_T>(l_tmp[i1]) < 1) ||
              (static_cast<int32_T>(l_tmp[i1]) > i)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(l_tmp[i1]), 1, i,
                                          &hb_emlrtBCI, (emlrtConstCTX)&sp);
          }
          r2[i1] = static_cast<int32_T>(l_tmp[i1]) - 1;
        }
        b_loop_ub = r1.size(0);
        iv[0] = r1.size(0);
        c_loop_ub = r2.size(0);
        iv[1] = r2.size(0);
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, r.size(), 2, &db_emlrtECI,
                                      (emlrtCTX)&sp);
        iv[0] = r1.size(0);
        for (i1 = 0; i1 < c_loop_ub; i1++) {
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            Q[r1[i2] + Q.size(0) * r2[i1]] = r[i2 + iv[0] * i1];
          }
        }
        r1.set_size(&pc_emlrtRTEI, &sp, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          if ((static_cast<int32_T>(l_tmp[i1]) < 1) ||
              (static_cast<int32_T>(l_tmp[i1]) > i)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(l_tmp[i1]), 1, i,
                                          &ib_emlrtBCI, (emlrtConstCTX)&sp);
          }
          r1[i1] = static_cast<int32_T>(l_tmp[i1]) - 1;
        }
        r2.set_size(&qc_emlrtRTEI, &sp, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          if ((static_cast<int32_T>(l_tmp[i1]) < 1) ||
              (static_cast<int32_T>(l_tmp[i1]) > i)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(l_tmp[i1]), 1, i,
                                          &jb_emlrtBCI, (emlrtConstCTX)&sp);
          }
          r2[i1] = static_cast<int32_T>(l_tmp[i1]) - 1;
        }
        loop_ub = r1.size(0);
        iv[0] = r1.size(0);
        b_loop_ub = r2.size(0);
        iv[1] = r2.size(0);
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, b_Q.size(), 2, &ab_emlrtECI,
                                      (emlrtCTX)&sp);
        iv[0] = r1.size(0);
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          for (i2 = 0; i2 < loop_ub; i2++) {
            Q_inv[r1[i2] + Q_inv.size(0) * r2[i1]] = b_Q[i2 + iv[0] * i1];
          }
        }
      } else if (a == 2.0) {
        real_T b_proj_coefficients;
        int32_T b_loop_ub;
        int32_T c_loop_ub;
        iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
        iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
        st.site = &yb_emlrtRSI;
        coder::internal::indexShapeCheck(st, z0.size(0), iv);
        iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
        iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
        st.site = &yb_emlrtRSI;
        coder::internal::indexShapeCheck(st, P.size(0), iv);
        st.site = &yb_emlrtRSI;
        loop_ub = temp_index.size(1);
        lambda_inv.set_size(&pb_emlrtRTEI, &st, temp_index.size(1));
        for (i2 = 0; i2 < loop_ub; i2++) {
          if (temp_index[i2] !=
              static_cast<int32_T>(muDoubleScalarFloor(temp_index[i2]))) {
            emlrtIntegerCheckR2012b(temp_index[i2], &p_emlrtDCI, &st);
          }
          loop_ub_tmp = static_cast<int32_T>(temp_index[i2]);
          if ((loop_ub_tmp < 1) || (loop_ub_tmp > i)) {
            emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, i, &r_emlrtBCI, &st);
          }
          lambda_inv[i2] = z0[loop_ub_tmp - 1];
        }
        lambda_between.set_size(&qb_emlrtRTEI, &st, temp_index.size(1));
        for (i2 = 0; i2 < loop_ub; i2++) {
          loop_ub_tmp = static_cast<int32_T>(temp_index[i2]);
          if ((loop_ub_tmp < 1) || (loop_ub_tmp > P.size(0))) {
            emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, P.size(0),
                                          &v_emlrtBCI, &st);
          }
          lambda_between[i2] = P[loop_ub_tmp - 1];
        }
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
          b_loop_ub = lambda_between.size(0);
          loop_ub_tmp = (lambda_between.size(0) / 2) << 1;
          vectorUB = loop_ub_tmp - 2;
          for (i1 = 0; i1 <= vectorUB; i1 += 2) {
            __m128d r3;
            r3 = _mm_loadu_pd(&lambda_between[i1]);
            _mm_storeu_pd(&lambda_between[i1],
                          _mm_div_pd(_mm_set1_pd(1.0),
                                     _mm_mul_pd(_mm_set1_pd(alpha), r3)));
          }
          for (i1 = loop_ub_tmp; i1 < b_loop_ub; i1++) {
            lambda_between[i1] = 1.0 / (alpha * lambda_between[i1]);
          }
          b_st.site = &pc_emlrtRSI;
          coder::b_sqrt(b_st, lambda_between);
          b_st.site = &pc_emlrtRSI;
          coder::diag(b_st, lambda_between, b_Q);
          r.set_size(&yb_emlrtRTEI, &st, b_Q.size(0), b_Q.size(1));
          b_loop_ub = b_Q.size(0) * b_Q.size(1);
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            r[i1] = b_Q[i1];
          }
        } else {
          __m128d r3;
          real_T b_a;
          real_T bi;
          int32_T vectorUB;
          b_a = 1.0 / a;
          b_st.site = &qc_emlrtRSI;
          coder::eye(b_st, static_cast<real_T>(temp_index.size(1)), b_Q);
          b_loop_ub = b_Q.size(0) * b_Q.size(1);
          loop_ub_tmp = (b_loop_ub / 2) << 1;
          vectorUB = loop_ub_tmp - 2;
          for (i1 = 0; i1 <= vectorUB; i1 += 2) {
            r3 = _mm_loadu_pd(&b_Q[i1]);
            _mm_storeu_pd(&b_Q[i1], _mm_mul_pd(_mm_set1_pd(b_a), r3));
          }
          for (i1 = loop_ub_tmp; i1 < b_loop_ub; i1++) {
            b_Q[i1] = b_a * b_Q[i1];
          }
          b_st.site = &qc_emlrtRSI;
          c_st.site = &yc_emlrtRSI;
          a = muDoubleScalarPower(a, 3.0);
          b_loop_ub = lambda_inv.size(0);
          r.set_size(&rb_emlrtRTEI, &st, lambda_inv.size(0),
                     lambda_inv.size(0));
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            loop_ub_tmp = (lambda_inv.size(0) / 2) << 1;
            vectorUB = loop_ub_tmp - 2;
            for (i2 = 0; i2 <= vectorUB; i2 += 2) {
              r3 = _mm_loadu_pd(&lambda_inv[i2]);
              _mm_storeu_pd(
                  &r[i2 + r.size(0) * i1],
                  _mm_div_pd(
                      _mm_add_pd(_mm_set1_pd(0.0),
                                 _mm_mul_pd(r3, _mm_set1_pd(lambda_inv[i1]))),
                      _mm_set1_pd(a)));
            }
            for (i2 = loop_ub_tmp; i2 < b_loop_ub; i2++) {
              r[i2 + r.size(0) * i1] = lambda_inv[i2] * lambda_inv[i1] / a;
            }
          }
          if ((b_Q.size(0) != r.size(0)) &&
              ((b_Q.size(0) != 1) && (r.size(0) != 1))) {
            emlrtDimSizeImpxCheckR2021b(b_Q.size(0), r.size(0), &q_emlrtECI,
                                        &st);
          }
          if ((b_Q.size(1) != r.size(1)) &&
              ((b_Q.size(1) != 1) && (r.size(1) != 1))) {
            emlrtDimSizeImpxCheckR2021b(b_Q.size(1), r.size(1), &p_emlrtECI,
                                        &st);
          }
          // maybe we can accelerate this
          if ((b_Q.size(0) == r.size(0)) && (b_Q.size(1) == r.size(1))) {
            d_Q.set_size(&sb_emlrtRTEI, &st, b_Q.size(0), b_Q.size(1));
            b_loop_ub = b_Q.size(0) * b_Q.size(1);
            loop_ub_tmp = (b_loop_ub / 2) << 1;
            vectorUB = loop_ub_tmp - 2;
            for (i1 = 0; i1 <= vectorUB; i1 += 2) {
              __m128d r8;
              r3 = _mm_loadu_pd(&b_Q[i1]);
              r8 = _mm_loadu_pd(&r[i1]);
              _mm_storeu_pd(&d_Q[i1],
                            _mm_mul_pd(_mm_sub_pd(r3, r8),
                                       _mm_set1_pd(b_proj_coefficients)));
            }
            for (i1 = loop_ub_tmp; i1 < b_loop_ub; i1++) {
              d_Q[i1] = (b_Q[i1] - r[i1]) * b_proj_coefficients;
            }
            b_st.site = &rc_emlrtRSI;
            coder::eig(b_st, d_Q, c_Q, lambda_m);
          } else {
            b_st.site = &rc_emlrtRSI;
            binary_expand_op_12(b_st, rc_emlrtRSI, b_Q, r, proj_coefficients,
                                temp, c_Q, lambda_m);
          }
          // J = QlambdaQ'
          b_st.site = &sc_emlrtRSI;
          coder::diag(b_st, lambda_m, b_lambda);
          b_loop_ub = b_lambda.size(0);
          r7.set_size(&tb_emlrtRTEI, &st, b_lambda.size(0));
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            r7[i1].re = alpha * b_lambda[i1].re;
            r7[i1].im = alpha * b_lambda[i1].im;
          }
          if ((b_lambda.size(0) != temp_index.size(1)) &&
              ((b_lambda.size(0) != 1) && (temp_index.size(1) != 1))) {
            emlrtDimSizeImpxCheckR2021b(b_lambda.size(0), temp_index.size(1),
                                        &o_emlrtECI, &st);
          }
          if (r7.size(0) == lambda_between.size(0)) {
            r9.set_size(&tb_emlrtRTEI, &st, b_lambda.size(0));
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              r9[i1].re = lambda_between[i1] * r7[i1].re;
              r9[i1].im = lambda_between[i1] * r7[i1].im;
            }
          } else {
            b_st.site = &tc_emlrtRSI;
            times(b_st, r9, r7, lambda_between);
          }
          if ((b_lambda.size(0) != r9.size(0)) &&
              ((b_lambda.size(0) != 1) && (r9.size(0) != 1))) {
            emlrtDimSizeImpxCheckR2021b(b_lambda.size(0), r9.size(0),
                                        &n_emlrtECI, &st);
          }
          b_st.site = &tc_emlrtRSI;
          if (b_lambda.size(0) == r9.size(0)) {
            y.set_size(&ub_emlrtRTEI, &b_st, b_lambda.size(0));
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              y[i1].re = (1.0 - b_lambda[i1].re) + r9[i1].re;
              y[i1].im = (0.0 - b_lambda[i1].im) + r9[i1].im;
            }
          } else {
            c_st.site = &tc_emlrtRSI;
            binary_expand_op_11(c_st, y, b_lambda, r9);
          }
          c_st.site = &ic_emlrtRSI;
          d_st.site = &jc_emlrtRSI;
          if ((b_lambda.size(0) != 1) && (y.size(0) != 1) &&
              (b_lambda.size(0) != y.size(0))) {
            emlrtErrorWithMessageIdR2018a(&d_st, &e_emlrtRTEI,
                                          "MATLAB:sizeDimensionsMustMatch",
                                          "MATLAB:sizeDimensionsMustMatch", 0);
          }
          if (b_lambda.size(0) == y.size(0)) {
            b_loop_ub = b_lambda.size(0);
            d_lambda.set_size(&vb_emlrtRTEI, &st, b_lambda.size(0));
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
                  d_lambda[i1].re = (temp * b_a + ai * a) / b_proj_coefficients;
                  d_lambda[i1].im = (ai * b_a - temp * a) / b_proj_coefficients;
                } else {
                  b_proj_coefficients = b_a / bi;
                  a = bi + b_proj_coefficients * b_a;
                  d_lambda[i1].re = (b_proj_coefficients * temp + ai) / a;
                  d_lambda[i1].im = (b_proj_coefficients * ai - temp) / a;
                }
              }
            }
            b_st.site = &tc_emlrtRSI;
            coder::b_abs(b_st, d_lambda, lambda_between);
          } else {
            b_st.site = &tc_emlrtRSI;
            binary_expand_op_10(b_st, lambda_between, tc_emlrtRSI, b_lambda, y);
          }
          b_st.site = &tc_emlrtRSI;
          coder::b_sqrt(b_st, lambda_between);
          if ((r7.size(0) != temp_index.size(1)) &&
              ((r7.size(0) != 1) && (temp_index.size(1) != 1))) {
            emlrtDimSizeImpxCheckR2021b(r7.size(0), temp_index.size(1),
                                        &m_emlrtECI, &st);
          }
          b_loop_ub = b_lambda.size(0);
          if ((b_lambda.size(0) != r9.size(0)) &&
              ((b_lambda.size(0) != 1) && (r9.size(0) != 1))) {
            emlrtDimSizeImpxCheckR2021b(b_lambda.size(0), r9.size(0),
                                        &l_emlrtECI, &st);
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
            b_st.site = &uc_emlrtRSI;
            coder::b_abs(b_st, b_lambda, lambda_inv);
          } else {
            b_st.site = &uc_emlrtRSI;
            binary_expand_op_9(b_st, lambda_inv, uc_emlrtRSI, b_lambda, r9);
          }
          b_st.site = &uc_emlrtRSI;
          coder::b_sqrt(b_st, lambda_inv);
          b_loop_ub = c_Q.size(1);
          if ((lambda_between.size(0) != c_Q.size(1)) &&
              ((c_Q.size(1) != 1) && (lambda_between.size(0) != 1))) {
            emlrtDimSizeImpxCheckR2021b(c_Q.size(1), lambda_between.size(0),
                                        &k_emlrtECI, &st);
          }
          if (lambda_between.size(0) == c_Q.size(1)) {
            c_loop_ub = c_Q.size(0);
            b_Q.set_size(&wb_emlrtRTEI, &st, c_Q.size(0), c_Q.size(1));
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              for (i2 = 0; i2 < c_loop_ub; i2++) {
                b_Q[i2 + b_Q.size(0) * i1] =
                    c_Q[i2 + c_Q.size(0) * i1].re * lambda_between[i1];
              }
            }
          } else {
            b_st.site = &gh_emlrtRSI;
            binary_expand_op_7(b_st, b_Q, c_Q, lambda_between);
          }
          // Q.* v'
          b_loop_ub = c_Q.size(1);
          if ((lambda_inv.size(0) != c_Q.size(1)) &&
              ((c_Q.size(1) != 1) && (lambda_inv.size(0) != 1))) {
            emlrtDimSizeImpxCheckR2021b(c_Q.size(1), lambda_inv.size(0),
                                        &j_emlrtECI, &st);
          }
          if (lambda_inv.size(0) == c_Q.size(1)) {
            c_loop_ub = c_Q.size(0);
            r.set_size(&xb_emlrtRTEI, &st, c_Q.size(0), c_Q.size(1));
            for (i1 = 0; i1 < b_loop_ub; i1++) {
              for (i2 = 0; i2 < c_loop_ub; i2++) {
                r[i2 + r.size(0) * i1] =
                    c_Q[i2 + c_Q.size(0) * i1].re * lambda_inv[i1];
              }
            }
          } else {
            b_st.site = &fh_emlrtRSI;
            binary_expand_op_7(b_st, r, c_Q, lambda_inv);
          }
          // check the shape of lmbda_inv
        }
        lambda_inv.set_size(&ac_emlrtRTEI, &sp, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          lambda_inv[i1] = temp_index[i1];
        }
        r1.set_size(&ac_emlrtRTEI, &sp, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = static_cast<int32_T>(lambda_inv[i1]);
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &cb_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          r1[i1] = i2 - 1;
        }
        r2.set_size(&bc_emlrtRTEI, &sp, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = static_cast<int32_T>(lambda_inv[i1]);
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &db_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          r2[i1] = i2 - 1;
        }
        b_loop_ub = r1.size(0);
        iv[0] = r1.size(0);
        c_loop_ub = r2.size(0);
        iv[1] = r2.size(0);
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, b_Q.size(), 2, &cb_emlrtECI,
                                      (emlrtCTX)&sp);
        iv[0] = r1.size(0);
        for (i1 = 0; i1 < c_loop_ub; i1++) {
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            Q[r1[i2] + Q.size(0) * r2[i1]] = b_Q[i2 + iv[0] * i1];
          }
        }
        r1.set_size(&cc_emlrtRTEI, &sp, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = static_cast<int32_T>(lambda_inv[i1]);
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &eb_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          r1[i1] = i2 - 1;
        }
        r2.set_size(&dc_emlrtRTEI, &sp, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = static_cast<int32_T>(lambda_inv[i1]);
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &fb_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          r2[i1] = i2 - 1;
        }
        loop_ub = r1.size(0);
        iv[0] = r1.size(0);
        b_loop_ub = r2.size(0);
        iv[1] = r2.size(0);
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, r.size(), 2, &y_emlrtECI,
                                      (emlrtCTX)&sp);
        iv[0] = r1.size(0);
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          for (i2 = 0; i2 < loop_ub; i2++) {
            Q_inv[r1[i2] + Q_inv.size(0) * r2[i1]] = r[i2 + iv[0] * i1];
          }
        }
      } else if (a == 3.0) {
        int32_T b_loop_ub;
        int32_T c_loop_ub;
        iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
        iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
        st.site = &ac_emlrtRSI;
        coder::internal::indexShapeCheck(st, z0.size(0), iv);
        iv[0] = (*(int32_T(*)[2])temp_index.size())[0];
        iv[1] = (*(int32_T(*)[2])temp_index.size())[1];
        st.site = &ac_emlrtRSI;
        coder::internal::indexShapeCheck(st, P.size(0), iv);
        loop_ub = temp_index.size(1);
        lambda_inv.set_size(&jb_emlrtRTEI, &sp, temp_index.size(1));
        for (i2 = 0; i2 < loop_ub; i2++) {
          if (temp_index[i2] !=
              static_cast<int32_T>(muDoubleScalarFloor(temp_index[i2]))) {
            emlrtIntegerCheckR2012b(temp_index[i2], &q_emlrtDCI,
                                    (emlrtConstCTX)&sp);
          }
          loop_ub_tmp = static_cast<int32_T>(temp_index[i2]);
          if ((loop_ub_tmp < 1) || (loop_ub_tmp > i)) {
            emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, i, &s_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          lambda_inv[i2] = z0[loop_ub_tmp - 1];
        }
        lambda_between.set_size(&kb_emlrtRTEI, &sp, temp_index.size(1));
        for (i2 = 0; i2 < loop_ub; i2++) {
          loop_ub_tmp = static_cast<int32_T>(temp_index[i2]);
          if ((loop_ub_tmp < 1) || (loop_ub_tmp > P.size(0))) {
            emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, P.size(0),
                                          &u_emlrtBCI, (emlrtConstCTX)&sp);
          }
          lambda_between[i2] = P[loop_ub_tmp - 1];
        }
        st.site = &ac_emlrtRSI;
        dev_jacob_soc(st, lambda_inv, proj_coefficients[i1], lambda_between,
                      alpha, r, b_Q);
        lambda_inv.set_size(&lb_emlrtRTEI, &sp, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          lambda_inv[i1] = temp_index[i1];
        }
        r1.set_size(&lb_emlrtRTEI, &sp, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = static_cast<int32_T>(lambda_inv[i1]);
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &x_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          r1[i1] = i2 - 1;
        }
        r2.set_size(&mb_emlrtRTEI, &sp, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = static_cast<int32_T>(lambda_inv[i1]);
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &y_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          r2[i1] = i2 - 1;
        }
        b_loop_ub = r1.size(0);
        iv[0] = r1.size(0);
        c_loop_ub = r2.size(0);
        iv[1] = r2.size(0);
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, r.size(), 2, &bb_emlrtECI,
                                      (emlrtCTX)&sp);
        iv[0] = r1.size(0);
        for (i1 = 0; i1 < c_loop_ub; i1++) {
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            Q[r1[i2] + Q.size(0) * r2[i1]] = r[i2 + iv[0] * i1];
          }
        }
        r1.set_size(&nb_emlrtRTEI, &sp, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = static_cast<int32_T>(lambda_inv[i1]);
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &ab_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          r1[i1] = i2 - 1;
        }
        r2.set_size(&ob_emlrtRTEI, &sp, temp_index.size(1));
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = static_cast<int32_T>(lambda_inv[i1]);
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &bb_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          r2[i1] = i2 - 1;
        }
        loop_ub = r1.size(0);
        iv[0] = r1.size(0);
        b_loop_ub = r2.size(0);
        iv[1] = r2.size(0);
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, b_Q.size(), 2, &x_emlrtECI,
                                      (emlrtCTX)&sp);
        iv[0] = r1.size(0);
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          for (i2 = 0; i2 < loop_ub; i2++) {
            Q_inv[r1[i2] + Q_inv.size(0) * r2[i1]] = b_Q[i2 + iv[0] * i1];
          }
        }
      }
      // update
      temp = d + 1.0;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
      }
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

static void le(const emlrtStack &sp, coder::array<boolean_T, 1U> &in1,
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
  in1.set_size(&ic_emlrtRTEI, &sp, loop_ub);
  stride_0_0 = (in2.size(0) != 1);
  stride_1_0 = (in3.size(0) != 1);
  for (int32_T i{0}; i < loop_ub; i++) {
    in1[i] = (in2[i * stride_0_0] <= in3[i * stride_1_0]);
  }
}

void dev_S_inv_g(const emlrtStack &sp, const real_T z0[326], real_T nx,
                 real_T nu, const real_T proj_index_all[660],
                 const real_T proj_coefficients_all[660], const real_T P[326],
                 real_T alpha, coder::array<real_T, 3U> &Q,
                 coder::array<real_T, 3U> &Q_inv)
{
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
  //  the output is the eigenvalue decomposition of S_inv. P is the diagonal
  //  matrix in the objectfunciton
  b = nx + nu;
  if (!(b >= 0.0)) {
    emlrtNonNegativeCheckR2012b(b, &j_emlrtDCI, (emlrtConstCTX)&sp);
  }
  i = static_cast<int32_T>(muDoubleScalarFloor(b));
  if (b != i) {
    emlrtIntegerCheckR2012b(b, &i_emlrtDCI, (emlrtConstCTX)&sp);
  }
  Q.set_size(&ab_emlrtRTEI, &sp, static_cast<int32_T>(b),
             static_cast<int32_T>(b), 30);
  if (b != i) {
    emlrtIntegerCheckR2012b(b, &k_emlrtDCI, (emlrtConstCTX)&sp);
  }
  if (!(b >= 0.0)) {
    emlrtNonNegativeCheckR2012b(b, &l_emlrtDCI, (emlrtConstCTX)&sp);
  }
  if (b != i) {
    emlrtIntegerCheckR2012b(b, &k_emlrtDCI, (emlrtConstCTX)&sp);
  }
  loop_ub_tmp = static_cast<int32_T>(b) * static_cast<int32_T>(b) * 30;
  for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
    Q[b_i] = 0.0;
  }
  //  1:n-1 are nx+nu**2 but the Nth is nx**2.
  loop_ub = static_cast<int32_T>(b);
  Q_inv.set_size(&bb_emlrtRTEI, &sp, static_cast<int32_T>(b),
                 static_cast<int32_T>(b), 30);
  for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
    Q_inv[b_i] = 0.0;
  }
  for (int32_T c_i{0}; c_i < 30; c_i++) {
    int32_T b_loop_ub;
    int32_T i1;
    int32_T vectorUB;
    if (c_i + 1 < 30) {
      if (b < 1.0) {
        z_temp_index.set_size(&s_emlrtRTEI, &sp, z_temp_index.size(0), 0);
      } else {
        z_temp_index.set_size(&s_emlrtRTEI, &sp, 1,
                              static_cast<int32_T>(b - 1.0) + 1);
        b_loop_ub = static_cast<int32_T>(b - 1.0);
        for (b_i = 0; b_i <= b_loop_ub; b_i++) {
          z_temp_index[b_i] = static_cast<real_T>(b_i) + 1.0;
        }
      }
      z_temp_index.set_size(&db_emlrtRTEI, &sp, 1, z_temp_index.size(1));
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
    } else {
      if (muDoubleScalarIsNaN(nx)) {
        z_temp_index.set_size(&s_emlrtRTEI, &sp, 1, 1);
        z_temp_index[0] = rtNaN;
      } else if (nx < 1.0) {
        z_temp_index.set_size(&s_emlrtRTEI, &sp, z_temp_index.size(0), 0);
      } else {
        z_temp_index.set_size(&s_emlrtRTEI, &sp, 1,
                              static_cast<int32_T>(nx - 1.0) + 1);
        b_loop_ub = static_cast<int32_T>(nx - 1.0);
        for (b_i = 0; b_i <= b_loop_ub; b_i++) {
          z_temp_index[b_i] = static_cast<real_T>(b_i) + 1.0;
        }
      }
      z_temp_index.set_size(&cb_emlrtRTEI, &sp, 1, z_temp_index.size(1));
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
    }
    b_loop_ub = z_temp_index.size(1);
    z0_temp.set_size(&eb_emlrtRTEI, &sp, z_temp_index.size(1));
    for (b_i = 0; b_i < b_loop_ub; b_i++) {
      if (z_temp_index[b_i] !=
          static_cast<int32_T>(muDoubleScalarFloor(z_temp_index[b_i]))) {
        emlrtIntegerCheckR2012b(z_temp_index[b_i], &m_emlrtDCI,
                                (emlrtConstCTX)&sp);
      }
      i1 = static_cast<int32_T>(z_temp_index[b_i]);
      if ((i1 < 1) || (i1 > 326)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, 326, &o_emlrtBCI,
                                      (emlrtConstCTX)&sp);
      }
      z0_temp[b_i] = z0[i1 - 1];
    }
    P_temp.set_size(&fb_emlrtRTEI, &sp, z_temp_index.size(1));
    for (b_i = 0; b_i < b_loop_ub; b_i++) {
      P_temp[b_i] = P[static_cast<int32_T>(z_temp_index[b_i]) - 1];
    }
    if (c_i + 1 < 30) {
      st.site = &tb_emlrtRSI;
      jacob_D_unit(st, z0_temp, &proj_index_all[22 * c_i],
                   &proj_coefficients_all[22 * c_i], P_temp, alpha, r1, r2);
      loop_ub_tmp = Q.size(0);
      b_Q[0] = Q.size(0);
      vectorUB = Q.size(1);
      b_Q[1] = Q.size(1);
      emlrtSubAssignSizeCheckR2012b(&b_Q[0], 2, r1.size(), 2, &f_emlrtECI,
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
      emlrtSubAssignSizeCheckR2012b(&b_Q[0], 2, r2.size(), 2, &h_emlrtECI,
                                    (emlrtCTX)&sp);
      for (b_i = 0; b_i < loop_ub; b_i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Q_inv[(i1 + Q_inv.size(0) * b_i) +
                Q_inv.size(0) * Q_inv.size(1) * c_i] =
              r2[i1 + static_cast<int32_T>(b) * b_i];
        }
      }
    } else {
      st.site = &ub_emlrtRSI;
      jacob_D_unit(st, z0_temp, &proj_index_all[22 * c_i],
                   &proj_coefficients_all[22 * c_i], P_temp, alpha, r1, r2);
      if (nx < 1.0) {
        b_loop_ub = 0;
        loop_ub_tmp = 0;
      } else {
        if (Q.size(0) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, Q.size(0), &g_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        b_i = static_cast<int32_T>(muDoubleScalarFloor(nx));
        if (nx != b_i) {
          emlrtIntegerCheckR2012b(nx, &e_emlrtDCI, (emlrtConstCTX)&sp);
        }
        b_loop_ub = static_cast<int32_T>(nx);
        if (b_loop_ub > Q.size(0)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1, Q.size(0),
                                        &h_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if (Q.size(1) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, Q.size(1), &i_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (b_loop_ub != b_i) {
          emlrtIntegerCheckR2012b(nx, &f_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if (b_loop_ub > Q.size(1)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1, Q.size(1),
                                        &j_emlrtBCI, (emlrtConstCTX)&sp);
        }
        loop_ub_tmp = b_loop_ub;
      }
      b_Q[0] = b_loop_ub;
      b_Q[1] = loop_ub_tmp;
      emlrtSubAssignSizeCheckR2012b(&b_Q[0], 2, r1.size(), 2, &g_emlrtECI,
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
                                        &k_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_i = static_cast<int32_T>(muDoubleScalarFloor(nx));
        if (nx != b_i) {
          emlrtIntegerCheckR2012b(nx, &g_emlrtDCI, (emlrtConstCTX)&sp);
        }
        b_loop_ub = static_cast<int32_T>(nx);
        if (b_loop_ub > static_cast<int32_T>(b)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1,
                                        static_cast<int32_T>(b), &l_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (static_cast<int32_T>(b) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, static_cast<int32_T>(b),
                                        &m_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if (b_loop_ub != b_i) {
          emlrtIntegerCheckR2012b(nx, &h_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if (b_loop_ub > static_cast<int32_T>(b)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1,
                                        static_cast<int32_T>(b), &n_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        loop_ub_tmp = b_loop_ub;
      }
      b_Q[0] = b_loop_ub;
      b_Q[1] = loop_ub_tmp;
      emlrtSubAssignSizeCheckR2012b(&b_Q[0], 2, r2.size(), 2, &i_emlrtECI,
                                    (emlrtCTX)&sp);
      for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          Q_inv[(i1 + Q_inv.size(0) * b_i) +
                Q_inv.size(0) * Q_inv.size(1) * 29] = r2[i1 + b_loop_ub * b_i];
        }
      }
      // Specified! only for the LCvx case
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)&sp);
}

// End of code generation (dev_S_inv_g.cpp)
