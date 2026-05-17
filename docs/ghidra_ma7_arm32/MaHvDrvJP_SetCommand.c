/* MaHvDrvJP_SetCommand @ 000e064c 3778B */


/* YAMAHA::MaHvDrvJP_SetCommand(unsigned int, unsigned int, unsigned int) */

undefined4 YAMAHA::MaHvDrvJP_SetCommand(uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  ushort uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  byte bVar25;
  short sVar26;
  uint uVar27;
  undefined2 uVar28;
  undefined1 *puVar29;
  int iVar30;
  int iVar31;
  byte *pbVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  uint *puVar36;
  int iVar37;
  undefined4 *puVar38;
  int local_30 [3];
  
  iVar18 = DAT_000e1404;
  switch(param_1) {
  case 0:
    if (param_2 != 0) {
      return 0xfffffffe;
    }
    if ((*(int *)(DAT_000e13fc + 0xe069a) == 1) && (*(int *)(DAT_000e13fc + 0xe11de) != 0)) {
      if (param_3 == 0) {
        return 0xfffffffe;
      }
      bVar25 = *(byte *)param_3;
      if (bVar25 < 0x80) {
        *(undefined1 *)(DAT_000e13fc + 0xe10e2) = 1;
        local_30[0] = (short)(ushort)bVar25 * 100 + -0x4b0;
        uVar9 = SignedSaturate(local_30[0],0xf);
        SignedDoesSaturate(local_30[0],0xf);
        uVar28 = (undefined2)uVar9;
      }
      else {
        if ((bVar25 & 0x7f) == 0) {
          uVar28 = 0x8000;
          local_30[0] = -0x8000;
        }
        else {
          local_30[0] = ((bVar25 & 0x7f) - 0x3c) * 100;
          uVar9 = SignedSaturate(local_30[0],0xf);
          SignedDoesSaturate(local_30[0],0xf);
          uVar28 = (undefined2)uVar9;
        }
        *(undefined1 *)(DAT_000e1400 + 0xe1126) = 0;
      }
      iVar18 = DAT_000e1420;
      *(undefined2 *)(DAT_000e1420 + 0xe09cc) = uVar28;
      if (0x7f < *(byte *)(param_3 + 1)) {
        return 0xfffffffd;
      }
      *(undefined1 *)(iVar18 + 0xe09ce) =
           *(undefined1 *)((uint)*(byte *)(param_3 + 1) + DAT_000e1424 + 0xe17a0);
      iVar18 = DAT_000e1428;
      uVar15 = (uint)*(byte *)(param_3 + 2);
      if (uVar15 < 0x80) {
        iVar10 = 1;
        iVar37 = 0;
      }
      else {
        iVar37 = uVar15 - 0x80;
        uVar15 = (uint)*(byte *)(param_3 + 3);
        iVar37 = iVar37 * 0x80;
        if (uVar15 < 0x80) {
          iVar10 = 2;
        }
        else {
          iVar10 = uVar15 - 0x80;
          uVar15 = (uint)*(byte *)(param_3 + 4);
          iVar37 = (iVar37 + iVar10) * 0x80;
          if (uVar15 < 0x80) {
            iVar10 = 3;
          }
          else {
            iVar10 = uVar15 - 0x80;
            uVar15 = (uint)*(byte *)(param_3 + 5);
            iVar37 = (iVar37 + iVar10) * 0x80;
            if (0x7f < uVar15) {
              return 0xfffffffd;
            }
            iVar10 = 4;
          }
        }
      }
      uVar15 = iVar37 + uVar15;
      iVar31 = iVar10 + 2;
      iVar37 = param_3 + iVar31;
      *(uint *)(DAT_000e1428 + 0xe0a52) = uVar15;
      *(bool *)(iVar18 + 0xe147b) = uVar15 != 0;
      iVar18 = DAT_000e142c;
      uVar27 = (uint)*(byte *)(param_3 + iVar31);
      if (uVar27 < 0x80) {
        iVar16 = 0;
        iVar37 = 1;
      }
      else {
        iVar16 = uVar27 - 0x80;
        uVar27 = (uint)*(byte *)(iVar37 + 1);
        iVar16 = iVar16 * 0x80;
        if (uVar27 < 0x80) {
          iVar37 = 2;
        }
        else {
          iVar13 = uVar27 - 0x80;
          uVar27 = (uint)*(byte *)(iVar37 + 2);
          iVar16 = (iVar16 + iVar13) * 0x80;
          if (uVar27 < 0x80) {
            iVar37 = 3;
          }
          else {
            iVar13 = uVar27 - 0x80;
            uVar27 = (uint)*(byte *)(iVar37 + 3);
            iVar16 = (iVar16 + iVar13) * 0x80;
            if (0x7f < uVar27) {
              return 0xfffffffd;
            }
            iVar37 = 4;
          }
        }
      }
      uVar27 = uVar27 + iVar16;
      iVar31 = iVar37 + iVar31;
      pbVar32 = (byte *)(iVar31 + param_3);
      if (uVar27 < 4) {
        uVar11 = uVar27;
        if (uVar27 == 0) {
          return 0xfffffffd;
        }
      }
      else {
        uVar11 = 4;
      }
      iVar16 = 0;
      uVar19 = 1;
      bVar25 = *pbVar32;
      while (uVar17 = (uint)bVar25, 0x7f < uVar17) {
        bVar2 = uVar11 <= uVar19;
        iVar16 = (iVar16 + uVar17 + -0x80) * 0x80;
        bVar1 = 3 < uVar19;
        uVar19 = uVar19 + 1;
        if (bVar1 || bVar2) {
          return 0xfffffffd;
        }
        pbVar32 = pbVar32 + 1;
        bVar25 = *pbVar32;
      }
      uVar17 = uVar17 + iVar16;
      iVar16 = iVar31 + uVar19;
      *(uint *)(DAT_000e142c + 0xe0b08) = uVar17;
      if (uVar15 < uVar17) {
        if (uVar15 != 0) {
          return 0xfffffffd;
        }
      }
      else {
        *(uint *)(iVar18 + 0xe1530) = uVar15 - uVar17;
      }
      iVar18 = DAT_000e1430;
      bVar25 = *(byte *)(param_3 + iVar16);
      uVar15 = (uint)bVar25;
      iVar13 = iVar16 + 1;
      if (0x7e < uVar15 - 1) {
        return 0xfffffffd;
      }
      iVar33 = DAT_000e1430 + 0xe0b0c;
      iVar10 = uVar19 + iVar37 + iVar10 + param_3;
      uVar19 = DAT_000e1430 + 0xe1571;
      uVar11 = DAT_000e1430 + 0xe1569;
      *(byte *)(DAT_000e1430 + 0xe1568) = bVar25;
      if (((iVar10 + 3U | uVar11) & 7) == 0 &&
          (10 < uVar15 && (iVar10 + 0xbU <= uVar11 || uVar19 <= iVar10 + 3U))) {
        uVar11 = (uint)(bVar25 >> 3);
        uVar9 = *(undefined4 *)(iVar10 + 3);
        uVar19 = uVar11 * 8;
        *(undefined4 *)(iVar18 + 0xe156d) = *(undefined4 *)(iVar10 + 7);
        *(undefined4 *)(iVar18 + 0xe1569) = uVar9;
        if (1 < uVar11) {
          uVar9 = *(undefined4 *)(iVar10 + 0xb);
          *(undefined4 *)(iVar18 + 0xe1575) = *(undefined4 *)(iVar10 + 0xf);
          *(undefined4 *)(iVar18 + 0xe1571) = uVar9;
          if (2 < uVar11) {
            uVar9 = *(undefined4 *)(iVar10 + 0x17);
            *(undefined4 *)(iVar18 + 0xe1579) = *(undefined4 *)(iVar10 + 0x13);
            *(undefined4 *)((int)&DAT_000e157c + iVar18 + 1) = uVar9;
            if (3 < uVar11) {
              uVar9 = *(undefined4 *)(iVar10 + 0x1f);
              *(undefined4 *)((int)&DAT_000e1580 + iVar18 + 1) = *(undefined4 *)(iVar10 + 0x1b);
              *(undefined4 *)(MaHvDrvJP_Generate + iVar18 + 1) = uVar9;
              if (4 < uVar11) {
                uVar9 = *(undefined4 *)(iVar10 + 0x27);
                *(undefined4 *)(iVar18 + 0xe1589) = *(undefined4 *)(iVar10 + 0x23);
                *(undefined4 *)(iVar18 + 0xe158d) = uVar9;
                if (5 < uVar11) {
                  uVar9 = *(undefined4 *)(iVar10 + 0x2f);
                  *(undefined4 *)(iVar18 + 0xe1591) = *(undefined4 *)(iVar10 + 0x2b);
                  *(undefined4 *)(iVar18 + 0xe1595) = uVar9;
                  if (6 < uVar11) {
                    uVar9 = *(undefined4 *)(iVar10 + 0x37);
                    *(undefined4 *)(iVar18 + 0xe1599) = *(undefined4 *)(iVar10 + 0x33);
                    *(undefined4 *)(iVar18 + 0xe159d) = uVar9;
                    if (7 < uVar11) {
                      uVar9 = *(undefined4 *)(iVar10 + 0x3f);
                      *(undefined4 *)(iVar18 + 0xe15a1) = *(undefined4 *)(iVar10 + 0x3b);
                      *(undefined4 *)(iVar18 + 0xe15a5) = uVar9;
                      iVar18 = DAT_000e1434;
                      if (8 < uVar11) {
                        uVar9 = *(undefined4 *)(iVar10 + 0x47);
                        *(undefined4 *)(DAT_000e1434 + 0xe16b3) = *(undefined4 *)(iVar10 + 0x43);
                        *(undefined4 *)(iVar18 + 0xe16b7) = uVar9;
                        if (9 < uVar11) {
                          uVar9 = *(undefined4 *)(iVar10 + 0x4f);
                          *(undefined4 *)(iVar18 + 0xe16bb) = *(undefined4 *)(iVar10 + 0x4b);
                          *(undefined4 *)(iVar18 + 0xe16bf) = uVar9;
                          if (10 < uVar11) {
                            uVar9 = *(undefined4 *)(iVar10 + 0x57);
                            *(undefined4 *)(iVar18 + 0xe16c3) = *(undefined4 *)(iVar10 + 0x53);
                            *(undefined4 *)(iVar18 + 0xe16c7) = uVar9;
                            if (0xb < uVar11) {
                              uVar9 = *(undefined4 *)(iVar10 + 0x5f);
                              *(undefined4 *)(iVar18 + 0xe16cb) = *(undefined4 *)(iVar10 + 0x5b);
                              *(undefined4 *)(iVar18 + 0xe16cf) = uVar9;
                              if (0xc < uVar11) {
                                uVar9 = *(undefined4 *)(iVar10 + 0x67);
                                *(undefined4 *)(iVar18 + 0xe16d3) = *(undefined4 *)(iVar10 + 99);
                                *(undefined4 *)(iVar18 + 0xe16d7) = uVar9;
                                if (0xd < uVar11) {
                                  uVar9 = *(undefined4 *)(iVar10 + 0x6f);
                                  *(undefined4 *)(iVar18 + 0xe16db) = *(undefined4 *)(iVar10 + 0x6b)
                                  ;
                                  *(undefined4 *)(iVar18 + 0xe16df) = uVar9;
                                  if (0xe < uVar11) {
                                    uVar9 = *(undefined4 *)(iVar10 + 0x77);
                                    *(undefined4 *)(iVar18 + 0xe16e3) =
                                         *(undefined4 *)(iVar10 + 0x73);
                                    *(undefined4 *)(iVar18 + 0xe16e7) = uVar9;
                                    if (0xf < uVar11) {
                                      uVar9 = *(undefined4 *)(iVar10 + 0x7f);
                                      *(undefined4 *)(iVar18 + 0xe16eb) =
                                           *(undefined4 *)(iVar10 + 0x7b);
                                      *(undefined4 *)(iVar18 + 0xe16ef) = uVar9;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        iVar18 = param_3 + iVar13;
        if (uVar15 != uVar19) {
          uVar17 = uVar19 + 1;
          iVar10 = DAT_000e1438 + 0xe0cc0;
          *(undefined1 *)(iVar10 + uVar19 + 0xa5d) = *(undefined1 *)(iVar18 + uVar11 * 8);
          if (uVar17 < uVar15) {
            uVar11 = uVar19 + 2;
            *(undefined1 *)(uVar17 + iVar10 + 0xa5d) = *(undefined1 *)(param_3 + uVar17 + iVar13);
            if (uVar11 < uVar15) {
              uVar17 = uVar19 + 3;
              *(undefined1 *)(iVar10 + uVar11 + 0xa5d) = *(undefined1 *)(iVar18 + uVar11);
              if (uVar17 < uVar15) {
                uVar11 = uVar19 + 4;
                *(undefined1 *)(iVar10 + uVar17 + 0xa5d) = *(undefined1 *)(iVar18 + uVar17);
                if (uVar11 < uVar15) {
                  uVar17 = uVar19 + 5;
                  *(undefined1 *)(iVar10 + uVar11 + 0xa5d) = *(undefined1 *)(iVar18 + uVar11);
                  if (uVar17 < uVar15) {
                    uVar19 = uVar19 + 6;
                    *(undefined1 *)(uVar17 + iVar10 + 0xa5d) = *(undefined1 *)(iVar18 + uVar17);
                    if (uVar19 < uVar15) {
                      *(undefined1 *)(iVar10 + uVar19 + 0xa5d) = *(undefined1 *)(iVar18 + uVar19);
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar11 = iVar16 + param_3;
        puVar29 = (undefined1 *)(uVar11 + uVar15);
        iVar33 = iVar33 - uVar11;
        puVar20 = (undefined1 *)(uVar11 + 1);
        uVar19 = (uint)(puVar29 + ~uVar11) & 7;
        puVar20[iVar33 + 0xa5c] = *puVar20;
        if (puVar20 != puVar29) {
          if (uVar19 != 0) {
            if (uVar19 != 1) {
              if (uVar19 != 2) {
                if (uVar19 != 3) {
                  if (uVar19 != 4) {
                    if (uVar19 != 5) {
                      if (uVar19 != 6) {
                        puVar20 = (undefined1 *)(uVar11 + 2);
                        puVar20[iVar33 + 0xa5c] = *puVar20;
                      }
                      puVar20 = puVar20 + 1;
                      puVar20[iVar33 + 0xa5c] = *puVar20;
                    }
                    puVar20 = puVar20 + 1;
                    puVar20[iVar33 + 0xa5c] = *puVar20;
                  }
                  puVar20 = puVar20 + 1;
                  puVar20[iVar33 + 0xa5c] = *puVar20;
                }
                puVar20 = puVar20 + 1;
                puVar20[iVar33 + 0xa5c] = *puVar20;
              }
              puVar20 = puVar20 + 1;
              puVar20[iVar33 + 0xa5c] = *puVar20;
            }
            puVar20 = puVar20 + 1;
            puVar20[iVar33 + 0xa5c] = *puVar20;
            if (puVar20 == puVar29) goto LAB_000e0d32;
          }
          do {
            (puVar20 + 1)[iVar33 + 0xa5c] = puVar20[1];
            (puVar20 + 2)[iVar33 + 0xa5c] = puVar20[2];
            puVar20[iVar33 + 0xa5f] = puVar20[3];
            puVar20[iVar33 + 0xa60] = puVar20[4];
            puVar21 = puVar20 + 8;
            puVar20[iVar33 + 0xa61] = puVar20[5];
            puVar20[iVar33 + 0xa62] = puVar20[6];
            puVar20[iVar33 + 0xa63] = puVar20[7];
            puVar21[iVar33 + 0xa5c] = puVar20[8];
            puVar20 = puVar21;
          } while (puVar21 != puVar29);
        }
      }
LAB_000e0d32:
      iVar18 = DAT_000e1440;
      uVar11 = 0;
      *(undefined1 *)(DAT_000e143c + 0xe1792) = 0;
      do {
        iVar10 = FUN_000dedc4(param_3 + iVar13,uVar15 - uVar11,local_30);
        if (iVar10 < 0) {
          return 0xfffffffd;
        }
        uVar19 = (uint)*(byte *)(iVar18 + 0xe1798);
        if (1 < uVar19) {
          return 0xfffffffd;
        }
        piVar24 = *(int **)(iVar18 + 0xe188c);
        iVar13 = iVar13 + local_30[0];
        uVar11 = uVar11 + local_30[0];
        iVar37 = *piVar24 + iVar10 + 10;
        bVar6 = *(byte *)(*piVar24 + iVar10 + 10);
        bVar4 = *(byte *)(iVar37 + 1);
        bVar5 = *(byte *)(iVar37 + 2);
        bVar25 = *(byte *)(iVar37 + 3);
        *(char *)(iVar18 + 0xe1798) = (char)(uVar19 + 1);
        *(uint *)(iVar18 + uVar19 * 4 + 0xe179c) =
             (bVar25 & 0x7f) +
             ((bVar5 & 0x7f) + ((bVar4 & 0x7f) + (bVar6 & 0x7f) * 0x80) * 0x80) * 0x80;
        if ((uVar19 + 1 & 0xff) == 2) {
          iVar13 = (iVar13 + uVar15) - uVar11;
          iVar18 = 2;
          goto LAB_000e0dce;
        }
      } while (uVar11 < uVar15);
      iVar18 = 1;
LAB_000e0dce:
      if (*(char *)(DAT_000e1444 + 0xe181f) == '\0') {
        *(undefined4 *)(DAT_000e1444 + 0xe1822) = 8;
      }
      iVar10 = DAT_000e1448;
      iVar37 = iVar13 + 1;
      if (0x7f < *(byte *)(param_3 + iVar13)) {
        return 0xfffffffd;
      }
      bVar25 = *(byte *)(param_3 + iVar13) + 1;
      iVar16 = DAT_000e1448 + 0xe0dfe;
      *(undefined4 *)(DAT_000e1448 + 0xe1236) = 0;
      *(byte *)(iVar10 + 0xe1232) = bVar25;
      *(undefined2 *)(iVar10 + 0xe123a) = 0x2000;
      if (1 < bVar25) {
        if (0x7f < *(byte *)(param_3 + iVar37)) {
          return 0xfffffffd;
        }
        iVar33 = *(int *)(iVar10 + 0xe184a) * 0x102;
        *(uint *)(iVar10 + 0xe123e) = iVar33 * (uint)*(byte *)(param_3 + iVar37) >> 0xf;
        bVar5 = *(byte *)(param_3 + iVar13 + 2);
        uVar8 = (ushort)bVar5;
        bVar4 = *(byte *)(param_3 + iVar13 + 2 + 1);
        uVar12 = (ushort)bVar4;
        uVar7 = uVar8;
        if (uVar8 < 0x80) {
          uVar7 = uVar12;
        }
        if (0x7f < uVar7) {
          return 0xfffffffd;
        }
        iVar37 = iVar13 + param_3;
        iVar34 = (short)(ushort)bVar25 * 3 + (param_3 - 6) + iVar13;
        iVar13 = iVar37;
        if ((iVar34 - iVar37) * -0x80000000 < 0) {
          *(ushort *)(iVar10 + 0xe1242) = (ushort)bVar5 | (ushort)bVar4 << 7;
          if (0x7f < *(byte *)(iVar37 + 4)) {
            return 0xfffffffd;
          }
          iVar16 = iVar10 + 0xe0e06;
          iVar13 = iVar37 + 3;
          *(uint *)(iVar10 + 0xe1246) = iVar33 * (uint)*(byte *)(iVar37 + 4) >> 0xf;
          uVar8 = (ushort)*(byte *)(iVar37 + 5);
          uVar12 = (ushort)*(byte *)(iVar37 + 6);
          uVar7 = uVar8;
          if (uVar8 < 0x80) {
            uVar7 = uVar12;
          }
          if (0x7f < uVar7) {
            return 0xfffffffd;
          }
        }
        while( true ) {
          iVar37 = (4 - param_3) + iVar13;
          *(ushort *)(iVar16 + 0x444) = uVar8 | uVar12 << 7;
          if (iVar13 == iVar34) break;
          if (0x7f < *(byte *)(iVar13 + 4)) {
            return 0xfffffffd;
          }
          *(uint *)(iVar16 + 0x448) = iVar33 * (uint)*(byte *)(iVar13 + 4) >> 0xf;
          bVar25 = *(byte *)(iVar13 + 5);
          bVar4 = bVar25;
          if (bVar25 < 0x80) {
            bVar4 = *(byte *)(iVar13 + 6);
          }
          if (0x7f < bVar4) {
            return 0xfffffffd;
          }
          *(ushort *)(iVar16 + 0x44c) = (ushort)bVar25 | (ushort)*(byte *)(iVar13 + 6) << 7;
          if (0x7f < *(byte *)(iVar13 + 7)) {
            return 0xfffffffd;
          }
          *(uint *)(iVar16 + 0x450) = iVar33 * (uint)*(byte *)(iVar13 + 7) >> 0xf;
          uVar8 = (ushort)*(byte *)(iVar13 + 8);
          uVar12 = (ushort)*(byte *)(iVar13 + 9);
          uVar7 = uVar8;
          if (uVar8 < 0x80) {
            uVar7 = uVar12;
          }
          iVar16 = iVar16 + 0x10;
          iVar13 = iVar13 + 6;
          if (0x7f < uVar7) {
            return 0xfffffffd;
          }
        }
      }
      iVar10 = DAT_000e144c;
      iVar16 = iVar37 + 1;
      if (0x7f < *(byte *)(param_3 + iVar37)) {
        return 0xfffffffd;
      }
      bVar25 = *(byte *)(param_3 + iVar37) + 1;
      uVar15 = (uint)bVar25;
      iVar13 = DAT_000e144c + 0xe105a;
      *(undefined4 *)(DAT_000e144c + 0xe1086) = 0;
      *(byte *)(iVar10 + 0xe1085) = bVar25;
      *(undefined2 *)(iVar10 + 0xe108a) = 0;
      if (uVar15 < 2) {
LAB_000e1218:
        iVar10 = DAT_000e1454;
        uVar15 = (uint)*(byte *)(param_3 + iVar16);
        iVar37 = iVar16 + 1;
        if (0x7f < uVar15) {
          return 0xfffffffd;
        }
        *(byte *)(DAT_000e1454 + 0xe1a6c) = *(byte *)(param_3 + iVar16);
        if (uVar15 != 0) {
          uVar11 = (uint)*(byte *)(param_3 + iVar37);
          iVar13 = iVar16 + 2;
          if (0x7f < uVar11) {
            return 0xfffffffd;
          }
          iVar34 = iVar37 + uVar15;
          puVar36 = (uint *)(iVar10 + 0xe1a6c);
          uVar15 = iVar34 - iVar13 & 7;
          iVar33 = *(int *)(iVar10 + 0xe1c78) * 0x102;
          iVar37 = iVar13;
          if (uVar15 != 0) {
            puVar36 = (uint *)(iVar10 + 0xe1a70);
            iVar37 = iVar16 + 3;
            *puVar36 = iVar33 * uVar11 >> 0xf;
            uVar11 = (uint)*(byte *)(iVar13 + param_3);
            if (0x7f < uVar11) {
              return 0xfffffffd;
            }
            if (uVar15 != 1) {
              iVar13 = iVar37;
              if (uVar15 != 2) {
                if (uVar15 != 3) {
                  if (uVar15 != 4) {
                    if (uVar15 != 5) {
                      if (uVar15 != 6) {
                        iVar13 = iVar16 + 4;
                        puVar36 = (uint *)(iVar10 + 0xe1a74);
                        *puVar36 = iVar33 * uVar11 >> 0xf;
                        uVar11 = (uint)*(byte *)(iVar37 + param_3);
                        if (0x7f < uVar11) {
                          return 0xfffffffd;
                        }
                      }
                      iVar37 = iVar13 + 1;
                      puVar36 = puVar36 + 1;
                      *puVar36 = iVar33 * uVar11 >> 0xf;
                      uVar11 = (uint)*(byte *)(iVar13 + param_3);
                      if (0x7f < uVar11) {
                        return 0xfffffffd;
                      }
                    }
                    iVar13 = iVar37 + 1;
                    puVar36 = puVar36 + 1;
                    *puVar36 = iVar33 * uVar11 >> 0xf;
                    uVar11 = (uint)*(byte *)(iVar37 + param_3);
                    if (0x7f < uVar11) {
                      return 0xfffffffd;
                    }
                  }
                  iVar37 = iVar13 + 1;
                  puVar36 = puVar36 + 1;
                  *puVar36 = iVar33 * uVar11 >> 0xf;
                  uVar11 = (uint)*(byte *)(iVar13 + param_3);
                  if (0x7f < uVar11) {
                    return 0xfffffffd;
                  }
                }
                iVar13 = iVar37 + 1;
                puVar36 = puVar36 + 1;
                *puVar36 = iVar33 * uVar11 >> 0xf;
                uVar11 = (uint)*(byte *)(iVar37 + param_3);
                if (0x7f < uVar11) {
                  return 0xfffffffd;
                }
              }
              iVar37 = iVar13 + 1;
              puVar36 = puVar36 + 1;
              *puVar36 = iVar33 * uVar11 >> 0xf;
              uVar11 = (uint)*(byte *)(iVar13 + param_3);
              if (0x7f < uVar11) {
                return 0xfffffffd;
              }
            }
          }
          while( true ) {
            iVar16 = iVar37 + 5;
            iVar13 = iVar37 + 7;
            iVar22 = iVar37 + 1;
            iVar10 = iVar37 + 6;
            iVar35 = iVar37 + 3;
            iVar30 = iVar37 + 4;
            iVar14 = iVar37 + 2;
            puVar36[1] = iVar33 * uVar11 >> 0xf;
            if (iVar37 == iVar34) break;
            pbVar32 = (byte *)(iVar37 + param_3);
            iVar37 = iVar37 + 8;
            if (0x7f < *pbVar32) {
              return 0xfffffffd;
            }
            puVar36[2] = iVar33 * (uint)*pbVar32 >> 0xf;
            uVar15 = (uint)*(byte *)(iVar22 + param_3);
            if (0x7f < uVar15) {
              return 0xfffffffd;
            }
            puVar36[3] = iVar33 * uVar15 >> 0xf;
            uVar15 = (uint)*(byte *)(iVar14 + param_3);
            if (0x7f < uVar15) {
              return 0xfffffffd;
            }
            puVar36[4] = iVar33 * uVar15 >> 0xf;
            uVar15 = (uint)*(byte *)(iVar35 + param_3);
            if (0x7f < uVar15) {
              return 0xfffffffd;
            }
            puVar36[5] = iVar33 * uVar15 >> 0xf;
            uVar15 = (uint)*(byte *)(iVar30 + param_3);
            if (0x7f < uVar15) {
              return 0xfffffffd;
            }
            puVar36[6] = iVar33 * uVar15 >> 0xf;
            uVar15 = (uint)*(byte *)(iVar16 + param_3);
            if (0x7f < uVar15) {
              return 0xfffffffd;
            }
            puVar36[7] = iVar33 * uVar15 >> 0xf;
            uVar15 = (uint)*(byte *)(iVar10 + param_3);
            if (0x7f < uVar15) {
              return 0xfffffffd;
            }
            puVar36 = puVar36 + 8;
            *puVar36 = iVar33 * uVar15 >> 0xf;
            uVar11 = (uint)*(byte *)(iVar13 + param_3);
            if (0x7f < uVar11) {
              return 0xfffffffd;
            }
          }
        }
        iVar10 = DAT_000e157c;
        if (iVar37 != iVar31 + uVar27) {
          return 0xfffffffd;
        }
        iVar37 = *(int *)(DAT_000e157c + 0xe1ec4);
        sVar26 = (*(byte *)(*piVar24 + iVar37 + 1) & 0x7f) +
                 (*(byte *)(*piVar24 + iVar37) & 0x7f) * 0x80;
        *(short *)(DAT_000e157c + 0xe1fb8) = sVar26;
        *(ushort *)(iVar10 + 0xe1fba) =
             (*(byte *)(*piVar24 + iVar37 + 2 + 1) & 0x7f) +
             (*(byte *)(*piVar24 + iVar37 + 2) & 0x7f) * 0x80;
        iVar16 = (*(byte *)(*piVar24 + iVar37 + 4 + 1) & 0x7f) +
                 (*(byte *)(*piVar24 + iVar37 + 4) & 0x7f) * 0x80;
        *(short *)(iVar10 + 0xe1fbc) = (short)iVar16;
        *(ushort *)(iVar10 + 0xe1fbe) =
             (*(byte *)(*piVar24 + iVar37 + 6 + 1) & 0x7f) +
             (*(byte *)(*piVar24 + iVar37 + 6) & 0x7f) * 0x80;
        *(ushort *)(iVar10 + 0xe1fc0) =
             (*(byte *)(*piVar24 + iVar37 + 8 + 1) & 0x7f) +
             (*(byte *)(*piVar24 + iVar37 + 8) & 0x7f) * 0x80;
        iVar31 = *piVar24;
        *(undefined4 *)(iVar10 + 0xe147c) = 0;
        *(undefined4 *)(iVar10 + 0xe1480) = 0;
        *(int *)(iVar10 + 0xe1fc4) = iVar31 + iVar37 + 10;
        iVar37 = DAT_000e1580;
        iVar31 = 0;
        if ((sVar26 == 0) && (iVar31 = iVar16, *(char *)(iVar10 + 0xe1f52) == '\0')) {
          iVar31 = 0;
        }
        puVar38 = (undefined4 *)(DAT_000e1580 + 0xe1534);
        *(int *)(DAT_000e1580 + 0xe1548) = iVar31;
        *puVar38 = 2;
        *(undefined2 *)(iVar37 + 0xe2194) = 0;
        *(undefined1 *)(iVar37 + 0xe2196) = 0;
        *(undefined1 *)(iVar37 + 0xe2014) = 0;
        *(undefined1 *)(iVar37 + 0xe2015) = 0;
        *(undefined4 *)(iVar37 + 0xe1538) = 0;
        *(undefined1 *)(iVar37 + 0xe2197) = 1;
        if (iVar18 != 1) {
          *(undefined1 *)(iVar37 + 0xe2016) = 1;
          return 0;
        }
        *(undefined1 *)(iVar37 + 0xe2016) = 0;
        return 0;
      }
      pbVar32 = (byte *)(param_3 + iVar16);
      if (*pbVar32 < 0x80) {
        iVar16 = iVar37 + 3;
        iVar33 = *(int *)(iVar10 + 0xe1aa6) * 0x102;
        *(uint *)(iVar10 + 0xe108e) = iVar33 * (uint)*pbVar32 >> 0xf;
        uVar11 = (uint)*(byte *)(param_3 + iVar37 + 2);
        if (uVar11 < 0x80) {
          iVar22 = iVar37 + param_3;
          iVar30 = 1;
          uVar19 = uVar15 - 2 & 3;
          iVar35 = DAT_000e1450 + 0xe10ae;
          iVar34 = iVar22;
          if (uVar19 != 0) {
            iVar30 = 2;
            *(undefined2 *)(iVar10 + 0xe1092) = *(undefined2 *)(iVar35 + uVar11 * 2 + 0xe6c);
            if (0x7f < *(byte *)(iVar22 + 3)) {
              return 0xfffffffd;
            }
            iVar16 = iVar37 + 5;
            iVar14 = iVar10 + 0xe1062;
            *(uint *)(iVar10 + 0xe1096) = iVar33 * (uint)*(byte *)(iVar22 + 3) >> 0xf;
            uVar11 = (uint)*(byte *)(iVar22 + 4);
            iVar23 = iVar22 + 2;
            if (0x7f < uVar11) {
              return 0xfffffffd;
            }
            iVar13 = iVar14;
            iVar34 = iVar23;
            if (uVar19 != 1) {
              if (uVar19 != 2) {
                iVar30 = 3;
                *(undefined2 *)(iVar10 + 0xe109a) = *(undefined2 *)(iVar35 + uVar11 * 2 + 0xe6c);
                if (0x7f < *(byte *)(iVar22 + 5)) {
                  return 0xfffffffd;
                }
                iVar16 = iVar37 + 7;
                iVar14 = iVar10 + 0xe106a;
                iVar23 = iVar22 + 4;
                *(uint *)(iVar10 + 0xe109e) = iVar33 * (uint)*(byte *)(iVar22 + 5) >> 0xf;
                uVar11 = (uint)*(byte *)(iVar22 + 6);
                if (0x7f < uVar11) {
                  return 0xfffffffd;
                }
              }
              iVar30 = iVar30 + 1;
              *(undefined2 *)(iVar14 + 0x38) = *(undefined2 *)(iVar35 + uVar11 * 2 + 0xe6c);
              if (0x7f < *(byte *)(iVar23 + 3)) {
                return 0xfffffffd;
              }
              iVar16 = iVar16 + 2;
              iVar13 = iVar14 + 8;
              iVar34 = iVar23 + 2;
              *(uint *)(iVar14 + 0x3c) = iVar33 * (uint)*(byte *)(iVar23 + 3) >> 0xf;
              uVar11 = (uint)*(byte *)(iVar23 + 4);
              if (0x7f < uVar11) {
                return 0xfffffffd;
              }
            }
          }
          do {
            uVar19 = iVar30 + 1;
            *(undefined2 *)(iVar13 + 0x38) = *(undefined2 *)(iVar35 + uVar11 * 2 + 0xe6c);
            iVar30 = iVar30 + 4;
            if (uVar19 == uVar15) goto LAB_000e1218;
            iVar16 = iVar16 + 8;
            if (0x7f < *(byte *)(iVar34 + 3)) {
              return 0xfffffffd;
            }
            *(uint *)(iVar13 + 0x3c) = iVar33 * (uint)*(byte *)(iVar34 + 3) >> 0xf;
            if (0x7f < *(byte *)(iVar34 + 4)) {
              return 0xfffffffd;
            }
            *(undefined2 *)(iVar13 + 0x40) =
                 *(undefined2 *)(iVar35 + (uint)*(byte *)(iVar34 + 4) * 2 + 0xe6c);
            if (0x7f < *(byte *)(iVar34 + 5)) {
              return 0xfffffffd;
            }
            *(uint *)(iVar13 + 0x44) = iVar33 * (uint)*(byte *)(iVar34 + 5) >> 0xf;
            if (0x7f < *(byte *)(iVar34 + 6)) {
              return 0xfffffffd;
            }
            *(undefined2 *)(iVar13 + 0x48) =
                 *(undefined2 *)(iVar35 + (uint)*(byte *)(iVar34 + 6) * 2 + 0xe6c);
            if (0x7f < *(byte *)(iVar34 + 7)) {
              return 0xfffffffd;
            }
            *(uint *)(iVar13 + 0x4c) = iVar33 * (uint)*(byte *)(iVar34 + 7) >> 0xf;
            if (0x7f < *(byte *)(iVar34 + 8)) {
              return 0xfffffffd;
            }
            *(undefined2 *)(iVar13 + 0x50) =
                 *(undefined2 *)(iVar35 + (uint)*(byte *)(iVar34 + 8) * 2 + 0xe6c);
            if (0x7f < *(byte *)(iVar34 + 9)) {
              return 0xfffffffd;
            }
            *(uint *)(iVar13 + 0x54) = iVar33 * (uint)*(byte *)(iVar34 + 9) >> 0xf;
            uVar11 = (uint)*(byte *)(iVar34 + 10);
            iVar13 = iVar13 + 0x20;
            iVar34 = iVar34 + 8;
          } while (uVar11 < 0x80);
        }
      }
      return 0xfffffffd;
    }
    break;
  case 1:
    if (param_2 != 0) {
      return 0xfffffffe;
    }
    piVar24 = (int *)(DAT_000e1404 + 0xe06f0);
    if (*piVar24 == 2) {
      *(undefined4 *)(DAT_000e1404 + 0xe0710) = 0;
      *(undefined4 *)(iVar18 + 0xe0714) = 0;
      *(undefined2 *)(iVar18 + 0xe0718) = 0;
      *(undefined1 *)(iVar18 + 0xe071a) = 0;
      *(undefined1 *)(iVar18 + 0xe071b) = 0;
      *(undefined1 *)(iVar18 + 0xe0b24) = 0;
      *(undefined1 *)(iVar18 + 0xe0f30) = 0;
      *(undefined4 *)(iVar18 + 0xe113c) = 0;
      *(undefined1 *)(iVar18 + 0xe1140) = 0;
      *(undefined1 *)(iVar18 + 0xe114c) = 0;
      *(undefined1 *)(iVar18 + 0xe1138) = 1;
      *(undefined1 *)(iVar18 + 0xe1139) = 1;
      *piVar24 = 1;
      *(undefined4 *)(iVar18 + 0xe06f4) = 1;
      return 0;
    }
    break;
  case 2:
    if (*(int *)(DAT_000e1408 + 0xe0734) == 1) {
      if (0xf < param_2 - 0x80) {
        return 0xfffffffe;
      }
      if (2 < *(byte *)param_3) {
        return 0xfffffffd;
      }
      if ((*(byte *)param_3 == 2) && (*(int *)(DAT_000e1408 + 0xe125c) == 0)) {
        return 0xfffffffb;
      }
      bVar25 = *(byte *)(param_3 + 1);
      if (*(byte *)(param_3 + 1) < 0x80) {
        bVar25 = *(byte *)(param_3 + 2);
      }
      if (0x7f < bVar25) {
        return 0xfffffffd;
      }
      iVar18 = 0;
      iVar10 = DAT_000e140c + 0xe12e9;
      uVar15 = param_3;
      while( true ) {
        bVar25 = *(byte *)(iVar18 + param_3 + 3);
        if (bVar25 < 0x80) {
          bVar25 = *(byte *)(iVar18 + param_3 + 4);
        }
        if (0x7f < bVar25) {
          return 0xfffffffd;
        }
        if (*(char *)(uVar15 + 0x13) < '\0') {
          return 0xfffffffd;
        }
        cVar3 = *(char *)(uVar15 + 0x1b);
        if (cVar3 == '\x0f') {
          return 0xfffffffd;
        }
        if (cVar3 == '\x17') {
          return 0xfffffffd;
        }
        if ((byte)(cVar3 - 0x1fU) < 0xe1) {
          return 0xfffffffd;
        }
        *(char *)(iVar10 + 1) = cVar3;
        iVar37 = iVar18 + 2 + param_3;
        bVar25 = *(byte *)(iVar37 + 3);
        if (bVar25 < 0x80) {
          bVar25 = *(byte *)(iVar37 + 4);
        }
        if (0x7f < bVar25) {
          return 0xfffffffd;
        }
        if (*(char *)(uVar15 + 0x14) < '\0') {
          return 0xfffffffd;
        }
        cVar3 = *(char *)(uVar15 + 0x1c);
        if (cVar3 == '\x0f') {
          return 0xfffffffd;
        }
        if (cVar3 == '\x17') {
          return 0xfffffffd;
        }
        if ((byte)(cVar3 - 0x1fU) < 0xe1) {
          return 0xfffffffd;
        }
        *(char *)(iVar10 + 2) = cVar3;
        iVar37 = iVar18 + 4 + param_3;
        bVar25 = *(byte *)(iVar37 + 3);
        if (bVar25 < 0x80) {
          bVar25 = *(byte *)(iVar37 + 4);
        }
        if (0x7f < bVar25) {
          return 0xfffffffd;
        }
        if (*(char *)(uVar15 + 0x15) < '\0') {
          return 0xfffffffd;
        }
        cVar3 = *(char *)(uVar15 + 0x1d);
        if (cVar3 == '\x0f') {
          return 0xfffffffd;
        }
        if (cVar3 == '\x17') {
          return 0xfffffffd;
        }
        if ((byte)(cVar3 - 0x1fU) < 0xe1) {
          return 0xfffffffd;
        }
        *(char *)(iVar10 + 3) = cVar3;
        iVar37 = iVar18 + 6 + param_3;
        bVar25 = *(byte *)(iVar37 + 3);
        if (bVar25 < 0x80) {
          bVar25 = *(byte *)(iVar37 + 4);
        }
        if (0x7f < bVar25) {
          return 0xfffffffd;
        }
        if (*(char *)(uVar15 + 0x16) < '\0') {
          return 0xfffffffd;
        }
        cVar3 = *(char *)(uVar15 + 0x1e);
        if (cVar3 == '\x0f') break;
        if (cVar3 == '\x17') {
          return 0xfffffffd;
        }
        if ((byte)(cVar3 - 0x1fU) < 0xe1) {
          return 0xfffffffd;
        }
        iVar18 = iVar18 + 8;
        *(char *)(iVar10 + 4) = cVar3;
        iVar10 = iVar10 + 4;
        uVar15 = uVar15 + 4;
        if (iVar18 == 0x10) {
          bVar25 = *(byte *)(param_3 + 0x23);
          if (*(byte *)(param_3 + 0x23) < 0x80) {
            bVar25 = *(byte *)(param_3 + 0x24);
          }
          if (0x7f < bVar25) {
            return 0xfffffffd;
          }
          if (1 < *(byte *)(param_3 + 0x25)) {
            return 0xfffffffd;
          }
          bVar25 = *(byte *)(DAT_000e1410 + 0xe14d0);
          *(uint *)(DAT_000e1410 + param_2 * 4 + 0xe1290) = param_3;
          if (param_2 != bVar25) {
            return 0;
          }
          FUN_000df724(param_2 - 0x70);
          return 0;
        }
      }
      return 0xfffffffd;
    }
    break;
  case 3:
    if (param_2 != 0) {
      return 0xfffffffe;
    }
    uVar9 = FUN_000df724(param_3);
    return uVar9;
  case 4:
    if (param_2 != 0) {
      return 0xfffffffe;
    }
    if (*(int *)(DAT_000e1414 + 0xe0900) - 1U < 2) {
      if (0x3fff < param_3) {
        return 0xfffffffe;
      }
      iVar18 = (int)*(short *)(DAT_000e1414 + 0xe13e4) * (param_3 - 0x2000);
      if (iVar18 < 0) {
        iVar18 = -iVar18;
        iVar10 = -1;
      }
      else {
        iVar10 = 1;
      }
      iVar10 = iVar10 * (iVar18 >> 0xd);
      iVar18 = -0x960;
      if (-0x961 < iVar10) {
        iVar18 = iVar10;
      }
      if (0x95f < iVar18) {
        iVar18 = 0x960;
      }
      *(int *)((int)&DAT_000e1414 + DAT_000e1418) = iVar18;
      return 0;
    }
    break;
  case 5:
    if (param_2 != 0) {
      return 0xfffffffe;
    }
    if (*(int *)(DAT_000e141c + 0xe0960) - 1U < 2) {
      if (0x18 < param_3) {
        return 0xfffffffe;
      }
      *(short *)((int)&DAT_000e1444 + DAT_000e141c) = (short)param_3 * 100;
      return 0;
    }
    break;
  case 6:
    if (param_2 != 0) {
      return 0xfffffffe;
    }
    if (*(int *)(DAT_000e13f8 + 0xe067a) - 1U < 2) {
      if (0x3c < param_3) {
        return 0xfffffffe;
      }
      *(short *)(DAT_000e13f8 + 0xe1166) = (short)param_3 * 100;
      return 0;
    }
    break;
  default:
    return 0xfffffffe;
  }
  return 0xffffffff;
}

