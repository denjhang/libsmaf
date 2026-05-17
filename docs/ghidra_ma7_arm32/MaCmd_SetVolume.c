/* MaCmd_SetVolume @ 000f305c 216B */


/* YAMAHA::MaCmd_SetVolume(unsigned int, int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_SetVolume(uint param_1,int param_2,uint param_3,uchar *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 < 0) {
    iVar4 = 3;
    iVar5 = 2;
    iVar6 = 1;
    iVar7 = 0;
  }
  else {
    if (param_2 < 0x80) {
      iVar4 = 4;
      iVar5 = 3;
      iVar6 = 2;
      iVar7 = 1;
      uVar3 = 0;
    }
    else {
      uVar2 = 0;
      do {
        param_4[uVar2] = (byte)param_2 & 0x7f;
        uVar3 = uVar2 + 1;
        iVar1 = param_2 >> 7;
        if (iVar1 < 0x80 || 1 < uVar3) break;
        param_4[uVar3] = (byte)iVar1 & 0x7f;
        uVar3 = uVar2 + 2;
        iVar1 = param_2 >> 0xe;
        if (iVar1 < 0x80 || 1 < uVar3) break;
        param_4[uVar3] = (byte)iVar1 & 0x7f;
        uVar3 = uVar2 + 3;
        iVar1 = param_2 >> 0x15;
        if (iVar1 < 0x80 || 1 < uVar3) break;
        param_4[uVar3] = (byte)iVar1 & 0x7f;
        uVar2 = uVar2 + 4;
        param_2 = param_2 >> 0x1c;
        iVar1 = param_2;
        uVar3 = uVar2;
      } while (0x7f < param_2 && uVar2 < 2);
      iVar7 = uVar3 + 1;
      iVar6 = uVar3 + 2;
      iVar5 = uVar3 + 3;
      iVar4 = uVar3 + 4;
      param_2 = iVar1;
    }
    param_4[uVar3] = (byte)param_2 | 0x80;
  }
  param_4[iVar7] = 0xf2;
  param_4[iVar6] = (uchar)param_1;
  param_4[iVar5] = (byte)param_3 & 0x7c | 0x81;
  if (param_1 < 4) {
    *(byte *)(param_1 * 0x65d0 + DAT_000f3134 + 0xf34d2) = (byte)param_3;
  }
  return iVar4;
}

