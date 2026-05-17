/* lset_iir @ 000f8be8 1524B */


/* YAMAHA::lset_iir(unsigned char, unsigned char, unsigned char, unsigned char, unsigned char,
   unsigned char const*, unsigned char const*) */

undefined4
YAMAHA::lset_iir(uchar param_1,uchar param_2,uchar param_3,uchar param_4,uchar param_5,
                uchar *param_6,uchar *param_7)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  bool bVar18;
  
  uVar8 = (uint)param_4;
  uVar12 = (uint)param_3;
  uVar13 = uVar8 - 0x34;
  bVar18 = 0x3b < uVar12;
  bVar17 = uVar12 == 0x3c;
  if (uVar12 < 0x3d) {
    bVar18 = 0x17 < (uVar13 & 0xff);
    bVar17 = (uVar13 & 0xff) == 0x18;
  }
  iVar10 = DAT_000f9200 + 0xf8c08;
  if ((bVar18 && !bVar17) || ((param_2 == '\n' && (0x77 < param_5 - 1)))) {
    return 0xfffffffe;
  }
  uVar15 = (uint)*param_6;
  bVar1 = *param_7;
  if (param_1 == '\x05') {
    if (uVar12 < 0x37) {
      iVar11 = *(int *)(*(int *)(iVar10 + DAT_000f9204) + (uVar12 + 6) * 4);
    }
    else {
      iVar11 = *(int *)(*(int *)(iVar10 + DAT_000f9204) + 0xf0);
    }
  }
  else {
    iVar11 = *(int *)(*(int *)(iVar10 + DAT_000f9204) + uVar12 * 4);
  }
  switch(param_2) {
  case '\0':
    iVar14 = iVar11 + 0x2000;
    sVar6 = __divsi3(*(int *)(*(int *)(iVar10 + DAT_000f9208) + uVar13 * 4) * iVar11,iVar14);
    iVar7 = 0x2000 - iVar11;
    sVar5 = sVar6;
    goto LAB_000f8cb0;
  case '\x01':
    sVar5 = __divsi3(*(int *)(*(int *)(iVar10 + DAT_000f9208) + uVar13 * 4) << 0xd,iVar11 + 0x2000);
    sVar6 = -sVar5;
    sVar3 = __divsi3((0x2000 - iVar11) * 0x2000,iVar11 + 0x2000);
    uVar4 = 0;
    sVar2 = 0;
    break;
  case '\x02':
    if (uVar8 < 0x40) {
      iVar9 = (iVar11 + 0x2000) * 0x2000;
      uVar13 = *(int *)(*(int *)(iVar10 + DAT_000f9208) + (0x4c - uVar8) * 4) * iVar11;
      uVar12 = uVar13 + 0x1fff & (int)uVar13 >> 0x20;
      if (uVar8 < 0x3f) {
        uVar12 = uVar13;
      }
      iVar11 = ((int)uVar12 >> 0xd) + 0x2000;
      sVar5 = __divsi3(iVar9,iVar11);
      sVar6 = __divsi3(iVar9 + -0x8000000,iVar11);
      sVar3 = __divsi3(0x4000000 - uVar13,iVar11);
      uVar4 = 0;
      sVar2 = 0;
      break;
    }
    iVar14 = iVar11 + 0x2000;
    iVar9 = *(int *)(*(int *)(iVar10 + DAT_000f9208) + uVar13 * 4) * iVar11;
    iVar7 = 0x2000 - iVar11;
    sVar5 = __divsi3(iVar9 + 0x4000000,iVar14);
    sVar6 = __divsi3(iVar9 + -0x4000000,iVar14);
    goto LAB_000f8cb0;
  case '\x03':
    if (uVar8 < 0x40) {
      iVar9 = 0x2000;
      iVar7 = *(int *)(*(int *)(iVar10 + DAT_000f9208) + (0x4c - uVar8) * 4);
    }
    else {
      iVar7 = 0x2000;
      iVar9 = *(int *)(*(int *)(iVar10 + DAT_000f9208) + uVar13 * 4);
    }
    iVar14 = iVar7 + iVar11;
    sVar5 = __divsi3((iVar9 + iVar11) * 0x2000,iVar14);
    sVar6 = __divsi3((iVar11 - iVar9) * 0x2000,iVar14);
    iVar7 = iVar7 - iVar11;
LAB_000f8cb0:
    sVar3 = __divsi3(iVar7 << 0xd,iVar14);
    uVar4 = 0;
    sVar2 = 0;
    break;
  case '\x04':
  case '\x11':
    uVar8 = iVar11 * iVar11;
    iVar14 = *(int *)(*(int *)(iVar10 + DAT_000f9208) + uVar13 * 4);
    iVar7 = __divsi3(iVar11 * 10);
    uVar12 = uVar8 & ~((int)uVar8 >> 0x20);
    if ((int)uVar8 < 0) {
      uVar12 = uVar8 + 0x1fff;
    }
    iVar14 = iVar11 * iVar14;
    iVar9 = iVar7 + 0x2000 + ((int)uVar12 >> 0xd);
    if (iVar11 < 0x101) {
      iVar11 = iVar11 * iVar14;
      if (param_2 == '\x04') {
        iVar11 = iVar11 >> 0xd;
      }
      else {
        iVar11 = iVar11 >> 0xb;
      }
      sVar2 = __divsi3(iVar11,iVar9);
    }
    else {
      sVar2 = __divsi3(iVar11 * (iVar14 >> 0xe),iVar9);
      if (param_2 == '\x04') {
        sVar2 = sVar2 << 1;
      }
      else {
        sVar2 = sVar2 << 3;
      }
    }
    sVar3 = __divsi3(uVar8 * -2 + 0x8000000,iVar9);
    sVar6 = sVar2 << 1;
    iVar11 = iVar7 * 0x2000 - uVar8;
    goto LAB_000f8ec2;
  case '\x05':
    uVar8 = iVar11 * iVar11;
    iVar11 = __divsi3(iVar11 * 10);
    uVar12 = uVar8 & ~((int)uVar8 >> 0x20);
    if ((int)uVar8 < 0) {
      uVar12 = uVar8 + 0x1fff;
    }
    iVar9 = iVar11 + 0x2000 + ((int)uVar12 >> 0xd);
    sVar2 = __divsi3(*(int *)(*(int *)(iVar10 + DAT_000f9208) + uVar13 * 4) << 0xd,iVar9);
    sVar6 = sVar2 * -2;
    sVar3 = __divsi3(uVar8 * -2 + 0x8000000,iVar9);
    iVar11 = iVar11 * 0x2000 - uVar8;
LAB_000f8ec2:
    uVar4 = __divsi3(iVar11 + -0x4000000,iVar9);
    sVar5 = sVar2;
    break;
  default:
    uVar4 = 0;
    sVar3 = 0;
    sVar6 = 0;
    sVar2 = sVar6;
    sVar5 = 0;
    break;
  case '\n':
    uVar12 = iVar11 * iVar11;
    iVar11 = __divsi3(iVar11 * 10);
    if (uVar8 < 0x40) {
      iVar9 = *(int *)(*(int *)(iVar10 + DAT_000f9208) + (0x4c - uVar8) * 4) * iVar11;
      uVar16 = uVar12 + iVar9;
      uVar13 = uVar16 + 0x1fff & (int)uVar16 >> 0x20;
      if (uVar8 < 0x3f) {
        uVar13 = uVar16;
      }
      iVar7 = ((int)uVar13 >> 0xd) + 0x2000;
      sVar5 = __divsi3(uVar12 + (iVar11 + 0x2000) * 0x2000,iVar7);
      sVar6 = __divsi3(uVar12 * 2 + -0x8000000,iVar7);
      sVar3 = -sVar6;
      sVar2 = __divsi3(uVar12 + (0x2000 - iVar11) * 0x2000,iVar7);
      uVar4 = __divsi3((iVar9 + -0x4000000) - uVar12,iVar7);
    }
    else {
      uVar16 = uVar12 + 0x1fff & (int)uVar12 >> 0x20;
      if (uVar8 < 0x3f) {
        uVar16 = uVar12;
      }
      iVar9 = iVar11 + 0x2000 + ((int)uVar16 >> 0xd);
      iVar7 = *(int *)(*(int *)(iVar10 + DAT_000f9208) + uVar13 * 4) * iVar11;
      sVar5 = __divsi3(iVar7 + 0x4000000 + uVar12,iVar9);
      sVar6 = __divsi3(uVar12 * 2 + -0x8000000,iVar9);
      sVar3 = -sVar6;
      sVar2 = __divsi3((0x4000000 - iVar7) + uVar12,iVar9);
      uVar4 = __divsi3((iVar11 + -0x2000) * 0x2000 - uVar12,iVar9);
    }
    break;
  case '\v':
    uVar4 = 0;
    sVar3 = 0;
    sVar2 = 0;
    sVar6 = 0;
    sVar5 = (short)*(undefined4 *)(*(int *)(iVar10 + DAT_000f9208) + uVar13 * 4);
  }
  if (param_1 < 2) {
    if (param_1 == '\x01') {
      sVar3 = sVar3 << 2;
    }
    iVar10 = *(int *)(iVar10 + DAT_000f920c);
    *(short *)(iVar10 + uVar15 * 2 + 0x26) = sVar5;
    *(short *)(iVar10 + (uint)param_6[1] * 2 + 0x26) = sVar6;
    *(short *)(iVar10 + (uint)param_6[2] * 2 + 0x26) = sVar3;
    LSendCoef('\x01',param_6);
    LSendCoef('\x01',param_6 + 1);
    LSendCoef('\x01',param_6 + 2);
    if (bVar1 != uVar15) {
      *(undefined2 *)(iVar10 + (uint)*param_7 * 2 + 0x26) =
           *(undefined2 *)(iVar10 + (uint)*param_6 * 2 + 0x26);
      *(undefined2 *)(iVar10 + (uint)param_7[1] * 2 + 0x26) =
           *(undefined2 *)(iVar10 + (uint)param_6[1] * 2 + 0x26);
      *(undefined2 *)(iVar10 + (uint)param_7[2] * 2 + 0x26) =
           *(undefined2 *)(iVar10 + (uint)param_6[2] * 2 + 0x26);
      LSendCoef('\x01',param_7);
      LSendCoef('\x01',param_7 + 1);
      LSendCoef('\x01',param_7 + 2);
    }
  }
  else if (param_1 == '\x02') {
    iVar10 = *(int *)(iVar10 + DAT_000f920c);
    *(short *)(iVar10 + uVar15 * 2 + 0x26) = sVar5;
    *(short *)(iVar10 + (uint)param_6[1] * 2 + 0x26) = sVar6;
    *(short *)(iVar10 + (uint)param_6[2] * 2 + 0x26) = sVar2;
    *(short *)(iVar10 + (uint)param_6[3] * 2 + 0x26) = sVar3;
    *(undefined2 *)(iVar10 + (uint)param_6[4] * 2 + 0x26) = uVar4;
    LSendCoef('\x01',param_6);
    LSendCoef('\x01',param_6 + 1);
    LSendCoef('\x01',param_6 + 2);
    LSendCoef('\x01',param_6 + 3);
    LSendCoef('\x01',param_6 + 4);
    if (bVar1 != uVar15) {
      *(undefined2 *)(iVar10 + (uint)*param_7 * 2 + 0x26) =
           *(undefined2 *)(iVar10 + (uint)*param_6 * 2 + 0x26);
      *(undefined2 *)(iVar10 + (uint)param_7[1] * 2 + 0x26) =
           *(undefined2 *)(iVar10 + (uint)param_6[1] * 2 + 0x26);
      *(undefined2 *)(iVar10 + (uint)param_7[2] * 2 + 0x26) =
           *(undefined2 *)(iVar10 + (uint)param_6[2] * 2 + 0x26);
      *(undefined2 *)(iVar10 + (uint)param_7[3] * 2 + 0x26) =
           *(undefined2 *)(iVar10 + (uint)param_6[3] * 2 + 0x26);
      *(undefined2 *)(iVar10 + (uint)param_7[4] * 2 + 0x26) =
           *(undefined2 *)(iVar10 + (uint)param_6[4] * 2 + 0x26);
      LSendCoef('\x01',param_7);
      LSendCoef('\x01',param_7 + 1);
      LSendCoef('\x01',param_7 + 2);
      LSendCoef('\x01',param_7 + 3);
      LSendCoef('\x01',param_7 + 4);
      return 0;
    }
  }
  return 0;
}

