/*
 * File: SysCtrl.c
 *
 * Code generated for Simulink model 'SysCtrl'.
 *
 * Model version                  : 1.1757
 * Simulink Coder version         : 9.2 (R2019b) 18-Jul-2019
 * C/C++ source code generated on : Tue Apr  4 08:43:33 2023
 *
 * Target selection: autosar.tlc
 * Embedded hardware selection: Infineon->TriCore
 * Code generation objective: Execution efficiency
 * Validation result: Not run
 */

#include "SysCtrl.h"

/* Block signals (default storage) */
#define SysCtrl_START_SEC_VAR_CLEARED_QM_GLOBAL_UNSPECIFIED
#include "SysCtrl_MemMap.h"

B_SysCtrl_T SysCtrl_B;

#define SysCtrl_STOP_SEC_VAR_CLEARED_QM_GLOBAL_UNSPECIFIED
#include "SysCtrl_MemMap.h"

/* Model step function for TID1 */

/* SwAddrMethod CODE_1MS_QM_LOCAL for Runnable */
#define SysCtrl_START_SEC_CODE_1MS_QM_LOCAL
#include "SysCtrl_MemMap.h"

void SysCtrl_Task1(void)               /* Explicit Task: SysCtrl_Task1 */
{
  SysState_pwrModeStateEnumType tmpIRead;
  SysState_emCddStateEnumType tmpIRead_0;
  boolean tmpIRead_1;

  /* Inport: '<Root>/SysCtrl_emCddInitCmplt' */
  tmpIRead_1 = Rte_IRead_SysCtrl_Task1_EmCddInitCmplt_EmCddInitCmplt();

  /* Inport: '<Root>/SysCtrl_emCddState' */
  tmpIRead_0 = Rte_IRead_SysCtrl_Task1_EmCddState_EmCddState();

  /* Inport: '<Root>/SysCtrl_pwrModeState' */
  tmpIRead = Rte_IRead_SysCtrl_Task1_PwrModeState_PwrModeState();

  /* RootInportFunctionCallGenerator generated from: '<Root>/SysCtrl_Task1' incorporates:
   *  SubSystem: '<Root>/SysCtrl Task1'
   */

  /* ModelReference: '<S1>/SysStateTask1' */
  SysStateTask1(tmpIRead, tmpIRead_0, tmpIRead_1,
                &SysCtrl_B.SysState_sysCtrlState,
                &SysCtrl_B.SysState_sysCtrlShutdownReady);

  /* End of Outputs for RootInportFunctionCallGenerator generated from: '<Root>/SysCtrl_Task1' */

  /* Outport: '<Root>/SysCtrl_sysCtrlState' */
  Rte_IWrite_SysCtrl_Task1_SysCtrlState_SysCtrlState
    (SysCtrl_B.SysState_sysCtrlState);

  /* Outport: '<Root>/SysCtrl_sysCtrlShutdownReady' */
  Rte_IWrite_SysCtrl_Task1_SysCtrlShutdownReady_SysCtrlShutdownReady
    (SysCtrl_B.SysState_sysCtrlShutdownReady);
}

#define SysCtrl_STOP_SEC_CODE_1MS_QM_LOCAL
#include "SysCtrl_MemMap.h"

/* Model initialize function */

/* SwAddrMethod CODE_QM_LOCAL for Runnable */
#define SysCtrl_START_SEC_CODE_QM_LOCAL
#include "SysCtrl_MemMap.h"

void SysCtrl_Init(void)
{
  /* SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/SysCtrl_Task1' incorporates:
   *  SubSystem: '<Root>/SysCtrl Task1'
   */

  /* SystemInitialize for ModelReference: '<S1>/SysStateTask1' incorporates:
   *  Inport: '<Root>/SysCtrl_emCddInitCmplt'
   *  Inport: '<Root>/SysCtrl_emCddState'
   *  Inport: '<Root>/SysCtrl_pwrModeState'
   */
  SysStateTask1_Init(&SysCtrl_B.SysState_sysCtrlState);

  /* End of SystemInitialize for RootInportFunctionCallGenerator generated from: '<Root>/SysCtrl_Task1' */

  /* SystemInitialize for Outport: '<Root>/SysCtrl_sysCtrlState' */
  Rte_IWrite_SysCtrl_Init_SysCtrlState_SysCtrlState
    (SysCtrl_B.SysState_sysCtrlState);

  /* SystemInitialize for Outport: '<Root>/SysCtrl_sysCtrlShutdownReady' */
  Rte_IWrite_SysCtrl_Init_SysCtrlShutdownReady_SysCtrlShutdownReady
    (SysCtrl_B.SysState_sysCtrlShutdownReady);
}

#define SysCtrl_STOP_SEC_CODE_QM_LOCAL
#include "SysCtrl_MemMap.h"

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
