/* lset_apf @ 001006d4 364B */


/* YAMAHA::lset_apf(unsigned short, unsigned short, unsigned short, unsigned char, unsigned char
   const*, unsigned char const*, unsigned char) */

void YAMAHA::lset_apf(ushort param_1,ushort param_2,ushort param_3,uchar param_4,uchar *param_5,
                     uchar *param_6,uchar param_7)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uchar uVar8;
  short *psVar9;
  undefined2 uVar10;
  ushort uVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  short sVar15;
  
  uVar7 = (uint)param_4;
  uVar2 = (uint)param_1;
  if (2 < uVar2) {
    uVar2 = 3;
  }
  uVar2 = (uint)*(byte *)(*(int *)(DAT_00100840 + 0x1006e8) + uVar2);
  if (param_7 != '\0') {
    uVar4 = 1 - param_2;
    psVar9 = (short *)(*(int *)(DAT_00100844 + 0x1006f0) + (uint)param_3 * 0x10 + 2);
    if (1 < param_2) {
      uVar4 = 0;
    }
    iVar3 = *(int *)(DAT_00100848 + 0x10071e);
    uVar8 = '\0';
    do {
      if (uVar8 == '\x03') {
        uVar11 = uVar4 & 1;
      }
      else {
        uVar11 = 0;
      }
      if (uVar11 == 0) {
        uVar13 = (uint)param_6[1];
        uVar11 = psVar9[-1];
        bVar1 = *(byte *)(iVar3 + uVar13 + 0x226);
      }
      else {
        uVar13 = (uint)param_6[1];
        uVar11 = psVar9[-3];
        bVar1 = *(byte *)(iVar3 + uVar13 + 0x226);
      }
      uVar6 = 0x7ae1;
      if (1 < bVar1) {
        uVar6 = 0xaaaaaaab;
      }
      uVar14 = (uint)uVar11 * 0x7ae1 >> 0x10;
      if (1 < bVar1) {
        uVar14 = (uint)((ulonglong)uVar6 * (ulonglong)uVar14 >> 0x20);
      }
      sVar15 = *psVar9;
      if (1 < bVar1) {
        uVar14 = uVar14 >> 1;
      }
      sVar12 = (short)uVar14;
      if (uVar14 == 0) {
        sVar12 = 1;
      }
      *(short *)(iVar3 + uVar13 * 2 + 0x266) =
           *(short *)(iVar3 + (uint)*param_6 * 2 + 0x266) + sVar12;
      if ((uVar2 & 1) == 0) {
        uVar13 = 0x2000;
        uVar6 = 0;
        sVar12 = 0;
        sVar15 = 0;
      }
      else {
        sVar12 = 0x7fff - sVar15;
        uVar6 = (uint)sVar15;
        uVar13 = uVar6 & ~((int)uVar6 >> 0x20);
        if (sVar15 >> 7 != 0) {
          uVar13 = uVar6 + 3;
        }
        uVar13 = -((int)uVar13 >> 2) & 0xffff;
        uVar6 = 0x2000 - uVar13 & 0xffff;
      }
      uVar10 = (undefined2)uVar6;
      uVar5 = (undefined2)uVar13;
      if ((uVar7 & 1) != 0) {
        uVar5 = (undefined2)((uVar13 & 0x7fff) << 1);
        uVar10 = (undefined2)((uVar6 & 0x7fff) << 1);
      }
      uVar8 = uVar8 + '\x01';
      uVar2 = uVar2 >> 1;
      uVar7 = uVar7 >> 1;
      psVar9 = psVar9 + 2;
      *(undefined2 *)(iVar3 + (uint)*param_5 * 2 + 0x26) = uVar5;
      *(undefined2 *)(iVar3 + (uint)param_5[1] * 2 + 0x26) = uVar10;
      *(short *)(iVar3 + (uint)param_5[2] * 2 + 0x26) = sVar12;
      *(short *)(iVar3 + (uint)param_5[3] * 2 + 0x26) = sVar15;
      param_5 = param_5 + 4;
      param_6 = param_6 + 2;
    } while (uVar8 != param_7);
  }
  return;
}

