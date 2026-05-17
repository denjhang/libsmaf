/* Mapi_Rec_Unload @ 00189ad8 184B */


/* YAMAHA::Mapi_Rec_Unload(int) */

undefined8 YAMAHA::Mapi_Rec_Unload(int param_1)

{
  undefined8 uVar1;
  
  mapimachdep_LockApi();
  if (DAT_00577e10 != '\0') {
    if (param_1 == 1) {
      if (DAT_005788e8 != 1) goto LAB_00189b70;
      uVar1 = MaSmw_Unload(0x700,(void *)0x0);
      if (-1 < (int)uVar1) {
        DAT_005788e0 = 0;
        DAT_00577e38._0_1_ = (char)DAT_00577e38 + -1;
        DAT_005788e4 = 0;
        DAT_005788e8 = 0;
        DAT_005788f8 = 0;
        DAT_00578900 = 0;
        DAT_00578908 = 2;
        DAT_0057890c = 0;
        DAT_00578910 = 8000;
        DAT_00577ee0 = 0;
      }
      mapimachdep_UnlockApi();
    }
    else {
      mapimachdep_UnlockApi();
      uVar1 = 0xfffffffe;
    }
    return uVar1;
  }
LAB_00189b70:
  mapimachdep_UnlockApi();
  return 0xfffffff8;
}

