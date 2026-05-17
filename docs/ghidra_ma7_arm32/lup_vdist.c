/* lup_vdist @ 000fc720 958B */


/* YAMAHA::lup_vdist(unsigned char) */

void YAMAHA::lup_vdist(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  short sVar4;
  undefined2 uVar5;
  ushort uVar6;
  uchar uVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  undefined2 uVar13;
  undefined1 *puVar14;
  uint uVar15;
  uchar local_48 [8];
  undefined2 local_40 [2];
  undefined2 local_3c;
  int local_38 [4];
  int local_28 [4];
  
  iVar3 = DAT_000fcaf4;
  iVar9 = DAT_000fcae8;
  iVar12 = DAT_000fcae4;
  iVar10 = DAT_000fcae0 + 0xfc72e;
  if (param_1 < 9) {
    if (5 < param_1) {
      lchk_prm(2,6);
      iVar12 = *(int *)(iVar10 + DAT_000fcae4);
      lset_iir('\x02','\n',*(uchar *)(iVar12 + 0x312),*(uchar *)(iVar12 + 0x314),
               *(uchar *)(iVar12 + 0x316),*(uchar **)(iVar10 + DAT_000fcb04),
               *(uchar **)(iVar10 + DAT_000fcb04));
      return;
    }
    if (param_1 < 3) {
      if (param_1 != '\0') {
        lchk_prm(1,1);
        lset_iir('\x01','\x02',*(uchar *)(*(int *)(iVar10 + iVar12) + 0x308),
                 *(uchar *)(*(int *)(iVar10 + iVar12) + 0x30a),'\0',*(uchar **)(iVar10 + iVar3),
                 *(uchar **)(iVar10 + iVar3));
        return;
      }
      iVar12 = *(int *)(iVar10 + DAT_000fcae4);
      if (0x7f < *(ushort *)(iVar12 + 0x306)) {
        *(undefined2 *)(iVar12 + 0x306) = 0x7f;
      }
    }
    else {
      if (param_1 == '\x03') {
        lchk_prm(6,3);
        lset_iir('\x01','\0',*(uchar *)(*(int *)(iVar10 + iVar12) + 0x30c),'@','\0',
                 *(uchar **)(iVar10 + iVar9),*(uchar **)(iVar10 + iVar9));
        return;
      }
      if (param_1 != '\x04') {
        return;
      }
      iVar12 = *(int *)(iVar10 + DAT_000fcae4);
    }
    uVar6 = *(ushort *)(iVar12 + 0x30e);
    if (0x7f < uVar6) {
      uVar6 = 0x7f;
      *(undefined2 *)(iVar12 + 0x30e) = 0x7f;
    }
LAB_000fc786:
    uVar8 = *(ushort *)(iVar12 + 0x31c);
    if (1 < uVar8) {
      uVar8 = 1;
      *(undefined2 *)(iVar12 + 0x31c) = 1;
    }
    ldistsub1(*(ushort *)(iVar12 + 0x306),uVar6,uVar8);
    return;
  }
  if (param_1 == '\f') {
    iVar12 = *(int *)(iVar10 + DAT_000fcae4);
  }
  else {
    if (0xc < param_1) {
      if (param_1 < 0xf) {
        iVar12 = *(int *)(iVar10 + DAT_000fcae4);
        uVar15 = (uint)*(ushort *)(iVar12 + 800);
        if (uVar15 < 0x43) {
          iVar9 = -0x3c;
          *(undefined2 *)(iVar12 + 800) = 0x43;
        }
        else if (uVar15 < 0x68) {
          iVar9 = uVar15 - 0x7f;
        }
        else {
          iVar9 = -0x18;
          *(undefined2 *)(iVar12 + 800) = 0x67;
        }
        uVar15 = (uint)*(ushort *)(iVar12 + 0x322);
        if (uVar15 < 10) {
          uVar15 = 10;
          *(undefined2 *)(iVar12 + 0x322) = 10;
        }
        else if (0x7f < uVar15) {
          uVar15 = 0x7f;
          *(undefined2 *)(iVar12 + 0x322) = 0x7f;
        }
        builtin_memcpy(local_48,"56:;<).",7);
        local_38[0] = 0;
        local_28[0] = 0;
        local_38[1] = 0;
        local_28[1] = 0;
        local_38[2] = 0;
        local_28[2] = 0;
        lcal_exp(iVar9,uVar15,local_38,local_28,(int *)local_40,2);
        *(short *)(iVar12 + 0x90) = (short)local_38[1];
        *(short *)(iVar12 + 0x9a) = (short)local_28[0];
        *(short *)(iVar12 + 0x92) = (short)local_38[2];
        *(short *)(iVar12 + 0x9c) = (short)local_28[1];
        *(short *)(iVar12 + 0x9e) = (short)local_28[2];
        *(undefined2 *)(iVar12 + 0x78) = local_40[0];
        *(undefined2 *)(iVar12 + 0x82) = local_3c;
        LSendCoef('\a',local_48);
        return;
      }
      if (param_1 != 0xff) {
        return;
      }
      puVar14 = *(undefined1 **)(iVar10 + DAT_000fcaf8);
      *puVar14 = 1;
      iVar9 = *(int *)(iVar10 + iVar12);
      *(undefined2 *)(iVar9 + 0x62) = 0xc000;
      *(undefined2 *)(iVar9 + 0x5e) = 1;
      *(undefined2 *)(iVar9 + 0x5c) = 0xff0;
      *(undefined2 *)(iVar9 + 0x60) = 0x3ffb;
      *(undefined2 *)(iVar9 + 0xa8) = 0x7fff;
      *(undefined2 *)(iVar9 + 0x98) = 0x7fff;
      *(undefined2 *)(iVar9 + 0x70) = 0x7fff;
      *(undefined2 *)(iVar9 + 0x56) = 0x7fff;
      *(undefined2 *)(iVar9 + 0x54) = 0x7fff;
      *(undefined2 *)(iVar9 + 0x52) = 0x7fff;
      *(undefined2 *)(iVar9 + 0x8e) = 0x4000;
      *(undefined2 *)(iVar9 + 0x6c) = 0x4000;
      *(undefined2 *)(iVar9 + 0x6a) = 0x4000;
      *(undefined2 *)(iVar9 + 0x58) = 0x4000;
      *(undefined2 *)(iVar9 + 0x4e) = 0x4000;
      *(undefined2 *)(iVar9 + 0x4c) = 0x4000;
      *(undefined2 *)(iVar9 + 0x5a) = 0x4000;
      iVar12 = DAT_000fcb00;
      if (*(int *)(iVar9 + 0xc) == 1) {
        lset_iir('\0','\x01','\0','I','\0',*(uchar **)(iVar10 + DAT_000fcafc),
                 *(uchar **)(iVar10 + DAT_000fcafc));
        uVar7 = '6';
      }
      else {
        lset_iir('\0','\x01','\b','I','\0',*(uchar **)(iVar10 + DAT_000fcafc),
                 *(uchar **)(iVar10 + DAT_000fcafc));
        uVar7 = ',';
      }
      lset_iir('\0','\0',uVar7,'L','\0',*(uchar **)(iVar10 + iVar12),*(uchar **)(iVar10 + iVar12));
      lup_vdist('\0');
      lup_vdist('\x01');
      lup_vdist('\x03');
      lup_vdist('\x06');
      lup_vdist('\t');
      lup_vdist('\n');
      lup_vdist('\r');
      *puVar14 = 0;
      return;
    }
    if (param_1 == '\n') {
      if (0x7f < *(ushort *)(*(int *)(iVar10 + DAT_000fcae4) + 0x31a)) {
        *(undefined2 *)(*(int *)(iVar10 + DAT_000fcae4) + 0x31a) = 0x7f;
      }
      ldistsub2();
      return;
    }
    if (10 < param_1) {
      iVar12 = *(int *)(iVar10 + DAT_000fcae4);
      uVar6 = *(ushort *)(iVar12 + 0x30e);
      goto LAB_000fc786;
    }
    iVar12 = *(int *)(iVar10 + DAT_000fcae4);
    if (*(ushort *)(iVar12 + 0x318) == 0) {
      *(undefined2 *)(iVar12 + 0x318) = 1;
    }
    else if (0x7f < *(ushort *)(iVar12 + 0x318)) {
      *(undefined2 *)(iVar12 + 0x318) = 0x7f;
    }
  }
  uVar6 = *(ushort *)(iVar12 + 0x31e);
  if (1 < uVar6) {
    uVar6 = 1;
    *(undefined2 *)(iVar12 + 0x31e) = 1;
  }
  if ((int)((uint)*(ushort *)(iVar12 + 0x358) << 0x1f) < 0) {
    sVar4 = 0x1000;
    uVar13 = 0;
    pbVar11 = *(byte **)(iVar10 + DAT_000fcaf0);
  }
  else {
    uVar15 = (uint)*(ushort *)(iVar12 + 0x318);
    iVar9 = *(int *)(iVar10 + DAT_000fcaec);
    uVar13 = (undefined2)((uint)((int)*(short *)(iVar9 + (0x80 - uVar15) * 2) << 0xe) >> 0x10);
    if (uVar6 == 1) {
      pbVar11 = *(byte **)(iVar10 + DAT_000fcaf0);
      bVar1 = pbVar11[2];
      uVar5 = (undefined2)((uint)((int)*(short *)(iVar9 + uVar15 * 2) << 0xe) >> 0x10);
      *(undefined2 *)(iVar12 + (uint)pbVar11[3] * 2 + 0x26) = uVar5;
      *(undefined2 *)(iVar12 + (uint)bVar1 * 2 + 0x26) = uVar5;
      goto LAB_000fc836;
    }
    pbVar11 = *(byte **)(iVar10 + DAT_000fcaf0);
    sVar4 = *(short *)(iVar9 + uVar15 * 2) >> 4;
  }
  bVar2 = pbVar11[2];
  bVar1 = pbVar11[3];
  uVar5 = lcal_adj_var(sVar4);
  *(undefined2 *)(iVar12 + (uint)bVar1 * 2 + 0x26) = uVar5;
  *(undefined2 *)(iVar12 + (uint)bVar2 * 2 + 0x26) = uVar5;
LAB_000fc836:
  bVar1 = *pbVar11;
  *(undefined2 *)(iVar12 + (uint)pbVar11[1] * 2 + 0x26) = uVar13;
  *(undefined2 *)(iVar12 + (uint)bVar1 * 2 + 0x26) = uVar13;
  LSendCoef('\x04',pbVar11);
  return;
}

