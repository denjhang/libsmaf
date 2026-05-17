/* Mapi_Rec_Open @ 00189b90 248B */


/* YAMAHA::Mapi_Rec_Open(int, unsigned short, int (*)(int, MAPI_MELODY_CBEVT, unsigned int)) */

void YAMAHA::Mapi_Rec_Open(int param_1,ushort param_2,_func_int_int_MAPI_MELODY_CBEVT_uint *param_3)

{
  undefined8 uVar1;
  uint local_38;
  uint local_34;
  undefined8 local_30;
  undefined4 local_28;
  code *local_20;
  uint local_18;
  undefined4 *local_10;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  mapimachdep_LockApi();
  if (DAT_00577e10 != '\0') {
    if ((param_1 != 1) || (param_2 != 0)) {
      mapimachdep_UnlockApi();
      uVar1 = 0xfffffffe;
      goto LAB_00189c44;
    }
    if (DAT_005788e8 == 1) {
      local_38 = (uint)param_2;
      local_30 = DAT_005788f8;
      local_28 = DAT_00578900;
      local_20 = FUN_0017d89c;
      local_10 = &DAT_00578908;
      local_34 = (uint)param_2;
      local_18 = local_38;
      uVar1 = MaSmw_Open(0x700,(_MASMW_OPEN_PARAM *)&local_38);
      if (-1 < (int)uVar1) {
        DAT_005788e8 = 2;
        PTR_FUN_005788f0 = param_3;
      }
      mapimachdep_UnlockApi();
      goto LAB_00189c44;
    }
  }
  mapimachdep_UnlockApi();
  uVar1 = 0xfffffff8;
LAB_00189c44:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

