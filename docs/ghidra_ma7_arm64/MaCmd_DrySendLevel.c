/* MaCmd_DrySendLevel @ 00235778 332B */


/* YAMAHA::MaCmd_DrySendLevel(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

ulong YAMAHA::MaCmd_DrySendLevel(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  
  uVar1 = param_3 & 0x1f;
  bVar2 = (&DAT_00531350)[(ulong)param_4 & 0x7f];
  (&DAT_0074a421)[(ulong)uVar1 * 0x1e + (ulong)param_1 * 0x65d0] = bVar2;
  if (0xf < uVar1) {
    uVar4 = MaCmd_Nop(param_2,0,param_5);
    return uVar4;
  }
  if (param_2 < 0) {
    param_5[1] = (char)uVar1 + (char)param_1 * '\x10' | 0x80;
    *param_5 = 0x8b;
    param_5[2] = 0x97;
    param_5[3] = bVar2 & 0x7c | 0x80;
    return 4;
  }
  if (param_2 < 0x80) {
    uVar11 = 6;
    uVar10 = 5;
    uVar4 = 4;
    uVar12 = 2;
    uVar9 = 1;
    uVar8 = 0;
    uVar7 = 3;
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
    uVar7 = (ulong)(iVar5 + 4);
    uVar9 = (ulong)(iVar5 + 2);
    uVar12 = (ulong)(iVar5 + 3);
    uVar4 = (ulong)(iVar5 + 5);
    uVar10 = (ulong)(iVar5 + 6);
    uVar8 = (ulong)(iVar5 + 1U);
    uVar11 = iVar5 + 7;
  }
  param_5[uVar8] = (byte)param_2 | 0x80;
  param_5[uVar9] = 0x8b;
  param_5[uVar12] = (char)uVar1 + (char)param_1 * '\x10' | 0x80;
  param_5[uVar7] = 0x80;
  param_5[uVar4] = 0x97;
  param_5[uVar10] = bVar2 & 0x7c | 0x80;
  return (ulong)uVar11;
}

