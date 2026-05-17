/* Mapi_Hvs_Load @ 00186c74 288B */


/* YAMAHA::Mapi_Hvs_Load(unsigned char*, unsigned int, unsigned char) */

void YAMAHA::Mapi_Hvs_Load(uchar *param_1,uint param_2,uchar param_3)

{
  int iVar1;
  undefined4 local_20;
  undefined4 local_1c;
  uchar *local_18;
  uint local_10;
  long local_8;
  
  local_20 = 0;
  local_1c = 0;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  local_18 = (uchar *)0x0;
  local_10 = 0;
  mapimachdep_LockApi();
  if (DAT_00577e10 == '\0') {
    mapimachdep_UnlockApi();
    iVar1 = -8;
  }
  else if ((param_3 < 2) && (param_1 != (uchar *)0x0)) {
    if ((DAT_00577e34 == '\0') && (DAT_005783b8 == 0)) {
      local_20 = 0;
      if (param_3 == '\0') {
        local_20 = 2;
      }
      local_1c = 8;
      local_18 = param_1;
      local_10 = param_2;
      iVar1 = MaSmw_Check(0x300,(_MASMW_CHECK_PARAM *)&local_20);
      if (-1 < iVar1) {
        DAT_00577e34 = DAT_00577e34 + '\x01';
        iVar1 = 1;
        DAT_00577e90 = 9;
        DAT_005783b8 = 1;
        DAT_005783c8 = param_1;
        DAT_005783d0 = param_2;
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

