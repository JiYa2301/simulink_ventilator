/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MedicalVentilator.c
 *
 * Code generated for Simulink model 'MedicalVentilator'.
 *
 * Model version                  : 11.4
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Thu Jul 25 20:43:54 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "MedicalVentilator.h"
#include "rtwtypes.h"
#include <stddef.h>

/* Private macros used by the generated code to access rtModel */
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MAJOR_TIME_STEP)
#endif

#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm)        (((rtm)->Timing.simTimeStep) == MINOR_TIME_STEP)
#endif

#ifndef rtmSetTPtr
#define rtmSetTPtr(rtm, val)           ((rtm)->Timing.t = (val))
#endif

/* Continuous states */
X rtX;

/* Disabled State Vector */
XDis rtXDis;

/* Block signals and states (default storage) */
DW rtDW;

/* Mass Matrices */
MassMatrix rtMassMatrix;

/* Real-time model */
static RT_MODEL rtM_;
RT_MODEL *const rtM = &rtM_;

/* private model entry point functions */
extern void MedicalVentilator_derivatives(void);

/* ForcingFunction for root system: '<Root>' */
void MedicalVentilator_forcingfunction(void)
{
  NeslSimulationData *simulationData;
  NeslSimulator *simulator;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  XDot *_rtXdot;
  char *msg;
  real_T tmp_0[12];
  real_T time;
  int_T tmp_1[4];
  int_T is;
  boolean_T tmp;
  _rtXdot = ((XDot *) rtM->derivs);

  /* ForcingFunction for TransferFcn: '<S3>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE = 0.0;
  _rtXdot->TransferFcn_CSTATE += -10.0 * rtX.TransferFcn_CSTATE;
  _rtXdot->TransferFcn_CSTATE += rtDW.VolumetricFlowrate;

  /* ForcingFunction for TransferFcn: '<S3>/Transfer Fcn1' */
  _rtXdot->TransferFcn1_CSTATE = 0.0;
  _rtXdot->TransferFcn1_CSTATE += -5.0 * rtX.TransferFcn1_CSTATE;
  _rtXdot->TransferFcn1_CSTATE += rtDW.MaxValveArea;

  /* ForcingFunction for SimscapeExecutionBlock: '<S21>/STATE_1' */
  simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
  time = rtM->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 190;
  simulationData->mData->mContStates.mX = &rtX.MedicalVentilatorLungsT_I[0];
  simulationData->mData->mDiscStates.mN = 12;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
  simulationData->mData->mModeVector.mN = 119;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes[0];
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(rtM);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
    (&rtM->solverInfo);
  tmp_1[0] = 0;
  tmp_0[0] = rtDW.INPUT_2_1_1[0];
  tmp_0[1] = rtDW.INPUT_2_1_1[1];
  tmp_0[2] = rtDW.INPUT_2_1_1[2];
  tmp_0[3] = rtDW.INPUT_2_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = rtDW.INPUT_1_1_1[0];
  tmp_0[5] = rtDW.INPUT_1_1_1[1];
  tmp_0[6] = rtDW.INPUT_1_1_1[2];
  tmp_0[7] = rtDW.INPUT_1_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = rtDW.INPUT_3_1_1[0];
  tmp_0[9] = rtDW.INPUT_3_1_1[1];
  tmp_0[10] = rtDW.INPUT_3_1_1[2];
  tmp_0[11] = rtDW.INPUT_3_1_1[3];
  tmp_1[3] = 12;
  simulationData->mData->mInputValues.mN = 12;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 4;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulationData->mData->mDx.mN = 190;
  simulationData->mData->mDx.mX = &_rtXdot->MedicalVentilatorLungsT_I[0];
  simulator = (NeslSimulator *)rtDW.STATE_1_Simulator;
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  is = ne_simulator_method(simulator, NESL_SIM_FORCINGFUNCTION, simulationData,
    diagnosticManager);
  if (is != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(rtM, msg);
    }
  }

  /* End of ForcingFunction for SimscapeExecutionBlock: '<S21>/STATE_1' */
}

/* MassMatrix for root system: '<Root>' */
void MedicalVentilator_massmatrix(void)
{
  NeslSimulationData *simulationData;
  NeslSimulator *simulator;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  char *msg;
  real_T tmp_0[12];
  real_T time;
  real_T *tmp_2;
  real_T *tmp_3;
  int32_T tmp_4;
  int_T tmp_1[4];
  boolean_T tmp;

  /* MassMatrix for SimscapeExecutionBlock: '<S21>/STATE_1' */
  simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
  time = rtM->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 190;
  simulationData->mData->mContStates.mX = &rtX.MedicalVentilatorLungsT_I[0];
  simulationData->mData->mDiscStates.mN = 12;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
  simulationData->mData->mModeVector.mN = 119;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes[0];
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(rtM);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
    (&rtM->solverInfo);
  tmp_1[0] = 0;
  tmp_0[0] = rtDW.INPUT_2_1_1[0];
  tmp_0[1] = rtDW.INPUT_2_1_1[1];
  tmp_0[2] = rtDW.INPUT_2_1_1[2];
  tmp_0[3] = rtDW.INPUT_2_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = rtDW.INPUT_1_1_1[0];
  tmp_0[5] = rtDW.INPUT_1_1_1[1];
  tmp_0[6] = rtDW.INPUT_1_1_1[2];
  tmp_0[7] = rtDW.INPUT_1_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = rtDW.INPUT_3_1_1[0];
  tmp_0[9] = rtDW.INPUT_3_1_1[1];
  tmp_0[10] = rtDW.INPUT_3_1_1[2];
  tmp_0[11] = rtDW.INPUT_3_1_1[3];
  tmp_1[3] = 12;
  simulationData->mData->mInputValues.mN = 12;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 4;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  tmp_2 = rtM->massMatrixPr;
  tmp_3 = double_pointer_shift(tmp_2, rtDW.STATE_1_MASS_MATRIX_PR);
  simulationData->mData->mMassMatrixPr.mN = 29;
  simulationData->mData->mMassMatrixPr.mX = tmp_3;
  simulator = (NeslSimulator *)rtDW.STATE_1_Simulator;
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_4 = ne_simulator_method(simulator, NESL_SIM_MASSMATRIX, simulationData,
    diagnosticManager);
  if (tmp_4 != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(rtM, msg);
    }
  }

  /* End of MassMatrix for SimscapeExecutionBlock: '<S21>/STATE_1' */
}

void local_evaluateMassMatrix(RTWSolverInfo *si, real_T *Mdest )
{
  /* Refresh global mass matrix */
  MedicalVentilator_massmatrix();

  /* Copy the mass matrix from system to the destination, if needed. */
  if (Mdest != rtsiGetSolverMassMatrixPr(si)) {
    real_T *Msrc = rtsiGetSolverMassMatrixPr(si);
    int_T nzmax = rtsiGetSolverMassMatrixNzMax(si);
    (void) memcpy(Mdest, Msrc,
                  (uint_T)nzmax*sizeof(real_T));
  }
}

void local_evaluateFminusMv(RTWSolverInfo *si, const real_T *v, real_T *fminusMv
  )
{
  /* Refresh forcing function */
  rtsiSetdX(si,fminusMv);
  MedicalVentilator_forcingfunction();

  /* Refresh global mass matrix */
  MedicalVentilator_massmatrix();

  /* Form f - M*v */
  {
    real_T *elptr = rtsiGetSolverMassMatrixPr(si);
    int_T *iptr = rtsiGetSolverMassMatrixIr(si);
    int_T *jc = rtsiGetSolverMassMatrixJc(si);
    int_T nx = 192;
    int_T col,row;
    for (col = 0; col < nx; col++) {
      for (row = jc[col]; row < jc[col+1]; row++) {
        fminusMv[*iptr++] -= (*v) * (*elptr++);
      }

      v++;
    }
  }
}

