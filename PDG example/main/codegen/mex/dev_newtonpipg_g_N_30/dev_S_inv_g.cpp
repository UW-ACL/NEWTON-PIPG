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
#include "dev_jacob_ball.h"
#include "dev_jacob_soc.h"
#include "dev_newtonpipg_g_N_30_data.h"
#include "div.h"
#include "indexShapeCheck.h"
#include "proj_D_unit_with_affinejacobian.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "mwmathutil.h"
#include <algorithm>
#include <cstring>
#include <emmintrin.h>

// Variable Definitions
static emlrtRSInfo nc_emlrtRSI{
    10,            // lineNo
    "dev_S_inv_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo oc_emlrtRSI{
    12,            // lineNo
    "dev_S_inv_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo pc_emlrtRSI{
    33,             // lineNo
    "jacob_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo qc_emlrtRSI{
    34,             // lineNo
    "jacob_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo rc_emlrtRSI{
    36,             // lineNo
    "jacob_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo sc_emlrtRSI{
    38,             // lineNo
    "jacob_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo tc_emlrtRSI{
    48,              // lineNo
    "dev_jacob_box", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtRSInfo uc_emlrtRSI{
    49,              // lineNo
    "dev_jacob_box", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pathName
};

static emlrtECInfo bb_emlrtECI{
    -1,            // nDims
    10,            // lineNo
    10,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtBCInfo yb_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    12,            // lineNo
    12,            // colNo
    "Q",           // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo cb_emlrtDCI{
    12,            // lineNo
    14,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo ac_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    12,            // lineNo
    14,            // colNo
    "Q",           // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo bc_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    12,            // lineNo
    17,            // colNo
    "Q",           // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo db_emlrtDCI{
    12,            // lineNo
    19,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo cc_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    12,            // lineNo
    19,            // colNo
    "Q",           // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtECInfo cb_emlrtECI{
    -1,            // nDims
    12,            // lineNo
    10,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo db_emlrtECI{
    -1,            // nDims
    10,            // lineNo
    20,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtBCInfo dc_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    12,            // lineNo
    32,            // colNo
    "Q_inv",       // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo eb_emlrtDCI{
    12,            // lineNo
    34,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo ec_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    12,            // lineNo
    34,            // colNo
    "Q_inv",       // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo fc_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    12,            // lineNo
    37,            // colNo
    "Q_inv",       // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo fb_emlrtDCI{
    12,            // lineNo
    39,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo gc_emlrtBCI{
    -1,            // iFirst
    -1,            // iLast
    12,            // lineNo
    39,            // colNo
    "Q_inv",       // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtECInfo eb_emlrtECI{
    -1,            // nDims
    12,            // lineNo
    26,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtDCInfo gb_emlrtDCI{
    4,             // lineNo
    20,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtDCInfo hb_emlrtDCI{
    4,             // lineNo
    20,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    4                                             // checkKind
};

static emlrtDCInfo ib_emlrtDCI{
    4,             // lineNo
    1,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtDCInfo jb_emlrtDCI{
    4,             // lineNo
    1,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    4                                             // checkKind
};

static emlrtBCInfo hc_emlrtBCI{
    1,             // iFirst
    326,           // iLast
    12,            // lineNo
    63,            // colNo
    "z0",          // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo kb_emlrtDCI{
    12,            // lineNo
    63,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo ic_emlrtBCI{
    1,             // iFirst
    326,           // iLast
    10,            // lineNo
    53,            // colNo
    "z0",          // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo lb_emlrtDCI{
    10,            // lineNo
    53,            // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo jc_emlrtBCI{
    1,             // iFirst
    326,           // iLast
    12,            // lineNo
    129,           // colNo
    "P",           // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo mb_emlrtDCI{
    12,            // lineNo
    129,           // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo kc_emlrtBCI{
    1,             // iFirst
    326,           // iLast
    10,            // lineNo
    124,           // colNo
    "P",           // aName
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo nb_emlrtDCI{
    10,            // lineNo
    124,           // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo lc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    33,             // lineNo
    146,            // colNo
    "z0",           // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo ob_emlrtDCI{
    33,             // lineNo
    152,            // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo mc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    33,             // lineNo
    152,            // colNo
    "z0",           // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo pb_emlrtDCI{
    33,             // lineNo
    199,            // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo nc_emlrtBCI{
    1,                   // iFirst
    11,                  // iLast
    33,                  // lineNo
    199,                 // colNo
    "proj_coefficients", // aName
    "jacob_D_unit",      // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo qb_emlrtDCI{
    34,             // lineNo
    42,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo oc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    34,             // lineNo
    67,             // colNo
    "P",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo rb_emlrtDCI{
    34,             // lineNo
    73,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo pc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    34,             // lineNo
    73,             // colNo
    "P",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo qc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    33,             // lineNo
    11,             // colNo
    "Q",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo sb_emlrtDCI{
    33,             // lineNo
    17,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo rc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    33,             // lineNo
    17,             // colNo
    "Q",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo tb_emlrtDCI{
    33,             // lineNo
    44,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo sc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    33,             // lineNo
    44,             // colNo
    "Q",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtECInfo fb_emlrtECI{
    -1,             // nDims
    33,             // lineNo
    9,              // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtBCInfo tc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    36,             // lineNo
    147,            // colNo
    "z0",           // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo ub_emlrtDCI{
    36,             // lineNo
    153,            // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo uc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    36,             // lineNo
    153,            // colNo
    "z0",           // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo vc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    36,             // lineNo
    204,            // colNo
    "P",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo vb_emlrtDCI{
    36,             // lineNo
    210,            // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo wc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    36,             // lineNo
    210,            // colNo
    "P",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo xc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    36,             // lineNo
    12,             // colNo
    "Q",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo wb_emlrtDCI{
    36,             // lineNo
    18,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo yc_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    36,             // lineNo
    18,             // colNo
    "Q",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo xb_emlrtDCI{
    36,             // lineNo
    45,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo ad_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    36,             // lineNo
    45,             // colNo
    "Q",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtECInfo gb_emlrtECI{
    -1,             // nDims
    36,             // lineNo
    10,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtBCInfo bd_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    38,             // lineNo
    146,            // colNo
    "z0",           // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo yb_emlrtDCI{
    38,             // lineNo
    152,            // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo cd_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    38,             // lineNo
    152,            // colNo
    "z0",           // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo dd_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    38,             // lineNo
    203,            // colNo
    "P",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo ac_emlrtDCI{
    38,             // lineNo
    209,            // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo ed_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    38,             // lineNo
    209,            // colNo
    "P",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtBCInfo fd_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    38,             // lineNo
    12,             // colNo
    "Q",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo bc_emlrtDCI{
    38,             // lineNo
    18,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo gd_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    38,             // lineNo
    18,             // colNo
    "Q",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo cc_emlrtDCI{
    38,             // lineNo
    45,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo hd_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    38,             // lineNo
    45,             // colNo
    "Q",            // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtECInfo hb_emlrtECI{
    -1,             // nDims
    38,             // lineNo
    10,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtBCInfo id_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    33,             // lineNo
    71,             // colNo
    "Q_inv",        // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo dc_emlrtDCI{
    33,             // lineNo
    77,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo jd_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    33,             // lineNo
    77,             // colNo
    "Q_inv",        // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo ec_emlrtDCI{
    33,             // lineNo
    104,            // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo kd_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    33,             // lineNo
    104,            // colNo
    "Q_inv",        // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtECInfo ib_emlrtECI{
    -1,             // nDims
    33,             // lineNo
    65,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtBCInfo ld_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    36,             // lineNo
    72,             // colNo
    "Q_inv",        // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo fc_emlrtDCI{
    36,             // lineNo
    78,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo md_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    36,             // lineNo
    78,             // colNo
    "Q_inv",        // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo gc_emlrtDCI{
    36,             // lineNo
    105,            // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo nd_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    36,             // lineNo
    105,            // colNo
    "Q_inv",        // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtECInfo jb_emlrtECI{
    -1,             // nDims
    36,             // lineNo
    66,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtBCInfo od_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    38,             // lineNo
    72,             // colNo
    "Q_inv",        // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo hc_emlrtDCI{
    38,             // lineNo
    78,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo pd_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    38,             // lineNo
    78,             // colNo
    "Q_inv",        // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo ic_emlrtDCI{
    38,             // lineNo
    105,            // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtBCInfo qd_emlrtBCI{
    -1,             // iFirst
    -1,             // iLast
    38,             // lineNo
    105,            // colNo
    "Q_inv",        // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtECInfo kb_emlrtECI{
    -1,             // nDims
    38,             // lineNo
    66,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtBCInfo rd_emlrtBCI{
    1,              // iFirst
    11,             // iLast
    28,             // lineNo
    22,             // colNo
    "proj_index",   // aName
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    0                                             // checkKind
};

static emlrtDCInfo jc_emlrtDCI{
    28,             // lineNo
    22,             // colNo
    "jacob_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", // pName
    1                                             // checkKind
};

static emlrtECInfo lb_emlrtECI{
    1,               // nDims
    46,              // lineNo
    29,              // colNo
    "dev_jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo mb_emlrtECI{
    1,               // nDims
    46,              // lineNo
    36,              // colNo
    "dev_jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo nb_emlrtECI{
    1,               // nDims
    46,              // lineNo
    28,              // colNo
    "dev_jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo ob_emlrtECI{
    1,               // nDims
    48,              // lineNo
    47,              // colNo
    "dev_jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo pb_emlrtECI{
    1,               // nDims
    48,              // lineNo
    36,              // colNo
    "dev_jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo qb_emlrtECI{
    1,               // nDims
    49,              // lineNo
    38,              // colNo
    "dev_jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

static emlrtECInfo rb_emlrtECI{
    1,               // nDims
    49,              // lineNo
    27,              // colNo
    "dev_jacob_box", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

// Function Declarations
static int32_T binary_expand_op_16(real_T in1_data[], const real_T in2_data[],
                                   const int32_T &in2_size,
                                   const real_T in3_data[],
                                   const int32_T &in3_size);

static int32_T binary_expand_op_17(real_T in1_data[], const real_T in2_data[],
                                   const int32_T &in2_size,
                                   const real_T in3_data[],
                                   const int32_T &in3_size);

static void dev_jacob_box(const emlrtStack &sp, const real_T z_data[],
                          int32_T z_size, const real_T l_data[], int32_T l_size,
                          const real_T u_data[], int32_T u_size,
                          const real_T P_data[], int32_T P_size, real_T alpha,
                          real_T Q_data[], int32_T Q_size[2],
                          real_T Q_inv_data[], int32_T Q_inv_size[2]);

static int32_T ge(boolean_T in1_data[], const real_T in2_data[],
                  const int32_T &in2_size, const real_T in3_data[],
                  const int32_T &in3_size);

static void jacob_D_unit(const emlrtStack &sp, const real_T z0_data[],
                         int32_T z0_size, const real_T proj_index[22],
                         const real_T proj_coefficients[22],
                         const real_T P_data[], int32_T P_size, real_T alpha,
                         real_T Q_data[], int32_T Q_size[2],
                         real_T Q_inv_data[], int32_T Q_inv_size[2]);

static int32_T le(boolean_T in1_data[], const real_T in2_data[],
                  const int32_T &in2_size, const real_T in3_data[],
                  const int32_T &in3_size);

// Function Definitions
static int32_T binary_expand_op_16(real_T in1_data[], const real_T in2_data[],
                                   const int32_T &in2_size,
                                   const real_T in3_data[],
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
    in1_data[i] = (1.0 - in2_data[i * stride_0_0]) + in3_data[i * stride_1_0];
  }
  return in1_size;
}

static int32_T binary_expand_op_17(real_T in1_data[], const real_T in2_data[],
                                   const int32_T &in2_size,
                                   const real_T in3_data[],
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
    in1_data[i] = in2_data[i * stride_0_0] * in3_data[i * stride_1_0];
  }
  return in1_size;
}

static void dev_jacob_box(const emlrtStack &sp, const real_T z_data[],
                          int32_T z_size, const real_T l_data[], int32_T l_size,
                          const real_T u_data[], int32_T u_size,
                          const real_T P_data[], int32_T P_size, real_T alpha,
                          real_T Q_data[], int32_T Q_size[2],
                          real_T Q_inv_data[], int32_T Q_inv_size[2])
{
  __m128d r;
  __m128d r1;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  real_T y_data[616];
  real_T b_y_data[11];
  real_T lambda_between_data[11];
  real_T lambda_data[11];
  real_T lambda_inv_data[11];
  int32_T b_tmp_size;
  int32_T lambda_inv_size;
  int32_T scalarLB_tmp_tmp;
  int32_T tmp_size;
  int32_T vectorUB;
  int32_T vectorUB_tmp;
  int32_T y_size;
  boolean_T b_tmp_data[11];
  boolean_T tmp_data[11];
  st.prev = &sp;
  st.tls = sp.tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if ((z_size != l_size) && ((z_size != 1) && (l_size != 1))) {
    emlrtDimSizeImpxCheckR2021b(z_size, l_size, &lb_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if ((z_size != u_size) && ((z_size != 1) && (u_size != 1))) {
    emlrtDimSizeImpxCheckR2021b(z_size, u_size, &mb_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if (z_size == l_size) {
    tmp_size = z_size;
    for (int32_T i{0}; i < z_size; i++) {
      tmp_data[i] = (z_data[i] <= l_data[i]);
    }
  } else {
    tmp_size = le(tmp_data, z_data, z_size, l_data, l_size);
  }
  if (z_size == u_size) {
    b_tmp_size = z_size;
    for (int32_T i{0}; i < z_size; i++) {
      b_tmp_data[i] = (z_data[i] >= u_data[i]);
    }
  } else {
    b_tmp_size = ge(b_tmp_data, z_data, z_size, u_data, u_size);
  }
  if ((tmp_size != b_tmp_size) && ((tmp_size != 1) && (b_tmp_size != 1))) {
    emlrtDimSizeImpxCheckR2021b(tmp_size, b_tmp_size, &nb_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  // %%Jacobian of box should be computed after projection!.
  if (tmp_size == b_tmp_size) {
    for (int32_T i{0}; i < tmp_size; i++) {
      lambda_data[i] = ((!tmp_data[i]) && (!b_tmp_data[i]));
    }
  } else {
    tmp_size = binary_expand_op_9(lambda_data, tmp_data, tmp_size, b_tmp_data,
                                  b_tmp_size);
  }
  scalarLB_tmp_tmp = (tmp_size / 2) << 1;
  vectorUB_tmp = scalarLB_tmp_tmp - 2;
  for (int32_T i{0}; i <= vectorUB_tmp; i += 2) {
    r = _mm_loadu_pd(&lambda_data[i]);
    _mm_storeu_pd(&y_data[i], _mm_mul_pd(_mm_set1_pd(alpha), r));
  }
  for (int32_T i{scalarLB_tmp_tmp}; i < tmp_size; i++) {
    y_data[i] = alpha * lambda_data[i];
  }
  if ((tmp_size != P_size) && ((tmp_size != 1) && (P_size != 1))) {
    emlrtDimSizeImpxCheckR2021b(tmp_size, P_size, &ob_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if (tmp_size == P_size) {
    lambda_inv_size = tmp_size;
    b_tmp_size = (tmp_size / 2) << 1;
    vectorUB = b_tmp_size - 2;
    for (int32_T i{0}; i <= vectorUB; i += 2) {
      r = _mm_loadu_pd(&y_data[i]);
      _mm_storeu_pd(&lambda_inv_data[i],
                    _mm_mul_pd(r, _mm_loadu_pd(&P_data[i])));
    }
    for (int32_T i{b_tmp_size}; i < tmp_size; i++) {
      lambda_inv_data[i] = y_data[i] * P_data[i];
    }
  } else {
    lambda_inv_size =
        binary_expand_op_17(lambda_inv_data, y_data, tmp_size, P_data, P_size);
  }
  if ((tmp_size != lambda_inv_size) &&
      ((tmp_size != 1) && (lambda_inv_size != 1))) {
    emlrtDimSizeImpxCheckR2021b(tmp_size, lambda_inv_size, &pb_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  st.site = &tc_emlrtRSI;
  if (tmp_size == lambda_inv_size) {
    y_size = tmp_size;
    for (int32_T i{0}; i <= vectorUB_tmp; i += 2) {
      r = _mm_loadu_pd(&lambda_data[i]);
      r1 = _mm_loadu_pd(&lambda_inv_data[i]);
      _mm_storeu_pd(&b_y_data[i],
                    _mm_add_pd(_mm_sub_pd(_mm_set1_pd(1.0), r), r1));
    }
    for (int32_T i{scalarLB_tmp_tmp}; i < tmp_size; i++) {
      b_y_data[i] = (1.0 - lambda_data[i]) + lambda_inv_data[i];
    }
  } else {
    y_size = binary_expand_op_16(b_y_data, lambda_data, tmp_size,
                                 lambda_inv_data, lambda_inv_size);
  }
  b_st.site = &vc_emlrtRSI;
  c_st.site = &wc_emlrtRSI;
  if ((tmp_size != 1) && (y_size != 1) && (tmp_size != y_size)) {
    emlrtErrorWithMessageIdR2018a(&c_st, &u_emlrtRTEI,
                                  "MATLAB:sizeDimensionsMustMatch",
                                  "MATLAB:sizeDimensionsMustMatch", 0);
  }
  if (tmp_size == y_size) {
    y_size = tmp_size;
    vectorUB = scalarLB_tmp_tmp - 2;
    for (int32_T i{0}; i <= vectorUB; i += 2) {
      r = _mm_loadu_pd(&lambda_data[i]);
      r1 = _mm_loadu_pd(&b_y_data[i]);
      _mm_storeu_pd(&b_y_data[i], _mm_div_pd(r, r1));
    }
    for (int32_T i{scalarLB_tmp_tmp}; i < tmp_size; i++) {
      b_y_data[i] = lambda_data[i] / b_y_data[i];
    }
  } else {
    rdivide(b_y_data, y_size, lambda_data, tmp_size);
  }
  if (y_size != 0) {
    for (b_tmp_size = 0; b_tmp_size < y_size; b_tmp_size++) {
      lambda_between_data[b_tmp_size] = muDoubleScalarAbs(b_y_data[b_tmp_size]);
    }
  }
  st.site = &tc_emlrtRSI;
  coder::b_sqrt(st, lambda_between_data, y_size);
  if ((tmp_size != P_size) && ((tmp_size != 1) && (P_size != 1))) {
    emlrtDimSizeImpxCheckR2021b(tmp_size, P_size, &qb_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if ((tmp_size != lambda_inv_size) &&
      ((tmp_size != 1) && (lambda_inv_size != 1))) {
    emlrtDimSizeImpxCheckR2021b(tmp_size, lambda_inv_size, &rb_emlrtECI,
                                (emlrtConstCTX)&sp);
  }
  if (tmp_size == lambda_inv_size) {
    vectorUB = scalarLB_tmp_tmp - 2;
    for (int32_T i{0}; i <= vectorUB; i += 2) {
      __m128d r2;
      r = _mm_loadu_pd(&lambda_data[i]);
      r1 = _mm_loadu_pd(&lambda_inv_data[i]);
      r2 = _mm_set1_pd(1.0);
      _mm_storeu_pd(&lambda_data[i],
                    _mm_div_pd(r2, _mm_add_pd(_mm_sub_pd(r2, r), r1)));
    }
    for (int32_T i{scalarLB_tmp_tmp}; i < tmp_size; i++) {
      lambda_data[i] = 1.0 / ((1.0 - lambda_data[i]) + lambda_inv_data[i]);
    }
  } else {
    binary_expand_op_15(lambda_data, tmp_size, lambda_inv_data,
                        lambda_inv_size);
  }
  lambda_inv_size = tmp_size;
  if (tmp_size != 0) {
    for (b_tmp_size = 0; b_tmp_size < tmp_size; b_tmp_size++) {
      lambda_inv_data[b_tmp_size] = muDoubleScalarAbs(lambda_data[b_tmp_size]);
    }
  }
  st.site = &uc_emlrtRSI;
  coder::b_sqrt(st, lambda_inv_data, lambda_inv_size);
  Q_size[1] = y_size;
  Q_size[0] = y_size;
  b_tmp_size = y_size * y_size;
  if (b_tmp_size - 1 >= 0) {
    std::memset(&Q_data[0], 0,
                static_cast<uint32_T>(b_tmp_size) * sizeof(real_T));
  }
  for (b_tmp_size = 0; b_tmp_size < y_size; b_tmp_size++) {
    Q_data[b_tmp_size + y_size * b_tmp_size] = lambda_between_data[b_tmp_size];
  }
  Q_inv_size[1] = lambda_inv_size;
  Q_inv_size[0] = lambda_inv_size;
  b_tmp_size = lambda_inv_size * lambda_inv_size;
  if (b_tmp_size - 1 >= 0) {
    std::memset(&Q_inv_data[0], 0,
                static_cast<uint32_T>(b_tmp_size) * sizeof(real_T));
  }
  for (b_tmp_size = 0; b_tmp_size < lambda_inv_size; b_tmp_size++) {
    Q_inv_data[b_tmp_size + lambda_inv_size * b_tmp_size] =
        lambda_inv_data[b_tmp_size];
  }
}

static int32_T ge(boolean_T in1_data[], const real_T in2_data[],
                  const int32_T &in2_size, const real_T in3_data[],
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
    in1_data[i] = (in2_data[i * stride_0_0] >= in3_data[i * stride_1_0]);
  }
  return in1_size;
}

static void jacob_D_unit(const emlrtStack &sp, const real_T z0_data[],
                         int32_T z0_size, const real_T proj_index[22],
                         const real_T proj_coefficients[22],
                         const real_T P_data[], int32_T P_size, real_T alpha,
                         real_T Q_data[], int32_T Q_size[2],
                         real_T Q_inv_data[], int32_T Q_inv_size[2])
{
  emlrtStack st;
  real_T b_tmp_data[121];
  real_T c_tmp_data[121];
  real_T tmp_data[121];
  real_T temp;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T loop_ub_tmp;
  boolean_T exitg1;
  st.prev = &sp;
  st.tls = sp.tls;
  Q_size[1] = z0_size;
  Q_size[0] = z0_size;
  loop_ub_tmp = z0_size * z0_size;
  Q_inv_size[1] = z0_size;
  Q_inv_size[0] = z0_size;
  if (loop_ub_tmp - 1 >= 0) {
    std::memset(&Q_data[0], 0,
                static_cast<uint32_T>(loop_ub_tmp) * sizeof(real_T));
    std::memset(&Q_inv_data[0], 0,
                static_cast<uint32_T>(loop_ub_tmp) * sizeof(real_T));
  }
  temp = 1.0;
  exitg1 = false;
  while ((!exitg1) && (temp <= z0_size)) {
    real_T d;
    if (temp != static_cast<int32_T>(muDoubleScalarFloor(temp))) {
      emlrtIntegerCheckR2012b(temp, &jc_emlrtDCI, (emlrtConstCTX)&sp);
    }
    if ((static_cast<int32_T>(temp) < 1) || (static_cast<int32_T>(temp) > 11)) {
      emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, 11,
                                    &rd_emlrtBCI, (emlrtConstCTX)&sp);
    }
    d = proj_index[static_cast<int32_T>(temp) - 1];
    if (d == rtInf) {
      exitg1 = true;
    } else {
      real_T d1;
      d1 = proj_index[static_cast<int32_T>(temp) + 10];
      if (d1 == 1.0) {
        real_T b_P_data[11];
        real_T b_proj_coefficients_data[11];
        real_T b_z0_data[11];
        real_T proj_coefficients_data[11];
        int32_T b_tmp_size[2];
        int32_T tmp_size[2];
        int32_T b_loop_ub;
        int32_T i;
        int32_T i1;
        int32_T i2;
        int32_T i3;
        int32_T i4;
        int32_T i5;
        int32_T i6;
        int32_T loop_ub;
        int32_T tmp_size_idx_1;
        int8_T unnamed_idx_0;
        int8_T unnamed_idx_1;
        if (temp > d) {
          i = 0;
          i1 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          z0_size, &lc_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &ob_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &mc_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d);
        }
        iv[0] = 1;
        loop_ub = i1 - i;
        iv[1] = loop_ub;
        st.site = &pc_emlrtRSI;
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
            emlrtIntegerCheckR2012b(d, &pb_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (d > 11.0)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 11,
                                          &nc_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i3 = static_cast<int32_T>(d);
          i4 = static_cast<int32_T>(temp) - 1;
          if (static_cast<int32_T>(d) != i2) {
            emlrtIntegerCheckR2012b(d, &qb_emlrtDCI, (emlrtConstCTX)&sp);
          }
          i5 = static_cast<int32_T>(d);
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > P_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, P_size,
                                          &oc_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i6 = static_cast<int32_T>(temp) - 1;
          if (static_cast<int32_T>(d) != i2) {
            emlrtIntegerCheckR2012b(d, &rb_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (static_cast<int32_T>(d) > P_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, P_size,
                                          &pc_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i2 = static_cast<int32_T>(d);
        }
        iv[0] = 1;
        b_loop_ub = i2 - i6;
        iv[1] = b_loop_ub;
        st.site = &qc_emlrtRSI;
        coder::internal::indexShapeCheck(st, P_size, iv);
        tmp_size_idx_1 = i3 - i1;
        loop_ub_tmp = i5 - i4;
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_z0_data[i2] = z0_data[i + i2];
        }
        for (i = 0; i < tmp_size_idx_1; i++) {
          proj_coefficients_data[i] = proj_coefficients[(i1 + i) + 11];
        }
        for (i = 0; i < loop_ub_tmp; i++) {
          b_proj_coefficients_data[i] = proj_coefficients[i4 + i];
        }
        for (i = 0; i < b_loop_ub; i++) {
          b_P_data[i] = P_data[i6 + i];
        }
        st.site = &pc_emlrtRSI;
        dev_jacob_box(st, b_z0_data, loop_ub, proj_coefficients_data,
                      tmp_size_idx_1, b_proj_coefficients_data, loop_ub_tmp,
                      b_P_data, b_loop_ub, alpha, tmp_data, tmp_size,
                      b_tmp_data, b_tmp_size);
        if (temp > d) {
          i = 0;
          i2 = 0;
          i3 = 0;
          i1 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          z0_size, &qc_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          i1 = static_cast<int32_T>(muDoubleScalarFloor(d));
          if (d != i1) {
            emlrtIntegerCheckR2012b(d, &sb_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &rc_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i2 = static_cast<int32_T>(d);
          i3 = static_cast<int32_T>(temp) - 1;
          if (static_cast<int32_T>(d) != i1) {
            emlrtIntegerCheckR2012b(d, &tb_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &sc_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d);
        }
        i2 -= i;
        iv[0] = i2;
        i1 -= i3;
        iv[1] = i1;
        iv1[0] = tmp_size[0];
        iv1[1] = tmp_size[1];
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &fb_emlrtECI,
                                      (emlrtCTX)&sp);
        unnamed_idx_0 = static_cast<int8_T>(i2);
        unnamed_idx_1 = static_cast<int8_T>(i1);
        if ((tmp_size[1] == static_cast<int8_T>(i1)) &&
            (static_cast<int8_T>(i2) == tmp_size[0])) {
          tmp_size_idx_1 = static_cast<int8_T>(i1);
          b_loop_ub = static_cast<int8_T>(i2);
          loop_ub_tmp = static_cast<int8_T>(i1) * static_cast<int8_T>(i2);
          if (loop_ub_tmp - 1 >= 0) {
            std::copy(&tmp_data[0], &tmp_data[loop_ub_tmp], &c_tmp_data[0]);
          }
        } else {
          i4 = 0;
          i5 = 0;
          i6 = 0;
          loop_ub_tmp = 0;
          tmp_size_idx_1 = static_cast<int8_T>(i1);
          b_loop_ub = static_cast<int8_T>(i2);
          for (loop_ub = 0; loop_ub < unnamed_idx_0 * unnamed_idx_1;
               loop_ub++) {
            c_tmp_data[i5 + static_cast<int8_T>(i1) * i4] =
                tmp_data[loop_ub_tmp + tmp_size[1] * i6];
            i4++;
            i6++;
            if (i4 > static_cast<int8_T>(i2) - 1) {
              i4 = 0;
              i5++;
            }
            if (i6 > tmp_size[0] - 1) {
              i6 = 0;
              loop_ub_tmp++;
            }
          }
        }
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          for (i2 = 0; i2 < tmp_size_idx_1; i2++) {
            Q_data[(i3 + i2) + z0_size * (i + i1)] =
                c_tmp_data[i2 + tmp_size_idx_1 * i1];
          }
        }
        if (temp > d) {
          i = 0;
          i2 = 0;
          i3 = 0;
          i1 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          z0_size, &id_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          i1 = static_cast<int32_T>(muDoubleScalarFloor(d));
          if (d != i1) {
            emlrtIntegerCheckR2012b(d, &dc_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &jd_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i2 = static_cast<int32_T>(d);
          i3 = static_cast<int32_T>(temp) - 1;
          if (static_cast<int32_T>(d) != i1) {
            emlrtIntegerCheckR2012b(d, &ec_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &kd_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d);
        }
        i2 -= i;
        iv[0] = i2;
        i1 -= i3;
        iv[1] = i1;
        iv1[0] = b_tmp_size[0];
        iv1[1] = b_tmp_size[1];
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &ib_emlrtECI,
                                      (emlrtCTX)&sp);
        unnamed_idx_0 = static_cast<int8_T>(i2);
        unnamed_idx_1 = static_cast<int8_T>(i1);
        if ((b_tmp_size[1] == static_cast<int8_T>(i1)) &&
            (static_cast<int8_T>(i2) == b_tmp_size[0])) {
          tmp_size[1] = static_cast<int8_T>(i1);
          tmp_size[0] = static_cast<int8_T>(i2);
          loop_ub_tmp = static_cast<int8_T>(i1) * static_cast<int8_T>(i2);
          if (loop_ub_tmp - 1 >= 0) {
            std::copy(&b_tmp_data[0], &b_tmp_data[loop_ub_tmp], &tmp_data[0]);
          }
        } else {
          i4 = 0;
          i5 = 0;
          i6 = 0;
          loop_ub_tmp = 0;
          tmp_size[1] = static_cast<int8_T>(i1);
          tmp_size[0] = static_cast<int8_T>(i2);
          for (loop_ub = 0; loop_ub < unnamed_idx_0 * unnamed_idx_1;
               loop_ub++) {
            tmp_data[i5 + static_cast<int8_T>(i1) * i4] =
                b_tmp_data[loop_ub_tmp + b_tmp_size[1] * i6];
            i4++;
            i6++;
            if (i4 > static_cast<int8_T>(i2) - 1) {
              i4 = 0;
              i5++;
            }
            if (i6 > b_tmp_size[0] - 1) {
              i6 = 0;
              loop_ub_tmp++;
            }
          }
        }
        loop_ub = tmp_size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_loop_ub = tmp_size[1];
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            Q_inv_data[(i3 + i2) + z0_size * (i + i1)] =
                tmp_data[i2 + tmp_size[1] * i1];
          }
        }
      } else if (d1 == 2.0) {
        real_T b_P_data[11];
        real_T b_z0_data[11];
        int32_T b_tmp_size[2];
        int32_T tmp_size[2];
        int32_T b_loop_ub;
        int32_T i;
        int32_T i1;
        int32_T i2;
        int32_T i3;
        int32_T i4;
        int32_T i5;
        int32_T i6;
        int32_T loop_ub;
        int32_T tmp_size_idx_1;
        int8_T unnamed_idx_0;
        int8_T unnamed_idx_1;
        if (temp > d) {
          i = 0;
          i1 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          z0_size, &tc_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &ub_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &uc_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d);
        }
        iv[0] = 1;
        loop_ub = i1 - i;
        iv[1] = loop_ub;
        st.site = &rc_emlrtRSI;
        coder::internal::indexShapeCheck(st, z0_size, iv);
        if (temp > d) {
          i1 = 0;
          i2 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > P_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, P_size,
                                          &vc_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(temp) - 1;
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &vb_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > P_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, P_size,
                                          &wc_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i2 = static_cast<int32_T>(d);
        }
        iv[0] = 1;
        b_loop_ub = i2 - i1;
        iv[1] = b_loop_ub;
        st.site = &rc_emlrtRSI;
        coder::internal::indexShapeCheck(st, P_size, iv);
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_z0_data[i2] = z0_data[i + i2];
        }
        for (i = 0; i < b_loop_ub; i++) {
          b_P_data[i] = P_data[i1 + i];
        }
        st.site = &rc_emlrtRSI;
        dev_jacob_ball(st, b_z0_data, loop_ub,
                       proj_coefficients[static_cast<int32_T>(temp) - 1],
                       b_P_data, b_loop_ub, alpha, tmp_data, tmp_size,
                       b_tmp_data, b_tmp_size);
        if (temp > d) {
          i = 0;
          i2 = 0;
          i3 = 0;
          i1 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          z0_size, &xc_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          i1 = static_cast<int32_T>(muDoubleScalarFloor(d));
          if (d != i1) {
            emlrtIntegerCheckR2012b(d, &wb_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &yc_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i2 = static_cast<int32_T>(d);
          i3 = static_cast<int32_T>(temp) - 1;
          if (static_cast<int32_T>(d) != i1) {
            emlrtIntegerCheckR2012b(d, &xb_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &ad_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d);
        }
        i2 -= i;
        iv[0] = i2;
        i1 -= i3;
        iv[1] = i1;
        iv1[0] = tmp_size[0];
        iv1[1] = tmp_size[1];
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &gb_emlrtECI,
                                      (emlrtCTX)&sp);
        unnamed_idx_0 = static_cast<int8_T>(i2);
        unnamed_idx_1 = static_cast<int8_T>(i1);
        if ((tmp_size[1] == static_cast<int8_T>(i1)) &&
            (static_cast<int8_T>(i2) == tmp_size[0])) {
          tmp_size_idx_1 = static_cast<int8_T>(i1);
          b_loop_ub = static_cast<int8_T>(i2);
          loop_ub_tmp = static_cast<int8_T>(i1) * static_cast<int8_T>(i2);
          if (loop_ub_tmp - 1 >= 0) {
            std::copy(&tmp_data[0], &tmp_data[loop_ub_tmp], &c_tmp_data[0]);
          }
        } else {
          i4 = 0;
          i5 = 0;
          i6 = 0;
          loop_ub_tmp = 0;
          tmp_size_idx_1 = static_cast<int8_T>(i1);
          b_loop_ub = static_cast<int8_T>(i2);
          for (loop_ub = 0; loop_ub < unnamed_idx_0 * unnamed_idx_1;
               loop_ub++) {
            c_tmp_data[i5 + static_cast<int8_T>(i1) * i4] =
                tmp_data[loop_ub_tmp + tmp_size[1] * i6];
            i4++;
            i6++;
            if (i4 > static_cast<int8_T>(i2) - 1) {
              i4 = 0;
              i5++;
            }
            if (i6 > tmp_size[0] - 1) {
              i6 = 0;
              loop_ub_tmp++;
            }
          }
        }
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          for (i2 = 0; i2 < tmp_size_idx_1; i2++) {
            Q_data[(i3 + i2) + z0_size * (i + i1)] =
                c_tmp_data[i2 + tmp_size_idx_1 * i1];
          }
        }
        if (temp > d) {
          i = 0;
          i2 = 0;
          i3 = 0;
          i1 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          z0_size, &ld_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          i1 = static_cast<int32_T>(muDoubleScalarFloor(d));
          if (d != i1) {
            emlrtIntegerCheckR2012b(d, &fc_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &md_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i2 = static_cast<int32_T>(d);
          i3 = static_cast<int32_T>(temp) - 1;
          if (static_cast<int32_T>(d) != i1) {
            emlrtIntegerCheckR2012b(d, &gc_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &nd_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d);
        }
        i2 -= i;
        iv[0] = i2;
        i1 -= i3;
        iv[1] = i1;
        iv1[0] = b_tmp_size[0];
        iv1[1] = b_tmp_size[1];
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &jb_emlrtECI,
                                      (emlrtCTX)&sp);
        unnamed_idx_0 = static_cast<int8_T>(i2);
        unnamed_idx_1 = static_cast<int8_T>(i1);
        if ((b_tmp_size[1] == static_cast<int8_T>(i1)) &&
            (static_cast<int8_T>(i2) == b_tmp_size[0])) {
          tmp_size[1] = static_cast<int8_T>(i1);
          tmp_size[0] = static_cast<int8_T>(i2);
          loop_ub_tmp = static_cast<int8_T>(i1) * static_cast<int8_T>(i2);
          if (loop_ub_tmp - 1 >= 0) {
            std::copy(&b_tmp_data[0], &b_tmp_data[loop_ub_tmp], &tmp_data[0]);
          }
        } else {
          i4 = 0;
          i5 = 0;
          i6 = 0;
          loop_ub_tmp = 0;
          tmp_size[1] = static_cast<int8_T>(i1);
          tmp_size[0] = static_cast<int8_T>(i2);
          for (loop_ub = 0; loop_ub < unnamed_idx_0 * unnamed_idx_1;
               loop_ub++) {
            tmp_data[i5 + static_cast<int8_T>(i1) * i4] =
                b_tmp_data[loop_ub_tmp + b_tmp_size[1] * i6];
            i4++;
            i6++;
            if (i4 > static_cast<int8_T>(i2) - 1) {
              i4 = 0;
              i5++;
            }
            if (i6 > b_tmp_size[0] - 1) {
              i6 = 0;
              loop_ub_tmp++;
            }
          }
        }
        loop_ub = tmp_size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_loop_ub = tmp_size[1];
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            Q_inv_data[(i3 + i2) + z0_size * (i + i1)] =
                tmp_data[i2 + tmp_size[1] * i1];
          }
        }
      } else if (d1 == 3.0) {
        real_T b_P_data[11];
        real_T b_z0_data[11];
        int32_T b_tmp_size[2];
        int32_T tmp_size[2];
        int32_T b_loop_ub;
        int32_T i;
        int32_T i1;
        int32_T i2;
        int32_T i3;
        int32_T i4;
        int32_T i5;
        int32_T i6;
        int32_T loop_ub;
        int32_T tmp_size_idx_1;
        int8_T unnamed_idx_0;
        int8_T unnamed_idx_1;
        if (temp > d) {
          i = 0;
          i1 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          z0_size, &bd_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &yb_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &cd_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d);
        }
        iv[0] = 1;
        loop_ub = i1 - i;
        iv[1] = loop_ub;
        st.site = &sc_emlrtRSI;
        coder::internal::indexShapeCheck(st, z0_size, iv);
        if (temp > d) {
          i1 = 0;
          i2 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > P_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1, P_size,
                                          &dd_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(temp) - 1;
          if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
            emlrtIntegerCheckR2012b(d, &ac_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((static_cast<int32_T>(d) < 1) ||
              (static_cast<int32_T>(d) > P_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, P_size,
                                          &ed_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i2 = static_cast<int32_T>(d);
        }
        iv[0] = 1;
        b_loop_ub = i2 - i1;
        iv[1] = b_loop_ub;
        st.site = &sc_emlrtRSI;
        coder::internal::indexShapeCheck(st, P_size, iv);
        for (i2 = 0; i2 < loop_ub; i2++) {
          b_z0_data[i2] = z0_data[i + i2];
        }
        for (i = 0; i < b_loop_ub; i++) {
          b_P_data[i] = P_data[i1 + i];
        }
        st.site = &sc_emlrtRSI;
        dev_jacob_soc(st, b_z0_data, loop_ub,
                      proj_coefficients[static_cast<int32_T>(temp) - 1],
                      b_P_data, b_loop_ub, alpha, tmp_data, tmp_size,
                      b_tmp_data, b_tmp_size);
        if (temp > d) {
          i = 0;
          i2 = 0;
          i3 = 0;
          i1 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          z0_size, &fd_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          i1 = static_cast<int32_T>(muDoubleScalarFloor(d));
          if (d != i1) {
            emlrtIntegerCheckR2012b(d, &bc_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &gd_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i2 = static_cast<int32_T>(d);
          i3 = static_cast<int32_T>(temp) - 1;
          if (static_cast<int32_T>(d) != i1) {
            emlrtIntegerCheckR2012b(d, &cc_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &hd_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d);
        }
        i2 -= i;
        iv[0] = i2;
        i1 -= i3;
        iv[1] = i1;
        iv1[0] = tmp_size[0];
        iv1[1] = tmp_size[1];
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &hb_emlrtECI,
                                      (emlrtCTX)&sp);
        unnamed_idx_0 = static_cast<int8_T>(i2);
        unnamed_idx_1 = static_cast<int8_T>(i1);
        if ((tmp_size[1] == static_cast<int8_T>(i1)) &&
            (static_cast<int8_T>(i2) == tmp_size[0])) {
          tmp_size_idx_1 = static_cast<int8_T>(i1);
          b_loop_ub = static_cast<int8_T>(i2);
          loop_ub = static_cast<int8_T>(i1) * static_cast<int8_T>(i2);
          if (loop_ub - 1 >= 0) {
            std::copy(&tmp_data[0], &tmp_data[loop_ub], &c_tmp_data[0]);
          }
        } else {
          i4 = 0;
          i5 = 0;
          i6 = 0;
          loop_ub_tmp = 0;
          tmp_size_idx_1 = static_cast<int8_T>(i1);
          b_loop_ub = static_cast<int8_T>(i2);
          for (loop_ub = 0; loop_ub < unnamed_idx_0 * unnamed_idx_1;
               loop_ub++) {
            c_tmp_data[i5 + static_cast<int8_T>(i1) * i4] =
                tmp_data[loop_ub_tmp + tmp_size[1] * i6];
            i4++;
            i6++;
            if (i4 > static_cast<int8_T>(i2) - 1) {
              i4 = 0;
              i5++;
            }
            if (i6 > tmp_size[0] - 1) {
              i6 = 0;
              loop_ub_tmp++;
            }
          }
        }
        for (i1 = 0; i1 < b_loop_ub; i1++) {
          for (i2 = 0; i2 < tmp_size_idx_1; i2++) {
            Q_data[(i3 + i2) + z0_size * (i + i1)] =
                c_tmp_data[i2 + tmp_size_idx_1 * i1];
          }
        }
        if (temp > d) {
          i = 0;
          i2 = 0;
          i3 = 0;
          i1 = 0;
        } else {
          if ((static_cast<int32_T>(temp) < 1) ||
              (static_cast<int32_T>(temp) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(temp), 1,
                                          z0_size, &od_emlrtBCI,
                                          (emlrtConstCTX)&sp);
          }
          i = static_cast<int32_T>(temp) - 1;
          i1 = static_cast<int32_T>(muDoubleScalarFloor(d));
          if (d != i1) {
            emlrtIntegerCheckR2012b(d, &hc_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &pd_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i2 = static_cast<int32_T>(d);
          i3 = static_cast<int32_T>(temp) - 1;
          if (static_cast<int32_T>(d) != i1) {
            emlrtIntegerCheckR2012b(d, &ic_emlrtDCI, (emlrtConstCTX)&sp);
          }
          if ((d < 1.0) || (static_cast<int32_T>(d) > z0_size)) {
            emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, z0_size,
                                          &qd_emlrtBCI, (emlrtConstCTX)&sp);
          }
          i1 = static_cast<int32_T>(d);
        }
        i2 -= i;
        iv[0] = i2;
        i1 -= i3;
        iv[1] = i1;
        iv1[0] = b_tmp_size[0];
        iv1[1] = b_tmp_size[1];
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &iv1[0], 2, &kb_emlrtECI,
                                      (emlrtCTX)&sp);
        unnamed_idx_0 = static_cast<int8_T>(i2);
        unnamed_idx_1 = static_cast<int8_T>(i1);
        if ((b_tmp_size[1] == static_cast<int8_T>(i1)) &&
            (static_cast<int8_T>(i2) == b_tmp_size[0])) {
          tmp_size[1] = static_cast<int8_T>(i1);
          tmp_size[0] = static_cast<int8_T>(i2);
          loop_ub = static_cast<int8_T>(i1) * static_cast<int8_T>(i2);
          if (loop_ub - 1 >= 0) {
            std::copy(&b_tmp_data[0], &b_tmp_data[loop_ub], &tmp_data[0]);
          }
        } else {
          i4 = 0;
          i5 = 0;
          i6 = 0;
          loop_ub_tmp = 0;
          tmp_size[1] = static_cast<int8_T>(i1);
          tmp_size[0] = static_cast<int8_T>(i2);
          for (loop_ub = 0; loop_ub < unnamed_idx_0 * unnamed_idx_1;
               loop_ub++) {
            tmp_data[i5 + static_cast<int8_T>(i1) * i4] =
                b_tmp_data[loop_ub_tmp + b_tmp_size[1] * i6];
            i4++;
            i6++;
            if (i4 > static_cast<int8_T>(i2) - 1) {
              i4 = 0;
              i5++;
            }
            if (i6 > b_tmp_size[0] - 1) {
              i6 = 0;
              loop_ub_tmp++;
            }
          }
        }
        loop_ub = tmp_size[0];
        for (i1 = 0; i1 < loop_ub; i1++) {
          b_loop_ub = tmp_size[1];
          for (i2 = 0; i2 < b_loop_ub; i2++) {
            Q_inv_data[(i3 + i2) + z0_size * (i + i1)] =
                tmp_data[i2 + tmp_size[1] * i1];
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
}

static int32_T le(boolean_T in1_data[], const real_T in2_data[],
                  const int32_T &in2_size, const real_T in3_data[],
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
    in1_data[i] = (in2_data[i * stride_0_0] <= in3_data[i * stride_1_0]);
  }
  return in1_size;
}

void dev_S_inv_g(const emlrtStack &sp, const real_T z0[326], real_T nx,
                 real_T nu, const real_T proj_index_all[660],
                 const real_T proj_coefficients_all[660], const real_T P[326],
                 real_T alpha, real_T Q_data[], int32_T Q_size[3],
                 real_T Q_inv_data[], int32_T Q_inv_size[3])
{
  emlrtStack st;
  real_T e_tmp_data[121];
  real_T f_tmp_data[121];
  real_T g_tmp_data[121];
  real_T i_tmp_data[121];
  real_T h_tmp_data[49];
  real_T j_tmp_data[49];
  real_T b;
  real_T d;
  int32_T Q[2];
  int32_T iv[2];
  int32_T Q_size_tmp;
  int32_T loop_ub_tmp;
  st.prev = &sp;
  st.tls = sp.tls;
  //  the output is the eigenvalue decomposition of S_inv. P is the diagonal
  //  matrix in the objectfunciton
  b = nx + nu;
  if (!(b >= 0.0)) {
    emlrtNonNegativeCheckR2012b(b, &hb_emlrtDCI, (emlrtConstCTX)&sp);
  }
  d = static_cast<int32_T>(muDoubleScalarFloor(b));
  if (b != d) {
    emlrtIntegerCheckR2012b(b, &gb_emlrtDCI, (emlrtConstCTX)&sp);
  }
  Q_size[2] = 30;
  Q_size_tmp = static_cast<int32_T>(b);
  Q_size[1] = static_cast<int32_T>(b);
  Q_size[0] = static_cast<int32_T>(b);
  if (b != d) {
    emlrtIntegerCheckR2012b(b, &ib_emlrtDCI, (emlrtConstCTX)&sp);
  }
  if (!(b >= 0.0)) {
    emlrtNonNegativeCheckR2012b(b, &jb_emlrtDCI, (emlrtConstCTX)&sp);
  }
  if (b != d) {
    emlrtIntegerCheckR2012b(b, &ib_emlrtDCI, (emlrtConstCTX)&sp);
  }
  loop_ub_tmp = 30 * static_cast<int32_T>(b) * static_cast<int32_T>(b);
  if (loop_ub_tmp - 1 >= 0) {
    std::memset(&Q_data[0], 0,
                static_cast<uint32_T>(loop_ub_tmp) * sizeof(real_T));
  }
  //  1:n-1 are nx+nu**2 but the Nth is nx**2.
  Q_inv_size[2] = 30;
  Q_inv_size[1] = static_cast<int32_T>(b);
  Q_inv_size[0] = static_cast<int32_T>(b);
  if (loop_ub_tmp - 1 >= 0) {
    std::memset(&Q_inv_data[0], 0,
                static_cast<uint32_T>(loop_ub_tmp) * sizeof(real_T));
  }
  for (int32_T i{0}; i < 30; i++) {
    real_T proj_temp_coeff[22];
    real_T proj_temp_index[22];
    int32_T b_i;
    int32_T b_proj_temp_index_tmp;
    int32_T i1;
    int32_T proj_temp_index_tmp;
    for (b_i = 0; b_i < 2; b_i++) {
      for (i1 = 0; i1 < 11; i1++) {
        proj_temp_index_tmp = (i + 30 * i1) + 330 * b_i;
        b_proj_temp_index_tmp = i1 + 11 * b_i;
        proj_temp_index[b_proj_temp_index_tmp] =
            proj_index_all[proj_temp_index_tmp];
        proj_temp_coeff[b_proj_temp_index_tmp] =
            proj_coefficients_all[proj_temp_index_tmp];
      }
    }
    if (i + 1 < 30) {
      real_T b_tmp_data[11];
      real_T d_tmp_data[11];
      real_T i_tmp;
      int32_T b_tmp_size[2];
      int32_T tmp_size[2];
      int32_T tmp_size_idx_0;
      int32_T tmp_size_idx_1;
      uint32_T y_data[11];
      int8_T unnamed_idx_0;
      int8_T unnamed_idx_1;
      if (b < 1.0) {
        proj_temp_index_tmp = 0;
      } else {
        loop_ub_tmp = static_cast<int32_T>(b - 1.0) + 1;
        proj_temp_index_tmp = static_cast<int32_T>(b - 1.0) + 1;
        for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
          y_data[b_i] = static_cast<uint32_T>(b_i) + 1U;
        }
      }
      i_tmp = ((static_cast<real_T>(i) + 1.0) - 1.0) * b;
      for (b_i = 0; b_i < proj_temp_index_tmp; b_i++) {
        d = i_tmp + static_cast<real_T>(y_data[b_i]);
        if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
          emlrtIntegerCheckR2012b(d, &lb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > 326)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 326,
                                        &ic_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_tmp_data[b_i] = z0[static_cast<int32_T>(d) - 1];
      }
      if (b < 1.0) {
        b_proj_temp_index_tmp = 0;
      } else {
        loop_ub_tmp = static_cast<int32_T>(b - 1.0) + 1;
        b_proj_temp_index_tmp = static_cast<int32_T>(b - 1.0) + 1;
        for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
          y_data[b_i] = static_cast<uint32_T>(b_i) + 1U;
        }
      }
      for (b_i = 0; b_i < b_proj_temp_index_tmp; b_i++) {
        d = i_tmp + static_cast<real_T>(y_data[b_i]);
        if (d != static_cast<int32_T>(muDoubleScalarFloor(d))) {
          emlrtIntegerCheckR2012b(d, &nb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(d) < 1) || (static_cast<int32_T>(d) > 326)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(d), 1, 326,
                                        &kc_emlrtBCI, (emlrtConstCTX)&sp);
        }
        d_tmp_data[b_i] = P[static_cast<int32_T>(d) - 1];
      }
      st.site = &nc_emlrtRSI;
      jacob_D_unit(st, b_tmp_data, proj_temp_index_tmp, proj_temp_index,
                   proj_temp_coeff, d_tmp_data, b_proj_temp_index_tmp, alpha,
                   e_tmp_data, tmp_size, f_tmp_data, b_tmp_size);
      tmp_size_idx_0 = static_cast<int32_T>(b);
      Q[0] = static_cast<int32_T>(b);
      tmp_size_idx_1 = static_cast<int32_T>(b);
      Q[1] = static_cast<int32_T>(b);
      iv[0] = tmp_size[0];
      iv[1] = tmp_size[1];
      emlrtSubAssignSizeCheckR2012b(&Q[0], 2, &iv[0], 2, &bb_emlrtECI,
                                    (emlrtCTX)&sp);
      unnamed_idx_0 = static_cast<int8_T>(static_cast<int32_T>(b));
      unnamed_idx_1 = static_cast<int8_T>(static_cast<int32_T>(b));
      if ((tmp_size[1] == static_cast<int32_T>(b)) &&
          (tmp_size[0] == static_cast<int32_T>(b))) {
        proj_temp_index_tmp = static_cast<int32_T>(b) * static_cast<int32_T>(b);
        if (proj_temp_index_tmp - 1 >= 0) {
          std::copy(&e_tmp_data[0], &e_tmp_data[proj_temp_index_tmp],
                    &g_tmp_data[0]);
        }
      } else {
        b_i = 0;
        i1 = 0;
        proj_temp_index_tmp = 0;
        b_proj_temp_index_tmp = 0;
        for (int32_T i2{0}; i2 < unnamed_idx_0 * unnamed_idx_1; i2++) {
          g_tmp_data[i1 + static_cast<int32_T>(b) * b_i] =
              e_tmp_data[b_proj_temp_index_tmp +
                         tmp_size[1] * proj_temp_index_tmp];
          b_i++;
          proj_temp_index_tmp++;
          if (b_i > static_cast<int32_T>(b) - 1) {
            b_i = 0;
            i1++;
          }
          if (proj_temp_index_tmp > tmp_size[0] - 1) {
            proj_temp_index_tmp = 0;
            b_proj_temp_index_tmp++;
          }
        }
      }
      for (b_i = 0; b_i < tmp_size_idx_0; b_i++) {
        for (i1 = 0; i1 < tmp_size_idx_1; i1++) {
          Q_data[(i + 30 * i1) + 30 * static_cast<int32_T>(b) * b_i] =
              g_tmp_data[i1 + static_cast<int32_T>(b) * b_i];
        }
      }
      Q[0] = static_cast<int32_T>(b);
      Q[1] = static_cast<int32_T>(b);
      iv[0] = b_tmp_size[0];
      iv[1] = b_tmp_size[1];
      emlrtSubAssignSizeCheckR2012b(&Q[0], 2, &iv[0], 2, &db_emlrtECI,
                                    (emlrtCTX)&sp);
      unnamed_idx_0 = static_cast<int8_T>(static_cast<int32_T>(b));
      if ((b_tmp_size[1] == static_cast<int32_T>(b)) &&
          (b_tmp_size[0] == static_cast<int32_T>(b))) {
        proj_temp_index_tmp = static_cast<int32_T>(b) * static_cast<int32_T>(b);
        if (proj_temp_index_tmp - 1 >= 0) {
          std::copy(&f_tmp_data[0], &f_tmp_data[proj_temp_index_tmp],
                    &i_tmp_data[0]);
        }
      } else {
        b_i = 0;
        i1 = 0;
        proj_temp_index_tmp = 0;
        b_proj_temp_index_tmp = 0;
        for (int32_T i2{0}; i2 < unnamed_idx_0 * unnamed_idx_0; i2++) {
          i_tmp_data[i1 + static_cast<int32_T>(b) * b_i] =
              f_tmp_data[b_proj_temp_index_tmp +
                         b_tmp_size[1] * proj_temp_index_tmp];
          b_i++;
          proj_temp_index_tmp++;
          if (b_i > static_cast<int32_T>(b) - 1) {
            b_i = 0;
            i1++;
          }
          if (proj_temp_index_tmp > b_tmp_size[0] - 1) {
            proj_temp_index_tmp = 0;
            b_proj_temp_index_tmp++;
          }
        }
      }
      for (b_i = 0; b_i < Q_size_tmp; b_i++) {
        for (i1 = 0; i1 < Q_size_tmp; i1++) {
          Q_inv_data[(i + 30 * i1) + 30 * static_cast<int32_T>(b) * b_i] =
              i_tmp_data[i1 + static_cast<int32_T>(b) * b_i];
        }
      }
    } else {
      real_T c_tmp_data[7];
      real_T tmp_data[7];
      real_T i_tmp;
      int32_T b_tmp_size[2];
      int32_T tmp_size[2];
      int32_T i2;
      int32_T tmp_size_idx_0;
      int32_T tmp_size_idx_1;
      uint32_T y_data[11];
      int8_T unnamed_idx_0;
      int8_T unnamed_idx_1;
      if (nx < 1.0) {
        proj_temp_index_tmp = 0;
      } else {
        loop_ub_tmp = static_cast<int32_T>(nx - 1.0) + 1;
        proj_temp_index_tmp = static_cast<int32_T>(nx - 1.0) + 1;
        for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
          y_data[b_i] = static_cast<uint32_T>(b_i) + 1U;
        }
      }
      d = 29.0 * b;
      for (b_i = 0; b_i < proj_temp_index_tmp; b_i++) {
        i_tmp = d + static_cast<real_T>(y_data[b_i]);
        if (i_tmp != static_cast<int32_T>(muDoubleScalarFloor(i_tmp))) {
          emlrtIntegerCheckR2012b(i_tmp, &kb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(i_tmp) < 1) ||
            (static_cast<int32_T>(i_tmp) > 326)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(i_tmp), 1, 326,
                                        &hc_emlrtBCI, (emlrtConstCTX)&sp);
        }
        tmp_data[b_i] = z0[static_cast<int32_T>(i_tmp) - 1];
      }
      if (nx < 1.0) {
        b_proj_temp_index_tmp = 0;
      } else {
        loop_ub_tmp = static_cast<int32_T>(nx - 1.0) + 1;
        b_proj_temp_index_tmp = static_cast<int32_T>(nx - 1.0) + 1;
        for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
          y_data[b_i] = static_cast<uint32_T>(b_i) + 1U;
        }
      }
      for (b_i = 0; b_i < b_proj_temp_index_tmp; b_i++) {
        i_tmp = d + static_cast<real_T>(y_data[b_i]);
        if (i_tmp != static_cast<int32_T>(muDoubleScalarFloor(i_tmp))) {
          emlrtIntegerCheckR2012b(i_tmp, &mb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if ((static_cast<int32_T>(i_tmp) < 1) ||
            (static_cast<int32_T>(i_tmp) > 326)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(i_tmp), 1, 326,
                                        &jc_emlrtBCI, (emlrtConstCTX)&sp);
        }
        c_tmp_data[b_i] = P[static_cast<int32_T>(i_tmp) - 1];
      }
      st.site = &oc_emlrtRSI;
      jacob_D_unit(st, tmp_data, proj_temp_index_tmp, proj_temp_index,
                   proj_temp_coeff, c_tmp_data, b_proj_temp_index_tmp, alpha,
                   e_tmp_data, tmp_size, f_tmp_data, b_tmp_size);
      if (nx < 1.0) {
        i1 = 0;
        b_i = 0;
      } else {
        if (static_cast<int32_T>(b) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, static_cast<int32_T>(b),
                                        &yb_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_i = static_cast<int32_T>(muDoubleScalarFloor(nx));
        if (nx != b_i) {
          emlrtIntegerCheckR2012b(nx, &cb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        i1 = static_cast<int32_T>(nx);
        if (i1 > static_cast<int32_T>(b)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1,
                                        static_cast<int32_T>(b), &ac_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (static_cast<int32_T>(b) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, static_cast<int32_T>(b),
                                        &bc_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if (i1 != b_i) {
          emlrtIntegerCheckR2012b(nx, &db_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if (i1 > static_cast<int32_T>(b)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1,
                                        static_cast<int32_T>(b), &cc_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        b_i = i1;
      }
      iv[0] = i1;
      iv[1] = b_i;
      Q[0] = tmp_size[0];
      Q[1] = tmp_size[1];
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &Q[0], 2, &cb_emlrtECI,
                                    (emlrtCTX)&sp);
      unnamed_idx_0 = static_cast<int8_T>(i1);
      unnamed_idx_1 = static_cast<int8_T>(b_i);
      if ((tmp_size[1] == static_cast<int8_T>(b_i)) &&
          (static_cast<int8_T>(i1) == tmp_size[0])) {
        tmp_size_idx_1 = static_cast<int8_T>(b_i);
        tmp_size_idx_0 = static_cast<int8_T>(i1);
        loop_ub_tmp = static_cast<int8_T>(b_i) * static_cast<int8_T>(i1);
        if (loop_ub_tmp - 1 >= 0) {
          std::copy(&e_tmp_data[0], &e_tmp_data[loop_ub_tmp], &h_tmp_data[0]);
        }
      } else {
        proj_temp_index_tmp = 0;
        b_proj_temp_index_tmp = 0;
        i2 = 0;
        loop_ub_tmp = 0;
        tmp_size_idx_1 = static_cast<int8_T>(b_i);
        tmp_size_idx_0 = static_cast<int8_T>(i1);
        for (int32_T i3{0}; i3 < unnamed_idx_0 * unnamed_idx_1; i3++) {
          h_tmp_data[b_proj_temp_index_tmp +
                     static_cast<int8_T>(b_i) * proj_temp_index_tmp] =
              e_tmp_data[loop_ub_tmp + tmp_size[1] * i2];
          proj_temp_index_tmp++;
          i2++;
          if (proj_temp_index_tmp > static_cast<int8_T>(i1) - 1) {
            proj_temp_index_tmp = 0;
            b_proj_temp_index_tmp++;
          }
          if (i2 > tmp_size[0] - 1) {
            i2 = 0;
            loop_ub_tmp++;
          }
        }
      }
      for (b_i = 0; b_i < tmp_size_idx_0; b_i++) {
        for (i1 = 0; i1 < tmp_size_idx_1; i1++) {
          Q_data[(30 * i1 + 30 * static_cast<int32_T>(b) * b_i) + 29] =
              h_tmp_data[i1 + tmp_size_idx_1 * b_i];
        }
      }
      if (nx < 1.0) {
        i1 = 0;
        b_i = 0;
      } else {
        if (static_cast<int32_T>(b) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, static_cast<int32_T>(b),
                                        &dc_emlrtBCI, (emlrtConstCTX)&sp);
        }
        b_i = static_cast<int32_T>(muDoubleScalarFloor(nx));
        if (nx != b_i) {
          emlrtIntegerCheckR2012b(nx, &eb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        i1 = static_cast<int32_T>(nx);
        if (i1 > static_cast<int32_T>(b)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1,
                                        static_cast<int32_T>(b), &ec_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        if (static_cast<int32_T>(b) < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, static_cast<int32_T>(b),
                                        &fc_emlrtBCI, (emlrtConstCTX)&sp);
        }
        if (i1 != b_i) {
          emlrtIntegerCheckR2012b(nx, &fb_emlrtDCI, (emlrtConstCTX)&sp);
        }
        if (i1 > static_cast<int32_T>(b)) {
          emlrtDynamicBoundsCheckR2012b(static_cast<int32_T>(nx), 1,
                                        static_cast<int32_T>(b), &gc_emlrtBCI,
                                        (emlrtConstCTX)&sp);
        }
        b_i = i1;
      }
      iv[0] = i1;
      iv[1] = b_i;
      Q[0] = b_tmp_size[0];
      Q[1] = b_tmp_size[1];
      emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &Q[0], 2, &eb_emlrtECI,
                                    (emlrtCTX)&sp);
      unnamed_idx_0 = static_cast<int8_T>(i1);
      unnamed_idx_1 = static_cast<int8_T>(b_i);
      if ((b_tmp_size[1] == static_cast<int8_T>(b_i)) &&
          (static_cast<int8_T>(i1) == b_tmp_size[0])) {
        tmp_size_idx_1 = static_cast<int8_T>(b_i);
        tmp_size_idx_0 = static_cast<int8_T>(i1);
        loop_ub_tmp = static_cast<int8_T>(b_i) * static_cast<int8_T>(i1);
        if (loop_ub_tmp - 1 >= 0) {
          std::copy(&f_tmp_data[0], &f_tmp_data[loop_ub_tmp], &j_tmp_data[0]);
        }
      } else {
        proj_temp_index_tmp = 0;
        b_proj_temp_index_tmp = 0;
        i2 = 0;
        loop_ub_tmp = 0;
        tmp_size_idx_1 = static_cast<int8_T>(b_i);
        tmp_size_idx_0 = static_cast<int8_T>(i1);
        for (int32_T i3{0}; i3 < unnamed_idx_0 * unnamed_idx_1; i3++) {
          j_tmp_data[b_proj_temp_index_tmp +
                     static_cast<int8_T>(b_i) * proj_temp_index_tmp] =
              f_tmp_data[loop_ub_tmp + b_tmp_size[1] * i2];
          proj_temp_index_tmp++;
          i2++;
          if (proj_temp_index_tmp > static_cast<int8_T>(i1) - 1) {
            proj_temp_index_tmp = 0;
            b_proj_temp_index_tmp++;
          }
          if (i2 > b_tmp_size[0] - 1) {
            i2 = 0;
            loop_ub_tmp++;
          }
        }
      }
      for (b_i = 0; b_i < tmp_size_idx_0; b_i++) {
        for (i1 = 0; i1 < tmp_size_idx_1; i1++) {
          Q_inv_data[(30 * i1 + 30 * static_cast<int32_T>(b) * b_i) + 29] =
              j_tmp_data[i1 + tmp_size_idx_1 * b_i];
        }
      }
      // Specified! only for the LCvx case
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)&sp);
    }
  }
}

// End of code generation (dev_S_inv_g.cpp)
