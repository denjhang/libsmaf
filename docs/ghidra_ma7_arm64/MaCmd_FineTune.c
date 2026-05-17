/* MaCmd_FineTune @ 00235bb0 476B */


/* YAMAHA::MaCmd_FineTune(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

ulong YAMAHA::MaCmd_FineTune(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  ulong uVar15;
  
  uVar1 = param_3 & 0x1f;
  lVar11 = (ulong)uVar1 * 0x1e + (ulong)param_1 * 0x65d0;
  uVar2 = *(ushort *)(&DAT_0052ef50 + ((ulong)(param_4 >> 4) & 0x3ff) * 2);
  uVar4 = (uint)uVar2;
  *(ushort *)(&DAT_0074a42a + lVar11) = uVar2;
  if (*(ushort *)(&DAT_0074a428 + lVar11) != 0x400) {
    uVar4 = (uint)uVar2 * (uint)*(ushort *)(&DAT_0074a428 + lVar11) >> 10;
  }
  lVar5 = (ulong)param_1 * 0x65d0;
  lVar11 = (ulong)uVar1 * 0x1e + lVar5;
  uVar4 = uVar4 * ((uint)*(ushort *)(&DAT_0074a7de + lVar5) *
                   (uint)*(ushort *)(&DAT_0074a7dc + lVar5) >> 10) >> 10;
  *(short *)(&DAT_0074a426 + lVar11) = (short)uVar4;
  if (0xf < uVar1) {
    uVar6 = MaCmd_Nop(param_2,0,param_5);
    return uVar6;
  }
  uVar4 = uVar4 & 0xffff;
  if (*(ushort *)(&DAT_0074a424 + lVar11) != 0x400) {
    uVar4 = uVar4 * *(ushort *)(&DAT_0074a424 + lVar11) >> 10;
  }
  if (0x3fff < uVar4) {
    uVar4 = 0x3fff;
  }
  if (param_2 < 0) {
    param_5[1] = (char)uVar1 + (char)param_1 * '\x10' | 0x80;
    *param_5 = 0x8b;
    param_5[2] = 0x90;
    param_5[3] = (uchar)(uVar4 >> 7);
    param_5[4] = (byte)uVar4 | 0x80;
    return 5;
  }
  if (param_2 < 0x80) {
    uVar7 = 7;
    uVar6 = 6;
    uVar13 = 5;
    uVar15 = 4;
    uVar9 = 2;
    uVar10 = 1;
    uVar8 = 0;
    uVar12 = 3;
  }
  else {
    lVar11 = 0;
    do {
      iVar14 = (int)lVar11;
      bVar3 = (byte)param_2;
      param_2 = param_2 >> 7;
      param_5[lVar11] = bVar3 & 0x7f;
      if (1 < iVar14 + 1U) break;
      lVar11 = 1;
    } while (0x7f < param_2);
    uVar12 = (ulong)(iVar14 + 4);
    uVar10 = (ulong)(iVar14 + 2);
    uVar9 = (ulong)(iVar14 + 3);
    uVar15 = (ulong)(iVar14 + 5);
    uVar13 = (ulong)(iVar14 + 6);
    uVar6 = (ulong)(iVar14 + 7);
    uVar8 = (ulong)(iVar14 + 1U);
    uVar7 = iVar14 + 8;
  }
  param_5[uVar8] = (byte)param_2 | 0x80;
  param_5[uVar10] = 0x8b;
  param_5[uVar9] = (char)uVar1 + (char)param_1 * '\x10' | 0x80;
  param_5[uVar12] = 0x80;
  param_5[uVar15] = 0x90;
  param_5[uVar13] = (uchar)(uVar4 >> 7);
  param_5[uVar6] = (byte)uVar4 | 0x80;
  return (ulong)uVar7;
}

