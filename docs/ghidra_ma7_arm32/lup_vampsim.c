/* lup_vampsim @ 000fcb08 996B */


/* YAMAHA::lup_vampsim(unsigned char) */

void YAMAHA::lup_vampsim(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  short sVar4;
  undefined2 uVar5;
  ushort uVar6;
  ushort uVar7;
  uchar uVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  int iVar12;
  undefined2 uVar13;
  undefined1 *puVar14;
  int iVar15;
  int iVar16;
  uchar local_48 [8];
  undefined2 local_40 [2];
  undefined2 local_3c;
  int local_38 [4];
  int local_28 [4];
  
  iVar3 = DAT_000fcef8;
  iVar16 = DAT_000fcef4;
  iVar15 = DAT_000fcef0;
  iVar9 = DAT_000fceec + 0xfcb16;
  if (param_1 == '\n') {
    if (0x7f < *(ushort *)(*(int *)(iVar9 + DAT_000fcef0) + 0x31a)) {
      *(undefined2 *)(*(int *)(iVar9 + DAT_000fcef0) + 0x31a) = 0x7f;
    }
    ldistsub2();
    return;
  }
  if (param_1 < 0xb) {
    if (param_1 == '\x02') {
      lchk_prm(6,2);
      sVar4 = *(short *)(*(int *)(iVar9 + DAT_000fcef0) + 0x308);
      if (sVar4 == 1) {
        uVar8 = '8';
      }
      else if (sVar4 == 3) {
        uVar8 = '?';
      }
      else {
        uVar8 = '@';
      }
      lset_iir('\x01','\0',*(uchar *)(*(int *)(iVar9 + DAT_000fcef0) + 0x30a),uVar8,'\0',
               *(uchar **)(iVar9 + DAT_000fcf10),*(uchar **)(iVar9 + DAT_000fcf10));
      return;
    }
    if (param_1 < 3) {
      if (param_1 != '\0') {
        if (param_1 != '\x01') {
          return;
        }
        iVar15 = *(int *)(iVar9 + DAT_000fcef0);
        uVar11 = (uint)*(ushort *)(iVar15 + 0x308);
        if (3 < uVar11) {
          uVar11 = 3;
          *(undefined2 *)(iVar15 + 0x308) = 3;
        }
        iVar12 = *(int *)(iVar9 + iVar16);
        iVar16 = iVar12 + uVar11 * 0xd;
        lset_iir('\0',*(uchar *)(iVar12 + uVar11 * 0xd),*(uchar *)(iVar16 + 2),
                 *(char *)(iVar16 + 1) + '\x06','\0',*(uchar **)(iVar9 + iVar3),
                 *(uchar **)(iVar9 + iVar3));
        iVar16 = (uint)*(ushort *)(iVar15 + 0x308) * 0xd + iVar12;
        lset_iir('\0',*(uchar *)(iVar16 + 3),*(uchar *)(iVar16 + 5),*(char *)(iVar16 + 4) + '\t',
                 '\0',*(uchar **)(iVar9 + DAT_000fcefc),*(uchar **)(iVar9 + DAT_000fcefc));
        iVar16 = (uint)*(ushort *)(iVar15 + 0x308) * 0xd + iVar12;
        lset_iir('\x01',*(uchar *)(iVar16 + 6),*(uchar *)(iVar16 + 8),*(uchar *)(iVar16 + 7),'\0',
                 *(uchar **)(iVar9 + DAT_000fcf00),*(uchar **)(iVar9 + DAT_000fcf00));
        iVar12 = iVar12 + (uint)*(ushort *)(iVar15 + 0x308) * 0xd;
        lset_iir('\x02',*(uchar *)(iVar12 + 9),*(uchar *)(iVar12 + 0xb),*(uchar *)(iVar12 + 10),
                 *(uchar *)(iVar12 + 0xc),*(uchar **)(iVar9 + DAT_000fcf04),
                 *(uchar **)(iVar9 + DAT_000fcf04));
        lup_vampsim('\x02');
        return;
      }
      iVar15 = *(int *)(iVar9 + DAT_000fcef0);
      if (0x7f < *(ushort *)(iVar15 + 0x306)) {
        *(undefined2 *)(iVar15 + 0x306) = 0x7f;
      }
    }
    else {
      if (param_1 != '\x03') {
        if (param_1 != '\t') {
          return;
        }
        iVar15 = *(int *)(iVar9 + DAT_000fcef0);
        if (*(ushort *)(iVar15 + 0x318) == 0) {
          *(undefined2 *)(iVar15 + 0x318) = 1;
        }
        else if (0x7f < *(ushort *)(iVar15 + 0x318)) {
          *(undefined2 *)(iVar15 + 0x318) = 0x7f;
        }
        goto LAB_000fcc24;
      }
      iVar15 = *(int *)(iVar9 + DAT_000fcef0);
    }
    uVar6 = *(ushort *)(iVar15 + 0x30c);
    if (0x7f < uVar6) {
      uVar6 = 0x7f;
      *(undefined2 *)(iVar15 + 0x30c) = 0x7f;
    }
LAB_000fccc4:
    uVar7 = *(ushort *)(iVar15 + 0x31c);
    if (1 < uVar7) {
      uVar7 = 1;
      *(undefined2 *)(iVar15 + 0x31c) = 1;
    }
    ldistsub1(*(ushort *)(iVar15 + 0x306),uVar6,uVar7);
    return;
  }
  if (0xe < param_1) {
    if (param_1 != 0xff) {
      return;
    }
    puVar14 = *(undefined1 **)(iVar9 + DAT_000fcf14);
    *puVar14 = 1;
    iVar15 = *(int *)(iVar9 + iVar15);
    *(undefined2 *)(iVar15 + 0x62) = 0xc000;
    *(undefined2 *)(iVar15 + 0x5c) = 0xff0;
    *(undefined2 *)(iVar15 + 0xa8) = 0x7fff;
    *(undefined2 *)(iVar15 + 0x98) = 0x7fff;
    *(undefined2 *)(iVar15 + 0x70) = 0x7fff;
    *(undefined2 *)(iVar15 + 0x56) = 0x7fff;
    *(undefined2 *)(iVar15 + 0x54) = 0x7fff;
    *(undefined2 *)(iVar15 + 0x52) = 0x7fff;
    *(undefined2 *)(iVar15 + 0x8e) = 0x4000;
    *(undefined2 *)(iVar15 + 0x6c) = 0x4000;
    *(undefined2 *)(iVar15 + 0x6a) = 0x4000;
    *(undefined2 *)(iVar15 + 0x58) = 0x4000;
    *(undefined2 *)(iVar15 + 0x4e) = 0x4000;
    *(undefined2 *)(iVar15 + 0x4c) = 0x4000;
    *(undefined2 *)(iVar15 + 0x5a) = 0x4000;
    *(undefined2 *)(iVar15 + 0x5e) = 1;
    *(undefined2 *)(iVar15 + 0x60) = 0x3ffb;
    lup_vampsim('\0');
    lup_vampsim('\x01');
    lup_vampsim('\t');
    lup_vampsim('\n');
    lup_vdist('\r');
    *puVar14 = 0;
    return;
  }
  if (0xc < param_1) {
    iVar15 = *(int *)(iVar9 + DAT_000fcef0);
    uVar11 = (uint)*(ushort *)(iVar15 + 800);
    if (uVar11 < 0x43) {
      iVar16 = -0x3c;
      *(undefined2 *)(iVar15 + 800) = 0x43;
    }
    else if (uVar11 < 0x68) {
      iVar16 = uVar11 - 0x7f;
    }
    else {
      iVar16 = -0x18;
      *(undefined2 *)(iVar15 + 800) = 0x67;
    }
    uVar11 = (uint)*(ushort *)(iVar15 + 0x322);
    if (uVar11 < 10) {
      uVar11 = 10;
      *(undefined2 *)(iVar15 + 0x322) = 10;
    }
    else if (0x7f < uVar11) {
      uVar11 = 0x7f;
      *(undefined2 *)(iVar15 + 0x322) = 0x7f;
    }
    builtin_memcpy(local_48,"56:;<).",7);
    local_38[0] = 0;
    local_28[0] = 0;
    local_38[1] = 0;
    local_28[1] = 0;
    local_38[2] = 0;
    local_28[2] = 0;
    lcal_exp(iVar16,uVar11,local_38,local_28,(int *)local_40,2);
    *(short *)(iVar15 + 0x90) = (short)local_38[1];
    *(short *)(iVar15 + 0x9a) = (short)local_28[0];
    *(short *)(iVar15 + 0x92) = (short)local_38[2];
    *(short *)(iVar15 + 0x9c) = (short)local_28[1];
    *(short *)(iVar15 + 0x9e) = (short)local_28[2];
    *(undefined2 *)(iVar15 + 0x78) = local_40[0];
    *(undefined2 *)(iVar15 + 0x82) = local_3c;
    LSendCoef('\a',local_48);
    return;
  }
  if (param_1 == '\v') {
    iVar15 = *(int *)(iVar9 + DAT_000fcef0);
    uVar6 = *(ushort *)(iVar15 + 0x30c);
    goto LAB_000fccc4;
  }
  if (param_1 != '\f') {
    return;
  }
  iVar15 = *(int *)(iVar9 + DAT_000fcef0);
LAB_000fcc24:
  uVar6 = *(ushort *)(iVar15 + 0x31e);
  if (1 < uVar6) {
    uVar6 = 1;
    *(undefined2 *)(iVar15 + 0x31e) = 1;
  }
  if ((int)((uint)*(ushort *)(iVar15 + 0x358) << 0x1f) < 0) {
    sVar4 = 0x1000;
    uVar13 = 0;
    pbVar10 = *(byte **)(iVar9 + DAT_000fcf0c);
  }
  else {
    uVar11 = (uint)*(ushort *)(iVar15 + 0x318);
    iVar16 = *(int *)(iVar9 + DAT_000fcf08);
    uVar13 = (undefined2)((uint)((int)*(short *)(iVar16 + (0x80 - uVar11) * 2) << 0xe) >> 0x10);
    if (uVar6 == 1) {
      pbVar10 = *(byte **)(iVar9 + DAT_000fcf0c);
      bVar1 = pbVar10[2];
      uVar5 = (undefined2)((uint)((int)*(short *)(iVar16 + uVar11 * 2) << 0xe) >> 0x10);
      *(undefined2 *)(iVar15 + (uint)pbVar10[3] * 2 + 0x26) = uVar5;
      *(undefined2 *)(iVar15 + (uint)bVar1 * 2 + 0x26) = uVar5;
      goto LAB_000fcc7a;
    }
    pbVar10 = *(byte **)(iVar9 + DAT_000fcf0c);
    sVar4 = *(short *)(iVar16 + uVar11 * 2) >> 4;
  }
  bVar2 = pbVar10[2];
  bVar1 = pbVar10[3];
  uVar5 = lcal_adj_var(sVar4);
  *(undefined2 *)(iVar15 + (uint)bVar1 * 2 + 0x26) = uVar5;
  *(undefined2 *)(iVar15 + (uint)bVar2 * 2 + 0x26) = uVar5;
LAB_000fcc7a:
  bVar1 = *pbVar10;
  *(undefined2 *)(iVar15 + (uint)pbVar10[1] * 2 + 0x26) = uVar13;
  *(undefined2 *)(iVar15 + (uint)bVar1 * 2 + 0x26) = uVar13;
  LSendCoef('\x04',pbVar10);
  return;
}

