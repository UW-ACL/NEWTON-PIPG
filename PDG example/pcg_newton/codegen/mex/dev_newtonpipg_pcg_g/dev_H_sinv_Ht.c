/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * dev_H_sinv_Ht.c
 *
 * Code generation for function 'dev_H_sinv_Ht'
 *
 */

/* Include files */
#include "dev_H_sinv_Ht.h"
#include "dev_A_Q_D_unit.h"
#include "dev_newtonpipg_pcg_g_data.h"
#include "dev_newtonpipg_pcg_g_emxutil.h"
#include "dev_newtonpipg_pcg_g_types.h"
#include "diag.h"
#include "mtimes.h"
#include "rt_nonfinite.h"
#include "mwmathutil.h"
#include <string.h>

/* Variable Definitions */
static emlrtRSInfo ng_emlrtRSI = {
    16,              /* lineNo */
    "dev_H_sinv_Ht", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pathName */
};

static emlrtRSInfo og_emlrtRSI = {
    20,              /* lineNo */
    "dev_H_sinv_Ht", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pathName */
};

static emlrtRSInfo pg_emlrtRSI = {
    41,                     /* lineNo */
    "dev_Y_Q_Q_D_sum_unit", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pathName */
};

static emlrtRSInfo qg_emlrtRSI = {
    45,                     /* lineNo */
    "dev_Y_Q_Q_D_sum_unit", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pathName */
};

static emlrtRSInfo rg_emlrtRSI = {
    53,                     /* lineNo */
    "dev_Y_Q_Q_D_sum_unit", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pathName */
};

static emlrtRSInfo sg_emlrtRSI = {
    58,                     /* lineNo */
    "dev_Y_Q_Q_D_sum_unit", /* fcnName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pathName */
};

static emlrtECInfo hc_emlrtECI = {
    -1,              /* nDims */
    20,              /* lineNo */
    4,               /* colNo */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtBCInfo uc_emlrtBCI = {
    1,               /* iFirst */
    10,              /* iLast */
    20,              /* lineNo */
    10,              /* colNo */
    "Y",             /* aName */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    0                                               /* checkKind */
};

static emlrtDCInfo mb_emlrtDCI = {
    20,              /* lineNo */
    10,              /* colNo */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    1                                               /* checkKind */
};

static emlrtDCInfo nb_emlrtDCI = {
    7,                /* lineNo */
    18,               /* colNo */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", /* pName */
    1                                                /* checkKind */
};

static emlrtDCInfo ob_emlrtDCI = {
    7,                /* lineNo */
    18,               /* colNo */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", /* pName */
    4                                                /* checkKind */
};

static emlrtDCInfo pb_emlrtDCI = {
    20,              /* lineNo */
    20,              /* colNo */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    1                                               /* checkKind */
};

static emlrtBCInfo vc_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    31,               /* lineNo */
    16,               /* colNo */
    "out",            /* aName */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", /* pName */
    0                                                /* checkKind */
};

static emlrtBCInfo wc_emlrtBCI = {
    -1,               /* iFirst */
    -1,               /* iLast */
    29,               /* lineNo */
    16,               /* colNo */
    "out",            /* aName */
    "dev_A_Q_D_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", /* pName */
    0                                                /* checkKind */
};

