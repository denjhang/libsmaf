/* MaCmd_MasterVolume @ 00232980 368B */


/* YAMAHA::MaCmd_MasterVolume(unsigned int, int, unsigned int, unsigned char*) */

uint YAMAHA::MaCmd_MasterVolume(uint param_1,int param_2,uint param_3,uchar *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  
  uVar9 = (ulong)param_1;
  uVar6 = param_3 & 0x7f;
  (&DAT_0074a7d2)[uVar9 * 0x65d0] = (char)uVar6;
  if (param_2 < 0) {
    uVar7 = 0;
  }
  else {
    iVar5 = param_2;
    if (param_2 < 0x80) {
      uVar7 = 1;
      uVar10 = 0;
    }
    else {
      lVar12 = 0;
      do {
        iVar11 = (int)lVar12;
        uVar6 = iVar11 + 1;
        bVar3 = (byte)iVar5;
        iVar5 = iVar5 >> 7;
        param_4[lVar12] = bVar3 & 0x7f;
        if (1 < uVar6) break;
        lVar12 = 1;
      } while (0x7f < iVar5);
      uVar10 = (ulong)uVar6;
      uVar7 = iVar11 + 2;
    }
    param_4[uVar10] = (byte)iVar5 | 0x80;
    uVar6 = (uint)(byte)(&DAT_0074a7d2)[uVar9 * 0x65d0];
  }
  pbVar8 = &DAT_0074a419 + (ulong)param_1 * 0x65d0;
  iVar5 = 0;
  while( true ) {
    bVar3 = *pbVar8;
    pbVar2 = pbVar8 + -2;
    cVar4 = (char)iVar5;
    pbVar1 = pbVar8 + 2;
    pbVar8 = pbVar8 + 0x1e;
    uVar6 = (uint)(byte)(&DAT_0052ee00)[(byte)(&DAT_0074a7d3)[uVar9 * 0x65d0]] +
            (uint)(byte)(&DAT_0052ee00)[(int)uVar6] + (uint)(byte)(&DAT_0052ee00)[bVar3] +
            (uint)(byte)(&DAT_0052ee00)[*pbVar2] + (uint)(byte)(&DAT_0052ee00)[*pbVar1];
    uVar10 = (ulong)uVar6;
    if (0xc0 < uVar6) {
      uVar10 = 0xc0;
    }
    bVar3 = (&DAT_0052ee80)[uVar10];
    if ((iVar5 != 0) && (-1 < param_2)) {
      param_4[uVar7] = 0x80;
      uVar7 = uVar7 + 1;
    }
    param_4[uVar7] = 0x8b;
    iVar5 = iVar5 + 1;
    param_4[uVar7 + 1] = (char)param_1 * '\x10' + cVar4;
    param_4[uVar7 + 2] = bVar3 & 0x7c | 0x81;
    uVar7 = uVar7 + 3;
    if (iVar5 == 0x10) break;
    uVar6 = (uint)(byte)(&DAT_0074a7d2)[uVar9 * 0x65d0];
  }
  return uVar7;
}

