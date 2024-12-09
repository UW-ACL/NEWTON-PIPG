//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_g_newton_pipg_update_withtimer_data.cpp
//
// Code generation for function 'dev_g_newton_pipg_update_withtimer_data'
//

// Include files
#include "dev_g_newton_pipg_update_withtimer_data.h"
#include "rt_nonfinite.h"

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal{nullptr};

const volatile char_T *emlrtBreakCheckR2012bFlagVar{nullptr};

emlrtContext emlrtContextGlobal{
    true,                                                 // bFirstTime
    false,                                                // bInitialized
    131643U,                                              // fVersionInfo
    nullptr,                                              // fErrorFunction
    "dev_g_newton_pipg_update_withtimer",                 // fFunctionName
    nullptr,                                              // fRTCallStack
    false,                                                // bDebugMode
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, // fSigWrd
    nullptr                                               // fSigMem
};

emlrtRSInfo kb_emlrtRSI{
    7,         // lineNo
    "getTime", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\getTime.m" // pathName
};

emlrtRSInfo lb_emlrtRSI{
    21,                     // lineNo
    "CoderTimeAPI/getTime", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\CoderTimeAPI.m" // pathName
};

emlrtRSInfo mb_emlrtRSI{
    148,                                  // lineNo
    "CoderTimeAPI/callEMLRTClockGettime", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\CoderTimeAPI.m" // pathName
};

emlrtRSInfo
    pb_emlrtRSI{
        69,                  // lineNo
        "eml_mtimes_helper", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pathName
    };

emlrtRSInfo
    bc_emlrtRSI{
        28,      // lineNo
        "colon", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" // pathName
    };

emlrtRSInfo cc_emlrtRSI{
    20,                               // lineNo
    "eml_int_forloop_overflow_check", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_"
    "overflow_check.m" // pathName
};

emlrtRSInfo ic_emlrtRSI{
    34,               // lineNo
    "rdivide_helper", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
    "helper.m" // pathName
};

emlrtRSInfo jc_emlrtRSI{
    53,    // lineNo
    "div", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" // pathName
};

emlrtRSInfo yc_emlrtRSI{
    44,       // lineNo
    "mpower", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\matfun\\mpower.m" // pathName
};

emlrtRSInfo ef_emlrtRSI{
    17,               // lineNo
    "dev_A_Q_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pathName
};

emlrtRSInfo ff_emlrtRSI{
    21,               // lineNo
    "dev_A_Q_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pathName
};

emlrtRSInfo gf_emlrtRSI{
    29,               // lineNo
    "dev_A_Q_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pathName
};

emlrtRSInfo hf_emlrtRSI{
    31,               // lineNo
    "dev_A_Q_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pathName
};

emlrtRSInfo
    if_emlrtRSI{
        94,                  // lineNo
        "eml_mtimes_helper", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pathName
    };

emlrtRSInfo jf_emlrtRSI{
    142,      // lineNo
    "mtimes", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" // pathName
};

emlrtRSInfo kf_emlrtRSI{
    178,           // lineNo
    "mtimes_blas", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" // pathName
};

emlrtRSInfo hg_emlrtRSI{
    14,                     // lineNo
    "dev_g_Q_multi_vector", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pathName
};

emlrtRSInfo wg_emlrtRSI{
    12,                     // lineNo
    "dev_g_Q_multi_vector", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pathName
};

