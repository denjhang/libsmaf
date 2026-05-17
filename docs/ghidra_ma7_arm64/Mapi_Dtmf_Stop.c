/* Mapi_Dtmf_Stop @ 00189928 132B */


/* YAMAHA::Mapi_Dtmf_Stop(int) */

undefined8 YAMAHA::Mapi_Dtmf_Stop(int param_1)

{
  undefined8 uVar1;
  
  mapimachdep_LockApi();
  if (DAT_00577e10 != '\0') {
    if (param_1 == 0) {
      if (DAT_00578764 != 4) goto LAB_0018998c;
      uVar1 = MaSmw_Stop(0x500,(void *)0x0);
      if (-1 < (int)uVar1) {
        DAT_00578764 = 3;
      }
      mapimachdep_UnlockApi();
    }
    else {
      mapimachdep_UnlockApi();
      uVar1 = 0xfffffffe;
    }
    return uVar1;
  }
LAB_0018998c:
  mapimachdep_UnlockApi();
  return 0xfffffff8;
}

