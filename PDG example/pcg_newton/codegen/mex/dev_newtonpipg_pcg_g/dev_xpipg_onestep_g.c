/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_xpipg_onestep_g.c
 *
 * Code generation for function 'dev_xpipg_onestep_g'
 *
 */

/* Include files */
#include "dev_xpipg_onestep_g.h"
#include "dev_HZ_g.h"
#include "dev_HtZ_g.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_emxutil.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "indexShapeCheck.h"
#include "ixfun.h"
#include "proj_D_unit_with_affinejacobian.h"
#include "rt_nonfinite.h"
#include "blas.h"
#include "mwmathutil.h"
#include <emmintrin.h>
#include <stddef.h>
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo lb_emlrtRSI = {
    8,                     /* lineNo */
    "dev_xpipg_onestep_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" /* pathName */
};

static emlrtRSInfo mb_emlrtRSI = {
    9,                     /* lineNo */
    "dev_xpipg_onestep_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" /* pathName */
};

static emlrtRSInfo nb_emlrtRSI = {
    11,                    /* lineNo */
    "dev_xpipg_onestep_g", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" /* pathName */
};

static emlrtRSInfo ob_emlrtRSI = {
    16,                           /* lineNo */
    "proj_D_with_affinejacobian", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" /* pathName */
};

static emlrtRSInfo pb_emlrtRSI = {
    10,                                /* lineNo */
    "proj_D_unit_with_affinejacobian", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pathName */
};

static emlrtRSInfo qb_emlrtRSI = {
    13,                                /* lineNo */
    "proj_D_unit_with_affinejacobian", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pathName */
};

static emlrtRSInfo rb_emlrtRSI = {
    15,                                /* lineNo */
    "proj_D_unit_with_affinejacobian", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pathName */
};

static emlrtRSInfo sb_emlrtRSI = {
    18,                                /* lineNo */
    "proj_D_unit_with_affinejacobian", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pathName */
};

static emlrtRSInfo tb_emlrtRSI = {
    20,                                /* lineNo */
    "proj_D_unit_with_affinejacobian", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pathName */
};

static emlrtRSInfo vb_emlrtRSI = {
    2,          /* lineNo */
    "proj_box", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_box.m" /* pathName */
};

static emlrtRSInfo wb_emlrtRSI = {
    15,    /* lineNo */
    "min", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" /* pathName
                                                                        */
};

static emlrtRSInfo xb_emlrtRSI =
    {
        31,         /* lineNo */
        "minOrMax", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" /* pathName */
};

static emlrtRSInfo yb_emlrtRSI =
    {
        67,         /* lineNo */
        "minimum2", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" /* pathName */
};

static emlrtRSInfo ac_emlrtRSI = {
    63,               /* lineNo */
    "binaryMinOrMax", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+"
    "internal\\binaryMinOrMax.m" /* pathName */
};

static emlrtRSInfo bc_emlrtRSI = {
    57,      /* lineNo */
    "ixfun", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" /* pathName
                                                                            */
};

static emlrtRSInfo cc_emlrtRSI = {
    102,                          /* lineNo */
    "binaryImplicitExpansionFun", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\ixfun.m" /* pathName
                                                                            */
};

static emlrtRSInfo dc_emlrtRSI = {
    15,    /* lineNo */
    "max", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\max.m" /* pathName
                                                                        */
};

static emlrtRSInfo ec_emlrtRSI =
    {
        29,         /* lineNo */
        "minOrMax", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" /* pathName */
};

static emlrtRSInfo fc_emlrtRSI =
    {
        58,         /* lineNo */
        "maximum2", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\minOrMax."
        "m" /* pathName */
};

static emlrtRSInfo gc_emlrtRSI = {
    3,          /* lineNo */
    "proj_soc", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_soc.m" /* pathName */
};

static emlrtRSInfo hc_emlrtRSI = {
    10,         /* lineNo */
    "proj_soc", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_soc.m" /* pathName */
};

static emlrtRSInfo ic_emlrtRSI = {
    11,         /* lineNo */
    "proj_soc", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_soc.m" /* pathName */
};

static emlrtECInfo j_emlrtECI = {
    1,           /* nDims */
    28,          /* lineNo */
    19,          /* colNo */
    "jacob_box", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtBCInfo p_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    3,          /* lineNo */
    16,         /* colNo */
    "v0",       /* aName */
    "proj_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_soc.m", /* pName */
    0                   /* checkKind */
};

static emlrtBCInfo q_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    3,          /* lineNo */
    13,         /* colNo */
    "v0",       /* aName */
    "proj_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_soc.m", /* pName */
    0                   /* checkKind */
};

static emlrtBCInfo r_emlrtBCI = {
    -1,         /* iFirst */
    -1,         /* iLast */
    2,          /* lineNo */
    13,         /* colNo */
    "v0",       /* aName */
    "proj_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_soc.m", /* pName */
    0                   /* checkKind */
};

