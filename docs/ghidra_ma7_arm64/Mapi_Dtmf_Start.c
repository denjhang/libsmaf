/* Mapi_Dtmf_Start @ 00189890 152B */


/* YAMAHA::Mapi_Dtmf_Start(int) */

undefined8 YAMAHA::Mapi_Dtmf_Start(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  mapimachdep_LockApi();
  iVar1 = DAT_00578764;
  if (DAT_00577e10 != '\0') {
    if (param_1 == 0) {
      if (DAT_00578764 != 3) goto LAB_00189904;
      DAT_00578764 = 4;
      uVar2 = MaSmw_Start(0x500,(void *)0x0);
      if ((int)uVar2 < 0) {
        DAT_00578764 = iVar1;
      }
      mapimachdep_UnlockApi();
    }
    else {
      mapimachdep_UnlockApi();
      uVar2 = 0xfffffffe;
    }
    return uVar2;
  }
LAB_00189904:
  mapimachdep_UnlockApi();
  return 0xfffffff8;
}

