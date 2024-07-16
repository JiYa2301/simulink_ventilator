/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'MedicalVentilatorWithLungModel/Solver Configuration'.
 */

#include "ne_ds.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_sys_struct.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_log.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_externals.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T MedicalVentilatorWithLungModel_1a62e0cc_1_ds_log(const NeDynamicSystem
  *LC, const NeDynamicSystemInput *t372, NeDsMethodOutput *out)
{
  ETTSf3049b48 t10;
  ETTSf3049b48 t11;
  real_T Expiratory_Tube_F[8];
  real_T Inspiratory_Tube_F[8];
  real_T t117[8];
  real_T t126[8];
  real_T t132[8];
  real_T t136[8];
  real_T t140[8];
  real_T t146[1];
  real_T t147[1];
  real_T t88[1];
  real_T Check_Valve_1_Delay_A;
  real_T Check_Valve_1_Pressure_Temperature_Sensor_MA_P;
  real_T Check_Valve_1_Valve_mdot_choked;
  real_T Check_Valve_2_Pressure_Temperature_Sensor_MA_P;
  real_T Check_Valve_2_Pressure_Temperature_Sensor_MA_T;
  real_T Control_Signal_AR;
  real_T Control_Signal_Vdot;
  real_T Expiratory_Valve_Mach_R;
  real_T Expiratory_Valve_mdot_choked;
  real_T Trachea_Mach_A;
  real_T intrm_sf_mf_592;
  real_T t166;
  real_T t171;
  real_T t193;
  real_T t195;
  real_T t198;
  real_T t199;
  real_T t200;
  real_T t201;
  real_T t202;
  real_T t203;
  real_T t204;
  real_T t207;
  real_T t208;
  real_T t210;
  real_T t211;
  real_T t214;
  real_T t221;
  real_T t222;
  real_T t223;
  real_T t224;
  real_T t225;
  real_T t226;
  real_T t227;
  real_T t228;
  real_T t230;
  real_T t232;
  real_T t233;
  real_T t234;
  real_T t236;
  real_T t238;
  real_T t239;
  real_T t240;
  real_T t245;
  real_T t247;
  real_T t250;
  real_T t251;
  real_T t252;
  real_T t254;
  real_T t311;
  real_T t328;
  real_T t357;
  real_T t360;
  real_T t362;
  real_T t371;
  size_t t14[1];
  size_t t15[1];
  size_t t160;
  Check_Valve_1_Delay_A = t372->mX.mX[1UL] + t372->mX.mX[31UL];
  Check_Valve_1_Pressure_Temperature_Sensor_MA_P = -t372->mX.mX[2UL] +
    t372->mX.mX[27UL];
  out->mLOG.mX[27UL] = t372->mX.mX[26UL] - t372->mX.mX[29UL];
  if (t372->mX.mX[1UL] * 0.0001 <= 5.0E-11) {
    t193 = 5.0E-11;
  } else if (t372->mX.mX[1UL] * 0.0001 >= 7.1078533787469073E-5) {
    t193 = 7.1078533787469073E-5;
  } else {
    t193 = t372->mX.mX[1UL] * 0.0001;
  }

  if (t372->mX.mX[35UL] <= 0.0) {
    Check_Valve_1_Valve_mdot_choked = 0.0;
  } else {
    Check_Valve_1_Valve_mdot_choked = t372->mX.mX[35UL] >= 1.0 ? 1.0 :
      t372->mX.mX[35UL];
  }

  Check_Valve_2_Pressure_Temperature_Sensor_MA_P = (1.0 -
    Check_Valve_1_Valve_mdot_choked) * 287.047 + Check_Valve_1_Valve_mdot_choked
    * 461.523;
  if (t372->mX.mX[33UL] <= 216.59999999999997) {
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T = 216.59999999999997;
  } else {
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T = t372->mX.mX[33UL] >= 623.15
      ? 623.15 : t372->mX.mX[33UL];
  }

  Control_Signal_AR = Check_Valve_2_Pressure_Temperature_Sensor_MA_T
    * Check_Valve_2_Pressure_Temperature_Sensor_MA_T;
  Check_Valve_2_Pressure_Temperature_Sensor_MA_T = ((1026.6477992877929 +
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T * -0.17751557357783998) +
    Control_Signal_AR * 0.00036658178515919438) * (1.0 -
    Check_Valve_1_Valve_mdot_choked) + ((1479.6504774710256 +
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T * 1.2002114337051653) +
    Control_Signal_AR * -0.00038614513167858997) *
    Check_Valve_1_Valve_mdot_choked;
  Control_Signal_Vdot = Check_Valve_2_Pressure_Temperature_Sensor_MA_T
    - Check_Valve_2_Pressure_Temperature_Sensor_MA_P;
  Check_Valve_1_Valve_mdot_choked = pmf_sqrt(fabs(t372->mX.mX[34UL] *
    t372->mX.mX[34UL] * (Check_Valve_2_Pressure_Temperature_Sensor_MA_T /
    (Control_Signal_Vdot == 0.0 ? 1.0E-16 : Control_Signal_Vdot)) /
    (Check_Valve_2_Pressure_Temperature_Sensor_MA_P == 0.0 ? 1.0E-16 :
     Check_Valve_2_Pressure_Temperature_Sensor_MA_P) / (t372->mX.mX[33UL] == 0.0
    ? 1.0E-16 : t372->mX.mX[33UL]))) * t193 * 0.8;
  if (t372->mX.mX[32UL] >= 0.0) {
    out->mLOG.mX[50UL] = t372->mX.mX[32UL] / (Check_Valve_1_Valve_mdot_choked ==
      0.0 ? 1.0E-16 : Check_Valve_1_Valve_mdot_choked) * 1.0E-5;
  } else {
    out->mLOG.mX[50UL] = -t372->mX.mX[32UL] / (Check_Valve_1_Valve_mdot_choked ==
      0.0 ? 1.0E-16 : Check_Valve_1_Valve_mdot_choked) * 1.0E-5;
  }

  Check_Valve_1_Valve_mdot_choked = t372->mX.mX[3UL] + t372->mX.mX[46UL];
  Check_Valve_2_Pressure_Temperature_Sensor_MA_P = -t372->mX.mX[44UL] +
    t372->mX.mX[2UL];
  out->mLOG.mX[87UL] = t372->mX.mX[41UL] - t372->mX.mX[43UL];
  if (t372->mX.mX[3UL] * 0.0001 <= 5.0E-11) {
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T = 5.0E-11;
  } else if (t372->mX.mX[3UL] * 0.0001 >= 7.1078533787469073E-5) {
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T = 7.1078533787469073E-5;
  } else {
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T = t372->mX.mX[3UL] * 0.0001;
  }

  if (t372->mX.mX[50UL] <= 0.0) {
    Control_Signal_AR = 0.0;
  } else {
    Control_Signal_AR = t372->mX.mX[50UL] >= 1.0 ? 1.0 : t372->mX.mX[50UL];
  }

  Control_Signal_Vdot = (1.0 - Control_Signal_AR) * 287.047 + Control_Signal_AR *
    461.523;
  if (t372->mX.mX[48UL] <= 216.59999999999997) {
    t195 = 216.59999999999997;
  } else {
    t195 = t372->mX.mX[48UL] >= 623.15 ? 623.15 : t372->mX.mX[48UL];
  }

  t171 = t195 * t195;
  t193 = ((1026.6477992877929 + t195 * -0.17751557357783998) + t171 *
          0.00036658178515919438) * (1.0 - Control_Signal_AR) +
    ((1479.6504774710256 + t195 * 1.2002114337051653) + t171 *
     -0.00038614513167858997) * Control_Signal_AR;
  t201 = t193 - Control_Signal_Vdot;
  Control_Signal_AR = pmf_sqrt(fabs(t372->mX.mX[49UL] * t372->mX.mX[49UL] *
    (t193 / (t201 == 0.0 ? 1.0E-16 : t201)) / (Control_Signal_Vdot == 0.0 ?
    1.0E-16 : Control_Signal_Vdot) / (t372->mX.mX[48UL] == 0.0 ? 1.0E-16 :
    t372->mX.mX[48UL]))) * Check_Valve_2_Pressure_Temperature_Sensor_MA_T * 0.8;
  if (t372->mX.mX[47UL] >= 0.0) {
    out->mLOG.mX[110UL] = t372->mX.mX[47UL] / (Control_Signal_AR == 0.0 ?
      1.0E-16 : Control_Signal_AR) * 1.0E-5;
  } else {
    out->mLOG.mX[110UL] = -t372->mX.mX[47UL] / (Control_Signal_AR == 0.0 ?
      1.0E-16 : Control_Signal_AR) * 1.0E-5;
  }

  out->mLOG.mX[124UL] = t372->mU.mX[0UL];
  Control_Signal_Vdot = t372->mU.mX[1UL] * 1000.0;
  t195 = t372->mX.mX[56UL] * 5.0985810648896409E-6;
  t117[0UL] = t372->mX.mX[5UL] * 100000.0;
  t117[1UL] = t372->mX.mX[6UL];
  t117[2UL] = t372->mX.mX[63UL];
  t117[3UL] = t372->mX.mX[7UL];
  t117[4UL] = t372->mX.mX[64UL];
  t117[5UL] = t372->mX.mX[62UL];
  t117[6UL] = 0.0;
  t117[7UL] = 0.0;
  for (t160 = 0UL; t160 < 8UL; t160++) {
    Expiratory_Tube_F[t160] = t117[t160];
  }

  if (t372->mX.mX[7UL] <= 0.0) {
    t193 = 0.0;
  } else {
    t193 = t372->mX.mX[7UL] >= 1.0 ? 1.0 : t372->mX.mX[7UL];
  }

  t171 = (1.0 - t193) * 287.047 + t193 * 461.523;
  if (t372->mX.mX[66UL] <= 216.59999999999997) {
    t198 = 216.59999999999997;
  } else {
    t198 = t372->mX.mX[66UL] >= 623.15 ? 623.15 : t372->mX.mX[66UL];
  }

  t200 = t198 * t198;
  t199 = ((1026.6477992877929 + t198 * -0.17751557357783998) + t200 *
          0.00036658178515919438) * (1.0 - t193) + ((1479.6504774710256 + t198 *
    1.2002114337051653) + t200 * -0.00038614513167858997) * t193;
  t207 = t199 - t171;
  t198 = t199 / (t207 == 0.0 ? 1.0E-16 : t207);
  t199 = t372->mX.mX[47UL] >= 0.0 ? t372->mX.mX[47UL] : -t372->mX.mX[47UL];
  t211 = pmf_sqrt(fabs(t372->mX.mX[67UL] * t372->mX.mX[67UL] * t198 / (t171 ==
    0.0 ? 1.0E-16 : t171) / (t372->mX.mX[66UL] == 0.0 ? 1.0E-16 : t372->mX.mX
    [66UL])));
  t198 = t199 / (t211 == 0.0 ? 1.0E-16 : t211) / 7.8539816339744827E-5;
  if (t372->mX.mX[68UL] <= 216.59999999999997) {
    t200 = 216.59999999999997;
  } else {
    t200 = t372->mX.mX[68UL] >= 623.15 ? 623.15 : t372->mX.mX[68UL];
  }

  t202 = t200 * t200;
  t201 = ((1026.6477992877929 + t200 * -0.17751557357783998) + t202 *
          0.00036658178515919438) * (1.0 - t193) + ((1479.6504774710256 + t200 *
    1.2002114337051653) + t202 * -0.00038614513167858997) * t193;
  Check_Valve_2_Pressure_Temperature_Sensor_MA_T = t201 - t171;
  t200 = t201 / (Check_Valve_2_Pressure_Temperature_Sensor_MA_T == 0.0 ? 1.0E-16
                 : Check_Valve_2_Pressure_Temperature_Sensor_MA_T);
  t201 = t372->mX.mX[69UL] >= 0.0 ? t372->mX.mX[69UL] : -t372->mX.mX[69UL];
  Check_Valve_2_Pressure_Temperature_Sensor_MA_T = pmf_sqrt(fabs(t372->mX.mX
    [70UL] * t372->mX.mX[70UL] * t200 / (t171 == 0.0 ? 1.0E-16 : t171) /
    (t372->mX.mX[68UL] == 0.0 ? 1.0E-16 : t372->mX.mX[68UL])));
  t200 = t201 / (Check_Valve_2_Pressure_Temperature_Sensor_MA_T == 0.0 ? 1.0E-16
                 : Check_Valve_2_Pressure_Temperature_Sensor_MA_T) /
    7.8539816339744827E-5;
  t88[0UL] = t372->mX.mX[6UL];
  t14[0] = 52UL;
  t15[0] = 1UL;
  tlu2_linear_linear_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t88[0UL], &t14[0UL],
    &t15[0UL]);
  tlu2_1d_linear_linear_value(&t146[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField0, &t14[0UL], &t15[0UL]);
  t202 = t146[0UL];
  Control_Signal_AR = t372->mX.mX[6UL] * t171;
  t171 = t372->mX.mX[5UL] / (Control_Signal_AR == 0.0 ? 1.0E-16 :
    Control_Signal_AR);
  tlu2_1d_linear_linear_value(&t146[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField3, &t14[0UL], &t15[0UL]);
  t204 = pmf_exp(pmf_log(t372->mX.mX[5UL] * 100000.0) - t146[0UL]);
  if (t204 >= 1.0) {
    t221 = (t204 - 1.0) * 461.523 + 287.047;
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T = 287.047 / (t221 == 0.0 ?
      1.0E-16 : t221);
  } else {
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T = 1.0;
  }

  t223 = Check_Valve_2_Pressure_Temperature_Sensor_MA_T * 0.01;
  t204 = (t372->mX.mX[7UL] - Check_Valve_2_Pressure_Temperature_Sensor_MA_T) /
    (t223 == 0.0 ? 1.0E-16 : t223);
  if (t372->mX.mX[7UL] - Check_Valve_2_Pressure_Temperature_Sensor_MA_T <= 0.0)
  {
    t204 = 0.0;
  } else if (t372->mX.mX[7UL] - Check_Valve_2_Pressure_Temperature_Sensor_MA_T >=
             Check_Valve_2_Pressure_Temperature_Sensor_MA_T * 0.01) {
    t204 = t372->mX.mX[7UL] - Check_Valve_2_Pressure_Temperature_Sensor_MA_T;
  } else {
    t204 = (t372->mX.mX[7UL] - Check_Valve_2_Pressure_Temperature_Sensor_MA_T) *
      (t204 * t204 * 3.0 - t204 * t204 * t204 * 2.0);
  }

  t204 = t171 * t204 * 7.8539816339744827E-5 / 0.001;
  if (t372->mX.mX[64UL] <= 0.0) {
    Expiratory_Valve_Mach_R = 0.0;
  } else {
    Expiratory_Valve_Mach_R = t372->mX.mX[64UL] >= 1.0 ? 1.0 : t372->mX.mX[64UL];
  }

  t88[0UL] = t372->mX.mX[6UL];
  tlu2_linear_nearest_prelookup(&t10.mField0[0UL], &t10.mField1[0UL],
    &t10.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t88[0UL], &t14[0UL],
    &t15[0UL]);
  tlu2_1d_linear_nearest_value(&t146[0UL], &t10.mField0[0UL], &t10.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField7, &t14[0UL], &t15[0UL]);
  tlu2_1d_linear_nearest_value(&t147[0UL], &t10.mField0[0UL], &t10.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField6, &t14[0UL], &t15[0UL]);
  t207 = (1.0 - Expiratory_Valve_Mach_R) * t146[0UL] + t147[0UL] *
    Expiratory_Valve_Mach_R;
  t204 *= 100000.0;
  tlu2_1d_linear_linear_value(&t146[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField10, &t14[0UL], &t15[0UL]);
  t208 = (1.0 - t193) * t146[0UL] + t202 * t193;
  t202 = t372->mU.mX[0UL] * 10000.0;
  if (t202 * 0.0001 <= 1.0E-10) {
    Expiratory_Valve_Mach_R = 1.0E-10;
  } else if (t202 * 0.0001 >= 6.3617251235193318E-5) {
    Expiratory_Valve_Mach_R = 6.3617251235193318E-5;
  } else {
    Expiratory_Valve_Mach_R = t202 * 0.0001;
  }

  if (t372->mX.mX[83UL] <= 0.0) {
    Expiratory_Valve_mdot_choked = 0.0;
  } else {
    Expiratory_Valve_mdot_choked = t372->mX.mX[83UL] >= 1.0 ? 1.0 : t372->mX.mX
      [83UL];
  }

  t210 = (1.0 - Expiratory_Valve_mdot_choked) * 287.047 +
    Expiratory_Valve_mdot_choked * 461.523;
  if (t372->mX.mX[81UL] <= 216.59999999999997) {
    t211 = 216.59999999999997;
  } else {
    t211 = t372->mX.mX[81UL] >= 623.15 ? 623.15 : t372->mX.mX[81UL];
  }

  Check_Valve_2_Pressure_Temperature_Sensor_MA_T = t211 * t211;
  Check_Valve_2_Pressure_Temperature_Sensor_MA_T = ((1026.6477992877929 + t211 *
    -0.17751557357783998) + Check_Valve_2_Pressure_Temperature_Sensor_MA_T
    * 0.00036658178515919438) * (1.0 - Expiratory_Valve_mdot_choked) +
    ((1479.6504774710256 + t211 * 1.2002114337051653) +
     Check_Valve_2_Pressure_Temperature_Sensor_MA_T * -0.00038614513167858997) *
    Expiratory_Valve_mdot_choked;
  t226 = Check_Valve_2_Pressure_Temperature_Sensor_MA_T - t210;
  Expiratory_Valve_mdot_choked = pmf_sqrt(fabs(t372->mX.mX[82UL] * t372->mX.mX
    [82UL] * (Check_Valve_2_Pressure_Temperature_Sensor_MA_T / (t226 == 0.0 ?
    1.0E-16 : t226)) / (t210 == 0.0 ? 1.0E-16 : t210) / (t372->mX.mX[81UL] ==
    0.0 ? 1.0E-16 : t372->mX.mX[81UL]))) * Expiratory_Valve_Mach_R * 0.8;
  if (t372->mX.mX[69UL] >= 0.0) {
    Expiratory_Valve_Mach_R = t372->mX.mX[69UL] / (Expiratory_Valve_mdot_choked ==
      0.0 ? 1.0E-16 : Expiratory_Valve_mdot_choked) * 1.0E-5;
  } else {
    Expiratory_Valve_Mach_R = -t372->mX.mX[69UL] / (Expiratory_Valve_mdot_choked
      == 0.0 ? 1.0E-16 : Expiratory_Valve_mdot_choked) * 1.0E-5;
  }

  Expiratory_Valve_mdot_choked = t372->mU.mX[1UL] * 0.0011972999228658597;
  t210 = t372->mX.mX[100UL] * 1.0E-5;
  t211 = -t372->mX.mX[102UL] + t372->mX.mX[101UL];
  t214 = t372->mX.mX[8UL] * 0.0005 + t372->mU.mX[2UL] * -0.0005;
  t117[0UL] = t372->mX.mX[100UL];
  t117[1UL] = t372->mX.mX[8UL];
  t117[2UL] = t372->mX.mX[109UL];
  t117[3UL] = t372->mX.mX[10UL];
  t117[4UL] = t372->mX.mX[102UL];
  t117[5UL] = t372->mX.mX[108UL];
  t117[6UL] = 0.0;
  t117[7UL] = 0.0;
  t88[0UL] = t372->mX.mX[8UL];
  tlu2_linear_linear_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t88[0UL], &t14[0UL],
    &t15[0UL]);
  tlu2_1d_linear_linear_value(&t146[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField0, &t14[0UL], &t15[0UL]);
  Check_Valve_2_Pressure_Temperature_Sensor_MA_T = t146[0UL];
  if (t372->mX.mX[10UL] <= 0.0) {
    Control_Signal_AR = 0.0;
  } else {
    Control_Signal_AR = t372->mX.mX[10UL] >= 1.0 ? 1.0 : t372->mX.mX[10UL];
  }

  t238 = t372->mX.mX[8UL] * ((1.0 - Control_Signal_AR) * 287.047 +
    Control_Signal_AR * 461.523);
  t221 = t372->mX.mX[9UL] / (t238 == 0.0 ? 1.0E-16 : t238);
  tlu2_1d_linear_linear_value(&t146[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField3, &t14[0UL], &t15[0UL]);
  t222 = pmf_exp(pmf_log(t372->mX.mX[9UL] * 100000.0) - t146[0UL]);
  if (t222 >= 1.0) {
    t239 = (t222 - 1.0) * 461.523 + 287.047;
    t223 = 287.047 / (t239 == 0.0 ? 1.0E-16 : t239);
  } else {
    t223 = 1.0;
  }

  t193 = t223 * 0.01;
  t222 = (t372->mX.mX[10UL] - t223) / (t193 == 0.0 ? 1.0E-16 : t193);
  if (t372->mX.mX[10UL] - t223 <= 0.0) {
    t222 = 0.0;
  } else if (t372->mX.mX[10UL] - t223 >= t223 * 0.01) {
    t222 = t372->mX.mX[10UL] - t223;
  } else {
    t222 = (t372->mX.mX[10UL] - t223) * (t222 * t222 * 3.0 - t222 * t222 * t222 *
      2.0);
  }

  t222 = t221 * t222 * 0.001 / 0.001;
  t222 *= 100000.0;
  tlu2_1d_linear_linear_value(&t146[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField10, &t14[0UL], &t15[0UL]);
  t224 = (1.0 - Control_Signal_AR) * t146[0UL] +
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T * Control_Signal_AR;
  t126[0UL] = t372->mX.mX[11UL] * 100000.0;
  t126[1UL] = t372->mX.mX[12UL];
  t126[2UL] = t372->mX.mX[122UL];
  t126[3UL] = t372->mX.mX[13UL];
  t126[4UL] = t372->mX.mX[123UL];
  t126[5UL] = t372->mX.mX[121UL];
  t126[6UL] = 0.0;
  t126[7UL] = 0.0;
  for (t160 = 0UL; t160 < 8UL; t160++) {
    Inspiratory_Tube_F[t160] = t126[t160];
  }

  if (t372->mX.mX[13UL] <= 0.0) {
    Control_Signal_AR = 0.0;
  } else {
    Control_Signal_AR = t372->mX.mX[13UL] >= 1.0 ? 1.0 : t372->mX.mX[13UL];
  }

  t223 = (1.0 - Control_Signal_AR) * 287.047 + Control_Signal_AR * 461.523;
  if (t372->mX.mX[124UL] <= 216.59999999999997) {
    t225 = 216.59999999999997;
  } else {
    t225 = t372->mX.mX[124UL] >= 623.15 ? 623.15 : t372->mX.mX[124UL];
  }

  t227 = t225 * t225;
  t226 = ((1026.6477992877929 + t225 * -0.17751557357783998) + t227 *
          0.00036658178515919438) * (1.0 - Control_Signal_AR) +
    ((1479.6504774710256 + t225 * 1.2002114337051653) + t227 *
     -0.00038614513167858997) * Control_Signal_AR;
  Check_Valve_2_Pressure_Temperature_Sensor_MA_T = t226 - t223;
  t225 = t226 / (Check_Valve_2_Pressure_Temperature_Sensor_MA_T == 0.0 ? 1.0E-16
                 : Check_Valve_2_Pressure_Temperature_Sensor_MA_T);
  if (-t372->mX.mX[114UL] >= 0.0) {
    t226 = -t372->mX.mX[114UL];
  } else {
    t226 = t372->mX.mX[114UL];
  }

  Trachea_Mach_A = pmf_sqrt(fabs(t372->mX.mX[125UL] * t372->mX.mX[125UL] * t225 /
    (t223 == 0.0 ? 1.0E-16 : t223) / (t372->mX.mX[124UL] == 0.0 ? 1.0E-16 :
    t372->mX.mX[124UL])));
  t225 = t226 / (Trachea_Mach_A == 0.0 ? 1.0E-16 : Trachea_Mach_A) /
    7.8539816339744827E-5;
  if (t372->mX.mX[126UL] <= 216.59999999999997) {
    t227 = 216.59999999999997;
  } else {
    t227 = t372->mX.mX[126UL] >= 623.15 ? 623.15 : t372->mX.mX[126UL];
  }

  Check_Valve_2_Pressure_Temperature_Sensor_MA_T = t227 * t227;
  t228 = ((1026.6477992877929 + t227 * -0.17751557357783998) +
          Check_Valve_2_Pressure_Temperature_Sensor_MA_T
          * 0.00036658178515919438) * (1.0 - Control_Signal_AR) +
    ((1479.6504774710256 + t227 * 1.2002114337051653) +
     Check_Valve_2_Pressure_Temperature_Sensor_MA_T * -0.00038614513167858997) *
    Control_Signal_AR;
  t250 = t228 - t223;
  t227 = t228 / (t250 == 0.0 ? 1.0E-16 : t250);
  if (-t372->mX.mX[32UL] >= 0.0) {
    t228 = -t372->mX.mX[32UL];
  } else {
    t228 = t372->mX.mX[32UL];
  }

  t254 = pmf_sqrt(fabs(t372->mX.mX[127UL] * t372->mX.mX[127UL] * t227 / (t223 ==
    0.0 ? 1.0E-16 : t223) / (t372->mX.mX[126UL] == 0.0 ? 1.0E-16 : t372->mX.mX
    [126UL])));
  t227 = t228 / (t254 == 0.0 ? 1.0E-16 : t254) / 7.8539816339744827E-5;
  t88[0UL] = t372->mX.mX[12UL];
  tlu2_linear_linear_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t88[0UL], &t14[0UL],
    &t15[0UL]);
  tlu2_1d_linear_linear_value(&t146[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField0, &t14[0UL], &t15[0UL]);
  Check_Valve_2_Pressure_Temperature_Sensor_MA_T = t146[0UL];
  t357 = t372->mX.mX[12UL] * t223;
  t223 = t372->mX.mX[11UL] / (t357 == 0.0 ? 1.0E-16 : t357);
  tlu2_1d_linear_linear_value(&t146[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField3, &t14[0UL], &t15[0UL]);
  t230 = pmf_exp(pmf_log(t372->mX.mX[11UL] * 100000.0) - t146[0UL]);
  if (t230 >= 1.0) {
    t360 = (t230 - 1.0) * 461.523 + 287.047;
    t254 = 287.047 / (t360 == 0.0 ? 1.0E-16 : t360);
  } else {
    t254 = 1.0;
  }

  t328 = t254 * 0.01;
  t230 = (t372->mX.mX[13UL] - t254) / (t328 == 0.0 ? 1.0E-16 : t328);
  if (t372->mX.mX[13UL] - t254 <= 0.0) {
    t230 = 0.0;
  } else if (t372->mX.mX[13UL] - t254 >= t254 * 0.01) {
    t230 = t372->mX.mX[13UL] - t254;
  } else {
    t230 = (t372->mX.mX[13UL] - t254) * (t230 * t230 * 3.0 - t230 * t230 * t230 *
      2.0);
  }

  t230 = t223 * t230 * 7.8539816339744827E-5 / 0.001;
  if (t372->mX.mX[123UL] <= 0.0) {
    t254 = 0.0;
  } else {
    t254 = t372->mX.mX[123UL] >= 1.0 ? 1.0 : t372->mX.mX[123UL];
  }

  t88[0UL] = t372->mX.mX[12UL];
  tlu2_linear_nearest_prelookup(&t10.mField0[0UL], &t10.mField1[0UL],
    &t10.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t88[0UL], &t14[0UL],
    &t15[0UL]);
  tlu2_1d_linear_nearest_value(&t146[0UL], &t10.mField0[0UL], &t10.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField7, &t14[0UL], &t15[0UL]);
  tlu2_1d_linear_nearest_value(&t147[0UL], &t10.mField0[0UL], &t10.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField6, &t14[0UL], &t15[0UL]);
  t232 = (1.0 - t254) * t146[0UL] + t147[0UL] * t254;
  t230 *= 100000.0;
  tlu2_1d_linear_linear_value(&t146[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField10, &t14[0UL], &t15[0UL]);
  t233 = (1.0 - Control_Signal_AR) * t146[0UL] +
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T * Control_Signal_AR;
  t132[0UL] = t372->mX.mX[14UL] * 100000.0;
  t132[1UL] = t372->mX.mX[0UL];
  t132[2UL] = t372->mX.mX[137UL];
  t132[3UL] = t372->mX.mX[15UL];
  t132[4UL] = t372->mX.mX[138UL];
  t132[5UL] = t372->mX.mX[136UL];
  t132[6UL] = 0.0;
  t132[7UL] = 0.0;
  for (t160 = 0UL; t160 < 8UL; t160++) {
    t126[t160] = t132[t160];
  }

  t88[0UL] = t372->mX.mX[0UL];
  tlu2_linear_linear_prelookup(&t10.mField0[0UL], &t10.mField1[0UL],
    &t10.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t88[0UL], &t14[0UL],
    &t15[0UL]);
  tlu2_1d_linear_linear_value(&t146[0UL], &t10.mField0[0UL], &t10.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField0, &t14[0UL], &t15[0UL]);
  Check_Valve_2_Pressure_Temperature_Sensor_MA_T = t146[0UL];
  if (t372->mX.mX[15UL] <= 0.0) {
    t254 = 0.0;
  } else {
    t254 = t372->mX.mX[15UL] >= 1.0 ? 1.0 : t372->mX.mX[15UL];
  }

  t328 = t372->mX.mX[0UL] * ((1.0 - t254) * 287.047 + t254 * 461.523);
  t234 = t372->mX.mX[14UL] / (t328 == 0.0 ? 1.0E-16 : t328);
  tlu2_1d_linear_linear_value(&t146[0UL], &t10.mField0[0UL], &t10.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField3, &t14[0UL], &t15[0UL]);
  t236 = pmf_exp(pmf_log(t372->mX.mX[14UL] * 100000.0) - t146[0UL]);
  if (t236 >= 1.0) {
    t362 = (t236 - 1.0) * 461.523 + 287.047;
    Control_Signal_AR = 287.047 / (t362 == 0.0 ? 1.0E-16 : t362);
  } else {
    Control_Signal_AR = 1.0;
  }

  t328 = Control_Signal_AR * 0.01;
  t236 = (t372->mX.mX[15UL] - Control_Signal_AR) / (t328 == 0.0 ? 1.0E-16 : t328);
  if (t372->mX.mX[15UL] - Control_Signal_AR <= 0.0) {
    t236 = 0.0;
  } else if (t372->mX.mX[15UL] - Control_Signal_AR >= Control_Signal_AR * 0.01)
  {
    t236 = t372->mX.mX[15UL] - Control_Signal_AR;
  } else {
    t236 = (t372->mX.mX[15UL] - Control_Signal_AR) * (t236 * t236 * 3.0 - t236 *
      t236 * t236 * 2.0);
  }

  t236 = t234 * (t372->mX.mX[16UL] + 1.0E-6) * t236 / 0.001;
  t236 *= 100000.0;
  tlu2_1d_linear_linear_value(&t146[0UL], &t10.mField0[0UL], &t10.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField10, &t14[0UL], &t15[0UL]);
  t238 = (1.0 - t254) * t146[0UL] +
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T * t254;
  t136[0UL] = t372->mX.mX[2UL] * 100000.0;
  t136[1UL] = t372->mX.mX[17UL];
  t136[2UL] = t372->mX.mX[150UL];
  t136[3UL] = t372->mX.mX[18UL];
  t136[4UL] = t372->mX.mX[151UL];
  t136[5UL] = t372->mX.mX[149UL];
  t136[6UL] = 0.0;
  t136[7UL] = 0.0;
  for (t160 = 0UL; t160 < 8UL; t160++) {
    t132[t160] = t136[t160];
  }

  t88[0UL] = t372->mX.mX[17UL];
  tlu2_linear_linear_prelookup(&t10.mField0[0UL], &t10.mField1[0UL],
    &t10.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t88[0UL], &t14[0UL],
    &t15[0UL]);
  tlu2_1d_linear_linear_value(&t146[0UL], &t10.mField0[0UL], &t10.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField0, &t14[0UL], &t15[0UL]);
  t254 = t146[0UL];
  if (t372->mX.mX[18UL] <= 0.0) {
    Control_Signal_AR = 0.0;
  } else {
    Control_Signal_AR = t372->mX.mX[18UL] >= 1.0 ? 1.0 : t372->mX.mX[18UL];
  }

  t328 = t372->mX.mX[17UL] * ((1.0 - Control_Signal_AR) * 287.047 +
    Control_Signal_AR * 461.523);
  t239 = t372->mX.mX[2UL] / (t328 == 0.0 ? 1.0E-16 : t328);
  tlu2_1d_linear_linear_value(&t146[0UL], &t10.mField0[0UL], &t10.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField3, &t14[0UL], &t15[0UL]);
  t240 = pmf_exp(pmf_log(t372->mX.mX[2UL] * 100000.0) - t146[0UL]);
  if (t240 >= 1.0) {
    t328 = (t240 - 1.0) * 461.523 + 287.047;
    t193 = 287.047 / (t328 == 0.0 ? 1.0E-16 : t328);
  } else {
    t193 = 1.0;
  }

  t311 = t193 * 0.01;
  t240 = (t372->mX.mX[18UL] - t193) / (t311 == 0.0 ? 1.0E-16 : t311);
  if (t372->mX.mX[18UL] - t193 <= 0.0) {
    t240 = 0.0;
  } else if (t372->mX.mX[18UL] - t193 >= t193 * 0.01) {
    t240 = t372->mX.mX[18UL] - t193;
  } else {
    t240 = (t372->mX.mX[18UL] - t193) * (t240 * t240 * 3.0 - t240 * t240 * t240 *
      2.0);
  }

  t240 = t239 * t240 * 0.0002 / 0.001;
  t240 *= 100000.0;
  tlu2_1d_linear_linear_value(&t146[0UL], &t10.mField0[0UL], &t10.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField10, &t14[0UL], &t15[0UL]);
  Control_Signal_AR = (1.0 - Control_Signal_AR) * t146[0UL] + t254 *
    Control_Signal_AR;
  if (t372->mX.mX[148UL] <= 0.0) {
    t245 = 0.0;
  } else {
    t245 = t372->mX.mX[148UL] >= 1.0 ? 1.0 : t372->mX.mX[148UL];
  }

  Check_Valve_2_Pressure_Temperature_Sensor_MA_T = (1.0 - t245) * 287.047 + t245
    * 461.523;
  t245 = t372->mX.mX[2UL] / (Check_Valve_2_Pressure_Temperature_Sensor_MA_T ==
    0.0 ? 1.0E-16 : Check_Valve_2_Pressure_Temperature_Sensor_MA_T) /
    (t372->mX.mX[147UL] == 0.0 ? 1.0E-16 : t372->mX.mX[147UL]);
  t245 = -t372->mX.mX[154UL] / (t245 == 0.0 ? 1.0E-16 : t245) * 10.0;
  t140[0UL] = t372->mX.mX[19UL] * 100000.0;
  t140[1UL] = t372->mX.mX[20UL];
  t140[2UL] = t372->mX.mX[172UL];
  t140[3UL] = t372->mX.mX[21UL];
  t140[4UL] = t372->mX.mX[173UL];
  t140[5UL] = t372->mX.mX[171UL];
  t140[6UL] = 0.0;
  t140[7UL] = 0.0;
  for (t160 = 0UL; t160 < 8UL; t160++) {
    t136[t160] = t140[t160];
  }

  if (t372->mX.mX[21UL] <= 0.0) {
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T = 0.0;
  } else {
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T = t372->mX.mX[21UL] >= 1.0 ?
      1.0 : t372->mX.mX[21UL];
  }

  t247 = (1.0 - Check_Valve_2_Pressure_Temperature_Sensor_MA_T) * 287.047 +
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T * 461.523;
  if (t372->mX.mX[174UL] <= 216.59999999999997) {
    Trachea_Mach_A = 216.59999999999997;
  } else {
    Trachea_Mach_A = t372->mX.mX[174UL] >= 623.15 ? 623.15 : t372->mX.mX[174UL];
  }

  t250 = Trachea_Mach_A * Trachea_Mach_A;
  intrm_sf_mf_592 = ((1026.6477992877929 + Trachea_Mach_A * -0.17751557357783998)
                     + t250 * 0.00036658178515919438) * (1.0 -
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T) + ((1479.6504774710256 +
    Trachea_Mach_A * 1.2002114337051653) + t250 * -0.00038614513167858997) *
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T;
  t362 = intrm_sf_mf_592 - t247;
  Trachea_Mach_A = intrm_sf_mf_592 / (t362 == 0.0 ? 1.0E-16 : t362);
  if (-t372->mX.mX[141UL] >= 0.0) {
    intrm_sf_mf_592 = -t372->mX.mX[141UL];
  } else {
    intrm_sf_mf_592 = t372->mX.mX[141UL];
  }

  t311 = pmf_sqrt(fabs(t372->mX.mX[175UL] * t372->mX.mX[175UL] * Trachea_Mach_A /
                       (t247 == 0.0 ? 1.0E-16 : t247) / (t372->mX.mX[174UL] ==
    0.0 ? 1.0E-16 : t372->mX.mX[174UL])));
  Trachea_Mach_A = intrm_sf_mf_592 / (t311 == 0.0 ? 1.0E-16 : t311) /
    0.00017671458676442585;
  if (t372->mX.mX[176UL] <= 216.59999999999997) {
    t250 = 216.59999999999997;
  } else {
    t250 = t372->mX.mX[176UL] >= 623.15 ? 623.15 : t372->mX.mX[176UL];
  }

  t252 = t250 * t250;
  t251 = ((1026.6477992877929 + t250 * -0.17751557357783998) + t252 *
          0.00036658178515919438) * (1.0 -
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T) + ((1479.6504774710256 +
    t250 * 1.2002114337051653) + t252 * -0.00038614513167858997) *
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T;
  t362 = t251 - t247;
  t250 = t251 / (t362 == 0.0 ? 1.0E-16 : t362);
  if (-t372->mX.mX[154UL] >= 0.0) {
    t251 = -t372->mX.mX[154UL];
  } else {
    t251 = t372->mX.mX[154UL];
  }

  t311 = pmf_sqrt(fabs(t372->mX.mX[177UL] * t372->mX.mX[177UL] * t250 / (t247 ==
    0.0 ? 1.0E-16 : t247) / (t372->mX.mX[176UL] == 0.0 ? 1.0E-16 : t372->mX.mX
    [176UL])));
  t250 = t251 / (t311 == 0.0 ? 1.0E-16 : t311) / 0.00017671458676442585;
  t88[0UL] = t372->mX.mX[20UL];
  tlu2_linear_linear_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t88[0UL], &t14[0UL],
    &t15[0UL]);
  tlu2_1d_linear_linear_value(&t146[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField0, &t14[0UL], &t15[0UL]);
  t166 = t146[0UL];
  t328 = t372->mX.mX[20UL] * t247;
  t247 = t372->mX.mX[19UL] / (t328 == 0.0 ? 1.0E-16 : t328);
  tlu2_1d_linear_linear_value(&t146[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField3, &t14[0UL], &t15[0UL]);
  t252 = pmf_exp(pmf_log(t372->mX.mX[19UL] * 100000.0) - t146[0UL]);
  if (t252 >= 1.0) {
    t362 = (t252 - 1.0) * 461.523 + 287.047;
    t371 = 287.047 / (t362 == 0.0 ? 1.0E-16 : t362);
  } else {
    t371 = 1.0;
  }

  t328 = t371 * 0.01;
  t203 = (t372->mX.mX[21UL] - t371) / (t328 == 0.0 ? 1.0E-16 : t328);
  if (t372->mX.mX[21UL] - t371 <= 0.0) {
    t203 = 0.0;
  } else if (t372->mX.mX[21UL] - t371 >= t371 * 0.01) {
    t203 = t372->mX.mX[21UL] - t371;
  } else {
    t203 = (t372->mX.mX[21UL] - t371) * (t203 * t203 * 3.0 - t203 * t203 * t203 *
      2.0);
  }

  t203 = t247 * t203 * 2.6507188014663878E-5 / 0.001;
  if (t372->mX.mX[173UL] <= 0.0) {
    t252 = 0.0;
  } else {
    t252 = t372->mX.mX[173UL] >= 1.0 ? 1.0 : t372->mX.mX[173UL];
  }

  t88[0UL] = t372->mX.mX[20UL];
  tlu2_linear_nearest_prelookup(&t10.mField0[0UL], &t10.mField1[0UL],
    &t10.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t88[0UL], &t14[0UL],
    &t15[0UL]);
  tlu2_1d_linear_nearest_value(&t146[0UL], &t10.mField0[0UL], &t10.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField7, &t14[0UL], &t15[0UL]);
  tlu2_1d_linear_nearest_value(&t147[0UL], &t10.mField0[0UL], &t10.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField6, &t14[0UL], &t15[0UL]);
  t371 = (1.0 - t252) * t146[0UL] + t147[0UL] * t252;
  t203 *= 100000.0;
  tlu2_1d_linear_linear_value(&t146[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField10, &t14[0UL], &t15[0UL]);
  t254 = (1.0 - Check_Valve_2_Pressure_Temperature_Sensor_MA_T) * t146[0UL] +
    t166 * Check_Valve_2_Pressure_Temperature_Sensor_MA_T;
  if (t372->mX.mX[189UL] <= 0.0) {
    t166 = 0.0;
  } else {
    t166 = t372->mX.mX[189UL] >= 1.0 ? 1.0 : t372->mX.mX[189UL];
  }

  t252 = (1.0 - t166) * 287.047 + t166 * 461.523;
  t88[0UL] = t372->mX.mX[184UL];
  tlu2_linear_linear_prelookup(&t11.mField0[0UL], &t11.mField1[0UL],
    &t11.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t88[0UL], &t14[0UL],
    &t15[0UL]);
  tlu2_1d_linear_linear_value(&t146[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField10, &t14[0UL], &t15[0UL]);
  tlu2_1d_linear_linear_value(&t147[0UL], &t11.mField0[0UL], &t11.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField0, &t14[0UL], &t15[0UL]);
  t362 = t372->mX.mX[184UL] * t252;
  t328 = t362 / 1.01325 * (Expiratory_Valve_mdot_choked / 7.8539816339744827E-5)
    * (Expiratory_Valve_mdot_choked / 7.8539816339744827E-5) * fabs(t362 /
    1.01325);
  t193 = t328 / 2.0 * 9.999999999999999E-14 + ((1.0 - t166) * t146[0UL] + t147
    [0UL] * t166);
  t88[0UL] = t372->mX.mX[187UL];
  tlu2_linear_linear_prelookup(&t10.mField0[0UL], &t10.mField1[0UL],
    &t10.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t88[0UL], &t14[0UL],
    &t15[0UL]);
  tlu2_1d_linear_linear_value(&t146[0UL], &t10.mField0[0UL], &t10.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField10, &t14[0UL], &t15[0UL]);
  tlu2_1d_linear_linear_value(&t147[0UL], &t10.mField0[0UL], &t10.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField0, &t14[0UL], &t15[0UL]);
  t362 = t372->mX.mX[187UL] * t252;
  t311 = t362 / (t372->mX.mX[88UL] == 0.0 ? 1.0E-16 : t372->mX.mX[88UL]) *
    (Expiratory_Valve_mdot_choked / 7.8539816339744827E-5) *
    (Expiratory_Valve_mdot_choked / 7.8539816339744827E-5) * fabs(t362 /
    (t372->mX.mX[88UL] == 0.0 ? 1.0E-16 : t372->mX.mX[88UL]));
  t357 = t311 / 2.0 * 9.999999999999999E-14 + ((1.0 - t166) * t146[0UL] + t147
    [0UL] * t166);
  t88[0UL] = t372->mX.mX[185UL];
  tlu2_linear_linear_prelookup(&t10.mField0[0UL], &t10.mField1[0UL],
    &t10.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t88[0UL], &t14[0UL],
    &t15[0UL]);
  tlu2_1d_linear_linear_value(&t146[0UL], &t10.mField0[0UL], &t10.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField10, &t14[0UL], &t15[0UL]);
  tlu2_1d_linear_linear_value(&t147[0UL], &t10.mField0[0UL], &t10.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField0, &t14[0UL], &t15[0UL]);
  t362 = t372->mX.mX[185UL] * t252;
  Check_Valve_2_Pressure_Temperature_Sensor_MA_T = t362 / (t372->mX.mX[88UL] ==
    0.0 ? 1.0E-16 : t372->mX.mX[88UL]) * (-Expiratory_Valve_mdot_choked /
    7.8539816339744827E-5) * (-Expiratory_Valve_mdot_choked /
    7.8539816339744827E-5) * fabs(t362 / (t372->mX.mX[88UL] == 0.0 ? 1.0E-16 :
    t372->mX.mX[88UL]));
  t360 = Check_Valve_2_Pressure_Temperature_Sensor_MA_T / 2.0 *
    9.999999999999999E-14 + ((1.0 - t166) * t146[0UL] + t147[0UL] * t166);
  t88[0UL] = t372->mX.mX[186UL];
  tlu2_linear_linear_prelookup(&t10.mField0[0UL], &t10.mField1[0UL],
    &t10.mField2[0UL], ((_NeDynamicSystem*)(LC))->mField1, &t88[0UL], &t14[0UL],
    &t15[0UL]);
  tlu2_1d_linear_linear_value(&t88[0UL], &t10.mField0[0UL], &t10.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField10, &t14[0UL], &t15[0UL]);
  tlu2_1d_linear_linear_value(&t146[0UL], &t10.mField0[0UL], &t10.mField2[0UL],
    ((_NeDynamicSystem*)(LC))->mField0, &t14[0UL], &t15[0UL]);
  t362 = t372->mX.mX[186UL] * t252;
  t328 = t362 / 1.01325 * (-Expiratory_Valve_mdot_choked / 7.8539816339744827E-5)
    * (-Expiratory_Valve_mdot_choked / 7.8539816339744827E-5) * fabs(t362 /
    1.01325);
  if (Expiratory_Valve_mdot_choked >= 0.0) {
    t252 = (t357 - t193) * Expiratory_Valve_mdot_choked;
  } else {
    t252 = -(((t328 / 2.0 * 9.999999999999999E-14 + ((1.0 - t166) * t88[0UL] +
                t146[0UL] * t166)) - t360) * Expiratory_Valve_mdot_choked);
  }

  t362 = t207 * 7.8539816339744827E-5;
  t166 = t199 * 0.01 / (t362 == 0.0 ? 1.0E-16 : t362);
  Check_Valve_2_Pressure_Temperature_Sensor_MA_T = t166 >= 1.0 ? t166 : 1.0;
  t360 = pmf_log10(6.9 / (Check_Valve_2_Pressure_Temperature_Sensor_MA_T == 0.0 ?
    1.0E-16 : Check_Valve_2_Pressure_Temperature_Sensor_MA_T)
                   + 0.00017169489553429715) * pmf_log10(6.9 /
    (Check_Valve_2_Pressure_Temperature_Sensor_MA_T == 0.0 ? 1.0E-16 :
     Check_Valve_2_Pressure_Temperature_Sensor_MA_T) + 0.00017169489553429715) *
    3.24;
  t328 = fabs(t171) * 1.5707963267948965E-8;
  t193 = t372->mX.mX[47UL] * t207 * 35.2 / (t328 == 0.0 ? 1.0E-16 : t328);
  t311 = fabs(t171) * 1.2337005501361697E-10;
  t199 = t372->mX.mX[47UL] * t199 * (1.0 / (t360 == 0.0 ? 1.0E-16 : t360)) *
    0.55 / (t311 == 0.0 ? 1.0E-16 : t311);
  Check_Valve_2_Pressure_Temperature_Sensor_MA_T = (t166 - 2000.0) / 2000.0;
  t357 = Check_Valve_2_Pressure_Temperature_Sensor_MA_T
    * Check_Valve_2_Pressure_Temperature_Sensor_MA_T * 3.0 -
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T
    * Check_Valve_2_Pressure_Temperature_Sensor_MA_T
    * Check_Valve_2_Pressure_Temperature_Sensor_MA_T * 2.0;
  if (t166 <= 2000.0) {
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T = t193 *
      9.9999999999999991E-11;
  } else if (t166 >= 4000.0) {
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T = t199 *
      9.9999999999999991E-11;
  } else {
    Check_Valve_2_Pressure_Temperature_Sensor_MA_T = ((1.0 - t357) * t193 + t199
      * t357) * 9.9999999999999991E-11;
  }

  t199 = t201 * 0.01 / (t362 == 0.0 ? 1.0E-16 : t362);
  t166 = t199 >= 1.0 ? t199 : 1.0;
  t357 = pmf_log10(6.9 / (t166 == 0.0 ? 1.0E-16 : t166) + 0.00017169489553429715)
    * pmf_log10(6.9 / (t166 == 0.0 ? 1.0E-16 : t166) + 0.00017169489553429715) *
    3.24;
  t207 = t372->mX.mX[69UL] * t207 * 35.2 / (t328 == 0.0 ? 1.0E-16 : t328);
  t201 = t372->mX.mX[69UL] * t201 * (1.0 / (t357 == 0.0 ? 1.0E-16 : t357)) *
    0.55 / (t311 == 0.0 ? 1.0E-16 : t311);
  t166 = (t199 - 2000.0) / 2000.0;
  t193 = t166 * t166 * 3.0 - t166 * t166 * t166 * 2.0;
  if (t199 <= 2000.0) {
    t166 = t207 * 9.9999999999999991E-11;
  } else if (t199 >= 4000.0) {
    t166 = t201 * 9.9999999999999991E-11;
  } else {
    t166 = ((1.0 - t193) * t207 + t201 * t193) * 9.9999999999999991E-11;
  }

  t360 = t232 * 7.8539816339744827E-5;
  t199 = t226 * 0.01 / (t360 == 0.0 ? 1.0E-16 : t360);
  t201 = t199 >= 1.0 ? t199 : 1.0;
  t357 = pmf_log10(6.9 / (t201 == 0.0 ? 1.0E-16 : t201) + 0.00017169489553429715)
    * pmf_log10(6.9 / (t201 == 0.0 ? 1.0E-16 : t201) + 0.00017169489553429715) *
    3.24;
  t362 = fabs(t223) * 1.5707963267948965E-8;
  t207 = t372->mX.mX[114UL] * t232 * -35.2 / (t362 == 0.0 ? 1.0E-16 : t362);
  t328 = fabs(t223) * 1.2337005501361697E-10;
  t201 = t372->mX.mX[114UL] * t226 * (1.0 / (t357 == 0.0 ? 1.0E-16 : t357)) *
    -0.55 / (t328 == 0.0 ? 1.0E-16 : t328);
  t226 = (t199 - 2000.0) / 2000.0;
  t193 = t226 * t226 * 3.0 - t226 * t226 * t226 * 2.0;
  if (t199 <= 2000.0) {
    t226 = t207 * 9.9999999999999991E-11;
  } else if (t199 >= 4000.0) {
    t226 = t201 * 9.9999999999999991E-11;
  } else {
    t226 = ((1.0 - t193) * t207 + t201 * t193) * 9.9999999999999991E-11;
  }

  t199 = t228 * 0.01 / (t360 == 0.0 ? 1.0E-16 : t360);
  t201 = t199 >= 1.0 ? t199 : 1.0;
  t193 = pmf_log10(6.9 / (t201 == 0.0 ? 1.0E-16 : t201) + 0.00017169489553429715)
    * pmf_log10(6.9 / (t201 == 0.0 ? 1.0E-16 : t201) + 0.00017169489553429715) *
    3.24;
  t207 = t372->mX.mX[32UL] * t232 * -35.2 / (t362 == 0.0 ? 1.0E-16 : t362);
  t201 = t372->mX.mX[32UL] * t228 * (1.0 / (t193 == 0.0 ? 1.0E-16 : t193)) *
    -0.55 / (t328 == 0.0 ? 1.0E-16 : t328);
  t228 = (t199 - 2000.0) / 2000.0;
  t232 = t228 * t228 * 3.0 - t228 * t228 * t228 * 2.0;
  if (t199 <= 2000.0) {
    t228 = t207 * 9.9999999999999991E-11;
  } else if (t199 >= 4000.0) {
    t228 = t201 * 9.9999999999999991E-11;
  } else {
    t228 = ((1.0 - t232) * t207 + t201 * t232) * 9.9999999999999991E-11;
  }

  t357 = t371 * 0.00017671458676442585;
  t199 = intrm_sf_mf_592 * 0.015 / (t357 == 0.0 ? 1.0E-16 : t357);
  t201 = t199 >= 1.0 ? t199 : 1.0;
  t193 = pmf_log10(6.9 / (t201 == 0.0 ? 1.0E-16 : t201) + 0.00010947024404896114)
    * pmf_log10(6.9 / (t201 == 0.0 ? 1.0E-16 : t201) + 0.00010947024404896114) *
    3.24;
  t360 = fabs(t247) * 7.9521564043991631E-8;
  t207 = t372->mX.mX[141UL] * t371 * -8.0 / (t360 == 0.0 ? 1.0E-16 : t360);
  t362 = fabs(t247) * 9.3684135525965384E-10;
  t201 = t372->mX.mX[141UL] * intrm_sf_mf_592 * (1.0 / (t193 == 0.0 ? 1.0E-16 :
    t193)) * -0.125 / (t362 == 0.0 ? 1.0E-16 : t362);
  t232 = (t199 - 2000.0) / 2000.0;
  intrm_sf_mf_592 = t232 * t232 * 3.0 - t232 * t232 * t232 * 2.0;
  if (t199 <= 2000.0) {
    t232 = t207 * 9.9999999999999991E-11;
  } else if (t199 >= 4000.0) {
    t232 = t201 * 9.9999999999999991E-11;
  } else {
    t232 = ((1.0 - intrm_sf_mf_592) * t207 + t201 * intrm_sf_mf_592) *
      9.9999999999999991E-11;
  }

  t199 = t251 * 0.015 / (t357 == 0.0 ? 1.0E-16 : t357);
  t201 = t199 >= 1.0 ? t199 : 1.0;
  t193 = pmf_log10(6.9 / (t201 == 0.0 ? 1.0E-16 : t201) + 0.00010947024404896114)
    * pmf_log10(6.9 / (t201 == 0.0 ? 1.0E-16 : t201) + 0.00010947024404896114) *
    3.24;
  t207 = t372->mX.mX[154UL] * t371 * -8.0 / (t360 == 0.0 ? 1.0E-16 : t360);
  t201 = t372->mX.mX[154UL] * t251 * (1.0 / (t193 == 0.0 ? 1.0E-16 : t193)) *
    -0.125 / (t362 == 0.0 ? 1.0E-16 : t362);
  intrm_sf_mf_592 = (t199 - 2000.0) / 2000.0;
  t251 = intrm_sf_mf_592 * intrm_sf_mf_592 * 3.0 - intrm_sf_mf_592 *
    intrm_sf_mf_592 * intrm_sf_mf_592 * 2.0;
  if (t199 <= 2000.0) {
    intrm_sf_mf_592 = t207 * 9.9999999999999991E-11;
  } else if (t199 >= 4000.0) {
    intrm_sf_mf_592 = t201 * 9.9999999999999991E-11;
  } else {
    intrm_sf_mf_592 = ((1.0 - t251) * t207 + t201 * t251) *
      9.9999999999999991E-11;
  }

  t201 = t372->mX.mX[65UL] * -0.00062831853071795862;
  out->mLOG.mX[0UL] = t372->mX.mX[23UL];
  out->mLOG.mX[1UL] = t372->mX.mX[0UL];
  out->mLOG.mX[2UL] = t372->mX.mX[15UL];
  out->mLOG.mX[3UL] = (-t372->mX.mX[25UL] + t372->mX.mX[24UL]) * 1000.0;
  out->mLOG.mX[4UL] = t372->mX.mX[26UL];
  out->mLOG.mX[5UL] = t372->mX.mX[27UL] * 0.1;
  out->mLOG.mX[6UL] = t372->mX.mX[28UL];
  out->mLOG.mX[7UL] = t372->mX.mX[29UL];
  out->mLOG.mX[8UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[9UL] = t372->mX.mX[30UL];
  out->mLOG.mX[10UL] = Check_Valve_1_Delay_A * 0.0001;
  out->mLOG.mX[11UL] = t372->mX.mX[1UL] * 0.0001;
  out->mLOG.mX[12UL] = t372->mX.mX[31UL] * 0.0001;
  out->mLOG.mX[13UL] = t372->mX.mX[31UL] * 0.001;
  out->mLOG.mX[14UL] = t372->mX.mX[31UL] * 0.001;
  out->mLOG.mX[15UL] = t372->mX.mX[1UL] * 0.0001;
  out->mLOG.mX[16UL] = t372->mX.mX[1UL] * 0.0001;
  out->mLOG.mX[17UL] = Check_Valve_1_Delay_A * 0.0001;
  out->mLOG.mX[18UL] = t372->mX.mX[1UL] * 0.0001;
  out->mLOG.mX[19UL] = t372->mX.mX[31UL] * 0.0001;
  out->mLOG.mX[20UL] = t372->mX.mX[26UL];
  out->mLOG.mX[21UL] = t372->mX.mX[27UL] * 0.1;
  out->mLOG.mX[22UL] = t372->mX.mX[28UL];
  out->mLOG.mX[23UL] = t372->mX.mX[29UL];
  out->mLOG.mX[24UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[25UL] = t372->mX.mX[30UL];
  out->mLOG.mX[26UL] = Check_Valve_1_Pressure_Temperature_Sensor_MA_P *
    99999.999999999985;
  out->mLOG.mX[28UL] = Check_Valve_1_Pressure_Temperature_Sensor_MA_P *
    99999.999999999985;
  out->mLOG.mX[29UL] = Check_Valve_1_Delay_A * 0.0001;
  out->mLOG.mX[30UL] = t372->mX.mX[26UL];
  out->mLOG.mX[31UL] = t372->mX.mX[27UL] * 0.1;
  out->mLOG.mX[32UL] = t372->mX.mX[28UL];
  out->mLOG.mX[33UL] = t372->mX.mX[1UL] * 0.0001;
  out->mLOG.mX[34UL] = t372->mX.mX[29UL];
  out->mLOG.mX[35UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[36UL] = t372->mX.mX[30UL];
  out->mLOG.mX[37UL] = t372->mX.mX[32UL];
  out->mLOG.mX[38UL] = t372->mX.mX[26UL];
  out->mLOG.mX[39UL] = t372->mX.mX[27UL] * 0.1;
  out->mLOG.mX[40UL] = t372->mX.mX[28UL];
  out->mLOG.mX[41UL] = t372->mX.mX[38UL];
  out->mLOG.mX[42UL] = t372->mX.mX[39UL];
  out->mLOG.mX[43UL] = t372->mX.mX[32UL];
  out->mLOG.mX[44UL] = t372->mX.mX[40UL];
  out->mLOG.mX[45UL] = t372->mX.mX[35UL];
  out->mLOG.mX[46UL] = t372->mX.mX[33UL];
  out->mLOG.mX[47UL] = t372->mX.mX[34UL] * 0.1;
  out->mLOG.mX[48UL] = t372->mX.mX[36UL];
  out->mLOG.mX[49UL] = t372->mX.mX[37UL];
  out->mLOG.mX[51UL] = t372->mX.mX[38UL];
  out->mLOG.mX[52UL] = -t372->mX.mX[38UL];
  out->mLOG.mX[53UL] = t372->mX.mX[29UL];
  out->mLOG.mX[54UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[55UL] = t372->mX.mX[30UL];
  out->mLOG.mX[56UL] = -t372->mX.mX[38UL];
  out->mLOG.mX[57UL] = t372->mX.mX[39UL];
  out->mLOG.mX[58UL] = -t372->mX.mX[32UL];
  out->mLOG.mX[59UL] = -t372->mX.mX[40UL];
  out->mLOG.mX[60UL] = t372->mX.mX[35UL];
  out->mLOG.mX[61UL] = -t372->mX.mX[32UL];
  out->mLOG.mX[62UL] = t372->mX.mX[40UL];
  out->mLOG.mX[63UL] = -t372->mX.mX[40UL];
  out->mLOG.mX[64UL] = t372->mX.mX[41UL];
  out->mLOG.mX[65UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[66UL] = t372->mX.mX[42UL];
  out->mLOG.mX[67UL] = t372->mX.mX[43UL];
  out->mLOG.mX[68UL] = t372->mX.mX[44UL] * 0.1;
  out->mLOG.mX[69UL] = t372->mX.mX[45UL];
  out->mLOG.mX[70UL] = Check_Valve_1_Valve_mdot_choked * 0.0001;
  out->mLOG.mX[71UL] = t372->mX.mX[3UL] * 0.0001;
  out->mLOG.mX[72UL] = t372->mX.mX[46UL] * 0.0001;
  out->mLOG.mX[73UL] = t372->mX.mX[46UL] * 0.001;
  out->mLOG.mX[74UL] = t372->mX.mX[46UL] * 0.001;
  out->mLOG.mX[75UL] = t372->mX.mX[3UL] * 0.0001;
  out->mLOG.mX[76UL] = t372->mX.mX[3UL] * 0.0001;
  out->mLOG.mX[77UL] = Check_Valve_1_Valve_mdot_choked * 0.0001;
  out->mLOG.mX[78UL] = t372->mX.mX[3UL] * 0.0001;
  out->mLOG.mX[79UL] = t372->mX.mX[46UL] * 0.0001;
  out->mLOG.mX[80UL] = t372->mX.mX[41UL];
  out->mLOG.mX[81UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[82UL] = t372->mX.mX[42UL];
  out->mLOG.mX[83UL] = t372->mX.mX[43UL];
  out->mLOG.mX[84UL] = t372->mX.mX[44UL] * 0.1;
  out->mLOG.mX[85UL] = t372->mX.mX[45UL];
  out->mLOG.mX[86UL] = Check_Valve_2_Pressure_Temperature_Sensor_MA_P *
    99999.999999999985;
  out->mLOG.mX[88UL] = Check_Valve_2_Pressure_Temperature_Sensor_MA_P *
    99999.999999999985;
  out->mLOG.mX[89UL] = Check_Valve_1_Valve_mdot_choked * 0.0001;
  out->mLOG.mX[90UL] = t372->mX.mX[41UL];
  out->mLOG.mX[91UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[92UL] = t372->mX.mX[42UL];
  out->mLOG.mX[93UL] = t372->mX.mX[3UL] * 0.0001;
  out->mLOG.mX[94UL] = t372->mX.mX[43UL];
  out->mLOG.mX[95UL] = t372->mX.mX[44UL] * 0.1;
  out->mLOG.mX[96UL] = t372->mX.mX[45UL];
  out->mLOG.mX[97UL] = t372->mX.mX[47UL];
  out->mLOG.mX[98UL] = t372->mX.mX[41UL];
  out->mLOG.mX[99UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[100UL] = t372->mX.mX[42UL];
  out->mLOG.mX[101UL] = t372->mX.mX[53UL];
  out->mLOG.mX[102UL] = t372->mX.mX[54UL];
  out->mLOG.mX[103UL] = t372->mX.mX[47UL];
  out->mLOG.mX[104UL] = t372->mX.mX[55UL];
  out->mLOG.mX[105UL] = t372->mX.mX[50UL];
  out->mLOG.mX[106UL] = t372->mX.mX[48UL];
  out->mLOG.mX[107UL] = t372->mX.mX[49UL] * 0.1;
  out->mLOG.mX[108UL] = t372->mX.mX[51UL];
  out->mLOG.mX[109UL] = t372->mX.mX[52UL];
  out->mLOG.mX[111UL] = t372->mX.mX[53UL];
  out->mLOG.mX[112UL] = -t372->mX.mX[53UL];
  out->mLOG.mX[113UL] = t372->mX.mX[43UL];
  out->mLOG.mX[114UL] = t372->mX.mX[44UL] * 0.1;
  out->mLOG.mX[115UL] = t372->mX.mX[45UL];
  out->mLOG.mX[116UL] = -t372->mX.mX[53UL];
  out->mLOG.mX[117UL] = t372->mX.mX[54UL];
  out->mLOG.mX[118UL] = -t372->mX.mX[47UL];
  out->mLOG.mX[119UL] = -t372->mX.mX[55UL];
  out->mLOG.mX[120UL] = t372->mX.mX[50UL];
  out->mLOG.mX[121UL] = -t372->mX.mX[47UL];
  out->mLOG.mX[122UL] = t372->mX.mX[55UL];
  out->mLOG.mX[123UL] = -t372->mX.mX[55UL];
  out->mLOG.mX[125UL] = t372->mU.mX[0UL];
  out->mLOG.mX[126UL] = t372->mU.mX[1UL];
  out->mLOG.mX[127UL] = Control_Signal_Vdot * 0.001;
  out->mLOG.mX[128UL] = t195;
  out->mLOG.mX[129UL] = t372->mX.mX[4UL] * 980665.0;
  out->mLOG.mX[130UL] = t195;
  out->mLOG.mX[131UL] = t372->mX.mX[4UL];
  out->mLOG.mX[132UL] = t372->mX.mX[43UL];
  out->mLOG.mX[133UL] = t372->mX.mX[44UL] * 0.1;
  out->mLOG.mX[134UL] = t372->mX.mX[45UL];
  out->mLOG.mX[135UL] = t372->mX.mX[57UL];
  out->mLOG.mX[136UL] = t372->mX.mX[58UL] * 0.1;
  out->mLOG.mX[137UL] = t372->mX.mX[59UL];
  out->mLOG.mX[138UL] = t372->mX.mX[60UL] * 0.1;
  out->mLOG.mX[139UL] = t372->mX.mX[5UL] * 0.1;
  out->mLOG.mX[140UL] = t372->mX.mX[61UL] * 0.1;
  for (t160 = 0UL; t160 < 8UL; t160++) {
    out->mLOG.mX[t160 + 141UL] = Expiratory_Tube_F[t160];
  }

  out->mLOG.mX[149UL] = t372->mX.mX[65UL];
  out->mLOG.mX[150UL] = t372->mX.mX[62UL];
  out->mLOG.mX[151UL] = t372->mX.mX[77UL];
  out->mLOG.mX[152UL] = t372->mX.mX[78UL];
  out->mLOG.mX[153UL] = t372->mX.mX[7UL];
  out->mLOG.mX[154UL] = t372->mX.mX[66UL];
  out->mLOG.mX[155UL] = t372->mX.mX[47UL];
  out->mLOG.mX[156UL] = t372->mX.mX[67UL] * 0.1;
  out->mLOG.mX[157UL] = t198 * 1.0E-5;
  out->mLOG.mX[158UL] = t372->mX.mX[68UL];
  out->mLOG.mX[159UL] = t372->mX.mX[69UL];
  out->mLOG.mX[160UL] = t372->mX.mX[70UL] * 0.1;
  out->mLOG.mX[161UL] = t200 * 1.0E-5;
  out->mLOG.mX[162UL] = t372->mX.mX[6UL] - 273.15;
  out->mLOG.mX[163UL] = t372->mX.mX[64UL];
  out->mLOG.mX[164UL] = t372->mX.mX[53UL];
  out->mLOG.mX[165UL] = t372->mX.mX[71UL];
  out->mLOG.mX[166UL] = t171 * 100000.0;
  out->mLOG.mX[167UL] = 0.18419157727996954 + t201;
  out->mLOG.mX[168UL] = t372->mX.mX[63UL];
  out->mLOG.mX[169UL] = t372->mX.mX[6UL];
  out->mLOG.mX[170UL] = t372->mX.mX[7UL];
  out->mLOG.mX[171UL] = t204;
  out->mLOG.mX[172UL] = t372->mX.mX[43UL];
  out->mLOG.mX[173UL] = t372->mX.mX[44UL] * 0.1;
  out->mLOG.mX[174UL] = t372->mX.mX[45UL];
  out->mLOG.mX[175UL] = t372->mX.mX[53UL];
  out->mLOG.mX[176UL] = t372->mX.mX[72UL];
  out->mLOG.mX[177UL] = t372->mX.mX[47UL];
  out->mLOG.mX[178UL] = t372->mX.mX[55UL];
  out->mLOG.mX[179UL] = t372->mX.mX[73UL];
  out->mLOG.mX[180UL] = t372->mX.mX[57UL];
  out->mLOG.mX[181UL] = t372->mX.mX[58UL] * 0.1;
  out->mLOG.mX[182UL] = t372->mX.mX[59UL];
  out->mLOG.mX[183UL] = t372->mX.mX[71UL];
  out->mLOG.mX[184UL] = t372->mX.mX[74UL];
  out->mLOG.mX[185UL] = t372->mX.mX[69UL];
  out->mLOG.mX[186UL] = t372->mX.mX[75UL];
  out->mLOG.mX[187UL] = t372->mX.mX[76UL];
  out->mLOG.mX[188UL] = t208;
  out->mLOG.mX[189UL] = t372->mX.mX[55UL];
  out->mLOG.mX[190UL] = t372->mX.mX[75UL];
  out->mLOG.mX[191UL] = Check_Valve_2_Pressure_Temperature_Sensor_MA_T * 0.1;
  out->mLOG.mX[192UL] = t166 * 0.1;
  out->mLOG.mX[193UL] = 1.0 - t372->mX.mX[7UL];
  out->mLOG.mX[194UL] = t372->mX.mX[79UL];
  out->mLOG.mX[195UL] = t372->mX.mX[80UL];
  out->mLOG.mX[196UL] = t202 * 0.0001;
  out->mLOG.mX[197UL] = t372->mX.mX[57UL];
  out->mLOG.mX[198UL] = t372->mX.mX[58UL] * 0.1;
  out->mLOG.mX[199UL] = t372->mX.mX[59UL];
  out->mLOG.mX[200UL] = t372->mX.mX[69UL];
  out->mLOG.mX[201UL] = t372->mX.mX[79UL];
  out->mLOG.mX[202UL] = t372->mX.mX[80UL];
  out->mLOG.mX[203UL] = t372->mX.mX[71UL];
  out->mLOG.mX[204UL] = t372->mX.mX[86UL];
  out->mLOG.mX[205UL] = t372->mX.mX[69UL];
  out->mLOG.mX[206UL] = t372->mX.mX[75UL];
  out->mLOG.mX[207UL] = t372->mX.mX[83UL];
  out->mLOG.mX[208UL] = t372->mX.mX[81UL];
  out->mLOG.mX[209UL] = t372->mX.mX[82UL] * 0.1;
  out->mLOG.mX[210UL] = t372->mX.mX[84UL];
  out->mLOG.mX[211UL] = t372->mX.mX[85UL];
  out->mLOG.mX[212UL] = Expiratory_Valve_Mach_R;
  out->mLOG.mX[213UL] = t372->mX.mX[71UL];
  out->mLOG.mX[214UL] = -t372->mX.mX[71UL];
  out->mLOG.mX[215UL] = t372->mX.mX[57UL];
  out->mLOG.mX[216UL] = t372->mX.mX[58UL] * 0.1;
  out->mLOG.mX[217UL] = t372->mX.mX[59UL];
  out->mLOG.mX[218UL] = -t372->mX.mX[71UL];
  out->mLOG.mX[219UL] = t372->mX.mX[86UL];
  out->mLOG.mX[220UL] = -t372->mX.mX[69UL];
  out->mLOG.mX[221UL] = -t372->mX.mX[75UL];
  out->mLOG.mX[222UL] = t372->mX.mX[83UL];
  out->mLOG.mX[223UL] = -t372->mX.mX[69UL];
  out->mLOG.mX[224UL] = t372->mX.mX[75UL];
  out->mLOG.mX[225UL] = -t372->mX.mX[75UL];
  out->mLOG.mX[226UL] = t372->mX.mX[87UL];
  out->mLOG.mX[227UL] = t372->mX.mX[88UL] * 0.1;
  out->mLOG.mX[228UL] = t372->mX.mX[89UL];
  out->mLOG.mX[229UL] = t372->mX.mX[90UL];
  out->mLOG.mX[230UL] = t372->mX.mX[9UL] * 0.1;
  out->mLOG.mX[231UL] = t372->mX.mX[91UL];
  out->mLOG.mX[232UL] = t372->mX.mX[92UL];
  out->mLOG.mX[233UL] = -t372->mX.mX[92UL];
  out->mLOG.mX[234UL] = t372->mX.mX[87UL];
  out->mLOG.mX[235UL] = t372->mX.mX[88UL] * 0.1;
  out->mLOG.mX[236UL] = t372->mX.mX[89UL];
  out->mLOG.mX[237UL] = t372->mX.mX[92UL];
  out->mLOG.mX[238UL] = t372->mX.mX[94UL];
  out->mLOG.mX[239UL] = Expiratory_Valve_mdot_choked;
  out->mLOG.mX[240UL] = t372->mX.mX[95UL];
  out->mLOG.mX[241UL] = t372->mX.mX[96UL];
  out->mLOG.mX[242UL] = t372->mX.mX[93UL];
  out->mLOG.mX[243UL] = t372->mX.mX[90UL];
  out->mLOG.mX[244UL] = t372->mX.mX[9UL] * 0.1;
  out->mLOG.mX[245UL] = t372->mX.mX[91UL];
  out->mLOG.mX[246UL] = -t372->mX.mX[92UL];
  out->mLOG.mX[247UL] = t372->mX.mX[94UL];
  out->mLOG.mX[248UL] = -Expiratory_Valve_mdot_choked;
  out->mLOG.mX[249UL] = -t372->mX.mX[95UL];
  out->mLOG.mX[250UL] = t372->mX.mX[96UL];
  out->mLOG.mX[251UL] = Expiratory_Valve_mdot_choked;
  out->mLOG.mX[252UL] = -Expiratory_Valve_mdot_choked;
  out->mLOG.mX[253UL] = t372->mX.mX[95UL];
  out->mLOG.mX[254UL] = -t372->mX.mX[95UL];
  out->mLOG.mX[255UL] = t372->mX.mX[97UL] * 1000.0;
  out->mLOG.mX[256UL] = t372->mX.mX[90UL];
  out->mLOG.mX[257UL] = t372->mX.mX[9UL] * 0.1;
  out->mLOG.mX[258UL] = t372->mX.mX[91UL];
  out->mLOG.mX[259UL] = t372->mX.mX[98UL];
  out->mLOG.mX[260UL] = t372->mX.mX[98UL] * 5.0E-8;
  out->mLOG.mX[261UL] = t372->mX.mX[99UL] * 1.0E-6;
  out->mLOG.mX[262UL] = t372->mX.mX[99UL] * 0.012732395447351627;
  out->mLOG.mX[263UL] = t210 * 99999.999999999985;
  out->mLOG.mX[264UL] = t211;
  out->mLOG.mX[265UL] = t372->mX.mX[103UL] * 99999.999999999985;
  out->mLOG.mX[266UL] = t372->mX.mX[103UL] * 99999.999999999985;
  out->mLOG.mX[267UL] = t372->mX.mX[99UL] * 0.012732395447351627;
  out->mLOG.mX[268UL] = t372->mX.mX[98UL];
  out->mLOG.mX[269UL] = t372->mX.mX[101UL];
  out->mLOG.mX[270UL] = t372->mX.mX[102UL];
  out->mLOG.mX[271UL] = t211;
  out->mLOG.mX[272UL] = t372->mX.mX[99UL] * 1.0E-6;
  out->mLOG.mX[273UL] = t372->mX.mX[98UL] * 5.0E-8;
  out->mLOG.mX[274UL] = t372->mX.mX[98UL] * 1.25E-9;
  out->mLOG.mX[275UL] = t372->mX.mX[98UL] * 1.25E-9;
  out->mLOG.mX[276UL] = t210 * 99999.999999999985;
  out->mLOG.mX[277UL] = t372->mX.mX[102UL];
  out->mLOG.mX[278UL] = t372->mX.mX[101UL];
  out->mLOG.mX[279UL] = t372->mX.mX[104UL];
  out->mLOG.mX[280UL] = t372->mX.mX[9UL] * 0.1;
  out->mLOG.mX[281UL] = t372->mX.mX[105UL];
  out->mLOG.mX[282UL] = t372->mX.mX[98UL] * 1.25E-9;
  out->mLOG.mX[283UL] = t372->mX.mX[106UL];
  out->mLOG.mX[284UL] = t372->mX.mX[8UL];
  out->mLOG.mX[285UL] = t372->mX.mX[10UL];
  out->mLOG.mX[286UL] = t372->mU.mX[2UL];
  out->mLOG.mX[287UL] = t372->mX.mX[98UL] * -1.25E-9;
  out->mLOG.mX[288UL] = t372->mU.mX[2UL];
  out->mLOG.mX[289UL] = t214 * 1000.0;
  out->mLOG.mX[290UL] = t372->mU.mX[2UL];
  out->mLOG.mX[291UL] = t372->mU.mX[2UL];
  out->mLOG.mX[292UL] = t372->mX.mX[107UL];
  out->mLOG.mX[293UL] = t372->mX.mX[101UL];
  out->mLOG.mX[294UL] = t372->mX.mX[107UL];
  out->mLOG.mX[295UL] = t372->mX.mX[90UL];
  out->mLOG.mX[296UL] = t372->mX.mX[9UL] * 0.1;
  out->mLOG.mX[297UL] = t372->mX.mX[91UL];
  out->mLOG.mX[298UL] = t372->mX.mX[107UL] - t372->mX.mX[90UL];
  out->mLOG.mX[299UL] = -(t372->mX.mX[9UL] - 1.01325) * 0.1;
  out->mLOG.mX[300UL] = 0.046611512363907495 - t372->mX.mX[91UL];
  for (t160 = 0UL; t160 < 8UL; t160++) {
    out->mLOG.mX[t160 + 301UL] = t117[t160];
  }

  out->mLOG.mX[309UL] = 0.0;
  out->mLOG.mX[310UL] = t210 * 99999.999999999985;
  out->mLOG.mX[311UL] = t372->mX.mX[8UL];
  out->mLOG.mX[312UL] = t372->mX.mX[102UL];
  out->mLOG.mX[313UL] = t372->mX.mX[90UL];
  out->mLOG.mX[314UL] = t372->mX.mX[9UL] * 0.1;
  out->mLOG.mX[315UL] = t372->mX.mX[91UL];
  out->mLOG.mX[316UL] = t372->mX.mX[104UL];
  out->mLOG.mX[317UL] = t372->mX.mX[9UL] * 0.1;
  out->mLOG.mX[318UL] = t372->mX.mX[105UL];
  out->mLOG.mX[319UL] = t372->mX.mX[8UL];
  out->mLOG.mX[320UL] = t372->mX.mX[9UL] * 0.1;
  out->mLOG.mX[321UL] = t372->mX.mX[10UL];
  out->mLOG.mX[322UL] = t372->mX.mX[8UL];
  out->mLOG.mX[323UL] = t372->mX.mX[9UL] * 0.1;
  out->mLOG.mX[324UL] = t372->mX.mX[10UL];
  for (t160 = 0UL; t160 < 8UL; t160++) {
    out->mLOG.mX[t160 + 325UL] = t117[t160];
  }

  out->mLOG.mX[333UL] = t372->mX.mX[8UL];
  out->mLOG.mX[334UL] = t372->mX.mX[108UL];
  out->mLOG.mX[335UL] = t372->mX.mX[92UL];
  out->mLOG.mX[336UL] = t372->mX.mX[110UL];
  out->mLOG.mX[337UL] = -t372->mX.mX[106UL];
  out->mLOG.mX[338UL] = t372->mX.mX[8UL] - 273.15;
  out->mLOG.mX[339UL] = t372->mX.mX[117UL];
  out->mLOG.mX[340UL] = t372->mX.mX[118UL];
  out->mLOG.mX[341UL] = t372->mX.mX[10UL];
  out->mLOG.mX[342UL] = t372->mX.mX[9UL] * 0.1;
  out->mLOG.mX[343UL] = t221 * 100000.0;
  out->mLOG.mX[344UL] = -t214;
  out->mLOG.mX[345UL] = t372->mX.mX[109UL];
  out->mLOG.mX[346UL] = t372->mX.mX[8UL];
  out->mLOG.mX[347UL] = t372->mX.mX[10UL];
  out->mLOG.mX[348UL] = t222;
  out->mLOG.mX[349UL] = t372->mX.mX[90UL];
  out->mLOG.mX[350UL] = t372->mX.mX[9UL] * 0.1;
  out->mLOG.mX[351UL] = t372->mX.mX[91UL];
  out->mLOG.mX[352UL] = t372->mX.mX[92UL];
  out->mLOG.mX[353UL] = t372->mX.mX[111UL];
  out->mLOG.mX[354UL] = Expiratory_Valve_mdot_choked;
  out->mLOG.mX[355UL] = t372->mX.mX[95UL];
  out->mLOG.mX[356UL] = t372->mX.mX[112UL];
  out->mLOG.mX[357UL] = t372->mX.mX[104UL];
  out->mLOG.mX[358UL] = t372->mX.mX[9UL] * 0.1;
  out->mLOG.mX[359UL] = t372->mX.mX[105UL];
  out->mLOG.mX[360UL] = t372->mX.mX[110UL];
  out->mLOG.mX[361UL] = t372->mX.mX[113UL];
  out->mLOG.mX[362UL] = t372->mX.mX[114UL];
  out->mLOG.mX[363UL] = t372->mX.mX[115UL];
  out->mLOG.mX[364UL] = t372->mX.mX[116UL];
  out->mLOG.mX[365UL] = t224;
  out->mLOG.mX[366UL] = Expiratory_Valve_mdot_choked;
  out->mLOG.mX[367UL] = t372->mX.mX[114UL];
  out->mLOG.mX[368UL] = t372->mX.mX[98UL] * 1.25E-9;
  out->mLOG.mX[369UL] = t372->mX.mX[95UL];
  out->mLOG.mX[370UL] = t372->mX.mX[115UL];
  out->mLOG.mX[371UL] = 1.0 - t372->mX.mX[10UL];
  out->mLOG.mX[372UL] = t372->mX.mX[102UL];
  out->mLOG.mX[373UL] = t372->mX.mX[107UL];
  out->mLOG.mX[374UL] = t372->mX.mX[107UL];
  out->mLOG.mX[375UL] = t372->mU.mX[2UL];
  out->mLOG.mX[376UL] = t372->mX.mX[90UL];
  out->mLOG.mX[377UL] = t372->mX.mX[9UL] * 0.1;
  out->mLOG.mX[378UL] = t372->mX.mX[91UL];
  out->mLOG.mX[379UL] = t372->mX.mX[90UL];
  out->mLOG.mX[380UL] = t372->mX.mX[9UL] * 0.1;
  out->mLOG.mX[381UL] = t372->mX.mX[91UL];
  out->mLOG.mX[382UL] = t372->mX.mX[92UL];
  out->mLOG.mX[383UL] = t372->mX.mX[99UL] * 1.0E-6;
  out->mLOG.mX[384UL] = Expiratory_Valve_mdot_choked;
  out->mLOG.mX[385UL] = t372->mX.mX[95UL];
  out->mLOG.mX[386UL] = t372->mX.mX[8UL];
  out->mLOG.mX[387UL] = t372->mU.mX[2UL];
  out->mLOG.mX[388UL] = t214 * 1000.0;
  out->mLOG.mX[389UL] = t214 * 2000.0;
  out->mLOG.mX[390UL] = t372->mX.mX[104UL];
  out->mLOG.mX[391UL] = t372->mX.mX[9UL] * 0.1;
  out->mLOG.mX[392UL] = t372->mX.mX[105UL];
  out->mLOG.mX[393UL] = t372->mX.mX[26UL];
  out->mLOG.mX[394UL] = t372->mX.mX[27UL] * 0.1;
  out->mLOG.mX[395UL] = t372->mX.mX[28UL];
  out->mLOG.mX[396UL] = t372->mX.mX[119UL] * 0.1;
  out->mLOG.mX[397UL] = t372->mX.mX[11UL] * 0.1;
  out->mLOG.mX[398UL] = t372->mX.mX[120UL] * 0.1;
  for (t160 = 0UL; t160 < 8UL; t160++) {
    out->mLOG.mX[t160 + 399UL] = Inspiratory_Tube_F[t160];
  }

  out->mLOG.mX[407UL] = t372->mX.mX[121UL];
  out->mLOG.mX[408UL] = t372->mX.mX[132UL];
  out->mLOG.mX[409UL] = t372->mX.mX[133UL];
  out->mLOG.mX[410UL] = t372->mX.mX[13UL];
  out->mLOG.mX[411UL] = t372->mX.mX[124UL];
  out->mLOG.mX[412UL] = -t372->mX.mX[114UL];
  out->mLOG.mX[413UL] = t372->mX.mX[125UL] * 0.1;
  out->mLOG.mX[414UL] = t225 * 1.0E-5;
  out->mLOG.mX[415UL] = t372->mX.mX[126UL];
  out->mLOG.mX[416UL] = -t372->mX.mX[32UL];
  out->mLOG.mX[417UL] = t372->mX.mX[127UL] * 0.1;
  out->mLOG.mX[418UL] = t227 * 1.0E-5;
  out->mLOG.mX[419UL] = t372->mX.mX[12UL] - 273.15;
  out->mLOG.mX[420UL] = t372->mX.mX[123UL];
  out->mLOG.mX[421UL] = -t372->mX.mX[110UL];
  out->mLOG.mX[422UL] = -t372->mX.mX[38UL];
  out->mLOG.mX[423UL] = t223 * 100000.0;
  out->mLOG.mX[424UL] = -t372->mX.mX[97UL];
  out->mLOG.mX[425UL] = t372->mX.mX[122UL];
  out->mLOG.mX[426UL] = t372->mX.mX[12UL];
  out->mLOG.mX[427UL] = t372->mX.mX[13UL];
  out->mLOG.mX[428UL] = t230;
  out->mLOG.mX[429UL] = t372->mX.mX[104UL];
  out->mLOG.mX[430UL] = t372->mX.mX[9UL] * 0.1;
  out->mLOG.mX[431UL] = t372->mX.mX[105UL];
  out->mLOG.mX[432UL] = -t372->mX.mX[110UL];
  out->mLOG.mX[433UL] = t372->mX.mX[128UL];
  out->mLOG.mX[434UL] = -t372->mX.mX[114UL];
  out->mLOG.mX[435UL] = -t372->mX.mX[115UL];
  out->mLOG.mX[436UL] = t372->mX.mX[129UL];
  out->mLOG.mX[437UL] = t372->mX.mX[26UL];
  out->mLOG.mX[438UL] = t372->mX.mX[27UL] * 0.1;
  out->mLOG.mX[439UL] = t372->mX.mX[28UL];
  out->mLOG.mX[440UL] = -t372->mX.mX[38UL];
  out->mLOG.mX[441UL] = t372->mX.mX[130UL];
  out->mLOG.mX[442UL] = -t372->mX.mX[32UL];
  out->mLOG.mX[443UL] = -t372->mX.mX[40UL];
  out->mLOG.mX[444UL] = t372->mX.mX[131UL];
  out->mLOG.mX[445UL] = t233;
  out->mLOG.mX[446UL] = -t372->mX.mX[115UL];
  out->mLOG.mX[447UL] = -t372->mX.mX[40UL];
  out->mLOG.mX[448UL] = t226 * 0.1;
  out->mLOG.mX[449UL] = t228 * 0.1;
  out->mLOG.mX[450UL] = 1.0 - t372->mX.mX[13UL];
  out->mLOG.mX[451UL] = t372->mX.mX[0UL];
  out->mLOG.mX[452UL] = t372->mX.mX[24UL] * 1000.0;
  out->mLOG.mX[453UL] = t372->mX.mX[24UL] * 0.625;
  out->mLOG.mX[454UL] = t372->mX.mX[134UL];
  out->mLOG.mX[455UL] = t372->mX.mX[14UL] * 0.1;
  out->mLOG.mX[456UL] = t372->mX.mX[135UL];
  for (t160 = 0UL; t160 < 8UL; t160++) {
    out->mLOG.mX[t160 + 457UL] = t126[t160];
  }

  out->mLOG.mX[465UL] = t372->mX.mX[0UL];
  out->mLOG.mX[466UL] = t372->mX.mX[136UL];
  out->mLOG.mX[467UL] = t372->mX.mX[139UL];
  out->mLOG.mX[468UL] = -t372->mX.mX[23UL];
  out->mLOG.mX[469UL] = t372->mX.mX[0UL] - 273.15;
  out->mLOG.mX[470UL] = t372->mX.mX[145UL];
  out->mLOG.mX[471UL] = t372->mX.mX[146UL];
  out->mLOG.mX[472UL] = t372->mX.mX[15UL];
  out->mLOG.mX[473UL] = t372->mX.mX[14UL] * 0.1;
  out->mLOG.mX[474UL] = t234 * 100000.0;
  out->mLOG.mX[475UL] = t372->mX.mX[16UL];
  out->mLOG.mX[476UL] = t372->mX.mX[16UL] + 1.0E-6;
  out->mLOG.mX[477UL] = -t372->mX.mX[24UL];
  out->mLOG.mX[478UL] = t195;
  out->mLOG.mX[479UL] = t372->mX.mX[137UL];
  out->mLOG.mX[480UL] = t372->mX.mX[0UL];
  out->mLOG.mX[481UL] = t372->mX.mX[15UL];
  out->mLOG.mX[482UL] = t236;
  out->mLOG.mX[483UL] = t372->mX.mX[134UL];
  out->mLOG.mX[484UL] = t372->mX.mX[14UL] * 0.1;
  out->mLOG.mX[485UL] = t372->mX.mX[135UL];
  out->mLOG.mX[486UL] = t372->mX.mX[139UL];
  out->mLOG.mX[487UL] = t372->mX.mX[140UL];
  out->mLOG.mX[488UL] = t372->mX.mX[141UL];
  out->mLOG.mX[489UL] = t372->mX.mX[142UL];
  out->mLOG.mX[490UL] = t372->mX.mX[143UL];
  out->mLOG.mX[491UL] = t195;
  out->mLOG.mX[492UL] = t238;
  out->mLOG.mX[493UL] = t372->mX.mX[144UL];
  out->mLOG.mX[494UL] = t372->mX.mX[141UL];
  out->mLOG.mX[495UL] = t372->mX.mX[142UL];
  out->mLOG.mX[496UL] = 1.0 - t372->mX.mX[15UL];
  out->mLOG.mX[497UL] = t372->mX.mX[138UL];
  out->mLOG.mX[498UL] = t372->mX.mX[147UL];
  out->mLOG.mX[499UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[500UL] = t372->mX.mX[148UL];
  out->mLOG.mX[501UL] = t372->mX.mX[41UL];
  out->mLOG.mX[502UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[503UL] = t372->mX.mX[42UL];
  out->mLOG.mX[504UL] = t372->mX.mX[29UL];
  out->mLOG.mX[505UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[506UL] = t372->mX.mX[30UL];
  out->mLOG.mX[507UL] = t372->mX.mX[17UL];
  out->mLOG.mX[508UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[509UL] = t372->mX.mX[18UL];
  for (t160 = 0UL; t160 < 8UL; t160++) {
    out->mLOG.mX[t160 + 510UL] = t132[t160];
  }

  out->mLOG.mX[518UL] = t372->mX.mX[17UL];
  out->mLOG.mX[519UL] = t372->mX.mX[149UL];
  out->mLOG.mX[520UL] = t372->mX.mX[152UL];
  out->mLOG.mX[521UL] = -t372->mX.mX[53UL];
  out->mLOG.mX[522UL] = t372->mX.mX[38UL];
  out->mLOG.mX[523UL] = t372->mX.mX[17UL] - 273.15;
  out->mLOG.mX[524UL] = t372->mX.mX[161UL];
  out->mLOG.mX[525UL] = t372->mX.mX[162UL];
  out->mLOG.mX[526UL] = t372->mX.mX[18UL];
  out->mLOG.mX[527UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[528UL] = t239 * 100000.0;
  out->mLOG.mX[529UL] = t372->mX.mX[150UL];
  out->mLOG.mX[530UL] = t372->mX.mX[17UL];
  out->mLOG.mX[531UL] = t372->mX.mX[18UL];
  out->mLOG.mX[532UL] = t240;
  out->mLOG.mX[533UL] = t372->mX.mX[147UL];
  out->mLOG.mX[534UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[535UL] = t372->mX.mX[148UL];
  out->mLOG.mX[536UL] = t372->mX.mX[152UL];
  out->mLOG.mX[537UL] = t372->mX.mX[153UL];
  out->mLOG.mX[538UL] = t372->mX.mX[154UL];
  out->mLOG.mX[539UL] = t372->mX.mX[155UL];
  out->mLOG.mX[540UL] = t372->mX.mX[156UL];
  out->mLOG.mX[541UL] = t372->mX.mX[41UL];
  out->mLOG.mX[542UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[543UL] = t372->mX.mX[42UL];
  out->mLOG.mX[544UL] = -t372->mX.mX[53UL];
  out->mLOG.mX[545UL] = t372->mX.mX[157UL];
  out->mLOG.mX[546UL] = -t372->mX.mX[47UL];
  out->mLOG.mX[547UL] = -t372->mX.mX[55UL];
  out->mLOG.mX[548UL] = t372->mX.mX[158UL];
  out->mLOG.mX[549UL] = t372->mX.mX[29UL];
  out->mLOG.mX[550UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[551UL] = t372->mX.mX[30UL];
  out->mLOG.mX[552UL] = t372->mX.mX[38UL];
  out->mLOG.mX[553UL] = t372->mX.mX[159UL];
  out->mLOG.mX[554UL] = t372->mX.mX[32UL];
  out->mLOG.mX[555UL] = t372->mX.mX[40UL];
  out->mLOG.mX[556UL] = t372->mX.mX[160UL];
  out->mLOG.mX[557UL] = Control_Signal_AR;
  out->mLOG.mX[558UL] = t372->mX.mX[154UL];
  out->mLOG.mX[559UL] = -t372->mX.mX[47UL];
  out->mLOG.mX[560UL] = t372->mX.mX[32UL];
  out->mLOG.mX[561UL] = t372->mX.mX[155UL];
  out->mLOG.mX[562UL] = -t372->mX.mX[55UL];
  out->mLOG.mX[563UL] = t372->mX.mX[40UL];
  out->mLOG.mX[564UL] = 1.0 - t372->mX.mX[18UL];
  out->mLOG.mX[565UL] = t372->mX.mX[151UL];
  out->mLOG.mX[566UL] = t372->mX.mX[29UL];
  out->mLOG.mX[567UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[568UL] = t372->mX.mX[30UL];
  out->mLOG.mX[569UL] = t195;
  out->mLOG.mX[570UL] = -t195;
  out->mLOG.mX[571UL] = t372->mX.mX[17UL];
  out->mLOG.mX[572UL] = t372->mX.mX[17UL];
  out->mLOG.mX[573UL] = t195;
  out->mLOG.mX[574UL] = t372->mX.mX[56UL];
  out->mLOG.mX[575UL] = t372->mX.mX[56UL] * 5.0985810648896409E-6;
  out->mLOG.mX[576UL] = t372->mX.mX[56UL] * t372->mX.mX[56UL] *
    5.09858106488964E-6;
  out->mLOG.mX[577UL] = t372->mX.mX[79UL];
  out->mLOG.mX[578UL] = t372->mX.mX[80UL];
  out->mLOG.mX[579UL] = -t372->mX.mX[71UL];
  out->mLOG.mX[580UL] = t372->mX.mX[79UL];
  out->mLOG.mX[581UL] = t372->mX.mX[80UL];
  out->mLOG.mX[582UL] = -t372->mX.mX[71UL];
  out->mLOG.mX[583UL] = t372->mX.mX[163UL];
  out->mLOG.mX[584UL] = -t372->mX.mX[69UL];
  out->mLOG.mX[585UL] = -t372->mX.mX[75UL];
  out->mLOG.mX[586UL] = -t372->mX.mX[69UL];
  out->mLOG.mX[587UL] = -t372->mX.mX[75UL];
  out->mLOG.mX[588UL] = t372->mX.mX[164UL];
  out->mLOG.mX[589UL] = t372->mX.mX[165UL];
  out->mLOG.mX[590UL] = t372->mX.mX[166UL];
  out->mLOG.mX[591UL] = t372->mX.mX[164UL];
  out->mLOG.mX[592UL] = t372->mX.mX[165UL];
  out->mLOG.mX[593UL] = t372->mX.mX[166UL];
  out->mLOG.mX[594UL] = t372->mX.mX[167UL];
  out->mLOG.mX[595UL] = -Expiratory_Valve_mdot_choked;
  out->mLOG.mX[596UL] = -t372->mX.mX[95UL];
  out->mLOG.mX[597UL] = -Expiratory_Valve_mdot_choked;
  out->mLOG.mX[598UL] = -t372->mX.mX[95UL];
  out->mLOG.mX[599UL] = t372->mX.mX[65UL];
  out->mLOG.mX[600UL] = -184.19157727996955 + t201 * -1000.0;
  out->mLOG.mX[601UL] = (t372->mX.mX[65UL] * -0.00062831853071795862 +
    0.18419157727996954) * -1591.5494309189535;
  out->mLOG.mX[602UL] = -184.19157727996955 + t201 * -1000.0;
  out->mLOG.mX[603UL] = t372->mX.mX[147UL];
  out->mLOG.mX[604UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[605UL] = t372->mX.mX[148UL];
  out->mLOG.mX[606UL] = t372->mX.mX[147UL];
  out->mLOG.mX[607UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[608UL] = t372->mX.mX[148UL];
  out->mLOG.mX[609UL] = t372->mX.mX[147UL];
  out->mLOG.mX[610UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[611UL] = t372->mX.mX[148UL];
  out->mLOG.mX[612UL] = t372->mX.mX[168UL];
  out->mLOG.mX[613UL] = t372->mX.mX[147UL];
  out->mLOG.mX[614UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[615UL] = t372->mX.mX[148UL];
  out->mLOG.mX[616UL] = t372->mX.mX[2UL] * 99999.999999999985;
  out->mLOG.mX[617UL] = t372->mX.mX[147UL];
  out->mLOG.mX[618UL] = t372->mX.mX[2UL] * 99999.999999999985;
  out->mLOG.mX[619UL] = t372->mX.mX[147UL];
  out->mLOG.mX[620UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[621UL] = t372->mX.mX[148UL];
  out->mLOG.mX[622UL] = t372->mX.mX[147UL];
  out->mLOG.mX[623UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[624UL] = t372->mX.mX[148UL];
  out->mLOG.mX[625UL] = -t372->mX.mX[152UL];
  out->mLOG.mX[626UL] = t245 * 1.0E-6;
  out->mLOG.mX[627UL] = -t372->mX.mX[154UL];
  out->mLOG.mX[628UL] = -t372->mX.mX[155UL];
  out->mLOG.mX[629UL] = t245 * 0.060000000000000012;
  out->mLOG.mX[630UL] = t372->mX.mX[134UL];
  out->mLOG.mX[631UL] = t372->mX.mX[14UL] * 0.1;
  out->mLOG.mX[632UL] = t372->mX.mX[135UL];
  out->mLOG.mX[633UL] = t372->mX.mX[147UL];
  out->mLOG.mX[634UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[635UL] = t372->mX.mX[148UL];
  out->mLOG.mX[636UL] = t372->mX.mX[169UL] * 0.1;
  out->mLOG.mX[637UL] = t372->mX.mX[19UL] * 0.1;
  out->mLOG.mX[638UL] = t372->mX.mX[170UL] * 0.1;
  for (t160 = 0UL; t160 < 8UL; t160++) {
    out->mLOG.mX[t160 + 639UL] = t136[t160];
  }

  out->mLOG.mX[647UL] = t372->mX.mX[171UL];
  out->mLOG.mX[648UL] = t372->mX.mX[182UL];
  out->mLOG.mX[649UL] = t372->mX.mX[183UL];
  out->mLOG.mX[650UL] = t372->mX.mX[21UL];
  out->mLOG.mX[651UL] = t372->mX.mX[174UL];
  out->mLOG.mX[652UL] = -t372->mX.mX[141UL];
  out->mLOG.mX[653UL] = t372->mX.mX[175UL] * 0.1;
  out->mLOG.mX[654UL] = Trachea_Mach_A * 1.0E-5;
  out->mLOG.mX[655UL] = t372->mX.mX[176UL];
  out->mLOG.mX[656UL] = -t372->mX.mX[154UL];
  out->mLOG.mX[657UL] = t372->mX.mX[177UL] * 0.1;
  out->mLOG.mX[658UL] = t250 * 1.0E-5;
  out->mLOG.mX[659UL] = t372->mX.mX[20UL] - 273.15;
  out->mLOG.mX[660UL] = t372->mX.mX[173UL];
  out->mLOG.mX[661UL] = -t372->mX.mX[139UL];
  out->mLOG.mX[662UL] = -t372->mX.mX[152UL];
  out->mLOG.mX[663UL] = t247 * 100000.0;
  out->mLOG.mX[664UL] = t372->mX.mX[25UL];
  out->mLOG.mX[665UL] = t372->mX.mX[172UL];
  out->mLOG.mX[666UL] = t372->mX.mX[20UL];
  out->mLOG.mX[667UL] = t372->mX.mX[21UL];
  out->mLOG.mX[668UL] = t203;
  out->mLOG.mX[669UL] = t372->mX.mX[134UL];
  out->mLOG.mX[670UL] = t372->mX.mX[14UL] * 0.1;
  out->mLOG.mX[671UL] = t372->mX.mX[135UL];
  out->mLOG.mX[672UL] = -t372->mX.mX[139UL];
  out->mLOG.mX[673UL] = t372->mX.mX[178UL];
  out->mLOG.mX[674UL] = -t372->mX.mX[141UL];
  out->mLOG.mX[675UL] = -t372->mX.mX[142UL];
  out->mLOG.mX[676UL] = t372->mX.mX[179UL];
  out->mLOG.mX[677UL] = t372->mX.mX[147UL];
  out->mLOG.mX[678UL] = t372->mX.mX[2UL] * 0.1;
  out->mLOG.mX[679UL] = t372->mX.mX[148UL];
  out->mLOG.mX[680UL] = -t372->mX.mX[152UL];
  out->mLOG.mX[681UL] = t372->mX.mX[180UL];
  out->mLOG.mX[682UL] = -t372->mX.mX[154UL];
  out->mLOG.mX[683UL] = -t372->mX.mX[155UL];
  out->mLOG.mX[684UL] = t372->mX.mX[181UL];
  out->mLOG.mX[685UL] = t254;
  out->mLOG.mX[686UL] = -t372->mX.mX[142UL];
  out->mLOG.mX[687UL] = -t372->mX.mX[155UL];
  out->mLOG.mX[688UL] = t232 * 0.1;
  out->mLOG.mX[689UL] = intrm_sf_mf_592 * 0.1;
  out->mLOG.mX[690UL] = 1.0 - t372->mX.mX[21UL];
  out->mLOG.mX[691UL] = t372->mX.mX[22UL];
  out->mLOG.mX[692UL] = t195;
  out->mLOG.mX[693UL] = t195;
  out->mLOG.mX[694UL] = t372->mX.mX[22UL];
  out->mLOG.mX[695UL] = t372->mX.mX[22UL];
  out->mLOG.mX[696UL] = t195;
  out->mLOG.mX[697UL] = t372->mX.mX[164UL];
  out->mLOG.mX[698UL] = t372->mX.mX[165UL];
  out->mLOG.mX[699UL] = t372->mX.mX[87UL];
  out->mLOG.mX[700UL] = t372->mX.mX[88UL] * 0.1;
  out->mLOG.mX[701UL] = t372->mX.mX[89UL];
  out->mLOG.mX[702UL] = t372->mX.mX[184UL];
  out->mLOG.mX[703UL] = t372->mX.mX[187UL];
  out->mLOG.mX[704UL] = t372->mX.mX[164UL];
  out->mLOG.mX[705UL] = t372->mX.mX[165UL];
  out->mLOG.mX[706UL] = -t372->mX.mX[166UL];
  out->mLOG.mX[707UL] = t372->mX.mX[188UL];
  out->mLOG.mX[708UL] = Expiratory_Valve_mdot_choked;
  out->mLOG.mX[709UL] = t372->mX.mX[95UL];
  out->mLOG.mX[710UL] = t372->mX.mX[189UL];
  out->mLOG.mX[711UL] = Expiratory_Valve_mdot_choked;
  out->mLOG.mX[712UL] = t372->mX.mX[185UL];
  out->mLOG.mX[713UL] = t372->mX.mX[186UL];
  out->mLOG.mX[714UL] = t372->mX.mX[87UL];
  out->mLOG.mX[715UL] = t372->mX.mX[88UL] * 0.1;
  out->mLOG.mX[716UL] = t372->mX.mX[89UL];
  out->mLOG.mX[717UL] = -t372->mX.mX[92UL];
  out->mLOG.mX[718UL] = t372->mX.mX[188UL];
  out->mLOG.mX[719UL] = -Expiratory_Valve_mdot_choked;
  out->mLOG.mX[720UL] = -t372->mX.mX[95UL];
  out->mLOG.mX[721UL] = t372->mX.mX[189UL];
  out->mLOG.mX[722UL] = -Expiratory_Valve_mdot_choked;
  out->mLOG.mX[723UL] = -t372->mX.mX[166UL];
  out->mLOG.mX[724UL] = -t372->mX.mX[92UL];
  out->mLOG.mX[725UL] = Control_Signal_Vdot * 1.0E-6;
  out->mLOG.mX[726UL] = t372->mX.mX[95UL];
  out->mLOG.mX[727UL] = -t372->mX.mX[95UL];
  out->mLOG.mX[728UL] = t252;
  out->mLOG.mX[729UL] = t372->mD.mX[0UL];
  out->mLOG.mX[730UL] = t372->mD.mX[1UL];
  out->mLOG.mX[731UL] = t372->mD.mX[2UL];
  out->mLOG.mX[732UL] = t372->mD.mX[3UL];
  out->mLOG.mX[733UL] = t372->mD.mX[4UL];
  out->mLOG.mX[734UL] = t372->mD.mX[5UL];
  out->mLOG.mX[735UL] = t372->mX.mX[100UL];
  (void)LC;
  (void)out;
  return 0;
}
