/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_S_inv_g.c
 *
 * Code generation for function 'dev_S_inv_g'
 *
 */

/* Include files */
#include "dev_S_inv_g.h"
#include "abs.h"
#include "assertCompatibleDims.h"
#include "dev_jacob_ball.h"
#include "dev_jacob_soc.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_emxutil.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "diag.h"
#include "indexShapeCheck.h"
#include "proj_D_unit_with_affinejacobian.h"
#include "rt_nonfinite.h"
#include "sqrt.h"
#include "mwmathutil.h"
#include <emmintrin.h>

/* Variable Definitions */
static emlrtRSInfo uc_emlrtRSI = {
    17,            /* lineNo */
    "dev_S_inv_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pathName */
};

static emlrtRSInfo vc_emlrtRSI = {
    19,            /* lineNo */
    "dev_S_inv_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pathName */
};

static emlrtRSInfo wc_emlrtRSI = {
    38,             /* lineNo */
    "jacob_D_unit", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pathName */
};

static emlrtRSInfo xc_emlrtRSI = {
    41,             /* lineNo */
    "jacob_D_unit", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pathName */
};

static emlrtRSInfo yc_emlrtRSI = {
    42,             /* lineNo */
    "jacob_D_unit", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pathName */
};

static emlrtRSInfo ad_emlrtRSI = {
    44,             /* lineNo */
    "jacob_D_unit", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pathName */
};

static emlrtRSInfo bd_emlrtRSI = {
    46,             /* lineNo */
    "jacob_D_unit", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pathName */
};

static emlrtRSInfo cd_emlrtRSI = {
    56,              /* lineNo */
    "dev_jacob_box", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pathName */
};

static emlrtRSInfo dd_emlrtRSI = {
    57,              /* lineNo */
    "dev_jacob_box", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pathName */
};

static emlrtRSInfo ed_emlrtRSI = {
    58,              /* lineNo */
    "dev_jacob_box", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pathName */
};

static emlrtRSInfo fd_emlrtRSI = {
    59,              /* lineNo */
    "dev_jacob_box", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pathName */
};

