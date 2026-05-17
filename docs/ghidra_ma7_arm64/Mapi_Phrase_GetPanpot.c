/* Mapi_Phrase_GetPanpot @ 00185ad4 104B */


/* YAMAHA::Mapi_Phrase_GetPanpot(int) */

undefined4 YAMAHA::Mapi_Phrase_GetPanpot(int param_1)

{
  undefined4 uVar1;
  
  mapimachdep_LockApi();
  if (((DAT_00577e10 == '\0') || (DAT_00577e14 != 2)) || (3 < (uint)param_1)) {
    mapimachdep_UnlockApi();
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = (&DAT_0057826c)[(long)(param_1 + 1) * 10];
    mapimachdep_UnlockApi();
  }
  return uVar1;
}

