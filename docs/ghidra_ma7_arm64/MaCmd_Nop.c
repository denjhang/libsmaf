/* MaCmd_Nop @ 00233350 168B */


/* YAMAHA::MaCmd_Nop(int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_Nop(int param_1,uint param_2,uchar *param_3)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1 < 0) {
    iVar2 = 2;
    uVar5 = 1;
    uVar6 = 0;
  }
  else {
    if (param_1 < 0x80) {
      iVar2 = 3;
      uVar5 = 2;
      uVar6 = 1;
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
      uVar6 = (ulong)(iVar2 + 2);
      uVar5 = (ulong)(iVar2 + 3);
      uVar4 = (ulong)(iVar2 + 1U);
      iVar2 = iVar2 + 4;
    }
    param_3[uVar4] = (byte)param_1 | 0x80;
  }
  if (param_2 != 0) {
    param_3[uVar6] = 0xa8;
    param_3[uVar5] = 0x80;
    return iVar2;
  }
  param_3[uVar6] = 0xa7;
  param_3[uVar5] = 0x80;
  return iVar2;
}

