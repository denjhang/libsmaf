/* Mapi_Rec_Standby @ 0018a108 140B */


/* YAMAHA::Mapi_Rec_Standby(int) */

undefined8 YAMAHA::Mapi_Rec_Standby(int param_1)

{
  undefined8 uVar1;
  
  mapimachdep_LockApi();
  if (DAT_00577e10 != '\0') {
    if (param_1 == 1) {
      if (DAT_005788e8 != 2) goto LAB_0018a174;
      uVar1 = MaSmw_Seek(0x700,0,(_MASMW_SEEK_PARAM *)0x0);
      if (-1 < (int)uVar1) {
        DAT_005788e8 = 3;
      }
      mapimachdep_UnlockApi();
    }
    else {
      mapimachdep_UnlockApi();
      uVar1 = 0xfffffffe;
    }
    return uVar1;
  }
LAB_0018a174:
  mapimachdep_UnlockApi();
  return 0xfffffff8;
}

