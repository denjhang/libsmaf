/* Mapi_Phrase_GetPosition @ 0018575c 232B */


/* YAMAHA::Mapi_Phrase_GetPosition(int) */

void YAMAHA::Mapi_Phrase_GetPosition(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  long local_8;
  
  local_c = 0;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  mapimachdep_LockApi();
  if (((DAT_00577e10 != '\0') && (DAT_00577e14 == 2)) && ((uint)param_1 < 4)) {
    if (((&DAT_00578258)[(long)(param_1 + 1) * 10] - 3 < 0x7ffffffd) &&
       ((&DAT_00578258)[(long)(param_1 + 1) * 10] != 4)) {
      iVar1 = MaSmw_Ctrl(*(uint *)(&DAT_00489fd0 + ((long)(param_1 + 1) + 10) * 4),0x2b,0,&local_c);
      uVar2 = local_c;
      if (iVar1 < 0) {
        uVar2 = 0xffffffff;
      }
      mapimachdep_UnlockApi();
      goto LAB_00185808;
    }
  }
  mapimachdep_UnlockApi();
  uVar2 = 0xffffffff;
LAB_00185808:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar2);
  }
  return;
}

