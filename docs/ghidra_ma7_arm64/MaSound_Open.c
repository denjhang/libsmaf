/* MaSound_Open @ 0018af64 296B */


/* YAMAHA::MaSound_Open(int, int, unsigned short, void*) */

void YAMAHA::MaSound_Open(int param_1,int param_2,ushort param_3,void *param_4)

{
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  uint local_38;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 local_28;
  code *local_20;
  undefined4 local_18;
  undefined4 *local_10;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (param_1 == 1) {
    iVar2 = 0;
LAB_0018af9c:
    if (param_2 == 1) {
      lVar3 = (long)iVar2;
      if ((&DAT_0057c43d)[lVar3 * 0x38] == '\x01') {
        local_30 = (&DAT_0057c420)[lVar3 * 7];
        local_34 = 5;
        if (param_1 != 1) {
          local_34 = 0;
        }
        local_38 = param_3 & 0xfff0;
        local_28 = (&DAT_0057c428)[lVar3 * 0xe];
        local_20 = FUN_0018a954;
        local_18 = 0;
        local_10 = DAT_0057c430;
        if (iVar2 != 0) {
          local_10 = &DAT_0057c478;
        }
        uVar1 = MaSmw_Open((&DAT_0048a424)[lVar3 * 2],(_MASMW_OPEN_PARAM *)&local_38);
        if (-1 < (int)uVar1) {
          (&DAT_0057c43d)[lVar3 * 0x38] = 2;
        }
      }
      else {
        uVar1 = 0xffffffff;
      }
      goto LAB_0018b040;
    }
  }
  else {
    iVar2 = 1;
    if (param_1 == 0xd) goto LAB_0018af9c;
  }
  uVar1 = 0xfffffffe;
LAB_0018b040:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar1);
  }
  return;
}

