/* MaSrm_StreamRestart @ 0008a258 262B */


/* YAMAHA::MaSrm_StreamRestart(unsigned int) */

void YAMAHA::MaSrm_StreamRestart(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uchar local_28;
  byte local_27;
  undefined1 local_26;
  undefined1 local_25;
  byte local_24;
  undefined1 local_23;
  byte local_22;
  undefined1 local_21;
  byte local_20;
  int local_1c;
  
  piVar4 = *(int **)(DAT_0008a364 + 0x8a272);
  iVar3 = *(int *)(DAT_0008a360 + 0x8a264) + param_1 * 0x70;
  local_1c = *piVar4;
  uVar2 = ((uint)(*(int *)(DAT_0008a360 + 0x8a268 +
                          ((uint)*(byte *)(iVar3 + 0x3f) + (uint)*(byte *)(iVar3 + 0x38) * 0x40) *
                          0x10) << 0x10) / 24000 + 1 >> 1) * 0x8003;
  if ((int)uVar2 < 0) {
    local_24 = 0x80;
    local_25 = 0x28;
  }
  else if (uVar2 < 0x4000001) {
    local_24 = 0x81;
    local_25 = 0;
  }
  else {
    uVar1 = (uint)*(byte *)(DAT_0008a368 + 0x8a334 + (uVar2 + 0x8000 >> 0x1a));
    uVar2 = ((uVar2 + 0x8000 >> 0x10) >> uVar1 & 0x3ff) + uVar1 * 0x400;
    if (uVar2 == 0) {
      local_24 = 0x81;
      local_25 = 0;
    }
    else {
      local_24 = (byte)uVar2 | 0x80;
      local_25 = (undefined1)((uVar2 & 0x1fff) >> 7);
    }
  }
  local_20 = (*(byte *)(iVar3 + 0x3b) & 0x1f) << 2 | 0x80;
  local_22 = *(byte *)(iVar3 + 0x40) | 0xe0;
  local_27 = (byte)param_1 | 0x80;
  local_28 = 0xdd;
  local_26 = 0xe1;
  local_23 = 0xe4;
  local_21 = 0xe0;
  MaDevDrv_SendDirectPacket(&local_28,9);
  MaDevDrv_SetIrqCtrl((uchar)(1 << (param_1 & 0xff)),'\0');
  iVar5 = *piVar4;
  *(undefined4 *)(iVar3 + 0x44) = 2;
  if (local_1c == iVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

