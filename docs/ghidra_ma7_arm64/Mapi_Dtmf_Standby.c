/* Mapi_Dtmf_Standby @ 00189808 136B */


/* YAMAHA::Mapi_Dtmf_Standby(int) */

undefined4 YAMAHA::Mapi_Dtmf_Standby(int param_1)

{
  undefined4 uVar1;
  
  mapimachdep_LockApi();
  if (DAT_00577e10 != '\0') {
    if (param_1 == 0) {
      if (DAT_00578764 != 2) goto LAB_0018986c;
      MaSmw_Seek(0x500,0,(_MASMW_SEEK_PARAM *)0x0);
      DAT_00578764 = 3;
      mapimachdep_UnlockApi();
      uVar1 = 0;
    }
    else {
      mapimachdep_UnlockApi();
      uVar1 = 0xfffffffe;
    }
    return uVar1;
  }
LAB_0018986c:
  mapimachdep_UnlockApi();
  return 0xfffffff8;
}