emlrtECInfo b_emlrtECI{
    -1,                     // nDims
    14,                     // lineNo
    9,                      // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

emlrtDCInfo emlrtDCI{
    12,                     // lineNo
    16,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

emlrtBCInfo b_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    12,                     // lineNo
    16,                     // colNo
    "v",                    // aName
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

emlrtBCInfo c_emlrtBCI{
    -1,                     // iFirst
    -1,                     // iLast
    14,                     // lineNo
    13,                     // colNo
    "out",                  // aName
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

emlrtRTEInfo emlrtRTEI{
    159,                    // lineNo
    13,                     // colNo
    "coderTimeCheckStatus", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\CoderTimeAPI.m" // pName
};

emlrtRTEInfo
    b_emlrtRTEI{
        138,                   // lineNo
        23,                    // colNo
        "dynamic_size_checks", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pName
    };

emlrtRTEInfo
    c_emlrtRTEI{
        133,                   // lineNo
        23,                    // colNo
        "dynamic_size_checks", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pName
    };

emlrtRTEInfo e_emlrtRTEI{
    13,                     // lineNo
    27,                     // colNo
    "assertCompatibleDims", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\assertCompatibleDims.m" // pName
};

emlrtRTEInfo h_emlrtRTEI{
    48,          // lineNo
    13,          // colNo
    "infocheck", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\infocheck.m" // pName
};

emlrtRTEInfo i_emlrtRTEI{
    45,          // lineNo
    13,          // colNo
    "infocheck", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\infocheck.m" // pName
};

emlrtECInfo tb_emlrtECI{
    2,                // nDims
    29,               // lineNo
    30,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtECInfo ub_emlrtECI{
    -1,               // nDims
    29,               // lineNo
    9,                // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtECInfo vb_emlrtECI{
    -1,               // nDims
    31,               // lineNo
    9,                // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtBCInfo rb_emlrtBCI{
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

emlrtDCInfo v_emlrtDCI{
    12,               // lineNo
    22,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    1                                                // checkKind
};

emlrtBCInfo cc_emlrtBCI{
    1,                // iFirst
    11,               // iLast
    29,               // lineNo
    35,               // colNo
    "A",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtDCInfo y_emlrtDCI{
    29,               // lineNo
    35,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    1                                                // checkKind
};

emlrtDCInfo ab_emlrtDCI{
    31,               // lineNo
    16,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    1                                                // checkKind
};

emlrtBCInfo ec_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    29,               // lineNo
    58,               // colNo
    "Q",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtBCInfo fc_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    29,               // lineNo
    70,               // colNo
    "Q",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtBCInfo gc_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    31,               // lineNo
    51,               // colNo
    "Q",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtBCInfo ic_emlrtBCI{
    -1,               // iFirst
    -1,               // iLast
    31,               // lineNo
    63,               // colNo
    "Q",              // aName
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    0                                                // checkKind
};

emlrtRTEInfo
    s_emlrtRTEI{
        28,      // lineNo
        9,       // colNo
        "colon", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" // pName
    };

emlrtRTEInfo t_emlrtRTEI{
    10,                     // lineNo
    9,                      // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

emlrtRTEInfo u_emlrtRTEI{
    8,                      // lineNo
    9,                      // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

emlrtRTEInfo v_emlrtRTEI{
    14,                     // lineNo
    13,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

emlrtRTEInfo w_emlrtRTEI{
    12,                     // lineNo
    14,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

emlrtRTEInfo x_emlrtRTEI{
    14,                     // lineNo
    45,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

emlrtRTEInfo y_emlrtRTEI{
    3,                      // lineNo
    1,                      // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

emlrtRTEInfo
    sb_emlrtRTEI{
        76,                  // lineNo
        13,                  // colNo
        "eml_mtimes_helper", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pName
    };

emlrtRTEInfo tb_emlrtRTEI{
    12,               // lineNo
    51,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

emlrtRTEInfo ub_emlrtRTEI{
    12,               // lineNo
    40,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

emlrtRTEInfo vb_emlrtRTEI{
    54,    // lineNo
    9,     // colNo
    "div", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" // pName
};

emlrtRTEInfo xb_emlrtRTEI{
    15,               // lineNo
    5,                // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

emlrtRTEInfo kc_emlrtRTEI{
    55,            // lineNo
    1,             // colNo
    "dev_S_inv_g", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_S_inv_g.m" // pName
};

emlrtRTEInfo qe_emlrtRTEI{
    218,      // lineNo
    20,       // colNo
    "mtimes", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" // pName
};

emlrtRTEInfo if_emlrtRTEI{
    21,               // lineNo
    9,                // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtRTEInfo kf_emlrtRTEI{
    31,               // lineNo
    16,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtRTEInfo lf_emlrtRTEI{
    31,               // lineNo
    30,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtRTEInfo mf_emlrtRTEI{
    31,               // lineNo
    49,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtRTEInfo nf_emlrtRTEI{
    29,               // lineNo
    30,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtRTEInfo of_emlrtRTEI{
    29,               // lineNo
    56,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtRTEInfo pf_emlrtRTEI{
    29,               // lineNo
    16,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

const char_T cv[26]{'e', 'm', 'l', 'r', 't', 'C', 'l', 'o', 'c',
                    'k', 'G', 'e', 't', 't', 'i', 'm', 'e', 'M',
                    'o', 'n', 'o', 't', 'o', 'n', 'i', 'c'};

emlrtRSInfo
    bh_emlrtRSI{
        76,                  // lineNo
        "eml_mtimes_helper", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pathName
    };

// End of code generation (dev_g_newton_pipg_update_withtimer_data.cpp)
