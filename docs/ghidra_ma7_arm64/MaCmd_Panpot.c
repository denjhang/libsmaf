/* MaCmd_Panpot @ 002351a0 316B */


/* YAMAHA::MaCmd_Panpot(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

ulong YAMAHA::MaCmd_Panpot(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar1 = param_3 & 0x1f;
  bVar2 = (byte)param_4;
  (&DAT_0074a41a)[(ulong)uVar1 * 0x1e + (ulong)param_1 * 0x65d0] = bVar2;
  if (0xf < uVar1) {
    uVar4 = MaCmd_Nop(param_2,0,param_5);
    return uVar4;
  }
  if (param_2 < 0) {
    param_5[1] = (char)uVar1 + (char)param_1 * '\x10' | 0x80;
    *param_5 = 0x8b;
    param_5[2] = 0x8d;
    param_5[3] = bVar2 & 0x7c | 0x81;
    return 4;
  }
  if (param_2 < 0x80) {
    uVar7 = 6;
    uVar12 = 5;
    uVar4 = 4;
    uVar8 = 2;
    uVar9 = 1;
    uVar10 = 0;
    uVar11 = 3;
  }
  else {
    lVar6 = 0;
    do {
      iVar5 = (int)lVar6;
      bVar3 = (byte)param_2;
      param_2 = param_2 >> 7;
      param_5[lVar6] = bVar3 & 0x7f;
      if (1 < iVar5 + 1U) break;
      lVar6 = 1;
    } while (0x7f < param_2);
    uVar11 = (ulong)(iVar5 + 4);
    uVar9 = (ulong)(iVar5 + 2);
    uVar8 = (ulong)(iVar5 + 3);
    uVar4 = (ulong)(iVar5 + 5);
    uVar12 = (ulong)(iVar5 + 6);
    uVar10 = (ulong)(iVar5 + 1U);
    uVar7 = iVar5 + 7;
  }
  param_5[uVar10] = (byte)param_2 | 0x80;
  param_5[uVar9] = 0x8b;
  param_5[uVar8] = (char)uVar1 + (char)param_1 * '\x10' | 0x80;
  param_5[uVar11] = 0x80;
  param_5[uVar4] = 0x8d;
  param_5[uVar12] = bVar2 & 0x7c | 0x81;
  return (ulong)uVar7;
}

