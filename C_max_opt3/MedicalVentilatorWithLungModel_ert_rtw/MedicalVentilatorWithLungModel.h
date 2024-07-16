/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MedicalVentilatorWithLungModel.h
 *
 * Code generated for Simulink model 'MedicalVentilatorWithLungModel'.
 *
 * Model version                  : 11.3
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Mon Jul 15 17:18:07 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#ifndef MedicalVentilatorWithLungModel_h_
#define MedicalVentilatorWithLungModel_h_
#ifndef MedicalVentilatorWithLungModel_COMMON_INCLUDES_
#define MedicalVentilatorWithLungModel_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "math.h"
#include "nesl_rtw_rtp.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_gateway.h"
#include "nesl_rtw.h"
#endif                     /* MedicalVentilatorWithLungModel_COMMON_INCLUDES_ */

#include <string.h>
#include <math.h>
#include "rt_matrixlib.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM RT_MODEL;

/* Block signals and states (default storage) for system '<Root>' */
typedef struct {
  real_T INPUT_2_1_1[4];               /* '<S21>/INPUT_2_1_1' */
  real_T INPUT_1_1_1[4];               /* '<S21>/INPUT_1_1_1' */
  real_T INPUT_3_1_1[4];               /* '<S21>/INPUT_3_1_1' */
  real_T STATE_1[321];                 /* '<S21>/STATE_1' */
  real_T INPUT_2_1_1_Discrete[2];      /* '<S21>/INPUT_2_1_1' */
  real_T INPUT_1_1_1_Discrete[2];      /* '<S21>/INPUT_1_1_1' */
  real_T INPUT_3_1_1_Discrete[2];      /* '<S21>/INPUT_3_1_1' */
  real_T STATE_1_Discrete[12];         /* '<S21>/STATE_1' */
  real_T RTP_1;                        /* '<S6>/RTP_1' */
  real_T MaxValveArea;                 /* '<S3>/Max Valve Area' */
  real_T VolumetricFlowrate;           /* '<S3>/Volumetric Flow rate' */
  real_T STATE_1_ZcValueStore;         /* '<S21>/STATE_1' */
  real_T OUTPUT_1_0_Discrete;          /* '<S21>/OUTPUT_1_0' */
  real_T OUTPUT_1_0_ZcValueStore;      /* '<S21>/OUTPUT_1_0' */
  void* RTP_1_RtpManager;              /* '<S6>/RTP_1' */
  void* STATE_1_Simulator;             /* '<S21>/STATE_1' */
  void* STATE_1_SimData;               /* '<S21>/STATE_1' */
  void* STATE_1_DiagMgr;               /* '<S21>/STATE_1' */
  void* STATE_1_ZcLogger;              /* '<S21>/STATE_1' */
  void* STATE_1_TsInfo;                /* '<S21>/STATE_1' */
  void* SINK_1_RtwLogger;              /* '<S21>/SINK_1' */
  void* SINK_1_RtwLogBuffer;           /* '<S21>/SINK_1' */
  void* SINK_1_RtwLogFcnManager;       /* '<S21>/SINK_1' */
  void* OUTPUT_1_0_Simulator;          /* '<S21>/OUTPUT_1_0' */
  void* OUTPUT_1_0_SimData;            /* '<S21>/OUTPUT_1_0' */
  void* OUTPUT_1_0_DiagMgr;            /* '<S21>/OUTPUT_1_0' */
  void* OUTPUT_1_0_ZcLogger;           /* '<S21>/OUTPUT_1_0' */
  void* OUTPUT_1_0_TsInfo;             /* '<S21>/OUTPUT_1_0' */
  int_T STATE_1_Modes[119];            /* '<S21>/STATE_1' */
  int32_T clockTickCounter;            /* '<S3>/Pulse Generator' */
  int_T OUTPUT_1_0_Modes;              /* '<S21>/OUTPUT_1_0' */
  int32_T STATE_1_MASS_MATRIX_PR;      /* '<S21>/STATE_1' */
  uint8_T STATE_1_ZcSignalDir;         /* '<S21>/STATE_1' */
  uint8_T STATE_1_ZcStateStore;        /* '<S21>/STATE_1' */
  uint8_T OUTPUT_1_0_ZcSignalDir;      /* '<S21>/OUTPUT_1_0' */
  uint8_T OUTPUT_1_0_ZcStateStore;     /* '<S21>/OUTPUT_1_0' */
  boolean_T RTP_1_SetParametersNeeded; /* '<S6>/RTP_1' */
  boolean_T STATE_1_FirstOutput;       /* '<S21>/STATE_1' */
  boolean_T OUTPUT_1_0_FirstOutput;    /* '<S21>/OUTPUT_1_0' */
} DW;

/* Continuous states (default storage) */
typedef struct {
  real_T TransferFcn1_CSTATE;          /* '<S3>/Transfer Fcn1' */
  real_T TransferFcn_CSTATE;           /* '<S3>/Transfer Fcn' */
  real_T MedicalVentilatorWithLungModelL[190];/* '<S21>/STATE_1' */
} X;

/* State derivatives (default storage) */
typedef struct {
  real_T TransferFcn1_CSTATE;          /* '<S3>/Transfer Fcn1' */
  real_T TransferFcn_CSTATE;           /* '<S3>/Transfer Fcn' */
  real_T MedicalVentilatorWithLungModelL[190];/* '<S21>/STATE_1' */
} XDot;

/* State disabled  */
typedef struct {
  boolean_T TransferFcn1_CSTATE;       /* '<S3>/Transfer Fcn1' */
  boolean_T TransferFcn_CSTATE;        /* '<S3>/Transfer Fcn' */
  boolean_T MedicalVentilatorWithLungModelL[190];/* '<S21>/STATE_1' */
} XDis;

