/* Mapi_Rec_Close @ 00189c88 152B */


/* YAMAHA::Mapi_Rec_Close(int) */

int YAMAHA::Mapi_Rec_Close(int param_1)

{
  int iVar1;
  
  mapimachdep_LockApi();
  if (DAT_00577e10 != '\0') {
    if (param_1 != 1) {
      mapimachdep_UnlockApi();
      return -2;
    }
    if (1 < DAT_005788e8) {
      MaSmw_Stop(0x700,(void *)0x0);
      iVar1 = MaSmw_Close(0x700,(void *)0x0);
      if (-1 < iVar1) {
        PTR_FUN_005788f0 = FUN_0017c7dc;
        DAT_005788e8 = 1;
      }
      mapimachdep_UnlockApi();
      return iVar1;
    }
  }
  mapimachdep_UnlockApi();
  return -8;
}

