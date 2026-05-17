/* MaCmd_SystemOn @ 0023aecc 788B */


/* YAMAHA::MaCmd_SystemOn(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

ulong YAMAHA::MaCmd_SystemOn(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  
  uVar9 = MaCmd_AllSoundOff(param_1,param_2,0,param_5);
  uVar8 = 1;
  uVar9 = uVar9 & 0xffffffff;
  if (0 < param_2) {
    param_2 = 0;
  }
  do {
    iVar7 = MaCmd_AllSoundOff(param_1,param_2,uVar8,param_5 + uVar9);
    uVar13 = (int)uVar9 + iVar7;
    if (0 < param_2) {
      param_2 = 0;
    }
    iVar7 = MaCmd_AllSoundOff(param_1,param_2,uVar8 + 1,param_5 + uVar13);
    uVar13 = uVar13 + iVar7;
    if (0 < param_2) {
      param_2 = 0;
    }
    iVar7 = MaCmd_AllSoundOff(param_1,param_2,uVar8 + 2,param_5 + uVar13);
    uVar13 = uVar13 + iVar7;
    if (0 < param_2) {
      param_2 = 0;
    }
    iVar7 = MaCmd_AllSoundOff(param_1,param_2,uVar8 + 3,param_5 + uVar13);
    uVar13 = uVar13 + iVar7;
    uVar12 = uVar8 + 4;
    if (0 < param_2) {
      param_2 = 0;
    }
    uVar8 = uVar8 + 5;
    iVar7 = MaCmd_AllSoundOff(param_1,param_2,uVar12,param_5 + uVar13);
    uVar9 = (ulong)(uVar13 + iVar7);
    if (0 < param_2) {
      param_2 = 0;
    }
  } while (uVar8 != 0x10);
  MaCmd_Init(param_1);
  lVar10 = (ulong)param_1 * 0x65d0;
  uVar8 = (param_1 & 0xf) << 4;
  lVar6 = (ulong)param_1 * 0x65d0;
  pbVar11 = &DAT_0074a419 + lVar10;
  do {
    uVar13 = (uint)uVar9;
    if (param_2 == 0) {
      param_5[uVar9] = 0x80;
      uVar13 = uVar13 + 1;
    }
    bVar1 = (&DAT_0052ee00)[(byte)(&DAT_0074a7d3)[lVar6]];
    bVar2 = (&DAT_0052ee00)[(byte)(&DAT_0074a7d2)[lVar6]];
    bVar3 = (&DAT_0052ee00)[*pbVar11];
    bVar4 = (&DAT_0052ee00)[pbVar11[-2]];
    bVar5 = (&DAT_0052ee00)[pbVar11[2]];
    param_5[uVar13] = 0x8b;
    uVar12 = (uint)bVar1 + (uint)bVar2 + (uint)bVar3 + (uint)bVar4 + (uint)bVar5;
    uVar9 = (ulong)uVar12;
    param_5[uVar13 + 1] = (uchar)uVar8;
    if (0xc0 < uVar12) {
      uVar9 = 0xc0;
    }
    uVar12 = uVar13 + 10;
    param_5[uVar13 + 2] = (&DAT_0052ee80)[uVar9] & 0x7c | 1;
    param_5[uVar13 + 3] = 'A';
    param_5[uVar13 + 4] = pbVar11[4] | pbVar11[3] << 4;
    param_5[uVar13 + 5] = '\0';
    param_5[uVar13 + 6] = '\b';
    param_5[uVar13 + 7] = '\0';
    param_5[uVar13 + 8] = '\0';
    param_5[uVar13 + 9] = 0x80;
    if (param_3 == 0) {
      if (param_4 == 0) {
        uVar9 = (ulong)uVar12;
      }
      else {
        if (param_2 != 0) goto LAB_0023b194;
        param_5[uVar12] = 0x80;
        uVar9 = (ulong)(uVar13 + 0xd);
        param_5[uVar13 + 0xb] = 0x96;
        param_5[uVar13 + 0xc] = 0x80;
      }
    }
    else {
      if (param_2 == 0) {
        param_5[uVar12] = 0x80;
        uVar12 = uVar13 + 0xd;
        param_5[uVar13 + 0xb] = 0x95;
        param_5[uVar13 + 0xc] = 0xc4;
        if (param_4 != 0) {
          param_5[uVar12] = 0x80;
          uVar12 = uVar13 + 0x10;
          param_5[uVar13 + 0xe] = 0x96;
          param_5[uVar13 + 0xf] = 0x80;
        }
        param_5[uVar12] = 0x80;
        uVar12 = uVar12 + 1;
      }
      else {
        param_5[uVar12] = 0x95;
        uVar12 = uVar13 + 0xc;
        param_5[uVar13 + 0xb] = 0xc4;
        if (param_4 != 0) {
LAB_0023b194:
          uVar13 = uVar12 + 1;
          param_5[uVar12] = 0x96;
          uVar12 = uVar12 + 2;
          uVar9 = (ulong)uVar12;
          param_5[uVar13] = 0x80;
          if (param_3 == 0) goto LAB_0023b144;
        }
      }
      param_5[uVar12] = 0x97;
      uVar9 = (ulong)(uVar12 + 2);
      param_5[uVar12 + 1] = 0xfc;
    }
LAB_0023b144:
    pbVar11 = pbVar11 + 0x1e;
    uVar8 = uVar8 + 1 & 0xff;
    if (pbVar11 == &DAT_0074a5f9 + lVar10) {
      return uVar9;
    }
  } while( true );
}

