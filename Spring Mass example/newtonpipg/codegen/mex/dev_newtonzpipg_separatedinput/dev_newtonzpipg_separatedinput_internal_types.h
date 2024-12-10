//
// Academic License - for use in teaching, academic research, and meeting
// course requirements at degree granting institutions only.  Not for
// government, commercial, or other organizational use.
//
// dev_newtonzpipg_separatedinput_internal_types.h
//
// Code generation for function 'dev_newtonzpipg_separatedinput'
//

#pragma once

// Include files
#include "dev_newtonzpipg_separatedinput_types.h"
#include "rtwtypes.h"
#include "emlrt.h"

// Type Definitions
struct rtDesignRangeCheckInfo {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
};

struct rtRunTimeErrorInfo {
  int32_T lineNo;
  int32_T colNo;
  const char_T *fName;
  const char_T *pName;
};

// End of code generation (dev_newtonzpipg_separatedinput_internal_types.h)
