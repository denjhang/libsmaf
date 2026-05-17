/* MaHvDrvKR_SetCommand @ 000e7c5c 4174B */


/* YAMAHA::MaHvDrvKR_SetCommand(unsigned int, unsigned int, unsigned int) */

undefined4 YAMAHA::MaHvDrvKR_SetCommand(uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  undefined4 uVar8;
  int iVar9;
  ushort uVar10;
  int iVar11;
  uint uVar12;
  ushort uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  undefined1 *puVar23;
  undefined1 *puVar24;
  undefined4 *puVar25;
  int *piVar26;
  byte bVar27;
  short sVar28;
  int iVar29;
  undefined2 uVar30;
  int iVar31;
  int iVar32;
  undefined1 *puVar33;
  int iVar34;
  int iVar35;
  byte *pbVar36;
  int iVar37;
  uint local_2c [2];
  
  iVar9 = DAT_000e89c0;
  iVar18 = DAT_000e89b8;
  switch(param_1) {
  case 0:
    if (param_2 != 0) {
      return 0xfffffffe;
    }
    if ((*(int *)(DAT_000e89b8 + 0xe7caa) == 1) && (*(int *)(DAT_000e89b8 + 0xe8842) != 0)) {
      if (param_3 == 0) {
        return 0xfffffffe;
      }
      *(undefined4 *)(DAT_000e89b8 + 0xe86fe) = 0;
      *(undefined4 *)(iVar18 + 0xe8706) = 0;
      *(undefined4 *)(iVar18 + 0xe870e) = 0;
      bVar27 = *(byte *)param_3;
      if (bVar27 < 0x80) {
        *(undefined1 *)(iVar18 + 0xe86f2) = 1;
        local_2c[0] = (short)(ushort)bVar27 * 100 - 0x4b0;
        uVar8 = SignedSaturate(local_2c[0],0xf);
        SignedDoesSaturate(local_2c[0],0xf);
        uVar30 = (undefined2)uVar8;
      }
      else {
        if ((bVar27 & 0x7f) == 0) {
          uVar30 = 0x8000;
          local_2c[0] = 0xffff8000;
        }
        else {
          local_2c[0] = ((bVar27 & 0x7f) - 0x3c) * 100;
          uVar8 = SignedSaturate(local_2c[0],0xf);
          SignedDoesSaturate(local_2c[0],0xf);
          uVar30 = (undefined2)uVar8;
        }
        *(undefined1 *)(DAT_000e89bc + 0xe8742) = 0;
      }
      iVar18 = DAT_000e89dc;
      *(undefined2 *)(DAT_000e89dc + 0xe7fe6) = uVar30;
      if (0x7f < *(byte *)(param_3 + 1)) {
        return 0xfffffffd;
      }
      *(undefined1 *)(iVar18 + 0xe7fe8) =
           *(undefined1 *)((uint)*(byte *)(param_3 + 1) + DAT_000e89e0 + 0xe8d6e);
      iVar18 = DAT_000e89e4;
      uVar14 = (uint)*(byte *)(param_3 + 2);
      if (uVar14 < 0x80) {
        iVar37 = 1;
        iVar9 = 0;
      }
      else {
        iVar9 = uVar14 - 0x80;
        uVar14 = (uint)*(byte *)(param_3 + 3);
        iVar9 = iVar9 * 0x80;
        if (uVar14 < 0x80) {
          iVar37 = 2;
        }
        else {
          iVar37 = uVar14 - 0x80;
          uVar14 = (uint)*(byte *)(param_3 + 4);
          iVar9 = (iVar9 + iVar37) * 0x80;
          if (uVar14 < 0x80) {
            iVar37 = 3;
          }
          else {
            iVar37 = uVar14 - 0x80;
            uVar14 = (uint)*(byte *)(param_3 + 5);
            iVar9 = (iVar9 + iVar37) * 0x80;
            if (0x7f < uVar14) {
              return 0xfffffffd;
            }
            iVar37 = 4;
          }
        }
      }
      uVar14 = iVar9 + uVar14;
      iVar31 = iVar37 + 2;
      iVar9 = param_3 + iVar31;
      *(uint *)(DAT_000e89e4 + 0xe806c) = uVar14;
      *(bool *)(iVar18 + 0xe8a95) = uVar14 != 0;
      iVar18 = DAT_000e89e8;
      uVar19 = (uint)*(byte *)(param_3 + iVar31);
      if (uVar19 < 0x80) {
        iVar11 = 0;
        iVar9 = 1;
      }
      else {
        iVar11 = uVar19 - 0x80;
        uVar19 = (uint)*(byte *)(iVar9 + 1);
        iVar11 = iVar11 * 0x80;
        if (uVar19 < 0x80) {
          iVar9 = 2;
        }
        else {
          iVar35 = uVar19 - 0x80;
          uVar19 = (uint)*(byte *)(iVar9 + 2);
          iVar11 = (iVar11 + iVar35) * 0x80;
          if (uVar19 < 0x80) {
            iVar9 = 3;
          }
          else {
            iVar35 = uVar19 - 0x80;
            uVar19 = (uint)*(byte *)(iVar9 + 3);
            iVar11 = (iVar11 + iVar35) * 0x80;
            if (0x7f < uVar19) {
              return 0xfffffffd;
            }
            iVar9 = 4;
          }
        }
      }
      uVar19 = uVar19 + iVar11;
      iVar31 = iVar9 + iVar31;
      pbVar36 = (byte *)(iVar31 + param_3);
      if (uVar19 < 4) {
        uVar12 = uVar19;
        if (uVar19 == 0) {
          return 0xfffffffd;
        }
      }
      else {
        uVar12 = 4;
      }
      iVar11 = 0;
      uVar20 = 1;
      bVar27 = *pbVar36;
      while (uVar15 = (uint)bVar27, 0x7f < uVar15) {
        bVar2 = uVar12 <= uVar20;
        iVar11 = (iVar11 + uVar15 + -0x80) * 0x80;
        bVar1 = 3 < uVar20;
        uVar20 = uVar20 + 1;
        if (bVar1 || bVar2) {
          return 0xfffffffd;
        }
        pbVar36 = pbVar36 + 1;
        bVar27 = *pbVar36;
      }
      uVar15 = uVar15 + iVar11;
      iVar11 = iVar31 + uVar20;
      *(uint *)(DAT_000e89e8 + 0xe811e) = uVar15;
      if (uVar14 < uVar15) {
        if (uVar14 != 0) {
          return 0xfffffffd;
        }
        *(undefined4 *)(iVar18 + 0xe8b46) = 8;
      }
      else {
        *(uint *)(iVar18 + 0xe8b46) = uVar14 - uVar15;
      }
      iVar18 = DAT_000e89ec;
      bVar27 = *(byte *)(param_3 + iVar11);
      uVar14 = (uint)bVar27;
      iVar35 = iVar11 + 1;
      if (0x7e < uVar14 - 1) {
        return 0xfffffffd;
      }
      iVar32 = DAT_000e89ec + 0xe8122;
      iVar9 = uVar20 + iVar37 + iVar9 + param_3;
      uVar12 = DAT_000e89ec + 0xe8b97;
      uVar20 = DAT_000e89ec + 0xe8b8f;
      *(byte *)(DAT_000e89ec + 0xe8b8e) = bVar27;
      if (((iVar9 + 3U | uVar20) & 7) == 0 &&
          (10 < uVar14 && (iVar9 + 0xbU <= uVar20 || uVar12 <= iVar9 + 3U))) {
        uVar12 = (uint)(bVar27 >> 3);
        uVar8 = *(undefined4 *)(iVar9 + 3);
        uVar20 = uVar12 * 8;
        *(undefined4 *)(iVar18 + 0xe8b93) = *(undefined4 *)(iVar9 + 7);
        *(undefined4 *)(iVar18 + 0xe8b8f) = uVar8;
        if (1 < uVar12) {
          uVar8 = *(undefined4 *)(iVar9 + 0xb);
          *(undefined4 *)(iVar18 + 0xe8b9b) = *(undefined4 *)(iVar9 + 0xf);
          *(undefined4 *)(iVar18 + 0xe8b97) = uVar8;
          if (2 < uVar12) {
            uVar8 = *(undefined4 *)(iVar9 + 0x13);
            *(undefined4 *)(iVar18 + 0xe8ba3) = *(undefined4 *)(iVar9 + 0x17);
            *(undefined4 *)(iVar18 + 0xe8b9f) = uVar8;
            if (3 < uVar12) {
              uVar8 = *(undefined4 *)(iVar9 + 0x1b);
              *(undefined4 *)(iVar18 + 0xe8bab) = *(undefined4 *)(iVar9 + 0x1f);
              *(undefined4 *)(iVar18 + 0xe8ba7) = uVar8;
              if (4 < uVar12) {
                uVar8 = *(undefined4 *)(iVar9 + 0x23);
                *(undefined4 *)(iVar18 + 0xe8bb3) = *(undefined4 *)(iVar9 + 0x27);
                *(undefined4 *)(iVar18 + 0xe8baf) = uVar8;
                if (5 < uVar12) {
                  uVar8 = *(undefined4 *)(iVar9 + 0x2b);
                  *(undefined4 *)(iVar18 + 0xe8bbb) = *(undefined4 *)(iVar9 + 0x2f);
                  *(undefined4 *)(iVar18 + 0xe8bb7) = uVar8;
                  if (6 < uVar12) {
                    uVar8 = *(undefined4 *)(iVar9 + 0x33);
                    *(undefined4 *)(iVar18 + 0xe8bc3) = *(undefined4 *)(iVar9 + 0x37);
                    *(undefined4 *)(iVar18 + 0xe8bbf) = uVar8;
                    if (7 < uVar12) {
                      uVar8 = *(undefined4 *)(iVar9 + 0x3b);
                      *(undefined4 *)(iVar18 + 0xe8bcb) = *(undefined4 *)(iVar9 + 0x3f);
                      *(undefined4 *)(iVar18 + 0xe8bc7) = uVar8;
                      iVar18 = DAT_000e89f0;
                      if (8 < uVar12) {
                        uVar8 = *(undefined4 *)(iVar9 + 0x43);
                        *(undefined4 *)(DAT_000e89f0 + 0xe8cdb) = *(undefined4 *)(iVar9 + 0x47);
                        *(undefined4 *)(iVar18 + 0xe8cd7) = uVar8;
                        if (9 < uVar12) {
                          uVar8 = *(undefined4 *)(iVar9 + 0x4b);
                          *(undefined4 *)(iVar18 + 0xe8ce3) = *(undefined4 *)(iVar9 + 0x4f);
                          *(undefined4 *)(iVar18 + 0xe8cdf) = uVar8;
                          if (10 < uVar12) {
                            uVar8 = *(undefined4 *)(iVar9 + 0x53);
                            *(undefined4 *)(iVar18 + 0xe8ceb) = *(undefined4 *)(iVar9 + 0x57);
                            *(undefined4 *)(iVar18 + 0xe8ce7) = uVar8;
                            if (0xb < uVar12) {
                              uVar8 = *(undefined4 *)(iVar9 + 0x5b);
                              *(undefined4 *)(iVar18 + 0xe8cf3) = *(undefined4 *)(iVar9 + 0x5f);
                              *(undefined4 *)(iVar18 + 0xe8cef) = uVar8;
                              if (0xc < uVar12) {
                                uVar8 = *(undefined4 *)(iVar9 + 99);
                                *(undefined4 *)(iVar18 + 0xe8cfb) = *(undefined4 *)(iVar9 + 0x67);
                                *(undefined4 *)(iVar18 + 0xe8cf7) = uVar8;
                                if (0xd < uVar12) {
                                  uVar8 = *(undefined4 *)(iVar9 + 0x6b);
                                  *(undefined4 *)(iVar18 + 0xe8d03) = *(undefined4 *)(iVar9 + 0x6f);
                                  *(undefined4 *)(iVar18 + 0xe8cff) = uVar8;
                                  if (0xe < uVar12) {
                                    uVar8 = *(undefined4 *)(iVar9 + 0x73);
                                    *(undefined4 *)(iVar18 + 0xe8d0b) =
                                         *(undefined4 *)(iVar9 + 0x77);
                                    *(undefined4 *)(iVar18 + 0xe8d07) = uVar8;
                                    if (0xf < uVar12) {
                                      uVar8 = *(undefined4 *)(iVar9 + 0x7f);
                                      *(undefined4 *)(iVar18 + 0xe8d0f) =
                                           *(undefined4 *)(iVar9 + 0x7b);
                                      *(undefined4 *)(iVar18 + 0xe8d13) = uVar8;
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
        if (uVar14 != uVar20) {
          iVar18 = param_3 + iVar35;
          uVar15 = uVar20 + 1;
          iVar9 = DAT_000e89f4 + 0xe82d2;
          *(undefined1 *)(iVar9 + uVar20 + 0xa6d) = *(undefined1 *)(iVar18 + uVar12 * 8);
          if (uVar15 < uVar14) {
            uVar12 = uVar20 + 2;
            *(undefined1 *)(uVar15 + iVar9 + 0xa6d) = *(undefined1 *)(iVar18 + uVar15);
            if (uVar12 < uVar14) {
              uVar15 = uVar20 + 3;
              *(undefined1 *)(iVar9 + uVar12 + 0xa6d) = *(undefined1 *)(iVar18 + uVar12);
              if (uVar15 < uVar14) {
                uVar12 = uVar20 + 4;
                *(undefined1 *)(iVar9 + uVar15 + 0xa6d) = *(undefined1 *)(iVar18 + uVar15);
                if (uVar12 < uVar14) {
                  uVar15 = uVar20 + 5;
                  *(undefined1 *)(iVar9 + uVar12 + 0xa6d) = *(undefined1 *)(iVar18 + uVar12);
                  if (uVar15 < uVar14) {
                    uVar20 = uVar20 + 6;
                    *(undefined1 *)(uVar15 + iVar9 + 0xa6d) = *(undefined1 *)(iVar18 + uVar15);
                    if (uVar20 < uVar14) {
                      *(undefined1 *)(iVar9 + uVar20 + 0xa6d) =
                           *(undefined1 *)(param_3 + uVar20 + iVar35);
                    }
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar12 = iVar11 + param_3;
        puVar33 = (undefined1 *)(uVar14 + uVar12);
        iVar32 = iVar32 - uVar12;
        puVar23 = (undefined1 *)(uVar12 + 1);
        uVar20 = (uint)(puVar33 + ~uVar12) & 7;
        puVar23[iVar32 + 0xa6c] = *puVar23;
        if (puVar23 != puVar33) {
          if (uVar20 != 0) {
            if (uVar20 != 1) {
              if (uVar20 != 2) {
                if (uVar20 != 3) {
                  if (uVar20 != 4) {
                    if (uVar20 != 5) {
                      if (uVar20 != 6) {
                        puVar23 = (undefined1 *)(uVar12 + 2);
                        puVar23[iVar32 + 0xa6c] = *puVar23;
                      }
                      puVar23 = puVar23 + 1;
                      puVar23[iVar32 + 0xa6c] = *puVar23;
                    }
                    puVar23 = puVar23 + 1;
                    puVar23[iVar32 + 0xa6c] = *puVar23;
                  }
                  puVar23 = puVar23 + 1;
                  puVar23[iVar32 + 0xa6c] = *puVar23;
                }
                puVar23 = puVar23 + 1;
                puVar23[iVar32 + 0xa6c] = *puVar23;
              }
              puVar23 = puVar23 + 1;
              puVar23[iVar32 + 0xa6c] = *puVar23;
            }
            puVar23 = puVar23 + 1;
            puVar23[iVar32 + 0xa6c] = *puVar23;
            if (puVar23 == puVar33) goto LAB_000e834a;
          }
          do {
            (puVar23 + 1)[iVar32 + 0xa6c] = puVar23[1];
            (puVar23 + 2)[iVar32 + 0xa6c] = puVar23[2];
            puVar23[iVar32 + 0xa6f] = puVar23[3];
            puVar24 = puVar23 + 8;
            puVar23[iVar32 + 0xa70] = puVar23[4];
            puVar23[iVar32 + 0xa71] = puVar23[5];
            puVar23[iVar32 + 0xa72] = puVar23[6];
            puVar23[iVar32 + 0xa73] = puVar23[7];
            puVar24[iVar32 + 0xa6c] = puVar23[8];
            puVar23 = puVar24;
          } while (puVar24 != puVar33);
        }
      }
LAB_000e834a:
      iVar18 = DAT_000e89f8;
      iVar9 = DAT_000e89f8 + 0xe8dc7;
      iVar35 = uVar14 + iVar35;
      *(undefined1 *)(DAT_000e89f8 + 0xe8daa) = 0;
      iVar9 = FUN_000e6204(iVar9,uVar14,local_2c);
      if (iVar9 < 0) {
        return 0xfffffffd;
      }
      iVar37 = **(int **)(iVar18 + 0xe8ef2);
      iVar11 = iVar37 + iVar9 + 10;
      bVar6 = *(byte *)(iVar37 + iVar9 + 10);
      bVar27 = *(byte *)(iVar11 + 1);
      bVar4 = *(byte *)(iVar11 + 2);
      bVar5 = *(byte *)(iVar11 + 3);
      *(char *)(iVar18 + 0xe8daa) = *(char *)(iVar18 + 0xe8daa) + '\x01';
      *(undefined4 *)(iVar18 + 0xe8db2) = *(undefined4 *)(iVar18 + 0xe8da6);
      iVar37 = (bVar5 & 0x7f) +
               ((bVar4 & 0x7f) + ((bVar27 & 0x7f) + (bVar6 & 0x7f) * 0x80) * 0x80) * 0x80;
      *(int *)(iVar18 + 0xe8dae) = iVar37;
      iVar11 = **(int **)(iVar18 + 0xe8ef2);
      if ((*(byte *)(iVar11 + iVar37 + 1) & 0x7f) + (*(byte *)(iVar11 + iVar37) & 0x7f) * 0x80 == 2)
      {
        iVar9 = FUN_000e6204(iVar9 + iVar11,1,local_2c);
        if (iVar9 < 0) {
          return 0xfffffffd;
        }
        uVar12 = 1;
        iVar37 = **(int **)(iVar18 + 0xe8ef2) + iVar9 + 10;
        *(uint *)(iVar18 + 0xe8dae) =
             (*(byte *)(iVar37 + 3) & 0x7f) +
             ((*(byte *)(iVar37 + 2) & 0x7f) +
             ((*(byte *)(iVar37 + 1) & 0x7f) +
             (*(byte *)(**(int **)(iVar18 + 0xe8ef2) + iVar9 + 10) & 0x7f) * 0x80) * 0x80) * 0x80;
        uVar20 = uVar12;
      }
      else {
        uVar12 = 0;
        uVar20 = local_2c[0];
        if (local_2c[0] != 0) {
          uVar12 = 1;
        }
      }
      if (uVar14 <= uVar20) {
        uVar12 = 0;
      }
      if (uVar12 != 0) {
        iVar9 = (uVar14 + 1) - uVar20;
        iVar37 = (uVar20 - 1) + DAT_000e89fc + 0xe8402;
        iVar18 = DAT_000e89fc + 0xe8402 + uVar20 + 0xa6c;
        if (*(char *)(iVar37 + 0xa6d) == '2') {
          *(undefined1 *)(iVar37 + 0xa6d) = 0x45;
          iVar18 = FUN_000e6204(iVar18,iVar9,local_2c);
          if (iVar18 < 0) {
            return 0xfffffffd;
          }
          *(undefined1 *)(iVar37 + 0xa6d) = 0x32;
        }
        else {
          iVar18 = FUN_000e6204(iVar18,iVar9,local_2c);
          if (iVar18 < 0) {
            return 0xfffffffd;
          }
        }
        iVar9 = DAT_000e8a00;
        if (1 < (int)local_2c[0]) {
          uVar20 = uVar20 + (local_2c[0] - 1);
          puVar25 = (undefined4 *)(DAT_000e8a00 + 0xe8fd2);
          piVar26 = (int *)(DAT_000e8a00 + 0xe8e86);
          uVar12 = *(uint *)(DAT_000e8a00 + 0xe8e92) >> 1;
          *(uint *)(DAT_000e8a00 + 0xe8e92) = uVar12;
          iVar37 = *(int *)*puVar25 + iVar18 + 10;
          bVar27 = *(byte *)(*(int *)*puVar25 + iVar18 + 10);
          bVar4 = *(byte *)(iVar37 + 1);
          bVar5 = *(byte *)(iVar37 + 2);
          bVar6 = *(byte *)(iVar37 + 3);
          *(uint *)(iVar9 + 0xe8e9a) = *piVar26 - uVar12;
          *(char *)(iVar9 + 0xe8e8a) = *(char *)(iVar9 + 0xe8e8a) + '\x01';
          *(uint *)(iVar9 + 0xe8e96) =
               (bVar6 & 0x7f) +
               ((bVar5 & 0x7f) + ((bVar4 & 0x7f) + (bVar27 & 0x7f) * 0x80) * 0x80) * 0x80;
        }
      }
      iVar18 = DAT_000e8a10;
      if (uVar20 < uVar14) {
        iVar9 = FUN_000e6204(DAT_000e8a10 + uVar20 + 0xe9253,uVar14 - uVar20,local_2c);
        if (iVar9 < 0) {
          return 0xfffffffd;
        }
        iVar37 = **(int **)(iVar18 + 0xe937e) + iVar9 + 10;
        bVar6 = *(byte *)(**(int **)(iVar18 + 0xe937e) + iVar9 + 10);
        bVar27 = *(byte *)(iVar37 + 1);
        bVar4 = *(byte *)(iVar37 + 2);
        bVar5 = *(byte *)(iVar37 + 3);
        *(char *)(iVar18 + 0xe9236) = *(char *)(iVar18 + 0xe9236) + '\x01';
        *(undefined4 *)(iVar18 + 0xe924e) = 0;
        *(uint *)(iVar18 + 0xe924a) =
             (bVar5 & 0x7f) +
             ((bVar4 & 0x7f) + ((bVar27 & 0x7f) + (bVar6 & 0x7f) * 0x80) * 0x80) * 0x80;
      }
      iVar18 = DAT_000e8a04;
      iVar9 = iVar35 + 1;
      if (0x7f < *(byte *)(param_3 + iVar35)) {
        return 0xfffffffd;
      }
      bVar27 = *(byte *)(param_3 + iVar35) + 1;
      iVar37 = DAT_000e8a04 + 0xe84b8;
      *(undefined4 *)(DAT_000e8a04 + 0xe88f0) = 0;
      *(byte *)(iVar18 + 0xe88ec) = bVar27;
      *(undefined2 *)(iVar18 + 0xe88f4) = 0x2000;
      if (1 < bVar27) {
        if (0x7f < *(byte *)(param_3 + iVar9)) {
          return 0xfffffffd;
        }
        iVar11 = *(int *)(iVar18 + 0xe8f04) * 0x102;
        *(uint *)(iVar18 + 0xe88f8) = iVar11 * (uint)*(byte *)(param_3 + iVar9) >> 0xf;
        bVar5 = *(byte *)(param_3 + iVar35 + 2);
        uVar13 = (ushort)bVar5;
        bVar4 = *(byte *)(param_3 + iVar35 + 2 + 1);
        uVar10 = (ushort)bVar4;
        uVar7 = uVar13;
        if (uVar13 < 0x80) {
          uVar7 = uVar10;
        }
        if (0x7f < uVar7) {
          return 0xfffffffd;
        }
        iVar9 = iVar35 + param_3;
        iVar32 = (short)(ushort)bVar27 * 3 + (param_3 - 6) + iVar35;
        iVar35 = iVar9;
        if ((iVar32 - iVar9) * -0x80000000 < 0) {
          *(ushort *)(iVar18 + 0xe88fc) = (ushort)bVar5 | (ushort)bVar4 << 7;
          if (0x7f < *(byte *)(iVar9 + 4)) {
            return 0xfffffffd;
          }
          iVar37 = iVar18 + 0xe84c0;
          iVar35 = iVar9 + 3;
          *(uint *)(iVar18 + 0xe8900) = iVar11 * (uint)*(byte *)(iVar9 + 4) >> 0xf;
          uVar13 = (ushort)*(byte *)(iVar9 + 5);
          uVar10 = (ushort)*(byte *)(iVar9 + 6);
          uVar7 = uVar13;
          if (uVar13 < 0x80) {
            uVar7 = uVar10;
          }
          if (0x7f < uVar7) {
            return 0xfffffffd;
          }
        }
        while( true ) {
          iVar9 = (4 - param_3) + iVar35;
          *(ushort *)(iVar37 + 0x444) = uVar13 | uVar10 << 7;
          if (iVar35 == iVar32) break;
          if (0x7f < *(byte *)(iVar35 + 4)) {
            return 0xfffffffd;
          }
          *(uint *)(iVar37 + 0x448) = iVar11 * (uint)*(byte *)(iVar35 + 4) >> 0xf;
          bVar27 = *(byte *)(iVar35 + 5);
          bVar4 = bVar27;
          if (bVar27 < 0x80) {
            bVar4 = *(byte *)(iVar35 + 6);
          }
          if (0x7f < bVar4) {
            return 0xfffffffd;
          }
          *(ushort *)(iVar37 + 0x44c) = (ushort)bVar27 | (ushort)*(byte *)(iVar35 + 6) << 7;
          if (0x7f < *(byte *)(iVar35 + 7)) {
            return 0xfffffffd;
          }
          *(uint *)(iVar37 + 0x450) = iVar11 * (uint)*(byte *)(iVar35 + 7) >> 0xf;
          uVar13 = (ushort)*(byte *)(iVar35 + 8);
          uVar10 = (ushort)*(byte *)(iVar35 + 9);
          uVar7 = uVar13;
          if (uVar13 < 0x80) {
            uVar7 = uVar10;
          }
          iVar37 = iVar37 + 0x10;
          iVar35 = iVar35 + 6;
          if (0x7f < uVar7) {
            return 0xfffffffd;
          }
        }
      }
      iVar18 = DAT_000e8a08;
      iVar37 = iVar9 + 1;
      if (0x7f < *(byte *)(param_3 + iVar9)) {
        return 0xfffffffd;
      }
      bVar27 = *(byte *)(param_3 + iVar9) + 1;
      uVar14 = (uint)bVar27;
      iVar11 = DAT_000e8a08 + 0xe8624;
      *(undefined4 *)(DAT_000e8a08 + 0xe8650) = 0;
      *(byte *)(iVar18 + 0xe864f) = bVar27;
      *(undefined2 *)(iVar18 + 0xe8654) = 0;
      if (uVar14 < 2) {
LAB_000e8a16:
        iVar18 = DAT_000e8d18;
        uVar14 = (uint)*(byte *)(param_3 + iVar37);
        iVar9 = iVar37 + 1;
        if (0x7f < uVar14) {
          return 0xfffffffd;
        }
        *(byte *)(DAT_000e8d18 + 0xe926a) = *(byte *)(param_3 + iVar37);
        if (uVar14 != 0) {
          uVar12 = (uint)*(byte *)(param_3 + iVar9);
          iVar11 = iVar37 + 2;
          if (0x7f < uVar12) {
            return 0xfffffffd;
          }
          iVar35 = iVar9 + uVar14;
          puVar17 = (uint *)(iVar18 + 0xe926a);
          uVar14 = iVar35 - iVar11 & 7;
          iVar32 = *(int *)(iVar18 + 0xe9476) * 0x102;
          iVar9 = iVar11;
          if (uVar14 != 0) {
            puVar17 = (uint *)(iVar18 + 0xe926e);
            iVar9 = iVar37 + 3;
            *puVar17 = iVar32 * uVar12 >> 0xf;
            uVar12 = (uint)*(byte *)(iVar11 + param_3);
            if (0x7f < uVar12) {
              return 0xfffffffd;
            }
            if (uVar14 != 1) {
              iVar11 = iVar9;
              if (uVar14 != 2) {
                if (uVar14 != 3) {
                  if (uVar14 != 4) {
                    if (uVar14 != 5) {
                      if (uVar14 != 6) {
                        iVar11 = iVar37 + 4;
                        puVar17 = (uint *)(iVar18 + 0xe9272);
                        *puVar17 = iVar32 * uVar12 >> 0xf;
                        uVar12 = (uint)*(byte *)(iVar9 + param_3);
                        if (0x7f < uVar12) {
                          return 0xfffffffd;
                        }
                      }
                      iVar9 = iVar11 + 1;
                      puVar17 = puVar17 + 1;
                      *puVar17 = iVar32 * uVar12 >> 0xf;
                      uVar12 = (uint)*(byte *)(iVar11 + param_3);
                      if (0x7f < uVar12) {
                        return 0xfffffffd;
                      }
                    }
                    iVar11 = iVar9 + 1;
                    puVar17 = puVar17 + 1;
                    *puVar17 = iVar32 * uVar12 >> 0xf;
                    uVar12 = (uint)*(byte *)(iVar9 + param_3);
                    if (0x7f < uVar12) {
                      return 0xfffffffd;
                    }
                  }
                  iVar9 = iVar11 + 1;
                  puVar17 = puVar17 + 1;
                  *puVar17 = iVar32 * uVar12 >> 0xf;
                  uVar12 = (uint)*(byte *)(iVar11 + param_3);
                  if (0x7f < uVar12) {
                    return 0xfffffffd;
                  }
                }
                iVar11 = iVar9 + 1;
                puVar17 = puVar17 + 1;
                *puVar17 = iVar32 * uVar12 >> 0xf;
                uVar12 = (uint)*(byte *)(iVar9 + param_3);
                if (0x7f < uVar12) {
                  return 0xfffffffd;
                }
              }
              iVar9 = iVar11 + 1;
              puVar17 = puVar17 + 1;
              *puVar17 = iVar32 * uVar12 >> 0xf;
              uVar12 = (uint)*(byte *)(iVar11 + param_3);
              if (0x7f < uVar12) {
                return 0xfffffffd;
              }
            }
          }
          while( true ) {
            iVar18 = iVar9 + 1;
            iVar16 = iVar9 + 7;
            iVar29 = iVar9 + 3;
            iVar21 = iVar9 + 4;
            iVar11 = iVar9 + 5;
            iVar37 = iVar9 + 6;
            iVar34 = iVar9 + 2;
            puVar17[1] = iVar32 * uVar12 >> 0xf;
            if (iVar9 == iVar35) break;
            pbVar36 = (byte *)(iVar9 + param_3);
            iVar9 = iVar9 + 8;
            if (0x7f < *pbVar36) {
              return 0xfffffffd;
            }
            puVar17[2] = iVar32 * (uint)*pbVar36 >> 0xf;
            uVar14 = (uint)*(byte *)(iVar18 + param_3);
            if (0x7f < uVar14) {
              return 0xfffffffd;
            }
            puVar17[3] = iVar32 * uVar14 >> 0xf;
            uVar14 = (uint)*(byte *)(iVar34 + param_3);
            if (0x7f < uVar14) {
              return 0xfffffffd;
            }
            puVar17[4] = iVar32 * uVar14 >> 0xf;
            uVar14 = (uint)*(byte *)(iVar29 + param_3);
            if (0x7f < uVar14) {
              return 0xfffffffd;
            }
            puVar17[5] = iVar32 * uVar14 >> 0xf;
            uVar14 = (uint)*(byte *)(iVar21 + param_3);
            if (0x7f < uVar14) {
              return 0xfffffffd;
            }
            puVar17[6] = iVar32 * uVar14 >> 0xf;
            uVar14 = (uint)*(byte *)(iVar11 + param_3);
            if (0x7f < uVar14) {
              return 0xfffffffd;
            }
            puVar17[7] = iVar32 * uVar14 >> 0xf;
            uVar14 = (uint)*(byte *)(iVar37 + param_3);
            if (0x7f < uVar14) {
              return 0xfffffffd;
            }
            puVar17 = puVar17 + 8;
            *puVar17 = iVar32 * uVar14 >> 0xf;
            uVar12 = (uint)*(byte *)(iVar16 + param_3);
            if (0x7f < uVar12) {
              return 0xfffffffd;
            }
          }
        }
        iVar18 = DAT_000e8d1c;
        if (iVar9 == iVar31 + uVar19) {
          piVar26 = *(int **)(DAT_000e8d1c + 0xe979e);
          iVar37 = *(int *)(DAT_000e8d1c + 0xe965a);
          sVar28 = (*(byte *)(*piVar26 + iVar37 + 1) & 0x7f) +
                   (*(byte *)(*piVar26 + iVar37) & 0x7f) * 0x80;
          *(short *)(DAT_000e8d1c + 0xe97a2) = sVar28;
          *(ushort *)(iVar18 + 0xe97a4) =
               (*(byte *)(*piVar26 + iVar37 + 2 + 1) & 0x7f) +
               (*(byte *)(*piVar26 + iVar37 + 2) & 0x7f) * 0x80;
          iVar31 = (*(byte *)(*piVar26 + iVar37 + 4 + 1) & 0x7f) +
                   (*(byte *)(*piVar26 + iVar37 + 4) & 0x7f) * 0x80;
          *(short *)(iVar18 + 0xe97a6) = (short)iVar31;
          *(ushort *)(iVar18 + 0xe97a8) =
               (*(byte *)(*piVar26 + iVar37 + 6 + 1) & 0x7f) +
               (*(byte *)(*piVar26 + iVar37 + 6) & 0x7f) * 0x80;
          *(ushort *)(iVar18 + 0xe97aa) =
               (*(byte *)(*piVar26 + iVar37 + 8 + 1) & 0x7f) +
               (*(byte *)(*piVar26 + iVar37 + 8) & 0x7f) * 0x80;
          iVar9 = *piVar26;
          *(undefined1 *)(iVar18 + 0xe98bd) = 1;
          *(undefined4 *)(iVar18 + 0xe8c12) = 0;
          *(int *)(iVar18 + 0xe97ae) = iVar9 + iVar37 + 10;
          *(undefined4 *)(iVar18 + 0xe8c16) = 0;
          *(undefined1 *)(iVar18 + 0xe96f6) = 0;
          *(undefined1 *)(iVar18 + 0xe96f7) = 0;
          *(undefined1 *)(iVar18 + 0xe96f8) = 0;
          *(undefined2 *)(iVar18 + 0xe98ba) = 0;
          *(undefined1 *)(iVar18 + 0xe98bc) = 0;
          iVar9 = DAT_000e8d20;
          iVar37 = 0;
          if ((sVar28 == 0) && (iVar37 = iVar31, *(char *)(iVar18 + 0xe973a) == '\0')) {
            iVar37 = 0;
          }
          puVar25 = (undefined4 *)(DAT_000e8d20 + 0xe8cec);
          iVar18 = *(int *)(DAT_000e8d20 + 0xe9750);
          *(int *)(DAT_000e8d20 + 0xe8d00) = iVar37;
          *puVar25 = 2;
          *(undefined4 *)(iVar9 + 0xe8cf0) = 0;
          *(bool *)(iVar9 + 0xe9820) = iVar18 != 0;
          return 0;
        }
        return 0xfffffffd;
      }
      pbVar36 = (byte *)(param_3 + iVar37);
      if (*pbVar36 < 0x80) {
        iVar37 = iVar9 + 3;
        iVar35 = *(int *)(iVar18 + 0xe9070) * 0x102;
        *(uint *)(iVar18 + 0xe8658) = iVar35 * (uint)*pbVar36 >> 0xf;
        uVar12 = (uint)*(byte *)(param_3 + iVar9 + 2);
        if (uVar12 < 0x80) {
          iVar34 = 1;
          iVar21 = iVar9 + param_3;
          uVar20 = uVar14 - 2 & 3;
          iVar29 = DAT_000e8a0c + 0xe8678;
          iVar32 = iVar21;
          if (uVar20 != 0) {
            iVar34 = 2;
            *(undefined2 *)(iVar18 + 0xe865c) = *(undefined2 *)(iVar29 + uVar12 * 2 + 0xe20);
            if (0x7f < *(byte *)(iVar21 + 3)) {
              return 0xfffffffd;
            }
            iVar37 = iVar9 + 5;
            iVar16 = iVar18 + 0xe862c;
            *(uint *)(iVar18 + 0xe8660) = iVar35 * (uint)*(byte *)(iVar21 + 3) >> 0xf;
            uVar12 = (uint)*(byte *)(iVar21 + 4);
            iVar22 = iVar21 + 2;
            if (0x7f < uVar12) {
              return 0xfffffffd;
            }
            iVar11 = iVar16;
            iVar32 = iVar22;
            if (uVar20 != 1) {
              if (uVar20 != 2) {
                iVar34 = 3;
                *(undefined2 *)(iVar18 + 0xe8664) = *(undefined2 *)(iVar29 + uVar12 * 2 + 0xe20);
                if (0x7f < *(byte *)(iVar21 + 5)) {
                  return 0xfffffffd;
                }
                iVar37 = iVar9 + 7;
                iVar16 = iVar18 + 0xe8634;
                iVar22 = iVar21 + 4;
                *(uint *)(iVar18 + 0xe8668) = iVar35 * (uint)*(byte *)(iVar21 + 5) >> 0xf;
                uVar12 = (uint)*(byte *)(iVar21 + 6);
                if (0x7f < uVar12) {
                  return 0xfffffffd;
                }
              }
              iVar34 = iVar34 + 1;
              *(undefined2 *)(iVar16 + 0x38) = *(undefined2 *)(iVar29 + uVar12 * 2 + 0xe20);
              if (0x7f < *(byte *)(iVar22 + 3)) {
                return 0xfffffffd;
              }
              iVar37 = iVar37 + 2;
              iVar11 = iVar16 + 8;
              iVar32 = iVar22 + 2;
              *(uint *)(iVar16 + 0x3c) = iVar35 * (uint)*(byte *)(iVar22 + 3) >> 0xf;
              uVar12 = (uint)*(byte *)(iVar22 + 4);
              if (0x7f < uVar12) {
                return 0xfffffffd;
              }
            }
          }
          do {
            uVar20 = iVar34 + 1;
            *(undefined2 *)(iVar11 + 0x38) = *(undefined2 *)(iVar29 + uVar12 * 2 + 0xe20);
            iVar34 = iVar34 + 4;
            if (uVar20 == uVar14) goto LAB_000e8a16;
            iVar37 = iVar37 + 8;
            if (0x7f < *(byte *)(iVar32 + 3)) {
              return 0xfffffffd;
            }
            *(uint *)(iVar11 + 0x3c) = iVar35 * (uint)*(byte *)(iVar32 + 3) >> 0xf;
            if (0x7f < *(byte *)(iVar32 + 4)) {
              return 0xfffffffd;
            }
            *(undefined2 *)(iVar11 + 0x40) =
                 *(undefined2 *)(iVar29 + (uint)*(byte *)(iVar32 + 4) * 2 + 0xe20);
            if (0x7f < *(byte *)(iVar32 + 5)) {
              return 0xfffffffd;
            }
            *(uint *)(iVar11 + 0x44) = iVar35 * (uint)*(byte *)(iVar32 + 5) >> 0xf;
            if (0x7f < *(byte *)(iVar32 + 6)) {
              return 0xfffffffd;
            }
            *(undefined2 *)(iVar11 + 0x48) =
                 *(undefined2 *)(iVar29 + (uint)*(byte *)(iVar32 + 6) * 2 + 0xe20);
            if (0x7f < *(byte *)(iVar32 + 7)) {
              return 0xfffffffd;
            }
            *(uint *)(iVar11 + 0x4c) = iVar35 * (uint)*(byte *)(iVar32 + 7) >> 0xf;
            if (0x7f < *(byte *)(iVar32 + 8)) {
              return 0xfffffffd;
            }
            *(undefined2 *)(iVar11 + 0x50) =
                 *(undefined2 *)(iVar29 + (uint)*(byte *)(iVar32 + 8) * 2 + 0xe20);
            if (0x7f < *(byte *)(iVar32 + 9)) {
              return 0xfffffffd;
            }
            *(uint *)(iVar11 + 0x54) = iVar35 * (uint)*(byte *)(iVar32 + 9) >> 0xf;
            uVar12 = (uint)*(byte *)(iVar32 + 10);
            iVar11 = iVar11 + 0x20;
            iVar32 = iVar32 + 8;
          } while (uVar12 < 0x80);
        }
      }
      return 0xfffffffd;
    }
    break;
  case 1:
    if (param_2 != 0) {
      return 0xfffffffe;
    }
    piVar26 = (int *)(DAT_000e89c0 + 0xe7d0c);
    if (*piVar26 == 2) {
      *(undefined4 *)(DAT_000e89c0 + 0xe7d2c) = 0;
      *(undefined4 *)(iVar9 + 0xe7d30) = 0;
      *(undefined2 *)(iVar9 + 0xe7d34) = 0;
      *(undefined1 *)(iVar9 + 0xe7d36) = 0;
      *(undefined1 *)(iVar9 + 0xe7d37) = 0;
      *(undefined1 *)(iVar9 + 0xe8140) = 0;
      *(undefined1 *)(iVar9 + 0xe854c) = 0;
      *(undefined4 *)(iVar9 + 0xe8758) = 0;
      *(undefined1 *)(iVar9 + 0xe875c) = 0;
      *(undefined1 *)(iVar9 + 0xe8778) = 0;
      *(undefined1 *)(iVar9 + 0xe8754) = 1;
      *(undefined1 *)(iVar9 + 0xe8755) = 1;
      *piVar26 = 1;
      *(undefined4 *)(iVar9 + 0xe7d10) = 1;
      return 0;
    }
    break;
  case 2:
    if (*(int *)(DAT_000e89c4 + 0xe7d50) == 1) {
      if (0xf < param_2 - 0x80) {
        return 0xfffffffe;
      }
      if (2 < *(byte *)param_3) {
        return 0xfffffffd;
      }
      if ((*(byte *)param_3 == 2) && (*(int *)(DAT_000e89c4 + 0xe88cc) == 0)) {
        return 0xfffffffb;
      }
      bVar27 = *(byte *)(param_3 + 1);
      if (*(byte *)(param_3 + 1) < 0x80) {
        bVar27 = *(byte *)(param_3 + 2);
      }
      if (0x7f < bVar27) {
        return 0xfffffffd;
      }
      iVar18 = 0;
      iVar9 = DAT_000e89c8 + 0xe8959;
      uVar14 = param_3;
      while( true ) {
        bVar27 = *(byte *)(iVar18 + param_3 + 3);
        if (bVar27 < 0x80) {
          bVar27 = *(byte *)(iVar18 + param_3 + 4);
        }
        if (0x7f < bVar27) {
          return 0xfffffffd;
        }
        if (*(char *)(uVar14 + 0x13) < '\0') {
          return 0xfffffffd;
        }
        cVar3 = *(char *)(uVar14 + 0x1b);
        if (cVar3 == '\x0f') {
          return 0xfffffffd;
        }
        if (cVar3 == '\x17') {
          return 0xfffffffd;
        }
        if ((byte)(cVar3 - 0x1fU) < 0xe1) {
          return 0xfffffffd;
        }
        *(char *)(iVar9 + 1) = cVar3;
        iVar37 = iVar18 + 2 + param_3;
        bVar27 = *(byte *)(iVar37 + 3);
        if (bVar27 < 0x80) {
          bVar27 = *(byte *)(iVar37 + 4);
        }
        if (0x7f < bVar27) {
          return 0xfffffffd;
        }
        if (*(char *)(uVar14 + 0x14) < '\0') {
          return 0xfffffffd;
        }
        cVar3 = *(char *)(uVar14 + 0x1c);
        if (cVar3 == '\x0f') {
          return 0xfffffffd;
        }
        if (cVar3 == '\x17') {
          return 0xfffffffd;
        }
        if ((byte)(cVar3 - 0x1fU) < 0xe1) {
          return 0xfffffffd;
        }
        *(char *)(iVar9 + 2) = cVar3;
        iVar37 = iVar18 + 4 + param_3;
        bVar27 = *(byte *)(iVar37 + 3);
        if (bVar27 < 0x80) {
          bVar27 = *(byte *)(iVar37 + 4);
        }
        if (0x7f < bVar27) {
          return 0xfffffffd;
        }
        if (*(char *)(uVar14 + 0x15) < '\0') {
          return 0xfffffffd;
        }
        cVar3 = *(char *)(uVar14 + 0x1d);
        if (cVar3 == '\x0f') {
          return 0xfffffffd;
        }
        if (cVar3 == '\x17') {
          return 0xfffffffd;
        }
        if ((byte)(cVar3 - 0x1fU) < 0xe1) {
          return 0xfffffffd;
        }
        *(char *)(iVar9 + 3) = cVar3;
        iVar37 = iVar18 + 6 + param_3;
        bVar27 = *(byte *)(iVar37 + 3);
        if (bVar27 < 0x80) {
          bVar27 = *(byte *)(iVar37 + 4);
        }
        if (0x7f < bVar27) {
          return 0xfffffffd;
        }
        if (*(char *)(uVar14 + 0x16) < '\0') {
          return 0xfffffffd;
        }
        cVar3 = *(char *)(uVar14 + 0x1e);
        if (cVar3 == '\x0f') break;
        if (cVar3 == '\x17') {
          return 0xfffffffd;
        }
        if ((byte)(cVar3 - 0x1fU) < 0xe1) {
          return 0xfffffffd;
        }
        iVar18 = iVar18 + 8;
        *(char *)(iVar9 + 4) = cVar3;
        iVar9 = iVar9 + 4;
        uVar14 = uVar14 + 4;
        if (iVar18 == 0x10) {
          bVar27 = *(byte *)(param_3 + 0x23);
          if (*(byte *)(param_3 + 0x23) < 0x80) {
            bVar27 = *(byte *)(param_3 + 0x24);
          }
          if (0x7f < bVar27) {
            return 0xfffffffd;
          }
          if (1 < *(byte *)(param_3 + 0x25)) {
            return 0xfffffffd;
          }
          bVar27 = *(byte *)(DAT_000e89cc + 0xe8b40);
          *(uint *)(DAT_000e89cc + param_2 * 4 + 0xe8900) = param_3;
          if (param_2 != bVar27) {
            return 0;
          }
          FUN_000e6b64(param_2 - 0x70);
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
    uVar8 = FUN_000e6b64(param_3);
    return uVar8;
  case 4:
    if (param_2 != 0) {
      return 0xfffffffe;
    }
    if (*(int *)(DAT_000e89d0 + 0xe7f1c) - 1U < 2) {
      if (0x3fff < param_3) {
        return 0xfffffffe;
      }
      iVar18 = (int)*(short *)(DAT_000e89d0 + 0xe8a54) * (param_3 - 0x2000);
      if (iVar18 < 0) {
        iVar18 = -iVar18;
        iVar9 = -1;
      }
      else {
        iVar9 = 1;
      }
      iVar9 = iVar9 * (iVar18 >> 0xd);
      iVar18 = -0x960;
      if (-0x961 < iVar9) {
        iVar18 = iVar9;
      }
      if (0x95f < iVar18) {
        iVar18 = 0x960;
      }
      *(int *)(DAT_000e89d4 + 0xe8a84) = iVar18;
      return 0;
    }
    break;
  case 5:
    if (param_2 != 0) {
      return 0xfffffffe;
    }
    if (*(int *)(DAT_000e89d8 + 0xe7f7c) - 1U < 2) {
      if (0x18 < param_3) {
        return 0xfffffffe;
      }
      *(short *)(DAT_000e89d8 + 0xe8ab4) = (short)param_3 * 100;
      return 0;
    }
    break;
  case 6:
    if (param_2 != 0) {
      return 0xfffffffe;
    }
    if (*(int *)(DAT_000e89b4 + 0xe7c8a) - 1U < 2) {
      if (0x3c < param_3) {
        return 0xfffffffe;
      }
      *(short *)(DAT_000e89b4 + 0xe87ca) = (short)param_3 * 100;
      return 0;
    }
    break;
  default:
    return 0xfffffffe;
  }
  return 0xffffffff;
}

