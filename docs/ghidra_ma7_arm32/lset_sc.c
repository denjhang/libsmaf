/* lset_sc @ 000f9210 216B */


/* YAMAHA::lset_sc(unsigned char) */

void YAMAHA::lset_sc(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  short sVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  
  pbVar12 = *(byte **)(DAT_000f92e8 + 0xf9226);
  pbVar14 = *(byte **)(DAT_000f92ec + 0xf9238);
  bVar1 = pbVar12[2];
  bVar2 = pbVar12[1];
  iVar13 = *(int *)(DAT_000f92f0 + 0xf924e);
  bVar3 = *pbVar14;
  bVar4 = pbVar14[2];
  bVar5 = pbVar14[3];
  bVar6 = pbVar12[3];
  sVar11 = 0x3fff - (short)(((uint)param_1 * 0x1fff) / 0x7f);
  bVar7 = pbVar14[1];
  bVar8 = pbVar14[4];
  bVar9 = pbVar14[5];
  bVar10 = pbVar12[4];
  *(undefined2 *)(iVar13 + (uint)*pbVar12 * 2 + 0x26) = 0x7fff;
  *(short *)(iVar13 + (uint)bVar2 * 2 + 0x26) = sVar11;
  *(short *)(iVar13 + (uint)bVar1 * 2 + 0x26) = sVar11;
  *(short *)(iVar13 + (uint)bVar6 * 2 + 0x26) = sVar11;
  *(short *)(iVar13 + (uint)bVar10 * 2 + 0x26) = sVar11;
  *(undefined2 *)(iVar13 + (bVar3 + 0x10) * 2 + 6) = 0;
  *(undefined2 *)(iVar13 + (uint)bVar7 * 2 + 0x26) = 0x1980;
  *(undefined2 *)(iVar13 + (uint)bVar4 * 2 + 0x26) = 0x1980;
  *(undefined2 *)(iVar13 + (uint)bVar5 * 2 + 0x26) = 0x1980;
  *(undefined2 *)(iVar13 + (uint)bVar8 * 2 + 0x26) = 0x1980;
  *(undefined2 *)(iVar13 + (uint)bVar9 * 2 + 0x26) = 0x1980;
  LSendCoef('\x05',pbVar12);
  return;
}

