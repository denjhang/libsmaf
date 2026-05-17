/* MaCmd_UserEvent @ 000eb9cc 190B */


/* YAMAHA::MaCmd_UserEvent(unsigned int, int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_UserEvent(uint param_1,int param_2,uint param_3,uchar *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 < 0) {
    iVar1 = 3;
    iVar5 = 2;
    iVar7 = 1;
    iVar6 = 0;
  }
  else {
    if (param_2 < 0x80) {
      iVar1 = 4;
      iVar5 = 3;
      iVar7 = 2;
      iVar6 = 1;
      uVar4 = 0;
    }
    else {
      uVar3 = 0;
      do {
        param_4[uVar3] = (byte)param_2 & 0x7f;
        uVar4 = uVar3 + 1;
        iVar2 = param_2 >> 7;
        if (iVar2 < 0x80 || 1 < uVar4) break;
        param_4[uVar4] = (byte)iVar2 & 0x7f;
        uVar4 = uVar3 + 2;
        iVar2 = param_2 >> 0xe;
        if (iVar2 < 0x80 || 1 < uVar4) break;
        param_4[uVar4] = (byte)iVar2 & 0x7f;
        uVar4 = uVar3 + 3;
        iVar2 = param_2 >> 0x15;
        if (iVar2 < 0x80 || 1 < uVar4) break;
        param_4[uVar4] = (byte)iVar2 & 0x7f;
        uVar3 = uVar3 + 4;
        param_2 = param_2 >> 0x1c;
        iVar2 = param_2;
        uVar4 = uVar3;
      } while (0x7f < param_2 && uVar3 < 2);
      iVar6 = uVar4 + 1;
      iVar7 = uVar4 + 2;
      iVar5 = uVar4 + 3;
      iVar1 = uVar4 + 4;
      param_2 = iVar2;
    }
    param_4[uVar4] = (byte)param_2 | 0x80;
  }
  param_4[iVar6] = 0x9a;
  param_4[iVar7] = (byte)((param_3 << 0x15) >> 0x1c);
  param_4[iVar5] = (byte)param_3 | 0x80;
  return iVar1;
}

