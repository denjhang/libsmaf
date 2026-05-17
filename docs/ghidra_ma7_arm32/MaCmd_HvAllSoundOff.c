/* MaCmd_HvAllSoundOff @ 000eba8c 176B */


/* YAMAHA::MaCmd_HvAllSoundOff(int, unsigned char*) */

int YAMAHA::MaCmd_HvAllSoundOff(int param_1,uchar *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (param_1 < 0) {
    iVar1 = 2;
    iVar5 = 1;
    iVar6 = 0;
  }
  else {
    if (param_1 < 0x80) {
      iVar1 = 3;
      iVar5 = 2;
      iVar6 = 1;
      uVar3 = 0;
    }
    else {
      uVar2 = 0;
      do {
        param_2[uVar2] = (byte)param_1 & 0x7f;
        uVar3 = uVar2 + 1;
        iVar4 = param_1 >> 7;
        if (iVar4 < 0x80 || 1 < uVar3) break;
        param_2[uVar3] = (byte)iVar4 & 0x7f;
        uVar3 = uVar2 + 2;
        iVar4 = param_1 >> 0xe;
        if (iVar4 < 0x80 || 1 < uVar3) break;
        param_2[uVar3] = (byte)iVar4 & 0x7f;
        uVar3 = uVar2 + 3;
        iVar4 = param_1 >> 0x15;
        if (iVar4 < 0x80 || 1 < uVar3) break;
        param_2[uVar3] = (byte)iVar4 & 0x7f;
        uVar2 = uVar2 + 4;
        param_1 = param_1 >> 0x1c;
        uVar3 = uVar2;
        iVar4 = param_1;
      } while (0x7f < param_1 && uVar2 < 2);
      iVar6 = uVar3 + 1;
      iVar5 = uVar3 + 2;
      iVar1 = uVar3 + 3;
      param_1 = iVar4;
    }
    param_2[uVar3] = (byte)param_1 | 0x80;
  }
  param_2[iVar6] = 0xd5;
  param_2[iVar5] = 0x90;
  return iVar1;
}

