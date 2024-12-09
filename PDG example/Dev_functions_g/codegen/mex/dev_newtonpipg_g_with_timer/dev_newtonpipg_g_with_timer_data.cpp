//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonpipg_g_with_timer_data.cpp
//
// Code generation for function 'dev_newtonpipg_g_with_timer_data'
//

// Include files
#include "dev_newtonpipg_g_with_timer_data.h"
#include "rt_nonfinite.h"

// Variable Definitions
emlrtCTX emlrtRootTLSGlobal{nullptr};

const volatile char_T *emlrtBreakCheckR2012bFlagVar{nullptr};

boolean_T isMexOutdated;

const char_T *c_dev_newtonpipg_g_with_timer_c;

const char_T *dev_HZ_g_complete_name;

const char_T *dev_HtZ_g_complete_name;

const char_T *c_dev_xpipg_onestep_g_complete_;

const char_T *c_proj_D_with_affinejacobian_co;

const char_T *c_proj_D_unit_with_affinejacobi;

const char_T *proj_box_complete_name;

const char_T *jacob_box_complete_name;

const char_T *proj_ball_complete_name;

const char_T *proj_soc_complete_name;

const char_T *c_proj_k_polar_with_jacobian_co;

const char_T *c_dev_g_newton_pipg_update_with;

const char_T *dev_S_inv_g_complete_name;

const char_T *jacob_D_unit_complete_name;

const char_T *dev_jacob_box_complete_name;

const char_T *dev_jacob_ball_complete_name;

const char_T *dev_jacob_soc_complete_name;

const char_T *constructMatrix_complete_name;

const char_T *dev_g_A_Q_D_complete_name;

const char_T *dev_A_Q_D_unit_complete_name;

const char_T *dev_H_sinv_Ht_complete_name;

const char_T *c_dev_g_multiply_symmetric_comp;

const char_T *c_dev_Y_Q_Q_D_sum_unit_complete;

const char_T *c_dev_g_multiply_J_k_complete_n;

const char_T *processMatrix_complete_name;

const char_T *c_dev_cholesky_special_complete;

const char_T *c_small_lower_triangular_solve_;

const char_T *c_dev_multiply_symmetric_comple;

const char_T *c_dev_g_Q_multi_vector_complete;

const char_T *Q_v_unit_complete_name;

const char_T *c_dev_Y_multi_vector_complete_n;

const char_T *dev_solve_Lv_complete_name;

const char_T *dev_solve_LTv_complete_name;

const char_T *c_upper_triangular_solve_comple;

emlrtContext emlrtContextGlobal{
    true,                                                 // bFirstTime
    false,                                                // bInitialized
    131643U,                                              // fVersionInfo
    nullptr,                                              // fErrorFunction
    "dev_newtonpipg_g_with_timer",                        // fFunctionName
    nullptr,                                              // fRTCallStack
    false,                                                // bDebugMode
    {2045744189U, 2170104910U, 2743257031U, 4284093946U}, // fSigWrd
    nullptr                                               // fSigMem
};

emlrtRSInfo
    r_emlrtRSI{
        69,                  // lineNo
        "eml_mtimes_helper", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pathName
    };

