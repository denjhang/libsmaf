/* Mapi_Din_Open @ 001886bc 316B */


/* YAMAHA::Mapi_Din_Open(int, unsigned int, int (*)(int, MAPI_MELODY_CBEVT, unsigned int)) */

void YAMAHA::Mapi_Din_Open(int param_1,uint param_2,_func_int_int_MAPI_MELODY_CBEVT_uint *param_3)

{
  int iVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint local_38;
  int local_34;
  undefined8 local_30;
  int local_28;
  code *local_20;
  int local_18;
  undefined8 local_10;
  long local_8;
  
  uVar3 = (ulong)(param_1 + 1);
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  mapimachdep_LockApi();
  if (DAT_00577e10 != '\0') {
    if (1 < (uint)param_1) {
      mapimachdep_UnlockApi();
      uVar2 = 0xfffffffe;
      goto LAB_001887a4;
    }
    if (1 < DAT_00577e35) {
      mapimachdep_UnlockApi();
      uVar2 = 0xfffffffd;
      goto LAB_001887a4;
    }
    iVar1 = (&DAT_00578570)[uVar3 * 0xe];
    if (iVar1 == 0) {
      local_38 = param_2 & 0xff00;
      local_30 = 0;
      local_20 = FUN_0017d89c;
      local_10 = 0;
      local_34 = iVar1;
      local_28 = iVar1;
      local_18 = iVar1;
      uVar2 = MaSmw_Open(*(uint *)(&DAT_00489fd0 + (uVar3 + 0x5a) * 4),
                         (_MASMW_OPEN_PARAM *)&local_38);
      if (-1 < (int)uVar2) {
        DAT_00577e35 = DAT_00577e35 + 1;
        (&PTR_FUN_00578578)[uVar3 * 7] = param_3;
        *(undefined4 *)(&DAT_00577ea0 + uVar3 * 4) = 0x12;
        (&DAT_00578570)[uVar3 * 0xe] = 2;
      }
      mapimachdep_UnlockApi();
      goto LAB_001887a4;
    }
  }
  mapimachdep_UnlockApi();
  uVar2 = 0xfffffff8;
LAB_001887a4:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

