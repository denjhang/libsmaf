/* MaSrm_Close @ 001a9ed4 228B */


/* YAMAHA::MaSrm_Close(unsigned int) */

void YAMAHA::MaSrm_Close(uint param_1)

{
  uint uVar1;
  long lVar2;
  uchar local_10;
  undefined1 local_f;
  byte local_e;
  undefined1 local_d;
  undefined1 local_c;
  long local_8;
  
  uVar1 = param_1 & 3;
  lVar2 = (ulong)uVar1 * 0x78;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (*(int *)(DAT_005dd9b8 + lVar2 + 0x4c) == 3) {
    MaSrm_CtrlProc(uVar1);
  }
  MaDevDrv_ResetIrqCtrl((uchar)(1 << (ulong)uVar1),'\0');
  local_f = (undefined1)uVar1;
  local_10 = 0xdd;
  local_d = 0xe4;
  local_c = 0x80;
  local_e = *(byte *)(DAT_005dd9b8 + lVar2 + 0x42) & 3 | 0x80;
  MaDevDrv_SendDirectPacket(&local_10,5);
  *(undefined4 *)(DAT_005dd9b8 + lVar2 + 0x4c) = 0;
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

