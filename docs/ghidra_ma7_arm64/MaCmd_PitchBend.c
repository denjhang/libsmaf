/* MaCmd_PitchBend @ 002393ec 404B */


/* YAMAHA::MaCmd_PitchBend(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

ulong YAMAHA::MaCmd_PitchBend(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  
  uVar1 = param_3 & 0x1f;
  lVar6 = (ulong)uVar1 * 0x1e + (ulong)param_1 * 0x65d0;
  uVar2 = *(ushort *)
           (&DAT_00531460 +
           (((ulong)(param_4 >> 7) & 0x7f) + (ulong)(byte)(&DAT_0074a41e)[lVar6] * 0x80) * 2);
  *(ushort *)(&DAT_0074a424 + lVar6) = uVar2;
  if (0xf < uVar1) {
    uVar5 = MaCmd_Nop(param_2,0,param_5);
    return uVar5;
  }
  if (*(ushort *)(&DAT_0074a426 + lVar6) == 0x400) {
    uVar5 = (ulong)uVar2;
  }
  else {
    uVar11 = (uint)uVar2 * (uint)*(ushort *)(&DAT_0074a426 + lVar6) >> 10;
    if (0x3fff < uVar11) {
      uVar11 = 0x3fff;
    }
    uVar5 = (ulong)uVar11;
  }
  if (param_2 < 0) {
    param_5[1] = (char)uVar1 + (char)param_1 * '\x10' | 0x80;
    *param_5 = 0x8b;
    param_5[2] = 0x90;
    param_5[3] = (byte)(uVar5 >> 7) & 0x7f;
    param_5[4] = (byte)uVar5 | 0x80;
    return 5;
  }
  if (param_2 < 0x80) {
    uVar11 = 7;
    uVar12 = 6;
    uVar14 = 5;
    uVar4 = 4;
    uVar9 = 2;
    uVar7 = 1;
    uVar8 = 0;
    uVar10 = 3;
  }
  else {
    lVar6 = 0;
    do {
      iVar13 = (int)lVar6;
      bVar3 = (byte)param_2;
      param_2 = param_2 >> 7;
      param_5[lVar6] = bVar3 & 0x7f;
      if (1 < iVar13 + 1U) break;
      lVar6 = 1;
    } while (0x7f < param_2);
    uVar10 = (ulong)(iVar13 + 4);
    uVar7 = (ulong)(iVar13 + 2);
    uVar9 = (ulong)(iVar13 + 3);
    uVar4 = (ulong)(iVar13 + 5);
    uVar14 = (ulong)(iVar13 + 6);
    uVar12 = (ulong)(iVar13 + 7);
    uVar8 = (ulong)(iVar13 + 1U);
    uVar11 = iVar13 + 8;
  }
  param_5[uVar8] = (byte)param_2 | 0x80;
  param_5[uVar7] = 0x8b;
  param_5[uVar9] = (char)uVar1 + (char)param_1 * '\x10' | 0x80;
  param_5[uVar10] = 0x80;
  param_5[uVar4] = 0x90;
  param_5[uVar14] = (byte)(uVar5 >> 7) & 0x7f;
  param_5[uVar12] = (byte)uVar5 | 0x80;
  return (ulong)uVar11;
}

