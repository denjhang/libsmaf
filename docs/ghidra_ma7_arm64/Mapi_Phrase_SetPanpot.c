/* Mapi_Phrase_SetPanpot @ 00185a2c 168B */


/* YAMAHA::Mapi_Phrase_SetPanpot(int, int) */

void YAMAHA::Mapi_Phrase_SetPanpot(int param_1,int param_2)

{
  mapimachdep_LockApi();
  if ((((DAT_00577e10 != '\0') && (DAT_00577e14 == 2)) && ((uint)param_1 < 4)) &&
     (param_2 + 1U < 0x81)) {
    if (param_2 == -1) {
      param_2 = 0x40;
    }
    MaSmw_Ctrl(*(uint *)(&DAT_00489fd0 + ((long)(param_1 + 1) + 10) * 4),0x2e,param_2,(void *)0x0);
    (&DAT_0057826c)[(long)(param_1 + 1) * 10] = param_2;
  }
  mapimachdep_UnlockApi();
  return;
}

