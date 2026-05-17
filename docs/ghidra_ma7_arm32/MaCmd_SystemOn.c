/* MaCmd_SystemOn @ 000f3e7c 490B */


/* YAMAHA::MaCmd_SystemOn(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

void YAMAHA::MaCmd_SystemOn(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  
  iVar11 = 0;
  uVar13 = 0;
  do {
    iVar7 = MaCmd_AllSoundOff(param_1,param_2,uVar13,param_5 + iVar11);
    param_2 = param_2 & param_2 >> 0x1f;
    iVar8 = MaCmd_AllSoundOff(param_1,param_2,uVar13 + 1,param_5 + iVar11 + iVar7);
    iVar8 = iVar11 + iVar7 + iVar8;
    iVar11 = MaCmd_AllSoundOff(param_1,param_2,uVar13 + 2,param_5 + iVar8);
    iVar8 = iVar8 + iVar11;
    iVar11 = MaCmd_AllSoundOff(param_1,param_2,uVar13 + 3,param_5 + iVar8);
    iVar8 = iVar8 + iVar11;
    iVar11 = MaCmd_AllSoundOff(param_1,param_2,uVar13 + 4,param_5 + iVar8);
    iVar8 = iVar8 + iVar11;
    iVar11 = MaCmd_AllSoundOff(param_1,param_2,uVar13 + 5,param_5 + iVar8);
    iVar8 = iVar8 + iVar11;
    iVar11 = MaCmd_AllSoundOff(param_1,param_2,uVar13 + 6,param_5 + iVar8);
    uVar9 = uVar13 + 7;
    uVar13 = uVar13 + 8;
    iVar8 = iVar8 + iVar11;
    iVar11 = MaCmd_AllSoundOff(param_1,param_2,uVar9,param_5 + iVar8);
    iVar11 = iVar8 + iVar11;
  } while (uVar13 != 0x10);
  MaCmd_Init(param_1);
  iVar7 = DAT_000f406c;
  iVar14 = DAT_000f406c + 0xf3f2c;
  uVar13 = (param_1 & 0xf) << 4;
  iVar10 = param_1 * 0x65d0 + DAT_000f4068 + 0xf3f28;
  iVar8 = iVar10;
  do {
    iVar12 = iVar11;
    if (param_2 == 0) {
      param_5[iVar11] = 0x80;
      iVar12 = iVar11 + 1;
    }
    bVar2 = *(byte *)((uint)*(byte *)(iVar8 + 7) + iVar14 + -0xf8);
    bVar3 = *(byte *)((uint)*(byte *)(iVar10 + 0x3c2) + iVar14 + -0xf8);
    iVar11 = iVar12 + 10;
    bVar4 = *(byte *)((uint)*(byte *)(iVar10 + 0x3c3) + iVar14 + -0xf8);
    bVar5 = *(byte *)((uint)*(byte *)(iVar8 + 9) + iVar14 + -0xf8);
    bVar6 = *(byte *)((uint)*(byte *)(iVar8 + 0xb) + iVar14 + -0xf8);
    param_5[iVar12] = 0x8b;
    uVar9 = (uint)bVar5 + (uint)bVar4 + (uint)bVar3 + (uint)bVar2 + (uint)bVar6;
    param_5[iVar12 + 1] = (uchar)uVar13;
    if (uVar9 < 0xc1) {
      iVar15 = uVar9 + iVar14;
    }
    else {
      iVar15 = iVar7 + 0xf3fec;
    }
    param_5[iVar12 + 3] = 'A';
    param_5[iVar12 + 2] = *(byte *)(iVar15 + -0x78) & 0x7c | 1;
    cVar1 = *(char *)(iVar8 + 0xc);
    bVar2 = *(byte *)(iVar8 + 0xd);
    param_5[iVar12 + 5] = '\0';
    param_5[iVar12 + 4] = bVar2 | cVar1 << 4;
    param_5[iVar12 + 6] = '\b';
    param_5[iVar12 + 7] = '\0';
    param_5[iVar12 + 8] = '\0';
    param_5[iVar12 + 9] = 0x80;
    if (param_3 != 0) {
      iVar15 = iVar11;
      if (param_2 == 0) {
        param_5[iVar11] = 0x80;
        iVar15 = iVar12 + 0xb;
      }
      param_5[iVar15] = 0x95;
      iVar11 = iVar15 + 2;
      param_5[iVar15 + 1] = 0xc4;
    }
    if (param_4 != 0) {
      iVar12 = iVar11;
      if (param_2 == 0) {
        param_5[iVar11] = 0x80;
        iVar12 = iVar11 + 1;
      }
      param_5[iVar12] = 0x96;
      iVar11 = iVar12 + 2;
      param_5[iVar12 + 1] = 0x80;
    }
    if (param_3 != 0) {
      iVar12 = iVar11;
      if (param_2 == 0) {
        param_5[iVar11] = 0x80;
        iVar12 = iVar11 + 1;
      }
      param_5[iVar12] = 0x97;
      iVar11 = iVar12 + 2;
      param_5[iVar12 + 1] = 0xfc;
    }
    iVar8 = iVar8 + 0x1e;
    uVar13 = uVar13 + 1 & 0xff;
  } while (iVar8 != iVar10 + 0x1e0);
  return;
}

