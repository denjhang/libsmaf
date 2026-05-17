/* MaCmd_StreamParams @ 000ed120 270B */


/* YAMAHA::MaCmd_StreamParams(int, unsigned int, unsigned int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_StreamParams(int param_1,uint param_2,uint param_3,uint param_4,uchar *param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  
  if (param_1 < 0) {
    return 0;
  }
  if (param_3 == 1) {
    bVar8 = (byte)(((uint)*(byte *)(param_4 + DAT_000ed238 + 0xed46a) << 0x19) >> 0x1b);
  }
  else if (param_3 == 0) {
    bVar8 = (byte)(((uint)*(byte *)(param_4 + DAT_000ed234 + 0xed44c) << 0x19) >> 0x1b);
  }
  else {
    if (param_3 != 2) {
      iVar7 = MaCmd_Nop(param_1,0,param_5);
      return iVar7;
    }
    bVar8 = (byte)(((uint)*(byte *)(param_4 + DAT_000ed230 + 0xed396) << 0x19) >> 0x1b);
  }
  if (param_1 < 0x80) {
    iVar7 = 1;
    iVar1 = 4;
    iVar5 = 3;
    iVar6 = 2;
    uVar3 = 0;
  }
  else {
    uVar2 = 0;
    do {
      param_5[uVar2] = (byte)param_1 & 0x7f;
      uVar3 = uVar2 + 1;
      iVar4 = param_1 >> 7;
      if (iVar4 < 0x80 || 1 < uVar3) break;
      param_5[uVar3] = (byte)iVar4 & 0x7f;
      uVar3 = uVar2 + 2;
      iVar4 = param_1 >> 0xe;
      if (iVar4 < 0x80 || 1 < uVar3) break;
      param_5[uVar3] = (byte)iVar4 & 0x7f;
      uVar3 = uVar2 + 3;
      iVar4 = param_1 >> 0x15;
      if (iVar4 < 0x80 || 1 < uVar3) break;
      param_5[uVar3] = (byte)iVar4 & 0x7f;
      uVar2 = uVar2 + 4;
      param_1 = param_1 >> 0x1c;
      uVar3 = uVar2;
      iVar4 = param_1;
    } while (0x7f < param_1 && uVar2 < 2);
    iVar6 = uVar3 + 2;
    iVar5 = uVar3 + 3;
    iVar1 = uVar3 + 4;
    iVar7 = uVar3 + 1;
    param_1 = iVar4;
  }
  param_5[uVar3] = (byte)param_1 | 0x80;
  param_5[iVar7] = 0xa2;
  param_5[iVar6] = (byte)param_3 & 0xf;
  param_5[iVar5] = bVar8 | (byte)(param_2 << 5) | 0x80;
  return iVar1;
}

