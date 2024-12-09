/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * timeKeeper.h
 *
 * Code generation for function 'timeKeeper'
 *
 */

#pragma once

/* Include files */
#include "rtwtypes.h"
#include "emlrt.h"
#include "mex.h"
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Function Declarations */
real_T b_timeKeeper(const emlrtStack *sp, const emlrtTimespec *savedTime,
                    real_T *outTime_tv_nsec);

void timeKeeper(const emlrtStack *sp, const emlrtTimespec newTime,
                emlrtTimespec *savedTime);

void timeKeeper_init(void);

/* End of code generation (timeKeeper.h) */
