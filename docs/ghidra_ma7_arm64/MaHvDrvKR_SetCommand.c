/* MaHvDrvKR_SetCommand @ 0022e948 4440B */


/* YAMAHA::MaHvDrvKR_SetCommand(unsigned int, unsigned int, unsigned long) */

void YAMAHA::MaHvDrvKR_SetCommand(uint param_1,uint param_2,ulong param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  ushort uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  ushort *puVar19;
  ushort *puVar20;
  uint *puVar21;
  uint *puVar22;
  ushort uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 *puVar29;
  undefined1 *puVar30;
  uint uVar31;
  uint local_c;
  long local_8;
  
  bVar8 = DAT_00580fa8;
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  uVar27 = (uint)param_3;
  uVar11 = 0xfffffffe;
  switch(param_1) {
  case 0:
    if (param_2 == 0) {
      local_c = 0;
      if ((DAT_005802a8 != 1) || (DAT_00580e50 == (long *)0x0)) goto LAB_0022f480;
      local_c = 0;
      if (param_3 != 0) {
        bVar8 = *(byte *)param_3;
        if (bVar8 < 0x80) {
          DAT_00580cf0 = 1;
          local_c = (uint)bVar8 * 100 - 0x4b0;
          uVar27 = local_c;
          if ((int)local_c < -0x8000) {
            uVar27 = 0xffff8000;
          }
          if (0x7fff < (int)uVar27) {
            uVar27 = 0x7fff;
          }
          DAT_005802d0 = (undefined2)uVar27;
        }
        else {
          if ((bVar8 & 0x7f) == 0) {
            DAT_005802d0 = 0x8000;
            local_c = 0xffff8000;
          }
          else {
            local_c = ((bVar8 & 0x7f) - 0x3c) * 100;
            uVar27 = local_c;
            if ((int)local_c < -0x8000) {
              uVar27 = 0xffff8000;
            }
            if (0x7fff < (int)uVar27) {
              uVar27 = 0x7fff;
            }
            DAT_005802d0 = (undefined2)uVar27;
          }
          DAT_00580cf0 = 0;
        }
        DAT_00580cfc = param_2;
        DAT_00580d04 = param_2;
        DAT_00580d0c = param_2;
        if (*(byte *)(param_3 + 1) < 0x80) {
          DAT_005802d2 = (&DAT_0052d8b0)[*(byte *)(param_3 + 1)];
          bVar8 = *(byte *)(param_3 + 2);
          uVar27 = (uint)bVar8;
          if (bVar8 < 0x80) {
            iVar12 = 0;
            iVar15 = 1;
          }
          else {
            bVar7 = *(byte *)(param_3 + 3);
            uVar27 = (uint)bVar7;
            iVar12 = (bVar8 - 0x80) * 0x80;
            if (bVar7 < 0x80) {
              iVar15 = 2;
            }
            else {
              bVar8 = *(byte *)(param_3 + 4);
              uVar27 = (uint)bVar8;
              iVar12 = ((bVar7 - 0x80) + iVar12) * 0x80;
              if (bVar8 < 0x80) {
                iVar15 = 3;
              }
              else {
                uVar27 = (uint)*(byte *)(param_3 + 5);
                iVar15 = 4;
                iVar12 = ((bVar8 - 0x80) + iVar12) * 0x80;
                if (0x7f < *(byte *)(param_3 + 5)) goto LAB_0022eef4;
              }
            }
          }
          DAT_005802c8 = uVar27 + iVar12;
          uVar27 = iVar15 + 2;
          DAT_00580cf1 = DAT_005802c8 != 0;
          bVar8 = *(byte *)(param_3 + uVar27);
          uVar11 = (uint)bVar8;
          if (bVar8 < 0x80) {
            iVar12 = 0;
            iVar15 = 1;
          }
          else {
            lVar24 = param_3 + uVar27;
            iVar12 = (bVar8 - 0x80) * 0x80;
            bVar8 = *(byte *)(lVar24 + 1);
            uVar11 = (uint)bVar8;
            if (bVar8 < 0x80) {
              iVar15 = 2;
            }
            else {
              bVar7 = *(byte *)(lVar24 + 2);
              uVar11 = (uint)bVar7;
              iVar12 = ((bVar8 - 0x80) + iVar12) * 0x80;
              if (bVar7 < 0x80) {
                iVar15 = 3;
              }
              else {
                uVar11 = (uint)*(byte *)(lVar24 + 3);
                iVar15 = 4;
                iVar12 = ((bVar7 - 0x80) + iVar12) * 0x80;
                if (0x7f < *(byte *)(lVar24 + 3)) goto LAB_0022eef4;
              }
            }
          }
          uVar11 = uVar11 + iVar12;
          uVar27 = iVar15 + uVar27;
          if (uVar11 < 4) {
            uVar28 = uVar11;
            if (uVar11 == 0) {
              uVar11 = 0xfffffffd;
              goto switchD_0022e998_default;
            }
          }
          else {
            uVar28 = 4;
          }
          bVar8 = *(byte *)(param_3 + uVar27);
          uVar31 = (uint)bVar8;
          iVar12 = 0;
          uVar16 = 1;
          if (0x7f < bVar8) {
            do {
              iVar12 = (iVar12 + uVar31 + -0x80) * 0x80;
              if ((uVar28 <= uVar16) || (3 < uVar16)) goto LAB_0022eef4;
              uVar31 = (uint)*(byte *)(param_3 + uVar27 + (ulong)uVar16);
              uVar16 = uVar16 + 1;
            } while (0x7f < uVar31);
          }
          DAT_005802cc = uVar31 + iVar12;
          uVar16 = uVar16 + uVar27;
          if (DAT_005802c8 < DAT_005802cc) {
            if ((bool)DAT_00580cf1) goto LAB_0022eef4;
            DAT_00580cf4 = 8;
          }
          else {
            DAT_00580cf4 = DAT_005802c8 - DAT_005802cc;
          }
          bVar8 = *(byte *)(param_3 + uVar16);
          uVar28 = bVar8 - 1;
          if (uVar28 < 0x7f) {
            puVar6 = &DAT_00580d16 + uVar28;
            puVar29 = &DAT_00580d16;
            DAT_00580d15 = *(undefined1 *)(param_3 + (uVar16 + 1));
            uVar26 = (ulong)uVar28 & 7;
            uVar31 = uVar16 + 2;
            DAT_00580d14 = bVar8;
            if (puVar6 != &DAT_00580d16) {
              puVar30 = puVar29;
              if ((uVar28 & 7) != 0) {
                if (uVar26 != 1) {
                  if (uVar26 != 2) {
                    if (uVar26 != 3) {
                      if (uVar26 != 4) {
                        if (uVar26 != 5) {
                          if (uVar26 != 6) {
                            DAT_00580d16 = *(undefined1 *)(param_3 + uVar31);
                            uVar31 = uVar16 + 3;
                            puVar30 = &DAT_00580d17;
                          }
                          uVar26 = (ulong)uVar31;
                          uVar31 = uVar31 + 1;
                          puVar29 = puVar30 + 1;
                          *puVar30 = *(undefined1 *)(param_3 + uVar26);
                        }
                        uVar26 = (ulong)uVar31;
                        uVar31 = uVar31 + 1;
                        puVar30 = puVar29 + 1;
                        *puVar29 = *(undefined1 *)(param_3 + uVar26);
                      }
                      uVar26 = (ulong)uVar31;
                      uVar31 = uVar31 + 1;
                      puVar29 = puVar30 + 1;
                      *puVar30 = *(undefined1 *)(param_3 + uVar26);
                    }
                    uVar26 = (ulong)uVar31;
                    uVar31 = uVar31 + 1;
                    puVar30 = puVar29 + 1;
                    *puVar29 = *(undefined1 *)(param_3 + uVar26);
                  }
                  uVar26 = (ulong)uVar31;
                  uVar31 = uVar31 + 1;
                  puVar29 = puVar30 + 1;
                  *puVar30 = *(undefined1 *)(param_3 + uVar26);
                }
                uVar26 = (ulong)uVar31;
                uVar31 = uVar31 + 1;
                *puVar29 = *(undefined1 *)(param_3 + uVar26);
                puVar30 = puVar29 + 1;
                if (puVar29 + 1 == puVar6) goto LAB_0022f174;
              }
              do {
                puVar29 = puVar30 + 8;
                uVar28 = uVar31 + 2;
                uVar17 = uVar31 + 3;
                *puVar30 = *(undefined1 *)(param_3 + uVar31);
                uVar2 = uVar31 + 4;
                uVar3 = uVar31 + 5;
                uVar4 = uVar31 + 6;
                uVar5 = uVar31 + 7;
                puVar30[1] = *(undefined1 *)(param_3 + (uVar31 + 1));
                uVar31 = uVar31 + 8;
                puVar30[2] = *(undefined1 *)(param_3 + uVar28);
                puVar30[3] = *(undefined1 *)(param_3 + uVar17);
                puVar30[4] = *(undefined1 *)(param_3 + uVar2);
                puVar30[5] = *(undefined1 *)(param_3 + uVar3);
                puVar30[6] = *(undefined1 *)(param_3 + uVar4);
                puVar30[7] = *(undefined1 *)(param_3 + uVar5);
                puVar30 = puVar29;
              } while (puVar29 != puVar6);
            }
LAB_0022f174:
            uVar28 = uVar16 + 1 + (uint)bVar8;
            DAT_00580cf8 = 0;
            iVar12 = FUN_0022c1d4(&DAT_00580d15,bVar8,&local_c);
            if (-1 < iVar12) {
              DAT_00580cf8 = DAT_00580cf8 + 1;
              lVar24 = *DAT_00580e50 + (long)iVar12;
              DAT_00580d00 = DAT_00580cf4;
              lVar18 = *DAT_00580e50;
              DAT_00580cfc = (*(byte *)(lVar24 + 0xd) & 0x7f) +
                             ((*(byte *)(lVar24 + 0xc) & 0x7f) +
                             ((*(byte *)(lVar24 + 10) & 0x7f) * 0x80 +
                             (*(byte *)(lVar24 + 0xb) & 0x7f)) * 0x80) * 0x80;
              if ((*(byte *)(lVar18 + (ulong)DAT_00580cfc + 1) & 0x7f) +
                  (*(byte *)(lVar18 + (ulong)DAT_00580cfc) & 0x7f) * 0x80 == 2) {
                iVar12 = FUN_0022c1d4(lVar18 + iVar12,1,&local_c);
                if (iVar12 < 0) goto LAB_0022eef4;
                bVar10 = true;
                uVar16 = 1;
                lVar24 = *DAT_00580e50 + (long)iVar12;
                DAT_00580cfc = (*(byte *)(lVar24 + 0xd) & 0x7f) +
                               ((*(byte *)(lVar24 + 0xc) & 0x7f) +
                               ((*(byte *)(lVar24 + 10) & 0x7f) * 0x80 +
                               (*(byte *)(lVar24 + 0xb) & 0x7f)) * 0x80) * 0x80;
              }
              else {
                bVar10 = local_c != 0;
                uVar16 = local_c;
              }
              uVar31 = (uint)bVar8;
              if ((uVar16 < bVar8) && (bVar10)) {
                uVar17 = uVar16 - 1;
                if ((&DAT_00580d15)[uVar17] == '2') {
                  (&DAT_00580d15)[uVar17] = 0x45;
                  iVar12 = FUN_0022c1d4(&DAT_00580d15 + uVar17,(uVar31 + 1) - uVar16,&local_c);
                  if (-1 < iVar12) {
                    (&DAT_00580d15)[uVar17] = 0x32;
                    goto LAB_0022f268;
                  }
                }
                else {
                  iVar12 = FUN_0022c1d4(&DAT_00580d15 + uVar17,(uVar31 + 1) - uVar16,&local_c);
                  if (-1 < iVar12) {
LAB_0022f268:
                    if (1 < (int)local_c) {
                      uVar16 = uVar16 + (local_c - 1);
                      DAT_00580d00 = DAT_00580d00 >> 1;
                      lVar24 = *DAT_00580e50 + (long)iVar12;
                      DAT_00580cf8 = DAT_00580cf8 + 1;
                      DAT_00580d08 = DAT_00580cf4 - DAT_00580d00;
                      DAT_00580d04 = (*(byte *)(lVar24 + 0xd) & 0x7f) +
                                     ((*(byte *)(lVar24 + 0xc) & 0x7f) +
                                     ((*(byte *)(lVar24 + 10) & 0x7f) * 0x80 +
                                     (*(byte *)(lVar24 + 0xb) & 0x7f)) * 0x80) * 0x80;
                    }
                    goto LAB_0022f2e0;
                  }
                }
              }
              else {
LAB_0022f2e0:
                if (uVar16 < uVar31) {
                  iVar12 = FUN_0022c1d4(&DAT_00580d15 + uVar16,uVar31 - uVar16,&local_c);
                  if (iVar12 < 0) goto LAB_0022eef4;
                  lVar24 = *DAT_00580e50 + (long)iVar12;
                  DAT_00580cf8 = DAT_00580cf8 + 1;
                  DAT_00580d10 = 0;
                  DAT_00580d0c = (*(byte *)(lVar24 + 0xd) & 0x7f) +
                                 ((*(byte *)(lVar24 + 0xc) & 0x7f) +
                                 ((*(byte *)(lVar24 + 10) & 0x7f) * 0x80 +
                                 (*(byte *)(lVar24 + 0xb) & 0x7f)) * 0x80) * 0x80;
                }
                bVar8 = *(byte *)(param_3 + uVar28);
                uVar16 = uVar28 + 1;
                if (bVar8 < 0x80) {
                  DAT_005806dc = bVar8 + 1;
                  DAT_005806e0 = 0;
                  DAT_005806e4 = 0x2000;
                  uVar31 = uVar16;
                  if ((byte)(bVar8 + 1) < 2) {
LAB_0022f4ac:
                    bVar8 = *(byte *)(param_3 + uVar31);
                    uVar26 = (ulong)(uVar31 + 1);
                    if (bVar8 < 0x80) {
                      DAT_005802d3 = bVar8 + 1;
                      DAT_005802d4 = 0;
                      DAT_005802d8 = 0;
                      if ((byte)(bVar8 + 1) < 2) {
LAB_0022f7e8:
                        bVar8 = *(byte *)(param_3 + uVar26);
                        iVar12 = (int)uVar26;
                        uVar28 = iVar12 + 1;
                        if (bVar8 < 0x80) {
                          DAT_00580ae8 = bVar8;
                          if (bVar8 != 0) {
                            bVar7 = *(byte *)(param_3 + uVar28);
                            uVar31 = (uint)bVar7;
                            uVar16 = iVar12 + 2;
                            if (0x7f < bVar7) goto LAB_0022eef4;
                            uVar28 = uVar28 + bVar8;
                            puVar22 = &DAT_00580aec;
                            uVar2 = uVar28 - uVar16 & 3;
                            iVar15 = DAT_00580cf4 * 0x102;
                            uVar17 = uVar16;
                            if (uVar2 != 0) {
                              uVar17 = iVar12 + 3;
                              DAT_00580aec = (uint)bVar7 * iVar15 >> 0xf;
                              puVar22 = &DAT_00580af0;
                              bVar8 = *(byte *)(param_3 + uVar16);
                              uVar31 = (uint)bVar8;
                              if (0x7f < bVar8) goto LAB_0022eef4;
                              if (uVar2 != 1) {
                                puVar21 = puVar22;
                                uVar16 = uVar17;
                                if (uVar2 != 2) {
                                  uVar16 = iVar12 + 4;
                                  DAT_00580af0 = (uint)bVar8 * iVar15 >> 0xf;
                                  puVar21 = &DAT_00580af4;
                                  uVar31 = (uint)*(byte *)(param_3 + uVar17);
                                  if (0x7f < *(byte *)(param_3 + uVar17)) goto LAB_0022eef4;
                                }
                                uVar17 = uVar16 + 1;
                                puVar22 = puVar21 + 1;
                                *puVar21 = uVar31 * iVar15 >> 0xf;
                                uVar31 = (uint)*(byte *)(param_3 + uVar16);
                                if (0x7f < *(byte *)(param_3 + uVar16)) goto LAB_0022eef4;
                              }
                            }
                            *puVar22 = uVar31 * iVar15 >> 0xf;
                            for (; uVar17 != uVar28; uVar17 = uVar17 + 4) {
                              if (0x7f < *(byte *)(param_3 + uVar17)) goto LAB_0022eef4;
                              puVar22[1] = (uint)*(byte *)(param_3 + uVar17) * iVar15 >> 0xf;
                              bVar8 = *(byte *)(param_3 + (uVar17 + 1));
                              if (0x7f < bVar8) goto LAB_0022eef4;
                              puVar22[2] = (uint)bVar8 * iVar15 >> 0xf;
                              bVar8 = *(byte *)(param_3 + (uVar17 + 2));
                              if (0x7f < bVar8) goto LAB_0022eef4;
                              puVar22[3] = (uint)bVar8 * iVar15 >> 0xf;
                              bVar8 = *(byte *)(param_3 + (uVar17 + 3));
                              if (0x7f < bVar8) goto LAB_0022eef4;
                              puVar22[4] = (uint)bVar8 * iVar15 >> 0xf;
                              puVar22 = puVar22 + 4;
                            }
                          }
                          if (uVar28 == uVar27 + uVar11) {
                            lVar24 = *DAT_00580e50;
                            DAT_00580e58 = (*(byte *)(lVar24 + (ulong)DAT_00580cfc + 1) & 0x7f) +
                                           (*(byte *)(lVar24 + (ulong)DAT_00580cfc) & 0x7f) * 0x80;
                            DAT_00580e68 = lVar24 + (ulong)(DAT_00580cfc + 10);
                            DAT_00580e5a = (*(byte *)(lVar24 + (ulong)(DAT_00580cfc + 2) + 1) & 0x7f
                                           ) + (*(byte *)(lVar24 + (ulong)(DAT_00580cfc + 2)) & 0x7f
                                               ) * 0x80;
                            iVar12 = (*(byte *)(lVar24 + (ulong)(DAT_00580cfc + 4) + 1) & 0x7f) +
                                     (*(byte *)(lVar24 + (ulong)(DAT_00580cfc + 4)) & 0x7f) * 0x80;
                            DAT_00580e5c = (undefined2)iVar12;
                            DAT_00580e5e = (*(byte *)(lVar24 + (ulong)(DAT_00580cfc + 6) + 1) & 0x7f
                                           ) + (*(byte *)(lVar24 + (ulong)(DAT_00580cfc + 6)) & 0x7f
                                               ) * 0x80;
                            DAT_005802b4 = 0;
                            DAT_00580e60 = (*(byte *)(lVar24 + (ulong)(DAT_00580cfc + 8) + 1) & 0x7f
                                           ) + (*(byte *)(lVar24 + (ulong)(DAT_00580cfc + 8)) & 0x7f
                                               ) * 0x80;
                            DAT_005802b8 = 0;
                            DAT_00580d98 = 0;
                            DAT_00580d99 = 0;
                            DAT_00580d9a = 0;
                            DAT_00581040 = 0;
                            DAT_00581043 = 1;
                            DAT_00581042 = 0;
                            DAT_005802bc = 0;
                            if ((DAT_00580e58 == 0) && (DAT_005802bc = iVar12, DAT_00580ddc == '\0')
                               ) {
                              DAT_005802bc = 0;
                            }
                            DAT_005802a8 = 2;
                            uVar11 = 0;
                            DAT_00580ddc = DAT_00580d0c != 0;
                            DAT_005802ac = 0;
                            goto switchD_0022e998_default;
                          }
                        }
                      }
                      else {
                        pbVar1 = (byte *)(param_3 + uVar26);
                        if (*pbVar1 < 0x80) {
                          uVar26 = (ulong)(uVar31 + 3);
                          iVar12 = DAT_00580cf4 * 0x102;
                          DAT_005802dc = (uint)*pbVar1 * iVar12 >> 0xf;
                          bVar8 = *(byte *)(param_3 + (uVar31 + 2));
                          uVar25 = (ulong)bVar8;
                          if (bVar8 < 0x80) {
                            lVar24 = (ulong)(DAT_005802d3 - 2) + 7;
                            uVar9 = lVar24 * 8 - 0x38U >> 3 & 3;
                            puVar13 = (undefined4 *)&DAT_005802e0;
                            if (uVar9 == 0) {
LAB_0022f5f4:
                              do {
                                *(undefined2 *)puVar13 = *(undefined2 *)(&DAT_0052d930 + uVar25 * 2)
                                ;
                                if (puVar13 == &DAT_005802a8 + lVar24 * 2) goto LAB_0022f7e8;
                                iVar15 = (int)uVar26;
                                if (0x7f < *(byte *)(param_3 + uVar26)) goto LAB_0022eef4;
                                puVar13[1] = (uint)*(byte *)(param_3 + uVar26) * iVar12 >> 0xf;
                                bVar8 = *(byte *)(param_3 + (iVar15 + 1));
                                if (0x7f < bVar8) goto LAB_0022eef4;
                                *(undefined2 *)(puVar13 + 2) =
                                     *(undefined2 *)(&DAT_0052d930 + (ulong)bVar8 * 2);
                                bVar8 = *(byte *)(param_3 + (iVar15 + 2));
                                if (0x7f < bVar8) goto LAB_0022eef4;
                                puVar13[3] = (uint)bVar8 * iVar12 >> 0xf;
                                bVar8 = *(byte *)(param_3 + (iVar15 + 3));
                                if (0x7f < bVar8) goto LAB_0022eef4;
                                *(undefined2 *)(puVar13 + 4) =
                                     *(undefined2 *)(&DAT_0052d930 + (ulong)bVar8 * 2);
                                bVar8 = *(byte *)(param_3 + (iVar15 + 4));
                                if (0x7f < bVar8) goto LAB_0022eef4;
                                puVar13[5] = (uint)bVar8 * iVar12 >> 0xf;
                                bVar8 = *(byte *)(param_3 + (iVar15 + 5));
                                if (0x7f < bVar8) goto LAB_0022eef4;
                                *(undefined2 *)(puVar13 + 6) =
                                     *(undefined2 *)(&DAT_0052d930 + (ulong)bVar8 * 2);
                                bVar8 = *(byte *)(param_3 + (iVar15 + 6));
                                if (0x7f < bVar8) goto LAB_0022eef4;
                                uVar26 = (ulong)(iVar15 + 8);
                                puVar13[7] = (uint)bVar8 * iVar12 >> 0xf;
                                bVar8 = *(byte *)(param_3 + (iVar15 + 7));
                                uVar25 = (ulong)bVar8;
                                puVar13 = puVar13 + 8;
                              } while (bVar8 < 0x80);
                              uVar11 = 0xfffffffd;
                              goto switchD_0022e998_default;
                            }
                            DAT_005802e0 = *(undefined2 *)(&DAT_0052d930 + uVar25 * 2);
                            pbVar1 = (byte *)(param_3 + uVar26);
                            if (*pbVar1 < 0x80) {
                              uVar26 = (ulong)(uVar31 + 5);
                              DAT_005802e4 = (uint)*pbVar1 * iVar12 >> 0xf;
                              puVar13 = (undefined4 *)&DAT_005802e8;
                              bVar8 = *(byte *)(param_3 + (uVar31 + 4));
                              uVar25 = (ulong)bVar8;
                              if (bVar8 < 0x80) {
                                if (uVar9 == 1) goto LAB_0022f5f4;
                                if (uVar9 == 2) {
LAB_0022f5b8:
                                  *(undefined2 *)puVar13 =
                                       *(undefined2 *)(&DAT_0052d930 + uVar25 * 2);
                                  iVar15 = (int)uVar26;
                                  pbVar1 = (byte *)(param_3 + uVar26);
                                  if (*pbVar1 < 0x80) {
                                    uVar26 = (ulong)(iVar15 + 2);
                                    puVar13[1] = (uint)*pbVar1 * iVar12 >> 0xf;
                                    bVar8 = *(byte *)(param_3 + (iVar15 + 1));
                                    uVar25 = (ulong)bVar8;
                                    puVar13 = puVar13 + 2;
                                    if (bVar8 < 0x80) goto LAB_0022f5f4;
                                  }
                                }
                                else {
                                  DAT_005802e8 = *(undefined2 *)(&DAT_0052d930 + uVar25 * 2);
                                  pbVar1 = (byte *)(param_3 + uVar26);
                                  if (*pbVar1 < 0x80) {
                                    uVar26 = (ulong)(uVar31 + 7);
                                    puVar13 = (undefined4 *)&DAT_005802f0;
                                    DAT_005802ec = (uint)*pbVar1 * iVar12 >> 0xf;
                                    bVar8 = *(byte *)(param_3 + (uVar31 + 6));
                                    uVar25 = (ulong)bVar8;
                                    if (bVar8 < 0x80) goto LAB_0022f5b8;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  else if (*(byte *)(param_3 + uVar16) < 0x80) {
                    iVar12 = DAT_00580cf4 * 0x102;
                    DAT_005806e8 = (uint)*(byte *)(param_3 + uVar16) * iVar12 >> 0xf;
                    bVar8 = *(byte *)(param_3 + (uVar28 + 2) + 1);
                    uVar23 = (ushort)bVar8;
                    bVar7 = *(byte *)(param_3 + (uVar28 + 2));
                    uVar14 = (ushort)bVar7;
                    if ((bVar8 < 0x80) && (bVar7 < 0x80)) {
                      uVar31 = (uVar28 - 2) + (uint)DAT_005806dc * 3;
                      puVar19 = &DAT_005806ec;
                      if ((uVar31 - uVar16 & 1) != 0) goto LAB_0022f378;
                      uVar16 = uVar28 + 4;
                      DAT_005806ec = (ushort)bVar7 | (ushort)bVar8 << 7;
                      if (*(byte *)(param_3 + uVar16) < 0x80) {
                        pbVar1 = (byte *)(param_3 + (uVar28 + 5));
                        DAT_005806f0 = (uint)*(byte *)(param_3 + uVar16) * iVar12 >> 0xf;
                        puVar20 = &DAT_005806f4;
                        uVar23 = (ushort)pbVar1[1];
                        bVar8 = *pbVar1;
                        if (0x7f < uVar23) {
                          uVar11 = 0xfffffffd;
                          goto switchD_0022e998_default;
                        }
                        while( true ) {
                          uVar14 = (ushort)bVar8;
                          puVar19 = puVar20;
                          if (0x7f < uVar14) {
                            uVar11 = 0xfffffffd;
                            goto switchD_0022e998_default;
                          }
LAB_0022f378:
                          *puVar19 = uVar14 | uVar23 << 7;
                          if (uVar16 + 3 == uVar31) goto LAB_0022f4ac;
                          bVar8 = *(byte *)(param_3 + (uVar16 + 3));
                          if (0x7f < bVar8) break;
                          *(uint *)(puVar19 + 2) = (uint)bVar8 * iVar12 >> 0xf;
                          bVar8 = *(byte *)(param_3 + (uVar16 + 4) + 1);
                          bVar7 = *(byte *)(param_3 + (uVar16 + 4));
                          if ((0x7f < bVar8) || (0x7f < bVar7)) break;
                          puVar19[4] = (ushort)bVar7 | (ushort)bVar8 << 7;
                          uVar28 = uVar16 + 7;
                          bVar8 = *(byte *)(param_3 + (uVar16 + 6));
                          if (0x7f < bVar8) break;
                          puVar20 = puVar19 + 8;
                          *(uint *)(puVar19 + 6) = (uint)bVar8 * iVar12 >> 0xf;
                          uVar16 = uVar16 + 6;
                          uVar23 = (ushort)*(byte *)(param_3 + uVar28 + 1);
                          bVar8 = *(byte *)(param_3 + uVar28);
                          if (0x7f < uVar23) break;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LAB_0022eef4:
        uVar11 = 0xfffffffd;
        goto switchD_0022e998_default;
      }
    }
    break;
  case 1:
    if (param_2 == 0) {
      if (DAT_005802a8 == 2) {
        uVar11 = 0;
        DAT_005802d0 = 0;
        DAT_005802d2 = 0;
        DAT_00580cf0 = 1;
        DAT_00580cf1 = 1;
        DAT_005802a8 = 1;
        DAT_005802ac = 1;
        DAT_005802c8 = 0;
        DAT_005802cc = 0;
        DAT_00580cf4 = 0;
        DAT_005802d3 = DAT_005802d2;
        DAT_005806dc = DAT_005802d2;
        DAT_00580ae8 = DAT_005802d2;
        DAT_00580cf8 = DAT_005802d2;
        DAT_00580d14 = DAT_005802d2;
        goto switchD_0022e998_default;
      }
LAB_0022f480:
      uVar11 = 0xffffffff;
      goto switchD_0022e998_default;
    }
    break;
  case 2:
    if (DAT_005802a8 != 1) goto LAB_0022f480;
    if (param_2 - 0x80 < 0x10) {
      if (*(byte *)param_3 < 3) {
        if ((*(byte *)param_3 == 2) && (DAT_00580e30 == 0)) {
          uVar11 = 0xfffffffb;
          goto switchD_0022e998_default;
        }
        if (((((((*(byte *)(param_3 + 2) < 0x80) && (*(byte *)(param_3 + 1) < 0x80)) &&
               (*(byte *)(param_3 + 4) < 0x80)) &&
              ((*(byte *)(param_3 + 3) < 0x80 && (-1 < *(char *)(param_3 + 0x13))))) &&
             ((bVar7 = *(byte *)(param_3 + 0x1b), (bVar7 - 0xf & 0xf7) != 0 &&
              ((bVar7 < 0x1f && (DAT_00580e94 = bVar7, *(byte *)(param_3 + 6) < 0x80)))))) &&
            ((*(byte *)(param_3 + 5) < 0x80 &&
             ((((((-1 < *(char *)(param_3 + 0x14) &&
                  (bVar7 = *(byte *)(param_3 + 0x1c), (bVar7 - 0xf & 0xf7) != 0)) && (bVar7 < 0x1f))
                && (((DAT_00580e95 = bVar7, *(byte *)(param_3 + 8) < 0x80 &&
                     (*(byte *)(param_3 + 7) < 0x80)) &&
                    ((-1 < *(char *)(param_3 + 0x15) &&
                     ((bVar7 = *(byte *)(param_3 + 0x1d), (bVar7 - 0xf & 0xf7) != 0 &&
                      (bVar7 < 0x1f)))))))) &&
               (DAT_00580e96 = bVar7, *(byte *)(param_3 + 10) < 0x80)) &&
              (((*(byte *)(param_3 + 9) < 0x80 && (-1 < *(char *)(param_3 + 0x16))) &&
               (bVar7 = *(byte *)(param_3 + 0x1e), (bVar7 - 0xf & 0xf7) != 0)))))))) &&
           (((((bVar7 < 0x1f && (DAT_00580e97 = bVar7, *(byte *)(param_3 + 0xc) < 0x80)) &&
              (((*(byte *)(param_3 + 0xb) < 0x80 &&
                ((-1 < *(char *)(param_3 + 0x17) &&
                 (bVar7 = *(byte *)(param_3 + 0x1f), (bVar7 - 0xf & 0xf7) != 0)))) && (bVar7 < 0x1f)
               ))) && (((((((DAT_00580e98 = bVar7, *(byte *)(param_3 + 0xe) < 0x80 &&
                            (*(byte *)(param_3 + 0xd) < 0x80)) && (-1 < *(char *)(param_3 + 0x18)))
                          && ((bVar7 = *(byte *)(param_3 + 0x20), (bVar7 - 0xf & 0xf7) != 0 &&
                              (bVar7 < 0x1f)))) &&
                         (DAT_00580e99 = bVar7, *(byte *)(param_3 + 0x10) < 0x80)) &&
                        (((*(byte *)(param_3 + 0xf) < 0x80 && (-1 < *(char *)(param_3 + 0x19))) &&
                         ((bVar7 = *(byte *)(param_3 + 0x21), (bVar7 - 0xf & 0xf7) != 0 &&
                          (((bVar7 < 0x1f &&
                            (DAT_00580e9a = bVar7, *(byte *)(param_3 + 0x12) < 0x80)) &&
                           (*(byte *)(param_3 + 0x11) < 0x80)))))))) &&
                       ((-1 < *(char *)(param_3 + 0x1a) &&
                        (bVar7 = *(byte *)(param_3 + 0x22), (bVar7 - 0xf & 0xf7) != 0)))))) &&
            ((bVar7 < 0x1f &&
             (((DAT_00580e9b = bVar7, *(byte *)(param_3 + 0x24) < 0x80 &&
               (bVar10 = 0x7f < *(byte *)(param_3 + 0x23), uVar11 = (uint)bVar10, !bVar10)) &&
              (*(byte *)(param_3 + 0x25) < 2)))))))) {
          (&DAT_00580ea8)[param_2 - 0x70] = param_3;
          if (param_2 == bVar8) {
            FUN_0022ceac();
          }
          goto switchD_0022e998_default;
        }
      }
      goto LAB_0022eef4;
    }
    break;
  case 3:
    if (param_2 == 0) {
      uVar11 = FUN_0022ceac(param_3 & 0xffffffff);
      goto switchD_0022e998_default;
    }
    break;
  case 4:
    if (param_2 == 0) {
      if (1 < DAT_005802a8 - 1U) goto LAB_0022f480;
      if (uVar27 < 0x4000) {
        if ((int)uVar27 < 0) {
          uVar27 = 0;
        }
        if (0x3fff < (int)uVar27) {
          uVar27 = 0x3fff;
        }
        iVar12 = (uVar27 - 0x2000) * (int)DAT_00580de0;
        if (iVar12 < 0) {
          DAT_00580de4 = -(-iVar12 >> 0xd);
          if (DAT_00580de4 < -0x960) {
            DAT_00580de4 = -0x960;
          }
          if (0x960 < DAT_00580de4) {
            DAT_00580de4 = 0x960;
          }
        }
        else {
          DAT_00580de4 = iVar12 >> 0xd;
          if (0x960 < DAT_00580de4) {
            DAT_00580de4 = 0x960;
          }
        }
        uVar11 = 0;
        goto switchD_0022e998_default;
      }
    }
    break;
  case 5:
    if (param_2 == 0) {
      uVar11 = 0xffffffff;
      if ((DAT_005802a8 - 1U < 2) && (uVar11 = 0xfffffffe, uVar27 < 0x19)) {
        DAT_00580de0 = (short)param_3 * 100;
        uVar11 = param_2;
      }
      goto switchD_0022e998_default;
    }
    break;
  case 6:
    if (param_2 == 0) {
      uVar11 = 0xffffffff;
      if ((DAT_005802a8 - 1U < 2) && (uVar11 = 0xfffffffe, uVar27 < 0x3d)) {
        DAT_00580de8 = (short)param_3 * 100;
        uVar11 = param_2;
      }
      goto switchD_0022e998_default;
    }
    break;
  default:
    goto switchD_0022e998_default;
  }
  uVar11 = 0xfffffffe;
switchD_0022e998_default:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}

