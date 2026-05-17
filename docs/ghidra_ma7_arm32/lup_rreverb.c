/* lup_rreverb @ 000f9d64 1580B */


/* YAMAHA::lup_rreverb(unsigned char) */

void YAMAHA::lup_rreverb(uchar param_1)

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
  ushort uVar10;
  undefined2 uVar11;
  int iVar12;
  ushort uVar13;
  undefined2 uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  uchar *puVar21;
  byte *pbVar22;
  uint uVar23;
  int iVar24;
  undefined1 *puVar25;
  int iVar26;
  uchar local_38;
  uchar local_37;
  uchar local_36;
  uchar local_35;
  uchar local_34;
  uchar local_33;
  uchar local_32;
  uchar local_31;
  int local_2c;
  
  iVar12 = DAT_000fa3e4;
  iVar26 = DAT_000fa3d8;
  iVar17 = DAT_000fa3bc;
  iVar24 = DAT_000fa3a4;
  iVar16 = DAT_000fa398;
  iVar18 = DAT_000fa390 + 0xf9d7a;
  piVar19 = *(int **)(iVar18 + DAT_000fa394);
  local_2c = *piVar19;
  if (param_1 == '\n') {
    piVar20 = *(int **)(iVar18 + DAT_000fa398);
    iVar16 = *piVar20;
  }
  else {
    if (10 < param_1) {
      if (param_1 == '\r') {
        piVar20 = *(int **)(iVar18 + DAT_000fa398);
        uVar13 = *(ushort *)((int)piVar20 + 0x2e6);
LAB_000fa128:
        if (*(ushort *)(piVar20 + 0xc0) == 0) {
          *(undefined2 *)(piVar20 + 0xc0) = 1;
        }
        else if (10 < *(ushort *)(piVar20 + 0xc0)) {
          *(undefined2 *)(piVar20 + 0xc0) = 10;
        }
        iVar16 = DAT_000fa3d4;
        puVar21 = *(uchar **)(iVar18 + DAT_000fa3d0);
        lset_combg(uVar13,*(ushort *)(*(int *)(iVar18 + DAT_000fa3a4) + *piVar20 * 2),puVar21);
        iVar24 = puVar21[1] + 0x10;
        iVar17 = *(int *)(*(int *)(iVar18 + iVar16) + (*(ushort *)(piVar20 + 0xc0) - 1) * 4);
        iVar26 = (int)*(short *)((int)piVar20 + iVar24 * 2 + 6);
        iVar16 = iVar17 * iVar26 >> 0xe;
        if (iVar16 < 0x8000) {
          bVar9 = puVar21[2];
          *(short *)((int)piVar20 + iVar24 * 2 + 6) = (short)iVar16;
          *(short *)((int)piVar20 + (uint)bVar9 * 2 + 0x26) =
               (short)((0x8000 - iVar17) * iVar26 >> 0xe);
        }
        else {
          bVar9 = puVar21[2];
          *(undefined2 *)((int)piVar20 + iVar24 * 2 + 6) = 0x7fff;
          *(undefined2 *)((int)piVar20 + (bVar9 + 0x10) * 2 + 6) = 0;
        }
        iVar24 = puVar21[4] + 0x10;
        iVar26 = (int)*(short *)((int)piVar20 + iVar24 * 2 + 6);
        iVar16 = iVar17 * iVar26 >> 0xe;
        if (iVar16 < 0x8000) {
          bVar9 = puVar21[5];
          *(short *)((int)piVar20 + iVar24 * 2 + 6) = (short)iVar16;
          *(short *)((int)piVar20 + (uint)bVar9 * 2 + 0x26) =
               (short)((0x8000 - iVar17) * iVar26 >> 0xe);
        }
        else {
          bVar9 = puVar21[5];
          *(undefined2 *)((int)piVar20 + iVar24 * 2 + 6) = 0x7fff;
          *(undefined2 *)((int)piVar20 + (bVar9 + 0x10) * 2 + 6) = 0;
        }
        iVar24 = puVar21[7] + 0x10;
        iVar26 = (int)*(short *)((int)piVar20 + iVar24 * 2 + 6);
        iVar16 = iVar17 * iVar26 >> 0xe;
        if (iVar16 < 0x8000) {
          bVar9 = puVar21[8];
          *(short *)((int)piVar20 + iVar24 * 2 + 6) = (short)iVar16;
          *(short *)((int)piVar20 + (uint)bVar9 * 2 + 0x26) =
               (short)((0x8000 - iVar17) * iVar26 >> 0xe);
        }
        else {
          bVar9 = puVar21[8];
          *(undefined2 *)((int)piVar20 + iVar24 * 2 + 6) = 0x7fff;
          *(undefined2 *)((int)piVar20 + (bVar9 + 0x10) * 2 + 6) = 0;
        }
        iVar26 = puVar21[10] + 0x10;
        iVar24 = (int)*(short *)((int)piVar20 + iVar26 * 2 + 6);
        iVar16 = iVar17 * iVar24 >> 0xe;
        if (iVar16 < 0x8000) {
          bVar9 = puVar21[0xb];
          *(short *)((int)piVar20 + iVar26 * 2 + 6) = (short)iVar16;
          *(short *)((int)piVar20 + (uint)bVar9 * 2 + 0x26) =
               (short)((0x8000 - iVar17) * iVar24 >> 0xe);
        }
        else {
          bVar9 = puVar21[0xb];
          *(undefined2 *)((int)piVar20 + iVar26 * 2 + 6) = 0x7fff;
          *(undefined2 *)((int)piVar20 + (bVar9 + 0x10) * 2 + 6) = 0;
        }
      }
      else {
        if (0xd < param_1) {
          if (param_1 == '\x0e') {
            iVar16 = *(int *)(iVar18 + DAT_000fa398);
            *(undefined2 *)(iVar16 + 0x302) = 0x40;
            pbVar22 = *(byte **)(iVar18 + iVar26);
            bVar9 = *pbVar22;
            uVar14 = lcal_fb(0x40);
            *(undefined2 *)(iVar16 + (uint)bVar9 * 2 + 0x26) = uVar14;
            LSendCoef('\x01',pbVar22);
          }
          else if (param_1 == 0xff) {
            puVar25 = *(undefined1 **)(iVar18 + DAT_000fa3b8);
            *puVar25 = 1;
            iVar16 = *(int *)(iVar18 + iVar16);
            *(undefined2 *)(iVar16 + 0x17a) = 0x1280;
            *(undefined2 *)(iVar16 + 0x182) = 0x7fc0;
            *(undefined2 *)(iVar16 + 0x180) = 0xdb40;
            *(undefined2 *)(iVar16 + 0x192) = 0x7fff;
            *(undefined2 *)(iVar16 + 0x17e) = 0x7fff;
            *(undefined2 *)(iVar16 + 0x19c) = 0x940;
            *(undefined2 *)(iVar16 + 0x178) = 0x940;
            *(undefined2 *)(iVar16 + 0x162) = 0x4100;
            *(undefined2 *)(iVar16 + 0x168) = 0x4100;
            *(undefined2 *)(iVar16 + 0x15e) = 0x40c0;
            *(undefined2 *)(iVar16 + 0x164) = 0x40c0;
            *(undefined2 *)(iVar16 + 0x1be) = 0x3f00;
            *(undefined2 *)(iVar16 + 0x160) = 0x3f00;
            *(undefined2 *)(iVar16 + 0x166) = 0x3f00;
            *(undefined2 *)(iVar16 + 0x176) = 0;
            lup_rreverb('\0');
            iVar16 = DAT_000fa3a8;
            lup_rreverb('\x01');
            lup_rreverb('\x03');
            lup_rreverb('\x04');
            lup_rreverb('\v');
            lup_rreverb('\f');
            lup_rreverb('\x0e');
            puVar21 = *(uchar **)(iVar18 + iVar16);
            local_35 = puVar21[5];
            local_34 = puVar21[8];
            local_32 = puVar21[0xc];
            local_38 = *puVar21;
            local_37 = puVar21[1];
            local_36 = puVar21[4];
            local_33 = puVar21[9];
            local_31 = puVar21[0xd];
            LSendAdrs('\b',&local_38);
            iVar16 = DAT_000fa3bc;
            LSendAdrs('\x01',*(uchar **)(iVar18 + DAT_000fa3ac));
            LSendAdrs('\x06',*(uchar **)(iVar18 + iVar16));
            *puVar25 = 0;
          }
          goto LAB_000f9eec;
        }
        if (param_1 != '\v') {
          if (param_1 == '\f') {
            piVar20 = *(int **)(iVar18 + DAT_000fa398);
            uVar15 = (uint)*(ushort *)((int)piVar20 + 0x2fe);
            if (uVar15 == 0) {
              uVar15 = 1;
              iVar16 = 0x7f;
              *(undefined2 *)((int)piVar20 + 0x2fe) = 1;
            }
            else if (uVar15 < 0x80) {
              iVar16 = 0x80 - uVar15;
            }
            else {
              uVar15 = 0x7f;
              iVar16 = 1;
              *(undefined2 *)((int)piVar20 + 0x2fe) = 0x7f;
            }
            pbVar22 = *(byte **)(iVar18 + DAT_000fa3cc);
            bVar3 = pbVar22[9];
            bVar4 = pbVar22[8];
            uVar14 = *(undefined2 *)(*(int *)(iVar18 + DAT_000fa3c4) + uVar15 * 2);
            bVar9 = *pbVar22;
            bVar5 = pbVar22[7];
            bVar6 = pbVar22[6];
            bVar1 = pbVar22[5];
            bVar7 = pbVar22[4];
            bVar8 = pbVar22[3];
            bVar2 = pbVar22[2];
            uVar11 = (undefined2)
                     ((uint)*(ushort *)(*(int *)(iVar18 + DAT_000fa3c8) + *piVar20 * 2) *
                      (int)*(short *)(*(int *)(iVar18 + DAT_000fa3c4) + iVar16 * 2) * 2 >> 0x10);
            *(undefined2 *)((int)piVar20 + (uint)pbVar22[1] * 2 + 0x26) = uVar11;
            *(undefined2 *)((int)piVar20 + (uint)bVar9 * 2 + 0x26) = uVar11;
            *(undefined2 *)((int)piVar20 + (uint)bVar3 * 2 + 0x26) = uVar14;
            *(undefined2 *)((int)piVar20 + (uint)bVar4 * 2 + 0x26) = uVar14;
            *(undefined2 *)((int)piVar20 + (uint)bVar5 * 2 + 0x26) = uVar14;
            *(undefined2 *)((int)piVar20 + (uint)bVar6 * 2 + 0x26) = uVar14;
            *(undefined2 *)((int)piVar20 + (uint)bVar1 * 2 + 0x26) = uVar14;
            *(undefined2 *)((int)piVar20 + (uint)bVar7 * 2 + 0x26) = uVar14;
            *(undefined2 *)((int)piVar20 + (uint)bVar8 * 2 + 0x26) = uVar14;
            *(undefined2 *)((int)piVar20 + (uint)bVar2 * 2 + 0x26) = uVar14;
            LSendCoef('\n',pbVar22);
          }
          goto LAB_000f9eec;
        }
        piVar20 = *(int **)(iVar18 + DAT_000fa398);
        uVar13 = *(ushort *)(piVar20 + 0xbf);
        if (3 < uVar13) {
          uVar13 = 3;
          *(undefined2 *)(piVar20 + 0xbf) = 3;
        }
        puVar21 = *(uchar **)(iVar18 + iVar12);
        lset_apf(uVar13,*(ushort *)(piVar20 + 0xba),
                 *(ushort *)(*(int *)(iVar18 + iVar24) + *piVar20 * 2),'\f',puVar21,
                 *(uchar **)(iVar18 + iVar17),'\x03');
      }
      LSendCoef('\f',puVar21);
      goto LAB_000f9eec;
    }
    if (param_1 == '\x02') {
      piVar20 = *(int **)(iVar18 + DAT_000fa398);
    }
    else {
      if (2 < param_1) {
        if (param_1 == '\x03') {
          lchk_prm(3,3);
          lset_iir('\x01','\x01',(uchar)(*(int **)(iVar18 + iVar16))[0xbb],
                   *(char *)(*(int *)(iVar18 + DAT_000fa3dc) + **(int **)(iVar18 + iVar16)) + '@',
                   '\0',*(uchar **)(iVar18 + DAT_000fa3e0),*(uchar **)(iVar18 + DAT_000fa3e0));
        }
        else if (param_1 == '\x04') {
          lchk_prm(4,4);
          lset_iir('\x01','\0',*(uchar *)(*(int *)(iVar18 + iVar16) + 0x2ee),'@','\0',
                   *(uchar **)(iVar18 + DAT_000fa3c0),*(uchar **)(iVar18 + DAT_000fa3c0));
        }
        goto LAB_000f9eec;
      }
      if (param_1 == '\0') {
        piVar20 = *(int **)(iVar18 + DAT_000fa398);
        uVar13 = *(ushort *)((int)piVar20 + 0x2e6);
        if (0x45 < uVar13) {
          uVar13 = 0x45;
          *(undefined2 *)((int)piVar20 + 0x2e6) = 0x45;
        }
        goto LAB_000fa128;
      }
      if (param_1 != '\x01') goto LAB_000f9eec;
      piVar20 = *(int **)(iVar18 + DAT_000fa398);
      if (10 < *(ushort *)(piVar20 + 0xba)) {
        *(undefined2 *)(piVar20 + 0xba) = 10;
      }
    }
    iVar16 = *piVar20;
    bVar9 = *(byte *)(DAT_000fa39c + 0xf9dbc + iVar16);
    if ((ushort)bVar9 < *(ushort *)((int)piVar20 + 0x2ea)) {
      *(ushort *)((int)piVar20 + 0x2ea) = (ushort)bVar9;
    }
  }
  iVar17 = DAT_000fa3a8;
  iVar24 = DAT_000fa3a4;
  bVar9 = *(byte *)(DAT_000fa3a0 + iVar16 + 0xf9dea);
  if ((ushort)bVar9 < *(ushort *)((int)piVar20 + 0x2fa)) {
    *(ushort *)((int)piVar20 + 0x2fa) = (ushort)bVar9;
  }
  puVar21 = *(uchar **)(iVar18 + iVar17);
  lset_combd(*(ushort *)(piVar20 + 0xba),*(ushort *)(*(int *)(iVar18 + iVar24) + iVar16 * 2),puVar21
            );
  local_38 = puVar21[2];
  local_34 = puVar21[10];
  local_37 = puVar21[3];
  local_36 = puVar21[6];
  local_35 = puVar21[7];
  local_33 = puVar21[0xb];
  local_32 = puVar21[0xe];
  local_31 = puVar21[0xf];
  LSendAdrs('\b',&local_38);
  pbVar22 = *(byte **)(iVar18 + DAT_000fa3ac);
  iVar24 = *(int *)(iVar18 + DAT_000fa3b0);
  uVar13 = *(ushort *)((int)piVar20 + (uint)*pbVar22 * 2 + 0x266);
  uVar15 = lcal_dly10(*(ushort *)(iVar24 + (uint)*(ushort *)((int)piVar20 + 0x2ea) * 2));
  iVar16 = DAT_000fa3b4;
  bVar9 = pbVar22[3];
  uVar10 = *(ushort *)(piVar20 + 0xba);
  uVar23 = (uint)uVar13 + uVar15 / 3;
  uVar13 = *(ushort *)((int)piVar20 + 0x2fa);
  uVar15 = uVar23 & 0xffff;
  if (uVar15 < 0xfff) {
    uVar14 = (undefined2)uVar23;
  }
  else {
    uVar14 = 0xfff;
  }
  *(undefined2 *)((int)piVar20 + (uint)pbVar22[2] * 2 + 0x266) = uVar14;
  uVar13 = *(ushort *)(iVar24 + (uint)uVar13 * 2);
  uVar23 = uVar15 + *(byte *)(*(int *)(iVar18 + iVar16) + (uint)uVar10) / 3;
  uVar14 = (undefined2)uVar23;
  if (0xffe < (uVar23 & 0xffff)) {
    uVar14 = 0xfff;
  }
  *(undefined2 *)((int)piVar20 + (uint)bVar9 * 2 + 0x266) = uVar14;
  uVar23 = lcal_dly10(uVar13);
  uVar15 = uVar15 + uVar23 / 3;
  uVar14 = (undefined2)uVar15;
  if (0xffe < (uVar15 & 0xffff)) {
    uVar14 = 0xfff;
  }
  *(undefined2 *)((int)piVar20 + (uint)pbVar22[1] * 2 + 0x266) = uVar14;
  LSendAdrs('\x03',pbVar22 + 1);
  LSendReverb();
LAB_000f9eec:
  if (local_2c == *piVar19) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

