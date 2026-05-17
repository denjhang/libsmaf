/* MaHvDrvCN_SetCommand @ 000e414c 3716B */


/* WARNING: Type propagation algorithm not settling */
/* YAMAHA::MaHvDrvCN_SetCommand(unsigned int, unsigned int, unsigned int) */

undefined4 YAMAHA::MaHvDrvCN_SetCommand(uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  undefined4 uVar7;
  uint uVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  int *piVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined1 *puVar29;
  int iVar30;
  byte bVar31;
  byte *pbVar32;
  bool bVar33;
  int local_50;
  uint local_2c [2];
  
  iVar26 = DAT_000e4e00;
  switch(param_1) {
  case 0:
    if (param_2 != 0) {
      return 0xfffffffe;
    }
    if (*(int *)(DAT_000e4df8 + 0xe419a) != 1) {
      return 0xffffffff;
    }
    if (*(int *)(DAT_000e4df8 + 0xe4ce2) == 0) {
      return 0xffffffff;
    }
    if (param_3 == 0) {
      return 0xfffffffe;
    }
    bVar31 = *(byte *)param_3;
    if (bVar31 < 0x80) {
      *(undefined1 *)(DAT_000e4df8 + 0xe4be2) = 1;
      local_2c[0] = (short)(ushort)bVar31 * 100 - 0x4b0;
    }
    else {
      if ((bVar31 & 0x7f) == 0) {
        local_2c[0] = 0xffff8000;
      }
      else {
        local_2c[0] = ((bVar31 & 0x7f) - 0x3c) * 100;
      }
      *(undefined1 *)(DAT_000e4dfc + 0xe4c20) = 0;
    }
    iVar26 = DAT_000e4e1c;
    *(short *)(DAT_000e4e1c + 0xe4436) = (short)local_2c[0];
    if (0x7f < *(byte *)(param_3 + 1)) {
      return 0xfffffffd;
    }
    *(undefined1 *)(iVar26 + 0xe4438) =
         *(undefined1 *)((uint)*(byte *)(param_3 + 1) + DAT_000e4e20 + 0xe4ffa);
    iVar26 = DAT_000e4e24;
    uVar12 = (uint)*(byte *)(param_3 + 2);
    if (uVar12 < 0x80) {
      iVar10 = 1;
      iVar28 = 0;
    }
    else {
      iVar28 = uVar12 - 0x80;
      uVar12 = (uint)*(byte *)(param_3 + 3);
      iVar28 = iVar28 * 0x80;
      if (uVar12 < 0x80) {
        iVar10 = 2;
      }
      else {
        iVar10 = uVar12 - 0x80;
        uVar12 = (uint)*(byte *)(param_3 + 4);
        iVar28 = (iVar28 + iVar10) * 0x80;
        if (uVar12 < 0x80) {
          iVar10 = 3;
        }
        else {
          iVar10 = uVar12 - 0x80;
          uVar12 = (uint)*(byte *)(param_3 + 5);
          iVar28 = (iVar28 + iVar10) * 0x80;
          if (0x7f < uVar12) {
            return 0xfffffffd;
          }
          iVar10 = 4;
        }
      }
    }
    uVar12 = iVar28 + uVar12;
    iVar11 = iVar10 + 2;
    iVar28 = param_3 + iVar11;
    *(uint *)(DAT_000e4e24 + 0xe44b8) = uVar12;
    *(bool *)(iVar26 + 0xe4ee1) = uVar12 != 0;
    iVar26 = DAT_000e4e28;
    uVar15 = (uint)*(byte *)(param_3 + iVar11);
    if (uVar15 < 0x80) {
      iVar25 = 0;
      iVar28 = 1;
    }
    else {
      iVar25 = uVar15 - 0x80;
      uVar15 = (uint)*(byte *)(iVar28 + 1);
      iVar25 = iVar25 * 0x80;
      if (uVar15 < 0x80) {
        iVar28 = 2;
      }
      else {
        iVar22 = uVar15 - 0x80;
        uVar15 = (uint)*(byte *)(iVar28 + 2);
        iVar25 = (iVar25 + iVar22) * 0x80;
        if (uVar15 < 0x80) {
          iVar28 = 3;
        }
        else {
          iVar22 = uVar15 - 0x80;
          uVar15 = (uint)*(byte *)(iVar28 + 3);
          iVar25 = (iVar25 + iVar22) * 0x80;
          if (0x7f < uVar15) {
            return 0xfffffffd;
          }
          iVar28 = 4;
        }
      }
    }
    uVar15 = uVar15 + iVar25;
    iVar11 = iVar11 + iVar28;
    pbVar32 = (byte *)(iVar11 + param_3);
    if (uVar15 < 4) {
      uVar8 = uVar15;
      if (uVar15 == 0) {
        return 0xfffffffd;
      }
    }
    else {
      uVar8 = 4;
    }
    iVar25 = 0;
    uVar16 = 1;
    bVar31 = *pbVar32;
    while (uVar23 = (uint)bVar31, 0x7f < uVar23) {
      bVar1 = uVar8 <= uVar16;
      iVar25 = (iVar25 + uVar23 + -0x80) * 0x80;
      bVar33 = 3 < uVar16;
      uVar16 = uVar16 + 1;
      if (bVar33 || bVar1) {
        return 0xfffffffd;
      }
      pbVar32 = pbVar32 + 1;
      bVar31 = *pbVar32;
    }
    uVar23 = uVar23 + iVar25;
    iVar25 = iVar11 + uVar16;
    *(uint *)(DAT_000e4e28 + 0xe456a) = uVar23;
    if (uVar12 != 0) {
      if (uVar12 < uVar23) {
        return 0xfffffffd;
      }
      *(uint *)(iVar26 + 0xe4f92) = uVar12 - uVar23;
    }
    else {
      *(undefined4 *)(iVar26 + 0xe4f92) = 0x14;
    }
    iVar26 = DAT_000e4e2c;
    bVar31 = *(byte *)(param_3 + iVar25);
    uVar12 = (uint)bVar31;
    iVar22 = iVar25 + 1;
    if (0x7e < uVar12 - 1) {
      return 0xfffffffd;
    }
    iVar30 = DAT_000e4e2c + 0xe456c;
    iVar10 = uVar16 + iVar28 + iVar10 + param_3;
    uVar8 = DAT_000e4e2c + 0xe4fc9;
    uVar16 = DAT_000e4e2c + 0xe4fc1;
    *(byte *)(DAT_000e4e2c + 0xe4fc0) = bVar31;
    if (((iVar10 + 3U | uVar16) & 7) == 0 &&
        (10 < uVar12 && (iVar10 + 0xbU <= uVar16 || uVar8 <= iVar10 + 3U))) {
      uVar8 = (uint)(bVar31 >> 3);
      uVar7 = *(undefined4 *)(iVar10 + 3);
      uVar16 = uVar8 * 8;
      *(undefined4 *)(iVar26 + 0xe4fc5) = *(undefined4 *)(iVar10 + 7);
      *(undefined4 *)(iVar26 + 0xe4fc1) = uVar7;
      if (1 < uVar8) {
        uVar7 = *(undefined4 *)(iVar10 + 0xb);
        *(undefined4 *)(iVar26 + 0xe4fcd) = *(undefined4 *)(iVar10 + 0xf);
        *(undefined4 *)(iVar26 + 0xe4fc9) = uVar7;
        if (2 < uVar8) {
          uVar7 = *(undefined4 *)(iVar10 + 0x13);
          *(undefined4 *)(iVar26 + 0xe4fd5) = *(undefined4 *)(iVar10 + 0x17);
          *(undefined4 *)(iVar26 + 0xe4fd1) = uVar7;
          if (3 < uVar8) {
            uVar7 = *(undefined4 *)(iVar10 + 0x1b);
            *(undefined4 *)(iVar26 + 0xe4fdd) = *(undefined4 *)(iVar10 + 0x1f);
            *(undefined4 *)(iVar26 + 0xe4fd9) = uVar7;
            if (4 < uVar8) {
              uVar7 = *(undefined4 *)(iVar10 + 0x23);
              *(undefined4 *)(iVar26 + 0xe4fe5) = *(undefined4 *)(iVar10 + 0x27);
              *(undefined4 *)(iVar26 + 0xe4fe1) = uVar7;
              if (5 < uVar8) {
                uVar7 = *(undefined4 *)(iVar10 + 0x2b);
                *(undefined4 *)(iVar26 + 0xe4fed) = *(undefined4 *)(iVar10 + 0x2f);
                *(undefined4 *)(iVar26 + 0xe4fe9) = uVar7;
                if (6 < uVar8) {
                  uVar7 = *(undefined4 *)(iVar10 + 0x33);
                  *(undefined4 *)(iVar26 + 0xe4ff5) = *(undefined4 *)(iVar10 + 0x37);
                  *(undefined4 *)(iVar26 + 0xe4ff1) = uVar7;
                  if (7 < uVar8) {
                    uVar7 = *(undefined4 *)(iVar10 + 0x3b);
                    *(undefined4 *)(iVar26 + 0xe4ffd) = *(undefined4 *)(iVar10 + 0x3f);
                    *(undefined4 *)(iVar26 + 0xe4ff9) = uVar7;
                    iVar26 = DAT_000e4e30;
                    if (8 < uVar8) {
                      uVar7 = *(undefined4 *)(iVar10 + 0x43);
                      *(undefined4 *)(DAT_000e4e30 + 0xe510d) = *(undefined4 *)(iVar10 + 0x47);
                      *(undefined4 *)(iVar26 + 0xe5109) = uVar7;
                      if (9 < uVar8) {
                        uVar7 = *(undefined4 *)(iVar10 + 0x4b);
                        *(undefined4 *)(iVar26 + 0xe5115) = *(undefined4 *)(iVar10 + 0x4f);
                        *(undefined4 *)(iVar26 + 0xe5111) = uVar7;
                        if (10 < uVar8) {
                          uVar7 = *(undefined4 *)(iVar10 + 0x53);
                          *(undefined4 *)(iVar26 + 0xe511d) = *(undefined4 *)(iVar10 + 0x57);
                          *(undefined4 *)(iVar26 + 0xe5119) = uVar7;
                          if (0xb < uVar8) {
                            uVar7 = *(undefined4 *)(iVar10 + 0x5b);
                            *(undefined4 *)(iVar26 + 0xe5125) = *(undefined4 *)(iVar10 + 0x5f);
                            *(undefined4 *)(iVar26 + 0xe5121) = uVar7;
                            if (0xc < uVar8) {
                              uVar7 = *(undefined4 *)(iVar10 + 99);
                              *(undefined4 *)(iVar26 + 0xe512d) = *(undefined4 *)(iVar10 + 0x67);
                              *(undefined4 *)(iVar26 + 0xe5129) = uVar7;
                              if (0xd < uVar8) {
                                uVar7 = *(undefined4 *)(iVar10 + 0x6b);
                                *(undefined4 *)(iVar26 + 0xe5135) = *(undefined4 *)(iVar10 + 0x6f);
                                *(undefined4 *)(iVar26 + 0xe5131) = uVar7;
                                if (0xe < uVar8) {
                                  uVar7 = *(undefined4 *)(iVar10 + 0x73);
                                  *(undefined4 *)(iVar26 + 0xe513d) = *(undefined4 *)(iVar10 + 0x77)
                                  ;
                                  *(undefined4 *)(iVar26 + 0xe5139) = uVar7;
                                  if (0xf < uVar8) {
                                    uVar7 = *(undefined4 *)(iVar10 + 0x7f);
                                    *(undefined4 *)(iVar26 + 0xe5141) =
                                         *(undefined4 *)(iVar10 + 0x7b);
                                    *(undefined4 *)(iVar26 + 0xe5145) = uVar7;
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
      iVar26 = param_3 + iVar22;
      if (uVar12 != uVar16) {
        uVar23 = uVar16 + 1;
        iVar10 = DAT_000e4e34 + 0xe471e;
        *(undefined1 *)(iVar10 + uVar16 + 0xa55) = *(undefined1 *)(iVar26 + uVar8 * 8);
        if (uVar23 < uVar12) {
          uVar8 = uVar16 + 2;
          *(undefined1 *)(uVar23 + iVar10 + 0xa55) = *(undefined1 *)(iVar26 + uVar23);
          if (uVar8 < uVar12) {
            uVar23 = uVar16 + 3;
            *(undefined1 *)(iVar10 + uVar8 + 0xa55) = *(undefined1 *)(iVar26 + uVar8);
            if (uVar23 < uVar12) {
              uVar8 = uVar16 + 4;
              *(undefined1 *)(iVar10 + uVar23 + 0xa55) = *(undefined1 *)(iVar26 + uVar23);
              if (uVar8 < uVar12) {
                uVar23 = uVar16 + 5;
                *(undefined1 *)(iVar10 + uVar8 + 0xa55) = *(undefined1 *)(iVar26 + uVar8);
                if (uVar23 < uVar12) {
                  uVar16 = uVar16 + 6;
                  *(undefined1 *)(uVar23 + iVar10 + 0xa55) = *(undefined1 *)(iVar26 + uVar23);
                  if (uVar16 < uVar12) {
                    *(undefined1 *)(iVar10 + uVar16 + 0xa55) = *(undefined1 *)(iVar26 + uVar16);
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar16 = iVar25 + param_3;
      puVar29 = (undefined1 *)(uVar12 + uVar16);
      iVar30 = iVar30 - uVar16;
      puVar19 = (undefined1 *)(uVar16 + 1);
      uVar8 = (uint)(puVar29 + ~uVar16) & 7;
      puVar19[iVar30 + 0xa54] = *puVar19;
      if (puVar19 != puVar29) {
        if (uVar8 != 0) {
          if (uVar8 != 1) {
            if (uVar8 != 2) {
              if (uVar8 != 3) {
                if (uVar8 != 4) {
                  if (uVar8 != 5) {
                    if (uVar8 != 6) {
                      puVar19 = (undefined1 *)(uVar16 + 2);
                      puVar19[iVar30 + 0xa54] = *puVar19;
                    }
                    puVar19 = puVar19 + 1;
                    puVar19[iVar30 + 0xa54] = *puVar19;
                  }
                  puVar19 = puVar19 + 1;
                  puVar19[iVar30 + 0xa54] = *puVar19;
                }
                puVar19 = puVar19 + 1;
                puVar19[iVar30 + 0xa54] = *puVar19;
              }
              puVar19 = puVar19 + 1;
              puVar19[iVar30 + 0xa54] = *puVar19;
            }
            puVar19 = puVar19 + 1;
            puVar19[iVar30 + 0xa54] = *puVar19;
          }
          puVar19 = puVar19 + 1;
          puVar19[iVar30 + 0xa54] = *puVar19;
          if (puVar19 == puVar29) goto LAB_000e4784;
        }
        do {
          (puVar19 + 1)[iVar30 + 0xa54] = puVar19[1];
          (puVar19 + 2)[iVar30 + 0xa54] = puVar19[2];
          puVar19[iVar30 + 0xa57] = puVar19[3];
          puVar19[iVar30 + 0xa58] = puVar19[4];
          puVar20 = puVar19 + 8;
          puVar19[iVar30 + 0xa59] = puVar19[5];
          puVar19[iVar30 + 0xa5a] = puVar19[6];
          puVar19[iVar30 + 0xa5b] = puVar19[7];
          puVar20[iVar30 + 0xa54] = puVar19[8];
          puVar19 = puVar20;
        } while (puVar20 != puVar29);
      }
    }
LAB_000e4784:
    iVar26 = FUN_000e2790(param_3 + iVar22,uVar12,local_2c);
    if (iVar26 < 0) {
      return 0xfffffffd;
    }
    piVar21 = *(int **)(DAT_000e4e38 + 0xe52e8);
    uVar8 = local_2c[0];
    if (local_2c[0] < uVar12) {
      uVar8 = uVar12;
    }
    iVar22 = iVar22 + uVar8;
    iVar28 = iVar22 + 1;
    iVar10 = *piVar21 + iVar26 + 10;
    iVar10 = (*(byte *)(iVar10 + 3) & 0x7f) +
             ((*(byte *)(iVar10 + 2) & 0x7f) +
             ((*(byte *)(iVar10 + 1) & 0x7f) + (*(byte *)(*piVar21 + iVar26 + 10) & 0x7f) * 0x80) *
             0x80) * 0x80;
    *(int *)(DAT_000e4e38 + 0xe51f0) = iVar10;
    iVar26 = DAT_000e4e3c;
    if (0x7f < *(byte *)(param_3 + iVar22)) {
      return 0xfffffffd;
    }
    bVar31 = *(byte *)(param_3 + iVar22) + 1;
    iVar25 = DAT_000e4e3c + 0xe4802;
    *(undefined4 *)(DAT_000e4e3c + 0xe4c3a) = 0;
    *(byte *)(iVar26 + 0xe4c36) = bVar31;
    *(undefined2 *)(iVar26 + 0xe4c3e) = 0x2000;
    if (1 < bVar31) {
      if (0x7f < *(byte *)(param_3 + iVar28)) {
        return 0xfffffffd;
      }
      iVar30 = *(int *)(iVar26 + 0xe524e) * 0x102;
      *(uint *)(iVar26 + 0xe4c42) = iVar30 * (uint)*(byte *)(param_3 + iVar28) >> 0xf;
      bVar4 = *(byte *)(param_3 + iVar22 + 2);
      uVar9 = (ushort)bVar4;
      bVar3 = *(byte *)(param_3 + iVar22 + 2 + 1);
      uVar6 = (ushort)bVar3;
      uVar5 = uVar6;
      if (uVar6 < 0x80) {
        uVar5 = uVar9;
      }
      if (0x7f < uVar5) {
        return 0xfffffffd;
      }
      iVar17 = iVar22 + param_3;
      iVar22 = (short)(ushort)bVar31 * 3 + (param_3 - 6) + iVar22;
      if ((iVar22 - iVar17) * -0x80000000 < 0) {
        *(ushort *)(iVar26 + 0xe4c46) = (ushort)bVar4 | (ushort)bVar3 << 7;
        if (0x7f < *(byte *)(iVar17 + 4)) {
          return 0xfffffffd;
        }
        *(uint *)(iVar26 + 0xe4c4a) = iVar30 * (uint)*(byte *)(iVar17 + 4) >> 0xf;
        uVar9 = (ushort)*(byte *)(iVar17 + 5);
        uVar6 = (ushort)*(byte *)(iVar17 + 6);
        uVar5 = uVar9;
        if (uVar9 < 0x80) {
          uVar5 = uVar6;
        }
        iVar25 = iVar26 + 0xe480a;
        iVar17 = iVar17 + 3;
        if (0x7f < uVar5) {
          return 0xfffffffd;
        }
      }
      while( true ) {
        iVar28 = (4 - param_3) + iVar17;
        *(ushort *)(iVar25 + 0x444) = uVar9 | uVar6 << 7;
        if (iVar17 == iVar22) break;
        if (0x7f < *(byte *)(iVar17 + 4)) {
          return 0xfffffffd;
        }
        *(uint *)(iVar25 + 0x448) = iVar30 * (uint)*(byte *)(iVar17 + 4) >> 0xf;
        bVar31 = *(byte *)(iVar17 + 5);
        bVar3 = bVar31;
        if (bVar31 < 0x80) {
          bVar3 = *(byte *)(iVar17 + 6);
        }
        if (0x7f < bVar3) {
          return 0xfffffffd;
        }
        *(ushort *)(iVar25 + 0x44c) = (ushort)bVar31 | (ushort)*(byte *)(iVar17 + 6) << 7;
        if (0x7f < *(byte *)(iVar17 + 7)) {
          return 0xfffffffd;
        }
        *(uint *)(iVar25 + 0x450) = iVar30 * (uint)*(byte *)(iVar17 + 7) >> 0xf;
        uVar9 = (ushort)*(byte *)(iVar17 + 8);
        uVar6 = (ushort)*(byte *)(iVar17 + 9);
        uVar5 = uVar9;
        if (uVar9 < 0x80) {
          uVar5 = uVar6;
        }
        iVar25 = iVar25 + 0x10;
        iVar17 = iVar17 + 6;
        if (0x7f < uVar5) {
          return 0xfffffffd;
        }
      }
    }
    iVar26 = DAT_000e4e40;
    local_50 = iVar28 + 1;
    if (0x7f < *(byte *)(param_3 + iVar28)) {
      return 0xfffffffd;
    }
    bVar31 = *(byte *)(param_3 + iVar28) + 1;
    uVar12 = (uint)bVar31;
    iVar25 = DAT_000e4e40 + 0xe4946;
    *(undefined4 *)(DAT_000e4e40 + 0xe4972) = 0;
    *(byte *)(iVar26 + 0xe4971) = bVar31;
    *(undefined2 *)(iVar26 + 0xe4976) = 0;
    if (1 < uVar12) {
      pbVar32 = (byte *)(param_3 + local_50);
      if (0x7f < *pbVar32) {
        return 0xfffffffd;
      }
      local_50 = iVar28 + 3;
      iVar22 = *(int *)(iVar26 + 0xe5392) * 0x102;
      *(uint *)(iVar26 + 0xe497a) = iVar22 * (uint)*pbVar32 >> 0xf;
      uVar8 = (uint)*(byte *)(param_3 + iVar28 + 2);
      if (0x7f < uVar8) {
        return 0xfffffffd;
      }
      iVar17 = iVar28 + param_3;
      iVar27 = 1;
      uVar16 = uVar12 - 2 & 3;
      iVar24 = DAT_000e4e44 + 0xe499a;
      iVar30 = iVar17;
      if (uVar16 != 0) {
        iVar27 = 2;
        *(undefined2 *)(iVar26 + 0xe497e) = *(undefined2 *)(iVar24 + uVar8 * 2 + 0xc5c);
        if (0x7f < *(byte *)(iVar17 + 3)) {
          return 0xfffffffd;
        }
        local_50 = iVar28 + 5;
        iVar13 = iVar26 + 0xe494e;
        *(uint *)(iVar26 + 0xe4982) = iVar22 * (uint)*(byte *)(iVar17 + 3) >> 0xf;
        uVar8 = (uint)*(byte *)(iVar17 + 4);
        iVar18 = iVar17 + 2;
        if (0x7f < uVar8) {
          return 0xfffffffd;
        }
        iVar25 = iVar13;
        iVar30 = iVar18;
        if (uVar16 != 1) {
          if (uVar16 != 2) {
            iVar27 = 3;
            *(undefined2 *)(iVar26 + 0xe4986) = *(undefined2 *)(iVar24 + uVar8 * 2 + 0xc5c);
            if (0x7f < *(byte *)(iVar17 + 5)) {
              return 0xfffffffd;
            }
            local_50 = iVar28 + 7;
            iVar13 = iVar26 + 0xe4956;
            iVar18 = iVar17 + 4;
            *(uint *)(iVar26 + 0xe498a) = iVar22 * (uint)*(byte *)(iVar17 + 5) >> 0xf;
            uVar8 = (uint)*(byte *)(iVar17 + 6);
            if (0x7f < uVar8) {
              return 0xfffffffd;
            }
          }
          iVar27 = iVar27 + 1;
          *(undefined2 *)(iVar13 + 0x38) = *(undefined2 *)(iVar24 + uVar8 * 2 + 0xc5c);
          if (0x7f < *(byte *)(iVar18 + 3)) {
            return 0xfffffffd;
          }
          local_50 = local_50 + 2;
          iVar25 = iVar13 + 8;
          iVar30 = iVar18 + 2;
          *(uint *)(iVar13 + 0x3c) = iVar22 * (uint)*(byte *)(iVar18 + 3) >> 0xf;
          uVar8 = (uint)*(byte *)(iVar18 + 4);
          if (0x7f < uVar8) {
            return 0xfffffffd;
          }
        }
      }
      while( true ) {
        uVar16 = iVar27 + 1;
        *(undefined2 *)(iVar25 + 0x38) = *(undefined2 *)(iVar24 + uVar8 * 2 + 0xc5c);
        iVar27 = iVar27 + 4;
        if (uVar16 == uVar12) break;
        local_50 = local_50 + 8;
        if (0x7f < *(byte *)(iVar30 + 3)) {
          return 0xfffffffd;
        }
        *(uint *)(iVar25 + 0x3c) = iVar22 * (uint)*(byte *)(iVar30 + 3) >> 0xf;
        if (0x7f < *(byte *)(iVar30 + 4)) {
          return 0xfffffffd;
        }
        *(undefined2 *)(iVar25 + 0x40) =
             *(undefined2 *)(iVar24 + (uint)*(byte *)(iVar30 + 4) * 2 + 0xc5c);
        if (0x7f < *(byte *)(iVar30 + 5)) {
          return 0xfffffffd;
        }
        *(uint *)(iVar25 + 0x44) = iVar22 * (uint)*(byte *)(iVar30 + 5) >> 0xf;
        if (0x7f < *(byte *)(iVar30 + 6)) {
          return 0xfffffffd;
        }
        *(undefined2 *)(iVar25 + 0x48) =
             *(undefined2 *)(iVar24 + (uint)*(byte *)(iVar30 + 6) * 2 + 0xc5c);
        if (0x7f < *(byte *)(iVar30 + 7)) {
          return 0xfffffffd;
        }
        *(uint *)(iVar25 + 0x4c) = iVar22 * (uint)*(byte *)(iVar30 + 7) >> 0xf;
        if (0x7f < *(byte *)(iVar30 + 8)) {
          return 0xfffffffd;
        }
        *(undefined2 *)(iVar25 + 0x50) =
             *(undefined2 *)(iVar24 + (uint)*(byte *)(iVar30 + 8) * 2 + 0xc5c);
        if (0x7f < *(byte *)(iVar30 + 9)) {
          return 0xfffffffd;
        }
        *(uint *)(iVar25 + 0x54) = iVar22 * (uint)*(byte *)(iVar30 + 9) >> 0xf;
        uVar8 = (uint)*(byte *)(iVar30 + 10);
        iVar25 = iVar25 + 0x20;
        iVar30 = iVar30 + 8;
        if (0x7f < uVar8) {
          return 0xfffffffd;
        }
      }
    }
    iVar26 = DAT_000e4e48;
    uVar12 = (uint)*(byte *)(param_3 + local_50);
    iVar28 = local_50 + 1;
    if (0x7f < uVar12) {
      return 0xfffffffd;
    }
    *(byte *)(DAT_000e4e48 + 0xe5472) = *(byte *)(param_3 + local_50);
    if (uVar12 != 0) {
      uVar8 = (uint)*(byte *)(param_3 + iVar28);
      iVar25 = local_50 + 2;
      if (0x7f < uVar8) {
        return 0xfffffffd;
      }
      iVar22 = iVar28 + uVar12;
      puVar14 = (uint *)(iVar26 + 0xe5472);
      uVar12 = iVar22 - iVar25 & 7;
      iVar30 = *(int *)(iVar26 + 0xe567e) * 0x102;
      iVar28 = iVar25;
      if (uVar12 != 0) {
        puVar14 = (uint *)(iVar26 + 0xe5476);
        iVar28 = local_50 + 3;
        *puVar14 = iVar30 * uVar8 >> 0xf;
        uVar8 = (uint)*(byte *)(iVar25 + param_3);
        if (0x7f < uVar8) {
          return 0xfffffffd;
        }
        if (uVar12 != 1) {
          iVar25 = iVar28;
          if (uVar12 != 2) {
            if (uVar12 != 3) {
              if (uVar12 != 4) {
                if (uVar12 != 5) {
                  if (uVar12 != 6) {
                    iVar25 = local_50 + 4;
                    puVar14 = (uint *)(iVar26 + 0xe547a);
                    *puVar14 = iVar30 * uVar8 >> 0xf;
                    uVar8 = (uint)*(byte *)(iVar28 + param_3);
                    if (0x7f < uVar8) {
                      return 0xfffffffd;
                    }
                  }
                  iVar28 = iVar25 + 1;
                  puVar14 = puVar14 + 1;
                  *puVar14 = iVar30 * uVar8 >> 0xf;
                  uVar8 = (uint)*(byte *)(iVar25 + param_3);
                  if (0x7f < uVar8) {
                    return 0xfffffffd;
                  }
                }
                iVar25 = iVar28 + 1;
                puVar14 = puVar14 + 1;
                *puVar14 = iVar30 * uVar8 >> 0xf;
                uVar8 = (uint)*(byte *)(iVar28 + param_3);
                if (0x7f < uVar8) {
                  return 0xfffffffd;
                }
              }
              iVar28 = iVar25 + 1;
              puVar14 = puVar14 + 1;
              *puVar14 = iVar30 * uVar8 >> 0xf;
              uVar8 = (uint)*(byte *)(iVar25 + param_3);
              if (0x7f < uVar8) {
                return 0xfffffffd;
              }
            }
            iVar25 = iVar28 + 1;
            puVar14 = puVar14 + 1;
            *puVar14 = iVar30 * uVar8 >> 0xf;
            uVar8 = (uint)*(byte *)(iVar28 + param_3);
            if (0x7f < uVar8) {
              return 0xfffffffd;
            }
          }
          iVar28 = iVar25 + 1;
          puVar14 = puVar14 + 1;
          *puVar14 = iVar30 * uVar8 >> 0xf;
          uVar8 = (uint)*(byte *)(iVar25 + param_3);
          if (0x7f < uVar8) {
            return 0xfffffffd;
          }
        }
      }
      while( true ) {
        iVar26 = iVar28 + 6;
        iVar25 = iVar28 + 1;
        iVar17 = iVar28 + 5;
        iVar13 = iVar28 + 3;
        iVar27 = iVar28 + 4;
        iVar24 = iVar28 + 7;
        iVar18 = iVar28 + 2;
        puVar14[1] = iVar30 * uVar8 >> 0xf;
        if (iVar28 == iVar22) break;
        pbVar32 = (byte *)(iVar28 + param_3);
        iVar28 = iVar28 + 8;
        if (0x7f < *pbVar32) {
          return 0xfffffffd;
        }
        puVar14[2] = iVar30 * (uint)*pbVar32 >> 0xf;
        uVar12 = (uint)*(byte *)(iVar25 + param_3);
        if (0x7f < uVar12) {
          return 0xfffffffd;
        }
        puVar14[3] = iVar30 * uVar12 >> 0xf;
        uVar12 = (uint)*(byte *)(iVar18 + param_3);
        if (0x7f < uVar12) {
          return 0xfffffffd;
        }
        puVar14[4] = iVar30 * uVar12 >> 0xf;
        uVar12 = (uint)*(byte *)(iVar13 + param_3);
        if (0x7f < uVar12) {
          return 0xfffffffd;
        }
        puVar14[5] = iVar30 * uVar12 >> 0xf;
        uVar12 = (uint)*(byte *)(iVar27 + param_3);
        if (0x7f < uVar12) {
          return 0xfffffffd;
        }
        puVar14[6] = iVar30 * uVar12 >> 0xf;
        uVar12 = (uint)*(byte *)(iVar17 + param_3);
        if (0x7f < uVar12) {
          return 0xfffffffd;
        }
        puVar14[7] = iVar30 * uVar12 >> 0xf;
        uVar12 = (uint)*(byte *)(iVar26 + param_3);
        if (0x7f < uVar12) {
          return 0xfffffffd;
        }
        puVar14 = puVar14 + 8;
        *puVar14 = iVar30 * uVar12 >> 0xf;
        uVar8 = (uint)*(byte *)(iVar24 + param_3);
        if (0x7f < uVar8) {
          return 0xfffffffd;
        }
      }
    }
    iVar26 = DAT_000e5038;
    if (iVar28 != iVar11 + uVar15) {
      return 0xfffffffd;
    }
    *(ushort *)(DAT_000e5038 + 0xe59c4) =
         (*(byte *)(*piVar21 + iVar10 + 1) & 0x7f) + (*(byte *)(*piVar21 + iVar10) & 0x7f) * 0x80;
    uVar15 = (*(byte *)(*piVar21 + iVar10 + 2 + 1) & 0x7f) +
             (*(byte *)(*piVar21 + iVar10 + 2) & 0x7f) * 0x80;
    *(short *)(iVar26 + 0xe59c6) = (short)uVar15;
    iVar28 = (*(byte *)(*piVar21 + iVar10 + 4 + 1) & 0x7f) +
             (*(byte *)(*piVar21 + iVar10 + 4) & 0x7f) * 0x80;
    *(short *)(iVar26 + 0xe59c8) = (short)iVar28;
    uVar8 = (*(byte *)(*piVar21 + iVar10 + 6 + 1) & 0x7f) +
            (*(byte *)(*piVar21 + iVar10 + 6) & 0x7f) * 0x80;
    *(short *)(iVar26 + 0xe59ca) = (short)uVar8;
    uVar12 = uVar15;
    if (uVar15 <= uVar8) {
      uVar12 = uVar15 - 1;
    }
    uVar16 = uVar8;
    if (uVar15 <= uVar8) {
      uVar16 = uVar12 & 0xffff;
    }
    *(ushort *)(iVar26 + 0xe59cc) =
         (*(byte *)(*piVar21 + iVar10 + 8 + 1) & 0x7f) +
         (*(byte *)(*piVar21 + iVar10 + 8) & 0x7f) * 0x80;
    iVar11 = DAT_000e503c;
    iVar25 = *piVar21;
    if (uVar15 <= uVar8) {
      *(short *)(iVar26 + 0xe59ca) = (short)uVar16;
    }
    *(int *)(iVar26 + 0xe59d0) = iVar10 + 10 + iVar25;
    *(undefined1 *)(iVar11 + 0xe5b97) = 1;
    *(undefined4 *)(iVar11 + 0xe4f3c) = 0;
    *(undefined4 *)(iVar11 + 0xe4f40) = 0;
    *(undefined4 *)(iVar11 + 0xe4f44) = 0;
    *(undefined2 *)(iVar11 + 0xe5b94) = 0;
    *(undefined1 *)(iVar11 + 0xe5b96) = 0;
    *(undefined1 *)(iVar11 + 0xe5a08) = 0;
    *(undefined1 *)(iVar11 + 0xe5a09) = 0;
    *(undefined4 *)(iVar11 + 0xe5a14) = 0;
    if (*(uint *)(iVar11 + 0xe597c) <= uVar15) {
      *(undefined4 *)(iVar11 + 0xe5a0c) = 0;
      *(undefined4 *)(iVar11 + 0xe5a10) = 0;
      goto LAB_000e4fca;
    }
    iVar26 = uVar16 - iVar28;
    uVar12 = (*(uint *)(iVar11 + 0xe597c) - iVar28) - (uVar15 + ~uVar16);
    uVar15 = iVar26 + 1;
    if ((int)uVar12 < 1) {
      *(undefined4 *)(iVar11 + 0xe5a0c) = 0;
      if ((int)uVar15 < 1) goto LAB_000e4ff6;
    }
    else {
      if ((int)uVar15 < 1) {
        *(uint *)(iVar11 + 0xe5a0c) = uVar12;
LAB_000e4ff6:
        *(undefined4 *)(DAT_000e5048 + 0xe5ade) = 0;
        goto LAB_000e4fca;
      }
      if (iVar26 - 1U < 0x7f) {
        uVar8 = *(int *)(DAT_000e5050 + iVar26 * 4 + 0xe54e8) * uVar12 >> 0xf;
      }
      else {
        uVar8 = uVar12;
        if (uVar15 != 1) {
          if (uVar15 < 0x81) {
            uVar8 = 0;
          }
          else {
            uVar8 = __udivsi3(uVar12,uVar15);
          }
        }
      }
      iVar26 = DAT_000e5040;
      uVar12 = uVar12 - uVar8 * uVar15;
      bVar33 = uVar15 == uVar12;
      uVar23 = uVar15 - uVar12;
      if ((int)uVar15 >= (int)uVar12) {
        bVar33 = uVar12 == 0;
        uVar23 = uVar12;
      }
      *(uint *)(DAT_000e5040 + 0xe5a8e) = uVar8;
      if ((!bVar33 && (int)uVar23 < 0 == ((int)uVar15 < (int)uVar12 && SBORROW4(uVar15,uVar12))) &&
         ((int)uVar12 <= (int)uVar16)) {
        *(uint *)(iVar26 + 0xe5a92) = (uVar16 + 1) - uVar12;
        goto LAB_000e4fca;
      }
    }
    *(undefined4 *)(DAT_000e504c + 0xe5afc) = 0;
LAB_000e4fca:
    iVar26 = DAT_000e5044;
    *(undefined4 *)(DAT_000e5044 + 0xe4fd8) = 2;
    *(undefined4 *)(iVar26 + 0xe4fdc) = 0;
    return 0;
  case 1:
    if (param_2 != 0) {
      return 0xfffffffe;
    }
    piVar21 = (int *)(DAT_000e4e00 + 0xe41ea);
    if (*piVar21 == 2) {
      *(undefined4 *)(DAT_000e4e00 + 0xe420a) = 0;
      *(undefined4 *)(iVar26 + 0xe420e) = 0;
      *(undefined2 *)(iVar26 + 0xe4212) = 0;
      *(undefined1 *)(iVar26 + 0xe4214) = 0;
      *(undefined1 *)(iVar26 + 0xe4215) = 0;
      *(undefined1 *)(iVar26 + 0xe461e) = 0;
      *(undefined1 *)(iVar26 + 0xe4a2a) = 0;
      *(undefined4 *)(iVar26 + 0xe4c36) = 0;
      *(undefined1 *)(iVar26 + 0xe4c3e) = 0;
      *(undefined1 *)(iVar26 + 0xe4c32) = 1;
      *(undefined1 *)(iVar26 + 0xe4c33) = 1;
      *piVar21 = 1;
      *(undefined4 *)(iVar26 + 0xe41ee) = 1;
      return 0;
    }
    break;
  case 2:
    if (*(int *)(DAT_000e4e04 + 0xe422a) == 1) {
      if (0xf < param_2 - 0x80) {
        return 0xfffffffe;
      }
      if (2 < *(byte *)param_3) {
        return 0xfffffffd;
      }
      if ((*(byte *)param_3 == 2) && (*(int *)(DAT_000e4e04 + 0xe4d56) == 0)) {
        return 0xfffffffb;
      }
      bVar31 = *(byte *)(param_3 + 1);
      if (*(byte *)(param_3 + 1) < 0x80) {
        bVar31 = *(byte *)(param_3 + 2);
      }
      if (0x7f < bVar31) {
        return 0xfffffffd;
      }
      iVar26 = 0;
      iVar10 = DAT_000e4e08 + 0xe4de3;
      uVar12 = param_3;
      while( true ) {
        bVar31 = *(byte *)(iVar26 + param_3 + 3);
        if (bVar31 < 0x80) {
          bVar31 = *(byte *)(iVar26 + param_3 + 4);
        }
        if (0x7f < bVar31) {
          return 0xfffffffd;
        }
        if (*(char *)(uVar12 + 0x13) < '\0') {
          return 0xfffffffd;
        }
        cVar2 = *(char *)(uVar12 + 0x1b);
        if (cVar2 == '\x0f') {
          return 0xfffffffd;
        }
        if (cVar2 == '\x17') {
          return 0xfffffffd;
        }
        if ((byte)(cVar2 - 0x1fU) < 0xe1) {
          return 0xfffffffd;
        }
        *(char *)(iVar10 + 1) = cVar2;
        iVar28 = iVar26 + 2 + param_3;
        bVar31 = *(byte *)(iVar28 + 3);
        if (bVar31 < 0x80) {
          bVar31 = *(byte *)(iVar28 + 4);
        }
        if (0x7f < bVar31) {
          return 0xfffffffd;
        }
        if (*(char *)(uVar12 + 0x14) < '\0') {
          return 0xfffffffd;
        }
        cVar2 = *(char *)(uVar12 + 0x1c);
        if (cVar2 == '\x0f') break;
        if (cVar2 == '\x17') {
          return 0xfffffffd;
        }
        if ((byte)(cVar2 - 0x1fU) < 0xe1) {
          return 0xfffffffd;
        }
        iVar26 = iVar26 + 4;
        *(char *)(iVar10 + 2) = cVar2;
        iVar10 = iVar10 + 2;
        uVar12 = uVar12 + 2;
        if (iVar26 == 0x10) {
          bVar31 = *(byte *)(param_3 + 0x23);
          if (*(byte *)(param_3 + 0x23) < 0x80) {
            bVar31 = *(byte *)(param_3 + 0x24);
          }
          if (0x7f < bVar31) {
            return 0xfffffffd;
          }
          if (1 < *(byte *)(param_3 + 0x25)) {
            return 0xfffffffd;
          }
          bVar31 = *(byte *)(DAT_000e4e0c + 0xe4f3c);
          *(uint *)(DAT_000e4e0c + param_2 * 4 + 0xe4cfc) = param_3;
          if (param_2 == bVar31) {
            FUN_000e30f0(param_2 - 0x70);
            return 0;
          }
          return 0;
        }
      }
      return 0xfffffffd;
    }
    break;
  case 3:
    if (param_2 == 0) {
      uVar7 = FUN_000e30f0(param_3);
      return uVar7;
    }
    return 0xfffffffe;
  case 4:
    if (param_2 != 0) {
      return 0xfffffffe;
    }
    if (*(int *)(DAT_000e4e10 + 0xe4368) - 1U < 2) {
      if (param_3 < 0x4000) {
        iVar26 = (int)*(short *)(DAT_000e4e10 + 0xe4e50) * (param_3 - 0x2000);
        if (iVar26 < 0) {
          iVar26 = -iVar26;
          iVar10 = -1;
        }
        else {
          iVar10 = 1;
        }
        iVar10 = iVar10 * (iVar26 >> 0xd);
        iVar26 = iVar10;
        if ((0x12c0 < iVar10 + 0x960U) && (iVar26 = -0x960, 0x960 < iVar10)) {
          iVar26 = 0x960;
        }
        *(int *)(DAT_000e4e14 + 0xe4eac) = iVar26;
        return 0;
      }
      return 0xfffffffe;
    }
    break;
  case 5:
    if (param_2 != 0) {
      return 0xfffffffe;
    }
    if (*(int *)(DAT_000e4e18 + 0xe43d0) - 1U < 2) {
      if (param_3 < 0x19) {
        *(short *)(DAT_000e4e18 + 0xe4eb8) = (short)param_3 * 100;
        return 0;
      }
      return 0xfffffffe;
    }
    break;
  case 6:
    if (param_2 != 0) {
      return 0xfffffffe;
    }
    if (*(int *)(DAT_000e4df4 + 0xe417a) - 1U < 2) {
      if (param_3 < 0x3d) {
        *(short *)(DAT_000e4df4 + 0xe4c6a) = (short)param_3 * 100;
        return 0;
      }
      return 0xfffffffe;
    }
    break;
  default:
    return 0xfffffffe;
  }
  return 0xffffffff;
}

