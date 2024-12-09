//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonpipg_compare_withtimer_data.cpp
//
// Code generation for function 'dev_newtonpipg_compare_withtimer_data'
//

// Include files
#include "dev_newtonpipg_compare_withtimer_data.h"
#include "rt_nonfinite.h"

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal{nullptr};

const volatile char_T *emlrtBreakCheckR2012bFlagVar{nullptr};

emlrtContext emlrtContextGlobal{
    true,                                                 // bFirstTime
    false,                                                // bInitialized
    131643U,                                              // fVersionInfo
    nullptr,                                              // fErrorFunction
    "dev_newtonpipg_compare_withtimer",                   // fFunctionName
    nullptr,                                              // fRTCallStack
    false,                                                // bDebugMode
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, // fSigWrd
    nullptr                                               // fSigMem
};

emlrtRSInfo
    s_emlrtRSI{
        69,                  // lineNo
        "eml_mtimes_helper", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pathName
    };

emlrtRSInfo v_emlrtRSI{
    20,          // lineNo
    "dev_HtZ_g", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" // pathName
};

emlrtRSInfo w_emlrtRSI{
    44,       // lineNo
    "mpower", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" // pathName
};

emlrtRSInfo
    x_emlrtRSI{
        71,      // lineNo
        "power", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" // pathName
    };

emlrtRSInfo db_emlrtRSI{
    7,         // lineNo
    "getTime", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\getTime.m" // pathName
};

emlrtRSInfo eb_emlrtRSI{
    21,                     // lineNo
    "CoderTimeAPI/getTime", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\CoderTimeAPI.m" // pathName
};

emlrtRSInfo fb_emlrtRSI{
    148,                                  // lineNo
    "CoderTimeAPI/callEMLRTClockGettime", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\CoderTimeAPI.m" // pathName
};

emlrtRSInfo wc_emlrtRSI{
    34,               // lineNo
    "rdivide_helper", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
    "helper.m" // pathName
};

emlrtRSInfo xc_emlrtRSI{
    53,    // lineNo
    "div", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" // pathName
};

emlrtRSInfo te_emlrtRSI{
    36,               // lineNo
    "dev_A_Q_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pathName
};

emlrtRSInfo ue_emlrtRSI{
    34,               // lineNo
    "dev_A_Q_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pathName
};

emlrtRSInfo ve_emlrtRSI{
    25,               // lineNo
    "dev_A_Q_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pathName
};

emlrtRSInfo we_emlrtRSI{
    23,               // lineNo
    "dev_A_Q_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pathName
};

emlrtRTEInfo
    d_emlrtRTEI{
        82,         // lineNo
        5,          // colNo
        "fltpower", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" // pName
    };

emlrtRTEInfo
    n_emlrtRTEI{
        138,                   // lineNo
        23,                    // colNo
        "dynamic_size_checks", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pName
    };

emlrtRTEInfo
    o_emlrtRTEI{
        133,                   // lineNo
        23,                    // colNo
        "dynamic_size_checks", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pName
    };

emlrtECInfo h_emlrtECI{
    -1,          // nDims
    20,          // lineNo
    5,           // colNo
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m" // pName
};

emlrtDCInfo j_emlrtDCI{
    8,           // lineNo
    1,           // colNo
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    1                                           // checkKind
};

emlrtDCInfo k_emlrtDCI{
    8,           // lineNo
    1,           // colNo
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    4                                           // checkKind
};

emlrtBCInfo k_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    14,          // lineNo
    9,           // colNo
    "out",       // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

emlrtBCInfo l_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    18,          // lineNo
    9,           // colNo
    "out",       // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

emlrtBCInfo m_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    20,          // lineNo
    34,          // colNo
    "out",       // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

emlrtBCInfo o_emlrtBCI{
    -1,          // iFirst
    -1,          // iLast
    20,          // lineNo
    9,           // colNo
    "out",       // aName
    "dev_HtZ_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_HtZ_g.m", // pName
    0                                           // checkKind
};

emlrtRTEInfo q_emlrtRTEI{
    159,                    // lineNo
    13,                     // colNo
    "coderTimeCheckStatus", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\CoderTimeAPI.m" // pName
};

emlrtRTEInfo u_emlrtRTEI{
    13,                     // lineNo
    27,                     // colNo
    "assertCompatibleDims", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\assertCompatibleDims.m" // pName
};

