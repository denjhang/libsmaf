/* Mapi_Phrase_AudioClose @ 0018641c 180B */


/* YAMAHA::Mapi_Phrase_AudioClose(int) */

int YAMAHA::Mapi_Phrase_AudioClose(int param_1)

{
  int iVar1;
  
  mapimachdep_LockApi();
  if (DAT_00577e10 != '\0') {
    if (DAT_00577e14 != 2) {
      mapimachdep_UnlockApi();
      return -1;
    }
    if (param_1 != 1) {
      mapimachdep_UnlockApi();
      return -2;
    }
    if (1 < DAT_00578350) {
      MaSmw_Stop(0x200,(void *)0x0);
      iVar1 = MaSmw_Close(0x200,(void *)0x0);
      if (-1 < iVar1) {
        DAT_00578370 = 0;
        PTR_FUN_00578358 = FUN_0017c7dc;
        DAT_00578350 = 1;
      }
      mapimachdep_UnlockApi();
      return iVar1;
    }
  }
  mapimachdep_UnlockApi();
  return -8;
}

