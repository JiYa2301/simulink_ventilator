/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'MedicalVentilatorWithLungModel/Solver Configuration'.
 */

#include "ne_ds.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_sys_struct.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dnf.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_externals.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T MedicalVentilatorWithLungModel_1a62e0cc_1_ds_dnf(const NeDynamicSystem
  *LC, const NeDynamicSystemInput *t23, NeDsMethodOutput *out)
{
  (void)t23;
  (void)LC;
  out->mDNF.mX[0UL] = 0.2962522621192914;
  out->mDNF.mX[1UL] = 0.2962522621192914;
  out->mDNF.mX[2UL] = -0.99372812020681278;
  out->mDNF.mX[3UL] = 1.0;
  out->mDNF.mX[4UL] = 1.0;
  out->mDNF.mX[5UL] = 1.0;
  out->mDNF.mX[6UL] = -1.0;
  out->mDNF.mX[7UL] = -1.0;
  out->mDNF.mX[8UL] = -0.001;
  out->mDNF.mX[9UL] = -0.001;
  out->mDNF.mX[10UL] = -1.0;
  out->mDNF.mX[11UL] = -1.0;
  out->mDNF.mX[12UL] = 0.99372812020681278;
  out->mDNF.mX[13UL] = -1.0;
  out->mDNF.mX[14UL] = -1.0;
  out->mDNF.mX[15UL] = -1.0;
  out->mDNF.mX[16UL] = -1.0;
  out->mDNF.mX[17UL] = -0.001;
  out->mDNF.mX[18UL] = -0.001;
  out->mDNF.mX[19UL] = -0.001;
  out->mDNF.mX[20UL] = 0.99372812020681278;
  out->mDNF.mX[21UL] = 1.0;
  out->mDNF.mX[22UL] = 1.0;
  out->mDNF.mX[23UL] = -0.001;
  out->mDNF.mX[24UL] = -1.0;
  out->mDNF.mX[25UL] = -1.0;
  out->mDNF.mX[26UL] = 1.0;
  out->mDNF.mX[27UL] = -1.0;
  out->mDNF.mX[28UL] = -1.0;
  out->mDNF.mX[29UL] = -0.001;
  out->mDNF.mX[30UL] = 1.0;
  out->mDNF.mX[31UL] = -0.001;
  out->mDNF.mX[32UL] = 1.0;
  out->mDNF.mX[33UL] = -1.0;
  out->mDNF.mX[34UL] = -1.0;
  out->mDNF.mX[35UL] = -0.001;
  out->mDNF.mX[36UL] = 1.0;
  out->mDNF.mX[37UL] = 1.0;
  out->mDNF.mX[38UL] = -1.0;
  out->mDNF.mX[39UL] = 1.0;
  out->mDNF.mX[40UL] = 4.0E-5;
  (void)LC;
  (void)out;
  return 0;
}
