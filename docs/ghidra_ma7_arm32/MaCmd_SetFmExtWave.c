/* MaCmd_SetFmExtWave @ 000f359c 240B */


/* YAMAHA::MaCmd_SetFmExtWave(int, unsigned int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_SetFmExtWave(int param_1,uint param_2,uint param_3,uchar *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_1 < 0) {
    iVar1 = 4;
    iVar5 = 3;
    iVar6 = 2;
    iVar8 = 1;
    iVar7 = 0;
  }
  else {
    if (param_1 < 0x80) {
      iVar1 = 5;
      iVar5 = 4;
      iVar6 = 3;
      iVar8 = 2;
      iVar7 = 1;
      uVar3 = 0;
    }
    else {
      uVar2 = 0;
      do {
        param_4[uVar2] = (byte)param_1 & 0x7f;
        uVar3 = uVar2 + 1;
        iVar4 = param_1 >> 7;
        if (iVar4 < 0x80 || 1 < uVar3) break;
        param_4[uVar3] = (byte)iVar4 & 0x7f;
        uVar3 = uVar2 + 2;
        iVar4 = param_1 >> 0xe;
        if (iVar4 < 0x80 || 1 < uVar3) break;
        param_4[uVar3] = (byte)iVar4 & 0x7f;
        uVar3 = uVar2 + 3;
        iVar4 = param_1 >> 0x15;
        if (iVar4 < 0x80 || 1 < uVar3) break;
        param_4[uVar3] = (byte)iVar4 & 0x7f;
        uVar2 = uVar2 + 4;
        param_1 = param_1 >> 0x1c;
        uVar3 = uVar2;
        iVar4 = param_1;
      } while (0x7f < param_1 && uVar2 < 2);
      iVar7 = uVar3 + 1;
      iVar8 = uVar3 + 2;
      iVar6 = uVar3 + 3;
      iVar5 = uVar3 + 4;
      iVar1 = uVar3 + 5;
      param_1 = iVar4;
    }
    param_4[uVar3] = (byte)param_1 | 0x80;
  }
  if (param_2 == 0) {
    param_4[iVar7] = 0xa9;
  }
  else if (param_2 == 1) {
    param_4[iVar7] = 0xac;
  }
  else {
    param_4[iVar7] = 0xaf;
  }
  param_4[iVar8] = (byte)((param_3 << 0xf) >> 0x1e);
  param_4[iVar6] = (byte)((param_3 << 0x11) >> 0x19);
  param_4[iVar5] = (byte)(param_3 >> 1) | 0x80;
  return iVar1;
}

