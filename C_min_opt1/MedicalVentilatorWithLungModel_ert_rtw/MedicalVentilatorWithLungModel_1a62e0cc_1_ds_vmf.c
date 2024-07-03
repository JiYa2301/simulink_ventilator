/* Simscape target specific file.
 * This file is generated for the Simscape network associated with the solver block 'MedicalVentilatorWithLungModel/Solver Configuration'.
 */

#include "ne_ds.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_sys_struct.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_vmf.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_externals.h"
#include "MedicalVentilatorWithLungModel_1a62e0cc_1_ds_external_struct.h"
#include "ssc_ml_fun.h"

int32_T MedicalVentilatorWithLungModel_1a62e0cc_1_ds_vmf(const NeDynamicSystem
  *LC, const NeDynamicSystemInput *t1, NeDsMethodOutput *out)
{
  static boolean_T _cg_const_1[190] = { false, false, false, true, true, true,
    true, true, true, true, true, true, true, true, true, false, true, true,
    true, true, true, true, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, false, true, true, true, true,
    true, true, true, true, false, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, false, true, true, false, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, true, true, true, true, true, true, true,
    true, true, true, true, true, true, false };

  int32_T i;
  (void)t1;
  (void)LC;
  for (i = 0; i < 190; i++) {
    out->mVMF.mX[i] = _cg_const_1[i];
  }

  (void)LC;
  (void)out;
  return 0;
}