static emlrtECInfo k_emlrtECI = {
    -1,                                /* nDims */
    15,                                /* lineNo */
    9,                                 /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtECInfo l_emlrtECI = {
    -1,                                /* nDims */
    20,                                /* lineNo */
    9,                                 /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtECInfo m_emlrtECI = {
    -1,                                /* nDims */
    18,                                /* lineNo */
    9,                                 /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtECInfo n_emlrtECI = {
    -1,                                /* nDims */
    13,                                /* lineNo */
    9,                                 /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtBCInfo s_emlrtBCI = {
    1,                                 /* iFirst */
    11,                                /* iLast */
    7,                                 /* lineNo */
    22,                                /* colNo */
    "proj_index",                      /* aName */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", /* pName */
    0                                          /* checkKind */
};

static emlrtDCInfo q_emlrtDCI = {
    7,                                 /* lineNo */
    22,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", /* pName */
    1                                          /* checkKind */
};

static emlrtBCInfo t_emlrtBCI = {
    1,                            /* iFirst */
    30,                           /* iLast */
    8,                            /* lineNo */
    23,                           /* colNo */
    "proj_index_all",             /* aName */
    "proj_D_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m", /* pName */
    0                                     /* checkKind */
};

static emlrtRTEInfo m_emlrtRTEI = {
    7,                            /* lineNo */
    9,                            /* colNo */
    "proj_D_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" /* pName */
};

static emlrtECInfo o_emlrtECI = {
    1,                     /* nDims */
    15,                    /* lineNo */
    5,                     /* colNo */
    "dev_xpipg_onestep_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" /* pName */
};

static emlrtECInfo p_emlrtECI = {
    1,                     /* nDims */
    14,                    /* lineNo */
    9,                     /* colNo */
    "dev_xpipg_onestep_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" /* pName */
};

static emlrtECInfo q_emlrtECI = {
    1,                     /* nDims */
    13,                    /* lineNo */
    8,                     /* colNo */
    "dev_xpipg_onestep_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" /* pName */
};

static emlrtECInfo r_emlrtECI = {
    1,                     /* nDims */
    11,                    /* lineNo */
    13,                    /* colNo */
    "dev_xpipg_onestep_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" /* pName */
};

static emlrtECInfo s_emlrtECI = {
    1,                     /* nDims */
    8,                     /* lineNo */
    14,                    /* colNo */
    "dev_xpipg_onestep_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" /* pName */
};

static emlrtECInfo t_emlrtECI = {
    1,                     /* nDims */
    8,                     /* lineNo */
    26,                    /* colNo */
    "dev_xpipg_onestep_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" /* pName */
};

static emlrtBCInfo u_emlrtBCI = {
    1,                            /* iFirst */
    326,                          /* iLast */
    15,                           /* lineNo */
    18,                           /* colNo */
    "z0",                         /* aName */
    "proj_D_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m", /* pName */
    0                                     /* checkKind */
};

static emlrtDCInfo r_emlrtDCI = {
    15,                           /* lineNo */
    18,                           /* colNo */
    "proj_D_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m", /* pName */
    1                                     /* checkKind */
};

static emlrtDCInfo s_emlrtDCI = {
    13,                                /* lineNo */
    11,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", /* pName */
    1                                          /* checkKind */
};

static emlrtBCInfo v_emlrtBCI = {
    -1,                                /* iFirst */
    -1,                                /* iLast */
    13,                                /* lineNo */
    11,                                /* colNo */
    "z",                               /* aName */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", /* pName */
    0                                          /* checkKind */
};

static emlrtDCInfo t_emlrtDCI = {
    18,                                /* lineNo */
    11,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", /* pName */
    1                                          /* checkKind */
};

static emlrtBCInfo w_emlrtBCI = {
    -1,                                /* iFirst */
    -1,                                /* iLast */
    18,                                /* lineNo */
    11,                                /* colNo */
    "z",                               /* aName */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", /* pName */
    0                                          /* checkKind */
};

static emlrtDCInfo u_emlrtDCI = {
    20,                                /* lineNo */
    11,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", /* pName */
    1                                          /* checkKind */
};

static emlrtBCInfo x_emlrtBCI = {
    -1,                                /* iFirst */
    -1,                                /* iLast */
    20,                                /* lineNo */
    11,                                /* colNo */
    "z",                               /* aName */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", /* pName */
    0                                          /* checkKind */
};

static emlrtBCInfo y_emlrtBCI = {
    -1,                                /* iFirst */
    -1,                                /* iLast */
    13,                                /* lineNo */
    37,                                /* colNo */
    "z0",                              /* aName */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", /* pName */
    0                                          /* checkKind */
};

static emlrtBCInfo ab_emlrtBCI = {
    1,                                 /* iFirst */
    11,                                /* iLast */
    13,                                /* lineNo */
    69,                                /* colNo */
    "proj_coefficients",               /* aName */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", /* pName */
    0                                          /* checkKind */
};

static emlrtBCInfo bb_emlrtBCI = {
    -1,                                /* iFirst */
    -1,                                /* iLast */
    18,                                /* lineNo */
    38,                                /* colNo */
    "z0",                              /* aName */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", /* pName */
    0                                          /* checkKind */
};

static emlrtBCInfo cb_emlrtBCI = {
    -1,                                /* iFirst */
    -1,                                /* iLast */
    20,                                /* lineNo */
    37,                                /* colNo */
    "z0",                              /* aName */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", /* pName */
    0                                          /* checkKind */
};

static emlrtBCInfo db_emlrtBCI = {
    -1,                                /* iFirst */
    -1,                                /* iLast */
    15,                                /* lineNo */
    14,                                /* colNo */
    "J_af",                            /* aName */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", /* pName */
    0                                          /* checkKind */
};

static emlrtBCInfo eb_emlrtBCI = {
    -1,                                /* iFirst */
    -1,                                /* iLast */
    15,                                /* lineNo */
    41,                                /* colNo */
    "z0",                              /* aName */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m", /* pName */
    0                                          /* checkKind */
};

static emlrtRTEInfo jc_emlrtRTEI = {
    13,                           /* lineNo */
    9,                            /* colNo */
    "proj_D_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo kc_emlrtRTEI = {
    11,                           /* lineNo */
    9,                            /* colNo */
    "proj_D_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo lc_emlrtRTEI = {
    15,                           /* lineNo */
    15,                           /* colNo */
    "proj_D_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo mc_emlrtRTEI = {
    13,                    /* lineNo */
    8,                     /* colNo */
    "dev_xpipg_onestep_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" /* pName */
};

static emlrtRTEInfo nc_emlrtRTEI = {
    4,                                 /* lineNo */
    1,                                 /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo oc_emlrtRTEI = {
    5,                                 /* lineNo */
    1,                                 /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo pc_emlrtRTEI = {
    14,                    /* lineNo */
    9,                     /* colNo */
    "dev_xpipg_onestep_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" /* pName */
};

static emlrtRTEInfo qc_emlrtRTEI = {
    16,                           /* lineNo */
    8,                            /* colNo */
    "proj_D_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo rc_emlrtRTEI = {
    10,                                /* lineNo */
    5,                                 /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo sc_emlrtRTEI = {
    15,                    /* lineNo */
    22,                    /* colNo */
    "dev_xpipg_onestep_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" /* pName */
};

static emlrtRTEInfo tc_emlrtRTEI = {
    13,                                /* lineNo */
    11,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo uc_emlrtRTEI = {
    18,                                /* lineNo */
    11,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo vc_emlrtRTEI = {
    20,                                /* lineNo */
    11,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo wc_emlrtRTEI = {
    13,                                /* lineNo */
    34,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo xc_emlrtRTEI = {
    18,                                /* lineNo */
    35,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo yc_emlrtRTEI = {
    20,                                /* lineNo */
    34,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo ad_emlrtRTEI = {
    13,                                /* lineNo */
    49,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo bd_emlrtRTEI = {
    14,                                /* lineNo */
    15,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo cd_emlrtRTEI = {
    18,                                /* lineNo */
    25,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo dd_emlrtRTEI = {
    3,          /* lineNo */
    5,          /* colNo */
    "proj_soc", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_soc.m" /* pName */
};

static emlrtRTEInfo ed_emlrtRTEI = {
    15,    /* lineNo */
    5,     /* colNo */
    "min", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\datafun\\min.m" /* pName
                                                                        */
};

static emlrtRTEInfo fd_emlrtRTEI = {
    20,                                /* lineNo */
    25,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo gd_emlrtRTEI = {
    13,                                /* lineNo */
    25,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo hd_emlrtRTEI = {
    15,                                /* lineNo */
    14,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo id_emlrtRTEI = {
    15,                                /* lineNo */
    38,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo jd_emlrtRTEI = {
    28,                                /* lineNo */
    20,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo kd_emlrtRTEI = {
    28,                                /* lineNo */
    27,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo md_emlrtRTEI = {
    8,                     /* lineNo */
    26,                    /* colNo */
    "dev_xpipg_onestep_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" /* pName */
};

static emlrtRTEInfo nd_emlrtRTEI = {
    1,                     /* lineNo */
    74,                    /* colNo */
    "dev_xpipg_onestep_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_xpipg_onestep_g.m" /* pName */
};

static emlrtRTEInfo od_emlrtRTEI = {
    20,                                /* lineNo */
    9,                                 /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtRTEInfo pd_emlrtRTEI = {
    2,          /* lineNo */
    16,         /* colNo */
    "proj_box", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_box.m" /* pName */
};

static emlrtRTEInfo qd_emlrtRTEI = {
    28,                                /* lineNo */
    19,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

static emlrtRSInfo yi_emlrtRSI = {
    28,          /* lineNo */
    "jacob_box", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pathName */
};

/* Function Declarations */
static void binary_expand_op_10(const emlrtStack *sp, const emlrtRSInfo in2,
                                const real_T in3[3190], const real_T in4[326],
                                const emxArray_real_T *in5, real_T in6,
                                real_T in1[290]);

static void binary_expand_op_11(real_T in1[326], const emxArray_real_T *in2,
                                real_T in3, const real_T in4[326],
                                const real_T in5[326],
                                const emxArray_real_T *in6);

static void binary_expand_op_6(real_T in1[616], const real_T in2[326],
                               const real_T in3[290],
                               const emxArray_real_T *in4);

static void binary_expand_op_7(real_T in1[290], const emxArray_real_T *in2,
                               real_T in3);

static void binary_expand_op_8(real_T in1[326], const emxArray_real_T *in2,
                               real_T in3);

/* Function Definitions */
static void binary_expand_op_10(const emlrtStack *sp, const emlrtRSInfo in2,
                                const real_T in3[3190], const real_T in4[326],
                                const emxArray_real_T *in5, real_T in6,
                                real_T in1[290])
{
  emlrtStack st;
  real_T dv[326];
  const real_T *in5_data;
  int32_T i;
  int32_T stride_0_0;
  st.prev = sp;
  st.tls = sp->tls;
  in5_data = in5->data;
  stride_0_0 = (in5->size[0] != 1);
  for (i = 0; i < 326; i++) {
    dv[i] = 2.0 * in4[i] - in5_data[i * stride_0_0];
  }
  st.site = (emlrtRSInfo *)&in2;
  b_dev_HZ_g(&st, in3, dv, in6, in1);
}

static void binary_expand_op_11(real_T in1[326], const emxArray_real_T *in2,
                                real_T in3, const real_T in4[326],
                                const real_T in5[326],
                                const emxArray_real_T *in6)
{
  const real_T *in2_data;
  const real_T *in6_data;
  int32_T i;
  int32_T stride_0_0_tmp;
  int32_T stride_2_0;
  in6_data = in6->data;
  in2_data = in2->data;
  stride_0_0_tmp = (in2->size[0] != 1);
  stride_2_0 = (in6->size[0] != 1);
  for (i = 0; i < 326; i++) {
    real_T d;
    d = in2_data[i * stride_0_0_tmp];
    in1[i] = d - in3 * ((in4[i] * d + in5[i]) + in6_data[i * stride_2_0]);
  }
}

static void binary_expand_op_6(real_T in1[616], const real_T in2[326],
                               const real_T in3[290],
                               const emxArray_real_T *in4)
{
  __m128d r;
  const real_T *in4_data;
  int32_T i;
  int32_T stride_0_0;
  in4_data = in4->data;
  for (i = 0; i <= 324; i += 2) {
    r = _mm_loadu_pd(&in2[i]);
    _mm_storeu_pd(&in1[i], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }
  for (i = 0; i <= 288; i += 2) {
    r = _mm_loadu_pd(&in3[i]);
    _mm_storeu_pd(&in1[i + 326], _mm_mul_pd(r, _mm_set1_pd(-1.0)));
  }
  stride_0_0 = (in4->size[0] != 1);
  for (i = 0; i < 616; i++) {
    in1[i] += in4_data[i * stride_0_0];
  }
}

static void binary_expand_op_7(real_T in1[290], const emxArray_real_T *in2,
                               real_T in3)
{
  const real_T *in2_data;
  int32_T i;
  int32_T stride_0_0;
  in2_data = in2->data;
  stride_0_0 = (in2->size[0] != 1);
  for (i = 0; i < 290; i++) {
    in1[i] = in2_data[i * stride_0_0] + in3 * in1[i];
  }
}

static void binary_expand_op_8(real_T in1[326], const emxArray_real_T *in2,
                               real_T in3)
{
  const real_T *in2_data;
  int32_T i;
  int32_T stride_0_0;
  in2_data = in2->data;
  stride_0_0 = (in2->size[0] != 1);
  for (i = 0; i < 326; i++) {
    in1[i] = in2_data[i * stride_0_0] + in3 * in1[i];
  }
}

void dev_xpipg_onestep_g(const emlrtStack *sp, const emxArray_real_T *xi,
                         const emxArray_real_T *eta, real_T alpha, real_T beta,
                         real_T rho, const real_T P[326], const real_T A[3190],
                         const real_T q[326], const real_T g[290], real_T N,
                         real_T nx, real_T nu, real_T ne,
                         const real_T proj_index_all[660],
                         const real_T proj_coefficient_all[660],
                         const real_T cone_k_polar[290], real_T xi_n[326],
                         real_T eta_n[290], real_T J_affine_D[326],
                         real_T J_k_polar[290], real_T R[616],
                         real_T temp_prime[326], real_T temp_dual[290])
{
  __m128d r2;
  __m128d r3;
  ptrdiff_t incx_t;
  ptrdiff_t n_t;
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack e_st;
  emlrtStack f_st;
  emlrtStack g_st;
  emlrtStack h_st;
  emlrtStack i_st;
  emlrtStack j_st;
  emlrtStack st;
  emxArray_boolean_T *r10;
  emxArray_boolean_T *r9;
  emxArray_int32_T *r6;
  emxArray_int8_T *r4;
  emxArray_real_T b_z2;
  emxArray_real_T *minval;
  emxArray_real_T *r;
  emxArray_real_T *r5;
  emxArray_real_T *r7;
  emxArray_real_T *r8;
  emxArray_real_T *temp_index;
  emxArray_real_T *z2;
  emxArray_real_T *z_temp_index;
  real_T dv[326];
  const real_T *eta_data;
  const real_T *xi_data;
  real_T temp;
  real_T *minval_data;
  real_T *r1;
  real_T *r11;
  real_T *r14;
  real_T *r15;
  real_T *temp_index_data;
  real_T *z2_data;
  real_T *z_temp_index_data;
  int32_T b_i;
  int32_T b_loop_ub;
  int32_T c_temp_index;
  int32_T i;
  int32_T i1;
  int32_T loop_ub;
  int32_T loop_ub_tmp;
  int32_T vectorUB;
  int32_T *r13;
  int8_T *r12;
  boolean_T b;
  boolean_T *r16;
  boolean_T *r17;
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
  h_st.prev = &g_st;
  h_st.tls = g_st.tls;
  i_st.prev = &h_st;
  i_st.tls = h_st.tls;
  j_st.prev = &i_st;
  j_st.tls = i_st.tls;
  eta_data = eta->data;
  xi_data = xi->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /* P must be a vector */
  /* A is the matrix defining H, here we only have zero order hold for the */
  /* simplicity of programming.  */
  /*  temp_prime = xi - alpha*(P.* xi + q + Ht * eta); */
  loop_ub = xi->size[0];
  b = ((xi->size[0] != 326) && (xi->size[0] != 1));
  if (b) {
    emlrtDimSizeImpxCheckR2021b(326, xi->size[0], &t_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  emxInit_real_T(sp, &r, 1, &md_emlrtRTEI);
  st.site = &lb_emlrtRSI;
  dev_HtZ_g(&st, A, eta, ne, r);
  r1 = r->data;
  if ((r->size[0] != 326) && (r->size[0] != 1)) {
    emlrtDimSizeImpxCheckR2021b(326, r->size[0], &t_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if ((xi->size[0] != 326) && (xi->size[0] != 1)) {
    emlrtDimSizeImpxCheckR2021b(xi->size[0], 326, &s_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if ((xi->size[0] == 326) && (r->size[0] == 326) && (xi->size[0] == 326)) {
    for (i = 0; i <= 324; i += 2) {
      r2 = _mm_loadu_pd(&xi_data[i]);
      r3 = _mm_loadu_pd(&r1[i]);
      _mm_storeu_pd(
          &temp_prime[i],
          _mm_sub_pd(
              r2, _mm_mul_pd(
                      _mm_set1_pd(alpha),
                      _mm_add_pd(_mm_add_pd(_mm_mul_pd(_mm_loadu_pd(&P[i]), r2),
                                            _mm_loadu_pd(&q[i])),
                                 r3))));
    }
  } else {
    binary_expand_op_11(temp_prime, xi, alpha, P, q, r);
  }
  st.site = &mb_emlrtRSI;
  /* Compute the projection to set D. */
  /* nx, nu are legacy. They stands for the number of control and input */
  memset(&xi_n[0], 0, 326U * sizeof(real_T));
  memset(&J_affine_D[0], 0, 326U * sizeof(real_T));
  i = (int32_T)N;
  emlrtForLoopVectorCheckR2021a(1.0, 1.0, N, mxDOUBLE_CLASS, (int32_T)N,
                                &m_emlrtRTEI, &st);
  emxInit_real_T(&st, &z_temp_index, 2, &kc_emlrtRTEI);
  emxInit_int8_T(&st, &r4, &nd_emlrtRTEI);
  emxInit_real_T(&st, &r5, 2, &lc_emlrtRTEI);
  emxInit_real_T(&st, &temp_index, 2, &rc_emlrtRTEI);
  temp_index_data = temp_index->data;
  emxInit_int32_T(&st, &r6, 2, &od_emlrtRTEI);
  emxInit_real_T(&st, &r7, 1, &bd_emlrtRTEI);
  emxInit_real_T(&st, &r8, 2, &yc_emlrtRTEI);
  emxInit_real_T(&st, &z2, 1, &dd_emlrtRTEI);
  emxInit_real_T(&st, &minval, 1, &pd_emlrtRTEI);
  emxInit_boolean_T(&st, &r9, &qd_emlrtRTEI);
  emxInit_boolean_T(&st, &r10, &qd_emlrtRTEI);
  for (b_i = 0; b_i < i; b_i++) {
    boolean_T exitg1;
    /* if it is random use N+1. Not robust! */
    if ((b_i + 1 < 1) || (b_i + 1 > 30)) {
      emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, 30, &t_emlrtBCI, &st);
    }
    if ((real_T)b_i + 1.0 < N) {
      temp = nx + nu;
      if (muDoubleScalarIsNaN(temp)) {
        i1 = z_temp_index->size[0] * z_temp_index->size[1];
        z_temp_index->size[1] = 1;
        z_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(&st, z_temp_index, i1, &fc_emlrtRTEI);
        z_temp_index_data = z_temp_index->data;
        z_temp_index_data[0] = rtNaN;
      } else if (temp < 1.0) {
        z_temp_index->size[1] = 0;
      } else {
        loop_ub_tmp = (int32_T)(temp - 1.0) + 1;
        i1 = z_temp_index->size[0] * z_temp_index->size[1];
        z_temp_index->size[1] = (int32_T)(temp - 1.0) + 1;
        z_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(&st, z_temp_index, i1, &fc_emlrtRTEI);
        z_temp_index_data = z_temp_index->data;
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          z_temp_index_data[i1] = (real_T)i1 + 1.0;
        }
      }
      i1 = z_temp_index->size[0] * z_temp_index->size[1];
      z_temp_index->size[0] = 1;
      emxEnsureCapacity_real_T(&st, z_temp_index, i1, &kc_emlrtRTEI);
      z_temp_index_data = z_temp_index->data;
      temp *= ((real_T)b_i + 1.0) - 1.0;
      b_loop_ub = z_temp_index->size[1] - 1;
      loop_ub_tmp = (z_temp_index->size[1] / 2) << 1;
      vectorUB = loop_ub_tmp - 2;
      for (i1 = 0; i1 <= vectorUB; i1 += 2) {
        r2 = _mm_loadu_pd(&z_temp_index_data[i1]);
        _mm_storeu_pd(&z_temp_index_data[i1],
                      _mm_add_pd(_mm_set1_pd(temp), r2));
      }
      for (i1 = loop_ub_tmp; i1 <= b_loop_ub; i1++) {
        z_temp_index_data[i1] += temp;
      }
    } else {
      if (muDoubleScalarIsNaN(nx)) {
        i1 = z_temp_index->size[0] * z_temp_index->size[1];
        z_temp_index->size[1] = 1;
        z_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(&st, z_temp_index, i1, &fc_emlrtRTEI);
        z_temp_index_data = z_temp_index->data;
        z_temp_index_data[0] = rtNaN;
      } else if (nx < 1.0) {
        z_temp_index->size[1] = 0;
      } else {
        loop_ub_tmp = (int32_T)(nx - 1.0) + 1;
        i1 = z_temp_index->size[0] * z_temp_index->size[1];
        z_temp_index->size[1] = (int32_T)(nx - 1.0) + 1;
        z_temp_index->size[0] = 1;
        emxEnsureCapacity_real_T(&st, z_temp_index, i1, &fc_emlrtRTEI);
        z_temp_index_data = z_temp_index->data;
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          z_temp_index_data[i1] = (real_T)i1 + 1.0;
        }
      }
      i1 = z_temp_index->size[0] * z_temp_index->size[1];
      z_temp_index->size[0] = 1;
      emxEnsureCapacity_real_T(&st, z_temp_index, i1, &jc_emlrtRTEI);
      z_temp_index_data = z_temp_index->data;
      temp = (((real_T)b_i + 1.0) - 1.0) * (nx + nu);
      b_loop_ub = z_temp_index->size[1] - 1;
      loop_ub_tmp = (z_temp_index->size[1] / 2) << 1;
      vectorUB = loop_ub_tmp - 2;
      for (i1 = 0; i1 <= vectorUB; i1 += 2) {
        r2 = _mm_loadu_pd(&z_temp_index_data[i1]);
        _mm_storeu_pd(&z_temp_index_data[i1],
                      _mm_add_pd(_mm_set1_pd(temp), r2));
      }
      for (i1 = loop_ub_tmp; i1 <= b_loop_ub; i1++) {
        z_temp_index_data[i1] += temp;
      }
    }
    b_loop_ub = z_temp_index->size[1];
    i1 = r5->size[0] * r5->size[1];
    r5->size[1] = z_temp_index->size[1];
    r5->size[0] = 1;
    emxEnsureCapacity_real_T(&st, r5, i1, &lc_emlrtRTEI);
    r11 = r5->data;
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      if (z_temp_index_data[i1] !=
          (int32_T)muDoubleScalarFloor(z_temp_index_data[i1])) {
        emlrtIntegerCheckR2012b(z_temp_index_data[i1], &r_emlrtDCI, &st);
      }
      vectorUB = (int32_T)z_temp_index_data[i1];
      if ((vectorUB < 1) || (vectorUB > 326)) {
        emlrtDynamicBoundsCheckR2012b(vectorUB, 1, 326, &u_emlrtBCI, &st);
      }
      r11[i1] = temp_prime[vectorUB - 1];
    }
    b_st.site = &ob_emlrtRSI;
    /* compute the projection of z0 at each time grid point */
    temp = 1.0;
    i1 = r->size[0];
    r->size[0] = z_temp_index->size[1];
    emxEnsureCapacity_real_T(&b_st, r, i1, &nc_emlrtRTEI);
    r1 = r->data;
    i1 = r4->size[0];
    r4->size[0] = z_temp_index->size[1];
    emxEnsureCapacity_int8_T(&b_st, r4, i1, &oc_emlrtRTEI);
    r12 = r4->data;
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r1[i1] = 0.0;
      r12[i1] = 0;
    }
    exitg1 = false;
    while ((!exitg1) && (temp <= z_temp_index->size[1])) {
      real_T b_b;
      if (temp != (int32_T)muDoubleScalarFloor(temp)) {
        emlrtIntegerCheckR2012b(temp, &q_emlrtDCI, &b_st);
      }
      if (((int32_T)temp < 1) || ((int32_T)temp > 11)) {
        emlrtDynamicBoundsCheckR2012b((int32_T)temp, 1, 11, &s_emlrtBCI, &b_st);
      }
      i1 = b_i + 30 * (((int32_T)temp - 1) % 11);
      b_b = proj_index_all[i1];
      if (b_b == rtInf) {
        exitg1 = true;
      } else {
        int32_T c_loop_ub;
        c_st.site = &pb_emlrtRSI;
        d_st.site = &ub_emlrtRSI;
        if (muDoubleScalarIsNaN(b_b)) {
          vectorUB = temp_index->size[0] * temp_index->size[1];
          temp_index->size[1] = 1;
          temp_index->size[0] = 1;
          emxEnsureCapacity_real_T(&d_st, temp_index, vectorUB, &rc_emlrtRTEI);
          temp_index_data = temp_index->data;
          temp_index_data[0] = rtNaN;
        } else if (b_b < temp) {
          temp_index->size[1] = 0;
          temp_index->size[0] = 1;
        } else if (muDoubleScalarIsInf(b_b) && (temp == b_b)) {
          vectorUB = temp_index->size[0] * temp_index->size[1];
          temp_index->size[1] = 1;
          temp_index->size[0] = 1;
          emxEnsureCapacity_real_T(&d_st, temp_index, vectorUB, &rc_emlrtRTEI);
          temp_index_data = temp_index->data;
          temp_index_data[0] = rtNaN;
        } else {
          c_loop_ub = (int32_T)(b_b - temp) + 1;
          vectorUB = temp_index->size[0] * temp_index->size[1];
          temp_index->size[1] = c_loop_ub;
          temp_index->size[0] = 1;
          emxEnsureCapacity_real_T(&d_st, temp_index, vectorUB, &rc_emlrtRTEI);
          temp_index_data = temp_index->data;
          for (vectorUB = 0; vectorUB < c_loop_ub; vectorUB++) {
            temp_index_data[vectorUB] = temp + (real_T)vectorUB;
          }
        }
        temp = proj_index_all[(b_i + 30 * (((int32_T)temp + 10) % 11)) + 330];
        if (temp == 1.0) {
          real_T nm2;
          int32_T b_temp_index[2];
          int32_T temp_index_tmp;
          b_temp_index[0] = 1;
          temp_index_tmp = temp_index->size[1];
          b_temp_index[1] = temp_index->size[1];
          c_st.site = &qb_emlrtRSI;
          indexShapeCheck(&c_st, z_temp_index->size[1], b_temp_index);
          i1 = r6->size[0] * r6->size[1];
          r6->size[1] = temp_index->size[1];
          r6->size[0] = 1;
          emxEnsureCapacity_int32_T(&b_st, r6, i1, &tc_emlrtRTEI);
          r13 = r6->data;
          for (i1 = 0; i1 < temp_index_tmp; i1++) {
            if (temp_index_data[i1] !=
                (int32_T)muDoubleScalarFloor(temp_index_data[i1])) {
              emlrtIntegerCheckR2012b(temp_index_data[i1], &s_emlrtDCI, &b_st);
            }
            vectorUB = (int32_T)temp_index_data[i1];
            if ((vectorUB < 1) || (vectorUB > b_loop_ub)) {
              emlrtDynamicBoundsCheckR2012b(vectorUB, 1, b_loop_ub, &v_emlrtBCI,
                                            &b_st);
            }
            r13[i1] = vectorUB;
          }
          i1 = r8->size[0] * r8->size[1];
          r8->size[1] = temp_index->size[1];
          r8->size[0] = 1;
          emxEnsureCapacity_real_T(&b_st, r8, i1, &wc_emlrtRTEI);
          r14 = r8->data;
          for (i1 = 0; i1 < temp_index_tmp; i1++) {
            vectorUB = (int32_T)temp_index_data[i1];
            if ((vectorUB < 1) || (vectorUB > b_loop_ub)) {
              emlrtDynamicBoundsCheckR2012b(vectorUB, 1, b_loop_ub, &y_emlrtBCI,
                                            &b_st);
            }
            r14[i1] = r11[vectorUB - 1];
          }
          for (i1 = 0; i1 < temp_index_tmp; i1++) {
            vectorUB = (int32_T)temp_index_data[i1];
            if ((vectorUB < 1) || (vectorUB > 11)) {
              emlrtDynamicBoundsCheckR2012b(vectorUB, 1, 11, &ab_emlrtBCI,
                                            &b_st);
            }
          }
          i1 = z2->size[0];
          z2->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(&b_st, z2, i1, &ad_emlrtRTEI);
          z2_data = z2->data;
          i1 = r7->size[0];
          r7->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(&b_st, r7, i1, &bd_emlrtRTEI);
          r15 = r7->data;
          for (i1 = 0; i1 < temp_index_tmp; i1++) {
            loop_ub_tmp = b_i + 30 * ((int32_T)temp_index_data[i1] - 1);
            z2_data[i1] = proj_coefficient_all[loop_ub_tmp + 330];
            r15[i1] = proj_coefficient_all[loop_ub_tmp];
          }
          c_st.site = &qb_emlrtRSI;
          d_st.site = &vb_emlrtRSI;
          e_st.site = &wb_emlrtRSI;
          f_st.site = &xb_emlrtRSI;
          g_st.site = &yb_emlrtRSI;
          h_st.site = &ac_emlrtRSI;
          i_st.site = &bc_emlrtRSI;
          i1 = minval->size[0];
          minval->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(&i_st, minval, i1, &ed_emlrtRTEI);
          minval_data = minval->data;
          for (i1 = 0; i1 < temp_index_tmp; i1++) {
            temp = r14[i1];
            nm2 = r15[i1];
            minval_data[i1] = muDoubleScalarMin(temp, nm2);
          }
          d_st.site = &vb_emlrtRSI;
          e_st.site = &dc_emlrtRSI;
          f_st.site = &ec_emlrtRSI;
          g_st.site = &fc_emlrtRSI;
          h_st.site = &ac_emlrtRSI;
          i_st.site = &bc_emlrtRSI;
          if (temp_index->size[1] == minval->size[0]) {
            i1 = r7->size[0];
            r7->size[0] = temp_index->size[1];
            emxEnsureCapacity_real_T(&i_st, r7, i1, &gd_emlrtRTEI);
            r15 = r7->data;
            for (i1 = 0; i1 < temp_index_tmp; i1++) {
              temp = z2_data[i1];
              nm2 = minval_data[i1];
              r15[i1] = muDoubleScalarMax(temp, nm2);
            }
          } else {
            loop_ub_tmp = temp_index->size[1];
            b_z2 = *z2;
            c_temp_index = loop_ub_tmp;
            b_z2.size = &c_temp_index;
            b_z2.numDimensions = 1;
            j_st.site = &cc_emlrtRSI;
            expand_max(&j_st, &b_z2, minval, r7);
            r15 = r7->data;
          }
          c_loop_ub = r6->size[1];
          if (r6->size[1] != r7->size[0]) {
            emlrtSubAssignSizeCheck1dR2017a(r6->size[1], r7->size[0],
                                            &n_emlrtECI, &b_st);
          }
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            r1[r13[i1] - 1] = r15[i1];
          }
          b_temp_index[0] = 1;
          b_temp_index[1] = temp_index->size[1];
          c_st.site = &rb_emlrtRSI;
          indexShapeCheck(&c_st, z_temp_index->size[1], b_temp_index);
          i1 = r6->size[0] * r6->size[1];
          r6->size[1] = temp_index->size[1];
          r6->size[0] = 1;
          emxEnsureCapacity_int32_T(&b_st, r6, i1, &hd_emlrtRTEI);
          r13 = r6->data;
          for (i1 = 0; i1 < temp_index_tmp; i1++) {
            vectorUB = (int32_T)temp_index_data[i1];
            if ((vectorUB < 1) || (vectorUB > b_loop_ub)) {
              emlrtDynamicBoundsCheckR2012b(vectorUB, 1, b_loop_ub,
                                            &db_emlrtBCI, &b_st);
            }
            r13[i1] = vectorUB;
          }
          i1 = r8->size[0] * r8->size[1];
          r8->size[1] = temp_index->size[1];
          r8->size[0] = 1;
          emxEnsureCapacity_real_T(&b_st, r8, i1, &id_emlrtRTEI);
          r14 = r8->data;
          for (i1 = 0; i1 < temp_index_tmp; i1++) {
            vectorUB = (int32_T)temp_index_data[i1];
            if ((vectorUB < 1) || (vectorUB > b_loop_ub)) {
              emlrtDynamicBoundsCheckR2012b(vectorUB, 1, b_loop_ub,
                                            &eb_emlrtBCI, &b_st);
            }
            r14[i1] = r11[vectorUB - 1];
          }
          c_st.site = &rb_emlrtRSI;
          i1 = r9->size[0];
          r9->size[0] = temp_index->size[1];
          emxEnsureCapacity_boolean_T(&c_st, r9, i1, &jd_emlrtRTEI);
          r16 = r9->data;
          for (i1 = 0; i1 < temp_index_tmp; i1++) {
            r16[i1] =
                (r14[i1] <=
                 proj_coefficient_all
                     [(b_i + 30 * ((int32_T)temp_index_data[i1] - 1)) + 330]);
          }
          c_loop_ub = temp_index->size[1];
          i1 = r10->size[0];
          r10->size[0] = temp_index->size[1];
          emxEnsureCapacity_boolean_T(&c_st, r10, i1, &kd_emlrtRTEI);
          r17 = r10->data;
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            r17[i1] =
                (r14[i1] >=
                 proj_coefficient_all[b_i +
                                      30 * ((int32_T)temp_index_data[i1] - 1)]);
          }
          c_loop_ub = r9->size[0];
          if ((r9->size[0] != r10->size[0]) &&
              ((r9->size[0] != 1) && (r10->size[0] != 1))) {
            emlrtDimSizeImpxCheckR2021b(r9->size[0], r10->size[0], &j_emlrtECI,
                                        &c_st);
          }
          if (r9->size[0] == r10->size[0]) {
            i1 = z2->size[0];
            z2->size[0] = r9->size[0];
            emxEnsureCapacity_real_T(&c_st, z2, i1, &ld_emlrtRTEI);
            z2_data = z2->data;
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              z2_data[i1] = ((!r16[i1]) && (!r17[i1]));
            }
          } else {
            d_st.site = &yi_emlrtRSI;
            binary_expand_op_3(&d_st, z2, r9, r10);
            z2_data = z2->data;
          }
          c_loop_ub = r6->size[1];
          if (r6->size[1] != z2->size[0]) {
            emlrtSubAssignSizeCheck1dR2017a(r6->size[1], z2->size[0],
                                            &k_emlrtECI, &b_st);
          }
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            r12[r13[i1] - 1] = (int8_T)z2_data[i1];
          }
        } else if (temp == 2.0) {
          real_T nm2;
          int32_T b_temp_index[2];
          int32_T temp_index_tmp;
          b_temp_index[0] = 1;
          temp_index_tmp = temp_index->size[1];
          b_temp_index[1] = temp_index->size[1];
          c_st.site = &sb_emlrtRSI;
          indexShapeCheck(&c_st, z_temp_index->size[1], b_temp_index);
          vectorUB = r6->size[0] * r6->size[1];
          r6->size[1] = temp_index->size[1];
          r6->size[0] = 1;
          emxEnsureCapacity_int32_T(&b_st, r6, vectorUB, &uc_emlrtRTEI);
          r13 = r6->data;
          for (vectorUB = 0; vectorUB < temp_index_tmp; vectorUB++) {
            if (temp_index_data[vectorUB] !=
                (int32_T)muDoubleScalarFloor(temp_index_data[vectorUB])) {
              emlrtIntegerCheckR2012b(temp_index_data[vectorUB], &t_emlrtDCI,
                                      &b_st);
            }
            loop_ub_tmp = (int32_T)temp_index_data[vectorUB];
            if ((loop_ub_tmp < 1) || (loop_ub_tmp > b_loop_ub)) {
              emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, b_loop_ub,
                                            &w_emlrtBCI, &b_st);
            }
            r13[vectorUB] = loop_ub_tmp;
          }
          vectorUB = r8->size[0] * r8->size[1];
          r8->size[1] = temp_index->size[1];
          r8->size[0] = 1;
          emxEnsureCapacity_real_T(&b_st, r8, vectorUB, &xc_emlrtRTEI);
          r14 = r8->data;
          for (vectorUB = 0; vectorUB < temp_index_tmp; vectorUB++) {
            loop_ub_tmp = (int32_T)temp_index_data[vectorUB];
            if ((loop_ub_tmp < 1) || (loop_ub_tmp > b_loop_ub)) {
              emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, b_loop_ub,
                                            &bb_emlrtBCI, &b_st);
            }
            r14[vectorUB] = r11[loop_ub_tmp - 1];
          }
          vectorUB = z2->size[0];
          z2->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(&b_st, z2, vectorUB, &xc_emlrtRTEI);
          z2_data = z2->data;
          for (vectorUB = 0; vectorUB < temp_index_tmp; vectorUB++) {
            z2_data[vectorUB] = r14[vectorUB];
          }
          /* Projection to a ball center at 0. */
          if (temp_index->size[1] == 0) {
            temp = 0.0;
          } else {
            n_t = (ptrdiff_t)temp_index->size[1];
            incx_t = (ptrdiff_t)1;
            temp = dnrm2(&n_t, &z2_data[0], &incx_t);
          }
          nm2 = proj_coefficient_all[i1];
          if (temp > nm2) {
            i1 = z2->size[0];
            z2->size[0] = temp_index->size[1];
            emxEnsureCapacity_real_T(&b_st, z2, i1, &cd_emlrtRTEI);
            z2_data = z2->data;
            loop_ub_tmp = (temp_index->size[1] / 2) << 1;
            vectorUB = loop_ub_tmp - 2;
            for (i1 = 0; i1 <= vectorUB; i1 += 2) {
              r2 = _mm_loadu_pd(&r14[i1]);
              _mm_storeu_pd(&z2_data[i1],
                            _mm_mul_pd(_mm_div_pd(r2, _mm_set1_pd(temp)),
                                       _mm_set1_pd(nm2)));
            }
            for (i1 = loop_ub_tmp; i1 < temp_index_tmp; i1++) {
              z2_data[i1] = r14[i1] / temp * nm2;
            }
          }
          c_loop_ub = r6->size[1];
          if (r6->size[1] != z2->size[0]) {
            emlrtSubAssignSizeCheck1dR2017a(r6->size[1], z2->size[0],
                                            &m_emlrtECI, &b_st);
          }
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            r1[r13[i1] - 1] = z2_data[i1];
          }
        } else if (temp == 3.0) {
          real_T d;
          real_T nm2;
          int32_T b_temp_index[2];
          int32_T temp_index_tmp;
          b_temp_index[0] = 1;
          temp_index_tmp = temp_index->size[1];
          b_temp_index[1] = temp_index->size[1];
          c_st.site = &tb_emlrtRSI;
          indexShapeCheck(&c_st, z_temp_index->size[1], b_temp_index);
          vectorUB = r6->size[0] * r6->size[1];
          r6->size[1] = temp_index->size[1];
          r6->size[0] = 1;
          emxEnsureCapacity_int32_T(&b_st, r6, vectorUB, &vc_emlrtRTEI);
          r13 = r6->data;
          for (vectorUB = 0; vectorUB < temp_index_tmp; vectorUB++) {
            if (temp_index_data[vectorUB] !=
                (int32_T)muDoubleScalarFloor(temp_index_data[vectorUB])) {
              emlrtIntegerCheckR2012b(temp_index_data[vectorUB], &u_emlrtDCI,
                                      &b_st);
            }
            loop_ub_tmp = (int32_T)temp_index_data[vectorUB];
            if ((loop_ub_tmp < 1) || (loop_ub_tmp > b_loop_ub)) {
              emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, b_loop_ub,
                                            &x_emlrtBCI, &b_st);
            }
            r13[vectorUB] = loop_ub_tmp;
          }
          vectorUB = r8->size[0] * r8->size[1];
          r8->size[1] = temp_index->size[1];
          r8->size[0] = 1;
          emxEnsureCapacity_real_T(&b_st, r8, vectorUB, &yc_emlrtRTEI);
          r14 = r8->data;
          for (vectorUB = 0; vectorUB < temp_index_tmp; vectorUB++) {
            loop_ub_tmp = (int32_T)temp_index_data[vectorUB];
            if ((loop_ub_tmp < 1) || (loop_ub_tmp > b_loop_ub)) {
              emlrtDynamicBoundsCheckR2012b(loop_ub_tmp, 1, b_loop_ub,
                                            &cb_emlrtBCI, &b_st);
            }
            r14[vectorUB] = r11[loop_ub_tmp - 1];
          }
          c_st.site = &tb_emlrtRSI;
          if (temp_index->size[1] < 1) {
            emlrtDynamicBoundsCheckR2012b(temp_index->size[1], 1,
                                          temp_index->size[1], &r_emlrtBCI,
                                          &c_st);
          }
          if (temp_index->size[1] - 1 < 1) {
            c_loop_ub = 0;
          } else {
            if (temp_index->size[1] < 1) {
              emlrtDynamicBoundsCheckR2012b(1, 1, temp_index->size[1],
                                            &q_emlrtBCI, &c_st);
            }
            if ((temp_index->size[1] - 1 < 1) ||
                (temp_index->size[1] - 1 > temp_index->size[1])) {
              emlrtDynamicBoundsCheckR2012b(temp_index->size[1] - 1, 1,
                                            temp_index->size[1], &p_emlrtBCI,
                                            &c_st);
            }
            c_loop_ub = temp_index->size[1] - 1;
          }
          b_temp_index[0] = 1;
          b_temp_index[1] = c_loop_ub;
          d_st.site = &gc_emlrtRSI;
          indexShapeCheck(&d_st, temp_index->size[1], b_temp_index);
          vectorUB = z2->size[0];
          z2->size[0] = c_loop_ub;
          emxEnsureCapacity_real_T(&c_st, z2, vectorUB, &dd_emlrtRTEI);
          z2_data = z2->data;
          for (vectorUB = 0; vectorUB < c_loop_ub; vectorUB++) {
            z2_data[vectorUB] = r14[vectorUB];
          }
          if (c_loop_ub == 0) {
            nm2 = 0.0;
          } else {
            n_t = (ptrdiff_t)c_loop_ub;
            incx_t = (ptrdiff_t)1;
            nm2 = dnrm2(&n_t, &z2_data[0], &incx_t);
          }
          temp = r11[(int32_T)temp_index_data
                         [(temp_index->size[1] - 1) % temp_index->size[1] +
                          temp_index->size[1] * ((temp_index->size[1] - 1) /
                                                 temp_index->size[1])] -
                     1];
          d = proj_coefficient_all[i1];
          if (d * temp >= nm2) {
            i1 = z2->size[0];
            z2->size[0] = c_loop_ub + 1;
            emxEnsureCapacity_real_T(&c_st, z2, i1, &fd_emlrtRTEI);
            z2_data = z2->data;
            for (i1 = 0; i1 < c_loop_ub; i1++) {
              z2_data[i1] = r14[i1];
            }
            z2_data[c_loop_ub] = temp;
          } else if (temp <= -d * nm2) {
            i1 = z2->size[0];
            z2->size[0] = temp_index->size[1];
            emxEnsureCapacity_real_T(&c_st, z2, i1, &fd_emlrtRTEI);
            z2_data = z2->data;
            for (i1 = 0; i1 < temp_index_tmp; i1++) {
              z2_data[i1] = 0.0;
            }
          } else {
            real_T a;
            real_T a_tmp;
            d_st.site = &hc_emlrtRSI;
            e_st.site = &gb_emlrtRSI;
            f_st.site = &hb_emlrtRSI;
            d_st.site = &ic_emlrtRSI;
            e_st.site = &gb_emlrtRSI;
            f_st.site = &hb_emlrtRSI;
            a_tmp = d * d + 1.0;
            a = d / a_tmp * (temp / nm2 + d);
            i1 = z2->size[0];
            z2->size[0] = c_loop_ub + 1;
            emxEnsureCapacity_real_T(&c_st, z2, i1, &fd_emlrtRTEI);
            z2_data = z2->data;
            loop_ub_tmp = (c_loop_ub / 2) << 1;
            vectorUB = loop_ub_tmp - 2;
            for (i1 = 0; i1 <= vectorUB; i1 += 2) {
              r2 = _mm_loadu_pd(&r14[i1]);
              _mm_storeu_pd(&z2_data[i1], _mm_mul_pd(_mm_set1_pd(a), r2));
            }
            for (i1 = loop_ub_tmp; i1 < c_loop_ub; i1++) {
              z2_data[i1] = a * r14[i1];
            }
            z2_data[c_loop_ub] = 1.0 / a_tmp * (temp + d * nm2);
          }
          c_loop_ub = r6->size[1];
          if (r6->size[1] != z2->size[0]) {
            emlrtSubAssignSizeCheck1dR2017a(r6->size[1], z2->size[0],
                                            &l_emlrtECI, &b_st);
          }
          for (i1 = 0; i1 < c_loop_ub; i1++) {
            r1[r13[i1] - 1] = z2_data[i1];
          }
        }
        /* update */
        temp = b_b + 1.0;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b(&b_st);
        }
      }
    }
    i1 = r6->size[0] * r6->size[1];
    r6->size[1] = z_temp_index->size[1];
    r6->size[0] = 1;
    emxEnsureCapacity_int32_T(&st, r6, i1, &qc_emlrtRTEI);
    r13 = r6->data;
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      r13[i1] = (int32_T)z_temp_index_data[i1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      xi_n[r13[i1] - 1] = r1[i1];
    }
    for (i1 = 0; i1 < b_loop_ub; i1++) {
      J_affine_D[r13[i1] - 1] = r12[i1];
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b(&st);
    }
  }
  emxFree_boolean_T(&st, &r10);
  emxFree_boolean_T(&st, &r9);
  emxFree_real_T(&st, &minval);
  emxFree_real_T(&st, &z2);
  emxFree_real_T(&st, &r8);
  emxFree_real_T(&st, &r7);
  emxFree_int32_T(&st, &r6);
  emxFree_real_T(&st, &temp_index);
  emxFree_real_T(&st, &r5);
  emxFree_int8_T(&st, &r4);
  emxFree_real_T(&st, &z_temp_index);
  /* temp_dual = eta + beta* (H * (2*z - xi)-g); */
  b_loop_ub = eta->size[0];
  if ((eta->size[0] != 290) && (eta->size[0] != 1)) {
    emlrtDimSizeImpxCheckR2021b(eta->size[0], 290, &r_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if (xi->size[0] == 326) {
    for (i = 0; i <= 324; i += 2) {
      r2 = _mm_loadu_pd(&xi_n[i]);
      _mm_storeu_pd(&dv[i], _mm_sub_pd(_mm_mul_pd(_mm_set1_pd(2.0), r2),
                                       _mm_loadu_pd(&xi_data[i])));
    }
    st.site = &nb_emlrtRSI;
    b_dev_HZ_g(&st, A, dv, ne, temp_dual);
  } else {
    st.site = &nb_emlrtRSI;
    binary_expand_op_10(&st, nb_emlrtRSI, A, xi_n, xi, ne, temp_dual);
  }
  for (i = 0; i <= 288; i += 2) {
    r2 = _mm_loadu_pd(&temp_dual[i]);
    _mm_storeu_pd(&temp_dual[i], _mm_sub_pd(r2, _mm_loadu_pd(&g[i])));
  }
  if (eta->size[0] == 290) {
    for (i = 0; i <= 288; i += 2) {
      r2 = _mm_loadu_pd(&temp_dual[i]);
      _mm_storeu_pd(&temp_dual[i],
                    _mm_add_pd(_mm_loadu_pd(&eta_data[i]),
                               _mm_mul_pd(_mm_set1_pd(beta), r2)));
    }
  } else {
    binary_expand_op_7(temp_dual, eta, beta);
  }
  /*  compute the projection to cone_k_polar; */
  /* J is a vector.  */
  for (b_i = 0; b_i < 290; b_i++) {
    J_k_polar[b_i] = 1.0;
  }
  for (b_i = 0; b_i < 290; b_i++) {
    if (cone_k_polar[b_i] == 0.0) {
      eta_n[b_i] = temp_dual[b_i];
      /*  projection to Rn */
    } else {
      temp = temp_dual[b_i];
      if (temp >= 0.0) {
        eta_n[b_i] = 0.0;
        J_k_polar[b_i] = 0.0;
      } else {
        eta_n[b_i] = temp;
      }
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  i = r->size[0];
  r->size[0] = xi->size[0];
  emxEnsureCapacity_real_T(sp, r, i, &mc_emlrtRTEI);
  r1 = r->data;
  loop_ub_tmp = (xi->size[0] / 2) << 1;
  vectorUB = loop_ub_tmp - 2;
  for (i = 0; i <= vectorUB; i += 2) {
    _mm_storeu_pd(
        &r1[i], _mm_mul_pd(_mm_set1_pd(1.0 - rho), _mm_loadu_pd(&xi_data[i])));
  }
  for (i = loop_ub_tmp; i < loop_ub; i++) {
    r1[i] = (1.0 - rho) * xi_data[i];
  }
  if ((r->size[0] != 326) && (r->size[0] != 1)) {
    emlrtDimSizeImpxCheckR2021b(r->size[0], 326, &q_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if (r->size[0] == 326) {
    for (i = 0; i <= 324; i += 2) {
      r2 = _mm_loadu_pd(&xi_n[i]);
      r3 = _mm_loadu_pd(&r1[i]);
      _mm_storeu_pd(&xi_n[i], _mm_add_pd(r3, _mm_mul_pd(_mm_set1_pd(rho), r2)));
    }
  } else {
    binary_expand_op_8(xi_n, r, rho);
  }
  i = r->size[0];
  r->size[0] = eta->size[0];
  emxEnsureCapacity_real_T(sp, r, i, &pc_emlrtRTEI);
  r1 = r->data;
  loop_ub_tmp = (eta->size[0] / 2) << 1;
  vectorUB = loop_ub_tmp - 2;
  for (i = 0; i <= vectorUB; i += 2) {
    _mm_storeu_pd(
        &r1[i], _mm_mul_pd(_mm_set1_pd(1.0 - rho), _mm_loadu_pd(&eta_data[i])));
  }
  for (i = loop_ub_tmp; i < b_loop_ub; i++) {
    r1[i] = (1.0 - rho) * eta_data[i];
  }
  if ((r->size[0] != 290) && (r->size[0] != 1)) {
    emlrtDimSizeImpxCheckR2021b(r->size[0], 290, &p_emlrtECI,
                                (emlrtConstCTX)sp);
  }
  if (r->size[0] == 290) {
    for (i = 0; i <= 288; i += 2) {
      r2 = _mm_loadu_pd(&eta_n[i]);
      r3 = _mm_loadu_pd(&r1[i]);
      _mm_storeu_pd(&eta_n[i],
                    _mm_add_pd(r3, _mm_mul_pd(_mm_set1_pd(rho), r2)));
    }
  } else {
    binary_expand_op_7(eta_n, r, rho);
  }
  i = xi->size[0] + eta->size[0];
  i1 = r->size[0];
  r->size[0] = i;
  emxEnsureCapacity_real_T(sp, r, i1, &sc_emlrtRTEI);
  r1 = r->data;
  for (i1 = 0; i1 < loop_ub; i1++) {
    r1[i1] = xi_data[i1];
  }
  for (i1 = 0; i1 < b_loop_ub; i1++) {
    r1[i1 + xi->size[0]] = eta_data[i1];
  }
  if ((i != 616) && (i != 1)) {
    emlrtDimSizeImpxCheckR2021b(616, i, &o_emlrtECI, (emlrtConstCTX)sp);
  }
  if (r->size[0] == 616) {
    for (i = 0; i <= 324; i += 2) {
      r2 = _mm_loadu_pd(&xi_n[i]);
      _mm_storeu_pd(&R[i], _mm_mul_pd(r2, _mm_set1_pd(-1.0)));
    }
    for (i = 0; i <= 288; i += 2) {
      r2 = _mm_loadu_pd(&eta_n[i]);
      _mm_storeu_pd(&R[i + 326], _mm_mul_pd(r2, _mm_set1_pd(-1.0)));
    }
    for (i = 0; i <= 614; i += 2) {
      r2 = _mm_loadu_pd(&R[i]);
      r3 = _mm_loadu_pd(&r1[i]);
      _mm_storeu_pd(&R[i], _mm_add_pd(r2, r3));
    }
  } else {
    binary_expand_op_6(R, xi_n, eta_n, r);
  }
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (dev_xpipg_onestep_g.c) */
