/* MaMfiCnv_Conv @ 000a353c 10620B */


/* WARNING: Type propagation algorithm not settling */
/* YAMAHA::MaMfiCnv_Conv(_MACNV_SEQ_INFO*, _MASND_CMD_PARAM*) */

undefined4 YAMAHA::MaMfiCnv_Conv(_MACNV_SEQ_INFO *param_1,_MASND_CMD_PARAM *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  byte *pbVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  int iVar20;
  undefined1 uVar21;
  byte bVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  byte bVar26;
  int iVar27;
  undefined4 uVar28;
  int iVar29;
  int iVar30;
  undefined4 *puVar31;
  char *pcVar32;
  int iVar33;
  char *pcVar34;
  uint uVar35;
  uint uVar36;
  int iVar37;
  int iVar38;
  uint uVar39;
  bool bVar40;
  uint local_5c;
  uint local_4c;
  _MASNDVOICE a_Stack_30 [6];
  char local_2a;
  
  iVar4 = DAT_000a41c0;
  iVar3 = DAT_000a41bc;
  iVar2 = DAT_000a41b8;
  iVar11 = DAT_000a41b0;
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (pcVar34 = *(char **)(param_1 + 4), pcVar34 == (char *)0x0)) ||
     (param_2 == (_MASND_CMD_PARAM *)0x0)) {
    uVar28 = 0xfffffffe;
  }
  else if (*pcVar34 == '\x01') {
    if (pcVar34[0x1b7] == '\0') {
      iVar23 = DAT_000a41b4 + 0xa35f6;
      iVar30 = DAT_000a41b0 + 0xa3686;
      if (pcVar34[0x15] == '\x02') {
        pcVar34[0x15] = '\0';
      }
      pcVar34[0x1b8] = '\0';
      uVar24 = 0;
LAB_000a361c:
      cVar14 = (char)uVar24;
      if (uVar24 == 0) {
        do {
          iVar8 = 0;
          iVar20 = *(int *)(param_1 + 4);
          if ((int)((uint)*(byte *)(iVar20 + 3) << 0x18) < 0) {
            uVar24 = *(byte *)(iVar20 + 3) ^ 0x80;
            puVar10 = (undefined1 *)(iVar20 + 0x6b48);
            *(char *)(iVar20 + 3) = (char)uVar24;
            while( true ) {
              bVar26 = *(byte *)(iVar20 + iVar8 + 0x77);
              uVar9 = (uint)bVar26 * 2;
              if ((uVar24 != 0x40) && (uVar9 = uVar24, bVar26 != 0x20)) {
                uVar9 = (uint)*(byte *)(iVar23 + (uVar24 >> 2) * 0x20 + (uint)(bVar26 >> 1) + 0xe90)
                ;
              }
              *puVar10 = (char)uVar9;
              bVar26 = *(byte *)(iVar20 + 0x1b7);
              if (bVar26 < 0x88) {
                *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                iVar25 = (uint)bVar26 * 0x14 + 0x7118;
                iVar12 = iVar20 + iVar25;
                *(undefined4 *)(iVar20 + iVar25) = 5;
                *(undefined4 *)(iVar12 + 4) = 0;
                *(int *)(iVar12 + 8) = iVar8;
                *(uint *)(iVar12 + 0xc) = uVar9;
                *(undefined4 *)(iVar12 + 0x10) = 0;
              }
              iVar12 = iVar8 + 1;
              if (iVar12 == 0x10) break;
              bVar26 = *(byte *)(iVar20 + 3);
              bVar7 = *(byte *)(iVar20 + iVar12 + 0x77);
              uVar24 = (uint)bVar7 * 2;
              if ((bVar26 != 0x40) && (uVar24 = (uint)bVar26, bVar7 != 0x20)) {
                uVar24 = (uint)*(byte *)(iVar23 + (uint)(bVar26 >> 2) * 0x20 + (uint)(bVar7 >> 1) +
                                        0xe90);
              }
              puVar10[0x14] = (char)uVar24;
              bVar26 = *(byte *)(iVar20 + 0x1b7);
              if (bVar26 < 0x88) {
                *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                iVar27 = (uint)bVar26 * 0x14 + 0x7118;
                iVar25 = iVar20 + iVar27;
                *(undefined4 *)(iVar20 + iVar27) = 5;
                *(undefined4 *)(iVar25 + 4) = 0;
                *(int *)(iVar25 + 8) = iVar12;
                *(uint *)(iVar25 + 0xc) = uVar24;
                *(undefined4 *)(iVar25 + 0x10) = 0;
              }
              bVar26 = *(byte *)(iVar20 + 3);
              bVar7 = *(byte *)(iVar20 + iVar8 + 2 + 0x77);
              uVar24 = (uint)bVar7 * 2;
              if ((bVar26 != 0x40) && (uVar24 = (uint)bVar26, bVar7 != 0x20)) {
                uVar24 = (uint)*(byte *)(iVar23 + (uint)(bVar26 >> 2) * 0x20 + (uint)(bVar7 >> 1) +
                                        0xe90);
              }
              puVar10[0x28] = (char)uVar24;
              bVar26 = *(byte *)(iVar20 + 0x1b7);
              if (bVar26 < 0x88) {
                *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                iVar25 = (uint)bVar26 * 0x14 + 0x7118;
                iVar12 = iVar20 + iVar25;
                *(undefined4 *)(iVar20 + iVar25) = 5;
                *(undefined4 *)(iVar12 + 4) = 0;
                *(int *)(iVar12 + 8) = iVar8 + 2;
                *(uint *)(iVar12 + 0xc) = uVar24;
                *(undefined4 *)(iVar12 + 0x10) = 0;
              }
              uVar24 = (uint)*(byte *)(iVar20 + 3);
              iVar8 = iVar8 + 3;
              puVar10 = puVar10 + 0x3c;
            }
          }
          if (*(char *)(iVar20 + 0x14) == '\x01') {
            uVar24 = (uint)*(byte *)(iVar20 + 0x137);
            *(undefined1 *)(iVar20 + 0x14) = 0;
            if (uVar24 < 0x40) {
              uVar24 = uVar24 << 1;
LAB_000a3c0c:
              if (*(byte *)(iVar20 + 0xc) < 4) {
                bVar26 = *(byte *)(iVar20 + 0x1b7);
                if (bVar26 < 0x88) {
                  *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                  iVar8 = (uint)bVar26 * 0x14 + 0x7118;
                  iVar12 = iVar20 + iVar8;
                  *(undefined4 *)(iVar20 + iVar8) = 0x23;
                  *(undefined4 *)(iVar12 + 4) = 0;
                  *(undefined4 *)(iVar12 + 8) = 0;
                  *(undefined4 *)(iVar12 + 0xc) = 0;
                  *(uint *)(iVar12 + 0x10) = uVar24;
                }
              }
            }
            else if (uVar24 != 0xff) goto LAB_000a3c0c;
            uVar24 = (uint)*(byte *)(iVar20 + 0x138);
            if (uVar24 < 0x40) {
              uVar24 = uVar24 << 1;
LAB_000a3c54:
              if (*(byte *)(iVar20 + 0xc) < 4) {
                bVar26 = *(byte *)(iVar20 + 0x1b7);
                if (bVar26 < 0x88) {
                  *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                  iVar8 = (uint)bVar26 * 0x14 + 0x7118;
                  iVar12 = iVar20 + iVar8;
                  *(undefined4 *)(iVar20 + iVar8) = 0x23;
                  *(undefined4 *)(iVar12 + 4) = 0;
                  *(undefined4 *)(iVar12 + 8) = 0;
                  *(undefined4 *)(iVar12 + 0xc) = 1;
                  *(uint *)(iVar12 + 0x10) = uVar24;
                }
              }
            }
            else if (uVar24 != 0xff) goto LAB_000a3c54;
            iVar8 = 2;
LAB_000a3db2:
            do {
              uVar24 = (uint)*(byte *)(iVar20 + iVar8 + 0x137);
              if (uVar24 < 0x40) {
                uVar24 = uVar24 << 1;
LAB_000a3dc2:
                if (3 < *(byte *)(iVar20 + 0xc)) goto LAB_000a3c98;
                bVar26 = *(byte *)(iVar20 + 0x1b7);
                if (0x87 < bVar26) goto LAB_000a3c98;
                *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                iVar12 = (uint)bVar26 * 0x14 + 0x7118;
                iVar25 = iVar20 + iVar12;
                *(undefined4 *)(iVar20 + iVar12) = 0x23;
                *(int *)(iVar25 + 0xc) = iVar8;
                *(uint *)(iVar25 + 0x10) = uVar24;
                *(undefined4 *)(iVar25 + 4) = 0;
                *(undefined4 *)(iVar25 + 8) = 0;
                uVar24 = (uint)*(byte *)(iVar20 + iVar8 + 0x138);
                if (uVar24 < 0x40) goto LAB_000a3ca6;
LAB_000a3e0e:
                if (uVar24 != 0xff) goto LAB_000a3ca8;
                uVar24 = (uint)*(byte *)(iVar20 + iVar8 + 0x139);
                if (uVar24 < 0x40) goto LAB_000a3cf0;
LAB_000a3e22:
                if (uVar24 != 0xff) goto LAB_000a3cf2;
                uVar24 = (uint)*(byte *)(iVar20 + iVar8 + 0x13a);
                if (uVar24 < 0x40) goto LAB_000a3d34;
LAB_000a3e36:
                if (uVar24 != 0xff) goto LAB_000a3d36;
                uVar24 = (uint)*(byte *)(iVar20 + iVar8 + 0x13b);
                if (uVar24 < 0x40) goto LAB_000a3d76;
LAB_000a3e48:
                if (uVar24 == 0xff) {
                  iVar8 = iVar8 + 5;
                  if (iVar8 == 0x20) break;
                  goto LAB_000a3db2;
                }
              }
              else {
                if (uVar24 != 0xff) goto LAB_000a3dc2;
LAB_000a3c98:
                uVar24 = (uint)*(byte *)(iVar20 + iVar8 + 0x138);
                if (0x3f < uVar24) goto LAB_000a3e0e;
LAB_000a3ca6:
                uVar24 = uVar24 << 1;
LAB_000a3ca8:
                if (*(byte *)(iVar20 + 0xc) < 4) {
                  bVar26 = *(byte *)(iVar20 + 0x1b7);
                  if (bVar26 < 0x88) {
                    *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                    iVar12 = (uint)bVar26 * 0x14 + 0x7118;
                    iVar25 = iVar20 + iVar12;
                    *(undefined4 *)(iVar20 + iVar12) = 0x23;
                    *(undefined4 *)(iVar25 + 4) = 0;
                    *(undefined4 *)(iVar25 + 8) = 0;
                    *(int *)(iVar25 + 0xc) = iVar8 + 1;
                    *(uint *)(iVar25 + 0x10) = uVar24;
                  }
                }
                uVar24 = (uint)*(byte *)(iVar20 + iVar8 + 0x139);
                if (0x3f < uVar24) goto LAB_000a3e22;
LAB_000a3cf0:
                uVar24 = uVar24 << 1;
LAB_000a3cf2:
                if (*(byte *)(iVar20 + 0xc) < 4) {
                  bVar26 = *(byte *)(iVar20 + 0x1b7);
                  if (bVar26 < 0x88) {
                    *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                    iVar25 = (uint)bVar26 * 0x14 + 0x7118;
                    iVar12 = iVar20 + iVar25;
                    *(undefined4 *)(iVar20 + iVar25) = 0x23;
                    *(undefined4 *)(iVar12 + 4) = 0;
                    *(undefined4 *)(iVar12 + 8) = 0;
                    *(int *)(iVar12 + 0xc) = iVar8 + 2;
                    *(uint *)(iVar12 + 0x10) = uVar24;
                  }
                }
                uVar24 = (uint)*(byte *)(iVar20 + iVar8 + 0x13a);
                if (0x3f < uVar24) goto LAB_000a3e36;
LAB_000a3d34:
                uVar24 = uVar24 << 1;
LAB_000a3d36:
                if (*(byte *)(iVar20 + 0xc) < 4) {
                  bVar26 = *(byte *)(iVar20 + 0x1b7);
                  if (bVar26 < 0x88) {
                    *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                    iVar25 = (uint)bVar26 * 0x14 + 0x7118;
                    iVar12 = iVar20 + iVar25;
                    *(undefined4 *)(iVar20 + iVar25) = 0x23;
                    *(undefined4 *)(iVar12 + 4) = 0;
                    *(undefined4 *)(iVar12 + 8) = 0;
                    *(int *)(iVar12 + 0xc) = iVar8 + 3;
                    *(uint *)(iVar12 + 0x10) = uVar24;
                  }
                }
                uVar24 = (uint)*(byte *)(iVar20 + iVar8 + 0x13b);
                if (0x3f < uVar24) goto LAB_000a3e48;
LAB_000a3d76:
                uVar24 = uVar24 << 1;
              }
              if (*(byte *)(iVar20 + 0xc) < 4) {
                bVar26 = *(byte *)(iVar20 + 0x1b7);
                if (bVar26 < 0x88) {
                  *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                  iVar25 = (uint)bVar26 * 0x14 + 0x7118;
                  iVar12 = iVar20 + iVar25;
                  *(undefined4 *)(iVar20 + iVar25) = 0x23;
                  *(undefined4 *)(iVar12 + 4) = 0;
                  *(undefined4 *)(iVar12 + 8) = 0;
                  *(int *)(iVar12 + 0xc) = iVar8 + 4;
                  *(uint *)(iVar12 + 0x10) = uVar24;
                }
              }
              iVar8 = iVar8 + 5;
            } while (iVar8 != 0x20);
            uVar24 = 0;
            pbVar17 = (byte *)(iVar20 + 0x6b46);
            do {
              bVar26 = pbVar17[1];
              if ((uint)*pbVar17 != (uint)bVar26) {
                bVar7 = *(byte *)(iVar20 + 0x1b7);
                if (bVar7 < 0x88) {
                  *(byte *)(iVar20 + 0x1b7) = bVar7 + 1;
                  iVar8 = (uint)bVar7 * 0x14 + 0x7118;
                  iVar12 = iVar20 + iVar8;
                  *(undefined4 *)(iVar20 + iVar8) = 0xd;
                  *(undefined4 *)(iVar12 + 4) = 0;
                  *(uint *)(iVar12 + 8) = uVar24;
                  *(uint *)(iVar12 + 0xc) = (uint)bVar26;
                  *(undefined4 *)(iVar12 + 0x10) = 0;
                }
              }
              if ((*(byte *)(iVar20 + 0xc) < 3) || (uVar24 == *(byte *)(iVar20 + 0x7c72))) {
                bVar26 = *(byte *)(iVar20 + 0x1b7);
                if (bVar26 < 0x88) {
                  *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                  iVar12 = (uint)bVar26 * 0x14 + 0x7118;
                  iVar8 = iVar20 + iVar12;
                  *(undefined4 *)(iVar20 + iVar12) = 0x13;
                  *(undefined4 *)(iVar8 + 4) = 0;
                  *(uint *)(iVar8 + 8) = uVar24;
                  *(undefined4 *)(iVar8 + 0xc) = 0;
                  *(undefined4 *)(iVar8 + 0x10) = 0;
                }
              }
              bVar26 = pbVar17[0x15];
              uVar9 = uVar24 + 1;
              if ((uint)pbVar17[0x14] != (uint)bVar26) {
                bVar7 = *(byte *)(iVar20 + 0x1b7);
                if (bVar7 < 0x88) {
                  *(byte *)(iVar20 + 0x1b7) = bVar7 + 1;
                  iVar12 = (uint)bVar7 * 0x14 + 0x7118;
                  iVar8 = iVar20 + iVar12;
                  *(undefined4 *)(iVar20 + iVar12) = 0xd;
                  *(undefined4 *)(iVar8 + 4) = 0;
                  *(uint *)(iVar8 + 8) = uVar9;
                  *(uint *)(iVar8 + 0xc) = (uint)bVar26;
                  *(undefined4 *)(iVar8 + 0x10) = 0;
                }
              }
              if ((*(byte *)(iVar20 + 0xc) < 3) || (uVar9 == *(byte *)(iVar20 + 0x7c72))) {
                bVar26 = *(byte *)(iVar20 + 0x1b7);
                if (bVar26 < 0x88) {
                  *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                  iVar12 = (uint)bVar26 * 0x14 + 0x7118;
                  iVar8 = iVar20 + iVar12;
                  *(undefined4 *)(iVar20 + iVar12) = 0x13;
                  *(undefined4 *)(iVar8 + 4) = 0;
                  *(uint *)(iVar8 + 8) = uVar9;
                  *(undefined4 *)(iVar8 + 0xc) = 0;
                  *(undefined4 *)(iVar8 + 0x10) = 0;
                }
              }
              uVar24 = uVar24 + 2;
              pbVar17 = pbVar17 + 0x28;
            } while (uVar24 != 0x10);
          }
          uVar24 = *(uint *)(iVar20 + 0x1d4);
          if (uVar24 == 0) {
            if (*(int *)(iVar20 + 0x204) < 1) {
              iVar8 = *(int *)(iVar20 + 0x1f8);
              if (*(int *)(iVar20 + 0x1ec) < iVar8) {
                *(int *)(iVar20 + 0x1ec) = iVar8;
                if (*(int *)(iVar20 + 0x1f0) < iVar8) {
                  iVar8 = __divsi3(iVar8 - *(int *)(iVar20 + 0x1f0),*(undefined1 *)(iVar20 + 1));
                  iVar8 = iVar8 + 0x200 >> 10;
                  if (0 < iVar8) {
                    bVar26 = *(byte *)(iVar20 + 0x1b7);
                    if (bVar26 < 0x88) {
                      *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                      iVar25 = (uint)bVar26 * 0x14 + 0x7118;
                      iVar12 = iVar20 + iVar25;
                      *(undefined4 *)(iVar20 + iVar25) = 0x1b;
                      *(int *)(iVar12 + 4) = iVar8;
                      *(undefined4 *)(iVar12 + 8) = 0;
                      *(undefined4 *)(iVar12 + 0xc) = 0;
                      *(undefined4 *)(iVar12 + 0x10) = 0;
                      *(uint *)(iVar20 + 0x1f0) =
                           *(int *)(iVar20 + 0x1f0) + (uint)*(byte *)(iVar20 + 1) * iVar8 * 0x400;
                      cVar14 = pcVar34[0x1b7];
                      goto LAB_000a3b76;
                    }
                  }
                }
                goto LAB_000a3b72;
              }
            }
            else if (*(char *)(iVar20 + 0x13) != '\x01') {
              iVar25 = *(int *)(iVar20 + 0x1dc);
              iVar12 = *(int *)(iVar20 + 0x1f0);
              iVar27 = *(int *)(iVar20 + 0x5b34);
              iVar8 = *(int *)(iVar27 + 4);
              if (iVar25 < iVar8) {
                iVar15 = *(int *)(iVar20 + 0x1e8) * (iVar8 - iVar25) + *(int *)(iVar20 + 0x1ec);
              }
              else {
                iVar15 = *(int *)(iVar20 + 0x1ec);
              }
              iVar5 = *(int *)(iVar20 + 0x1f8);
              if (iVar25 < iVar8) {
                *(int *)(iVar20 + 0x1ec) = iVar15;
                *(undefined4 *)(iVar20 + 0x1dc) = *(undefined4 *)(iVar27 + 4);
              }
              if (iVar5 <= iVar15) {
                *(int *)(iVar20 + 0x1ec) = iVar5;
              }
              uVar24 = *(uint *)(iVar27 + 8);
              if (iVar5 <= iVar15) {
                iVar15 = iVar5;
              }
              if (uVar24 < 0x80) {
                if (iVar12 < iVar15) {
                  iVar8 = __divsi3(iVar15 - iVar12,*(undefined1 *)(iVar20 + 1));
                  iVar8 = iVar8 + 0x200 >> 10;
                }
                else {
                  iVar8 = 0;
                }
                FUN_00097d64(iVar20,iVar8,uVar24,*(undefined4 *)(iVar27 + 0xc));
                iVar8 = *(int *)(iVar20 + 0x204);
joined_r0x000a4196:
                if (iVar8 == 0) {
                  cVar14 = pcVar34[0x15];
                  goto joined_r0x000a41a0;
                }
              }
              else if (iVar12 < iVar15) {
                iVar8 = __divsi3(iVar15 - iVar12,*(undefined1 *)(iVar20 + 1));
                uVar28 = *(undefined4 *)(iVar27 + 0xc);
                iVar12 = iVar8 + 0x200 >> 10;
                if (-1 < iVar12) goto LAB_000a4488;
              }
              else {
                uVar28 = *(undefined4 *)(iVar27 + 0xc);
                iVar12 = 0;
LAB_000a4488:
                bVar26 = *(byte *)(iVar20 + 0x1b7);
                if (bVar26 < 0x88) {
                  *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                  iVar25 = (uint)bVar26 * 0x14 + 0x7118;
                  iVar8 = iVar20 + iVar25;
                  *(undefined4 *)(iVar20 + iVar25) = 0x21;
                  *(int *)(iVar8 + 4) = iVar12;
                  *(uint *)(iVar8 + 8) = uVar24 - 0x80 & 0xff;
                  *(undefined4 *)(iVar8 + 0xc) = uVar28;
                  *(undefined4 *)(iVar8 + 0x10) = 0;
                  iVar8 = *(int *)(iVar20 + 0x204);
                  *(uint *)(iVar20 + 0x1f0) =
                       *(int *)(iVar20 + 0x1f0) + (uint)*(byte *)(iVar20 + 1) * iVar12 * 0x400;
                  goto joined_r0x000a4196;
                }
              }
              puVar31 = *(undefined4 **)(iVar20 + 0x5b34);
              *(undefined4 *)(iVar20 + 0x5b34) = *puVar31;
              *puVar31 = *(undefined4 *)(iVar20 + 0x5b3c);
              *(undefined4 **)(iVar20 + 0x5b3c) = puVar31;
              if (*(int *)(iVar20 + 0x5b34) == 0) {
                *(undefined4 *)(iVar20 + 0x5b38) = 0;
              }
              *(int *)(iVar20 + 0x204) = *(int *)(iVar20 + 0x204) + -1;
            }
            goto LAB_000a36e6;
          }
          iVar8 = *(int *)(iVar20 + 0x1f8);
          if (iVar8 <= *(int *)(iVar20 + 0x1ec)) goto LAB_000a36e6;
          iVar12 = iVar20 + 0x7bb8;
          uVar9 = (uint)*(byte *)(iVar20 + 0x7c74);
          if (uVar9 == 0) {
            uVar35 = 0;
          }
          else {
            uVar35 = 0;
            uVar36 = uVar9 - 1 & 3;
            iVar25 = 0x7fffffff;
            if (((int)(uVar24 << 0x1f) < 0) && (*(int *)(iVar20 + 0x8350) <= 0x7fffffff)) {
              iVar25 = *(int *)(iVar20 + 0x8350);
            }
            uVar16 = 1;
            iVar27 = 0x14;
            if (1 < uVar9) {
              if (uVar36 != 0) {
                if (uVar36 != 1) {
                  if (uVar36 != 2) {
                    if (((uVar24 & 2) != 0) && (*(int *)(iVar20 + 0x8364) < iVar25)) {
                      uVar35 = 1;
                      iVar25 = *(int *)(iVar20 + 0x8364);
                    }
                    uVar16 = 2;
                    iVar27 = 0x28;
                  }
                  if (((1 << uVar16 & uVar24) != 0) &&
                     (iVar15 = *(int *)(iVar20 + iVar27 + 0x8350), iVar15 < iVar25)) {
                    iVar25 = iVar15;
                    uVar35 = uVar16;
                  }
                  uVar16 = uVar16 + 1;
                  iVar27 = iVar27 + 0x14;
                }
                if (((1 << uVar16 & uVar24) != 0) &&
                   (iVar15 = *(int *)(iVar20 + iVar27 + 0x8350), iVar15 < iVar25)) {
                  iVar25 = iVar15;
                  uVar35 = uVar16;
                }
                uVar16 = uVar16 + 1;
                iVar27 = iVar27 + 0x14;
                if (uVar9 <= uVar16) goto LAB_000a3a98;
              }
              do {
                if (((1 << (uVar16 & 0xff) & uVar24) != 0) &&
                   (iVar15 = *(int *)(iVar20 + iVar27 + 0x8350), iVar15 < iVar25)) {
                  iVar25 = iVar15;
                  uVar35 = uVar16;
                }
                iVar15 = iVar27 + 0x14;
                if (((1 << (uVar16 + 1 & 0xff) & uVar24) != 0) &&
                   (iVar5 = *(int *)(iVar20 + iVar15 + 0x8350), iVar5 < iVar25)) {
                  iVar25 = iVar5;
                  uVar35 = uVar16 + 1;
                }
                if (((1 << (uVar16 + 2 & 0xff) & uVar24) != 0) &&
                   (iVar5 = *(int *)(iVar15 + iVar20 + 0x8364), iVar5 < iVar25)) {
                  iVar25 = iVar5;
                  uVar35 = uVar16 + 2;
                }
                if (((1 << (uVar16 + 3 & 0xff) & uVar24) != 0) &&
                   (iVar15 = *(int *)(iVar15 + iVar20 + 0x8378), iVar15 < iVar25)) {
                  iVar25 = iVar15;
                  uVar35 = uVar16 + 3;
                }
                uVar16 = uVar16 + 4;
                iVar27 = iVar27 + 0x50;
              } while (uVar16 < uVar9);
            }
          }
LAB_000a3a98:
          iVar5 = uVar35 * 4;
          iVar27 = *(int *)(iVar20 + 0x204);
          iVar15 = uVar35 * 0x14 + 0x788;
          iVar33 = iVar12 + iVar15;
          iVar25 = *(int *)(iVar33 + 0xc);
          if (0 < iVar27) {
            iVar38 = *(int *)(iVar20 + 0x5b34);
            if (iVar25 < *(int *)(iVar38 + 4)) goto LAB_000a40ba;
            iVar25 = *(int *)(iVar20 + 0x1e8) * (*(int *)(iVar38 + 4) - *(int *)(iVar20 + 0x1dc)) +
                     *(int *)(iVar20 + 0x1ec);
            *(int *)(iVar20 + 0x1ec) = iVar25;
            if (iVar8 <= iVar25) {
              iVar25 = *(int *)(iVar33 + 0xc);
              *(int *)(iVar20 + 0x1dc) = iVar25;
              iVar38 = *(int *)(iVar33 + 0x10);
              *(int *)(iVar20 + 0x1ec) = iVar38;
              goto joined_r0x000a3afc;
            }
            iVar8 = *(int *)(iVar20 + 0x1f0);
            *(undefined4 *)(iVar20 + 0x1dc) = *(undefined4 *)(iVar38 + 4);
            uVar24 = *(uint *)(iVar38 + 8);
            if (uVar24 < 0x80) {
              if (iVar8 < iVar25) {
                iVar8 = __divsi3(iVar25 - iVar8,*(undefined1 *)(iVar20 + 1));
                iVar8 = iVar8 + 0x200 >> 10;
              }
              else {
                iVar8 = 0;
              }
              FUN_00097d64(iVar20,iVar8,uVar24,*(undefined4 *)(iVar38 + 0xc));
              iVar8 = *(int *)(iVar20 + 0x204);
joined_r0x000a472a:
              if (iVar8 == 0) goto LAB_000a3b72;
            }
            else if (iVar8 < iVar25) {
              iVar8 = __divsi3(iVar25 - iVar8,*(undefined1 *)(iVar20 + 1));
              uVar28 = *(undefined4 *)(iVar38 + 0xc);
              iVar12 = iVar8 + 0x200 >> 10;
              if (-1 < iVar12) goto LAB_000a4408;
            }
            else {
              uVar28 = *(undefined4 *)(iVar38 + 0xc);
              iVar12 = 0;
LAB_000a4408:
              bVar26 = *(byte *)(iVar20 + 0x1b7);
              if (bVar26 < 0x88) {
                *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                iVar25 = (uint)bVar26 * 0x14 + 0x7118;
                iVar8 = iVar20 + iVar25;
                *(undefined4 *)(iVar20 + iVar25) = 0x21;
                *(int *)(iVar8 + 4) = iVar12;
                *(uint *)(iVar8 + 8) = uVar24 - 0x80 & 0xff;
                *(undefined4 *)(iVar8 + 0xc) = uVar28;
                *(undefined4 *)(iVar8 + 0x10) = 0;
                iVar8 = *(int *)(iVar20 + 0x204);
                *(uint *)(iVar20 + 0x1f0) =
                     *(int *)(iVar20 + 0x1f0) + (uint)*(byte *)(iVar20 + 1) * iVar12 * 0x400;
                goto joined_r0x000a472a;
              }
            }
            puVar31 = *(undefined4 **)(iVar20 + 0x5b34);
            *(undefined4 *)(iVar20 + 0x5b34) = *puVar31;
            *puVar31 = *(undefined4 *)(iVar20 + 0x5b3c);
            *(undefined4 **)(iVar20 + 0x5b3c) = puVar31;
            if (*(int *)(iVar20 + 0x5b34) == 0) {
              *(undefined4 *)(iVar20 + 0x5b38) = 0;
            }
            *(int *)(iVar20 + 0x204) = *(int *)(iVar20 + 0x204) + -1;
            cVar14 = pcVar34[0x1b7];
            goto LAB_000a3b76;
          }
LAB_000a40ba:
          *(int *)(iVar20 + 0x1dc) = iVar25;
          iVar38 = *(int *)(iVar33 + 0x10);
          *(int *)(iVar20 + 0x1ec) = iVar38;
joined_r0x000a3afc:
          if (iVar8 <= iVar38) {
            *(int *)(iVar20 + 0x1ec) = iVar8;
            *(undefined4 *)(iVar20 + 0x1d4) = 0;
            cVar14 = pcVar34[0x1b7];
            goto LAB_000a3b76;
          }
          iVar8 = *(int *)(iVar33 + 4) + *(int *)(iVar33 + 8);
          local_5c = *(byte *)(iVar20 + 0x7d3c) & 0x40;
          uVar9 = (uint)*(byte *)(iVar8 + 1);
          if ((*(byte *)(iVar20 + 0x7d3c) & 0x40) != 0) goto switchD_000a4604_caseD_b2;
          if (uVar9 == 0x7f || (uVar9 & 0x7f) == 0x3f) {
            if (uVar9 == 0x7f) {
              bVar26 = *(byte *)(iVar8 + 2);
              if (bVar26 < 0xf0) {
                if (*(short *)(iVar20 + 0x7c5e) == 3) {
                  if (bVar26 == 0) {
                    *(undefined1 *)(iVar20 + iVar5 + (uint)(*(byte *)(iVar8 + 3) >> 6) + 0x157) =
                         0x3f;
                  }
                }
                else if (bVar26 == 0) {
                  *(byte *)(iVar20 + iVar5 + (uint)(*(byte *)(iVar8 + 3) >> 6) + 0x157) =
                       *(byte *)(iVar8 + 4) & 0x3f;
                }
                if (*(int *)(iVar20 + 0x1f0) < iVar38) {
                  iVar25 = __divsi3(iVar38 - *(int *)(iVar20 + 0x1f0),*(undefined1 *)(iVar20 + 1));
                  iVar25 = iVar25 + 0x200 >> 10;
                }
                else {
                  iVar25 = 0;
                }
                bVar7 = *(byte *)(iVar8 + 3);
                uVar24 = (uint)bVar7;
                iVar8 = *(int *)(param_1 + 4);
                iVar27 = iVar8 + 0x7bb8;
                if ((*(char *)(iVar8 + 0x7c6c) == '\x04') &&
                   (uVar9 = *(byte *)(iVar8 + 0x7d3c) & 0x40,
                   (*(byte *)(iVar8 + 0x7d3c) & 0x40) == 0)) {
                  if (bVar26 == 0x80) {
                    iVar5 = iVar5 + (uint)(bVar7 >> 6);
                    *(char *)(iVar8 + iVar5 + 0x177) = (char)(uVar24 & 0x3f);
                    if (-1 < iVar25) {
                      bVar26 = *(byte *)(iVar8 + 0x1b7);
                      if (bVar26 < 0x88) {
                        *(byte *)(iVar8 + 0x1b7) = bVar26 + 1;
                        iVar27 = (uint)bVar26 * 0x14 + 0x7118;
                        iVar38 = iVar8 + iVar27;
                        iVar37 = DAT_000a4f00 + 0xa4ca2;
                        *(undefined4 *)(iVar8 + iVar27) = 0x24;
                        *(int *)(iVar38 + 8) = iVar5 + 0x10;
                        *(int *)(iVar38 + 4) = iVar25;
                        iVar27 = *(int *)(iVar37 + (uVar24 & 0x3f) * 8 + 0x5b8);
                        iVar5 = *(int *)(iVar37 + (uint)*(byte *)(iVar8 + 7) * 4 + 0x5b8);
                        iVar29 = *(int *)(iVar37 + (uint)*(byte *)(iVar8 + 2) * 4 + 0x5b8);
                        *(uint *)(iVar38 + 0x10) = uVar9;
                        uVar24 = iVar29 + iVar5 + iVar27;
                        if (0xbf < uVar24) {
                          uVar24 = 0xc0;
                        }
                        *(undefined4 *)(iVar38 + 0xc) = *(undefined4 *)(iVar37 + uVar24 * 4);
LAB_000a4ad2:
                        *(uint *)(iVar8 + 0x1f0) =
                             *(int *)(iVar8 + 0x1f0) + (uint)*(byte *)(iVar8 + 1) * iVar25 * 0x400;
                      }
                    }
                    goto LAB_000a48c8;
                  }
                  if (bVar26 < 0x81) {
                    if (bVar26 != 0) {
                      if ((bVar26 == 1) && (-1 < iVar25)) {
                        bVar26 = *(byte *)(iVar8 + 0x1b7);
                        if (bVar26 < 0x88) {
                          *(byte *)(iVar8 + 0x1b7) = bVar26 + 1;
                          iVar38 = (uint)bVar26 * 0x14 + 0x7118;
                          iVar27 = iVar8 + iVar38;
                          *(undefined4 *)(iVar8 + iVar38) = 0x21;
                          *(uint *)(iVar27 + 8) = iVar5 + (uint)(bVar7 >> 6) + 0x10;
                          *(int *)(iVar27 + 4) = iVar25;
                          *(uint *)(iVar27 + 0xc) = uVar24 & 0x3f;
                          *(uint *)(iVar27 + 0x10) = uVar9;
                          goto LAB_000a4ad2;
                        }
                      }
                      goto switchD_000a4604_caseD_b2;
                    }
                    iVar5 = iVar5 + (uint)(bVar7 >> 6);
                    uVar24 = uVar24 & 0x3f;
                    *(char *)(iVar8 + iVar5 + 0x197) = (char)uVar24;
                    if (iVar25 == -4) {
                      *(byte *)(iVar5 + iVar27 + 0x11f) = *(byte *)(iVar5 + iVar27 + 0x11f) | 2;
                      *(undefined1 *)(iVar8 + 0x7c70) = 1;
                      uVar24 = *(int *)(iVar20 + 0x1d4);
                    }
                    else if (iVar25 == -3) {
                      iVar25 = *(int *)(iVar27 + uVar24 * 0x18 + 0x194);
                      if (iVar25 == 1) {
                        uVar21 = 0x80;
                        uVar1 = 0;
                      }
                      else if (iVar25 == 2) {
                        uVar1 = 0x40;
                        uVar21 = 0xc0;
                      }
                      else {
                        uVar21 = 0xff;
                        uVar1 = 0xff;
                      }
                      *(char *)(iVar11 + 0xa3686) = (char)uVar24;
                      uVar28 = *(undefined4 *)(uVar24 * 0x18 + iVar8 + 0x7d50);
                      if ((*(uint *)(iVar27 + uVar24 * 0x18 + 0x188) & 4) == 0) {
                        uVar21 = uVar1;
                      }
                      *(undefined1 *)(iVar11 + 0xa3687) = uVar21;
                      FUN_00099558(param_1,0xd,iVar5 + 0x10,iVar30,uVar28);
                      uVar24 = *(int *)(iVar20 + 0x1d4);
                    }
                    else {
                      if ((iVar25 < 0) ||
                         ((*(int *)(iVar27 + uVar24 * 0x18 + 0x194) == 2 &&
                          (*(char *)(iVar8 + 0x7c6e) == '\x01')))) goto LAB_000a48c8;
                      FUN_00098150(iVar8,iVar25,iVar5 + 0x10,uVar24,
                                   *(undefined4 *)
                                    (DAT_000a4f04 + (uint)*(byte *)(iVar8 + iVar5 + 0x157) * 8 +
                                    0xa5356));
                      uVar24 = *(int *)(iVar20 + 0x1d4);
                    }
                    goto joined_r0x000a54e0;
                  }
                  if (bVar26 == 0x81) {
                    iVar5 = iVar5 + (uint)(bVar7 >> 6);
                    if ((((int)((uint)*(byte *)(iVar27 + iVar5 + 0x11f) << 0x1e) < 0) &&
                        (uVar9 = (uint)*(byte *)(iVar8 + iVar5 + 0x197), uVar9 < 0x40)) &&
                       (*(int *)(iVar27 + uVar9 * 0x18 + 0x194) != 2)) {
                      uVar24 = uVar24 & 0x3f;
                      *(char *)(uVar9 + iVar8 + 0x137) = (char)uVar24;
                      uVar9 = uVar24 * 2;
                      bVar26 = *(byte *)(iVar8 + 3);
                      if ((bVar26 != 0x40) && (uVar9 = (uint)bVar26, uVar24 != 0x20)) {
                        uVar9 = (uint)*(byte *)(DAT_000a4efc + (uint)(bVar26 >> 2) * 0x20 +
                                                (uVar24 >> 1) + 0xa5a92);
                      }
                      *(char *)(iVar8 + (iVar5 + 0x10) * 0x14 + 0x6b48) = (char)uVar9;
                      if (-1 < iVar25) {
                        bVar26 = *(byte *)(iVar8 + 0x1b7);
                        if (bVar26 < 0x88) {
                          *(byte *)(iVar8 + 0x1b7) = bVar26 + 1;
                          iVar38 = (uint)bVar26 * 0x14 + 0x7118;
                          iVar27 = iVar8 + iVar38;
                          *(undefined4 *)(iVar8 + iVar38) = 5;
                          *(int *)(iVar27 + 4) = iVar25;
                          *(int *)(iVar27 + 8) = iVar5 + 0x10;
                          *(uint *)(iVar27 + 0xc) = uVar9;
                          *(undefined4 *)(iVar27 + 0x10) = 0;
                          goto LAB_000a4ad2;
                        }
                      }
                      goto LAB_000a48c8;
                    }
                  }
                  else if (bVar26 == 0x90) {
                    uVar9 = uVar24 & 0x1f;
                    uVar36 = (uint)*(byte *)(iVar8 + iVar5 + (uint)(bVar7 >> 6) + 0x27);
                    if ((int)(uVar24 << 0x1a) < 0) {
                      uVar36 = uVar36 + 0x10;
                    }
                    *(char *)(iVar27 + uVar36 + 0x13f) = (char)uVar9;
                    if (uVar9 < 4) {
                      *(byte *)(iVar8 + 0xb) =
                           *(byte *)(DAT_000a4eec + uVar9 + 0xa53b0) | *(byte *)(iVar8 + 0xb);
                    }
                    if (((*(char *)(iVar8 + 0x7d38) == '\x01') &&
                        (((*(byte *)(DAT_000a4f08 + uVar9 + 0xa5964) & *(byte *)(iVar8 + 10)) != 0
                         || (3 < uVar9)))) && ((-1 < iVar25 && (*(byte *)(iVar8 + 0x1b7) < 0x88))))
                    {
                      FUN_000983d8(iVar8,iVar25,uVar36);
                      bVar26 = *(byte *)(iVar8 + 0x1b7);
                      iVar27 = 0;
                      *(byte *)(iVar8 + 0x1b7) = bVar26 + 1;
                      iVar25 = (uint)bVar26 * 0x14 + 0x7118;
                      iVar5 = iVar8 + iVar25;
                      *(undefined4 *)(iVar8 + iVar25) = 0x32;
                      *(undefined4 *)(iVar5 + 4) = 0;
                      if (uVar9 != 0x1f) {
                        iVar27 = uVar9 + 2;
                      }
                      *(uint *)(iVar5 + 8) = uVar36;
                      *(int *)(iVar5 + 0xc) = iVar27;
                      *(undefined4 *)(iVar5 + 0x10) = 0;
                      uVar24 = *(int *)(iVar20 + 0x1d4);
                      goto joined_r0x000a54e0;
                    }
                    goto LAB_000a48c8;
                  }
                }
              }
              else {
                bVar7 = *(byte *)(iVar8 + 3);
                bVar22 = *(byte *)(iVar8 + 4);
                if (*(int *)(iVar20 + 0x1f0) < iVar38) {
                  iVar25 = __divsi3(iVar38 - *(int *)(iVar20 + 0x1f0),*(undefined1 *)(iVar20 + 1));
                  local_5c = iVar25 + 0x200 >> 10;
                }
                iVar25 = *(int *)(param_1 + 4);
                if ((((((*(char *)(iVar25 + 0x7c6c) == '\x04') &&
                       (-1 < (int)((uint)*(byte *)(iVar25 + 0x7d3c) << 0x19))) && (bVar26 == 0xf0))
                     && ((-3 < (int)local_5c && (uVar35 == 0)))) &&
                    (5 < (uint)bVar22 + (uint)bVar7 * 0x100)) &&
                   (*(char *)(iVar25 + 0x7d38) != '\0')) {
                  FUN_0009733c(iVar25,local_5c,iVar8 + 5);
                  uVar24 = *(int *)(iVar20 + 0x1d4);
                  goto joined_r0x000a54e0;
                }
              }
            }
            else if (uVar9 == 0xff) goto LAB_000a45c4;
            goto switchD_000a4604_caseD_b2;
          }
          if (uVar9 != 0xff) {
            uVar9 = uVar9 & 0x3f;
            uVar24 = (uint)*(byte *)(iVar8 + 2);
            uVar36 = (uint)*(byte *)(iVar5 + iVar20 + (uint)(*(byte *)(iVar8 + 1) >> 6) + 0x27);
            if (*(short *)(iVar20 + 0x7c5c) == 2) {
              local_4c = 0x7f;
            }
            else {
              local_4c = (uint)(*(byte *)(iVar8 + 3) >> 1);
              uVar9 = *(int *)(DAT_000a4ee8 + (*(byte *)(iVar8 + 3) & 3) * 4 + 0xa44f0) + uVar9;
            }
            *(char *)(iVar20 + uVar36 + 0xa7) = (char)local_4c;
            iVar8 = iVar20 + uVar36 * 0x14;
            uVar16 = (uint)*(byte *)(iVar8 + 0x6b43);
            if ((int)(uVar16 << 0x18) < 0) {
              uVar39 = (uint)*(byte *)(iVar8 + 0x6b42);
              if (uVar39 + uVar16 * 2 < 0x133) {
                if (*(byte *)(iVar20 + 0xc) < 2) {
                  uVar9 = uVar9 + 0x23;
                  goto LAB_000a4252;
                }
                if (uVar9 < 0x3f) {
                  if (uVar16 == 0x99) {
                    if ((int)uVar9 < 0x20) goto LAB_000a4252;
                  }
                  else if (uVar16 < 0x9a) {
                    uVar9 = *(uint *)(DAT_000a4ef0 + (uVar9 + uVar39 * 0x40) * 4 + 0xa5590);
LAB_000a4252:
                    uVar9 = uVar9 & 0xff;
                    if ((uVar9 < 0x80) && (uVar24 != 0)) {
                      if (iVar27 == 0) {
LAB_000a4268:
                        if (*(int *)(iVar20 + 0x1f0) < iVar38) {
                          iVar8 = __divsi3(iVar38 - *(int *)(iVar20 + 0x1f0),
                                           *(undefined1 *)(iVar20 + 1));
                          iVar25 = *(int *)(param_1 + 4);
                          iVar8 = iVar8 + 0x200 >> 10;
                          if (-1 < iVar8) goto LAB_000a4af2;
                        }
                        else {
                          iVar25 = *(int *)(param_1 + 4);
                          iVar8 = 0;
LAB_000a4af2:
                          iVar27 = iVar25 + uVar36;
                          if (*(byte *)(iVar27 + 0x37) < 2) {
                            *(char *)(iVar27 + 0xf7) = *(char *)(iVar27 + 0xf7) + '\x01';
                            bVar26 = *(byte *)(iVar25 + 0x1b7);
                            uVar16 = (uint)bVar26;
                            if (uVar16 < 0x88) {
                              if (*(char *)(iVar25 + 0xd) == '\0') {
                                *(byte *)(iVar25 + 0x1b7) = bVar26 + 1;
                                iVar27 = uVar16 * 0x14 + 0x7118;
                                iVar5 = iVar25 + iVar27;
                                *(undefined4 *)(iVar25 + iVar27) = 0x1c;
                                *(int *)(iVar5 + 4) = iVar8;
                                *(uint *)(iVar5 + 8) = uVar36;
                                iVar27 = DAT_000a4ef8;
                                uVar16 = uVar9;
                                if (*(char *)(iVar25 + uVar36 * 0x14 + 0x6b43) != -0x67) {
                                  uVar16 = *(uint *)(DAT_000a4ef4 +
                                                     (*(int *)(iVar25 + (uVar36 + 0x82) * 4) + uVar9
                                                     ) * 4 + 0xa4e8c);
                                }
                                *(uint *)(iVar5 + 0xc) = uVar16;
                                iVar38 = iVar27 + 0xa4b76;
                                uVar16 = (uint)*(byte *)((uint)*(byte *)(iVar25 + 7) + iVar38 +
                                                        0x9b8) +
                                         (uint)*(byte *)(local_4c + iVar38 + 0x9b8);
                                if (uVar16 < 0xc1) {
                                  iVar38 = iVar38 + uVar16;
                                }
                                else {
                                  iVar38 = iVar27 + 0xa4c36;
                                }
                                *(uint *)(iVar5 + 0x10) = (uint)*(byte *)(iVar38 + 0xa38);
                              }
                              else {
                                *(byte *)(iVar25 + 0x1b7) = bVar26 + 1;
                                iVar27 = DAT_000a5c54;
                                iVar38 = uVar16 * 0x14 + 0x7118;
                                iVar5 = DAT_000a5c54 + 0xa4f2a;
                                iVar29 = iVar25 + iVar38;
                                *(undefined4 *)(iVar25 + iVar38) = 0;
                                *(int *)(iVar29 + 4) = iVar8;
                                *(uint *)(iVar29 + 8) = uVar36;
                                *(uint *)(iVar29 + 0xc) = uVar9;
                                uVar16 = (uint)*(byte *)((uint)*(byte *)(iVar25 + 7) + iVar5 + 0x9b8
                                                        ) +
                                         (uint)*(byte *)(local_4c + iVar5 + 0x9b8);
                                if (uVar16 < 0xc1) {
                                  iVar5 = iVar5 + uVar16;
                                }
                                else {
                                  iVar5 = iVar27 + 0xa4fea;
                                }
                                *(uint *)(iVar29 + 0x10) = (uint)*(byte *)(iVar5 + 0xa38);
                                if ((((*(char *)(iVar25 + 0x10) == '\x01') &&
                                     (*(char *)(iVar25 + 0x7d3b) == '\x01')) &&
                                    (MaSndDrv_GetVoiceInfo(param_1,uVar36,uVar9,a_Stack_30),
                                    local_2a == '\x01')) && (0x3e < *(uint *)(iVar29 + 0x10))) {
                                  *(undefined4 *)(iVar29 + 0x10) = 0x3e;
                                }
                              }
                              *(uint *)(iVar25 + 0x1f0) =
                                   *(int *)(iVar25 + 0x1f0) +
                                   (uint)*(byte *)(iVar25 + 1) * iVar8 * 0x400;
                            }
                          }
                        }
                        if ((uVar36 == *(byte *)(iVar25 + 0x6b40)) &&
                           (uVar9 == *(byte *)(iVar25 + 0x6b41))) {
                          bVar26 = *(byte *)(iVar25 + 0x1b7);
                          if (bVar26 < 0x88) {
                            *(byte *)(iVar25 + 0x1b7) = bVar26 + 1;
                            iVar27 = (uint)bVar26 * 0x14 + 0x7118;
                            iVar8 = iVar25 + iVar27;
                            *(undefined4 *)(iVar25 + iVar27) = 0x25;
                            *(undefined4 *)(iVar8 + 0xc) = 0x11;
                            *(undefined4 *)(iVar8 + 4) = 0;
                            *(undefined4 *)(iVar8 + 8) = 0;
                            *(undefined4 *)(iVar8 + 0x10) = 0;
                          }
                        }
                      }
                      else {
                        iVar8 = FUN_0002e5f8(iVar20,uVar24 + iVar25,uVar36,uVar9);
                        if (iVar8 == 0) {
                          iVar38 = *(int *)(iVar20 + 0x1ec);
                          goto LAB_000a4268;
                        }
                      }
                      puVar31 = *(undefined4 **)(iVar20 + 0x5b3c);
                      iVar8 = *(int *)(iVar20 + 0x1dc) + uVar24;
                      if (puVar31 == (undefined4 *)0x0) {
                        FUN_00097d64(iVar20,0,uVar36,uVar9);
                        uVar24 = *(int *)(iVar20 + 0x1d4);
                        goto joined_r0x000a54e0;
                      }
                      *(undefined4 *)(iVar20 + 0x5b3c) = *puVar31;
                      puVar31[3] = uVar9;
                      puVar31[1] = iVar8;
                      puVar31[2] = uVar36;
                      iVar25 = *(int *)(iVar20 + 0x204);
                      *(int *)(iVar20 + 0x204) = iVar25 + 1;
                      if (iVar25 + 1 == 1) {
                        *puVar31 = 0;
                        *(undefined4 **)(iVar20 + 0x5b34) = puVar31;
                        *(undefined4 **)(iVar20 + 0x5b38) = puVar31;
                      }
                      else {
                        puVar6 = *(undefined4 **)(iVar20 + 0x5b38);
                        if (iVar8 < (int)puVar6[1]) {
                          puVar6 = *(undefined4 **)(iVar20 + 0x5b34);
                          if ((int)puVar6[1] < iVar8) {
                            puVar18 = (undefined4 *)*puVar6;
                            if ((1 < iVar25) && ((int)puVar18[1] < iVar8)) {
                              uVar24 = iVar25 - 2U & 7;
                              iVar27 = 1;
                              puVar19 = puVar18;
                              if (uVar24 == 0) goto LAB_000a4380;
                              puVar19 = (undefined4 *)*puVar18;
                              iVar27 = 2;
                              puVar6 = puVar18;
                              puVar18 = puVar19;
                              if ((int)puVar19[1] < iVar8) {
                                if (uVar24 == 1) goto LAB_000a4380;
                                if (uVar24 != 2) {
                                  if (uVar24 != 3) {
                                    if (uVar24 != 4) {
                                      if (uVar24 != 5) {
                                        if (uVar24 != 6) {
                                          puVar18 = (undefined4 *)*puVar19;
                                          iVar27 = 3;
                                          puVar6 = puVar19;
                                          if (iVar8 <= (int)puVar18[1]) goto LAB_000a43da;
                                        }
                                        puVar19 = (undefined4 *)*puVar18;
                                        iVar27 = iVar27 + 1;
                                        puVar6 = puVar18;
                                        puVar18 = puVar19;
                                        if (iVar8 <= (int)puVar19[1]) goto LAB_000a43da;
                                      }
                                      puVar18 = (undefined4 *)*puVar19;
                                      iVar27 = iVar27 + 1;
                                      puVar6 = puVar19;
                                      if (iVar8 <= (int)puVar18[1]) goto LAB_000a43da;
                                    }
                                    puVar19 = (undefined4 *)*puVar18;
                                    iVar27 = iVar27 + 1;
                                    puVar6 = puVar18;
                                    puVar18 = puVar19;
                                    if (iVar8 <= (int)puVar19[1]) goto LAB_000a43da;
                                  }
                                  puVar18 = (undefined4 *)*puVar19;
                                  iVar27 = iVar27 + 1;
                                  puVar6 = puVar19;
                                  if (iVar8 <= (int)puVar18[1]) goto LAB_000a43da;
                                }
                                puVar19 = (undefined4 *)*puVar18;
                                iVar27 = iVar27 + 1;
                                iVar5 = puVar19[1];
                                while (puVar6 = puVar18, puVar18 = puVar19, iVar5 < iVar8) {
LAB_000a4380:
                                  iVar5 = iVar27 + 1;
                                  puVar18 = (undefined4 *)*puVar19;
                                  iVar27 = iVar27 + 8;
                                  puVar6 = puVar19;
                                  if ((((iVar5 == iVar25) || (iVar8 <= (int)puVar18[1])) ||
                                      (puVar19 = (undefined4 *)*puVar18, puVar6 = puVar18,
                                      puVar18 = puVar19, iVar8 <= (int)puVar19[1])) ||
                                     (((puVar18 = (undefined4 *)*puVar19, puVar6 = puVar19,
                                       iVar8 <= (int)puVar18[1] ||
                                       (puVar19 = (undefined4 *)*puVar18, puVar6 = puVar18,
                                       puVar18 = puVar19, iVar8 <= (int)puVar19[1])) ||
                                      ((puVar18 = (undefined4 *)*puVar19, puVar6 = puVar19,
                                       iVar8 <= (int)puVar18[1] ||
                                       ((puVar19 = (undefined4 *)*puVar18, puVar6 = puVar18,
                                        puVar18 = puVar19, iVar8 <= (int)puVar19[1] ||
                                        (puVar18 = (undefined4 *)*puVar19, puVar6 = puVar19,
                                        iVar8 <= (int)puVar18[1])))))))) break;
                                  puVar19 = (undefined4 *)*puVar18;
                                  iVar5 = puVar19[1];
                                }
                              }
                            }
LAB_000a43da:
                            *puVar31 = puVar18;
                            *puVar6 = puVar31;
                          }
                          else {
                            *puVar31 = puVar6;
                            *(undefined4 **)(iVar20 + 0x5b34) = puVar31;
                          }
                        }
                        else {
                          *puVar31 = 0;
                          *puVar6 = puVar31;
                          *(undefined4 **)(iVar20 + 0x5b38) = puVar31;
                        }
                      }
LAB_000a48c8:
                      uVar24 = *(int *)(iVar20 + 0x1d4);
                      goto joined_r0x000a54e0;
                    }
                  }
                }
              }
            }
            else if (uVar16 < 0x19) {
              uVar9 = uVar9 + 0x2d;
              goto LAB_000a4252;
            }
            goto switchD_000a4604_caseD_b2;
          }
LAB_000a45c4:
          uVar9 = (uint)*(byte *)(iVar8 + 2);
          if (0xef < uVar9) {
            bVar26 = *(byte *)(iVar8 + 3);
            bVar7 = *(byte *)(iVar8 + 4);
            if (*(int *)(iVar20 + 0x1f0) < iVar38) {
              iVar25 = __divsi3(iVar38 - *(int *)(iVar20 + 0x1f0),*(undefined1 *)(iVar20 + 1));
              iVar25 = iVar25 + 0x200 >> 10;
            }
            else {
              iVar25 = 0;
            }
            FUN_0009a90c(param_1,iVar25,uVar35,uVar9,iVar8 + 5,(uint)bVar7 + (uint)bVar26 * 0x100);
            uVar24 = *(int *)(iVar20 + 0x1d4);
            goto joined_r0x000a54e0;
          }
          if (*(int *)(iVar20 + 0x1f0) < iVar38) {
            iVar25 = __divsi3(iVar38 - *(int *)(iVar20 + 0x1f0),*(undefined1 *)(iVar20 + 1));
            iVar25 = iVar25 + 0x200 >> 10;
          }
          else {
            iVar25 = 0;
          }
          iVar37 = DAT_000a5c64;
          iVar29 = DAT_000a5c5c;
          iVar27 = DAT_000a5c58;
          bVar26 = *(byte *)(iVar8 + 3);
          uVar36 = (uint)bVar26;
          switch(uVar9) {
          case 0xb0:
            if ((uVar35 == 0) && (uVar36 < 0x80)) {
              FUN_0009845c(iVar20,iVar25,uVar36);
              uVar24 = *(uint *)(iVar20 + 0x1d4);
              goto joined_r0x000a54e0;
            }
            break;
          case 0xb1:
            if ((uVar35 == 0) && (uVar36 < 0x80)) {
              *(byte *)(iVar20 + 3) = bVar26;
              uVar24 = *(byte *)(iVar20 + 0x77) & 0x7f;
              uVar9 = uVar24 * 2;
              if ((uVar36 != 0x40) && (uVar9 = uVar36, uVar24 != 0x20)) {
                uVar9 = (uint)*(byte *)(DAT_000a5c6c + (uint)(bVar26 >> 2) * 0x20 +
                                        ((*(byte *)(iVar20 + 0x77) & 0x7f) >> 1) + 0xa68a4);
              }
              *(char *)(iVar20 + 0x6b48) = (char)uVar9;
              if (iVar25 < 0) {
                iVar8 = DAT_000a6008 + 0xa5dce;
                uVar24 = *(byte *)(iVar20 + 0x78) & 0x7f;
                bVar7 = (char)uVar24 * '\x02';
                if ((uVar36 != 0x40) && (bVar7 = bVar26, uVar24 != 0x20)) {
                  bVar7 = *(byte *)(iVar8 + (uint)(bVar26 >> 2) * 0x20 + (uVar24 >> 1) + 0xe90);
                }
                *(byte *)(iVar20 + 0x6b5c) = bVar7;
                bVar26 = *(byte *)(iVar20 + 3);
                uVar24 = *(byte *)(iVar20 + 0x79) & 0x7f;
                bVar7 = (char)uVar24 * '\x02';
                if ((bVar26 != 0x40) && (bVar7 = bVar26, uVar24 != 0x20)) {
                  bVar7 = *(byte *)(iVar8 + (uint)(bVar26 >> 2) * 0x20 + (uVar24 >> 1) + 0xe90);
                }
                *(byte *)(iVar20 + 0x6b70) = bVar7;
                bVar26 = *(byte *)(iVar20 + 3);
                pbVar17 = (byte *)(iVar20 + 0x6b84);
                iVar25 = iVar20;
                while( true ) {
                  uVar24 = *(byte *)(iVar25 + 0x7a) & 0x7f;
                  bVar7 = (char)uVar24 * '\x02';
                  if ((bVar26 != 0x40) && (bVar7 = bVar26, uVar24 != 0x20)) {
                    bVar7 = *(byte *)(iVar8 + (uint)(bVar26 >> 2) * 0x20 + (uVar24 >> 1) + 0xe90);
                  }
                  *pbVar17 = bVar7;
                  if (iVar25 + 3 == iVar20 + 0xf) break;
                  bVar26 = *(byte *)(iVar20 + 3);
                  bVar22 = *(byte *)(iVar25 + 0x7b) << 1;
                  bVar7 = bVar22;
                  if ((bVar26 != 0x40) && (bVar7 = bVar26, bVar22 != 0x40)) {
                    bVar7 = *(byte *)(iVar8 + (uint)(bVar26 >> 2) * 0x20 +
                                      (uint)((*(byte *)(iVar25 + 0x7b) & 0x7f) >> 1) + 0xe90);
                  }
                  pbVar17[0x14] = bVar7;
                  bVar26 = *(byte *)(iVar20 + 3);
                  bVar22 = *(byte *)(iVar25 + 0x7c) << 1;
                  bVar7 = bVar22;
                  if ((bVar26 != 0x40) && (bVar7 = bVar26, bVar22 != 0x40)) {
                    bVar7 = *(byte *)(iVar8 + (uint)(bVar26 >> 2) * 0x20 +
                                      (uint)((*(byte *)(iVar25 + 0x7c) & 0x7f) >> 1) + 0xe90);
                  }
                  pbVar17[0x28] = bVar7;
                  pbVar17 = pbVar17 + 0x3c;
                  bVar26 = *(byte *)(iVar20 + 3);
                  iVar25 = iVar25 + 3;
                }
                pbVar17 = (byte *)(iVar20 + 0x6c88);
                iVar25 = DAT_000a600c + 0xa5ebe;
                iVar8 = iVar20;
                do {
                  if (*(byte *)(iVar8 + 0x197) < 0x40) {
                    uVar24 = (uint)*(byte *)((uint)*(byte *)(iVar8 + 0x197) + iVar20 + 0x137);
                    if (uVar24 == 0xff) {
                      bVar26 = *(byte *)(iVar20 + 3);
                    }
                    else {
                      bVar7 = *(byte *)(iVar20 + 3);
                      uVar24 = uVar24 & 0x7f;
                      bVar26 = (char)uVar24 * '\x02';
                      if ((bVar7 != 0x40) && (bVar26 = bVar7, uVar24 != 0x20)) {
                        bVar26 = *(byte *)(iVar25 + (uint)(bVar7 >> 2) * 0x20 + (uVar24 >> 1) +
                                          0xe90);
                      }
                    }
                    *pbVar17 = bVar26;
                  }
                  if (*(byte *)(iVar8 + 0x198) < 0x40) {
                    uVar24 = (uint)*(byte *)((uint)*(byte *)(iVar8 + 0x198) + iVar20 + 0x137);
                    if (uVar24 == 0xff) {
                      pbVar17[0x14] = *(byte *)(iVar20 + 3);
                    }
                    else {
                      bVar26 = *(byte *)(iVar20 + 3);
                      uVar24 = uVar24 & 0x7f;
                      bVar7 = (char)uVar24 * '\x02';
                      if ((bVar26 != 0x40) && (bVar7 = bVar26, uVar24 != 0x20)) {
                        bVar7 = *(byte *)(iVar25 + (uint)(bVar26 >> 2) * 0x20 + (uVar24 >> 1) +
                                         0xe90);
                      }
                      pbVar17[0x14] = bVar7;
                    }
                  }
                  iVar8 = iVar8 + 2;
                  pbVar17 = pbVar17 + 0x28;
                } while (iVar8 != iVar20 + 0x10);
              }
              else {
                bVar26 = *(byte *)(iVar20 + 0x1b7);
                if (bVar26 < 0x88) {
                  *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                  iVar27 = (uint)bVar26 * 0x14 + 0x7118;
                  iVar8 = iVar20 + iVar27;
                  *(undefined4 *)(iVar20 + iVar27) = 5;
                  *(int *)(iVar8 + 4) = iVar25;
                  *(uint *)(iVar8 + 0xc) = uVar9;
                  *(undefined4 *)(iVar8 + 8) = 0;
                  *(undefined4 *)(iVar8 + 0x10) = 0;
                  uVar36 = (uint)*(byte *)(iVar20 + 3);
                  *(uint *)(iVar20 + 0x1f0) =
                       *(int *)(iVar20 + 0x1f0) + (uint)*(byte *)(iVar20 + 1) * iVar25 * 0x400;
                }
                iVar8 = DAT_000a5c70 + 0xa5a8e;
                uVar24 = *(byte *)(iVar20 + 0x78) & 0x7f;
                uVar9 = uVar24 * 2;
                if ((uVar36 != 0x40) && (uVar9 = uVar36, uVar24 != 0x20)) {
                  uVar9 = (uint)*(byte *)(iVar8 + (uVar36 >> 2) * 0x20 +
                                          ((*(byte *)(iVar20 + 0x78) & 0x7f) >> 1) + 0xe90);
                }
                *(char *)(iVar20 + 0x6b5c) = (char)uVar9;
                bVar26 = *(byte *)(iVar20 + 0x1b7);
                if (bVar26 < 0x88) {
                  *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                  iVar27 = (uint)bVar26 * 0x14 + 0x7118;
                  iVar25 = iVar20 + iVar27;
                  *(undefined4 *)(iVar20 + iVar27) = 5;
                  *(undefined4 *)(iVar25 + 4) = 0;
                  *(undefined4 *)(iVar25 + 8) = 1;
                  *(uint *)(iVar25 + 0xc) = uVar9;
                  *(undefined4 *)(iVar25 + 0x10) = 0;
                }
                bVar26 = *(byte *)(iVar20 + 3);
                uVar24 = (uint)(byte)(*(byte *)(iVar20 + 0x79) << 1);
                if ((bVar26 != 0x40) && (bVar40 = uVar24 != 0x40, uVar24 = (uint)bVar26, bVar40)) {
                  uVar24 = (uint)*(byte *)(iVar8 + (uint)(bVar26 >> 2) * 0x20 +
                                           (uint)((*(byte *)(iVar20 + 0x79) & 0x7f) >> 1) + 0xe90);
                }
                *(char *)(iVar20 + 0x6b70) = (char)uVar24;
                bVar26 = *(byte *)(iVar20 + 0x1b7);
                if (bVar26 < 0x88) {
                  *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                  iVar27 = (uint)bVar26 * 0x14 + 0x7118;
                  iVar25 = iVar20 + iVar27;
                  *(undefined4 *)(iVar20 + iVar27) = 5;
                  *(undefined4 *)(iVar25 + 4) = 0;
                  *(undefined4 *)(iVar25 + 8) = 2;
                  *(uint *)(iVar25 + 0xc) = uVar24;
                  *(undefined4 *)(iVar25 + 0x10) = 0;
                }
                bVar26 = *(byte *)(iVar20 + 3);
                iVar25 = 3;
                puVar10 = (undefined1 *)(iVar20 + 0x6b84);
                while( true ) {
                  uVar36 = (uint)*(byte *)(iVar20 + iVar25 + 0x77);
                  uVar24 = uVar36 & 0x7f;
                  uVar9 = uVar24 * 2;
                  if ((bVar26 != 0x40) && (uVar9 = (uint)bVar26, uVar24 != 0x20)) {
                    uVar9 = (uint)*(byte *)(iVar8 + (uint)(bVar26 >> 2) * 0x20 +
                                            ((uVar36 & 0x7f) >> 1) + 0xe90);
                  }
                  *puVar10 = (char)uVar9;
                  bVar26 = *(byte *)(iVar20 + 0x1b7);
                  if (bVar26 < 0x88) {
                    *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                    iVar5 = (uint)bVar26 * 0x14 + 0x7118;
                    iVar27 = iVar20 + iVar5;
                    *(undefined4 *)(iVar20 + iVar5) = 5;
                    *(undefined4 *)(iVar27 + 4) = 0;
                    *(int *)(iVar27 + 8) = iVar25;
                    *(uint *)(iVar27 + 0xc) = uVar9;
                    *(undefined4 *)(iVar27 + 0x10) = 0;
                  }
                  iVar27 = DAT_000a5c74;
                  iVar5 = iVar25 + 1;
                  if (iVar5 == 0x10) break;
                  bVar26 = *(byte *)(iVar20 + 3);
                  uVar36 = (uint)*(byte *)(iVar20 + iVar5 + 0x77);
                  uVar24 = uVar36 & 0x7f;
                  uVar9 = uVar24 * 2;
                  if ((bVar26 != 0x40) && (uVar9 = (uint)bVar26, uVar24 != 0x20)) {
                    uVar9 = (uint)*(byte *)(iVar8 + (uint)(bVar26 >> 2) * 0x20 +
                                            ((uVar36 & 0x7f) >> 1) + 0xe90);
                  }
                  puVar10[0x14] = (char)uVar9;
                  bVar26 = *(byte *)(iVar20 + 0x1b7);
                  if (bVar26 < 0x88) {
                    *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                    iVar27 = (uint)bVar26 * 0x14 + 0x7118;
                    iVar38 = iVar20 + iVar27;
                    *(undefined4 *)(iVar20 + iVar27) = 5;
                    *(undefined4 *)(iVar38 + 4) = 0;
                    *(int *)(iVar38 + 8) = iVar5;
                    *(uint *)(iVar38 + 0xc) = uVar9;
                    *(undefined4 *)(iVar38 + 0x10) = 0;
                  }
                  bVar26 = *(byte *)(iVar20 + 3);
                  uVar36 = (uint)*(byte *)(iVar20 + iVar25 + 2 + 0x77);
                  uVar24 = uVar36 & 0x7f;
                  uVar9 = uVar24 * 2;
                  if ((bVar26 != 0x40) && (uVar9 = (uint)bVar26, uVar24 != 0x20)) {
                    uVar9 = (uint)*(byte *)(iVar8 + (uint)(bVar26 >> 2) * 0x20 +
                                            ((uVar36 & 0x7f) >> 1) + 0xe90);
                  }
                  puVar10[0x28] = (char)uVar9;
                  bVar26 = *(byte *)(iVar20 + 0x1b7);
                  if (bVar26 < 0x88) {
                    *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                    iVar27 = (uint)bVar26 * 0x14 + 0x7118;
                    iVar5 = iVar20 + iVar27;
                    *(undefined4 *)(iVar20 + iVar27) = 5;
                    *(undefined4 *)(iVar5 + 4) = 0;
                    *(int *)(iVar5 + 8) = iVar25 + 2;
                    *(uint *)(iVar5 + 0xc) = uVar9;
                    *(undefined4 *)(iVar5 + 0x10) = 0;
                  }
                  iVar25 = iVar25 + 3;
                  puVar10 = puVar10 + 0x3c;
                  bVar26 = *(byte *)(iVar20 + 3);
                }
                pbVar17 = (byte *)(iVar20 + 0x6c88);
                iVar8 = 0x10;
                do {
                  uVar24 = (uint)*(byte *)(iVar20 + iVar8 + 0x187);
                  if (uVar24 < 0x40) {
                    uVar24 = (uint)*(byte *)(uVar24 + iVar20 + 0x137);
                    if (uVar24 == 0xff) {
                      bVar26 = *(byte *)(iVar20 + 3);
                      *pbVar17 = bVar26;
                      bVar7 = *(byte *)(iVar20 + 0x1b7);
                      if (bVar7 < 0x88) {
                        *(byte *)(iVar20 + 0x1b7) = bVar7 + 1;
                        iVar25 = (uint)bVar7 * 0x14 + 0x7118;
                        iVar5 = iVar20 + iVar25;
                        *(undefined4 *)(iVar20 + iVar25) = 5;
                        *(undefined4 *)(iVar5 + 4) = 0;
                        *(int *)(iVar5 + 8) = iVar8;
                        *(uint *)(iVar5 + 0xc) = (uint)bVar26;
                        *(undefined4 *)(iVar5 + 0x10) = 0;
                      }
                    }
                    else {
                      bVar26 = *(byte *)(iVar20 + 3);
                      uVar9 = (uVar24 & 0x7f) * 2;
                      if ((bVar26 != 0x40) && (uVar9 = (uint)bVar26, (uVar24 & 0x7f) != 0x20)) {
                        uVar9 = (uint)(byte)(&UNK_000a5c52)
                                            [((uVar24 & 0x7f) >> 1) +
                                             (uint)(bVar26 >> 2) * 0x20 + iVar27 + 0xe90];
                      }
                      *pbVar17 = (byte)uVar9;
                      bVar26 = *(byte *)(iVar20 + 0x1b7);
                      if (bVar26 < 0x88) {
                        *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                        iVar25 = (uint)bVar26 * 0x14 + 0x7118;
                        iVar5 = iVar20 + iVar25;
                        *(undefined4 *)(iVar20 + iVar25) = 5;
                        *(undefined4 *)(iVar5 + 4) = 0;
                        *(int *)(iVar5 + 8) = iVar8;
                        *(uint *)(iVar5 + 0xc) = uVar9;
                        *(undefined4 *)(iVar5 + 0x10) = 0;
                      }
                    }
                  }
                  iVar25 = iVar8 + 1;
                  uVar24 = (uint)*(byte *)(iVar20 + iVar25 + 0x187);
                  if (uVar24 < 0x40) {
                    uVar24 = (uint)*(byte *)(uVar24 + iVar20 + 0x137);
                    if (uVar24 == 0xff) {
                      bVar26 = *(byte *)(iVar20 + 3);
                      pbVar17[0x14] = bVar26;
                      bVar7 = *(byte *)(iVar20 + 0x1b7);
                      if (bVar7 < 0x88) {
                        *(byte *)(iVar20 + 0x1b7) = bVar7 + 1;
                        iVar5 = (uint)bVar7 * 0x14 + 0x7118;
                        iVar38 = iVar20 + iVar5;
                        *(undefined4 *)(iVar20 + iVar5) = 5;
                        *(undefined4 *)(iVar38 + 4) = 0;
                        *(int *)(iVar38 + 8) = iVar25;
                        *(uint *)(iVar38 + 0xc) = (uint)bVar26;
                        *(undefined4 *)(iVar38 + 0x10) = 0;
                      }
                    }
                    else {
                      bVar26 = *(byte *)(iVar20 + 3);
                      uVar9 = (uVar24 & 0x7f) * 2;
                      if ((bVar26 != 0x40) && (uVar9 = (uint)bVar26, (uVar24 & 0x7f) != 0x20)) {
                        uVar9 = (uint)(byte)(&UNK_000a5c52)
                                            [((uVar24 & 0x7f) >> 1) +
                                             (uint)(bVar26 >> 2) * 0x20 + iVar27 + 0xe90];
                      }
                      pbVar17[0x14] = (byte)uVar9;
                      bVar26 = *(byte *)(iVar20 + 0x1b7);
                      if (bVar26 < 0x88) {
                        *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                        iVar38 = (uint)bVar26 * 0x14 + 0x7118;
                        iVar5 = iVar20 + iVar38;
                        *(undefined4 *)(iVar20 + iVar38) = 5;
                        *(undefined4 *)(iVar5 + 4) = 0;
                        *(int *)(iVar5 + 8) = iVar25;
                        *(uint *)(iVar5 + 0xc) = uVar9;
                        *(undefined4 *)(iVar5 + 0x10) = 0;
                      }
                    }
                  }
                  iVar8 = iVar8 + 2;
                  pbVar17 = pbVar17 + 0x28;
                } while (iVar8 != 0x20);
              }
              goto LAB_000a48c8;
            }
            break;
          case 0xba:
            if ((uVar35 == 0) && (-1 < (int)(uVar36 << 0x18))) {
              uVar24 = (uVar36 & 0x7f) >> 3;
              iVar8 = iVar20 + uVar24;
              *(char *)(iVar8 + 0x37) = (char)(uVar36 & 7);
              if ((*(byte *)(iVar20 + 0xc) < 3) || ((uVar36 & 7) == 1)) goto LAB_000a528a;
            }
            break;
          case 0xbc:
            if ((uVar35 == 0) && (uVar36 < 0x80)) {
              FUN_000970ec(iVar20,iVar25);
              iVar8 = *(int *)(iVar20 + 0x1e0) + (uVar36 - 0x40);
              *(int *)(iVar20 + 0x1e0) = iVar8;
              if (iVar8 < 0x14) {
                iVar8 = 0x14;
                *(undefined4 *)(iVar20 + 0x1e0) = 0x14;
              }
              else if (0xff < iVar8) {
                iVar8 = 0xff;
                *(undefined4 *)(iVar20 + 0x1e0) = 0xff;
              }
              uVar28 = __divsi3(0x3a98000,*(int *)(iVar20 + 0x1e4) * iVar8);
              *(undefined4 *)(iVar20 + 0x1e8) = uVar28;
              uVar9 = (uint)*(byte *)(iVar20 + 0x7c74);
              if (uVar9 == 0) goto LAB_000a48c8;
              uVar24 = *(uint *)(iVar20 + 0x1d4);
              piVar13 = (int *)(iVar20 + 0x834c);
              uVar36 = 0;
              do {
                uVar16 = uVar36 & 0xff;
                uVar36 = uVar36 + 1;
                if (((1 << uVar16 & uVar24) != 0) &&
                   (iVar8 = *(int *)(iVar20 + 0x1ec), iVar8 < piVar13[1])) {
                  piVar13[1] = iVar8;
                  piVar13[1] = *(int *)(iVar20 + 0x1e8) * (*piVar13 - *(int *)(iVar20 + 0x1dc)) +
                               iVar8;
                  uVar24 = *(uint *)(iVar20 + 0x1d4);
                  uVar9 = (uint)*(byte *)(iVar20 + 0x7c74);
                }
                piVar13 = piVar13 + 5;
              } while (uVar36 < uVar9);
              goto joined_r0x000a54e0;
            }
            break;
          case 0xbd:
            if ((uVar35 == 0) && (uVar36 < 0x80)) {
              iVar8 = (uint)*(byte *)(iVar20 + 2) + (uVar36 - 0x40);
              uVar28 = UnsignedSaturate(iVar8,7);
              UnsignedDoesSaturate(iVar8,7);
              FUN_0009845c(iVar20,iVar25,uVar28);
              uVar24 = *(uint *)(iVar20 + 0x1d4);
              goto joined_r0x000a54e0;
            }
            break;
          case 0xbe:
            if (((uVar35 == 0) && (uVar36 == 0)) && (-1 < iVar25)) {
              FUN_000983d8(iVar20,iVar25,0);
              bVar26 = *(byte *)(iVar20 + 0x1b7);
              if (bVar26 < 0x88) {
                *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                iVar25 = (uint)bVar26 * 0x14 + 0x7118;
                iVar8 = iVar20 + iVar25;
                *(undefined4 *)(iVar20 + iVar25) = 0x10;
                *(undefined4 *)(iVar8 + 4) = 0;
                *(undefined4 *)(iVar8 + 8) = 1;
                *(undefined4 *)(iVar8 + 0xc) = 0;
                *(undefined4 *)(iVar8 + 0x10) = 0;
                if (*(char *)(iVar20 + 0x7c75) == '\x01') {
                  bVar26 = *(byte *)(iVar20 + 0x1b7);
                  if (bVar26 < 0x88) {
                    *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                    iVar8 = (uint)bVar26 * 0x14 + 0x7118;
                    iVar25 = iVar20 + iVar8;
                    *(undefined4 *)(iVar20 + iVar8) = 0x2f;
                    *(undefined4 *)(iVar25 + 4) = 0;
                    *(undefined4 *)(iVar25 + 8) = 0;
                    *(undefined4 *)(iVar25 + 0xc) = 0x7f;
                    *(undefined4 *)(iVar25 + 0x10) = 0;
                  }
                }
              }
              uVar24 = 2;
              do {
                bVar26 = *(byte *)(iVar20 + 0x1b7);
                if (bVar26 < 0x88) {
                  *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                  iVar25 = (uint)bVar26 * 0x14 + 0x7118;
                  iVar8 = iVar20 + iVar25;
                  *(undefined4 *)(iVar20 + iVar25) = 0x10;
                  *(undefined4 *)(iVar8 + 4) = 0;
                  *(uint *)(iVar8 + 8) = uVar24;
                  *(undefined4 *)(iVar8 + 0xc) = 0;
                  *(undefined4 *)(iVar8 + 0x10) = 0;
                  if (uVar24 == *(byte *)(iVar20 + 0x7c75)) {
                    bVar26 = *(byte *)(iVar20 + 0x1b7);
                    if (bVar26 < 0x88) {
                      *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                      iVar25 = (uint)bVar26 * 0x14 + 0x7118;
                      iVar8 = iVar20 + iVar25;
                      *(undefined4 *)(iVar20 + iVar25) = 0x2f;
                      *(undefined4 *)(iVar8 + 4) = 0;
                      *(undefined4 *)(iVar8 + 8) = 0;
                      *(undefined4 *)(iVar8 + 0xc) = 0x7f;
                      *(undefined4 *)(iVar8 + 0x10) = 0;
                    }
                  }
                }
                bVar26 = *(byte *)(iVar20 + 0x1b7);
                if (bVar26 < 0x88) {
                  *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                  iVar25 = (uint)bVar26 * 0x14 + 0x7118;
                  iVar8 = iVar20 + iVar25;
                  *(undefined4 *)(iVar20 + iVar25) = 0x10;
                  *(undefined4 *)(iVar8 + 4) = 0;
                  *(uint *)(iVar8 + 8) = uVar24 + 1;
                  *(undefined4 *)(iVar8 + 0xc) = 0;
                  *(undefined4 *)(iVar8 + 0x10) = 0;
                  if (uVar24 + 1 == (uint)*(byte *)(iVar20 + 0x7c75)) {
                    bVar26 = *(byte *)(iVar20 + 0x1b7);
                    if (bVar26 < 0x88) {
                      *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                      iVar25 = (uint)bVar26 * 0x14 + 0x7118;
                      iVar8 = iVar20 + iVar25;
                      *(undefined4 *)(iVar20 + iVar25) = 0x2f;
                      *(undefined4 *)(iVar8 + 4) = 0;
                      *(undefined4 *)(iVar8 + 8) = 0;
                      *(undefined4 *)(iVar8 + 0xc) = 0x7f;
                      *(undefined4 *)(iVar8 + 0x10) = 0;
                    }
                  }
                }
                bVar26 = *(byte *)(iVar20 + 0x1b7);
                if (bVar26 < 0x88) {
                  *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                  iVar25 = (uint)bVar26 * 0x14 + 0x7118;
                  iVar8 = iVar20 + iVar25;
                  *(undefined4 *)(iVar20 + iVar25) = 0x10;
                  *(undefined4 *)(iVar8 + 4) = 0;
                  *(uint *)(iVar8 + 8) = uVar24 + 2;
                  *(undefined4 *)(iVar8 + 0xc) = 0;
                  *(undefined4 *)(iVar8 + 0x10) = 0;
                  if (uVar24 + 2 == (uint)*(byte *)(iVar20 + 0x7c75)) {
                    bVar26 = *(byte *)(iVar20 + 0x1b7);
                    if (bVar26 < 0x88) {
                      *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                      iVar25 = (uint)bVar26 * 0x14 + 0x7118;
                      iVar8 = iVar20 + iVar25;
                      *(undefined4 *)(iVar20 + iVar25) = 0x2f;
                      *(undefined4 *)(iVar8 + 4) = 0;
                      *(undefined4 *)(iVar8 + 8) = 0;
                      *(undefined4 *)(iVar8 + 0xc) = 0x7f;
                      *(undefined4 *)(iVar8 + 0x10) = 0;
                    }
                  }
                }
                uVar24 = uVar24 + 3;
              } while (uVar24 != 0x20);
              goto LAB_000a48c8;
            }
            break;
          case 0xbf:
            if (uVar35 == 0) {
              FUN_00098638(iVar20,iVar25);
              if (-1 < iVar25) {
                iVar8 = 0;
                do {
                  iVar25 = iVar8 + 1;
                  FUN_000971c0(iVar20,0,iVar8,*(undefined1 *)(iVar20 + iVar8 + 0x47));
                  iVar8 = iVar25;
                } while (iVar25 != 0x10);
              }
              *(undefined4 *)(iVar20 + 0x1e4) = 0x30;
              *(undefined4 *)(iVar20 + 0x1e0) = 0x7d;
              *(undefined4 *)(iVar20 + 0x1e8) = 0x2800;
              uVar9 = (uint)*(byte *)(iVar20 + 0x7c74);
              if (uVar9 == 0) goto LAB_000a48c8;
              uVar24 = *(uint *)(iVar20 + 0x1d4);
              piVar13 = (int *)(iVar20 + 0x834c);
              uVar36 = 0;
              do {
                uVar16 = uVar36 & 0xff;
                uVar36 = uVar36 + 1;
                if (((1 << uVar16 & uVar24) != 0) &&
                   (iVar8 = *(int *)(iVar20 + 0x1ec), iVar8 < piVar13[1])) {
                  piVar13[1] = iVar8;
                  piVar13[1] = *(int *)(iVar20 + 0x1e8) * (*piVar13 - *(int *)(iVar20 + 0x1dc)) +
                               iVar8;
                  uVar24 = *(uint *)(iVar20 + 0x1d4);
                  uVar9 = (uint)*(byte *)(iVar20 + 0x7c74);
                }
                piVar13 = piVar13 + 5;
              } while (uVar36 < uVar9);
              goto joined_r0x000a54e0;
            }
            break;
          case 0xc0:
          case 0xc1:
          case 0xc2:
          case 0xc3:
          case 0xc4:
          case 0xc5:
          case 0xc6:
          case 199:
          case 200:
          case 0xc9:
          case 0xca:
          case 0xcb:
          case 0xcc:
          case 0xcd:
          case 0xce:
          case 0xcf:
            if (uVar35 == 0) {
              FUN_000970ec(iVar20,iVar25);
              iVar8 = *(int *)(DAT_000a5c68 + (uVar9 & 0xf) * 4 + 0xa57ca);
              if (iVar8 != 0) {
                *(uint *)(iVar20 + 0x1e0) = uVar36;
                *(int *)(iVar20 + 0x1e4) = iVar8;
                if (uVar36 < 0x14) {
                  uVar36 = 0x14;
                  *(undefined4 *)(iVar20 + 0x1e0) = 0x14;
                }
                uVar28 = __divsi3(0x3a98000,uVar36 * iVar8);
                *(undefined4 *)(iVar20 + 0x1e8) = uVar28;
                uVar9 = (uint)*(byte *)(iVar20 + 0x7c74);
                if (uVar9 != 0) {
                  uVar24 = *(uint *)(iVar20 + 0x1d4);
                  piVar13 = (int *)(iVar20 + 0x834c);
                  uVar36 = 0;
                  do {
                    uVar16 = uVar36 & 0xff;
                    uVar36 = uVar36 + 1;
                    if (((1 << uVar16 & uVar24) != 0) &&
                       (iVar8 = *(int *)(iVar20 + 0x1ec), iVar8 < piVar13[1])) {
                      piVar13[1] = iVar8;
                      piVar13[1] = *(int *)(iVar20 + 0x1e8) * (*piVar13 - *(int *)(iVar20 + 0x1dc))
                                   + iVar8;
                      uVar24 = *(uint *)(iVar20 + 0x1d4);
                      uVar9 = (uint)*(byte *)(iVar20 + 0x7c74);
                    }
                    piVar13 = piVar13 + 5;
                  } while (uVar36 < uVar9);
                  goto joined_r0x000a54e0;
                }
              }
              goto LAB_000a48c8;
            }
            break;
          case 0xd0:
            if (uVar35 == 0) {
              if (uVar36 == 0) {
                FUN_000970ec(iVar20,iVar25);
                uVar24 = *(uint *)(iVar20 + 0x1d4);
                *(undefined1 *)(iVar20 + 0x1b9) = 0;
                *(undefined1 *)(iVar20 + 0x1ba) = 0;
                *(undefined1 *)(iVar20 + 0x1bb) = 0;
                *(undefined1 *)(iVar20 + 0x1bc) = 0;
                goto joined_r0x000a54e0;
              }
              if (uVar36 == 1) {
                FUN_000970ec(iVar20,iVar25);
                if (*(char *)(iVar20 + 0x7c76) != '\0') goto LAB_000a48c8;
                *(undefined4 *)(iVar20 + 0x1d4) = 0;
                *(byte *)(iVar20 + 0x13) = bVar26;
                goto LAB_000a3b72;
              }
            }
            break;
          case 0xdc:
            if (*(byte *)(iVar20 + 0xc) < 3) {
              iVar8 = 0;
            }
            else {
              iVar8 = uVar36 << 8;
            }
            *(int *)(iVar33 + 0xc) = *(int *)(iVar33 + 0xc) + iVar8;
            *(int *)(iVar33 + 0x10) = *(int *)(iVar20 + 0x1e8) * iVar8 + *(int *)(iVar33 + 0x10);
            uVar24 = *(uint *)(iVar20 + 0x1d4);
            goto joined_r0x000a54e0;
          case 0xdd:
            if ((uVar35 == 0) && (-2 < iVar25)) {
              uVar24 = (uint)(bVar26 >> 6);
              if ((bVar26 & 3) == 0) {
                if ((iVar38 != *(int *)(iVar12 + (uVar24 + 0x18) * 4)) ||
                   (*(char *)(iVar20 + 0x11) == '\0')) goto LAB_000a54e8;
                if (iVar25 != -1) {
                  FUN_000970ec(iVar20,iVar25);
                  FUN_00096f2c(iVar20,uVar24);
                  goto LAB_000a48c8;
                }
              }
              else if ((uVar36 & 3) == 1) {
                if (iVar25 == 0) {
                  if ((iVar38 == *(int *)(iVar12 + (uVar24 + 0x18) * 4)) && (-1 < iVar38)) {
                    *(undefined4 *)(iVar20 + 0x1d4) = 0;
                    *(undefined1 *)(iVar20 + 0x13) = 1;
                  }
                  if (*(char *)(iVar20 + 0x11) != '\0') {
LAB_000a5394:
                    FUN_000970ec(iVar20,iVar25);
                    iVar8 = FUN_00097014(iVar20,uVar24,(uVar36 & 0x3f) >> 2);
                    if (iVar8 == 0) {
                      *(undefined1 *)(uVar24 + iVar20 + 0x1b9) = 1;
                      *(undefined4 *)(iVar20 + uVar24 * 0xc0 + 0x6dc4) = 0;
                      uVar24 = *(uint *)(iVar20 + 0x1d4);
                    }
                    else {
                      iVar25 = *(int *)(iVar20 + 0x204);
                      while (0 < iVar25) {
                        iVar25 = *(int *)(iVar20 + 0x5b34);
                        uVar24 = *(uint *)(iVar25 + 8);
                        if (uVar24 < 0x80) {
                          FUN_00097d64(iVar20,0,uVar24,*(undefined4 *)(iVar25 + 0xc));
                          iVar25 = *(int *)(iVar20 + 0x204);
LAB_000a540a:
                          if (iVar25 == 0) break;
                        }
                        else {
                          bVar26 = *(byte *)(iVar20 + 0x1b7);
                          uVar28 = *(undefined4 *)(iVar25 + 0xc);
                          if (bVar26 < 0x88) {
                            *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                            iVar27 = (uint)bVar26 * 0x14 + 0x7118;
                            iVar25 = iVar20 + iVar27;
                            *(undefined4 *)(iVar20 + iVar27) = 0x21;
                            *(undefined4 *)(iVar25 + 4) = 0;
                            *(uint *)(iVar25 + 8) = uVar24 - 0x80 & 0xff;
                            *(undefined4 *)(iVar25 + 0xc) = uVar28;
                            *(undefined4 *)(iVar25 + 0x10) = 0;
                            iVar25 = *(int *)(iVar20 + 0x204);
                            goto LAB_000a540a;
                          }
                        }
                        puVar31 = *(undefined4 **)(iVar20 + 0x5b34);
                        *(undefined4 *)(iVar20 + 0x5b34) = *puVar31;
                        *puVar31 = *(undefined4 *)(iVar20 + 0x5b3c);
                        *(undefined4 **)(iVar20 + 0x5b3c) = puVar31;
                        if (*(int *)(iVar20 + 0x5b34) == 0) {
                          *(undefined4 *)(iVar20 + 0x5b38) = 0;
                        }
                        iVar25 = *(int *)(iVar20 + 0x204) + -1;
                        *(int *)(iVar20 + 0x204) = iVar25;
                      }
                      if (*(char *)(iVar20 + 0x7c75) != ' ') {
                        FUN_00098110(iVar20);
                      }
                      iVar25 = *(int *)(iVar20 + 0x1ec) - *(int *)(iVar20 + 500);
                      *(int *)(iVar20 + 0x1fc) = iVar25;
                      *(undefined4 *)(iVar20 + 0x1ec) = *(undefined4 *)(iVar8 + 0xc);
                      iVar27 = *(int *)(iVar8 + 0xc);
                      *(undefined4 *)(iVar20 + 0x1fc) = 1;
                      *(int *)(iVar20 + 0x200) = iVar27 - iVar25;
                      *(undefined4 *)(iVar20 + 0x1f0) = *(undefined4 *)(iVar8 + 0x10);
                      *(undefined4 *)(iVar20 + 500) = *(undefined4 *)(iVar8 + 0x14);
                      uVar24 = *(uint *)(iVar8 + 8);
                      *(uint *)(iVar20 + 0x1d4) = uVar24;
                      *(undefined4 *)(iVar20 + 0x1e0) = *(undefined4 *)(iVar8 + 0x18);
                      *(undefined4 *)(iVar20 + 0x1e8) = *(undefined4 *)(iVar8 + 0x1c);
                      *(undefined4 *)(iVar20 + 0x8348) = *(undefined4 *)(iVar8 + 0x28);
                      *(undefined4 *)(iVar20 + 0x834c) = *(undefined4 *)(iVar8 + 0x2c);
                      *(undefined4 *)(iVar20 + 0x8350) = *(undefined4 *)(iVar8 + 0x30);
                      *(undefined4 *)(iVar20 + 0x835c) = *(undefined4 *)(iVar8 + 0x3c);
                      *(undefined4 *)(iVar20 + 0x8360) = *(undefined4 *)(iVar8 + 0x40);
                      *(undefined4 *)(iVar20 + 0x8364) = *(undefined4 *)(iVar8 + 0x44);
                      *(undefined4 *)(iVar20 + 0x8370) = *(undefined4 *)(iVar8 + 0x50);
                      *(undefined4 *)(iVar20 + 0x8374) = *(undefined4 *)(iVar8 + 0x54);
                      *(undefined4 *)(iVar20 + 0x8378) = *(undefined4 *)(iVar8 + 0x58);
                      *(undefined4 *)(iVar20 + 0x8384) = *(undefined4 *)(iVar8 + 100);
                      *(undefined4 *)(iVar20 + 0x8388) = *(undefined4 *)(iVar8 + 0x68);
                      *(undefined4 *)(iVar20 + 0x838c) = *(undefined4 *)(iVar8 + 0x6c);
                    }
                    goto joined_r0x000a54e0;
                  }
                }
                else if (*(char *)(iVar20 + 0x11) != '\0') {
                  if (iVar25 != -1) goto LAB_000a5394;
                  break;
                }
LAB_000a54e8:
                FUN_000970ec(iVar20,iVar25);
                goto LAB_000a48c8;
              }
            }
            break;
          case 0xdf:
            uVar24 = uVar24 & ~(1 << (uVar35 & 0xff));
            *(uint *)(iVar20 + 0x1d4) = uVar24;
            if (uVar24 != 0) break;
            *(undefined1 *)(iVar20 + 0x13) = 1;
            goto LAB_000a3b72;
          case 0xe0:
            uVar24 = (uint)*(byte *)(iVar5 + iVar20 + (uint)(bVar26 >> 6) + 0x27);
            *(char *)(iVar20 + uVar24 + 0x47) = (char)(uVar36 & 0x3f);
            FUN_000971c0(iVar20,iVar25,uVar24,uVar36 & 0x3f);
            uVar24 = *(int *)(iVar20 + 0x1d4);
joined_r0x000a54e0:
            if (uVar24 != 0) break;
            cVar14 = pcVar34[0x1b7];
            goto LAB_000a3b76;
          case 0xe1:
            uVar24 = (uint)*(byte *)(iVar5 + iVar20 + (uint)(bVar26 >> 6) + 0x27);
            iVar8 = iVar20 + uVar24;
            *(byte *)(iVar8 + 0x57) = bVar26 & 0x3f;
            if ((*(char *)(iVar20 + 0xc) == '\x01') || (*(char *)(iVar8 + 0x37) == '\x01')) {
LAB_000a528a:
              FUN_000971c0(iVar20,iVar25,uVar24,*(undefined1 *)(iVar8 + 0x47));
              uVar24 = *(int *)(iVar20 + 0x1d4);
              goto joined_r0x000a54e0;
            }
            break;
          case 0xe2:
            uVar24 = (uint)*(byte *)(iVar5 + iVar20 + (uint)(bVar26 >> 6) + 0x27);
            iVar8 = DAT_000a5c64 + 0xa5238;
            bVar26 = *(byte *)(iVar8 + (uVar36 & 0x3f) * 2 + 0x9b8);
            *(char *)(iVar20 + uVar24 + 0x67) = (char)(uVar36 & 0x3f);
            uVar9 = (uint)bVar26 + (uint)*(byte *)((uint)*(byte *)(iVar20 + 2) + iVar8 + 0x9b8);
            if (uVar9 < 0xc1) {
              iVar8 = iVar8 + uVar9;
            }
            else {
              iVar8 = iVar37 + 0xa52f8;
            }
            bVar26 = *(byte *)(iVar8 + 0xa38);
            if (iVar25 < 0) break;
LAB_000a5152:
            uVar36 = (uint)bVar26;
            uVar9 = (uint)*(byte *)(iVar20 + 0x1b7);
            if (0x87 < uVar9) break;
            *(byte *)(iVar20 + 0x1b7) = *(byte *)(iVar20 + 0x1b7) + 1;
            uVar28 = 4;
LAB_000a50d8:
            iVar27 = uVar9 * 0x14 + 0x7118;
            iVar8 = iVar20 + iVar27;
            *(undefined4 *)(iVar20 + iVar27) = uVar28;
            *(int *)(iVar8 + 4) = iVar25;
            *(uint *)(iVar8 + 8) = uVar24;
            *(uint *)(iVar8 + 0xc) = uVar36;
            *(undefined4 *)(iVar8 + 0x10) = 0;
            goto LAB_000a5028;
          case 0xe3:
            uVar36 = uVar36 & 0x3f;
            uVar24 = uVar36 * 2;
            uVar9 = (uint)*(byte *)(iVar5 + iVar20 + (uint)(bVar26 >> 6) + 0x27);
            *(char *)(iVar20 + uVar9 + 0x77) = (char)uVar36;
            bVar26 = *(byte *)(iVar20 + 3);
            if ((bVar26 != 0x40) && (uVar24 = (uint)bVar26, uVar36 != 0x20)) {
              uVar24 = (uint)*(byte *)(DAT_000a5c60 + (uint)(bVar26 >> 2) * 0x20 + (uVar36 >> 1) +
                                      0xa605c);
            }
            *(char *)(iVar20 + uVar9 * 0x14 + 0x6b48) = (char)uVar24;
            if (-1 < iVar25) {
              bVar26 = *(byte *)(iVar20 + 0x1b7);
              if (bVar26 < 0x88) {
                *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                iVar8 = (uint)bVar26 * 0x14 + 0x7118;
                iVar27 = iVar20 + iVar8;
                *(undefined4 *)(iVar20 + iVar8) = 5;
                *(int *)(iVar27 + 4) = iVar25;
                *(uint *)(iVar27 + 8) = uVar9;
                *(uint *)(iVar27 + 0xc) = uVar24;
                *(undefined4 *)(iVar27 + 0x10) = 0;
                goto LAB_000a5028;
              }
            }
            break;
          case 0xe4:
            uVar24 = (uint)*(byte *)(iVar5 + iVar20 + (uint)(bVar26 >> 6) + 0x27);
            *(char *)(iVar20 + uVar24 + 0x87) = (char)(uVar36 & 0x3f);
            iVar8 = *(int *)(iVar27 + (uint)*(byte *)(iVar20 + uVar24 + 0x97) * 4 + 0xa5250) +
                    (uVar36 & 0x3f) * 2;
            if (iVar8 < 0) goto LAB_000a5092;
LAB_000a4fd4:
            if (0x7e < iVar8) {
              iVar8 = 0x7f;
            }
            goto LAB_000a4fdc;
          case 0xe5:
            if (((bVar26 & 0x30) == 0) && (1 < *(byte *)(iVar20 + 0xc))) {
              *(byte *)((iVar5 + (uint)(bVar26 >> 6) & 0xff) + iVar20 + 0x27) = bVar26 & 0xf;
            }
            break;
          case 0xe6:
            uVar24 = (uint)*(byte *)(iVar5 + iVar20 + (uint)(bVar26 >> 6) + 0x27);
            uVar9 = ((uVar36 & 0x3f) - 0x20) + (uint)*(byte *)(iVar20 + uVar24 + 0x67);
            iVar8 = (int)(char)uVar9;
            if (iVar8 < 0) {
              iVar8 = 0;
            }
            else if (iVar8 < 0x40) {
              iVar8 = iVar8 << 1;
              local_5c = uVar9 & 0xff;
            }
            else {
              iVar8 = 0x7e;
              local_5c = 0x3f;
            }
            *(char *)(iVar20 + uVar24 + 0x67) = (char)local_5c;
            iVar27 = iVar29 + 0xa5130;
            uVar9 = (uint)*(byte *)(iVar8 + iVar27 + 0x9b8) +
                    (uint)*(byte *)((uint)*(byte *)(iVar20 + 2) + iVar27 + 0x9b8);
            if (uVar9 < 0xc1) {
              iVar27 = iVar27 + uVar9;
            }
            else {
              iVar27 = iVar29 + 0xa51f0;
            }
            bVar26 = *(byte *)(iVar27 + 0xa38);
            if (-1 < iVar25) goto LAB_000a5152;
            break;
          case 0xe7:
            uVar36 = uVar36 & 0x3f;
            uVar24 = (uint)*(byte *)(iVar5 + iVar20 + (uint)(bVar26 >> 6) + 0x27);
            if ((uVar36 < 0x19) &&
               (*(char *)(iVar20 + uVar24 * 0x14 + 0x6b47) = (char)uVar36, -1 < iVar25)) {
              uVar9 = (uint)*(byte *)(iVar20 + 0x1b7);
              if (uVar9 < 0x88) {
                uVar28 = 0xd;
                *(byte *)(iVar20 + 0x1b7) = *(byte *)(iVar20 + 0x1b7) + 1;
                goto LAB_000a50d8;
              }
            }
            break;
          case 0xe8:
            uVar24 = (uint)*(byte *)(iVar5 + iVar20 + (uint)(bVar26 >> 6) + 0x27);
            iVar8 = *(int *)(iVar4 + (uVar36 & 0x3f) * 4 + 0xa37dc);
            *(char *)(iVar20 + uVar24 + 0x97) = (char)(uVar36 & 0x3f);
            iVar8 = iVar8 + (uint)*(byte *)(iVar20 + uVar24 + 0x87) * 2;
            if (-1 < iVar8) goto LAB_000a4fd4;
LAB_000a5092:
            iVar8 = 0;
LAB_000a4fdc:
            if (iVar25 < 0) {
              iVar25 = iVar20 + uVar24 * 0x14;
              *(short *)(iVar25 + 0x6b52) = (short)(iVar8 << 7);
              *(undefined1 *)(iVar25 + 0x6b46) = *(undefined1 *)(iVar25 + 0x6b47);
            }
            else {
              bVar26 = *(byte *)(iVar20 + 0x1b7);
              if (bVar26 < 0x88) {
                *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                iVar27 = (uint)bVar26 * 0x14 + 0x7118;
                iVar5 = iVar20 + iVar27;
                iVar8 = iVar8 << 7;
                *(undefined4 *)(iVar20 + iVar27) = 0x15;
                *(int *)(iVar5 + 4) = iVar25;
                *(uint *)(iVar5 + 8) = uVar24;
                if (*(char *)(iVar20 + uVar24 * 0x14 + 0x6b47) == '\0') {
                  iVar8 = 0;
                }
                *(int *)(iVar5 + 0xc) = iVar8;
                *(undefined4 *)(iVar5 + 0x10) = 0;
LAB_000a5028:
                uVar24 = *(int *)(iVar20 + 0x1d4);
                *(uint *)(iVar20 + 0x1f0) =
                     *(int *)(iVar20 + 0x1f0) + (uint)*(byte *)(iVar20 + 1) * iVar25 * 0x400;
                goto joined_r0x000a54e0;
              }
            }
            break;
          case 0xe9:
            *(byte *)((uint)*(byte *)(iVar5 + iVar20 + (uint)(bVar26 >> 6) + 0x27) + iVar20 + 0x97)
                 = bVar26 & 0x3f;
            break;
          case 0xea:
            uVar24 = (uint)*(byte *)(iVar20 + iVar5 + (uint)(bVar26 >> 6) + 0x27);
            iVar8 = (uVar36 & 0x3f) << 1;
            if (uVar24 == *(byte *)(iVar20 + 0x7c75)) {
              iVar8 = 0;
            }
            if (iVar25 < 0) {
              *(undefined1 *)(iVar20 + uVar24 * 0x14 + 0x6b45) =
                   *(undefined1 *)(iVar8 + iVar3 + 0xa43e6);
            }
            else {
              bVar26 = *(byte *)(iVar20 + 0x1b7);
              if (bVar26 < 0x88) {
                *(byte *)(iVar20 + 0x1b7) = bVar26 + 1;
                bVar7 = *(byte *)(iVar8 + iVar2 + 0xa43e4);
                iVar27 = (uint)bVar26 * 0x14 + 0x7118;
                iVar8 = iVar20 + iVar27;
                *(undefined4 *)(iVar20 + iVar27) = 3;
                *(uint *)(iVar8 + 0xc) = (uint)bVar7;
                *(int *)(iVar8 + 4) = iVar25;
                *(uint *)(iVar8 + 8) = uVar24;
                *(undefined4 *)(iVar8 + 0x10) = 0;
                goto LAB_000a5028;
              }
            }
          }
switchD_000a4604_caseD_b2:
          iVar8 = FUN_0009707c(iVar12,uVar35);
          if (iVar8 < 0) {
LAB_000a3b60:
            *(uint *)(iVar20 + 0x1d4) = *(uint *)(iVar20 + 0x1d4) & ~(1 << (uVar35 & 0xff));
          }
          else {
            uVar24 = (uint)*(byte *)(*(int *)(iVar33 + 4) + *(uint *)(iVar33 + 8));
            *(uint *)(iVar33 + 0xc) = *(int *)(iVar33 + 0xc) + uVar24;
            *(uint *)(iVar33 + 0x10) = *(int *)(iVar20 + 0x1e8) * uVar24 + *(int *)(iVar33 + 0x10);
            if (*(uint *)(iVar12 + iVar15) <= *(uint *)(iVar33 + 8)) goto LAB_000a3b60;
          }
LAB_000a3b72:
          cVar14 = pcVar34[0x1b7];
LAB_000a3b76:
          if (cVar14 != '\0') break;
        } while( true );
      }
      pcVar34[0x1b7] = cVar14 + -1;
      iVar11 = (uint)(byte)pcVar34[0x1b8] * 0x14 + 0x7118;
      pcVar32 = pcVar34 + iVar11;
      *(undefined4 *)param_2 = *(undefined4 *)(pcVar34 + iVar11);
      if (pcVar34[0x10] != '\x01') {
        *(int *)(param_2 + 4) =
             (int)((uint)(byte)pcVar34[1] * *(int *)(pcVar32 + 4) * *(int *)(pcVar34 + 0x1cc)) >> 10
        ;
        *(undefined4 *)(param_2 + 8) = *(undefined4 *)(pcVar32 + 8);
        *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(pcVar32 + 0xc);
        *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(pcVar32 + 0x10);
        pcVar34[0x1b8] = pcVar34[0x1b8] + '\x01';
        return 1;
      }
      goto LAB_000a4730;
    }
    pcVar34[0x1b7] = pcVar34[0x1b7] + -1;
    iVar11 = (uint)(byte)pcVar34[0x1b8] * 0x14 + 0x7118;
    pcVar32 = pcVar34 + iVar11;
    *(undefined4 *)param_2 = *(undefined4 *)(pcVar34 + iVar11);
    if (pcVar34[0x10] == '\x01') {
LAB_000a4730:
      if (*(int *)(pcVar34 + 0x1fc) == 0) {
        iVar11 = *(int *)(pcVar34 + 0x1cc) *
                 (*(int *)(pcVar34 + 0x1ec) - *(int *)(pcVar34 + 500) >> 10);
      }
      else {
        *(int *)(pcVar34 + 500) = *(int *)(pcVar34 + 0x200);
        pcVar34[0x1fc] = '\0';
        pcVar34[0x1fd] = '\0';
        pcVar34[0x1fe] = '\0';
        pcVar34[0x1ff] = '\0';
        iVar11 = *(int *)(pcVar34 + 0x1cc) *
                 (*(int *)(pcVar34 + 0x1ec) - *(int *)(pcVar34 + 0x200) >> 10);
      }
      *(int *)(param_2 + 4) = (int)(iVar11 + 0x200U & ~((int)(iVar11 + 0x200U) >> 0x1f)) >> 10;
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(pcVar32 + 8);
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(pcVar32 + 0xc);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(pcVar32 + 0x10);
      pcVar34[0x1b8] = pcVar34[0x1b8] + '\x01';
      *(int *)(pcVar34 + 500) =
           *(int *)(pcVar34 + 0x1c8) * *(int *)(param_2 + 4) * 0x400 + *(int *)(pcVar34 + 500);
      return 1;
    }
    *(int *)(param_2 + 4) =
         (int)((uint)(byte)pcVar34[1] * *(int *)(pcVar32 + 4) * *(int *)(pcVar34 + 0x1cc)) >> 10;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(pcVar32 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(pcVar32 + 0xc);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(pcVar32 + 0x10);
    pcVar34[0x1b8] = pcVar34[0x1b8] + '\x01';
    uVar28 = 1;
  }
  else {
    uVar28 = 0xffffffff;
  }
  return uVar28;
LAB_000a36e6:
  cVar14 = pcVar34[0x15];
joined_r0x000a41a0:
  if (cVar14 != '\0') {
    pcVar34[0x15] = '\x02';
    return 0;
  }
  iVar8 = 0;
  if (*(int *)(pcVar34 + 0x1f0) < *(int *)(pcVar34 + 0x1ec)) {
    iVar8 = __divsi3(*(int *)(pcVar34 + 0x1ec) - *(int *)(pcVar34 + 0x1f0),pcVar34[1]);
    iVar8 = iVar8 + 0x200 >> 10;
    if (-1 < iVar8) {
      bVar26 = pcVar34[0x1b7];
      goto joined_r0x000a47a6;
    }
  }
  else {
    bVar26 = pcVar34[0x1b7];
joined_r0x000a47a6:
    uVar24 = (uint)bVar26;
    if (0x87 < uVar24) goto LAB_000a3772;
    pcVar34[0x1b7] = bVar26 + 1;
    iVar20 = uVar24 * 0x14;
    pcVar32 = pcVar34 + iVar20 + 0x7118;
    pcVar32[0] = '\x10';
    pcVar32[1] = '\0';
    pcVar32[2] = '\0';
    pcVar32[3] = '\0';
    *(int *)(pcVar34 + iVar20 + 0x711c) = iVar8;
    pcVar32 = pcVar34 + iVar20 + 0x7120;
    pcVar32[0] = '\0';
    pcVar32[1] = '\0';
    pcVar32[2] = '\0';
    pcVar32[3] = '\0';
    pcVar32 = pcVar34 + iVar20 + 0x7124;
    pcVar32[0] = '\0';
    pcVar32[1] = '\0';
    pcVar32[2] = '\0';
    pcVar32[3] = '\0';
    pcVar32 = pcVar34 + iVar20 + 0x7128;
    pcVar32[0] = '\0';
    pcVar32[1] = '\0';
    pcVar32[2] = '\0';
    pcVar32[3] = '\0';
    uVar24 = (uint)(byte)pcVar34[0x1b7];
    *(uint *)(pcVar34 + 0x1f0) = *(int *)(pcVar34 + 0x1f0) + (uint)(byte)pcVar34[1] * iVar8 * 0x400;
    if ((pcVar34[0x7c75] != '\0') || (0x87 < uVar24)) goto LAB_000a3772;
    pcVar34[0x1b7] = pcVar34[0x1b7] + 1;
    iVar8 = uVar24 * 0x14;
    pcVar32 = pcVar34 + iVar8 + 0x7118;
    pcVar32[0] = '/';
    pcVar32[1] = '\0';
    pcVar32[2] = '\0';
    pcVar32[3] = '\0';
    pcVar32 = pcVar34 + iVar8 + 0x711c;
    pcVar32[0] = '\0';
    pcVar32[1] = '\0';
    pcVar32[2] = '\0';
    pcVar32[3] = '\0';
    pcVar32 = pcVar34 + iVar8 + 0x7120;
    pcVar32[0] = '\0';
    pcVar32[1] = '\0';
    pcVar32[2] = '\0';
    pcVar32[3] = '\0';
    pcVar32 = pcVar34 + iVar8 + 0x7128;
    pcVar32[0] = '\0';
    pcVar32[1] = '\0';
    pcVar32[2] = '\0';
    pcVar32[3] = '\0';
    pcVar32 = pcVar34 + iVar8 + 0x7124;
    pcVar32[0] = '\x7f';
    pcVar32[1] = '\0';
    pcVar32[2] = '\0';
    pcVar32[3] = '\0';
  }
  uVar24 = (uint)(byte)pcVar34[0x1b7];
LAB_000a3772:
  if (uVar24 < 0x88) {
    pcVar34[0x1b7] = (char)uVar24 + '\x01';
    iVar8 = uVar24 * 0x14;
    pcVar32 = pcVar34 + iVar8 + 0x7118;
    pcVar32[0] = '\x10';
    pcVar32[1] = '\0';
    pcVar32[2] = '\0';
    pcVar32[3] = '\0';
    pcVar32 = pcVar34 + iVar8 + 0x711c;
    pcVar32[0] = '\0';
    pcVar32[1] = '\0';
    pcVar32[2] = '\0';
    pcVar32[3] = '\0';
    pcVar32 = pcVar34 + iVar8 + 0x7120;
    pcVar32[0] = '\x01';
    pcVar32[1] = '\0';
    pcVar32[2] = '\0';
    pcVar32[3] = '\0';
    pcVar32 = pcVar34 + iVar8 + 0x7124;
    pcVar32[0] = '\0';
    pcVar32[1] = '\0';
    pcVar32[2] = '\0';
    pcVar32[3] = '\0';
    pcVar32 = pcVar34 + iVar8 + 0x7128;
    pcVar32[0] = '\0';
    pcVar32[1] = '\0';
    pcVar32[2] = '\0';
    pcVar32[3] = '\0';
    uVar24 = (uint)(byte)pcVar34[0x1b7];
    if ((pcVar34[0x7c75] == '\x01') && (uVar24 < 0x88)) {
      pcVar34[0x1b7] = pcVar34[0x1b7] + 1;
      iVar8 = uVar24 * 0x14;
      pcVar32 = pcVar34 + iVar8 + 0x7118;
      pcVar32[0] = '/';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      pcVar32 = pcVar34 + iVar8 + 0x711c;
      pcVar32[0] = '\0';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      pcVar32 = pcVar34 + iVar8 + 0x7120;
      pcVar32[0] = '\0';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      pcVar32 = pcVar34 + iVar8 + 0x7124;
      pcVar32[0] = '\x7f';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      pcVar32 = pcVar34 + iVar8 + 0x7128;
      pcVar32[0] = '\0';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      uVar24 = (uint)(byte)pcVar34[0x1b7];
    }
  }
  uVar9 = 2;
  do {
    if (uVar24 < 0x88) {
      pcVar34[0x1b7] = (char)uVar24 + '\x01';
      iVar8 = uVar24 * 0x14;
      pcVar32 = pcVar34 + iVar8 + 0x7118;
      pcVar32[0] = '\x10';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      pcVar32 = pcVar34 + iVar8 + 0x711c;
      pcVar32[0] = '\0';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      *(uint *)(pcVar34 + iVar8 + 0x7120) = uVar9;
      pcVar32 = pcVar34 + iVar8 + 0x7124;
      pcVar32[0] = '\0';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      pcVar32 = pcVar34 + iVar8 + 0x7128;
      pcVar32[0] = '\0';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      uVar24 = (uint)(byte)pcVar34[0x1b7];
      if ((uVar9 == (byte)pcVar34[0x7c75]) && (uVar24 < 0x88)) {
        pcVar34[0x1b7] = pcVar34[0x1b7] + 1;
        iVar8 = uVar24 * 0x14;
        pcVar32 = pcVar34 + iVar8 + 0x7118;
        pcVar32[0] = '/';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        pcVar32 = pcVar34 + iVar8 + 0x711c;
        pcVar32[0] = '\0';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        pcVar32 = pcVar34 + iVar8 + 0x7120;
        pcVar32[0] = '\0';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        pcVar32 = pcVar34 + iVar8 + 0x7124;
        pcVar32[0] = '\x7f';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        pcVar32 = pcVar34 + iVar8 + 0x7128;
        pcVar32[0] = '\0';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        uVar24 = (uint)(byte)pcVar34[0x1b7];
      }
    }
    if (uVar24 < 0x88) {
      pcVar34[0x1b7] = (char)uVar24 + '\x01';
      iVar8 = uVar24 * 0x14;
      pcVar32 = pcVar34 + iVar8 + 0x7118;
      pcVar32[0] = '\x10';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      pcVar32 = pcVar34 + iVar8 + 0x711c;
      pcVar32[0] = '\0';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      *(uint *)(pcVar34 + iVar8 + 0x7120) = uVar9 + 1;
      pcVar32 = pcVar34 + iVar8 + 0x7124;
      pcVar32[0] = '\0';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      pcVar32 = pcVar34 + iVar8 + 0x7128;
      pcVar32[0] = '\0';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      uVar24 = (uint)(byte)pcVar34[0x1b7];
      if ((uVar9 + 1 == (uint)(byte)pcVar34[0x7c75]) && (uVar24 < 0x88)) {
        pcVar34[0x1b7] = pcVar34[0x1b7] + 1;
        iVar8 = uVar24 * 0x14;
        pcVar32 = pcVar34 + iVar8 + 0x7118;
        pcVar32[0] = '/';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        pcVar32 = pcVar34 + iVar8 + 0x711c;
        pcVar32[0] = '\0';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        pcVar32 = pcVar34 + iVar8 + 0x7120;
        pcVar32[0] = '\0';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        pcVar32 = pcVar34 + iVar8 + 0x7124;
        pcVar32[0] = '\x7f';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        pcVar32 = pcVar34 + iVar8 + 0x7128;
        pcVar32[0] = '\0';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        uVar24 = (uint)(byte)pcVar34[0x1b7];
      }
    }
    if (uVar24 < 0x88) {
      pcVar34[0x1b7] = (char)uVar24 + '\x01';
      iVar8 = uVar24 * 0x14;
      pcVar32 = pcVar34 + iVar8 + 0x7118;
      pcVar32[0] = '\x10';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      pcVar32 = pcVar34 + iVar8 + 0x711c;
      pcVar32[0] = '\0';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      *(uint *)(pcVar34 + iVar8 + 0x7120) = uVar9 + 2;
      pcVar32 = pcVar34 + iVar8 + 0x7124;
      pcVar32[0] = '\0';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      pcVar32 = pcVar34 + iVar8 + 0x7128;
      pcVar32[0] = '\0';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      uVar24 = (uint)(byte)pcVar34[0x1b7];
      if ((uVar9 + 2 == (uint)(byte)pcVar34[0x7c75]) && (uVar24 < 0x88)) {
        pcVar34[0x1b7] = pcVar34[0x1b7] + 1;
        iVar8 = uVar24 * 0x14;
        pcVar32 = pcVar34 + iVar8 + 0x7118;
        pcVar32[0] = '/';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        pcVar32 = pcVar34 + iVar8 + 0x711c;
        pcVar32[0] = '\0';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        pcVar32 = pcVar34 + iVar8 + 0x7120;
        pcVar32[0] = '\0';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        pcVar32 = pcVar34 + iVar8 + 0x7124;
        pcVar32[0] = '\x7f';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        pcVar32 = pcVar34 + iVar8 + 0x7128;
        pcVar32[0] = '\0';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        uVar24 = (uint)(byte)pcVar34[0x1b7];
      }
    }
    if (uVar24 < 0x88) {
      pcVar34[0x1b7] = (char)uVar24 + '\x01';
      iVar8 = uVar24 * 0x14;
      pcVar32 = pcVar34 + iVar8 + 0x7118;
      pcVar32[0] = '\x10';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      pcVar32 = pcVar34 + iVar8 + 0x711c;
      pcVar32[0] = '\0';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      *(uint *)(pcVar34 + iVar8 + 0x7120) = uVar9 + 3;
      pcVar32 = pcVar34 + iVar8 + 0x7124;
      pcVar32[0] = '\0';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      pcVar32 = pcVar34 + iVar8 + 0x7128;
      pcVar32[0] = '\0';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      uVar24 = (uint)(byte)pcVar34[0x1b7];
      if ((uVar9 + 3 == (uint)(byte)pcVar34[0x7c75]) && (uVar24 < 0x88)) {
        pcVar34[0x1b7] = pcVar34[0x1b7] + 1;
        iVar8 = uVar24 * 0x14;
        pcVar32 = pcVar34 + iVar8 + 0x7118;
        pcVar32[0] = '/';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        pcVar32 = pcVar34 + iVar8 + 0x711c;
        pcVar32[0] = '\0';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        pcVar32 = pcVar34 + iVar8 + 0x7120;
        pcVar32[0] = '\0';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        pcVar32 = pcVar34 + iVar8 + 0x7124;
        pcVar32[0] = '\x7f';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        pcVar32 = pcVar34 + iVar8 + 0x7128;
        pcVar32[0] = '\0';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        uVar24 = (uint)(byte)pcVar34[0x1b7];
      }
    }
    if (uVar24 < 0x88) {
      pcVar34[0x1b7] = (char)uVar24 + '\x01';
      iVar8 = uVar24 * 0x14;
      pcVar32 = pcVar34 + iVar8 + 0x7118;
      pcVar32[0] = '\x10';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      pcVar32 = pcVar34 + iVar8 + 0x711c;
      pcVar32[0] = '\0';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      *(uint *)(pcVar34 + iVar8 + 0x7120) = uVar9 + 4;
      pcVar32 = pcVar34 + iVar8 + 0x7124;
      pcVar32[0] = '\0';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      pcVar32 = pcVar34 + iVar8 + 0x7128;
      pcVar32[0] = '\0';
      pcVar32[1] = '\0';
      pcVar32[2] = '\0';
      pcVar32[3] = '\0';
      uVar24 = (uint)(byte)pcVar34[0x1b7];
      if ((uVar9 + 4 == (uint)(byte)pcVar34[0x7c75]) && (uVar24 < 0x88)) {
        pcVar34[0x1b7] = pcVar34[0x1b7] + 1;
        iVar8 = uVar24 * 0x14;
        pcVar32 = pcVar34 + iVar8 + 0x7118;
        pcVar32[0] = '/';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        pcVar32 = pcVar34 + iVar8 + 0x711c;
        pcVar32[0] = '\0';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        pcVar32 = pcVar34 + iVar8 + 0x7120;
        pcVar32[0] = '\0';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        pcVar32 = pcVar34 + iVar8 + 0x7124;
        pcVar32[0] = '\x7f';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        pcVar32 = pcVar34 + iVar8 + 0x7128;
        pcVar32[0] = '\0';
        pcVar32[1] = '\0';
        pcVar32[2] = '\0';
        pcVar32[3] = '\0';
        uVar24 = (uint)(byte)pcVar34[0x1b7];
      }
    }
    uVar9 = uVar9 + 5;
  } while (uVar9 != 0x20);
  pcVar34[0x15] = '\x01';
  goto LAB_000a361c;
}

