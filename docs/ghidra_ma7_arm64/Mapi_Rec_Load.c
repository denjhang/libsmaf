/* Mapi_Rec_Load @ 001899ac 300B */


/* YAMAHA::Mapi_Rec_Load(unsigned char*, unsigned int, unsigned char) */

void YAMAHA::Mapi_Rec_Load(uchar *param_1,uint param_2,uchar param_3)

{
  int iVar1;
  int local_20;
  int local_1c;
  uchar *local_18;
  uint local_10;
  long local_8;
  
  local_20 = 0;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  local_1c = 0;
  local_18 = (uchar *)0x0;
  local_10 = 0;
  mapimachdep_LockApi();
  if (DAT_00577e10 == '\0') {
    mapimachdep_UnlockApi();
    iVar1 = -8;
  }
  else if ((((param_3 == '\0') && (param_1 != (uchar *)0x0)) && (0x7ff < param_2)) &&
          ((param_2 & 3) == 0)) {
    if (((char)DAT_00577e38 == '\0') && (DAT_005788e8 == 0)) {
      local_20 = DAT_005788e8;
      local_1c = DAT_005788e8;
      local_18 = param_1;
      local_10 = param_2;
      iVar1 = MaSmw_Check(0x700,(_MASMW_CHECK_PARAM *)&local_20);
      if (-1 < iVar1) {
        iVar1 = 1;
        DAT_005788e4 = 1;
        DAT_00577e38._0_1_ = (char)DAT_00577e38 + '\x01';
        DAT_005788e0 = 0x14;
        DAT_005788e8 = 1;
        DAT_00577ee0 = 0x14;
        DAT_005788f8 = param_1;
        DAT_00578900 = param_2;
      }
      mapimachdep_UnlockApi();
    }
    else {
      mapimachdep_UnlockApi();
      iVar1 = -3;
    }
  }
  else {
    mapimachdep_UnlockApi();
    iVar1 = -2;
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1);
}

