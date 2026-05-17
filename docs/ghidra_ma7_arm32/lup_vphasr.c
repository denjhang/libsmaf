/* lup_vphasr @ 000ff574 1192B */


/* YAMAHA::lup_vphasr(unsigned char) */

void YAMAHA::lup_vphasr(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uchar uVar8;
  ushort uVar9;
  undefined2 uVar10;
  short sVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  byte *pbVar16;
  int iVar17;
  undefined1 *puVar18;
  uint uVar19;
  short in_r12;
  
  iVar7 = DAT_000ffa3c;
  iVar6 = DAT_000ffa38;
  iVar17 = DAT_000ffa20;
  iVar15 = DAT_000ffa1c + 0xff584;
  if (param_1 < 7) {
    if (4 < param_1) {
      lchk_prm(1,5);
      iVar17 = *(int *)(iVar15 + iVar17);
      lset_iir('\x01','\x02',*(uchar *)(iVar17 + 0x310),*(uchar *)(iVar17 + 0x312),'\0',
               *(uchar **)(iVar15 + iVar6),*(uchar **)(iVar15 + iVar6));
      return;
    }
    if (param_1 == '\x01') {
      iVar17 = *(int *)(iVar15 + DAT_000ffa20);
      uVar14 = (uint)*(ushort *)(iVar17 + 0x308);
      if (0x7f < uVar14) {
        uVar14 = 0x7f;
        *(undefined2 *)(iVar17 + 0x308) = 0x7f;
      }
    }
    else {
      if (param_1 == '\0') {
        uVar9 = *(ushort *)(*(int *)(iVar15 + DAT_000ffa20) + 0x306);
        if (uVar9 < 0x80) {
          uVar8 = (uchar)uVar9;
        }
        else {
          uVar8 = '\x7f';
          *(undefined2 *)(*(int *)(iVar15 + DAT_000ffa20) + 0x306) = 0x7f;
        }
        lset_lfo(uVar8,*(uchar **)(iVar15 + iVar7),*(uchar **)(iVar15 + iVar7));
        return;
      }
      if (param_1 != '\x02') {
        if (param_1 != '\x03') {
          return;
        }
        iVar17 = *(int *)(iVar15 + DAT_000ffa20);
        uVar9 = *(ushort *)(iVar17 + 0x30c);
        if (uVar9 == 0) {
          uVar9 = 1;
          *(undefined2 *)(iVar17 + 0x30c) = 1;
        }
        else if (0x7f < uVar9) {
          uVar9 = 0x7f;
          *(undefined2 *)(iVar17 + 0x30c) = 0x7f;
        }
        pbVar16 = *(byte **)(iVar15 + DAT_000ffa24);
        bVar1 = *pbVar16;
        uVar10 = lcal_fb(uVar9);
        *(undefined2 *)(iVar17 + (uint)bVar1 * 2 + 0x26) = uVar10;
        uVar8 = '\x01';
        goto LAB_000ff756;
      }
      iVar17 = *(int *)(iVar15 + DAT_000ffa20);
      uVar14 = (uint)*(ushort *)(iVar17 + 0x308);
    }
    iVar7 = DAT_000ffa30;
    iVar6 = DAT_000ffa2c;
    uVar19 = (uint)*(ushort *)(iVar17 + 0x30a);
    if (uVar19 < 0x80) {
      in_r12 = (short)(uVar19 & 0xff) * -0x100;
      iVar12 = (uVar19 & 0xff) * -0x100 + 0x7fff;
    }
    else {
      iVar12 = 0xff;
      *(undefined2 *)(iVar17 + 0x30a) = 0x7f;
    }
    pbVar13 = *(byte **)(iVar15 + iVar6);
    if (0x7f < uVar19) {
      in_r12 = -0x7f00;
    }
    *(short *)(iVar17 + (uint)*pbVar13 * 2 + 0x26) = in_r12;
    pbVar16 = *(byte **)(iVar15 + iVar7);
    *(short *)(iVar17 + (uint)*pbVar16 * 2 + 0x26) = (short)((int)(iVar12 * uVar14) / 0x7f);
    LSendCoef('\x01',pbVar13);
    uVar8 = '\x01';
    goto LAB_000ff756;
  }
  if (param_1 == '\t') {
    iVar17 = *(int *)(iVar15 + DAT_000ffa20);
    if (*(ushort *)(iVar17 + 0x318) == 0) {
      *(undefined2 *)(iVar17 + 0x318) = 1;
    }
    else if (0x7f < *(ushort *)(iVar17 + 0x318)) {
      *(undefined2 *)(iVar17 + 0x318) = 0x7f;
    }
LAB_000ff86a:
    uVar9 = *(ushort *)(iVar17 + 0x31c);
    if (1 < uVar9) {
      uVar9 = 1;
      *(undefined2 *)(iVar17 + 0x31c) = 1;
    }
    if ((int)((uint)*(ushort *)(iVar17 + 0x358) << 0x1f) < 0) {
      sVar11 = 0x4000;
      uVar10 = 0;
    }
    else {
      sVar11 = (short)((uint)((int)*(short *)(*(int *)(iVar15 + DAT_000ffa40) +
                                             (uint)*(ushort *)(iVar17 + 0x318) * 2) << 0xe) >> 0x10)
      ;
      uVar10 = (undefined2)
               ((uint)((int)*(short *)(*(int *)(iVar15 + DAT_000ffa40) +
                                      (0x80 - (uint)*(ushort *)(iVar17 + 0x318)) * 2) << 0xe) >>
               0x10);
    }
    pbVar16 = *(byte **)(iVar15 + DAT_000ffa44);
    bVar1 = *pbVar16;
    *(undefined2 *)(iVar17 + (uint)pbVar16[1] * 2 + 0x26) = uVar10;
    *(undefined2 *)(iVar17 + (uint)bVar1 * 2 + 0x26) = uVar10;
    if (uVar9 == 0) {
      bVar2 = pbVar16[3];
      bVar1 = pbVar16[4];
      *(undefined2 *)(iVar17 + (uint)pbVar16[2] * 2 + 0x26) = 0;
      uVar10 = lcal_adj_var(sVar11);
      *(undefined2 *)(iVar17 + (uint)bVar1 * 2 + 0x26) = uVar10;
      *(undefined2 *)(iVar17 + (uint)bVar2 * 2 + 0x26) = uVar10;
    }
    else {
      bVar2 = pbVar16[2];
      uVar10 = lcal_adj_var(sVar11);
      bVar1 = pbVar16[3];
      *(undefined2 *)(iVar17 + (uint)bVar2 * 2 + 0x26) = uVar10;
      sVar11 = lcal_adj_var(sVar11);
      bVar2 = pbVar16[4];
      *(short *)(iVar17 + (uint)bVar1 * 2 + 0x26) = -sVar11;
      *(undefined2 *)(iVar17 + (bVar2 + 0x10) * 2 + 6) = 0;
    }
    LSendCoef('\x05',pbVar16);
    return;
  }
  if (param_1 < 9) {
    lchk_prm(0,7);
    lset_iir('\x01','\x03',*(uchar *)(*(int *)(iVar15 + DAT_000ffa20) + 0x314),
             *(uchar *)(*(int *)(iVar15 + DAT_000ffa20) + 0x316),'\0',
             *(uchar **)(iVar15 + DAT_000ffa48),*(uchar **)(iVar15 + DAT_000ffa48));
    return;
  }
  if (param_1 == '\v') {
    iVar17 = *(int *)(iVar15 + DAT_000ffa20);
    goto LAB_000ff86a;
  }
  if (10 < param_1) {
    if (param_1 != 0xff) {
      return;
    }
    puVar18 = *(undefined1 **)(iVar15 + DAT_000ffa28);
    *puVar18 = 1;
    iVar17 = *(int *)(iVar15 + iVar17);
    *(undefined2 *)(iVar17 + 0xd6) = 0x8000;
    *(undefined2 *)(iVar17 + 0xfe) = 0x7fff;
    *(undefined2 *)(iVar17 + 0xf2) = 0x7fff;
    *(undefined2 *)(iVar17 + 0xe8) = 0x7fff;
    *(undefined2 *)(iVar17 + 0xdc) = 0x7fff;
    *(undefined2 *)(iVar17 + 0xd2) = 0x7fff;
    *(undefined2 *)(iVar17 + 0xc6) = 0x7fff;
    *(undefined2 *)(iVar17 + 0xc2) = 0x7fff;
    *(undefined2 *)(iVar17 + 0xba) = 0x7fff;
    *(undefined2 *)(iVar17 + 0xb4) = 0x7fff;
    *(undefined2 *)(iVar17 + 0xae) = 0x7fff;
    *(undefined2 *)(iVar17 + 0xa8) = 0x7fff;
    *(undefined2 *)(iVar17 + 0xa0) = 0x7fff;
    *(undefined2 *)(iVar17 + 0x9c) = 0x7fff;
    *(undefined2 *)(iVar17 + 0x94) = 0x7fff;
    *(undefined2 *)(iVar17 + 0x8e) = 0x7fff;
    *(undefined2 *)(iVar17 + 0x8a) = 0x7fff;
    *(undefined2 *)(iVar17 + 0x84) = 0x7fff;
    *(undefined2 *)(iVar17 + 0x7c) = 0x7fff;
    *(undefined2 *)(iVar17 + 0x7a) = 0x7fff;
    *(undefined2 *)(iVar17 + 0x74) = 0x7fff;
    *(undefined2 *)(iVar17 + 0x6e) = 0x7fff;
    *(undefined2 *)(iVar17 + 0x68) = 0x7fff;
    *(undefined2 *)(iVar17 + 0x60) = 0x7fff;
    *(undefined2 *)(iVar17 + 0x5c) = 0x7fff;
    *(undefined2 *)(iVar17 + 0xac) = 0x7fff;
    *(undefined2 *)(iVar17 + 0xf4) = 0x7fff;
    *(undefined2 *)(iVar17 + 0x92) = 0x7fff;
    *(undefined2 *)(iVar17 + 0x9a) = 0x4000;
    *(undefined2 *)(iVar17 + 0x98) = 0x4000;
    *(undefined2 *)(iVar17 + 0xde) = 0x7fff;
    *(undefined2 *)(iVar17 + 0x88) = 0x7fff;
    *(undefined2 *)(iVar17 + 200) = 0x7fff;
    *(undefined2 *)(iVar17 + 0x82) = 0x7fff;
    *(undefined2 *)(iVar17 + 0xb0) = 0x7fff;
    *(undefined2 *)(iVar17 + 0x78) = 0x7fff;
    *(undefined2 *)(iVar17 + 0x96) = 0x7fff;
    *(undefined2 *)(iVar17 + 0x72) = 0x7fff;
    *(undefined2 *)(iVar17 + 0x7e) = 0x7fff;
    lup_vphasr('\0');
    lup_vphasr('\x01');
    lup_vphasr('\x03');
    lup_vphasr('\x05');
    lup_vphasr('\a');
    lup_vphasr('\t');
    lup_vphasr('\n');
    *puVar18 = 0;
    return;
  }
  iVar17 = *(int *)(iVar15 + DAT_000ffa20);
  uVar9 = *(ushort *)(iVar17 + 0x31a);
  if (uVar9 < 4) {
    *(undefined2 *)(iVar17 + 0x31a) = 4;
LAB_000ff96e:
    pbVar16 = *(byte **)(iVar15 + DAT_000ffa34);
    bVar4 = pbVar16[2];
    bVar5 = pbVar16[1];
    bVar1 = pbVar16[4];
    bVar2 = pbVar16[5];
    bVar3 = pbVar16[3];
    *(undefined2 *)(iVar17 + (uint)*pbVar16 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar17 + (bVar5 + 0x10) * 2 + 6) = 0;
    *(undefined2 *)(iVar17 + (bVar4 + 0x10) * 2 + 6) = 0;
    *(undefined2 *)(iVar17 + (uint)bVar3 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar17 + (bVar1 + 0x10) * 2 + 6) = 0;
    *(undefined2 *)(iVar17 + (bVar2 + 0x10) * 2 + 6) = 0;
  }
  else {
    if (uVar9 < 7) {
      if (uVar9 == 5) {
        pbVar16 = *(byte **)(iVar15 + DAT_000ffa34);
        bVar1 = pbVar16[2];
        bVar2 = pbVar16[3];
        bVar5 = pbVar16[5];
        bVar3 = pbVar16[1];
        bVar4 = pbVar16[4];
        *(undefined2 *)(iVar17 + (*pbVar16 + 0x10) * 2 + 6) = 0;
        *(undefined2 *)(iVar17 + (uint)bVar3 * 2 + 0x26) = 0x7fff;
        *(undefined2 *)(iVar17 + (bVar1 + 0x10) * 2 + 6) = 0;
        *(undefined2 *)(iVar17 + (bVar2 + 0x10) * 2 + 6) = 0;
        *(undefined2 *)(iVar17 + (uint)bVar4 * 2 + 0x26) = 0x7fff;
        *(undefined2 *)(iVar17 + (bVar5 + 0x10) * 2 + 6) = 0;
        goto LAB_000ff7e2;
      }
      if (uVar9 != 6) goto LAB_000ff96e;
    }
    else {
      *(undefined2 *)(iVar17 + 0x31a) = 6;
    }
    pbVar16 = *(byte **)(iVar15 + DAT_000ffa34);
    bVar3 = pbVar16[1];
    bVar4 = pbVar16[4];
    bVar1 = pbVar16[3];
    bVar2 = pbVar16[2];
    bVar5 = pbVar16[5];
    *(undefined2 *)(iVar17 + (*pbVar16 + 0x10) * 2 + 6) = 0;
    *(undefined2 *)(iVar17 + (bVar3 + 0x10) * 2 + 6) = 0;
    *(undefined2 *)(iVar17 + (uint)bVar2 * 2 + 0x26) = 0x7fff;
    *(undefined2 *)(iVar17 + (bVar1 + 0x10) * 2 + 6) = 0;
    *(undefined2 *)(iVar17 + (bVar4 + 0x10) * 2 + 6) = 0;
    *(undefined2 *)(iVar17 + (uint)bVar5 * 2 + 0x26) = 0x7fff;
  }
LAB_000ff7e2:
  uVar8 = '\x06';
LAB_000ff756:
  LSendCoef(uVar8,pbVar16);
  return;
}

