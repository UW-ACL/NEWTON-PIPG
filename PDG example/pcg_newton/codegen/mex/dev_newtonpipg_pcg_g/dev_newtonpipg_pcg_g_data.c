/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_newtonpipg_pcg_g_data.c
 *
 * Code generation for function 'dev_newtonpipg_pcg_g_data'
 *
 */

/* Include files */
#include "dev_newtonpipg_pcg_g_data.h"
#include "rt_nonfinite.h"

/* Variable Definitions */
emlrtCTX emlrtRootTLSGlobal = NULL;

const volatile char_T *emlrtBreakCheckR2012bFlagVar = NULL;

emlrtContext emlrtContextGlobal = {
    true,                                                 /* bFirstTime */
    false,                                                /* bInitialized */
    131643U,                                              /* fVersionInfo */
    NULL,                                                 /* fErrorFunction */
    "dev_newtonpipg_pcg_g",                               /* fFunctionName */
    NULL,                                                 /* fRTCallStack */
    false,                                                /* bDebugMode */
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, /* fSigWrd */
    NULL                                                  /* fSigMem */
};

emlrtRSInfo t_emlrtRSI = {
    7,         /* lineNo */
    "getTime", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\getTime.m" /* pathName */
};

emlrtRSInfo u_emlrtRSI = {
    21,                     /* lineNo */
    "CoderTimeAPI/getTime", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\CoderTimeAPI.m" /* pathName */
};

emlrtRSInfo v_emlrtRSI = {
    148,                                  /* lineNo */
    "CoderTimeAPI/callEMLRTClockGettime", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\CoderTimeAPI.m" /* pathName */
};

emlrtRSInfo bb_emlrtRSI =
    {
        69,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pathName */
};

emlrtRSInfo fb_emlrtRSI = {
    20,                               /* lineNo */
    "eml_int_forloop_overflow_check", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_"
    "overflow_check.m" /* pathName */
};

emlrtRSInfo gb_emlrtRSI = {
    44,       /* lineNo */
    "mpower", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" /* pathName
                                                                          */
};

emlrtRSInfo hb_emlrtRSI =
    {
        71,      /* lineNo */
        "power", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pathName
                                                                          */
};

emlrtRSInfo ub_emlrtRSI =
    {
        28,      /* lineNo */
        "colon", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pathName
                                                                          */
};

emlrtRSInfo gd_emlrtRSI = {
    34,               /* lineNo */
    "rdivide_helper", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
    "helper.m" /* pathName */
};

emlrtRSInfo hd_emlrtRSI = {
    53,    /* lineNo */
    "div", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" /* pathName
                                                                          */
};

emlrtRSInfo gg_emlrtRSI = {
    17,               /* lineNo */
    "dev_A_Q_D_unit", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" /* pathName */
};

emlrtRSInfo hg_emlrtRSI = {
    21,               /* lineNo */
    "dev_A_Q_D_unit", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" /* pathName */
};

emlrtRSInfo ig_emlrtRSI = {
    29,               /* lineNo */
    "dev_A_Q_D_unit", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" /* pathName */
};

emlrtRSInfo jg_emlrtRSI = {
    31,               /* lineNo */
    "dev_A_Q_D_unit", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" /* pathName */
};

emlrtRSInfo kg_emlrtRSI =
    {
        94,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pathName */
};

emlrtRSInfo lg_emlrtRSI = {
    142,      /* lineNo */
    "mtimes", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" /* pathName */
};

emlrtRSInfo mg_emlrtRSI = {
    176,           /* lineNo */
    "mtimes_blas", /* fcnName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" /* pathName */
};

emlrtRTEInfo e_emlrtRTEI =
    {
        82,         /* lineNo */
        5,          /* colNo */
        "fltpower", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" /* pName
                                                                          */
};

emlrtRTEInfo h_emlrtRTEI = {
    159,                    /* lineNo */
    13,                     /* colNo */
    "coderTimeCheckStatus", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\CoderTimeAPI.m" /* pName */
};

emlrtRTEInfo i_emlrtRTEI =
    {
        138,                   /* lineNo */
        23,                    /* colNo */
        "dynamic_size_checks", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pName */
};

emlrtRTEInfo j_emlrtRTEI =
    {
        133,                   /* lineNo */
        23,                    /* colNo */
        "dynamic_size_checks", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pName */
};

emlrtDCInfo v_emlrtDCI = {
    12,               /* lineNo */
    22,               /* colNo */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", /* pName */
    1                                                /* checkKind */
};

emlrtBCInfo gb_emlrtBCI = {
    1,                /* iFirst */
    11,               /* iLast */
    12,               /* lineNo */
    22,               /* colNo */
    "proj_index",     /* aName */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", /* pName */
    0                                                /* checkKind */
};

emlrtECInfo v_emlrtECI = {
    2,                /* nDims */
    29,               /* lineNo */
    30,               /* colNo */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" /* pName */
};

