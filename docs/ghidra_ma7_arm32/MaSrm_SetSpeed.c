/* MaSrm_SetSpeed @ 0008b21c 208B */


/* YAMAHA::MaSrm_SetSpeed(unsigned int, unsigned int) */

undefined4 YAMAHA::MaSrm_SetSpeed(uint param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uchar local_18;
  byte local_17;
  undefined1 local_16;
  undefined1 local_15;
  byte local_14;
  
  iVar3 = *(int *)(DAT_0008b2ec + 0x8b232) + param_1 * 0x70;
  uVar4 = (*(int *)(*(int *)(DAT_0008b2ec + 0x8b232) + param_1 * 0x70) * param_2) / 100;
  if (uVar4 - 4000 < 0xabe1) {
    *(uint *)(iVar3 + 0x20) = param_2;
    if (*(int *)(iVar3 + 0x44) == 2) {
      iVar3 = ((uVar4 << 0x10) / 24000 + 1 >> 1) * 0x8003;
      if (iVar3 < 0) {
        local_14 = 0x80;
        local_15 = 0x28;
      }
      else {
        uVar4 = iVar3 + 0x8000;
        uVar2 = (uint)*(byte *)(DAT_0008b2f0 + 0x8b298 + (uVar4 >> 0x1a));
        uVar4 = ((uVar4 >> 0x10) >> uVar2 & 0x3ff) + uVar2 * 0x400;
        if (uVar4 == 0) {
          local_14 = 0x81;
          local_15 = 0;
        }
        else {
          local_14 = (byte)uVar4 | 0x80;
          local_15 = (undefined1)((uVar4 & 0x1fff) >> 7);
        }
      }
      local_17 = (byte)param_1 | 0x80;
      local_18 = 0xdd;
      local_16 = 0xe1;
      uVar1 = MaDevDrv_SendDirectPacket(&local_18,5);
      return uVar1;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}

