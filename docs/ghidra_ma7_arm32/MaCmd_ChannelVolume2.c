/* MaCmd_ChannelVolume2 @ 000f3138 488B */


/* YAMAHA::MaCmd_ChannelVolume2(unsigned int, unsigned int, int, unsigned int, unsigned int,
   unsigned char*) */

int YAMAHA::MaCmd_ChannelVolume2
              (uint param_1,uint param_2,int param_3,uint param_4,uint param_5,uchar *param_6)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar14 = DAT_000f3320;
  if (3 < param_2) {
    iVar14 = MaCmd_Nop(param_3,0,param_6);
    return iVar14;
  }
  bVar1 = (byte)param_5;
  if (param_3 < 0) {
    *(byte *)(param_1 * 0x65d0 + DAT_000f3328 + param_4 * 0x1e + 0xf32c4) = bVar1;
    param_6[2] = bVar1 & 0x7c | 0x81;
    param_6[1] = (char)param_2 + '\x04';
    *param_6 = 0xf2;
    return 3;
  }
  iVar7 = param_1 * 0x65d0 + DAT_000f3324;
  iVar11 = DAT_000f3320 + 0xf3172 + *(int *)(DAT_000f3320 + 0xf3172) * 0x1c;
  *(undefined4 *)(iVar11 + 4) = 3;
  iVar3 = *(int *)(iVar14 + 0xf3172);
  *(byte *)(iVar7 + param_4 * 0x1e + 0xf3170) = bVar1;
  uVar8 = iVar3 + 1;
  *(char *)(iVar11 + 0x14) = (char)param_2 + '\x04';
  *(undefined1 *)(iVar11 + 0x13) = 0xf2;
  *(byte *)(iVar11 + 0x15) = bVar1 & 0x7c | 0x81;
  if (0x7f < uVar8) {
    uVar8 = 0;
  }
  *(uint *)(iVar14 + 0xf3172) = uVar8;
  if (param_3 < 0x80) {
    iVar14 = 1;
    iVar2 = 0xd;
    local_30 = 8;
    local_2c = 9;
    local_28 = 10;
    local_24 = 0xb;
    iVar6 = 0xc;
    iVar9 = 7;
    iVar10 = 6;
    iVar7 = 5;
    iVar11 = 4;
    iVar12 = 3;
    iVar13 = 2;
    uVar8 = 0;
  }
  else {
    uVar5 = 0;
    do {
      param_6[uVar5] = (byte)param_3 & 0x7f;
      uVar8 = uVar5 + 1;
      iVar4 = param_3 >> 7;
      if (iVar4 < 0x80 || 1 < uVar8) break;
      param_6[uVar8] = (byte)iVar4 & 0x7f;
      uVar8 = uVar5 + 2;
      iVar4 = param_3 >> 0xe;
      if (iVar4 < 0x80 || 1 < uVar8) break;
      param_6[uVar8] = (byte)iVar4 & 0x7f;
      uVar8 = uVar5 + 3;
      iVar4 = param_3 >> 0x15;
      if (iVar4 < 0x80 || 1 < uVar8) break;
      param_6[uVar8] = (byte)iVar4 & 0x7f;
      uVar5 = uVar5 + 4;
      param_3 = param_3 >> 0x1c;
      iVar4 = param_3;
      uVar8 = uVar5;
    } while (0x7f < param_3 && uVar5 < 2);
    local_30 = uVar8 + 8;
    local_2c = uVar8 + 9;
    iVar13 = uVar8 + 2;
    local_28 = uVar8 + 10;
    local_24 = uVar8 + 0xb;
    iVar12 = uVar8 + 3;
    iVar11 = uVar8 + 4;
    iVar7 = uVar8 + 5;
    iVar10 = uVar8 + 6;
    iVar9 = uVar8 + 7;
    iVar6 = uVar8 + 0xc;
    iVar2 = uVar8 + 0xd;
    iVar14 = uVar8 + 1;
    param_3 = iVar4;
  }
  param_6[uVar8] = (byte)param_3 | 0x80;
  param_6[iVar14] = 0xa7;
  param_6[iVar13] = 0x80;
  param_6[iVar12] = 0x80;
  param_6[iVar11] = 0xa7;
  param_6[iVar7] = 0x80;
  param_6[iVar10] = 0x80;
  param_6[iVar9] = 0xa7;
  param_6[local_30] = 0x80;
  param_6[local_2c] = 0x80;
  param_6[local_28] = 0xa2;
  param_6[local_24] = '\x0e';
  param_6[iVar6] = (byte)iVar3 | 0x80;
  return iVar2;
}