static emlrtECInfo y_emlrtECI = {
    -1,            /* nDims */
    17,            /* lineNo */
    10,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtBCInfo nb_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    19,            /* lineNo */
    12,            /* colNo */
    "Q",           /* aName */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtDCInfo y_emlrtDCI = {
    19,            /* lineNo */
    14,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    1                                             /* checkKind */
};

static emlrtBCInfo ob_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    19,            /* lineNo */
    14,            /* colNo */
    "Q",           /* aName */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtBCInfo pb_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    19,            /* lineNo */
    17,            /* colNo */
    "Q",           /* aName */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtDCInfo ab_emlrtDCI = {
    19,            /* lineNo */
    19,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    1                                             /* checkKind */
};

static emlrtBCInfo qb_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    19,            /* lineNo */
    19,            /* colNo */
    "Q",           /* aName */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtECInfo ab_emlrtECI = {
    -1,            /* nDims */
    19,            /* lineNo */
    10,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtECInfo bb_emlrtECI = {
    -1,            /* nDims */
    17,            /* lineNo */
    20,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtBCInfo rb_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    19,            /* lineNo */
    32,            /* colNo */
    "Q_inv",       /* aName */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtDCInfo bb_emlrtDCI = {
    19,            /* lineNo */
    34,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    1                                             /* checkKind */
};

static emlrtBCInfo sb_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    19,            /* lineNo */
    34,            /* colNo */
    "Q_inv",       /* aName */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtBCInfo tb_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    19,            /* lineNo */
    37,            /* colNo */
    "Q_inv",       /* aName */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtDCInfo cb_emlrtDCI = {
    19,            /* lineNo */
    39,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    1                                             /* checkKind */
};

static emlrtBCInfo ub_emlrtBCI = {
    -1,            /* iFirst */
    -1,            /* iLast */
    19,            /* lineNo */
    39,            /* colNo */
    "Q_inv",       /* aName */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtECInfo cb_emlrtECI = {
    -1,            /* nDims */
    19,            /* lineNo */
    26,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtDCInfo db_emlrtDCI = {
    4,             /* lineNo */
    20,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    1                                             /* checkKind */
};

static emlrtDCInfo eb_emlrtDCI = {
    4,             /* lineNo */
    20,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    4                                             /* checkKind */
};

static emlrtDCInfo fb_emlrtDCI = {
    4,             /* lineNo */
    1,             /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    1                                             /* checkKind */
};

static emlrtDCInfo gb_emlrtDCI = {
    4,             /* lineNo */
    1,             /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    4                                             /* checkKind */
};

static emlrtBCInfo vb_emlrtBCI = {
    1,             /* iFirst */
    326,           /* iLast */
    14,            /* lineNo */
    18,            /* colNo */
    "z0",          /* aName */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtDCInfo hb_emlrtDCI = {
    14,            /* lineNo */
    18,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    1                                             /* checkKind */
};

static emlrtECInfo db_emlrtECI = {
    -1,             /* nDims */
    41,             /* lineNo */
    9,              /* colNo */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtECInfo eb_emlrtECI = {
    -1,             /* nDims */
    44,             /* lineNo */
    10,             /* colNo */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtECInfo fb_emlrtECI = {
    -1,             /* nDims */
    46,             /* lineNo */
    10,             /* colNo */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtECInfo gb_emlrtECI = {
    -1,             /* nDims */
    41,             /* lineNo */
    35,             /* colNo */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtECInfo hb_emlrtECI = {
    -1,             /* nDims */
    44,             /* lineNo */
    36,             /* colNo */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtECInfo ib_emlrtECI = {
    -1,             /* nDims */
    46,             /* lineNo */
    36,             /* colNo */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtECInfo jb_emlrtECI = {
    1,               /* nDims */
    54,              /* lineNo */
    28,              /* colNo */
    "dev_jacob_box", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtECInfo kb_emlrtECI = {
    1,               /* nDims */
    56,              /* lineNo */
    47,              /* colNo */
    "dev_jacob_box", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtECInfo lb_emlrtECI = {
    1,               /* nDims */
    56,              /* lineNo */
    36,              /* colNo */
    "dev_jacob_box", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtECInfo mb_emlrtECI = {
    1,               /* nDims */
    57,              /* lineNo */
    38,              /* colNo */
    "dev_jacob_box", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtECInfo nb_emlrtECI = {
    1,               /* nDims */
    57,              /* lineNo */
    27,              /* colNo */
    "dev_jacob_box", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtBCInfo wb_emlrtBCI = {
    1,              /* iFirst */
    11,             /* iLast */
    35,             /* lineNo */
    22,             /* colNo */
    "proj_index",   /* aName */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtDCInfo ib_emlrtDCI = {
    35,             /* lineNo */
    22,             /* colNo */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    1                                             /* checkKind */
};

static emlrtDCInfo jb_emlrtDCI = {
    44,             /* lineNo */
    87,             /* colNo */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    1                                             /* checkKind */
};

static emlrtBCInfo xb_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    44,             /* lineNo */
    87,             /* colNo */
    "z0",           /* aName */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtDCInfo kb_emlrtDCI = {
    46,             /* lineNo */
    86,             /* colNo */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    1                                             /* checkKind */
};

static emlrtBCInfo yb_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    46,             /* lineNo */
    86,             /* colNo */
    "z0",           /* aName */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtBCInfo ac_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    44,             /* lineNo */
    129,            /* colNo */
    "P",            /* aName */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtBCInfo bc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    46,             /* lineNo */
    128,            /* colNo */
    "P",            /* aName */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtBCInfo cc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    41,             /* lineNo */
    86,             /* colNo */
    "z0",           /* aName */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtDCInfo lb_emlrtDCI = {
    41,             /* lineNo */
    86,             /* colNo */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    1                                             /* checkKind */
};

static emlrtBCInfo dc_emlrtBCI = {
    1,                   /* iFirst */
    11,                  /* iLast */
    41,                  /* lineNo */
    118,                 /* colNo */
    "proj_coefficients", /* aName */
    "jacob_D_unit",      /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtBCInfo ec_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    42,             /* lineNo */
    52,             /* colNo */
    "P",            /* aName */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtBCInfo fc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    44,             /* lineNo */
    12,             /* colNo */
    "Q",            /* aName */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtBCInfo gc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    46,             /* lineNo */
    12,             /* colNo */
    "Q",            /* aName */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtBCInfo hc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    44,             /* lineNo */
    24,             /* colNo */
    "Q",            /* aName */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtBCInfo ic_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    46,             /* lineNo */
    24,             /* colNo */
    "Q",            /* aName */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtBCInfo jc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    44,             /* lineNo */
    42,             /* colNo */
    "Q_inv",        /* aName */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtBCInfo kc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    46,             /* lineNo */
    42,             /* colNo */
    "Q_inv",        /* aName */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtBCInfo lc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    44,             /* lineNo */
    54,             /* colNo */
    "Q_inv",        /* aName */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtBCInfo mc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    46,             /* lineNo */
    54,             /* colNo */
    "Q_inv",        /* aName */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtBCInfo nc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    41,             /* lineNo */
    11,             /* colNo */
    "Q",            /* aName */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtBCInfo oc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    41,             /* lineNo */
    23,             /* colNo */
    "Q",            /* aName */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtBCInfo pc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    41,             /* lineNo */
    41,             /* colNo */
    "Q_inv",        /* aName */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtBCInfo qc_emlrtBCI = {
    -1,             /* iFirst */
    -1,             /* iLast */
    41,             /* lineNo */
    53,             /* colNo */
    "Q_inv",        /* aName */
    "jacob_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m", /* pName */
    0                                             /* checkKind */
};

static emlrtRTEInfo ge_emlrtRTEI = {
    4,             /* lineNo */
    1,             /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo he_emlrtRTEI = {
    5,             /* lineNo */
    1,             /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo ie_emlrtRTEI = {
    12,            /* lineNo */
    9,             /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo je_emlrtRTEI = {
    10,            /* lineNo */
    9,             /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo ke_emlrtRTEI = {
    14,            /* lineNo */
    15,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo le_emlrtRTEI = {
    15,            /* lineNo */
    5,             /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo ne_emlrtRTEI = {
    19,            /* lineNo */
    10,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo oe_emlrtRTEI = {
    17,            /* lineNo */
    20,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo pe_emlrtRTEI = {
    19,            /* lineNo */
    26,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo qe_emlrtRTEI = {
    1,             /* lineNo */
    23,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo re_emlrtRTEI = {
    31,            /* lineNo */
    1,             /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo se_emlrtRTEI = {
    32,            /* lineNo */
    1,             /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo te_emlrtRTEI = {
    38,            /* lineNo */
    5,             /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo ue_emlrtRTEI = {
    41,            /* lineNo */
    83,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo ve_emlrtRTEI = {
    44,            /* lineNo */
    84,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo we_emlrtRTEI = {
    46,            /* lineNo */
    83,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo xe_emlrtRTEI = {
    44,            /* lineNo */
    127,           /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo ye_emlrtRTEI = {
    46,            /* lineNo */
    126,           /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo af_emlrtRTEI = {
    54,            /* lineNo */
    29,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo bf_emlrtRTEI = {
    44,            /* lineNo */
    12,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo cf_emlrtRTEI = {
    46,            /* lineNo */
    12,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo df_emlrtRTEI = {
    54,            /* lineNo */
    36,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo ef_emlrtRTEI = {
    44,            /* lineNo */
    24,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo ff_emlrtRTEI = {
    46,            /* lineNo */
    24,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo gf_emlrtRTEI = {
    55,            /* lineNo */
    1,             /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo hf_emlrtRTEI = {
    56,            /* lineNo */
    47,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo if_emlrtRTEI = {
    56,            /* lineNo */
    36,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo jf_emlrtRTEI = {
    44,            /* lineNo */
    42,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo kf_emlrtRTEI = {
    46,            /* lineNo */
    42,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo mf_emlrtRTEI = {
    44,            /* lineNo */
    54,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo nf_emlrtRTEI = {
    46,            /* lineNo */
    54,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo of_emlrtRTEI = {
    41,            /* lineNo */
    11,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo pf_emlrtRTEI = {
    41,            /* lineNo */
    23,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo qf_emlrtRTEI = {
    41,            /* lineNo */
    41,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo rf_emlrtRTEI = {
    41,            /* lineNo */
    53,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo sf_emlrtRTEI = {
    46,            /* lineNo */
    36,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo tf_emlrtRTEI = {
    30,            /* lineNo */
    23,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo uf_emlrtRTEI = {
    46,            /* lineNo */
    10,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo vf_emlrtRTEI = {
    56,            /* lineNo */
    1,             /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo wf_emlrtRTEI = {
    57,            /* lineNo */
    1,             /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

static emlrtRTEInfo xf_emlrtRTEI = {
    54,            /* lineNo */
    28,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

/* Function Declarations */
static void binary_expand_op_15(const emlrtStack *sp, emxArray_real_T *in1,
                                const emlrtRSInfo in2,
                                const emxArray_real_T *in3,
                                const emxArray_real_T *in4);

static void binary_expand_op_16(const emlrtStack *sp, emxArray_real_T *in1,
                                const emlrtRSInfo in2,
                                const emxArray_real_T *in3,
                                const emxArray_real_T *in4);

static void binary_expand_op_17(const emlrtStack *sp, emxArray_real_T *in1,
                                const emxArray_real_T *in2,
                                const emxArray_real_T *in3);

static void jacob_D_unit(const emlrtStack *sp, const emxArray_real_T *z0,
                         const real_T proj_index[22],
                         const real_T proj_coefficients[22],
                         const emxArray_real_T *P, real_T alpha,
                         emxArray_real_T *Q, emxArray_real_T *Q_inv);

/* Function Definitions */
static void binary_expand_op_15(const emlrtStack *sp, emxArray_real_T *in1,
                                const emlrtRSInfo in2,
                                const emxArray_real_T *in3,
                                const emxArray_real_T *in4)
{
  emlrtStack st;
  emxArray_real_T *r;
  const real_T *in3_data;
  const real_T *in4_data;
  real_T *r1;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in4_data = in4->data;
  in3_data = in3->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &r, 1, &lf_emlrtRTEI);
  if (in4->size[0] == 1) {
    loop_ub = in3->size[0];
  } else {
    loop_ub = in4->size[0];
  }
  i = r->size[0];
  r->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, r, i, &lf_emlrtRTEI);
  r1 = r->data;
  stride_0_0 = (in3->size[0] != 1);
  stride_1_0 = (in4->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    r1[i] = 1.0 / ((1.0 - in3_data[i * stride_0_0]) + in4_data[i * stride_1_0]);
  }
  st.site = (emlrtRSInfo *)&in2;
  b_abs(&st, r, in1);
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void binary_expand_op_16(const emlrtStack *sp, emxArray_real_T *in1,
                                const emlrtRSInfo in2,
                                const emxArray_real_T *in3,
                                const emxArray_real_T *in4)
{
  emlrtStack st;
  emxArray_real_T *b_in3;
  const real_T *in3_data;
  const real_T *in4_data;
  real_T *b_in3_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  st.prev = sp;
  st.tls = sp->tls;
  in4_data = in4->data;
  in3_data = in3->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  emxInit_real_T(sp, &b_in3, 1, &lf_emlrtRTEI);
  if (in4->size[0] == 1) {
    loop_ub = in3->size[0];
  } else {
    loop_ub = in4->size[0];
  }
  i = b_in3->size[0];
  b_in3->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, b_in3, i, &lf_emlrtRTEI);
  b_in3_data = b_in3->data;
  stride_0_0 = (in3->size[0] != 1);
  stride_1_0 = (in4->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    b_in3_data[i] = in3_data[i * stride_0_0] / in4_data[i * stride_1_0];
  }
  st.site = (emlrtRSInfo *)&in2;
  b_abs(&st, b_in3, in1);
  emxFree_real_T(sp, &b_in3);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

static void binary_expand_op_17(const emlrtStack *sp, emxArray_real_T *in1,
                                const emxArray_real_T *in2,
                                const emxArray_real_T *in3)
{
  const real_T *in2_data;
  const real_T *in3_data;
  real_T *in1_data;
  int32_T i;
  int32_T loop_ub;
  int32_T stride_0_0;
  int32_T stride_1_0;
  in3_data = in3->data;
  in2_data = in2->data;
  if (in3->size[0] == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in3->size[0];
  }
  i = in1->size[0];
  in1->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, in1, i, &if_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in2->size[0] != 1);
  stride_1_0 = (in3->size[0] != 1);
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = (1.0 - in2_data[i * stride_0_0]) + in3_data[i * stride_1_0];
  }
}

static void jacob_D_unit(const emlrtStack *sp, const emxArray_real_T *z0,
                         const real_T proj_index[22],
                         const real_T proj_coefficients[22],
                         const emxArray_real_T *P, real_T alpha,
                         emxArray_real_T *Q, emxArray_real_T *Q_inv)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  emxArray_boolean_T *r6;
  emxArray_boolean_T *r7;
  emxArray_int32_T *r2;
  emxArray_int32_T *r3;
  emxArray_real_T *b_P;
  emxArray_real_T *b_z0;
  emxArray_real_T *lambda;
  emxArray_real_T *lambda_between;
  emxArray_real_T *lambda_inv;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r4;
  emxArray_real_T *r5;
  emxArray_real_T *r8;
  emxArray_real_T *temp_index;
  const real_T *P_data;
  const real_T *z0_data;
  real_T temp;
  real_T *Q_data;
  real_T *Q_inv_data;
  real_T *b_P_data;
  real_T *b_z0_data;
  real_T *lambda_data;
  real_T *lambda_inv_data;
  real_T *r9;
  real_T *temp_index_data;
  int32_T b_temp_index[2];
  int32_T iv[2];
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T loop_ub_tmp;
  int32_T *r12;
  int32_T *r13;
  boolean_T exitg1;
  boolean_T *r10;
  boolean_T *r11;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  d_st.prev = &c_st;
  d_st.tls = c_st.tls;
  P_data = P->data;
  z0_data = z0->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  i = z0->size[0];
  i1 = Q->size[0] * Q->size[1];
  Q->size[1] = z0->size[0];
  Q->size[0] = z0->size[0];
  emxEnsureCapacity_real_T(sp, Q, i1, &re_emlrtRTEI);
  Q_data = Q->data;
  loop_ub_tmp = z0->size[0] * z0->size[0];
  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    Q_data[i1] = 0.0;
  }
  i1 = Q_inv->size[0] * Q_inv->size[1];
  Q_inv->size[1] = z0->size[0];
  Q_inv->size[0] = z0->size[0];
  emxEnsureCapacity_real_T(sp, Q_inv, i1, &se_emlrtRTEI);
  Q_inv_data = Q_inv->data;
  for (i1 = 0; i1 < loop_ub_tmp; i1++) {
    Q_inv_data[i1] = 0.0;
  }
  temp = 1.0;
  emxInit_real_T(sp, &temp_index, 2, &te_emlrtRTEI);
  temp_index_data = temp_index->data;
  emxInit_real_T(sp, &r, 2, &sf_emlrtRTEI);
  emxInit_real_T(sp, &r1, 2, &tf_emlrtRTEI);
  emxInit_int32_T(sp, &r2, 1, &uf_emlrtRTEI);
  emxInit_int32_T(sp, &r3, 1, &uf_emlrtRTEI);
  emxInit_real_T(sp, &r4, 2, &ue_emlrtRTEI);
  emxInit_real_T(sp, &r5, 2, &uf_emlrtRTEI);
  emxInit_real_T(sp, &lambda, 1, &gf_emlrtRTEI);
  emxInit_real_T(sp, &lambda_between, 1, &vf_emlrtRTEI);
  emxInit_real_T(sp, &lambda_inv, 1, &wf_emlrtRTEI);
  emxInit_boolean_T(sp, &r6, &xf_emlrtRTEI);
  emxInit_boolean_T(sp, &r7, &xf_emlrtRTEI);
  emxInit_real_T(sp, &r8, 1, &hf_emlrtRTEI);
  emxInit_real_T(sp, &b_z0, 1, &we_emlrtRTEI);
  emxInit_real_T(sp, &b_P, 1, &ye_emlrtRTEI);
  exitg1 = false;
  while ((!exitg1) && (temp <= z0->size[0])) {
    real_T d;
    if (temp != (int32_T)muDoubleScalarFloor(temp)) {
      emlrtIntegerCheckR2012b(temp, &ib_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)temp < 1) || ((int32_T)temp > 11)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)temp, 1, 11, &wb_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    d = proj_index[(int32_T)temp - 1];
    if (d == rtInf) {
      exitg1 = true;
    } else {
      real_T d1;
      int32_T loop_ub;
      st.site = &wc_emlrtRSI;
      b_st.site = &ub_emlrtRSI;
      if (muDoubleScalarIsNaN(d)) {
        i1 = temp_index->size[0] * temp_index->size[1];
        temp_index->size[1] = 1;
        temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(&b_st, temp_index, i1, &te_emlrtRTEI);
        temp_index_data = temp_index->data;
        temp_index_data[0] = rtNaN;
      } else if (d < temp) {
        temp_index->size[1] = 0;
        temp_index->size[0] = 1;
      } else if (muDoubleScalarIsInf(d) && (temp == d)) {
        i1 = temp_index->size[0] * temp_index->size[1];
        temp_index->size[1] = 1;
        temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(&b_st, temp_index, i1, &te_emlrtRTEI);
        temp_index_data = temp_index->data;
        temp_index_data[0] = rtNaN;
      } else {
        loop_ub = (int32_T)(d - temp) + 1;
        i1 = temp_index->size[0] * temp_index->size[1];
        temp_index->size[1] = loop_ub;
        temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(&b_st, temp_index, i1, &te_emlrtRTEI);
        temp_index_data = temp_index->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          temp_index_data[i1] = temp + (real_T)i1;
        }
      }
      d1 = proj_index[(int32_T)temp + 10];
      if (d1 == 1.0) {
        __m128d r14;
        __m128d r15;
        int32_T b_loop_ub;
        int32_T vectorUB_tmp;
        b_temp_index[0] = 1;
        loop_ub_tmp = temp_index->size[1];
        b_temp_index[1] = temp_index->size[1];
        st.site = &xc_emlrtRSI;
        indexShapeCheck(&st, z0->size[0], b_temp_index);
        b_temp_index[0] = 1;
        b_temp_index[1] = temp_index->size[1];
        st.site = &yc_emlrtRSI;
        indexShapeCheck(&st, P->size[0], b_temp_index);
        i1 = r4->size[0] * r4->size[1];
        r4->size[1] = temp_index->size[1];
        r4->size[0] = 1;
        emxEnsureCapacity_real_T(sp, r4, i1, &ue_emlrtRTEI);
        r9 = r4->data;
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          if (temp_index_data[i1] !=
              (int32_T)muDoubleScalarFloor(temp_index_data[i1])) {
            emlrtIntegerCheckR2012b(temp_index_data[i1], &lb_emlrtDCI,
                                    (emlrtConstCTX)sp);
          }
          i2 = (int32_T)temp_index_data[i1];
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &cc_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          r9[i1] = z0_data[i2 - 1];
        }
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          i2 = (int32_T)temp_index_data[i1];
          if ((i2 < 1) || (i2 > 11)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, 11, &dc_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          i2 = (int32_T)temp_index_data[i1];
          if ((i2 < 1) || (i2 > P->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, P->size[0], &ec_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        st.site = &xc_emlrtRSI;
        i1 = r6->size[0];
        r6->size[0] = temp_index->size[1];
        emxEnsureCapacity_boolean_T(&st, r6, i1, &af_emlrtRTEI);
        r10 = r6->data;
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          r10[i1] =
              (r9[i1] <= proj_coefficients[(int32_T)temp_index_data[i1] + 10]);
        }
        loop_ub = temp_index->size[1];
        i1 = r7->size[0];
        r7->size[0] = temp_index->size[1];
        emxEnsureCapacity_boolean_T(&st, r7, i1, &df_emlrtRTEI);
        r11 = r7->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          r11[i1] =
              (r9[i1] >= proj_coefficients[(int32_T)temp_index_data[i1] - 1]);
        }
        loop_ub = r6->size[0];
        if ((r6->size[0] != r7->size[0]) &&
            ((r6->size[0] != 1) && (r7->size[0] != 1))) {
          emlrtDimSizeImpxCheckR2021b(r6->size[0], r7->size[0], &jb_emlrtECI,
                                      &st);
        }
        /* %%Jacobian of box should be computed after projection!.  */
        if (r6->size[0] == r7->size[0]) {
          i1 = lambda->size[0];
          lambda->size[0] = r6->size[0];
          emxEnsureCapacity_real_T(&st, lambda, i1, &gf_emlrtRTEI);
          lambda_data = lambda->data;
          for (i1 = 0; i1 < loop_ub; i1++) {
            lambda_data[i1] = ((!r10[i1]) && (!r11[i1]));
          }
        } else {
          b_st.site = &ti_emlrtRSI;
          binary_expand_op_3(&b_st, lambda, r6, r7);
          lambda_data = lambda->data;
        }
        loop_ub = lambda->size[0];
        i1 = b_z0->size[0];
        b_z0->size[0] = lambda->size[0];
        emxEnsureCapacity_real_T(&st, b_z0, i1, &hf_emlrtRTEI);
        b_z0_data = b_z0->data;
        loop_ub_tmp = (lambda->size[0] / 2) << 1;
        vectorUB_tmp = loop_ub_tmp - 2;
        for (i1 = 0; i1 <= vectorUB_tmp; i1 += 2) {
          r14 = _mm_loadu_pd(&lambda_data[i1]);
          _mm_storeu_pd(&b_z0_data[i1], _mm_mul_pd(_mm_set1_pd(alpha), r14));
        }
        for (i1 = loop_ub_tmp; i1 < loop_ub; i1++) {
          b_z0_data[i1] = alpha * lambda_data[i1];
        }
        b_loop_ub = b_z0->size[0];
        if ((b_z0->size[0] != temp_index->size[1]) &&
            ((b_z0->size[0] != 1) && (temp_index->size[1] != 1))) {
          emlrtDimSizeImpxCheckR2021b(b_z0->size[0], temp_index->size[1],
                                      &kb_emlrtECI, &st);
        }
        if (b_z0->size[0] == temp_index->size[1]) {
          i1 = r8->size[0];
          r8->size[0] = b_z0->size[0];
          emxEnsureCapacity_real_T(&st, r8, i1, &hf_emlrtRTEI);
          r9 = r8->data;
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            r9[i1] = b_z0_data[i1] * P_data[(int32_T)temp_index_data[i1] - 1];
          }
        } else {
          b_st.site = &cd_emlrtRSI;
          binary_expand_op_18(&b_st, r8, b_z0, P, temp_index);
          r9 = r8->data;
        }
        if ((lambda->size[0] != r8->size[0]) &&
            ((lambda->size[0] != 1) && (r8->size[0] != 1))) {
          emlrtDimSizeImpxCheckR2021b(lambda->size[0], r8->size[0],
                                      &lb_emlrtECI, &st);
        }
        b_st.site = &cd_emlrtRSI;
        if (lambda->size[0] == r8->size[0]) {
          i1 = lambda_inv->size[0];
          lambda_inv->size[0] = lambda->size[0];
          emxEnsureCapacity_real_T(&b_st, lambda_inv, i1, &if_emlrtRTEI);
          lambda_inv_data = lambda_inv->data;
          for (i1 = 0; i1 <= vectorUB_tmp; i1 += 2) {
            r14 = _mm_loadu_pd(&lambda_data[i1]);
            r15 = _mm_loadu_pd(&r9[i1]);
            _mm_storeu_pd(&lambda_inv_data[i1],
                          _mm_add_pd(_mm_sub_pd(_mm_set1_pd(1.0), r14), r15));
          }
          for (i1 = loop_ub_tmp; i1 < loop_ub; i1++) {
            lambda_inv_data[i1] = (1.0 - lambda_data[i1]) + r9[i1];
          }
        } else {
          c_st.site = &cd_emlrtRSI;
          binary_expand_op_17(&c_st, lambda_inv, lambda, r8);
          lambda_inv_data = lambda_inv->data;
        }
        c_st.site = &gd_emlrtRSI;
        d_st.site = &hd_emlrtRSI;
        assertCompatibleDims(&d_st, lambda, lambda_inv);
        if (lambda->size[0] == lambda_inv->size[0]) {
          loop_ub = lambda->size[0];
          i1 = b_P->size[0];
          b_P->size[0] = lambda->size[0];
          emxEnsureCapacity_real_T(&st, b_P, i1, &lf_emlrtRTEI);
          b_P_data = b_P->data;
          loop_ub_tmp = (lambda->size[0] / 2) << 1;
          vectorUB_tmp = loop_ub_tmp - 2;
          for (i1 = 0; i1 <= vectorUB_tmp; i1 += 2) {
            r14 = _mm_loadu_pd(&lambda_data[i1]);
            r15 = _mm_loadu_pd(&lambda_inv_data[i1]);
            _mm_storeu_pd(&b_P_data[i1], _mm_div_pd(r14, r15));
          }
          for (i1 = loop_ub_tmp; i1 < loop_ub; i1++) {
            b_P_data[i1] = lambda_data[i1] / lambda_inv_data[i1];
          }
          b_st.site = &cd_emlrtRSI;
          b_abs(&b_st, b_P, lambda_between);
        } else {
          b_st.site = &cd_emlrtRSI;
          binary_expand_op_16(&b_st, lambda_between, cd_emlrtRSI, lambda,
                              lambda_inv);
        }
        b_st.site = &cd_emlrtRSI;
        b_sqrt(&b_st, lambda_between);
        loop_ub = temp_index->size[1];
        if ((b_z0->size[0] != temp_index->size[1]) &&
            ((b_z0->size[0] != 1) && (temp_index->size[1] != 1))) {
          emlrtDimSizeImpxCheckR2021b(b_z0->size[0], temp_index->size[1],
                                      &mb_emlrtECI, &st);
        }
        b_loop_ub = lambda->size[0];
        if ((lambda->size[0] != r8->size[0]) &&
            ((lambda->size[0] != 1) && (r8->size[0] != 1))) {
          emlrtDimSizeImpxCheckR2021b(lambda->size[0], r8->size[0],
                                      &nb_emlrtECI, &st);
        }
        if (lambda->size[0] == r8->size[0]) {
          i1 = b_z0->size[0];
          b_z0->size[0] = lambda->size[0];
          emxEnsureCapacity_real_T(&st, b_z0, i1, &lf_emlrtRTEI);
          b_z0_data = b_z0->data;
          loop_ub_tmp = (lambda->size[0] / 2) << 1;
          vectorUB_tmp = loop_ub_tmp - 2;
          for (i1 = 0; i1 <= vectorUB_tmp; i1 += 2) {
            __m128d r16;
            r14 = _mm_loadu_pd(&lambda_data[i1]);
            r15 = _mm_loadu_pd(&r9[i1]);
            r16 = _mm_set1_pd(1.0);
            _mm_storeu_pd(
                &b_z0_data[i1],
                _mm_div_pd(r16, _mm_add_pd(_mm_sub_pd(r16, r14), r15)));
          }
          for (i1 = loop_ub_tmp; i1 < b_loop_ub; i1++) {
            b_z0_data[i1] = 1.0 / ((1.0 - lambda_data[i1]) + r9[i1]);
          }
          b_st.site = &dd_emlrtRSI;
          b_abs(&b_st, b_z0, lambda_inv);
        } else {
          b_st.site = &dd_emlrtRSI;
          binary_expand_op_15(&b_st, lambda_inv, dd_emlrtRSI, lambda, r8);
        }
        b_st.site = &dd_emlrtRSI;
        b_sqrt(&b_st, lambda_inv);
        b_st.site = &ed_emlrtRSI;
        diag(&b_st, lambda_between, r);
        b_z0_data = r->data;
        b_st.site = &fd_emlrtRSI;
        diag(&b_st, lambda_inv, r1);
        r9 = r1->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = (int32_T)temp_index_data[i1];
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &nc_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        i1 = r2->size[0];
        r2->size[0] = temp_index->size[1];
        emxEnsureCapacity_int32_T(sp, r2, i1, &of_emlrtRTEI);
        r12 = r2->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          r12[i1] = (int32_T)temp_index_data[i1] - 1;
        }
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = (int32_T)temp_index_data[i1];
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &oc_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        i1 = r3->size[0];
        r3->size[0] = temp_index->size[1];
        emxEnsureCapacity_int32_T(sp, r3, i1, &pf_emlrtRTEI);
        r13 = r3->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          r13[i1] = (int32_T)temp_index_data[i1] - 1;
        }
        b_temp_index[0] = temp_index->size[1];
        b_temp_index[1] = temp_index->size[1];
        iv[0] = r->size[0];
        iv[1] = r->size[1];
        emlrtSubAssignSizeCheckR2012b(&b_temp_index[0], 2, &iv[0], 2,
                                      &db_emlrtECI, (emlrtCTX)sp);
        b_temp_index[0] = temp_index->size[1];
        b_temp_index[1] = temp_index->size[1];
        if ((r->size[1] == r3->size[0]) && (r2->size[0] == r->size[0])) {
          i1 = r5->size[0] * r5->size[1];
          r5->size[1] = temp_index->size[1];
          r5->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(sp, r5, i1, &me_emlrtRTEI);
          lambda_inv_data = r5->data;
          b_loop_ub = r2->size[0] * r3->size[0];
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            lambda_inv_data[i1] = b_z0_data[i1];
          }
        } else {
          i1 = 0;
          i2 = 0;
          vectorUB_tmp = 0;
          b_loop_ub = 0;
          i3 = r5->size[0] * r5->size[1];
          r5->size[1] = temp_index->size[1];
          r5->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(sp, r5, i3, &me_emlrtRTEI);
          lambda_inv_data = r5->data;
          for (i3 = 0; i3 < b_temp_index[0] * b_temp_index[1]; i3++) {
            lambda_inv_data[i2 + r5->size[1] * i1] =
                b_z0_data[b_loop_ub + r->size[1] * vectorUB_tmp];
            i1++;
            vectorUB_tmp++;
            if (i1 > r5->size[0] - 1) {
              i1 = 0;
              i2++;
            }
            if (vectorUB_tmp > r->size[0] - 1) {
              vectorUB_tmp = 0;
              b_loop_ub++;
            }
          }
        }
        for (i1 = 0; i1 < loop_ub; i1++) {
          for (i2 = 0; i2 < loop_ub; i2++) {
            Q_data[r13[i2] + Q->size[1] * r12[i1]] =
                lambda_inv_data[i2 + r5->size[1] * i1];
          }
        }
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = (int32_T)temp_index_data[i1];
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &pc_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        i1 = r2->size[0];
        r2->size[0] = temp_index->size[1];
        emxEnsureCapacity_int32_T(sp, r2, i1, &qf_emlrtRTEI);
        r12 = r2->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          r12[i1] = (int32_T)temp_index_data[i1] - 1;
        }
        for (i1 = 0; i1 < loop_ub; i1++) {
          i2 = (int32_T)temp_index_data[i1];
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &qc_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        i1 = r3->size[0];
        r3->size[0] = temp_index->size[1];
        emxEnsureCapacity_int32_T(sp, r3, i1, &rf_emlrtRTEI);
        r13 = r3->data;
        for (i1 = 0; i1 < loop_ub; i1++) {
          r13[i1] = (int32_T)temp_index_data[i1] - 1;
        }
        b_temp_index[0] = temp_index->size[1];
        b_temp_index[1] = temp_index->size[1];
        iv[0] = r1->size[0];
        iv[1] = r1->size[1];
        emlrtSubAssignSizeCheckR2012b(&b_temp_index[0], 2, &iv[0], 2,
                                      &gb_emlrtECI, (emlrtCTX)sp);
        b_temp_index[0] = temp_index->size[1];
        b_temp_index[1] = temp_index->size[1];
        if ((r1->size[1] == r3->size[0]) && (r2->size[0] == r1->size[0])) {
          i1 = r->size[0] * r->size[1];
          r->size[1] = temp_index->size[1];
          r->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(sp, r, i1, &me_emlrtRTEI);
          b_z0_data = r->data;
          b_loop_ub = r2->size[0] * r3->size[0];
          for (i1 = 0; i1 < b_loop_ub; i1++) {
            b_z0_data[i1] = r9[i1];
          }
        } else {
          i1 = 0;
          i2 = 0;
          vectorUB_tmp = 0;
          b_loop_ub = 0;
          i3 = r->size[0] * r->size[1];
          r->size[1] = temp_index->size[1];
          r->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(sp, r, i3, &me_emlrtRTEI);
          b_z0_data = r->data;
          for (i3 = 0; i3 < b_temp_index[0] * b_temp_index[1]; i3++) {
            b_z0_data[i2 + r->size[1] * i1] =
                r9[b_loop_ub + r1->size[1] * vectorUB_tmp];
            i1++;
            vectorUB_tmp++;
            if (i1 > r->size[0] - 1) {
              i1 = 0;
              i2++;
            }
            if (vectorUB_tmp > r1->size[0] - 1) {
              vectorUB_tmp = 0;
              b_loop_ub++;
            }
          }
        }
        for (i1 = 0; i1 < loop_ub; i1++) {
          for (i2 = 0; i2 < loop_ub; i2++) {
            Q_inv_data[r13[i2] + Q_inv->size[1] * r12[i1]] =
                b_z0_data[i2 + r->size[1] * i1];
          }
        }
      } else if (d1 == 2.0) {
        int32_T b_loop_ub;
        int32_T vectorUB_tmp;
        b_temp_index[0] = 1;
        loop_ub_tmp = temp_index->size[1];
        b_temp_index[1] = temp_index->size[1];
        st.site = &ad_emlrtRSI;
        indexShapeCheck(&st, z0->size[0], b_temp_index);
        b_temp_index[0] = 1;
        b_temp_index[1] = temp_index->size[1];
        st.site = &ad_emlrtRSI;
        indexShapeCheck(&st, P->size[0], b_temp_index);
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          if (temp_index_data[i1] !=
              (int32_T)muDoubleScalarFloor(temp_index_data[i1])) {
            emlrtIntegerCheckR2012b(temp_index_data[i1], &jb_emlrtDCI,
                                    (emlrtConstCTX)sp);
          }
          i2 = (int32_T)temp_index_data[i1];
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &xb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          i2 = (int32_T)temp_index_data[i1];
          if ((i2 < 1) || (i2 > P->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, P->size[0], &ac_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        i1 = b_z0->size[0];
        b_z0->size[0] = temp_index->size[1];
        emxEnsureCapacity_real_T(sp, b_z0, i1, &ve_emlrtRTEI);
        b_z0_data = b_z0->data;
        i1 = b_P->size[0];
        b_P->size[0] = temp_index->size[1];
        emxEnsureCapacity_real_T(sp, b_P, i1, &xe_emlrtRTEI);
        b_P_data = b_P->data;
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          d1 = temp_index_data[i1];
          b_z0_data[i1] = z0_data[(int32_T)d1 - 1];
          b_P_data[i1] = P_data[(int32_T)d1 - 1];
        }
        st.site = &ad_emlrtRSI;
        dev_jacob_ball(&st, b_z0, proj_coefficients[(int32_T)temp - 1], b_P,
                       alpha, r, r1);
        r9 = r1->data;
        b_z0_data = r->data;
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          i2 = (int32_T)temp_index_data[i1];
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &fc_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        i1 = r2->size[0];
        r2->size[0] = temp_index->size[1];
        emxEnsureCapacity_int32_T(sp, r2, i1, &bf_emlrtRTEI);
        r12 = r2->data;
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          r12[i1] = (int32_T)temp_index_data[i1] - 1;
        }
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          i2 = (int32_T)temp_index_data[i1];
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &hc_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        i1 = r3->size[0];
        r3->size[0] = temp_index->size[1];
        emxEnsureCapacity_int32_T(sp, r3, i1, &ef_emlrtRTEI);
        r13 = r3->data;
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          r13[i1] = (int32_T)temp_index_data[i1] - 1;
        }
        b_temp_index[0] = temp_index->size[1];
        b_temp_index[1] = temp_index->size[1];
        iv[0] = r->size[0];
        iv[1] = r->size[1];
        emlrtSubAssignSizeCheckR2012b(&b_temp_index[0], 2, &iv[0], 2,
                                      &eb_emlrtECI, (emlrtCTX)sp);
        b_temp_index[0] = temp_index->size[1];
        b_temp_index[1] = temp_index->size[1];
        if ((r->size[1] == r3->size[0]) && (r2->size[0] == r->size[0])) {
          i1 = r5->size[0] * r5->size[1];
          r5->size[1] = temp_index->size[1];
          r5->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(sp, r5, i1, &me_emlrtRTEI);
          lambda_inv_data = r5->data;
          loop_ub = r2->size[0] * r3->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            lambda_inv_data[i1] = b_z0_data[i1];
          }
        } else {
          i1 = 0;
          i2 = 0;
          vectorUB_tmp = 0;
          b_loop_ub = 0;
          i3 = r5->size[0] * r5->size[1];
          r5->size[1] = temp_index->size[1];
          r5->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(sp, r5, i3, &me_emlrtRTEI);
          lambda_inv_data = r5->data;
          for (i3 = 0; i3 < b_temp_index[0] * b_temp_index[1]; i3++) {
            lambda_inv_data[i2 + r5->size[1] * i1] =
                b_z0_data[b_loop_ub + r->size[1] * vectorUB_tmp];
            i1++;
            vectorUB_tmp++;
            if (i1 > r5->size[0] - 1) {
              i1 = 0;
              i2++;
            }
            if (vectorUB_tmp > r->size[0] - 1) {
              vectorUB_tmp = 0;
              b_loop_ub++;
            }
          }
        }
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          for (i2 = 0; i2 < loop_ub_tmp; i2++) {
            Q_data[r13[i2] + Q->size[1] * r12[i1]] =
                lambda_inv_data[i2 + r5->size[1] * i1];
          }
        }
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          i2 = (int32_T)temp_index_data[i1];
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &jc_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        i1 = r2->size[0];
        r2->size[0] = temp_index->size[1];
        emxEnsureCapacity_int32_T(sp, r2, i1, &jf_emlrtRTEI);
        r12 = r2->data;
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          r12[i1] = (int32_T)temp_index_data[i1] - 1;
        }
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          i2 = (int32_T)temp_index_data[i1];
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &lc_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        i1 = r3->size[0];
        r3->size[0] = temp_index->size[1];
        emxEnsureCapacity_int32_T(sp, r3, i1, &mf_emlrtRTEI);
        r13 = r3->data;
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          r13[i1] = (int32_T)temp_index_data[i1] - 1;
        }
        b_temp_index[0] = temp_index->size[1];
        b_temp_index[1] = temp_index->size[1];
        iv[0] = r1->size[0];
        iv[1] = r1->size[1];
        emlrtSubAssignSizeCheckR2012b(&b_temp_index[0], 2, &iv[0], 2,
                                      &hb_emlrtECI, (emlrtCTX)sp);
        b_temp_index[0] = temp_index->size[1];
        b_temp_index[1] = temp_index->size[1];
        if ((r1->size[1] == r3->size[0]) && (r2->size[0] == r1->size[0])) {
          i1 = r->size[0] * r->size[1];
          r->size[1] = temp_index->size[1];
          r->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(sp, r, i1, &me_emlrtRTEI);
          b_z0_data = r->data;
          loop_ub = r2->size[0] * r3->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_z0_data[i1] = r9[i1];
          }
        } else {
          i1 = 0;
          i2 = 0;
          vectorUB_tmp = 0;
          b_loop_ub = 0;
          i3 = r->size[0] * r->size[1];
          r->size[1] = temp_index->size[1];
          r->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(sp, r, i3, &me_emlrtRTEI);
          b_z0_data = r->data;
          for (i3 = 0; i3 < b_temp_index[0] * b_temp_index[1]; i3++) {
            b_z0_data[i2 + r->size[1] * i1] =
                r9[b_loop_ub + r1->size[1] * vectorUB_tmp];
            i1++;
            vectorUB_tmp++;
            if (i1 > r->size[0] - 1) {
              i1 = 0;
              i2++;
            }
            if (vectorUB_tmp > r1->size[0] - 1) {
              vectorUB_tmp = 0;
              b_loop_ub++;
            }
          }
        }
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          for (i2 = 0; i2 < loop_ub_tmp; i2++) {
            Q_inv_data[r13[i2] + Q_inv->size[1] * r12[i1]] =
                b_z0_data[i2 + r->size[1] * i1];
          }
        }
      } else if (d1 == 3.0) {
        int32_T b_loop_ub;
        int32_T vectorUB_tmp;
        b_temp_index[0] = 1;
        loop_ub_tmp = temp_index->size[1];
        b_temp_index[1] = temp_index->size[1];
        st.site = &bd_emlrtRSI;
        indexShapeCheck(&st, z0->size[0], b_temp_index);
        b_temp_index[0] = 1;
        b_temp_index[1] = temp_index->size[1];
        st.site = &bd_emlrtRSI;
        indexShapeCheck(&st, P->size[0], b_temp_index);
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          if (temp_index_data[i1] !=
              (int32_T)muDoubleScalarFloor(temp_index_data[i1])) {
            emlrtIntegerCheckR2012b(temp_index_data[i1], &kb_emlrtDCI,
                                    (emlrtConstCTX)sp);
          }
          i2 = (int32_T)temp_index_data[i1];
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &yb_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          i2 = (int32_T)temp_index_data[i1];
          if ((i2 < 1) || (i2 > P->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, P->size[0], &bc_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        i1 = b_z0->size[0];
        b_z0->size[0] = temp_index->size[1];
        emxEnsureCapacity_real_T(sp, b_z0, i1, &we_emlrtRTEI);
        b_z0_data = b_z0->data;
        i1 = b_P->size[0];
        b_P->size[0] = temp_index->size[1];
        emxEnsureCapacity_real_T(sp, b_P, i1, &ye_emlrtRTEI);
        b_P_data = b_P->data;
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          d1 = temp_index_data[i1];
          b_z0_data[i1] = z0_data[(int32_T)d1 - 1];
          b_P_data[i1] = P_data[(int32_T)d1 - 1];
        }
        st.site = &bd_emlrtRSI;
        dev_jacob_soc(&st, b_z0, proj_coefficients[(int32_T)temp - 1], b_P,
                      alpha, r, r1);
        r9 = r1->data;
        b_z0_data = r->data;
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          i2 = (int32_T)temp_index_data[i1];
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &gc_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        i1 = r2->size[0];
        r2->size[0] = temp_index->size[1];
        emxEnsureCapacity_int32_T(sp, r2, i1, &cf_emlrtRTEI);
        r12 = r2->data;
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          r12[i1] = (int32_T)temp_index_data[i1] - 1;
        }
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          i2 = (int32_T)temp_index_data[i1];
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &ic_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        i1 = r3->size[0];
        r3->size[0] = temp_index->size[1];
        emxEnsureCapacity_int32_T(sp, r3, i1, &ff_emlrtRTEI);
        r13 = r3->data;
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          r13[i1] = (int32_T)temp_index_data[i1] - 1;
        }
        b_temp_index[0] = temp_index->size[1];
        b_temp_index[1] = temp_index->size[1];
        iv[0] = r->size[0];
        iv[1] = r->size[1];
        emlrtSubAssignSizeCheckR2012b(&b_temp_index[0], 2, &iv[0], 2,
                                      &fb_emlrtECI, (emlrtCTX)sp);
        b_temp_index[0] = temp_index->size[1];
        b_temp_index[1] = temp_index->size[1];
        if ((r->size[1] == r3->size[0]) && (r2->size[0] == r->size[0])) {
          i1 = r5->size[0] * r5->size[1];
          r5->size[1] = temp_index->size[1];
          r5->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(sp, r5, i1, &me_emlrtRTEI);
          lambda_inv_data = r5->data;
          loop_ub = r2->size[0] * r3->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            lambda_inv_data[i1] = b_z0_data[i1];
          }
        } else {
          i1 = 0;
          i2 = 0;
          vectorUB_tmp = 0;
          b_loop_ub = 0;
          i3 = r5->size[0] * r5->size[1];
          r5->size[1] = temp_index->size[1];
          r5->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(sp, r5, i3, &me_emlrtRTEI);
          lambda_inv_data = r5->data;
          for (i3 = 0; i3 < b_temp_index[0] * b_temp_index[1]; i3++) {
            lambda_inv_data[i2 + r5->size[1] * i1] =
                b_z0_data[b_loop_ub + r->size[1] * vectorUB_tmp];
            i1++;
            vectorUB_tmp++;
            if (i1 > r5->size[0] - 1) {
              i1 = 0;
              i2++;
            }
            if (vectorUB_tmp > r->size[0] - 1) {
              vectorUB_tmp = 0;
              b_loop_ub++;
            }
          }
        }
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          for (i2 = 0; i2 < loop_ub_tmp; i2++) {
            Q_data[r13[i2] + Q->size[1] * r12[i1]] =
                lambda_inv_data[i2 + r5->size[1] * i1];
          }
        }
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          i2 = (int32_T)temp_index_data[i1];
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &kc_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        i1 = r2->size[0];
        r2->size[0] = temp_index->size[1];
        emxEnsureCapacity_int32_T(sp, r2, i1, &kf_emlrtRTEI);
        r12 = r2->data;
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          r12[i1] = (int32_T)temp_index_data[i1] - 1;
        }
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          i2 = (int32_T)temp_index_data[i1];
          if ((i2 < 1) || (i2 > i)) {
            emlrtDynamicBoundsCheckR2012b(i2, 1, i, &mc_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        i1 = r3->size[0];
        r3->size[0] = temp_index->size[1];
        emxEnsureCapacity_int32_T(sp, r3, i1, &nf_emlrtRTEI);
        r13 = r3->data;
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          r13[i1] = (int32_T)temp_index_data[i1] - 1;
        }
        b_temp_index[0] = temp_index->size[1];
        b_temp_index[1] = temp_index->size[1];
        iv[0] = r1->size[0];
        iv[1] = r1->size[1];
        emlrtSubAssignSizeCheckR2012b(&b_temp_index[0], 2, &iv[0], 2,
                                      &ib_emlrtECI, (emlrtCTX)sp);
        b_temp_index[0] = temp_index->size[1];
        b_temp_index[1] = temp_index->size[1];
        if ((r1->size[1] == r3->size[0]) && (r2->size[0] == r1->size[0])) {
          i1 = r->size[0] * r->size[1];
          r->size[1] = temp_index->size[1];
          r->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(sp, r, i1, &me_emlrtRTEI);
          b_z0_data = r->data;
          loop_ub = r2->size[0] * r3->size[0];
          for (i1 = 0; i1 < loop_ub; i1++) {
            b_z0_data[i1] = r9[i1];
          }
        } else {
          i1 = 0;
          i2 = 0;
          vectorUB_tmp = 0;
          b_loop_ub = 0;
          i3 = r->size[0] * r->size[1];
          r->size[1] = temp_index->size[1];
          r->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(sp, r, i3, &me_emlrtRTEI);
          b_z0_data = r->data;
          for (i3 = 0; i3 < b_temp_index[0] * b_temp_index[1]; i3++) {
            b_z0_data[i2 + r->size[1] * i1] =
                r9[b_loop_ub + r1->size[1] * vectorUB_tmp];
            i1++;
            vectorUB_tmp++;
            if (i1 > r->size[0] - 1) {
              i1 = 0;
              i2++;
            }
            if (vectorUB_tmp > r1->size[0] - 1) {
              vectorUB_tmp = 0;
              b_loop_ub++;
            }
          }
        }
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          for (i2 = 0; i2 < loop_ub_tmp; i2++) {
            Q_inv_data[r13[i2] + Q_inv->size[1] * r12[i1]] =
                b_z0_data[i2 + r->size[1] * i1];
          }
        }
      }
      /* update */
      temp = d + 1.0;
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
  }
  emxFree_real_T(sp, &b_P);
  emxFree_real_T(sp, &b_z0);
  emxFree_real_T(sp, &r8);
  emxFree_boolean_T(sp, &r7);
  emxFree_boolean_T(sp, &r6);
  emxFree_real_T(sp, &lambda_inv);
  emxFree_real_T(sp, &lambda_between);
  emxFree_real_T(sp, &lambda);
  emxFree_real_T(sp, &r5);
  emxFree_real_T(sp, &r4);
  emxFree_int32_T(sp, &r3);
  emxFree_int32_T(sp, &r2);
  emxFree_real_T(sp, &r1);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &temp_index);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void binary_expand_op_18(const emlrtStack *sp, emxArray_real_T *in1,
                         const emxArray_real_T *in2, const emxArray_real_T *in3,
                         const emxArray_real_T *in4)
{
  const real_T *in2_data;
  const real_T *in3_data;
  const real_T *in4_data;
  real_T *in1_data;
  int32_T i;
  int32_T in4_idx_0;
  int32_T loop_ub;
  int32_T stride_0_0;
  in4_data = in4->data;
  in3_data = in3->data;
  in2_data = in2->data;
  in4_idx_0 = in4->size[1];
  if (in4_idx_0 == 1) {
    loop_ub = in2->size[0];
  } else {
    loop_ub = in4_idx_0;
  }
  i = in1->size[0];
  in1->size[0] = loop_ub;
  emxEnsureCapacity_real_T(sp, in1, i, &hf_emlrtRTEI);
  in1_data = in1->data;
  stride_0_0 = (in2->size[0] != 1);
  in4_idx_0 = (in4_idx_0 != 1);
  for (i = 0; i < loop_ub; i++) {
    in1_data[i] = in2_data[i * stride_0_0] *
                  in3_data[(int32_T)in4_data[i * in4_idx_0] - 1];
  }
}

void dev_S_inv_g(const emlrtStack *sp, const real_T z0[326], real_T nx,
                 real_T nu, const real_T proj_index_all[660],
                 const real_T proj_coefficients_all[660], const real_T P[326],
                 real_T alpha, emxArray_real_T *Q, emxArray_real_T *Q_inv)
{
  emlrtStack st;
  emxArray_real_T r9;
  emxArray_real_T *P_temp;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r2;
  emxArray_real_T *r3;
  emxArray_real_T *r4;
  emxArray_real_T *r5;
  emxArray_real_T *r6;
  emxArray_real_T *z_temp_index;
  real_T b;
  real_T i;
  real_T *P_temp_data;
  real_T *Q_data;
  real_T *Q_inv_data;
  real_T *r8;
  real_T *z_temp_index_data;
  int32_T b_Q[2];
  int32_T iv[2];
  int32_T iv1[2];
  int32_T b_i;
  int32_T b_z_temp_index;
  int32_T c_i;
  int32_T c_z_temp_index;
  int32_T i1;
  int32_T i4;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  st.prev = sp;
  st.tls = sp->tls;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /*  the output is the eigenvalue decomposition of S_inv. P is the diagonal */
  /*  matrix in the objectfunciton */
  b = nx + nu;
  if (!(b >= 0.0)) {
    emlrtNonNegativeCheckR2012b(b, &eb_emlrtDCI, (emlrtConstCTX)sp);
  }
  i = (int32_T)muDoubleScalarFloor(b);
  if (b != i) {
    emlrtIntegerCheckR2012b(b, &db_emlrtDCI, (emlrtConstCTX)sp);
  }
  b_i = Q->size[0] * Q->size[1] * Q->size[2];
  Q->size[2] = 30;
  loop_ub = (int32_T)b;
  Q->size[1] = (int32_T)b;
  Q->size[0] = (int32_T)b;
  emxEnsureCapacity_real_T(sp, Q, b_i, &ge_emlrtRTEI);
  Q_data = Q->data;
  if (b != i) {
    emlrtIntegerCheckR2012b(b, &fb_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (!(b >= 0.0)) {
    emlrtNonNegativeCheckR2012b(b, &gb_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (b != i) {
    emlrtIntegerCheckR2012b(b, &fb_emlrtDCI, (emlrtConstCTX)sp);
  }
  loop_ub_tmp = 30 * (int32_T)b * (int32_T)b;
  for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
    Q_data[b_i] = 0.0;
  }
  /*  1:n-1 are nx+nu**2 but the Nth is nx**2. */
  b_i = Q_inv->size[0] * Q_inv->size[1] * Q_inv->size[2];
  Q_inv->size[2] = 30;
  Q_inv->size[1] = (int32_T)b;
  Q_inv->size[0] = (int32_T)b;
  emxEnsureCapacity_real_T(sp, Q_inv, b_i, &he_emlrtRTEI);
  Q_inv_data = Q_inv->data;
  for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
    Q_inv_data[b_i] = 0.0;
  }
  emxInit_real_T(sp, &z_temp_index, 2, &je_emlrtRTEI);
  emxInit_real_T(sp, &P_temp, 1, &le_emlrtRTEI);
  emxInit_real_T(sp, &r, 2, &qe_emlrtRTEI);
  emxInit_real_T(sp, &r1, 2, &qe_emlrtRTEI);
  emxInit_real_T(sp, &r2, 2, &ke_emlrtRTEI);
  emxInit_real_T(sp, &r3, 2, &me_emlrtRTEI);
  emxInit_real_T(sp, &r4, 2, &oe_emlrtRTEI);
  emxInit_real_T(sp, &r5, 2, &ne_emlrtRTEI);
  emxInit_real_T(sp, &r6, 2, &pe_emlrtRTEI);
  for (c_i = 0; c_i < 30; c_i++) {
    real_T proj_temp_coeff[22];
    real_T proj_temp_index[22];
    int32_T b_loop_ub;
    int32_T proj_temp_index_tmp;
    for (b_i = 0; b_i < 2; b_i++) {
      for (i1 = 0; i1 < 11; i1++) {
        loop_ub_tmp = (c_i + 30 * i1) + 330 * b_i;
        proj_temp_index_tmp = i1 + 11 * b_i;
        proj_temp_index[proj_temp_index_tmp] = proj_index_all[loop_ub_tmp];
        proj_temp_coeff[proj_temp_index_tmp] =
            proj_coefficients_all[loop_ub_tmp];
      }
    }
    if (c_i + 1 < 30) {
      if (b < 1.0) {
        z_temp_index->size[1] = 0;
      } else {
        loop_ub_tmp = (int32_T)(b - 1.0) + 1;
        b_i = z_temp_index->size[0] * z_temp_index->size[1];
        z_temp_index->size[1] = (int32_T)(b - 1.0) + 1;
        z_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(sp, z_temp_index, b_i, &fc_emlrtRTEI);
        z_temp_index_data = z_temp_index->data;
        for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
          z_temp_index_data[b_i] = (real_T)b_i + 1.0;
        }
      }
      b_i = z_temp_index->size[0] * z_temp_index->size[1];
      z_temp_index->size[0] = 1;
      emxEnsureCapacity_real_T(sp, z_temp_index, b_i, &je_emlrtRTEI);
      z_temp_index_data = z_temp_index->data;
      i = (((real_T)c_i + 1.0) - 1.0) * b;
      b_loop_ub = z_temp_index->size[1] - 1;
      loop_ub_tmp = (z_temp_index->size[1] / 2) << 1;
      proj_temp_index_tmp = loop_ub_tmp - 2;
      for (b_i = 0; b_i <= proj_temp_index_tmp; b_i += 2) {
        __m128d r7;
        r7 = _mm_loadu_pd(&z_temp_index_data[b_i]);
        _mm_storeu_pd(&z_temp_index_data[b_i], _mm_add_pd(_mm_set1_pd(i), r7));
      }
      for (b_i = loop_ub_tmp; b_i <= b_loop_ub; b_i++) {
        z_temp_index_data[b_i] += i;
      }
    } else {
      if (muDoubleScalarIsNaN(nx)) {
        b_i = z_temp_index->size[0] * z_temp_index->size[1];
        z_temp_index->size[1] = 1;
        z_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(sp, z_temp_index, b_i, &fc_emlrtRTEI);
        z_temp_index_data = z_temp_index->data;
        z_temp_index_data[0] = rtNaN;
      } else if (nx < 1.0) {
        z_temp_index->size[1] = 0;
      } else {
        loop_ub_tmp = (int32_T)(nx - 1.0) + 1;
        b_i = z_temp_index->size[0] * z_temp_index->size[1];
        z_temp_index->size[1] = (int32_T)(nx - 1.0) + 1;
        z_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(sp, z_temp_index, b_i, &fc_emlrtRTEI);
        z_temp_index_data = z_temp_index->data;
        for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
          z_temp_index_data[b_i] = (real_T)b_i + 1.0;
        }
      }
      b_i = z_temp_index->size[0] * z_temp_index->size[1];
      z_temp_index->size[0] = 1;
      emxEnsureCapacity_real_T(sp, z_temp_index, b_i, &ie_emlrtRTEI);
      z_temp_index_data = z_temp_index->data;
      i = 29.0 * b;
      b_loop_ub = z_temp_index->size[1] - 1;
      loop_ub_tmp = (z_temp_index->size[1] / 2) << 1;
      proj_temp_index_tmp = loop_ub_tmp - 2;
      for (b_i = 0; b_i <= proj_temp_index_tmp; b_i += 2) {
        __m128d r7;
        r7 = _mm_loadu_pd(&z_temp_index_data[b_i]);
        _mm_storeu_pd(&z_temp_index_data[b_i], _mm_add_pd(_mm_set1_pd(i), r7));
      }
      for (b_i = loop_ub_tmp; b_i <= b_loop_ub; b_i++) {
        z_temp_index_data[b_i] += i;
      }
    }
    b_loop_ub = z_temp_index->size[1];
    b_i = r2->size[0] * r2->size[1];
    r2->size[1] = z_temp_index->size[1];
    r2->size[0] = 1;
    emxEnsureCapacity_real_T(sp, r2, b_i, &ke_emlrtRTEI);
    r8 = r2->data;
    for (b_i = 0; b_i < b_loop_ub; b_i++) {
      if (z_temp_index_data[b_i] !=
          (int32_T)muDoubleScalarFloor(z_temp_index_data[b_i])) {
        emlrtIntegerCheckR2012b(z_temp_index_data[b_i], &hb_emlrtDCI,
                                (emlrtConstCTX)sp);
      }
      i1 = (int32_T)z_temp_index_data[b_i];
      if ((i1 < 1) || (i1 > 326)) {
        emlrtDynamicBoundsCheckR2012b(i1, 1, 326, &vb_emlrtBCI,
                                      (emlrtConstCTX)sp);
      }
      r8[b_i] = z0[i1 - 1];
    }
    b_i = P_temp->size[0];
    P_temp->size[0] = z_temp_index->size[1];
    emxEnsureCapacity_real_T(sp, P_temp, b_i, &le_emlrtRTEI);
    P_temp_data = P_temp->data;
    for (b_i = 0; b_i < b_loop_ub; b_i++) {
      P_temp_data[b_i] = P[(int32_T)z_temp_index_data[b_i] - 1];
    }
    if (c_i + 1 < 30) {
      int32_T i2;
      int32_T i3;
      loop_ub_tmp = z_temp_index->size[1];
      r9 = *r2;
      c_z_temp_index = loop_ub_tmp;
      r9.size = &c_z_temp_index;
      r9.numDimensions = 1;
      st.site = &uc_emlrtRSI;
      jacob_D_unit(&st, &r9, proj_temp_index, proj_temp_coeff, P_temp, alpha, r,
                   r1);
      r8 = r1->data;
      P_temp_data = r->data;
      b_loop_ub = Q->size[0];
      b_Q[0] = Q->size[0];
      proj_temp_index_tmp = Q->size[1];
      b_Q[1] = Q->size[1];
      iv[0] = r->size[0];
      iv[1] = r->size[1];
      emlrtSubAssignSizeCheckR2012b(&b_Q[0], 2, &iv[0], 2, &y_emlrtECI,
                                    (emlrtCTX)sp);
      iv[0] = Q->size[0];
      iv[1] = Q->size[1];
      if ((r->size[1] == Q->size[1]) && (r->size[0] == Q->size[0])) {
        b_i = r3->size[0] * r3->size[1];
        r3->size[1] = Q->size[1];
        r3->size[0] = Q->size[0];
        emxEnsureCapacity_real_T(sp, r3, b_i, &me_emlrtRTEI);
        z_temp_index_data = r3->data;
        loop_ub_tmp = Q->size[1] * Q->size[0];
        for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
          z_temp_index_data[b_i] = P_temp_data[b_i];
        }
      } else {
        b_i = 0;
        i1 = 0;
        i2 = 0;
        i3 = 0;
        i4 = r3->size[0] * r3->size[1];
        r3->size[1] = Q->size[1];
        r3->size[0] = Q->size[0];
        emxEnsureCapacity_real_T(sp, r3, i4, &me_emlrtRTEI);
        z_temp_index_data = r3->data;
        for (i4 = 0; i4 < iv[0] * iv[1]; i4++) {
          z_temp_index_data[i1 + r3->size[1] * b_i] =
              P_temp_data[i3 + r->size[1] * i2];
          b_i++;
          i2++;
          if (b_i > r3->size[0] - 1) {
            b_i = 0;
            i1++;
          }
          if (i2 > r->size[0] - 1) {
            i2 = 0;
            i3++;
          }
        }
      }
      loop_ub_tmp = Q->size[1];
      for (b_i = 0; b_i < b_loop_ub; b_i++) {
        for (i1 = 0; i1 < proj_temp_index_tmp; i1++) {
          Q_data[(c_i + 30 * i1) + 30 * Q->size[1] * b_i] =
              z_temp_index_data[i1 + loop_ub_tmp * b_i];
        }
      }
      b_Q[0] = (int32_T)b;
      b_Q[1] = (int32_T)b;
      iv[0] = r1->size[0];
      iv[1] = r1->size[1];
      emlrtSubAssignSizeCheckR2012b(&b_Q[0], 2, &iv[0], 2, &bb_emlrtECI,
                                    (emlrtCTX)sp);
      iv[0] = (int32_T)b;
      iv[1] = (int32_T)b;
      if ((r1->size[1] == Q_inv->size[1]) && (r1->size[0] == Q_inv->size[0])) {
        b_i = r4->size[0] * r4->size[1];
        r4->size[1] = (int32_T)b;
        r4->size[0] = (int32_T)b;
        emxEnsureCapacity_real_T(sp, r4, b_i, &oe_emlrtRTEI);
        P_temp_data = r4->data;
        b_loop_ub = Q_inv->size[1] * Q_inv->size[0];
        for (b_i = 0; b_i < b_loop_ub; b_i++) {
          P_temp_data[b_i] = r8[b_i];
        }
      } else {
        b_i = 0;
        i1 = 0;
        i2 = 0;
        i3 = 0;
        i4 = r4->size[0] * r4->size[1];
        r4->size[1] = (int32_T)b;
        r4->size[0] = (int32_T)b;
        emxEnsureCapacity_real_T(sp, r4, i4, &oe_emlrtRTEI);
        P_temp_data = r4->data;
        for (i4 = 0; i4 < iv[0] * iv[1]; i4++) {
          P_temp_data[i1 + r4->size[1] * b_i] = r8[i3 + r1->size[1] * i2];
          b_i++;
          i2++;
          if (b_i > r4->size[0] - 1) {
            b_i = 0;
            i1++;
          }
          if (i2 > r1->size[0] - 1) {
            i2 = 0;
            i3++;
          }
        }
      }
      for (b_i = 0; b_i < loop_ub; b_i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Q_inv_data[(c_i + 30 * i1) + 30 * Q_inv->size[1] * b_i] =
              P_temp_data[i1 + (int32_T)b * b_i];
        }
      }
    } else {
      int32_T i2;
      int32_T i3;
      loop_ub_tmp = z_temp_index->size[1];
      r9 = *r2;
      b_z_temp_index = loop_ub_tmp;
      r9.size = &b_z_temp_index;
      r9.numDimensions = 1;
      st.site = &vc_emlrtRSI;
      jacob_D_unit(&st, &r9, proj_temp_index, proj_temp_coeff, P_temp, alpha, r,
                   r1);
      r8 = r1->data;
      P_temp_data = r->data;
      if (nx < 1.0) {
        i1 = 0;
        b_i = 0;
      } else {
        if (Q->size[0] < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, Q->size[0], &nb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        b_i = (int32_T)muDoubleScalarFloor(nx);
        if (nx != b_i) {
          emlrtIntegerCheckR2012b(nx, &y_emlrtDCI, (emlrtConstCTX)sp);
        }
        i1 = (int32_T)nx;
        if (i1 > Q->size[0]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)nx, 1, Q->size[0],
                                        &ob_emlrtBCI, (emlrtConstCTX)sp);
        }
        if (Q->size[1] < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, Q->size[1], &pb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (i1 != b_i) {
          emlrtIntegerCheckR2012b(nx, &ab_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (i1 > Q->size[1]) {
          emlrtDynamicBoundsCheckR2012b((int32_T)nx, 1, Q->size[1],
                                        &qb_emlrtBCI, (emlrtConstCTX)sp);
        }
        b_i = i1;
      }
      b_Q[0] = i1;
      b_Q[1] = b_i;
      iv1[0] = r->size[0];
      iv1[1] = r->size[1];
      emlrtSubAssignSizeCheckR2012b(&b_Q[0], 2, &iv1[0], 2, &ab_emlrtECI,
                                    (emlrtCTX)sp);
      iv[0] = i1;
      iv[1] = b_i;
      if ((r->size[1] == b_i) && (i1 == r->size[0])) {
        i2 = r5->size[0] * r5->size[1];
        r5->size[1] = b_i;
        r5->size[0] = i1;
        emxEnsureCapacity_real_T(sp, r5, i2, &ne_emlrtRTEI);
        z_temp_index_data = r5->data;
        loop_ub_tmp = i1 * b_i;
        for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
          z_temp_index_data[b_i] = P_temp_data[b_i];
        }
      } else {
        i2 = 0;
        i3 = 0;
        i4 = 0;
        loop_ub_tmp = 0;
        proj_temp_index_tmp = r5->size[0] * r5->size[1];
        r5->size[1] = b_i;
        r5->size[0] = i1;
        emxEnsureCapacity_real_T(sp, r5, proj_temp_index_tmp, &ne_emlrtRTEI);
        z_temp_index_data = r5->data;
        for (b_i = 0; b_i < iv[0] * iv[1]; b_i++) {
          z_temp_index_data[i3 + r5->size[1] * i2] =
              P_temp_data[loop_ub_tmp + r->size[1] * i4];
          i2++;
          i4++;
          if (i2 > r5->size[0] - 1) {
            i2 = 0;
            i3++;
          }
          if (i4 > r->size[0] - 1) {
            i4 = 0;
            loop_ub_tmp++;
          }
        }
      }
      loop_ub_tmp = r5->size[1];
      b_loop_ub = r5->size[0];
      for (b_i = 0; b_i < b_loop_ub; b_i++) {
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          Q_data[(30 * i1 + 30 * Q->size[1] * b_i) + 29] =
              z_temp_index_data[i1 + loop_ub_tmp * b_i];
        }
      }
      if (nx < 1.0) {
        i1 = 0;
        b_i = 0;
      } else {
        if ((int32_T)b < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)b, &rb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        b_i = (int32_T)muDoubleScalarFloor(nx);
        if (nx != b_i) {
          emlrtIntegerCheckR2012b(nx, &bb_emlrtDCI, (emlrtConstCTX)sp);
        }
        i1 = (int32_T)nx;
        if (i1 > (int32_T)b) {
          emlrtDynamicBoundsCheckR2012b((int32_T)nx, 1, (int32_T)b,
                                        &sb_emlrtBCI, (emlrtConstCTX)sp);
        }
        if ((int32_T)b < 1) {
          emlrtDynamicBoundsCheckR2012b(1, 1, (int32_T)b, &tb_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        if (i1 != b_i) {
          emlrtIntegerCheckR2012b(nx, &cb_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (i1 > (int32_T)b) {
          emlrtDynamicBoundsCheckR2012b((int32_T)nx, 1, (int32_T)b,
                                        &ub_emlrtBCI, (emlrtConstCTX)sp);
        }
        b_i = i1;
      }
      b_Q[0] = i1;
      b_Q[1] = b_i;
      iv1[0] = r1->size[0];
      iv1[1] = r1->size[1];
      emlrtSubAssignSizeCheckR2012b(&b_Q[0], 2, &iv1[0], 2, &cb_emlrtECI,
                                    (emlrtCTX)sp);
      iv[0] = i1;
      iv[1] = b_i;
      if ((r1->size[1] == b_i) && (i1 == r1->size[0])) {
        i2 = r6->size[0] * r6->size[1];
        r6->size[1] = b_i;
        r6->size[0] = i1;
        emxEnsureCapacity_real_T(sp, r6, i2, &pe_emlrtRTEI);
        P_temp_data = r6->data;
        loop_ub_tmp = i1 * b_i;
        for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
          P_temp_data[b_i] = r8[b_i];
        }
      } else {
        i2 = 0;
        i3 = 0;
        i4 = 0;
        loop_ub_tmp = 0;
        proj_temp_index_tmp = r6->size[0] * r6->size[1];
        r6->size[1] = b_i;
        r6->size[0] = i1;
        emxEnsureCapacity_real_T(sp, r6, proj_temp_index_tmp, &pe_emlrtRTEI);
        P_temp_data = r6->data;
        for (b_i = 0; b_i < iv[0] * iv[1]; b_i++) {
          P_temp_data[i3 + r6->size[1] * i2] =
              r8[loop_ub_tmp + r1->size[1] * i4];
          i2++;
          i4++;
          if (i2 > r6->size[0] - 1) {
            i2 = 0;
            i3++;
          }
          if (i4 > r1->size[0] - 1) {
            i4 = 0;
            loop_ub_tmp++;
          }
        }
      }
      loop_ub_tmp = r6->size[1];
      b_loop_ub = r6->size[0];
      for (b_i = 0; b_i < b_loop_ub; b_i++) {
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          Q_inv_data[(30 * i1 + 30 * Q_inv->size[1] * b_i) + 29] =
              P_temp_data[i1 + loop_ub_tmp * b_i];
        }
      }
      /* Specified! only for the LCvx case */
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emxFree_real_T(sp, &r6);
  emxFree_real_T(sp, &r5);
  emxFree_real_T(sp, &r4);
  emxFree_real_T(sp, &r3);
  emxFree_real_T(sp, &r2);
  emxFree_real_T(sp, &r1);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &P_temp);
  emxFree_real_T(sp, &z_temp_index);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (dev_S_inv_g.c) */
