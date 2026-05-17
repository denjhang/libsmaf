/* MaCmd_StreamPanpot @ 002327b0 392B */


/* YAMAHA::MaCmd_StreamPanpot(unsigned int, int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_StreamPanpot(uint param_1,int param_2,uint param_3,uchar *param_4)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  
  if (param_2 < 0) {
    *param_4 = 0xdd;
    param_4[1] = (byte)param_1 | 0x80;
    param_4[2] = 0xdf;
    param_4[3] = (byte)param_3 & 0x7c | 0x80;
    return 4;
  }
  lVar18 = (ulong)DAT_00763b70 * 0x1c;
  (&DAT_00763b83)[lVar18] = 0xdd;
  (&DAT_00763b84)[lVar18] = (byte)param_1 | 0x80;
  (&DAT_00763b85)[lVar18] = 0xdf;
  (&DAT_00763b86)[lVar18] = (byte)param_3 & 0x7c | 0x80;
  *(undefined4 *)(&DAT_00763b74 + lVar18) = 4;
  uVar1 = DAT_00763b70 + 1;
  bVar2 = (byte)DAT_00763b70;
  if (0x7f < uVar1) {
    uVar1 = 0;
  }
  DAT_00763b70 = uVar1;
  if (param_2 < 0x80) {
    uVar4 = 0;
    iVar17 = 0xd;
    uVar5 = 0xc;
    uVar6 = 0xb;
    uVar7 = 10;
    uVar9 = 9;
    uVar10 = 8;
    uVar11 = 7;
    uVar12 = 6;
    uVar8 = 5;
    uVar13 = 4;
    uVar14 = 3;
    uVar15 = 2;
    uVar16 = 1;
  }
  else {
    lVar18 = 0;
    do {
      iVar17 = (int)lVar18;
      uVar4 = (ulong)(iVar17 + 1U);
      bVar3 = (byte)param_2;
      param_2 = param_2 >> 7;
      param_4[lVar18] = bVar3 & 0x7f;
      if (1 < iVar17 + 1U) break;
      lVar18 = 1;
    } while (0x7f < param_2);
    uVar16 = (ulong)(iVar17 + 2);
    uVar15 = (ulong)(iVar17 + 3);
    uVar14 = (ulong)(iVar17 + 4);
    uVar13 = (ulong)(iVar17 + 5);
    uVar8 = (ulong)(iVar17 + 6);
    uVar12 = (ulong)(iVar17 + 7);
    uVar11 = (ulong)(iVar17 + 8);
    uVar10 = (ulong)(iVar17 + 9);
    uVar9 = (ulong)(iVar17 + 10);
    uVar7 = (ulong)(iVar17 + 0xb);
    uVar6 = (ulong)(iVar17 + 0xc);
    uVar5 = (ulong)(iVar17 + 0xd);
    iVar17 = iVar17 + 0xe;
  }
  param_4[uVar4] = (byte)param_2 | 0x80;
  param_4[uVar16] = 0xa7;
  param_4[uVar15] = 0x80;
  param_4[uVar14] = 0x80;
  param_4[uVar13] = 0xa7;
  param_4[uVar8] = 0x80;
  param_4[uVar12] = 0x80;
  param_4[uVar11] = 0xa7;
  param_4[uVar10] = 0x80;
  param_4[uVar9] = 0x80;
  param_4[uVar7] = 0xa2;
  param_4[uVar6] = '\x0e';
  param_4[uVar5] = bVar2 | 0x80;
  return iVar17;
}

