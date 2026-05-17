/* Mapi_Hvs_Open @ 00186e30 248B */


/* YAMAHA::Mapi_Hvs_Open(int, unsigned int, int (*)(int, MAPI_MELODY_CBEVT, unsigned int)) */

void YAMAHA::Mapi_Hvs_Open(int param_1,uint param_2,_func_int_int_MAPI_MELODY_CBEVT_uint *param_3)

{
  undefined8 uVar1;
  uint local_38 [2];
  undefined8 local_30;
  undefined4 local_28;
  code *local_20;
  undefined4 local_18;
  undefined8 local_10;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  mapimachdep_LockApi();
  if (DAT_00577e10 != '\0') {
    if (param_1 != 1) {
      mapimachdep_UnlockApi();
      uVar1 = 0xfffffffe;
      goto LAB_00186ee4;
    }
    if (DAT_005783b8 == 1) {
      local_38[0] = param_2 & 0xff00;
      local_38[1] = 8;
      local_30 = DAT_005783c8;
      local_28 = DAT_005783d0;
      local_20 = FUN_0017d89c;
      local_18 = 0;
      local_10 = 0;
      uVar1 = MaSmw_Open(0x300,(_MASMW_OPEN_PARAM *)local_38);
      if (-1 < (int)uVar1) {
        DAT_005783b8 = 2;
        PTR_FUN_005783c0 = param_3;
      }
      mapimachdep_UnlockApi();
      goto LAB_00186ee4;
    }
  }
  mapimachdep_UnlockApi();
  uVar1 = 0xfffffff8;
LAB_00186ee4:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

