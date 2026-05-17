/* MaCmd_ChannelVolume @ 000ed3c4 322B */


/* YAMAHA::MaCmd_ChannelVolume(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_ChannelVolume(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  uVar5 = param_3 & 0x1f;
  iVar6 = param_1 * 0x65d0 + DAT_000ed508 + 0xed3dc;
  iVar9 = iVar6 + uVar5 * 0x1e;
  *(byte *)(iVar9 + 7) = (byte)param_4 & 0x7f;
  if (0xf < uVar5) {
    iVar6 = MaCmd_Nop(param_2,0,param_5);
    return iVar6;
  }
  iVar3 = DAT_000ed50c + 0xed3fc;
  uVar7 = (uint)*(byte *)((uint)*(byte *)(iVar9 + 9) + iVar3 + -0xf8) +
          (uint)*(byte *)((uint)*(byte *)(iVar9 + 7) + iVar3 + -0xf8) +
          (uint)*(byte *)((uint)*(byte *)(iVar9 + 0xb) + iVar3 + -0xf8) +
          (uint)*(byte *)((uint)*(byte *)(iVar6 + 0x3c2) + iVar3 + -0xf8) +
          (uint)*(byte *)((uint)*(byte *)(iVar6 + 0x3c3) + iVar3 + -0xf8);
  if (uVar7 < 0xc1) {
    iVar3 = iVar3 + uVar7;
  }
  else {
    iVar3 = DAT_000ed50c + 0xed4bc;
  }
  bVar1 = *(byte *)(iVar3 + -0x78);
  if (param_2 < 0) {
    iVar6 = 3;
    iVar9 = 2;
    iVar3 = 1;
    iVar8 = 0;
  }
  else {
    if (param_2 < 0x80) {
      iVar6 = 4;
      iVar9 = 3;
      iVar3 = 2;
      iVar8 = 1;
      uVar7 = 0;
    }
    else {
      uVar4 = 0;
      do {
        param_5[uVar4] = (byte)param_2 & 0x7f;
        uVar7 = uVar4 + 1;
        iVar2 = param_2 >> 7;
        if (iVar2 < 0x80 || 1 < uVar7) break;
        param_5[uVar7] = (byte)iVar2 & 0x7f;
        uVar7 = uVar4 + 2;
        iVar2 = param_2 >> 0xe;
        if (iVar2 < 0x80 || 1 < uVar7) break;
        param_5[uVar7] = (byte)iVar2 & 0x7f;
        uVar7 = uVar4 + 3;
        iVar2 = param_2 >> 0x15;
        if (iVar2 < 0x80 || 1 < uVar7) break;
        param_5[uVar7] = (byte)iVar2 & 0x7f;
        uVar4 = uVar4 + 4;
        param_2 = param_2 >> 0x1c;
        iVar2 = param_2;
        uVar7 = uVar4;
      } while (0x7f < param_2 && uVar4 < 2);
      iVar8 = uVar7 + 1;
      iVar3 = uVar7 + 2;
      iVar9 = uVar7 + 3;
      iVar6 = uVar7 + 4;
      param_2 = iVar2;
    }
    param_5[uVar7] = (byte)param_2 | 0x80;
  }
  param_5[iVar8] = 0x8b;
  param_5[iVar3] = (char)uVar5 + (char)(param_1 << 4);
  param_5[iVar9] = bVar1 & 0x7c | 0x81;
  return iVar6;
}

