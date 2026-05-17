/* MaSrm_Start @ 001a90a4 348B */


/* YAMAHA::MaSrm_Start(unsigned int) */

void YAMAHA::MaSrm_Start(uint param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  uchar local_10;
  byte local_f;
  undefined1 local_e;
  byte local_d;
  byte local_c;
  undefined1 local_b;
  undefined1 local_a;
  long local_8;
  
  lVar3 = (ulong)(param_1 & 3) * 0x78;
  lVar2 = DAT_005dd9b8 + lVar3;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (*(int *)(lVar2 + 0x4c) == 0) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar1 = (int)(((ulong)(uint)(*(int *)(lVar2 + 0x20) * *(int *)(DAT_005dd9b8 + lVar3)) / 100 <<
                  0x10) / 24000 + 1 >> 1) * 0x8003;
    if ((int)uVar1 < 0) {
      local_c = 0x80;
      local_d = 0x28;
    }
    else if (uVar1 < 0x4000001) {
      local_c = 0x81;
      local_d = 0;
    }
    else {
      local_c = 0x81;
      local_d = 0;
      uVar1 = ((uint)((ulong)uVar1 + 0x8000 >> 0x10) >>
               (ulong)((byte)(&DAT_0048c4d0)[(ulong)uVar1 + 0x8000 >> 0x1a] & 0x1f) & 0x3ff) +
              (uint)(byte)(&DAT_0048c4d0)[(ulong)uVar1 + 0x8000 >> 0x1a] * 0x400;
      if (uVar1 != 0) {
        local_c = (byte)uVar1 | 0x80;
        local_d = (byte)(uVar1 >> 7) & 0x3f;
      }
    }
    local_f = (byte)(param_1 & 3) | 0x80;
    *(undefined4 *)(lVar2 + 0x4c) = 2;
    local_10 = 0xdd;
    local_e = 0xe1;
    local_b = 0xe0;
    local_a = 0xfd;
    uVar4 = MaDevDrv_SendDirectPacket(&local_10,7);
  }
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

