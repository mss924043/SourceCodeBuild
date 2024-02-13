/*
 * File: SysCtrl.h
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

#ifndef RTW_HEADER_SysCtrl_h_
#define RTW_HEADER_SysCtrl_h_
#ifndef SysCtrl_COMMON_INCLUDES_
# define SysCtrl_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "Rte_SysCtrl.h"
#endif                                 /* SysCtrl_COMMON_INCLUDES_ */

/* Child system includes */
#define SysStateTask1_MDLREF_HIDE_CHILD_
#include "SysStateTask1.h"

/* Macros for accessing real-time model data structure */

/* Block signals (default storage) */
typedef struct tag_B_SysCtrl_T {
  SysState_sysCtrlStateEnumType SysState_sysCtrlState;/* '<S1>/SysStateTask1' */
  boolean SysState_sysCtrlShutdownReady;/* '<S1>/SysStateTask1' */
} B_SysCtrl_T;

/* Block signals (default storage) */
#define SysCtrl_START_SEC_VAR_CLEARED_QM_GLOBAL_UNSPECIFIED
#include "SysCtrl_MemMap.h"

extern B_SysCtrl_T SysCtrl_B;

#define SysCtrl_STOP_SEC_VAR_CLEARED_QM_GLOBAL_UNSPECIFIED
#include "SysCtrl_MemMap.h"

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
 * '<Root>' : 'SysCtrl'
 * '<S1>'   : 'SysCtrl/SysCtrl Task1'
 * '<S2>'   : 'SysCtrl/SysCtrlInit'
 */
#endif                                 /* RTW_HEADER_SysCtrl_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