static emlrtBCInfo be_emlrtBCI = {
    -1,                         /* iFirst */
    -1,                         /* iLast */
    12,                         /* lineNo */
    42,                         /* colNo */
    "A",                        /* aName */
    "dev_g_multiply_symmetric", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo ce_emlrtBCI = {
    -1,                         /* iFirst */
    -1,                         /* iLast */
    12,                         /* lineNo */
    39,                         /* colNo */
    "A",                        /* aName */
    "dev_g_multiply_symmetric", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtECInfo uc_emlrtECI = {
    -1,                     /* nDims */
    58,                     /* lineNo */
    9,                      /* colNo */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtECInfo vc_emlrtECI = {
    2,                      /* nDims */
    58,                     /* lineNo */
    37,                     /* colNo */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtECInfo wc_emlrtECI = {
    1,                      /* nDims */
    58,                     /* lineNo */
    37,                     /* colNo */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtECInfo xc_emlrtECI = {
    -1,                     /* nDims */
    53,                     /* lineNo */
    9,                      /* colNo */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtRTEInfo ab_emlrtRTEI = {
    54,                     /* lineNo */
    18,                     /* colNo */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtDCInfo cc_emlrtDCI = {
    31,                     /* lineNo */
    21,                     /* colNo */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    1                                               /* checkKind */
};

static emlrtDCInfo dc_emlrtDCI = {
    31,                     /* lineNo */
    18,                     /* colNo */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    1                                               /* checkKind */
};

static emlrtDCInfo ec_emlrtDCI = {
    31,                     /* lineNo */
    18,                     /* colNo */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    4                                               /* checkKind */
};

static emlrtDCInfo fc_emlrtDCI = {
    31,                     /* lineNo */
    1,                      /* colNo */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    1                                               /* checkKind */
};

static emlrtBCInfo de_emlrtBCI = {
    1,                      /* iFirst */
    11,                     /* iLast */
    36,                     /* lineNo */
    22,                     /* colNo */
    "proj_index",           /* aName */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    0                                               /* checkKind */
};

static emlrtDCInfo gc_emlrtDCI = {
    36,                     /* lineNo */
    22,                     /* colNo */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    1                                               /* checkKind */
};

static emlrtDCInfo hc_emlrtDCI = {
    58,                     /* lineNo */
    39,                     /* colNo */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    1                                               /* checkKind */
};

static emlrtBCInfo ee_emlrtBCI = {
    1,                      /* iFirst */
    10,                     /* iLast */
    58,                     /* lineNo */
    39,                     /* colNo */
    "Y",                    /* aName */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    0                                               /* checkKind */
};

static emlrtDCInfo ic_emlrtDCI = {
    53,                     /* lineNo */
    18,                     /* colNo */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    1                                               /* checkKind */
};

static emlrtBCInfo fe_emlrtBCI = {
    -1,                     /* iFirst */
    -1,                     /* iLast */
    53,                     /* lineNo */
    18,                     /* colNo */
    "out_temp",             /* aName */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo ge_emlrtBCI = {
    -1,                     /* iFirst */
    -1,                     /* iLast */
    58,                     /* lineNo */
    92,                     /* colNo */
    "Q",                    /* aName */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo he_emlrtBCI = {
    -1,                     /* iFirst */
    -1,                     /* iLast */
    58,                     /* lineNo */
    104,                    /* colNo */
    "Q",                    /* aName */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo ie_emlrtBCI = {
    -1,                     /* iFirst */
    -1,                     /* iLast */
    53,                     /* lineNo */
    30,                     /* colNo */
    "out_temp",             /* aName */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo je_emlrtBCI = {
    -1,                     /* iFirst */
    -1,                     /* iLast */
    58,                     /* lineNo */
    119,                    /* colNo */
    "Q",                    /* aName */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo ke_emlrtBCI = {
    -1,                     /* iFirst */
    -1,                     /* iLast */
    53,                     /* lineNo */
    56,                     /* colNo */
    "Q",                    /* aName */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo le_emlrtBCI = {
    -1,                     /* iFirst */
    -1,                     /* iLast */
    58,                     /* lineNo */
    131,                    /* colNo */
    "Q",                    /* aName */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo me_emlrtBCI = {
    -1,                     /* iFirst */
    -1,                     /* iLast */
    53,                     /* lineNo */
    68,                     /* colNo */
    "Q",                    /* aName */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo ne_emlrtBCI = {
    -1,                         /* iFirst */
    -1,                         /* iLast */
    15,                         /* lineNo */
    28,                         /* colNo */
    "C",                        /* aName */
    "dev_g_multiply_symmetric", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo oe_emlrtBCI = {
    -1,                         /* iFirst */
    -1,                         /* iLast */
    15,                         /* lineNo */
    25,                         /* colNo */
    "C",                        /* aName */
    "dev_g_multiply_symmetric", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo pe_emlrtBCI = {
    -1,                         /* iFirst */
    -1,                         /* iLast */
    15,                         /* lineNo */
    18,                         /* colNo */
    "C",                        /* aName */
    "dev_g_multiply_symmetric", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo qe_emlrtBCI = {
    -1,                         /* iFirst */
    -1,                         /* iLast */
    15,                         /* lineNo */
    15,                         /* colNo */
    "C",                        /* aName */
    "dev_g_multiply_symmetric", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo re_emlrtBCI = {
    -1,                         /* iFirst */
    -1,                         /* iLast */
    12,                         /* lineNo */
    32,                         /* colNo */
    "C",                        /* aName */
    "dev_g_multiply_symmetric", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo se_emlrtBCI = {
    -1,                         /* iFirst */
    -1,                         /* iLast */
    12,                         /* lineNo */
    29,                         /* colNo */
    "C",                        /* aName */
    "dev_g_multiply_symmetric", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo te_emlrtBCI = {
    -1,                         /* iFirst */
    -1,                         /* iLast */
    12,                         /* lineNo */
    52,                         /* colNo */
    "B",                        /* aName */
    "dev_g_multiply_symmetric", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo ue_emlrtBCI = {
    -1,                         /* iFirst */
    -1,                         /* iLast */
    12,                         /* lineNo */
    49,                         /* colNo */
    "B",                        /* aName */
    "dev_g_multiply_symmetric", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo ve_emlrtBCI = {
    -1,                         /* iFirst */
    -1,                         /* iLast */
    12,                         /* lineNo */
    22,                         /* colNo */
    "C",                        /* aName */
    "dev_g_multiply_symmetric", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo we_emlrtBCI = {
    -1,                         /* iFirst */
    -1,                         /* iLast */
    12,                         /* lineNo */
    19,                         /* colNo */
    "C",                        /* aName */
    "dev_g_multiply_symmetric", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_multiply_symmetric.m", /* pName */
    0                                                          /* checkKind */
};

static emlrtBCInfo xe_emlrtBCI = {
    -1,                     /* iFirst */
    -1,                     /* iLast */
    55,                     /* lineNo */
    44,                     /* colNo */
    "out_temp",             /* aName */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo ye_emlrtBCI = {
    -1,                     /* iFirst */
    -1,                     /* iLast */
    55,                     /* lineNo */
    41,                     /* colNo */
    "out_temp",             /* aName */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    0                                               /* checkKind */
};

static emlrtBCInfo af_emlrtBCI = {
    1,                      /* iFirst */
    10,                     /* iLast */
    55,                     /* lineNo */
    15,                     /* colNo */
    "Y",                    /* aName */
    "dev_Y_Q_Q_D_sum_unit", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m", /* pName */
    3                                               /* checkKind */
};

static emlrtRTEInfo kj_emlrtRTEI = {
    16,              /* lineNo */
    88,              /* colNo */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtRTEInfo lj_emlrtRTEI = {
    20,              /* lineNo */
    46,              /* colNo */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtRTEInfo mj_emlrtRTEI = {
    20,              /* lineNo */
    20,              /* colNo */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtRTEInfo nj_emlrtRTEI = {
    20,              /* lineNo */
    4,               /* colNo */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtRTEInfo yk_emlrtRTEI = {
    31,              /* lineNo */
    1,               /* colNo */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtRTEInfo al_emlrtRTEI = {
    45,              /* lineNo */
    9,               /* colNo */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtRTEInfo bl_emlrtRTEI = {
    41,              /* lineNo */
    9,               /* colNo */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtRTEInfo cl_emlrtRTEI = {
    53,              /* lineNo */
    18,              /* colNo */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtRTEInfo dl_emlrtRTEI = {
    53,              /* lineNo */
    30,              /* colNo */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtRTEInfo el_emlrtRTEI = {
    58,              /* lineNo */
    117,             /* colNo */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtRTEInfo fl_emlrtRTEI = {
    53,              /* lineNo */
    54,              /* colNo */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtRTEInfo gl_emlrtRTEI = {
    58,              /* lineNo */
    65,              /* colNo */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtRTEInfo hl_emlrtRTEI = {
    58,              /* lineNo */
    11,              /* colNo */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtRTEInfo il_emlrtRTEI = {
    58,              /* lineNo */
    23,              /* colNo */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtRTEInfo jl_emlrtRTEI = {
    58,              /* lineNo */
    37,              /* colNo */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtRTEInfo kl_emlrtRTEI = {
    58,              /* lineNo */
    9,               /* colNo */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

static emlrtRTEInfo ll_emlrtRTEI = {
    53,              /* lineNo */
    49,              /* colNo */
    "dev_H_sinv_Ht", /* fName */
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_H_sinv_Ht.m" /* pName */
};

/* Function Declarations */
static void binary_expand_op_41(const emlrtStack *sp, emxArray_real_T *in1,
                                const real_T in2[100],
                                const emxArray_real_T *in3,
                                const emxArray_real_T *in4);

static void dev_Y_Q_Q_D_sum_unit(const emlrtStack *sp, real_T Y[100],
                                 const emxArray_real_T *Q,
                                 const real_T proj_index[22], real_T L);

/* Function Definitions */
static void binary_expand_op_41(const emlrtStack *sp, emxArray_real_T *in1,
                                const real_T in2[100],
                                const emxArray_real_T *in3,
                                const emxArray_real_T *in4)
{
  const real_T *in3_data;
  const real_T *in4_data;
  real_T *in1_data;
  int32_T aux_0_1;
  int32_T aux_1_1;
  int32_T b_loop_ub;
  int32_T i;
  int32_T i1;
  int32_T in3_idx_0_tmp;
  int32_T loop_ub;
  int32_T stride_1_0;
  int32_T stride_1_1;
  in4_data = in4->data;
  in3_data = in3->data;
  in3_idx_0_tmp = in3->size[1];
  if (in4->size[1] == 1) {
    loop_ub = in3_idx_0_tmp;
  } else {
    loop_ub = in4->size[1];
  }
  i = in1->size[0] * in1->size[1];
  in1->size[1] = loop_ub;
  emxEnsureCapacity_real_T(sp, in1, i, &jl_emlrtRTEI);
  if (in4->size[0] == 1) {
    b_loop_ub = in3_idx_0_tmp;
  } else {
    b_loop_ub = in4->size[0];
  }
  i = in1->size[0] * in1->size[1];
  in1->size[0] = b_loop_ub;
  emxEnsureCapacity_real_T(sp, in1, i, &jl_emlrtRTEI);
  in1_data = in1->data;
  in3_idx_0_tmp = (in3_idx_0_tmp != 1);
  stride_1_0 = (in4->size[1] != 1);
  stride_1_1 = (in4->size[0] != 1);
  aux_0_1 = 0;
  aux_1_1 = 0;
  for (i = 0; i < b_loop_ub; i++) {
    for (i1 = 0; i1 < loop_ub; i1++) {
      in1_data[i1 + in1->size[1] * i] =
          in2[((int32_T)in3_data[i1 * in3_idx_0_tmp] +
               10 * ((int32_T)in3_data[aux_0_1] - 1)) -
              1] +
          in4_data[i1 * stride_1_0 + in4->size[1] * aux_1_1];
    }
    aux_1_1 += stride_1_1;
    aux_0_1 += in3_idx_0_tmp;
  }
}

static void dev_Y_Q_Q_D_sum_unit(const emlrtStack *sp, real_T Y[100],
                                 const emxArray_real_T *Q,
                                 const real_T proj_index[22], real_T L)
{
  emlrtStack b_st;
  emlrtStack st;
  emxArray_int32_T *r1;
  emxArray_int32_T *r2;
  emxArray_real_T *B;
  emxArray_real_T *a;
  emxArray_real_T *out_temp;
  emxArray_real_T *r;
  emxArray_real_T *temp_index;
  const real_T *Q_data;
  real_T temp;
  real_T *B_data;
  real_T *out_temp_data;
  real_T *r5;
  real_T *temp_index_data;
  int32_T b_B[2];
  int32_T iv[2];
  int32_T b_i;
  int32_T flag;
  int32_T i;
  int32_T i1;
  int32_T i2;
  int32_T i3;
  int32_T j;
  int32_T k;
  int32_T loop_ub;
  int32_T *r3;
  int32_T *r4;
  boolean_T exitg1;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  Q_data = Q->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /* WE want to compute the innerproduct of Q and Q'. */
  emxInit_real_T(sp, &out_temp, 2, &yk_emlrtRTEI);
  i = (int32_T)muDoubleScalarFloor(L);
  if (L != i) {
    emlrtIntegerCheckR2012b(L, &cc_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (!(L >= 0.0)) {
    emlrtNonNegativeCheckR2012b(L, &ec_emlrtDCI, (emlrtConstCTX)sp);
  }
  if (L != L) {
    emlrtIntegerCheckR2012b(L, &dc_emlrtDCI, (emlrtConstCTX)sp);
  }
  i1 = out_temp->size[0] * out_temp->size[1];
  i2 = (int32_T)L;
  out_temp->size[1] = i2;
  out_temp->size[0] = i2;
  emxEnsureCapacity_real_T(sp, out_temp, i1, &yk_emlrtRTEI);
  out_temp_data = out_temp->data;
  if (i2 != i) {
    emlrtIntegerCheckR2012b(L, &fc_emlrtDCI, (emlrtConstCTX)sp);
  }
  loop_ub = i2 * i2;
  for (i = 0; i < loop_ub; i++) {
    out_temp_data[i] = 0.0;
  }
  temp = 1.0;
  flag = 0;
  emxInit_real_T(sp, &temp_index, 2, &bl_emlrtRTEI);
  temp_index_data = temp_index->data;
  emxInit_real_T(sp, &r, 2, &jl_emlrtRTEI);
  emxInit_int32_T(sp, &r1, 1, &kl_emlrtRTEI);
  emxInit_int32_T(sp, &r2, 1, &kl_emlrtRTEI);
  emxInit_real_T(sp, &B, 2, &el_emlrtRTEI);
  emxInit_real_T(sp, &a, 1, &ll_emlrtRTEI);
  exitg1 = false;
  while ((!exitg1) && (temp <= Q->size[1])) {
    real_T d;
    if (temp != (int32_T)muDoubleScalarFloor(temp)) {
      emlrtIntegerCheckR2012b(temp, &gc_emlrtDCI, (emlrtConstCTX)sp);
    }
    if (((int32_T)temp < 1) || ((int32_T)temp > 11)) {
      emlrtDynamicBoundsCheckR2012b((int32_T)temp, 1, 11, &de_emlrtBCI,
                                    (emlrtConstCTX)sp);
    }
    d = proj_index[(int32_T)temp - 1];
    if (d == rtInf) {
      exitg1 = true;
    } else {
      real_T Const_type;
      if (d >= L) {
        st.site = &pg_emlrtRSI;
        b_st.site = &ub_emlrtRSI;
        if (L < temp) {
          temp_index->size[1] = 0;
          temp_index->size[0] = 1;
        } else {
          loop_ub = (int32_T)(L - temp) + 1;
          i = temp_index->size[0] * temp_index->size[1];
          temp_index->size[1] = loop_ub;
          temp_index->size[0] = 1;
          emxEnsureCapacity_real_T(&b_st, temp_index, i, &bl_emlrtRTEI);
          temp_index_data = temp_index->data;
          for (i = 0; i < loop_ub; i++) {
            temp_index_data[i] = temp + (real_T)i;
          }
        }
        Const_type = proj_index[(int32_T)temp + 10];
        flag = 1;
      } else {
        st.site = &qg_emlrtRSI;
        b_st.site = &ub_emlrtRSI;
        if (muDoubleScalarIsNaN(d)) {
          i = temp_index->size[0] * temp_index->size[1];
          temp_index->size[1] = 1;
          temp_index->size[0] = 1;
          emxEnsureCapacity_real_T(&b_st, temp_index, i, &al_emlrtRTEI);
          temp_index_data = temp_index->data;
          temp_index_data[0] = rtNaN;
        } else if (d < temp) {
          temp_index->size[1] = 0;
          temp_index->size[0] = 1;
        } else if (muDoubleScalarIsInf(d) && (temp == d)) {
          i = temp_index->size[0] * temp_index->size[1];
          temp_index->size[1] = 1;
          temp_index->size[0] = 1;
          emxEnsureCapacity_real_T(&b_st, temp_index, i, &al_emlrtRTEI);
          temp_index_data = temp_index->data;
          temp_index_data[0] = rtNaN;
        } else {
          loop_ub = (int32_T)(d - temp) + 1;
          i = temp_index->size[0] * temp_index->size[1];
          temp_index->size[1] = loop_ub;
          temp_index->size[0] = 1;
          emxEnsureCapacity_real_T(&b_st, temp_index, i, &al_emlrtRTEI);
          temp_index_data = temp_index->data;
          for (i = 0; i < loop_ub; i++) {
            temp_index_data[i] = temp + (real_T)i;
          }
        }
        Const_type = proj_index[(int32_T)temp + 10];
      }
      if (Const_type == 1.0) {
        int32_T loop_ub_tmp;
        /*  Q(temp_index, temp_index)  =
         * dev_jacob_box(z0(temp_index),proj_coefficients(2,temp_index)' ... */
        /*       , proj_coefficients(1, temp_index)', P(temp_index), alpha); */
        loop_ub_tmp = temp_index->size[1];
        for (i = 0; i < loop_ub_tmp; i++) {
          if (temp_index_data[i] !=
              (int32_T)muDoubleScalarFloor(temp_index_data[i])) {
            emlrtIntegerCheckR2012b(temp_index_data[i], &ic_emlrtDCI,
                                    (emlrtConstCTX)sp);
          }
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > i2)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, (int32_T)L, &fe_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        i = r1->size[0];
        r1->size[0] = temp_index->size[1];
        emxEnsureCapacity_int32_T(sp, r1, i, &cl_emlrtRTEI);
        r3 = r1->data;
        for (i = 0; i < loop_ub_tmp; i++) {
          r3[i] = (int32_T)temp_index_data[i] - 1;
        }
        for (i = 0; i < loop_ub_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > out_temp->size[1])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, out_temp->size[1],
                                          &ie_emlrtBCI, (emlrtConstCTX)sp);
          }
        }
        i = r2->size[0];
        r2->size[0] = temp_index->size[1];
        emxEnsureCapacity_int32_T(sp, r2, i, &dl_emlrtRTEI);
        r4 = r2->data;
        for (i = 0; i < loop_ub_tmp; i++) {
          r4[i] = (int32_T)temp_index_data[i] - 1;
        }
        for (i = 0; i < loop_ub_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > Q->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, Q->size[0], &ke_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        for (i = 0; i < loop_ub_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > Q->size[1])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, Q->size[1], &me_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        st.site = &rg_emlrtRSI;
        i = B->size[0] * B->size[1];
        B->size[1] = temp_index->size[1];
        B->size[0] = temp_index->size[1];
        emxEnsureCapacity_real_T(&st, B, i, &fl_emlrtRTEI);
        B_data = B->data;
        for (i = 0; i < loop_ub_tmp; i++) {
          for (i1 = 0; i1 < loop_ub_tmp; i1++) {
            B_data[i1 + B->size[1] * i] =
                Q_data[((int32_T)temp_index_data[i1] +
                        Q->size[1] * ((int32_T)temp_index_data[i] - 1)) -
                       1];
          }
        }
        b_st.site = &rg_emlrtRSI;
        c_diag(&b_st, B, a);
        B_data = a->data;
        loop_ub = a->size[0];
        for (i = 0; i < loop_ub; i++) {
          Const_type = B_data[i];
          B_data[i] = Const_type * Const_type;
        }
        st.site = &rg_emlrtRSI;
        diag(&st, a, r);
        r5 = r->data;
        iv[0] = temp_index->size[1];
        iv[1] = temp_index->size[1];
        b_B[0] = r->size[0];
        b_B[1] = r->size[1];
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &b_B[0], 2, &xc_emlrtECI,
                                      (emlrtCTX)sp);
        iv[0] = temp_index->size[1];
        iv[1] = temp_index->size[1];
        if ((r->size[1] == r2->size[0]) && (r1->size[0] == r->size[0])) {
          i = B->size[0] * B->size[1];
          B->size[1] = temp_index->size[1];
          B->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(sp, B, i, &me_emlrtRTEI);
          B_data = B->data;
          loop_ub = r1->size[0] * r2->size[0];
          for (i = 0; i < loop_ub; i++) {
            B_data[i] = r5[i];
          }
        } else {
          i = 0;
          i1 = 0;
          loop_ub = 0;
          b_i = 0;
          k = B->size[0] * B->size[1];
          B->size[1] = temp_index->size[1];
          B->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(sp, B, k, &me_emlrtRTEI);
          B_data = B->data;
          for (k = 0; k < iv[0] * iv[1]; k++) {
            B_data[i1 + B->size[1] * i] = r5[b_i + r->size[1] * loop_ub];
            i++;
            loop_ub++;
            if (i > B->size[0] - 1) {
              i = 0;
              i1++;
            }
            if (loop_ub > r->size[0] - 1) {
              loop_ub = 0;
              b_i++;
            }
          }
        }
        for (i = 0; i < loop_ub_tmp; i++) {
          for (i1 = 0; i1 < loop_ub_tmp; i1++) {
            out_temp_data[r4[i1] + out_temp->size[1] * r3[i]] =
                B_data[i1 + B->size[1] * i];
          }
        }
        /*  to save computation.weird */
        Const_type = muDoubleScalarMin(L, d);
        i = (int32_T)(Const_type + (1.0 - temp));
        emlrtForLoopVectorCheckR2021a(temp, 1.0, Const_type, mxDOUBLE_CLASS, i,
                                      &ab_emlrtRTEI, (emlrtConstCTX)sp);
        for (j = 0; j < i; j++) {
          uint32_T b_j;
          b_j = (uint32_T)temp + (uint32_T)j;
          if (((int32_T)b_j < 1) || ((int32_T)b_j > out_temp->size[1])) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, out_temp->size[1],
                                          &xe_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)b_j < 1) || ((int32_T)b_j > i2)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, (int32_T)L,
                                          &ye_emlrtBCI, (emlrtConstCTX)sp);
          }
          if (((int32_T)b_j < 1) || ((int32_T)b_j > 10)) {
            emlrtDynamicBoundsCheckR2012b((int32_T)b_j, 1, 10, &af_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
          i1 = ((int32_T)b_j + 10 * ((int32_T)b_j - 1)) - 1;
          Y[i1] += out_temp_data[((int32_T)b_j +
                                  out_temp->size[1] * ((int32_T)b_j - 1)) -
                                 1];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
      } else if ((Const_type == 2.0) || (Const_type == 3.0)) {
        int32_T loop_ub_tmp;
        loop_ub_tmp = temp_index->size[1];
        for (i = 0; i < loop_ub_tmp; i++) {
          if (temp_index_data[i] !=
              (int32_T)muDoubleScalarFloor(temp_index_data[i])) {
            emlrtIntegerCheckR2012b(temp_index_data[i], &hc_emlrtDCI,
                                    (emlrtConstCTX)sp);
          }
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > 10)) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, 10, &ee_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        for (i = 0; i < loop_ub_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > Q->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, Q->size[0], &ge_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        for (i = 0; i < loop_ub_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > Q->size[1])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, Q->size[1], &he_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        for (i = 0; i < loop_ub_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > Q->size[0])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, Q->size[0], &je_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        for (i = 0; i < loop_ub_tmp; i++) {
          i1 = (int32_T)temp_index_data[i];
          if ((i1 < 1) || (i1 > Q->size[1])) {
            emlrtDynamicBoundsCheckR2012b(i1, 1, Q->size[1], &le_emlrtBCI,
                                          (emlrtConstCTX)sp);
          }
        }
        st.site = &sg_emlrtRSI;
        i = B->size[0] * B->size[1];
        B->size[1] = temp_index->size[1];
        B->size[0] = temp_index->size[1];
        emxEnsureCapacity_real_T(&st, B, i, &el_emlrtRTEI);
        B_data = B->data;
        for (i = 0; i < loop_ub_tmp; i++) {
          for (i1 = 0; i1 < loop_ub_tmp; i1++) {
            B_data[i1 + B->size[1] * i] =
                Q_data[((int32_T)temp_index_data[i] +
                        Q->size[1] * ((int32_T)temp_index_data[i1] - 1)) -
                       1];
          }
        }
        /*  Get the size of the matrices */
        /*  Initialize the resulting matrix C */
        i = r->size[0] * r->size[1];
        r->size[1] = temp_index->size[1];
        r->size[0] = temp_index->size[1];
        emxEnsureCapacity_real_T(&st, r, i, &gl_emlrtRTEI);
        r5 = r->data;
        loop_ub = temp_index->size[1] * temp_index->size[1];
        for (i = 0; i < loop_ub; i++) {
          r5[i] = 0.0;
        }
        /*  Calculate the product A * B, leveraging its symmetric property */
        if (temp_index->size[1] - 1 >= 0) {
          i3 = temp_index->size[1];
        }
        for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
          for (j = 0; j <= b_i; j++) {
            for (k = 0; k < i3; k++) {
              if (k + 1 > loop_ub_tmp) {
                emlrtDynamicBoundsCheckR2012b(k + 1, 1, loop_ub_tmp,
                                              &be_emlrtBCI, &st);
              }
              if (b_i + 1 > loop_ub_tmp) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, loop_ub_tmp,
                                              &ce_emlrtBCI, &st);
              }
              if (j + 1 > r->size[1]) {
                emlrtDynamicBoundsCheckR2012b(j + 1, 1, r->size[1],
                                              &re_emlrtBCI, &st);
              }
              if (b_i + 1 > r->size[0]) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, r->size[0],
                                              &se_emlrtBCI, &st);
              }
              if (j + 1 > loop_ub_tmp) {
                emlrtDynamicBoundsCheckR2012b(j + 1, 1, loop_ub_tmp,
                                              &te_emlrtBCI, &st);
              }
              if (k + 1 > loop_ub_tmp) {
                emlrtDynamicBoundsCheckR2012b(k + 1, 1, loop_ub_tmp,
                                              &ue_emlrtBCI, &st);
              }
              if (j + 1 > r->size[1]) {
                emlrtDynamicBoundsCheckR2012b(j + 1, 1, r->size[1],
                                              &ve_emlrtBCI, &st);
              }
              if (b_i + 1 > r->size[0]) {
                emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, r->size[0],
                                              &we_emlrtBCI, &st);
              }
              r5[j + r->size[1] * b_i] +=
                  Q_data[((int32_T)temp_index_data[k] +
                          Q->size[1] * ((int32_T)temp_index_data[b_i] - 1)) -
                         1] *
                  B_data[j + B->size[1] * k];
              if (*emlrtBreakCheckR2012bFlagVar != 0) {
                emlrtBreakCheckR2012b(&st);
              }
            }
            /*  Use the computed value for the symmetric element */
            if (j + 1 > r->size[1]) {
              emlrtDynamicBoundsCheckR2012b(j + 1, 1, r->size[1], &ne_emlrtBCI,
                                            &st);
            }
            if (b_i + 1 > r->size[0]) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, r->size[0],
                                            &oe_emlrtBCI, &st);
            }
            if (b_i + 1 > r->size[1]) {
              emlrtDynamicBoundsCheckR2012b(b_i + 1, 1, r->size[1],
                                            &pe_emlrtBCI, &st);
            }
            if (j + 1 > r->size[0]) {
              emlrtDynamicBoundsCheckR2012b(j + 1, 1, r->size[0], &qe_emlrtBCI,
                                            &st);
            }
            r5[b_i + r->size[1] * j] = r5[j + r->size[1] * b_i];
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b(&st);
          }
        }
        if ((temp_index->size[1] != r->size[0]) &&
            ((temp_index->size[1] != 1) && (r->size[0] != 1))) {
          emlrtDimSizeImpxCheckR2021b(temp_index->size[1], r->size[0],
                                      &wc_emlrtECI, (emlrtConstCTX)sp);
        }
        if ((temp_index->size[1] != r->size[1]) &&
            ((temp_index->size[1] != 1) && (r->size[1] != 1))) {
          emlrtDimSizeImpxCheckR2021b(temp_index->size[1], r->size[1],
                                      &vc_emlrtECI, (emlrtConstCTX)sp);
        }
        i = r1->size[0];
        r1->size[0] = temp_index->size[1];
        emxEnsureCapacity_int32_T(sp, r1, i, &hl_emlrtRTEI);
        r3 = r1->data;
        i = r2->size[0];
        r2->size[0] = temp_index->size[1];
        emxEnsureCapacity_int32_T(sp, r2, i, &il_emlrtRTEI);
        r4 = r2->data;
        for (i = 0; i < loop_ub_tmp; i++) {
          Const_type = temp_index_data[i];
          r3[i] = (int32_T)Const_type - 1;
          r4[i] = (int32_T)Const_type - 1;
        }
        if ((temp_index->size[1] == r->size[1]) &&
            (temp_index->size[1] == r->size[0])) {
          i = B->size[0] * B->size[1];
          B->size[1] = temp_index->size[1];
          B->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(sp, B, i, &jl_emlrtRTEI);
          B_data = B->data;
          for (i = 0; i < loop_ub_tmp; i++) {
            for (i1 = 0; i1 < loop_ub_tmp; i1++) {
              B_data[i1 + B->size[1] * i] =
                  Y[((int32_T)temp_index_data[i1] +
                     10 * ((int32_T)temp_index_data[i] - 1)) -
                    1] +
                  r5[i1 + r->size[1] * i];
            }
          }
        } else {
          st.site = &sg_emlrtRSI;
          binary_expand_op_41(&st, B, Y, temp_index, r);
          B_data = B->data;
        }
        iv[0] = temp_index->size[1];
        iv[1] = temp_index->size[1];
        b_B[0] = B->size[0];
        b_B[1] = B->size[1];
        emlrtSubAssignSizeCheckR2012b(&iv[0], 2, &b_B[0], 2, &uc_emlrtECI,
                                      (emlrtCTX)sp);
        iv[0] = temp_index->size[1];
        iv[1] = temp_index->size[1];
        if ((B->size[1] == r2->size[0]) && (r1->size[0] == B->size[0])) {
          i = r->size[0] * r->size[1];
          r->size[1] = temp_index->size[1];
          r->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(sp, r, i, &me_emlrtRTEI);
          r5 = r->data;
          for (i = 0; i < loop_ub; i++) {
            r5[i] = B_data[i];
          }
        } else {
          i = 0;
          i1 = 0;
          loop_ub = 0;
          b_i = 0;
          k = r->size[0] * r->size[1];
          r->size[1] = temp_index->size[1];
          r->size[0] = temp_index->size[1];
          emxEnsureCapacity_real_T(sp, r, k, &me_emlrtRTEI);
          r5 = r->data;
          for (k = 0; k < iv[0] * iv[1]; k++) {
            r5[i1 + r->size[1] * i] = B_data[b_i + B->size[1] * loop_ub];
            i++;
            loop_ub++;
            if (i > r->size[0] - 1) {
              i = 0;
              i1++;
            }
            if (loop_ub > B->size[0] - 1) {
              loop_ub = 0;
              b_i++;
            }
          }
        }
        for (i = 0; i < loop_ub_tmp; i++) {
          for (i1 = 0; i1 < loop_ub_tmp; i1++) {
            Y[r4[i1] + 10 * r3[i]] = r5[i1 + r->size[1] * i];
          }
        }
        /*  a faster way is to treat diagbonal cases vs dense cases differently.
         */
        /*  Q(temp_index, temp_index) = dev_jacob_ball(z0(temp_index),
         * proj_coefficients(1,temp), P(temp_index), alpha); */
      }
      /* update */
      if (flag == 1) {
        exitg1 = true;
      } else {
        temp = d + 1.0;
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
    }
  }
  emxFree_real_T(sp, &a);
  emxFree_real_T(sp, &B);
  emxFree_int32_T(sp, &r2);
  emxFree_int32_T(sp, &r1);
  emxFree_real_T(sp, &r);
  emxFree_real_T(sp, &temp_index);
  emxFree_real_T(sp, &out_temp);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

void dev_H_sinv_Ht(const emlrtStack *sp, const real_T A[3190],
                   const emxArray_real_T *Q, const real_T proj_index_all[660],
                   real_T nx, real_T Y[5800])
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  emxArray_int8_T *r2;
  emxArray_real_T e_Q;
  emxArray_real_T *b_A;
  emxArray_real_T *b_Q;
  emxArray_real_T *c_Q;
  emxArray_real_T *d_Q;
  emxArray_real_T *r;
  emxArray_real_T *r1;
  emxArray_real_T *r3;
  emxArray_real_T *temp_index;
  real_T C[100];
  const real_T *Q_data;
  real_T *b_Q_data;
  real_T *c_Q_data;
  real_T *r4;
  real_T *r6;
  real_T *temp_index_data;
  int32_T iv[2];
  int32_T iv1[2];
  int32_T iv2[2];
  int32_T b_i;
  int32_T c_i;
  int32_T flag;
  int32_T i;
  int32_T i1;
  int32_T k;
  int32_T loop_ub_tmp;
  int8_T *r5;
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  Q_data = Q->data;
  emlrtHeapReferenceStackEnterFcnR2012b((emlrtConstCTX)sp);
  /* Remember the symetric in multiplication. */
  /*  the Y matrix is a 4 dimensional matrix. t is for the t th row HsHt and */
  /*  the third index is for the location. 1 for diag and 2 for the subdiag */
  /*  below the diag.  */
  /*  Y(:, :, 2, t) is the block on tth row and t-1 column  */
  /*  hense Y(:, :, 2, 1) = 0, t has realization for only t >0  */
  memset(&Y[0], 0, 5800U * sizeof(real_T));
  loop_ub_tmp = Q->size[0];
  emxInit_real_T(sp, &r, 2, &nj_emlrtRTEI);
  emxInit_real_T(sp, &b_Q, 2, &lj_emlrtRTEI);
  emxInit_real_T(sp, &temp_index, 2, &de_emlrtRTEI);
  temp_index_data = temp_index->data;
  emxInit_real_T(sp, &r1, 1, &ae_emlrtRTEI);
  emxInit_int8_T(sp, &r2, &ee_emlrtRTEI);
  emxInit_real_T(sp, &r3, 2, &ee_emlrtRTEI);
  emxInit_real_T(sp, &c_Q, 3, &kj_emlrtRTEI);
  emxInit_real_T(sp, &b_A, 2, &wd_emlrtRTEI);
  emxInit_real_T(sp, &d_Q, 2, &yd_emlrtRTEI);
  for (i = 0; i < 29; i++) {
    real_T B[110];
    real_T b_proj_index_all[22];
    real_T temp;
    /*  Y(:,:,1, i) = dev_g_multiply_symmetric(A(:, :, i), A(:, :,i)'); */
    for (b_i = 0; b_i < 11; b_i++) {
      for (i1 = 0; i1 < 10; i1++) {
        B[i1 + 10 * b_i] = A[(i + 29 * b_i) + 319 * i1];
      }
    }
    /*  Get the size of the matrices */
    /*  Initialize the resulting matrix C */
    memset(&C[0], 0, 100U * sizeof(real_T));
    /*  Calculate the product A * B, leveraging its symmetric property */
    for (c_i = 0; c_i < 10; c_i++) {
      for (flag = 0; flag <= c_i; flag++) {
        b_i = flag + 10 * c_i;
        temp = C[b_i];
        for (k = 0; k < 11; k++) {
          i1 = k + c_i * 11;
          temp += A[(i + 29 * (i1 % 11)) + 319 * (i1 / 11)] * B[flag + 10 * k];
          if (*emlrtBreakCheckR2012bFlagVar != 0) {
            emlrtBreakCheckR2012b((emlrtConstCTX)sp);
          }
        }
        C[b_i] = temp;
        /*  Use the computed value for the symmetric element */
        C[c_i + 10 * flag] = C[b_i];
        if (*emlrtBreakCheckR2012bFlagVar != 0) {
          emlrtBreakCheckR2012b((emlrtConstCTX)sp);
        }
      }
      if (*emlrtBreakCheckR2012bFlagVar != 0) {
        emlrtBreakCheckR2012b((emlrtConstCTX)sp);
      }
    }
    b_i = c_Q->size[0] * c_Q->size[1] * c_Q->size[2];
    c_Q->size[2] = 1;
    k = Q->size[1];
    c_Q->size[1] = Q->size[1];
    c_Q->size[0] = loop_ub_tmp;
    emxEnsureCapacity_real_T(sp, c_Q, b_i, &kj_emlrtRTEI);
    b_Q_data = c_Q->data;
    for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
      for (i1 = 0; i1 < k; i1++) {
        b_Q_data[i1 + c_Q->size[1] * b_i] =
            Q_data[((i + 30 * i1) + 30 * Q->size[1] * b_i) + 1];
      }
    }
    c_i = Q->size[1];
    for (b_i = 0; b_i < 2; b_i++) {
      for (i1 = 0; i1 < 11; i1++) {
        b_proj_index_all[i1 + 11 * b_i] =
            proj_index_all[((i + 30 * i1) + 330 * b_i) + 1];
      }
    }
    e_Q = *c_Q;
    iv[0] = loop_ub_tmp;
    iv[1] = c_i;
    e_Q.size = &iv[0];
    e_Q.numDimensions = 2;
    st.site = &ng_emlrtRSI;
    dev_Y_Q_Q_D_sum_unit(&st, C, &e_Q, b_proj_index_all, nx);
    for (b_i = 0; b_i < 10; b_i++) {
      for (i1 = 0; i1 < 10; i1++) {
        Y[(i + 58 * i1) + 580 * b_i] = C[i1 + 10 * b_i];
      }
    }
    if (i + 1 != 1) {
      int32_T loop_ub;
      boolean_T exitg1;
      if (nx < 1.0) {
        loop_ub = 0;
      } else {
        if (nx != (int32_T)muDoubleScalarFloor(nx)) {
          emlrtIntegerCheckR2012b(nx, &mb_emlrtDCI, (emlrtConstCTX)sp);
        }
        if (((int32_T)nx < 1) || ((int32_T)nx > 10)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)nx, 1, 10, &uc_emlrtBCI,
                                        (emlrtConstCTX)sp);
        }
        loop_ub = (int32_T)nx;
      }
      st.site = &og_emlrtRSI;
      b_i = c_Q->size[0] * c_Q->size[1] * c_Q->size[2];
      c_Q->size[2] = 1;
      c_Q->size[1] = Q->size[1];
      c_Q->size[0] = loop_ub_tmp;
      emxEnsureCapacity_real_T(&st, c_Q, b_i, &lj_emlrtRTEI);
      b_Q_data = c_Q->data;
      for (b_i = 0; b_i < loop_ub_tmp; b_i++) {
        for (i1 = 0; i1 < k; i1++) {
          b_Q_data[i1 + c_Q->size[1] * b_i] =
              Q_data[(i + 30 * i1) + 30 * Q->size[1] * b_i];
        }
      }
      c_i = Q->size[1];
      b_i = b_Q->size[0] * b_Q->size[1];
      b_Q->size[1] = loop_ub_tmp;
      b_Q->size[0] = Q->size[1];
      emxEnsureCapacity_real_T(&st, b_Q, b_i, &lj_emlrtRTEI);
      c_Q_data = b_Q->data;
      for (b_i = 0; b_i < k; b_i++) {
        for (i1 = 0; i1 < loop_ub_tmp; i1++) {
          c_Q_data[i1 + b_Q->size[1] * b_i] = b_Q_data[b_i + c_i * i1];
        }
      }
      /* WE want to compute the innerproduct of A and Q. */
      /* When col(A) \neq row(Q), we need an L such that only the first L column
       */
      /* multiply the top square block of Q that ahs size L */
      if (!(nx >= 0.0)) {
        emlrtNonNegativeCheckR2012b(nx, &ob_emlrtDCI, &st);
      }
      temp = (int32_T)muDoubleScalarFloor(nx);
      if (nx != temp) {
        emlrtIntegerCheckR2012b(nx, &nb_emlrtDCI, &st);
      }
      b_i = r->size[0] * r->size[1];
      r->size[1] = (int32_T)nx;
      r->size[0] = 10;
      emxEnsureCapacity_real_T(&st, r, b_i, &mj_emlrtRTEI);
      r4 = r->data;
      if (nx != temp) {
        emlrtIntegerCheckR2012b(nx, &pb_emlrtDCI, &st);
      }
      c_i = (int32_T)nx * 10;
      for (b_i = 0; b_i < c_i; b_i++) {
        r4[b_i] = 0.0;
      }
      temp = 1.0;
      flag = 0;
      exitg1 = false;
      while ((!exitg1) && (temp <= 11.0)) {
        real_T b;
        if (temp != (int32_T)muDoubleScalarFloor(temp)) {
          emlrtIntegerCheckR2012b(temp, &v_emlrtDCI, &st);
        }
        if (((int32_T)temp < 1) || ((int32_T)temp > 11)) {
          emlrtDynamicBoundsCheckR2012b((int32_T)temp, 1, 11, &gb_emlrtBCI,
                                        &st);
        }
        b = proj_index_all[i + 30 * (((int32_T)temp - 1) % 11)];
        if (b == rtInf) {
          exitg1 = true;
        } else {
          if (b >= nx) {
            b_st.site = &gg_emlrtRSI;
            c_st.site = &ub_emlrtRSI;
            if (nx < temp) {
              temp_index->size[1] = 0;
              temp_index->size[0] = 1;
            } else {
              c_i = (int32_T)((real32_T)nx - (real32_T)temp) + 1;
              b_i = temp_index->size[0] * temp_index->size[1];
              temp_index->size[1] = c_i;
              temp_index->size[0] = 1;
              emxEnsureCapacity_real_T(&c_st, temp_index, b_i, &de_emlrtRTEI);
              temp_index_data = temp_index->data;
              for (b_i = 0; b_i < c_i; b_i++) {
                temp_index_data[b_i] = temp + (real_T)b_i;
              }
            }
            temp = proj_index_all[(i + 30 * (((int32_T)temp + 10) % 11)) + 330];
            flag = 1;
          } else {
            b_st.site = &hg_emlrtRSI;
            c_st.site = &ub_emlrtRSI;
            if (muDoubleScalarIsNaN(b)) {
              b_i = temp_index->size[0] * temp_index->size[1];
              temp_index->size[1] = 1;
              temp_index->size[0] = 1;
              emxEnsureCapacity_real_T(&c_st, temp_index, b_i, &td_emlrtRTEI);
              temp_index_data = temp_index->data;
              temp_index_data[0] = rtNaN;
            } else if (b < temp) {
              temp_index->size[1] = 0;
              temp_index->size[0] = 1;
            } else if (muDoubleScalarIsInf(b) && (temp == b)) {
              b_i = temp_index->size[0] * temp_index->size[1];
              temp_index->size[1] = 1;
              temp_index->size[0] = 1;
              emxEnsureCapacity_real_T(&c_st, temp_index, b_i, &td_emlrtRTEI);
              temp_index_data = temp_index->data;
              temp_index_data[0] = rtNaN;
            } else {
              c_i = (int32_T)(b - temp) + 1;
              b_i = temp_index->size[0] * temp_index->size[1];
              temp_index->size[1] = c_i;
              temp_index->size[0] = 1;
              emxEnsureCapacity_real_T(&c_st, temp_index, b_i, &td_emlrtRTEI);
              temp_index_data = temp_index->data;
              for (b_i = 0; b_i < c_i; b_i++) {
                temp_index_data[b_i] = temp + (real_T)b_i;
              }
            }
            temp = proj_index_all[(i + 30 * (((int32_T)temp + 10) % 11)) + 330];
          }
          if (temp == 1.0) {
            /*  Q(temp_index, temp_index)  =
             * dev_jacob_box(z0(temp_index),proj_coefficients(2,temp_index)' ...
             */
            /*       , proj_coefficients(1, temp_index)', P(temp_index), alpha);
             */
            c_i = temp_index->size[1];
            for (b_i = 0; b_i < c_i; b_i++) {
              if (temp_index_data[b_i] !=
                  (int32_T)muDoubleScalarFloor(temp_index_data[b_i])) {
                emlrtIntegerCheckR2012b(temp_index_data[b_i], &x_emlrtDCI, &st);
              }
              i1 = (int32_T)temp_index_data[b_i];
              if ((i1 < 1) || (i1 > 11)) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, 11, &ib_emlrtBCI, &st);
              }
            }
            for (b_i = 0; b_i < c_i; b_i++) {
              i1 = (int32_T)temp_index_data[b_i];
              if ((i1 < 1) || (i1 > k)) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, k, &jb_emlrtBCI, &st);
              }
            }
            for (b_i = 0; b_i < c_i; b_i++) {
              i1 = (int32_T)temp_index_data[b_i];
              if ((i1 < 1) || (i1 > loop_ub_tmp)) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub_tmp, &lb_emlrtBCI,
                                              &st);
              }
            }
            b_i = d_Q->size[0] * d_Q->size[1];
            d_Q->size[1] = temp_index->size[1];
            d_Q->size[0] = temp_index->size[1];
            emxEnsureCapacity_real_T(&st, d_Q, b_i, &vd_emlrtRTEI);
            b_Q_data = d_Q->data;
            for (b_i = 0; b_i < c_i; b_i++) {
              for (i1 = 0; i1 < c_i; i1++) {
                b_Q_data[i1 + d_Q->size[1] * b_i] =
                    c_Q_data[((int32_T)temp_index_data[i1] +
                              b_Q->size[1] *
                                  ((int32_T)temp_index_data[b_i] - 1)) -
                             1];
              }
            }
            b_st.site = &ig_emlrtRSI;
            c_diag(&b_st, d_Q, r1);
            r6 = r1->data;
            if ((temp_index->size[1] != r1->size[0]) &&
                ((temp_index->size[1] != 1) && (r1->size[0] != 1))) {
              emlrtDimSizeImpxCheckR2021b(temp_index->size[1], r1->size[0],
                                          &v_emlrtECI, &st);
            }
            for (b_i = 0; b_i < c_i; b_i++) {
              i1 = (int32_T)temp_index_data[b_i];
              if ((i1 < 1) || (i1 > r->size[1])) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, r->size[1], &wc_emlrtBCI,
                                              &st);
              }
            }
            b_i = r2->size[0];
            r2->size[0] = temp_index->size[1];
            emxEnsureCapacity_int8_T(&st, r2, b_i, &xd_emlrtRTEI);
            r5 = r2->data;
            for (b_i = 0; b_i < c_i; b_i++) {
              r5[b_i] = (int8_T)((int8_T)temp_index_data[b_i] - 1);
            }
            if (temp_index->size[1] == r1->size[0]) {
              b_i = r3->size[0] * r3->size[1];
              r3->size[1] = temp_index->size[1];
              r3->size[0] = 10;
              emxEnsureCapacity_real_T(&st, r3, b_i, &ae_emlrtRTEI);
              b_Q_data = r3->data;
              for (b_i = 0; b_i < 10; b_i++) {
                for (i1 = 0; i1 < c_i; i1++) {
                  b_Q_data[i1 + r3->size[1] * b_i] =
                      A[(i + 29 * ((int32_T)temp_index_data[i1] - 1)) +
                        319 * b_i] *
                      r6[i1];
                }
              }
            } else {
              b_st.site = &ig_emlrtRSI;
              binary_expand_op_13(&b_st, r3, A, i, temp_index, r1);
              b_Q_data = r3->data;
            }
            iv1[0] = 10;
            iv1[1] = temp_index->size[1];
            iv2[0] = 10;
            iv2[1] = r3->size[1];
            emlrtSubAssignSizeCheckR2012b(&iv1[0], 2, &iv2[0], 2, &w_emlrtECI,
                                          &st);
            c_i = r2->size[0];
            for (b_i = 0; b_i < 10; b_i++) {
              for (i1 = 0; i1 < c_i; i1++) {
                r4[r5[i1] + r->size[1] * b_i] =
                    b_Q_data[i1 + r3->size[1] * b_i];
              }
            }
            /*  to save computation. */
          } else if ((temp == 2.0) || (temp == 3.0)) {
            c_i = temp_index->size[1];
            for (b_i = 0; b_i < c_i; b_i++) {
              if (temp_index_data[b_i] !=
                  (int32_T)muDoubleScalarFloor(temp_index_data[b_i])) {
                emlrtIntegerCheckR2012b(temp_index_data[b_i], &w_emlrtDCI, &st);
              }
              i1 = (int32_T)temp_index_data[b_i];
              if ((i1 < 1) || (i1 > r->size[1])) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, r->size[1], &vc_emlrtBCI,
                                              &st);
              }
            }
            b_i = r2->size[0];
            r2->size[0] = temp_index->size[1];
            emxEnsureCapacity_int8_T(&st, r2, b_i, &ud_emlrtRTEI);
            r5 = r2->data;
            for (b_i = 0; b_i < c_i; b_i++) {
              r5[b_i] = (int8_T)((int8_T)temp_index_data[b_i] - 1);
            }
            for (b_i = 0; b_i < c_i; b_i++) {
              i1 = (int32_T)temp_index_data[b_i];
              if ((i1 < 1) || (i1 > k)) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, k, &kb_emlrtBCI, &st);
              }
            }
            for (b_i = 0; b_i < c_i; b_i++) {
              i1 = (int32_T)temp_index_data[b_i];
              if ((i1 < 1) || (i1 > loop_ub_tmp)) {
                emlrtDynamicBoundsCheckR2012b(i1, 1, loop_ub_tmp, &mb_emlrtBCI,
                                              &st);
              }
            }
            b_st.site = &jg_emlrtRSI;
            b_i = b_A->size[0] * b_A->size[1];
            b_A->size[1] = temp_index->size[1];
            b_A->size[0] = 10;
            emxEnsureCapacity_real_T(&b_st, b_A, b_i, &wd_emlrtRTEI);
            b_Q_data = b_A->data;
            for (b_i = 0; b_i < 10; b_i++) {
              for (i1 = 0; i1 < c_i; i1++) {
                b_Q_data[i1 + b_A->size[1] * b_i] =
                    A[(i + 29 * ((int32_T)temp_index_data[i1] - 1)) +
                      319 * b_i];
              }
            }
            b_i = d_Q->size[0] * d_Q->size[1];
            d_Q->size[1] = temp_index->size[1];
            d_Q->size[0] = temp_index->size[1];
            emxEnsureCapacity_real_T(&b_st, d_Q, b_i, &yd_emlrtRTEI);
            b_Q_data = d_Q->data;
            for (b_i = 0; b_i < c_i; b_i++) {
              for (i1 = 0; i1 < c_i; i1++) {
                b_Q_data[i1 + d_Q->size[1] * b_i] =
                    c_Q_data[((int32_T)temp_index_data[i1] +
                              b_Q->size[1] *
                                  ((int32_T)temp_index_data[b_i] - 1)) -
                             1];
              }
            }
            c_st.site = &kg_emlrtRSI;
            mtimes(&c_st, b_A, d_Q, r3);
            b_Q_data = r3->data;
            iv1[0] = 10;
            iv1[1] = temp_index->size[1];
            iv2[0] = 10;
            iv2[1] = r3->size[1];
            emlrtSubAssignSizeCheckR2012b(&iv1[0], 2, &iv2[0], 2, &x_emlrtECI,
                                          &st);
            c_i = r2->size[0];
            for (b_i = 0; b_i < 10; b_i++) {
              for (i1 = 0; i1 < c_i; i1++) {
                r4[r5[i1] + r->size[1] * b_i] =
                    b_Q_data[i1 + r3->size[1] * b_i];
              }
            }
            /*  a faster way is to treat diagbonal cases vs dense cases
             * differently. */
            /*  Q(temp_index, temp_index) = dev_jacob_ball(z0(temp_index),
             * proj_coefficients(1,temp), P(temp_index), alpha); */
          }
          /* update */
          if (flag == 1) {
            exitg1 = true;
          } else {
            temp = b + 1.0;
            if (*emlrtBreakCheckR2012bFlagVar != 0) {
              emlrtBreakCheckR2012b(&st);
            }
          }
        }
      }
      iv1[0] = 10;
      iv1[1] = loop_ub;
      iv2[0] = 10;
      iv2[1] = r->size[1];
      emlrtSubAssignSizeCheckR2012b(&iv1[0], 2, &iv2[0], 2, &hc_emlrtECI,
                                    (emlrtCTX)sp);
      for (b_i = 0; b_i < 10; b_i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          Y[((i + 58 * i1) + 580 * b_i) + 29] = r4[i1 + r->size[1] * b_i];
        }
      }
      /* Remember to transpose Q */
    }
    if (*emlrtBreakCheckR2012bFlagVar != 0) {
      emlrtBreakCheckR2012b((emlrtConstCTX)sp);
    }
  }
  emxFree_real_T(sp, &d_Q);
  emxFree_real_T(sp, &b_A);
  emxFree_real_T(sp, &c_Q);
  emxFree_real_T(sp, &r3);
  emxFree_int8_T(sp, &r2);
  emxFree_real_T(sp, &r1);
  emxFree_real_T(sp, &temp_index);
  emxFree_real_T(sp, &b_Q);
  emxFree_real_T(sp, &r);
  emlrtHeapReferenceStackLeaveFcnR2012b((emlrtConstCTX)sp);
}

/* End of code generation (dev_H_sinv_Ht.c) */