/* Simplified version of numjac.cpp, for use with RTW. */
void local_numjac( RTWSolverInfo *si, real_T *y, const real_T *v, const real_T
                  *Fty, real_T *fac, real_T *dFdy )
{
  /* constants */
  real_T THRESH = 1e-6;
  real_T EPS = 2.2e-16;                /* utGetEps(); */
  real_T BL = pow(EPS, 0.75);
  real_T BU = pow(EPS, 0.25);
  real_T FACMIN = pow(EPS, 0.78);
  real_T FACMAX = 0.1;
  int_T nx = 192;
  real_T *x = rtsiGetContStates(si);
  boolean_T *xdis = rtsiGetContStateDisabledPtr(si);
  real_T del;
  real_T difmax;
  real_T FdelRowmax;
  real_T temp;
  real_T Fdiff;
  real_T maybe;
  real_T xscale;
  real_T fscale;
  real_T *p;
  int_T rowmax;
  int_T i,j;
  if (x != y)
    (void) memcpy(x, y,
                  (uint_T)nx*sizeof(real_T));
  rtsiSetSolverComputingJacobian(si,true);
  for (p = dFdy, j = 0; j < nx; j++, p += nx) {
    /* Zero column j of dFdy if state j is currently disabled. */
    if (xdis[j]) {
      (void) memset(p, 0,
                    (uint_T)nx*sizeof(p[0]));
      continue;
    }

    /* Select an increment del for a difference approximation to
       column j of dFdy.  The vector fac accounts for experience
       gained in previous calls to numjac. */
    xscale = fabs(x[j]);
    if (xscale < THRESH)
      xscale = THRESH;
    temp = (x[j] + fac[j]*xscale);
    del = temp - y[j];
    while (del == 0.0) {
      if (fac[j] < FACMAX) {
        fac[j] *= 100.0;
        if (fac[j] > FACMAX)
          fac[j] = FACMAX;
        temp = (x[j] + fac[j]*xscale);
        del = temp - x[j];
      } else {
        del = THRESH;                  /* thresh is nonzero */
        break;
      }
    }

    /* Keep del pointing into region. */
    if (Fty[j] >= 0.0)
      del = fabs(del);
    else
      del = -fabs(del);

    /* Form a difference approximation to column j of dFdy. */
    temp = x[j];
    x[j] += del;
    MedicalVentilator_step();
    local_evaluateFminusMv(si,v,p );
    x[j] = temp;
    difmax = 0.0;
    rowmax = 0;
    FdelRowmax = p[0];
    temp = 1.0 / del;
    for (i = 0; i < nx; i++) {
      Fdiff = p[i] - Fty[i];
      maybe = fabs(Fdiff);
      if (maybe > difmax) {
        difmax = maybe;
        rowmax = i;
        FdelRowmax = p[i];
      }

      p[i] = temp * Fdiff;
    }

    /* Adjust fac for next call to numjac. */
    if (((FdelRowmax != 0.0) && (Fty[rowmax] != 0.0)) || (difmax == 0.0)) {
      fscale = fabs(FdelRowmax);
      if (fscale < fabs(Fty[rowmax]))
        fscale = fabs(Fty[rowmax]);
      if (difmax <= BL*fscale) {
        /* The difference is small, so increase the increment. */
        fac[j] *= 10.0;
        if (fac[j] > FACMAX)
          fac[j] = FACMAX;
      } else if (difmax > BU*fscale) {
        /* The difference is large, so reduce the increment. */
        fac[j] *= 0.1;
        if (fac[j] < FACMIN)
          fac[j] = FACMIN;
      }
    }
  }

  rtsiSetSolverComputingJacobian(si,false);
}                                      /* end local_numjac */

/*
 * This function updates continuous states using the ODE14X fixed-step
 * solver algorithm
 */
static void rt_ertODEUpdateContinuousStates(RTWSolverInfo *si )
{
  /* Solver Matrices */
  static int_T rt_ODE14x_N[4] = { 12, 8, 6, 4 };

  time_T t0 = rtsiGetT(si);
  time_T t1 = t0;
  time_T h = rtsiGetStepSize(si);
  real_T *x1 = rtsiGetContStates(si);
  int_T order = rtsiGetSolverExtrapolationOrder(si);
  int_T numIter = rtsiGetSolverNumberNewtonIterations(si);
  ODE14X_IntgData *id = (ODE14X_IntgData *)rtsiGetSolverData(si);
  real_T *x0 = id->x0;
  real_T *f0 = id->f0;
  real_T *x1start = id->x1start;
  real_T *f1 = id->f1;
  real_T *Delta = id->Delta;
  real_T *E = id->E;
  real_T *fac = id->fac;
  real_T *dfdx = id->DFDX;
  real_T *W = id->W;
  int_T *pivots = id->pivots;
  real_T *xtmp = id->xtmp;
  real_T *ztmp = id->ztmp;
  boolean_T *xdis = rtsiGetContStateDisabledPtr(si);
  int_T *Mpattern_ir = rtsiGetSolverMassMatrixIr(si);
  int_T *Mpattern_jc = rtsiGetSolverMassMatrixJc(si);
  real_T *M = id->M;
  real_T *M1 = id->M1;
  real_T *xdot = id->xdot;
  real_T *Edot = id->Edot;
  real_T *fminusMxdot = id->fminusMxdot;
  int_T col,row,rowidx;
  int_T *N = &(rt_ODE14x_N[0]);
  int_T i,j,k,iter;
  int_T nx = 192;
  rtsiSetSimTimeStep(si,MINOR_TIME_STEP);

  /* Save the state values at time t in y, we'll use x as ynew. */
  (void) memcpy(x0, x1,
                (uint_T)nx*sizeof(real_T));

  /* Assumes that rtsiSetT and ModelOutputs are up-to-date */
  local_evaluateMassMatrix(si,M );
  rtsiSetdX(si, xdot);
  MedicalVentilator_derivatives();

  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  MedicalVentilator_forcingfunction();

  /* Form fminusMxdot = f(x) - M(x)*xdot, d(fminusMxdot)/dx = df/dx - d(Mv)/dx */
  (void) memcpy(fminusMxdot, f0,
                (uint_T)nx*sizeof(real_T));
  for (col = 0; col < nx; col++) {
    for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx++) {
      real_T m_row_col = M[rowidx];
      row = Mpattern_ir[rowidx];
      fminusMxdot[row] -= m_row_col*xdot[col];
    }
  }

  local_numjac(si,x0,xdot,fminusMxdot,fac,dfdx );
  for (j = 0; j < order; j++) {
    real_T *p;
    real_T hN = h/N[j];

    /* Get the iteration matrix and solution at t0 */

    /* [L,U] = lu(M - hN*J) */
    (void) memcpy(W, dfdx,
                  (uint_T)nx*nx*sizeof(real_T));
    for (p = W, i = 0; i < nx*nx; i++, p++) {
      *p *= (-hN);
    }

    for (col = 0, p = W; col < nx; col++, p += nx) {
      if (xdis[col]) {
        (void) memset(p, 0,
                      (uint_T)nx*sizeof(p[0]));
        p[col] = 1.0;
      } else {
        for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx++) {
          real_T m_row_col = M[rowidx];
          row = Mpattern_ir[rowidx];
          p[row] += m_row_col;
        }
      }
    }

    rt_lu_real(W, nx,
               pivots);

    /* First Newton's iteration at t0. */
    /* rhs = hN*f0 */
    for (i = 0; i < nx; i++) {
      Delta[i] = hN*f0[i];
    }

    /* Delta = (U \ (L \ rhs)) */
    rt_ForwardSubstitutionRR_Dbl(W, Delta,
      f1, nx,
      1, pivots,
      1);
    rt_BackwardSubstitutionRR_Dbl(W+nx*nx-1, f1+nx-1,
      Delta, nx,
      1, 0);

    /* ytmp = y0 + Delta
       ztmp = (ytmp-y0)/h
     */
    (void) memcpy(x1, x0,
                  (uint_T)nx*sizeof(real_T));
    for (i = 0; i < nx; i++) {
      x1[i] += Delta[i];
      ztmp[i] = Delta[i]/hN;
    }

    /* Additional Newton's iterations, if desired.
       for iter = 2:NewtIter
       rhs = hN*feval(odefun,tn,ytmp,extraArgs{:}) - M*(ytmp - yn);
       if statedepM   % only for state dep. Mdel ~= 0
       Mdel = M - feval(massfun,tn,ytmp);
       rhs = rhs + Mdel*ztmp*h;
       end
       Delta = ( U \ ( L \ rhs ) );
       ytmp = ytmp + Delta;
       ztmp = (ytmp - yn)/h
       end
     */
    rtsiSetT(si, t0);
    rtsiSetdX(si, f1);
    for (iter = 1; iter < numIter; iter++) {
      MedicalVentilator_step();
      MedicalVentilator_forcingfunction();
      for (i = 0; i < nx; i++) {
        Delta[i] = hN*f1[i];
        xtmp[i] = x1[i] - x0[i];
      }

      /* rhs = hN*f(tn,ytmp) - M*(ytmp-yn) */
      for (col = 0; col < nx; col++) {
        for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx++) {
          real_T m_row_col = M[rowidx];
          row = Mpattern_ir[rowidx];
          Delta[row] -= m_row_col*xtmp[col];
        }
      }

      /* rhs = rhs - (Mtmp - M)*ztmp*h */
      local_evaluateMassMatrix(si,M1 );
      for (i = 0; i < rtsiGetSolverMassMatrixNzMax(si); i++) {
        M1[i] -= M[i];
      }

      for (col = 0; col < nx; col++) {
        for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx++) {
          real_T m_row_col = M1[rowidx];
          row = Mpattern_ir[rowidx];
          Delta[row] -= hN*m_row_col*ztmp[col];
        }
      }

      rt_ForwardSubstitutionRR_Dbl(W, Delta,
        f1, nx,
        1, pivots,
        1);
      rt_BackwardSubstitutionRR_Dbl(W+nx*nx-1, f1+nx-1,
        Delta, nx,
        1, 0);

      /* ytmp = ytmp + delta
         ztmp = (ytmp - yn)/h
       */
      for (i = 0; i < nx; i++) {
        x1[i] += Delta[i];
        ztmp[i] = (x1[i] - x0[i])/hN;
      }
    }

    /* Steps from t0+hN to t1 -- subintegration of N(j) steps for extrapolation
       ttmp = t0;
       for i = 2:N(j)
       ttmp = ttmp + hN
       ytmp0 = ytmp;
       for iter = 1:NewtIter
       rhs = (ytmp0 - ytmp) + hN*feval(odefun,ttmp,ytmp,extraArgs{:});
       Delta = ( U \ ( L \ rhs ) );
       ytmp = ytmp + Delta;
       end
       end
     */
    for (k = 1; k < N[j]; k++) {
      t1 = t0 + k*hN;
      (void) memcpy(x1start, x1,
                    (uint_T)nx*sizeof(real_T));
      rtsiSetT(si, t1);
      rtsiSetdX(si, f1);
      for (iter = 0; iter < numIter; iter++) {
        MedicalVentilator_step();
        MedicalVentilator_forcingfunction();
        if (iter == 0) {
          for (i = 0; i < nx; i++) {
            Delta[i] = hN*f1[i];
          }
        } else {
          for (i = 0; i < nx; i++) {
            Delta[i] = hN*f1[i];
            xtmp[i] = (x1[i]-x1start[i]);
          }

          /* rhs = hN*f(tn,ytmp) - M*(ytmp-yn) */
          for (col = 0; col < nx; col++) {
            for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx
                 ++) {
              real_T m_row_col = M[rowidx];
              row = Mpattern_ir[rowidx];
              Delta[row] -= m_row_col*xtmp[col];
            }
          }
        }

        /* For state-dep.,  Mdel = M(ttmp,ytmp) - M */
        MedicalVentilator_step();
        local_evaluateMassMatrix(si,M1 );
        for (i = 0; i < rtsiGetSolverMassMatrixNzMax(si); i++) {
          M1[i] -= M[i];
        }

        /* rhs = rhs - Mdel*ztmp*h */
        for (col = 0; col < nx; col++) {
          for (rowidx = Mpattern_jc[col]; rowidx < Mpattern_jc[col+1]; rowidx++)
          {
            real_T m_row_col = M1[rowidx];
            row = Mpattern_ir[rowidx];
            Delta[row] -= hN*m_row_col*ztmp[col];
          }
        }

        rt_ForwardSubstitutionRR_Dbl(W, Delta,
          f1, nx,
          1, pivots,
          1);
        rt_BackwardSubstitutionRR_Dbl(W+nx*nx-1, f1+nx-1,
          Delta, nx,
          1, 0);

        /* ytmp = ytmp + Delta
           ztmp = (ytmp - ytmp0)/h
         */
        for (i = 0; i < nx; i++) {
          x1[i] += Delta[i];
          ztmp[i] = (x1[i] - x1start[i])/hN;
        }
      }
    }

    /* Extrapolate to order j
       E(:,j) = ytmp
       for k = j:-1:2
       coef = N(k-1)/(N(j) - N(k-1))
       E(:,k-1) = E(:,k) + coef*( E(:,k) - E(:,k-1) )
       end
     */
    (void) memcpy(&(E[nx*j]), x1,
                  (uint_T)nx*sizeof(real_T));
    for (k = j; k > 0; k--) {
      real_T coef = (real_T)(N[k-1]) / (N[j]-N[k-1]);
      for (i = 0; i < nx; i++) {
        x1[i] = E[nx*k+i] + coef*(E[nx*k+i] - E[nx*(k-1)+i]);
      }

      (void) memcpy(&(E[nx*(k-1)]), x1,
                    (uint_T)nx*sizeof(real_T));
    }

    /* Extrapolate the derivative */
    for (i = 0; i < nx; i++) {
      xdot[i] = (x1[i] - x1start[i])/hN;
    }

    (void) memcpy(&(Edot[nx*j]), xdot,
                  (uint_T)nx*sizeof(real_T));
    for (k = j; k > 0; k--) {
      real_T coef = (real_T)(N[k-1]) / (N[j]-N[k-1]);
      for (i = 0; i < nx; i++) {
        xdot[i] = Edot[nx*k+i] + coef*(Edot[nx*k+i] - Edot[nx*(k-1)+i]);
      }

      (void) memcpy(&(Edot[nx*(k-1)]), xdot,
                    nx*sizeof(real_T));
    }
  }

  /* x1 = E(:,1); */
  (void) memcpy(x1, E,
                (uint_T)nx*sizeof(real_T));

  /* Extrapolated xdot */
  (void) memcpy(xdot, Edot,
                nx*sizeof(real_T));

  /* t1 = t0 + h; */
  rtsiSetT(si,rtsiGetSolverStopTime(si));
  rtsiSetSimTimeStep(si,MAJOR_TIME_STEP);
}

