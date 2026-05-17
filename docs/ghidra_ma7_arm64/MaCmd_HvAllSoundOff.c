/* MaCmd_HvAllSoundOff @ 00233030 160B */


/* YAMAHA::MaCmd_HvAllSoundOff(int, unsigned char*) */

int YAMAHA::MaCmd_HvAllSoundOff(int param_1,uchar *param_2)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  if (param_1 < 0) {
    *param_2 = 0xd5;
    param_2[1] = 0x90;
    return 2;
  }
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
      param_2[lVar3] = bVar1 & 0x7f;
      if (1 < iVar2 + 1U) break;
      lVar3 = 1;
    } while (0x7f < param_1);
    uVar6 = (ulong)(iVar2 + 2);
    uVar5 = (ulong)(iVar2 + 3);
    uVar4 = (ulong)(iVar2 + 1U);
    iVar2 = iVar2 + 4;
  }
  param_2[uVar4] = (byte)param_1 | 0x80;
  param_2[uVar6] = 0xd5;
  param_2[uVar5] = 0x90;
  return iVar2;
}