emlrtRSInfo v_emlrtRSI{
    20,                               // lineNo
    "eml_int_forloop_overflow_check", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\eml\\eml_int_forloop_"
    "overflow_check.m" // pathName
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

emlrtRSInfo
    qb_emlrtRSI{
        28,      // lineNo
        "colon", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" // pathName
    };

emlrtRSInfo hc_emlrtRSI{
    38,        // lineNo
    "fprintf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" // pathName
};

emlrtRSInfo de_emlrtRSI{
    34,               // lineNo
    "rdivide_helper", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\rdivide_"
    "helper.m" // pathName
};

emlrtRSInfo ee_emlrtRSI{
    53,    // lineNo
    "div", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" // pathName
};

emlrtRSInfo wg_emlrtRSI{
    17,               // lineNo
    "dev_A_Q_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pathName
};

emlrtRSInfo xg_emlrtRSI{
    21,               // lineNo
    "dev_A_Q_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pathName
};

emlrtRSInfo yg_emlrtRSI{
    29,               // lineNo
    "dev_A_Q_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pathName
};

emlrtRSInfo ah_emlrtRSI{
    31,               // lineNo
    "dev_A_Q_D_unit", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pathName
};

emlrtRSInfo
    bh_emlrtRSI{
        94,                  // lineNo
        "eml_mtimes_helper", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pathName
    };

emlrtRSInfo ch_emlrtRSI{
    142,      // lineNo
    "mtimes", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" // pathName
};

emlrtRSInfo dh_emlrtRSI{
    178,           // lineNo
    "mtimes_blas", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" // pathName
};

emlrtRSInfo ai_emlrtRSI{
    14,                     // lineNo
    "dev_g_Q_multi_vector", // fcnName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pathName
};

emlrtMCInfo emlrtMCI{
    66,        // lineNo
    18,        // colNo
    "fprintf", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" // pName
};

emlrtRTEInfo
    c_emlrtRTEI{
        82,         // lineNo
        5,          // colNo
        "fltpower", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\power.m" // pName
    };

emlrtRTEInfo
    f_emlrtRTEI{
        138,                   // lineNo
        23,                    // colNo
        "dynamic_size_checks", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pName
    };

emlrtRTEInfo
    g_emlrtRTEI{
        133,                   // lineNo
        23,                    // colNo
        "dynamic_size_checks", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pName
    };

emlrtRTEInfo i_emlrtRTEI{
    159,                    // lineNo
    13,                     // colNo
    "coderTimeCheckStatus", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\+time\\CoderTimeAPI.m" // pName
};

emlrtECInfo x_emlrtECI{
    -1,                     // nDims
    14,                     // lineNo
    4,                      // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

emlrtDCInfo v_emlrtDCI{
    12,                     // lineNo
    16,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    1                                                      // checkKind
};

emlrtBCInfo gb_emlrtBCI{
    1,                      // iFirst
    326,                    // iLast
    12,                     // lineNo
    16,                     // colNo
    "v",                    // aName
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m", // pName
    0                                                      // checkKind
};

emlrtRTEInfo n_emlrtRTEI{
    13,                     // lineNo
    27,                     // colNo
    "assertCompatibleDims", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\shared\\coder\\coder\\lib\\+coder\\+"
    "internal\\assertCompatibleDims.m" // pName
};

emlrtRTEInfo p_emlrtRTEI{
    48,          // lineNo
    13,          // colNo
    "infocheck", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\infocheck.m" // pName
};

emlrtRTEInfo q_emlrtRTEI{
    45,          // lineNo
    13,          // colNo
    "infocheck", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "lapack\\infocheck.m" // pName
};

emlrtECInfo jc_emlrtECI{
    2,                // nDims
    29,               // lineNo
    30,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtECInfo kc_emlrtECI{
    -1,               // nDims
    29,               // lineNo
    9,                // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtECInfo lc_emlrtECI{
    -1,               // nDims
    31,               // lineNo
    9,                // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtBCInfo pc_emlrtBCI{
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

emlrtDCInfo ob_emlrtDCI{
    12,               // lineNo
    22,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    1                                                // checkKind
};

emlrtDCInfo pb_emlrtDCI{
    31,               // lineNo
    16,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    1                                                // checkKind
};

emlrtDCInfo qb_emlrtDCI{
    29,               // lineNo
    35,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m", // pName
    1                                                // checkKind
};

emlrtBCInfo qc_emlrtBCI{
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

emlrtBCInfo sc_emlrtBCI{
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

emlrtBCInfo tc_emlrtBCI{
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

emlrtBCInfo uc_emlrtBCI{
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

emlrtBCInfo wc_emlrtBCI{
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

emlrtRTEInfo y_emlrtRTEI{
    13,     // lineNo
    9,      // colNo
    "sqrt", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\elfun\\sqrt.m" // pName
};

emlrtRTEInfo
    ec_emlrtRTEI{
        28,      // lineNo
        9,       // colNo
        "colon", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\colon.m" // pName
    };

emlrtRTEInfo ld_emlrtRTEI{
    10,                     // lineNo
    9,                      // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

emlrtRTEInfo md_emlrtRTEI{
    8,                      // lineNo
    9,                      // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

emlrtRTEInfo nd_emlrtRTEI{
    14,                     // lineNo
    8,                      // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

emlrtRTEInfo od_emlrtRTEI{
    12,                     // lineNo
    14,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

emlrtRTEInfo pd_emlrtRTEI{
    14,                     // lineNo
    40,                     // colNo
    "dev_g_Q_multi_vector", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_g_Q_multi_vector.m" // pName
};

emlrtRTEInfo
    je_emlrtRTEI{
        76,                  // lineNo
        13,                  // colNo
        "eml_mtimes_helper", // fName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pName
    };

emlrtRTEInfo ke_emlrtRTEI{
    12,               // lineNo
    51,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

emlrtRTEInfo le_emlrtRTEI{
    12,               // lineNo
    40,               // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

emlrtRTEInfo me_emlrtRTEI{
    54,    // lineNo
    9,     // colNo
    "div", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\div.m" // pName
};

emlrtRTEInfo oe_emlrtRTEI{
    15,               // lineNo
    5,                // colNo
    "dev_jacob_ball", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_jacob_ball.m" // pName
};

emlrtRTEInfo hh_emlrtRTEI{
    218,      // lineNo
    20,       // colNo
    "mtimes", // fName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\eml\\+coder\\+internal\\+"
    "blas\\mtimes.m" // pName
};

emlrtRTEInfo mh_emlrtRTEI{
    21,               // lineNo
    9,                // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtRTEInfo oh_emlrtRTEI{
    31,               // lineNo
    16,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtRTEInfo qh_emlrtRTEI{
    31,               // lineNo
    30,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtRTEInfo rh_emlrtRTEI{
    31,               // lineNo
    49,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtRTEInfo th_emlrtRTEI{
    29,               // lineNo
    56,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtRTEInfo uh_emlrtRTEI{
    29,               // lineNo
    16,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

emlrtRTEInfo vh_emlrtRTEI{
    29,               // lineNo
    30,               // colNo
    "dev_A_Q_D_unit", // fName
    "C:\\Users\\HP\\Documents\\MATLAB\\general "
    "newtonpipg\\Dev_functions_g\\dev_A_Q_D_unit.m" // pName
};

const char_T cv[26]{'e', 'm', 'l', 'r', 't', 'C', 'l', 'o', 'c',
                    'k', 'G', 'e', 't', 't', 'i', 'm', 'e', 'M',
                    'o', 'n', 'o', 't', 'o', 'n', 'i', 'c'};

emlrtRSInfo pi_emlrtRSI{
    66,        // lineNo
    "fprintf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" // pathName
};

emlrtRSInfo qi_emlrtRSI{
    68,        // lineNo
    "fprintf", // fcnName
    "C:\\Program "
    "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\iofun\\fprintf.m" // pathName
};

emlrtRSInfo
    si_emlrtRSI{
        76,                  // lineNo
        "eml_mtimes_helper", // fcnName
        "C:\\Program "
        "Files\\MATLAB\\R2024a\\toolbox\\eml\\lib\\matlab\\ops\\eml_mtimes_"
        "helper.m" // pathName
    };

// End of code generation (dev_newtonpipg_g_with_timer_data.cpp)