/* Mass Matrix (global) */
typedef struct {
  int_T ir[31];
  int_T jc[193];
  real_T pr[31];
} MassMatrix;

#ifndef ODE14X_INTG
#define ODE14X_INTG

/* ODE14X Integration Data */
typedef struct {
  real_T *x0;
  real_T *f0;
  real_T *x1start;
  real_T *f1;
  real_T *Delta;
  real_T *E;
  real_T *fac;
  real_T *DFDX;
  real_T *W;
  int_T *pivots;
  real_T *xtmp;
  real_T *ztmp;
  real_T *M;
  real_T *M1;
  real_T *Edot;
  real_T *xdot;
  real_T *fminusMxdot;
  boolean_T isFirstStep;
} ODE14X_IntgData;

#endif

/* Real-time Model Data Structure */
struct tag_RTM {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;
  X *contStates;
  int_T *periodicContStateIndices;
  real_T *periodicContStateRanges;
  real_T *derivs;
  XDis *contStateDisabled;
  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;
  int_T massMatrixType;
  int_T massMatrixNzMax;
  int_T *massMatrixIr;
  int_T *massMatrixJc;
  real_T *massMatrixPr;
  real_T odeX0[192];
  real_T odeF0[192];
  real_T odeX1START[192];
  real_T odeF1[192];
  real_T odeDELTA[192];
  real_T odeE[4*192];
  real_T odeFAC[192];
  real_T odeDFDX[192*192];
  real_T odeW[192*192];
  int_T odePIVOTS[192];
  real_T odeXTMP[192];
  real_T odeZTMP[192];
  real_T odeMASSMATRIX_M[31];
  real_T odeMASSMATRIX_M1[31];
  real_T odeEDOT[4*192];
  real_T odeXDOT[192];
  real_T odeFMXDOT[192];
  ODE14X_IntgData intgData;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    int_T numContStates;
    int_T numPeriodicContStates;
    int_T numSampTimes;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    time_T tStart;
    SimTimeStep simTimeStep;
    boolean_T stopRequestedFlag;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Continuous states (default storage) */
extern X rtX;

/* Disabled states (default storage) */
extern XDis rtXDis;

/* Block signals and states (default storage) */
extern DW rtDW;

/* global MassMatrix */
extern MassMatrix rtMassMatrix;

/* Model entry point functions */
extern void MedicalVentilatorWithLungModel_initialize(void);
extern void MedicalVentilatorWithLungModel_step(void);

/* Real-time Model object */
extern RT_MODEL *const rtM;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 * Block '<S5>/Convert to cmH2O' : Unused code path elimination
 * Block '<S5>/Room Pressure' : Unused code path elimination
 * Block '<S5>/Sum' : Unused code path elimination
 * Block '<S7>/Convert to L' : Unused code path elimination
 */

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
 * '<Root>' : 'MedicalVentilatorWithLungModel'
 * '<S1>'   : 'MedicalVentilatorWithLungModel/Check Valve 1'
 * '<S2>'   : 'MedicalVentilatorWithLungModel/Check Valve 2'
 * '<S3>'   : 'MedicalVentilatorWithLungModel/Control Signal'
 * '<S4>'   : 'MedicalVentilatorWithLungModel/Humidifier'
 * '<S5>'   : 'MedicalVentilatorWithLungModel/Sensors'
 * '<S6>'   : 'MedicalVentilatorWithLungModel/Solver Configuration'
 * '<S7>'   : 'MedicalVentilatorWithLungModel/Volume Data'
 * '<S8>'   : 'MedicalVentilatorWithLungModel/Check Valve 1/Delay'
 * '<S9>'   : 'MedicalVentilatorWithLungModel/Check Valve 2/Delay'
 * '<S10>'  : 'MedicalVentilatorWithLungModel/Control Signal/Simulink-PS Converter'
 * '<S11>'  : 'MedicalVentilatorWithLungModel/Control Signal/Simulink-PS Converter1'
 * '<S12>'  : 'MedicalVentilatorWithLungModel/Control Signal/Simulink-PS Converter/EVAL_KEY'
 * '<S13>'  : 'MedicalVentilatorWithLungModel/Control Signal/Simulink-PS Converter1/EVAL_KEY'
 * '<S14>'  : 'MedicalVentilatorWithLungModel/Humidifier/Approximate Evaporation Formula'
 * '<S15>'  : 'MedicalVentilatorWithLungModel/Humidifier/Simulink-PS Converter'
 * '<S16>'  : 'MedicalVentilatorWithLungModel/Humidifier/Simulink-PS Converter/EVAL_KEY'
 * '<S17>'  : 'MedicalVentilatorWithLungModel/Sensors/PS-Simulink Converter'
 * '<S18>'  : 'MedicalVentilatorWithLungModel/Sensors/PS-Simulink Converter1'
 * '<S19>'  : 'MedicalVentilatorWithLungModel/Sensors/PS-Simulink Converter/EVAL_KEY'
 * '<S20>'  : 'MedicalVentilatorWithLungModel/Sensors/PS-Simulink Converter1/EVAL_KEY'
 * '<S21>'  : 'MedicalVentilatorWithLungModel/Solver Configuration/EVAL_KEY'
 * '<S22>'  : 'MedicalVentilatorWithLungModel/Volume Data/PS-Simulink Converter'
 * '<S23>'  : 'MedicalVentilatorWithLungModel/Volume Data/PS-Simulink Converter/EVAL_KEY'
 */
#endif                                 /* MedicalVentilatorWithLungModel_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
