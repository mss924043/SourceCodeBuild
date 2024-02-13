/* This file contains stub implementations of the AUTOSAR RTE functions.
   The stub implementations can be used for testing the generated code in
   Simulink, for example, in SIL/PIL simulations of the component under
   test. Note that this file should be replaced with an appropriate RTE
   file when deploying the generated code outside of Simulink.

   This file is generated for:
   Atomic software component:  "SysCtrl"
   ARXML schema: "4.2"
   File generated on: "04-Apr-2023 08:43:37"  */

#define MEMMAP_ERROR

/* START_SEC Symbols */
#ifdef SysCtrl_START_SEC_CODE
#undef SysCtrl_START_SEC_CODE
#undef MEMMAP_ERROR
#elif defined( SysCtrl_START_SEC_CONST)
#undef SysCtrl_START_SEC_CONST
#undef MEMMAP_ERROR
#elif defined( SysCtrl_START_SEC_VAR)
#undef SysCtrl_START_SEC_VAR
#undef MEMMAP_ERROR
#elif defined( SysCtrl_START_SEC_EMCAT1_CODE_FAST_QM_LOCAL)
#undef SysCtrl_START_SEC_EMCAT1_CODE_FAST_QM_LOCAL
#undef MEMMAP_ERROR
#elif defined( SysCtrl_START_SEC_CODE_1MS_QM_LOCAL)
#undef SysCtrl_START_SEC_CODE_1MS_QM_LOCAL
#undef MEMMAP_ERROR
#elif defined( SysCtrl_START_SEC_CODE_10MS_QM_LOCAL)
#undef SysCtrl_START_SEC_CODE_10MS_QM_LOCAL
#undef MEMMAP_ERROR
#elif defined( SysCtrl_START_SEC_CODE_QM_LOCAL)
#undef SysCtrl_START_SEC_CODE_QM_LOCAL
#undef MEMMAP_ERROR
#endif

/* STOP_SEC symbols */
#ifdef SysCtrl_STOP_SEC_CODE
#undef SysCtrl_STOP_SEC_CODE
#undef MEMMAP_ERROR
#elif defined( SysCtrl_STOP_SEC_CONST)
#undef SysCtrl_STOP_SEC_CONST
#undef MEMMAP_ERROR
#elif defined( SysCtrl_STOP_SEC_VAR)
#undef SysCtrl_STOP_SEC_VAR
#undef MEMMAP_ERROR
#elif defined( SysCtrl_STOP_SEC_EMCAT1_CODE_FAST_QM_LOCAL)
#undef SysCtrl_STOP_SEC_EMCAT1_CODE_FAST_QM_LOCAL
#undef MEMMAP_ERROR
#elif defined( SysCtrl_STOP_SEC_CODE_1MS_QM_LOCAL)
#undef SysCtrl_STOP_SEC_CODE_1MS_QM_LOCAL
#undef MEMMAP_ERROR
#elif defined( SysCtrl_STOP_SEC_CODE_10MS_QM_LOCAL)
#undef SysCtrl_STOP_SEC_CODE_10MS_QM_LOCAL
#undef MEMMAP_ERROR
#elif defined( SysCtrl_STOP_SEC_CODE_QM_LOCAL)
#undef SysCtrl_STOP_SEC_CODE_QM_LOCAL
#undef MEMMAP_ERROR

/* Error out if none of the expected Memory Section keywords are defined */
#ifdef MEMMAP_ERROR
#error "SysCtrl_MemMap.h wrong pragma command"
#endif
#endif
