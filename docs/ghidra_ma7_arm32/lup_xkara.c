/* lup_xkara @ 000fff6c 626B */


/* YAMAHA::lup_xkara(unsigned char) */

void YAMAHA::lup_xkara(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined2 uVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  short sVar13;
  uchar *puVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint uVar18;
  undefined2 local_2c [4];
  
  iVar8 = DAT_00100208;
  iVar7 = DAT_00100204;
  iVar6 = DAT_00100200;
  iVar5 = DAT_001001f8;
  iVar17 = DAT_001001f4;
  iVar15 = DAT_001001e8;
  local_2c[0] = *(undefined2 *)(DAT_001001e0 + 0xfff78);
  iVar12 = DAT_001001e4 + 0xfff80;
  if (param_1 != '\t') {
    if (param_1 < 10) {
      if (param_1 == '\0') {
        iVar15 = *(int *)(iVar12 + DAT_001001e8);
        uVar11 = (uint)*(ushort *)(iVar15 + 0x2e6);
        if (0x48 < uVar11) {
          uVar11 = 0x48;
          *(undefined2 *)(iVar15 + 0x2e6) = 0x48;
        }
        uVar11 = lcal_dly10(*(ushort *)(*(int *)(iVar12 + iVar17) + uVar11 * 2));
        uVar11 = ((uint)((ulonglong)uVar11 * 0xaaaaaaab >> 0x20) & 0x1ffff) >> 1;
        if (0xe64 < uVar11) {
          uVar11 = 0xe65;
        }
        sVar13 = (short)(uVar11 << 3);
        *(short *)(iVar15 + 0x120) = sVar13;
        *(short *)(iVar15 + 0x122) = sVar13 + 8;
        LSendCoef('\x02',(uchar *)local_2c);
        return;
      }
      if (param_1 == '\x01') {
        iVar15 = *(int *)(iVar12 + DAT_001001e8);
        uVar4 = *(ushort *)(iVar15 + 0x2e8);
        if (uVar4 == 0) {
          sVar13 = -0x7b0c;
          *(undefined2 *)(iVar15 + 0x2e8) = 1;
        }
        else if (uVar4 < 0x80) {
          sVar13 = (uVar4 - 0x40) * 500;
        }
        else {
          sVar13 = 0x7b0c;
          *(undefined2 *)(iVar15 + 0x2e8) = 0x7f;
        }
        pbVar10 = *(byte **)(iVar12 + DAT_001001ec);
        *(short *)(iVar15 + (uint)*pbVar10 * 2 + 0x26) = sVar13;
        LSendCoef('\x01',pbVar10);
      }
    }
    else {
      if (param_1 == '\n') {
        uVar4 = -(short)**(undefined4 **)(iVar12 + DAT_001001e8) & 3;
        *(ushort *)((int)*(undefined4 **)(iVar12 + DAT_001001e8) + 0x2fa) = uVar4;
        puVar14 = *(uchar **)(iVar12 + iVar6);
        lset_apf(uVar4,10,*(ushort *)(*(int *)(iVar12 + iVar7) + 6),'\0',puVar14,
                 *(uchar **)(iVar12 + iVar8),'\x02');
        LSendCoef('\b',puVar14);
        return;
      }
      if (param_1 == 0xff) {
        puVar16 = *(undefined1 **)(iVar12 + DAT_001001f0);
        *puVar16 = 1;
        iVar15 = *(int *)(iVar12 + iVar15);
        *(undefined2 *)(iVar15 + 0x150) = 0x7fff;
        *(undefined2 *)(iVar15 + 0x134) = 0x100;
        *(undefined2 *)(iVar15 + 0x132) = 0x100;
        *(undefined2 *)(iVar15 + 0x112) = 0x4000;
        *(undefined2 *)(iVar15 + 0x13c) = 0x4000;
        *(undefined2 *)(iVar15 + 0x13e) = 0x4000;
        *(undefined2 *)(iVar15 + 0x146) = 0xc80;
        *(undefined2 *)(iVar15 + 0x11a) = 0xc80;
        *(undefined2 *)(iVar15 + 0x116) = 0xc80;
        *(undefined2 *)(iVar15 + 0x13a) = 0x1900;
        *(undefined2 *)(iVar15 + 0x118) = 0x1900;
        *(undefined2 *)(iVar15 + 0x114) = 0;
        *(undefined2 *)(iVar15 + 0x140) = 0x78c0;
        *(undefined2 *)(iVar15 + 0x11e) = 0x78c0;
        *(undefined2 *)(iVar15 + 0x142) = 0xd540;
        *(undefined2 *)(iVar15 + 0x11c) = 0xd540;
        *(undefined2 *)(iVar15 + 0x148) = 0x4b00;
        *(undefined2 *)(iVar15 + 0x14a) = 0x4b00;
        *(undefined2 *)(iVar15 + 0x144) = 0x3500;
        *(undefined2 *)(iVar15 + 0x14c) = 0x3500;
        lup_xkara('\0');
        lup_xkara('\x01');
        lup_xkara('\t');
        lup_xkara('\n');
        *puVar16 = 0;
        return;
      }
    }
    return;
  }
  iVar15 = *(int *)(iVar12 + DAT_001001e8);
  uVar11 = (uint)*(ushort *)(iVar15 + 0x2f8);
  if (uVar11 == 0) {
    uVar11 = 1;
    *(undefined2 *)(iVar15 + 0x2f8) = 1;
    iVar17 = *(int *)(iVar12 + iVar5);
    uVar18 = ((int)*(short *)(iVar17 + 0xfe) & 0x1ffffU) >> 1;
  }
  else {
    if (0x7f < uVar11) {
      uVar11 = 0x7f;
      *(undefined2 *)(iVar15 + 0x2f8) = 0x7f;
      iVar17 = *(int *)(iVar12 + iVar5);
      uVar9 = (undefined2)(((int)*(short *)(iVar17 + 2) & 0x1ffffU) >> 1);
      goto LAB_001000fc;
    }
    iVar17 = *(int *)(iVar12 + DAT_001001f8);
    uVar18 = ((int)*(short *)(iVar17 + (0x80 - uVar11) * 2) & 0x1ffffU) >> 1;
    uVar9 = (undefined2)uVar18;
    if (uVar11 == 0x7f) goto LAB_001000fc;
  }
  uVar9 = (undefined2)uVar18;
  if (uVar18 == 0) {
    uVar9 = 1;
  }
LAB_001000fc:
  sVar13 = *(short *)(iVar17 + uVar11 * 2);
  pbVar10 = *(byte **)(iVar12 + DAT_001001fc);
  bVar1 = *pbVar10;
  bVar3 = pbVar10[2];
  bVar2 = pbVar10[3];
  *(undefined2 *)(iVar15 + (uint)pbVar10[1] * 2 + 0x26) = uVar9;
  *(undefined2 *)(iVar15 + (uint)bVar1 * 2 + 0x26) = uVar9;
  uVar9 = lcal_adj_ext(sVar13 >> 1);
  *(undefined2 *)(iVar15 + (uint)bVar2 * 2 + 0x26) = uVar9;
  *(undefined2 *)(iVar15 + (uint)bVar3 * 2 + 0x26) = uVar9;
  LSendCoef('\x04',pbVar10);
  return;
}

