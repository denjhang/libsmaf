/* MaSrm_SetSpeed @ 001a931c 336B */


/* YAMAHA::MaSrm_SetSpeed(unsigned int, unsigned int) */

void YAMAHA::MaSrm_SetSpeed(uint param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  uchar local_10;
  byte local_f;
  undefined1 local_e;
  byte local_d;
  byte local_c;
  long local_8;
  
  lVar2 = DAT_005dd9b8 + (ulong)param_1 * 0x78;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  uVar3 = (ulong)(param_2 * *(int *)(DAT_005dd9b8 + (ulong)param_1 * 0x78)) / 100;
  if ((int)uVar3 - 4000U < 0xabe1) {
    uVar4 = 0;
    *(uint *)(lVar2 + 0x20) = param_2;
    if (*(int *)(lVar2 + 0x4c) == 2) {
      uVar1 = (int)((uVar3 << 0x10) / 24000 + 1 >> 1) * 0x8003;
      if ((int)uVar1 < 0) {
        local_c = 0x80;
        local_d = 0x28;
      }
      else {
        local_d = 0;
        uVar3 = (ulong)uVar1 + 0x8000;
        local_c = 0x81;
        uVar1 = ((uint)(uVar3 >> 0x10) >> (ulong)((byte)(&DAT_0048c4d0)[uVar3 >> 0x1a] & 0x1f) &
                0x3ff) + (uint)(byte)(&DAT_0048c4d0)[uVar3 >> 0x1a] * 0x400;
        if (uVar1 != 0) {
          local_c = (byte)uVar1 | 0x80;
          local_d = (byte)(uVar1 >> 7) & 0x3f;
        }
      }
      local_f = (byte)param_1 | 0x80;
      local_10 = 0xdd;
      local_e = 0xe1;
      uVar4 = MaDevDrv_SendDirectPacket(&local_10,5);
    }
  }
  else {
    uVar4 = 0xfffffffe;
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

