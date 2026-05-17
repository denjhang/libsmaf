/* MaCmd_Brightness @ 00235674 260B */


/* YAMAHA::MaCmd_Brightness(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

ulong YAMAHA::MaCmd_Brightness(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  
  if (0xf < param_3) {
    uVar2 = MaCmd_Nop(param_2,0,param_5);
    return uVar2;
  }
  if (param_2 < 0) {
    *param_5 = 0x8b;
    param_5[1] = (char)param_3 + (char)(param_1 << 4) | 0x80;
    uVar10 = 4;
    uVar9 = 3;
    uVar2 = 2;
  }
  else {
    if (param_2 < 0x80) {
      uVar10 = 6;
      uVar9 = 5;
      uVar2 = 4;
      uVar6 = 2;
      uVar7 = 1;
      uVar8 = 0;
      uVar5 = 3;
    }
    else {
      lVar4 = 0;
      do {
        iVar3 = (int)lVar4;
        bVar1 = (byte)param_2;
        param_2 = param_2 >> 7;
        param_5[lVar4] = bVar1 & 0x7f;
        if (1 < iVar3 + 1U) break;
        lVar4 = 1;
      } while (0x7f < param_2);
      uVar5 = (ulong)(iVar3 + 4);
      uVar7 = (ulong)(iVar3 + 2);
      uVar6 = (ulong)(iVar3 + 3);
      uVar2 = (ulong)(iVar3 + 5);
      uVar9 = (ulong)(iVar3 + 6);
      uVar8 = (ulong)(iVar3 + 1U);
      uVar10 = iVar3 + 7;
    }
    param_5[uVar8] = (byte)param_2 | 0x80;
    param_5[uVar7] = 0x8b;
    param_5[uVar6] = (char)param_3 + (char)(param_1 << 4) | 0x80;
    param_5[uVar5] = 0x80;
  }
  param_5[uVar2] = 0x93;
  param_5[uVar9] = (&DAT_005313e0)[param_4 & 0x7f] | 0x80;
  return (ulong)uVar10;
}

