/* MaCmd_3DResetChannel @ 000f279c 304B */


/* YAMAHA::MaCmd_3DResetChannel(unsigned int, int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_3DResetChannel(uint param_1,int param_2,uint param_3,uchar *param_4)

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
  
  if (*(char *)(DAT_000f28cc + 0xf27b0 + param_1 * 0x65d0 + 0x3c8) == '\x01') {
    iVar1 = MaCmd_Nop(param_2,0,param_4);
    return iVar1;
  }
  uVar3 = 0;
  *(undefined1 *)(DAT_000f28cc + 0xf27b0 + param_1 * 0x65d0 + param_3 * 0x1e) = 0;
  if (0xf < param_3) {
    iVar1 = MaCmd_Nop(param_2,0,param_4);
    return iVar1;
  }
  if (param_2 < 0) {
    *param_4 = 0x8b;
    param_4[1] = (char)param_3 + (char)(param_1 << 4) | 0x80;
    iVar1 = 4;
    iVar6 = 3;
    iVar5 = 2;
  }
  else {
    if (param_2 < 0x80) {
      iVar1 = 6;
      iVar6 = 5;
      iVar9 = 3;
      iVar7 = 2;
      iVar8 = 1;
      iVar5 = 4;
    }
    else {
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
      iVar8 = uVar4 + 1;
      iVar7 = uVar4 + 2;
      iVar9 = uVar4 + 3;
      iVar6 = uVar4 + 5;
      iVar1 = uVar4 + 6;
      iVar5 = uVar4 + 4;
      param_2 = iVar2;
      uVar3 = uVar4;
    }
    param_4[uVar3] = (byte)param_2 | 0x80;
    param_4[iVar8] = 0x8b;
    param_4[iVar7] = (char)param_3 + (char)(param_1 << 4) | 0x80;
    param_4[iVar9] = 0x80;
  }
  param_4[iVar5] = 0x94;
  param_4[iVar6] = (byte)param_1 | 0x80;
  return iVar1;
}

