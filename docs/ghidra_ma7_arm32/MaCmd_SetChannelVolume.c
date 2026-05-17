/* MaCmd_SetChannelVolume @ 000f3408 362B */


/* YAMAHA::MaCmd_SetChannelVolume(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_SetChannelVolume
              (uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = -(param_2 >> 0x1f);
  iVar3 = iVar4;
  if (param_4 != 0xff) {
    iVar3 = 1;
  }
  iVar8 = param_1 * 0x65d0 + DAT_000f3574 + 0xf3422;
  if (iVar3 != 0) {
    *(byte *)(iVar8 + param_3 * 0x1e + 9) = (byte)param_4 & 0x7f;
  }
  iVar3 = iVar4;
  if (param_4 == 0xff) {
    iVar3 = 1;
  }
  if ((iVar3 == 0) || (0xf < param_3)) {
    return 0;
  }
  iVar7 = iVar8 + param_3 * 0x1e;
  iVar3 = DAT_000f3578 + 0xf346e;
  uVar6 = (uint)*(byte *)(iVar3 + (uint)*(byte *)(iVar7 + 9) + -0xf8) +
          (uint)*(byte *)((uint)*(byte *)(iVar7 + 7) + iVar3 + -0xf8) +
          (uint)*(byte *)((uint)*(byte *)(iVar7 + 0xb) + iVar3 + -0xf8) +
          (uint)*(byte *)((uint)*(byte *)(iVar8 + 0x3c2) + iVar3 + -0xf8) +
          (uint)*(byte *)(iVar3 + (uint)*(byte *)(iVar8 + 0x3c3) + -0xf8);
  if (uVar6 < 0xc1) {
    iVar3 = iVar3 + uVar6;
  }
  else {
    iVar3 = DAT_000f3578 + 0xf352e;
  }
  bVar1 = *(byte *)(iVar3 + -0x78);
  if (iVar4 == 0) {
    uVar6 = 0;
    if (param_2 < 0x80) {
      iVar4 = 4;
      iVar3 = 3;
      iVar8 = 2;
      iVar7 = 1;
      uVar5 = 0;
    }
    else {
      do {
        param_5[uVar6] = (byte)param_2 & 0x7f;
        uVar5 = uVar6 + 1;
        iVar2 = param_2 >> 7;
        if (iVar2 < 0x80 || 1 < uVar5) break;
        param_5[uVar5] = (byte)iVar2 & 0x7f;
        uVar5 = uVar6 + 2;
        iVar2 = param_2 >> 0xe;
        if (iVar2 < 0x80 || 1 < uVar5) break;
        param_5[uVar5] = (byte)iVar2 & 0x7f;
        uVar5 = uVar6 + 3;
        iVar2 = param_2 >> 0x15;
        if (iVar2 < 0x80 || 1 < uVar5) break;
        param_5[uVar5] = (byte)iVar2 & 0x7f;
        uVar6 = uVar6 + 4;
        param_2 = param_2 >> 0x1c;
        iVar2 = param_2;
        uVar5 = uVar6;
      } while (0x7f < param_2 && uVar6 < 2);
      iVar7 = uVar5 + 1;
      iVar8 = uVar5 + 2;
      iVar3 = uVar5 + 3;
      iVar4 = uVar5 + 4;
      param_2 = iVar2;
    }
    param_5[uVar5] = (byte)param_2 | 0x80;
  }
  else {
    iVar4 = 3;
    iVar3 = 2;
    iVar8 = 1;
    iVar7 = 0;
  }
  param_5[iVar7] = 0x8b;
  param_5[iVar8] = (char)param_3 + (char)(param_1 << 4);
  param_5[iVar3] = bVar1 & 0x7c | 0x81;
  return iVar4;
}

