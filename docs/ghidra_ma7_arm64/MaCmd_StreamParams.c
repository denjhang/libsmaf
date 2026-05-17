/* MaCmd_StreamParams @ 00234df0 208B */


/* YAMAHA::MaCmd_StreamParams(int, unsigned int, unsigned int, unsigned int, unsigned char*) */

ulong YAMAHA::MaCmd_StreamParams(int param_1,uint param_2,uint param_3,uint param_4,uchar *param_5)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  
  if (param_1 < 0) {
    return 0;
  }
  if (((param_3 != 1) && (param_3 != 0)) && (param_3 != 2)) {
    uVar3 = MaCmd_Nop(param_1,0,param_5);
    return uVar3;
  }
  bVar1 = (&DAT_00531350)[param_4];
  if (param_1 < 0x80) {
    uVar6 = 0;
    uVar3 = 4;
    uVar4 = 3;
    uVar7 = 2;
    uVar5 = 1;
  }
  else {
    lVar9 = 0;
    do {
      iVar8 = (int)lVar9;
      uVar6 = (ulong)(iVar8 + 1U);
      bVar2 = (byte)param_1;
      param_1 = param_1 >> 7;
      param_5[lVar9] = bVar2 & 0x7f;
      if (1 < iVar8 + 1U) break;
      lVar9 = 1;
    } while (0x7f < param_1);
    uVar5 = (ulong)(iVar8 + 2);
    uVar7 = (ulong)(iVar8 + 3);
    uVar4 = (ulong)(iVar8 + 4);
    uVar3 = (ulong)(iVar8 + 5);
  }
  param_5[uVar6] = (byte)param_1 | 0x80;
  param_5[uVar5] = 0xa2;
  param_5[uVar7] = (byte)param_3 & 0xf;
  param_5[uVar4] = bVar1 >> 2 & 0x1f | (byte)(param_2 << 5) | 0x80;
  return uVar3;
}