emlrtECInfo w_emlrtECI = {
    -1,               /* nDims */
    29,               /* lineNo */
    9,                /* colNo */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" /* pName */
};

emlrtECInfo x_emlrtECI = {
    -1,               /* nDims */
    31,               /* lineNo */
    9,                /* colNo */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" /* pName */
};

emlrtDCInfo w_emlrtDCI = {
    31,               /* lineNo */
    16,               /* colNo */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", /* pName */
    1                                                /* checkKind */
};

emlrtDCInfo x_emlrtDCI = {
    29,               /* lineNo */
    35,               /* colNo */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", /* pName */
    1                                                /* checkKind */
};

emlrtBCInfo ib_emlrtBCI = {
    1,                /* iFirst */
    11,               /* iLast */
    29,               /* lineNo */
    35,               /* colNo */
    "A",              /* aName */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", /* pName */
    0                                                /* checkKind */
};

emlrtBCInfo jb_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    29,               /* lineNo */
    58,               /* colNo */
    "Q",              /* aName */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", /* pName */
    0                                                /* checkKind */
};

emlrtBCInfo kb_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    31,               /* lineNo */
    51,               /* colNo */
    "Q",              /* aName */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", /* pName */
    0                                                /* checkKind */
};

emlrtBCInfo lb_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    29,               /* lineNo */
    70,               /* colNo */
    "Q",              /* aName */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", /* pName */
    0                                                /* checkKind */
};

emlrtBCInfo mb_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    31,               /* lineNo */
    63,               /* colNo */
    "Q",              /* aName */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", /* pName */
    0                                                /* checkKind */
};

emlrtRTEInfo o_emlrtRTEI = {
    13,                     /* lineNo */
    27,                     /* colNo */
    "assertCompatibleDims", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\assertCompatibleDims.m" /* pName */
};

emlrtRTEInfo q_emlrtRTEI = {
    48,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\infocheck.m" /* pName */
};

emlrtRTEInfo r_emlrtRTEI = {
    45,          /* lineNo */
    13,          /* colNo */
    "infocheck", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\infocheck.m" /* pName */
};

emlrtRTEInfo fc_emlrtRTEI =
    {
        28,      /* lineNo */
        9,       /* colNo */
        "colon", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" /* pName
                                                                          */
};

emlrtRTEInfo ld_emlrtRTEI = {
    15,                                /* lineNo */
    28,                                /* colNo */
    "proj_D_unit_with_affinejacobian", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general newtonpipg\\other solver "
    "test\\proj_D_unit_with_affinejacobian.m" /* pName */
};

emlrtRTEInfo td_emlrtRTEI = {
    21,               /* lineNo */
    9,                /* colNo */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" /* pName */
};

emlrtRTEInfo ud_emlrtRTEI = {
    31,               /* lineNo */
    16,               /* colNo */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" /* pName */
};

emlrtRTEInfo vd_emlrtRTEI = {
    29,               /* lineNo */
    56,               /* colNo */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" /* pName */
};

emlrtRTEInfo wd_emlrtRTEI = {
    31,               /* lineNo */
    30,               /* colNo */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" /* pName */
};

emlrtRTEInfo xd_emlrtRTEI = {
    29,               /* lineNo */
    16,               /* colNo */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" /* pName */
};

emlrtRTEInfo yd_emlrtRTEI = {
    31,               /* lineNo */
    49,               /* colNo */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" /* pName */
};

emlrtRTEInfo ae_emlrtRTEI = {
    29,               /* lineNo */
    30,               /* colNo */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" /* pName */
};

emlrtRTEInfo de_emlrtRTEI = {
    17,               /* lineNo */
    9,                /* colNo */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" /* pName */
};

emlrtRTEInfo ee_emlrtRTEI = {
    31,               /* lineNo */
    9,                /* colNo */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" /* pName */
};

emlrtRTEInfo me_emlrtRTEI = {
    17,            /* lineNo */
    10,            /* colNo */
    "dev_S_inv_g", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" /* pName */
};

emlrtRTEInfo lf_emlrtRTEI = {
    54,    /* lineNo */
    9,     /* colNo */
    "div", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" /* pName
                                                                          */
};

emlrtRTEInfo eg_emlrtRTEI =
    {
        76,                  /* lineNo */
        13,                  /* colNo */
        "eml_mtimes_helper", /* fName */
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pName */
};

emlrtRTEInfo gk_emlrtRTEI = {
    218,      /* lineNo */
    20,       /* colNo */
    "mtimes", /* fName */
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" /* pName */
};

const char_T cv[26] = {'e', 'm', 'l', 'r', 't', 'C', 'l', 'o', 'c',
                       'k', 'G', 'e', 't', 't', 'i', 'm', 'e', 'M',
                       'o', 'n', 'o', 't', 'o', 'n', 'i', 'c'};

emlrtRSInfo ti_emlrtRSI =
    {
        76,                  /* lineNo */
        "eml_mtimes_helper", /* fcnName */
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" /* pathName */
};

/* End of code generation (dev_newtonpipg_pcg_g_data.c) */
