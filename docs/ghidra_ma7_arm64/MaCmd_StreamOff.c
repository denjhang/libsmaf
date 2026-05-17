/* MaCmd_StreamOff @ 002325f8 440B */


/* YAMAHA::MaCmd_StreamOff(int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_StreamOff(int param_1,uint param_2,uchar *param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  
  bVar2 = (byte)param_2;
  if (param_1 < 0) {
    *param_3 = 0xdd;
    param_3[1] = bVar2 | 0x80;
    param_3[2] = 0xe4;
    param_3[3] = 0xa0;
    return 4;
  }
  lVar7 = (ulong)DAT_00763b70 * 0x1c;
  (&DAT_00763b83)[lVar7] = 0xdd;
  (&DAT_00763b84)[lVar7] = bVar2 | 0x80;
  (&DAT_00763b85)[lVar7] = 0xe4;
  (&DAT_00763b86)[lVar7] = 0xa0;
  *(undefined4 *)(&DAT_00763b74 + lVar7) = 4;
  uVar1 = DAT_00763b70 + 1;
  bVar3 = (byte)DAT_00763b70;
  if (0x7f < uVar1) {
    uVar1 = 0;
  }
  DAT_00763b70 = uVar1;
  if (param_1 < 0x80) {
    uVar5 = 0;
    iVar6 = 0xe;
    uVar8 = 0xd;
    uVar9 = 0xc;
    uVar10 = 0xb;
    uVar11 = 10;
    uVar12 = 9;
    uVar13 = 8;
    uVar14 = 7;
    uVar15 = 6;
    uVar16 = 5;
    uVar17 = 4;
    uVar18 = 3;
    uVar19 = 2;
    uVar20 = 1;
  }
  else {
    lVar7 = 0;
    do {
      iVar6 = (int)lVar7;
      uVar5 = (ulong)(iVar6 + 1U);
      bVar4 = (byte)param_1;
      param_1 = param_1 >> 7;
      param_3[lVar7] = bVar4 & 0x7f;
      if (1 < iVar6 + 1U) break;
      lVar7 = 1;
    } while (0x7f < param_1);
    uVar20 = (ulong)(iVar6 + 2);
    uVar19 = (ulong)(iVar6 + 3);
    uVar18 = (ulong)(iVar6 + 4);
    uVar17 = (ulong)(iVar6 + 5);
    uVar16 = (ulong)(iVar6 + 6);
    uVar15 = (ulong)(iVar6 + 7);
    uVar14 = (ulong)(iVar6 + 8);
    uVar13 = (ulong)(iVar6 + 9);
    uVar12 = (ulong)(iVar6 + 10);
    uVar11 = (ulong)(iVar6 + 0xb);
    uVar10 = (ulong)(iVar6 + 0xc);
    uVar9 = (ulong)(iVar6 + 0xd);
    uVar8 = (ulong)(iVar6 + 0xe);
    iVar6 = iVar6 + 0xf;
  }
  param_3[uVar5] = (byte)param_1 | 0x80;
  param_3[uVar20] = 0xa7;
  param_3[uVar19] = 0x80;
  param_3[uVar18] = 0x80;
  param_3[uVar17] = 0xa7;
  param_3[uVar16] = 0x80;
  param_3[uVar15] = 0x80;
  param_3[uVar14] = 0xa2;
  param_3[uVar13] = '\x0e';
  param_3[uVar12] = bVar3 | 0x80;
  param_3[uVar11] = 0x80;
  param_3[uVar10] = 0x98;
  param_3[uVar9] = bVar2 & 0xf;
  param_3[uVar8] = 0x80;
  return iVar6;
}

