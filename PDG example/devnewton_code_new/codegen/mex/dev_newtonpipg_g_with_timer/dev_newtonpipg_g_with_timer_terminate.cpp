//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonpipg_g_with_timer_terminate.cpp
//
// Code generation for function 'dev_newtonpipg_g_with_timer_terminate'
//

// Include files
#include "dev_newtonpipg_g_with_timer_terminate.h"
#include "_coder_dev_newtonpipg_g_with_timer_mex.h"
#include "dev_newtonpipg_g_with_timer_data.h"
#include "rt_nonfinite.h"

// Function Declarations
static void emlrtExitTimeCleanupDtorFcn(const void *r);

// Function Definitions
static void emlrtExitTimeCleanupDtorFcn(const void *r)
{
  emlrtExitTimeCleanup(&emlrtContextGlobal);
}

void dev_newtonpipg_g_with_timer_atexit()
{
  emlrtStack st{
      nullptr, // site
      nullptr, // tls
      nullptr  // prev
  };
  mexFunctionCreateRootTLS();
  st.tls = emlrtRootTLSGlobal;
  try {
    emlrtPushHeapReferenceStackR2021a(&st, false, nullptr,
                                      (void *)&emlrtExitTimeCleanupDtorFcn,
                                      nullptr, nullptr, nullptr);
    emlrtEnterRtStackR2012b(&st);
    emlrtProfilerUnregisterMEXFcn((char_T *)c_dev_newtonpipg_g_with_timer_c,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)dev_HZ_g_complete_name,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)dev_HtZ_g_complete_name,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)c_dev_xpipg_onestep_g_complete_,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)c_proj_D_with_affinejacobian_co,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)c_proj_D_unit_with_affinejacobi,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)proj_box_complete_name,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)jacob_box_complete_name,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)proj_ball_complete_name,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)proj_soc_complete_name,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)c_proj_k_polar_with_jacobian_co,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)c_dev_g_newton_pipg_update_with,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)dev_S_inv_g_complete_name,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)jacob_D_unit_complete_name,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)dev_jacob_box_complete_name,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)dev_jacob_ball_complete_name,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)dev_jacob_soc_complete_name,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)constructMatrix_complete_name,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)dev_g_A_Q_D_complete_name,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)dev_A_Q_D_unit_complete_name,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)dev_H_sinv_Ht_complete_name,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)c_dev_g_multiply_symmetric_comp,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)c_dev_Y_Q_Q_D_sum_unit_complete,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)c_dev_g_multiply_J_k_complete_n,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)processMatrix_complete_name,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)c_dev_cholesky_special_complete,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)c_small_lower_triangular_solve_,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)c_dev_multiply_symmetric_comple,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)c_dev_g_Q_multi_vector_complete,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)Q_v_unit_complete_name,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)c_dev_Y_multi_vector_complete_n,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)dev_solve_Lv_complete_name,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)dev_solve_LTv_complete_name,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtProfilerUnregisterMEXFcn((char_T *)c_upper_triangular_solve_comple,
                                  static_cast<boolean_T>(isMexOutdated));
    emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
    emlrtExitTimeCleanup(&emlrtContextGlobal);
  } catch (...) {
    emlrtCleanupOnException((emlrtCTX *)emlrtRootTLSGlobal);
    throw;
  }
}

void dev_newtonpipg_g_with_timer_terminate()
{
  emlrtDestroyRootTLS(&emlrtRootTLSGlobal);
}

// End of code generation (dev_newtonpipg_g_with_timer_terminate.cpp)
