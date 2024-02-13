/*
 * File: SysStateTask1.c
 *
 * Code generated for Simulink model 'SysStateTask1'.
 *
 * Model version                  : 1.144
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Tue Apr  4 08:43:23 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "SysStateTask1.h"
#include "SysStateTask1_private.h"

/* Named constants for Chart: '<S1>/StateMachine' */
#define SysStateTask1_IN_Initialize    ((uint8)1U)
#define SysStateTask1_IN_PostRun       ((uint8)2U)
#define SysStateTask1_IN_Run           ((uint8)3U)
#define SysStateTask1_IN_Shutdown      ((uint8)4U)
#define SysStateTask1_IN_Startup       ((uint8)5U)

/* user code (top of source file) */
#include"SysCtrl.h"

/* Block states (default storage) */
#define SysCtrl_START_SEC_VAR_CLEARED_QM_GLOBAL_UNSPECIFIED
#include "SysCtrl_MemMap.h"

DW_SysStateTask1_f_T SysStateTask1_DW;

#define SysCtrl_STOP_SEC_VAR_CLEARED_QM_GLOBAL_UNSPECIFIED
#include "SysCtrl_MemMap.h"

/* System initialize for referenced model: 'SysStateTask1' */
#define SysCtrl_START_SEC_CODE_QM_LOCAL
#include "SysCtrl_MemMap.h"

void SysStateTask1_Init(SysState_sysCtrlStateEnumType *rty_SysState_sysCtrlState)
{
  /* SystemInitialize for Chart: '<S1>/StateMachine' */
  *rty_SysState_sysCtrlState = SysState_sysCtrlStateEnumType_Startup;
}

#define SysCtrl_STOP_SEC_CODE_QM_LOCAL
#include "SysCtrl_MemMap.h"

/* Output and update for referenced model: 'SysStateTask1' */
#define SysCtrl_START_SEC_CODE_1MS_QM_LOCAL
#include "SysCtrl_MemMap.h"

void SysStateTask1(SysState_pwrModeStateEnumType rtu_SysState_pwrModeState,
                   SysState_emCddStateEnumType rtu_SysState_emCddState, boolean
                   rtu_SysState_emCddInitCmplt, SysState_sysCtrlStateEnumType
                   *rty_SysState_sysCtrlState, boolean
                   *rty_SysState_sysCtrlShutdownReady)
{
  /* Chart: '<S1>/StateMachine' */
  if (SysStateTask1_DW.is_active_c3_SysStateTask1 == 0U) {
    SysStateTask1_DW.is_active_c3_SysStateTask1 = 1U;
    SysStateTask1_DW.is_c3_SysStateTask1 = SysStateTask1_IN_Startup;
    *rty_SysState_sysCtrlShutdownReady = false;
    *rty_SysState_sysCtrlState = SysState_sysCtrlStateEnumType_Startup;
  } else {
    switch (SysStateTask1_DW.is_c3_SysStateTask1) {
     case SysStateTask1_IN_Initialize:
      *rty_SysState_sysCtrlState = SysState_sysCtrlStateEnumType_Initialize;
      if (rtu_SysState_pwrModeState == SysState_pwrModeStateEnumType_PostRun) {
        SysStateTask1_DW.is_c3_SysStateTask1 = SysStateTask1_IN_PostRun;
        *rty_SysState_sysCtrlState = SysState_sysCtrlStateEnumType_PostRun;
      } else {
        if (rtu_SysState_emCddInitCmplt) {
          SysStateTask1_DW.is_c3_SysStateTask1 = SysStateTask1_IN_Run;
          *rty_SysState_sysCtrlState = SysState_sysCtrlStateEnumType_Run;
        }
      }
      break;

     case SysStateTask1_IN_PostRun:
      *rty_SysState_sysCtrlState = SysState_sysCtrlStateEnumType_PostRun;
      if (rtu_SysState_pwrModeState == SysState_pwrModeStateEnumType_Run) {
        SysStateTask1_DW.is_c3_SysStateTask1 = SysStateTask1_IN_Initialize;
        *rty_SysState_sysCtrlState = SysState_sysCtrlStateEnumType_Initialize;
      } else {
        if (rtu_SysState_emCddState == SysState_emCddStateEnumType_Shutdown) {
          SysStateTask1_DW.is_c3_SysStateTask1 = SysStateTask1_IN_Shutdown;
          *rty_SysState_sysCtrlShutdownReady = true;
          *rty_SysState_sysCtrlState = SysState_sysCtrlStateEnumType_Shutdown;
        }
      }
      break;

     case SysStateTask1_IN_Run:
      *rty_SysState_sysCtrlState = SysState_sysCtrlStateEnumType_Run;
      if (rtu_SysState_pwrModeState == SysState_pwrModeStateEnumType_PostRun) {
        SysStateTask1_DW.is_c3_SysStateTask1 = SysStateTask1_IN_PostRun;
        *rty_SysState_sysCtrlState = SysState_sysCtrlStateEnumType_PostRun;
      }
      break;

     case SysStateTask1_IN_Shutdown:
      *rty_SysState_sysCtrlShutdownReady = true;
      *rty_SysState_sysCtrlState = SysState_sysCtrlStateEnumType_Shutdown;
      if (rtu_SysState_pwrModeState == SysState_pwrModeStateEnumType_Startup) {
        SysStateTask1_DW.is_c3_SysStateTask1 = SysStateTask1_IN_Startup;
        *rty_SysState_sysCtrlShutdownReady = false;
        *rty_SysState_sysCtrlState = SysState_sysCtrlStateEnumType_Startup;
      }
      break;

     default:
      /* case IN_Startup: */
      *rty_SysState_sysCtrlShutdownReady = false;
      *rty_SysState_sysCtrlState = SysState_sysCtrlStateEnumType_Startup;
      if (rtu_SysState_pwrModeState == SysState_pwrModeStateEnumType_Run) {
        SysStateTask1_DW.is_c3_SysStateTask1 = SysStateTask1_IN_Initialize;
        *rty_SysState_sysCtrlState = SysState_sysCtrlStateEnumType_Initialize;
      }
      break;
    }
  }

  /* End of Chart: '<S1>/StateMachine' */
}

#define SysCtrl_STOP_SEC_CODE_1MS_QM_LOCAL
#include "SysCtrl_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
