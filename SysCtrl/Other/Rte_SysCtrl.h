/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "SysCtrl"
   ARXML schema: "4.2"
   File generated on: "04-Apr-2023 08:43:37"  */

#ifndef Rte_SysCtrl_h
#define Rte_SysCtrl_h
#include "Rte_Type.h"
#include "Compiler.h"

/* Data access functions */
#define Rte_IWrite_SysCtrl_Init_SysCtrlState_SysCtrlState Rte_IWrite_SysCtrl_SysCtrl_Init_SysCtrlState_SysCtrlState

void Rte_IWrite_SysCtrl_Init_SysCtrlState_SysCtrlState
  (SysState_sysCtrlStateEnumType u);

#define Rte_IWriteRef_SysCtrl_Init_SysCtrlState_SysCtrlState Rte_IWriteRef_SysCtrl_SysCtrl_Init_SysCtrlState_SysCtrlState

SysState_sysCtrlStateEnumType*
  Rte_IWriteRef_SysCtrl_Init_SysCtrlState_SysCtrlState(void);

#define Rte_IWrite_SysCtrl_Init_SysCtrlShutdownReady_SysCtrlShutdownReady Rte_IWrite_SysCtrl_SysCtrl_Init_SysCtrlShutdownReady_SysCtrlShutdownReady

void Rte_IWrite_SysCtrl_Init_SysCtrlShutdownReady_SysCtrlShutdownReady(boolean u);

#define Rte_IWriteRef_SysCtrl_Init_SysCtrlShutdownReady_SysCtrlShutdownReady Rte_IWriteRef_SysCtrl_SysCtrl_Init_SysCtrlShutdownReady_SysCtrlShutdownReady

boolean* Rte_IWriteRef_SysCtrl_Init_SysCtrlShutdownReady_SysCtrlShutdownReady
  (void);

#define Rte_IRead_SysCtrl_Task1_EmCddInitCmplt_EmCddInitCmplt Rte_IRead_SysCtrl_SysCtrl_Task1_EmCddInitCmplt_EmCddInitCmplt

boolean Rte_IRead_SysCtrl_Task1_EmCddInitCmplt_EmCddInitCmplt(void);

#define Rte_IRead_SysCtrl_Task1_EmCddState_EmCddState Rte_IRead_SysCtrl_SysCtrl_Task1_EmCddState_EmCddState

SysState_emCddStateEnumType Rte_IRead_SysCtrl_Task1_EmCddState_EmCddState(void);

#define Rte_IRead_SysCtrl_Task1_PwrModeState_PwrModeState Rte_IRead_SysCtrl_SysCtrl_Task1_PwrModeState_PwrModeState

SysState_pwrModeStateEnumType Rte_IRead_SysCtrl_Task1_PwrModeState_PwrModeState
  (void);

#define Rte_IWrite_SysCtrl_Task1_SysCtrlState_SysCtrlState Rte_IWrite_SysCtrl_SysCtrl_Task1_SysCtrlState_SysCtrlState

void Rte_IWrite_SysCtrl_Task1_SysCtrlState_SysCtrlState
  (SysState_sysCtrlStateEnumType u);

#define Rte_IWriteRef_SysCtrl_Task1_SysCtrlState_SysCtrlState Rte_IWriteRef_SysCtrl_SysCtrl_Task1_SysCtrlState_SysCtrlState

SysState_sysCtrlStateEnumType*
  Rte_IWriteRef_SysCtrl_Task1_SysCtrlState_SysCtrlState(void);

#define Rte_IWrite_SysCtrl_Task1_SysCtrlShutdownReady_SysCtrlShutdownReady Rte_IWrite_SysCtrl_SysCtrl_Task1_SysCtrlShutdownReady_SysCtrlShutdownReady

void Rte_IWrite_SysCtrl_Task1_SysCtrlShutdownReady_SysCtrlShutdownReady(boolean
  u);

#define Rte_IWriteRef_SysCtrl_Task1_SysCtrlShutdownReady_SysCtrlShutdownReady Rte_IWriteRef_SysCtrl_SysCtrl_Task1_SysCtrlShutdownReady_SysCtrlShutdownReady

boolean* Rte_IWriteRef_SysCtrl_Task1_SysCtrlShutdownReady_SysCtrlShutdownReady
  (void);

/* Entry point functions */
extern FUNC(void, SysCtrl_CODE_QM_LOCAL) SysCtrl_Init(void);
extern FUNC(void, SysCtrl_CODE_1MS_QM_LOCAL) SysCtrl_Task1(void);

#endif
