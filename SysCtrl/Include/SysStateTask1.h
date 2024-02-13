/*
 * File: SysStateTask1.h
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

#ifndef RTW_HEADER_SysStateTask1_h_
#define RTW_HEADER_SysStateTask1_h_
#ifndef SysStateTask1_COMMON_INCLUDES_
# define SysStateTask1_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* SysStateTask1_COMMON_INCLUDES_ */

#include "SysStateTask1_types.h"

/* Block states (default storage) for model 'SysStateTask1' */
#ifndef SysStateTask1_MDLREF_HIDE_CHILD_

typedef struct {
  uint8 is_active_c3_SysStateTask1;    /* '<S1>/StateMachine' */
  uint8 is_c3_SysStateTask1;           /* '<S1>/StateMachine' */
} DW_SysStateTask1_f_T;

#endif                                 /*SysStateTask1_MDLREF_HIDE_CHILD_*/

#define SysCtrl_START_SEC_CODE_QM_LOCAL
#include "SysCtrl_MemMap.h"

extern void SysStateTask1_Init(SysState_sysCtrlStateEnumType
  *rty_SysState_sysCtrlState);

#define SysCtrl_STOP_SEC_CODE_QM_LOCAL
#include "SysCtrl_MemMap.h"
#define SysCtrl_START_SEC_CODE_1MS_QM_LOCAL
#include "SysCtrl_MemMap.h"

extern void SysStateTask1(SysState_pwrModeStateEnumType
  rtu_SysState_pwrModeState, SysState_emCddStateEnumType rtu_SysState_emCddState,
  boolean rtu_SysState_emCddInitCmplt, SysState_sysCtrlStateEnumType
  *rty_SysState_sysCtrlState, boolean *rty_SysState_sysCtrlShutdownReady);

#define SysCtrl_STOP_SEC_CODE_1MS_QM_LOCAL
#include "SysCtrl_MemMap.h"
#ifndef SysStateTask1_MDLREF_HIDE_CHILD_

/* Block states (default storage) */
#define SysCtrl_START_SEC_VAR_CLEARED_QM_GLOBAL_UNSPECIFIED
#include "SysCtrl_MemMap.h"

extern DW_SysStateTask1_f_T SysStateTask1_DW;

#define SysCtrl_STOP_SEC_VAR_CLEARED_QM_GLOBAL_UNSPECIFIED
#include "SysCtrl_MemMap.h"
#endif                                 /*SysStateTask1_MDLREF_HIDE_CHILD_*/

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'SysStateTask1'
 * '<S1>'   : 'SysStateTask1/StateMachine'
 * '<S2>'   : 'SysStateTask1/StateMachine/StateMachine'
 */
#endif                                 /* RTW_HEADER_SysStateTask1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
