/* MaCmd_MasterCoarseTuning @ 00232c7c 396B */


/* YAMAHA::MaCmd_MasterCoarseTuning(unsigned int, int, unsigned int, unsigned char*) */

void YAMAHA::MaCmd_MasterCoarseTuning(uint param_1,int param_2,uint param_3,uchar *param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  ulong uVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar3 = *(ushort *)(&DAT_0052f750 + (ulong)(param_3 & 0x7f) * 2);
  uVar15 = (uint)uVar3;
  *(ushort *)(&DAT_0074a7dc + (ulong)param_1 * 0x65d0) = uVar3;
  if (*(ushort *)(&DAT_0074a7de + (ulong)param_1 * 0x65d0) != 0x400) {
    uVar15 = (uint)uVar3 * (uint)*(ushort *)(&DAT_0074a7de + (ulong)param_1 * 0x65d0) >> 10;
  }
  uVar13 = (param_1 & 0xf) * 0x10;
  uVar1 = uVar13 + 0x10;
  uVar7 = 0;
  puVar12 = (ushort *)(&DAT_0074a42a + (ulong)param_1 * 0x65d0);
  do {
    uVar14 = ((uint)*puVar12 * (uint)puVar12[-1] >> 10) * uVar15 >> 10;
    puVar12[-2] = (ushort)uVar14;
    uVar14 = uVar14 & 0xffff;
    if (puVar12[-3] != 0x400) {
      uVar14 = uVar14 * puVar12[-3] >> 10;
    }
    if (0x3fff < uVar14) {
      uVar14 = 0x3fff;
    }
    iVar5 = (int)uVar7;
    if (param_2 < 0) {
      param_4[uVar7] = 0x8b;
      uVar6 = iVar5 + 2;
      param_4[iVar5 + 1] = (byte)uVar13 | 0x80;
    }
    else {
      iVar8 = param_2;
      if (param_2 < 0x80) {
        iVar9 = 1;
        uVar11 = 0;
      }
      else {
        lVar10 = 0;
        do {
          iVar9 = (int)lVar10;
          uVar6 = iVar9 + 1;
          bVar4 = (byte)iVar8;
          iVar8 = iVar8 >> 7;
          param_4[lVar10 + uVar7] = bVar4 & 0x7f;
          if (1 < uVar6) break;
          lVar10 = 1;
        } while (0x7f < iVar8);
        uVar11 = (ulong)uVar6;
        iVar9 = iVar9 + 2;
      }
      uVar2 = iVar5 + iVar9;
      param_4[uVar11 + uVar7] = (byte)iVar8 | 0x80;
      param_4[uVar2] = 0x8b;
      uVar6 = uVar2 + 3;
      param_4[uVar2 + 1] = (byte)uVar13 | 0x80;
      param_4[uVar2 + 2] = 0x80;
    }
    param_4[uVar6] = 0x90;
    uVar13 = uVar13 + 1 & 0xff;
    param_4[uVar6 + 1] = (uchar)(uVar14 >> 7);
    if (0 < param_2) {
      param_2 = 0;
    }
    param_4[uVar6 + 2] = (byte)uVar14 | 0x80;
    uVar7 = (ulong)(uVar6 + 3);
    puVar12 = puVar12 + 0xf;
    if (uVar13 == (uVar1 & 0xff)) {
      return;
    }
  } while( true );
}

