/* MaCmd_ModulationDepth @ 000ed2a4 282B */


/* YAMAHA::MaCmd_ModulationDepth(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_ModulationDepth(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (0xf < param_3) {
    iVar1 = MaCmd_Nop(param_2,0,param_5);
    return iVar1;
  }
  if (4 < param_4) {
    param_4 = 0;
  }
  if (param_2 < 0) {
    *param_5 = 0x8b;
    param_5[1] = (char)param_3 + (char)(param_1 << 4) | 0x80;
    iVar1 = 4;
    iVar5 = 3;
    iVar6 = 2;
  }
  else {
    if (param_2 < 0x80) {
      iVar1 = 6;
      iVar5 = 5;
      iVar9 = 3;
      iVar7 = 2;
      iVar8 = 1;
      iVar6 = 4;
      uVar4 = 0;
    }
    else {
      uVar3 = 0;
      do {
        param_5[uVar3] = (byte)param_2 & 0x7f;
        uVar4 = uVar3 + 1;
        iVar2 = param_2 >> 7;
        if (iVar2 < 0x80 || 1 < uVar4) break;
        param_5[uVar4] = (byte)iVar2 & 0x7f;
        uVar4 = uVar3 + 2;
        iVar2 = param_2 >> 0xe;
        if (iVar2 < 0x80 || 1 < uVar4) break;
        param_5[uVar4] = (byte)iVar2 & 0x7f;
        uVar4 = uVar3 + 3;
        iVar2 = param_2 >> 0x15;
        if (iVar2 < 0x80 || 1 < uVar4) break;
        param_5[uVar4] = (byte)iVar2 & 0x7f;
        uVar3 = uVar3 + 4;
        param_2 = param_2 >> 0x1c;
        iVar2 = param_2;
        uVar4 = uVar3;
      } while (0x7f < param_2 && uVar3 < 2);
      iVar8 = uVar4 + 1;
      iVar7 = uVar4 + 2;
      iVar9 = uVar4 + 3;
      iVar5 = uVar4 + 5;
      iVar1 = uVar4 + 6;
      iVar6 = uVar4 + 4;
      param_2 = iVar2;
    }
    param_5[uVar4] = (byte)param_2 | 0x80;
    param_5[iVar8] = 0x8b;
    param_5[iVar7] = (char)param_3 + (char)(param_1 << 4) | 0x80;
    param_5[iVar9] = 0x80;
  }
  iVar9 = DAT_000ed3c0;
  param_5[iVar6] = 0x8f;
  param_5[iVar5] = *(byte *)(param_4 + iVar9 + 0xed650) | 0x80;
  return iVar1;
}

