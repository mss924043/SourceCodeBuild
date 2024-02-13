/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "SysCtrl"
   ARXML schema: "4.2"
   File generated on: "04-Apr-2023 08:43:37"  */

#ifndef Rte_Type_h
#define Rte_Type_h
#include "rtwtypes.h"
#include "Std_Types.h"

/* AUTOSAR RTE Status Types */
#ifndef RTE_E_OK
#define RTE_E_OK                       (0x00)
#endif

#ifndef RTE_E_LOST_DATA
#define RTE_E_LOST_DATA                (0x40)
#endif

#ifndef RTE_E_LIMIT
#define RTE_E_LIMIT                    (0x82)
#endif

#ifndef E2E_E_OK
#define E2E_E_OK                       (0x00)
#endif

#ifndef E2EPW_STATUS_OK
#define E2EPW_STATUS_OK                (0x00)
#endif

#ifndef E2EPW_STATUS_OKSOMELOST
#define E2EPW_STATUS_OKSOMELOST        (0x20)
#endif

/* AUTOSAR Implementation data types, specific to software component */
/* AUTOSAR Enumeration Types */
typedef sint32 SysState_emCddStateEnumType;

#ifndef SysState_emCddStateEnumType_Startup
#define SysState_emCddStateEnumType_Startup (0)
#endif

#ifndef SysState_emCddStateEnumType_Initialize
#define SysState_emCddStateEnumType_Initialize (1)
#endif

#ifndef SysState_emCddStateEnumType_Standby
#define SysState_emCddStateEnumType_Standby (2)
#endif

#ifndef SysState_emCddStateEnumType_Run
#define SysState_emCddStateEnumType_Run (3)
#endif

#ifndef SysState_emCddStateEnumType_Fault
#define SysState_emCddStateEnumType_Fault (4)
#endif

#ifndef SysState_emCddStateEnumType_PostRun
#define SysState_emCddStateEnumType_PostRun (5)
#endif

#ifndef SysState_emCddStateEnumType_Shutdown
#define SysState_emCddStateEnumType_Shutdown (6)
#endif

typedef sint32 SysState_pwrModeStateEnumType;

#ifndef SysState_pwrModeStateEnumType_Startup
#define SysState_pwrModeStateEnumType_Startup (0)
#endif

#ifndef SysState_pwrModeStateEnumType_Run
#define SysState_pwrModeStateEnumType_Run (1)
#endif

#ifndef SysState_pwrModeStateEnumType_PostRun
#define SysState_pwrModeStateEnumType_PostRun (2)
#endif

#ifndef SysState_pwrModeStateEnumType_Shutdown
#define SysState_pwrModeStateEnumType_Shutdown (3)
#endif

typedef sint32 SysState_sysCtrlStateEnumType;

#ifndef SysState_sysCtrlStateEnumType_Startup
#define SysState_sysCtrlStateEnumType_Startup (0)
#endif

#ifndef SysState_sysCtrlStateEnumType_Initialize
#define SysState_sysCtrlStateEnumType_Initialize (1)
#endif

#ifndef SysState_sysCtrlStateEnumType_Run
#define SysState_sysCtrlStateEnumType_Run (2)
#endif

#ifndef SysState_sysCtrlStateEnumType_PostRun
#define SysState_sysCtrlStateEnumType_PostRun (3)
#endif

#ifndef SysState_sysCtrlStateEnumType_Shutdown
#define SysState_sysCtrlStateEnumType_Shutdown (4)
#endif

typedef void* Rte_Instance;

#endif
