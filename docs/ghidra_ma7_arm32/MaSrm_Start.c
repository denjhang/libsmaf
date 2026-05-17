/* MaSrm_Start @ 0008b0a0 218B */


/* YAMAHA::MaSrm_Start(unsigned int) */

undefined4 YAMAHA::MaSrm_Start(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uchar local_18;
  byte local_17;
  undefined1 local_16;
  undefined1 local_15;
  byte local_14;
  undefined1 local_13;
  undefined1 local_12;
  
  iVar4 = (param_1 & 3) * 0x70;
  iVar5 = *(int *)(DAT_0008b17c + 0x8b0ac) + iVar4;
  if (*(int *)(iVar5 + 0x44) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar2 = (((uint)(*(int *)(*(int *)(DAT_0008b17c + 0x8b0ac) + iVar4) * *(int *)(iVar5 + 0x20)) /
              100 << 0x10) / 24000 + 1 >> 1) * 0x8003;
    if ((int)uVar2 < 0) {
      local_14 = 0x80;
      local_15 = 0x28;
    }
    else if (uVar2 < 0x4000001) {
      local_14 = 0x81;
      local_15 = 0;
    }
    else {
      uVar3 = (uint)*(byte *)(DAT_0008b180 + 0x8b14e + (uVar2 + 0x8000 >> 0x1a));
      uVar2 = ((uVar2 + 0x8000 >> 0x10) >> uVar3 & 0x3ff) + uVar3 * 0x400;
      if (uVar2 == 0) {
        local_14 = 0x81;
        local_15 = 0;
      }
      else {
        local_14 = (byte)uVar2 | 0x80;
        local_15 = (undefined1)((uVar2 & 0x1fff) >> 7);
      }
    }
    *(undefined4 *)(iVar5 + 0x44) = 2;
    local_17 = (byte)(param_1 & 3) | 0x80;
    local_18 = 0xdd;
    local_16 = 0xe1;
    local_13 = 0xe0;
    local_12 = 0xfd;
    uVar1 = MaDevDrv_SendDirectPacket(&local_18,7);
  }
  return uVar1;
}

