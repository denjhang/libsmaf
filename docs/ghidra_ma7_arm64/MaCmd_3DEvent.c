/* MaCmd_3DEvent @ 002396dc 188B */


/* YAMAHA::MaCmd_3DEvent(int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_3DEvent(int param_1,uint param_2,uchar *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_1 < 0) {
    *param_3 = 0x9e;
    param_3[1] = (byte)(param_2 >> 7) & 0xf;
    param_3[2] = (byte)param_2 | 0x80;
    return 3;
  }
  if (param_1 < 0x80) {
    iVar2 = 4;
    uVar5 = 3;
    uVar6 = 2;
    uVar7 = 1;
    uVar4 = 0;
  }
  else {
    lVar3 = 0;
    do {
      iVar2 = (int)lVar3;
      bVar1 = (byte)param_1;
      param_1 = param_1 >> 7;
      param_3[lVar3] = bVar1 & 0x7f;
      if (1 < iVar2 + 1U) break;
      lVar3 = 1;
    } while (0x7f < param_1);
    uVar7 = (ulong)(iVar2 + 2);
    uVar6 = (ulong)(iVar2 + 3);
    uVar5 = (ulong)(iVar2 + 4);
    uVar4 = (ulong)(iVar2 + 1U);
    iVar2 = iVar2 + 5;
  }
  param_3[uVar4] = (byte)param_1 | 0x80;
  param_3[uVar7] = 0x9e;
  param_3[uVar6] = (byte)(param_2 >> 7) & 0xf;
  param_3[uVar5] = (byte)param_2 | 0x80;
  return iVar2;
}

