/* Mapi_Hvs_Standby @ 00187524 200B */


/* YAMAHA::Mapi_Hvs_Standby(int) */

void YAMAHA::Mapi_Hvs_Standby(int param_1)

{
  undefined8 uVar1;
  undefined4 local_18 [2];
  undefined8 local_10;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  mapimachdep_LockApi();
  if (DAT_00577e10 != '\0') {
    if (param_1 != 1) {
      mapimachdep_UnlockApi();
      uVar1 = 0xfffffffe;
      goto LAB_001875ac;
    }
    if (DAT_005783b8 == 2) {
      local_18[0] = 0;
      local_10 = 0;
      MaSmw_Seek(0x300,0,(_MASMW_SEEK_PARAM *)local_18);
      MaSmw_Ctrl(0x300,0x34,DAT_005783d8,(void *)0x0);
      DAT_005783b8 = 3;
      mapimachdep_UnlockApi();
      uVar1 = 0;
      goto LAB_001875ac;
    }
  }
  mapimachdep_UnlockApi();
  uVar1 = 0xfffffff8;
LAB_001875ac:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
}