emlrtRTEInfo w_emlrtRTEI{
    48,          // lineNo
    13,          // colNo
    "infocheck", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\infocheck.m" // pName
};

emlrtRTEInfo x_emlrtRTEI{
    45,          // lineNo
    13,          // colNo
    "infocheck", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\infocheck.m" // pName
};

emlrtDCInfo lc_emlrtDCI{
    12,               // lineNo
    22,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    1                                                // checkKind
};

emlrtBCInfo wd_emlrtBCI{
    1,                // iFirst
    11,               // iLast
    12,               // lineNo
    22,               // colNo
    "proj_index",     // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtBCInfo xd_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    23,               // lineNo
    56,               // colNo
    "Q",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtBCInfo yd_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    23,               // lineNo
    62,               // colNo
    "Q",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtBCInfo ae_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    23,               // lineNo
    65,               // colNo
    "Q",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtBCInfo be_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    23,               // lineNo
    71,               // colNo
    "Q",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtECInfo mc_emlrtECI{
    2,                // nDims
    23,               // lineNo
    31,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtBCInfo ce_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    25,               // lineNo
    49,               // colNo
    "Q",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtBCInfo de_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    25,               // lineNo
    55,               // colNo
    "Q",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtBCInfo ee_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    25,               // lineNo
    58,               // colNo
    "Q",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtBCInfo fe_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    25,               // lineNo
    64,               // colNo
    "Q",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtDCInfo mc_emlrtDCI{
    34,               // lineNo
    60,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    1                                                // checkKind
};

emlrtBCInfo ge_emlrtBCI{
    1,                // iFirst
    11,               // iLast
    34,               // lineNo
    60,               // colNo
    "A",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtBCInfo he_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    34,               // lineNo
    92,               // colNo
    "Q",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtDCInfo nc_emlrtDCI{
    34,               // lineNo
    98,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    1                                                // checkKind
};

emlrtBCInfo ie_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    34,               // lineNo
    98,               // colNo
    "Q",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtBCInfo je_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    34,               // lineNo
    119,              // colNo
    "Q",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtDCInfo oc_emlrtDCI{
    34,               // lineNo
    125,              // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    1                                                // checkKind
};

emlrtBCInfo ke_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    34,               // lineNo
    125,              // colNo
    "Q",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtECInfo nc_emlrtECI{
    2,                // nDims
    34,               // lineNo
    49,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtDCInfo pc_emlrtDCI{
    36,               // lineNo
    60,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    1                                                // checkKind
};

emlrtBCInfo le_emlrtBCI{
    1,                // iFirst
    11,               // iLast
    36,               // lineNo
    60,               // colNo
    "A",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtBCInfo me_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    36,               // lineNo
    86,               // colNo
    "Q",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtDCInfo qc_emlrtDCI{
    36,               // lineNo
    92,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    1                                                // checkKind
};

emlrtBCInfo ne_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    36,               // lineNo
    92,               // colNo
    "Q",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtBCInfo oe_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    36,               // lineNo
    113,              // colNo
    "Q",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtDCInfo rc_emlrtDCI{
    36,               // lineNo
    119,              // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    1                                                // checkKind
};

emlrtBCInfo pe_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    36,               // lineNo
    119,              // colNo
    "Q",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtECInfo oc_emlrtECI{
    -1,               // nDims
    23,               // lineNo
    13,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtECInfo pc_emlrtECI{
    -1,               // nDims
    25,               // lineNo
    13,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtDCInfo sc_emlrtDCI{
    34,               // lineNo
    26,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    1                                                // checkKind
};

emlrtECInfo qc_emlrtECI{
    -1,               // nDims
    34,               // lineNo
    13,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtDCInfo tc_emlrtDCI{
    36,               // lineNo
    26,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    1                                                // checkKind
};

emlrtECInfo rc_emlrtECI{
    -1,               // nDims
    36,               // lineNo
    13,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

const char_T cv[26]{'e', 'm', 'l', 'r', 't', 'C', 'l', 'o', 'c',
                    'k', 'G', 'e', 't', 't', 'i', 'm', 'e', 'M',
                    'o', 'n', 'o', 't', 'o', 'n', 'i', 'c'};

// End of code generation (dev_newtonpipg_compare_withtimer_data.cpp)
