/* MaCmd_MaxGain @ 000eb860 354B */


/* YAMAHA::MaCmd_MaxGain(unsigned int, int, unsigned int, unsigned char*) */

int YAMAHA::MaCmd_MaxGain(uint param_1,int param_2,uint param_3,uchar *param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int unaff_r5;
  int iVar9;
  uint uVar10;
  
  uVar10 = param_3 & 0x7f;
  if (param_2 < 0) {
    unaff_r5 = 0;
  }
  iVar9 = param_1 * 0x65d0 + DAT_000eb9c4 + 0xeb876;
  *(char *)(iVar9 + 0x3c3) = (char)uVar10;
  if (param_2 >= 0) {
    if (param_2 < 0x80) {
      unaff_r5 = 1;
      uVar10 = 0;
      iVar6 = param_2;
    }
    else {
      uVar7 = 0;
      iVar5 = param_2;
      do {
        param_4[uVar7] = (byte)iVar5 & 0x7f;
        uVar10 = uVar7 + 1;
        iVar6 = iVar5 >> 7;
        if (iVar6 < 0x80 || 1 < uVar10) break;
        param_4[uVar10] = (byte)iVar6 & 0x7f;
        uVar10 = uVar7 + 2;
        iVar6 = iVar5 >> 0xe;
        if (iVar6 < 0x80 || 1 < uVar10) break;
        param_4[uVar10] = (byte)iVar6 & 0x7f;
        uVar10 = uVar7 + 3;
        iVar6 = iVar5 >> 0x15;
        if (iVar6 < 0x80 || 1 < uVar10) break;
        param_4[uVar10] = (byte)iVar6 & 0x7f;
        uVar7 = uVar7 + 4;
        iVar5 = iVar5 >> 0x1c;
        iVar6 = iVar5;
        uVar10 = uVar7;
      } while (0x7f < iVar5 && uVar7 < 2);
      unaff_r5 = uVar10 + 1;
    }
    param_4[uVar10] = (byte)iVar6 | 0x80;
    uVar10 = (uint)*(byte *)(iVar9 + 0x3c3);
  }
  iVar6 = DAT_000eb9c8;
  iVar8 = DAT_000eb9c8 + 0xeb920;
  iVar4 = 0;
  iVar5 = iVar9;
  while( true ) {
    cVar2 = (char)iVar4;
    uVar7 = (uint)~param_2 >> 0x1f;
    if (iVar4 == 0) {
      uVar7 = 0;
    }
    iVar4 = iVar4 + 1;
    uVar10 = (uint)*(byte *)((uint)*(byte *)(iVar9 + 0x3c2) + iVar8 + -0xf8) +
             (uint)*(byte *)(uVar10 + iVar8 + -0xf8) +
             (uint)*(byte *)((uint)*(byte *)(iVar5 + 9) + iVar8 + -0xf8) +
             (uint)*(byte *)((uint)*(byte *)(iVar5 + 7) + iVar8 + -0xf8) +
             (uint)*(byte *)((uint)*(byte *)(iVar5 + 0xb) + iVar8 + -0xf8);
    if (uVar10 < 0xc1) {
      iVar3 = iVar8 + uVar10;
    }
    else {
      iVar3 = iVar6 + 0xeb9e0;
    }
    bVar1 = *(byte *)(iVar3 + -0x78);
    iVar3 = unaff_r5;
    if (uVar7 != 0) {
      param_4[unaff_r5] = 0x80;
      iVar3 = unaff_r5 + 1;
    }
    param_4[iVar3] = 0x8b;
    param_4[iVar3 + 1] = (char)(param_1 << 4) + cVar2;
    unaff_r5 = iVar3 + 3;
    param_4[iVar3 + 2] = bVar1 & 0x7c | 0x81;
    if (iVar4 == 0x10) break;
    uVar10 = (uint)*(byte *)(iVar9 + 0x3c3);
    iVar5 = iVar5 + 0x1e;
  }
  return unaff_r5;
}

