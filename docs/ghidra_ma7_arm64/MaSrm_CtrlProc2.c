/* MaSrm_CtrlProc2 @ 001a9fb8 172B */


/* YAMAHA::MaSrm_CtrlProc2(unsigned int) */

void YAMAHA::MaSrm_CtrlProc2(uint param_1)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  uint uVar4;
  uchar local_10;
  byte local_f;
  undefined1 local_e;
  undefined1 local_d;
  long local_8;
  
  lVar3 = DAT_005dd9b8;
  uVar1 = param_1 & 3;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  uVar4 = MaDevDrv_ReadStreamFifoStatus(uVar1);
  bVar2 = (uVar4 >> 7 & 1) != 0;
  if (bVar2) {
    local_f = (byte)uVar1 | 0x80;
    local_10 = 0xdd;
    local_e = 0xe4;
    local_d = 0xa0;
    MaDevDrv_SendDirectPacket(&local_10,4);
    *(undefined4 *)(lVar3 + (ulong)uVar1 * 0x78 + 0x4c) = 1;
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}