/* Model step function */
void MedicalVentilator_step(void)
{
  if (rtmIsMajorTimeStep(rtM)) {
    /* set solver stop time */
    rtsiSetSolverStopTime(&rtM->solverInfo,((rtM->Timing.clockTick0+1)*
      rtM->Timing.stepSize0));
  }                                    /* end MajorTimeStep */

  /* Update absolute time of base rate at minor time step */
  if (rtmIsMinorTimeStep(rtM)) {
    rtM->Timing.t[0] = rtsiGetT(&rtM->solverInfo);
  }

  {
    NeParameterBundle expl_temp;
    NeslRtpManager *rtpManager;
    NeslSimulationData *simulationData;
    NeslSimulator *simulator;
    NeuDiagnosticManager *diag;
    NeuDiagnosticTree *diagTree;
    char *msg;
    real_T tmp_2[333];
    real_T tmp[12];
    real_T tmp_0[12];
    real_T time;
    real_T time_0;
    real_T time_1;
    real_T time_2;
    real_T *parameterBundle_mRealParameters;
    int_T tmp_3[5];
    int_T tmp_1[4];
    int_T iy;
    boolean_T ok;

    /* TransferFcn: '<S3>/Transfer Fcn' */
    rtDW.TransferFcn = 0.0;
    rtDW.TransferFcn += 10.0 * rtX.TransferFcn_CSTATE;

    /* TransferFcn: '<S3>/Transfer Fcn1' */
    rtDW.TransferFcn1 = 0.0;
    rtDW.TransferFcn1 += 5.0 * rtX.TransferFcn1_CSTATE;
    if (rtmIsMajorTimeStep(rtM)) {
      /* DiscretePulseGenerator: '<S3>/Pulse Generator' */
      rtDW.PulseGenerator = ((rtDW.clockTickCounter < 1) &&
        (rtDW.clockTickCounter >= 0));

      /* DiscretePulseGenerator: '<S3>/Pulse Generator' */
      if (rtDW.clockTickCounter >= 3) {
        rtDW.clockTickCounter = 0;
      } else {
        rtDW.clockTickCounter++;
      }

      /* Sum: '<S3>/Sum' incorporates:
       *  Constant: '<S3>/Constant'
       */
      rtDW.Sum = 1.0 - rtDW.PulseGenerator;

      /* Gain: '<S3>/Max Valve Area' */
      rtDW.MaxValveArea = 7.8539816339744827E-5 * rtDW.Sum;

      /* Gain: '<S3>/Volumetric Flow rate' */
      rtDW.VolumetricFlowrate = 0.5 * rtDW.PulseGenerator;

      /* SimscapeRtp: '<S6>/RTP_1' incorporates:
       *  Constant: '<Root>/Subsystem_around_RTP_01526D97_RH_I'
       *  Constant: '<Root>/Subsystem_around_RTP_01526D97_T_I'
       *  Constant: '<Root>/Subsystem_around_RTP_51DE003A_RH_I'
       *  Constant: '<Root>/Subsystem_around_RTP_51DE003A_T_I'
       *  Constant: '<Root>/Subsystem_around_RTP_71389918_RH_I'
       *  Constant: '<Root>/Subsystem_around_RTP_71389918_T_I'
       *  Constant: '<Root>/Subsystem_around_RTP_737E2741_RH_I'
       *  Constant: '<Root>/Subsystem_around_RTP_737E2741_T_I'
       *  Constant: '<Root>/Subsystem_around_RTP_9D13FCA1_RH_I'
       *  Constant: '<Root>/Subsystem_around_RTP_9D13FCA1_T_I'
       *  Constant: '<S4>/Subsystem_around_RTP_EA14CC37_RH_I'
       *  Constant: '<S4>/Subsystem_around_RTP_EA14CC37_T_I'
       */
      if (rtDW.RTP_1_SetParametersNeeded) {
        tmp[0] = 37.0;
        tmp[1] = 0.1;
        tmp[2] = 20.0;
        tmp[3] = 20.0;
        tmp[4] = 0.1;
        tmp[5] = 0.1;
        tmp[6] = 20.0;
        tmp[7] = 1.0;
        tmp[8] = 0.1;
        tmp[9] = 20.0;
        tmp[10] = 1.0;
        tmp[11] = 37.0;
        parameterBundle_mRealParameters = &tmp[0];
        rtpManager = (NeslRtpManager *)rtDW.RTP_1_RtpManager;
        diag = rtw_create_diagnostics();
        diagTree = neu_diagnostic_manager_get_initial_tree(diag);
        expl_temp.mRealParameters.mN = 12;
        expl_temp.mRealParameters.mX = parameterBundle_mRealParameters;
        expl_temp.mLogicalParameters.mN = 0;
        expl_temp.mLogicalParameters.mX = NULL;
        expl_temp.mIntegerParameters.mN = 0;
        expl_temp.mIntegerParameters.mX = NULL;
        expl_temp.mIndexParameters.mN = 0;
        expl_temp.mIndexParameters.mX = NULL;
        ok = nesl_rtp_manager_set_rtps(rtpManager, rtM->Timing.t[0], expl_temp,
          diag);
        if (!ok) {
          ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
          if (ok) {
            msg = rtw_diagnostics_msg(diagTree);
            rtmSetErrorStatus(rtM, msg);
          }
        }
      }

      rtDW.RTP_1_SetParametersNeeded = false;

      /* End of SimscapeRtp: '<S6>/RTP_1' */
    }

    /* SimscapeInputBlock: '<S21>/INPUT_2_1_1' */
    rtDW.INPUT_2_1_1[0] = rtDW.TransferFcn1;
    rtDW.INPUT_2_1_1[1] = 0.0;
    rtDW.INPUT_2_1_1[2] = 0.0;
    rtDW.INPUT_2_1_1[3] = 0.0;

    /* SimscapeInputBlock: '<S21>/INPUT_1_1_1' */
    rtDW.INPUT_1_1_1[0] = rtDW.TransferFcn;
    rtDW.INPUT_1_1_1[1] = 0.0;
    rtDW.INPUT_1_1_1[2] = 0.0;
    rtDW.INPUT_1_1_1[3] = 0.0;

    /* SimscapeInputBlock: '<S21>/INPUT_3_1_1' incorporates:
     *  Constant: '<S4>/Water Temperature'
     */
    rtDW.INPUT_3_1_1[0] = 313.15;
    rtDW.INPUT_3_1_1[1] = 0.0;
    rtDW.INPUT_3_1_1[2] = 0.0;
    if (rtmIsMajorTimeStep(rtM)) {
      rtDW.INPUT_3_1_1_Discrete[0] = !(rtDW.INPUT_3_1_1[0] ==
        rtDW.INPUT_3_1_1_Discrete[1]);
      rtDW.INPUT_3_1_1_Discrete[1] = rtDW.INPUT_3_1_1[0];
    }

    rtDW.INPUT_3_1_1[0] = rtDW.INPUT_3_1_1_Discrete[1];
    rtDW.INPUT_3_1_1[3] = rtDW.INPUT_3_1_1_Discrete[0];

    /* End of SimscapeInputBlock: '<S21>/INPUT_3_1_1' */

    /* SimscapeExecutionBlock: '<S21>/STATE_1' */
    simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
    time = rtM->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 190;
    simulationData->mData->mContStates.mX = &rtX.MedicalVentilatorLungsT_I[0];
    simulationData->mData->mDiscStates.mN = 12;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 119;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes[0];
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(rtM);
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    ok = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
    simulationData->mData->mIsComputingJacobian = ok;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
      (&rtM->solverInfo);
    tmp_1[0] = 0;
    tmp_0[0] = rtDW.INPUT_2_1_1[0];
    tmp_0[1] = rtDW.INPUT_2_1_1[1];
    tmp_0[2] = rtDW.INPUT_2_1_1[2];
    tmp_0[3] = rtDW.INPUT_2_1_1[3];
    tmp_1[1] = 4;
    tmp_0[4] = rtDW.INPUT_1_1_1[0];
    tmp_0[5] = rtDW.INPUT_1_1_1[1];
    tmp_0[6] = rtDW.INPUT_1_1_1[2];
    tmp_0[7] = rtDW.INPUT_1_1_1[3];
    tmp_1[2] = 8;
    tmp_0[8] = rtDW.INPUT_3_1_1[0];
    tmp_0[9] = rtDW.INPUT_3_1_1[1];
    tmp_0[10] = rtDW.INPUT_3_1_1[2];
    tmp_0[11] = rtDW.INPUT_3_1_1[3];
    tmp_1[3] = 12;
    simulationData->mData->mInputValues.mN = 12;
    simulationData->mData->mInputValues.mX = &tmp_0[0];
    simulationData->mData->mInputOffsets.mN = 4;
    simulationData->mData->mInputOffsets.mX = &tmp_1[0];
    simulationData->mData->mOutputs.mN = 321;
    simulationData->mData->mOutputs.mX = &rtDW.STATE_1[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_0 = rtM->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_0;
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mHadEvents = false;
    simulator = (NeslSimulator *)rtDW.STATE_1_Simulator;
    diag = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
    diagTree = neu_diagnostic_manager_get_initial_tree(diag);
    iy = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData, diag);
    if (iy != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (ok) {
        msg = rtw_diagnostics_msg(diagTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S21>/STATE_1' */

    /* SimscapeExecutionBlock: '<S21>/OUTPUT_1_0' */
    simulationData = (NeslSimulationData *)rtDW.OUTPUT_1_0_SimData;
    time_1 = rtM->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &rtDW.OUTPUT_1_0_Modes;
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(rtM);
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
      (&rtM->solverInfo);
    tmp_3[0] = 0;
    tmp_2[0] = rtDW.INPUT_2_1_1[0];
    tmp_2[1] = rtDW.INPUT_2_1_1[1];
    tmp_2[2] = rtDW.INPUT_2_1_1[2];
    tmp_2[3] = rtDW.INPUT_2_1_1[3];
    tmp_3[1] = 4;
    tmp_2[4] = rtDW.INPUT_1_1_1[0];
    tmp_2[5] = rtDW.INPUT_1_1_1[1];
    tmp_2[6] = rtDW.INPUT_1_1_1[2];
    tmp_2[7] = rtDW.INPUT_1_1_1[3];
    tmp_3[2] = 8;
    tmp_2[8] = rtDW.INPUT_3_1_1[0];
    tmp_2[9] = rtDW.INPUT_3_1_1[1];
    tmp_2[10] = rtDW.INPUT_3_1_1[2];
    tmp_2[11] = rtDW.INPUT_3_1_1[3];
    tmp_3[3] = 12;
    tmp_2[12] = rtDW.STATE_1[0];
    tmp_2[13] = rtDW.STATE_1[1];
    tmp_2[14] = rtDW.STATE_1[2];
    tmp_2[15] = rtDW.STATE_1[3];
    tmp_2[16] = rtDW.STATE_1[4];
    tmp_2[17] = rtDW.STATE_1[5];
    tmp_2[18] = rtDW.STATE_1[6];
    tmp_2[19] = rtDW.STATE_1[7];
    tmp_2[20] = rtDW.STATE_1[8];
    tmp_2[21] = rtDW.STATE_1[9];
    tmp_2[22] = rtDW.STATE_1[10];
    tmp_2[23] = rtDW.STATE_1[11];
    tmp_2[24] = rtDW.STATE_1[12];
    tmp_2[25] = rtDW.STATE_1[13];
    tmp_2[26] = rtDW.STATE_1[14];
    tmp_2[27] = rtDW.STATE_1[15];
    tmp_2[28] = rtDW.STATE_1[16];
    tmp_2[29] = rtDW.STATE_1[17];
    tmp_2[30] = rtDW.STATE_1[18];
    tmp_2[31] = rtDW.STATE_1[19];
    tmp_2[32] = rtDW.STATE_1[20];
    tmp_2[33] = rtDW.STATE_1[21];
    tmp_2[34] = rtDW.STATE_1[22];
    tmp_2[35] = rtDW.STATE_1[23];
    tmp_2[36] = rtDW.STATE_1[24];
    tmp_2[37] = rtDW.STATE_1[25];
    tmp_2[38] = rtDW.STATE_1[26];
    tmp_2[39] = rtDW.STATE_1[27];
    tmp_2[40] = rtDW.STATE_1[28];
    tmp_2[41] = rtDW.STATE_1[29];
    tmp_2[42] = rtDW.STATE_1[30];
    tmp_2[43] = rtDW.STATE_1[31];
    tmp_2[44] = rtDW.STATE_1[32];
    tmp_2[45] = rtDW.STATE_1[33];
    tmp_2[46] = rtDW.STATE_1[34];
    tmp_2[47] = rtDW.STATE_1[35];
    tmp_2[48] = rtDW.STATE_1[36];
    tmp_2[49] = rtDW.STATE_1[37];
    tmp_2[50] = rtDW.STATE_1[38];
    tmp_2[51] = rtDW.STATE_1[39];
    tmp_2[52] = rtDW.STATE_1[40];
    tmp_2[53] = rtDW.STATE_1[41];
    tmp_2[54] = rtDW.STATE_1[42];
    tmp_2[55] = rtDW.STATE_1[43];
    tmp_2[56] = rtDW.STATE_1[44];
    tmp_2[57] = rtDW.STATE_1[45];
    tmp_2[58] = rtDW.STATE_1[46];
    tmp_2[59] = rtDW.STATE_1[47];
    tmp_2[60] = rtDW.STATE_1[48];
    tmp_2[61] = rtDW.STATE_1[49];
    tmp_2[62] = rtDW.STATE_1[50];
    tmp_2[63] = rtDW.STATE_1[51];
    tmp_2[64] = rtDW.STATE_1[52];
    tmp_2[65] = rtDW.STATE_1[53];
    tmp_2[66] = rtDW.STATE_1[54];
    tmp_2[67] = rtDW.STATE_1[55];
    tmp_2[68] = rtDW.STATE_1[56];
    tmp_2[69] = rtDW.STATE_1[57];
    tmp_2[70] = rtDW.STATE_1[58];
    tmp_2[71] = rtDW.STATE_1[59];
    tmp_2[72] = rtDW.STATE_1[60];
    tmp_2[73] = rtDW.STATE_1[61];
    tmp_2[74] = rtDW.STATE_1[62];
    tmp_2[75] = rtDW.STATE_1[63];
    tmp_2[76] = rtDW.STATE_1[64];
    tmp_2[77] = rtDW.STATE_1[65];
    tmp_2[78] = rtDW.STATE_1[66];
    tmp_2[79] = rtDW.STATE_1[67];
    tmp_2[80] = rtDW.STATE_1[68];
    tmp_2[81] = rtDW.STATE_1[69];
    tmp_2[82] = rtDW.STATE_1[70];
    tmp_2[83] = rtDW.STATE_1[71];
    tmp_2[84] = rtDW.STATE_1[72];
    tmp_2[85] = rtDW.STATE_1[73];
    tmp_2[86] = rtDW.STATE_1[74];
    tmp_2[87] = rtDW.STATE_1[75];
    tmp_2[88] = rtDW.STATE_1[76];
    tmp_2[89] = rtDW.STATE_1[77];
    tmp_2[90] = rtDW.STATE_1[78];
    tmp_2[91] = rtDW.STATE_1[79];
    tmp_2[92] = rtDW.STATE_1[80];
    tmp_2[93] = rtDW.STATE_1[81];
    tmp_2[94] = rtDW.STATE_1[82];
    tmp_2[95] = rtDW.STATE_1[83];
    tmp_2[96] = rtDW.STATE_1[84];
    tmp_2[97] = rtDW.STATE_1[85];
    tmp_2[98] = rtDW.STATE_1[86];
    tmp_2[99] = rtDW.STATE_1[87];
    tmp_2[100] = rtDW.STATE_1[88];
    tmp_2[101] = rtDW.STATE_1[89];
    tmp_2[102] = rtDW.STATE_1[90];
    tmp_2[103] = rtDW.STATE_1[91];
    tmp_2[104] = rtDW.STATE_1[92];
    tmp_2[105] = rtDW.STATE_1[93];
    tmp_2[106] = rtDW.STATE_1[94];
    tmp_2[107] = rtDW.STATE_1[95];
    tmp_2[108] = rtDW.STATE_1[96];
    tmp_2[109] = rtDW.STATE_1[97];
    tmp_2[110] = rtDW.STATE_1[98];
    tmp_2[111] = rtDW.STATE_1[99];
    tmp_2[112] = rtDW.STATE_1[100];
    tmp_2[113] = rtDW.STATE_1[101];
    tmp_2[114] = rtDW.STATE_1[102];
    tmp_2[115] = rtDW.STATE_1[103];
    tmp_2[116] = rtDW.STATE_1[104];
    tmp_2[117] = rtDW.STATE_1[105];
    tmp_2[118] = rtDW.STATE_1[106];
    tmp_2[119] = rtDW.STATE_1[107];
    tmp_2[120] = rtDW.STATE_1[108];
    tmp_2[121] = rtDW.STATE_1[109];
    tmp_2[122] = rtDW.STATE_1[110];
    tmp_2[123] = rtDW.STATE_1[111];
    tmp_2[124] = rtDW.STATE_1[112];
    tmp_2[125] = rtDW.STATE_1[113];
    tmp_2[126] = rtDW.STATE_1[114];
    tmp_2[127] = rtDW.STATE_1[115];
    tmp_2[128] = rtDW.STATE_1[116];
    tmp_2[129] = rtDW.STATE_1[117];
    tmp_2[130] = rtDW.STATE_1[118];
    tmp_2[131] = rtDW.STATE_1[119];
    tmp_2[132] = rtDW.STATE_1[120];
    tmp_2[133] = rtDW.STATE_1[121];
    tmp_2[134] = rtDW.STATE_1[122];
    tmp_2[135] = rtDW.STATE_1[123];
    tmp_2[136] = rtDW.STATE_1[124];
    tmp_2[137] = rtDW.STATE_1[125];
    tmp_2[138] = rtDW.STATE_1[126];
    tmp_2[139] = rtDW.STATE_1[127];
    tmp_2[140] = rtDW.STATE_1[128];
    tmp_2[141] = rtDW.STATE_1[129];
    tmp_2[142] = rtDW.STATE_1[130];
    tmp_2[143] = rtDW.STATE_1[131];
    tmp_2[144] = rtDW.STATE_1[132];
    tmp_2[145] = rtDW.STATE_1[133];
    tmp_2[146] = rtDW.STATE_1[134];
    tmp_2[147] = rtDW.STATE_1[135];
    tmp_2[148] = rtDW.STATE_1[136];
    tmp_2[149] = rtDW.STATE_1[137];
    tmp_2[150] = rtDW.STATE_1[138];
    tmp_2[151] = rtDW.STATE_1[139];
    tmp_2[152] = rtDW.STATE_1[140];
    tmp_2[153] = rtDW.STATE_1[141];
    tmp_2[154] = rtDW.STATE_1[142];
    tmp_2[155] = rtDW.STATE_1[143];
    tmp_2[156] = rtDW.STATE_1[144];
    tmp_2[157] = rtDW.STATE_1[145];
    tmp_2[158] = rtDW.STATE_1[146];
    tmp_2[159] = rtDW.STATE_1[147];
    tmp_2[160] = rtDW.STATE_1[148];
    tmp_2[161] = rtDW.STATE_1[149];
    tmp_2[162] = rtDW.STATE_1[150];
    tmp_2[163] = rtDW.STATE_1[151];
    tmp_2[164] = rtDW.STATE_1[152];
    tmp_2[165] = rtDW.STATE_1[153];
    tmp_2[166] = rtDW.STATE_1[154];
    tmp_2[167] = rtDW.STATE_1[155];
    tmp_2[168] = rtDW.STATE_1[156];
    tmp_2[169] = rtDW.STATE_1[157];
    tmp_2[170] = rtDW.STATE_1[158];
    tmp_2[171] = rtDW.STATE_1[159];
    tmp_2[172] = rtDW.STATE_1[160];
    tmp_2[173] = rtDW.STATE_1[161];
    tmp_2[174] = rtDW.STATE_1[162];
    tmp_2[175] = rtDW.STATE_1[163];
    tmp_2[176] = rtDW.STATE_1[164];
    tmp_2[177] = rtDW.STATE_1[165];
    tmp_2[178] = rtDW.STATE_1[166];
    tmp_2[179] = rtDW.STATE_1[167];
    tmp_2[180] = rtDW.STATE_1[168];
    tmp_2[181] = rtDW.STATE_1[169];
    tmp_2[182] = rtDW.STATE_1[170];
    tmp_2[183] = rtDW.STATE_1[171];
    tmp_2[184] = rtDW.STATE_1[172];
    tmp_2[185] = rtDW.STATE_1[173];
    tmp_2[186] = rtDW.STATE_1[174];
    tmp_2[187] = rtDW.STATE_1[175];
    tmp_2[188] = rtDW.STATE_1[176];
    tmp_2[189] = rtDW.STATE_1[177];
    tmp_2[190] = rtDW.STATE_1[178];
    tmp_2[191] = rtDW.STATE_1[179];
    tmp_2[192] = rtDW.STATE_1[180];
    tmp_2[193] = rtDW.STATE_1[181];
    tmp_2[194] = rtDW.STATE_1[182];
    tmp_2[195] = rtDW.STATE_1[183];
    tmp_2[196] = rtDW.STATE_1[184];
    tmp_2[197] = rtDW.STATE_1[185];
    tmp_2[198] = rtDW.STATE_1[186];
    tmp_2[199] = rtDW.STATE_1[187];
    tmp_2[200] = rtDW.STATE_1[188];
    tmp_2[201] = rtDW.STATE_1[189];
    tmp_2[202] = rtDW.STATE_1[190];
    tmp_2[203] = rtDW.STATE_1[191];
    tmp_2[204] = rtDW.STATE_1[192];
    tmp_2[205] = rtDW.STATE_1[193];
    tmp_2[206] = rtDW.STATE_1[194];
    tmp_2[207] = rtDW.STATE_1[195];
    tmp_2[208] = rtDW.STATE_1[196];
    tmp_2[209] = rtDW.STATE_1[197];
    tmp_2[210] = rtDW.STATE_1[198];
    tmp_2[211] = rtDW.STATE_1[199];
    tmp_2[212] = rtDW.STATE_1[200];
    tmp_2[213] = rtDW.STATE_1[201];
    tmp_2[214] = rtDW.STATE_1[202];
    tmp_2[215] = rtDW.STATE_1[203];
    tmp_2[216] = rtDW.STATE_1[204];
    tmp_2[217] = rtDW.STATE_1[205];
    tmp_2[218] = rtDW.STATE_1[206];
    tmp_2[219] = rtDW.STATE_1[207];
    tmp_2[220] = rtDW.STATE_1[208];
    tmp_2[221] = rtDW.STATE_1[209];
    tmp_2[222] = rtDW.STATE_1[210];
    tmp_2[223] = rtDW.STATE_1[211];
    tmp_2[224] = rtDW.STATE_1[212];
    tmp_2[225] = rtDW.STATE_1[213];
    tmp_2[226] = rtDW.STATE_1[214];
    tmp_2[227] = rtDW.STATE_1[215];
    tmp_2[228] = rtDW.STATE_1[216];
    tmp_2[229] = rtDW.STATE_1[217];
    tmp_2[230] = rtDW.STATE_1[218];
    tmp_2[231] = rtDW.STATE_1[219];
    tmp_2[232] = rtDW.STATE_1[220];
    tmp_2[233] = rtDW.STATE_1[221];
    tmp_2[234] = rtDW.STATE_1[222];
    tmp_2[235] = rtDW.STATE_1[223];
    tmp_2[236] = rtDW.STATE_1[224];
    tmp_2[237] = rtDW.STATE_1[225];
    tmp_2[238] = rtDW.STATE_1[226];
    tmp_2[239] = rtDW.STATE_1[227];
    tmp_2[240] = rtDW.STATE_1[228];
    tmp_2[241] = rtDW.STATE_1[229];
    tmp_2[242] = rtDW.STATE_1[230];
    tmp_2[243] = rtDW.STATE_1[231];
    tmp_2[244] = rtDW.STATE_1[232];
    tmp_2[245] = rtDW.STATE_1[233];
    tmp_2[246] = rtDW.STATE_1[234];
    tmp_2[247] = rtDW.STATE_1[235];
    tmp_2[248] = rtDW.STATE_1[236];
    tmp_2[249] = rtDW.STATE_1[237];
    tmp_2[250] = rtDW.STATE_1[238];
    tmp_2[251] = rtDW.STATE_1[239];
    tmp_2[252] = rtDW.STATE_1[240];
    tmp_2[253] = rtDW.STATE_1[241];
    tmp_2[254] = rtDW.STATE_1[242];
    tmp_2[255] = rtDW.STATE_1[243];
    tmp_2[256] = rtDW.STATE_1[244];
    tmp_2[257] = rtDW.STATE_1[245];
    tmp_2[258] = rtDW.STATE_1[246];
    tmp_2[259] = rtDW.STATE_1[247];
    tmp_2[260] = rtDW.STATE_1[248];
    tmp_2[261] = rtDW.STATE_1[249];
    tmp_2[262] = rtDW.STATE_1[250];
    tmp_2[263] = rtDW.STATE_1[251];
    tmp_2[264] = rtDW.STATE_1[252];
    tmp_2[265] = rtDW.STATE_1[253];
    tmp_2[266] = rtDW.STATE_1[254];
    tmp_2[267] = rtDW.STATE_1[255];
    tmp_2[268] = rtDW.STATE_1[256];
    tmp_2[269] = rtDW.STATE_1[257];
    tmp_2[270] = rtDW.STATE_1[258];
    tmp_2[271] = rtDW.STATE_1[259];
    tmp_2[272] = rtDW.STATE_1[260];
    tmp_2[273] = rtDW.STATE_1[261];
    tmp_2[274] = rtDW.STATE_1[262];
    tmp_2[275] = rtDW.STATE_1[263];
    tmp_2[276] = rtDW.STATE_1[264];
    tmp_2[277] = rtDW.STATE_1[265];
    tmp_2[278] = rtDW.STATE_1[266];
    tmp_2[279] = rtDW.STATE_1[267];
    tmp_2[280] = rtDW.STATE_1[268];
    tmp_2[281] = rtDW.STATE_1[269];
    tmp_2[282] = rtDW.STATE_1[270];
    tmp_2[283] = rtDW.STATE_1[271];
    tmp_2[284] = rtDW.STATE_1[272];
    tmp_2[285] = rtDW.STATE_1[273];
    tmp_2[286] = rtDW.STATE_1[274];
    tmp_2[287] = rtDW.STATE_1[275];
    tmp_2[288] = rtDW.STATE_1[276];
    tmp_2[289] = rtDW.STATE_1[277];
    tmp_2[290] = rtDW.STATE_1[278];
    tmp_2[291] = rtDW.STATE_1[279];
    tmp_2[292] = rtDW.STATE_1[280];
    tmp_2[293] = rtDW.STATE_1[281];
    tmp_2[294] = rtDW.STATE_1[282];
    tmp_2[295] = rtDW.STATE_1[283];
    tmp_2[296] = rtDW.STATE_1[284];
    tmp_2[297] = rtDW.STATE_1[285];
    tmp_2[298] = rtDW.STATE_1[286];
    tmp_2[299] = rtDW.STATE_1[287];
    tmp_2[300] = rtDW.STATE_1[288];
    tmp_2[301] = rtDW.STATE_1[289];
    tmp_2[302] = rtDW.STATE_1[290];
    tmp_2[303] = rtDW.STATE_1[291];
    tmp_2[304] = rtDW.STATE_1[292];
    tmp_2[305] = rtDW.STATE_1[293];
    tmp_2[306] = rtDW.STATE_1[294];
    tmp_2[307] = rtDW.STATE_1[295];
    tmp_2[308] = rtDW.STATE_1[296];
    tmp_2[309] = rtDW.STATE_1[297];
    tmp_2[310] = rtDW.STATE_1[298];
    tmp_2[311] = rtDW.STATE_1[299];
    tmp_2[312] = rtDW.STATE_1[300];
    tmp_2[313] = rtDW.STATE_1[301];
    tmp_2[314] = rtDW.STATE_1[302];
    tmp_2[315] = rtDW.STATE_1[303];
    tmp_2[316] = rtDW.STATE_1[304];
    tmp_2[317] = rtDW.STATE_1[305];
    tmp_2[318] = rtDW.STATE_1[306];
    tmp_2[319] = rtDW.STATE_1[307];
    tmp_2[320] = rtDW.STATE_1[308];
    tmp_2[321] = rtDW.STATE_1[309];
    tmp_2[322] = rtDW.STATE_1[310];
    tmp_2[323] = rtDW.STATE_1[311];
    tmp_2[324] = rtDW.STATE_1[312];
    tmp_2[325] = rtDW.STATE_1[313];
    tmp_2[326] = rtDW.STATE_1[314];
    tmp_2[327] = rtDW.STATE_1[315];
    tmp_2[328] = rtDW.STATE_1[316];
    tmp_2[329] = rtDW.STATE_1[317];
    tmp_2[330] = rtDW.STATE_1[318];
    tmp_2[331] = rtDW.STATE_1[319];
    tmp_2[332] = rtDW.STATE_1[320];
    tmp_3[4] = 333;
    simulationData->mData->mInputValues.mN = 333;
    simulationData->mData->mInputValues.mX = &tmp_2[0];
    simulationData->mData->mInputOffsets.mN = 5;
    simulationData->mData->mInputOffsets.mX = &tmp_3[0];
    simulationData->mData->mOutputs.mN = 3;
    simulationData->mData->mOutputs.mX = &rtDW.OUTPUT_1_0[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_2 = rtM->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_2;
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mHadEvents = false;
    simulator = (NeslSimulator *)rtDW.OUTPUT_1_0_Simulator;
    diag = (NeuDiagnosticManager *)rtDW.OUTPUT_1_0_DiagMgr;
    diagTree = neu_diagnostic_manager_get_initial_tree(diag);
    iy = ne_simulator_method(simulator, NESL_SIM_OUTPUTS, simulationData, diag);
    if (iy != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (ok) {
        msg = rtw_diagnostics_msg(diagTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* End of SimscapeExecutionBlock: '<S21>/OUTPUT_1_0' */
  }

  if (rtmIsMajorTimeStep(rtM)) {
    NeslSimulationData *simulationData;
    NeslSimulator *simulator;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    real_T tmp_0[12];
    real_T time;
    int32_T tmp_2;
    int_T tmp_1[4];
    boolean_T tmp;

    /* Update for SimscapeExecutionBlock: '<S21>/STATE_1' */
    simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
    time = rtM->Timing.t[0];
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 190;
    simulationData->mData->mContStates.mX = &rtX.MedicalVentilatorLungsT_I[0];
    simulationData->mData->mDiscStates.mN = 12;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 119;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes[0];
    tmp = false;
    simulationData->mData->mFoundZcEvents = tmp;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(rtM);
    tmp = false;
    simulationData->mData->mIsSolverAssertCheck = tmp;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
      (&rtM->solverInfo);
    tmp_1[0] = 0;
    tmp_0[0] = rtDW.INPUT_2_1_1[0];
    tmp_0[1] = rtDW.INPUT_2_1_1[1];
    tmp_0[2] = rtDW.INPUT_2_1_1[2];
    tmp_0[3] = rtDW.INPUT_2_1_1[3];
    tmp_1[1] = 4;
    tmp_0[4] = rtDW.INPUT_1_1_1[0];
    tmp_0[5] = rtDW.INPUT_1_1_1[1];
    tmp_0[6] = rtDW.INPUT_1_1_1[2];
    tmp_0[7] = rtDW.INPUT_1_1_1[3];
    tmp_1[2] = 8;
    tmp_0[8] = rtDW.INPUT_3_1_1[0];
    tmp_0[9] = rtDW.INPUT_3_1_1[1];
    tmp_0[10] = rtDW.INPUT_3_1_1[2];
    tmp_0[11] = rtDW.INPUT_3_1_1[3];
    tmp_1[3] = 12;
    simulationData->mData->mInputValues.mN = 12;
    simulationData->mData->mInputValues.mX = &tmp_0[0];
    simulationData->mData->mInputOffsets.mN = 4;
    simulationData->mData->mInputOffsets.mX = &tmp_1[0];
    simulator = (NeslSimulator *)rtDW.STATE_1_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method(simulator, NESL_SIM_UPDATE, simulationData,
      diagnosticManager);
    if (tmp_2 != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* End of Update for SimscapeExecutionBlock: '<S21>/STATE_1' */
  }                                    /* end MajorTimeStep */

  if (rtmIsMajorTimeStep(rtM)) {
    rt_ertODEUpdateContinuousStates(&rtM->solverInfo);

    /* Update absolute time for base rate */
    /* The "clockTick0" counts the number of times the code of this task has
     * been executed. The absolute time is the multiplication of "clockTick0"
     * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
     * overflow during the application lifespan selected.
     */
    ++rtM->Timing.clockTick0;
    rtM->Timing.t[0] = rtsiGetSolverStopTime(&rtM->solverInfo);

    {
      /* Update absolute timer for sample time: [1.0s, 0.0s] */
      /* The "clockTick1" counts the number of times the code of this task has
       * been executed. The resolution of this integer timer is 1.0, which is the step size
       * of the task. Size of "clockTick1" ensures timer will not overflow during the
       * application lifespan selected.
       */
      rtM->Timing.clockTick1++;
    }
  }                                    /* end MajorTimeStep */
}

/* Derivatives for root system: '<Root>' */
void MedicalVentilator_derivatives(void)
{
  NeslSimulationData *simulationData;
  NeslSimulator *simulator;
  NeuDiagnosticManager *diagnosticManager;
  NeuDiagnosticTree *diagnosticTree;
  XDot *_rtXdot;
  char *msg;
  real_T tmp_0[12];
  real_T time;
  int_T tmp_1[4];
  int_T is;
  boolean_T tmp;
  _rtXdot = ((XDot *) rtM->derivs);

  /* Derivatives for TransferFcn: '<S3>/Transfer Fcn' */
  _rtXdot->TransferFcn_CSTATE = 0.0;
  _rtXdot->TransferFcn_CSTATE += -10.0 * rtX.TransferFcn_CSTATE;
  _rtXdot->TransferFcn_CSTATE += rtDW.VolumetricFlowrate;

  /* Derivatives for TransferFcn: '<S3>/Transfer Fcn1' */
  _rtXdot->TransferFcn1_CSTATE = 0.0;
  _rtXdot->TransferFcn1_CSTATE += -5.0 * rtX.TransferFcn1_CSTATE;
  _rtXdot->TransferFcn1_CSTATE += rtDW.MaxValveArea;

  /* Derivatives for SimscapeExecutionBlock: '<S21>/STATE_1' */
  simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
  time = rtM->Timing.t[0];
  simulationData->mData->mTime.mN = 1;
  simulationData->mData->mTime.mX = &time;
  simulationData->mData->mContStates.mN = 190;
  simulationData->mData->mContStates.mX = &rtX.MedicalVentilatorLungsT_I[0];
  simulationData->mData->mDiscStates.mN = 12;
  simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
  simulationData->mData->mModeVector.mN = 119;
  simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes[0];
  tmp = false;
  simulationData->mData->mFoundZcEvents = tmp;
  simulationData->mData->mHadEvents = false;
  simulationData->mData->mIsMajorTimeStep = rtmIsMajorTimeStep(rtM);
  tmp = false;
  simulationData->mData->mIsSolverAssertCheck = tmp;
  simulationData->mData->mIsSolverCheckingCIC = false;
  tmp = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
  simulationData->mData->mIsComputingJacobian = tmp;
  simulationData->mData->mIsEvaluatingF0 = false;
  simulationData->mData->mIsSolverRequestingReset = false;
  simulationData->mData->mIsModeUpdateTimeStep = rtsiIsModeUpdateTimeStep
    (&rtM->solverInfo);
  tmp_1[0] = 0;
  tmp_0[0] = rtDW.INPUT_2_1_1[0];
  tmp_0[1] = rtDW.INPUT_2_1_1[1];
  tmp_0[2] = rtDW.INPUT_2_1_1[2];
  tmp_0[3] = rtDW.INPUT_2_1_1[3];
  tmp_1[1] = 4;
  tmp_0[4] = rtDW.INPUT_1_1_1[0];
  tmp_0[5] = rtDW.INPUT_1_1_1[1];
  tmp_0[6] = rtDW.INPUT_1_1_1[2];
  tmp_0[7] = rtDW.INPUT_1_1_1[3];
  tmp_1[2] = 8;
  tmp_0[8] = rtDW.INPUT_3_1_1[0];
  tmp_0[9] = rtDW.INPUT_3_1_1[1];
  tmp_0[10] = rtDW.INPUT_3_1_1[2];
  tmp_0[11] = rtDW.INPUT_3_1_1[3];
  tmp_1[3] = 12;
  simulationData->mData->mInputValues.mN = 12;
  simulationData->mData->mInputValues.mX = &tmp_0[0];
  simulationData->mData->mInputOffsets.mN = 4;
  simulationData->mData->mInputOffsets.mX = &tmp_1[0];
  simulationData->mData->mDx.mN = 190;
  simulationData->mData->mDx.mX = &_rtXdot->MedicalVentilatorLungsT_I[0];
  simulator = (NeslSimulator *)rtDW.STATE_1_Simulator;
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  is = ne_simulator_method(simulator, NESL_SIM_DERIVATIVES, simulationData,
    diagnosticManager);
  if (is != 0) {
    tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
    if (tmp) {
      msg = rtw_diagnostics_msg(diagnosticTree);
      rtmSetErrorStatus(rtM, msg);
    }
  }

  /* End of Derivatives for SimscapeExecutionBlock: '<S21>/STATE_1' */
}

/* Model initialize function */
void MedicalVentilator_initialize(void)
{
  /* Registration code */

  /* initialize real-time model */
  (void) memset((void *)rtM, 0,
                sizeof(RT_MODEL));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&rtM->solverInfo, &rtM->Timing.simTimeStep);
    rtsiSetTPtr(&rtM->solverInfo, &rtmGetTPtr(rtM));
    rtsiSetStepSizePtr(&rtM->solverInfo, &rtM->Timing.stepSize0);
    rtsiSetdXPtr(&rtM->solverInfo, &rtM->derivs);
    rtsiSetContStatesPtr(&rtM->solverInfo, (real_T **) &rtM->contStates);
    rtsiSetNumContStatesPtr(&rtM->solverInfo, &rtM->Sizes.numContStates);
    rtsiSetNumPeriodicContStatesPtr(&rtM->solverInfo,
      &rtM->Sizes.numPeriodicContStates);
    rtsiSetPeriodicContStateIndicesPtr(&rtM->solverInfo,
      &rtM->periodicContStateIndices);
    rtsiSetPeriodicContStateRangesPtr(&rtM->solverInfo,
      &rtM->periodicContStateRanges);
    rtsiSetContStateDisabledPtr(&rtM->solverInfo, (boolean_T**)
      &rtM->contStateDisabled);
    rtsiSetErrorStatusPtr(&rtM->solverInfo, (&rtmGetErrorStatus(rtM)));
    rtsiSetSolverMassMatrixIr(&rtM->solverInfo, rtMassMatrix.ir);
    rtsiSetSolverMassMatrixJc(&rtM->solverInfo, rtMassMatrix.jc);
    rtsiSetSolverMassMatrixPr(&rtM->solverInfo, rtMassMatrix.pr);
    rtsiSetRTModelPtr(&rtM->solverInfo, rtM);
  }

  rtsiSetSimTimeStep(&rtM->solverInfo, MAJOR_TIME_STEP);
  rtsiSetIsMinorTimeStepWithModeChange(&rtM->solverInfo, false);
  rtsiSetIsContModeFrozen(&rtM->solverInfo, false);
  rtM->intgData.x0 = rtM->odeX0;
  rtM->intgData.f0 = rtM->odeF0;
  rtM->intgData.x1start = rtM->odeX1START;
  rtM->intgData.f1 = rtM->odeF1;
  rtM->intgData.Delta = rtM->odeDELTA;
  rtM->intgData.E = rtM->odeE;
  rtM->intgData.fac = rtM->odeFAC;

  /* initialize */
  {
    int_T i;
    real_T *f = rtM->intgData.fac;
    for (i = 0; i < (int_T)(sizeof(rtM->odeFAC)/sizeof(real_T)); i++) {
      f[i] = 1.5e-8;
    }
  }

  rtM->intgData.DFDX = rtM->odeDFDX;
  rtM->intgData.W = rtM->odeW;
  rtM->intgData.pivots = rtM->odePIVOTS;
  rtM->intgData.xtmp = rtM->odeXTMP;
  rtM->intgData.ztmp = rtM->odeZTMP;
  rtM->intgData.M = rtM->odeMASSMATRIX_M;
  rtM->intgData.M1 = rtM->odeMASSMATRIX_M1;
  rtM->intgData.xdot = rtM->odeXDOT;
  rtM->intgData.Edot = rtM->odeEDOT;
  rtM->intgData.fminusMxdot = rtM->odeFMXDOT;
  rtM->intgData.isFirstStep = true;
  rtsiSetSolverExtrapolationOrder(&rtM->solverInfo, 4);
  rtsiSetSolverNumberNewtonIterations(&rtM->solverInfo, 1);
  rtM->contStates = ((X *) &rtX);
  rtM->contStateDisabled = ((XDis *) &rtXDis);
  rtM->Timing.tStart = (0.0);
  rtM->massMatrixType = ((ssMatrixType)3);
  rtM->massMatrixNzMax = (31);
  rtM->massMatrixIr = (rtMassMatrix.ir);
  rtM->massMatrixJc = (rtMassMatrix.jc);
  rtM->massMatrixPr = (rtMassMatrix.pr);
  rtsiSetSolverMassMatrixType(&rtM->solverInfo, (ssMatrixType)3);
  rtsiSetSolverMassMatrixNzMax(&rtM->solverInfo, 31);
  rtsiSetSolverData(&rtM->solverInfo, (void *)&rtM->intgData);
  rtsiSetSolverName(&rtM->solverInfo,"ode14x");
  rtmSetTPtr(rtM, &rtM->Timing.tArray[0]);
  rtM->Timing.stepSize0 = 1.0;

  /* states (continuous) */
  {
    (void) memset((void *)&rtX, 0,
                  sizeof(X));
  }

  /* disabled states */
  {
    (void) memset((void *)&rtXDis, 0,
                  sizeof(XDis));
  }

  /* global mass matrix */
  {
    int_T *ir = rtMassMatrix.ir;
    int_T *jc = rtMassMatrix.jc;
    real_T *pr = rtMassMatrix.pr;
    (void) memset((void *)ir, 0,
                  31*sizeof(int_T));
    (void) memset((void *)jc, 0,
                  (192+1)*sizeof(int_T));
    (void) memset((void *)pr, 0,
                  31*sizeof(real_T));
  }

  /* states (dwork) */
  (void) memset((void *)&rtDW, 0,
                sizeof(DW));

  /* Root-level init GlobalMassMatrixPr offset */
  {
    rtDW.STATE_1_MASS_MATRIX_PR = 2;   /* '<S21>/STATE_1' */
  }

  {
    NeModelParameters modelParameters;
    NeModelParameters modelParameters_0;
    NeslRtpManager *manager;
    NeslSimulationData *tmp;
    NeslSimulator *simulator;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    char *msg;
    real_T tmp_0;
    int32_T Ns;
    boolean_T tmp_1;
    boolean_T zcDisabled;

    /* Start for DiscretePulseGenerator: '<S3>/Pulse Generator' */
    rtDW.clockTickCounter = 0;

    /* Start for SimscapeRtp: '<S6>/RTP_1' */
    manager = nesl_lease_rtp_manager("MedicalVentilator/Solver Configuration_1",
      0);
    zcDisabled = pointer_is_null(manager);
    if (zcDisabled) {
      MedicalVentilator_1a62e0cc_1_gateway();
      manager = nesl_lease_rtp_manager(
        "MedicalVentilator/Solver Configuration_1", 0);
    }

    rtDW.RTP_1_RtpManager = (void *)manager;
    rtDW.RTP_1_SetParametersNeeded = true;

    /* End of Start for SimscapeRtp: '<S6>/RTP_1' */

    /* Start for SimscapeExecutionBlock: '<S21>/STATE_1' */
    simulator = nesl_lease_simulator("MedicalVentilator/Solver Configuration_1",
      0, 0);
    rtDW.STATE_1_Simulator = (void *)simulator;
    zcDisabled = pointer_is_null(rtDW.STATE_1_Simulator);
    if (zcDisabled) {
      MedicalVentilator_1a62e0cc_1_gateway();
      simulator = nesl_lease_simulator(
        "MedicalVentilator/Solver Configuration_1", 0, 0);
      rtDW.STATE_1_Simulator = (void *)simulator;
    }

    tmp = nesl_create_simulation_data();
    rtDW.STATE_1_SimData = (void *)tmp;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.STATE_1_DiagMgr = (void *)diagnosticManager;
    modelParameters.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters.mSolverAbsTol = 0.001;
    modelParameters.mSolverRelTol = 0.001;
    modelParameters.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters.mStartTime = 0.0;
    modelParameters.mLoadInitialState = false;
    modelParameters.mUseSimState = false;
    modelParameters.mLinTrimCompile = false;
    modelParameters.mLoggingMode = SSC_LOGGING_ON;
    modelParameters.mRTWModifiedTimeStamp = 6.43866194E+8;
    modelParameters.mUseModelRefSolver = false;
    modelParameters.mTargetFPGAHIL = false;
    tmp_0 = 0.001;
    modelParameters.mSolverTolerance = tmp_0;
    tmp_0 = 1.0;
    modelParameters.mFixedStepSize = tmp_0;
    zcDisabled = false;
    modelParameters.mVariableStepSolver = zcDisabled;
    zcDisabled = false;
    modelParameters.mIsUsingODEN = zcDisabled;
    modelParameters.mZcDisabled = true;
    simulator = (NeslSimulator *)rtDW.STATE_1_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    Ns = nesl_initialize_simulator(simulator, &modelParameters,
      diagnosticManager);
    if (Ns != 0) {
      zcDisabled = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (zcDisabled) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S21>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S21>/OUTPUT_1_0' */
    simulator = nesl_lease_simulator("MedicalVentilator/Solver Configuration_1",
      1, 0);
    rtDW.OUTPUT_1_0_Simulator = (void *)simulator;
    zcDisabled = pointer_is_null(rtDW.OUTPUT_1_0_Simulator);
    if (zcDisabled) {
      MedicalVentilator_1a62e0cc_1_gateway();
      simulator = nesl_lease_simulator(
        "MedicalVentilator/Solver Configuration_1", 1, 0);
      rtDW.OUTPUT_1_0_Simulator = (void *)simulator;
    }

    tmp = nesl_create_simulation_data();
    rtDW.OUTPUT_1_0_SimData = (void *)tmp;
    diagnosticManager = rtw_create_diagnostics();
    rtDW.OUTPUT_1_0_DiagMgr = (void *)diagnosticManager;
    modelParameters_0.mSolverType = NE_SOLVER_TYPE_DAE;
    modelParameters_0.mSolverAbsTol = 0.001;
    modelParameters_0.mSolverRelTol = 0.001;
    modelParameters_0.mSolverModifyAbsTol = NE_MODIFY_ABS_TOL_NO;
    modelParameters_0.mStartTime = 0.0;
    modelParameters_0.mLoadInitialState = false;
    modelParameters_0.mUseSimState = false;
    modelParameters_0.mLinTrimCompile = false;
    modelParameters_0.mLoggingMode = SSC_LOGGING_ON;
    modelParameters_0.mRTWModifiedTimeStamp = 6.43866194E+8;
    modelParameters_0.mUseModelRefSolver = false;
    modelParameters_0.mTargetFPGAHIL = false;
    tmp_0 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_0;
    tmp_0 = 1.0;
    modelParameters_0.mFixedStepSize = tmp_0;
    zcDisabled = false;
    modelParameters_0.mVariableStepSolver = zcDisabled;
    zcDisabled = false;
    modelParameters_0.mIsUsingODEN = zcDisabled;
    modelParameters_0.mZcDisabled = true;
    simulator = (NeslSimulator *)rtDW.OUTPUT_1_0_Simulator;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_1_0_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    Ns = nesl_initialize_simulator(simulator, &modelParameters_0,
      diagnosticManager);
    if (Ns != 0) {
      zcDisabled = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (zcDisabled) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S21>/OUTPUT_1_0' */

    /* InitializeConditions for TransferFcn: '<S3>/Transfer Fcn' */
    rtX.TransferFcn_CSTATE = 0.0;

    /* InitializeConditions for TransferFcn: '<S3>/Transfer Fcn1' */
    rtX.TransferFcn1_CSTATE = 0.0;

    /* InitializeConditions for SimscapeExecutionBlock: '<S21>/STATE_1' */
    zcDisabled = false;
    tmp_1 = false;
    if (zcDisabled || tmp_1) {
      Ns = strcmp(rtsiGetSolverName(&rtM->solverInfo), "daessc");
      zcDisabled = (Ns == 0);
      Ns = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode14x");
      zcDisabled = (Ns == 0) | zcDisabled;
      Ns = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode15s");
      zcDisabled = (Ns == 0) | zcDisabled;
      Ns = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode1be");
      zcDisabled = (Ns == 0) | zcDisabled;
      Ns = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode23t");
      zcDisabled = (Ns == 0) | zcDisabled;
      Ns = strcmp(rtsiGetSolverName(&rtM->solverInfo), "odeN");
      zcDisabled = (Ns == 0) | zcDisabled;
      if (!zcDisabled) {
        rtmSetErrorStatus(rtM,
                          "Detected inconsistent solvers in the model reference hierarchy. Model built with ode14x requires one of {daessc, ode14x, ode15s, ode1be, ode23t, odeN} solvers to run. Use one of the required solvers in the top model.");
      }
    }

    /* End of InitializeConditions for SimscapeExecutionBlock: '<S21>/STATE_1' */

    /* Root-level InitSystemMatrices */
    {
      static int_T modelMassMatrixIr[31] = { 0, 1, 14, 15, 2, 18, 3, 4, 5, 5, 6,
        7, 8, 9, 8, 10, 11, 11, 12, 13, 14, 16, 17, 18, 19, 20, 21, 21, 22, 23,
        24 };

      static int_T modelMassMatrixJc[193] = { 0, 1, 2, 4, 5, 6, 7, 8, 9, 11, 12,
        14, 15, 16, 17, 19, 20, 21, 22, 23, 25, 26, 27, 29, 30, 31, 31, 31, 31,
        31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
        31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
        31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
        31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
        31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
        31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
        31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
        31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
        31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31, 31,
        31, 31 };

      static real_T modelMassMatrixPr[31] = { 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
        1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0,
        1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0 };

      (void) memcpy(rtMassMatrix.ir, modelMassMatrixIr,
                    31*sizeof(int_T));
      (void) memcpy(rtMassMatrix.jc, modelMassMatrixJc,
                    193*sizeof(int_T));
      (void) memcpy(rtMassMatrix.pr, modelMassMatrixPr,
                    31*sizeof(real_T));
    }
  }
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
