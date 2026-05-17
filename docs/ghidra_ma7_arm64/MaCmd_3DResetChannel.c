/* MaCmd_3DResetChannel @ 00239798 316B */


/* YAMAHA::MaCmd_3DResetChannel(unsigned int, int, unsigned int, unsigned char*) */

ulong YAMAHA::MaCmd_3DResetChannel(uint param_1,int param_2,uint param_3,uchar *param_4)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (((&DAT_0074a7d8)[(ulong)param_1 * 0x65d0] == '\x01') ||
     ((&DAT_0074a410)[(ulong)param_3 * 0x1e + (ulong)param_1 * 0x65d0] = 0, 0xf < param_3)) {
    uVar2 = MaCmd_Nop(param_2,0,param_4);
    return uVar2;
  }
  if (param_2 < 0) {
    param_4[1] = (char)param_3 + (char)(param_1 << 4) | 0x80;
    *param_4 = 0x8b;
    param_4[2] = 0x94;
    param_4[3] = (byte)param_1 | 0x80;
    return 4;
  }
  if (param_2 < 0x80) {
    uVar6 = 6;
    uVar5 = 5;
    uVar2 = 4;
    uVar7 = 2;
    uVar8 = 1;
    uVar9 = 0;
    uVar10 = 3;
  }
  else {
    lVar4 = 0;
    do {
      iVar3 = (int)lVar4;
      bVar1 = (byte)param_2;
      param_2 = param_2 >> 7;
      param_4[lVar4] = bVar1 & 0x7f;
      if (1 < iVar3 + 1U) break;
      lVar4 = 1;
    } while (0x7f < param_2);
    uVar10 = (ulong)(iVar3 + 4);
    uVar8 = (ulong)(iVar3 + 2);
    uVar7 = (ulong)(iVar3 + 3);
    uVar2 = (ulong)(iVar3 + 5);
    uVar5 = (ulong)(iVar3 + 6);
    uVar9 = (ulong)(iVar3 + 1U);
    uVar6 = iVar3 + 7;
  }
  param_4[uVar9] = (byte)param_2 | 0x80;
  param_4[uVar8] = 0x8b;
  param_4[uVar7] = (char)param_3 + (char)(param_1 << 4) | 0x80;
  param_4[uVar10] = 0x80;
  param_4[uVar2] = 0x94;
  param_4[uVar5] = (byte)param_1 | 0x80;
  return (ulong)uVar6;
}

