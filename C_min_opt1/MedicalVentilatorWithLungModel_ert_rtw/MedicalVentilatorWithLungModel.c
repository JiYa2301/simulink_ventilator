/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: MedicalVentilatorWithLungModel.c
 *
 * Code generated for Simulink model 'MedicalVentilatorWithLungModel'.
 *
 * Model version                  : 11.2
 * Simulink Coder version         : 24.1 (R2024a) 19-Nov-2023
 * C/C++ source code generated on : Tue Jul  2 14:19:13 2024
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. RAM efficiency
 * Validation result: Not run
 */

#include "MedicalVentilatorWithLungModel.h"
#include <string.h>
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
extern void MedicalVentilatorWithLungModel_derivatives(void);

/* ForcingFunction for root system: '<Root>' */
void MedicalVentilatorWithLungModel_forcingfunction(void)
{
  NeslSimulationData *simulationData;
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
  simulationData->mData->mContStates.mX = &rtX.MedicalVentilatorWithLungModelL[0];
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
  simulationData->mData->mDx.mX = &_rtXdot->MedicalVentilatorWithLungModelL[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  is = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
    NESL_SIM_FORCINGFUNCTION, simulationData, diagnosticManager);
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
void MedicalVentilatorWithLungModel_massmatrix(void)
{
  NeslSimulationData *simulationData;
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
  simulationData->mData->mContStates.mX = &rtX.MedicalVentilatorWithLungModelL[0];
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
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  tmp_4 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
    NESL_SIM_MASSMATRIX, simulationData, diagnosticManager);
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
  MedicalVentilatorWithLungModel_massmatrix();

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
  MedicalVentilatorWithLungModel_forcingfunction();

  /* Refresh global mass matrix */
  MedicalVentilatorWithLungModel_massmatrix();

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
    MedicalVentilatorWithLungModel_step();
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
  MedicalVentilatorWithLungModel_derivatives();

  /* f0 = f(t,y) */
  rtsiSetdX(si, f0);
  MedicalVentilatorWithLungModel_forcingfunction();

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
      MedicalVentilatorWithLungModel_step();
      MedicalVentilatorWithLungModel_forcingfunction();
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
        MedicalVentilatorWithLungModel_step();
        MedicalVentilatorWithLungModel_forcingfunction();
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
        MedicalVentilatorWithLungModel_step();
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
void MedicalVentilatorWithLungModel_step(void)
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
    NeslSimulationData *simulationData;
    NeuDiagnosticManager *diag;
    NeuDiagnosticTree *diagTree;
    NeuDiagnosticTree *diagnosticTree;
    NeuDiagnosticTree *diagnosticTree_0;
    char *msg;
    char *msg_0;
    char *msg_1;
    real_T tmp_4[333];
    real_T tmp[12];
    real_T tmp_1[12];
    real_T rtb_OUTPUT_1_0[3];
    real_T TransferFcn;
    real_T TransferFcn1;
    real_T rtb_PulseGenerator;
    real_T time;
    real_T time_0;
    real_T time_1;
    real_T time_2;
    int_T tmp_5[5];
    int_T tmp_2[4];
    int_T iy;
    boolean_T ok;
    boolean_T tmp_0;
    boolean_T tmp_3;

    /* TransferFcn: '<S3>/Transfer Fcn' */
    TransferFcn = 10.0 * rtX.TransferFcn_CSTATE;

    /* TransferFcn: '<S3>/Transfer Fcn1' */
    TransferFcn1 = 5.0 * rtX.TransferFcn1_CSTATE;
    if (rtmIsMajorTimeStep(rtM)) {
      /* DiscretePulseGenerator: '<S3>/Pulse Generator' */
      rtb_PulseGenerator = ((rtDW.clockTickCounter < 1) &&
                            (rtDW.clockTickCounter >= 0));
      if (rtDW.clockTickCounter >= 3) {
        rtDW.clockTickCounter = 0;
      } else {
        rtDW.clockTickCounter++;
      }

      /* End of DiscretePulseGenerator: '<S3>/Pulse Generator' */

      /* Gain: '<S3>/Max Valve Area' incorporates:
       *  Constant: '<S3>/Constant'
       *  Sum: '<S3>/Sum'
       */
      rtDW.MaxValveArea = (1.0 - rtb_PulseGenerator) * 7.8539816339744827E-5;

      /* Gain: '<S3>/Volumetric Flow rate' */
      rtDW.VolumetricFlowrate = 0.5 * rtb_PulseGenerator;

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
        diag = rtw_create_diagnostics();
        diagTree = neu_diagnostic_manager_get_initial_tree(diag);
        expl_temp.mRealParameters.mN = 12;
        expl_temp.mRealParameters.mX = &tmp[0];
        expl_temp.mLogicalParameters.mN = 0;
        expl_temp.mLogicalParameters.mX = NULL;
        expl_temp.mIntegerParameters.mN = 0;
        expl_temp.mIntegerParameters.mX = NULL;
        expl_temp.mIndexParameters.mN = 0;
        expl_temp.mIndexParameters.mX = NULL;
        ok = nesl_rtp_manager_set_rtps((NeslRtpManager *)rtDW.RTP_1_RtpManager,
          rtM->Timing.t[0], expl_temp, diag);
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
    rtDW.INPUT_2_1_1[0] = TransferFcn1;
    rtDW.INPUT_2_1_1[1] = 0.0;
    rtDW.INPUT_2_1_1[2] = 0.0;
    rtDW.INPUT_2_1_1[3] = 0.0;

    /* SimscapeInputBlock: '<S21>/INPUT_1_1_1' */
    rtDW.INPUT_1_1_1[0] = TransferFcn;
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

    /* SimscapeExecutionBlock: '<S21>/STATE_1' incorporates:
     *  SimscapeExecutionBlock: '<S21>/OUTPUT_1_0'
     */
    simulationData = (NeslSimulationData *)rtDW.STATE_1_SimData;
    rtb_PulseGenerator = rtM->Timing.t[0];
    time = rtb_PulseGenerator;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time;
    simulationData->mData->mContStates.mN = 190;
    simulationData->mData->mContStates.mX =
      &rtX.MedicalVentilatorWithLungModelL[0];
    simulationData->mData->mDiscStates.mN = 12;
    simulationData->mData->mDiscStates.mX = &rtDW.STATE_1_Discrete[0];
    simulationData->mData->mModeVector.mN = 119;
    simulationData->mData->mModeVector.mX = &rtDW.STATE_1_Modes[0];
    ok = false;
    simulationData->mData->mFoundZcEvents = ok;
    simulationData->mData->mHadEvents = false;
    ok = rtmIsMajorTimeStep(rtM);
    simulationData->mData->mIsMajorTimeStep = ok;
    tmp_0 = false;
    simulationData->mData->mIsSolverAssertCheck = tmp_0;
    simulationData->mData->mIsSolverCheckingCIC = false;
    tmp_0 = rtsiIsSolverComputingJacobian(&rtM->solverInfo);
    simulationData->mData->mIsComputingJacobian = tmp_0;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    tmp_0 = rtsiIsModeUpdateTimeStep(&rtM->solverInfo);
    simulationData->mData->mIsModeUpdateTimeStep = tmp_0;
    tmp_2[0] = 0;
    tmp_1[0] = rtDW.INPUT_2_1_1[0];
    tmp_1[1] = rtDW.INPUT_2_1_1[1];
    tmp_1[2] = rtDW.INPUT_2_1_1[2];
    tmp_1[3] = rtDW.INPUT_2_1_1[3];
    tmp_2[1] = 4;
    tmp_1[4] = rtDW.INPUT_1_1_1[0];
    tmp_1[5] = rtDW.INPUT_1_1_1[1];
    tmp_1[6] = rtDW.INPUT_1_1_1[2];
    tmp_1[7] = rtDW.INPUT_1_1_1[3];
    tmp_2[2] = 8;
    tmp_1[8] = rtDW.INPUT_3_1_1[0];
    tmp_1[9] = rtDW.INPUT_3_1_1[1];
    tmp_1[10] = rtDW.INPUT_3_1_1[2];
    tmp_1[11] = rtDW.INPUT_3_1_1[3];
    tmp_2[3] = 12;
    simulationData->mData->mInputValues.mN = 12;
    simulationData->mData->mInputValues.mX = &tmp_1[0];
    simulationData->mData->mInputOffsets.mN = 4;
    simulationData->mData->mInputOffsets.mX = &tmp_2[0];
    simulationData->mData->mOutputs.mN = 321;
    simulationData->mData->mOutputs.mX = &rtDW.STATE_1[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    TransferFcn1 = rtM->Timing.t[0];
    time_0 = TransferFcn1;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_0;
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mHadEvents = false;
    diag = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diag);
    iy = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diag);
    if (iy != 0) {
      tmp_3 = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp_3) {
        msg_0 = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg_0);
      }
    }

    /* End of SimscapeExecutionBlock: '<S21>/STATE_1' */

    /* SimscapeExecutionBlock: '<S21>/OUTPUT_1_0' */
    simulationData = (NeslSimulationData *)rtDW.OUTPUT_1_0_SimData;
    time_1 = rtb_PulseGenerator;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_1;
    simulationData->mData->mContStates.mN = 0;
    simulationData->mData->mContStates.mX = NULL;
    simulationData->mData->mDiscStates.mN = 0;
    simulationData->mData->mDiscStates.mX = &rtDW.OUTPUT_1_0_Discrete;
    simulationData->mData->mModeVector.mN = 0;
    simulationData->mData->mModeVector.mX = &rtDW.OUTPUT_1_0_Modes;
    tmp_3 = false;
    simulationData->mData->mFoundZcEvents = tmp_3;
    simulationData->mData->mHadEvents = false;
    simulationData->mData->mIsMajorTimeStep = ok;
    ok = false;
    simulationData->mData->mIsSolverAssertCheck = ok;
    simulationData->mData->mIsSolverCheckingCIC = false;
    simulationData->mData->mIsComputingJacobian = false;
    simulationData->mData->mIsEvaluatingF0 = false;
    simulationData->mData->mIsSolverRequestingReset = false;
    simulationData->mData->mIsModeUpdateTimeStep = tmp_0;
    tmp_5[0] = 0;
    tmp_4[0] = rtDW.INPUT_2_1_1[0];
    tmp_4[1] = rtDW.INPUT_2_1_1[1];
    tmp_4[2] = rtDW.INPUT_2_1_1[2];
    tmp_4[3] = rtDW.INPUT_2_1_1[3];
    tmp_5[1] = 4;
    tmp_4[4] = rtDW.INPUT_1_1_1[0];
    tmp_4[5] = rtDW.INPUT_1_1_1[1];
    tmp_4[6] = rtDW.INPUT_1_1_1[2];
    tmp_4[7] = rtDW.INPUT_1_1_1[3];
    tmp_5[2] = 8;
    tmp_4[8] = rtDW.INPUT_3_1_1[0];
    tmp_4[9] = rtDW.INPUT_3_1_1[1];
    tmp_4[10] = rtDW.INPUT_3_1_1[2];
    tmp_4[11] = rtDW.INPUT_3_1_1[3];
    tmp_5[3] = 12;
    memcpy(&tmp_4[12], &rtDW.STATE_1[0], 321U * sizeof(real_T));
    tmp_5[4] = 333;
    simulationData->mData->mInputValues.mN = 333;
    simulationData->mData->mInputValues.mX = &tmp_4[0];
    simulationData->mData->mInputOffsets.mN = 5;
    simulationData->mData->mInputOffsets.mX = &tmp_5[0];
    simulationData->mData->mOutputs.mN = 3;
    simulationData->mData->mOutputs.mX = &rtb_OUTPUT_1_0[0];
    simulationData->mData->mTolerances.mN = 0;
    simulationData->mData->mTolerances.mX = NULL;
    simulationData->mData->mCstateHasChanged = false;
    simulationData->mData->mDstateHasChanged = false;
    time_2 = TransferFcn1;
    simulationData->mData->mTime.mN = 1;
    simulationData->mData->mTime.mX = &time_2;
    simulationData->mData->mSampleHits.mN = 0;
    simulationData->mData->mSampleHits.mX = NULL;
    simulationData->mData->mIsFundamentalSampleHit = false;
    simulationData->mData->mHadEvents = false;
    diag = (NeuDiagnosticManager *)rtDW.OUTPUT_1_0_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diag);
    iy = ne_simulator_method((NeslSimulator *)rtDW.OUTPUT_1_0_Simulator,
      NESL_SIM_OUTPUTS, simulationData, diag);
    if (iy != 0) {
      ok = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (ok) {
        msg_1 = rtw_diagnostics_msg(diagnosticTree_0);
        rtmSetErrorStatus(rtM, msg_1);
      }
    }
  }

  if (rtmIsMajorTimeStep(rtM)) {
    NeslSimulationData *simulationData;
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
    simulationData->mData->mContStates.mX =
      &rtX.MedicalVentilatorWithLungModelL[0];
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
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    tmp_2 = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
      NESL_SIM_UPDATE, simulationData, diagnosticManager);
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
void MedicalVentilatorWithLungModel_derivatives(void)
{
  NeslSimulationData *simulationData;
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
  simulationData->mData->mContStates.mX = &rtX.MedicalVentilatorWithLungModelL[0];
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
  simulationData->mData->mDx.mX = &_rtXdot->MedicalVentilatorWithLungModelL[0];
  diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
  diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
  is = ne_simulator_method((NeslSimulator *)rtDW.STATE_1_Simulator,
    NESL_SIM_DERIVATIVES, simulationData, diagnosticManager);
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
void MedicalVentilatorWithLungModel_initialize(void)
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
    NeslRtpManager *manager_0;
    NeslSimulationData *tmp_1;
    NeslSimulator *tmp_0;
    NeuDiagnosticManager *diagnosticManager;
    NeuDiagnosticTree *diagnosticTree;
    NeuDiagnosticTree *diagnosticTree_0;
    char *msg;
    char *msg_0;
    real_T tmp_2;
    int32_T Ns;
    int_T tmp_4;
    int_T tmp_5;
    int_T tmp_6;
    int_T tmp_7;
    int_T tmp_8;
    boolean_T tmp;
    boolean_T tmp_3;

    /* Start for DiscretePulseGenerator: '<S3>/Pulse Generator' */
    rtDW.clockTickCounter = 0;

    /* Start for SimscapeRtp: '<S6>/RTP_1' */
    manager_0 = nesl_lease_rtp_manager(
      "MedicalVentilatorWithLungModel/Solver Configuration_1", 0);
    manager = manager_0;
    tmp = pointer_is_null(manager_0);
    if (tmp) {
      MedicalVentilatorWithLungModel_1a62e0cc_1_gateway();
      manager = nesl_lease_rtp_manager(
        "MedicalVentilatorWithLungModel/Solver Configuration_1", 0);
    }

    rtDW.RTP_1_RtpManager = (void *)manager;
    rtDW.RTP_1_SetParametersNeeded = true;

    /* End of Start for SimscapeRtp: '<S6>/RTP_1' */

    /* Start for SimscapeExecutionBlock: '<S21>/STATE_1' */
    tmp_0 = nesl_lease_simulator(
      "MedicalVentilatorWithLungModel/Solver Configuration_1", 0, 0);
    rtDW.STATE_1_Simulator = (void *)tmp_0;
    tmp = pointer_is_null(rtDW.STATE_1_Simulator);
    if (tmp) {
      MedicalVentilatorWithLungModel_1a62e0cc_1_gateway();
      tmp_0 = nesl_lease_simulator(
        "MedicalVentilatorWithLungModel/Solver Configuration_1", 0, 0);
      rtDW.STATE_1_Simulator = (void *)tmp_0;
    }

    tmp_1 = nesl_create_simulation_data();
    rtDW.STATE_1_SimData = (void *)tmp_1;
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
    modelParameters.mRTWModifiedTimeStamp = 6.41855023E+8;
    modelParameters.mUseModelRefSolver = false;
    modelParameters.mTargetFPGAHIL = false;
    tmp_2 = 0.001;
    modelParameters.mSolverTolerance = tmp_2;
    tmp_2 = 1.0;
    modelParameters.mFixedStepSize = tmp_2;
    tmp = false;
    modelParameters.mVariableStepSolver = tmp;
    tmp = false;
    modelParameters.mIsUsingODEN = tmp;
    modelParameters.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.STATE_1_DiagMgr;
    diagnosticTree = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    Ns = nesl_initialize_simulator((NeslSimulator *)rtDW.STATE_1_Simulator,
      &modelParameters, diagnosticManager);
    if (Ns != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp) {
        msg = rtw_diagnostics_msg(diagnosticTree);
        rtmSetErrorStatus(rtM, msg);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S21>/STATE_1' */

    /* Start for SimscapeExecutionBlock: '<S21>/OUTPUT_1_0' */
    tmp_0 = nesl_lease_simulator(
      "MedicalVentilatorWithLungModel/Solver Configuration_1", 1, 0);
    rtDW.OUTPUT_1_0_Simulator = (void *)tmp_0;
    tmp = pointer_is_null(rtDW.OUTPUT_1_0_Simulator);
    if (tmp) {
      MedicalVentilatorWithLungModel_1a62e0cc_1_gateway();
      tmp_0 = nesl_lease_simulator(
        "MedicalVentilatorWithLungModel/Solver Configuration_1", 1, 0);
      rtDW.OUTPUT_1_0_Simulator = (void *)tmp_0;
    }

    tmp_1 = nesl_create_simulation_data();
    rtDW.OUTPUT_1_0_SimData = (void *)tmp_1;
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
    modelParameters_0.mRTWModifiedTimeStamp = 6.41855023E+8;
    modelParameters_0.mUseModelRefSolver = false;
    modelParameters_0.mTargetFPGAHIL = false;
    tmp_2 = 0.001;
    modelParameters_0.mSolverTolerance = tmp_2;
    tmp_2 = 1.0;
    modelParameters_0.mFixedStepSize = tmp_2;
    tmp = false;
    modelParameters_0.mVariableStepSolver = tmp;
    tmp = false;
    modelParameters_0.mIsUsingODEN = tmp;
    modelParameters_0.mZcDisabled = true;
    diagnosticManager = (NeuDiagnosticManager *)rtDW.OUTPUT_1_0_DiagMgr;
    diagnosticTree_0 = neu_diagnostic_manager_get_initial_tree(diagnosticManager);
    Ns = nesl_initialize_simulator((NeslSimulator *)rtDW.OUTPUT_1_0_Simulator,
      &modelParameters_0, diagnosticManager);
    if (Ns != 0) {
      tmp = error_buffer_is_empty(rtmGetErrorStatus(rtM));
      if (tmp) {
        msg_0 = rtw_diagnostics_msg(diagnosticTree_0);
        rtmSetErrorStatus(rtM, msg_0);
      }
    }

    /* End of Start for SimscapeExecutionBlock: '<S21>/OUTPUT_1_0' */

    /* InitializeConditions for TransferFcn: '<S3>/Transfer Fcn' */
    rtX.TransferFcn_CSTATE = 0.0;

    /* InitializeConditions for TransferFcn: '<S3>/Transfer Fcn1' */
    rtX.TransferFcn1_CSTATE = 0.0;

    /* InitializeConditions for SimscapeExecutionBlock: '<S21>/STATE_1' */
    tmp = false;
    tmp_3 = false;
    if (tmp || tmp_3) {
      Ns = strcmp(rtsiGetSolverName(&rtM->solverInfo), "daessc");
      tmp_4 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode14x");
      tmp_5 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode15s");
      tmp_6 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode1be");
      tmp_7 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "ode23t");
      tmp_8 = strcmp(rtsiGetSolverName(&rtM->solverInfo), "odeN");
      if ((boolean_T)((Ns != 0) & (tmp_4 != 0) & (tmp_5 != 0) & (tmp_6 != 0) &
                      (tmp_7 != 0) & (tmp_8 != 0))) {
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
