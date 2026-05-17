/* MaS2PCnvKR_Convert @ 0020854c 53252B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* YAMAHA::MaS2PCnvKR_Convert(unsigned char*, unsigned int, void*) */

void YAMAHA::MaS2PCnvKR_Convert(uchar *param_1,uint param_2,void *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  uchar *puVar21;
  uint uVar22;
  long lVar23;
  uint uVar24;
  ulong uVar25;
  int *piVar26;
  int *piVar27;
  long lVar28;
  byte bVar29;
  uint uVar30;
  uint uVar31;
  short *psVar32;
  uint uVar33;
  ushort *puVar34;
  ushort uVar35;
  uint uVar36;
  uint uVar37;
  undefined **ppuVar38;
  long lVar39;
  byte bVar40;
  long lVar41;
  undefined1 uVar42;
  undefined2 uVar43;
  int iVar44;
  uint uVar45;
  short *psVar46;
  uchar uVar47;
  long lVar48;
  long lVar49;
  byte bVar50;
  long lVar51;
  uint local_34;
  uint local_30;
  uint local_20;
  byte local_10 [2];
  uchar local_e;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (DAT_0057de20 != 1) {
    uVar11 = 0xffffffff;
    goto LAB_002086d0;
  }
  if ((param_1 == (uchar *)0x0) || (param_2 == 0)) {
    uVar11 = 0xfffffffe;
    goto LAB_002086d0;
  }
  uVar11 = 0;
  if (DAT_0057de30 == 0) goto LAB_002086d0;
  uVar22 = (uint)DAT_0057de4d;
  if ((DAT_0057de4d == 0) || (DAT_0057de4d < DAT_0057e7cc)) {
    uVar11 = 0;
    uVar25 = (ulong)DAT_0057de38;
    if (DAT_0057de3c <= DAT_0057de38) goto LAB_002086d0;
    DAT_0057de50 = 0;
    DAT_0057de4d = 0;
    DAT_0057de4c = '\0';
    DAT_0057e7b8 = '\0';
    DAT_0057e7bc = 0;
    DAT_0057e7c9 = 0;
    DAT_0057e7cb = 0;
    DAT_0057e7cc = 0;
    DAT_0057e7d0 = 0;
    DAT_0057e7d4 = 0;
    DAT_0057e7d8 = 0;
    DAT_0057e7da = '\0';
    DAT_0057e7dc = 0;
    DAT_0057e7e4 = 0;
    DAT_0057de60 = 0;
    DAT_0057de58 = 0;
    DAT_0057de67 = 0;
    DAT_0057de69 = 0;
    DAT_0057de48 = 4;
    DAT_0057e7ba = 1;
    DAT_0057e7bb = 1;
    DAT_0057e7c8 = 7;
    DAT_0057e7ca = 7;
    DAT_0057e7c0 = &DAT_0057de58;
    DAT_0057de5c = DAT_0057de54;
    DAT_0057de5d = DAT_0057de49;
    DAT_0057de64 = 0x92e;
    DAT_0057de66 = 7;
    DAT_0057de68 = 7;
    DAT_0057de6a = 1;
    DAT_0057de6b = 1;
    DAT_0057de6c = 0;
    uVar11 = uVar25;
    if (DAT_0057de44 == '\0') {
      do {
        uVar11 = uVar25;
        if (99 < DAT_0057e7bc) break;
        DAT_0057de38 = (int)uVar25 + 2;
        if ((DAT_0057de3c < DAT_0057de38) || (-1 < *(char *)(DAT_0057de30 + uVar25))) {
          DAT_0057de38 = (int)uVar25 + 1;
          uVar11 = (ulong)DAT_0057de38;
          DAT_0057e7bc = DAT_0057e7bc + 1;
          if (*(char *)(DAT_0057de30 + uVar25) == ']') goto LAB_00208c88;
        }
        else {
          DAT_0057e7bc = DAT_0057e7bc + 2;
          uVar11 = (ulong)DAT_0057de38;
          if ((*(char *)(DAT_0057de30 + uVar25 + 1) == -0x23) &&
             (*(char *)(DAT_0057de30 + uVar25) == -0x5d)) {
LAB_00208c88:
            DAT_0057de44 = '\x01';
            break;
          }
        }
        uVar25 = uVar11;
      } while ((uint)uVar11 < DAT_0057de3c);
    }
    uVar36 = DAT_0057de3c - (int)uVar11;
    if ((0 < (int)uVar36) && (DAT_0057e7bc < 100)) {
      uVar22 = 0;
      uVar17 = DAT_0057de3c;
      do {
        uVar42 = DAT_0057de49;
        lVar39 = DAT_0057de30;
        uVar12 = (uint)uVar11;
        uVar37 = uVar12 + 1;
        DAT_0057de40 = uVar37;
        uVar13 = DAT_0057e7bc;
        if (uVar36 == 1) {
          pbVar18 = (byte *)(DAT_0057de30 + uVar11);
LAB_0020881c:
          DAT_0057de38 = (int)uVar11 + 2;
          uVar22 = uVar17;
          if ((uVar17 < DAT_0057de38) || ((*pbVar18 & 0xf0) < 0x80)) {
            DAT_0057de38 = (int)uVar11 + 1;
            DAT_0057e7bc = uVar13 + 1;
            uVar36 = *pbVar18 - 0x20;
            if ((uVar36 & 0xff) < 0x5f) {
              ppuVar38 = &PTR_FUN_005650d0 + (long)(int)uVar36 * 2;
              cVar3 = (&DAT_005650d8)[(long)(int)uVar36 * 0x10];
              if (cVar3 != '\0') {
                if ((cVar3 == '\x06') || (cVar3 == '\v')) {
                  DAT_0057e7bc = uVar13 + 2;
                }
                goto LAB_00209414;
              }
            }
          }
          else {
            DAT_0057e7bc = uVar13 + 2;
            bVar29 = *pbVar18;
            if (bVar29 == 0xa3) {
              uVar36 = pbVar18[1] - 0xa1;
              uVar22 = DAT_0057de3c;
              if (0x5d < uVar36) goto LAB_00208868;
              uVar11 = -(ulong)(uVar36 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar36 << 4;
              ppuVar38 = (undefined **)&UNK_00564af0;
            }
            else if (bVar29 == 0xa1) {
              bVar29 = pbVar18[1];
              if (bVar29 == 0xa1) {
                uVar11 = 0;
                ppuVar38 = (undefined **)&UNK_00564ab0;
              }
              else {
                ppuVar38 = (undefined **)&UNK_00564ab0;
                if (bVar29 == 0xaa) {
                  uVar11 = 0x10;
                }
                else {
                  if (bVar29 != 0xad) goto LAB_00208868;
                  uVar11 = 0x20;
                }
              }
            }
            else {
              uVar22 = DAT_0057de3c;
              if ((bVar29 != 0xa2) || (pbVar18[1] != 0xa6)) goto LAB_00208868;
              uVar11 = 0;
              ppuVar38 = &PTR_FUN_00564ae0;
            }
            ppuVar38 = (undefined **)((long)ppuVar38 + uVar11);
            uVar22 = uVar17;
            if (*(char *)(ppuVar38 + 1) != '\0') {
LAB_00209414:
              if ((((code *)*ppuVar38 == (code *)0x0) ||
                  (iVar9 = (*(code *)*ppuVar38)(*(undefined *)((long)ppuVar38 + 9)),
                  uVar22 = DAT_0057de3c, -1 < iVar9)) &&
                 (((*(char *)(ppuVar38 + 1) - 10U & 0xfd) == 0 ||
                  (uVar22 = DAT_0057de3c, *(char *)(ppuVar38 + 1) == '\x0e')))) {
                uVar22 = (uint)DAT_0057de4d;
                break;
              }
            }
          }
LAB_00208868:
          uVar11 = (ulong)DAT_0057de38;
          uVar36 = uVar22 - DAT_0057de38;
          uVar17 = uVar22;
        }
        else {
          pbVar18 = (byte *)(DAT_0057de30 + uVar11);
          bVar29 = *(byte *)(DAT_0057de30 + uVar11);
          if ((((0x185d < (pbVar18[1] - 0xb0a1) + (uint)bVar29 * 0x100) || (uVar36 < 2)) ||
              (0x18 < bVar29 - 0xb0)) ||
             ((0x5d < *(byte *)(DAT_0057de30 + (ulong)uVar37) - 0xa1 ||
              (iVar9 = (uint)*(byte *)(DAT_0057de30 + (ulong)uVar37) + (uint)bVar29 * 0x5e + -0x4141
              , 0x7ffffffd < uVar12)))) goto LAB_0020881c;
          lVar48 = (long)(int)uVar22;
          lVar41 = lVar48 * 0x18;
          uVar12 = uVar12 + 2;
          uVar11 = (ulong)uVar12;
          uVar13 = DAT_0057e7bc + 2;
          DAT_0057e7c0 = &DAT_0057de58 + lVar48 * 6;
          bVar8 = DAT_0057e7b9 == '\x01';
          iVar10 = 0x104;
          DAT_0057de38 = uVar12;
          DAT_0057e7bc = uVar13;
          (&DAT_0057de5c)[lVar41] = DAT_0057de54;
          (&DAT_0057de5d)[lVar41] = uVar42;
          (&DAT_0057de58)[lVar48 * 6] = 0;
          (&DAT_0057de64)[lVar48 * 0xc] = 0x92e;
          (&DAT_0057de66)[lVar41] = 7;
          (&DAT_0057de67)[lVar41] = 0;
          (&DAT_0057de68)[lVar41] = 7;
          (&DAT_0057de69)[lVar41] = 0;
          (&DAT_0057de6a)[lVar41] = 1;
          (&DAT_0057de6b)[lVar41] = 1;
          (&DAT_0057de6c)[lVar48 * 6] = 0;
          uVar36 = DAT_0057de50;
          if ((bVar8) &&
             ((lVar41 = (long)iVar9 * 3, (&DAT_00494190)[lVar41] != '\x15' &&
              (iVar10 = 0x104, (&DAT_00494192)[lVar41] != '\x01')))) {
            iVar10 = 400;
          }
          lVar41 = lVar48 * 0x18;
          uVar30 = iVar10 + DAT_0057de4e;
          if (iVar10 + DAT_0057de4e < (int)DAT_0057de24) {
            uVar30 = DAT_0057de24;
          }
          (&DAT_0057de60)[lVar48 * 6] = uVar30;
          if (0x7fffffff - uVar30 < uVar36) {
            pbVar18 = (byte *)(lVar39 + (ulong)uVar12);
            goto LAB_0020881c;
          }
          DAT_0057de4d = (char)uVar22 + 1;
          DAT_0057de50 = uVar30 + uVar36;
          DAT_0057de4c = DAT_0057de4c + '\x01';
          DAT_0057e7b8 = DAT_0057e7b8 + '\x01';
          uVar36 = uVar17 - uVar12;
          (&DAT_0057de64)[lVar48 * 0xc] = (short)iVar9;
          (&DAT_0057de6c)[lVar48 * 6] = uVar37;
          (&DAT_0057de66)[lVar41] = DAT_0057e7c8;
          (&DAT_0057de67)[lVar41] = DAT_0057e7c9;
          (&DAT_0057de68)[lVar41] = DAT_0057e7ca;
          (&DAT_0057de69)[lVar41] = DAT_0057e7cb;
          (&DAT_0057de6a)[lVar41] = DAT_0057e7ba;
          (&DAT_0057de6b)[lVar41] = DAT_0057e7bb;
          DAT_0057e7c8 = 7;
          DAT_0057e7c9 = 0;
          DAT_0057e7ca = 7;
          DAT_0057e7cb = 0;
          DAT_0057e7ba = 1;
          DAT_0057e7bb = 1;
        }
        uVar22 = (uint)DAT_0057de4d;
        if ((int)uVar36 < 1) break;
        if (99 < DAT_0057de4d) {
          if (DAT_0057de4d < 2) goto LAB_002085c0;
          goto LAB_00208894;
        }
      } while (DAT_0057e7bc < 100);
      if (1 < uVar22) {
LAB_00208894:
        uVar36 = 0;
        do {
          while( true ) {
            lVar39 = (long)(int)uVar36;
            if ((&DAT_0057de58)[lVar39 * 6] != 0) goto LAB_002088ac;
            uVar17 = uVar36 + 1;
            if (((int)uVar17 < (int)uVar22) && ((&DAT_0057de58)[(long)(int)uVar17 * 6] != 2)) break;
LAB_00208a04:
            uVar36 = uVar17;
            if ((int)(uVar22 - 1) <= (int)uVar17) goto LAB_00208a10;
          }
          uVar37 = uVar17;
          if ((&DAT_0057de58)[(long)(int)uVar17 * 6] != 0) {
            uVar13 = ~uVar17 + uVar22 & 3;
            uVar12 = uVar17;
            if (uVar13 == 0) goto LAB_00208978;
            uVar12 = uVar36 + 2;
            if ((&DAT_0057de58)[(long)(int)uVar12 * 6] != 2) {
              uVar37 = uVar12;
              if ((&DAT_0057de58)[(long)(int)uVar12 * 6] == 0) goto LAB_00208e64;
              if (uVar13 == 1) goto LAB_00208978;
              if (uVar13 != 2) {
                uVar12 = uVar36 + 3;
                if ((&DAT_0057de58)[(long)(int)uVar12 * 6] == 2) goto LAB_00208a04;
                uVar37 = uVar12;
                if ((&DAT_0057de58)[(long)(int)uVar12 * 6] == 0) goto LAB_00208e64;
              }
              uVar12 = uVar12 + 1;
              iVar9 = (&DAT_0057de58)[(long)(int)uVar12 * 6];
              while (iVar9 != 2) {
                uVar37 = uVar12;
                if (iVar9 == 0) goto LAB_00208e64;
LAB_00208978:
                uVar37 = uVar12 + 1;
                if ((uVar37 == uVar22) || ((&DAT_0057de58)[(long)(int)uVar37 * 6] == 2)) break;
                if ((&DAT_0057de58)[(long)(int)uVar37 * 6] == 0) goto LAB_00208e64;
                if ((&DAT_0057de58)[(long)(int)(uVar12 + 2) * 6] == 2) break;
                uVar37 = uVar12 + 2;
                if ((&DAT_0057de58)[(long)(int)(uVar12 + 2) * 6] == 0) goto LAB_00208e64;
                if ((&DAT_0057de58)[(long)(int)(uVar12 + 3) * 6] == 2) break;
                uVar37 = uVar12 + 3;
                if ((&DAT_0057de58)[(long)(int)(uVar12 + 3) * 6] == 0) goto LAB_00208e64;
                uVar12 = uVar12 + 4;
                iVar9 = (&DAT_0057de58)[(long)(int)uVar12 * 6];
              }
            }
            goto LAB_00208a04;
          }
LAB_00208e64:
          uVar11 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
          cVar3 = (&DAT_00494192)[uVar11 * 3];
          if (cVar3 == '\x01') goto LAB_00208a04;
          if (cVar3 == '\x02') {
            uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
            uVar25 = (ulong)uVar35;
            if (uVar35 == 0x302) {
              uVar43 = 0x1ac;
              lVar48 = 0x1ac;
            }
            else if (uVar35 < 0x303) {
              if (uVar35 == 0x2bf) {
                uVar43 = 0x164;
                lVar48 = 0x164;
              }
              else if (uVar35 < 0x2c0) {
                if (uVar35 != 0x2b3) goto LAB_00209090;
                uVar43 = 0x15a;
                lVar48 = 0x15a;
              }
              else if (uVar35 == 0x2c1) {
                uVar43 = 0x166;
                lVar48 = 0x166;
              }
              else {
                if (uVar35 != 0x2fd) goto LAB_00209090;
                uVar43 = 0x1a6;
                lVar48 = 0x1a6;
              }
            }
            else if (uVar35 == 0x8a9) {
              uVar43 = 0x76a;
              lVar48 = 0x76a;
            }
            else if (uVar35 < 0x8aa) {
              if (uVar35 == 0x8a0) {
LAB_0020a008:
                uVar43 = 0x762;
                lVar48 = 0x762;
                goto LAB_0020a010;
              }
              if (uVar35 != 0x8a2) goto LAB_00209090;
              uVar43 = 0x764;
              lVar48 = 0x764;
            }
            else if (uVar35 == 0x8dc) {
              uVar43 = 0x799;
              lVar48 = 0x799;
            }
            else {
              if (uVar35 != 0x926) goto LAB_00209090;
              uVar43 = 0x7c5;
              lVar48 = 0x7c5;
            }
            goto LAB_00208ff8;
          }
          uVar12 = (uint)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
          if (cVar3 == '\x03') {
            uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
            if (uVar35 == 0x5f9) {
              uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
              uVar25 = (ulong)uVar35;
              if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                uVar17 = uVar35 - 1;
                uVar22 = uVar17 & 7;
                if (uVar22 == 0) {
LAB_0020aa60:
                  do {
                    iVar9 = (int)uVar25;
                    uVar22 = iVar9 - 1;
                    uVar25 = (ulong)uVar22;
                    if (uVar22 == 0) {
                      uVar35 = 0;
                      goto LAB_0020ab4c;
                    }
                  } while (((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\x01') &&
                            (uVar25 = (ulong)(iVar9 - 2U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\x01')) &&
                           (uVar25 = (ulong)(iVar9 - 3U),
                           (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\x01')) &&
                          (((uVar25 = (ulong)(iVar9 - 4U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\x01' &&
                            (uVar25 = (ulong)(iVar9 - 5U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\x01')) &&
                           ((uVar25 = (ulong)(iVar9 - 6U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\x01' &&
                            ((uVar25 = (ulong)(iVar9 - 7U),
                             (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\x01' &&
                             (uVar25 = (ulong)(iVar9 - 8U),
                             (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\x01'))))))));
                }
                else {
                  uVar25 = (ulong)(int)uVar17;
                  if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                    if (uVar22 != 1) {
                      if (uVar22 != 2) {
                        if (uVar22 != 3) {
                          if (uVar22 != 4) {
                            if (uVar22 != 5) {
                              if (uVar22 != 6) {
                                uVar17 = uVar35 - 2;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_0020ab48;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_0020ab48;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020ab48;
                          }
                          uVar17 = uVar17 - 1;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020ab48;
                        }
                        uVar17 = uVar17 - 1;
                        uVar25 = (ulong)uVar17;
                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020ab48;
                      }
                      uVar25 = (ulong)(uVar17 - 1);
                      if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\x01') goto LAB_0020ab48;
                    }
                    goto LAB_0020aa60;
                  }
                }
LAB_0020ab48:
                uVar35 = (ushort)uVar25;
              }
LAB_0020ab4c:
              (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
              uVar43 = 0x111;
              lVar48 = 0x111;
              uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
            }
            else if (uVar35 < 0x5fa) {
              if (uVar35 != 0x571) {
                if (uVar35 < 0x572) {
                  if (uVar35 != 0x549) goto LAB_00209090;
                  uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                  if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                    uVar17 = uVar35 - 1;
                    uVar22 = uVar17 & 7;
                    uVar13 = (uint)uVar35;
                    if (uVar22 == 0) goto LAB_0020a164;
                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01') {
                      uVar13 = uVar17;
                      if (uVar22 == 1) goto LAB_0020a164;
                      if ((uVar22 == 2) ||
                         (((uVar22 == 3 ||
                           (((uVar22 == 4 ||
                             (((uVar22 == 5 ||
                               (((uVar22 == 6 ||
                                 (uVar17 = uVar35 - 2,
                                 (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')) &&
                                (uVar17 = uVar17 - 1,
                                (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')))) &&
                              (uVar17 = uVar17 - 1, (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01'
                              )))) && (uVar17 = uVar17 - 1,
                                      (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')))) &&
                          (uVar17 = uVar17 - 1, (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01'))))
                      {
                        uVar17 = uVar17 - 1;
                        cVar3 = (&DAT_00494192)[(long)(int)uVar17 * 3];
                        while (uVar13 = uVar17, cVar3 != '\x01') {
LAB_0020a164:
                          uVar17 = uVar13 - 1;
                          uVar35 = 0;
                          if (uVar17 == 0) goto LAB_0020a250;
                          if (((((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') ||
                               (uVar17 = uVar13 - 2,
                               (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')) ||
                              ((uVar17 = uVar13 - 3,
                               (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01' ||
                               ((uVar17 = uVar13 - 4,
                                (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01' ||
                                (uVar17 = uVar13 - 5,
                                (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')))))) ||
                             ((uVar17 = uVar13 - 6, (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01'
                              || (uVar17 = uVar13 - 7,
                                 (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')))) break;
                          uVar17 = uVar13 - 8;
                          cVar3 = (&DAT_00494192)[(long)(int)uVar17 * 3];
                        }
                      }
                    }
                    uVar35 = (ushort)uVar17;
                  }
LAB_0020a250:
                  (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                  uVar43 = 0xab;
                  lVar48 = 0xab;
                  uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                }
                else if (uVar35 == 0x582) {
                  uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                  if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                    uVar17 = uVar35 - 1;
                    uVar22 = uVar17 & 7;
                    uVar13 = (uint)uVar35;
                    if (uVar22 == 0) goto LAB_0020b0f8;
                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01') {
                      uVar13 = uVar17;
                      if (uVar22 == 1) goto LAB_0020b0f8;
                      if ((uVar22 == 2) ||
                         (((uVar22 == 3 ||
                           (((uVar22 == 4 ||
                             (((uVar22 == 5 ||
                               (((uVar22 == 6 ||
                                 (uVar17 = uVar35 - 2,
                                 (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')) &&
                                (uVar17 = uVar17 - 1,
                                (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')))) &&
                              (uVar17 = uVar17 - 1, (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01'
                              )))) && (uVar17 = uVar17 - 1,
                                      (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')))) &&
                          (uVar17 = uVar17 - 1, (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01'))))
                      {
                        uVar17 = uVar17 - 1;
                        cVar3 = (&DAT_00494192)[(long)(int)uVar17 * 3];
                        while (uVar13 = uVar17, cVar3 != '\x01') {
LAB_0020b0f8:
                          uVar17 = uVar13 - 1;
                          uVar35 = 0;
                          if (uVar17 == 0) goto LAB_0020b1e4;
                          if ((((((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') ||
                                (uVar17 = uVar13 - 2,
                                (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')) ||
                               ((uVar17 = uVar13 - 3,
                                (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01' ||
                                ((uVar17 = uVar13 - 4,
                                 (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01' ||
                                 (uVar17 = uVar13 - 5,
                                 (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')))))) ||
                              (uVar17 = uVar13 - 6, (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01'
                              )) || (uVar17 = uVar13 - 7,
                                    (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')) break;
                          uVar17 = uVar13 - 8;
                          cVar3 = (&DAT_00494192)[(long)(int)uVar17 * 3];
                        }
                      }
                    }
                    uVar35 = (ushort)uVar17;
                  }
LAB_0020b1e4:
                  (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                  uVar43 = 0xcd;
                  lVar48 = 0xcd;
                  uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                }
                else {
                  if (uVar35 != 0x5f7) goto LAB_00209090;
                  uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                  if (uVar35 == 0) {
                    uVar35 = 0;
                  }
                  else if ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01') {
                    uVar17 = uVar35 - 1;
                    uVar22 = uVar17 & 7;
                    uVar13 = (uint)uVar35;
                    if (uVar22 == 0) goto LAB_00209288;
                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01') {
                      uVar13 = uVar17;
                      if (uVar22 == 1) goto LAB_00209288;
                      if ((uVar22 == 2) ||
                         (((uVar22 == 3 ||
                           (((uVar22 == 4 ||
                             (((uVar22 == 5 ||
                               (((uVar22 == 6 ||
                                 (uVar17 = uVar35 - 2,
                                 (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')) &&
                                (uVar17 = uVar17 - 1,
                                (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')))) &&
                              (uVar17 = uVar17 - 1, (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01'
                              )))) && (uVar17 = uVar17 - 1,
                                      (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')))) &&
                          (uVar17 = uVar17 - 1, (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01'))))
                      {
                        uVar17 = uVar17 - 1;
                        cVar3 = (&DAT_00494192)[(long)(int)uVar17 * 3];
                        while (uVar13 = uVar17, cVar3 != '\x01') {
LAB_00209288:
                          uVar17 = uVar13 - 1;
                          uVar35 = 0;
                          if (uVar17 == 0) goto LAB_00209374;
                          if (((((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') ||
                               (uVar17 = uVar13 - 2,
                               (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')) ||
                              (((uVar17 = uVar13 - 3,
                                (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01' ||
                                ((uVar17 = uVar13 - 4,
                                 (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01' ||
                                 (uVar17 = uVar13 - 5,
                                 (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')))) ||
                               (uVar17 = uVar13 - 6,
                               (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')))) ||
                             (uVar17 = uVar13 - 7, (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                             ) break;
                          uVar17 = uVar13 - 8;
                          cVar3 = (&DAT_00494192)[(long)(int)uVar17 * 3];
                        }
                      }
                    }
                    uVar35 = (ushort)uVar17;
                  }
LAB_00209374:
                  (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                  uVar43 = 0x10f;
                  lVar48 = 0x10f;
                  uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                }
                goto LAB_00209818;
              }
              uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
              uVar25 = (ulong)uVar35;
              if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                uVar17 = uVar35 - 1;
                uVar22 = uVar17 & 7;
                if (uVar22 == 0) {
LAB_0020aecc:
                  do {
                    iVar9 = (int)uVar25;
                    uVar22 = iVar9 - 1;
                    uVar25 = (ulong)uVar22;
                    if (uVar22 == 0) {
                      uVar35 = 0;
                      goto LAB_0020afb8;
                    }
                  } while ((((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\x01') &&
                             (uVar25 = (ulong)(iVar9 - 2U),
                             (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\x01')) &&
                            (uVar25 = (ulong)(iVar9 - 3U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\x01')) &&
                           ((uVar25 = (ulong)(iVar9 - 4U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\x01' &&
                            (uVar25 = (ulong)(iVar9 - 5U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\x01')))) &&
                          ((uVar25 = (ulong)(iVar9 - 6U),
                           (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\x01' &&
                           ((uVar25 = (ulong)(iVar9 - 7U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\x01' &&
                            (uVar25 = (ulong)(iVar9 - 8U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\x01'))))));
                }
                else {
                  uVar25 = (ulong)(int)uVar17;
                  if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                    if (uVar22 != 1) {
                      if (uVar22 != 2) {
                        if (uVar22 != 3) {
                          if (uVar22 != 4) {
                            if (uVar22 != 5) {
                              if (uVar22 != 6) {
                                uVar17 = uVar35 - 2;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_0020afb4;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_0020afb4;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020afb4;
                          }
                          uVar17 = uVar17 - 1;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020afb4;
                        }
                        uVar17 = uVar17 - 1;
                        uVar25 = (ulong)uVar17;
                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020afb4;
                      }
                      uVar25 = (ulong)(uVar17 - 1);
                      if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\x01') goto LAB_0020afb4;
                    }
                    goto LAB_0020aecc;
                  }
                }
LAB_0020afb4:
                uVar35 = (ushort)uVar25;
              }
LAB_0020afb8:
              (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
              uVar43 = 0xc3;
              lVar48 = 0xc3;
              uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
            }
            else {
              if (uVar35 != 0x5fd) {
                if (uVar35 < 0x5fe) {
                  if (uVar35 != 0x5fa) goto LAB_00209090;
                  uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                  if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                    uVar17 = uVar35 - 1;
                    uVar22 = uVar17 & 7;
                    uVar13 = (uint)uVar35;
                    if (uVar22 == 0) goto LAB_0020a3b8;
                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01') {
                      uVar13 = uVar17;
                      if (uVar22 == 1) goto LAB_0020a3b8;
                      if ((uVar22 == 2) ||
                         (((uVar22 == 3 ||
                           (((uVar22 == 4 ||
                             (((uVar22 == 5 ||
                               (((uVar22 == 6 ||
                                 (uVar17 = uVar35 - 2,
                                 (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')) &&
                                (uVar17 = uVar17 - 1,
                                (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')))) &&
                              (uVar17 = uVar17 - 1, (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01'
                              )))) && (uVar17 = uVar17 - 1,
                                      (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')))) &&
                          (uVar17 = uVar17 - 1, (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01'))))
                      {
                        uVar17 = uVar17 - 1;
                        cVar3 = (&DAT_00494192)[(long)(int)uVar17 * 3];
                        while (uVar13 = uVar17, cVar3 != '\x01') {
LAB_0020a3b8:
                          uVar17 = uVar13 - 1;
                          uVar35 = 0;
                          if (uVar17 == 0) goto LAB_0020a4a4;
                          if ((((((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') ||
                                (uVar17 = uVar13 - 2,
                                (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')) ||
                               ((uVar17 = uVar13 - 3,
                                (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01' ||
                                ((uVar17 = uVar13 - 4,
                                 (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01' ||
                                 (uVar17 = uVar13 - 5,
                                 (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')))))) ||
                              (uVar17 = uVar13 - 6, (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01'
                              )) || (uVar17 = uVar13 - 7,
                                    (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')) break;
                          uVar17 = uVar13 - 8;
                          cVar3 = (&DAT_00494192)[(long)(int)uVar17 * 3];
                        }
                      }
                    }
                    uVar35 = (ushort)uVar17;
                  }
LAB_0020a4a4:
                  (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                  uVar43 = 0x113;
                  lVar48 = 0x113;
                  uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                }
                else if (uVar35 == 0x60b) {
                  uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                  if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                    uVar17 = uVar35 - 1;
                    uVar22 = uVar17 & 7;
                    uVar13 = (uint)uVar35;
                    if (uVar22 == 0) goto LAB_0020aca0;
                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01') {
                      uVar13 = uVar17;
                      if (uVar22 == 1) goto LAB_0020aca0;
                      if ((uVar22 == 2) ||
                         (((uVar22 == 3 ||
                           (((uVar22 == 4 ||
                             (((uVar22 == 5 ||
                               (((uVar22 == 6 ||
                                 (uVar17 = uVar35 - 2,
                                 (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')) &&
                                (uVar17 = uVar17 - 1,
                                (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')))) &&
                              (uVar17 = uVar17 - 1, (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01'
                              )))) && (uVar17 = uVar17 - 1,
                                      (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')))) &&
                          (uVar17 = uVar17 - 1, (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01'))))
                      {
                        uVar17 = uVar17 - 1;
                        cVar3 = (&DAT_00494192)[(long)(int)uVar17 * 3];
                        while (uVar13 = uVar17, cVar3 != '\x01') {
LAB_0020aca0:
                          uVar17 = uVar13 - 1;
                          uVar35 = 0;
                          if (uVar17 == 0) goto LAB_0020ad8c;
                          if (((((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') ||
                               (uVar17 = uVar13 - 2,
                               (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')) ||
                              ((uVar17 = uVar13 - 3,
                               (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01' ||
                               ((uVar17 = uVar13 - 4,
                                (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01' ||
                                (uVar17 = uVar13 - 5,
                                (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')))))) ||
                             ((uVar17 = uVar13 - 6, (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01'
                              || (uVar17 = uVar13 - 7,
                                 (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')))) break;
                          uVar17 = uVar13 - 8;
                          cVar3 = (&DAT_00494192)[(long)(int)uVar17 * 3];
                        }
                      }
                    }
                    uVar35 = (ushort)uVar17;
                  }
LAB_0020ad8c:
                  (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                  uVar43 = 0x11b;
                  lVar48 = 0x11b;
                  uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                }
                else {
                  if (uVar35 != 0x613) goto LAB_00209090;
                  uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                  if (uVar35 == 0) {
                    uVar35 = 0;
                  }
                  else if ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01') {
                    uVar17 = uVar35 - 1;
                    uVar22 = uVar17 & 7;
                    uVar13 = (uint)uVar35;
                    if (uVar22 == 0) goto LAB_00209714;
                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01') {
                      uVar13 = uVar17;
                      if (uVar22 == 1) goto LAB_00209714;
                      if ((uVar22 == 2) ||
                         (((uVar22 == 3 ||
                           (((uVar22 == 4 ||
                             (((uVar22 == 5 ||
                               (((uVar22 == 6 ||
                                 (uVar17 = uVar35 - 2,
                                 (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')) &&
                                (uVar17 = uVar17 - 1,
                                (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')))) &&
                              (uVar17 = uVar17 - 1, (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01'
                              )))) && (uVar17 = uVar17 - 1,
                                      (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')))) &&
                          (uVar17 = uVar17 - 1, (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01'))))
                      {
                        uVar17 = uVar17 - 1;
                        cVar3 = (&DAT_00494192)[(long)(int)uVar17 * 3];
                        while (uVar13 = uVar17, cVar3 != '\x01') {
LAB_00209714:
                          uVar17 = uVar13 - 1;
                          uVar35 = 0;
                          if (uVar17 == 0) goto LAB_00209800;
                          if ((((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') ||
                              (uVar17 = uVar13 - 2, (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01'
                              )) || ((((uVar17 = uVar13 - 3,
                                       (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01' ||
                                       ((uVar17 = uVar13 - 4,
                                        (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01' ||
                                        (uVar17 = uVar13 - 5,
                                        (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')))) ||
                                      (uVar17 = uVar13 - 6,
                                      (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')) ||
                                     (uVar17 = uVar13 - 7,
                                     (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')))) break;
                          uVar17 = uVar13 - 8;
                          cVar3 = (&DAT_00494192)[(long)(int)uVar17 * 3];
                        }
                      }
                    }
                    uVar35 = (ushort)uVar17;
                  }
LAB_00209800:
                  (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                  uVar43 = 0x120;
                  lVar48 = 0x120;
                  uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                }
                goto LAB_00209818;
              }
              uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
              uVar25 = (ulong)uVar35;
              if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                uVar17 = uVar35 - 1;
                uVar22 = uVar17 & 7;
                if (uVar22 == 0) {
LAB_0020a834:
                  do {
                    iVar9 = (int)uVar25;
                    uVar22 = iVar9 - 1;
                    uVar25 = (ulong)uVar22;
                    if (uVar22 == 0) {
                      uVar35 = 0;
                      goto LAB_0020a920;
                    }
                  } while (((((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\x01') &&
                              (uVar25 = (ulong)(iVar9 - 2U),
                              (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\x01')) &&
                             (uVar25 = (ulong)(iVar9 - 3U),
                             (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\x01')) &&
                            ((uVar25 = (ulong)(iVar9 - 4U),
                             (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\x01' &&
                             (uVar25 = (ulong)(iVar9 - 5U),
                             (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\x01')))) &&
                           (uVar25 = (ulong)(iVar9 - 6U),
                           (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\x01')) &&
                          ((uVar25 = (ulong)(iVar9 - 7U),
                           (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\x01' &&
                           (uVar25 = (ulong)(iVar9 - 8U),
                           (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\x01'))));
                }
                else {
                  uVar25 = (ulong)(int)uVar17;
                  if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                    if (uVar22 != 1) {
                      if (uVar22 != 2) {
                        if (uVar22 != 3) {
                          if (uVar22 != 4) {
                            if (uVar22 != 5) {
                              if (uVar22 != 6) {
                                uVar17 = uVar35 - 2;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_0020a91c;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_0020a91c;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020a91c;
                          }
                          uVar17 = uVar17 - 1;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020a91c;
                        }
                        uVar17 = uVar17 - 1;
                        uVar25 = (ulong)uVar17;
                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020a91c;
                      }
                      uVar25 = (ulong)(uVar17 - 1);
                      if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\x01') goto LAB_0020a91c;
                    }
                    goto LAB_0020a834;
                  }
                }
LAB_0020a91c:
                uVar35 = (ushort)uVar25;
              }
LAB_0020a920:
              (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
              uVar43 = 0x117;
              lVar48 = 0x117;
              uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
            }
LAB_00209818:
            if (uVar12 == (uint)uVar25) {
LAB_0020a010:
              uVar25 = (ulong)(ushort)(&DAT_0057de64)[(long)(int)uVar37 * 0xc];
              goto LAB_00208ff8;
            }
LAB_00209820:
            if ((&DAT_00494190)[uVar11 * 3] == '\x15') {
              if ((&DAT_00494190)[uVar25 * 3] != '\x15') {
LAB_0020bab0:
                if ((&DAT_00494192)[uVar25 * 3] == '\x01') {
                  if ((&DAT_00494190)[uVar11 * 3] != '\x15') goto LAB_0020bae4;
                }
                else {
                  (&DAT_0057de60)[lVar39 * 6] = (&DAT_0057de60)[lVar39 * 6] + 0x8c;
                }
              }
            }
            else {
              if ((&DAT_00494192)[uVar11 * 3] == '\x01') {
                if ((&DAT_00494190)[uVar25 * 3] != '\x15') goto LAB_0020bab0;
LAB_0020bae4:
                if ((&DAT_00494192)[uVar11 * 3] == '\x01') goto LAB_00209864;
              }
              else if ((&DAT_00494190)[uVar25 * 3] != '\x15') {
                if ((&DAT_00494192)[uVar25 * 3] != '\x01') goto LAB_00209864;
                goto LAB_0020bae4;
              }
              if ((uint)(&DAT_0057de60)[lVar39 * 6] < 0x8d) {
                (&DAT_0057de60)[lVar39 * 6] = DAT_0057de24;
              }
              else {
                (&DAT_0057de60)[lVar39 * 6] = (&DAT_0057de60)[lVar39 * 6] - 0x8c;
              }
            }
LAB_00209864:
            uVar43 = (undefined2)lVar48;
            if ((int)lVar48 == 0x92e) {
LAB_00209090:
              uVar22 = (uint)DAT_0057de4d;
            }
            else {
              uVar25 = (ulong)(ushort)(&DAT_0057de64)[(long)(int)uVar37 * 0xc];
LAB_00208ff8:
              lVar39 = (long)(int)uVar37;
              if ((&DAT_00494190)[uVar25 * 3] == '\x15') {
                if ((&DAT_00494190)[lVar48 * 3] != '\x15') {
LAB_002090ac:
                  if ((&DAT_00494192)[lVar48 * 3] == '\x01') {
                    if ((&DAT_00494190)[uVar25 * 3] != '\x15') goto LAB_002090e0;
                  }
                  else {
                    (&DAT_0057de60)[lVar39 * 6] = (&DAT_0057de60)[lVar39 * 6] + 0x8c;
                  }
                }
              }
              else {
                if ((&DAT_00494192)[uVar25 * 3] == '\x01') {
                  if ((&DAT_00494190)[lVar48 * 3] != '\x15') goto LAB_002090ac;
LAB_002090e0:
                  if ((&DAT_00494192)[uVar25 * 3] == '\x01') goto LAB_00209038;
                }
                else if ((&DAT_00494190)[lVar48 * 3] != '\x15') {
                  if ((&DAT_00494192)[lVar48 * 3] != '\x01') goto LAB_00209038;
                  goto LAB_002090e0;
                }
                if ((uint)(&DAT_0057de60)[lVar39 * 6] < 0x8d) {
                  (&DAT_0057de60)[lVar39 * 6] = DAT_0057de24;
                }
                else {
                  (&DAT_0057de60)[lVar39 * 6] = (&DAT_0057de60)[lVar39 * 6] - 0x8c;
                }
              }
LAB_00209038:
              uVar22 = (uint)DAT_0057de4d;
              (&DAT_0057de64)[lVar39 * 0xc] = uVar43;
            }
          }
          else {
            if (cVar3 == '\x04') {
              uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
              uVar25 = (ulong)uVar35;
              if (uVar35 == 0x5f9) {
                uVar43 = 0x537;
                lVar48 = 0x537;
              }
              else if (uVar35 < 0x5fa) {
                if (uVar35 != 0x571) {
                  if (0x571 < uVar35) {
                    if (uVar35 == 0x582) {
                      uVar43 = 0x50f;
                      lVar48 = 0x50f;
                    }
                    else {
                      if (uVar35 != 0x5f7) goto LAB_00209090;
                      uVar43 = 0x535;
                      lVar48 = 0x535;
                    }
                    goto LAB_00208ff8;
                  }
LAB_0020ab68:
                  if ((int)uVar25 == 0x549) {
LAB_0020ab70:
                    uVar43 = 0x4f3;
                    lVar48 = 0x4f3;
                    goto LAB_0020a010;
                  }
                  goto LAB_00209090;
                }
                uVar43 = 0x506;
                lVar48 = 0x506;
              }
              else if (uVar35 == 0x5fd) {
                uVar43 = 0x53c;
                lVar48 = 0x53c;
              }
              else if (uVar35 < 0x5fe) {
                if (uVar35 != 0x5fa) goto LAB_00209090;
                uVar43 = 0x538;
                lVar48 = 0x538;
              }
              else if (uVar35 == 0x60b) {
                uVar43 = 0x541;
                lVar48 = 0x541;
              }
              else {
                if (uVar35 != 0x613) goto LAB_00209090;
                uVar43 = 0x546;
                lVar48 = 0x546;
              }
              goto LAB_00208ff8;
            }
            if (cVar3 == '\x05') {
              uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
              uVar25 = (ulong)uVar35;
              if (uVar35 != 0x582) {
                if (uVar35 < 0x583) {
                  if (uVar35 == 0x2d2) {
                    uVar43 = 0x179;
                    lVar48 = 0x179;
                  }
                  else {
                    if (0x2d2 < uVar35) {
                      if (uVar35 != 0x549) {
                        if (uVar35 != 0x571) goto LAB_00209090;
                        uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                        if ((uVar35 != 0) &&
                           ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                          uVar17 = uVar35 - 1;
                          uVar22 = uVar17 & 7;
                          uVar13 = (uint)uVar35;
                          if (uVar22 == 0) goto LAB_0020c26c;
                          uVar25 = (ulong)(int)uVar17;
                          if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                            uVar13 = uVar17;
                            if (uVar22 == 1) goto LAB_0020c26c;
                            if (uVar22 != 2) {
                              if (uVar22 != 3) {
                                if (uVar22 != 4) {
                                  if (uVar22 != 5) {
                                    if (uVar22 != 6) {
                                      uVar17 = uVar35 - 2;
                                      uVar25 = (ulong)uVar17;
                                      if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                      goto LAB_002107ec;
                                    }
                                    uVar17 = uVar17 - 1;
                                    uVar25 = (ulong)uVar17;
                                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                    goto LAB_002107ec;
                                  }
                                  uVar17 = uVar17 - 1;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                  goto LAB_002107ec;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_002107ec;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_002107ec;
                            }
                            uVar13 = uVar17 - 1;
                            while (uVar25 = (ulong)uVar13,
                                  (&DAT_00494192)[(long)(int)uVar13 * 3] != '\x01') {
LAB_0020c26c:
                              uVar22 = uVar13 - 1;
                              uVar25 = (ulong)uVar22;
                              if (uVar22 == 0) {
                                uVar35 = 0;
                                goto LAB_0020c27c;
                              }
                              if (((((&DAT_00494192)[(long)(int)uVar22 * 3] == '\x01') ||
                                   (uVar25 = (ulong)(uVar13 - 2),
                                   (&DAT_00494192)[(long)(int)(uVar13 - 2) * 3] == '\x01')) ||
                                  (uVar25 = (ulong)(uVar13 - 3),
                                  (&DAT_00494192)[(long)(int)(uVar13 - 3) * 3] == '\x01')) ||
                                 (((uVar25 = (ulong)(uVar13 - 4),
                                   (&DAT_00494192)[(long)(int)(uVar13 - 4) * 3] == '\x01' ||
                                   (uVar25 = (ulong)(uVar13 - 5),
                                   (&DAT_00494192)[(long)(int)(uVar13 - 5) * 3] == '\x01')) ||
                                  ((uVar25 = (ulong)(uVar13 - 6),
                                   (&DAT_00494192)[(long)(int)(uVar13 - 6) * 3] == '\x01' ||
                                   (uVar25 = (ulong)(uVar13 - 7),
                                   (&DAT_00494192)[(long)(int)(uVar13 - 7) * 3] == '\x01'))))))
                              break;
                              uVar13 = uVar13 - 8;
                            }
                          }
LAB_002107ec:
                          uVar35 = (ushort)uVar25;
                        }
LAB_0020c27c:
                        (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                        uVar43 = 0x143;
                        lVar48 = 0x143;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        goto LAB_00209818;
                      }
                      uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                      if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01'))
                      {
                        uVar17 = uVar35 - 1;
                        uVar22 = uVar17 & 7;
                        uVar13 = (uint)uVar35;
                        if (uVar22 == 0) goto LAB_0020c818;
                        uVar25 = (ulong)(int)uVar17;
                        if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                          uVar13 = uVar17;
                          if (uVar22 == 1) goto LAB_0020c818;
                          if (uVar22 != 2) {
                            if (uVar22 != 3) {
                              if (uVar22 != 4) {
                                if (uVar22 != 5) {
                                  if (uVar22 != 6) {
                                    uVar17 = uVar35 - 2;
                                    uVar25 = (ulong)uVar17;
                                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                    goto LAB_0020fa84;
                                  }
                                  uVar17 = uVar17 - 1;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                  goto LAB_0020fa84;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_0020fa84;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_0020fa84;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020fa84;
                          }
                          uVar13 = uVar17 - 1;
                          while (uVar25 = (ulong)uVar13,
                                (&DAT_00494192)[(long)(int)uVar13 * 3] != '\x01') {
LAB_0020c818:
                            uVar22 = uVar13 - 1;
                            uVar25 = (ulong)uVar22;
                            if (uVar22 == 0) {
                              uVar35 = 0;
                              goto LAB_0020c828;
                            }
                            if (((((&DAT_00494192)[(long)(int)uVar22 * 3] == '\x01') ||
                                 (uVar25 = (ulong)(uVar13 - 2),
                                 (&DAT_00494192)[(long)(int)(uVar13 - 2) * 3] == '\x01')) ||
                                (uVar25 = (ulong)(uVar13 - 3),
                                (&DAT_00494192)[(long)(int)(uVar13 - 3) * 3] == '\x01')) ||
                               (((uVar25 = (ulong)(uVar13 - 4),
                                 (&DAT_00494192)[(long)(int)(uVar13 - 4) * 3] == '\x01' ||
                                 (uVar25 = (ulong)(uVar13 - 5),
                                 (&DAT_00494192)[(long)(int)(uVar13 - 5) * 3] == '\x01')) ||
                                ((uVar25 = (ulong)(uVar13 - 6),
                                 (&DAT_00494192)[(long)(int)(uVar13 - 6) * 3] == '\x01' ||
                                 (uVar25 = (ulong)(uVar13 - 7),
                                 (&DAT_00494192)[(long)(int)(uVar13 - 7) * 3] == '\x01')))))) break;
                            uVar13 = uVar13 - 8;
                          }
                        }
LAB_0020fa84:
                        uVar35 = (ushort)uVar25;
                      }
LAB_0020c828:
                      (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                      uVar43 = 0x123;
                      lVar48 = 0x123;
                      uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      goto LAB_00209818;
                    }
                    if (uVar35 == 0x288) {
                      uVar43 = 0x126;
                      lVar48 = 0x126;
                      goto LAB_0020a010;
                    }
                    if (uVar35 != 0x2c1) goto LAB_00209090;
                    uVar43 = 0x166;
                    lVar48 = 0x166;
                  }
                  goto LAB_00208ff8;
                }
                if (uVar35 == 0x5fa) {
                  uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                  if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                    uVar13 = uVar35 - 1;
                    uVar22 = uVar13 & 7;
                    uVar17 = (uint)uVar35;
                    if (uVar22 == 0) goto LAB_0020d014;
                    if ((&DAT_00494192)[(long)(int)uVar13 * 3] != '\x01') {
                      uVar17 = uVar13;
                      if (uVar22 == 1) goto LAB_0020d014;
                      if ((uVar22 == 2) ||
                         (((uVar22 == 3 ||
                           (((uVar22 == 4 ||
                             (((uVar22 == 5 ||
                               (((uVar22 == 6 ||
                                 (uVar13 = uVar35 - 2,
                                 (&DAT_00494192)[(long)(int)uVar13 * 3] != '\x01')) &&
                                (uVar13 = uVar13 - 1,
                                (&DAT_00494192)[(long)(int)uVar13 * 3] != '\x01')))) &&
                              (uVar13 = uVar13 - 1, (&DAT_00494192)[(long)(int)uVar13 * 3] != '\x01'
                              )))) && (uVar13 = uVar13 - 1,
                                      (&DAT_00494192)[(long)(int)uVar13 * 3] != '\x01')))) &&
                          (uVar13 = uVar13 - 1, (&DAT_00494192)[(long)(int)uVar13 * 3] != '\x01'))))
                      {
                        uVar17 = uVar13 - 1;
                        while (uVar13 = uVar17, (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01') {
LAB_0020d014:
                          uVar13 = uVar17 - 1;
                          uVar35 = 0;
                          if (uVar13 == 0) goto LAB_0020d020;
                          if ((((((&DAT_00494192)[(long)(int)uVar13 * 3] == '\x01') ||
                                (uVar13 = uVar17 - 2,
                                (&DAT_00494192)[(long)(int)uVar13 * 3] == '\x01')) ||
                               ((uVar13 = uVar17 - 3,
                                (&DAT_00494192)[(long)(int)uVar13 * 3] == '\x01' ||
                                ((uVar13 = uVar17 - 4,
                                 (&DAT_00494192)[(long)(int)uVar13 * 3] == '\x01' ||
                                 (uVar13 = uVar17 - 5,
                                 (&DAT_00494192)[(long)(int)uVar13 * 3] == '\x01')))))) ||
                              (uVar13 = uVar17 - 6, (&DAT_00494192)[(long)(int)uVar13 * 3] == '\x01'
                              )) || (uVar13 = uVar17 - 7,
                                    (&DAT_00494192)[(long)(int)uVar13 * 3] == '\x01')) break;
                          uVar17 = uVar17 - 8;
                        }
                      }
                    }
                    uVar35 = (ushort)uVar13;
                  }
LAB_0020d020:
                  (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                  uVar43 = 0x19a;
                  lVar48 = 0x19a;
                  uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                  goto LAB_00209818;
                }
                if (uVar35 < 0x5fb) {
                  if (uVar35 != 0x5f7) {
                    if (uVar35 != 0x5f9) goto LAB_00209090;
                    uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                    if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                      uVar17 = uVar35 - 1;
                      uVar22 = uVar17 & 7;
                      uVar13 = (uint)uVar35;
                      if (uVar22 == 0) goto LAB_0020c390;
                      uVar25 = (ulong)(int)uVar17;
                      if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                        uVar13 = uVar17;
                        if (uVar22 == 1) goto LAB_0020c390;
                        if (uVar22 != 2) {
                          if (uVar22 != 3) {
                            if (uVar22 != 4) {
                              if (uVar22 != 5) {
                                if (uVar22 != 6) {
                                  uVar17 = uVar35 - 2;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                  goto LAB_002133a0;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_002133a0;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_002133a0;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_002133a0;
                          }
                          uVar17 = uVar17 - 1;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_002133a0;
                        }
                        uVar13 = uVar17 - 1;
                        while (uVar25 = (ulong)uVar13,
                              (&DAT_00494192)[(long)(int)uVar13 * 3] != '\x01') {
LAB_0020c390:
                          uVar22 = uVar13 - 1;
                          uVar25 = (ulong)uVar22;
                          if (uVar22 == 0) {
                            uVar35 = 0;
                            goto LAB_0020c3a0;
                          }
                          if (((((((&DAT_00494192)[(long)(int)uVar22 * 3] == '\x01') ||
                                 (uVar25 = (ulong)(uVar13 - 2),
                                 (&DAT_00494192)[(long)(int)(uVar13 - 2) * 3] == '\x01')) ||
                                (uVar25 = (ulong)(uVar13 - 3),
                                (&DAT_00494192)[(long)(int)(uVar13 - 3) * 3] == '\x01')) ||
                               ((uVar25 = (ulong)(uVar13 - 4),
                                (&DAT_00494192)[(long)(int)(uVar13 - 4) * 3] == '\x01' ||
                                (uVar25 = (ulong)(uVar13 - 5),
                                (&DAT_00494192)[(long)(int)(uVar13 - 5) * 3] == '\x01')))) ||
                              (uVar25 = (ulong)(uVar13 - 6),
                              (&DAT_00494192)[(long)(int)(uVar13 - 6) * 3] == '\x01')) ||
                             (uVar25 = (ulong)(uVar13 - 7),
                             (&DAT_00494192)[(long)(int)(uVar13 - 7) * 3] == '\x01')) break;
                          uVar13 = uVar13 - 8;
                        }
                      }
LAB_002133a0:
                      uVar35 = (ushort)uVar25;
                    }
LAB_0020c3a0:
                    (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                    uVar43 = 0x199;
                    lVar48 = 0x199;
                    uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                    goto LAB_00209818;
                  }
                  uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                  if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                    uVar17 = uVar35 - 1;
                    uVar22 = uVar17 & 7;
                    uVar13 = (uint)uVar35;
                    if (uVar22 == 0) goto LAB_0020d440;
                    uVar25 = (ulong)(int)uVar17;
                    if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                      uVar13 = uVar17;
                      if (uVar22 == 1) goto LAB_0020d440;
                      if (uVar22 != 2) {
                        if (uVar22 != 3) {
                          if (uVar22 != 4) {
                            if (uVar22 != 5) {
                              if (uVar22 != 6) {
                                uVar17 = uVar35 - 2;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_002134b4;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_002134b4;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_002134b4;
                          }
                          uVar17 = uVar17 - 1;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_002134b4;
                        }
                        uVar17 = uVar17 - 1;
                        uVar25 = (ulong)uVar17;
                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_002134b4;
                      }
                      uVar13 = uVar17 - 1;
                      while (uVar25 = (ulong)uVar13,
                            (&DAT_00494192)[(long)(int)uVar13 * 3] != '\x01') {
LAB_0020d440:
                        uVar22 = uVar13 - 1;
                        uVar25 = (ulong)uVar22;
                        if (uVar22 == 0) {
                          uVar35 = 0;
                          goto LAB_0020d450;
                        }
                        if (((((&DAT_00494192)[(long)(int)uVar22 * 3] == '\x01') ||
                             (uVar25 = (ulong)(uVar13 - 2),
                             (&DAT_00494192)[(long)(int)(uVar13 - 2) * 3] == '\x01')) ||
                            (uVar25 = (ulong)(uVar13 - 3),
                            (&DAT_00494192)[(long)(int)(uVar13 - 3) * 3] == '\x01')) ||
                           (((uVar25 = (ulong)(uVar13 - 4),
                             (&DAT_00494192)[(long)(int)(uVar13 - 4) * 3] == '\x01' ||
                             (uVar25 = (ulong)(uVar13 - 5),
                             (&DAT_00494192)[(long)(int)(uVar13 - 5) * 3] == '\x01')) ||
                            ((uVar25 = (ulong)(uVar13 - 6),
                             (&DAT_00494192)[(long)(int)(uVar13 - 6) * 3] == '\x01' ||
                             (uVar25 = (ulong)(uVar13 - 7),
                             (&DAT_00494192)[(long)(int)(uVar13 - 7) * 3] == '\x01')))))) break;
                        uVar13 = uVar13 - 8;
                      }
                    }
LAB_002134b4:
                    uVar35 = (ushort)uVar25;
                  }
LAB_0020d450:
                  (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                  uVar43 = 0x197;
                  lVar48 = 0x197;
                  uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                  goto LAB_00209818;
                }
                if (uVar35 != 0x60b) {
                  if (uVar35 != 0x613) {
                    if (uVar35 != 0x5fd) goto LAB_00209090;
                    uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                    if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                      uVar17 = uVar35 - 1;
                      uVar22 = uVar17 & 7;
                      uVar13 = (uint)uVar35;
                      if (uVar22 == 0) goto LAB_0020c164;
                      uVar25 = (ulong)(int)uVar17;
                      if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                        uVar13 = uVar17;
                        if (uVar22 == 1) goto LAB_0020c164;
                        if (uVar22 != 2) {
                          if (uVar22 != 3) {
                            if (uVar22 != 4) {
                              if (uVar22 != 5) {
                                if (uVar22 != 6) {
                                  uVar17 = uVar35 - 2;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                  goto LAB_00210c74;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_00210c74;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_00210c74;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_00210c74;
                          }
                          uVar17 = uVar17 - 1;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_00210c74;
                        }
                        uVar13 = uVar17 - 1;
                        while (uVar25 = (ulong)uVar13,
                              (&DAT_00494192)[(long)(int)uVar13 * 3] != '\x01') {
LAB_0020c164:
                          uVar22 = uVar13 - 1;
                          uVar25 = (ulong)uVar22;
                          if (uVar22 == 0) {
                            uVar35 = 0;
                            goto LAB_0020c174;
                          }
                          if (((((&DAT_00494192)[(long)(int)uVar22 * 3] == '\x01') ||
                               (uVar25 = (ulong)(uVar13 - 2),
                               (&DAT_00494192)[(long)(int)(uVar13 - 2) * 3] == '\x01')) ||
                              (uVar25 = (ulong)(uVar13 - 3),
                              (&DAT_00494192)[(long)(int)(uVar13 - 3) * 3] == '\x01')) ||
                             (((uVar25 = (ulong)(uVar13 - 4),
                               (&DAT_00494192)[(long)(int)(uVar13 - 4) * 3] == '\x01' ||
                               (uVar25 = (ulong)(uVar13 - 5),
                               (&DAT_00494192)[(long)(int)(uVar13 - 5) * 3] == '\x01')) ||
                              ((uVar25 = (ulong)(uVar13 - 6),
                               (&DAT_00494192)[(long)(int)(uVar13 - 6) * 3] == '\x01' ||
                               (uVar25 = (ulong)(uVar13 - 7),
                               (&DAT_00494192)[(long)(int)(uVar13 - 7) * 3] == '\x01')))))) break;
                          uVar13 = uVar13 - 8;
                        }
                      }
LAB_00210c74:
                      uVar35 = (ushort)uVar25;
                    }
LAB_0020c174:
                    (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                    uVar43 = 0x19e;
                    lVar48 = 0x19e;
                    uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                    goto LAB_00209818;
                  }
                  uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                  if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                    uVar17 = uVar35 - 1;
                    uVar22 = uVar17 & 7;
                    uVar13 = (uint)uVar35;
                    if (uVar22 == 0) goto LAB_0020ca5c;
                    uVar25 = (ulong)(int)uVar17;
                    if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                      uVar13 = uVar17;
                      if (uVar22 == 1) goto LAB_0020ca5c;
                      if (uVar22 != 2) {
                        if (uVar22 != 3) {
                          if (uVar22 != 4) {
                            if (uVar22 != 5) {
                              if (uVar22 != 6) {
                                uVar17 = uVar35 - 2;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_0020fb74;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_0020fb74;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020fb74;
                          }
                          uVar17 = uVar17 - 1;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020fb74;
                        }
                        uVar17 = uVar17 - 1;
                        uVar25 = (ulong)uVar17;
                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020fb74;
                      }
                      uVar13 = uVar17 - 1;
                      while (uVar25 = (ulong)uVar13,
                            (&DAT_00494192)[(long)(int)uVar13 * 3] != '\x01') {
LAB_0020ca5c:
                        uVar22 = uVar13 - 1;
                        uVar25 = (ulong)uVar22;
                        if (uVar22 == 0) {
                          uVar35 = 0;
                          goto LAB_0020ca6c;
                        }
                        if ((((((&DAT_00494192)[(long)(int)uVar22 * 3] == '\x01') ||
                              (uVar25 = (ulong)(uVar13 - 2),
                              (&DAT_00494192)[(long)(int)(uVar13 - 2) * 3] == '\x01')) ||
                             (uVar25 = (ulong)(uVar13 - 3),
                             (&DAT_00494192)[(long)(int)(uVar13 - 3) * 3] == '\x01')) ||
                            ((uVar25 = (ulong)(uVar13 - 4),
                             (&DAT_00494192)[(long)(int)(uVar13 - 4) * 3] == '\x01' ||
                             (uVar25 = (ulong)(uVar13 - 5),
                             (&DAT_00494192)[(long)(int)(uVar13 - 5) * 3] == '\x01')))) ||
                           ((uVar25 = (ulong)(uVar13 - 6),
                            (&DAT_00494192)[(long)(int)(uVar13 - 6) * 3] == '\x01' ||
                            (uVar25 = (ulong)(uVar13 - 7),
                            (&DAT_00494192)[(long)(int)(uVar13 - 7) * 3] == '\x01')))) break;
                        uVar13 = uVar13 - 8;
                      }
                    }
LAB_0020fb74:
                    uVar35 = (ushort)uVar25;
                  }
LAB_0020ca6c:
                  (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                  uVar43 = 0x1ac;
                  lVar48 = 0x1ac;
                  uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                  goto LAB_00209818;
                }
                uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                  uVar17 = uVar35 - 1;
                  uVar22 = uVar17 & 7;
                  uVar13 = (uint)uVar35;
                  if (uVar22 == 0) goto LAB_0020cc74;
                  uVar25 = (ulong)(int)uVar17;
                  if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                    uVar13 = uVar17;
                    if (uVar22 == 1) goto LAB_0020cc74;
                    if (uVar22 != 2) {
                      if (uVar22 != 3) {
                        if (uVar22 != 4) {
                          if (uVar22 != 5) {
                            if (uVar22 != 6) {
                              uVar17 = uVar35 - 2;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_00210c6c;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_00210c6c;
                          }
                          uVar17 = uVar17 - 1;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_00210c6c;
                        }
                        uVar17 = uVar17 - 1;
                        uVar25 = (ulong)uVar17;
                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_00210c6c;
                      }
                      uVar17 = uVar17 - 1;
                      uVar25 = (ulong)uVar17;
                      if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_00210c6c;
                    }
                    uVar13 = uVar17 - 1;
                    while (uVar25 = (ulong)uVar13, (&DAT_00494192)[(long)(int)uVar13 * 3] != '\x01')
                    {
LAB_0020cc74:
                      uVar22 = uVar13 - 1;
                      uVar25 = (ulong)uVar22;
                      if (uVar22 == 0) {
                        uVar35 = 0;
                        goto LAB_0020cc84;
                      }
                      if (((((&DAT_00494192)[(long)(int)uVar22 * 3] == '\x01') ||
                           (uVar25 = (ulong)(uVar13 - 2),
                           (&DAT_00494192)[(long)(int)(uVar13 - 2) * 3] == '\x01')) ||
                          (uVar25 = (ulong)(uVar13 - 3),
                          (&DAT_00494192)[(long)(int)(uVar13 - 3) * 3] == '\x01')) ||
                         (((uVar25 = (ulong)(uVar13 - 4),
                           (&DAT_00494192)[(long)(int)(uVar13 - 4) * 3] == '\x01' ||
                           (uVar25 = (ulong)(uVar13 - 5),
                           (&DAT_00494192)[(long)(int)(uVar13 - 5) * 3] == '\x01')) ||
                          ((uVar25 = (ulong)(uVar13 - 6),
                           (&DAT_00494192)[(long)(int)(uVar13 - 6) * 3] == '\x01' ||
                           (uVar25 = (ulong)(uVar13 - 7),
                           (&DAT_00494192)[(long)(int)(uVar13 - 7) * 3] == '\x01')))))) break;
                      uVar13 = uVar13 - 8;
                    }
                  }
LAB_00210c6c:
                  uVar35 = (ushort)uVar25;
                }
LAB_0020cc84:
                (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                uVar43 = 0x1a6;
                lVar48 = 0x1a6;
                uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                goto LAB_00209818;
              }
              uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
              if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                uVar17 = uVar35 - 1;
                uVar22 = uVar17 & 7;
                uVar13 = (uint)uVar35;
                if (uVar22 == 0) goto LAB_0020d228;
                uVar25 = (ulong)(int)uVar17;
                if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                  uVar13 = uVar17;
                  if (uVar22 == 1) goto LAB_0020d228;
                  if (uVar22 != 2) {
                    if (uVar22 != 3) {
                      if (uVar22 != 4) {
                        if (uVar22 != 5) {
                          if (uVar22 != 6) {
                            uVar17 = uVar35 - 2;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020fb6c;
                          }
                          uVar17 = uVar17 - 1;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020fb6c;
                        }
                        uVar17 = uVar17 - 1;
                        uVar25 = (ulong)uVar17;
                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020fb6c;
                      }
                      uVar17 = uVar17 - 1;
                      uVar25 = (ulong)uVar17;
                      if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020fb6c;
                    }
                    uVar17 = uVar17 - 1;
                    uVar25 = (ulong)uVar17;
                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020fb6c;
                  }
                  uVar13 = uVar17 - 1;
                  while (uVar25 = (ulong)uVar13, (&DAT_00494192)[(long)(int)uVar13 * 3] != '\x01') {
LAB_0020d228:
                    uVar22 = uVar13 - 1;
                    uVar25 = (ulong)uVar22;
                    if (uVar22 == 0) {
                      uVar35 = 0;
                      goto LAB_0020d238;
                    }
                    if (((((&DAT_00494192)[(long)(int)uVar22 * 3] == '\x01') ||
                         (uVar25 = (ulong)(uVar13 - 2),
                         (&DAT_00494192)[(long)(int)(uVar13 - 2) * 3] == '\x01')) ||
                        (uVar25 = (ulong)(uVar13 - 3),
                        (&DAT_00494192)[(long)(int)(uVar13 - 3) * 3] == '\x01')) ||
                       (((uVar25 = (ulong)(uVar13 - 4),
                         (&DAT_00494192)[(long)(int)(uVar13 - 4) * 3] == '\x01' ||
                         (uVar25 = (ulong)(uVar13 - 5),
                         (&DAT_00494192)[(long)(int)(uVar13 - 5) * 3] == '\x01')) ||
                        ((uVar25 = (ulong)(uVar13 - 6),
                         (&DAT_00494192)[(long)(int)(uVar13 - 6) * 3] == '\x01' ||
                         (uVar25 = (ulong)(uVar13 - 7),
                         (&DAT_00494192)[(long)(int)(uVar13 - 7) * 3] == '\x01')))))) break;
                    uVar13 = uVar13 - 8;
                  }
                }
LAB_0020fb6c:
                uVar35 = (ushort)uVar25;
              }
LAB_0020d238:
              (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
              uVar43 = 0x150;
              lVar48 = 0x150;
              uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
              goto LAB_00209818;
            }
            if (cVar3 == '\x06') {
              uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
              uVar25 = (ulong)uVar35;
              if (uVar35 == 0x5fa) {
                uVar43 = 0x68e;
                lVar48 = 0x68e;
              }
              else if (uVar35 < 0x5fb) {
                if (uVar35 == 0x582) {
                  uVar43 = 0x643;
                  lVar48 = 0x643;
                }
                else if (uVar35 < 0x583) {
                  if (uVar35 == 0x549) {
                    uVar43 = 0x619;
                    lVar48 = 0x619;
                    goto LAB_0020a010;
                  }
                  if (uVar35 != 0x571) goto LAB_00209090;
                  uVar43 = 0x639;
                  lVar48 = 0x639;
                }
                else if (uVar35 == 0x5f7) {
                  uVar43 = 0x68b;
                  lVar48 = 0x68b;
                }
                else {
                  if (uVar35 != 0x5f9) goto LAB_00209090;
                  uVar43 = 0x68d;
                  lVar48 = 0x68d;
                }
              }
              else if (uVar35 == 0x613) {
                uVar43 = 0x69a;
                lVar48 = 0x69a;
              }
              else if (uVar35 < 0x614) {
                if (uVar35 == 0x5fd) {
                  uVar43 = 0x690;
                  lVar48 = 0x690;
                }
                else {
                  if (uVar35 != 0x60b) goto LAB_00209090;
                  uVar43 = 0x693;
                  lVar48 = 0x693;
                }
              }
              else if (uVar35 == 0x8a2) {
                uVar43 = 0x6f4;
                lVar48 = 0x6f4;
              }
              else if (uVar35 == 0x926) {
                uVar43 = 0x758;
                lVar48 = 0x758;
              }
              else {
                if (uVar35 != 0x8a0) goto LAB_00209090;
                uVar43 = 0x6f2;
                lVar48 = 0x6f2;
              }
              goto LAB_00208ff8;
            }
            if (cVar3 == '\a') {
              uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
              uVar25 = (ulong)uVar35;
              if (uVar35 == 0x5f7) {
                uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                  uVar17 = uVar35 - 1;
                  uVar22 = uVar17 & 7;
                  uVar13 = (uint)uVar35;
                  if (uVar22 == 0) goto LAB_0020f6f8;
                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01') {
                    uVar13 = uVar17;
                    if (uVar22 == 1) goto LAB_0020f6f8;
                    if ((uVar22 == 2) ||
                       (((uVar22 == 3 ||
                         (((uVar22 == 4 ||
                           (((uVar22 == 5 ||
                             (((uVar22 == 6 ||
                               (uVar17 = uVar35 - 2,
                               (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')) &&
                              (uVar17 = uVar17 - 1, (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01'
                              )))) && (uVar17 = uVar17 - 1,
                                      (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')))) &&
                          (uVar17 = uVar17 - 1, (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01'))))
                        && (uVar17 = uVar17 - 1, (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')))
                       ) {
                      uVar17 = uVar17 - 1;
                      cVar3 = (&DAT_00494192)[(long)(int)uVar17 * 3];
                      while (uVar13 = uVar17, cVar3 != '\x01') {
LAB_0020f6f8:
                        uVar17 = uVar13 - 1;
                        uVar35 = 0;
                        if (uVar17 == 0) goto LAB_0020f7e4;
                        if ((((((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') ||
                              (uVar17 = uVar13 - 2, (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01'
                              )) || ((uVar17 = uVar13 - 3,
                                     (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01' ||
                                     ((uVar17 = uVar13 - 4,
                                      (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01' ||
                                      (uVar17 = uVar13 - 5,
                                      (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')))))) ||
                            (uVar17 = uVar13 - 6, (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01'))
                           || (uVar17 = uVar13 - 7, (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01'
                              )) break;
                        uVar17 = uVar13 - 8;
                        cVar3 = (&DAT_00494192)[(long)(int)uVar17 * 3];
                      }
                    }
                  }
                  uVar35 = (ushort)uVar17;
                }
LAB_0020f7e4:
                (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                uVar43 = 0x197;
                lVar48 = 0x197;
                uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                goto LAB_00209818;
              }
              if (uVar35 < 0x5f8) {
                if (uVar35 == 0x1cf) {
                  uVar43 = 0x7e4;
                  lVar48 = 0x7e4;
                }
                else {
                  if (0x1cf < uVar35) {
                    if (uVar35 != 0x571) {
                      if (uVar35 != 0x582) {
                        if (uVar35 != 0x549) goto LAB_00209090;
                        uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                        uVar25 = (ulong)uVar35;
                        if ((uVar35 != 0) &&
                           ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                          uVar17 = uVar35 - 1;
                          uVar22 = uVar17 & 7;
                          if (uVar22 == 0) {
LAB_0020a620:
                            do {
                              iVar9 = (int)uVar25;
                              uVar22 = iVar9 - 1;
                              uVar25 = (ulong)uVar22;
                              if (uVar22 == 0) {
                                uVar35 = 0;
                                goto LAB_00210c50;
                              }
                            } while ((((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\x01') &&
                                       (uVar25 = (ulong)(iVar9 - 2U),
                                       (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\x01')) &&
                                      (uVar25 = (ulong)(iVar9 - 3U),
                                      (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\x01')) &&
                                     ((uVar25 = (ulong)(iVar9 - 4U),
                                      (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\x01' &&
                                      (uVar25 = (ulong)(iVar9 - 5U),
                                      (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\x01')))) &&
                                    ((uVar25 = (ulong)(iVar9 - 6U),
                                     (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\x01' &&
                                     ((uVar25 = (ulong)(iVar9 - 7U),
                                      (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\x01' &&
                                      (uVar25 = (ulong)(iVar9 - 8U),
                                      (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\x01'))))));
                          }
                          else {
                            uVar25 = (ulong)(int)uVar17;
                            if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                              if (uVar22 != 1) {
                                if (uVar22 != 2) {
                                  if (uVar22 != 3) {
                                    if (uVar22 != 4) {
                                      if (uVar22 != 5) {
                                        if (uVar22 != 6) {
                                          uVar17 = uVar35 - 2;
                                          uVar25 = (ulong)uVar17;
                                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                          goto LAB_0020a708;
                                        }
                                        uVar17 = uVar17 - 1;
                                        uVar25 = (ulong)uVar17;
                                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                        goto LAB_0020a708;
                                      }
                                      uVar17 = uVar17 - 1;
                                      uVar25 = (ulong)uVar17;
                                      if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                      goto LAB_0020a708;
                                    }
                                    uVar17 = uVar17 - 1;
                                    uVar25 = (ulong)uVar17;
                                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                    goto LAB_0020a708;
                                  }
                                  uVar17 = uVar17 - 1;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                  goto LAB_0020a708;
                                }
                                uVar25 = (ulong)(uVar17 - 1);
                                if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\x01')
                                goto LAB_0020a708;
                              }
                              goto LAB_0020a620;
                            }
                          }
LAB_0020a708:
                          uVar35 = (ushort)uVar25;
                        }
LAB_00210c50:
                        (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                        uVar43 = 0x123;
                        lVar48 = 0x123;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        goto LAB_00209818;
                      }
                      uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                      uVar25 = (ulong)uVar35;
                      if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01'))
                      {
                        uVar17 = uVar35 - 1;
                        uVar22 = uVar17 & 7;
                        if (uVar22 == 0) {
LAB_0020df38:
                          do {
                            iVar9 = (int)uVar25;
                            uVar22 = iVar9 - 1;
                            uVar25 = (ulong)uVar22;
                            if (uVar22 == 0) {
                              uVar35 = 0;
                              goto LAB_0020fff4;
                            }
                          } while (((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\x01') &&
                                    (uVar25 = (ulong)(iVar9 - 2U),
                                    (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\x01')) &&
                                   (uVar25 = (ulong)(iVar9 - 3U),
                                   (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\x01')) &&
                                  (((uVar25 = (ulong)(iVar9 - 4U),
                                    (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\x01' &&
                                    (uVar25 = (ulong)(iVar9 - 5U),
                                    (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\x01')) &&
                                   ((uVar25 = (ulong)(iVar9 - 6U),
                                    (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\x01' &&
                                    ((uVar25 = (ulong)(iVar9 - 7U),
                                     (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\x01' &&
                                     (uVar25 = (ulong)(iVar9 - 8U),
                                     (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\x01'))))))));
                        }
                        else {
                          uVar25 = (ulong)(int)uVar17;
                          if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                            if (uVar22 != 1) {
                              if (uVar22 != 2) {
                                if (uVar22 != 3) {
                                  if (uVar22 != 4) {
                                    if (uVar22 != 5) {
                                      if (uVar22 != 6) {
                                        uVar17 = uVar35 - 2;
                                        uVar25 = (ulong)uVar17;
                                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                        goto LAB_0020e020;
                                      }
                                      uVar17 = uVar17 - 1;
                                      uVar25 = (ulong)uVar17;
                                      if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                      goto LAB_0020e020;
                                    }
                                    uVar17 = uVar17 - 1;
                                    uVar25 = (ulong)uVar17;
                                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                    goto LAB_0020e020;
                                  }
                                  uVar17 = uVar17 - 1;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                  goto LAB_0020e020;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_0020e020;
                              }
                              uVar25 = (ulong)(uVar17 - 1);
                              if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\x01')
                              goto LAB_0020e020;
                            }
                            goto LAB_0020df38;
                          }
                        }
LAB_0020e020:
                        uVar35 = (ushort)uVar25;
                      }
LAB_0020fff4:
                      (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                      uVar43 = 0x150;
                      lVar48 = 0x150;
                      uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      goto LAB_00209818;
                    }
                    uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                    uVar25 = (ulong)uVar35;
                    if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                      uVar17 = uVar35 - 1;
                      uVar22 = uVar17 & 7;
                      if (uVar22 == 0) {
LAB_0020efe4:
                        do {
                          iVar9 = (int)uVar25;
                          uVar22 = iVar9 - 1;
                          uVar25 = (ulong)uVar22;
                          if (uVar22 == 0) {
                            uVar35 = 0;
                            goto LAB_0020fa90;
                          }
                        } while (((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\x01') &&
                                  (uVar25 = (ulong)(iVar9 - 2U),
                                  (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\x01')) &&
                                 (uVar25 = (ulong)(iVar9 - 3U),
                                 (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\x01')) &&
                                (((uVar25 = (ulong)(iVar9 - 4U),
                                  (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\x01' &&
                                  (uVar25 = (ulong)(iVar9 - 5U),
                                  (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\x01')) &&
                                 ((uVar25 = (ulong)(iVar9 - 6U),
                                  (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\x01' &&
                                  ((uVar25 = (ulong)(iVar9 - 7U),
                                   (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\x01' &&
                                   (uVar25 = (ulong)(iVar9 - 8U),
                                   (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\x01'))))))));
                      }
                      else {
                        uVar25 = (ulong)(int)uVar17;
                        if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                          if (uVar22 != 1) {
                            if (uVar22 != 2) {
                              if (uVar22 != 3) {
                                if (uVar22 != 4) {
                                  if (uVar22 != 5) {
                                    if (uVar22 != 6) {
                                      uVar17 = uVar35 - 2;
                                      uVar25 = (ulong)uVar17;
                                      if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                      goto LAB_0020f0cc;
                                    }
                                    uVar17 = uVar17 - 1;
                                    uVar25 = (ulong)uVar17;
                                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                    goto LAB_0020f0cc;
                                  }
                                  uVar17 = uVar17 - 1;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                  goto LAB_0020f0cc;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_0020f0cc;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_0020f0cc;
                            }
                            uVar25 = (ulong)(uVar17 - 1);
                            if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\x01')
                            goto LAB_0020f0cc;
                          }
                          goto LAB_0020efe4;
                        }
                      }
LAB_0020f0cc:
                      uVar35 = (ushort)uVar25;
                    }
LAB_0020fa90:
                    (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                    uVar43 = 0x143;
                    lVar48 = 0x143;
                    uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                    goto LAB_00209818;
                  }
                  if (uVar35 == 0x4c) {
                    uVar43 = 0x791;
                    lVar48 = 0x791;
                    goto LAB_0020a010;
                  }
                  if (uVar35 != 0x1b0) goto LAB_00209090;
                  uVar43 = 0x7cd;
                  lVar48 = 0x7cd;
                }
                goto LAB_00208ff8;
              }
              if (uVar35 != 0x60b) {
                if (0x60b < uVar35) {
                  if (uVar35 == 0x619) {
                    uVar43 = 0x6f2;
                    lVar48 = 0x6f2;
                  }
                  else {
                    if (uVar35 != 0x693) {
                      if (uVar35 != 0x613) goto LAB_00209090;
                      uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                      uVar25 = (ulong)uVar35;
                      if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01'))
                      {
                        uVar17 = uVar35 - 1;
                        uVar22 = uVar17 & 7;
                        if (uVar22 == 0) {
LAB_0020bf4c:
                          do {
                            iVar9 = (int)uVar25;
                            uVar22 = iVar9 - 1;
                            uVar25 = (ulong)uVar22;
                            if (uVar22 == 0) {
                              uVar35 = 0;
                              goto LAB_0020fb50;
                            }
                          } while (((((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\x01') &&
                                      (uVar25 = (ulong)(iVar9 - 2U),
                                      (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\x01')) &&
                                     (uVar25 = (ulong)(iVar9 - 3U),
                                     (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\x01')) &&
                                    ((uVar25 = (ulong)(iVar9 - 4U),
                                     (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\x01' &&
                                     (uVar25 = (ulong)(iVar9 - 5U),
                                     (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\x01')))) &&
                                   (uVar25 = (ulong)(iVar9 - 6U),
                                   (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\x01')) &&
                                  ((uVar25 = (ulong)(iVar9 - 7U),
                                   (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\x01' &&
                                   (uVar25 = (ulong)(iVar9 - 8U),
                                   (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\x01'))));
                        }
                        else {
                          uVar25 = (ulong)(int)uVar17;
                          if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                            if (uVar22 != 1) {
                              if (uVar22 != 2) {
                                if (uVar22 != 3) {
                                  if (uVar22 != 4) {
                                    if (uVar22 != 5) {
                                      if (uVar22 != 6) {
                                        uVar17 = uVar35 - 2;
                                        uVar25 = (ulong)uVar17;
                                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                        goto LAB_0020c034;
                                      }
                                      uVar17 = uVar17 - 1;
                                      uVar25 = (ulong)uVar17;
                                      if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                      goto LAB_0020c034;
                                    }
                                    uVar17 = uVar17 - 1;
                                    uVar25 = (ulong)uVar17;
                                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                    goto LAB_0020c034;
                                  }
                                  uVar17 = uVar17 - 1;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                  goto LAB_0020c034;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_0020c034;
                              }
                              uVar25 = (ulong)(uVar17 - 1);
                              if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\x01')
                              goto LAB_0020c034;
                            }
                            goto LAB_0020bf4c;
                          }
                        }
LAB_0020c034:
                        uVar35 = (ushort)uVar25;
                      }
LAB_0020fb50:
                      (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                      uVar43 = 0x1ac;
                      lVar48 = 0x1ac;
                      uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      goto LAB_00209818;
                    }
                    uVar43 = 0x758;
                    lVar48 = 0x758;
                  }
                  goto LAB_00208ff8;
                }
                if (uVar35 != 0x5fa) {
                  if (uVar35 != 0x5fd) {
                    if (uVar35 != 0x5f9) goto LAB_00209090;
                    uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                    uVar25 = (ulong)uVar35;
                    if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                      uVar17 = uVar35 - 1;
                      uVar22 = uVar17 & 7;
                      if (uVar22 == 0) {
LAB_00209a34:
                        do {
                          iVar9 = (int)uVar25;
                          uVar22 = iVar9 - 1;
                          uVar25 = (ulong)uVar22;
                          if (uVar22 == 0) {
                            uVar35 = 0;
                            goto LAB_00209b20;
                          }
                        } while (((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\x01') &&
                                  (uVar25 = (ulong)(iVar9 - 2U),
                                  (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\x01')) &&
                                 (uVar25 = (ulong)(iVar9 - 3U),
                                 (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\x01')) &&
                                (((uVar25 = (ulong)(iVar9 - 4U),
                                  (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\x01' &&
                                  (uVar25 = (ulong)(iVar9 - 5U),
                                  (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\x01')) &&
                                 ((uVar25 = (ulong)(iVar9 - 6U),
                                  (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\x01' &&
                                  ((uVar25 = (ulong)(iVar9 - 7U),
                                   (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\x01' &&
                                   (uVar25 = (ulong)(iVar9 - 8U),
                                   (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\x01'))))))));
                      }
                      else {
                        uVar25 = (ulong)(int)uVar17;
                        if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                          if (uVar22 != 1) {
                            if (uVar22 != 2) {
                              if (uVar22 != 3) {
                                if (uVar22 != 4) {
                                  if (uVar22 != 5) {
                                    if (uVar22 != 6) {
                                      uVar17 = uVar35 - 2;
                                      uVar25 = (ulong)uVar17;
                                      if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                      goto LAB_00209b1c;
                                    }
                                    uVar17 = uVar17 - 1;
                                    uVar25 = (ulong)uVar17;
                                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                    goto LAB_00209b1c;
                                  }
                                  uVar17 = uVar17 - 1;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                  goto LAB_00209b1c;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_00209b1c;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_00209b1c;
                            }
                            uVar25 = (ulong)(uVar17 - 1);
                            if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\x01')
                            goto LAB_00209b1c;
                          }
                          goto LAB_00209a34;
                        }
                      }
LAB_00209b1c:
                      uVar35 = (ushort)uVar25;
                    }
LAB_00209b20:
                    (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                    uVar43 = 0x199;
                    lVar48 = 0x199;
                    uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                    goto LAB_00209818;
                  }
                  uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                  uVar25 = (ulong)uVar35;
                  if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                    uVar17 = uVar35 - 1;
                    uVar22 = uVar17 & 7;
                    if (uVar22 == 0) {
LAB_0020e160:
                      do {
                        iVar9 = (int)uVar25;
                        uVar22 = iVar9 - 1;
                        uVar25 = (ulong)uVar22;
                        if (uVar22 == 0) {
                          uVar35 = 0;
                          goto LAB_0020e24c;
                        }
                      } while (((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\x01') &&
                                (uVar25 = (ulong)(iVar9 - 2U),
                                (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\x01')) &&
                               (uVar25 = (ulong)(iVar9 - 3U),
                               (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\x01')) &&
                              (((uVar25 = (ulong)(iVar9 - 4U),
                                (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\x01' &&
                                (uVar25 = (ulong)(iVar9 - 5U),
                                (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\x01')) &&
                               ((uVar25 = (ulong)(iVar9 - 6U),
                                (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\x01' &&
                                ((uVar25 = (ulong)(iVar9 - 7U),
                                 (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\x01' &&
                                 (uVar25 = (ulong)(iVar9 - 8U),
                                 (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\x01'))))))));
                    }
                    else {
                      uVar25 = (ulong)(int)uVar17;
                      if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                        if (uVar22 != 1) {
                          if (uVar22 != 2) {
                            if (uVar22 != 3) {
                              if (uVar22 != 4) {
                                if (uVar22 != 5) {
                                  if (uVar22 != 6) {
                                    uVar17 = uVar35 - 2;
                                    uVar25 = (ulong)uVar17;
                                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                    goto LAB_0020e248;
                                  }
                                  uVar17 = uVar17 - 1;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                  goto LAB_0020e248;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_0020e248;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_0020e248;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020e248;
                          }
                          uVar25 = (ulong)(uVar17 - 1);
                          if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\x01')
                          goto LAB_0020e248;
                        }
                        goto LAB_0020e160;
                      }
                    }
LAB_0020e248:
                    uVar35 = (ushort)uVar25;
                  }
LAB_0020e24c:
                  (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                  uVar43 = 0x19e;
                  lVar48 = 0x19e;
                  uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                  goto LAB_00209818;
                }
                uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                uVar25 = (ulong)uVar35;
                if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                  uVar17 = uVar35 - 1;
                  uVar22 = uVar17 & 7;
                  if (uVar22 == 0) {
LAB_0020f4cc:
                    do {
                      iVar9 = (int)uVar25;
                      uVar22 = iVar9 - 1;
                      uVar25 = (ulong)uVar22;
                      if (uVar22 == 0) {
                        uVar35 = 0;
                        goto LAB_0020f5b8;
                      }
                    } while ((((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\x01') &&
                               (uVar25 = (ulong)(iVar9 - 2U),
                               (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\x01')) &&
                              (uVar25 = (ulong)(iVar9 - 3U),
                              (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\x01')) &&
                             ((uVar25 = (ulong)(iVar9 - 4U),
                              (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\x01' &&
                              (uVar25 = (ulong)(iVar9 - 5U),
                              (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\x01')))) &&
                            ((uVar25 = (ulong)(iVar9 - 6U),
                             (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\x01' &&
                             ((uVar25 = (ulong)(iVar9 - 7U),
                              (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\x01' &&
                              (uVar25 = (ulong)(iVar9 - 8U),
                              (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\x01'))))));
                  }
                  else {
                    uVar25 = (ulong)(int)uVar17;
                    if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                      if (uVar22 != 1) {
                        if (uVar22 != 2) {
                          if (uVar22 != 3) {
                            if (uVar22 != 4) {
                              if (uVar22 != 5) {
                                if (uVar22 != 6) {
                                  uVar17 = uVar35 - 2;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                  goto LAB_0020f5b4;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_0020f5b4;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_0020f5b4;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020f5b4;
                          }
                          uVar17 = uVar17 - 1;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020f5b4;
                        }
                        uVar25 = (ulong)(uVar17 - 1);
                        if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\x01')
                        goto LAB_0020f5b4;
                      }
                      goto LAB_0020f4cc;
                    }
                  }
LAB_0020f5b4:
                  uVar35 = (ushort)uVar25;
                }
LAB_0020f5b8:
                (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                uVar43 = 0x19a;
                lVar48 = 0x19a;
                uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                goto LAB_00209818;
              }
              uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
              uVar25 = (ulong)uVar35;
              if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                uVar17 = uVar35 - 1;
                uVar22 = uVar17 & 7;
                if (uVar22 == 0) {
LAB_0020f2b0:
                  do {
                    iVar9 = (int)uVar25;
                    uVar22 = iVar9 - 1;
                    uVar25 = (ulong)uVar22;
                    if (uVar22 == 0) {
                      uVar35 = 0;
                      goto LAB_0020f814;
                    }
                  } while (((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\x01') &&
                            (uVar25 = (ulong)(iVar9 - 2U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\x01')) &&
                           (uVar25 = (ulong)(iVar9 - 3U),
                           (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\x01')) &&
                          (((uVar25 = (ulong)(iVar9 - 4U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\x01' &&
                            (uVar25 = (ulong)(iVar9 - 5U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\x01')) &&
                           ((uVar25 = (ulong)(iVar9 - 6U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\x01' &&
                            ((uVar25 = (ulong)(iVar9 - 7U),
                             (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\x01' &&
                             (uVar25 = (ulong)(iVar9 - 8U),
                             (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\x01'))))))));
                }
                else {
                  uVar25 = (ulong)(int)uVar17;
                  if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                    if (uVar22 != 1) {
                      if (uVar22 != 2) {
                        if (uVar22 != 3) {
                          if (uVar22 != 4) {
                            if (uVar22 != 5) {
                              if (uVar22 != 6) {
                                uVar17 = uVar35 - 2;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_0020f398;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_0020f398;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020f398;
                          }
                          uVar17 = uVar17 - 1;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020f398;
                        }
                        uVar17 = uVar17 - 1;
                        uVar25 = (ulong)uVar17;
                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020f398;
                      }
                      uVar25 = (ulong)(uVar17 - 1);
                      if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\x01') goto LAB_0020f398;
                    }
                    goto LAB_0020f2b0;
                  }
                }
LAB_0020f398:
                uVar35 = (ushort)uVar25;
              }
LAB_0020f814:
              (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
              uVar43 = 0x1a6;
              lVar48 = 0x1a6;
              uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
              goto LAB_00209818;
            }
            if (cVar3 == '\b') {
              if ((&DAT_0057de64)[(long)(int)uVar37 * 0xc] == 0x60b) {
                uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                if (uVar35 == 0) {
                  uVar35 = 0;
                }
                else if ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01') {
                  uVar17 = uVar35 - 1;
                  uVar22 = uVar17 & 7;
                  uVar13 = (uint)uVar35;
                  if (uVar22 == 0) goto LAB_0020bca8;
                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01') {
                    uVar13 = uVar17;
                    if (uVar22 == 1) goto LAB_0020bca8;
                    if ((uVar22 == 2) ||
                       (((uVar22 == 3 ||
                         (((uVar22 == 4 ||
                           (((uVar22 == 5 ||
                             (((uVar22 == 6 ||
                               (uVar17 = uVar35 - 2,
                               (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')) &&
                              (uVar17 = uVar17 - 1, (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01'
                              )))) && (uVar17 = uVar17 - 1,
                                      (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')))) &&
                          (uVar17 = uVar17 - 1, (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01'))))
                        && (uVar17 = uVar17 - 1, (&DAT_00494192)[(long)(int)uVar17 * 3] != '\x01')))
                       ) {
                      uVar17 = uVar17 - 1;
                      cVar3 = (&DAT_00494192)[(long)(int)uVar17 * 3];
                      while (uVar13 = uVar17, cVar3 != '\x01') {
LAB_0020bca8:
                        uVar17 = uVar13 - 1;
                        uVar35 = 0;
                        if (uVar17 == 0) goto LAB_0020bd94;
                        if (((((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') ||
                             (uVar17 = uVar13 - 2, (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                             ) || ((uVar17 = uVar13 - 3,
                                   (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01' ||
                                   ((uVar17 = uVar13 - 4,
                                    (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01' ||
                                    (uVar17 = uVar13 - 5,
                                    (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')))))) ||
                           ((uVar17 = uVar13 - 6, (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01'
                            || (uVar17 = uVar13 - 7,
                               (&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')))) break;
                        uVar17 = uVar13 - 8;
                        cVar3 = (&DAT_00494192)[(long)(int)uVar17 * 3];
                      }
                    }
                  }
                  uVar35 = (ushort)uVar17;
                }
LAB_0020bd94:
                (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                uVar43 = 0x693;
                lVar48 = 0x693;
                uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                goto LAB_00209818;
              }
              if ((&DAT_0057de64)[(long)(int)uVar37 * 0xc] != 0x926) goto LAB_00209090;
              uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
              uVar25 = (ulong)uVar35;
              if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                uVar17 = uVar35 - 1;
                uVar22 = uVar17 & 7;
                if (uVar22 == 0) {
LAB_00209e28:
                  do {
                    iVar9 = (int)uVar25;
                    uVar22 = iVar9 - 1;
                    uVar25 = (ulong)uVar22;
                    if (uVar22 == 0) {
                      uVar35 = 0;
                      goto LAB_00209f14;
                    }
                  } while ((((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\x01') &&
                             (uVar25 = (ulong)(iVar9 - 2U),
                             (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\x01')) &&
                            (uVar25 = (ulong)(iVar9 - 3U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\x01')) &&
                           ((uVar25 = (ulong)(iVar9 - 4U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\x01' &&
                            (uVar25 = (ulong)(iVar9 - 5U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\x01')))) &&
                          ((uVar25 = (ulong)(iVar9 - 6U),
                           (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\x01' &&
                           ((uVar25 = (ulong)(iVar9 - 7U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\x01' &&
                            (uVar25 = (ulong)(iVar9 - 8U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\x01'))))));
                }
                else {
                  uVar25 = (ulong)(int)uVar17;
                  if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                    if (uVar22 != 1) {
                      if (uVar22 != 2) {
                        if (uVar22 != 3) {
                          if (uVar22 != 4) {
                            if (uVar22 != 5) {
                              if (uVar22 != 6) {
                                uVar17 = uVar35 - 2;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_00209f10;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_00209f10;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_00209f10;
                          }
                          uVar17 = uVar17 - 1;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_00209f10;
                        }
                        uVar17 = uVar17 - 1;
                        uVar25 = (ulong)uVar17;
                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_00209f10;
                      }
                      uVar25 = (ulong)(uVar17 - 1);
                      if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\x01') goto LAB_00209f10;
                    }
                    goto LAB_00209e28;
                  }
                }
LAB_00209f10:
                uVar35 = (ushort)uVar25;
              }
LAB_00209f14:
              (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
              uVar43 = 0x758;
              lVar48 = 0x758;
              uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
              goto LAB_00209818;
            }
            if (cVar3 == '\t') {
              uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
              uVar25 = (ulong)uVar35;
              if (uVar35 != 0x549) {
                if (uVar35 < 0x54a) {
                  if (uVar35 == 299) {
                    uVar43 = 0x28a;
                    lVar48 = 0x28a;
                  }
                  else if (uVar35 < 300) {
                    if (uVar35 == 0x126) {
                      uVar43 = 0x288;
                      lVar48 = 0x288;
                    }
                    else {
                      if (uVar35 != 0x128) {
                        if (uVar35 == 0x123) {
                          uVar43 = 0x286;
                          lVar48 = 0x286;
                          goto LAB_0020a010;
                        }
                        goto LAB_00209090;
                      }
                      uVar43 = 0x289;
                      lVar48 = 0x289;
                    }
                  }
                  else if (uVar35 == 0x14a) {
                    uVar43 = 0x2a4;
                    lVar48 = 0x2a4;
                  }
                  else if (uVar35 < 0x14b) {
LAB_00211a74:
                    uVar43 = 0x296;
                    lVar48 = 0x296;
                    if ((int)uVar25 != 0x138) goto LAB_00209090;
                  }
                  else if (uVar35 == 0x150) {
                    uVar43 = 0x2aa;
                    lVar48 = 0x2aa;
                  }
                  else {
LAB_0020db74:
                    uVar43 = 0x2f4;
                    lVar48 = 0x2f4;
                    if ((int)uVar25 != 0x199) goto LAB_00209090;
                  }
                  goto LAB_00208ff8;
                }
                if (uVar35 != 0x5f9) {
                  if (uVar35 < 0x5fa) {
                    if (uVar35 != 0x582) {
                      if (uVar35 != 0x5f7) {
                        if (uVar35 != 0x571) goto LAB_00209090;
                        uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                        uVar25 = (ulong)uVar35;
                        if ((uVar35 != 0) &&
                           ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                          uVar17 = uVar35 - 1;
                          uVar22 = uVar17 & 7;
                          if (uVar22 == 0) {
LAB_0020d948:
                            do {
                              iVar9 = (int)uVar25;
                              uVar22 = iVar9 - 1;
                              uVar25 = (ulong)uVar22;
                              if (uVar22 == 0) {
                                uVar35 = 0;
                                goto LAB_0020da34;
                              }
                            } while (((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\x01') &&
                                      (uVar25 = (ulong)(iVar9 - 2U),
                                      (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\x01')) &&
                                     (uVar25 = (ulong)(iVar9 - 3U),
                                     (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\x01')) &&
                                    (((uVar25 = (ulong)(iVar9 - 4U),
                                      (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\x01' &&
                                      (uVar25 = (ulong)(iVar9 - 5U),
                                      (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\x01')) &&
                                     ((uVar25 = (ulong)(iVar9 - 6U),
                                      (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\x01' &&
                                      ((uVar25 = (ulong)(iVar9 - 7U),
                                       (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\x01' &&
                                       (uVar25 = (ulong)(iVar9 - 8U),
                                       (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\x01')))))))
                                    );
                          }
                          else {
                            uVar25 = (ulong)(int)uVar17;
                            if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                              if (uVar22 != 1) {
                                if (uVar22 != 2) {
                                  if (uVar22 != 3) {
                                    if (uVar22 != 4) {
                                      if (uVar22 != 5) {
                                        if (uVar22 != 6) {
                                          uVar17 = uVar35 - 2;
                                          uVar25 = (ulong)uVar17;
                                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                          goto LAB_0020da30;
                                        }
                                        uVar17 = uVar17 - 1;
                                        uVar25 = (ulong)uVar17;
                                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                        goto LAB_0020da30;
                                      }
                                      uVar17 = uVar17 - 1;
                                      uVar25 = (ulong)uVar17;
                                      if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                      goto LAB_0020da30;
                                    }
                                    uVar17 = uVar17 - 1;
                                    uVar25 = (ulong)uVar17;
                                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                    goto LAB_0020da30;
                                  }
                                  uVar17 = uVar17 - 1;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                  goto LAB_0020da30;
                                }
                                uVar25 = (ulong)(uVar17 - 1);
                                if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\x01')
                                goto LAB_0020da30;
                              }
                              goto LAB_0020d948;
                            }
                          }
LAB_0020da30:
                          uVar35 = (ushort)uVar25;
                        }
LAB_0020da34:
                        (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                        uVar43 = 0x2a0;
                        lVar48 = 0x2a0;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        goto LAB_00209818;
                      }
                      uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                      uVar25 = (ulong)uVar35;
                      if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01'))
                      {
                        uVar17 = uVar35 - 1;
                        uVar22 = uVar17 & 7;
                        if (uVar22 == 0) {
LAB_0020f970:
                          do {
                            iVar9 = (int)uVar25;
                            uVar22 = iVar9 - 1;
                            uVar25 = (ulong)uVar22;
                            if (uVar22 == 0) {
                              uVar35 = 0;
                              goto LAB_0020fa5c;
                            }
                          } while (((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\x01') &&
                                    (uVar25 = (ulong)(iVar9 - 2U),
                                    (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\x01')) &&
                                   (uVar25 = (ulong)(iVar9 - 3U),
                                   (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\x01')) &&
                                  (((uVar25 = (ulong)(iVar9 - 4U),
                                    (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\x01' &&
                                    (uVar25 = (ulong)(iVar9 - 5U),
                                    (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\x01')) &&
                                   ((uVar25 = (ulong)(iVar9 - 6U),
                                    (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\x01' &&
                                    ((uVar25 = (ulong)(iVar9 - 7U),
                                     (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\x01' &&
                                     (uVar25 = (ulong)(iVar9 - 8U),
                                     (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\x01'))))))));
                        }
                        else {
                          uVar25 = (ulong)(int)uVar17;
                          if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                            if (uVar22 != 1) {
                              if (uVar22 != 2) {
                                if (uVar22 != 3) {
                                  if (uVar22 != 4) {
                                    if (uVar22 != 5) {
                                      if (uVar22 != 6) {
                                        uVar17 = uVar35 - 2;
                                        uVar25 = (ulong)uVar17;
                                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                        goto LAB_0020fa58;
                                      }
                                      uVar17 = uVar17 - 1;
                                      uVar25 = (ulong)uVar17;
                                      if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                      goto LAB_0020fa58;
                                    }
                                    uVar17 = uVar17 - 1;
                                    uVar25 = (ulong)uVar17;
                                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                    goto LAB_0020fa58;
                                  }
                                  uVar17 = uVar17 - 1;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                  goto LAB_0020fa58;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_0020fa58;
                              }
                              uVar25 = (ulong)(uVar17 - 1);
                              if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\x01')
                              goto LAB_0020fa58;
                            }
                            goto LAB_0020f970;
                          }
                        }
LAB_0020fa58:
                        uVar35 = (ushort)uVar25;
                      }
LAB_0020fa5c:
                      (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                      uVar43 = 0x2f2;
                      lVar48 = 0x2f2;
                      uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      goto LAB_00209818;
                    }
                    uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                    uVar25 = (ulong)uVar35;
                    if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                      uVar17 = uVar35 - 1;
                      uVar22 = uVar17 & 7;
                      if (uVar22 == 0) {
LAB_0020e86c:
                        do {
                          iVar9 = (int)uVar25;
                          uVar22 = iVar9 - 1;
                          uVar25 = (ulong)uVar22;
                          if (uVar22 == 0) {
                            uVar35 = 0;
                            goto LAB_0020e958;
                          }
                        } while (((((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\x01') &&
                                    (uVar25 = (ulong)(iVar9 - 2U),
                                    (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\x01')) &&
                                   (uVar25 = (ulong)(iVar9 - 3U),
                                   (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\x01')) &&
                                  ((uVar25 = (ulong)(iVar9 - 4U),
                                   (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\x01' &&
                                   (uVar25 = (ulong)(iVar9 - 5U),
                                   (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\x01')))) &&
                                 (uVar25 = (ulong)(iVar9 - 6U),
                                 (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\x01')) &&
                                ((uVar25 = (ulong)(iVar9 - 7U),
                                 (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\x01' &&
                                 (uVar25 = (ulong)(iVar9 - 8U),
                                 (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\x01'))));
                      }
                      else {
                        uVar25 = (ulong)(int)uVar17;
                        if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                          if (uVar22 != 1) {
                            if (uVar22 != 2) {
                              if (uVar22 != 3) {
                                if (uVar22 != 4) {
                                  if (uVar22 != 5) {
                                    if (uVar22 != 6) {
                                      uVar17 = uVar35 - 2;
                                      uVar25 = (ulong)uVar17;
                                      if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                      goto LAB_0020e954;
                                    }
                                    uVar17 = uVar17 - 1;
                                    uVar25 = (ulong)uVar17;
                                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                    goto LAB_0020e954;
                                  }
                                  uVar17 = uVar17 - 1;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                  goto LAB_0020e954;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_0020e954;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_0020e954;
                            }
                            uVar25 = (ulong)(uVar17 - 1);
                            if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\x01')
                            goto LAB_0020e954;
                          }
                          goto LAB_0020e86c;
                        }
                      }
LAB_0020e954:
                      uVar35 = (ushort)uVar25;
                    }
LAB_0020e958:
                    (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                    uVar43 = 0x2aa;
                    lVar48 = 0x2aa;
                    uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                    goto LAB_00209818;
                  }
                  if (uVar35 != 0x5fd) {
                    if (uVar35 < 0x5fe) {
                      if (uVar35 != 0x5fa) goto LAB_00209090;
                      uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                      uVar25 = (ulong)uVar35;
                      if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01'))
                      {
                        uVar17 = uVar35 - 1;
                        uVar22 = uVar17 & 7;
                        if (uVar22 == 0) {
LAB_00211240:
                          do {
                            iVar9 = (int)uVar25;
                            uVar22 = iVar9 - 1;
                            uVar25 = (ulong)uVar22;
                            if (uVar22 == 0) {
                              uVar35 = 0;
                              goto LAB_0021132c;
                            }
                          } while (((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\x01') &&
                                    (uVar25 = (ulong)(iVar9 - 2U),
                                    (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\x01')) &&
                                   (uVar25 = (ulong)(iVar9 - 3U),
                                   (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\x01')) &&
                                  (((uVar25 = (ulong)(iVar9 - 4U),
                                    (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\x01' &&
                                    (uVar25 = (ulong)(iVar9 - 5U),
                                    (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\x01')) &&
                                   ((uVar25 = (ulong)(iVar9 - 6U),
                                    (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\x01' &&
                                    ((uVar25 = (ulong)(iVar9 - 7U),
                                     (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\x01' &&
                                     (uVar25 = (ulong)(iVar9 - 8U),
                                     (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\x01'))))))));
                        }
                        else {
                          uVar25 = (ulong)(int)uVar17;
                          if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                            if (uVar22 != 1) {
                              if (uVar22 != 2) {
                                if (uVar22 != 3) {
                                  if (uVar22 != 4) {
                                    if (uVar22 != 5) {
                                      if (uVar22 != 6) {
                                        uVar17 = uVar35 - 2;
                                        uVar25 = (ulong)uVar17;
                                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                        goto LAB_00211328;
                                      }
                                      uVar17 = uVar17 - 1;
                                      uVar25 = (ulong)uVar17;
                                      if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                      goto LAB_00211328;
                                    }
                                    uVar17 = uVar17 - 1;
                                    uVar25 = (ulong)uVar17;
                                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                    goto LAB_00211328;
                                  }
                                  uVar17 = uVar17 - 1;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                  goto LAB_00211328;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_00211328;
                              }
                              uVar25 = (ulong)(uVar17 - 1);
                              if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\x01')
                              goto LAB_00211328;
                            }
                            goto LAB_00211240;
                          }
                        }
LAB_00211328:
                        uVar35 = (ushort)uVar25;
                      }
LAB_0021132c:
                      (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                      uVar43 = 0x2f5;
                      lVar48 = 0x2f5;
                      uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      goto LAB_00209818;
                    }
                    if (uVar35 != 0x60b) {
                      if (uVar35 == 0x613) {
                        uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                        if ((uVar35 != 0) &&
                           ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                          uVar13 = (uint)uVar35;
                          uVar22 = uVar13 - 1 & 7;
                          uVar17 = (uint)uVar35;
                          if (uVar22 == 0) goto LAB_0020b998;
                          uVar30 = uVar13 - 1;
                          if ((&DAT_00494192)[(long)(int)uVar30 * 3] != '\x01') {
                            uVar17 = uVar30;
                            if (uVar22 == 1) goto LAB_0020b998;
                            if ((uVar22 == 2) ||
                               (((uVar22 == 3 ||
                                 (((uVar22 == 4 ||
                                   (((uVar22 == 5 ||
                                     (((uVar22 == 6 ||
                                       (uVar30 = uVar13 - 2,
                                       (&DAT_00494192)[(long)(int)uVar30 * 3] != '\x01')) &&
                                      (uVar30 = uVar30 - 1,
                                      (&DAT_00494192)[(long)(int)uVar30 * 3] != '\x01')))) &&
                                    (uVar30 = uVar30 - 1,
                                    (&DAT_00494192)[(long)(int)uVar30 * 3] != '\x01')))) &&
                                  (uVar30 = uVar30 - 1,
                                  (&DAT_00494192)[(long)(int)uVar30 * 3] != '\x01')))) &&
                                (uVar30 = uVar30 - 1,
                                (&DAT_00494192)[(long)(int)uVar30 * 3] != '\x01')))) {
                              uVar30 = uVar30 - 1;
                              cVar3 = (&DAT_00494192)[(long)(int)uVar30 * 3];
                              while (uVar17 = uVar30, cVar3 != '\x01') {
LAB_0020b998:
                                uVar30 = uVar17 - 1;
                                if (uVar30 == 0) {
                                  uVar35 = 0;
                                  goto LAB_0020ba84;
                                }
                                if ((((((&DAT_00494192)[(long)(int)uVar30 * 3] == '\x01') ||
                                      (uVar30 = uVar17 - 2,
                                      (&DAT_00494192)[(long)(int)uVar30 * 3] == '\x01')) ||
                                     ((uVar30 = uVar17 - 3,
                                      (&DAT_00494192)[(long)(int)uVar30 * 3] == '\x01' ||
                                      ((uVar30 = uVar17 - 4,
                                       (&DAT_00494192)[(long)(int)uVar30 * 3] == '\x01' ||
                                       (uVar30 = uVar17 - 5,
                                       (&DAT_00494192)[(long)(int)uVar30 * 3] == '\x01')))))) ||
                                    (uVar30 = uVar17 - 6,
                                    (&DAT_00494192)[(long)(int)uVar30 * 3] == '\x01')) ||
                                   (uVar30 = uVar17 - 7,
                                   (&DAT_00494192)[(long)(int)uVar30 * 3] == '\x01')) break;
                                uVar30 = uVar17 - 8;
                                cVar3 = (&DAT_00494192)[(long)(int)uVar30 * 3];
                              }
                            }
                          }
                          uVar35 = (ushort)uVar30;
                        }
LAB_0020ba84:
                        (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                        uVar43 = 0x302;
                        lVar48 = 0x302;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        goto LAB_00209818;
                      }
                      goto LAB_00209090;
                    }
                    uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                    uVar25 = (ulong)uVar35;
                    if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                      uVar17 = uVar35 - 1;
                      uVar22 = uVar17 & 7;
                      if (uVar22 == 0) {
LAB_0021100c:
                        do {
                          iVar9 = (int)uVar25;
                          uVar22 = iVar9 - 1;
                          uVar25 = (ulong)uVar22;
                          if (uVar22 == 0) {
                            uVar35 = 0;
                            goto LAB_002110f8;
                          }
                        } while ((((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\x01') &&
                                   (uVar25 = (ulong)(iVar9 - 2U),
                                   (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\x01')) &&
                                  (uVar25 = (ulong)(iVar9 - 3U),
                                  (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\x01')) &&
                                 ((uVar25 = (ulong)(iVar9 - 4U),
                                  (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\x01' &&
                                  (uVar25 = (ulong)(iVar9 - 5U),
                                  (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\x01')))) &&
                                ((uVar25 = (ulong)(iVar9 - 6U),
                                 (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\x01' &&
                                 ((uVar25 = (ulong)(iVar9 - 7U),
                                  (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\x01' &&
                                  (uVar25 = (ulong)(iVar9 - 8U),
                                  (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\x01'))))));
                      }
                      else {
                        uVar25 = (ulong)(int)uVar17;
                        if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                          if (uVar22 != 1) {
                            if (uVar22 != 2) {
                              if (uVar22 != 3) {
                                if (uVar22 != 4) {
                                  if (uVar22 != 5) {
                                    if (uVar22 != 6) {
                                      uVar17 = uVar35 - 2;
                                      uVar25 = (ulong)uVar17;
                                      if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                      goto LAB_002110f4;
                                    }
                                    uVar17 = uVar17 - 1;
                                    uVar25 = (ulong)uVar17;
                                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                    goto LAB_002110f4;
                                  }
                                  uVar17 = uVar17 - 1;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                  goto LAB_002110f4;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_002110f4;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_002110f4;
                            }
                            uVar25 = (ulong)(uVar17 - 1);
                            if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\x01')
                            goto LAB_002110f4;
                          }
                          goto LAB_0021100c;
                        }
                      }
LAB_002110f4:
                      uVar35 = (ushort)uVar25;
                    }
LAB_002110f8:
                    (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                    uVar43 = 0x2fd;
                    lVar48 = 0x2fd;
                    uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                    goto LAB_00209818;
                  }
                  uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                  uVar25 = (ulong)uVar35;
                  if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                    uVar17 = uVar35 - 1;
                    uVar22 = uVar17 & 7;
                    if (uVar22 == 0) {
LAB_0020e514:
                      do {
                        iVar9 = (int)uVar25;
                        uVar22 = iVar9 - 1;
                        uVar25 = (ulong)uVar22;
                        if (uVar22 == 0) {
                          uVar35 = 0;
                          goto LAB_0020e600;
                        }
                      } while (((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\x01') &&
                                (uVar25 = (ulong)(iVar9 - 2U),
                                (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\x01')) &&
                               (uVar25 = (ulong)(iVar9 - 3U),
                               (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\x01')) &&
                              (((uVar25 = (ulong)(iVar9 - 4U),
                                (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\x01' &&
                                (uVar25 = (ulong)(iVar9 - 5U),
                                (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\x01')) &&
                               ((uVar25 = (ulong)(iVar9 - 6U),
                                (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\x01' &&
                                ((uVar25 = (ulong)(iVar9 - 7U),
                                 (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\x01' &&
                                 (uVar25 = (ulong)(iVar9 - 8U),
                                 (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\x01'))))))));
                    }
                    else {
                      uVar25 = (ulong)(int)uVar17;
                      if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                        if (uVar22 != 1) {
                          if (uVar22 != 2) {
                            if (uVar22 != 3) {
                              if (uVar22 != 4) {
                                if (uVar22 != 5) {
                                  if (uVar22 != 6) {
                                    uVar17 = uVar35 - 2;
                                    uVar25 = (ulong)uVar17;
                                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                    goto LAB_0020e5fc;
                                  }
                                  uVar17 = uVar17 - 1;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                  goto LAB_0020e5fc;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_0020e5fc;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_0020e5fc;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_0020e5fc;
                          }
                          uVar25 = (ulong)(uVar17 - 1);
                          if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\x01')
                          goto LAB_0020e5fc;
                        }
                        goto LAB_0020e514;
                      }
                    }
LAB_0020e5fc:
                    uVar35 = (ushort)uVar25;
                  }
LAB_0020e600:
                  (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                  uVar43 = 0x2f7;
                  lVar48 = 0x2f7;
                  uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                  goto LAB_00209818;
                }
                uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                uVar25 = (ulong)uVar35;
                if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                  uVar17 = uVar35 - 1;
                  uVar22 = uVar17 & 7;
                  if (uVar22 == 0) {
LAB_00213810:
                    do {
                      iVar9 = (int)uVar25;
                      uVar22 = iVar9 - 1;
                      uVar25 = (ulong)uVar22;
                      if (uVar22 == 0) {
                        uVar35 = 0;
                        goto LAB_002138fc;
                      }
                    } while (((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\x01') &&
                              (uVar25 = (ulong)(iVar9 - 2U),
                              (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\x01')) &&
                             (uVar25 = (ulong)(iVar9 - 3U),
                             (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\x01')) &&
                            (((uVar25 = (ulong)(iVar9 - 4U),
                              (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\x01' &&
                              (uVar25 = (ulong)(iVar9 - 5U),
                              (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\x01')) &&
                             ((uVar25 = (ulong)(iVar9 - 6U),
                              (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\x01' &&
                              ((uVar25 = (ulong)(iVar9 - 7U),
                               (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\x01' &&
                               (uVar25 = (ulong)(iVar9 - 8U),
                               (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\x01'))))))));
                  }
                  else {
                    uVar25 = (ulong)(int)uVar17;
                    if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                      if (uVar22 != 1) {
                        if (uVar22 != 2) {
                          if (uVar22 != 3) {
                            if (uVar22 != 4) {
                              if (uVar22 != 5) {
                                if (uVar22 != 6) {
                                  uVar17 = uVar35 - 2;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                  goto LAB_002138f8;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_002138f8;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_002138f8;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_002138f8;
                          }
                          uVar17 = uVar17 - 1;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_002138f8;
                        }
                        uVar25 = (ulong)(uVar17 - 1);
                        if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\x01')
                        goto LAB_002138f8;
                      }
                      goto LAB_00213810;
                    }
                  }
LAB_002138f8:
                  uVar35 = (ushort)uVar25;
                }
LAB_002138fc:
                (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                uVar43 = 0x2f4;
                lVar48 = 0x2f4;
                uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                goto LAB_00209818;
              }
              uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
              uVar25 = (ulong)uVar35;
              if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\x01')) {
                uVar17 = uVar35 - 1;
                uVar22 = uVar17 & 7;
                if (uVar22 == 0) {
LAB_00210de0:
                  do {
                    iVar9 = (int)uVar25;
                    uVar22 = iVar9 - 1;
                    uVar25 = (ulong)uVar22;
                    if (uVar22 == 0) {
                      uVar35 = 0;
                      goto LAB_00210ecc;
                    }
                  } while ((((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\x01') &&
                             (uVar25 = (ulong)(iVar9 - 2U),
                             (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\x01')) &&
                            (uVar25 = (ulong)(iVar9 - 3U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\x01')) &&
                           ((uVar25 = (ulong)(iVar9 - 4U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\x01' &&
                            (uVar25 = (ulong)(iVar9 - 5U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\x01')))) &&
                          ((uVar25 = (ulong)(iVar9 - 6U),
                           (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\x01' &&
                           ((uVar25 = (ulong)(iVar9 - 7U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\x01' &&
                            (uVar25 = (ulong)(iVar9 - 8U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\x01'))))));
                }
                else {
                  uVar25 = (ulong)(int)uVar17;
                  if ((&DAT_00494192)[uVar25 * 3] != '\x01') {
                    if (uVar22 != 1) {
                      if (uVar22 != 2) {
                        if (uVar22 != 3) {
                          if (uVar22 != 4) {
                            if (uVar22 != 5) {
                              if (uVar22 != 6) {
                                uVar17 = uVar35 - 2;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                                goto LAB_00210ec8;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01')
                              goto LAB_00210ec8;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_00210ec8;
                          }
                          uVar17 = uVar17 - 1;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_00210ec8;
                        }
                        uVar17 = uVar17 - 1;
                        uVar25 = (ulong)uVar17;
                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\x01') goto LAB_00210ec8;
                      }
                      uVar25 = (ulong)(uVar17 - 1);
                      if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\x01') goto LAB_00210ec8;
                    }
                    goto LAB_00210de0;
                  }
                }
LAB_00210ec8:
                uVar35 = (ushort)uVar25;
              }
LAB_00210ecc:
              (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
              uVar43 = 0x286;
              lVar48 = 0x286;
              uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
              goto LAB_00209818;
            }
            if (cVar3 != '\n') {
              if (cVar3 == '\v') {
                uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
                if (uVar35 != 0x5f7) {
                  if (0x5f7 < uVar35) {
                    if (uVar35 != 0x5fa) {
                      if (uVar35 < 0x5fb) {
                        if (uVar35 == 0x5f9) {
                          uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                          if ((uVar35 != 0) &&
                             ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\t')) {
                            uVar17 = uVar35 - 1;
                            uVar22 = uVar17 & 3;
                            uVar13 = (uint)uVar35;
                            if (uVar22 == 0) goto LAB_0020e6b0;
                            uVar25 = (ulong)(int)uVar17;
                            if ((&DAT_00494192)[uVar25 * 3] != '\t') {
                              uVar13 = uVar17;
                              if (uVar22 == 1) goto LAB_0020e6b0;
                              if (uVar22 != 2) {
                                uVar17 = uVar35 - 2;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t')
                                goto LAB_0020e728;
                              }
                              uVar13 = uVar17 - 1;
                              while (uVar25 = (ulong)uVar13,
                                    (&DAT_00494192)[(long)(int)uVar13 * 3] != '\t') {
LAB_0020e6b0:
                                uVar22 = uVar13 - 1;
                                uVar25 = (ulong)uVar22;
                                uVar35 = (ushort)uVar22;
                                if (uVar22 == 0) goto LAB_0020e72c;
                                if ((((&DAT_00494192)[(long)(int)uVar22 * 3] == '\t') ||
                                    (uVar25 = (ulong)(uVar13 - 2),
                                    (&DAT_00494192)[(long)(int)(uVar13 - 2) * 3] == '\t')) ||
                                   (uVar25 = (ulong)(uVar13 - 3),
                                   (&DAT_00494192)[(long)(int)(uVar13 - 3) * 3] == '\t')) break;
                                uVar13 = uVar13 - 4;
                              }
                            }
LAB_0020e728:
                            uVar35 = (ushort)uVar25;
                          }
LAB_0020e72c:
                          (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                          uVar43 = 0x375;
                          lVar48 = 0x375;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          goto LAB_00209818;
                        }
                      }
                      else {
                        if (uVar35 == 0x60b) {
                          uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                          if ((uVar35 != 0) &&
                             ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\t')) {
                            uVar17 = uVar35 - 1;
                            uVar22 = uVar17 & 3;
                            uVar13 = (uint)uVar35;
                            if (uVar22 == 0) goto LAB_0020fe28;
                            uVar25 = (ulong)(int)uVar17;
                            if ((&DAT_00494192)[uVar25 * 3] != '\t') {
                              uVar13 = uVar17;
                              if (uVar22 == 1) goto LAB_0020fe28;
                              if (uVar22 != 2) {
                                uVar17 = uVar35 - 2;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t')
                                goto LAB_0020fea0;
                              }
                              uVar13 = uVar17 - 1;
                              while (uVar25 = (ulong)uVar13,
                                    (&DAT_00494192)[(long)(int)uVar13 * 3] != '\t') {
LAB_0020fe28:
                                uVar22 = uVar13 - 1;
                                uVar25 = (ulong)uVar22;
                                uVar35 = (ushort)uVar22;
                                if (uVar22 == 0) goto LAB_0020fea4;
                                if ((((&DAT_00494192)[(long)(int)uVar22 * 3] == '\t') ||
                                    (uVar25 = (ulong)(uVar13 - 2),
                                    (&DAT_00494192)[(long)(int)(uVar13 - 2) * 3] == '\t')) ||
                                   (uVar25 = (ulong)(uVar13 - 3),
                                   (&DAT_00494192)[(long)(int)(uVar13 - 3) * 3] == '\t')) break;
                                uVar13 = uVar13 - 4;
                              }
                            }
LAB_0020fea0:
                            uVar35 = (ushort)uVar25;
                          }
LAB_0020fea4:
                          (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                          uVar43 = 0x379;
                          lVar48 = 0x379;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          goto LAB_00209818;
                        }
                        if (uVar35 == 0x613) {
                          uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                          if ((uVar35 != 0) &&
                             ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\t')) {
                            uVar13 = (uint)uVar35;
                            uVar22 = uVar13 - 1 & 3;
                            uVar17 = (uint)uVar35;
                            if (uVar22 == 0) goto LAB_0020cd80;
                            uVar30 = uVar13 - 1;
                            if ((&DAT_00494192)[(long)(int)uVar30 * 3] != '\t') {
                              uVar17 = uVar30;
                              if (uVar22 == 1) goto LAB_0020cd80;
                              if ((uVar22 == 2) ||
                                 (uVar30 = uVar13 - 2,
                                 (&DAT_00494192)[(long)(int)uVar30 * 3] != '\t')) {
                                uVar30 = uVar30 - 1;
                                while (uVar17 = uVar30,
                                      (&DAT_00494192)[(long)(int)uVar30 * 3] != '\t') {
LAB_0020cd80:
                                  uVar30 = uVar17 - 1;
                                  uVar35 = 0;
                                  if (uVar30 == 0) goto LAB_0020cdfc;
                                  if ((((&DAT_00494192)[(long)(int)uVar30 * 3] == '\t') ||
                                      (uVar30 = uVar17 - 2,
                                      (&DAT_00494192)[(long)(int)uVar30 * 3] == '\t')) ||
                                     (uVar30 = uVar17 - 3,
                                     (&DAT_00494192)[(long)(int)uVar30 * 3] == '\t')) break;
                                  uVar30 = uVar17 - 4;
                                }
                              }
                            }
                            uVar35 = (ushort)uVar30;
                          }
LAB_0020cdfc:
                          (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                          uVar43 = 0x380;
                          lVar48 = 0x380;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          goto LAB_00209818;
                        }
                      }
                      goto LAB_00209090;
                    }
                    uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                    if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\t')) {
                      uVar17 = uVar35 - 1;
                      uVar22 = uVar17 & 3;
                      uVar13 = (uint)uVar35;
                      if (uVar22 == 0) goto LAB_0020ff40;
                      uVar25 = (ulong)(int)uVar17;
                      if ((&DAT_00494192)[uVar25 * 3] != '\t') {
                        uVar13 = uVar17;
                        if (uVar22 == 1) goto LAB_0020ff40;
                        if (uVar22 != 2) {
                          uVar17 = uVar35 - 2;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_0020ffb8;
                        }
                        uVar13 = uVar17 - 1;
                        while (uVar25 = (ulong)uVar13,
                              (&DAT_00494192)[(long)(int)uVar13 * 3] != '\t') {
LAB_0020ff40:
                          uVar22 = uVar13 - 1;
                          uVar25 = (ulong)uVar22;
                          uVar35 = (ushort)uVar22;
                          if (uVar22 == 0) goto LAB_0020ffbc;
                          if ((((&DAT_00494192)[(long)(int)uVar22 * 3] == '\t') ||
                              (uVar25 = (ulong)(uVar13 - 2),
                              (&DAT_00494192)[(long)(int)(uVar13 - 2) * 3] == '\t')) ||
                             (uVar25 = (ulong)(uVar13 - 3),
                             (&DAT_00494192)[(long)(int)(uVar13 - 3) * 3] == '\t')) break;
                          uVar13 = uVar13 - 4;
                        }
                      }
LAB_0020ffb8:
                      uVar35 = (ushort)uVar25;
                    }
LAB_0020ffbc:
                    (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                    uVar43 = 0x376;
                    lVar48 = 0x376;
                    uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                    goto LAB_00209818;
                  }
                  if (uVar35 != 0x555) {
                    if (uVar35 < 0x556) {
                      if (uVar35 == 0x549) {
                        uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                        if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\t'))
                        {
                          uVar17 = uVar35 - 1;
                          uVar22 = uVar17 & 3;
                          uVar13 = (uint)uVar35;
                          if (uVar22 == 0) goto LAB_0020e34c;
                          uVar25 = (ulong)(int)uVar17;
                          if ((&DAT_00494192)[uVar25 * 3] != '\t') {
                            uVar13 = uVar17;
                            if (uVar22 == 1) goto LAB_0020e34c;
                            if (uVar22 != 2) {
                              uVar17 = uVar35 - 2;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_0020e3c4;
                            }
                            uVar13 = uVar17 - 1;
                            while (uVar25 = (ulong)uVar13,
                                  (&DAT_00494192)[(long)(int)uVar13 * 3] != '\t') {
LAB_0020e34c:
                              uVar22 = uVar13 - 1;
                              uVar25 = (ulong)uVar22;
                              uVar35 = (ushort)uVar22;
                              if (uVar22 == 0) goto LAB_0020e3c8;
                              if ((((&DAT_00494192)[(long)(int)uVar22 * 3] == '\t') ||
                                  (uVar25 = (ulong)(uVar13 - 2),
                                  (&DAT_00494192)[(long)(int)(uVar13 - 2) * 3] == '\t')) ||
                                 (uVar25 = (ulong)(uVar13 - 3),
                                 (&DAT_00494192)[(long)(int)(uVar13 - 3) * 3] == '\t')) break;
                              uVar13 = uVar13 - 4;
                            }
                          }
LAB_0020e3c4:
                          uVar35 = (ushort)uVar25;
                        }
LAB_0020e3c8:
                        (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                        uVar43 = 0x305;
                        lVar48 = 0x305;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        goto LAB_00209818;
                      }
                    }
                    else {
                      if (uVar35 == 0x571) {
                        uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                        if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\t'))
                        {
                          uVar17 = uVar35 - 1;
                          uVar22 = uVar17 & 3;
                          uVar13 = (uint)uVar35;
                          if (uVar22 == 0) goto LAB_00213280;
                          uVar25 = (ulong)(int)uVar17;
                          if ((&DAT_00494192)[uVar25 * 3] != '\t') {
                            uVar13 = uVar17;
                            if (uVar22 == 1) goto LAB_00213280;
                            if (uVar22 != 2) {
                              uVar17 = uVar35 - 2;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_002132f8;
                            }
                            uVar13 = uVar17 - 1;
                            while (uVar25 = (ulong)uVar13,
                                  (&DAT_00494192)[(long)(int)uVar13 * 3] != '\t') {
LAB_00213280:
                              uVar22 = uVar13 - 1;
                              uVar25 = (ulong)uVar22;
                              uVar35 = (ushort)uVar22;
                              if (uVar22 == 0) goto LAB_002132fc;
                              if ((((&DAT_00494192)[(long)(int)uVar22 * 3] == '\t') ||
                                  (uVar25 = (ulong)(uVar13 - 2),
                                  (&DAT_00494192)[(long)(int)(uVar13 - 2) * 3] == '\t')) ||
                                 (uVar25 = (ulong)(uVar13 - 3),
                                 (&DAT_00494192)[(long)(int)(uVar13 - 3) * 3] == '\t')) break;
                              uVar13 = uVar13 - 4;
                            }
                          }
LAB_002132f8:
                          uVar35 = (ushort)uVar25;
                        }
LAB_002132fc:
                        (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                        uVar43 = 0x322;
                        lVar48 = 0x322;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        goto LAB_00209818;
                      }
                      if (uVar35 == 0x582) {
                        uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                        if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\t'))
                        {
                          uVar13 = (uint)uVar35;
                          uVar22 = uVar13 - 1 & 3;
                          uVar17 = (uint)uVar35;
                          if (uVar22 == 0) goto LAB_0020b7b4;
                          uVar30 = uVar13 - 1;
                          if ((&DAT_00494192)[(long)(int)uVar30 * 3] != '\t') {
                            uVar17 = uVar30;
                            if (uVar22 == 1) goto LAB_0020b7b4;
                            if ((uVar22 == 2) ||
                               (uVar30 = uVar13 - 2, (&DAT_00494192)[(long)(int)uVar30 * 3] != '\t')
                               ) {
                              uVar30 = uVar30 - 1;
                              while (uVar17 = uVar30, (&DAT_00494192)[(long)(int)uVar30 * 3] != '\t'
                                    ) {
LAB_0020b7b4:
                                uVar30 = uVar17 - 1;
                                uVar35 = 0;
                                if (uVar30 == 0) goto LAB_0020b830;
                                if ((((&DAT_00494192)[(long)(int)uVar30 * 3] == '\t') ||
                                    (uVar30 = uVar17 - 2,
                                    (&DAT_00494192)[(long)(int)uVar30 * 3] == '\t')) ||
                                   (uVar30 = uVar17 - 3,
                                   (&DAT_00494192)[(long)(int)uVar30 * 3] == '\t')) break;
                                uVar30 = uVar17 - 4;
                              }
                            }
                          }
                          uVar35 = (ushort)uVar30;
                        }
LAB_0020b830:
                        (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                        uVar43 = 0x32d;
                        lVar48 = 0x32d;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        goto LAB_00209818;
                      }
                    }
                    goto LAB_00209090;
                  }
                  uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                  if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\t')) {
                    uVar17 = uVar35 - 1;
                    uVar22 = uVar17 & 3;
                    uVar13 = (uint)uVar35;
                    if (uVar22 == 0) goto LAB_0021353c;
                    uVar25 = (ulong)(int)uVar17;
                    if ((&DAT_00494192)[uVar25 * 3] != '\t') {
                      uVar13 = uVar17;
                      if (uVar22 == 1) goto LAB_0021353c;
                      if (uVar22 != 2) {
                        uVar17 = uVar35 - 2;
                        uVar25 = (ulong)uVar17;
                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_002135b4;
                      }
                      uVar13 = uVar17 - 1;
                      while (uVar25 = (ulong)uVar13, (&DAT_00494192)[(long)(int)uVar13 * 3] != '\t')
                      {
LAB_0021353c:
                        uVar22 = uVar13 - 1;
                        uVar25 = (ulong)uVar22;
                        uVar35 = (ushort)uVar22;
                        if (uVar22 == 0) goto LAB_002135b8;
                        if ((((&DAT_00494192)[(long)(int)uVar22 * 3] == '\t') ||
                            (uVar25 = (ulong)(uVar13 - 2),
                            (&DAT_00494192)[(long)(int)(uVar13 - 2) * 3] == '\t')) ||
                           (uVar25 = (ulong)(uVar13 - 3),
                           (&DAT_00494192)[(long)(int)(uVar13 - 3) * 3] == '\t')) break;
                        uVar13 = uVar13 - 4;
                      }
                    }
LAB_002135b4:
                    uVar35 = (ushort)uVar25;
                  }
LAB_002135b8:
                  (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                  uVar43 = 0x30f;
                  lVar48 = 0x30f;
                  uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                  goto LAB_00209818;
                }
                uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\t')) {
                  uVar17 = uVar35 - 1;
                  uVar22 = uVar17 & 3;
                  uVar13 = (uint)uVar35;
                  if (uVar22 == 0) goto LAB_00213654;
                  uVar25 = (ulong)(int)uVar17;
                  if ((&DAT_00494192)[uVar25 * 3] != '\t') {
                    uVar13 = uVar17;
                    if (uVar22 == 1) goto LAB_00213654;
                    if (uVar22 != 2) {
                      uVar17 = uVar35 - 2;
                      uVar25 = (ulong)uVar17;
                      if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_002136cc;
                    }
                    uVar13 = uVar17 - 1;
                    while (uVar25 = (ulong)uVar13, (&DAT_00494192)[(long)(int)uVar13 * 3] != '\t') {
LAB_00213654:
                      uVar22 = uVar13 - 1;
                      uVar25 = (ulong)uVar22;
                      uVar35 = (ushort)uVar22;
                      if (uVar22 == 0) goto LAB_002136d0;
                      if ((((&DAT_00494192)[(long)(int)uVar22 * 3] == '\t') ||
                          (uVar25 = (ulong)(uVar13 - 2),
                          (&DAT_00494192)[(long)(int)(uVar13 - 2) * 3] == '\t')) ||
                         (uVar25 = (ulong)(uVar13 - 3),
                         (&DAT_00494192)[(long)(int)(uVar13 - 3) * 3] == '\t')) break;
                      uVar13 = uVar13 - 4;
                    }
                  }
LAB_002136cc:
                  uVar35 = (ushort)uVar25;
                }
LAB_002136d0:
                (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                uVar43 = 0x374;
                lVar48 = 0x374;
                uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                goto LAB_00209818;
              }
              if (cVar3 == '\f') {
                uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
                uVar25 = (ulong)uVar35;
                if (uVar35 == 0x5fa) {
                  uVar43 = 0x3f8;
                  lVar48 = 0x3f8;
                }
                else if (uVar35 < 0x5fb) {
                  if (uVar35 == 0x582) {
                    uVar43 = 0x3ae;
                    lVar48 = 0x3ae;
                  }
                  else if (uVar35 < 0x583) {
                    if (uVar35 == 0x549) {
                      uVar43 = 0x386;
                      lVar48 = 0x386;
                      goto LAB_0020a010;
                    }
                    if (uVar35 != 0x571) goto LAB_00214fe8;
                    uVar43 = 0x3a3;
                    lVar48 = 0x3a3;
                  }
                  else if (uVar35 == 0x5f7) {
                    uVar43 = 0x3f5;
                    lVar48 = 0x3f5;
                  }
                  else {
                    if (uVar35 != 0x5f9) {
LAB_00214fe8:
                      if (uVar12 == 0x38f) {
                        if ((&DAT_00494190)[uVar25 * 3] == '\x15') goto LAB_00209090;
                        uVar22 = 0x391;
                        uVar25 = 0x391;
                        (&DAT_0057de64)[lVar39 * 0xc] = 0x391;
                        goto LAB_00210158;
                      }
                      if (((&DAT_00494190)[uVar25 * 3] - 0xc & 0xfb) == 0) {
                        uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                        if ((uVar35 == 0) ||
                           ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] == '\x11')) {
LAB_00214df8:
                          (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          uVar22 = (uint)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          goto LAB_00210158;
                        }
                        uVar30 = (uint)uVar35;
                        uVar13 = uVar30 + 1;
                        if (uVar13 < 0x92e) {
                          uVar24 = 0x92d - uVar13 & 3;
                          if ((&DAT_00494192)[(long)(int)uVar13 * 3] != '\x11') {
                            uVar31 = uVar30 + 2;
                            if (uVar31 == 0x92e) goto LAB_00208a04;
                            if (uVar24 != 0) {
                              if (uVar24 != 1) {
                                if (uVar24 != 2) {
                                  uVar13 = uVar31;
                                  if ((&DAT_00494192)[(long)(int)uVar31 * 3] == '\x11')
                                  goto LAB_00214df4;
                                  uVar31 = uVar30 + 3;
                                }
                                uVar13 = uVar31;
                                if ((&DAT_00494192)[(long)(int)uVar31 * 3] == '\x11')
                                goto LAB_00214df4;
                                uVar31 = uVar31 + 1;
                              }
                              uVar13 = uVar31;
                              if ((&DAT_00494192)[(long)(int)uVar31 * 3] == '\x11')
                              goto LAB_00214df4;
                              uVar31 = uVar31 + 1;
                              if (uVar31 == 0x92e) goto LAB_00208a04;
                            }
                            do {
                              uVar13 = uVar31;
                              if ((((&DAT_00494192)[(long)(int)uVar31 * 3] == '\x11') ||
                                  (uVar13 = uVar31 + 1,
                                  (&DAT_00494192)[(long)(int)uVar13 * 3] == '\x11')) ||
                                 ((uVar13 = uVar31 + 2,
                                  (&DAT_00494192)[(long)(int)uVar13 * 3] == '\x11' ||
                                  (uVar13 = uVar31 + 3,
                                  (&DAT_00494192)[(long)(int)uVar13 * 3] == '\x11'))))
                              goto LAB_00214df4;
                              uVar31 = uVar31 + 4;
                            } while (uVar31 != 0x92e);
                            goto LAB_00208a04;
                          }
                          goto LAB_00214df4;
                        }
                      }
                      goto LAB_002088ac;
                    }
                    uVar43 = 0x3f7;
                    lVar48 = 0x3f7;
                  }
                }
                else if (uVar35 == 0x613) {
                  uVar43 = 0x402;
                  lVar48 = 0x402;
                }
                else if (uVar35 < 0x614) {
                  if (uVar35 == 0x5fd) {
                    uVar43 = 0x3fa;
                    lVar48 = 0x3fa;
                  }
                  else {
                    if (uVar35 != 0x60b) goto LAB_00214fe8;
                    uVar43 = 0x3fc;
                    lVar48 = 0x3fc;
                  }
                }
                else if (uVar35 == 0x8a0) {
                  uVar43 = 0x837;
                  lVar48 = 0x837;
                }
                else {
                  if (uVar35 != 0x926) goto LAB_00214fe8;
                  uVar43 = 0x898;
                  lVar48 = 0x898;
                }
                goto LAB_00208ff8;
              }
              if (cVar3 == '\r') {
                uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
                uVar25 = (ulong)uVar35;
                if (uVar35 == 0x5f9) {
                  uVar43 = 0x537;
                  lVar48 = 0x537;
                }
                else if (uVar35 < 0x5fa) {
                  if (uVar35 == 0x571) {
                    uVar43 = 0x506;
                    lVar48 = 0x506;
                  }
                  else {
                    if (uVar35 < 0x572) goto LAB_0020ab68;
                    if (uVar35 == 0x582) {
                      uVar43 = 0x50f;
                      lVar48 = 0x50f;
                    }
                    else {
                      if (uVar35 != 0x5f7) goto LAB_00209090;
                      uVar43 = 0x535;
                      lVar48 = 0x535;
                    }
                  }
                }
                else if (uVar35 == 0x5fd) {
                  uVar43 = 0x53c;
                  lVar48 = 0x53c;
                }
                else if (uVar35 < 0x5fe) {
                  if (uVar35 != 0x5fa) goto LAB_00209090;
                  uVar43 = 0x538;
                  lVar48 = 0x538;
                }
                else if (uVar35 == 0x60b) {
                  uVar43 = 0x541;
                  lVar48 = 0x541;
                }
                else {
                  if (uVar35 != 0x613) goto LAB_00209090;
                  uVar43 = 0x546;
                  lVar48 = 0x546;
                }
                goto LAB_00208ff8;
              }
              if (cVar3 != '\x0e') {
                if (cVar3 == '\x0f') {
                  uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
                  if (uVar35 == 0x5f9) {
                    FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,9);
                    uVar43 = 0x893;
                    lVar48 = 0x893;
                    uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                  }
                  else {
                    uVar13 = (uint)uVar35;
                    if (uVar35 < 0x5fa) {
                      if (uVar13 == 0x571) {
                        FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,9);
                        uVar43 = 0x84e;
                        lVar48 = 0x84e;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      }
                      else if (uVar35 < 0x572) {
                        if (uVar13 != 0x549) {
LAB_00214c84:
                          if (((&DAT_00494190)[(long)(int)uVar13 * 3] - 0xc & 0xfb) == 0) {
                            uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                            if ((uVar35 == 0) ||
                               ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] == '\x11'))
                            goto LAB_00214df8;
                            uVar30 = (uint)uVar35;
                            uVar13 = uVar30 + 1;
                            if (uVar13 < 0x92e) {
                              uVar24 = 0x92d - uVar13 & 3;
                              if ((&DAT_00494192)[(long)(int)uVar13 * 3] != '\x11') {
                                uVar31 = uVar30 + 2;
                                if (uVar31 == 0x92e) goto LAB_00208a04;
                                if (uVar24 != 0) {
                                  if (uVar24 != 1) {
                                    if (uVar24 != 2) {
                                      uVar13 = uVar31;
                                      if ((&DAT_00494192)[(long)(int)uVar31 * 3] == '\x11')
                                      goto LAB_00214df4;
                                      uVar31 = uVar30 + 3;
                                    }
                                    uVar13 = uVar31;
                                    if ((&DAT_00494192)[(long)(int)uVar31 * 3] == '\x11')
                                    goto LAB_00214df4;
                                    uVar31 = uVar31 + 1;
                                  }
                                  uVar13 = uVar31;
                                  if ((&DAT_00494192)[(long)(int)uVar31 * 3] == '\x11')
                                  goto LAB_00214df4;
                                  uVar31 = uVar31 + 1;
                                  if (uVar31 == 0x92e) goto LAB_00208a04;
                                }
                                do {
                                  uVar13 = uVar31;
                                  if (((((&DAT_00494192)[(long)(int)uVar31 * 3] == '\x11') ||
                                       (uVar13 = uVar31 + 1,
                                       (&DAT_00494192)[(long)(int)(uVar31 + 1) * 3] == '\x11')) ||
                                      (uVar13 = uVar31 + 2,
                                      (&DAT_00494192)[(long)(int)(uVar31 + 2) * 3] == '\x11')) ||
                                     (uVar13 = uVar31 + 3,
                                     (&DAT_00494192)[(long)(int)(uVar31 + 3) * 3] == '\x11'))
                                  goto LAB_00214df4;
                                  uVar31 = uVar31 + 4;
                                } while (uVar31 != 0x92e);
                                goto LAB_00208a04;
                              }
LAB_00214df4:
                              uVar35 = (ushort)uVar13;
                              goto LAB_00214df8;
                            }
                          }
                          goto LAB_002088ac;
                        }
                        FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,9);
                        uVar43 = 0x837;
                        lVar48 = 0x837;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      }
                      else if (uVar13 == 0x582) {
                        FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,9);
                        uVar43 = 0x857;
                        lVar48 = 0x857;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      }
                      else {
                        if (uVar13 != 0x5f7) goto LAB_00214c84;
                        FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,9);
                        uVar43 = 0x892;
                        lVar48 = 0x892;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      }
                    }
                    else if (uVar13 == 0x5fd) {
                      FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,9);
                      uVar43 = 0x896;
                      lVar48 = 0x896;
                      uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                    }
                    else if (uVar13 < 0x5fe) {
                      if (uVar35 != 0x5fa) goto LAB_00214c84;
                      FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,9);
                      uVar43 = 0x894;
                      lVar48 = 0x894;
                      uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                    }
                    else if (uVar35 == 0x60b) {
                      FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,9);
                      uVar43 = 0x898;
                      lVar48 = 0x898;
                      uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                    }
                    else {
                      if (uVar35 != 0x613) goto LAB_00214c84;
                      FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,9);
                      uVar43 = 0x89d;
                      lVar48 = 0x89d;
                      uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                    }
                  }
                  goto LAB_00209818;
                }
                if (cVar3 == '\x10') {
                  uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
                  uVar25 = (ulong)uVar35;
                  if (uVar35 == 0x1cf) {
                    uVar43 = 0x7e4;
                    lVar48 = 0x7e4;
                  }
                  else {
                    if (0x1cf < uVar35) {
                      if (uVar35 == 0x5fa) {
                        FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                        uVar43 = 0x2f5;
                        lVar48 = 0x2f5;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      }
                      else if (uVar35 < 0x5fb) {
                        if (uVar35 == 0x582) {
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x2aa;
                          lVar48 = 0x2aa;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else if (uVar35 < 0x583) {
                          if (uVar35 == 0x549) {
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x286;
                            lVar48 = 0x286;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                          else {
                            if (uVar35 != 0x571) goto LAB_00209090;
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x2a0;
                            lVar48 = 0x2a0;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                        }
                        else if (uVar35 == 0x5f7) {
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x2f2;
                          lVar48 = 0x2f2;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else {
                          if (uVar35 != 0x5f9) goto LAB_00209090;
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x2f4;
                          lVar48 = 0x2f4;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                      }
                      else if (uVar35 == 0x613) {
                        FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                        uVar43 = 0x302;
                        lVar48 = 0x302;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      }
                      else {
                        if (0x613 < uVar35) {
                          if (uVar35 == 0x619) {
                            uVar43 = 0x6f2;
                            lVar48 = 0x6f2;
                          }
                          else {
                            uVar43 = 0x758;
                            lVar48 = 0x758;
                            if (uVar35 != 0x693) goto LAB_00209090;
                          }
                          goto LAB_00208ff8;
                        }
                        if (uVar35 == 0x5fd) {
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x2f7;
                          lVar48 = 0x2f7;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else {
                          if (uVar35 != 0x60b) goto LAB_00209090;
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x2fd;
                          lVar48 = 0x2fd;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                      }
                      goto LAB_00209818;
                    }
                    if (uVar35 == 299) {
                      uVar43 = 0x28a;
                      lVar48 = 0x28a;
                    }
                    else if (uVar35 < 300) {
                      if (uVar35 == 0x123) {
                        uVar43 = 0x286;
                        lVar48 = 0x286;
                      }
                      else {
                        if (uVar35 < 0x124) {
                          uVar43 = 0x791;
                          lVar48 = 0x791;
                          if (uVar35 == 0x4c) goto LAB_0020a010;
                          goto LAB_00209090;
                        }
                        if (uVar35 == 0x126) {
                          uVar43 = 0x288;
                          lVar48 = 0x288;
                        }
                        else {
                          uVar43 = 0x289;
                          lVar48 = 0x289;
                          if (uVar35 != 0x128) goto LAB_00209090;
                        }
                      }
                    }
                    else if (uVar35 == 0x150) {
                      uVar43 = 0x2aa;
                      lVar48 = 0x2aa;
                    }
                    else if (uVar35 < 0x151) {
                      if (uVar35 == 0x138) {
                        uVar43 = 0x296;
                        lVar48 = 0x296;
                      }
                      else {
                        uVar43 = 0x2a4;
                        lVar48 = 0x2a4;
                        if (uVar35 != 0x14a) goto LAB_00209090;
                      }
                    }
                    else if (uVar35 == 0x199) {
                      uVar43 = 0x2f4;
                      lVar48 = 0x2f4;
                    }
                    else {
                      uVar43 = 0x7cd;
                      lVar48 = 0x7cd;
                      if (uVar35 != 0x1b0) goto LAB_00209090;
                    }
                  }
                }
                else if (cVar3 == '\x11') {
                  uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
                  uVar25 = (ulong)uVar35;
                  if (uVar35 == 0x2b4) {
                    uVar43 = 0x15b;
                    lVar48 = 0x15b;
                  }
                  else if (uVar35 < 0x2b5) {
                    if (uVar35 == 0x29c) {
LAB_00214958:
                      uVar43 = 0x13e;
                      lVar48 = 0x13e;
                      goto LAB_0020a010;
                    }
                    if (uVar35 != 0x2b3) goto LAB_00209090;
                    uVar43 = 0x15a;
                    lVar48 = 0x15a;
                  }
                  else if (uVar35 == 0x2bf) {
                    uVar43 = 0x164;
                    lVar48 = 0x164;
                  }
                  else if (uVar35 == 0x2f9) {
                    uVar43 = 0x1a0;
                    lVar48 = 0x1a0;
                  }
                  else {
                    if (uVar35 != 0x2ba) goto LAB_00209090;
                    uVar43 = 0x160;
                    lVar48 = 0x160;
                  }
                }
                else if (cVar3 == '\x12') {
                  uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
                  uVar25 = (ulong)uVar35;
                  if (uVar35 == 0x2fd) {
                    uVar43 = 0x1a6;
                    lVar48 = 0x1a6;
                  }
                  else {
                    if (0x2fd < uVar35) {
                      if (uVar35 == 0x8a1) {
                        FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                        uVar43 = 0x838;
                        lVar48 = 0x838;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      }
                      else if (uVar35 < 0x8a2) {
                        if (uVar35 != 0x8a0) goto LAB_00213c58;
                        FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                        uVar43 = 0x837;
                        lVar48 = 0x837;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      }
                      else if (uVar35 == 0x8a2) {
                        FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                        uVar43 = 0x83a;
                        lVar48 = 0x83a;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      }
                      else {
                        if (uVar35 != 0x926) goto LAB_00213c58;
                        FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                        uVar43 = 0x898;
                        lVar48 = 0x898;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      }
                      goto LAB_00209818;
                    }
                    if (uVar35 == 0x2bf) {
                      uVar43 = 0x164;
                      lVar48 = 0x164;
                    }
                    else {
                      if (uVar35 != 0x2c1) {
                        if (uVar35 == 0x2b3) {
                          uVar43 = 0x15a;
                          lVar48 = 0x15a;
                          goto LAB_0020a010;
                        }
                        goto LAB_00213c58;
                      }
                      uVar43 = 0x166;
                      lVar48 = 0x166;
                    }
                  }
                }
                else {
                  if (cVar3 != '\x13') {
                    if (cVar3 == '\x14') {
                      uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
                      if (uVar35 == 0x5fd) {
                        FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                        uVar43 = 0x4e5;
                        lVar48 = 0x4e5;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      }
                      else if (uVar35 < 0x5fe) {
                        if (uVar35 == 0x582) {
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x483;
                          lVar48 = 0x483;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else if (uVar35 < 0x583) {
                          if (uVar35 == 0x549) {
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x450;
                            lVar48 = 0x450;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                          else {
                            if (uVar35 != 0x571) goto LAB_00209090;
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x474;
                            lVar48 = 0x474;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                        }
                        else if (uVar35 == 0x5f9) {
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x4e1;
                          lVar48 = 0x4e1;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else if (uVar35 == 0x5fa) {
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x4e2;
                          lVar48 = 0x4e2;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else {
                          if (uVar35 != 0x5f7) goto LAB_00209090;
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x4df;
                          lVar48 = 0x4df;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                      }
                      else if (uVar35 == 0x8a0) {
                        FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                        uVar43 = 0x7cd;
                        lVar48 = 0x7cd;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      }
                      else if (uVar35 < 0x8a1) {
                        if (uVar35 == 0x60b) {
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x4e8;
                          lVar48 = 0x4e8;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else {
                          if (uVar35 != 0x613) goto LAB_00209090;
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x4ef;
                          lVar48 = 0x4ef;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                      }
                      else if (uVar35 == 0x8a3) {
                        FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                        uVar43 = 2000;
                        lVar48 = 2000;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      }
                      else if (uVar35 == 0x8a9) {
                        FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                        uVar43 = 0x7d7;
                        lVar48 = 0x7d7;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      }
                      else {
                        if (uVar35 != 0x8a2) goto LAB_00209090;
                        FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                        uVar43 = 1999;
                        lVar48 = 1999;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      }
                    }
                    else if (cVar3 == '\x15') {
                      uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
                      if (uVar35 == 0x5f9) {
                        FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                        uVar43 = 0x537;
                        lVar48 = 0x537;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      }
                      else if (uVar35 < 0x5fa) {
                        if (uVar35 == 0x571) {
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x506;
                          lVar48 = 0x506;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else if (uVar35 < 0x572) {
                          if (uVar35 != 0x549) goto LAB_00209090;
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x4f3;
                          lVar48 = 0x4f3;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else if (uVar35 == 0x582) {
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x50f;
                          lVar48 = 0x50f;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else {
                          if (uVar35 != 0x5f7) goto LAB_00209090;
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x535;
                          lVar48 = 0x535;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                      }
                      else if (uVar35 == 0x5fd) {
                        FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                        uVar43 = 0x53c;
                        lVar48 = 0x53c;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      }
                      else if (uVar35 < 0x5fe) {
                        if (uVar35 != 0x5fa) goto LAB_00209090;
                        FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                        uVar43 = 0x538;
                        lVar48 = 0x538;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      }
                      else if (uVar35 == 0x60b) {
                        FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                        uVar43 = 0x541;
                        lVar48 = 0x541;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      }
                      else {
                        if (uVar35 != 0x613) goto LAB_00209090;
                        FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                        uVar43 = 0x546;
                        lVar48 = 0x546;
                        uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                      }
                    }
                    else {
                      if (cVar3 == '\x16') {
                        uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
                        uVar25 = (ulong)uVar35;
                        if (uVar35 == 0x2b4) {
                          uVar43 = 0x15b;
                          lVar48 = 0x15b;
                        }
                        else if (uVar35 < 0x2b5) {
                          if (uVar35 == 0x29c) goto LAB_00214958;
                          if (uVar35 != 0x2b3) goto LAB_00209090;
                          uVar43 = 0x15a;
                          lVar48 = 0x15a;
                        }
                        else if (uVar35 == 0x2bf) {
                          uVar43 = 0x164;
                          lVar48 = 0x164;
                        }
                        else if (uVar35 == 0x2f9) {
                          uVar43 = 0x1a0;
                          lVar48 = 0x1a0;
                        }
                        else {
                          if (uVar35 != 0x2ba) goto LAB_00209090;
                          uVar43 = 0x160;
                          lVar48 = 0x160;
                        }
                        goto LAB_00208ff8;
                      }
                      if (cVar3 == '\x17') {
                        uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
                        uVar25 = (ulong)uVar35;
                        if (uVar35 == 0x5fa) {
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x68e;
                          lVar48 = 0x68e;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else if (uVar35 < 0x5fb) {
                          if (uVar35 == 0x582) {
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x643;
                            lVar48 = 0x643;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                          else if (uVar35 < 0x583) {
                            if (uVar35 == 0x549) {
                              FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                              uVar43 = 0x619;
                              lVar48 = 0x619;
                              uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                            }
                            else {
                              if (uVar35 != 0x571) goto LAB_00209090;
                              FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                              uVar43 = 0x639;
                              lVar48 = 0x639;
                              uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                            }
                          }
                          else if (uVar35 == 0x5f7) {
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x68b;
                            lVar48 = 0x68b;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                          else {
                            if (uVar35 != 0x5f9) goto LAB_00209090;
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x68d;
                            lVar48 = 0x68d;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                        }
                        else if (uVar35 == 0x613) {
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x69a;
                          lVar48 = 0x69a;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else {
                          if (0x613 < uVar35) {
                            if (uVar35 == 0x8a2) {
                              uVar43 = 0x6f4;
                              lVar48 = 0x6f4;
                            }
                            else {
                              if (uVar35 != 0x926) {
                                if (uVar35 == 0x8a0) {
                                  uVar43 = 0x6f2;
                                  lVar48 = 0x6f2;
                                  goto LAB_0020a010;
                                }
                                goto LAB_00209090;
                              }
                              uVar43 = 0x758;
                              lVar48 = 0x758;
                            }
                            goto LAB_00208ff8;
                          }
                          if (uVar35 == 0x5fd) {
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x690;
                            lVar48 = 0x690;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                          else {
                            if (uVar35 != 0x60b) goto LAB_00209090;
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x693;
                            lVar48 = 0x693;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                        }
                      }
                      else if (cVar3 == '\x18') {
                        uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
                        if (uVar35 == 0x5f9) {
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x752;
                          lVar48 = 0x752;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else if (uVar35 < 0x5fa) {
                          if (uVar35 == 0x571) {
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x70c;
                            lVar48 = 0x70c;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                          else if (uVar35 < 0x572) {
                            if (uVar35 != 0x549) goto LAB_00209090;
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x6f2;
                            lVar48 = 0x6f2;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                          else if (uVar35 == 0x582) {
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x715;
                            lVar48 = 0x715;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                          else {
                            if (uVar35 != 0x5f7) goto LAB_00209090;
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x750;
                            lVar48 = 0x750;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                        }
                        else if (uVar35 == 0x5fd) {
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x755;
                          lVar48 = 0x755;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else if (uVar35 < 0x5fe) {
                          if (uVar35 != 0x5fa) goto LAB_00209090;
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x753;
                          lVar48 = 0x753;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else if (uVar35 == 0x60b) {
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x758;
                          lVar48 = 0x758;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else {
                          if (uVar35 != 0x613) goto LAB_00209090;
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x75f;
                          lVar48 = 0x75f;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                      }
                      else if (cVar3 == '\x1a') {
                        uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
                        if (uVar35 == 0x5f9) {
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x823;
                          lVar48 = 0x823;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else if (uVar35 < 0x5fa) {
                          if (uVar35 == 0x571) {
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x7e2;
                            lVar48 = 0x7e2;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                          else if (uVar35 < 0x572) {
                            if (uVar35 != 0x549) goto LAB_00209090;
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x7cd;
                            lVar48 = 0x7cd;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                          else if (uVar35 == 0x582) {
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x7ec;
                            lVar48 = 0x7ec;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                          else {
                            if (uVar35 != 0x5f7) goto LAB_00209090;
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x821;
                            lVar48 = 0x821;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                        }
                        else if (uVar35 == 0x60b) {
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x758;
                          lVar48 = 0x758;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else if (uVar35 < 0x60c) {
                          if (uVar35 == 0x5fa) {
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x825;
                            lVar48 = 0x825;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                          else {
                            if (uVar35 != 0x5fd) goto LAB_00209090;
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x828;
                            lVar48 = 0x828;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                        }
                        else if (uVar35 == 0x613) {
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x75f;
                          lVar48 = 0x75f;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else {
                          if (uVar35 != 0x926) goto LAB_00209090;
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x758;
                          lVar48 = 0x758;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                      }
                      else if (cVar3 == '\x1b') {
                        uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
                        if (uVar35 == 0x5f9) {
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x893;
                          lVar48 = 0x893;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else {
                          uVar17 = (uint)uVar35;
                          if (uVar35 < 0x5fa) {
                            if (uVar17 == 0x571) {
                              FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                              uVar43 = 0x84e;
                              lVar48 = 0x84e;
                              uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                            }
                            else if (uVar35 < 0x572) {
                              if (uVar17 != 0x549) {
LAB_00213c54:
                                uVar25 = (ulong)(int)uVar17;
                                goto LAB_00213c58;
                              }
                              FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                              uVar43 = 0x837;
                              lVar48 = 0x837;
                              uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                            }
                            else if (uVar17 == 0x582) {
                              FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                              uVar43 = 0x857;
                              lVar48 = 0x857;
                              uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                            }
                            else {
                              if (uVar17 != 0x5f7) goto LAB_00213c54;
                              FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                              uVar43 = 0x892;
                              lVar48 = 0x892;
                              uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                            }
                          }
                          else if (uVar17 == 0x5fd) {
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x896;
                            lVar48 = 0x896;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                          else if (uVar17 < 0x5fe) {
                            if (uVar35 != 0x5fa) goto LAB_00213c54;
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x894;
                            lVar48 = 0x894;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                          else if (uVar35 == 0x60b) {
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x898;
                            lVar48 = 0x898;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                          else {
                            if (uVar35 != 0x613) goto LAB_00213c54;
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x89d;
                            lVar48 = 0x89d;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                        }
                      }
                      else {
                        if (cVar3 != '\x1c') goto LAB_002088ac;
                        uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
                        if (uVar35 == 0x1cf) {
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x7e4;
                          lVar48 = 0x7e4;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else if (uVar35 < 0x1d0) {
                          if (uVar35 == 0x4c) {
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x791;
                            lVar48 = 0x791;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                          else {
                            if (uVar35 != 0x1b0) goto LAB_00209090;
                            FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                            uVar43 = 0x7cd;
                            lVar48 = 0x7cd;
                            uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                          }
                        }
                        else if (uVar35 == 0x619) {
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x6f2;
                          lVar48 = 0x6f2;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                        else {
                          if (uVar35 != 0x693) goto LAB_00209090;
                          FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,1);
                          uVar43 = 0x758;
                          lVar48 = 0x758;
                          uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                        }
                      }
                    }
                    goto LAB_00209818;
                  }
                  uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
                  uVar25 = (ulong)uVar35;
                  if (uVar35 == 0x5f9) {
                    uVar43 = 0x537;
                    lVar48 = 0x537;
                  }
                  else if (uVar35 < 0x5fa) {
                    if (uVar35 == 0x571) {
                      uVar43 = 0x506;
                      lVar48 = 0x506;
                    }
                    else {
                      if (uVar35 < 0x572) {
                        if (uVar35 == 0x549) goto LAB_0020ab70;
LAB_00213c58:
                        if (((&DAT_00494190)[uVar25 * 3] - 0xc & 0xfb) != 0) goto LAB_002088ac;
                        uVar14 = 0x11;
                        goto LAB_00210144;
                      }
                      if (uVar35 == 0x582) {
                        uVar43 = 0x50f;
                        lVar48 = 0x50f;
                      }
                      else {
                        if (uVar35 != 0x5f7) goto LAB_00213c58;
                        uVar43 = 0x535;
                        lVar48 = 0x535;
                      }
                    }
                  }
                  else if (uVar35 == 0x5fd) {
                    uVar43 = 0x53c;
                    lVar48 = 0x53c;
                  }
                  else if (uVar35 < 0x5fe) {
                    if (uVar35 != 0x5fa) goto LAB_00213c58;
                    uVar43 = 0x538;
                    lVar48 = 0x538;
                  }
                  else if (uVar35 == 0x60b) {
                    uVar43 = 0x541;
                    lVar48 = 0x541;
                  }
                  else {
                    if (uVar35 != 0x613) goto LAB_00213c58;
                    uVar43 = 0x546;
                    lVar48 = 0x546;
                  }
                }
                goto LAB_00208ff8;
              }
              uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
              uVar25 = (ulong)uVar35;
              if (uVar35 != 0x549) {
                if (uVar35 < 0x54a) {
                  if (uVar35 == 299) {
                    uVar43 = 0x28a;
                    lVar48 = 0x28a;
                  }
                  else if (uVar35 < 300) {
                    if (uVar35 == 0x126) {
                      uVar43 = 0x288;
                      lVar48 = 0x288;
                    }
                    else if (uVar35 == 0x128) {
                      uVar43 = 0x289;
                      lVar48 = 0x289;
                    }
                    else {
                      if (uVar35 != 0x123) goto LAB_00209090;
                      uVar43 = 0x286;
                      lVar48 = 0x286;
                    }
                  }
                  else if (uVar35 == 0x14a) {
                    uVar43 = 0x2a4;
                    lVar48 = 0x2a4;
                  }
                  else {
                    if (uVar35 < 0x14b) goto LAB_00211a74;
                    if (uVar35 != 0x150) goto LAB_0020db74;
                    uVar43 = 0x2aa;
                    lVar48 = 0x2aa;
                  }
                }
                else if (uVar35 == 0x5f9) {
                  uVar43 = 0x823;
                  lVar48 = 0x823;
                }
                else if (uVar35 < 0x5fa) {
                  if (uVar35 == 0x582) {
                    uVar43 = 0x7ec;
                    lVar48 = 0x7ec;
                  }
                  else if (uVar35 == 0x5f7) {
                    uVar43 = 0x821;
                    lVar48 = 0x821;
                  }
                  else {
                    if (uVar35 != 0x571) goto LAB_00209090;
                    uVar43 = 0x7e2;
                    lVar48 = 0x7e2;
                  }
                }
                else if (uVar35 == 0x5fd) {
                  uVar43 = 0x828;
                  lVar48 = 0x828;
                }
                else if (uVar35 < 0x5fe) {
                  uVar43 = 0x825;
                  lVar48 = 0x825;
                  if (uVar35 != 0x5fa) goto LAB_00209090;
                }
                else if (uVar35 == 0x60b) {
                  uVar43 = 0x758;
                  lVar48 = 0x758;
                }
                else {
                  uVar43 = 0x75f;
                  lVar48 = 0x75f;
                  if (uVar35 != 0x613) goto LAB_00209090;
                }
                goto LAB_00208ff8;
              }
              uVar43 = 0x7cd;
              lVar48 = 0x7cd;
              goto LAB_0020a010;
            }
            uVar35 = (&DAT_0057de64)[(long)(int)uVar37 * 0xc];
            if (uVar35 == 0x5fa) {
              uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
              uVar25 = (ulong)uVar35;
              if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\t')) {
                uVar17 = uVar35 - 1;
                uVar22 = uVar17 & 7;
                if (uVar22 == 0) {
LAB_00210b44:
                  do {
                    iVar9 = (int)uVar25;
                    uVar22 = iVar9 - 1;
                    uVar25 = (ulong)uVar22;
                    if (uVar22 == 0) {
                      uVar35 = 0;
                      goto LAB_00210c30;
                    }
                  } while (((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\t') &&
                            (uVar25 = (ulong)(iVar9 - 2U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\t')) &&
                           ((uVar25 = (ulong)(iVar9 - 3U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\t' &&
                            (((uVar25 = (ulong)(iVar9 - 4U),
                              (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\t' &&
                              (uVar25 = (ulong)(iVar9 - 5U),
                              (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\t')) &&
                             (uVar25 = (ulong)(iVar9 - 6U),
                             (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\t')))))) &&
                          ((uVar25 = (ulong)(iVar9 - 7U),
                           (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\t' &&
                           (uVar25 = (ulong)(iVar9 - 8U),
                           (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\t'))));
                }
                else {
                  uVar25 = (ulong)(int)uVar17;
                  if ((&DAT_00494192)[uVar25 * 3] != '\t') {
                    if (uVar22 != 1) {
                      if (uVar22 != 2) {
                        if (uVar22 != 3) {
                          if (uVar22 != 4) {
                            if (uVar22 != 5) {
                              if (uVar22 != 6) {
                                uVar17 = uVar35 - 2;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t')
                                goto LAB_00210c2c;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_00210c2c;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_00210c2c;
                          }
                          uVar17 = uVar17 - 1;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_00210c2c;
                        }
                        uVar17 = uVar17 - 1;
                        uVar25 = (ulong)uVar17;
                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_00210c2c;
                      }
                      uVar25 = (ulong)(uVar17 - 1);
                      if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\t') goto LAB_00210c2c;
                    }
                    goto LAB_00210b44;
                  }
                }
LAB_00210c2c:
                uVar35 = (ushort)uVar25;
              }
LAB_00210c30:
              (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
              uVar43 = 0x98;
              lVar48 = 0x98;
              uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
              goto LAB_00209818;
            }
            if (uVar35 < 0x5fb) {
              if (uVar35 != 0x582) {
                if (uVar35 < 0x583) {
                  if (uVar35 != 0x549) {
                    if (uVar35 != 0x571) goto LAB_00210128;
                    uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                    uVar25 = (ulong)uVar35;
                    if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\t')) {
                      uVar17 = uVar35 - 1;
                      uVar22 = uVar17 & 7;
                      if (uVar22 == 0) {
LAB_0020dd0c:
                        do {
                          iVar9 = (int)uVar25;
                          uVar22 = iVar9 - 1;
                          uVar25 = (ulong)uVar22;
                          if (uVar22 == 0) {
                            uVar35 = 0;
                            goto LAB_0020ddf8;
                          }
                        } while (((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\t') &&
                                  (uVar25 = (ulong)(iVar9 - 2U),
                                  (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\t')) &&
                                 (uVar25 = (ulong)(iVar9 - 3U),
                                 (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\t')) &&
                                (((uVar25 = (ulong)(iVar9 - 4U),
                                  (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\t' &&
                                  (uVar25 = (ulong)(iVar9 - 5U),
                                  (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\t')) &&
                                 ((uVar25 = (ulong)(iVar9 - 6U),
                                  (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\t' &&
                                  ((uVar25 = (ulong)(iVar9 - 7U),
                                   (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\t' &&
                                   (uVar25 = (ulong)(iVar9 - 8U),
                                   (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\t'))))))));
                      }
                      else {
                        uVar25 = (ulong)(int)uVar17;
                        if ((&DAT_00494192)[uVar25 * 3] != '\t') {
                          if (uVar22 != 1) {
                            if (uVar22 != 2) {
                              if (uVar22 != 3) {
                                if (uVar22 != 4) {
                                  if (uVar22 != 5) {
                                    if (uVar22 != 6) {
                                      uVar17 = uVar35 - 2;
                                      uVar25 = (ulong)uVar17;
                                      if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t')
                                      goto LAB_0020ddf4;
                                    }
                                    uVar17 = uVar17 - 1;
                                    uVar25 = (ulong)uVar17;
                                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t')
                                    goto LAB_0020ddf4;
                                  }
                                  uVar17 = uVar17 - 1;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t')
                                  goto LAB_0020ddf4;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t')
                                goto LAB_0020ddf4;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_0020ddf4;
                            }
                            uVar25 = (ulong)(uVar17 - 1);
                            if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\t')
                            goto LAB_0020ddf4;
                          }
                          goto LAB_0020dd0c;
                        }
                      }
LAB_0020ddf4:
                      uVar35 = (ushort)uVar25;
                    }
LAB_0020ddf8:
                    (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                    uVar43 = 0x24;
                    lVar48 = 0x24;
                    uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                    goto LAB_00209818;
                  }
                  uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                  uVar25 = (ulong)uVar35;
                  if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\t')) {
                    uVar17 = uVar35 - 1;
                    uVar22 = uVar17 & 7;
                    if (uVar22 == 0) {
LAB_002106e4:
                      do {
                        iVar9 = (int)uVar25;
                        uVar22 = iVar9 - 1;
                        uVar25 = (ulong)uVar22;
                        if (uVar22 == 0) {
                          uVar35 = 0;
                          goto LAB_002107d0;
                        }
                      } while (((((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\t') &&
                                  (uVar25 = (ulong)(iVar9 - 2U),
                                  (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\t')) &&
                                 (uVar25 = (ulong)(iVar9 - 3U),
                                 (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\t')) &&
                                ((uVar25 = (ulong)(iVar9 - 4U),
                                 (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\t' &&
                                 (uVar25 = (ulong)(iVar9 - 5U),
                                 (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\t')))) &&
                               (uVar25 = (ulong)(iVar9 - 6U),
                               (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\t')) &&
                              ((uVar25 = (ulong)(iVar9 - 7U),
                               (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\t' &&
                               (uVar25 = (ulong)(iVar9 - 8U),
                               (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\t'))));
                    }
                    else {
                      uVar25 = (ulong)(int)uVar17;
                      if ((&DAT_00494192)[uVar25 * 3] != '\t') {
                        if (uVar22 != 1) {
                          if (uVar22 != 2) {
                            if (uVar22 != 3) {
                              if (uVar22 != 4) {
                                if (uVar22 != 5) {
                                  if (uVar22 != 6) {
                                    uVar17 = uVar35 - 2;
                                    uVar25 = (ulong)uVar17;
                                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t')
                                    goto LAB_002107cc;
                                  }
                                  uVar17 = uVar17 - 1;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t')
                                  goto LAB_002107cc;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t')
                                goto LAB_002107cc;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_002107cc;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_002107cc;
                          }
                          uVar25 = (ulong)(uVar17 - 1);
                          if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\t')
                          goto LAB_002107cc;
                        }
                        goto LAB_002106e4;
                      }
                    }
LAB_002107cc:
                    uVar35 = (ushort)uVar25;
                  }
LAB_002107d0:
                  (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                  uVar43 = 0;
                  lVar48 = 0;
                  uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                  goto LAB_00209818;
                }
                if (uVar35 != 0x5f7) {
                  if (uVar35 != 0x5f9) goto LAB_00210128;
                  uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                  uVar25 = (ulong)uVar35;
                  if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\t')) {
                    uVar17 = uVar35 - 1;
                    uVar22 = uVar17 & 7;
                    if (uVar22 == 0) {
LAB_0020b35c:
                      do {
                        iVar9 = (int)uVar25;
                        uVar22 = iVar9 - 1;
                        uVar25 = (ulong)uVar22;
                        if (uVar22 == 0) {
                          uVar35 = 0;
                          goto LAB_0020b448;
                        }
                      } while (((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\t') &&
                                (uVar25 = (ulong)(iVar9 - 2U),
                                (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\t')) &&
                               (uVar25 = (ulong)(iVar9 - 3U),
                               (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\t')) &&
                              (((uVar25 = (ulong)(iVar9 - 4U),
                                (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\t' &&
                                (uVar25 = (ulong)(iVar9 - 5U),
                                (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\t')) &&
                               ((uVar25 = (ulong)(iVar9 - 6U),
                                (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\t' &&
                                ((uVar25 = (ulong)(iVar9 - 7U),
                                 (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\t' &&
                                 (uVar25 = (ulong)(iVar9 - 8U),
                                 (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\t'))))))));
                    }
                    else {
                      uVar25 = (ulong)(int)uVar17;
                      if ((&DAT_00494192)[uVar25 * 3] != '\t') {
                        if (uVar22 != 1) {
                          if (uVar22 != 2) {
                            if (uVar22 != 3) {
                              if (uVar22 != 4) {
                                if (uVar22 != 5) {
                                  if (uVar22 != 6) {
                                    uVar17 = uVar35 - 2;
                                    uVar25 = (ulong)uVar17;
                                    if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t')
                                    goto LAB_0020b444;
                                  }
                                  uVar17 = uVar17 - 1;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t')
                                  goto LAB_0020b444;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t')
                                goto LAB_0020b444;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_0020b444;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_0020b444;
                          }
                          uVar25 = (ulong)(uVar17 - 1);
                          if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\t')
                          goto LAB_0020b444;
                        }
                        goto LAB_0020b35c;
                      }
                    }
LAB_0020b444:
                    uVar35 = (ushort)uVar25;
                  }
LAB_0020b448:
                  (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                  uVar43 = 0x96;
                  lVar48 = 0x96;
                  uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                  goto LAB_00209818;
                }
                uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                uVar25 = (ulong)uVar35;
                if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\t')) {
                  uVar17 = uVar35 - 1;
                  uVar22 = uVar17 & 7;
                  if (uVar22 == 0) {
LAB_002104b8:
                    do {
                      iVar9 = (int)uVar25;
                      uVar22 = iVar9 - 1;
                      uVar25 = (ulong)uVar22;
                      if (uVar22 == 0) {
                        uVar35 = 0;
                        goto LAB_002105a4;
                      }
                    } while (((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\t') &&
                              (uVar25 = (ulong)(iVar9 - 2U),
                              (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\t')) &&
                             (uVar25 = (ulong)(iVar9 - 3U),
                             (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\t')) &&
                            (((uVar25 = (ulong)(iVar9 - 4U),
                              (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\t' &&
                              (uVar25 = (ulong)(iVar9 - 5U),
                              (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\t')) &&
                             ((uVar25 = (ulong)(iVar9 - 6U),
                              (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\t' &&
                              ((uVar25 = (ulong)(iVar9 - 7U),
                               (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\t' &&
                               (uVar25 = (ulong)(iVar9 - 8U),
                               (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\t'))))))));
                  }
                  else {
                    uVar25 = (ulong)(int)uVar17;
                    if ((&DAT_00494192)[uVar25 * 3] != '\t') {
                      if (uVar22 != 1) {
                        if (uVar22 != 2) {
                          if (uVar22 != 3) {
                            if (uVar22 != 4) {
                              if (uVar22 != 5) {
                                if (uVar22 != 6) {
                                  uVar17 = uVar35 - 2;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t')
                                  goto LAB_002105a0;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t')
                                goto LAB_002105a0;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_002105a0;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_002105a0;
                          }
                          uVar17 = uVar17 - 1;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_002105a0;
                        }
                        uVar25 = (ulong)(uVar17 - 1);
                        if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\t') goto LAB_002105a0;
                      }
                      goto LAB_002104b8;
                    }
                  }
LAB_002105a0:
                  uVar35 = (ushort)uVar25;
                }
LAB_002105a4:
                (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                uVar43 = 0x94;
                lVar48 = 0x94;
                uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                goto LAB_00209818;
              }
              uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
              uVar25 = (ulong)uVar35;
              if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\t')) {
                uVar17 = uVar35 - 1;
                uVar22 = uVar17 & 7;
                if (uVar22 == 0) {
LAB_00210918:
                  do {
                    iVar9 = (int)uVar25;
                    uVar22 = iVar9 - 1;
                    uVar25 = (ulong)uVar22;
                    if (uVar22 == 0) {
                      uVar35 = 0;
                      goto LAB_00210a04;
                    }
                  } while ((((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\t') &&
                             (uVar25 = (ulong)(iVar9 - 2U),
                             (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\t')) &&
                            (uVar25 = (ulong)(iVar9 - 3U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\t')) &&
                           ((uVar25 = (ulong)(iVar9 - 4U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\t' &&
                            (uVar25 = (ulong)(iVar9 - 5U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\t')))) &&
                          ((uVar25 = (ulong)(iVar9 - 6U),
                           (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\t' &&
                           ((uVar25 = (ulong)(iVar9 - 7U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\t' &&
                            (uVar25 = (ulong)(iVar9 - 8U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\t'))))));
                }
                else {
                  uVar25 = (ulong)(int)uVar17;
                  if ((&DAT_00494192)[uVar25 * 3] != '\t') {
                    if (uVar22 != 1) {
                      if (uVar22 != 2) {
                        if (uVar22 != 3) {
                          if (uVar22 != 4) {
                            if (uVar22 != 5) {
                              if (uVar22 != 6) {
                                uVar17 = uVar35 - 2;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t')
                                goto LAB_00210a00;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_00210a00;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_00210a00;
                          }
                          uVar17 = uVar17 - 1;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_00210a00;
                        }
                        uVar17 = uVar17 - 1;
                        uVar25 = (ulong)uVar17;
                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_00210a00;
                      }
                      uVar25 = (ulong)(uVar17 - 1);
                      if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\t') goto LAB_00210a00;
                    }
                    goto LAB_00210918;
                  }
                }
LAB_00210a00:
                uVar35 = (ushort)uVar25;
              }
LAB_00210a04:
              (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
              uVar43 = 0x33;
              lVar48 = 0x33;
              uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
              goto LAB_00209818;
            }
            if (uVar35 == 0x613) {
              uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
              uVar25 = (ulong)uVar35;
              if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\t')) {
                uVar17 = uVar35 - 1;
                uVar22 = uVar17 & 7;
                if (uVar22 == 0) {
LAB_0020fca0:
                  do {
                    iVar9 = (int)uVar25;
                    uVar22 = iVar9 - 1;
                    uVar25 = (ulong)uVar22;
                    if (uVar22 == 0) {
                      uVar35 = 0;
                      goto LAB_0020fd8c;
                    }
                  } while (((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\t') &&
                            (uVar25 = (ulong)(iVar9 - 2U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\t')) &&
                           (uVar25 = (ulong)(iVar9 - 3U),
                           (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\t')) &&
                          (((uVar25 = (ulong)(iVar9 - 4U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\t' &&
                            (uVar25 = (ulong)(iVar9 - 5U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\t')) &&
                           ((uVar25 = (ulong)(iVar9 - 6U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\t' &&
                            ((uVar25 = (ulong)(iVar9 - 7U),
                             (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\t' &&
                             (uVar25 = (ulong)(iVar9 - 8U),
                             (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\t'))))))));
                }
                else {
                  uVar25 = (ulong)(int)uVar17;
                  if ((&DAT_00494192)[uVar25 * 3] != '\t') {
                    if (uVar22 != 1) {
                      if (uVar22 != 2) {
                        if (uVar22 != 3) {
                          if (uVar22 != 4) {
                            if (uVar22 != 5) {
                              if (uVar22 != 6) {
                                uVar17 = uVar35 - 2;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t')
                                goto LAB_0020fd88;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_0020fd88;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_0020fd88;
                          }
                          uVar17 = uVar17 - 1;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_0020fd88;
                        }
                        uVar17 = uVar17 - 1;
                        uVar25 = (ulong)uVar17;
                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_0020fd88;
                      }
                      uVar25 = (ulong)(uVar17 - 1);
                      if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\t') goto LAB_0020fd88;
                    }
                    goto LAB_0020fca0;
                  }
                }
LAB_0020fd88:
                uVar35 = (ushort)uVar25;
              }
LAB_0020fd8c:
              (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
              uVar43 = 0xa6;
              lVar48 = 0xa6;
              uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
              goto LAB_00209818;
            }
            if (uVar35 < 0x614) {
              if (uVar35 != 0x5fd) {
                if (uVar35 != 0x60b) goto LAB_00210128;
                uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
                uVar25 = (ulong)uVar35;
                if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\t')) {
                  uVar17 = uVar35 - 1;
                  uVar22 = uVar17 & 7;
                  if (uVar22 == 0) {
LAB_0020c4fc:
                    do {
                      iVar9 = (int)uVar25;
                      uVar22 = iVar9 - 1;
                      uVar25 = (ulong)uVar22;
                      if (uVar22 == 0) {
                        uVar35 = 0;
                        goto LAB_0020c5e8;
                      }
                    } while (((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\t') &&
                              (uVar25 = (ulong)(iVar9 - 2U),
                              (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\t')) &&
                             (uVar25 = (ulong)(iVar9 - 3U),
                             (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\t')) &&
                            (((uVar25 = (ulong)(iVar9 - 4U),
                              (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\t' &&
                              (uVar25 = (ulong)(iVar9 - 5U),
                              (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\t')) &&
                             ((uVar25 = (ulong)(iVar9 - 6U),
                              (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\t' &&
                              ((uVar25 = (ulong)(iVar9 - 7U),
                               (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\t' &&
                               (uVar25 = (ulong)(iVar9 - 8U),
                               (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\t'))))))));
                  }
                  else {
                    uVar25 = (ulong)(int)uVar17;
                    if ((&DAT_00494192)[uVar25 * 3] != '\t') {
                      if (uVar22 != 1) {
                        if (uVar22 != 2) {
                          if (uVar22 != 3) {
                            if (uVar22 != 4) {
                              if (uVar22 != 5) {
                                if (uVar22 != 6) {
                                  uVar17 = uVar35 - 2;
                                  uVar25 = (ulong)uVar17;
                                  if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t')
                                  goto LAB_0020c5e4;
                                }
                                uVar17 = uVar17 - 1;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t')
                                goto LAB_0020c5e4;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_0020c5e4;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_0020c5e4;
                          }
                          uVar17 = uVar17 - 1;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_0020c5e4;
                        }
                        uVar25 = (ulong)(uVar17 - 1);
                        if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\t') goto LAB_0020c5e4;
                      }
                      goto LAB_0020c4fc;
                    }
                  }
LAB_0020c5e4:
                  uVar35 = (ushort)uVar25;
                }
LAB_0020c5e8:
                (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
                uVar43 = 0x9f;
                lVar48 = 0x9f;
                uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
                goto LAB_00209818;
              }
              uVar35 = (&DAT_0057de64)[lVar39 * 0xc];
              uVar25 = (ulong)uVar35;
              if ((uVar35 != 0) && ((&DAT_00494192)[(long)(int)(uint)uVar35 * 3] != '\t')) {
                uVar17 = uVar35 - 1;
                uVar22 = uVar17 & 7;
                if (uVar22 == 0) {
LAB_0021028c:
                  do {
                    iVar9 = (int)uVar25;
                    uVar22 = iVar9 - 1;
                    uVar25 = (ulong)uVar22;
                    if (uVar22 == 0) {
                      uVar35 = 0;
                      goto LAB_00210378;
                    }
                  } while ((((((&DAT_00494192)[(long)(int)uVar22 * 3] != '\t') &&
                             (uVar25 = (ulong)(iVar9 - 2U),
                             (&DAT_00494192)[(long)(int)(iVar9 - 2U) * 3] != '\t')) &&
                            (uVar25 = (ulong)(iVar9 - 3U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 3U) * 3] != '\t')) &&
                           ((uVar25 = (ulong)(iVar9 - 4U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 4U) * 3] != '\t' &&
                            (uVar25 = (ulong)(iVar9 - 5U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 5U) * 3] != '\t')))) &&
                          ((uVar25 = (ulong)(iVar9 - 6U),
                           (&DAT_00494192)[(long)(int)(iVar9 - 6U) * 3] != '\t' &&
                           ((uVar25 = (ulong)(iVar9 - 7U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 7U) * 3] != '\t' &&
                            (uVar25 = (ulong)(iVar9 - 8U),
                            (&DAT_00494192)[(long)(int)(iVar9 - 8U) * 3] != '\t'))))));
                }
                else {
                  uVar25 = (ulong)(int)uVar17;
                  if ((&DAT_00494192)[uVar25 * 3] != '\t') {
                    if (uVar22 != 1) {
                      if (uVar22 != 2) {
                        if (uVar22 != 3) {
                          if (uVar22 != 4) {
                            if (uVar22 != 5) {
                              if (uVar22 != 6) {
                                uVar17 = uVar35 - 2;
                                uVar25 = (ulong)uVar17;
                                if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t')
                                goto LAB_00210374;
                              }
                              uVar17 = uVar17 - 1;
                              uVar25 = (ulong)uVar17;
                              if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_00210374;
                            }
                            uVar17 = uVar17 - 1;
                            uVar25 = (ulong)uVar17;
                            if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_00210374;
                          }
                          uVar17 = uVar17 - 1;
                          uVar25 = (ulong)uVar17;
                          if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_00210374;
                        }
                        uVar17 = uVar17 - 1;
                        uVar25 = (ulong)uVar17;
                        if ((&DAT_00494192)[(long)(int)uVar17 * 3] == '\t') goto LAB_00210374;
                      }
                      uVar25 = (ulong)(uVar17 - 1);
                      if ((&DAT_00494192)[(long)(int)(uVar17 - 1) * 3] == '\t') goto LAB_00210374;
                    }
                    goto LAB_0021028c;
                  }
                }
LAB_00210374:
                uVar35 = (ushort)uVar25;
              }
LAB_00210378:
              (&DAT_0057de64)[lVar39 * 0xc] = uVar35;
              uVar43 = 0x9b;
              lVar48 = 0x9b;
              uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
              goto LAB_00209818;
            }
            if (uVar35 == 0x8a0) goto LAB_0020a008;
            if (uVar35 == 0x926) {
              uVar43 = 0x7c5;
              lVar48 = 0x7c5;
              uVar25 = 0x926;
              goto LAB_00208ff8;
            }
LAB_00210128:
            if ((&DAT_00494190)[(ulong)uVar35 * 3] == '\n') {
              uVar14 = 9;
LAB_00210144:
              FUN_00207588(&DAT_0057de64 + lVar39 * 0xc,uVar14);
              uVar25 = (ulong)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
              uVar22 = (uint)(ushort)(&DAT_0057de64)[lVar39 * 0xc];
LAB_00210158:
              lVar48 = 0x92e;
              if (uVar12 == uVar22) goto LAB_00209090;
              goto LAB_00209820;
            }
          }
LAB_002088ac:
          uVar36 = uVar36 + 1;
        } while ((int)uVar36 < (int)(uVar22 - 1));
      }
LAB_00208a10:
      if (uVar22 != 0) goto LAB_002085c0;
    }
    uVar36 = (uint)DAT_0057e7cc;
LAB_00208a1c:
    DAT_0057e7cc = (char)uVar36 + 1;
    if (DAT_0057e7e0 == 0) {
      DAT_0057e7e0 = 1;
    }
    DAT_0057e7e8 = DAT_0057de38;
    if (param_2 < 5) {
LAB_0020f800:
      uVar11 = 0xfffffffd;
      DAT_0057e7e0 = 0;
      DAT_0057e7e8 = DAT_0057de38;
      goto LAB_002086d0;
    }
    if (DAT_0057de24 == 0x14) {
      uVar25 = (ulong)(DAT_0057e7e0 * 0x666 >> 0xf);
LAB_00208a78:
      uVar22 = (int)uVar25 * DAT_0057de24;
      if (uVar22 < DAT_0057e7e0) goto LAB_00208a84;
LAB_00209f30:
      if ((uint)uVar25 < 0x4000) {
        if ((uint)uVar25 < 0x80) goto LAB_00209f44;
        bVar29 = (byte)uVar25 & 0x7f;
        lVar48 = 2;
        lVar39 = 1;
        uVar11 = 4;
        lVar41 = 3;
        DAT_0057de38 = DAT_0057e7e8;
        *param_1 = (byte)(uVar25 >> 7) & 0x7f | 0x80;
        goto LAB_00209f58;
      }
      bVar50 = (byte)(uVar25 >> 0xe) & 0x7f | 0x80;
      bVar40 = (byte)(uVar25 >> 7) & 0x7f | 0x80;
      bVar29 = (byte)uVar25 & 0x7f;
    }
    else {
      if (DAT_0057e7e0 < 0x1ffff) {
        if (DAT_0057de24 == 0) goto LAB_0020eeac;
        uVar22 = DAT_0057e7e0 * DAT_0057de28 >> 0xf;
        uVar25 = (ulong)uVar22;
        if ((DAT_0057e7e0 * DAT_0057de28 >> 0xe & 1) != 0) {
          uVar25 = (ulong)(uVar22 + 1);
        }
        goto LAB_00208a78;
      }
      uVar22 = 0;
      if (DAT_0057de24 != 0) {
        uVar22 = DAT_0057e7e0 / DAT_0057de24;
      }
      uVar25 = (ulong)uVar22;
      uVar22 = DAT_0057de24 * uVar22;
      if (DAT_0057e7e0 <= uVar22) goto LAB_00208bcc;
LAB_00208a84:
      iVar9 = 0;
      do {
        iVar10 = (int)uVar25;
        uVar25 = (ulong)(iVar10 + 1);
        if (DAT_0057e7e0 <= uVar22 + iVar9 + DAT_0057de24) break;
        iVar9 = iVar9 + DAT_0057de24 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 2);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 3);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 4);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 5);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 6);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 7);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 8);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 9);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 10);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 0xb);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 0xc);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 0xd);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 0xe);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 0xf);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 0x10);
      } while (uVar22 + iVar9 < DAT_0057e7e0);
LAB_00208bcc:
      if ((uint)uVar25 < 0x200000) goto LAB_00209f30;
      bVar40 = 0xff;
      bVar29 = 0x7f;
      bVar50 = 0xff;
    }
    DAT_0057de38 = DAT_0057e7e8;
    *param_1 = bVar50;
    lVar48 = 3;
    lVar39 = 2;
    uVar11 = 5;
    lVar41 = 4;
    param_1[1] = bVar40;
  }
  else {
    if (DAT_0057de4d != DAT_0057e7cc) {
LAB_002085c0:
      uVar36 = (uint)DAT_0057e7cc;
      if (uVar36 < uVar22) {
        do {
          lVar48 = (long)(int)uVar36;
          lVar39 = (long)(int)uVar36;
          uVar17 = (&DAT_0057de58)[lVar48 * 6];
          if (uVar17 != 1) {
            if (uVar17 == 2) {
              if (DAT_0057e7e0 < 0x7fffffff - (&DAT_0057de60)[lVar48 * 6]) {
                DAT_0057e7e0 = (&DAT_0057de60)[lVar48 * 6] + DAT_0057e7e0;
              }
              goto LAB_00208680;
            }
            if (uVar17 == 0) {
              lVar41 = (long)(int)uVar36;
              DAT_005e0718 = 0;
              uVar37 = uVar36 + 1 & 0xff;
              lVar39 = lVar41 * 0x18;
              DAT_005e099d = 0;
              DAT_005e081c = 0;
              uVar35 = (&DAT_0057de64)[lVar41 * 0xc];
              DAT_005e0a9e = 0;
              DAT_005e0b21 = 0;
              DAT_0057e7cc = (byte)(uVar36 + 1);
              DAT_005e0710 = 0;
              DAT_0057e7dc = uVar17;
              DAT_005e0714 = uVar17;
              DAT_005e0719 = DAT_005e0718;
              DAT_005e071a = DAT_005e0718;
              DAT_005e071b = DAT_005e0718;
              bVar29 = DAT_005e0718;
              bVar50 = DAT_005e0718;
              bVar40 = DAT_005e0718;
              DAT_005e0b20 = DAT_005e0718;
              bVar7 = DAT_005e0718;
              DAT_005e1324 = DAT_005e0718;
              if (uVar35 < 0x92e) {
                DAT_005e0718 = (&DAT_0057de5d)[lVar39];
                lVar23 = (long)(int)(uint)uVar35 * 3;
                local_30 = (uint)DAT_005e0718;
                DAT_005e0719 = (&DAT_0057de5c)[lVar39];
                local_20 = (uint)DAT_005e0719;
                uVar17 = (&DAT_0057de60)[lVar41 * 6];
                DAT_005e071b = (&DAT_00495d2f)[(ulong)(byte)(&DAT_00494191)[lVar23] * 0x15] +
                               (&DAT_00495d28)[(ulong)(byte)(&DAT_00494190)[lVar23] * 0x15] +
                               (&DAT_00495d36)[(ulong)(byte)(&DAT_00494192)[lVar23] * 0x15];
                DAT_005e071a = 1;
                DAT_005e0b20 = 1;
                bVar29 = 1;
                local_34 = (uint)DAT_005e071b;
                uVar12 = (uint)DAT_0057de48;
                iVar9 = 0;
                if ((&DAT_0057de6a)[lVar39] == '\0') {
                  if (uVar12 == 5) {
                    bVar29 = 1;
                    iVar9 = 0;
                  }
                  else {
                    DAT_005e0b28 = 0;
                    bVar29 = 2;
                    iVar9 = 1;
                    DAT_005e0b21 = 1;
                    DAT_005e0b24 = 0;
                    DAT_005e0b30 = 0;
                  }
                }
                bVar8 = (&DAT_0057de6b)[lVar41 * 0x18] != '\0';
                if (bVar8) {
                  bVar50 = 1;
                }
                else {
                  bVar50 = 2;
                  DAT_005e132c = 0;
                  DAT_005e1328 = 0;
                  DAT_005e1334 = 0;
                }
                DAT_005e1324 = !bVar8;
                DAT_005e071c = uVar35;
                DAT_005e0710 = uVar17;
                if ((byte)(&DAT_0057de66)[lVar41 * 0x18] < 7) {
                  lVar39 = (long)iVar9;
                  uVar42 = (&DAT_0057de67)[lVar41 * 0x18];
                  DAT_005e0b21 = bVar29;
                  (&DAT_005e0b24)[lVar39 * 0x10] = (&DAT_0057de66)[lVar41 * 0x18];
                  (&DAT_005e0b30)[lVar39 * 0x10] = uVar42;
                  (&DAT_005e0b28)[lVar39 * 4] = 0;
                  (&DAT_005e0b2c)[lVar39 * 4] = uVar17;
                }
                uVar13 = uVar12;
                if (uVar12 == 5) {
                  lVar23 = (long)iVar9;
                  lVar39 = (ulong)(uVar22 + uVar37 & 0x1f) * 2;
                  DAT_005e0b21 = bVar29;
                  (&DAT_005e0b28)[lVar23 * 4] = 0;
                  (&DAT_005e0b2c)[lVar23 * 4] = uVar17;
                  uVar42 = (&DAT_00495fd1)[lVar39];
                  (&DAT_005e0b24)[lVar23 * 0x10] = (&DAT_00495fd0)[lVar39];
                  (&DAT_005e0b30)[lVar23 * 0x10] = uVar42;
                  uVar13 = 5;
                }
                if ((byte)(&DAT_0057de68)[lVar41 * 0x18] < 7) {
                  lVar39 = (ulong)!bVar8 + 0x80;
                  uVar42 = (&DAT_0057de69)[lVar41 * 0x18];
                  DAT_005e1324 = bVar50;
                  *(undefined1 *)(&DAT_005e0b28 + lVar39 * 4) = (&DAT_0057de68)[lVar41 * 0x18];
                  (&DAT_005e0b34)[lVar39 * 0x10] = uVar42;
                  *(uint *)(&DAT_005e0b30 + lVar39 * 0x10) = uVar17;
                  (&DAT_005e0b2c)[lVar39 * 4] = 0;
                }
                cVar3 = DAT_0057e7da + '\x01';
                DAT_0057e7da = cVar3;
                if (uVar37 < uVar22) {
                  if ((&DAT_0057de58)[(ulong)uVar37 * 6] == 0) {
                    bVar29 = 1;
                  }
                  else {
                    bVar29 = 1;
                    bVar8 = true;
                    uVar31 = (uint)DAT_005e0b21;
                    uVar33 = (uint)DAT_005e0a9e;
                    uVar24 = (uint)DAT_005e1324;
                    iVar9 = (&DAT_0057de58)[(ulong)uVar37 * 6];
                    uVar30 = uVar37;
LAB_0020d6a0:
                    do {
                      uVar6 = uVar30;
                      iVar10 = iVar9;
                      uVar30 = uVar6 + 1;
                      if (iVar10 == 1) {
                        uVar11 = (ulong)uVar6;
                        DAT_005e0b20 = bVar29 + 1;
                        iVar9 = (&DAT_0057de60)[uVar11 * 6];
                        if (((uVar13 != 5) && ((&DAT_0057de6a)[uVar11 * 0x18] == '\0')) &&
                           (uVar31 >> 7 == 0)) {
                          lVar39 = (long)(int)uVar31;
                          lVar41 = lVar39 * 0x10;
                          uVar31 = uVar31 + 1 & 0xff;
                          (&DAT_005e0b24)[lVar41] = 0;
                          (&DAT_005e0b30)[lVar41] = 0;
                          (&DAT_005e0b28)[lVar39 * 4] = uVar17;
                        }
                        if (((&DAT_0057de6b)[uVar11 * 0x18] == '\0') && (uVar24 >> 7 == 0)) {
                          lVar39 = (long)(int)uVar24;
                          lVar41 = lVar39 * 0x10;
                          (&DAT_005e1328)[lVar41] = 0;
                          (&DAT_005e1334)[lVar41] = 0;
                          uVar24 = uVar24 + 1 & 0xff;
                          (&DAT_005e132c)[lVar39 * 4] = uVar17;
                        }
                        if (((byte)(&DAT_0057de66)[uVar11 * 0x18] < 7) && (uVar31 >> 7 == 0)) {
                          uVar42 = (&DAT_0057de67)[uVar11 * 0x18];
                          lVar39 = (long)(int)uVar31;
                          (&DAT_005e0b24)[lVar39 * 0x10] = (&DAT_0057de66)[uVar11 * 0x18];
                          (&DAT_005e0b30)[lVar39 * 0x10] = uVar42;
                          (&DAT_005e0b28)[lVar39 * 4] = uVar17;
                          (&DAT_005e0b2c)[lVar39 * 4] = iVar9;
                          if (uVar13 == 5) {
LAB_0020ee40:
                            lVar41 = (long)(int)uVar31;
                            lVar39 = (ulong)(uVar30 + uVar22 & 0x1f) * 2;
                            uVar31 = uVar31 + 1 & 0xff;
                            (&DAT_005e0b28)[lVar41 * 4] = uVar17;
                            (&DAT_005e0b2c)[lVar41 * 4] = iVar9;
                            (&DAT_005e0b24)[lVar41 * 0x10] = (&DAT_00495fd0)[lVar39];
                            (&DAT_005e0b30)[lVar41 * 0x10] = (&DAT_00495fd1)[lVar39];
                          }
                          else {
                            uVar31 = uVar31 + 1 & 0xff;
                          }
                        }
                        else if ((uVar13 == 5) && (uVar31 >> 7 == 0)) goto LAB_0020ee40;
                        if (((byte)(&DAT_0057de68)[uVar11 * 0x18] < 7) && (uVar24 >> 7 == 0)) {
                          uVar42 = (&DAT_0057de69)[uVar11 * 0x18];
                          lVar39 = (long)(int)uVar24;
                          (&DAT_005e1328)[lVar39 * 0x10] = (&DAT_0057de68)[uVar11 * 0x18];
                          (&DAT_005e1334)[lVar39 * 0x10] = uVar42;
                          uVar24 = uVar24 + 1 & 0xff;
                          (&DAT_005e132c)[lVar39 * 4] = uVar17;
                          (&DAT_005e1330)[lVar39 * 4] = iVar9;
                        }
                        bVar5 = bVar8;
                        if (uVar33 >> 7 == 0) {
                          if ((&DAT_0057de5d)[uVar11 * 0x18] == '\x01') {
                            bVar5 = false;
                            if (bVar8) {
                              bVar5 = false;
                              (&DAT_005e1b30)[(int)uVar33] = uVar17;
                              uVar33 = uVar33 + 1 & 0xff;
                            }
                          }
                          else if ((&DAT_0057de5d)[uVar11 * 0x18] == '\0') {
                            if (bVar8) {
                              bVar5 = true;
                            }
                            else {
                              bVar5 = true;
                              (&DAT_005e1b30)[(int)uVar33] = uVar17;
                              uVar33 = uVar33 + 1 & 0xff;
                            }
                          }
                        }
                        uVar17 = uVar17 + iVar9;
                        DAT_005e0710 = uVar17;
                        bVar8 = bVar5;
                        bVar29 = DAT_005e0b20;
                        if (uVar22 <= uVar30) goto LAB_002133b0;
                      }
                      else {
                        if (uVar22 <= uVar30) {
LAB_002133b0:
                          DAT_005e0a9e = (byte)uVar33;
                          DAT_005e0b21 = (byte)uVar31;
                          DAT_005e1324 = (byte)uVar24;
                          goto LAB_0020eb14;
                        }
                        iVar9 = (&DAT_0057de58)[(ulong)uVar30 * 6];
                        if (iVar9 != 0) {
                          if (iVar9 != 1) {
                            uVar2 = ~uVar30 + uVar22 & 3;
                            uVar45 = uVar30;
                            if (uVar2 == 0) goto LAB_0020d75c;
                            uVar45 = uVar6 + 2;
                            if ((uVar22 <= uVar45) || ((&DAT_0057de58)[(ulong)uVar45 * 6] == 0))
                            goto LAB_0020d6a0;
                            if ((&DAT_0057de58)[(ulong)uVar45 * 6] != 1) {
                              if (uVar2 == 1) goto LAB_0020d75c;
                              if (uVar2 != 2) {
                                uVar45 = uVar6 + 3;
                                if ((&DAT_0057de58)[(ulong)uVar45 * 6] == 0) goto LAB_0020d6a0;
                                if ((&DAT_0057de58)[(ulong)uVar45 * 6] == 1) goto LAB_0020ee08;
                              }
                              uVar11 = (ulong)(uVar45 + 1);
                              iVar15 = (&DAT_0057de58)[uVar11 * 6];
                              while (iVar15 != 0) {
                                uVar45 = (uint)uVar11;
                                if (iVar15 == 1) goto LAB_0020ee08;
LAB_0020d75c:
                                if ((uVar22 <= uVar45 + 1) ||
                                   ((&DAT_0057de58)[(ulong)(uVar45 + 1) * 6] == 0)) break;
                                if ((&DAT_0057de58)[(ulong)(uVar45 + 1) * 6] == 1)
                                goto LAB_0020ee08;
                                if ((&DAT_0057de58)[(ulong)(uVar45 + 2) * 6] == 0) break;
                                if ((&DAT_0057de58)[(ulong)(uVar45 + 2) * 6] == 1)
                                goto LAB_0020ee08;
                                if ((&DAT_0057de58)[(ulong)(uVar45 + 3) * 6] == 0) break;
                                if ((&DAT_0057de58)[(ulong)(uVar45 + 3) * 6] == 1)
                                goto LAB_0020ee08;
                                uVar11 = (ulong)(uVar45 + 4);
                                iVar15 = (&DAT_0057de58)[uVar11 * 6];
                              }
                              goto LAB_0020d6a0;
                            }
                          }
LAB_0020ee08:
                          uVar11 = (ulong)uVar6;
                          if (iVar10 == 2) {
                            DAT_005e0b20 = bVar29 + 1;
                            iVar9 = (&DAT_0057de60)[uVar11 * 6];
                            if (uVar24 >> 7 == 0) {
                              lVar39 = (long)(int)uVar24;
                              (&DAT_005e1328)[lVar39 * 0x10] = 4;
                              (&DAT_005e1334)[lVar39 * 0x10] = 1;
                              uVar24 = uVar24 + 1 & 0xff;
                              (&DAT_005e132c)[lVar39 * 4] = uVar17;
                              (&DAT_005e1330)[lVar39 * 4] = iVar9;
                            }
                            uVar17 = uVar17 + iVar9;
                            (&DAT_0057de60)[uVar11 * 6] = 0;
                            DAT_005e0710 = uVar17;
                            bVar29 = DAT_005e0b20;
                          }
                          else {
                            (&DAT_0057de60)[uVar11 * 6] = uVar17;
                          }
                        }
                      }
                      iVar9 = (&DAT_0057de58)[(ulong)uVar30 * 6];
                    } while ((&DAT_0057de58)[(ulong)uVar30 * 6] != 0);
                    DAT_005e0a9e = (byte)uVar33;
                    DAT_005e0b21 = (byte)uVar31;
                    DAT_005e1324 = (byte)uVar24;
                  }
LAB_0020eb14:
                  uVar11 = (ulong)uVar37;
                  iVar9 = (&DAT_0057de58)[(ulong)uVar37 * 6];
                  if (iVar9 == 0) {
LAB_00214e34:
                    if ((&DAT_00494190)[(ulong)(ushort)(&DAT_0057de64)[uVar11 * 0xc] * 3] == '\x15')
                    {
                      cVar4 = (&DAT_00495d30)
                              [(ulong)(byte)(&DAT_00494191)
                                            [(ulong)(ushort)(&DAT_0057de64)[uVar11 * 0xc] * 3] *
                               0x15];
                      if (*PTR_gabVoweltoSampaTblIdx_00567668 == cVar4) {
                        lVar39 = 0;
                      }
                      else if (PTR_gabVoweltoSampaTblIdx_00567668[4] == cVar4) {
                        lVar39 = 1;
                      }
                      else if (PTR_gabVoweltoSampaTblIdx_00567668[8] == cVar4) {
                        lVar39 = 2;
                      }
                      else if (PTR_gabVoweltoSampaTblIdx_00567668[0xc] == cVar4) {
                        lVar39 = 3;
                      }
                      else if (PTR_gabVoweltoSampaTblIdx_00567668[0x10] == cVar4) {
                        lVar39 = 4;
                      }
                      else if (PTR_gabVoweltoSampaTblIdx_00567668[0x14] == cVar4) {
                        lVar39 = 5;
                      }
                      else if (PTR_gabVoweltoSampaTblIdx_00567668[0x18] == cVar4) {
                        lVar39 = 6;
                      }
                      else {
                        if (PTR_gabVoweltoSampaTblIdx_00567668[0x1c] != cVar4) goto LAB_0020ebc4;
                        lVar39 = 7;
                      }
                      DAT_005e0b20 = bVar29 + 1;
                      uVar22 = local_34 + 1;
                      DAT_005e071a = 2;
                      DAT_005e071e = *(undefined2 *)
                                      (PTR_gabVoweltoSampaTblIdx_00567668 + lVar39 * 4 + 2);
                      local_34 = uVar22 & 0xff;
                      DAT_005e071b = (byte)uVar22;
                      bVar29 = DAT_005e0b20;
                    }
                  }
                  else if ((iVar9 != 5) && (iVar9 != 2)) {
                    if ((~uVar37 + uVar22 & 1) == 0) goto LAB_0020eb74;
                    uVar37 = uVar37 + 1;
                    uVar11 = (ulong)uVar37;
                    if (uVar37 < uVar22) {
                      iVar9 = (&DAT_0057de58)[(ulong)uVar37 * 6];
                      while (iVar9 != 0) {
                        uVar37 = (uint)uVar11;
                        if ((iVar9 == 5) || (iVar9 == 2)) goto LAB_0020ebc4;
LAB_0020eb74:
                        if (uVar22 <= uVar37 + 1) goto LAB_0020ebc4;
                        uVar11 = (ulong)(uVar37 + 1);
                        iVar9 = (&DAT_0057de58)[uVar11 * 6];
                        if (iVar9 == 0) break;
                        if ((iVar9 == 5) || (iVar9 == 2)) goto LAB_0020ebc4;
                        uVar11 = (ulong)(uVar37 + 2);
                        iVar9 = (&DAT_0057de58)[uVar11 * 6];
                      }
                      goto LAB_00214e34;
                    }
                  }
LAB_0020ebc4:
                  if (bVar29 != 0) goto LAB_0020ebc8;
                  uVar22 = 0;
                  bVar29 = 0;
                  uVar37 = 0;
                  bVar50 = 0;
                }
                else {
LAB_0020ebc8:
                  if (uVar13 < 6) {
                    lVar39 = (long)(int)uVar12;
                  }
                  else {
                    lVar39 = 4;
                    DAT_0057de48 = 4;
                  }
                  if (cVar3 == '\x01') {
                    iVar9 = (int)*(short *)(&UNK_00496010 + lVar39 * 6);
                  }
                  else if (DAT_0057e7b8 == cVar3) {
                    iVar9 = (int)*(short *)(&UNK_00496014 + lVar39 * 6);
                  }
                  else {
                    iVar9 = (int)*(short *)(&UNK_00496012 + lVar39 * 6);
                  }
                  iVar10 = iVar9 + DAT_0057e7d4;
                  if (iVar10 + 0x10eb4U < 0x21d69) {
                    uVar22 = iVar10 + 0x2000;
                    if (0x3fff < (int)uVar22) goto LAB_00213394;
                    if ((int)uVar22 < 0) {
                      uVar22 = 0;
                    }
                    DAT_005e081e = (byte)uVar22 & 0x7f;
                    DAT_005e081f = (byte)(uVar22 >> 7);
                  }
                  else if (iVar10 < -0x10eb4) {
                    DAT_005e081f = 0;
                    DAT_005e081e = 0;
                  }
                  else {
LAB_00213394:
                    DAT_005e081e = 0x7f;
                    DAT_005e081f = DAT_005e081e;
                  }
                  DAT_005e081d = 0;
                  uVar22 = (uint)DAT_005e0b21;
                  if (uVar22 == 0) {
                    uVar22 = 3;
                    uVar12 = 1;
LAB_00211b8c:
                    iVar9 = iVar9 + DAT_0057e7d4;
                    if (iVar9 + 0x10eb4U < 0x21d69) {
                      uVar37 = iVar9 + 0x2000;
                      if (0x3fff < (int)uVar37) goto LAB_002145d0;
                      if ((int)uVar37 < 0) {
                        uVar37 = 0;
                      }
                      bVar29 = (byte)uVar37 & 0x7f;
                      uVar42 = (undefined1)(uVar37 >> 7);
                    }
                    else if (iVar9 < -0x10eb4) {
                      uVar42 = 0;
                      bVar29 = 0;
                    }
                    else {
LAB_002145d0:
                      uVar42 = 0x7f;
                      bVar29 = 0x7f;
                    }
                    (&DAT_005e081d)[uVar22] = 0x7f;
                    uVar12 = uVar12 + 1;
                    (&DAT_005e081d)[uVar22 + 1] = bVar29;
                    (&DAT_005e081d)[uVar22 + 2] = uVar42;
                  }
                  else {
                    piVar27 = &DAT_005e0b28;
                    uVar12 = 1;
                    do {
                      bVar50 = *(byte *)(piVar27 + -1);
                      iVar10 = *piVar27;
                      iVar15 = piVar27[1];
                      bVar29 = *(byte *)(piVar27 + 2);
                      lVar39 = (ulong)bVar50 * 0x12;
                      if ((byte)(&DAT_00496038)[lVar39] != 0) {
                        lVar41 = (ulong)((byte)(&DAT_00496038)[lVar39] - 1) * 4;
                        psVar32 = (short *)(&DAT_0049603c + lVar39);
                        do {
                          uVar37 = 0;
                          if (uVar17 != 0) {
                            uVar37 = 0;
                            if (uVar17 != 0) {
                              uVar37 = (iVar10 * 0x7f + (uint)*(byte *)(psVar32 + -1) * iVar15) /
                                       uVar17;
                            }
                            if (0x7f < uVar37) {
                              uVar37 = 0x7f;
                            }
                          }
                          iVar16 = iVar9 + (int)*psVar32 * (uint)bVar29;
                          if ((iVar16 < -0x10eb4) || (0x10eb4 < iVar16)) {
                            if (0x10eb4 < iVar16) {
                              iVar16 = 0x10eb4;
                            }
                            if (iVar16 < -0x10eb4) {
                              iVar16 = -0x10eb4;
                            }
                          }
                          if (uVar12 < 0x80) {
                            iVar16 = iVar16 + DAT_0057e7d4;
                            if (iVar16 + 0x10eb4U < 0x21d69) {
                              uVar30 = iVar16 + 0x2000;
                              uVar13 = 0x3fff;
                              if (0x3fff < (int)uVar30) goto LAB_0020ece4;
                              if ((int)uVar30 < 0) {
                                uVar30 = 0;
                              }
                              uVar13 = uVar30;
                              if ((uint)(byte)(&DAT_005e081d)[uVar12 * 3 - 3] == (uVar37 & 0xff))
                              goto LAB_0020ede0;
                            }
                            else {
                              uVar13 = 0;
                              if (-0x10eb5 < iVar16) {
                                uVar13 = 0x3fff;
                              }
LAB_0020ece4:
                              if ((uint)(byte)(&DAT_005e081d)[uVar12 * 3 - 3] == (uVar37 & 0xff)) {
LAB_0020ede0:
                                if ((uint)(byte)(&DAT_005e081d)[uVar12 * 3 - 2] +
                                    (uint)(byte)(&DAT_005e081d)[uVar12 * 3 - 1] * 0x80 == uVar13)
                                goto LAB_0020ed2c;
                              }
                            }
                            uVar30 = uVar12 * 3;
                            (&DAT_005e081d)[uVar30] = (char)uVar37;
                            (&DAT_005e081d)[uVar30 + 1] = (byte)uVar13 & 0x7f;
                            uVar12 = uVar12 + 1;
                            (&DAT_005e081d)[uVar30 + 2] = (char)(uVar13 >> 7);
                          }
LAB_0020ed2c:
                          psVar32 = psVar32 + 2;
                          if (bVar50 == 0) {
                            DAT_0057e7d4 = 0;
                          }
                        } while (psVar32 != (short *)(&DAT_0049603a + lVar41 + 6 + lVar39));
                        iVar10 = (uint)bVar29 * (int)*(short *)(&DAT_0049603a + lVar41 + lVar39 + 2)
                        ;
                        if ((iVar10 < -0x10eb4) || (0x10eb4 < iVar10)) {
                          if (0x10eb4 < iVar10) {
                            iVar10 = 0x10eb4;
                          }
                          if (iVar10 < -0x10eb4) {
                            iVar10 = -0x10eb4;
                          }
                        }
                        DAT_0057e7d4 = DAT_0057e7d4 + iVar10;
                        if (0x21d68 < DAT_0057e7d4 + 0x10eb4U) {
                          if (0x10eb4 < DAT_0057e7d4) {
                            DAT_0057e7d4 = 0x10eb4;
                          }
                          if (DAT_0057e7d4 < -0x10eb4) {
                            DAT_0057e7d4 = -0x10eb4;
                          }
                        }
                      }
                      piVar27 = piVar27 + 4;
                    } while (piVar27 != &DAT_005e0b38 + (ulong)(uVar22 - 1) * 4);
                    if ((uVar12 < 0x7f) &&
                       (uVar22 = uVar12 * 3, (&DAT_005e081d)[uVar22 - 3] != '\x7f'))
                    goto LAB_00211b8c;
                  }
                  iVar10 = (int)DAT_0057e7d8;
                  iVar9 = iVar10 + 0x60;
                  uVar37 = uVar12 & 0xff;
                  bVar29 = (byte)uVar12;
                  if (iVar9 < 0) {
                    iVar9 = 0;
                  }
                  DAT_005e099e = 0;
                  if (0x7f < iVar9) {
                    iVar9 = 0x7f;
                  }
                  DAT_005e099f = (undefined1)iVar9;
                  uVar22 = (uint)DAT_005e1324;
                  DAT_005e081c = bVar29;
                  if (uVar22 == 0) {
                    uVar12 = 1;
LAB_00211dbc:
                    bVar7 = DAT_005e071b;
                    bVar40 = DAT_005e0719;
                    bVar50 = DAT_005e0718;
                    uVar22 = uVar12 * 2;
                    iVar9 = DAT_0057e7d8 + 0x60;
                    if (iVar9 < 0) {
                      iVar9 = 0;
                    }
                    if (0x7f < iVar9) {
                      iVar9 = 0x7f;
                    }
                    (&DAT_005e099e)[uVar22] = 0x7f;
                    uVar12 = uVar12 + 1;
                    local_34 = (uint)bVar7;
                    local_20 = (uint)bVar40;
                    local_30 = (uint)bVar50;
                    (&DAT_005e099e)[uVar22 + 1] = (char)iVar9;
                  }
                  else {
                    piVar27 = &DAT_005e132c;
                    uVar12 = 1;
                    do {
                      bVar40 = *(byte *)(piVar27 + -1);
                      iVar9 = *piVar27;
                      iVar15 = piVar27[1];
                      lVar39 = (ulong)bVar40 * 0x12;
                      bVar50 = (&DAT_004960b8)[lVar39];
                      if (bVar50 != 0) {
                        iVar16 = 99;
                        uVar13 = (uint)*(byte *)(piVar27 + 2);
                        if (uVar17 == 0) {
                          if (bVar40 == 0) {
                            uVar30 = bVar50 - 1;
                            iVar9 = (int)_DAT_004960bc * uVar13;
                            psVar32 = (short *)(&DAT_004960c0 + (ulong)uVar30 * 4);
                            if ((iVar9 < -99) || (99 < iVar9)) {
                              if (99 < iVar9) {
                                iVar9 = 99;
                              }
                              if (iVar9 < -99) {
                                iVar9 = -99;
                              }
                            }
                            if (uVar12 < 0x80) {
                              uVar24 = iVar9 + iVar10 + 0x60;
                              if ((int)uVar24 < 0) {
                                uVar24 = 0;
                              }
                              if (0x7f < (int)uVar24) {
                                uVar24 = 0x7f;
                              }
                              if (((&DAT_005e099e)[((ulong)(uVar12 - 1) & 0x7fffffff) * 2] != '\0')
                                 || ((byte)(&DAT_005e099e)[uVar12 * 2 - 1] != uVar24)) {
                                uVar31 = uVar12 * 2;
                                uVar12 = uVar12 + 1;
                                (&DAT_005e099e)[uVar31] = 0;
                                (&DAT_005e099e)[uVar31 + 1] = (char)uVar24;
                              }
                            }
                            iVar10 = 0;
                            psVar46 = (short *)&DAT_004960c0;
                            if (psVar32 != (short *)&DAT_004960c0) {
                              if ((uVar30 & 1) != 0) {
                                iVar9 = (int)_DAT_004960c0 * uVar13;
                                if ((iVar9 < -99) || (99 < iVar9)) {
                                  if (99 < iVar9) {
                                    iVar9 = 99;
                                  }
                                  if (iVar9 < -99) {
                                    iVar9 = -99;
                                  }
                                }
                                if (uVar12 < 0x80) {
                                  uVar24 = iVar9 + 0x60;
                                  if ((int)uVar24 < 0) {
                                    uVar24 = 0;
                                  }
                                  if (0x7f < (int)uVar24) {
                                    uVar24 = 0x7f;
                                  }
                                  if (((&DAT_005e099e)[((ulong)(uVar12 - 1) & 0x7fffffff) * 2] !=
                                       '\0') || ((byte)(&DAT_005e099e)[uVar12 * 2 - 1] != uVar24)) {
                                    uVar31 = uVar12 * 2;
                                    uVar12 = uVar12 + 1;
                                    (&DAT_005e099e)[uVar31] = 0;
                                    (&DAT_005e099e)[uVar31 + 1] = (char)uVar24;
                                  }
                                }
                                psVar46 = (short *)&DAT_004960c4;
                                iVar10 = 0;
                                if (psVar32 == (short *)&DAT_004960c4) goto LAB_00211d48;
                              }
                              do {
                                iVar9 = (int)*psVar46 * uVar13;
                                if ((iVar9 < -99) || (99 < iVar9)) {
                                  if (99 < iVar9) {
                                    iVar9 = iVar16;
                                  }
                                  if (iVar9 < -99) {
                                    iVar9 = -99;
                                  }
                                }
                                if (uVar12 < 0x80) {
                                  uVar24 = iVar9 + 0x60;
                                  if ((int)uVar24 < 0) {
                                    uVar24 = 0;
                                  }
                                  if (0x7f < (int)uVar24) {
                                    uVar24 = 0x7f;
                                  }
                                  if (((&DAT_005e099e)[((ulong)(uVar12 - 1) & 0x7fffffff) * 2] !=
                                       '\0') || ((byte)(&DAT_005e099e)[uVar12 * 2 - 1] != uVar24)) {
                                    uVar31 = uVar12 * 2;
                                    uVar12 = uVar12 + 1;
                                    (&DAT_005e099e)[uVar31] = 0;
                                    (&DAT_005e099e)[uVar31 + 1] = (char)uVar24;
                                  }
                                }
                                iVar9 = (int)psVar46[2] * uVar13;
                                if ((iVar9 < -99) || (99 < iVar9)) {
                                  if (99 < iVar9) {
                                    iVar9 = 99;
                                  }
                                  if (iVar9 < -99) {
                                    iVar9 = -99;
                                  }
                                }
                                if (uVar12 < 0x80) {
                                  uVar24 = iVar9 + 0x60;
                                  if ((int)uVar24 < 0) {
                                    uVar24 = 0;
                                  }
                                  if (0x7f < (int)uVar24) {
                                    uVar24 = 0x7f;
                                  }
                                  if (((&DAT_005e099e)[((ulong)(uVar12 - 1) & 0x7fffffff) * 2] !=
                                       '\0') || ((byte)(&DAT_005e099e)[uVar12 * 2 - 1] != uVar24)) {
                                    uVar31 = uVar12 * 2;
                                    uVar12 = uVar12 + 1;
                                    (&DAT_005e099e)[uVar31] = 0;
                                    (&DAT_005e099e)[uVar31 + 1] = (char)uVar24;
                                  }
                                }
                                psVar46 = psVar46 + 4;
                                iVar10 = 0;
                              } while (psVar46 != psVar32);
                            }
                          }
                          else {
                            uVar30 = bVar50 - 1;
                            iVar9 = (int)*(short *)(&DAT_004960bc + lVar39) * uVar13;
                            psVar32 = (short *)(&DAT_004960ba + (ulong)uVar30 * 4 + 6 + lVar39);
                            if ((iVar9 < -99) || (99 < iVar9)) {
                              if (99 < iVar9) {
                                iVar9 = 99;
                              }
                              if (iVar9 < -99) {
                                iVar9 = -99;
                              }
                            }
                            if (uVar12 < 0x80) {
                              uVar24 = iVar9 + iVar10 + 0x60;
                              if ((int)uVar24 < 0) {
                                uVar24 = 0;
                              }
                              if (0x7f < (int)uVar24) {
                                uVar24 = 0x7f;
                              }
                              if (((&DAT_005e099e)[((ulong)(uVar12 - 1) & 0x7fffffff) * 2] != '\0')
                                 || ((byte)(&DAT_005e099e)[uVar12 * 2 - 1] != uVar24)) {
                                uVar31 = uVar12 * 2;
                                uVar12 = uVar12 + 1;
                                (&DAT_005e099e)[uVar31] = 0;
                                (&DAT_005e099e)[uVar31 + 1] = (char)uVar24;
                              }
                            }
                            psVar46 = (short *)(&DAT_004960c0 + lVar39);
                            if (psVar46 != psVar32) {
                              if (((ulong)((long)psVar32 + (-4 - (long)(&DAT_004960bc + lVar39))) >>
                                   2 & 1) != 0) {
                                iVar9 = (int)*(short *)(&DAT_004960c0 + lVar39) * uVar13;
                                if ((iVar9 < -99) || (99 < iVar9)) {
                                  if (99 < iVar9) {
                                    iVar9 = 99;
                                  }
                                  if (iVar9 < -99) {
                                    iVar9 = -99;
                                  }
                                }
                                if (uVar12 < 0x80) {
                                  uVar24 = iVar9 + iVar10 + 0x60;
                                  if ((int)uVar24 < 0) {
                                    uVar24 = 0;
                                  }
                                  if (0x7f < (int)uVar24) {
                                    uVar24 = 0x7f;
                                  }
                                  if (((&DAT_005e099e)[((ulong)(uVar12 - 1) & 0x7fffffff) * 2] !=
                                       '\0') || ((byte)(&DAT_005e099e)[uVar12 * 2 - 1] != uVar24)) {
                                    uVar31 = uVar12 * 2;
                                    uVar12 = uVar12 + 1;
                                    (&DAT_005e099e)[uVar31] = 0;
                                    (&DAT_005e099e)[uVar31 + 1] = (char)uVar24;
                                  }
                                }
                                psVar46 = (short *)(&DAT_004960c4 + lVar39);
                                if (psVar46 == psVar32) goto LAB_00211d48;
                              }
                              do {
                                iVar9 = (int)*psVar46 * uVar13;
                                if ((iVar9 < -99) || (99 < iVar9)) {
                                  if (99 < iVar9) {
                                    iVar9 = iVar16;
                                  }
                                  if (iVar9 < -99) {
                                    iVar9 = -99;
                                  }
                                }
                                if (uVar12 < 0x80) {
                                  uVar24 = iVar9 + iVar10 + 0x60;
                                  if ((int)uVar24 < 0) {
                                    uVar24 = 0;
                                  }
                                  if (0x7f < (int)uVar24) {
                                    uVar24 = 0x7f;
                                  }
                                  if (((&DAT_005e099e)[((ulong)(uVar12 - 1) & 0x7fffffff) * 2] !=
                                       '\0') || ((byte)(&DAT_005e099e)[uVar12 * 2 - 1] != uVar24)) {
                                    uVar31 = uVar12 * 2;
                                    uVar12 = uVar12 + 1;
                                    (&DAT_005e099e)[uVar31] = 0;
                                    (&DAT_005e099e)[uVar31 + 1] = (char)uVar24;
                                  }
                                }
                                iVar9 = (int)psVar46[2] * uVar13;
                                if ((iVar9 < -99) || (99 < iVar9)) {
                                  if (99 < iVar9) {
                                    iVar9 = 99;
                                  }
                                  if (iVar9 < -99) {
                                    iVar9 = -99;
                                  }
                                }
                                if (uVar12 < 0x80) {
                                  uVar24 = iVar9 + iVar10 + 0x60;
                                  if ((int)uVar24 < 0) {
                                    uVar24 = 0;
                                  }
                                  if (0x7f < (int)uVar24) {
                                    uVar24 = 0x7f;
                                  }
                                  if (((&DAT_005e099e)[((ulong)(uVar12 - 1) & 0x7fffffff) * 2] !=
                                       '\0') || ((byte)(&DAT_005e099e)[uVar12 * 2 - 1] != uVar24)) {
                                    uVar31 = uVar12 * 2;
                                    uVar12 = uVar12 + 1;
                                    (&DAT_005e099e)[uVar31] = 0;
                                    (&DAT_005e099e)[uVar31 + 1] = (char)uVar24;
                                  }
                                }
                                psVar46 = psVar46 + 4;
                              } while (psVar46 != psVar32);
                            }
                          }
                        }
                        else {
                          uVar30 = bVar50 - 1;
                          psVar32 = (short *)(&DAT_004960bc + lVar39);
                          if (bVar40 == 0) {
                            psVar32 = (short *)&DAT_004960bc;
                            do {
                              iVar44 = (int)*psVar32 * uVar13;
                              uVar24 = 0;
                              if (uVar17 != 0) {
                                uVar24 = (iVar9 * 0x7f + (uint)*(byte *)(psVar32 + -1) * iVar15) /
                                         uVar17;
                              }
                              if (0x7f < uVar24) {
                                uVar24 = 0x7f;
                              }
                              if ((iVar44 < -99) || (99 < iVar44)) {
                                if (99 < iVar44) {
                                  iVar44 = iVar16;
                                }
                                if (iVar44 < -99) {
                                  iVar44 = -99;
                                }
                              }
                              if (uVar12 < 0x80) {
                                uVar31 = iVar44 + iVar10 + 0x60;
                                if ((int)uVar31 < 0) {
                                  uVar31 = 0;
                                }
                                if (0x7f < (int)uVar31) {
                                  uVar31 = 0x7f;
                                }
                                if (((byte)(&DAT_005e099e)[((ulong)(uVar12 - 1) & 0x7fffffff) * 2]
                                     != uVar24) || ((byte)(&DAT_005e099e)[uVar12 * 2 - 1] != uVar31)
                                   ) {
                                  uVar33 = uVar12 * 2;
                                  uVar12 = uVar12 + 1;
                                  (&DAT_005e099e)[uVar33] = (char)uVar24;
                                  (&DAT_005e099e)[uVar33 + 1] = (char)uVar31;
                                }
                              }
                              psVar32 = psVar32 + 2;
                              iVar10 = 0;
                            } while (psVar32 != (short *)(&DAT_004960c0 + (ulong)uVar30 * 4));
                          }
                          else {
                            do {
                              iVar44 = (int)*psVar32 * uVar13;
                              uVar24 = 0;
                              if (uVar17 != 0) {
                                uVar24 = (iVar9 * 0x7f + (uint)*(byte *)(psVar32 + -1) * iVar15) /
                                         uVar17;
                              }
                              if (0x7f < uVar24) {
                                uVar24 = 0x7f;
                              }
                              if ((iVar44 < -99) || (99 < iVar44)) {
                                if (99 < iVar44) {
                                  iVar44 = iVar16;
                                }
                                if (iVar44 < -99) {
                                  iVar44 = -99;
                                }
                              }
                              if (uVar12 < 0x80) {
                                uVar31 = iVar44 + iVar10 + 0x60;
                                if ((int)uVar31 < 0) {
                                  uVar31 = 0;
                                }
                                if (0x7f < (int)uVar31) {
                                  uVar31 = 0x7f;
                                }
                                if ((uVar24 != (byte)(&DAT_005e099e)
                                                     [((ulong)(uVar12 - 1) & 0x7fffffff) * 2]) ||
                                   ((byte)(&DAT_005e099e)[uVar12 * 2 - 1] != uVar31)) {
                                  uVar33 = uVar12 * 2;
                                  uVar12 = uVar12 + 1;
                                  (&DAT_005e099e)[uVar33] = (char)uVar24;
                                  (&DAT_005e099e)[uVar33 + 1] = (char)uVar31;
                                }
                              }
                              psVar32 = psVar32 + 2;
                            } while (psVar32 !=
                                     (short *)(&DAT_004960ba + (ulong)uVar30 * 4 + 6 + lVar39));
                          }
                        }
LAB_00211d48:
                        iVar9 = uVar13 * (int)*(short *)(&DAT_004960ba +
                                                        (ulong)uVar30 * 4 + lVar39 + 2);
                        if ((iVar9 < -99) || (99 < iVar9)) {
                          if (99 < iVar9) {
                            iVar9 = 99;
                          }
                          if (iVar9 < -99) {
                            iVar9 = -99;
                          }
                        }
                        iVar10 = iVar10 + iVar9;
                        if (0xc6 < iVar10 + 99U) {
                          if (99 < iVar10) {
                            iVar10 = 99;
                          }
                          if (iVar10 < -99) {
                            iVar10 = -99;
                          }
                        }
                        iVar10 = (int)(short)iVar10;
                      }
                      piVar27 = piVar27 + 4;
                    } while (piVar27 != &DAT_005e133c + (ulong)(uVar22 - 1) * 4);
                    DAT_0057e7d8 = (short)iVar10;
                    if ((uVar12 < 0x7f) &&
                       ((&DAT_005e099e)[((ulong)(uVar12 - 1) & 0x7fffffff) * 2] != '\x7f'))
                    goto LAB_00211dbc;
                  }
                  uVar22 = uVar12 & 0xff;
                  DAT_005e099d = (byte)uVar12;
                  bVar50 = DAT_005e099d;
                }
                if (uVar17 == 0) {
                  DAT_005e0a9e = 0;
                  uVar12 = 0;
                }
                else {
                  uVar12 = (uint)DAT_005e0a9e;
                  if (uVar12 != 0) {
                    uVar30 = uVar12 - 1;
                    puVar1 = &DAT_005e0aa0 + uVar30;
                    piVar27 = &DAT_005e1b34;
                    uVar11 = (ulong)uVar30 & 3;
                    uVar13 = 0;
                    if (uVar17 != 0) {
                      uVar13 = (uint)(DAT_005e1b30 * 0x7f) / uVar17;
                    }
                    uVar24 = uVar13;
                    if (0x7f < (int)uVar13) {
                      uVar24 = 0x7f;
                    }
                    if ((int)uVar24 < 0) {
                      uVar24 = 0;
                    }
                    if (0x7f < uVar13) {
                      uVar13 = uVar24;
                    }
                    puVar19 = &DAT_005e0aa0;
                    DAT_005e0a9f = (undefined1)uVar13;
                    if (puVar1 != &DAT_005e0aa0) {
                      puVar20 = puVar19;
                      if ((uVar30 & 3) != 0) {
                        if (uVar11 != 1) {
                          piVar26 = piVar27;
                          if (uVar11 != 2) {
                            piVar26 = &DAT_005e1b38;
                            puVar20 = &DAT_005e0aa1;
                            uVar13 = 0;
                            if (uVar17 != 0) {
                              uVar13 = (uint)(DAT_005e1b34 * 0x7f) / uVar17;
                            }
                            uVar30 = uVar13;
                            if (0x7f < (int)uVar13) {
                              uVar30 = 0x7f;
                            }
                            if ((int)uVar30 < 0) {
                              uVar30 = 0;
                            }
                            if (0x7f < uVar13) {
                              uVar13 = uVar30;
                            }
                            DAT_005e0aa0 = (undefined1)uVar13;
                          }
                          piVar27 = piVar26 + 1;
                          uVar13 = 0;
                          if (uVar17 != 0) {
                            uVar13 = (uint)(*piVar26 * 0x7f) / uVar17;
                          }
                          uVar30 = uVar13;
                          if (0x7f < (int)uVar13) {
                            uVar30 = 0x7f;
                          }
                          if ((int)uVar30 < 0) {
                            uVar30 = 0;
                          }
                          if (0x7f < uVar13) {
                            uVar13 = uVar30;
                          }
                          puVar19 = puVar20 + 1;
                          *puVar20 = (char)uVar13;
                        }
                        uVar13 = 0;
                        if (uVar17 != 0) {
                          uVar13 = (uint)(*piVar27 * 0x7f) / uVar17;
                        }
                        uVar30 = uVar13;
                        if (0x7f < (int)uVar13) {
                          uVar30 = 0x7f;
                        }
                        if ((int)uVar30 < 0) {
                          uVar30 = 0;
                        }
                        if (0x7f < uVar13) {
                          uVar13 = uVar30;
                        }
                        *puVar19 = (char)uVar13;
                        puVar20 = puVar19 + 1;
                        piVar27 = piVar27 + 1;
                        if (puVar19 + 1 == puVar1) goto LAB_00210028;
                      }
                      do {
                        iVar9 = piVar27[3];
                        puVar19 = puVar20 + 4;
                        iVar10 = piVar27[2];
                        uVar13 = 0;
                        if (uVar17 != 0) {
                          uVar13 = (uint)(piVar27[1] * 0x7f) / uVar17;
                        }
                        uVar30 = 0;
                        if (uVar17 != 0) {
                          uVar30 = (uint)(*piVar27 * 0x7f) / uVar17;
                        }
                        uVar24 = uVar30;
                        if (0x7f < (int)uVar30) {
                          uVar24 = 0x7f;
                        }
                        if ((int)uVar24 < 0) {
                          uVar24 = 0;
                        }
                        if (0x7f < uVar30) {
                          uVar30 = uVar24;
                        }
                        uVar24 = uVar13;
                        if (0x7f < (int)uVar13) {
                          uVar24 = 0x7f;
                        }
                        *puVar20 = (char)uVar30;
                        uVar30 = 0;
                        if (uVar17 != 0) {
                          uVar30 = (uint)(iVar10 * 0x7f) / uVar17;
                        }
                        if ((int)uVar24 < 0) {
                          uVar24 = 0;
                        }
                        if (0x7f < uVar13) {
                          uVar13 = uVar24;
                        }
                        uVar24 = uVar30;
                        if (0x7f < (int)uVar30) {
                          uVar24 = 0x7f;
                        }
                        puVar20[1] = (char)uVar13;
                        if ((int)uVar24 < 0) {
                          uVar24 = 0;
                        }
                        if (0x7f < uVar30) {
                          uVar30 = uVar24;
                        }
                        puVar20[2] = (char)uVar30;
                        uVar13 = 0;
                        if (uVar17 != 0) {
                          uVar13 = (uint)(iVar9 * 0x7f) / uVar17;
                        }
                        uVar30 = uVar13;
                        if (0x7f < (int)uVar13) {
                          uVar30 = 0x7f;
                        }
                        if ((int)uVar30 < 0) {
                          uVar30 = 0;
                        }
                        if (0x7f < uVar13) {
                          uVar13 = uVar30;
                        }
                        puVar20[3] = (char)uVar13;
                        puVar20 = puVar19;
                        piVar27 = piVar27 + 4;
                      } while (puVar19 != puVar1);
                    }
                  }
                }
LAB_00210028:
                if (local_34 >> 7 != 0) {
                  local_34 = 0x7f;
                  DAT_005e071b = 0x7f;
                }
                if ((char)bVar29 < '\0') {
                  iVar9 = 0x17d;
                  DAT_005e081c = 0x7f;
                }
                else {
                  iVar9 = uVar37 * 3;
                }
                if ((char)bVar50 < '\0') {
                  iVar10 = 0xfe;
                  DAT_005e099d = 0x7f;
                }
                else {
                  iVar10 = uVar22 << 1;
                }
                if (local_20 >> 7 != 0) {
                  DAT_005e0719 = 0x7f;
                }
                if (local_30 >> 7 != 0) {
                  DAT_005e0718 = 0x7f;
                }
                iVar9 = local_34 + iVar9 + iVar10 + uVar12;
                if (iVar9 + 0x13U < param_2) {
                  if (DAT_0057de24 == 0x14) {
                    uVar11 = (ulong)(DAT_0057e7e0 * 0x666 >> 0xf);
LAB_00214578:
                    uVar22 = (int)uVar11 * DAT_0057de24;
                    if (uVar22 < DAT_0057e7e0) {
LAB_00212750:
                      iVar10 = 0;
                      do {
                        iVar15 = (int)uVar11;
                        uVar11 = (ulong)(iVar15 + 1);
                        if (DAT_0057e7e0 <= iVar10 + DAT_0057de24 + uVar22) break;
                        iVar10 = iVar10 + DAT_0057de24 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 2);
                        if (DAT_0057e7e0 <= iVar10 + uVar22) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 3);
                        if (DAT_0057e7e0 <= iVar10 + uVar22) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 4);
                        if (DAT_0057e7e0 <= iVar10 + uVar22) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 5);
                        if (DAT_0057e7e0 <= iVar10 + uVar22) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 6);
                        if (DAT_0057e7e0 <= iVar10 + uVar22) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 7);
                        if (DAT_0057e7e0 <= iVar10 + uVar22) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 8);
                        if (DAT_0057e7e0 <= iVar10 + uVar22) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 9);
                        if (DAT_0057e7e0 <= iVar10 + uVar22) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 10);
                        if (DAT_0057e7e0 <= iVar10 + uVar22) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 0xb);
                        if (DAT_0057e7e0 <= iVar10 + uVar22) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 0xc);
                        if (DAT_0057e7e0 <= iVar10 + uVar22) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 0xd);
                        if (DAT_0057e7e0 <= iVar10 + uVar22) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 0xe);
                        if (DAT_0057e7e0 <= iVar10 + uVar22) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 0xf);
                        if (DAT_0057e7e0 <= iVar10 + uVar22) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 0x10);
                      } while (iVar10 + uVar22 < DAT_0057e7e0);
LAB_00212898:
                      if ((uint)uVar11 < 0x200000) goto LAB_002128a4;
                      bVar40 = 0xff;
                      bVar29 = 0x7f;
                      bVar50 = 0xff;
LAB_002128c0:
                      lVar49 = 6;
                      *param_1 = bVar50;
                      lVar41 = 3;
                      lVar23 = 2;
                      lVar39 = 5;
                      iVar10 = 6;
                      lVar51 = 4;
                      lVar28 = 1;
                    }
                    else {
LAB_002128a4:
                      uVar22 = (uint)uVar11;
                      if (0x3fff < uVar22) {
                        bVar50 = (byte)(uVar11 >> 0xe) & 0x7f | 0x80;
                        bVar40 = (byte)(uVar11 >> 7) & 0x7f | 0x80;
                        bVar29 = (byte)uVar11 & 0x7f;
                        goto LAB_002128c0;
                      }
                      if (uVar22 < 0x80) goto LAB_0021458c;
                      lVar49 = 5;
                      bVar40 = (byte)(uVar11 >> 7) & 0x7f | 0x80;
                      bVar29 = (byte)uVar11 & 0x7f;
                      lVar41 = 2;
                      lVar23 = 1;
                      lVar39 = 4;
                      iVar10 = 5;
                      lVar51 = 3;
                      lVar28 = 0;
                    }
                    param_1[lVar28] = bVar40;
                  }
                  else {
                    if (0x1fffe < DAT_0057e7e0) {
                      uVar22 = 0;
                      if (DAT_0057de24 != 0) {
                        uVar22 = DAT_0057e7e0 / DAT_0057de24;
                      }
                      uVar11 = (ulong)uVar22;
                      uVar22 = DAT_0057de24 * uVar22;
                      if (uVar22 < DAT_0057e7e0) goto LAB_00212750;
                      goto LAB_00212898;
                    }
                    if (DAT_0057de24 != 0) {
                      uVar22 = DAT_0057e7e0 * DAT_0057de28 >> 0xf;
                      uVar11 = (ulong)uVar22;
                      if ((DAT_0057e7e0 * DAT_0057de28 >> 0xe & 1) != 0) {
                        uVar11 = (ulong)(uVar22 + 1);
                      }
                      goto LAB_00214578;
                    }
                    uVar22 = 0;
LAB_0021458c:
                    lVar49 = 4;
                    bVar29 = (byte)uVar22;
                    lVar41 = 1;
                    lVar23 = 0;
                    lVar39 = 3;
                    iVar10 = 4;
                    lVar51 = 2;
                  }
                  param_1[lVar23] = bVar29;
                  param_1[lVar41] = 0x90;
                  param_1[lVar51] = DAT_005e0718 | 0x80;
                  param_1[lVar39] = DAT_005e0719;
                  if (DAT_0057de24 == 0x14) {
                    uVar11 = (ulong)(DAT_005e0710 * 0x666 >> 0xf);
LAB_0021549c:
                    uVar22 = (int)uVar11 * DAT_0057de24;
                    if (uVar22 < DAT_005e0710) {
LAB_00212930:
                      iVar15 = 0;
                      do {
                        iVar16 = (int)uVar11;
                        uVar11 = (ulong)(iVar16 + 1);
                        if (DAT_005e0710 <= uVar22 + iVar15 + DAT_0057de24) break;
                        iVar15 = iVar15 + DAT_0057de24 + DAT_0057de24;
                        uVar11 = (ulong)(iVar16 + 2);
                        if (DAT_005e0710 <= uVar22 + iVar15) break;
                        iVar15 = iVar15 + DAT_0057de24;
                        uVar11 = (ulong)(iVar16 + 3);
                        if (DAT_005e0710 <= uVar22 + iVar15) break;
                        iVar15 = iVar15 + DAT_0057de24;
                        uVar11 = (ulong)(iVar16 + 4);
                        if (DAT_005e0710 <= uVar22 + iVar15) break;
                        iVar15 = iVar15 + DAT_0057de24;
                        uVar11 = (ulong)(iVar16 + 5);
                        if (DAT_005e0710 <= uVar22 + iVar15) break;
                        iVar15 = iVar15 + DAT_0057de24;
                        uVar11 = (ulong)(iVar16 + 6);
                        if (DAT_005e0710 <= uVar22 + iVar15) break;
                        iVar15 = iVar15 + DAT_0057de24;
                        uVar11 = (ulong)(iVar16 + 7);
                        if (DAT_005e0710 <= uVar22 + iVar15) break;
                        iVar15 = iVar15 + DAT_0057de24;
                        uVar11 = (ulong)(iVar16 + 8);
                        if (DAT_005e0710 <= uVar22 + iVar15) break;
                        iVar15 = iVar15 + DAT_0057de24;
                        uVar11 = (ulong)(iVar16 + 9);
                        if (DAT_005e0710 <= uVar22 + iVar15) break;
                        iVar15 = iVar15 + DAT_0057de24;
                        uVar11 = (ulong)(iVar16 + 10);
                        if (DAT_005e0710 <= uVar22 + iVar15) break;
                        iVar15 = iVar15 + DAT_0057de24;
                        uVar11 = (ulong)(iVar16 + 0xb);
                        if (DAT_005e0710 <= uVar22 + iVar15) break;
                        iVar15 = iVar15 + DAT_0057de24;
                        uVar11 = (ulong)(iVar16 + 0xc);
                        if (DAT_005e0710 <= uVar22 + iVar15) break;
                        iVar15 = iVar15 + DAT_0057de24;
                        uVar11 = (ulong)(iVar16 + 0xd);
                        if (DAT_005e0710 <= uVar22 + iVar15) break;
                        iVar15 = iVar15 + DAT_0057de24;
                        uVar11 = (ulong)(iVar16 + 0xe);
                        if (DAT_005e0710 <= uVar22 + iVar15) break;
                        iVar15 = iVar15 + DAT_0057de24;
                        uVar11 = (ulong)(iVar16 + 0xf);
                        if (DAT_005e0710 <= uVar22 + iVar15) break;
                        iVar15 = iVar15 + DAT_0057de24;
                        uVar11 = (ulong)(iVar16 + 0x10);
                      } while (uVar22 + iVar15 < DAT_005e0710);
LAB_00212a78:
                      if ((uint)uVar11 < 0x200000) goto LAB_00212a88;
                      bVar40 = 0xff;
                      bVar29 = 0x7f;
                      bVar50 = 0xff;
LAB_00212aa4:
                      lVar39 = 3;
                      param_1[lVar49] = bVar50;
                      lVar23 = 2;
                      iVar15 = 3;
                      lVar41 = 1;
                    }
                    else {
LAB_00212a88:
                      uVar22 = (uint)uVar11;
                      if (0x3fff < uVar22) {
                        bVar50 = (byte)(uVar11 >> 0xe) & 0x7f | 0x80;
                        bVar40 = (byte)(uVar11 >> 7) & 0x7f | 0x80;
                        bVar29 = (byte)uVar11 & 0x7f;
                        goto LAB_00212aa4;
                      }
                      if (uVar22 < 0x80) goto LAB_002154b8;
                      lVar39 = 2;
                      bVar40 = (byte)(uVar11 >> 7) & 0x7f | 0x80;
                      bVar29 = (byte)uVar11 & 0x7f;
                      lVar23 = 1;
                      iVar15 = 2;
                      lVar41 = 0;
                    }
                    param_1[lVar41 + lVar49] = bVar40;
                  }
                  else {
                    if (0x1fffe < DAT_005e0710) {
                      uVar22 = 0;
                      if (DAT_0057de24 != 0) {
                        uVar22 = DAT_005e0710 / DAT_0057de24;
                      }
                      uVar11 = (ulong)uVar22;
                      uVar22 = DAT_0057de24 * uVar22;
                      if (uVar22 < DAT_005e0710) goto LAB_00212930;
                      goto LAB_00212a78;
                    }
                    if (DAT_0057de24 != 0) {
                      uVar22 = DAT_005e0710 * DAT_0057de28 >> 0xf;
                      uVar11 = (ulong)uVar22;
                      if ((DAT_005e0710 * DAT_0057de28 >> 0xe & 1) != 0) {
                        uVar11 = (ulong)(uVar22 + 1);
                      }
                      goto LAB_0021549c;
                    }
                    uVar22 = 0;
LAB_002154b8:
                    lVar39 = 1;
                    bVar29 = (byte)uVar22;
                    lVar23 = 0;
                    iVar15 = 1;
                  }
                  param_1[lVar23 + lVar49] = bVar29;
                  uVar22 = iVar15 + iVar10;
                  param_1[lVar39 + lVar49] = '\0';
                  DAT_0057e7e4 = DAT_005e0710;
                  if (DAT_0057de24 == 0x14) {
                    uVar11 = (ulong)(DAT_005e0714 * 0x666 >> 0xf);
LAB_0021550c:
                    uVar17 = (int)uVar11 * DAT_0057de24;
                    if (uVar17 < DAT_005e0714) {
LAB_00212afc:
                      iVar10 = 0;
                      do {
                        iVar15 = (int)uVar11;
                        uVar11 = (ulong)(iVar15 + 1);
                        if (DAT_005e0714 <= uVar17 + iVar10 + DAT_0057de24) break;
                        iVar10 = iVar10 + DAT_0057de24 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 2);
                        if (DAT_005e0714 <= uVar17 + iVar10) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 3);
                        if (DAT_005e0714 <= uVar17 + iVar10) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 4);
                        if (DAT_005e0714 <= uVar17 + iVar10) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 5);
                        if (DAT_005e0714 <= uVar17 + iVar10) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 6);
                        if (DAT_005e0714 <= uVar17 + iVar10) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 7);
                        if (DAT_005e0714 <= uVar17 + iVar10) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 8);
                        if (DAT_005e0714 <= uVar17 + iVar10) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 9);
                        if (DAT_005e0714 <= uVar17 + iVar10) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 10);
                        if (DAT_005e0714 <= uVar17 + iVar10) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 0xb);
                        if (DAT_005e0714 <= uVar17 + iVar10) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 0xc);
                        if (DAT_005e0714 <= uVar17 + iVar10) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 0xd);
                        if (DAT_005e0714 <= uVar17 + iVar10) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 0xe);
                        if (DAT_005e0714 <= uVar17 + iVar10) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 0xf);
                        if (DAT_005e0714 <= uVar17 + iVar10) break;
                        iVar10 = iVar10 + DAT_0057de24;
                        uVar11 = (ulong)(iVar15 + 0x10);
                      } while (uVar17 + iVar10 < DAT_005e0714);
LAB_00212c44:
                      if ((uint)uVar11 < 0x200000) goto LAB_00212c50;
                      bVar50 = 0xff;
                      bVar29 = 0x7f;
                      local_10[0] = 0xff;
LAB_00212c6c:
                      lVar23 = 3;
                      lVar41 = 2;
                      iVar10 = 3;
                      lVar39 = 1;
                    }
                    else {
LAB_00212c50:
                      uVar17 = (uint)uVar11;
                      if (0x3fff < uVar17) {
                        local_10[0] = (byte)(uVar11 >> 0xe) & 0x7f | 0x80;
                        bVar50 = (byte)(uVar11 >> 7) & 0x7f | 0x80;
                        bVar29 = (byte)uVar11 & 0x7f;
                        goto LAB_00212c6c;
                      }
                      if (uVar17 < 0x80) goto LAB_00214f64;
                      lVar23 = 2;
                      bVar50 = (byte)(uVar11 >> 7) & 0x7f | 0x80;
                      bVar29 = (byte)uVar11 & 0x7f;
                      lVar41 = 1;
                      iVar10 = 2;
                      lVar39 = 0;
                    }
                    local_10[lVar39] = bVar50;
                  }
                  else {
                    if (0x1fffe < DAT_005e0714) {
                      uVar17 = 0;
                      if (DAT_0057de24 != 0) {
                        uVar17 = DAT_005e0714 / DAT_0057de24;
                      }
                      uVar11 = (ulong)uVar17;
                      uVar17 = DAT_0057de24 * uVar17;
                      if (uVar17 < DAT_005e0714) goto LAB_00212afc;
                      goto LAB_00212c44;
                    }
                    if (DAT_0057de24 != 0) {
                      uVar17 = DAT_005e0714 * DAT_0057de28 >> 0xf;
                      uVar11 = (ulong)uVar17;
                      if ((DAT_005e0714 * DAT_0057de28 >> 0xe & 1) != 0) {
                        uVar11 = (ulong)(uVar17 + 1);
                      }
                      goto LAB_0021550c;
                    }
                    uVar17 = 0;
LAB_00214f64:
                    lVar23 = 1;
                    bVar29 = (byte)uVar17;
                    lVar41 = 0;
                    iVar10 = 1;
                  }
                  local_10[lVar41] = bVar29;
                  uVar17 = iVar10 + iVar9 + 4;
                  local_10[lVar23] = 0;
                  if (uVar17 < 0x80) {
                    lVar39 = 1;
                    iVar9 = 1;
                    uVar37 = uVar17;
                  }
                  else {
                    lVar39 = 2;
                    iVar9 = 2;
                    param_1[uVar22] = (byte)(uVar17 >> 7) | 0x80;
                    uVar37 = uVar17 & 0x7f;
                  }
                  uVar12 = iVar9 + uVar22;
                  param_1[(ulong)(0x7f < uVar17) + (ulong)uVar22] = (uchar)uVar37;
                  param_1[lVar39 + (ulong)uVar22] = '\0';
                  uVar22 = uVar12 + 1;
                  param_1[uVar12] = local_10[0];
                  if (iVar10 != 1) {
                    uVar11 = (ulong)uVar22;
                    uVar22 = uVar12 + 2;
                    param_1[uVar11] = local_10[1];
                    if (iVar10 == 3) {
                      uVar11 = (ulong)uVar22;
                      uVar22 = uVar12 + 3;
                      param_1[uVar11] = local_e;
                    }
                  }
                  uVar17 = uVar22 + 1;
                  param_1[uVar22] = DAT_005e071b;
                  if (DAT_005e071a != 0) {
                    uVar37 = 0;
                    puVar34 = &DAT_005e071c;
                    uVar22 = 0;
                    do {
                      uVar11 = (ulong)*puVar34;
                      lVar39 = (ulong)(byte)(&DAT_00494190)[uVar11 * 3] * 0x15;
                      bVar29 = (&DAT_00495d28)[lVar39];
                      uVar12 = uVar17;
                      uVar13 = uVar37;
                      if (bVar29 == 0) {
LAB_00212e28:
                        bVar29 = (&DAT_00494191)[uVar11 * 3];
                        lVar39 = (ulong)bVar29 * 0x15;
                        bVar50 = (&DAT_00495d2f)[lVar39];
                        uVar30 = uVar13;
                        uVar24 = uVar12;
                        if (bVar50 == 0) goto LAB_00212f24;
                        uVar17 = uVar12;
                        uVar37 = uVar13;
                        if (uVar13 < DAT_005e071b) {
                          param_1[uVar12] = (&DAT_00495d30)[lVar39];
                          uVar24 = uVar12 + 1;
                          uVar30 = uVar13 + 1;
                          if (1 < bVar50) {
                            uVar17 = uVar24;
                            uVar37 = uVar30;
                            if (DAT_005e071b <= uVar30) goto LAB_00212f94;
                            param_1[uVar24] = (&DAT_00495d31)[lVar39];
                            uVar24 = uVar12 + 2;
                            uVar30 = uVar13 + 2;
                            if (bVar50 != 2) {
                              uVar17 = uVar24;
                              uVar37 = uVar30;
                              if (DAT_005e071b <= uVar30) goto LAB_00212f94;
                              param_1[uVar24] = (&DAT_00495d32)[lVar39];
                              uVar30 = uVar13 + 3;
                              uVar24 = uVar12 + 3;
                              if (bVar50 != 3) {
                                uVar17 = uVar24;
                                uVar37 = uVar30;
                                if (DAT_005e071b <= uVar30) goto LAB_00212f94;
                                param_1[uVar24] = (&DAT_00495d33)[lVar39];
                                uVar30 = uVar13 + 4;
                                uVar17 = uVar12 + 4;
                                uVar24 = uVar17;
                                if (bVar50 != 4) {
                                  uVar37 = uVar30;
                                  if (DAT_005e071b <= uVar30) goto LAB_00212f94;
                                  uVar24 = uVar12 + 5;
                                  uVar30 = uVar13 + 5;
                                  lVar39 = (ulong)bVar29 * 0x15;
                                  param_1[uVar17] = (&DAT_00495d34)[lVar39];
                                  if (bVar50 != 5) {
                                    uVar17 = uVar24;
                                    uVar37 = uVar30;
                                    if (DAT_005e071b <= uVar30) goto LAB_00212f94;
                                    param_1[uVar24] = (&DAT_00495d35)[lVar39];
                                    uVar30 = uVar13 + 6;
                                    uVar24 = uVar12 + 6;
                                  }
                                }
                              }
                            }
                          }
                          goto LAB_00212f24;
                        }
                      }
                      else {
                        uVar30 = uVar37;
                        uVar24 = uVar17;
                        if (uVar37 < DAT_005e071b) {
                          param_1[uVar17] = (&DAT_00495d29)[lVar39];
                          uVar13 = uVar37 + 1;
                          uVar12 = uVar17 + 1;
                          if (1 < bVar29) {
                            uVar30 = uVar13;
                            uVar24 = uVar12;
                            if (DAT_005e071b <= uVar13) goto LAB_00212f24;
                            param_1[uVar12] = (&DAT_00495d2a)[lVar39];
                            uVar12 = uVar17 + 2;
                            uVar13 = uVar37 + 2;
                            if (bVar29 != 2) {
                              uVar30 = uVar13;
                              uVar24 = uVar12;
                              if (DAT_005e071b <= uVar13) goto LAB_00212f24;
                              param_1[uVar12] = (&DAT_00495d2b)[lVar39];
                              uVar12 = uVar17 + 3;
                              uVar13 = uVar37 + 3;
                              if (bVar29 != 3) {
                                uVar30 = uVar13;
                                uVar24 = uVar12;
                                if (DAT_005e071b <= uVar13) goto LAB_00212f24;
                                param_1[uVar12] = (&DAT_00495d2c)[lVar39];
                                uVar12 = uVar17 + 4;
                                uVar13 = uVar37 + 4;
                                if (bVar29 != 4) {
                                  uVar30 = uVar13;
                                  uVar24 = uVar12;
                                  if (DAT_005e071b <= uVar13) goto LAB_00212f24;
                                  param_1[uVar12] = (&DAT_00495d2d)[lVar39];
                                  uVar12 = uVar17 + 5;
                                  uVar13 = uVar37 + 5;
                                  if (bVar29 != 5) {
                                    uVar30 = uVar13;
                                    uVar24 = uVar12;
                                    if (DAT_005e071b <= uVar13) goto LAB_00212f24;
                                    param_1[uVar12] = (&DAT_00495d2e)[lVar39];
                                    uVar12 = uVar17 + 6;
                                    uVar13 = uVar37 + 6;
                                  }
                                }
                              }
                            }
                          }
                          goto LAB_00212e28;
                        }
LAB_00212f24:
                        uVar17 = uVar24;
                        uVar37 = uVar30;
                        if (((byte)(&DAT_00495d36)[(ulong)(byte)(&DAT_00494192)[uVar11 * 3] * 0x15]
                             != 0) && (uVar30 < DAT_005e071b)) {
                          uVar12 = uVar24 + (byte)(&DAT_00495d36)
                                                  [(ulong)(byte)(&DAT_00494192)[uVar11 * 3] * 0x15];
                          puVar21 = &DAT_00495d37 + (ulong)(byte)(&DAT_00494192)[uVar11 * 3] * 0x15;
                          iVar9 = uVar30 - uVar24;
                          do {
                            uVar11 = (ulong)uVar24;
                            uVar24 = uVar24 + 1;
                            param_1[uVar11] = *puVar21;
                            uVar37 = iVar9 + uVar24;
                            uVar17 = uVar12;
                            if (uVar24 == uVar12) break;
                            puVar21 = puVar21 + 1;
                            uVar17 = uVar24;
                          } while (uVar37 < DAT_005e071b);
                        }
                      }
LAB_00212f94:
                      uVar22 = uVar22 + 1;
                      puVar34 = puVar34 + 1;
                    } while (uVar22 < DAT_005e071a);
                  }
                  uVar22 = uVar17 + 1;
                  param_1[uVar17] = DAT_005e081c;
                  if (DAT_005e081c != 0) {
                    uVar17 = 0;
                    puVar21 = &DAT_005e081d;
                    uVar37 = uVar22;
                    do {
                      param_1[uVar37] = *puVar21;
                      uVar22 = uVar37 + 3;
                      param_1[uVar37 + 1] = puVar21[1];
                      param_1[uVar37 + 2] = puVar21[2];
                      if ((uint)DAT_005e081c <= uVar17 + 1) break;
                      param_1[uVar22] = puVar21[3];
                      uVar22 = uVar37 + 6;
                      param_1[uVar37 + 4] = puVar21[4];
                      param_1[uVar37 + 5] = puVar21[5];
                      if ((uint)DAT_005e081c <= uVar17 + 2) break;
                      param_1[uVar22] = puVar21[6];
                      uVar22 = uVar37 + 9;
                      param_1[uVar37 + 7] = puVar21[7];
                      param_1[uVar37 + 8] = puVar21[8];
                      if ((uint)DAT_005e081c <= uVar17 + 3) break;
                      param_1[uVar22] = puVar21[9];
                      uVar22 = uVar37 + 0xc;
                      uVar17 = uVar17 + 4;
                      param_1[uVar37 + 10] = puVar21[10];
                      param_1[uVar37 + 0xb] = puVar21[0xb];
                      puVar21 = puVar21 + 0xc;
                      uVar37 = uVar22;
                    } while (uVar17 < DAT_005e081c);
                  }
                  uVar17 = uVar22 + 1;
                  param_1[uVar22] = DAT_005e099d;
                  if (DAT_005e099d != 0) {
                    uVar22 = 0;
                    uVar37 = uVar17;
                    do {
                      param_1[uVar37] = (&DAT_005e099e)[uVar22 * 2];
                      uVar17 = uVar37 + 2;
                      param_1[uVar37 + 1] = (&DAT_005e099e)[uVar22 * 2 + 1];
                      if ((uint)DAT_005e099d <= uVar22 + 1) break;
                      uVar12 = (uVar22 + 1) * 2;
                      param_1[uVar17] = (&DAT_005e099e)[uVar12];
                      uVar17 = uVar37 + 4;
                      param_1[uVar37 + 3] = (&DAT_005e099e)[uVar12 + 1];
                      if ((uint)DAT_005e099d <= uVar22 + 2) break;
                      uVar12 = (uVar22 + 2) * 2;
                      param_1[uVar17] = (&DAT_005e099e)[uVar12];
                      uVar17 = uVar37 + 6;
                      param_1[uVar37 + 5] = (&DAT_005e099e)[uVar12 + 1];
                      if ((uint)DAT_005e099d <= uVar22 + 3) break;
                      uVar12 = (uVar22 + 3) * 2;
                      uVar22 = uVar22 + 4;
                      param_1[uVar17] = (&DAT_005e099e)[uVar12];
                      uVar17 = uVar37 + 8;
                      param_1[uVar37 + 7] = (&DAT_005e099e)[uVar12 + 1];
                      uVar37 = uVar17;
                    } while (uVar22 < DAT_005e099d);
                  }
                  uVar11 = (ulong)(uVar17 + 1);
                  param_1[uVar17] = DAT_005e0a9e;
                  if (DAT_005e0a9e != 0) {
                    uVar22 = 0;
                    puVar21 = &DAT_005e0a9f;
                    do {
                      uVar47 = *puVar21;
                      if ((char)uVar47 < '\0') {
                        *puVar21 = '\x7f';
                        uVar47 = '\x7f';
                      }
                      param_1[uVar11] = uVar47;
                      uVar22 = uVar22 + 1;
                      uVar11 = (ulong)((int)uVar11 + 1);
                      puVar21 = puVar21 + 1;
                    } while (uVar22 < DAT_005e0a9e);
                  }
                  DAT_0057e7e0 = DAT_005e0710;
                  if (DAT_0057e7d0 < 0x7fffffff - DAT_005e0710) goto LAB_002126f0;
                }
                else {
                  DAT_0057e7e0 = uVar17;
                  if (0x7fffffff - uVar17 <= DAT_0057e7d0) {
                    uVar37 = (uint)DAT_0057e7cc;
                    DAT_005e071b = 0;
                    goto LAB_0021009c;
                  }
                  uVar11 = 0;
LAB_002126f0:
                  DAT_0057e7d0 = DAT_0057e7e0 + DAT_0057e7d0;
                }
                DAT_005e071b = 0;
                if ((int)uVar11 == 0) {
                  uVar37 = (uint)DAT_0057e7cc;
                  goto LAB_0021009c;
                }
                goto LAB_00212700;
              }
              goto LAB_0020868c;
            }
            if (uVar17 == 3) {
              uVar37 = uVar36 + 1 & 0xff;
              DAT_0057e7cc = (byte)(uVar36 + 1);
              if (5 < param_2) {
                uVar22 = (&DAT_0057de60)[lVar48 * 6];
                if (uVar22 == 0) {
                  DAT_0057e7e4 = 0;
                  uVar17 = DAT_0057e7e0;
                  DAT_0057e7e0 = 0;
                }
                else {
                  uVar17 = uVar22 - DAT_0057e7dc;
                  DAT_0057e7e0 = (DAT_0057e7dc + DAT_0057e7e0) - uVar22;
                  DAT_0057e7dc = uVar22;
                  if (uVar17 < DAT_0057e7e4) {
                    DAT_0057e7e4 = DAT_0057e7e4 - uVar17;
                  }
                  else {
                    DAT_0057e7e4 = 0;
                  }
                }
                if (DAT_0057de24 == 0x14) {
                  uVar11 = (ulong)(uVar17 * 0x666 >> 0xf);
LAB_0021520c:
                  uVar22 = (int)uVar11 * DAT_0057de24;
                  if (uVar22 < uVar17) {
LAB_00211888:
                    iVar9 = 0;
                    do {
                      iVar10 = (int)uVar11;
                      uVar11 = (ulong)(iVar10 + 1);
                      if (uVar17 <= iVar9 + DAT_0057de24 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 2);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 3);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 4);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 5);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 6);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 7);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 8);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 9);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 10);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 0xb);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 0xc);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 0xd);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 0xe);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 0xf);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 0x10);
                    } while (iVar9 + uVar22 < uVar17);
LAB_002119d0:
                    if ((uint)uVar11 < 0x200000) goto LAB_002119dc;
                    bVar40 = 0xff;
                    bVar29 = 0x7f;
                    bVar50 = 0xff;
LAB_002119f8:
                    *param_1 = bVar50;
                    lVar49 = 3;
                    lVar51 = 2;
                    uVar11 = 6;
                    lVar23 = 5;
                    lVar28 = 4;
                    lVar41 = 1;
                  }
                  else {
LAB_002119dc:
                    uVar22 = (uint)uVar11;
                    if (0x3fff < uVar22) {
                      bVar50 = (byte)(uVar11 >> 0xe) & 0x7f | 0x80;
                      bVar40 = (byte)(uVar11 >> 7) & 0x7f | 0x80;
                      bVar29 = (byte)uVar11 & 0x7f;
                      goto LAB_002119f8;
                    }
                    if (uVar22 < 0x80) goto LAB_002151d8;
                    bVar29 = (byte)uVar11 & 0x7f;
                    bVar40 = (byte)(uVar11 >> 7) & 0x7f | 0x80;
                    lVar49 = 2;
                    lVar51 = 1;
                    uVar11 = 5;
                    lVar23 = 4;
                    lVar28 = 3;
                    lVar41 = 0;
                  }
                  param_1[lVar41] = bVar40;
                }
                else {
                  if (0x1fffe < uVar17) {
                    uVar22 = 0;
                    if (DAT_0057de24 != 0) {
                      uVar22 = uVar17 / DAT_0057de24;
                    }
                    uVar11 = (ulong)uVar22;
                    uVar22 = DAT_0057de24 * uVar22;
                    if (uVar22 < uVar17) goto LAB_00211888;
                    goto LAB_002119d0;
                  }
                  if (DAT_0057de24 != 0) {
                    uVar22 = uVar17 * DAT_0057de28 >> 0xf;
                    uVar11 = (ulong)uVar22;
                    if ((uVar17 * DAT_0057de28 >> 0xe & 1) != 0) {
                      uVar11 = (ulong)(uVar22 + 1);
                    }
                    goto LAB_0021520c;
                  }
                  uVar22 = 0;
LAB_002151d8:
                  bVar29 = (byte)uVar22;
                  lVar49 = 1;
                  lVar51 = 0;
                  uVar11 = 4;
                  lVar23 = 3;
                  lVar28 = 2;
                }
                param_1[lVar51] = bVar29;
                param_1[lVar49] = 0xb0;
                param_1[lVar28] = '\x16';
                bVar29 = (&DAT_0057de5d)[lVar39 * 0x18];
                if (9 < bVar29) {
                  bVar29 = 9;
                  (&DAT_0057de5d)[lVar39 * 0x18] = 9;
                }
                param_1[lVar23] = bVar29;
                goto LAB_00212700;
              }
LAB_0021009c:
              uVar11 = 0xfffffffd;
              if (uVar37 == uVar36) goto LAB_0020869c;
LAB_002100ac:
              DAT_0057e7e8 = (&DAT_0057de6c)[lVar48 * 6];
            }
            else {
              if (uVar17 == 4) {
                uVar37 = uVar36 + 1 & 0xff;
                DAT_0057e7cc = (byte)(uVar36 + 1);
                if (param_2 < 6) goto LAB_0021009c;
                uVar22 = (&DAT_0057de60)[lVar48 * 6];
                if (uVar22 == 0) {
                  DAT_0057e7e4 = 0;
                  uVar17 = DAT_0057e7e0;
                  DAT_0057e7e0 = 0;
                }
                else {
                  uVar17 = uVar22 - DAT_0057e7dc;
                  DAT_0057e7e0 = (DAT_0057e7dc + DAT_0057e7e0) - uVar22;
                  DAT_0057e7dc = uVar22;
                  if (uVar17 < DAT_0057e7e4) {
                    DAT_0057e7e4 = DAT_0057e7e4 - uVar17;
                  }
                  else {
                    DAT_0057e7e4 = 0;
                  }
                }
                if (DAT_0057de24 == 0x14) {
                  uVar11 = (ulong)(uVar17 * 0x666 >> 0xf);
LAB_0021442c:
                  uVar22 = (int)uVar11 * DAT_0057de24;
                  if (uVar22 < uVar17) {
LAB_00211638:
                    iVar9 = 0;
                    do {
                      iVar10 = (int)uVar11;
                      uVar11 = (ulong)(iVar10 + 1);
                      if (uVar17 <= iVar9 + DAT_0057de24 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 2);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 3);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 4);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 5);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 6);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 7);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 8);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 9);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 10);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 0xb);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 0xc);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 0xd);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 0xe);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 0xf);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 0x10);
                    } while (iVar9 + uVar22 < uVar17);
LAB_00211780:
                    if ((uint)uVar11 < 0x200000) goto LAB_0021178c;
                    bVar40 = 0xff;
                    bVar29 = 0x7f;
                    bVar50 = 0xff;
LAB_002117a8:
                    *param_1 = bVar50;
                    lVar51 = 3;
                    lVar49 = 2;
                    uVar11 = 6;
                    lVar41 = 5;
                    lVar28 = 4;
                    lVar23 = 1;
                  }
                  else {
LAB_0021178c:
                    uVar22 = (uint)uVar11;
                    if (0x3fff < uVar22) {
                      bVar50 = (byte)(uVar11 >> 0xe) & 0x7f | 0x80;
                      bVar40 = (byte)(uVar11 >> 7) & 0x7f | 0x80;
                      bVar29 = (byte)uVar11 & 0x7f;
                      goto LAB_002117a8;
                    }
                    if (uVar22 < 0x80) goto LAB_00214440;
                    bVar29 = (byte)uVar11 & 0x7f;
                    bVar40 = (byte)(uVar11 >> 7) & 0x7f | 0x80;
                    lVar51 = 2;
                    lVar49 = 1;
                    uVar11 = 5;
                    lVar41 = 4;
                    lVar28 = 3;
                    lVar23 = 0;
                  }
                  param_1[lVar23] = bVar40;
                }
                else {
                  if (0x1fffe < uVar17) {
                    uVar22 = 0;
                    if (DAT_0057de24 != 0) {
                      uVar22 = uVar17 / DAT_0057de24;
                    }
                    uVar11 = (ulong)uVar22;
                    uVar22 = DAT_0057de24 * uVar22;
                    if (uVar22 < uVar17) goto LAB_00211638;
                    goto LAB_00211780;
                  }
                  if (DAT_0057de24 != 0) {
                    uVar22 = uVar17 * DAT_0057de28 >> 0xf;
                    uVar11 = (ulong)uVar22;
                    if ((uVar17 * DAT_0057de28 >> 0xe & 1) != 0) {
                      uVar11 = (ulong)(uVar22 + 1);
                    }
                    goto LAB_0021442c;
                  }
                  uVar22 = 0;
LAB_00214440:
                  bVar29 = (byte)uVar22;
                  lVar51 = 1;
                  lVar49 = 0;
                  uVar11 = 4;
                  lVar41 = 3;
                  lVar28 = 2;
                }
                param_1[lVar49] = bVar29;
                param_1[lVar51] = 0xb0;
                param_1[lVar28] = '\x14';
                bVar29 = (&DAT_0057de5d)[lVar39 * 0x18];
                uVar25 = (ulong)(byte)(bVar29 - 1);
                if ((4 < (byte)(bVar29 - 1)) && (uVar25 = (ulong)bVar29, bVar29 != 0)) {
                  if (5 < bVar29) {
                    bVar29 = 5;
                  }
                  uVar25 = (ulong)(byte)(bVar29 - 1);
                }
                param_1[lVar41] = (uchar)*(undefined2 *)(&DAT_00496140 + uVar25 * 2);
              }
              else {
                if (uVar17 != 5) goto LAB_00208680;
                uVar37 = uVar36 + 1 & 0xff;
                DAT_0057e7cc = (byte)(uVar36 + 1);
                if (param_2 < 5) goto LAB_0021009c;
                uVar22 = (&DAT_0057de60)[lVar48 * 6];
                if (uVar22 == 0) {
                  DAT_0057e7e4 = 0;
                  uVar17 = DAT_0057e7e0;
                  DAT_0057e7e0 = 0;
                }
                else {
                  uVar17 = uVar22 - DAT_0057e7dc;
                  DAT_0057e7e0 = (DAT_0057e7dc + DAT_0057e7e0) - uVar22;
                  DAT_0057e7dc = uVar22;
                  if (uVar17 < DAT_0057e7e4) {
                    DAT_0057e7e4 = DAT_0057e7e4 - uVar17;
                  }
                  else {
                    DAT_0057e7e4 = 0;
                  }
                }
                if (DAT_0057de24 == 0x14) {
                  uVar11 = (ulong)(uVar17 * 0x666 >> 0xf);
LAB_00214694:
                  uVar22 = (int)uVar11 * DAT_0057de24;
                  if (uVar22 < uVar17) {
LAB_0021140c:
                    iVar9 = 0;
                    do {
                      iVar10 = (int)uVar11;
                      uVar11 = (ulong)(iVar10 + 1);
                      if (uVar17 <= iVar9 + DAT_0057de24 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 2);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 3);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 4);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 5);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 6);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 7);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 8);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 9);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 10);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 0xb);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 0xc);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 0xd);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 0xe);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 0xf);
                      if (uVar17 <= iVar9 + uVar22) break;
                      iVar9 = iVar9 + DAT_0057de24;
                      uVar11 = (ulong)(iVar10 + 0x10);
                    } while (iVar9 + uVar22 < uVar17);
LAB_00211554:
                    if ((uint)uVar11 < 0x200000) goto LAB_00211560;
                    bVar40 = 0xff;
                    bVar29 = 0x7f;
                    bVar50 = 0xff;
LAB_0021157c:
                    *param_1 = bVar50;
                    lVar28 = 3;
                    lVar23 = 2;
                    uVar11 = 5;
                    lVar49 = 4;
                    lVar41 = 1;
                  }
                  else {
LAB_00211560:
                    uVar22 = (uint)uVar11;
                    if (0x3fff < uVar22) {
                      bVar50 = (byte)(uVar11 >> 0xe) & 0x7f | 0x80;
                      bVar40 = (byte)(uVar11 >> 7) & 0x7f | 0x80;
                      bVar29 = (byte)uVar11 & 0x7f;
                      goto LAB_0021157c;
                    }
                    if (uVar22 < 0x80) goto LAB_002146a8;
                    bVar29 = (byte)uVar11 & 0x7f;
                    bVar40 = (byte)(uVar11 >> 7) & 0x7f | 0x80;
                    lVar28 = 2;
                    lVar23 = 1;
                    uVar11 = 4;
                    lVar49 = 3;
                    lVar41 = 0;
                  }
                  param_1[lVar41] = bVar40;
                }
                else {
                  if (0x1fffe < uVar17) {
                    uVar22 = 0;
                    if (DAT_0057de24 != 0) {
                      uVar22 = uVar17 / DAT_0057de24;
                    }
                    uVar11 = (ulong)uVar22;
                    uVar22 = DAT_0057de24 * uVar22;
                    if (uVar22 < uVar17) goto LAB_0021140c;
                    goto LAB_00211554;
                  }
                  if (DAT_0057de24 != 0) {
                    uVar22 = uVar17 * DAT_0057de28 >> 0xf;
                    uVar11 = (ulong)uVar22;
                    if ((uVar17 * DAT_0057de28 >> 0xe & 1) != 0) {
                      uVar11 = (ulong)(uVar22 + 1);
                    }
                    goto LAB_00214694;
                  }
                  uVar22 = 0;
LAB_002146a8:
                  bVar29 = (byte)uVar22;
                  lVar28 = 1;
                  lVar23 = 0;
                  uVar11 = 3;
                  lVar49 = 2;
                }
                param_1[lVar23] = bVar29;
                param_1[lVar28] = 0xc0;
                bVar29 = (&DAT_0057de5d)[lVar39 * 0x18];
                if ((char)bVar29 < '\0') {
                  if ((byte)(bVar29 + 0x1c) < 0x1c) {
                    bVar29 = 0xe3;
                  }
                  param_1[lVar49] = bVar29;
                }
                else {
                  if (99 < bVar29) {
                    bVar29 = 99;
                  }
                  param_1[lVar49] = bVar29;
                }
              }
LAB_00212700:
              uVar37 = (uint)DAT_0057e7cc;
              if (uVar37 == uVar36) goto LAB_0020869c;
              DAT_0057e7e8 = (&DAT_0057de6c)[lVar48 * 6];
            }
            goto LAB_002086d0;
          }
LAB_00208680:
          uVar37 = uVar36 + 1 & 0xff;
          bVar29 = DAT_005e081c;
          bVar50 = DAT_005e099d;
          bVar40 = DAT_005e0a9e;
          bVar7 = DAT_005e0b21;
LAB_0020868c:
          DAT_005e0b21 = bVar7;
          DAT_005e0a9e = bVar40;
          DAT_005e099d = bVar50;
          DAT_005e081c = bVar29;
          bVar8 = uVar37 == uVar36;
          uVar36 = uVar37;
          if (bVar8) {
            uVar11 = 0;
LAB_0020869c:
            DAT_0057e7cc = (byte)(uVar37 + 1);
            if ((int)uVar11 != 0) goto LAB_002100ac;
            uVar22 = (uint)DAT_0057de4d;
            uVar36 = uVar37 + 1 & 0xff;
          }
        } while (uVar36 < uVar22);
      }
      goto LAB_00208a1c;
    }
    DAT_0057e7cc = DAT_0057de4d + 1;
    DAT_0057e7e8 = DAT_0057de38;
    if (DAT_0057e7e0 == 0) {
      DAT_0057e7e0 = 1;
    }
    if (param_2 < 5) goto LAB_0020f800;
    if (DAT_0057de24 == 0x14) {
      uVar25 = (ulong)(DAT_0057e7e0 * 0x666 >> 0xf);
LAB_00208cf0:
      uVar22 = (int)uVar25 * DAT_0057de24;
      if (DAT_0057e7e0 <= uVar22) goto LAB_00209f30;
LAB_00208cfc:
      iVar9 = 0;
      do {
        iVar10 = (int)uVar25;
        uVar25 = (ulong)(iVar10 + 1);
        if (DAT_0057e7e0 <= uVar22 + iVar9 + DAT_0057de24) break;
        iVar9 = iVar9 + DAT_0057de24 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 2);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 3);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 4);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 5);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 6);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 7);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 8);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 9);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 10);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 0xb);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 0xc);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 0xd);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 0xe);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 0xf);
        if (DAT_0057e7e0 <= uVar22 + iVar9) break;
        iVar9 = iVar9 + DAT_0057de24;
        uVar25 = (ulong)(iVar10 + 0x10);
      } while (uVar22 + iVar9 < DAT_0057e7e0);
      goto LAB_00208bcc;
    }
    if (0x1fffe < DAT_0057e7e0) {
      uVar22 = 0;
      if (DAT_0057de24 != 0) {
        uVar22 = DAT_0057e7e0 / DAT_0057de24;
      }
      uVar25 = (ulong)uVar22;
      uVar22 = DAT_0057de24 * uVar22;
      if (uVar22 < DAT_0057e7e0) goto LAB_00208cfc;
      goto LAB_00208bcc;
    }
    if (DAT_0057de24 != 0) {
      uVar22 = DAT_0057e7e0 * DAT_0057de28 >> 0xf;
      uVar25 = (ulong)uVar22;
      if ((DAT_0057e7e0 * DAT_0057de28 >> 0xe & 1) != 0) {
        uVar25 = (ulong)(uVar22 + 1);
      }
      goto LAB_00208cf0;
    }
LAB_0020eeac:
    uVar25 = (ulong)DAT_0057de24;
    DAT_0057e7e8 = DAT_0057de38;
LAB_00209f44:
    bVar29 = (byte)uVar25;
    lVar48 = 1;
    lVar39 = 0;
    uVar11 = 3;
    lVar41 = 2;
    DAT_0057de38 = DAT_0057e7e8;
  }
LAB_00209f58:
  param_1[lVar39] = bVar29;
  param_1[lVar48] = 0xff;
  param_1[lVar41] = '\0';
  DAT_0057e7e0 = 0;
  DAT_0057e7e4 = 0;
LAB_002086d0:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar11);
}

