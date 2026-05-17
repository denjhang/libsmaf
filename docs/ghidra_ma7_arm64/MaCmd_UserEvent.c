/* MaCmd_UserEvent @ 00232f78 184B */


/* YAMAHA::MaCmd_UserEvent(unsigned int, int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_UserEvent(uint param_1,int param_2,uint param_3,uchar *param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 < 0) {
    *param_4 = 0x9a;
    param_4[1] = (byte)(param_3 >> 7) & 0xf;
    param_4[2] = (byte)param_3 | 0x80;
    return 3;
  }
  if (param_2 < 0x80) {
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
      bVar1 = (byte)param_2;
      param_2 = param_2 >> 7;
      param_4[lVar3] = bVar1 & 0x7f;
      if (1 < iVar2 + 1U) break;
      lVar3 = 1;
    } while (0x7f < param_2);
    uVar7 = (ulong)(iVar2 + 2);
    uVar6 = (ulong)(iVar2 + 3);
    uVar5 = (ulong)(iVar2 + 4);
    uVar4 = (ulong)(iVar2 + 1U);
    iVar2 = iVar2 + 5;
  }
  param_4[uVar4] = (byte)param_2 | 0x80;
  param_4[uVar7] = 0x9a;
  param_4[uVar6] = (byte)(param_3 >> 7) & 0xf;
  param_4[uVar5] = (byte)param_3 | 0x80;
  return iVar2;
}

