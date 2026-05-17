/* MaCmd_Hold1 @ 00235428 324B */


/* YAMAHA::MaCmd_Hold1(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

ulong YAMAHA::MaCmd_Hold1(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  uint uVar1;
  byte bVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  
  uVar1 = param_3 & 0x1f;
  (&DAT_0074a41d)[(ulong)uVar1 * 0x1e + (ulong)param_1 * 0x65d0] = (char)param_4;
  if (0xf < uVar1) {
    uVar3 = MaCmd_Nop(param_2,0,param_5);
    return uVar3;
  }
  if (param_2 < 0) {
    *param_5 = 0x8b;
    param_5[1] = (char)uVar1 + (char)param_1 * '\x10' | 0x80;
    uVar11 = 4;
    uVar5 = 3;
    uVar3 = 2;
  }
  else {
    if (param_2 < 0x80) {
      uVar11 = 6;
      uVar5 = 5;
      uVar3 = 4;
      uVar7 = 2;
      uVar8 = 1;
      uVar9 = 0;
      uVar10 = 3;
    }
    else {
      lVar6 = 0;
      do {
        iVar4 = (int)lVar6;
        bVar2 = (byte)param_2;
        param_2 = param_2 >> 7;
        param_5[lVar6] = bVar2 & 0x7f;
        if (1 < iVar4 + 1U) break;
        lVar6 = 1;
      } while (0x7f < param_2);
      uVar10 = (ulong)(iVar4 + 4);
      uVar8 = (ulong)(iVar4 + 2);
      uVar7 = (ulong)(iVar4 + 3);
      uVar3 = (ulong)(iVar4 + 5);
      uVar5 = (ulong)(iVar4 + 6);
      uVar9 = (ulong)(iVar4 + 1U);
      uVar11 = iVar4 + 7;
    }
    param_5[uVar9] = (byte)param_2 | 0x80;
    param_5[uVar8] = 0x8b;
    param_5[uVar7] = (char)uVar1 + (char)param_1 * '\x10' | 0x80;
    param_5[uVar10] = 0x80;
  }
  param_5[uVar3] = 0x8e;
  lVar6 = (ulong)uVar1 * 0x1e + (ulong)param_1 * 0x65d0;
  param_5[uVar5] = (&DAT_0074a41d)[lVar6] | 0x80 | (&DAT_0074a41c)[lVar6] << 4;
  return (ulong)uVar11;
}

