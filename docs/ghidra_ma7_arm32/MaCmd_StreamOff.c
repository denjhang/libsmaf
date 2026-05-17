/* MaCmd_StreamOff @ 000eb034 446B */


/* YAMAHA::MaCmd_StreamOff(int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_StreamOff(int param_1,uint param_2,uchar *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar12 = DAT_000eb1f4;
  bVar1 = (byte)param_2;
  if (param_1 < 0) {
    param_3[1] = bVar1 | 0x80;
    *param_3 = 0xdd;
    param_3[2] = 0xe4;
    param_3[3] = 0xa0;
    return 4;
  }
  iVar11 = DAT_000eb1f4 + 0xeb05e + *(int *)(DAT_000eb1f4 + 0xeb05e) * 0x1c;
  *(undefined1 *)(iVar11 + 0x13) = 0xdd;
  *(byte *)(iVar11 + 0x14) = bVar1 | 0x80;
  *(undefined1 *)(iVar11 + 0x15) = 0xe4;
  *(undefined1 *)(iVar11 + 0x16) = 0xa0;
  *(undefined4 *)(iVar11 + 4) = 4;
  iVar11 = *(int *)(iVar12 + 0xeb05e);
  uVar3 = iVar11 + 1;
  if (0x7f < uVar3) {
    uVar3 = 0;
  }
  *(uint *)(iVar12 + 0xeb05e) = uVar3;
  if (param_1 < 0x80) {
    local_24 = 0xb;
    iVar12 = 1;
    iVar2 = 0xe;
    local_28 = 10;
    iVar6 = 0xd;
    iVar7 = 0xc;
    local_38 = 6;
    local_34 = 7;
    local_30 = 8;
    local_2c = 9;
    iVar10 = 2;
    iVar13 = 5;
    iVar8 = 4;
    iVar9 = 3;
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    do {
      param_3[uVar4] = (byte)param_1 & 0x7f;
      uVar3 = uVar4 + 1;
      iVar5 = param_1 >> 7;
      if (iVar5 < 0x80 || 1 < uVar3) break;
      param_3[uVar3] = (byte)iVar5 & 0x7f;
      uVar3 = uVar4 + 2;
      iVar5 = param_1 >> 0xe;
      if (iVar5 < 0x80 || 1 < uVar3) break;
      param_3[uVar3] = (byte)iVar5 & 0x7f;
      uVar3 = uVar4 + 3;
      iVar5 = param_1 >> 0x15;
      if (iVar5 < 0x80 || 1 < uVar3) break;
      param_3[uVar3] = (byte)iVar5 & 0x7f;
      uVar4 = uVar4 + 4;
      param_1 = param_1 >> 0x1c;
      uVar3 = uVar4;
      iVar5 = param_1;
    } while (0x7f < param_1 && uVar4 < 2);
    local_38 = uVar3 + 6;
    local_34 = uVar3 + 7;
    local_30 = uVar3 + 8;
    local_2c = uVar3 + 9;
    local_28 = uVar3 + 10;
    local_24 = uVar3 + 0xb;
    iVar10 = uVar3 + 2;
    iVar9 = uVar3 + 3;
    iVar8 = uVar3 + 4;
    iVar13 = uVar3 + 5;
    iVar7 = uVar3 + 0xc;
    iVar6 = uVar3 + 0xd;
    iVar2 = uVar3 + 0xe;
    iVar12 = uVar3 + 1;
    param_1 = iVar5;
  }
  param_3[uVar3] = (byte)param_1 | 0x80;
  param_3[iVar12] = 0xa7;
  param_3[iVar10] = 0x80;
  param_3[iVar9] = 0x80;
  param_3[iVar8] = 0xa7;
  param_3[iVar13] = 0x80;
  param_3[local_38] = 0x80;
  param_3[local_34] = 0xa2;
  param_3[local_30] = '\x0e';
  param_3[local_2c] = (byte)iVar11 | 0x80;
  param_3[local_28] = 0x80;
  param_3[local_24] = 0x98;
  param_3[iVar7] = bVar1 & 0xf;
  param_3[iVar6] = 0x80;
  return iVar2;
}

