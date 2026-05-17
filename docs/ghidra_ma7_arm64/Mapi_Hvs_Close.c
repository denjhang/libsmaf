/* Mapi_Hvs_Close @ 00186f28 164B */


/* YAMAHA::Mapi_Hvs_Close(int) */

int YAMAHA::Mapi_Hvs_Close(int param_1)

{
  int iVar1;
  
  mapimachdep_LockApi();
  if (DAT_00577e10 != '\0') {
    if (param_1 != 1) {
      mapimachdep_UnlockApi();
      return -2;
    }
    if (1 < DAT_005783b8) {
      MaSmw_Stop(0x300,(void *)0x0);
      iVar1 = MaSmw_Close(0x300,(void *)0x0);
      if (-1 < iVar1) {
        DAT_005783d8 = 0;
        PTR_FUN_005783c0 = FUN_0017c7dc;
        DAT_005783dc = 0;
        DAT_005783e0 = 0;
        DAT_005783b8 = 1;
      }
      mapimachdep_UnlockApi();
      return iVar1;
    }
  }
  mapimachdep_UnlockApi();
  return -8;
}

