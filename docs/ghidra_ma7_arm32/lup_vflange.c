/* lup_vflange @ 000fd9c4 878B */


/* YAMAHA::lup_vflange(unsigned char) */

void YAMAHA::lup_vflange(uchar param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  undefined2 uVar5;
  short sVar6;
  uchar uVar7;
  uchar uVar8;
  uchar uVar9;
  uint uVar10;
  int iVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  uchar *puVar14;
  int iVar15;
  int iVar16;
  
  iVar16 = DAT_000fdd54;
  iVar15 = DAT_000fdd38;
  iVar11 = DAT_000fdd34 + 0xfd9d0;
  if (param_1 < 9) {
    if (param_1 < 7) {
      if (param_1 == '\x02') {
        iVar15 = *(int *)(iVar11 + DAT_000fdd38);
        uVar4 = *(ushort *)(iVar15 + 0x30a);
        if (uVar4 == 0) {
          uVar4 = 1;
          *(undefined2 *)(iVar15 + 0x30a) = 1;
        }
        else if (0x7f < uVar4) {
          uVar4 = 0x7f;
          *(undefined2 *)(iVar15 + 0x30a) = 0x7f;
        }
        pbVar12 = *(byte **)(iVar11 + DAT_000fdd50);
        bVar1 = *pbVar12;
        bVar2 = pbVar12[1];
        uVar5 = lcal_fb(uVar4);
        *(undefined2 *)(iVar15 + (uint)bVar2 * 2 + 0x26) = uVar5;
        *(undefined2 *)(iVar15 + (uint)bVar1 * 2 + 0x26) = uVar5;
        LSendCoef('\x02',pbVar12);
        return;
      }
      if (param_1 < 3) {
        if (param_1 != '\0') {
          if (param_1 != '\x01') {
            return;
          }
          iVar15 = *(int *)(iVar11 + DAT_000fdd38);
          if (*(ushort *)(iVar15 + 0x308) < 0x80) {
            uVar10 = ((int)((ulonglong)
                            ((longlong)(int)((uint)*(ushort *)(iVar15 + 0x308) * 0x80) * 0x81020409)
                           >> 0x20) << 0xe) >> 0x10 & 0xfffffff0;
            if (0x7ff < (int)uVar10) {
              uVar10 = 0x800;
            }
            uVar5 = (undefined2)uVar10;
          }
          else {
            uVar5 = 0x800;
            *(undefined2 *)(iVar15 + 0x308) = 0x7f;
          }
          pbVar12 = *(byte **)(iVar11 + DAT_000fdd3c);
          bVar1 = *pbVar12;
          *(undefined2 *)(iVar15 + (uint)pbVar12[1] * 2 + 0x26) = uVar5;
          *(undefined2 *)(iVar15 + (uint)bVar1 * 2 + 0x26) = uVar5;
          LSendCoef('\x02',pbVar12);
          return;
        }
        iVar15 = *(int *)(iVar11 + DAT_000fdd38);
        goto LAB_000fdb08;
      }
      if (param_1 == '\x03') {
        iVar15 = *(int *)(iVar11 + DAT_000fdd38);
        uVar10 = (uint)*(ushort *)(iVar15 + 0x30c);
        if (0x68 < uVar10) {
          uVar10 = 0x68;
          *(undefined2 *)(iVar15 + 0x30c) = 0x68;
        }
        iVar16 = *(int *)(iVar11 + iVar16);
        uVar10 = lcal_dly10(*(ushort *)(iVar16 + uVar10 * 2));
        if (uVar10 < 0x2fb) {
          sVar6 = lcal_dly10(*(ushort *)(iVar16 + (uint)*(ushort *)(iVar15 + 0x30c) * 2));
          sVar6 = (sVar6 + 1) * 8;
        }
        else {
          sVar6 = 0x17e0;
        }
        pbVar12 = *(byte **)(iVar11 + DAT_000fdd58);
        bVar3 = pbVar12[3];
        bVar1 = pbVar12[1];
        bVar2 = pbVar12[2];
        *(short *)(iVar15 + (uint)*pbVar12 * 2 + 0x26) = sVar6;
        *(short *)(iVar15 + (uint)bVar1 * 2 + 0x26) = sVar6;
        *(short *)(iVar15 + (uint)bVar2 * 2 + 0x26) = sVar6;
        *(short *)(iVar15 + (uint)bVar3 * 2 + 0x26) = sVar6;
        LSendCoef('\x04',pbVar12);
        lup_vflange('\x05');
        lup_vflange('\a');
        lup_vflange('\n');
        goto LAB_000fdbdc;
      }
      if (param_1 < 5) {
        return;
      }
      lchk_prm(1,5);
      uVar7 = '\x02';
      puVar14 = *(uchar **)(iVar11 + DAT_000fdd44);
      uVar8 = *(uchar *)(*(int *)(iVar11 + DAT_000fdd38) + 0x310);
      uVar9 = *(uchar *)(*(int *)(iVar11 + DAT_000fdd38) + 0x312);
      iVar15 = DAT_000fdd48;
    }
    else {
      lchk_prm(0,7);
      uVar7 = '\x03';
      puVar14 = *(uchar **)(iVar11 + DAT_000fdd68);
      uVar8 = *(uchar *)(*(int *)(iVar11 + DAT_000fdd38) + 0x314);
      uVar9 = *(uchar *)(*(int *)(iVar11 + DAT_000fdd38) + 0x316);
      iVar15 = DAT_000fdd6c;
    }
    lset_iir('\x01',uVar7,uVar8,uVar9,'\0',puVar14,*(uchar **)(iVar11 + iVar15));
  }
  else {
    if (param_1 < 0xd) {
      if (param_1 < 10) {
        iVar15 = *(int *)(iVar11 + DAT_000fdd38);
LAB_000fdbdc:
        uVar10 = (uint)*(ushort *)(iVar15 + 0x318);
        if (uVar10 == 0) {
          uVar10 = 1;
          *(undefined2 *)(iVar15 + 0x318) = 1;
        }
        else if (0x7f < uVar10) {
          uVar10 = 0x7f;
          *(undefined2 *)(iVar15 + 0x318) = 0x7f;
        }
        if ((int)((uint)*(ushort *)(iVar15 + 0x358) << 0x1f) < 0) {
          uVar5 = 0;
          sVar6 = 0x4000;
        }
        else {
          sVar6 = (short)((uint)((int)*(short *)(*(int *)(iVar11 + DAT_000fdd5c) + uVar10 * 2) <<
                                0xe) >> 0x10);
          uVar5 = (undefined2)
                  (((int)*(short *)(*(int *)(iVar11 + DAT_000fdd5c) + (0x80 - uVar10) * 2) &
                   0x3ffffU) >> 2);
        }
        pbVar12 = *(byte **)(iVar11 + DAT_000fdd60);
        bVar3 = *pbVar12;
        bVar1 = pbVar12[1];
        bVar2 = pbVar12[4];
        *(undefined2 *)(iVar15 + (uint)pbVar12[3] * 2 + 0x26) = uVar5;
        *(undefined2 *)(iVar15 + (uint)bVar3 * 2 + 0x26) = uVar5;
        uVar5 = lcal_adj_var(sVar6);
        *(undefined2 *)(iVar15 + (uint)bVar2 * 2 + 0x26) = uVar5;
        *(undefined2 *)(iVar15 + (uint)bVar1 * 2 + 0x26) = uVar5;
        LSendCoef('\x02',pbVar12);
        LSendCoef('\x02',pbVar12 + 3);
        return;
      }
      lchk_prm(2,10);
      iVar15 = *(int *)(iVar11 + DAT_000fdd38);
      lset_iir('\x02','\n',*(uchar *)(iVar15 + 0x31a),*(uchar *)(iVar15 + 0x31c),
               *(uchar *)(iVar15 + 0x31e),*(uchar **)(iVar11 + DAT_000fdd70),
               *(uchar **)(iVar11 + DAT_000fdd74));
LAB_000fdb08:
      iVar16 = DAT_000fdd4c;
      if (*(ushort *)(iVar15 + 0x306) < 0x80) {
        uVar8 = (uchar)*(ushort *)(iVar15 + 0x306);
      }
      else {
        uVar8 = '\x7f';
        *(undefined2 *)(iVar15 + 0x306) = 0x7f;
      }
      lset_lfo(uVar8,*(uchar **)(iVar11 + iVar16),*(uchar **)(iVar11 + iVar16));
      return;
    }
    if (param_1 == '\r') {
      iVar15 = *(int *)(iVar11 + DAT_000fdd38);
      uVar4 = *(ushort *)(iVar15 + 800);
      if (uVar4 < 4) {
        uVar8 = '\x04';
        *(undefined2 *)(iVar15 + 800) = 4;
      }
      else if (uVar4 < 0x7d) {
        uVar8 = (uchar)uVar4;
      }
      else {
        uVar8 = '|';
        *(undefined2 *)(iVar15 + 800) = 0x7c;
      }
      lset_lfoph(uVar8,*(uchar **)(iVar11 + DAT_000fdd64),*(uchar **)(iVar11 + DAT_000fdd64));
      return;
    }
    if (param_1 == 0xff) {
      puVar13 = *(undefined1 **)(iVar11 + DAT_000fdd40);
      *puVar13 = 1;
      iVar15 = *(int *)(iVar11 + iVar15);
      *(undefined2 *)(iVar15 + 0x6c) = 0x8000;
      *(undefined2 *)(iVar15 + 0x5e) = 0x8000;
      *(undefined2 *)(iVar15 + 0xd8) = 0x7fff;
      *(undefined2 *)(iVar15 + 0xd2) = 0x7fff;
      *(undefined2 *)(iVar15 + 0xc2) = 0x7fff;
      *(undefined2 *)(iVar15 + 0xbc) = 0x7fff;
      *(undefined2 *)(iVar15 + 0x9c) = 0x7fff;
      *(undefined2 *)(iVar15 + 0x96) = 0x7fff;
      *(undefined2 *)(iVar15 + 0x82) = 0x7fff;
      *(undefined2 *)(iVar15 + 0x7c) = 0x7fff;
      *(undefined2 *)(iVar15 + 0x56) = 0x7fff;
      *(undefined2 *)(iVar15 + 0xe8) = 0x7fff;
      *(undefined2 *)(iVar15 + 0xec) = 0x7fff;
      *(undefined2 *)(iVar15 + 0x288) = 2;
      lup_vflange('\0');
      lup_vflange('\x01');
      lup_vflange('\x02');
      lup_vflange('\x03');
      lup_vflange('\r');
      *puVar13 = 0;
      return;
    }
  }
  return;
}

