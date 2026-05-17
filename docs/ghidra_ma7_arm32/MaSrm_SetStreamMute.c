/* MaSrm_SetStreamMute @ 0008a394 736B */


/* YAMAHA::MaSrm_SetStreamMute(unsigned int, unsigned int, unsigned int) */

undefined4 YAMAHA::MaSrm_SetStreamMute(uint param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  uchar local_20 [3];
  byte local_1d;
  
  bVar7 = 0x3e < param_2;
  bVar6 = param_2 == 0x3f;
  if (param_2 < 0x40) {
    bVar7 = 2 < param_1;
    bVar6 = param_1 == 3;
  }
  if (!bVar7 || bVar6) {
    uVar1 = 0;
    if (param_3 < 2) {
      uVar5 = param_3 & 0xff;
      uVar3 = param_1 & 0xff;
      iVar2 = *(int *)(DAT_0008a674 + 0x8a3be);
      iVar4 = DAT_0008a674 + 0x8a3c2 + (param_2 + param_1 * 0x40) * 0x10;
      if (param_3 == 1) {
        if ((((*(byte *)(iVar2 + 0x38) == uVar3) &&
             ((uint)*(byte *)(iVar2 + 0x3f) == (param_2 & 0xff))) && (*(int *)(iVar2 + 0x44) == 2))
           && (*(char *)(iVar4 + 0xe) != '\x01')) {
          local_20[0] = 0xdd;
          local_20[1] = 0x80;
          local_1d = 0x80;
          local_20[2] = 0xe0;
          uVar1 = MaDevDrv_SendDirectPacket(local_20,4);
        }
        iVar2 = *(int *)(DAT_0008a684 + 0x8a414);
        if (((*(byte *)(iVar2 + 0xa8) == uVar3) &&
            ((uint)*(byte *)(iVar2 + 0xaf) == (param_2 & 0xff))) &&
           ((*(int *)(iVar2 + 0xb4) == 2 && (*(char *)(iVar4 + 0xe) != '\x01')))) {
          local_20[0] = 0xdd;
          local_20[1] = 0x81;
          local_20[2] = 0xe0;
          local_1d = 0x80;
          uVar1 = MaDevDrv_SendDirectPacket(local_20,4);
        }
        iVar2 = *(int *)(DAT_0008a688 + 0x8a424);
        if (((*(byte *)(iVar2 + 0x118) == uVar3) &&
            ((uint)*(byte *)(iVar2 + 0x11f) == (param_2 & 0xff))) &&
           ((*(int *)(iVar2 + 0x124) == 2 && (*(char *)(iVar4 + 0xe) != '\x01')))) {
          local_20[0] = 0xdd;
          local_20[1] = 0x82;
          local_20[2] = 0xe0;
          local_1d = 0x80;
          uVar1 = MaDevDrv_SendDirectPacket(local_20,4);
        }
        iVar2 = *(int *)(DAT_0008a68c + 0x8a434);
        if ((((*(byte *)(iVar2 + 0x188) == uVar3) &&
             ((uint)*(byte *)(iVar2 + 399) == (param_2 & 0xff))) && (*(int *)(iVar2 + 0x194) == 2))
           && (*(char *)(iVar4 + 0xe) != '\x01')) {
          local_20[0] = 0xdd;
          local_20[1] = 0x83;
          local_20[2] = 0xe0;
          local_1d = 0x80;
          uVar1 = MaDevDrv_SendDirectPacket(local_20,4);
        }
      }
      else {
        if (((*(byte *)(iVar2 + 0x38) == uVar3) &&
            ((uint)*(byte *)(iVar2 + 0x3f) == (param_2 & 0xff))) &&
           ((*(int *)(iVar2 + 0x44) == 2 && (*(byte *)(iVar4 + 0xe) != uVar5)))) {
          local_20[0] = 0xdd;
          local_1d = *(char *)(iVar2 + 0x3b) << 2 | 0x80;
          local_20[1] = 0x80;
          local_20[2] = 0xe0;
          uVar1 = MaDevDrv_SendDirectPacket(local_20,4);
        }
        iVar2 = *(int *)(DAT_0008a678 + 0x8a3d8);
        if (((*(byte *)(iVar2 + 0xa8) == uVar3) &&
            ((uint)*(byte *)(iVar2 + 0xaf) == (param_2 & 0xff))) &&
           ((*(int *)(iVar2 + 0xb4) == 2 && (*(byte *)(iVar4 + 0xe) != uVar5)))) {
          local_20[0] = 0xdd;
          local_1d = *(char *)(iVar2 + 0xab) << 2 | 0x80;
          local_20[1] = 0x81;
          local_20[2] = 0xe0;
          uVar1 = MaDevDrv_SendDirectPacket(local_20,4);
        }
        iVar2 = *(int *)(DAT_0008a67c + 0x8a3e8);
        if ((((*(byte *)(iVar2 + 0x118) == uVar3) &&
             ((uint)*(byte *)(iVar2 + 0x11f) == (param_2 & 0xff))) && (*(int *)(iVar2 + 0x124) == 2)
            ) && (*(byte *)(iVar4 + 0xe) != uVar5)) {
          local_20[0] = 0xdd;
          local_1d = *(char *)(iVar2 + 0x11b) << 2 | 0x80;
          local_20[1] = 0x82;
          local_20[2] = 0xe0;
          uVar1 = MaDevDrv_SendDirectPacket(local_20,4);
        }
        iVar2 = *(int *)(DAT_0008a680 + 0x8a3f8);
        if (((*(byte *)(iVar2 + 0x188) == uVar3) &&
            ((uint)*(byte *)(iVar2 + 399) == (param_2 & 0xff))) &&
           ((*(int *)(iVar2 + 0x194) == 2 && (*(byte *)(iVar4 + 0xe) != uVar5)))) {
          local_20[0] = 0xdd;
          local_1d = *(char *)(iVar2 + 0x18b) << 2 | 0x80;
          local_20[1] = 0x83;
          local_20[2] = 0xe0;
          uVar1 = MaDevDrv_SendDirectPacket(local_20,4);
        }
      }
      *(char *)(iVar4 + 0xe) = (char)param_3;
      return uVar1;
    }
  }
  return 0xffffffff;
}

