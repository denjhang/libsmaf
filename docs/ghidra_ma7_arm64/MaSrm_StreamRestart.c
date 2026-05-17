/* MaSrm_StreamRestart @ 001a7c50 392B */


/* YAMAHA::MaSrm_StreamRestart(unsigned int) */

void YAMAHA::MaSrm_StreamRestart(uint param_1)

{
  uint uVar1;
  long lVar2;
  uchar local_18;
  byte local_17;
  undefined1 local_16;
  byte local_15;
  byte local_14;
  undefined1 local_13;
  byte local_12;
  undefined1 local_11;
  byte local_10;
  long local_8;
  
  lVar2 = DAT_005dd9b8 + (ulong)param_1 * 0x78;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  uVar1 = (int)(SUB168((ZEXT416((uint)(&DAT_005dc1b8)
                                      [(ulong)*(byte *)(lVar2 + 0x47) * 6 +
                                       (ulong)*(byte *)(lVar2 + 0x40) * 0x180]) *
                       (undefined1  [16])0x10000) / (undefined1  [16])0x5dc0,0) + 1U >> 1) * 0x8003;
  if ((int)uVar1 < 0) {
    local_14 = 0x80;
    local_15 = 0x28;
  }
  else if (uVar1 < 0x4000001) {
    local_14 = 0x81;
    local_15 = 0;
  }
  else {
    local_14 = 0x81;
    local_15 = 0;
    uVar1 = ((uint)((ulong)uVar1 + 0x8000 >> 0x10) >>
             (ulong)((byte)(&DAT_0048c4d0)[(ulong)uVar1 + 0x8000 >> 0x1a] & 0x1f) & 0x3ff) +
            (uint)(byte)(&DAT_0048c4d0)[(ulong)uVar1 + 0x8000 >> 0x1a] * 0x400;
    if (uVar1 != 0) {
      local_14 = (byte)uVar1 | 0x80;
      local_15 = (byte)(uVar1 >> 7) & 0x3f;
    }
  }
  local_17 = (byte)param_1 | 0x80;
  local_12 = *(byte *)(lVar2 + 0x48) | 0xe0;
  local_10 = (*(byte *)(lVar2 + 0x43) & 0x1f) << 2 | 0x80;
  local_18 = 0xdd;
  local_16 = 0xe1;
  local_13 = 0xe4;
  local_11 = 0xe0;
  MaDevDrv_SendDirectPacket(&local_18,9);
  MaDevDrv_SetIrqCtrl((uchar)(1 << (ulong)(param_1 & 0x1f)),'\0');
  *(undefined4 *)(lVar2 + 0x4c) = 2;
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

