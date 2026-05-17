/* MaSrm_StreamPause @ 001a7b88 200B */


/* YAMAHA::MaSrm_StreamPause(unsigned int) */

void YAMAHA::MaSrm_StreamPause(uint param_1)

{
  uchar uVar1;
  undefined *puVar2;
  long lVar3;
  uchar local_10;
  byte local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  long local_8;
  
  puVar2 = PTR___stack_chk_guard_00567868;
  uVar1 = (uchar)(1 << (ulong)(param_1 & 0x1f));
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  MaDevDrv_ResetIrqCtrl(uVar1,'\0');
  MaDevDrv_WriteReg(0xb,uVar1);
  local_d = 0;
  local_f = (byte)param_1 | 0x80;
  local_10 = 0xdd;
  local_e = 0xe0;
  local_c = 0;
  local_b = 0x80;
  local_a = 0xe4;
  local_9 = 0xe0;
  MaDevDrv_SendDirectPacket(&local_10,8);
  lVar3 = *(long *)puVar2;
  *(undefined4 *)(DAT_005dd9b8 + (ulong)param_1 * 0x78 + 0x4c) = 1;
  if (local_8 == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

