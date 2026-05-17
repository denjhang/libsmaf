/* MaCmd_StreamPanpot @ 000eb1f8 418B */


/* YAMAHA::MaCmd_StreamPanpot(unsigned int, int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_StreamPanpot(uint param_1,int param_2,uint param_3,uchar *param_4)

{
  int iVar1;
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
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  iVar12 = DAT_000eb39c;
  if (param_2 < 0) {
    param_4[3] = (byte)param_3 & 0x7c | 0x80;
    param_4[1] = (byte)param_1 | 0x80;
    *param_4 = 0xdd;
    param_4[2] = 0xdf;
    return 4;
  }
  iVar11 = DAT_000eb39c + 0xeb226 + *(int *)(DAT_000eb39c + 0xeb226) * 0x1c;
  *(byte *)(iVar11 + 0x16) = (byte)param_3 & 0x7c | 0x80;
  *(byte *)(iVar11 + 0x14) = (byte)param_1 | 0x80;
  *(undefined1 *)(iVar11 + 0x13) = 0xdd;
  *(undefined1 *)(iVar11 + 0x15) = 0xdf;
  *(undefined4 *)(iVar11 + 4) = 4;
  iVar11 = *(int *)(iVar12 + 0xeb226);
  uVar3 = iVar11 + 1;
  if (0x7f < uVar3) {
    uVar3 = 0;
  }
  *(uint *)(iVar12 + 0xeb226) = uVar3;
  if (param_2 < 0x80) {
    iVar12 = 1;
    iVar1 = 0xd;
    local_30 = 8;
    local_2c = 9;
    local_28 = 10;
    local_24 = 0xb;
    iVar5 = 0xc;
    iVar6 = 7;
    iVar7 = 6;
    iVar13 = 5;
    iVar8 = 4;
    iVar9 = 3;
    iVar10 = 2;
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
    do {
      param_4[uVar4] = (byte)param_2 & 0x7f;
      uVar3 = uVar4 + 1;
      iVar2 = param_2 >> 7;
      if (iVar2 < 0x80 || 1 < uVar3) break;
      param_4[uVar3] = (byte)iVar2 & 0x7f;
      uVar3 = uVar4 + 2;
      iVar2 = param_2 >> 0xe;
      if (iVar2 < 0x80 || 1 < uVar3) break;
      param_4[uVar3] = (byte)iVar2 & 0x7f;
      uVar3 = uVar4 + 3;
      iVar2 = param_2 >> 0x15;
      if (iVar2 < 0x80 || 1 < uVar3) break;
      param_4[uVar3] = (byte)iVar2 & 0x7f;
      uVar4 = uVar4 + 4;
      param_2 = param_2 >> 0x1c;
      iVar2 = param_2;
      uVar3 = uVar4;
    } while (0x7f < param_2 && uVar4 < 2);
    local_30 = uVar3 + 8;
    local_2c = uVar3 + 9;
    iVar10 = uVar3 + 2;
    local_28 = uVar3 + 10;
    local_24 = uVar3 + 0xb;
    iVar9 = uVar3 + 3;
    iVar8 = uVar3 + 4;
    iVar13 = uVar3 + 5;
    iVar7 = uVar3 + 6;
    iVar6 = uVar3 + 7;
    iVar5 = uVar3 + 0xc;
    iVar1 = uVar3 + 0xd;
    iVar12 = uVar3 + 1;
    param_2 = iVar2;
  }
  param_4[uVar3] = (byte)param_2 | 0x80;
  param_4[iVar12] = 0xa7;
  param_4[iVar10] = 0x80;
  param_4[iVar9] = 0x80;
  param_4[iVar8] = 0xa7;
  param_4[iVar13] = 0x80;
  param_4[iVar7] = 0x80;
  param_4[iVar6] = 0xa7;
  param_4[local_30] = 0x80;
  param_4[local_2c] = 0x80;
  param_4[local_28] = 0xa2;
  param_4[local_24] = '\x0e';
  param_4[iVar5] = (byte)iVar11 | 0x80;
  return iVar1;
}

