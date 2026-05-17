/* MaCmd_SetFmExtWave @ 0023a6d4 280B */


/* YAMAHA::MaCmd_SetFmExtWave(int, unsigned int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_SetFmExtWave(int param_1,uint param_2,uint param_3,uchar *param_4)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 < 0) {
    iVar2 = 4;
    uVar6 = 3;
    uVar7 = 2;
    uVar8 = 1;
    uVar4 = 0;
  }
  else {
    if (param_1 < 0x80) {
      iVar2 = 5;
      uVar6 = 4;
      uVar7 = 3;
      uVar8 = 2;
      uVar4 = 1;
      uVar5 = 0;
    }
    else {
      lVar3 = 0;
      do {
        iVar2 = (int)lVar3;
        bVar1 = (byte)param_1;
        param_1 = param_1 >> 7;
        param_4[lVar3] = bVar1 & 0x7f;
        if (1 < iVar2 + 1U) break;
        lVar3 = 1;
      } while (0x7f < param_1);
      uVar4 = (ulong)(iVar2 + 2);
      uVar8 = (ulong)(iVar2 + 3);
      uVar7 = (ulong)(iVar2 + 4);
      uVar6 = (ulong)(iVar2 + 5);
      uVar5 = (ulong)(iVar2 + 1U);
      iVar2 = iVar2 + 6;
    }
    param_4[uVar5] = (byte)param_1 | 0x80;
  }
  bVar1 = (byte)(param_3 >> 8);
  if (param_2 == 0) {
    param_4[uVar4] = 0xa9;
    param_4[uVar8] = (byte)(param_3 >> 0xf) & 3;
    param_4[uVar7] = bVar1 & 0x7f;
    param_4[uVar6] = (byte)(param_3 >> 1) | 0x80;
    return iVar2;
  }
  if (param_2 != 1) {
    param_4[uVar4] = 0xaf;
    param_4[uVar8] = (byte)(param_3 >> 0xf) & 3;
    param_4[uVar7] = bVar1 & 0x7f;
    param_4[uVar6] = (byte)(param_3 >> 1) | 0x80;
    return iVar2;
  }
  param_4[uVar4] = 0xac;
  param_4[uVar8] = (byte)(param_3 >> 0xf) & 3;
  param_4[uVar7] = bVar1 & 0x7f;
  param_4[uVar6] = (byte)(param_3 >> 1) | 0x80;
  return iVar2;
}

