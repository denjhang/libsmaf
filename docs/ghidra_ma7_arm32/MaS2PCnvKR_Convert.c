/* MaS2PCnvKR_Convert @ 000cc780 41778B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* YAMAHA::MaS2PCnvKR_Convert(unsigned char*, unsigned int, void*) */

int YAMAHA::MaS2PCnvKR_Convert(uchar *param_1,uint param_2,void *param_3)

{
  ushort *puVar1;
  undefined1 uVar2;
  ushort uVar3;
  undefined2 uVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  undefined1 uVar8;
  ushort uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  byte bVar17;
  ushort *puVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  char *pcVar30;
  char cVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  undefined1 *puVar37;
  byte *pbVar38;
  int iVar39;
  int iVar40;
  uint uVar41;
  byte *pbVar42;
  uchar *puVar43;
  int iVar44;
  undefined4 *puVar45;
  int iVar46;
  uint uVar47;
  int iVar48;
  uint uVar49;
  byte bVar50;
  uint uVar51;
  ushort *puVar52;
  uint uVar53;
  int *piVar54;
  int iVar55;
  uint uVar56;
  short sVar57;
  uint uVar58;
  byte *pbVar59;
  int iVar60;
  bool bVar61;
  uint local_9c;
  ushort *local_98;
  uint local_90;
  uint local_84;
  int local_74;
  uint local_70;
  uint local_48;
  byte local_30 [12];
  
  iVar44 = DAT_000cd510;
  iVar15 = DAT_000cd4e4;
  if (*(int *)(DAT_000cd4d4 + 0xcc78c) != 1) {
    return -1;
  }
  if (param_2 == 0 || param_1 == (uchar *)0x0) {
    return -2;
  }
  if (*(int *)(DAT_000cd4d4 + 0xcc798) == 0) {
    return 0;
  }
  uVar49 = (uint)*(byte *)(DAT_000cd4d4 + 0xcc7b1);
  if (uVar49 == 0) {
LAB_000cc95a:
    uVar33 = *(uint *)(DAT_000cd4e4 + 0xcc976);
    uVar56 = *(uint *)(DAT_000cd4e4 + 0xcc972);
    if (uVar33 <= uVar56) {
      return 0;
    }
    uVar2 = *(undefined1 *)(DAT_000cd4e4 + 0xcc98e);
    *(undefined1 *)(DAT_000cd4e4 + 0xcc997) = *(undefined1 *)(DAT_000cd4e4 + 0xcc983);
    *(undefined4 *)(iVar15 + 0xcc98a) = 0;
    *(undefined1 *)(iVar15 + 0xcc996) = uVar2;
    *(undefined1 *)(iVar15 + 0xcc987) = 0;
    *(undefined1 *)(iVar15 + 0xcc986) = 0;
    *(undefined1 *)(iVar15 + 0xcd2f2) = 0;
    *(undefined4 *)(iVar15 + 0xcd2f6) = 0;
    *(undefined1 *)(iVar15 + 0xcd2ff) = 0;
    *(undefined1 *)(iVar15 + 0xcd301) = 0;
    *(undefined1 *)(iVar15 + 0xcd302) = 0;
    *(undefined4 *)(iVar15 + 0xcd306) = 0;
    *(undefined4 *)(iVar15 + 0xcd30a) = 0;
    *(undefined2 *)(iVar15 + 0xcd30e) = 0;
    *(undefined1 *)(iVar15 + 0xcd310) = 0;
    *(undefined4 *)(iVar15 + 0xcd312) = 0;
    *(undefined4 *)(iVar15 + 0xcd31a) = 0;
    *(undefined4 *)(iVar15 + 0xcc99a) = 0;
    *(undefined4 *)(iVar15 + 0xcc992) = 0;
    *(undefined1 *)(iVar15 + 0xcc9a1) = 0;
    *(undefined1 *)(iVar15 + 0xcc9a3) = 0;
    *(undefined1 *)(iVar15 + 0xcc982) = 4;
    *(undefined1 *)(iVar15 + 0xcd2f4) = 1;
    *(undefined1 *)(iVar15 + 0xcd2f5) = 1;
    *(undefined1 *)(iVar15 + 0xcc9a4) = 1;
    *(undefined1 *)(iVar15 + 0xcc9a5) = 1;
    *(undefined1 *)(iVar15 + 0xcd2fe) = 7;
    *(undefined1 *)(iVar15 + 0xcd300) = 7;
    *(undefined1 *)(iVar15 + 0xcc9a0) = 7;
    *(undefined1 *)(iVar15 + 0xcc9a2) = 7;
    *(int *)(iVar15 + 0xcd2fa) = iVar15 + 0xcc992;
    *(undefined2 *)(iVar15 + 0xcc99e) = 0x92e;
    *(undefined4 *)(iVar15 + 0xcc9a6) = 0;
    if (*(char *)(iVar15 + 0xcc97e) == '\0') {
      FUN_000cbe64();
      uVar33 = *(uint *)(iVar15 + 0xcc976);
      uVar56 = *(uint *)(iVar15 + 0xcc972);
      uVar49 = (uint)*(byte *)(iVar15 + 0xcc987);
      uVar51 = uVar33 - uVar56;
      if ((0 < (int)uVar51) && (uVar49 < 100)) goto LAB_000cca3e;
LAB_000cce8e:
      iVar11 = DAT_000cd53c;
      iVar44 = DAT_000cd538;
      iVar15 = DAT_000cd534;
      if (1 < uVar49) {
        iVar26 = DAT_000cd524 + 0xcceb2;
        iVar16 = DAT_000cd528 + 0xcceb0;
        iVar19 = DAT_000cd52c + 0xcceb6;
        puVar52 = (ushort *)(DAT_000cd524 + 0xccee2);
        iVar32 = DAT_000cd530 + 0xcceca;
        uVar56 = 1;
        do {
          if (((*(int *)(puVar52 + -6) == 0) && ((int)uVar56 < (int)uVar49)) &&
             (*(int *)(puVar52 + 6) != 2)) {
            uVar33 = uVar56;
            if (*(int *)(puVar52 + 6) != 0) {
              uVar47 = ~uVar56 + uVar49 & 7;
              puVar18 = puVar52 + -6;
              uVar51 = uVar56;
              if (uVar47 != 0) {
                uVar51 = uVar56 + 1;
                if (*(int *)(puVar52 + 0x12) == 2) goto LAB_000cd130;
                puVar18 = puVar52 + 6;
                uVar33 = uVar51;
                if (*(int *)(puVar52 + 0x12) == 0) goto LAB_000cd022;
                if (uVar47 != 1) {
                  if (uVar47 != 2) {
                    if (uVar47 != 3) {
                      if (uVar47 != 4) {
                        if (uVar47 != 5) {
                          if (uVar47 != 6) {
                            uVar51 = uVar56 + 2;
                            if (*(int *)(puVar52 + 0x1e) == 2) goto LAB_000cd130;
                            puVar18 = puVar52 + 0x12;
                            uVar33 = uVar51;
                            if (*(int *)(puVar52 + 0x1e) == 0) goto LAB_000cd022;
                          }
                          puVar1 = puVar18 + 0x18;
                          uVar51 = uVar51 + 1;
                          if (*(int *)puVar1 == 2) goto LAB_000cd130;
                          puVar18 = puVar18 + 0xc;
                          uVar33 = uVar51;
                          if (*(int *)puVar1 == 0) goto LAB_000cd022;
                        }
                        puVar1 = puVar18 + 0x18;
                        uVar51 = uVar51 + 1;
                        if (*(int *)puVar1 == 2) goto LAB_000cd130;
                        puVar18 = puVar18 + 0xc;
                        uVar33 = uVar51;
                        if (*(int *)puVar1 == 0) goto LAB_000cd022;
                      }
                      puVar1 = puVar18 + 0x18;
                      uVar51 = uVar51 + 1;
                      if (*(int *)puVar1 == 2) goto LAB_000cd130;
                      puVar18 = puVar18 + 0xc;
                      uVar33 = uVar51;
                      if (*(int *)puVar1 == 0) goto LAB_000cd022;
                    }
                    puVar1 = puVar18 + 0x18;
                    uVar51 = uVar51 + 1;
                    if (*(int *)puVar1 == 2) goto LAB_000cd130;
                    puVar18 = puVar18 + 0xc;
                    uVar33 = uVar51;
                    if (*(int *)puVar1 == 0) goto LAB_000cd022;
                  }
                  puVar1 = puVar18 + 0x18;
                  uVar51 = uVar51 + 1;
                  if (*(int *)puVar1 == 2) goto LAB_000cd130;
                  puVar18 = puVar18 + 0xc;
                  uVar33 = uVar51;
                  if (*(int *)puVar1 == 0) goto LAB_000cd022;
                }
              }
              do {
                if ((uVar51 + 1 == uVar49) || (*(int *)(puVar18 + 0x18) == 2)) goto LAB_000cd130;
                uVar33 = uVar51 + 1;
                if (*(int *)(puVar18 + 0x18) == 0) break;
                if (*(int *)(puVar18 + 0x24) == 2) goto LAB_000cd130;
                uVar33 = uVar51 + 2;
                if (*(int *)(puVar18 + 0x24) == 0) break;
                if (*(int *)(puVar18 + 0x30) == 2) goto LAB_000cd130;
                uVar33 = uVar51 + 3;
                if (*(int *)(puVar18 + 0x30) == 0) break;
                if (*(int *)(puVar18 + 0x3c) == 2) goto LAB_000cd130;
                uVar33 = uVar51 + 4;
                if (*(int *)(puVar18 + 0x3c) == 0) break;
                if (*(int *)(puVar18 + 0x48) == 2) goto LAB_000cd130;
                uVar33 = uVar51 + 5;
                if (*(int *)(puVar18 + 0x48) == 0) break;
                if (*(int *)(puVar18 + 0x54) == 2) goto LAB_000cd130;
                uVar33 = uVar51 + 6;
                if (*(int *)(puVar18 + 0x54) == 0) break;
                if (*(int *)(puVar18 + 0x60) == 2) goto LAB_000cd130;
                uVar33 = uVar51 + 7;
                if (*(int *)(puVar18 + 0x60) == 0) break;
                puVar1 = puVar18 + 0x6c;
                uVar51 = uVar51 + 8;
                if (*(int *)puVar1 == 2) goto LAB_000cd130;
                puVar18 = puVar18 + 0x60;
                uVar33 = uVar51;
              } while (*(int *)puVar1 != 0);
            }
LAB_000cd022:
            uVar49 = (uint)*puVar52;
            iVar55 = iVar19 + uVar33 * 0x18;
            iVar21 = iVar16 + uVar49 * 3;
            cVar31 = *(char *)(iVar21 + 2);
            if (cVar31 == '\x01') {
              uVar33 = 0x92e;
            }
            else if (cVar31 == '\x02') {
              uVar3 = *(ushort *)(iVar55 + 0x3c);
              if (uVar3 == 0x302) {
                uVar33 = 0x1ac;
              }
              else if (uVar3 < 0x303) {
                if (uVar3 == 0x2bf) {
                  uVar33 = 0x164;
                }
                else if (uVar3 < 0x2c0) {
                  if (uVar3 == 0x2b3) {
                    uVar33 = 0x15a;
                  }
                  else {
LAB_000cd488:
                    uVar33 = 0x92e;
                  }
                }
                else if (uVar3 == 0x2c1) {
                  uVar33 = 0x166;
                }
                else {
                  if (uVar3 != 0x2fd) goto LAB_000cd488;
                  uVar33 = 0x1a6;
                }
              }
              else if (uVar3 == 0x8a9) {
                uVar33 = 0x76a;
              }
              else if (uVar3 < 0x8aa) {
                if (uVar3 == 0x8a0) {
                  uVar33 = 0x762;
                }
                else {
                  if (uVar3 != 0x8a2) goto LAB_000cd488;
                  uVar33 = 0x764;
                }
              }
              else if (uVar3 == 0x8dc) {
                uVar33 = 0x799;
              }
              else {
                if (uVar3 != 0x926) goto LAB_000cd488;
                uVar33 = 0x7c5;
              }
            }
            else {
              uVar51 = uVar49;
              uVar47 = uVar49;
              if (cVar31 == '\x03') {
                uVar3 = *(ushort *)(iVar55 + 0x3c);
                if (uVar3 != 0x5f9) {
                  if (0x5f9 < uVar3) {
                    if (uVar3 != 0x5fd) {
                      if (uVar3 < 0x5fe) {
                        if (uVar3 != 0x5fa) goto LAB_000ce232;
                        if (uVar49 != 0) {
                          uVar51 = uVar49 - 1 & 7;
                          uVar33 = uVar49;
                          iVar48 = iVar21;
                          if (uVar51 == 0) {
LAB_000cdc5e:
                            do {
                              uVar47 = uVar33 - 1;
                              if (uVar47 == 0) {
                                uVar51 = 0;
                                goto LAB_000cdcfa;
                              }
                            } while (((((*(char *)(iVar48 + -1) != '\x01') &&
                                       (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                      (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                     ((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                      (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01'))))
                                    && ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01' &&
                                        ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01'
                                         && (pcVar30 = (char *)(iVar48 + -0x16), uVar47 = uVar33 - 8
                                            , uVar33 = uVar47, iVar48 = iVar48 + -0x18,
                                            *pcVar30 != '\x01'))))));
                          }
                          else {
                            iVar48 = iVar21 + -3;
                            uVar33 = uVar49 - 1;
                            uVar47 = uVar33;
                            if (*(char *)(iVar21 + -1) != '\x01') {
                              if (uVar51 != 1) {
                                iVar22 = iVar48;
                                if (uVar51 != 2) {
                                  if (uVar51 != 3) {
                                    if (uVar51 != 4) {
                                      if (uVar51 != 5) {
                                        if (uVar51 != 6) {
                                          iVar22 = iVar21 + -6;
                                          uVar33 = uVar49 - 2;
                                          uVar47 = uVar33;
                                          if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000cdcf8;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar33 = uVar33 - 1;
                                        uVar47 = uVar33;
                                        if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cdcf8;
                                      }
                                      iVar22 = iVar48 + -3;
                                      uVar33 = uVar33 - 1;
                                      uVar47 = uVar33;
                                      if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000cdcf8;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar33 = uVar33 - 1;
                                    uVar47 = uVar33;
                                    if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cdcf8;
                                  }
                                  iVar22 = iVar48 + -3;
                                  uVar33 = uVar33 - 1;
                                  uVar47 = uVar33;
                                  if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000cdcf8;
                                }
                                iVar48 = iVar22 + -3;
                                uVar33 = uVar33 - 1;
                                uVar47 = uVar33;
                                if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cdcf8;
                              }
                              goto LAB_000cdc5e;
                            }
                          }
LAB_000cdcf8:
                          uVar51 = uVar47 & 0xffff;
                        }
LAB_000cdcfa:
                        *(short *)(iVar26 + 0x30) = (short)uVar51;
                        uVar33 = 0x113;
                        goto LAB_000cde5c;
                      }
                      if (uVar3 != 0x60b) {
                        if (uVar3 != 0x613) goto LAB_000ce232;
                        if (uVar49 == 0) {
                          uVar51 = 0;
                          uVar47 = 0;
                        }
                        else if (*(char *)(DAT_000ce264 + uVar49 * 3 + 0xcd586) != '\x01') {
                          uVar47 = uVar49 - 1;
                          uVar51 = uVar47 & 7;
                          uVar33 = uVar49;
                          iVar48 = iVar21;
                          if (uVar51 == 0) {
LAB_000cd638:
                            do {
                              uVar47 = uVar33 - 1;
                              if (uVar47 == 0) {
                                uVar51 = 0;
                                goto LAB_000d06ae;
                              }
                            } while ((((((*(char *)(iVar48 + -1) != '\x01') &&
                                        (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                       (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                      ((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                       (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01'))))
                                     && (uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01'))
                                    && ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01' &&
                                        (uVar47 = uVar33 - 8, pcVar30 = (char *)(iVar48 + -0x16),
                                        uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'
                                        ))));
                          }
                          else {
                            iVar48 = iVar21 + -3;
                            if (*(char *)(iVar21 + -1) != '\x01') {
                              uVar33 = uVar47;
                              if (uVar51 != 1) {
                                iVar22 = iVar48;
                                if (uVar51 != 2) {
                                  if (uVar51 != 3) {
                                    if (uVar51 != 4) {
                                      if (uVar51 != 5) {
                                        if (uVar51 != 6) {
                                          iVar22 = iVar21 + -6;
                                          uVar47 = uVar49 - 2;
                                          if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000cd6da;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cd6da;
                                      }
                                      iVar22 = iVar48 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000cd6da;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cd6da;
                                  }
                                  iVar22 = iVar48 + -3;
                                  uVar47 = uVar47 - 1;
                                  if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000cd6da;
                                }
                                iVar48 = iVar22 + -3;
                                uVar33 = uVar47 - 1;
                                uVar47 = uVar33;
                                if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cd6da;
                              }
                              goto LAB_000cd638;
                            }
                          }
LAB_000cd6da:
                          uVar51 = uVar47 & 0xffff;
                        }
LAB_000d06ae:
                        *(short *)(iVar26 + 0x30) = (short)uVar51;
                        uVar33 = 0x120;
                        goto LAB_000cde5c;
                      }
                      if (uVar49 != 0) {
                        uVar51 = uVar49 - 1 & 7;
                        uVar33 = uVar49;
                        iVar48 = iVar21;
                        if (uVar51 == 0) {
LAB_000ce97c:
                          do {
                            uVar47 = uVar33 - 1;
                            if (uVar47 == 0) {
                              uVar51 = 0;
                              goto LAB_000cea1c;
                            }
                          } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                    (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                   (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                  (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                    (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01')) &&
                                   ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01' &&
                                    ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01' &&
                                     (uVar47 = uVar33 - 8, pcVar30 = (char *)(iVar48 + -0x16),
                                     uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\x01')))
                                    )))));
                        }
                        else {
                          iVar48 = iVar21 + -3;
                          uVar33 = uVar49 - 1;
                          uVar47 = uVar33;
                          if (*(char *)(iVar21 + -1) != '\x01') {
                            if (uVar51 != 1) {
                              iVar22 = iVar48;
                              if (uVar51 != 2) {
                                if (uVar51 != 3) {
                                  if (uVar51 != 4) {
                                    if (uVar51 != 5) {
                                      if (uVar51 != 6) {
                                        iVar22 = iVar21 + -6;
                                        uVar33 = uVar49 - 2;
                                        uVar47 = uVar33;
                                        if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000cea1a;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar33 = uVar33 - 1;
                                      uVar47 = uVar33;
                                      if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cea1a;
                                    }
                                    iVar22 = iVar48 + -3;
                                    uVar33 = uVar33 - 1;
                                    uVar47 = uVar33;
                                    if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000cea1a;
                                  }
                                  iVar48 = iVar22 + -3;
                                  uVar33 = uVar33 - 1;
                                  uVar47 = uVar33;
                                  if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cea1a;
                                }
                                iVar22 = iVar48 + -3;
                                uVar33 = uVar33 - 1;
                                uVar47 = uVar33;
                                if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000cea1a;
                              }
                              iVar48 = iVar22 + -3;
                              uVar33 = uVar33 - 1;
                              uVar47 = uVar33;
                              if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cea1a;
                            }
                            goto LAB_000ce97c;
                          }
                        }
LAB_000cea1a:
                        uVar51 = uVar47 & 0xffff;
                      }
LAB_000cea1c:
                      *(short *)(iVar26 + 0x30) = (short)uVar51;
                      uVar33 = 0x11b;
                      goto LAB_000cde5c;
                    }
                    if (uVar49 != 0) {
                      uVar47 = uVar49 - 1;
                      uVar51 = uVar47 & 7;
                      uVar33 = uVar49;
                      iVar48 = iVar21;
                      if (uVar51 == 0) {
LAB_000ceae0:
                        do {
                          uVar47 = uVar33 - 1;
                          if (uVar47 == 0) {
                            uVar51 = 0;
                            goto LAB_000ceb80;
                          }
                        } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                  (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                 (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                  (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01')) &&
                                 ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01' &&
                                  ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01' &&
                                   (pcVar30 = (char *)(iVar48 + -0x16), uVar47 = uVar33 - 8,
                                   uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\x01')))))
                                 )));
                      }
                      else {
                        iVar48 = iVar21 + -3;
                        if (*(char *)(iVar21 + -1) != '\x01') {
                          uVar33 = uVar47;
                          if (uVar51 != 1) {
                            iVar22 = iVar48;
                            if (uVar51 != 2) {
                              if (uVar51 != 3) {
                                if (uVar51 != 4) {
                                  if (uVar51 != 5) {
                                    if (uVar51 != 6) {
                                      iVar22 = iVar21 + -6;
                                      uVar47 = uVar49 - 2;
                                      if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000ceb7e;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000ceb7e;
                                  }
                                  iVar22 = iVar48 + -3;
                                  uVar47 = uVar47 - 1;
                                  if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000ceb7e;
                                }
                                iVar48 = iVar22 + -3;
                                uVar47 = uVar47 - 1;
                                if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000ceb7e;
                              }
                              iVar22 = iVar48 + -3;
                              uVar47 = uVar47 - 1;
                              if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000ceb7e;
                            }
                            iVar48 = iVar22 + -3;
                            uVar33 = uVar47 - 1;
                            uVar47 = uVar33;
                            if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000ceb7e;
                          }
                          goto LAB_000ceae0;
                        }
                      }
LAB_000ceb7e:
                      uVar51 = uVar47 & 0xffff;
                    }
LAB_000ceb80:
                    *(short *)(iVar26 + 0x30) = (short)uVar51;
                    uVar33 = 0x117;
                    goto LAB_000cde5c;
                  }
                  if (uVar3 != 0x571) {
                    if (uVar3 < 0x572) {
                      if (uVar3 != 0x549) {
LAB_000ce232:
                        uVar33 = 0x92e;
                        goto LAB_000cd1a0;
                      }
                      if (uVar49 != 0) {
                        uVar51 = uVar49 - 1 & 7;
                        uVar33 = uVar49;
                        iVar48 = iVar21;
                        if (uVar51 == 0) {
LAB_000cddb8:
                          do {
                            uVar47 = uVar33 - 1;
                            if (uVar47 == 0) {
                              uVar51 = 0;
                              goto LAB_000cde58;
                            }
                          } while (((((*(char *)(iVar48 + -1) != '\x01') &&
                                     (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                    (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                   ((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                    (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01')))) &&
                                  ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01' &&
                                   ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01' &&
                                    (uVar47 = uVar33 - 8, pcVar30 = (char *)(iVar48 + -0x16),
                                    uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))))
                                  ));
                        }
                        else {
                          iVar48 = iVar21 + -3;
                          uVar33 = uVar49 - 1;
                          uVar47 = uVar33;
                          if (*(char *)(iVar21 + -1) != '\x01') {
                            if (uVar51 != 1) {
                              iVar22 = iVar48;
                              if (uVar51 != 2) {
                                if (uVar51 != 3) {
                                  if (uVar51 != 4) {
                                    if (uVar51 != 5) {
                                      if (uVar51 != 6) {
                                        iVar22 = iVar21 + -6;
                                        uVar33 = uVar49 - 2;
                                        uVar47 = uVar33;
                                        if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000cde56;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar33 = uVar33 - 1;
                                      uVar47 = uVar33;
                                      if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cde56;
                                    }
                                    iVar22 = iVar48 + -3;
                                    uVar33 = uVar33 - 1;
                                    uVar47 = uVar33;
                                    if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000cde56;
                                  }
                                  iVar48 = iVar22 + -3;
                                  uVar33 = uVar33 - 1;
                                  uVar47 = uVar33;
                                  if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cde56;
                                }
                                iVar22 = iVar48 + -3;
                                uVar33 = uVar33 - 1;
                                uVar47 = uVar33;
                                if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000cde56;
                              }
                              iVar48 = iVar22 + -3;
                              uVar33 = uVar33 - 1;
                              uVar47 = uVar33;
                              if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cde56;
                            }
                            goto LAB_000cddb8;
                          }
                        }
LAB_000cde56:
                        uVar51 = uVar47 & 0xffff;
                      }
LAB_000cde58:
                      uVar33 = 0xab;
                      *(short *)(iVar26 + 0x30) = (short)uVar51;
                      goto LAB_000cde5c;
                    }
                    if (uVar3 != 0x582) {
                      if (uVar3 != 0x5f7) goto LAB_000ce232;
                      if (uVar49 == 0) {
                        uVar51 = 0;
                        uVar47 = 0;
                      }
                      else if (*(char *)(DAT_000cd54c + uVar49 * 3 + 0xcd2a6) != '\x01') {
                        uVar47 = uVar49 - 1;
                        uVar51 = uVar47 & 7;
                        uVar33 = uVar49;
                        iVar48 = iVar21;
                        if (uVar51 == 0) {
LAB_000cd358:
                          do {
                            uVar47 = uVar33 - 1;
                            if (uVar47 == 0) {
                              uVar51 = 0;
                              goto LAB_000cd3f8;
                            }
                          } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                    (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                   (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                  (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                    (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01')) &&
                                   ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01' &&
                                    ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01' &&
                                     (pcVar30 = (char *)(iVar48 + -0x16), uVar47 = uVar33 - 8,
                                     uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\x01')))
                                    )))));
                        }
                        else {
                          iVar48 = iVar21 + -3;
                          if (*(char *)(iVar21 + -1) != '\x01') {
                            uVar33 = uVar47;
                            if (uVar51 != 1) {
                              iVar22 = iVar48;
                              if (uVar51 != 2) {
                                if (uVar51 != 3) {
                                  if (uVar51 != 4) {
                                    if (uVar51 != 5) {
                                      if (uVar51 != 6) {
                                        iVar22 = iVar21 + -6;
                                        uVar47 = uVar49 - 2;
                                        if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000cd3f6;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cd3f6;
                                    }
                                    iVar22 = iVar48 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000cd3f6;
                                  }
                                  iVar48 = iVar22 + -3;
                                  uVar47 = uVar47 - 1;
                                  if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cd3f6;
                                }
                                iVar22 = iVar48 + -3;
                                uVar47 = uVar47 - 1;
                                if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000cd3f6;
                              }
                              iVar48 = iVar22 + -3;
                              uVar33 = uVar47 - 1;
                              uVar47 = uVar33;
                              if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cd3f6;
                            }
                            goto LAB_000cd358;
                          }
                        }
LAB_000cd3f6:
                        uVar51 = uVar47 & 0xffff;
                      }
LAB_000cd3f8:
                      *(short *)(iVar26 + 0x30) = (short)uVar51;
                      uVar33 = 0x10f;
                      goto LAB_000cde5c;
                    }
                    if (uVar49 != 0) {
                      uVar51 = uVar49 - 1 & 7;
                      uVar33 = uVar49;
                      iVar48 = iVar21;
                      if (uVar51 == 0) {
LAB_000cec3a:
                        do {
                          uVar47 = uVar33 - 1;
                          if (uVar47 == 0) {
                            uVar51 = 0;
                            goto LAB_000d06be;
                          }
                        } while (((((*(char *)(iVar48 + -1) != '\x01') &&
                                   (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                  (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                 ((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                  (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01')))) &&
                                ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01' &&
                                 ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01' &&
                                  (uVar47 = uVar33 - 8, pcVar30 = (char *)(iVar48 + -0x16),
                                  uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))))))
                        ;
                      }
                      else {
                        iVar48 = iVar21 + -3;
                        uVar33 = uVar49 - 1;
                        uVar47 = uVar33;
                        if (*(char *)(iVar21 + -1) != '\x01') {
                          if (uVar51 != 1) {
                            iVar22 = iVar48;
                            if (uVar51 != 2) {
                              if (uVar51 != 3) {
                                if (uVar51 != 4) {
                                  if (uVar51 != 5) {
                                    if (uVar51 != 6) {
                                      iVar22 = iVar21 + -6;
                                      uVar33 = uVar49 - 2;
                                      uVar47 = uVar33;
                                      if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000cecdc;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar33 = uVar33 - 1;
                                    uVar47 = uVar33;
                                    if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cecdc;
                                  }
                                  iVar22 = iVar48 + -3;
                                  uVar33 = uVar33 - 1;
                                  uVar47 = uVar33;
                                  if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000cecdc;
                                }
                                iVar48 = iVar22 + -3;
                                uVar33 = uVar33 - 1;
                                uVar47 = uVar33;
                                if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cecdc;
                              }
                              iVar22 = iVar48 + -3;
                              uVar33 = uVar33 - 1;
                              uVar47 = uVar33;
                              if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000cecdc;
                            }
                            iVar48 = iVar22 + -3;
                            uVar33 = uVar33 - 1;
                            uVar47 = uVar33;
                            if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cecdc;
                          }
                          goto LAB_000cec3a;
                        }
                      }
LAB_000cecdc:
                      uVar51 = uVar47 & 0xffff;
                    }
LAB_000d06be:
                    *(short *)(iVar26 + 0x30) = (short)uVar51;
                    uVar33 = 0xcd;
                    goto LAB_000cde5c;
                  }
                  if (uVar49 != 0) {
                    uVar47 = uVar49 - 1;
                    uVar51 = uVar47 & 7;
                    uVar33 = uVar49;
                    iVar48 = iVar21;
                    if (uVar51 == 0) {
LAB_000cefc2:
                      do {
                        uVar47 = uVar33 - 1;
                        if (uVar47 == 0) {
                          uVar51 = 0;
                          goto LAB_000d06a0;
                        }
                      } while (((((*(char *)(iVar48 + -1) != '\x01') &&
                                 (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                               ((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01')))) &&
                              ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01' &&
                               ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01' &&
                                (uVar47 = uVar33 - 8, pcVar30 = (char *)(iVar48 + -0x16),
                                uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))))));
                    }
                    else {
                      iVar48 = iVar21 + -3;
                      if (*(char *)(iVar21 + -1) != '\x01') {
                        uVar33 = uVar47;
                        if (uVar51 != 1) {
                          iVar22 = iVar48;
                          if (uVar51 != 2) {
                            if (uVar51 != 3) {
                              if (uVar51 != 4) {
                                if (uVar51 != 5) {
                                  if (uVar51 != 6) {
                                    iVar22 = iVar21 + -6;
                                    uVar47 = uVar49 - 2;
                                    if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000cf05c;
                                  }
                                  iVar48 = iVar22 + -3;
                                  uVar47 = uVar47 - 1;
                                  if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cf05c;
                                }
                                iVar22 = iVar48 + -3;
                                uVar47 = uVar47 - 1;
                                if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000cf05c;
                              }
                              iVar48 = iVar22 + -3;
                              uVar47 = uVar47 - 1;
                              if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cf05c;
                            }
                            iVar22 = iVar48 + -3;
                            uVar47 = uVar47 - 1;
                            if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000cf05c;
                          }
                          iVar48 = iVar22 + -3;
                          uVar33 = uVar47 - 1;
                          uVar47 = uVar33;
                          if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cf05c;
                        }
                        goto LAB_000cefc2;
                      }
                    }
LAB_000cf05c:
                    uVar51 = uVar47 & 0xffff;
                  }
LAB_000d06a0:
                  *(short *)(iVar26 + 0x30) = (short)uVar51;
                  uVar33 = 0xc3;
                  goto LAB_000cde5c;
                }
                if (uVar49 != 0) {
                  uVar47 = uVar49 - 1;
                  uVar51 = uVar47 & 7;
                  uVar33 = uVar49;
                  iVar48 = iVar21;
                  if (uVar51 == 0) {
LAB_000ce81e:
                    do {
                      uVar47 = uVar33 - 1;
                      if (uVar47 == 0) {
                        uVar51 = 0;
                        goto LAB_000ce8c2;
                      }
                    } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                              (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                             (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                            (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                              (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01')) &&
                             ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01' &&
                              ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01' &&
                               (uVar47 = uVar33 - 8, pcVar30 = (char *)(iVar48 + -0x16),
                               uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))))))));
                  }
                  else {
                    iVar48 = iVar21 + -3;
                    if (*(char *)(iVar21 + -1) != '\x01') {
                      uVar33 = uVar47;
                      if (uVar51 != 1) {
                        iVar22 = iVar48;
                        if (uVar51 != 2) {
                          if (uVar51 != 3) {
                            if (uVar51 != 4) {
                              if (uVar51 != 5) {
                                if (uVar51 != 6) {
                                  iVar22 = iVar21 + -6;
                                  uVar47 = uVar49 - 2;
                                  if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000ce8c0;
                                }
                                iVar48 = iVar22 + -3;
                                uVar47 = uVar47 - 1;
                                if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000ce8c0;
                              }
                              iVar22 = iVar48 + -3;
                              uVar47 = uVar47 - 1;
                              if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000ce8c0;
                            }
                            iVar48 = iVar22 + -3;
                            uVar47 = uVar47 - 1;
                            if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000ce8c0;
                          }
                          iVar22 = iVar48 + -3;
                          uVar47 = uVar47 - 1;
                          if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000ce8c0;
                        }
                        iVar48 = iVar22 + -3;
                        uVar33 = uVar47 - 1;
                        uVar47 = uVar33;
                        if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000ce8c0;
                      }
                      goto LAB_000ce81e;
                    }
                  }
LAB_000ce8c0:
                  uVar51 = uVar47 & 0xffff;
                }
LAB_000ce8c2:
                *(short *)(iVar26 + 0x30) = (short)uVar51;
                uVar33 = 0x111;
              }
              else {
                if (cVar31 == '\x04') {
                  uVar3 = *(ushort *)(iVar55 + 0x3c);
                  if (uVar3 == 0x5f9) {
                    uVar33 = 0x537;
                  }
                  else if (uVar3 < 0x5fa) {
                    if (uVar3 == 0x571) {
                      uVar33 = 0x506;
                    }
                    else if (uVar3 < 0x572) {
                      if (uVar3 == 0x549) {
                        uVar33 = 0x4f3;
                      }
                      else {
LAB_000cd44c:
                        uVar33 = 0x92e;
                      }
                    }
                    else if (uVar3 == 0x582) {
                      uVar33 = 0x50f;
                    }
                    else {
                      if (uVar3 != 0x5f7) goto LAB_000cd44c;
                      uVar33 = 0x535;
                    }
                  }
                  else if (uVar3 == 0x5fd) {
                    uVar33 = 0x53c;
                  }
                  else if (uVar3 < 0x5fe) {
                    if (uVar3 != 0x5fa) goto LAB_000cd44c;
                    uVar33 = 0x538;
                  }
                  else if (uVar3 == 0x60b) {
                    uVar33 = 0x541;
                  }
                  else {
                    if (uVar3 != 0x613) goto LAB_000cd44c;
                    uVar33 = 0x546;
                  }
                  goto LAB_000cd1a0;
                }
                if (cVar31 == '\x05') {
                  uVar3 = *(ushort *)(iVar55 + 0x3c);
                  if (uVar3 == 0x582) {
                    if (uVar49 != 0) {
                      uVar47 = uVar49 - 1;
                      uVar51 = uVar47 & 7;
                      uVar33 = uVar49;
                      iVar48 = iVar21;
                      if (uVar51 == 0) {
LAB_000d079e:
                        do {
                          uVar47 = uVar33 - 1;
                          if (uVar47 == 0) {
                            uVar51 = 0;
                            goto LAB_000d3cb2;
                          }
                        } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                  (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                 (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                  (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01')) &&
                                 ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01' &&
                                  ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01' &&
                                   (uVar47 = uVar33 - 8, pcVar30 = (char *)(iVar48 + -0x16),
                                   uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\x01')))))
                                 )));
                      }
                      else {
                        iVar48 = iVar21 + -3;
                        if (*(char *)(iVar21 + -1) != '\x01') {
                          uVar33 = uVar47;
                          if (uVar51 != 1) {
                            iVar22 = iVar48;
                            if (uVar51 != 2) {
                              if (uVar51 != 3) {
                                if (uVar51 != 4) {
                                  if (uVar51 != 5) {
                                    if (uVar51 != 6) {
                                      iVar22 = iVar21 + -6;
                                      uVar47 = uVar49 - 2;
                                      if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000d0840;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d0840;
                                  }
                                  iVar22 = iVar48 + -3;
                                  uVar47 = uVar47 - 1;
                                  if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d0840;
                                }
                                iVar48 = iVar22 + -3;
                                uVar47 = uVar47 - 1;
                                if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d0840;
                              }
                              iVar22 = iVar48 + -3;
                              uVar47 = uVar47 - 1;
                              if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d0840;
                            }
                            iVar48 = iVar22 + -3;
                            uVar33 = uVar47 - 1;
                            uVar47 = uVar33;
                            if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d0840;
                          }
                          goto LAB_000d079e;
                        }
                      }
LAB_000d0840:
                      uVar51 = uVar47 & 0xffff;
                    }
LAB_000d3cb2:
                    *(short *)(iVar26 + 0x30) = (short)uVar51;
                    uVar33 = 0x150;
                  }
                  else {
                    if (uVar3 < 0x583) {
                      if (uVar3 == 0x2d2) {
                        uVar33 = 0x179;
                      }
                      else {
                        if (0x2d2 < uVar3) {
                          if (uVar3 != 0x549) {
                            if (uVar3 != 0x571) goto LAB_000cd4ce;
                            if ((uVar49 != 0) &&
                               (*(char *)(DAT_000ceef0 + uVar49 * 3 + 0xce2aa) != '\x01')) {
                              uVar47 = uVar49 - 1;
                              uVar51 = uVar47 & 7;
                              uVar33 = uVar49;
                              iVar48 = iVar21;
                              if (uVar51 == 0) {
LAB_000ce35e:
                                do {
                                  uVar47 = uVar33 - 1;
                                  if (uVar47 == 0) {
                                    uVar51 = 0;
                                    goto LAB_000d3a90;
                                  }
                                } while (((((*(char *)(iVar48 + -1) != '\x01') &&
                                           (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01'))
                                          && (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')
                                          ) && ((uVar47 = uVar33 - 4,
                                                *(char *)(iVar48 + -10) != '\x01' &&
                                                (uVar47 = uVar33 - 5,
                                                *(char *)(iVar48 + -0xd) != '\x01')))) &&
                                        ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01'
                                         && ((uVar47 = uVar33 - 7,
                                             *(char *)(iVar48 + -0x13) != '\x01' &&
                                             (uVar47 = uVar33 - 8,
                                             pcVar30 = (char *)(iVar48 + -0x16), uVar33 = uVar47,
                                             iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))))));
                              }
                              else {
                                iVar48 = iVar21 + -3;
                                if (*(char *)(iVar21 + -1) != '\x01') {
                                  uVar33 = uVar47;
                                  if (uVar51 != 1) {
                                    iVar22 = iVar48;
                                    if (uVar51 != 2) {
                                      if (uVar51 != 3) {
                                        if (uVar51 != 4) {
                                          if (uVar51 != 5) {
                                            if (uVar51 != 6) {
                                              iVar22 = iVar21 + -6;
                                              uVar47 = uVar49 - 2;
                                              if (*(char *)(iVar21 + -4) == '\x01')
                                              goto LAB_000ce3f8;
                                            }
                                            iVar48 = iVar22 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000ce3f8;
                                          }
                                          iVar22 = iVar48 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000ce3f8;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000ce3f8;
                                      }
                                      iVar22 = iVar48 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000ce3f8;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar33 = uVar47 - 1;
                                    uVar47 = uVar33;
                                    if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000ce3f8;
                                  }
                                  goto LAB_000ce35e;
                                }
                              }
LAB_000ce3f8:
                              uVar51 = uVar47 & 0xffff;
                            }
LAB_000d3a90:
                            *(short *)(iVar26 + 0x30) = (short)uVar51;
                            uVar33 = 0x143;
                            goto LAB_000cde5c;
                          }
                          if ((uVar49 != 0) &&
                             (*(char *)(DAT_000d11ac + uVar49 * 3 + 0xd09a8) != '\x01')) {
                            uVar47 = uVar49 - 1;
                            uVar51 = uVar47 & 7;
                            uVar33 = uVar49;
                            iVar48 = iVar21;
                            if (uVar51 == 0) {
LAB_000d0a5c:
                              do {
                                uVar47 = uVar33 - 1;
                                if (uVar47 == 0) {
                                  uVar51 = 0;
                                  goto LAB_000d3c7a;
                                }
                              } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                        (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                       (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                      (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                        (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01'))
                                       && ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01'
                                           && ((uVar47 = uVar33 - 7,
                                               *(char *)(iVar48 + -0x13) != '\x01' &&
                                               (pcVar30 = (char *)(iVar48 + -0x16),
                                               uVar47 = uVar33 - 8, uVar33 = uVar47,
                                               iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))))))));
                            }
                            else {
                              iVar48 = iVar21 + -3;
                              if (*(char *)(iVar21 + -1) != '\x01') {
                                uVar33 = uVar47;
                                if (uVar51 != 1) {
                                  iVar22 = iVar48;
                                  if (uVar51 != 2) {
                                    if (uVar51 != 3) {
                                      if (uVar51 != 4) {
                                        if (uVar51 != 5) {
                                          if (uVar51 != 6) {
                                            iVar22 = iVar21 + -6;
                                            uVar47 = uVar49 - 2;
                                            if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000d0afa;
                                          }
                                          iVar48 = iVar22 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d0afa;
                                        }
                                        iVar22 = iVar48 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d0afa;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d0afa;
                                    }
                                    iVar22 = iVar48 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d0afa;
                                  }
                                  iVar48 = iVar22 + -3;
                                  uVar33 = uVar47 - 1;
                                  uVar47 = uVar33;
                                  if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d0afa;
                                }
                                goto LAB_000d0a5c;
                              }
                            }
LAB_000d0afa:
                            uVar51 = uVar47 & 0xffff;
                          }
LAB_000d3c7a:
                          *(short *)(iVar26 + 0x30) = (short)uVar51;
                          uVar33 = 0x123;
                          goto LAB_000cde5c;
                        }
                        if (uVar3 == 0x288) {
                          uVar33 = 0x126;
                        }
                        else if (uVar3 == 0x2c1) {
                          uVar33 = 0x166;
                        }
                        else {
LAB_000cd4ce:
                          uVar33 = 0x92e;
                        }
                      }
                      goto LAB_000cd1a0;
                    }
                    if (uVar3 != 0x5fa) {
                      if (uVar3 < 0x5fb) {
                        if (uVar3 != 0x5f7) {
                          if (uVar3 != 0x5f9) goto LAB_000cd4ce;
                          if ((uVar49 != 0) &&
                             (*(char *)(DAT_000ceef4 + uVar49 * 3 + 0xce424) != '\x01')) {
                            uVar47 = uVar49 - 1;
                            uVar51 = uVar47 & 7;
                            uVar33 = uVar49;
                            iVar48 = iVar21;
                            if (uVar51 == 0) {
LAB_000ce4d6:
                              do {
                                uVar47 = uVar33 - 1;
                                if (uVar47 == 0) {
                                  uVar51 = 0;
                                  goto LAB_000ce57a;
                                }
                              } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                        (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                       (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                      (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                        (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01'))
                                       && ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01'
                                           && ((uVar47 = uVar33 - 7,
                                               *(char *)(iVar48 + -0x13) != '\x01' &&
                                               (uVar47 = uVar33 - 8,
                                               pcVar30 = (char *)(iVar48 + -0x16), uVar33 = uVar47,
                                               iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))))))));
                            }
                            else {
                              iVar48 = iVar21 + -3;
                              if (*(char *)(iVar21 + -1) != '\x01') {
                                uVar33 = uVar47;
                                if (uVar51 != 1) {
                                  iVar22 = iVar48;
                                  if (uVar51 != 2) {
                                    if (uVar51 != 3) {
                                      if (uVar51 != 4) {
                                        if (uVar51 != 5) {
                                          if (uVar51 != 6) {
                                            iVar22 = iVar21 + -6;
                                            uVar47 = uVar49 - 2;
                                            if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000ce578;
                                          }
                                          iVar48 = iVar22 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000ce578;
                                        }
                                        iVar22 = iVar48 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000ce578;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000ce578;
                                    }
                                    iVar22 = iVar48 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000ce578;
                                  }
                                  iVar48 = iVar22 + -3;
                                  uVar33 = uVar47 - 1;
                                  uVar47 = uVar33;
                                  if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000ce578;
                                }
                                goto LAB_000ce4d6;
                              }
                            }
LAB_000ce578:
                            uVar51 = uVar47 & 0xffff;
                          }
LAB_000ce57a:
                          *(short *)(iVar26 + 0x30) = (short)uVar51;
                          uVar33 = 0x199;
                          goto LAB_000cde5c;
                        }
                        if ((uVar49 != 0) &&
                           (*(char *)(DAT_000d11bc + uVar49 * 3 + 0xd0fae) != '\x01')) {
                          uVar47 = uVar49 - 1;
                          uVar51 = uVar47 & 7;
                          uVar33 = uVar49;
                          iVar48 = iVar21;
                          if (uVar51 == 0) {
LAB_000d1062:
                            do {
                              uVar47 = uVar33 - 1;
                              if (uVar47 == 0) {
                                uVar51 = 0;
                                goto LAB_000d10fe;
                              }
                            } while (((((*(char *)(iVar48 + -1) != '\x01') &&
                                       (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                      (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                     ((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                      (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01'))))
                                    && ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01' &&
                                        ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01'
                                         && (uVar47 = uVar33 - 8, pcVar30 = (char *)(iVar48 + -0x16)
                                            , uVar33 = uVar47, iVar48 = iVar48 + -0x18,
                                            *pcVar30 != '\x01'))))));
                          }
                          else {
                            iVar48 = iVar21 + -3;
                            if (*(char *)(iVar21 + -1) != '\x01') {
                              uVar33 = uVar47;
                              if (uVar51 != 1) {
                                iVar22 = iVar48;
                                if (uVar51 != 2) {
                                  if (uVar51 != 3) {
                                    if (uVar51 != 4) {
                                      if (uVar51 != 5) {
                                        if (uVar51 != 6) {
                                          iVar22 = iVar21 + -6;
                                          uVar47 = uVar49 - 2;
                                          if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000d10fc;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d10fc;
                                      }
                                      iVar22 = iVar48 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d10fc;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d10fc;
                                  }
                                  iVar22 = iVar48 + -3;
                                  uVar47 = uVar47 - 1;
                                  if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d10fc;
                                }
                                iVar48 = iVar22 + -3;
                                uVar33 = uVar47 - 1;
                                uVar47 = uVar33;
                                if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d10fc;
                              }
                              goto LAB_000d1062;
                            }
                          }
LAB_000d10fc:
                          uVar51 = uVar47 & 0xffff;
                        }
LAB_000d10fe:
                        *(short *)(iVar26 + 0x30) = (short)uVar51;
                        uVar33 = 0x197;
                        goto LAB_000cde5c;
                      }
                      if (uVar3 != 0x60b) {
                        if (uVar3 != 0x613) {
                          if (uVar3 != 0x5fd) goto LAB_000cd4ce;
                          if ((uVar49 != 0) &&
                             (*(char *)(DAT_000d11b0 + uVar49 * 3 + 0xd0b40) != '\x01')) {
                            uVar47 = uVar49 - 1;
                            uVar51 = uVar47 & 7;
                            uVar33 = uVar49;
                            iVar48 = iVar21;
                            if (uVar51 == 0) {
LAB_000d0bf2:
                              do {
                                uVar47 = uVar33 - 1;
                                if (uVar47 == 0) {
                                  uVar51 = 0;
                                  goto LAB_000d0c92;
                                }
                              } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                        (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                       (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                      (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                        (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01'))
                                       && ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01'
                                           && ((uVar47 = uVar33 - 7,
                                               *(char *)(iVar48 + -0x13) != '\x01' &&
                                               (pcVar30 = (char *)(iVar48 + -0x16),
                                               uVar47 = uVar33 - 8, uVar33 = uVar47,
                                               iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))))))));
                            }
                            else {
                              iVar48 = iVar21 + -3;
                              if (*(char *)(iVar21 + -1) != '\x01') {
                                uVar33 = uVar47;
                                if (uVar51 != 1) {
                                  iVar22 = iVar48;
                                  if (uVar51 != 2) {
                                    if (uVar51 != 3) {
                                      if (uVar51 != 4) {
                                        if (uVar51 != 5) {
                                          if (uVar51 != 6) {
                                            iVar22 = iVar21 + -6;
                                            uVar47 = uVar49 - 2;
                                            if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000d0c90;
                                          }
                                          iVar48 = iVar22 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d0c90;
                                        }
                                        iVar22 = iVar48 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d0c90;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d0c90;
                                    }
                                    iVar22 = iVar48 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d0c90;
                                  }
                                  iVar48 = iVar22 + -3;
                                  uVar33 = uVar47 - 1;
                                  uVar47 = uVar33;
                                  if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d0c90;
                                }
                                goto LAB_000d0bf2;
                              }
                            }
LAB_000d0c90:
                            uVar51 = uVar47 & 0xffff;
                          }
LAB_000d0c92:
                          *(short *)(iVar26 + 0x30) = (short)uVar51;
                          uVar33 = 0x19e;
                          goto LAB_000cde5c;
                        }
                        if ((uVar49 != 0) &&
                           (*(char *)(DAT_000d11b4 + uVar49 * 3 + 0xd0cae) != '\x01')) {
                          uVar47 = uVar49 - 1;
                          uVar51 = uVar47 & 7;
                          uVar33 = uVar49;
                          iVar48 = iVar21;
                          if (uVar51 == 0) {
LAB_000d0d62:
                            do {
                              uVar47 = uVar33 - 1;
                              if (uVar47 == 0) {
                                uVar51 = 0;
                                goto LAB_000d0e06;
                              }
                            } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                      (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                     (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                    (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                      (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01')) &&
                                     ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01' &&
                                      ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01' &&
                                       (uVar47 = uVar33 - 8, pcVar30 = (char *)(iVar48 + -0x16),
                                       uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\x01')
                                       )))))));
                          }
                          else {
                            iVar48 = iVar21 + -3;
                            if (*(char *)(iVar21 + -1) != '\x01') {
                              uVar33 = uVar47;
                              if (uVar51 != 1) {
                                iVar22 = iVar48;
                                if (uVar51 != 2) {
                                  if (uVar51 != 3) {
                                    if (uVar51 != 4) {
                                      if (uVar51 != 5) {
                                        if (uVar51 != 6) {
                                          iVar22 = iVar21 + -6;
                                          uVar47 = uVar49 - 2;
                                          if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000d0e04;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d0e04;
                                      }
                                      iVar22 = iVar48 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d0e04;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d0e04;
                                  }
                                  iVar22 = iVar48 + -3;
                                  uVar47 = uVar47 - 1;
                                  if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d0e04;
                                }
                                iVar48 = iVar22 + -3;
                                uVar33 = uVar47 - 1;
                                uVar47 = uVar33;
                                if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d0e04;
                              }
                              goto LAB_000d0d62;
                            }
                          }
LAB_000d0e04:
                          uVar51 = uVar47 & 0xffff;
                        }
LAB_000d0e06:
                        *(short *)(iVar26 + 0x30) = (short)uVar51;
                        uVar33 = 0x1ac;
                        goto LAB_000cde5c;
                      }
                      if ((uVar49 != 0) &&
                         (*(char *)(DAT_000d11b8 + uVar49 * 3 + 0xd0e20) != '\x01')) {
                        uVar47 = uVar49 - 1;
                        uVar51 = uVar47 & 7;
                        uVar33 = uVar49;
                        iVar48 = iVar21;
                        if (uVar51 == 0) {
LAB_000d0ed4:
                          do {
                            uVar47 = uVar33 - 1;
                            if (uVar47 == 0) {
                              uVar51 = 0;
                              goto LAB_000d0f70;
                            }
                          } while ((((((*(char *)(iVar48 + -1) != '\x01') &&
                                      (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                     (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                    ((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                     (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01')))) &&
                                   (uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01')) &&
                                  ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01' &&
                                   (uVar47 = uVar33 - 8, pcVar30 = (char *)(iVar48 + -0x16),
                                   uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))));
                        }
                        else {
                          iVar48 = iVar21 + -3;
                          if (*(char *)(iVar21 + -1) != '\x01') {
                            uVar33 = uVar47;
                            if (uVar51 != 1) {
                              iVar22 = iVar48;
                              if (uVar51 != 2) {
                                if (uVar51 != 3) {
                                  if (uVar51 != 4) {
                                    if (uVar51 != 5) {
                                      if (uVar51 != 6) {
                                        iVar22 = iVar21 + -6;
                                        uVar47 = uVar49 - 2;
                                        if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000d0f6e;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d0f6e;
                                    }
                                    iVar22 = iVar48 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d0f6e;
                                  }
                                  iVar48 = iVar22 + -3;
                                  uVar47 = uVar47 - 1;
                                  if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d0f6e;
                                }
                                iVar22 = iVar48 + -3;
                                uVar47 = uVar47 - 1;
                                if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d0f6e;
                              }
                              iVar48 = iVar22 + -3;
                              uVar33 = uVar47 - 1;
                              uVar47 = uVar33;
                              if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d0f6e;
                            }
                            goto LAB_000d0ed4;
                          }
                        }
LAB_000d0f6e:
                        uVar51 = uVar47 & 0xffff;
                      }
LAB_000d0f70:
                      *(short *)(iVar26 + 0x30) = (short)uVar51;
                      uVar33 = 0x1a6;
                      goto LAB_000cde5c;
                    }
                    if (uVar49 != 0) {
                      uVar51 = uVar49 - 1 & 7;
                      uVar33 = uVar49;
                      iVar48 = iVar21;
                      if (uVar51 == 0) {
LAB_000d08f6:
                        do {
                          uVar47 = uVar33 - 1;
                          if (uVar47 == 0) {
                            uVar51 = 0;
                            goto LAB_000d23aa;
                          }
                        } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                  (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                 (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                  (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01')) &&
                                 ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01' &&
                                  ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01' &&
                                   (pcVar30 = (char *)(iVar48 + -0x16), uVar47 = uVar33 - 8,
                                   uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\x01')))))
                                 )));
                      }
                      else {
                        iVar48 = iVar21 + -3;
                        uVar33 = uVar49 - 1;
                        uVar47 = uVar33;
                        if (*(char *)(iVar21 + -1) != '\x01') {
                          if (uVar51 != 1) {
                            iVar22 = iVar48;
                            if (uVar51 != 2) {
                              if (uVar51 != 3) {
                                if (uVar51 != 4) {
                                  if (uVar51 != 5) {
                                    if (uVar51 != 6) {
                                      iVar22 = iVar21 + -6;
                                      uVar33 = uVar49 - 2;
                                      uVar47 = uVar33;
                                      if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000d0990;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar33 = uVar33 - 1;
                                    uVar47 = uVar33;
                                    if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d0990;
                                  }
                                  iVar22 = iVar48 + -3;
                                  uVar33 = uVar33 - 1;
                                  uVar47 = uVar33;
                                  if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d0990;
                                }
                                iVar48 = iVar22 + -3;
                                uVar33 = uVar33 - 1;
                                uVar47 = uVar33;
                                if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d0990;
                              }
                              iVar22 = iVar48 + -3;
                              uVar33 = uVar33 - 1;
                              uVar47 = uVar33;
                              if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d0990;
                            }
                            iVar48 = iVar22 + -3;
                            uVar33 = uVar33 - 1;
                            uVar47 = uVar33;
                            if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d0990;
                          }
                          goto LAB_000d08f6;
                        }
                      }
LAB_000d0990:
                      uVar51 = uVar47 & 0xffff;
                    }
LAB_000d23aa:
                    *(short *)(iVar26 + 0x30) = (short)uVar51;
                    uVar33 = 0x19a;
                  }
                }
                else {
                  if (cVar31 == '\x06') {
                    uVar3 = *(ushort *)(iVar55 + 0x3c);
                    if (uVar3 == 0x5fa) {
                      uVar33 = 0x68e;
                    }
                    else if (uVar3 < 0x5fb) {
                      if (uVar3 == 0x582) {
                        uVar33 = 0x643;
                      }
                      else if (uVar3 < 0x583) {
                        if (uVar3 == 0x549) {
                          uVar33 = 0x619;
                        }
                        else if (uVar3 == 0x571) {
                          uVar33 = 0x639;
                        }
                        else {
LAB_000cd72e:
                          uVar33 = 0x92e;
                        }
                      }
                      else if (uVar3 == 0x5f7) {
                        uVar33 = 0x68b;
                      }
                      else {
                        if (uVar3 != 0x5f9) goto LAB_000cd72e;
                        uVar33 = 0x68d;
                      }
                    }
                    else if (uVar3 == 0x613) {
                      uVar33 = 0x69a;
                    }
                    else if (uVar3 < 0x614) {
                      if (uVar3 == 0x5fd) {
                        uVar33 = 0x690;
                      }
                      else {
                        if (uVar3 != 0x60b) goto LAB_000cd72e;
                        uVar33 = 0x693;
                      }
                    }
                    else if (uVar3 == 0x8a2) {
                      uVar33 = 0x6f4;
                    }
                    else if (uVar3 == 0x926) {
                      uVar33 = 0x758;
                    }
                    else {
                      if (uVar3 != 0x8a0) goto LAB_000cd72e;
                      uVar33 = 0x6f2;
                    }
                    goto LAB_000cd1a0;
                  }
                  if (cVar31 == '\a') {
                    uVar3 = *(ushort *)(iVar55 + 0x3c);
                    if (uVar3 == 0x5f7) {
                      if (uVar49 != 0) {
                        uVar51 = uVar49 - 1 & 7;
                        uVar33 = uVar49;
                        iVar48 = iVar21;
                        if (uVar51 == 0) {
LAB_000d4c86:
                          do {
                            uVar47 = uVar33 - 1;
                            if (uVar47 == 0) {
                              uVar51 = 0;
                              goto LAB_000d4d26;
                            }
                          } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                    (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                   (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                  (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                    (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01')) &&
                                   ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01' &&
                                    ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01' &&
                                     (uVar47 = uVar33 - 8, pcVar30 = (char *)(iVar48 + -0x16),
                                     uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\x01')))
                                    )))));
                        }
                        else {
                          iVar48 = iVar21 + -3;
                          uVar33 = uVar49 - 1;
                          uVar47 = uVar33;
                          if (*(char *)(iVar21 + -1) != '\x01') {
                            if (uVar51 != 1) {
                              iVar22 = iVar48;
                              if (uVar51 != 2) {
                                if (uVar51 != 3) {
                                  if (uVar51 != 4) {
                                    if (uVar51 != 5) {
                                      if (uVar51 != 6) {
                                        iVar22 = iVar21 + -6;
                                        uVar33 = uVar49 - 2;
                                        uVar47 = uVar33;
                                        if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000d4d24;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar33 = uVar33 - 1;
                                      uVar47 = uVar33;
                                      if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d4d24;
                                    }
                                    iVar22 = iVar48 + -3;
                                    uVar33 = uVar33 - 1;
                                    uVar47 = uVar33;
                                    if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d4d24;
                                  }
                                  iVar48 = iVar22 + -3;
                                  uVar33 = uVar33 - 1;
                                  uVar47 = uVar33;
                                  if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d4d24;
                                }
                                iVar22 = iVar48 + -3;
                                uVar33 = uVar33 - 1;
                                uVar47 = uVar33;
                                if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d4d24;
                              }
                              iVar48 = iVar22 + -3;
                              uVar33 = uVar33 - 1;
                              uVar47 = uVar33;
                              if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d4d24;
                            }
                            goto LAB_000d4c86;
                          }
                        }
LAB_000d4d24:
                        uVar51 = uVar47 & 0xffff;
                      }
LAB_000d4d26:
                      *(short *)(iVar26 + 0x30) = (short)uVar51;
                      uVar33 = 0x197;
                    }
                    else {
                      if (uVar3 < 0x5f8) {
                        if (uVar3 == 0x1cf) {
                          uVar33 = 0x7e4;
                        }
                        else {
                          if (0x1cf < uVar3) {
                            if (uVar3 != 0x571) {
                              if (uVar3 != 0x582) {
                                if (uVar3 != 0x549) goto LAB_000cf11e;
                                if ((uVar49 != 0) &&
                                   (*(char *)(DAT_000ce27c + uVar49 * 3 + 0xcdf2a) != '\x01')) {
                                  uVar47 = uVar49 - 1;
                                  uVar51 = uVar47 & 7;
                                  uVar33 = uVar49;
                                  iVar48 = iVar21;
                                  if (uVar51 == 0) {
LAB_000cdfdc:
                                    do {
                                      uVar47 = uVar33 - 1;
                                      if (uVar47 == 0) {
                                        uVar51 = 0;
                                        goto LAB_000d3a80;
                                      }
                                    } while (((((*(char *)(iVar48 + -1) != '\x01') &&
                                               (uVar47 = uVar33 - 2,
                                               *(char *)(iVar48 + -4) != '\x01')) &&
                                              (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01'
                                              )) && ((uVar47 = uVar33 - 4,
                                                     *(char *)(iVar48 + -10) != '\x01' &&
                                                     (uVar47 = uVar33 - 5,
                                                     *(char *)(iVar48 + -0xd) != '\x01')))) &&
                                            ((uVar47 = uVar33 - 6,
                                             *(char *)(iVar48 + -0x10) != '\x01' &&
                                             ((uVar47 = uVar33 - 7,
                                              *(char *)(iVar48 + -0x13) != '\x01' &&
                                              (uVar47 = uVar33 - 8,
                                              pcVar30 = (char *)(iVar48 + -0x16), uVar33 = uVar47,
                                              iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))))));
                                  }
                                  else {
                                    iVar48 = iVar21 + -3;
                                    if (*(char *)(iVar21 + -1) != '\x01') {
                                      uVar33 = uVar47;
                                      if (uVar51 != 1) {
                                        iVar22 = iVar48;
                                        if (uVar51 != 2) {
                                          if (uVar51 != 3) {
                                            if (uVar51 != 4) {
                                              if (uVar51 != 5) {
                                                if (uVar51 != 6) {
                                                  iVar22 = iVar21 + -6;
                                                  uVar47 = uVar49 - 2;
                                                  if (*(char *)(iVar21 + -4) == '\x01')
                                                  goto LAB_000ce076;
                                                }
                                                iVar48 = iVar22 + -3;
                                                uVar47 = uVar47 - 1;
                                                if (*(char *)(iVar22 + -1) == '\x01')
                                                goto LAB_000ce076;
                                              }
                                              iVar22 = iVar48 + -3;
                                              uVar47 = uVar47 - 1;
                                              if (*(char *)(iVar48 + -1) == '\x01')
                                              goto LAB_000ce076;
                                            }
                                            iVar48 = iVar22 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000ce076;
                                          }
                                          iVar22 = iVar48 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000ce076;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar33 = uVar47 - 1;
                                        uVar47 = uVar33;
                                        if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000ce076;
                                      }
                                      goto LAB_000cdfdc;
                                    }
                                  }
LAB_000ce076:
                                  uVar51 = uVar47 & 0xffff;
                                }
LAB_000d3a80:
                                *(short *)(iVar26 + 0x30) = (short)uVar51;
                                uVar33 = 0x123;
                                goto LAB_000cde5c;
                              }
                              if ((uVar49 != 0) &&
                                 (*(char *)(DAT_000d1efc + uVar49 * 3 + 0xd13a0) != '\x01')) {
                                uVar47 = uVar49 - 1;
                                uVar51 = uVar47 & 7;
                                uVar33 = uVar49;
                                iVar48 = iVar21;
                                if (uVar51 == 0) {
LAB_000d1454:
                                  do {
                                    uVar47 = uVar33 - 1;
                                    if (uVar47 == 0) {
                                      uVar51 = 0;
                                      goto LAB_000d248a;
                                    }
                                  } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                            (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01'))
                                           && (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01'
                                              )) && (((uVar47 = uVar33 - 4,
                                                      *(char *)(iVar48 + -10) != '\x01' &&
                                                      (uVar47 = uVar33 - 5,
                                                      *(char *)(iVar48 + -0xd) != '\x01')) &&
                                                     ((uVar47 = uVar33 - 6,
                                                      *(char *)(iVar48 + -0x10) != '\x01' &&
                                                      ((uVar47 = uVar33 - 7,
                                                       *(char *)(iVar48 + -0x13) != '\x01' &&
                                                       (pcVar30 = (char *)(iVar48 + -0x16),
                                                       uVar47 = uVar33 - 8, uVar33 = uVar47,
                                                       iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))
                                                      ))))));
                                }
                                else {
                                  iVar48 = iVar21 + -3;
                                  if (*(char *)(iVar21 + -1) != '\x01') {
                                    uVar33 = uVar47;
                                    if (uVar51 != 1) {
                                      iVar22 = iVar48;
                                      if (uVar51 != 2) {
                                        if (uVar51 != 3) {
                                          if (uVar51 != 4) {
                                            if (uVar51 != 5) {
                                              if (uVar51 != 6) {
                                                iVar22 = iVar21 + -6;
                                                uVar47 = uVar49 - 2;
                                                if (*(char *)(iVar21 + -4) == '\x01')
                                                goto LAB_000d14f2;
                                              }
                                              iVar48 = iVar22 + -3;
                                              uVar47 = uVar47 - 1;
                                              if (*(char *)(iVar22 + -1) == '\x01')
                                              goto LAB_000d14f2;
                                            }
                                            iVar22 = iVar48 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d14f2;
                                          }
                                          iVar48 = iVar22 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d14f2;
                                        }
                                        iVar22 = iVar48 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d14f2;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar33 = uVar47 - 1;
                                      uVar47 = uVar33;
                                      if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d14f2;
                                    }
                                    goto LAB_000d1454;
                                  }
                                }
LAB_000d14f2:
                                uVar51 = uVar47 & 0xffff;
                              }
LAB_000d248a:
                              *(short *)(iVar26 + 0x30) = (short)uVar51;
                              uVar33 = 0x150;
                              goto LAB_000cde5c;
                            }
                            if ((uVar49 != 0) &&
                               (*(char *)(DAT_000d2c68 + uVar49 * 3 + 0xd252e) != '\x01')) {
                              uVar47 = uVar49 - 1;
                              uVar51 = uVar47 & 7;
                              uVar33 = uVar49;
                              iVar48 = iVar21;
                              if (uVar51 == 0) {
LAB_000d25e2:
                                do {
                                  uVar47 = uVar33 - 1;
                                  if (uVar47 == 0) {
                                    uVar51 = 0;
                                    goto LAB_000d2682;
                                  }
                                } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                          (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01'))
                                         && (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01'))
                                        && (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01'
                                             && (uVar47 = uVar33 - 5,
                                                *(char *)(iVar48 + -0xd) != '\x01')) &&
                                            ((uVar47 = uVar33 - 6,
                                             *(char *)(iVar48 + -0x10) != '\x01' &&
                                             ((uVar47 = uVar33 - 7,
                                              *(char *)(iVar48 + -0x13) != '\x01' &&
                                              (uVar47 = uVar33 - 8,
                                              pcVar30 = (char *)(iVar48 + -0x16), uVar33 = uVar47,
                                              iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))))))));
                              }
                              else {
                                iVar48 = iVar21 + -3;
                                if (*(char *)(iVar21 + -1) != '\x01') {
                                  uVar33 = uVar47;
                                  if (uVar51 != 1) {
                                    iVar22 = iVar48;
                                    if (uVar51 != 2) {
                                      if (uVar51 != 3) {
                                        if (uVar51 != 4) {
                                          if (uVar51 != 5) {
                                            if (uVar51 != 6) {
                                              iVar22 = iVar21 + -6;
                                              uVar47 = uVar49 - 2;
                                              if (*(char *)(iVar21 + -4) == '\x01')
                                              goto LAB_000d2680;
                                            }
                                            iVar48 = iVar22 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d2680;
                                          }
                                          iVar22 = iVar48 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d2680;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d2680;
                                      }
                                      iVar22 = iVar48 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d2680;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar33 = uVar47 - 1;
                                    uVar47 = uVar33;
                                    if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d2680;
                                  }
                                  goto LAB_000d25e2;
                                }
                              }
LAB_000d2680:
                              uVar51 = uVar47 & 0xffff;
                            }
LAB_000d2682:
                            *(short *)(iVar26 + 0x30) = (short)uVar51;
                            uVar33 = 0x143;
                            goto LAB_000cde5c;
                          }
                          if (uVar3 == 0x4c) {
                            uVar33 = 0x791;
                          }
                          else if (uVar3 == 0x1b0) {
                            uVar33 = 0x7cd;
                          }
                          else {
LAB_000cf11e:
                            uVar33 = 0x92e;
                          }
                        }
                        goto LAB_000cd1a0;
                      }
                      if (uVar3 != 0x60b) {
                        if (0x60b < uVar3) {
                          if (uVar3 == 0x619) {
                            uVar33 = 0x6f2;
                          }
                          else {
                            if (uVar3 != 0x693) {
                              if (uVar3 != 0x613) goto LAB_000cf11e;
                              if ((uVar49 != 0) &&
                                 (*(char *)(DAT_000d3aec + uVar49 * 3 + 0xd369e) != '\x01')) {
                                uVar47 = uVar49 - 1;
                                uVar51 = uVar47 & 7;
                                uVar33 = uVar49;
                                iVar48 = iVar21;
                                if (uVar51 == 0) {
LAB_000d374e:
                                  do {
                                    uVar47 = uVar33 - 1;
                                    if (uVar47 == 0) {
                                      uVar51 = 0;
                                      goto LAB_000d37e6;
                                    }
                                  } while (((((*(char *)(iVar48 + -1) != '\x01') &&
                                             (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')
                                             ) && (uVar47 = uVar33 - 3,
                                                  *(char *)(iVar48 + -7) != '\x01')) &&
                                           ((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01'
                                            && (uVar47 = uVar33 - 5,
                                               *(char *)(iVar48 + -0xd) != '\x01')))) &&
                                          ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01'
                                           && ((uVar47 = uVar33 - 7,
                                               *(char *)(iVar48 + -0x13) != '\x01' &&
                                               (uVar47 = uVar33 - 8,
                                               pcVar30 = (char *)(iVar48 + -0x16), uVar33 = uVar47,
                                               iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))))));
                                }
                                else {
                                  iVar48 = iVar21 + -3;
                                  if (*(char *)(iVar21 + -1) != '\x01') {
                                    uVar33 = uVar47;
                                    if (uVar51 != 1) {
                                      iVar22 = iVar48;
                                      if (uVar51 != 2) {
                                        if (uVar51 != 3) {
                                          if (uVar51 != 4) {
                                            if (uVar51 != 5) {
                                              if (uVar51 != 6) {
                                                iVar22 = iVar21 + -6;
                                                uVar47 = uVar49 - 2;
                                                if (*(char *)(iVar21 + -4) == '\x01')
                                                goto LAB_000d37e4;
                                              }
                                              iVar48 = iVar22 + -3;
                                              uVar47 = uVar47 - 1;
                                              if (*(char *)(iVar22 + -1) == '\x01')
                                              goto LAB_000d37e4;
                                            }
                                            iVar22 = iVar48 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d37e4;
                                          }
                                          iVar48 = iVar22 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d37e4;
                                        }
                                        iVar22 = iVar48 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d37e4;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar33 = uVar47 - 1;
                                      uVar47 = uVar33;
                                      if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d37e4;
                                    }
                                    goto LAB_000d374e;
                                  }
                                }
LAB_000d37e4:
                                uVar51 = uVar47 & 0xffff;
                              }
LAB_000d37e6:
                              *(short *)(iVar26 + 0x30) = (short)uVar51;
                              uVar33 = 0x1ac;
                              goto LAB_000cde5c;
                            }
                            uVar33 = 0x758;
                          }
                          goto LAB_000cd1a0;
                        }
                        if (uVar3 != 0x5fa) {
                          if (uVar3 != 0x5fd) {
                            if (uVar3 != 0x5f9) goto LAB_000cf11e;
                            if ((uVar49 != 0) &&
                               (*(char *)(DAT_000ce268 + uVar49 * 3 + 0xcd7e6) != '\x01')) {
                              uVar47 = uVar49 - 1;
                              uVar51 = uVar47 & 7;
                              uVar33 = uVar49;
                              iVar48 = iVar21;
                              if (uVar51 == 0) {
LAB_000cd896:
                                do {
                                  uVar47 = uVar33 - 1;
                                  if (uVar47 == 0) {
                                    uVar51 = 0;
                                    goto LAB_000cd932;
                                  }
                                } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                          (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01'))
                                         && (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01'))
                                        && (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01'
                                             && (uVar47 = uVar33 - 5,
                                                *(char *)(iVar48 + -0xd) != '\x01')) &&
                                            ((uVar47 = uVar33 - 6,
                                             *(char *)(iVar48 + -0x10) != '\x01' &&
                                             ((uVar47 = uVar33 - 7,
                                              *(char *)(iVar48 + -0x13) != '\x01' &&
                                              (uVar47 = uVar33 - 8,
                                              pcVar30 = (char *)(iVar48 + -0x16), uVar33 = uVar47,
                                              iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))))))));
                              }
                              else {
                                iVar48 = iVar21 + -3;
                                if (*(char *)(iVar21 + -1) != '\x01') {
                                  uVar33 = uVar47;
                                  if (uVar51 != 1) {
                                    iVar22 = iVar48;
                                    if (uVar51 != 2) {
                                      if (uVar51 != 3) {
                                        if (uVar51 != 4) {
                                          if (uVar51 != 5) {
                                            if (uVar51 != 6) {
                                              iVar22 = iVar21 + -6;
                                              uVar47 = uVar49 - 2;
                                              if (*(char *)(iVar21 + -4) == '\x01')
                                              goto LAB_000cd930;
                                            }
                                            iVar48 = iVar22 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cd930;
                                          }
                                          iVar22 = iVar48 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000cd930;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cd930;
                                      }
                                      iVar22 = iVar48 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000cd930;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar33 = uVar47 - 1;
                                    uVar47 = uVar33;
                                    if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cd930;
                                  }
                                  goto LAB_000cd896;
                                }
                              }
LAB_000cd930:
                              uVar51 = uVar47 & 0xffff;
                            }
LAB_000cd932:
                            *(short *)(iVar26 + 0x30) = (short)uVar51;
                            uVar33 = 0x199;
                            goto LAB_000cde5c;
                          }
                          if ((uVar49 != 0) &&
                             (*(char *)(DAT_000d1f00 + uVar49 * 3 + 0xd1516) != '\x01')) {
                            uVar47 = uVar49 - 1;
                            uVar51 = uVar47 & 7;
                            uVar33 = uVar49;
                            iVar48 = iVar21;
                            if (uVar51 == 0) {
LAB_000d15ca:
                              do {
                                uVar47 = uVar33 - 1;
                                if (uVar47 == 0) {
                                  uVar51 = 0;
                                  goto LAB_000d455a;
                                }
                              } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                        (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                       (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                      (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                        (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01'))
                                       && ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01'
                                           && ((uVar47 = uVar33 - 7,
                                               *(char *)(iVar48 + -0x13) != '\x01' &&
                                               (pcVar30 = (char *)(iVar48 + -0x16),
                                               uVar47 = uVar33 - 8, uVar33 = uVar47,
                                               iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))))))));
                            }
                            else {
                              iVar48 = iVar21 + -3;
                              if (*(char *)(iVar21 + -1) != '\x01') {
                                uVar33 = uVar47;
                                if (uVar51 != 1) {
                                  iVar22 = iVar48;
                                  if (uVar51 != 2) {
                                    if (uVar51 != 3) {
                                      if (uVar51 != 4) {
                                        if (uVar51 != 5) {
                                          if (uVar51 != 6) {
                                            iVar22 = iVar21 + -6;
                                            uVar47 = uVar49 - 2;
                                            if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000d1668;
                                          }
                                          iVar48 = iVar22 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d1668;
                                        }
                                        iVar22 = iVar48 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d1668;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d1668;
                                    }
                                    iVar22 = iVar48 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d1668;
                                  }
                                  iVar48 = iVar22 + -3;
                                  uVar33 = uVar47 - 1;
                                  uVar47 = uVar33;
                                  if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d1668;
                                }
                                goto LAB_000d15ca;
                              }
                            }
LAB_000d1668:
                            uVar51 = uVar47 & 0xffff;
                          }
LAB_000d455a:
                          *(short *)(iVar26 + 0x30) = (short)uVar51;
                          uVar33 = 0x19e;
                          goto LAB_000cde5c;
                        }
                        if ((uVar49 != 0) &&
                           (*(char *)(DAT_000d54c8 + uVar49 * 3 + 0xd48ca) != '\x01')) {
                          uVar47 = uVar49 - 1;
                          uVar51 = uVar47 & 7;
                          uVar33 = uVar49;
                          iVar48 = iVar21;
                          if (uVar51 == 0) {
LAB_000d497e:
                            do {
                              uVar47 = uVar33 - 1;
                              if (uVar47 == 0) {
                                uVar51 = 0;
                                goto LAB_000d4a1e;
                              }
                            } while ((((((*(char *)(iVar48 + -1) != '\x01') &&
                                        (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                       (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                      ((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                       (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01'))))
                                     && (uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01'))
                                    && ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01' &&
                                        (uVar47 = uVar33 - 8, pcVar30 = (char *)(iVar48 + -0x16),
                                        uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'
                                        ))));
                          }
                          else {
                            iVar48 = iVar21 + -3;
                            if (*(char *)(iVar21 + -1) != '\x01') {
                              uVar33 = uVar47;
                              if (uVar51 != 1) {
                                iVar22 = iVar48;
                                if (uVar51 != 2) {
                                  if (uVar51 != 3) {
                                    if (uVar51 != 4) {
                                      if (uVar51 != 5) {
                                        if (uVar51 != 6) {
                                          iVar22 = iVar21 + -6;
                                          uVar47 = uVar49 - 2;
                                          if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000d4a1c;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d4a1c;
                                      }
                                      iVar22 = iVar48 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d4a1c;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d4a1c;
                                  }
                                  iVar22 = iVar48 + -3;
                                  uVar47 = uVar47 - 1;
                                  if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d4a1c;
                                }
                                iVar48 = iVar22 + -3;
                                uVar33 = uVar47 - 1;
                                uVar47 = uVar33;
                                if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d4a1c;
                              }
                              goto LAB_000d497e;
                            }
                          }
LAB_000d4a1c:
                          uVar51 = uVar47 & 0xffff;
                        }
LAB_000d4a1e:
                        *(short *)(iVar26 + 0x30) = (short)uVar51;
                        uVar33 = 0x19a;
                        goto LAB_000cde5c;
                      }
                      if ((uVar49 != 0) &&
                         (*(char *)(DAT_000d54cc + uVar49 * 3 + 0xd4a74) != '\x01')) {
                        uVar47 = uVar49 - 1;
                        uVar51 = uVar47 & 7;
                        uVar33 = uVar49;
                        iVar48 = iVar21;
                        if (uVar51 == 0) {
LAB_000d4b28:
                          do {
                            uVar47 = uVar33 - 1;
                            if (uVar47 == 0) {
                              uVar51 = 0;
                              goto LAB_000d4bc4;
                            }
                          } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                    (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                   (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                  (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                    (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01')) &&
                                   ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01' &&
                                    ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01' &&
                                     (pcVar30 = (char *)(iVar48 + -0x16), uVar47 = uVar33 - 8,
                                     uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\x01')))
                                    )))));
                        }
                        else {
                          iVar48 = iVar21 + -3;
                          if (*(char *)(iVar21 + -1) != '\x01') {
                            uVar33 = uVar47;
                            if (uVar51 != 1) {
                              iVar22 = iVar48;
                              if (uVar51 != 2) {
                                if (uVar51 != 3) {
                                  if (uVar51 != 4) {
                                    if (uVar51 != 5) {
                                      if (uVar51 != 6) {
                                        iVar22 = iVar21 + -6;
                                        uVar47 = uVar49 - 2;
                                        if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000d4bc2;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d4bc2;
                                    }
                                    iVar22 = iVar48 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d4bc2;
                                  }
                                  iVar48 = iVar22 + -3;
                                  uVar47 = uVar47 - 1;
                                  if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d4bc2;
                                }
                                iVar22 = iVar48 + -3;
                                uVar47 = uVar47 - 1;
                                if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d4bc2;
                              }
                              iVar48 = iVar22 + -3;
                              uVar33 = uVar47 - 1;
                              uVar47 = uVar33;
                              if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d4bc2;
                            }
                            goto LAB_000d4b28;
                          }
                        }
LAB_000d4bc2:
                        uVar51 = uVar47 & 0xffff;
                      }
LAB_000d4bc4:
                      *(short *)(iVar26 + 0x30) = (short)uVar51;
                      uVar33 = 0x1a6;
                    }
                  }
                  else if (cVar31 == '\b') {
                    if (*(short *)(iVar55 + 0x3c) == 0x60b) {
                      if (uVar49 == 0) {
                        uVar51 = 0;
                        uVar47 = 0;
                      }
                      else if (*(char *)(DAT_000cf7b4 + uVar49 * 3 + 0xcf31e) != '\x01') {
                        uVar47 = uVar49 - 1;
                        uVar51 = uVar47 & 7;
                        uVar33 = uVar49;
                        iVar48 = iVar21;
                        if (uVar51 == 0) {
LAB_000cf3d2:
                          do {
                            uVar47 = uVar33 - 1;
                            if (uVar47 == 0) {
                              uVar51 = 0;
                              goto LAB_000cf476;
                            }
                          } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                    (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                   (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                  (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                    (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01')) &&
                                   ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01' &&
                                    ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01' &&
                                     (uVar47 = uVar33 - 8, pcVar30 = (char *)(iVar48 + -0x16),
                                     uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\x01')))
                                    )))));
                        }
                        else {
                          iVar48 = iVar21 + -3;
                          if (*(char *)(iVar21 + -1) != '\x01') {
                            uVar33 = uVar47;
                            if (uVar51 != 1) {
                              iVar22 = iVar48;
                              if (uVar51 != 2) {
                                if (uVar51 != 3) {
                                  if (uVar51 != 4) {
                                    if (uVar51 != 5) {
                                      if (uVar51 != 6) {
                                        iVar22 = iVar21 + -6;
                                        uVar47 = uVar49 - 2;
                                        if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000cf474;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cf474;
                                    }
                                    iVar22 = iVar48 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000cf474;
                                  }
                                  iVar48 = iVar22 + -3;
                                  uVar47 = uVar47 - 1;
                                  if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cf474;
                                }
                                iVar22 = iVar48 + -3;
                                uVar47 = uVar47 - 1;
                                if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000cf474;
                              }
                              iVar48 = iVar22 + -3;
                              uVar33 = uVar47 - 1;
                              uVar47 = uVar33;
                              if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cf474;
                            }
                            goto LAB_000cf3d2;
                          }
                        }
LAB_000cf474:
                        uVar51 = uVar47 & 0xffff;
                      }
LAB_000cf476:
                      *(short *)(iVar26 + 0x30) = (short)uVar51;
                      uVar33 = 0x693;
                      goto LAB_000cde5c;
                    }
                    if (*(short *)(iVar55 + 0x3c) != 0x926) {
                      uVar33 = 0x92e;
                      goto LAB_000cd1a0;
                    }
                    if ((uVar49 != 0) && (*(char *)(DAT_000ce26c + uVar49 * 3 + 0xcd9a8) != '\x01'))
                    {
                      uVar47 = uVar49 - 1;
                      uVar51 = uVar47 & 7;
                      uVar33 = uVar49;
                      iVar48 = iVar21;
                      if (uVar51 == 0) {
LAB_000cda58:
                        do {
                          uVar47 = uVar33 - 1;
                          if (uVar47 == 0) {
                            uVar51 = 0;
                            goto LAB_000d1dec;
                          }
                        } while ((((((*(char *)(iVar48 + -1) != '\x01') &&
                                    (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                   (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                  ((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                   (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01')))) &&
                                 (uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01')) &&
                                ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01' &&
                                 (pcVar30 = (char *)(iVar48 + -0x16), uVar47 = uVar33 - 8,
                                 uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))));
                      }
                      else {
                        iVar48 = iVar21 + -3;
                        if (*(char *)(iVar21 + -1) != '\x01') {
                          uVar33 = uVar47;
                          if (uVar51 != 1) {
                            iVar22 = iVar48;
                            if (uVar51 != 2) {
                              if (uVar51 != 3) {
                                if (uVar51 != 4) {
                                  if (uVar51 != 5) {
                                    if (uVar51 != 6) {
                                      iVar22 = iVar21 + -6;
                                      uVar47 = uVar49 - 2;
                                      if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000cdaf6;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cdaf6;
                                  }
                                  iVar22 = iVar48 + -3;
                                  uVar47 = uVar47 - 1;
                                  if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000cdaf6;
                                }
                                iVar48 = iVar22 + -3;
                                uVar47 = uVar47 - 1;
                                if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cdaf6;
                              }
                              iVar22 = iVar48 + -3;
                              uVar47 = uVar47 - 1;
                              if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000cdaf6;
                            }
                            iVar48 = iVar22 + -3;
                            uVar33 = uVar47 - 1;
                            uVar47 = uVar33;
                            if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000cdaf6;
                          }
                          goto LAB_000cda58;
                        }
                      }
LAB_000cdaf6:
                      uVar51 = uVar47 & 0xffff;
                    }
LAB_000d1dec:
                    *(short *)(iVar26 + 0x30) = (short)uVar51;
                    uVar33 = 0x758;
                  }
                  else {
                    if (cVar31 != '\t') {
                      if (cVar31 == '\n') {
                        uVar33 = (uint)*(ushort *)(iVar55 + 0x3c);
                        if (uVar33 == 0x5fa) {
                          if ((uVar49 != 0) &&
                             (*(char *)(DAT_000d54d0 + uVar49 * 3 + 0xd4df6) != '\t')) {
                            uVar47 = uVar49 - 1;
                            uVar51 = uVar47 & 7;
                            uVar33 = uVar49;
                            iVar48 = iVar21;
                            if (uVar51 == 0) {
LAB_000d4ef6:
                              do {
                                uVar47 = uVar33 - 1;
                                if (uVar47 == 0) {
                                  uVar51 = 0;
                                  goto LAB_000d4f4e;
                                }
                              } while ((((((*(char *)(iVar48 + -1) != '\t') &&
                                          (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\t')) &&
                                         (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\t')) &&
                                        ((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\t' &&
                                         (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\t'))))
                                       && (uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\t'))
                                      && ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\t' &&
                                          (uVar47 = uVar33 - 8, pcVar30 = (char *)(iVar48 + -0x16),
                                          uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\t'
                                          ))));
                            }
                            else {
                              iVar48 = iVar21 + -3;
                              if (*(char *)(iVar21 + -1) != '\t') {
                                uVar33 = uVar47;
                                if (uVar51 != 1) {
                                  iVar22 = iVar48;
                                  if (uVar51 != 2) {
                                    if (uVar51 != 3) {
                                      if (uVar51 != 4) {
                                        if (uVar51 != 5) {
                                          if (uVar51 != 6) {
                                            iVar22 = iVar21 + -6;
                                            uVar47 = uVar49 - 2;
                                            if (*(char *)(iVar21 + -4) == '\t') goto LAB_000d4f4c;
                                          }
                                          iVar48 = iVar22 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d4f4c;
                                        }
                                        iVar22 = iVar48 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d4f4c;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d4f4c;
                                    }
                                    iVar22 = iVar48 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d4f4c;
                                  }
                                  iVar48 = iVar22 + -3;
                                  uVar33 = uVar47 - 1;
                                  uVar47 = uVar33;
                                  if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d4f4c;
                                }
                                goto LAB_000d4ef6;
                              }
                            }
LAB_000d4f4c:
                            uVar51 = uVar47 & 0xffff;
                          }
LAB_000d4f4e:
                          *(short *)(iVar26 + 0x30) = (short)uVar51;
                          uVar33 = 0x98;
                        }
                        else {
                          if (0x5f9 < uVar33) {
                            if (uVar33 != 0x613) {
                              if (0x613 < uVar33) {
                                if (uVar33 == 0x8a0) {
                                  uVar33 = 0x762;
                                }
                                else {
                                  if (uVar33 != 0x926) goto LAB_000d1176;
                                  uVar33 = 0x7c5;
                                }
                                goto LAB_000cd1a0;
                              }
                              if (uVar33 != 0x5fd) {
                                if (uVar33 != 0x60b) goto LAB_000d1176;
                                if ((uVar49 != 0) &&
                                   (*(char *)(DAT_000cf7b0 + uVar49 * 3 + 0xcf1a0) != '\t')) {
                                  uVar47 = uVar49 - 1;
                                  uVar51 = uVar47 & 7;
                                  uVar33 = uVar49;
                                  iVar48 = iVar21;
                                  if (uVar51 == 0) {
LAB_000cf2b8:
                                    do {
                                      uVar47 = uVar33 - 1;
                                      if (uVar47 == 0) {
                                        uVar51 = 0;
                                        goto LAB_000d5ad8;
                                      }
                                    } while ((((*(char *)(iVar48 + -1) != '\t') &&
                                              (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\t'))
                                             && (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\t'
                                                )) && (((uVar47 = uVar33 - 4,
                                                        *(char *)(iVar48 + -10) != '\t' &&
                                                        (uVar47 = uVar33 - 5,
                                                        *(char *)(iVar48 + -0xd) != '\t')) &&
                                                       ((uVar47 = uVar33 - 6,
                                                        *(char *)(iVar48 + -0x10) != '\t' &&
                                                        ((uVar47 = uVar33 - 7,
                                                         *(char *)(iVar48 + -0x13) != '\t' &&
                                                         (uVar47 = uVar33 - 8,
                                                         pcVar30 = (char *)(iVar48 + -0x16),
                                                         uVar33 = uVar47, iVar48 = iVar48 + -0x18,
                                                         *pcVar30 != '\t'))))))));
                                  }
                                  else {
                                    iVar48 = iVar21 + -3;
                                    if (*(char *)(iVar21 + -1) != '\t') {
                                      uVar33 = uVar47;
                                      if (uVar51 != 1) {
                                        iVar22 = iVar48;
                                        if (uVar51 != 2) {
                                          if (uVar51 != 3) {
                                            if (uVar51 != 4) {
                                              if (uVar51 != 5) {
                                                if (uVar51 != 6) {
                                                  iVar22 = iVar21 + -6;
                                                  uVar47 = uVar49 - 2;
                                                  if (*(char *)(iVar21 + -4) == '\t')
                                                  goto LAB_000d5ad6;
                                                }
                                                iVar48 = iVar22 + -3;
                                                uVar47 = uVar47 - 1;
                                                if (*(char *)(iVar22 + -1) == '\t')
                                                goto LAB_000d5ad6;
                                              }
                                              iVar22 = iVar48 + -3;
                                              uVar47 = uVar47 - 1;
                                              if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d5ad6;
                                            }
                                            iVar48 = iVar22 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d5ad6;
                                          }
                                          iVar22 = iVar48 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d5ad6;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar33 = uVar47 - 1;
                                        uVar47 = uVar33;
                                        if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d5ad6;
                                      }
                                      goto LAB_000cf2b8;
                                    }
                                  }
LAB_000d5ad6:
                                  uVar51 = uVar47 & 0xffff;
                                }
LAB_000d5ad8:
                                *(short *)(iVar26 + 0x30) = (short)uVar51;
                                uVar33 = 0x9f;
                                goto LAB_000cde5c;
                              }
                              if ((uVar49 != 0) &&
                                 (*(char *)(DAT_000d6dd8 + uVar49 * 3 + 0xd68d0) != '\t')) {
                                uVar47 = uVar49 - 1;
                                uVar51 = uVar47 & 7;
                                uVar33 = uVar49;
                                iVar48 = iVar21;
                                if (uVar51 == 0) {
LAB_000d69d6:
                                  do {
                                    uVar47 = uVar33 - 1;
                                    if (uVar47 == 0) {
                                      uVar51 = 0;
                                      goto LAB_000d6a2e;
                                    }
                                  } while ((((*(char *)(iVar48 + -1) != '\t') &&
                                            (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\t'))
                                           && (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\t'))
                                          && (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\t'
                                               && (uVar47 = uVar33 - 5,
                                                  *(char *)(iVar48 + -0xd) != '\t')) &&
                                              ((uVar47 = uVar33 - 6,
                                               *(char *)(iVar48 + -0x10) != '\t' &&
                                               ((uVar47 = uVar33 - 7,
                                                *(char *)(iVar48 + -0x13) != '\t' &&
                                                (pcVar30 = (char *)(iVar48 + -0x16),
                                                uVar47 = uVar33 - 8, uVar33 = uVar47,
                                                iVar48 = iVar48 + -0x18, *pcVar30 != '\t'))))))));
                                }
                                else {
                                  iVar48 = iVar21 + -3;
                                  if (*(char *)(iVar21 + -1) != '\t') {
                                    uVar33 = uVar47;
                                    if (uVar51 != 1) {
                                      iVar22 = iVar48;
                                      if (uVar51 != 2) {
                                        if (uVar51 != 3) {
                                          if (uVar51 != 4) {
                                            if (uVar51 != 5) {
                                              if (uVar51 != 6) {
                                                iVar22 = iVar21 + -6;
                                                uVar47 = uVar49 - 2;
                                                if (*(char *)(iVar21 + -4) == '\t')
                                                goto LAB_000d6a2c;
                                              }
                                              iVar48 = iVar22 + -3;
                                              uVar47 = uVar47 - 1;
                                              if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d6a2c;
                                            }
                                            iVar22 = iVar48 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d6a2c;
                                          }
                                          iVar48 = iVar22 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d6a2c;
                                        }
                                        iVar22 = iVar48 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d6a2c;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar33 = uVar47 - 1;
                                      uVar47 = uVar33;
                                      if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d6a2c;
                                    }
                                    goto LAB_000d69d6;
                                  }
                                }
LAB_000d6a2c:
                                uVar51 = uVar47 & 0xffff;
                              }
LAB_000d6a2e:
                              *(short *)(iVar26 + 0x30) = (short)uVar51;
                              uVar33 = 0x9b;
                              goto LAB_000cde5c;
                            }
                            if ((uVar49 != 0) &&
                               (*(char *)(DAT_000d6dd4 + uVar49 * 3 + 0xd674e) != '\t')) {
                              uVar47 = uVar49 - 1;
                              uVar51 = uVar47 & 7;
                              uVar33 = uVar49;
                              iVar48 = iVar21;
                              if (uVar51 == 0) {
LAB_000d685a:
                                do {
                                  uVar47 = uVar33 - 1;
                                  if (uVar47 == 0) {
                                    uVar51 = 0;
                                    goto LAB_000d68b2;
                                  }
                                } while (((((*(char *)(iVar48 + -1) != '\t') &&
                                           (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\t')) &&
                                          (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\t')) &&
                                         ((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\t' &&
                                          (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\t'))))
                                        && ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\t'
                                            && ((uVar47 = uVar33 - 7,
                                                *(char *)(iVar48 + -0x13) != '\t' &&
                                                (uVar47 = uVar33 - 8,
                                                pcVar30 = (char *)(iVar48 + -0x16), uVar33 = uVar47,
                                                iVar48 = iVar48 + -0x18, *pcVar30 != '\t'))))));
                              }
                              else {
                                iVar48 = iVar21 + -3;
                                if (*(char *)(iVar21 + -1) != '\t') {
                                  uVar33 = uVar47;
                                  if (uVar51 != 1) {
                                    iVar22 = iVar48;
                                    if (uVar51 != 2) {
                                      if (uVar51 != 3) {
                                        if (uVar51 != 4) {
                                          if (uVar51 != 5) {
                                            if (uVar51 != 6) {
                                              iVar22 = iVar21 + -6;
                                              uVar47 = uVar49 - 2;
                                              if (*(char *)(iVar21 + -4) == '\t') goto LAB_000d68b0;
                                            }
                                            iVar48 = iVar22 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d68b0;
                                          }
                                          iVar22 = iVar48 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d68b0;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d68b0;
                                      }
                                      iVar22 = iVar48 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d68b0;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar33 = uVar47 - 1;
                                    uVar47 = uVar33;
                                    if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d68b0;
                                  }
                                  goto LAB_000d685a;
                                }
                              }
LAB_000d68b0:
                              uVar51 = uVar47 & 0xffff;
                            }
LAB_000d68b2:
                            *(short *)(iVar26 + 0x30) = (short)uVar51;
                            uVar33 = 0xa6;
                            goto LAB_000cde5c;
                          }
                          if (uVar33 != 0x582) {
                            if (uVar33 < 0x583) {
                              if (uVar33 != 0x549) {
                                if (uVar33 != 0x571) goto LAB_000d1176;
                                if ((uVar49 != 0) &&
                                   (*(char *)(DAT_000d1ef8 + uVar49 * 3 + 0xd11e8) != '\t')) {
                                  uVar47 = uVar49 - 1;
                                  uVar51 = uVar47 & 7;
                                  uVar33 = uVar49;
                                  iVar48 = iVar21;
                                  if (uVar51 == 0) {
LAB_000d1304:
                                    do {
                                      uVar47 = uVar33 - 1;
                                      if (uVar47 == 0) {
                                        uVar51 = 0;
                                        goto LAB_000d6bfe;
                                      }
                                    } while ((((*(char *)(iVar48 + -1) != '\t') &&
                                              (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\t'))
                                             && (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\t'
                                                )) && (((uVar47 = uVar33 - 4,
                                                        *(char *)(iVar48 + -10) != '\t' &&
                                                        (uVar47 = uVar33 - 5,
                                                        *(char *)(iVar48 + -0xd) != '\t')) &&
                                                       ((uVar47 = uVar33 - 6,
                                                        *(char *)(iVar48 + -0x10) != '\t' &&
                                                        ((uVar47 = uVar33 - 7,
                                                         *(char *)(iVar48 + -0x13) != '\t' &&
                                                         (pcVar30 = (char *)(iVar48 + -0x16),
                                                         uVar47 = uVar33 - 8, uVar33 = uVar47,
                                                         iVar48 = iVar48 + -0x18, *pcVar30 != '\t'))
                                                        ))))));
                                  }
                                  else {
                                    iVar48 = iVar21 + -3;
                                    if (*(char *)(iVar21 + -1) != '\t') {
                                      uVar33 = uVar47;
                                      if (uVar51 != 1) {
                                        iVar22 = iVar48;
                                        if (uVar51 != 2) {
                                          if (uVar51 != 3) {
                                            if (uVar51 != 4) {
                                              if (uVar51 != 5) {
                                                if (uVar51 != 6) {
                                                  iVar22 = iVar21 + -6;
                                                  uVar47 = uVar49 - 2;
                                                  if (*(char *)(iVar21 + -4) == '\t')
                                                  goto LAB_000d6bfc;
                                                }
                                                iVar48 = iVar22 + -3;
                                                uVar47 = uVar47 - 1;
                                                if (*(char *)(iVar22 + -1) == '\t')
                                                goto LAB_000d6bfc;
                                              }
                                              iVar22 = iVar48 + -3;
                                              uVar47 = uVar47 - 1;
                                              if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d6bfc;
                                            }
                                            iVar48 = iVar22 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d6bfc;
                                          }
                                          iVar22 = iVar48 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d6bfc;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar33 = uVar47 - 1;
                                        uVar47 = uVar33;
                                        if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d6bfc;
                                      }
                                      goto LAB_000d1304;
                                    }
                                  }
LAB_000d6bfc:
                                  uVar51 = uVar47 & 0xffff;
                                }
LAB_000d6bfe:
                                *(short *)(iVar26 + 0x30) = (short)uVar51;
                                uVar33 = 0x24;
                                goto LAB_000cde5c;
                              }
                              if ((uVar49 != 0) &&
                                 (*(char *)(DAT_000d6df8 + uVar49 * 3 + 0xd6c20) != '\t')) {
                                uVar47 = uVar49 - 1;
                                uVar51 = uVar47 & 7;
                                uVar33 = uVar49;
                                iVar48 = iVar21;
                                if (uVar51 == 0) {
LAB_000d6d2a:
                                  do {
                                    uVar47 = uVar33 - 1;
                                    if (uVar47 == 0) {
                                      uVar51 = 0;
                                      goto LAB_000d6d82;
                                    }
                                  } while ((((*(char *)(iVar48 + -1) != '\t') &&
                                            (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\t'))
                                           && (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\t'))
                                          && (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\t'
                                               && (uVar47 = uVar33 - 5,
                                                  *(char *)(iVar48 + -0xd) != '\t')) &&
                                              ((uVar47 = uVar33 - 6,
                                               *(char *)(iVar48 + -0x10) != '\t' &&
                                               ((uVar47 = uVar33 - 7,
                                                *(char *)(iVar48 + -0x13) != '\t' &&
                                                (uVar47 = uVar33 - 8,
                                                pcVar30 = (char *)(iVar48 + -0x16), uVar33 = uVar47,
                                                iVar48 = iVar48 + -0x18, *pcVar30 != '\t'))))))));
                                }
                                else {
                                  iVar48 = iVar21 + -3;
                                  if (*(char *)(iVar21 + -1) != '\t') {
                                    uVar33 = uVar47;
                                    if (uVar51 != 1) {
                                      iVar22 = iVar48;
                                      if (uVar51 != 2) {
                                        if (uVar51 != 3) {
                                          if (uVar51 != 4) {
                                            if (uVar51 != 5) {
                                              if (uVar51 != 6) {
                                                iVar22 = iVar21 + -6;
                                                uVar47 = uVar49 - 2;
                                                if (*(char *)(iVar21 + -4) == '\t')
                                                goto LAB_000d6d80;
                                              }
                                              iVar48 = iVar22 + -3;
                                              uVar47 = uVar47 - 1;
                                              if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d6d80;
                                            }
                                            iVar22 = iVar48 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d6d80;
                                          }
                                          iVar48 = iVar22 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d6d80;
                                        }
                                        iVar22 = iVar48 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d6d80;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar33 = uVar47 - 1;
                                      uVar47 = uVar33;
                                      if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d6d80;
                                    }
                                    goto LAB_000d6d2a;
                                  }
                                }
LAB_000d6d80:
                                uVar51 = uVar47 & 0xffff;
                              }
LAB_000d6d82:
                              *(short *)(iVar26 + 0x30) = (short)uVar51;
                              uVar33 = 0;
                              goto LAB_000cde5c;
                            }
                            if (uVar33 != 0x5f7) {
                              if (uVar33 != 0x5f9) {
LAB_000d1176:
                                if (*(char *)(DAT_000d11c0 + 0xd1182 + uVar33 * 3) == '\n') {
                                  FUN_000cc614(puVar52,9);
                                  uVar51 = (uint)*puVar52;
                                  uVar33 = 0x92e;
                                  uVar47 = uVar51;
                                  goto LAB_000cde5c;
                                }
                                uVar33 = 0x92e;
                                goto LAB_000cd1a0;
                              }
                              if ((uVar49 != 0) &&
                                 (*(char *)(DAT_000ce280 + uVar49 * 3 + 0xce0c4) != '\t')) {
                                uVar47 = uVar49 - 1;
                                uVar51 = uVar47 & 7;
                                uVar33 = uVar49;
                                iVar48 = iVar21;
                                if (uVar51 == 0) {
LAB_000ce1de:
                                  do {
                                    uVar47 = uVar33 - 1;
                                    if (uVar47 == 0) {
                                      uVar51 = 0;
                                      goto LAB_000d53f4;
                                    }
                                  } while (((((*(char *)(iVar48 + -1) != '\t') &&
                                             (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\t'))
                                            && (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\t')
                                            ) && ((uVar47 = uVar33 - 4,
                                                  *(char *)(iVar48 + -10) != '\t' &&
                                                  (uVar47 = uVar33 - 5,
                                                  *(char *)(iVar48 + -0xd) != '\t')))) &&
                                          ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\t'
                                           && ((uVar47 = uVar33 - 7,
                                               *(char *)(iVar48 + -0x13) != '\t' &&
                                               (uVar47 = uVar33 - 8,
                                               pcVar30 = (char *)(iVar48 + -0x16), uVar33 = uVar47,
                                               iVar48 = iVar48 + -0x18, *pcVar30 != '\t'))))));
                                }
                                else {
                                  iVar48 = iVar21 + -3;
                                  if (*(char *)(iVar21 + -1) != '\t') {
                                    uVar33 = uVar47;
                                    if (uVar51 != 1) {
                                      iVar22 = iVar48;
                                      if (uVar51 != 2) {
                                        if (uVar51 != 3) {
                                          if (uVar51 != 4) {
                                            if (uVar51 != 5) {
                                              if (uVar51 != 6) {
                                                iVar22 = iVar21 + -6;
                                                uVar47 = uVar49 - 2;
                                                if (*(char *)(iVar21 + -4) == '\t')
                                                goto LAB_000d53f2;
                                              }
                                              iVar48 = iVar22 + -3;
                                              uVar47 = uVar47 - 1;
                                              if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d53f2;
                                            }
                                            iVar22 = iVar48 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d53f2;
                                          }
                                          iVar48 = iVar22 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d53f2;
                                        }
                                        iVar22 = iVar48 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d53f2;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar33 = uVar47 - 1;
                                      uVar47 = uVar33;
                                      if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d53f2;
                                    }
                                    goto LAB_000ce1de;
                                  }
                                }
LAB_000d53f2:
                                uVar51 = uVar47 & 0xffff;
                              }
LAB_000d53f4:
                              *(short *)(iVar26 + 0x30) = (short)uVar51;
                              uVar33 = 0x96;
                              goto LAB_000cde5c;
                            }
                            if ((uVar49 != 0) &&
                               (*(char *)(DAT_000d6278 + uVar49 * 3 + 0xd5720) != '\t')) {
                              uVar47 = uVar49 - 1;
                              uVar51 = uVar47 & 7;
                              uVar33 = uVar49;
                              iVar48 = iVar21;
                              if (uVar51 == 0) {
LAB_000d5826:
                                do {
                                  uVar47 = uVar33 - 1;
                                  if (uVar47 == 0) {
                                    uVar51 = 0;
                                    goto LAB_000d587e;
                                  }
                                } while ((((*(char *)(iVar48 + -1) != '\t') &&
                                          (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\t')) &&
                                         (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\t')) &&
                                        (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\t' &&
                                          (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\t'))
                                         && ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\t'
                                             && ((uVar47 = uVar33 - 7,
                                                 *(char *)(iVar48 + -0x13) != '\t' &&
                                                 (pcVar30 = (char *)(iVar48 + -0x16),
                                                 uVar47 = uVar33 - 8, uVar33 = uVar47,
                                                 iVar48 = iVar48 + -0x18, *pcVar30 != '\t'))))))));
                              }
                              else {
                                iVar48 = iVar21 + -3;
                                if (*(char *)(iVar21 + -1) != '\t') {
                                  uVar33 = uVar47;
                                  if (uVar51 != 1) {
                                    iVar22 = iVar48;
                                    if (uVar51 != 2) {
                                      if (uVar51 != 3) {
                                        if (uVar51 != 4) {
                                          if (uVar51 != 5) {
                                            if (uVar51 != 6) {
                                              iVar22 = iVar21 + -6;
                                              uVar47 = uVar49 - 2;
                                              if (*(char *)(iVar21 + -4) == '\t') goto LAB_000d587c;
                                            }
                                            iVar48 = iVar22 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d587c;
                                          }
                                          iVar22 = iVar48 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d587c;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d587c;
                                      }
                                      iVar22 = iVar48 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d587c;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar33 = uVar47 - 1;
                                    uVar47 = uVar33;
                                    if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d587c;
                                  }
                                  goto LAB_000d5826;
                                }
                              }
LAB_000d587c:
                              uVar51 = uVar47 & 0xffff;
                            }
LAB_000d587e:
                            *(short *)(iVar26 + 0x30) = (short)uVar51;
                            uVar33 = 0x94;
                            goto LAB_000cde5c;
                          }
                          if ((uVar49 != 0) &&
                             (*(char *)(DAT_000d627c + uVar49 * 3 + 0xd589c) != '\t')) {
                            uVar47 = uVar49 - 1;
                            uVar51 = uVar47 & 7;
                            uVar33 = uVar49;
                            iVar48 = iVar21;
                            if (uVar51 == 0) {
LAB_000d59a6:
                              do {
                                uVar47 = uVar33 - 1;
                                if (uVar47 == 0) {
                                  uVar51 = 0;
                                  goto LAB_000d59fe;
                                }
                              } while ((((*(char *)(iVar48 + -1) != '\t') &&
                                        (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\t')) &&
                                       (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\t')) &&
                                      (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\t' &&
                                        (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\t')) &&
                                       ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\t' &&
                                        ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\t' &&
                                         (uVar47 = uVar33 - 8, pcVar30 = (char *)(iVar48 + -0x16),
                                         uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\t')
                                         )))))));
                            }
                            else {
                              iVar48 = iVar21 + -3;
                              if (*(char *)(iVar21 + -1) != '\t') {
                                uVar33 = uVar47;
                                if (uVar51 != 1) {
                                  iVar22 = iVar48;
                                  if (uVar51 != 2) {
                                    if (uVar51 != 3) {
                                      if (uVar51 != 4) {
                                        if (uVar51 != 5) {
                                          if (uVar51 != 6) {
                                            iVar22 = iVar21 + -6;
                                            uVar47 = uVar49 - 2;
                                            if (*(char *)(iVar21 + -4) == '\t') goto LAB_000d59fc;
                                          }
                                          iVar48 = iVar22 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d59fc;
                                        }
                                        iVar22 = iVar48 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d59fc;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d59fc;
                                    }
                                    iVar22 = iVar48 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d59fc;
                                  }
                                  iVar48 = iVar22 + -3;
                                  uVar33 = uVar47 - 1;
                                  uVar47 = uVar33;
                                  if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d59fc;
                                }
                                goto LAB_000d59a6;
                              }
                            }
LAB_000d59fc:
                            uVar51 = uVar47 & 0xffff;
                          }
LAB_000d59fe:
                          *(short *)(iVar26 + 0x30) = (short)uVar51;
                          uVar33 = 0x33;
                        }
                      }
                      else {
                        if (cVar31 != '\v') {
                          if (cVar31 == '\f') {
                            uVar33 = (uint)*(ushort *)(iVar55 + 0x3c);
                            if (uVar33 == 0x5fa) {
                              uVar33 = 0x3f8;
                            }
                            else if (uVar33 < 0x5fb) {
                              if (uVar33 == 0x582) {
                                uVar33 = 0x3ae;
                              }
                              else if (uVar33 < 0x583) {
                                if (uVar33 == 0x549) {
                                  uVar33 = 0x386;
                                }
                                else if (uVar33 == 0x571) {
                                  uVar33 = 0x3a3;
                                }
                                else {
LAB_000d04bc:
                                  if (uVar49 == 0x38f) {
                                    if (*(char *)(DAT_000d54e8 + 0xd548a + uVar33 * 3) != '\x15') {
                                      uVar51 = 0x391;
                                      uVar33 = 0x92e;
                                      *puVar52 = 0x391;
                                      uVar47 = uVar51;
                                      goto LAB_000cde5c;
                                    }
                                    uVar33 = 0x92e;
                                  }
                                  else {
                                    cVar31 = *(char *)(DAT_000d11a8 + 0xd04d2 + uVar33 * 3);
                                    if (cVar31 == '\f' || cVar31 == '\x10') {
                                      if ((uVar49 == 0) ||
                                         (*(char *)(DAT_000d11a8 + 0xd04d2 + uVar49 * 3 + 2) ==
                                          '\x11')) {
LAB_000d546a:
                                        *(short *)(iVar26 + 0x30) = (short)uVar51;
                                        uVar33 = 0x92e;
                                        goto LAB_000cde5c;
                                      }
                                      uVar47 = uVar49 + 1;
                                      if (uVar47 < 0x92e) {
                                        uVar51 = ~uVar47 + 0x92e & 7;
                                        if (*(char *)(iVar21 + 5) == '\x11') {
LAB_000d5468:
                                          uVar51 = uVar47 & 0xffff;
                                          goto LAB_000d546a;
                                        }
                                        uVar33 = uVar49 + 2;
                                        iVar48 = iVar21 + 3;
                                        if (uVar33 != 0x92e) {
                                          if (uVar51 != 0) {
                                            if (uVar51 != 1) {
                                              if (uVar51 != 2) {
                                                if (uVar51 != 3) {
                                                  if (uVar51 != 4) {
                                                    if (uVar51 != 5) {
                                                      if (uVar51 != 6) {
                                                        uVar47 = uVar33;
                                                        if (*(char *)(iVar21 + 8) == '\x11')
                                                        goto LAB_000d5468;
                                                        uVar33 = uVar49 + 3;
                                                        iVar48 = iVar21 + 6;
                                                      }
                                                      uVar47 = uVar33;
                                                      if (*(char *)(iVar48 + 5) == '\x11')
                                                      goto LAB_000d5468;
                                                      uVar33 = uVar33 + 1;
                                                      iVar48 = iVar48 + 3;
                                                    }
                                                    uVar47 = uVar33;
                                                    if (*(char *)(iVar48 + 5) == '\x11')
                                                    goto LAB_000d5468;
                                                    uVar33 = uVar33 + 1;
                                                    iVar48 = iVar48 + 3;
                                                  }
                                                  uVar47 = uVar33;
                                                  if (*(char *)(iVar48 + 5) == '\x11')
                                                  goto LAB_000d5468;
                                                  uVar33 = uVar33 + 1;
                                                  iVar48 = iVar48 + 3;
                                                }
                                                uVar47 = uVar33;
                                                if (*(char *)(iVar48 + 5) == '\x11')
                                                goto LAB_000d5468;
                                                uVar33 = uVar33 + 1;
                                                iVar48 = iVar48 + 3;
                                              }
                                              uVar47 = uVar33;
                                              if (*(char *)(iVar48 + 5) == '\x11')
                                              goto LAB_000d5468;
                                              uVar33 = uVar33 + 1;
                                              iVar48 = iVar48 + 3;
                                            }
                                            uVar47 = uVar33;
                                            if (*(char *)(iVar48 + 5) == '\x11') goto LAB_000d5468;
                                            uVar33 = uVar33 + 1;
                                            iVar48 = iVar48 + 3;
                                            if (uVar33 == 0x92e) goto LAB_000cd1a0;
                                          }
                                          do {
                                            uVar47 = uVar33;
                                            if ((((*(char *)(iVar48 + 5) == '\x11') ||
                                                 (uVar47 = uVar33 + 1,
                                                 *(char *)(iVar48 + 8) == '\x11')) ||
                                                (uVar47 = uVar33 + 2,
                                                *(char *)(iVar48 + 0xb) == '\x11')) ||
                                               (((uVar47 = uVar33 + 3,
                                                 *(char *)(iVar48 + 0xe) == '\x11' ||
                                                 (uVar47 = uVar33 + 4,
                                                 *(char *)(iVar48 + 0x11) == '\x11')) ||
                                                ((uVar47 = uVar33 + 5,
                                                 *(char *)(iVar48 + 0x14) == '\x11' ||
                                                 ((uVar47 = uVar33 + 6,
                                                  *(char *)(iVar48 + 0x17) == '\x11' ||
                                                  (uVar47 = uVar33 + 7,
                                                  *(char *)(iVar48 + 0x1a) == '\x11'))))))))
                                            goto LAB_000d5468;
                                            uVar33 = uVar33 + 8;
                                            iVar48 = iVar48 + 0x18;
                                          } while (uVar33 != 0x92e);
                                          uVar33 = 0x92e;
                                        }
                                      }
                                      else {
                                        uVar33 = 0x92e;
                                      }
                                    }
                                    else {
                                      uVar33 = 0x92e;
                                    }
                                  }
                                }
                              }
                              else if (uVar33 == 0x5f7) {
                                uVar33 = 0x3f5;
                              }
                              else {
                                if (uVar33 != 0x5f9) goto LAB_000d04bc;
                                uVar33 = 0x3f7;
                              }
                            }
                            else if (uVar33 == 0x613) {
                              uVar33 = 0x402;
                            }
                            else if (uVar33 < 0x614) {
                              if (uVar33 == 0x5fd) {
                                uVar33 = 0x3fa;
                              }
                              else {
                                if (uVar33 != 0x60b) goto LAB_000d04bc;
                                uVar33 = 0x3fc;
                              }
                            }
                            else if (uVar33 == 0x8a0) {
                              uVar33 = 0x837;
                            }
                            else {
                              if (uVar33 != 0x926) goto LAB_000d04bc;
                              uVar33 = 0x898;
                            }
                          }
                          else if (cVar31 == '\r') {
                            uVar3 = *(ushort *)(iVar55 + 0x3c);
                            if (uVar3 == 0x5f9) {
                              uVar33 = 0x537;
                            }
                            else if (uVar3 < 0x5fa) {
                              if (uVar3 == 0x571) {
                                uVar33 = 0x506;
                              }
                              else if (uVar3 < 0x572) {
                                if (uVar3 != 0x549) goto LAB_000cf6c6;
                                uVar33 = 0x4f3;
                              }
                              else if (uVar3 == 0x582) {
                                uVar33 = 0x50f;
                              }
                              else {
                                if (uVar3 != 0x5f7) goto LAB_000cf6c6;
                                uVar33 = 0x535;
                              }
                            }
                            else if (uVar3 == 0x5fd) {
                              uVar33 = 0x53c;
                            }
                            else if (uVar3 < 0x5fe) {
                              if (uVar3 == 0x5fa) {
                                uVar33 = 0x538;
                              }
                              else {
LAB_000cf6c6:
                                uVar33 = 0x92e;
                              }
                            }
                            else if (uVar3 == 0x60b) {
                              uVar33 = 0x541;
                            }
                            else {
                              if (uVar3 != 0x613) goto LAB_000cf6c6;
                              uVar33 = 0x546;
                            }
                          }
                          else if (cVar31 == '\x0e') {
                            uVar3 = *(ushort *)(iVar55 + 0x3c);
                            if (uVar3 == 0x549) {
                              uVar33 = 0x7cd;
                            }
                            else if (uVar3 < 0x54a) {
                              if (uVar3 == 299) {
                                uVar33 = 0x28a;
                              }
                              else if (uVar3 < 300) {
                                if (uVar3 == 0x126) {
                                  uVar33 = 0x288;
                                }
                                else if (uVar3 == 0x128) {
                                  uVar33 = 0x289;
                                }
                                else {
                                  if (uVar3 != 0x123) goto LAB_000d021c;
                                  uVar33 = 0x286;
                                }
                              }
                              else if (uVar3 == 0x14a) {
                                uVar33 = 0x2a4;
                              }
                              else if (uVar3 < 0x14b) {
                                if (uVar3 != 0x138) goto LAB_000d021c;
                                uVar33 = 0x296;
                              }
                              else if (uVar3 == 0x150) {
                                uVar33 = 0x2aa;
                              }
                              else {
                                if (uVar3 != 0x199) goto LAB_000d021c;
                                uVar33 = 0x2f4;
                              }
                            }
                            else if (uVar3 == 0x5f9) {
                              uVar33 = 0x823;
                            }
                            else if (uVar3 < 0x5fa) {
                              if (uVar3 == 0x582) {
                                uVar33 = 0x7ec;
                              }
                              else if (uVar3 == 0x5f7) {
                                uVar33 = 0x821;
                              }
                              else {
                                if (uVar3 != 0x571) goto LAB_000d021c;
                                uVar33 = 0x7e2;
                              }
                            }
                            else if (uVar3 == 0x5fd) {
                              uVar33 = 0x828;
                            }
                            else if (uVar3 < 0x5fe) {
                              if (uVar3 == 0x5fa) {
                                uVar33 = 0x825;
                              }
                              else {
LAB_000d021c:
                                uVar33 = 0x92e;
                              }
                            }
                            else if (uVar3 == 0x60b) {
                              uVar33 = 0x758;
                            }
                            else {
                              if (uVar3 != 0x613) goto LAB_000d021c;
                              uVar33 = 0x75f;
                            }
                          }
                          else {
                            if (cVar31 == '\x0f') {
                              uVar33 = (uint)*(ushort *)(iVar55 + 0x3c);
                              if (uVar33 == 0x5f9) {
                                FUN_000cc614(puVar52,9);
                                uVar51 = (uint)*puVar52;
                                uVar33 = 0x893;
                                uVar47 = uVar51;
                              }
                              else if (uVar33 < 0x5fa) {
                                if (uVar33 == 0x571) {
                                  FUN_000cc614(puVar52,9);
                                  uVar51 = (uint)*puVar52;
                                  uVar33 = 0x84e;
                                  uVar47 = uVar51;
                                }
                                else if (uVar33 < 0x572) {
                                  if (uVar33 != 0x549) {
LAB_000d54ec:
                                    cVar31 = *(char *)(DAT_000d6274 + 0xd54f8 + uVar33 * 3);
                                    if (cVar31 == '\f' || cVar31 == '\x10') {
                                      if ((uVar49 == 0) ||
                                         (*(char *)(DAT_000d6274 + 0xd54f8 + uVar49 * 3 + 2) ==
                                          '\x11')) {
LAB_000d56b6:
                                        *(short *)(iVar26 + 0x30) = (short)uVar51;
                                        uVar33 = 0x92e;
                                        goto LAB_000cde5c;
                                      }
                                      uVar47 = uVar49 + 1;
                                      if (uVar47 < 0x92e) {
                                        uVar51 = ~uVar47 + 0x92e & 7;
                                        if (*(char *)(iVar21 + 5) == '\x11') {
LAB_000d56b4:
                                          uVar51 = uVar47 & 0xffff;
                                          goto LAB_000d56b6;
                                        }
                                        uVar33 = uVar49 + 2;
                                        iVar48 = iVar21 + 3;
                                        if (uVar33 != 0x92e) {
                                          if (uVar51 != 0) {
                                            if (uVar51 != 1) {
                                              if (uVar51 != 2) {
                                                if (uVar51 != 3) {
                                                  if (uVar51 != 4) {
                                                    if (uVar51 != 5) {
                                                      if (uVar51 != 6) {
                                                        uVar47 = uVar33;
                                                        if (*(char *)(iVar21 + 8) == '\x11')
                                                        goto LAB_000d56b4;
                                                        uVar33 = uVar49 + 3;
                                                        iVar48 = iVar21 + 6;
                                                      }
                                                      uVar47 = uVar33;
                                                      if (*(char *)(iVar48 + 5) == '\x11')
                                                      goto LAB_000d56b4;
                                                      uVar33 = uVar33 + 1;
                                                      iVar48 = iVar48 + 3;
                                                    }
                                                    uVar47 = uVar33;
                                                    if (*(char *)(iVar48 + 5) == '\x11')
                                                    goto LAB_000d56b4;
                                                    uVar33 = uVar33 + 1;
                                                    iVar48 = iVar48 + 3;
                                                  }
                                                  uVar47 = uVar33;
                                                  if (*(char *)(iVar48 + 5) == '\x11')
                                                  goto LAB_000d56b4;
                                                  uVar33 = uVar33 + 1;
                                                  iVar48 = iVar48 + 3;
                                                }
                                                uVar47 = uVar33;
                                                if (*(char *)(iVar48 + 5) == '\x11')
                                                goto LAB_000d56b4;
                                                uVar33 = uVar33 + 1;
                                                iVar48 = iVar48 + 3;
                                              }
                                              uVar47 = uVar33;
                                              if (*(char *)(iVar48 + 5) == '\x11')
                                              goto LAB_000d56b4;
                                              uVar33 = uVar33 + 1;
                                              iVar48 = iVar48 + 3;
                                            }
                                            uVar47 = uVar33;
                                            if (*(char *)(iVar48 + 5) == '\x11') goto LAB_000d56b4;
                                            uVar33 = uVar33 + 1;
                                            iVar48 = iVar48 + 3;
                                            if (uVar33 == 0x92e) goto LAB_000cd1a0;
                                          }
                                          do {
                                            uVar47 = uVar33;
                                            if ((((*(char *)(iVar48 + 5) == '\x11') ||
                                                 (uVar47 = uVar33 + 1,
                                                 *(char *)(iVar48 + 8) == '\x11')) ||
                                                (uVar47 = uVar33 + 2,
                                                *(char *)(iVar48 + 0xb) == '\x11')) ||
                                               (((uVar47 = uVar33 + 3,
                                                 *(char *)(iVar48 + 0xe) == '\x11' ||
                                                 (uVar47 = uVar33 + 4,
                                                 *(char *)(iVar48 + 0x11) == '\x11')) ||
                                                ((uVar47 = uVar33 + 5,
                                                 *(char *)(iVar48 + 0x14) == '\x11' ||
                                                 ((uVar47 = uVar33 + 6,
                                                  *(char *)(iVar48 + 0x17) == '\x11' ||
                                                  (uVar47 = uVar33 + 7,
                                                  *(char *)(iVar48 + 0x1a) == '\x11'))))))))
                                            goto LAB_000d56b4;
                                            uVar33 = uVar33 + 8;
                                            iVar48 = iVar48 + 0x18;
                                          } while (uVar33 != 0x92e);
                                          uVar33 = 0x92e;
                                        }
                                      }
                                      else {
                                        uVar33 = 0x92e;
                                      }
                                    }
                                    else {
                                      uVar33 = 0x92e;
                                    }
                                    goto LAB_000cd1a0;
                                  }
                                  FUN_000cc614(puVar52,9);
                                  uVar51 = (uint)*puVar52;
                                  uVar33 = 0x837;
                                  uVar47 = uVar51;
                                }
                                else if (uVar33 == 0x582) {
                                  FUN_000cc614(puVar52,9);
                                  uVar51 = (uint)*puVar52;
                                  uVar33 = 0x857;
                                  uVar47 = uVar51;
                                }
                                else {
                                  if (uVar33 != 0x5f7) goto LAB_000d54ec;
                                  FUN_000cc614(puVar52,9);
                                  uVar51 = (uint)*puVar52;
                                  uVar33 = 0x892;
                                  uVar47 = uVar51;
                                }
                              }
                              else if (uVar33 == 0x5fd) {
                                FUN_000cc614(puVar52,9);
                                uVar51 = (uint)*puVar52;
                                uVar33 = 0x896;
                                uVar47 = uVar51;
                              }
                              else if (uVar33 < 0x5fe) {
                                if (uVar33 != 0x5fa) goto LAB_000d54ec;
                                FUN_000cc614(puVar52,9);
                                uVar51 = (uint)*puVar52;
                                uVar33 = 0x894;
                                uVar47 = uVar51;
                              }
                              else if (uVar33 == 0x60b) {
                                FUN_000cc614(puVar52,9);
                                uVar51 = (uint)*puVar52;
                                uVar33 = 0x898;
                                uVar47 = uVar51;
                              }
                              else {
                                if (uVar33 != 0x613) goto LAB_000d54ec;
                                FUN_000cc614(puVar52,9);
                                uVar51 = (uint)*puVar52;
                                uVar33 = 0x89d;
                                uVar47 = uVar51;
                              }
                              goto LAB_000cde5c;
                            }
                            if (cVar31 == '\x10') {
                              uVar3 = *(ushort *)(iVar55 + 0x3c);
                              if (uVar3 == 0x1cf) {
                                uVar33 = 0x7e4;
                              }
                              else {
                                if (0x1cf < uVar3) {
                                  if (uVar3 == 0x5fa) {
                                    FUN_000cc614(puVar52,1);
                                    uVar51 = (uint)*puVar52;
                                    uVar33 = 0x2f5;
                                    uVar47 = uVar51;
                                  }
                                  else if (uVar3 < 0x5fb) {
                                    if (uVar3 == 0x582) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x2aa;
                                      uVar47 = uVar51;
                                    }
                                    else if (uVar3 < 0x583) {
                                      if (uVar3 == 0x549) {
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x286;
                                        uVar47 = uVar51;
                                      }
                                      else {
                                        if (uVar3 != 0x571) goto LAB_000d1e74;
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x2a0;
                                        uVar47 = uVar51;
                                      }
                                    }
                                    else if (uVar3 == 0x5f7) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x2f2;
                                      uVar47 = uVar51;
                                    }
                                    else {
                                      if (uVar3 != 0x5f9) goto LAB_000d1e74;
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x2f4;
                                      uVar47 = uVar51;
                                    }
                                  }
                                  else if (uVar3 == 0x613) {
                                    FUN_000cc614(puVar52,1);
                                    uVar51 = (uint)*puVar52;
                                    uVar33 = 0x302;
                                    uVar47 = uVar51;
                                  }
                                  else {
                                    if (0x613 < uVar3) {
                                      if (uVar3 == 0x619) {
                                        uVar33 = 0x6f2;
                                      }
                                      else {
                                        if (uVar3 != 0x693) goto LAB_000d1e74;
                                        uVar33 = 0x758;
                                      }
                                      goto LAB_000cd1a0;
                                    }
                                    if (uVar3 == 0x5fd) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x2f7;
                                      uVar47 = uVar51;
                                    }
                                    else {
                                      if (uVar3 != 0x60b) goto LAB_000d1e74;
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x2fd;
                                      uVar47 = uVar51;
                                    }
                                  }
                                  goto LAB_000cde5c;
                                }
                                if (uVar3 == 299) {
                                  uVar33 = 0x28a;
                                }
                                else if (uVar3 < 300) {
                                  if (uVar3 == 0x123) {
                                    uVar33 = 0x286;
                                  }
                                  else if (uVar3 < 0x124) {
                                    if (uVar3 == 0x4c) {
                                      uVar33 = 0x791;
                                    }
                                    else {
LAB_000d1e74:
                                      uVar33 = 0x92e;
                                    }
                                  }
                                  else if (uVar3 == 0x126) {
                                    uVar33 = 0x288;
                                  }
                                  else {
                                    if (uVar3 != 0x128) goto LAB_000d1e74;
                                    uVar33 = 0x289;
                                  }
                                }
                                else if (uVar3 == 0x150) {
                                  uVar33 = 0x2aa;
                                }
                                else if (uVar3 < 0x151) {
                                  if (uVar3 == 0x138) {
                                    uVar33 = 0x296;
                                  }
                                  else {
                                    if (uVar3 != 0x14a) goto LAB_000d1e74;
                                    uVar33 = 0x2a4;
                                  }
                                }
                                else if (uVar3 == 0x199) {
                                  uVar33 = 0x2f4;
                                }
                                else {
                                  if (uVar3 != 0x1b0) goto LAB_000d1e74;
                                  uVar33 = 0x7cd;
                                }
                              }
                            }
                            else if (cVar31 == '\x11') {
                              uVar3 = *(ushort *)(iVar55 + 0x3c);
                              if (uVar3 == 0x2b4) {
                                uVar33 = 0x15b;
                              }
                              else if (uVar3 < 0x2b5) {
                                if (uVar3 == 0x29c) {
                                  uVar33 = 0x13e;
                                }
                                else if (uVar3 == 0x2b3) {
                                  uVar33 = 0x15a;
                                }
                                else {
LAB_000d2428:
                                  uVar33 = 0x92e;
                                }
                              }
                              else if (uVar3 == 0x2bf) {
                                uVar33 = 0x164;
                              }
                              else if (uVar3 == 0x2f9) {
                                uVar33 = 0x1a0;
                              }
                              else {
                                if (uVar3 != 0x2ba) goto LAB_000d2428;
                                uVar33 = 0x160;
                              }
                            }
                            else if (cVar31 == '\x12') {
                              uVar33 = (uint)*(ushort *)(iVar55 + 0x3c);
                              if (uVar33 == 0x2fd) {
                                uVar33 = 0x1a6;
                              }
                              else {
                                if (0x2fd < uVar33) {
                                  if (uVar33 == 0x8a1) {
                                    FUN_000cc614(puVar52,1);
                                    uVar51 = (uint)*puVar52;
                                    uVar33 = 0x838;
                                    uVar47 = uVar51;
                                  }
                                  else if (uVar33 < 0x8a2) {
                                    if (uVar33 == 0x8a0) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x837;
                                      uVar47 = uVar51;
                                    }
                                    else {
LAB_000d4fb2:
                                      cVar31 = *(char *)(DAT_000d54d4 + 0xd4fbe + uVar33 * 3);
                                      if (cVar31 != '\f' && cVar31 != '\x10') {
                                        uVar33 = 0x92e;
                                        goto LAB_000cd1a0;
                                      }
                                      FUN_000cc614(puVar52,0x11);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x92e;
                                      uVar47 = uVar51;
                                    }
                                  }
                                  else if (uVar33 == 0x8a2) {
                                    FUN_000cc614(puVar52,1);
                                    uVar51 = (uint)*puVar52;
                                    uVar33 = 0x83a;
                                    uVar47 = uVar51;
                                  }
                                  else {
                                    if (uVar33 != 0x926) goto LAB_000d4fb2;
                                    FUN_000cc614(puVar52,1);
                                    uVar51 = (uint)*puVar52;
                                    uVar33 = 0x898;
                                    uVar47 = uVar51;
                                  }
                                  goto LAB_000cde5c;
                                }
                                if (uVar33 == 0x2bf) {
                                  uVar33 = 0x164;
                                }
                                else if (uVar33 == 0x2c1) {
                                  uVar33 = 0x166;
                                }
                                else {
                                  if (uVar33 != 0x2b3) goto LAB_000d4fb2;
                                  uVar33 = 0x15a;
                                }
                              }
                            }
                            else {
                              if (cVar31 != '\x13') {
                                if (cVar31 == '\x14') {
                                  uVar3 = *(ushort *)(iVar55 + 0x3c);
                                  if (uVar3 == 0x5fd) {
                                    FUN_000cc614(puVar52,1);
                                    uVar51 = (uint)*puVar52;
                                    uVar33 = 0x4e5;
                                    uVar47 = uVar51;
                                  }
                                  else if (uVar3 < 0x5fe) {
                                    if (uVar3 == 0x582) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x483;
                                      uVar47 = uVar51;
                                    }
                                    else if (uVar3 < 0x583) {
                                      if (uVar3 == 0x549) {
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x450;
                                        uVar47 = uVar51;
                                      }
                                      else {
                                        if (uVar3 != 0x571) {
LAB_000d5e44:
                                          uVar33 = 0x92e;
                                          goto LAB_000cd1a0;
                                        }
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x474;
                                        uVar47 = uVar51;
                                      }
                                    }
                                    else if (uVar3 == 0x5f9) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x4e1;
                                      uVar47 = uVar51;
                                    }
                                    else if (uVar3 == 0x5fa) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x4e2;
                                      uVar47 = uVar51;
                                    }
                                    else {
                                      if (uVar3 != 0x5f7) goto LAB_000d5e44;
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x4df;
                                      uVar47 = uVar51;
                                    }
                                  }
                                  else if (uVar3 == 0x8a0) {
                                    FUN_000cc614(puVar52,1);
                                    uVar51 = (uint)*puVar52;
                                    uVar33 = 0x7cd;
                                    uVar47 = uVar51;
                                  }
                                  else if (uVar3 < 0x8a1) {
                                    if (uVar3 == 0x60b) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x4e8;
                                      uVar47 = uVar51;
                                    }
                                    else {
                                      if (uVar3 != 0x613) goto LAB_000d5e44;
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x4ef;
                                      uVar47 = uVar51;
                                    }
                                  }
                                  else if (uVar3 == 0x8a3) {
                                    FUN_000cc614(puVar52,1);
                                    uVar51 = (uint)*puVar52;
                                    uVar33 = 2000;
                                    uVar47 = uVar51;
                                  }
                                  else if (uVar3 == 0x8a9) {
                                    FUN_000cc614(puVar52,1);
                                    uVar51 = (uint)*puVar52;
                                    uVar33 = 0x7d7;
                                    uVar47 = uVar51;
                                  }
                                  else {
                                    if (uVar3 != 0x8a2) goto LAB_000d5e44;
                                    FUN_000cc614(puVar52,1);
                                    uVar51 = (uint)*puVar52;
                                    uVar33 = 1999;
                                    uVar47 = uVar51;
                                  }
                                }
                                else if (cVar31 == '\x15') {
                                  uVar3 = *(ushort *)(iVar55 + 0x3c);
                                  if (uVar3 == 0x5f9) {
                                    FUN_000cc614(puVar52,1);
                                    uVar51 = (uint)*puVar52;
                                    uVar33 = 0x537;
                                    uVar47 = uVar51;
                                  }
                                  else if (uVar3 < 0x5fa) {
                                    if (uVar3 == 0x571) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x506;
                                      uVar47 = uVar51;
                                    }
                                    else if (uVar3 < 0x572) {
                                      if (uVar3 != 0x549) {
LAB_000d5ee6:
                                        uVar33 = 0x92e;
                                        goto LAB_000cd1a0;
                                      }
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x4f3;
                                      uVar47 = uVar51;
                                    }
                                    else if (uVar3 == 0x582) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x50f;
                                      uVar47 = uVar51;
                                    }
                                    else {
                                      if (uVar3 != 0x5f7) goto LAB_000d5ee6;
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x535;
                                      uVar47 = uVar51;
                                    }
                                  }
                                  else if (uVar3 == 0x5fd) {
                                    FUN_000cc614(puVar52,1);
                                    uVar51 = (uint)*puVar52;
                                    uVar33 = 0x53c;
                                    uVar47 = uVar51;
                                  }
                                  else if (uVar3 < 0x5fe) {
                                    if (uVar3 != 0x5fa) goto LAB_000d5ee6;
                                    FUN_000cc614(puVar52,1);
                                    uVar51 = (uint)*puVar52;
                                    uVar33 = 0x538;
                                    uVar47 = uVar51;
                                  }
                                  else if (uVar3 == 0x60b) {
                                    FUN_000cc614(puVar52,1);
                                    uVar51 = (uint)*puVar52;
                                    uVar33 = 0x541;
                                    uVar47 = uVar51;
                                  }
                                  else {
                                    if (uVar3 != 0x613) goto LAB_000d5ee6;
                                    FUN_000cc614(puVar52,1);
                                    uVar51 = (uint)*puVar52;
                                    uVar33 = 0x546;
                                    uVar47 = uVar51;
                                  }
                                }
                                else {
                                  if (cVar31 == '\x16') {
                                    uVar3 = *(ushort *)(iVar55 + 0x3c);
                                    if (uVar3 == 0x2b4) {
                                      uVar33 = 0x15b;
                                    }
                                    else if (uVar3 < 0x2b5) {
                                      if (uVar3 == 0x29c) {
                                        uVar33 = 0x13e;
                                      }
                                      else if (uVar3 == 0x2b3) {
                                        uVar33 = 0x15a;
                                      }
                                      else {
LAB_000d5e8a:
                                        uVar33 = 0x92e;
                                      }
                                    }
                                    else if (uVar3 == 0x2bf) {
                                      uVar33 = 0x164;
                                    }
                                    else if (uVar3 == 0x2f9) {
                                      uVar33 = 0x1a0;
                                    }
                                    else {
                                      if (uVar3 != 0x2ba) goto LAB_000d5e8a;
                                      uVar33 = 0x160;
                                    }
                                    goto LAB_000cd1a0;
                                  }
                                  if (cVar31 == '\x17') {
                                    uVar3 = *(ushort *)(iVar55 + 0x3c);
                                    if (uVar3 == 0x5fa) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x68e;
                                      uVar47 = uVar51;
                                    }
                                    else if (uVar3 < 0x5fb) {
                                      if (uVar3 == 0x582) {
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x643;
                                        uVar47 = uVar51;
                                      }
                                      else if (uVar3 < 0x583) {
                                        if (uVar3 == 0x549) {
                                          FUN_000cc614(puVar52,1);
                                          uVar51 = (uint)*puVar52;
                                          uVar33 = 0x619;
                                          uVar47 = uVar51;
                                        }
                                        else {
                                          if (uVar3 != 0x571) {
LAB_000d6372:
                                            uVar33 = 0x92e;
                                            goto LAB_000cd1a0;
                                          }
                                          FUN_000cc614(puVar52,1);
                                          uVar51 = (uint)*puVar52;
                                          uVar33 = 0x639;
                                          uVar47 = uVar51;
                                        }
                                      }
                                      else if (uVar3 == 0x5f7) {
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x68b;
                                        uVar47 = uVar51;
                                      }
                                      else {
                                        if (uVar3 != 0x5f9) goto LAB_000d6372;
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x68d;
                                        uVar47 = uVar51;
                                      }
                                    }
                                    else if (uVar3 == 0x613) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x69a;
                                      uVar47 = uVar51;
                                    }
                                    else {
                                      if (0x613 < uVar3) {
                                        if (uVar3 == 0x8a2) {
                                          uVar33 = 0x6f4;
                                        }
                                        else if (uVar3 == 0x926) {
                                          uVar33 = 0x758;
                                        }
                                        else {
                                          if (uVar3 != 0x8a0) goto LAB_000d6372;
                                          uVar33 = 0x6f2;
                                        }
                                        goto LAB_000cd1a0;
                                      }
                                      if (uVar3 == 0x5fd) {
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x690;
                                        uVar47 = uVar51;
                                      }
                                      else {
                                        if (uVar3 != 0x60b) goto LAB_000d6372;
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x693;
                                        uVar47 = uVar51;
                                      }
                                    }
                                  }
                                  else if (cVar31 == '\x18') {
                                    uVar3 = *(ushort *)(iVar55 + 0x3c);
                                    if (uVar3 == 0x5f9) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x752;
                                      uVar47 = uVar51;
                                    }
                                    else if (uVar3 < 0x5fa) {
                                      if (uVar3 == 0x571) {
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x70c;
                                        uVar47 = uVar51;
                                      }
                                      else if (uVar3 < 0x572) {
                                        if (uVar3 != 0x549) {
LAB_000d637a:
                                          uVar33 = 0x92e;
                                          goto LAB_000cd1a0;
                                        }
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x6f2;
                                        uVar47 = uVar51;
                                      }
                                      else if (uVar3 == 0x582) {
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x715;
                                        uVar47 = uVar51;
                                      }
                                      else {
                                        if (uVar3 != 0x5f7) goto LAB_000d637a;
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x750;
                                        uVar47 = uVar51;
                                      }
                                    }
                                    else if (uVar3 == 0x5fd) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x755;
                                      uVar47 = uVar51;
                                    }
                                    else if (uVar3 < 0x5fe) {
                                      if (uVar3 != 0x5fa) goto LAB_000d637a;
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x753;
                                      uVar47 = uVar51;
                                    }
                                    else if (uVar3 == 0x60b) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x758;
                                      uVar47 = uVar51;
                                    }
                                    else {
                                      if (uVar3 != 0x613) goto LAB_000d637a;
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x75f;
                                      uVar47 = uVar51;
                                    }
                                  }
                                  else if (cVar31 == '\x1a') {
                                    uVar3 = *(ushort *)(iVar55 + 0x3c);
                                    if (uVar3 == 0x5f9) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x823;
                                      uVar47 = uVar51;
                                    }
                                    else if (uVar3 < 0x5fa) {
                                      if (uVar3 == 0x571) {
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x7e2;
                                        uVar47 = uVar51;
                                      }
                                      else if (uVar3 < 0x572) {
                                        if (uVar3 != 0x549) {
LAB_000d6630:
                                          uVar33 = 0x92e;
                                          goto LAB_000cd1a0;
                                        }
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x7cd;
                                        uVar47 = uVar51;
                                      }
                                      else if (uVar3 == 0x582) {
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x7ec;
                                        uVar47 = uVar51;
                                      }
                                      else {
                                        if (uVar3 != 0x5f7) goto LAB_000d6630;
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x821;
                                        uVar47 = uVar51;
                                      }
                                    }
                                    else if (uVar3 == 0x60b) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x758;
                                      uVar47 = uVar51;
                                    }
                                    else if (uVar3 < 0x60c) {
                                      if (uVar3 == 0x5fa) {
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x825;
                                        uVar47 = uVar51;
                                      }
                                      else {
                                        if (uVar3 != 0x5fd) goto LAB_000d6630;
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x828;
                                        uVar47 = uVar51;
                                      }
                                    }
                                    else if (uVar3 == 0x613) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x75f;
                                      uVar47 = uVar51;
                                    }
                                    else {
                                      if (uVar3 != 0x926) goto LAB_000d6630;
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x758;
                                      uVar47 = uVar51;
                                    }
                                  }
                                  else if (cVar31 == '\x1b') {
                                    uVar33 = (uint)*(ushort *)(iVar55 + 0x3c);
                                    if (uVar33 == 0x5f9) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x893;
                                      uVar47 = uVar51;
                                    }
                                    else if (uVar33 < 0x5fa) {
                                      if (uVar33 == 0x571) {
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x84e;
                                        uVar47 = uVar51;
                                      }
                                      else if (uVar33 < 0x572) {
                                        if (uVar33 == 0x549) {
                                          FUN_000cc614(puVar52,1);
                                          uVar51 = (uint)*puVar52;
                                          uVar33 = 0x837;
                                          uVar47 = uVar51;
                                        }
                                        else {
LAB_000d61d0:
                                          cVar31 = *(char *)(DAT_000d62b0 + 0xd61da + uVar33 * 3);
                                          if (cVar31 != '\f' && cVar31 != '\x10') {
                                            uVar33 = 0x92e;
                                            goto LAB_000cd1a0;
                                          }
                                          FUN_000cc614(puVar52,0x11);
                                          uVar51 = (uint)*puVar52;
                                          uVar33 = 0x92e;
                                          uVar47 = uVar51;
                                        }
                                      }
                                      else if (uVar33 == 0x582) {
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x857;
                                        uVar47 = uVar51;
                                      }
                                      else {
                                        if (uVar33 != 0x5f7) goto LAB_000d61d0;
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x892;
                                        uVar47 = uVar51;
                                      }
                                    }
                                    else if (uVar33 == 0x5fd) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x896;
                                      uVar47 = uVar51;
                                    }
                                    else if (uVar33 < 0x5fe) {
                                      if (uVar33 != 0x5fa) goto LAB_000d61d0;
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x894;
                                      uVar47 = uVar51;
                                    }
                                    else if (uVar33 == 0x60b) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x898;
                                      uVar47 = uVar51;
                                    }
                                    else {
                                      if (uVar33 != 0x613) goto LAB_000d61d0;
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x89d;
                                      uVar47 = uVar51;
                                    }
                                  }
                                  else {
                                    if (cVar31 != '\x1c') {
                                      uVar33 = 0x92e;
                                      goto LAB_000cd1a0;
                                    }
                                    uVar3 = *(ushort *)(iVar55 + 0x3c);
                                    if (uVar3 == 0x1cf) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x7e4;
                                      uVar47 = uVar51;
                                    }
                                    else if (uVar3 < 0x1d0) {
                                      if (uVar3 == 0x4c) {
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x791;
                                        uVar47 = uVar51;
                                      }
                                      else {
                                        if (uVar3 != 0x1b0) {
LAB_000d656a:
                                          uVar33 = 0x92e;
                                          goto LAB_000cd1a0;
                                        }
                                        FUN_000cc614(puVar52,1);
                                        uVar51 = (uint)*puVar52;
                                        uVar33 = 0x7cd;
                                        uVar47 = uVar51;
                                      }
                                    }
                                    else if (uVar3 == 0x619) {
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x6f2;
                                      uVar47 = uVar51;
                                    }
                                    else {
                                      if (uVar3 != 0x693) goto LAB_000d656a;
                                      FUN_000cc614(puVar52,1);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x758;
                                      uVar47 = uVar51;
                                    }
                                  }
                                }
                                goto LAB_000cde5c;
                              }
                              uVar33 = (uint)*(ushort *)(iVar55 + 0x3c);
                              if (uVar33 == 0x5f9) {
                                uVar33 = 0x537;
                              }
                              else if (uVar33 < 0x5fa) {
                                if (uVar33 == 0x571) {
                                  uVar33 = 0x506;
                                }
                                else if (uVar33 < 0x572) {
                                  if (uVar33 == 0x549) {
                                    uVar33 = 0x4f3;
                                  }
                                  else {
LAB_000d3a4a:
                                    cVar31 = *(char *)(DAT_000d3afc + 0xd3a54 + uVar33 * 3);
                                    if (cVar31 == '\f' || cVar31 == '\x10') {
                                      FUN_000cc614(puVar52,0x11);
                                      uVar51 = (uint)*puVar52;
                                      uVar33 = 0x92e;
                                      uVar47 = uVar51;
                                      goto LAB_000cde5c;
                                    }
                                    uVar33 = 0x92e;
                                  }
                                }
                                else if (uVar33 == 0x582) {
                                  uVar33 = 0x50f;
                                }
                                else {
                                  if (uVar33 != 0x5f7) goto LAB_000d3a4a;
                                  uVar33 = 0x535;
                                }
                              }
                              else if (uVar33 == 0x5fd) {
                                uVar33 = 0x53c;
                              }
                              else if (uVar33 < 0x5fe) {
                                if (uVar33 != 0x5fa) goto LAB_000d3a4a;
                                uVar33 = 0x538;
                              }
                              else if (uVar33 == 0x60b) {
                                uVar33 = 0x541;
                              }
                              else {
                                if (uVar33 != 0x613) goto LAB_000d3a4a;
                                uVar33 = 0x546;
                              }
                            }
                          }
                          goto LAB_000cd1a0;
                        }
                        uVar3 = *(ushort *)(iVar55 + 0x3c);
                        if (uVar3 != 0x5f7) {
                          if (uVar3 < 0x5f8) {
                            if (uVar3 != 0x555) {
                              if (uVar3 < 0x556) {
                                if (uVar3 != 0x549) {
LAB_000d382e:
                                  uVar33 = 0x92e;
                                  goto LAB_000cd1a0;
                                }
                                if ((uVar49 != 0) &&
                                   (*(char *)(DAT_000d1f04 + uVar49 * 3 + 0xd168a) != '\t')) {
                                  uVar47 = uVar49 - 1;
                                  uVar51 = uVar47 & 7;
                                  uVar33 = uVar49;
                                  iVar48 = iVar21;
                                  if (uVar51 == 0) {
LAB_000d17a6:
                                    do {
                                      uVar47 = uVar33 - 1;
                                      if (uVar47 == 0) {
                                        uVar51 = 0;
                                        goto LAB_000d5c7e;
                                      }
                                    } while ((((*(char *)(iVar48 + -1) != '\t') &&
                                              (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\t'))
                                             && (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\t'
                                                )) && (((uVar47 = uVar33 - 4,
                                                        *(char *)(iVar48 + -10) != '\t' &&
                                                        (uVar47 = uVar33 - 5,
                                                        *(char *)(iVar48 + -0xd) != '\t')) &&
                                                       ((uVar47 = uVar33 - 6,
                                                        *(char *)(iVar48 + -0x10) != '\t' &&
                                                        ((uVar47 = uVar33 - 7,
                                                         *(char *)(iVar48 + -0x13) != '\t' &&
                                                         (pcVar30 = (char *)(iVar48 + -0x16),
                                                         uVar47 = uVar33 - 8, uVar33 = uVar47,
                                                         iVar48 = iVar48 + -0x18, *pcVar30 != '\t'))
                                                        ))))));
                                  }
                                  else {
                                    iVar48 = iVar21 + -3;
                                    if (*(char *)(iVar21 + -1) != '\t') {
                                      uVar33 = uVar47;
                                      if (uVar51 != 1) {
                                        iVar22 = iVar48;
                                        if (uVar51 != 2) {
                                          if (uVar51 != 3) {
                                            if (uVar51 != 4) {
                                              if (uVar51 != 5) {
                                                if (uVar51 != 6) {
                                                  iVar22 = iVar21 + -6;
                                                  uVar47 = uVar49 - 2;
                                                  if (*(char *)(iVar21 + -4) == '\t')
                                                  goto LAB_000d5c7c;
                                                }
                                                iVar48 = iVar22 + -3;
                                                uVar47 = uVar47 - 1;
                                                if (*(char *)(iVar22 + -1) == '\t')
                                                goto LAB_000d5c7c;
                                              }
                                              iVar22 = iVar48 + -3;
                                              uVar47 = uVar47 - 1;
                                              if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d5c7c;
                                            }
                                            iVar48 = iVar22 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d5c7c;
                                          }
                                          iVar22 = iVar48 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d5c7c;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar33 = uVar47 - 1;
                                        uVar47 = uVar33;
                                        if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d5c7c;
                                      }
                                      goto LAB_000d17a6;
                                    }
                                  }
LAB_000d5c7c:
                                  uVar51 = uVar47 & 0xffff;
                                }
LAB_000d5c7e:
                                *(short *)(iVar26 + 0x30) = (short)uVar51;
                                uVar33 = 0x305;
                                goto LAB_000cde5c;
                              }
                              if (uVar3 != 0x571) {
                                if (uVar3 != 0x582) goto LAB_000d382e;
                                if ((uVar49 != 0) &&
                                   (iVar48 = uVar49 * 3,
                                   *(char *)(DAT_000ceefc + iVar48 + 0xce5f4) != '\t')) {
                                  uVar51 = uVar49 - 1 & 7;
                                  iVar22 = uVar49 * -3;
                                  uVar33 = uVar49;
                                  iVar46 = iVar21;
                                  if (uVar51 == 0) {
LAB_000ce712:
                                    do {
                                      uVar47 = uVar33 - 1;
                                      if (uVar47 == 0) {
                                        uVar51 = 0;
                                        goto LAB_000d4fee;
                                      }
                                    } while ((((*(char *)(iVar46 + iVar22 + iVar48 + -1) != '\t') &&
                                              (uVar47 = uVar33 - 2,
                                              *(char *)(iVar46 + iVar22 + iVar48 + -4) != '\t')) &&
                                             (uVar47 = uVar33 - 3,
                                             *(char *)(iVar46 + iVar22 + iVar48 + -7) != '\t')) &&
                                            (((uVar47 = uVar33 - 4,
                                              *(char *)(iVar46 + iVar22 + iVar48 + -10) != '\t' &&
                                              (uVar47 = uVar33 - 5,
                                              *(char *)(iVar46 + iVar22 + iVar48 + -0xd) != '\t'))
                                             && ((uVar47 = uVar33 - 6,
                                                 *(char *)(iVar46 + -0x10) != '\t' &&
                                                 ((uVar47 = uVar33 - 7,
                                                  *(char *)(iVar46 + -0x13) != '\t' &&
                                                  (uVar47 = uVar33 - 8,
                                                  pcVar30 = (char *)(iVar46 + -0x16),
                                                  uVar33 = uVar47, iVar46 = iVar46 + -0x18,
                                                  *pcVar30 != '\t'))))))));
                                  }
                                  else {
                                    iVar46 = iVar21 + -3;
                                    uVar33 = uVar49 - 1;
                                    uVar47 = uVar33;
                                    if (*(char *)(iVar21 + -1) != '\t') {
                                      if (uVar51 != 1) {
                                        iVar20 = iVar46;
                                        if (uVar51 != 2) {
                                          if (uVar51 != 3) {
                                            if (uVar51 != 4) {
                                              if (uVar51 != 5) {
                                                if (uVar51 != 6) {
                                                  iVar20 = iVar21 + -6;
                                                  uVar33 = uVar49 - 2;
                                                  uVar47 = uVar33;
                                                  if (*(char *)(iVar21 + -4) == '\t')
                                                  goto LAB_000d6564;
                                                }
                                                iVar46 = iVar20 + -3;
                                                uVar33 = uVar33 - 1;
                                                uVar47 = uVar33;
                                                if (*(char *)(iVar20 + -1) == '\t')
                                                goto LAB_000d6564;
                                              }
                                              iVar20 = iVar46 + -3;
                                              uVar33 = uVar33 - 1;
                                              uVar47 = uVar33;
                                              if (*(char *)(iVar46 + -1) == '\t') goto LAB_000d6564;
                                            }
                                            iVar46 = iVar20 + -3;
                                            uVar33 = uVar33 - 1;
                                            uVar47 = uVar33;
                                            if (*(char *)(iVar20 + -1) == '\t') goto LAB_000d6564;
                                          }
                                          iVar20 = iVar46 + -3;
                                          uVar33 = uVar33 - 1;
                                          uVar47 = uVar33;
                                          if (*(char *)(iVar46 + -1) == '\t') goto LAB_000d6564;
                                        }
                                        iVar46 = iVar20 + -3;
                                        uVar33 = uVar33 - 1;
                                        uVar47 = uVar33;
                                        if (*(char *)(iVar20 + -1) == '\t') goto LAB_000d6564;
                                      }
                                      goto LAB_000ce712;
                                    }
                                  }
LAB_000d6564:
                                  uVar51 = uVar47 & 0xffff;
                                }
LAB_000d4fee:
                                *(short *)(iVar26 + 0x30) = (short)uVar51;
                                uVar33 = 0x32d;
                                goto LAB_000cde5c;
                              }
                              if ((uVar49 != 0) &&
                                 (*(char *)(DAT_000d48b0 + uVar49 * 3 + 0xd4592) != '\t')) {
                                uVar47 = uVar49 - 1;
                                uVar51 = uVar47 & 7;
                                uVar33 = uVar49;
                                iVar48 = iVar21;
                                if (uVar51 == 0) {
LAB_000d46ae:
                                  do {
                                    uVar47 = uVar33 - 1;
                                    if (uVar47 == 0) {
                                      uVar51 = 0;
                                      goto LAB_000d4dc6;
                                    }
                                  } while ((((((*(char *)(iVar48 + -1) != '\t') &&
                                              (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\t'))
                                             && (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\t'
                                                )) && ((uVar47 = uVar33 - 4,
                                                       *(char *)(iVar48 + -10) != '\t' &&
                                                       (uVar47 = uVar33 - 5,
                                                       *(char *)(iVar48 + -0xd) != '\t')))) &&
                                           (uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\t'))
                                          && ((uVar47 = uVar33 - 7,
                                              *(char *)(iVar48 + -0x13) != '\t' &&
                                              (uVar47 = uVar33 - 8,
                                              pcVar30 = (char *)(iVar48 + -0x16), uVar33 = uVar47,
                                              iVar48 = iVar48 + -0x18, *pcVar30 != '\t'))));
                                }
                                else {
                                  iVar48 = iVar21 + -3;
                                  if (*(char *)(iVar21 + -1) != '\t') {
                                    uVar33 = uVar47;
                                    if (uVar51 != 1) {
                                      iVar22 = iVar48;
                                      if (uVar51 != 2) {
                                        if (uVar51 != 3) {
                                          if (uVar51 != 4) {
                                            if (uVar51 != 5) {
                                              if (uVar51 != 6) {
                                                iVar22 = iVar21 + -6;
                                                uVar47 = uVar49 - 2;
                                                if (*(char *)(iVar21 + -4) == '\t')
                                                goto LAB_000d4dc4;
                                              }
                                              iVar48 = iVar22 + -3;
                                              uVar47 = uVar47 - 1;
                                              if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d4dc4;
                                            }
                                            iVar22 = iVar48 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d4dc4;
                                          }
                                          iVar48 = iVar22 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d4dc4;
                                        }
                                        iVar22 = iVar48 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d4dc4;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar33 = uVar47 - 1;
                                      uVar47 = uVar33;
                                      if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d4dc4;
                                    }
                                    goto LAB_000d46ae;
                                  }
                                }
LAB_000d4dc4:
                                uVar51 = uVar47 & 0xffff;
                              }
LAB_000d4dc6:
                              *(short *)(iVar26 + 0x30) = (short)uVar51;
                              uVar33 = 0x322;
                              goto LAB_000cde5c;
                            }
                            if ((uVar49 != 0) &&
                               (*(char *)(DAT_000d48b4 + uVar49 * 3 + 0xd4710) != '\t')) {
                              uVar47 = uVar49 - 1;
                              uVar51 = uVar47 & 7;
                              uVar33 = uVar49;
                              iVar48 = iVar21;
                              if (uVar51 == 0) {
LAB_000d4830:
                                do {
                                  uVar47 = uVar33 - 1;
                                  if (uVar47 == 0) {
                                    uVar51 = 0;
                                    goto LAB_000d4dd6;
                                  }
                                } while ((((*(char *)(iVar48 + -1) != '\t') &&
                                          (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\t')) &&
                                         (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\t')) &&
                                        (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\t' &&
                                          (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\t'))
                                         && ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\t'
                                             && ((uVar47 = uVar33 - 7,
                                                 *(char *)(iVar48 + -0x13) != '\t' &&
                                                 (pcVar30 = (char *)(iVar48 + -0x16),
                                                 uVar47 = uVar33 - 8, uVar33 = uVar47,
                                                 iVar48 = iVar48 + -0x18, *pcVar30 != '\t'))))))));
                              }
                              else {
                                iVar48 = iVar21 + -3;
                                if (*(char *)(iVar21 + -1) != '\t') {
                                  uVar33 = uVar47;
                                  if (uVar51 != 1) {
                                    iVar22 = iVar48;
                                    if (uVar51 != 2) {
                                      if (uVar51 != 3) {
                                        if (uVar51 != 4) {
                                          if (uVar51 != 5) {
                                            if (uVar51 != 6) {
                                              iVar22 = iVar21 + -6;
                                              uVar47 = uVar49 - 2;
                                              if (*(char *)(iVar21 + -4) == '\t') goto LAB_000d4dd4;
                                            }
                                            iVar48 = iVar22 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d4dd4;
                                          }
                                          iVar22 = iVar48 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d4dd4;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d4dd4;
                                      }
                                      iVar22 = iVar48 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d4dd4;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar33 = uVar47 - 1;
                                    uVar47 = uVar33;
                                    if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d4dd4;
                                  }
                                  goto LAB_000d4830;
                                }
                              }
LAB_000d4dd4:
                              uVar51 = uVar47 & 0xffff;
                            }
LAB_000d4dd6:
                            *(short *)(iVar26 + 0x30) = (short)uVar51;
                            uVar33 = 0x30f;
                          }
                          else {
                            if (uVar3 != 0x5fa) {
                              if (uVar3 < 0x5fb) {
                                if (uVar3 != 0x5f9) goto LAB_000d382e;
                                if ((uVar49 != 0) &&
                                   (*(char *)(DAT_000d1f08 + uVar49 * 3 + 0xd1864) != '\t')) {
                                  uVar47 = uVar49 - 1;
                                  uVar51 = uVar47 & 7;
                                  uVar33 = uVar49;
                                  iVar48 = iVar21;
                                  if (uVar51 == 0) {
LAB_000d1986:
                                    do {
                                      uVar47 = uVar33 - 1;
                                      if (uVar47 == 0) {
                                        uVar51 = 0;
                                        goto LAB_000d5afc;
                                      }
                                    } while (((((*(char *)(iVar48 + -1) != '\t') &&
                                               (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\t')
                                               ) && (uVar47 = uVar33 - 3,
                                                    *(char *)(iVar48 + -7) != '\t')) &&
                                             ((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\t'
                                              && (uVar47 = uVar33 - 5,
                                                 *(char *)(iVar48 + -0xd) != '\t')))) &&
                                            ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\t'
                                             && ((uVar47 = uVar33 - 7,
                                                 *(char *)(iVar48 + -0x13) != '\t' &&
                                                 (uVar47 = uVar33 - 8,
                                                 pcVar30 = (char *)(iVar48 + -0x16), uVar33 = uVar47
                                                 , iVar48 = iVar48 + -0x18, *pcVar30 != '\t'))))));
                                  }
                                  else {
                                    iVar48 = iVar21 + -3;
                                    if (*(char *)(iVar21 + -1) != '\t') {
                                      uVar33 = uVar47;
                                      if (uVar51 != 1) {
                                        iVar22 = iVar48;
                                        if (uVar51 != 2) {
                                          if (uVar51 != 3) {
                                            if (uVar51 != 4) {
                                              if (uVar51 != 5) {
                                                if (uVar51 != 6) {
                                                  iVar22 = iVar21 + -6;
                                                  uVar47 = uVar49 - 2;
                                                  if (*(char *)(iVar21 + -4) == '\t')
                                                  goto LAB_000d5afa;
                                                }
                                                iVar48 = iVar22 + -3;
                                                uVar47 = uVar47 - 1;
                                                if (*(char *)(iVar22 + -1) == '\t')
                                                goto LAB_000d5afa;
                                              }
                                              iVar22 = iVar48 + -3;
                                              uVar47 = uVar47 - 1;
                                              if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d5afa;
                                            }
                                            iVar48 = iVar22 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d5afa;
                                          }
                                          iVar22 = iVar48 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d5afa;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar33 = uVar47 - 1;
                                        uVar47 = uVar33;
                                        if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d5afa;
                                      }
                                      goto LAB_000d1986;
                                    }
                                  }
LAB_000d5afa:
                                  uVar51 = uVar47 & 0xffff;
                                }
LAB_000d5afc:
                                *(short *)(iVar26 + 0x30) = (short)uVar51;
                                uVar33 = 0x375;
                              }
                              else {
                                if (uVar3 != 0x60b) {
                                  if (uVar3 != 0x613) goto LAB_000d382e;
                                  if ((uVar49 != 0) &&
                                     (iVar48 = uVar49 * 3,
                                     *(char *)(DAT_000cf7bc + iVar48 + 0xcf4c0) != '\t')) {
                                    uVar51 = uVar49 - 1 & 7;
                                    iVar22 = uVar49 * -3;
                                    uVar33 = uVar49;
                                    iVar46 = iVar21;
                                    if (uVar51 == 0) {
LAB_000cf5d6:
                                      do {
                                        uVar47 = uVar33 - 1;
                                        if (uVar47 == 0) {
                                          uVar51 = 0;
                                          goto LAB_000d6b58;
                                        }
                                      } while ((((*(char *)(iVar46 + iVar22 + iVar48 + -1) != '\t')
                                                && (uVar47 = uVar33 - 2,
                                                   *(char *)(iVar46 + iVar22 + iVar48 + -4) != '\t')
                                                ) && (uVar47 = uVar33 - 3,
                                                     *(char *)(iVar46 + iVar22 + iVar48 + -7) !=
                                                     '\t')) &&
                                              (((uVar47 = uVar33 - 4,
                                                *(char *)(iVar46 + iVar22 + iVar48 + -10) != '\t' &&
                                                (uVar47 = uVar33 - 5,
                                                *(char *)(iVar46 + iVar22 + iVar48 + -0xd) != '\t'))
                                               && ((uVar47 = uVar33 - 6,
                                                   *(char *)(iVar46 + -0x10) != '\t' &&
                                                   ((uVar47 = uVar33 - 7,
                                                    *(char *)(iVar46 + -0x13) != '\t' &&
                                                    (uVar47 = uVar33 - 8,
                                                    pcVar30 = (char *)(iVar46 + -0x16),
                                                    uVar33 = uVar47, iVar46 = iVar46 + -0x18,
                                                    *pcVar30 != '\t'))))))));
                                    }
                                    else {
                                      iVar46 = iVar21 + -3;
                                      uVar33 = uVar49 - 1;
                                      uVar47 = uVar33;
                                      if (*(char *)(iVar21 + -1) != '\t') {
                                        if (uVar51 != 1) {
                                          iVar20 = iVar46;
                                          if (uVar51 != 2) {
                                            if (uVar51 != 3) {
                                              if (uVar51 != 4) {
                                                if (uVar51 != 5) {
                                                  if (uVar51 != 6) {
                                                    iVar20 = iVar21 + -6;
                                                    uVar33 = uVar49 - 2;
                                                    uVar47 = uVar33;
                                                    if (*(char *)(iVar21 + -4) == '\t')
                                                    goto LAB_000d6b56;
                                                  }
                                                  iVar46 = iVar20 + -3;
                                                  uVar33 = uVar33 - 1;
                                                  uVar47 = uVar33;
                                                  if (*(char *)(iVar20 + -1) == '\t')
                                                  goto LAB_000d6b56;
                                                }
                                                iVar20 = iVar46 + -3;
                                                uVar33 = uVar33 - 1;
                                                uVar47 = uVar33;
                                                if (*(char *)(iVar46 + -1) == '\t')
                                                goto LAB_000d6b56;
                                              }
                                              iVar46 = iVar20 + -3;
                                              uVar33 = uVar33 - 1;
                                              uVar47 = uVar33;
                                              if (*(char *)(iVar20 + -1) == '\t') goto LAB_000d6b56;
                                            }
                                            iVar20 = iVar46 + -3;
                                            uVar33 = uVar33 - 1;
                                            uVar47 = uVar33;
                                            if (*(char *)(iVar46 + -1) == '\t') goto LAB_000d6b56;
                                          }
                                          iVar46 = iVar20 + -3;
                                          uVar33 = uVar33 - 1;
                                          uVar47 = uVar33;
                                          if (*(char *)(iVar20 + -1) == '\t') goto LAB_000d6b56;
                                        }
                                        goto LAB_000cf5d6;
                                      }
                                    }
LAB_000d6b56:
                                    uVar51 = uVar47 & 0xffff;
                                  }
LAB_000d6b58:
                                  *(short *)(iVar26 + 0x30) = (short)uVar51;
                                  uVar33 = 0x380;
                                  goto LAB_000cde5c;
                                }
                                if ((uVar49 != 0) &&
                                   (*(char *)(DAT_000d4890 + uVar49 * 3 + 0xd3fcc) != '\t')) {
                                  uVar47 = uVar49 - 1;
                                  uVar51 = uVar47 & 7;
                                  uVar33 = uVar49;
                                  iVar48 = iVar21;
                                  if (uVar51 == 0) {
LAB_000d40ec:
                                    do {
                                      uVar47 = uVar33 - 1;
                                      if (uVar47 == 0) {
                                        uVar51 = 0;
                                        goto LAB_000d6b44;
                                      }
                                    } while ((((*(char *)(iVar48 + -1) != '\t') &&
                                              (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\t'))
                                             && (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\t'
                                                )) && (((uVar47 = uVar33 - 4,
                                                        *(char *)(iVar48 + -10) != '\t' &&
                                                        (uVar47 = uVar33 - 5,
                                                        *(char *)(iVar48 + -0xd) != '\t')) &&
                                                       ((uVar47 = uVar33 - 6,
                                                        *(char *)(iVar48 + -0x10) != '\t' &&
                                                        ((uVar47 = uVar33 - 7,
                                                         *(char *)(iVar48 + -0x13) != '\t' &&
                                                         (pcVar30 = (char *)(iVar48 + -0x16),
                                                         uVar47 = uVar33 - 8, uVar33 = uVar47,
                                                         iVar48 = iVar48 + -0x18, *pcVar30 != '\t'))
                                                        ))))));
                                  }
                                  else {
                                    iVar48 = iVar21 + -3;
                                    if (*(char *)(iVar21 + -1) != '\t') {
                                      uVar33 = uVar47;
                                      if (uVar51 != 1) {
                                        iVar22 = iVar48;
                                        if (uVar51 != 2) {
                                          if (uVar51 != 3) {
                                            if (uVar51 != 4) {
                                              if (uVar51 != 5) {
                                                if (uVar51 != 6) {
                                                  iVar22 = iVar21 + -6;
                                                  uVar47 = uVar49 - 2;
                                                  if (*(char *)(iVar21 + -4) == '\t')
                                                  goto LAB_000d6b42;
                                                }
                                                iVar48 = iVar22 + -3;
                                                uVar47 = uVar47 - 1;
                                                if (*(char *)(iVar22 + -1) == '\t')
                                                goto LAB_000d6b42;
                                              }
                                              iVar22 = iVar48 + -3;
                                              uVar47 = uVar47 - 1;
                                              if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d6b42;
                                            }
                                            iVar48 = iVar22 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d6b42;
                                          }
                                          iVar22 = iVar48 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d6b42;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar33 = uVar47 - 1;
                                        uVar47 = uVar33;
                                        if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d6b42;
                                      }
                                      goto LAB_000d40ec;
                                    }
                                  }
LAB_000d6b42:
                                  uVar51 = uVar47 & 0xffff;
                                }
LAB_000d6b44:
                                *(short *)(iVar26 + 0x30) = (short)uVar51;
                                uVar33 = 0x379;
                              }
                              goto LAB_000cde5c;
                            }
                            if ((uVar49 != 0) &&
                               (*(char *)(DAT_000d3af4 + uVar49 * 3 + 0xd3846) != '\t')) {
                              uVar47 = uVar49 - 1;
                              uVar51 = uVar47 & 7;
                              uVar33 = uVar49;
                              iVar48 = iVar21;
                              if (uVar51 == 0) {
LAB_000d396a:
                                do {
                                  uVar47 = uVar33 - 1;
                                  if (uVar47 == 0) {
                                    uVar51 = 0;
                                    goto LAB_000d6b18;
                                  }
                                } while (((((*(char *)(iVar48 + -1) != '\t') &&
                                           (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\t')) &&
                                          (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\t')) &&
                                         ((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\t' &&
                                          (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\t'))))
                                        && ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\t'
                                            && ((uVar47 = uVar33 - 7,
                                                *(char *)(iVar48 + -0x13) != '\t' &&
                                                (uVar47 = uVar33 - 8,
                                                pcVar30 = (char *)(iVar48 + -0x16), uVar33 = uVar47,
                                                iVar48 = iVar48 + -0x18, *pcVar30 != '\t'))))));
                              }
                              else {
                                iVar48 = iVar21 + -3;
                                if (*(char *)(iVar21 + -1) != '\t') {
                                  uVar33 = uVar47;
                                  if (uVar51 != 1) {
                                    iVar22 = iVar48;
                                    if (uVar51 != 2) {
                                      if (uVar51 != 3) {
                                        if (uVar51 != 4) {
                                          if (uVar51 != 5) {
                                            if (uVar51 != 6) {
                                              iVar22 = iVar21 + -6;
                                              uVar47 = uVar49 - 2;
                                              if (*(char *)(iVar21 + -4) == '\t') goto LAB_000d6b16;
                                            }
                                            iVar48 = iVar22 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d6b16;
                                          }
                                          iVar22 = iVar48 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d6b16;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d6b16;
                                      }
                                      iVar22 = iVar48 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d6b16;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar33 = uVar47 - 1;
                                    uVar47 = uVar33;
                                    if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d6b16;
                                  }
                                  goto LAB_000d396a;
                                }
                              }
LAB_000d6b16:
                              uVar51 = uVar47 & 0xffff;
                            }
LAB_000d6b18:
                            *(short *)(iVar26 + 0x30) = (short)uVar51;
                            uVar33 = 0x376;
                          }
                          goto LAB_000cde5c;
                        }
                        if ((uVar49 != 0) &&
                           (*(char *)(DAT_000d2c54 + uVar49 * 3 + 0xd1f32) != '\t')) {
                          uVar47 = uVar49 - 1;
                          uVar51 = uVar47 & 7;
                          uVar33 = uVar49;
                          iVar48 = iVar21;
                          if (uVar51 == 0) {
LAB_000d204e:
                            do {
                              uVar47 = uVar33 - 1;
                              if (uVar47 == 0) {
                                uVar51 = 0;
                                goto LAB_000d54ae;
                              }
                            } while ((((*(char *)(iVar48 + -1) != '\t') &&
                                      (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\t')) &&
                                     (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\t')) &&
                                    (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\t' &&
                                      (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\t')) &&
                                     ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\t' &&
                                      ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\t' &&
                                       (uVar47 = uVar33 - 8, pcVar30 = (char *)(iVar48 + -0x16),
                                       uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\t')))
                                      )))));
                          }
                          else {
                            iVar48 = iVar21 + -3;
                            if (*(char *)(iVar21 + -1) != '\t') {
                              uVar33 = uVar47;
                              if (uVar51 != 1) {
                                iVar22 = iVar48;
                                if (uVar51 != 2) {
                                  if (uVar51 != 3) {
                                    if (uVar51 != 4) {
                                      if (uVar51 != 5) {
                                        if (uVar51 != 6) {
                                          iVar22 = iVar21 + -6;
                                          uVar47 = uVar49 - 2;
                                          if (*(char *)(iVar21 + -4) == '\t') goto LAB_000d54ac;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d54ac;
                                      }
                                      iVar22 = iVar48 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d54ac;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d54ac;
                                  }
                                  iVar22 = iVar48 + -3;
                                  uVar47 = uVar47 - 1;
                                  if (*(char *)(iVar48 + -1) == '\t') goto LAB_000d54ac;
                                }
                                iVar48 = iVar22 + -3;
                                uVar33 = uVar47 - 1;
                                uVar47 = uVar33;
                                if (*(char *)(iVar22 + -1) == '\t') goto LAB_000d54ac;
                              }
                              goto LAB_000d204e;
                            }
                          }
LAB_000d54ac:
                          uVar51 = uVar47 & 0xffff;
                        }
LAB_000d54ae:
                        *(short *)(iVar26 + 0x30) = (short)uVar51;
                        uVar33 = 0x374;
                      }
                      goto LAB_000cde5c;
                    }
                    uVar3 = *(ushort *)(iVar55 + 0x3c);
                    if (uVar3 != 0x549) {
                      if (uVar3 < 0x54a) {
                        if (uVar3 == 299) {
                          uVar33 = 0x28a;
                        }
                        else if (uVar3 < 300) {
                          if (uVar3 == 0x126) {
                            uVar33 = 0x288;
                          }
                          else if (uVar3 == 0x128) {
                            uVar33 = 0x289;
                          }
                          else {
                            if (uVar3 != 0x123) goto LAB_000d0b26;
                            uVar33 = 0x286;
                          }
                        }
                        else if (uVar3 == 0x14a) {
                          uVar33 = 0x2a4;
                        }
                        else if (uVar3 < 0x14b) {
                          if (uVar3 != 0x138) goto LAB_000d0b26;
                          uVar33 = 0x296;
                        }
                        else if (uVar3 == 0x150) {
                          uVar33 = 0x2aa;
                        }
                        else {
                          if (uVar3 != 0x199) goto LAB_000d0b26;
                          uVar33 = 0x2f4;
                        }
                        goto LAB_000cd1a0;
                      }
                      if (uVar3 != 0x5f9) {
                        if (uVar3 < 0x5fa) {
                          if (uVar3 != 0x582) {
                            if (uVar3 != 0x5f7) {
                              if (uVar3 != 0x571) goto LAB_000d0b26;
                              if ((uVar49 != 0) &&
                                 (*(char *)(DAT_000d0484 + uVar49 * 3 + 0xd0288) != '\x01')) {
                                uVar47 = uVar49 - 1;
                                uVar51 = uVar47 & 7;
                                uVar33 = uVar49;
                                iVar48 = iVar21;
                                if (uVar51 == 0) {
LAB_000d033a:
                                  do {
                                    uVar47 = uVar33 - 1;
                                    if (uVar47 == 0) {
                                      uVar51 = 0;
                                      goto LAB_000d5700;
                                    }
                                  } while (((((*(char *)(iVar48 + -1) != '\x01') &&
                                             (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')
                                             ) && (uVar47 = uVar33 - 3,
                                                  *(char *)(iVar48 + -7) != '\x01')) &&
                                           ((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01'
                                            && (uVar47 = uVar33 - 5,
                                               *(char *)(iVar48 + -0xd) != '\x01')))) &&
                                          ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01'
                                           && ((uVar47 = uVar33 - 7,
                                               *(char *)(iVar48 + -0x13) != '\x01' &&
                                               (pcVar30 = (char *)(iVar48 + -0x16),
                                               uVar47 = uVar33 - 8, uVar33 = uVar47,
                                               iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))))));
                                }
                                else {
                                  iVar48 = iVar21 + -3;
                                  if (*(char *)(iVar21 + -1) != '\x01') {
                                    uVar33 = uVar47;
                                    if (uVar51 != 1) {
                                      iVar22 = iVar48;
                                      if (uVar51 != 2) {
                                        if (uVar51 != 3) {
                                          if (uVar51 != 4) {
                                            if (uVar51 != 5) {
                                              if (uVar51 != 6) {
                                                iVar22 = iVar21 + -6;
                                                uVar47 = uVar49 - 2;
                                                if (*(char *)(iVar21 + -4) == '\x01')
                                                goto LAB_000d03d8;
                                              }
                                              iVar48 = iVar22 + -3;
                                              uVar47 = uVar47 - 1;
                                              if (*(char *)(iVar22 + -1) == '\x01')
                                              goto LAB_000d03d8;
                                            }
                                            iVar22 = iVar48 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d03d8;
                                          }
                                          iVar48 = iVar22 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d03d8;
                                        }
                                        iVar22 = iVar48 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d03d8;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar33 = uVar47 - 1;
                                      uVar47 = uVar33;
                                      if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d03d8;
                                    }
                                    goto LAB_000d033a;
                                  }
                                }
LAB_000d03d8:
                                uVar51 = uVar47 & 0xffff;
                              }
LAB_000d5700:
                              *(short *)(iVar26 + 0x30) = (short)uVar51;
                              uVar33 = 0x2a0;
                              goto LAB_000cde5c;
                            }
                            if ((uVar49 != 0) &&
                               (*(char *)(DAT_000d2c58 + uVar49 * 3 + 0xd20b4) != '\x01')) {
                              uVar47 = uVar49 - 1;
                              uVar51 = uVar47 & 7;
                              uVar33 = uVar49;
                              iVar48 = iVar21;
                              if (uVar51 == 0) {
LAB_000d2168:
                                do {
                                  uVar47 = uVar33 - 1;
                                  if (uVar47 == 0) {
                                    uVar51 = 0;
                                    goto LAB_000d220c;
                                  }
                                } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                          (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01'))
                                         && (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01'))
                                        && (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01'
                                             && (uVar47 = uVar33 - 5,
                                                *(char *)(iVar48 + -0xd) != '\x01')) &&
                                            ((uVar47 = uVar33 - 6,
                                             *(char *)(iVar48 + -0x10) != '\x01' &&
                                             ((uVar47 = uVar33 - 7,
                                              *(char *)(iVar48 + -0x13) != '\x01' &&
                                              (uVar47 = uVar33 - 8,
                                              pcVar30 = (char *)(iVar48 + -0x16), uVar33 = uVar47,
                                              iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))))))));
                              }
                              else {
                                iVar48 = iVar21 + -3;
                                if (*(char *)(iVar21 + -1) != '\x01') {
                                  uVar33 = uVar47;
                                  if (uVar51 != 1) {
                                    iVar22 = iVar48;
                                    if (uVar51 != 2) {
                                      if (uVar51 != 3) {
                                        if (uVar51 != 4) {
                                          if (uVar51 != 5) {
                                            if (uVar51 != 6) {
                                              iVar22 = iVar21 + -6;
                                              uVar47 = uVar49 - 2;
                                              if (*(char *)(iVar21 + -4) == '\x01')
                                              goto LAB_000d220a;
                                            }
                                            iVar48 = iVar22 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d220a;
                                          }
                                          iVar22 = iVar48 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d220a;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d220a;
                                      }
                                      iVar22 = iVar48 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d220a;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar33 = uVar47 - 1;
                                    uVar47 = uVar33;
                                    if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d220a;
                                  }
                                  goto LAB_000d2168;
                                }
                              }
LAB_000d220a:
                              uVar51 = uVar47 & 0xffff;
                            }
LAB_000d220c:
                            *(short *)(iVar26 + 0x30) = (short)uVar51;
                            uVar33 = 0x2f2;
                            goto LAB_000cde5c;
                          }
                          if ((uVar49 != 0) &&
                             (*(char *)(DAT_000d1f0c + uVar49 * 3 + 0xd19ec) != '\x01')) {
                            uVar47 = uVar49 - 1;
                            uVar51 = uVar47 & 7;
                            uVar33 = uVar49;
                            iVar48 = iVar21;
                            if (uVar51 == 0) {
LAB_000d1aa0:
                              do {
                                uVar47 = uVar33 - 1;
                                if (uVar47 == 0) {
                                  uVar51 = 0;
                                  goto LAB_000d5aec;
                                }
                              } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                        (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                       (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                      (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                        (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01'))
                                       && ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01'
                                           && ((uVar47 = uVar33 - 7,
                                               *(char *)(iVar48 + -0x13) != '\x01' &&
                                               (uVar47 = uVar33 - 8,
                                               pcVar30 = (char *)(iVar48 + -0x16), uVar33 = uVar47,
                                               iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))))))));
                            }
                            else {
                              iVar48 = iVar21 + -3;
                              if (*(char *)(iVar21 + -1) != '\x01') {
                                uVar33 = uVar47;
                                if (uVar51 != 1) {
                                  iVar22 = iVar48;
                                  if (uVar51 != 2) {
                                    if (uVar51 != 3) {
                                      if (uVar51 != 4) {
                                        if (uVar51 != 5) {
                                          if (uVar51 != 6) {
                                            iVar22 = iVar21 + -6;
                                            uVar47 = uVar49 - 2;
                                            if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000d1b3a;
                                          }
                                          iVar48 = iVar22 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d1b3a;
                                        }
                                        iVar22 = iVar48 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d1b3a;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d1b3a;
                                    }
                                    iVar22 = iVar48 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d1b3a;
                                  }
                                  iVar48 = iVar22 + -3;
                                  uVar33 = uVar47 - 1;
                                  uVar47 = uVar33;
                                  if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d1b3a;
                                }
                                goto LAB_000d1aa0;
                              }
                            }
LAB_000d1b3a:
                            uVar51 = uVar47 & 0xffff;
                          }
LAB_000d5aec:
                          *(short *)(iVar26 + 0x30) = (short)uVar51;
                          uVar33 = 0x2aa;
                          goto LAB_000cde5c;
                        }
                        if (uVar3 != 0x5fd) {
                          if (uVar3 < 0x5fe) {
                            if (uVar3 != 0x5fa) {
LAB_000d0b26:
                              uVar33 = 0x92e;
                              goto LAB_000cd1a0;
                            }
                            if ((uVar49 != 0) &&
                               (*(char *)(DAT_000d488c + uVar49 * 3 + 0xd3e56) != '\x01')) {
                              uVar47 = uVar49 - 1;
                              uVar51 = uVar47 & 7;
                              uVar33 = uVar49;
                              iVar48 = iVar21;
                              if (uVar51 == 0) {
LAB_000d3f08:
                                do {
                                  uVar47 = uVar33 - 1;
                                  if (uVar47 == 0) {
                                    uVar51 = 0;
                                    goto LAB_000d3fa8;
                                  }
                                } while (((((*(char *)(iVar48 + -1) != '\x01') &&
                                           (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01'))
                                          && (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')
                                          ) && ((uVar47 = uVar33 - 4,
                                                *(char *)(iVar48 + -10) != '\x01' &&
                                                (uVar47 = uVar33 - 5,
                                                *(char *)(iVar48 + -0xd) != '\x01')))) &&
                                        ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01'
                                         && ((uVar47 = uVar33 - 7,
                                             *(char *)(iVar48 + -0x13) != '\x01' &&
                                             (pcVar30 = (char *)(iVar48 + -0x16),
                                             uVar47 = uVar33 - 8, uVar33 = uVar47,
                                             iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))))));
                              }
                              else {
                                iVar48 = iVar21 + -3;
                                if (*(char *)(iVar21 + -1) != '\x01') {
                                  uVar33 = uVar47;
                                  if (uVar51 != 1) {
                                    iVar22 = iVar48;
                                    if (uVar51 != 2) {
                                      if (uVar51 != 3) {
                                        if (uVar51 != 4) {
                                          if (uVar51 != 5) {
                                            if (uVar51 != 6) {
                                              iVar22 = iVar21 + -6;
                                              uVar47 = uVar49 - 2;
                                              if (*(char *)(iVar21 + -4) == '\x01')
                                              goto LAB_000d3fa6;
                                            }
                                            iVar48 = iVar22 + -3;
                                            uVar47 = uVar47 - 1;
                                            if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d3fa6;
                                          }
                                          iVar22 = iVar48 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d3fa6;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d3fa6;
                                      }
                                      iVar22 = iVar48 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d3fa6;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar33 = uVar47 - 1;
                                    uVar47 = uVar33;
                                    if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d3fa6;
                                  }
                                  goto LAB_000d3f08;
                                }
                              }
LAB_000d3fa6:
                              uVar51 = uVar47 & 0xffff;
                            }
LAB_000d3fa8:
                            *(short *)(iVar26 + 0x30) = (short)uVar51;
                            uVar33 = 0x2f5;
                            goto LAB_000cde5c;
                          }
                          if (uVar3 != 0x60b) {
                            if (uVar3 != 0x613) goto LAB_000d0b26;
                            if ((uVar49 != 0) &&
                               (iVar48 = uVar49 * 3,
                               *(char *)(DAT_000cef04 + iVar48 + 0xced6e) != '\x01')) {
                              uVar51 = uVar49 - 1 & 7;
                              iVar22 = uVar49 * -3;
                              uVar33 = uVar49;
                              iVar46 = iVar21;
                              if (uVar51 == 0) {
LAB_000cee1e:
                                do {
                                  uVar47 = uVar33 - 1;
                                  if (uVar47 == 0) {
                                    uVar51 = 0;
                                    goto LAB_000ceec2;
                                  }
                                } while ((((*(char *)(iVar46 + iVar22 + iVar48 + -1) != '\x01') &&
                                          (uVar47 = uVar33 - 2,
                                          *(char *)(iVar46 + iVar22 + iVar48 + -4) != '\x01')) &&
                                         (uVar47 = uVar33 - 3,
                                         *(char *)(iVar46 + iVar22 + iVar48 + -7) != '\x01')) &&
                                        (((uVar47 = uVar33 - 4,
                                          *(char *)(iVar46 + iVar22 + iVar48 + -10) != '\x01' &&
                                          (uVar47 = uVar33 - 5,
                                          *(char *)(iVar46 + iVar22 + iVar48 + -0xd) != '\x01')) &&
                                         ((uVar47 = uVar33 - 6, *(char *)(iVar46 + -0x10) != '\x01'
                                          && ((uVar47 = uVar33 - 7,
                                              *(char *)(iVar46 + -0x13) != '\x01' &&
                                              (uVar47 = uVar33 - 8,
                                              pcVar30 = (char *)(iVar46 + -0x16), uVar33 = uVar47,
                                              iVar46 = iVar46 + -0x18, *pcVar30 != '\x01'))))))));
                              }
                              else {
                                iVar46 = iVar21 + -3;
                                uVar33 = uVar49 - 1;
                                uVar47 = uVar33;
                                if (*(char *)(iVar21 + -1) != '\x01') {
                                  if (uVar51 != 1) {
                                    iVar20 = iVar46;
                                    if (uVar51 != 2) {
                                      if (uVar51 != 3) {
                                        if (uVar51 != 4) {
                                          if (uVar51 != 5) {
                                            if (uVar51 != 6) {
                                              iVar20 = iVar21 + -6;
                                              uVar33 = uVar49 - 2;
                                              uVar47 = uVar33;
                                              if (*(char *)(iVar21 + -4) == '\x01')
                                              goto LAB_000ceec0;
                                            }
                                            iVar46 = iVar20 + -3;
                                            uVar33 = uVar33 - 1;
                                            uVar47 = uVar33;
                                            if (*(char *)(iVar20 + -1) == '\x01') goto LAB_000ceec0;
                                          }
                                          iVar20 = iVar46 + -3;
                                          uVar33 = uVar33 - 1;
                                          uVar47 = uVar33;
                                          if (*(char *)(iVar46 + -1) == '\x01') goto LAB_000ceec0;
                                        }
                                        iVar46 = iVar20 + -3;
                                        uVar33 = uVar33 - 1;
                                        uVar47 = uVar33;
                                        if (*(char *)(iVar20 + -1) == '\x01') goto LAB_000ceec0;
                                      }
                                      iVar20 = iVar46 + -3;
                                      uVar33 = uVar33 - 1;
                                      uVar47 = uVar33;
                                      if (*(char *)(iVar46 + -1) == '\x01') goto LAB_000ceec0;
                                    }
                                    iVar46 = iVar20 + -3;
                                    uVar33 = uVar33 - 1;
                                    uVar47 = uVar33;
                                    if (*(char *)(iVar20 + -1) == '\x01') goto LAB_000ceec0;
                                  }
                                  goto LAB_000cee1e;
                                }
                              }
LAB_000ceec0:
                              uVar51 = uVar47 & 0xffff;
                            }
LAB_000ceec2:
                            *(short *)(iVar26 + 0x30) = (short)uVar51;
                            uVar33 = 0x302;
                            goto LAB_000cde5c;
                          }
                          if ((uVar49 != 0) &&
                             (*(char *)(DAT_000d4888 + uVar49 * 3 + 0xd3ce0) != '\x01')) {
                            uVar47 = uVar49 - 1;
                            uVar51 = uVar47 & 7;
                            uVar33 = uVar49;
                            iVar48 = iVar21;
                            if (uVar51 == 0) {
LAB_000d3d94:
                              do {
                                uVar47 = uVar33 - 1;
                                if (uVar47 == 0) {
                                  uVar51 = 0;
                                  goto LAB_000d3e30;
                                }
                              } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                        (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                       (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                      (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                        (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01'))
                                       && ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01'
                                           && ((uVar47 = uVar33 - 7,
                                               *(char *)(iVar48 + -0x13) != '\x01' &&
                                               (uVar47 = uVar33 - 8,
                                               pcVar30 = (char *)(iVar48 + -0x16), uVar33 = uVar47,
                                               iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'))))))));
                            }
                            else {
                              iVar48 = iVar21 + -3;
                              if (*(char *)(iVar21 + -1) != '\x01') {
                                uVar33 = uVar47;
                                if (uVar51 != 1) {
                                  iVar22 = iVar48;
                                  if (uVar51 != 2) {
                                    if (uVar51 != 3) {
                                      if (uVar51 != 4) {
                                        if (uVar51 != 5) {
                                          if (uVar51 != 6) {
                                            iVar22 = iVar21 + -6;
                                            uVar47 = uVar49 - 2;
                                            if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000d3e2e;
                                          }
                                          iVar48 = iVar22 + -3;
                                          uVar47 = uVar47 - 1;
                                          if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d3e2e;
                                        }
                                        iVar22 = iVar48 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d3e2e;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d3e2e;
                                    }
                                    iVar22 = iVar48 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d3e2e;
                                  }
                                  iVar48 = iVar22 + -3;
                                  uVar33 = uVar47 - 1;
                                  uVar47 = uVar33;
                                  if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d3e2e;
                                }
                                goto LAB_000d3d94;
                              }
                            }
LAB_000d3e2e:
                            uVar51 = uVar47 & 0xffff;
                          }
LAB_000d3e30:
                          *(short *)(iVar26 + 0x30) = (short)uVar51;
                          uVar33 = 0x2fd;
                          goto LAB_000cde5c;
                        }
                        if ((uVar49 != 0) &&
                           (*(char *)(DAT_000d1f10 + uVar49 * 3 + 0xd1b50) != '\x01')) {
                          uVar47 = uVar49 - 1;
                          uVar51 = uVar47 & 7;
                          uVar33 = uVar49;
                          iVar48 = iVar21;
                          if (uVar51 == 0) {
LAB_000d1c04:
                            do {
                              uVar47 = uVar33 - 1;
                              if (uVar47 == 0) {
                                uVar51 = 0;
                                goto LAB_000d1ca4;
                              }
                            } while ((((((*(char *)(iVar48 + -1) != '\x01') &&
                                        (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                       (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                      ((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                       (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01'))))
                                     && (uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01'))
                                    && ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01' &&
                                        (pcVar30 = (char *)(iVar48 + -0x16), uVar47 = uVar33 - 8,
                                        uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\x01'
                                        ))));
                          }
                          else {
                            iVar48 = iVar21 + -3;
                            if (*(char *)(iVar21 + -1) != '\x01') {
                              uVar33 = uVar47;
                              if (uVar51 != 1) {
                                iVar22 = iVar48;
                                if (uVar51 != 2) {
                                  if (uVar51 != 3) {
                                    if (uVar51 != 4) {
                                      if (uVar51 != 5) {
                                        if (uVar51 != 6) {
                                          iVar22 = iVar21 + -6;
                                          uVar47 = uVar49 - 2;
                                          if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000d1ca2;
                                        }
                                        iVar48 = iVar22 + -3;
                                        uVar47 = uVar47 - 1;
                                        if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d1ca2;
                                      }
                                      iVar22 = iVar48 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d1ca2;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d1ca2;
                                  }
                                  iVar22 = iVar48 + -3;
                                  uVar47 = uVar47 - 1;
                                  if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d1ca2;
                                }
                                iVar48 = iVar22 + -3;
                                uVar33 = uVar47 - 1;
                                uVar47 = uVar33;
                                if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d1ca2;
                              }
                              goto LAB_000d1c04;
                            }
                          }
LAB_000d1ca2:
                          uVar51 = uVar47 & 0xffff;
                        }
LAB_000d1ca4:
                        *(short *)(iVar26 + 0x30) = (short)uVar51;
                        uVar33 = 0x2f7;
                        goto LAB_000cde5c;
                      }
                      if ((uVar49 != 0) &&
                         (*(char *)(DAT_000d4884 + uVar49 * 3 + 0xd3b12) != '\x01')) {
                        uVar47 = uVar49 - 1;
                        uVar51 = uVar47 & 7;
                        uVar33 = uVar49;
                        iVar48 = iVar21;
                        if (uVar51 == 0) {
LAB_000d3bc6:
                          do {
                            uVar47 = uVar33 - 1;
                            if (uVar47 == 0) {
                              uVar51 = 0;
                              goto LAB_000d3c6a;
                            }
                          } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                    (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                   (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                  (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                    (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01')) &&
                                   ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01' &&
                                    ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01' &&
                                     (uVar47 = uVar33 - 8, pcVar30 = (char *)(iVar48 + -0x16),
                                     uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\x01')))
                                    )))));
                        }
                        else {
                          iVar48 = iVar21 + -3;
                          if (*(char *)(iVar21 + -1) != '\x01') {
                            uVar33 = uVar47;
                            if (uVar51 != 1) {
                              iVar22 = iVar48;
                              if (uVar51 != 2) {
                                if (uVar51 != 3) {
                                  if (uVar51 != 4) {
                                    if (uVar51 != 5) {
                                      if (uVar51 != 6) {
                                        iVar22 = iVar21 + -6;
                                        uVar47 = uVar49 - 2;
                                        if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000d3c68;
                                      }
                                      iVar48 = iVar22 + -3;
                                      uVar47 = uVar47 - 1;
                                      if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d3c68;
                                    }
                                    iVar22 = iVar48 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d3c68;
                                  }
                                  iVar48 = iVar22 + -3;
                                  uVar47 = uVar47 - 1;
                                  if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d3c68;
                                }
                                iVar22 = iVar48 + -3;
                                uVar47 = uVar47 - 1;
                                if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d3c68;
                              }
                              iVar48 = iVar22 + -3;
                              uVar33 = uVar47 - 1;
                              uVar47 = uVar33;
                              if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d3c68;
                            }
                            goto LAB_000d3bc6;
                          }
                        }
LAB_000d3c68:
                        uVar51 = uVar47 & 0xffff;
                      }
LAB_000d3c6a:
                      *(short *)(iVar26 + 0x30) = (short)uVar51;
                      uVar33 = 0x2f4;
                      goto LAB_000cde5c;
                    }
                    if ((uVar49 != 0) && (*(char *)(DAT_000d2c5c + uVar49 * 3 + 0xd224a) != '\x01'))
                    {
                      uVar47 = uVar49 - 1;
                      uVar51 = uVar47 & 7;
                      uVar33 = uVar49;
                      iVar48 = iVar21;
                      if (uVar51 == 0) {
LAB_000d22fe:
                        do {
                          uVar47 = uVar33 - 1;
                          if (uVar47 == 0) {
                            uVar51 = 0;
                            goto LAB_000d239a;
                          }
                        } while ((((*(char *)(iVar48 + -1) != '\x01') &&
                                  (uVar47 = uVar33 - 2, *(char *)(iVar48 + -4) != '\x01')) &&
                                 (uVar47 = uVar33 - 3, *(char *)(iVar48 + -7) != '\x01')) &&
                                (((uVar47 = uVar33 - 4, *(char *)(iVar48 + -10) != '\x01' &&
                                  (uVar47 = uVar33 - 5, *(char *)(iVar48 + -0xd) != '\x01')) &&
                                 ((uVar47 = uVar33 - 6, *(char *)(iVar48 + -0x10) != '\x01' &&
                                  ((uVar47 = uVar33 - 7, *(char *)(iVar48 + -0x13) != '\x01' &&
                                   (uVar47 = uVar33 - 8, pcVar30 = (char *)(iVar48 + -0x16),
                                   uVar33 = uVar47, iVar48 = iVar48 + -0x18, *pcVar30 != '\x01')))))
                                 )));
                      }
                      else {
                        iVar48 = iVar21 + -3;
                        if (*(char *)(iVar21 + -1) != '\x01') {
                          uVar33 = uVar47;
                          if (uVar51 != 1) {
                            iVar22 = iVar48;
                            if (uVar51 != 2) {
                              if (uVar51 != 3) {
                                if (uVar51 != 4) {
                                  if (uVar51 != 5) {
                                    if (uVar51 != 6) {
                                      iVar22 = iVar21 + -6;
                                      uVar47 = uVar49 - 2;
                                      if (*(char *)(iVar21 + -4) == '\x01') goto LAB_000d2398;
                                    }
                                    iVar48 = iVar22 + -3;
                                    uVar47 = uVar47 - 1;
                                    if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d2398;
                                  }
                                  iVar22 = iVar48 + -3;
                                  uVar47 = uVar47 - 1;
                                  if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d2398;
                                }
                                iVar48 = iVar22 + -3;
                                uVar47 = uVar47 - 1;
                                if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d2398;
                              }
                              iVar22 = iVar48 + -3;
                              uVar47 = uVar47 - 1;
                              if (*(char *)(iVar48 + -1) == '\x01') goto LAB_000d2398;
                            }
                            iVar48 = iVar22 + -3;
                            uVar33 = uVar47 - 1;
                            uVar47 = uVar33;
                            if (*(char *)(iVar22 + -1) == '\x01') goto LAB_000d2398;
                          }
                          goto LAB_000d22fe;
                        }
                      }
LAB_000d2398:
                      uVar51 = uVar47 & 0xffff;
                    }
LAB_000d239a:
                    *(short *)(iVar26 + 0x30) = (short)uVar51;
                    uVar33 = 0x286;
                  }
                }
              }
LAB_000cde5c:
              if (uVar49 != uVar47) {
                iVar21 = DAT_000ce270 + 0xcde74;
                cVar31 = *(char *)(iVar21 + uVar49 * 3);
                if ((cVar31 == '\x15') || (*(char *)(iVar21 + uVar49 * 3 + 2) == '\x01')) {
                  if ((*(char *)(DAT_000d0480 + 0xd022e + uVar51 * 3) == '\x15') ||
                     (*(char *)(DAT_000d0480 + 0xd022e + uVar51 * 3 + 2) == '\x01')) {
                    if (cVar31 != '\x15') goto LAB_000cdea0;
                  }
                  else {
                    *(int *)(puVar52 + -2) = *(int *)(puVar52 + -2) + 0x8c;
                  }
                }
                else if (*(char *)(iVar21 + uVar51 * 3) == '\x15') {
LAB_000cdeb6:
                  if (*(uint *)(puVar52 + -2) < 0x8d) {
                    *(undefined4 *)(puVar52 + -2) = *(undefined4 *)(DAT_000ce278 + 0xcded4);
                  }
                  else {
                    *(uint *)(puVar52 + -2) = *(uint *)(puVar52 + -2) - 0x8c;
                  }
                }
                else if (*(char *)(iVar21 + uVar51 * 3 + 2) == '\x01') {
LAB_000cdea0:
                  if (*(char *)(DAT_000ce274 + uVar49 * 3 + 0xcdeac) != '\x01') goto LAB_000cdeb6;
                }
              }
            }
LAB_000cd1a0:
            if (uVar33 == 0x92e) {
              uVar49 = (uint)*(byte *)(DAT_000cd548 + 0xcd251);
            }
            else {
              iVar21 = (uint)*(ushort *)(iVar55 + 0x3c) * 3;
              cVar31 = *(char *)(iVar32 + iVar21);
              if ((cVar31 == '\x15') || (*(char *)(iVar32 + iVar21 + 2) == '\x01')) {
                if ((*(char *)(DAT_000cd544 + 0xcd200 + uVar33 * 3) == '\x15') ||
                   (*(char *)(DAT_000cd544 + 0xcd200 + uVar33 * 3 + 2) == '\x01')) {
                  if (cVar31 != '\x15') goto LAB_000cd234;
                }
                else {
                  *(int *)(iVar55 + 0x38) = *(int *)(iVar55 + 0x38) + 0x8c;
                }
              }
              else if (*(char *)(iVar32 + uVar33 * 3) == '\x15') {
LAB_000cd240:
                if (*(uint *)(iVar55 + 0x38) < 0x8d) {
                  *(undefined4 *)(iVar55 + 0x38) = *(undefined4 *)(iVar44 + 0xcced6);
                }
                else {
                  *(uint *)(iVar55 + 0x38) = *(uint *)(iVar55 + 0x38) - 0x8c;
                }
              }
              else if (*(char *)(iVar32 + uVar33 * 3 + 2) == '\x01') {
LAB_000cd234:
                if (*(char *)((uint)*(ushort *)(iVar55 + 0x3c) * 3 + iVar11 + 0xcceda) != '\x01')
                goto LAB_000cd240;
              }
              *(short *)(iVar55 + 0x3c) = (short)uVar33;
              uVar49 = (uint)*(byte *)(iVar15 + 0xccef5);
            }
          }
LAB_000cd130:
          puVar52 = puVar52 + 0xc;
          iVar26 = iVar26 + 0x18;
          bVar61 = (int)uVar56 < (int)(uVar49 - 1);
          uVar56 = uVar56 + 1;
        } while (bVar61);
      }
      if (uVar49 != 0) {
        uVar56 = (uint)*(byte *)(DAT_000cf7b8 + 0xcfe26);
        goto LAB_000cc7c4;
      }
    }
    else {
      uVar51 = uVar33 - uVar56;
      if (0 < (int)uVar51) {
        uVar49 = 0;
LAB_000cca3e:
        iVar26 = DAT_000cd4f8;
        iVar11 = DAT_000cd4f4;
        iVar44 = DAT_000cd4f0;
        iVar15 = DAT_000cd4e8;
        iVar32 = DAT_000cd4e8 + 0xcca46;
        uVar47 = *(uint *)(DAT_000cd4e8 + 0xcd3da);
        if (uVar47 < 100) {
          iVar16 = DAT_000cd4ec + 0xccd6a;
          do {
            *(uint *)(iVar15 + 0xcca5e) = uVar56 + 1;
            if (uVar51 == 1) {
              pbVar42 = (byte *)(*(int *)(iVar15 + 0xcca52) + uVar56);
LAB_000ccafe:
              iVar55 = DAT_000cd51c;
              iVar21 = DAT_000cd508;
              iVar19 = DAT_000cd4fc;
              uVar53 = uVar56 + 2;
              if (uVar33 < uVar53) {
                *(uint *)(DAT_000cd508 + 0xccb20) = uVar56 + 1;
                *(uint *)(iVar21 + 0xcd4a4) = uVar47 + 1;
LAB_000ccb16:
                if ((*pbVar42 - 0x20 & 0xff) < 0x5f) {
                  puVar45 = (undefined4 *)(iVar16 + (*pbVar42 - 0x20) * 8);
                  cVar31 = *(char *)(puVar45 + 1);
                  if (cVar31 == '\0') {
                    uVar53 = *(uint *)(iVar26 + 0xcca7c);
                  }
                  else {
                    if (cVar31 == '\v' || cVar31 == '\x06') {
                      *(int *)(iVar11 + 0xcd3fe) = *(int *)(iVar11 + 0xcd3fe) + 1;
                    }
LAB_000ccb48:
                    if (((code *)*puVar45 == (code *)0x0) ||
                       (iVar19 = (*(code *)*puVar45)(*(undefined1 *)((int)puVar45 + 5)), -1 < iVar19
                       )) {
                      if (*(byte *)(puVar45 + 1) == 0xc || (*(byte *)(puVar45 + 1) & 0xfb) == 10) {
                        uVar49 = (uint)*(byte *)(DAT_000cd520 + 0xcceb1);
                        break;
                      }
                      uVar33 = *(uint *)(DAT_000cd50c + 0xccb82);
                      uVar53 = *(uint *)(DAT_000cd50c + 0xccb7e);
                    }
                    else {
                      uVar33 = *(uint *)(DAT_000ceef8 + 0xce59e);
                      uVar53 = *(uint *)(DAT_000ceef8 + 0xce59a);
                    }
                  }
                }
                else {
                  uVar53 = *(uint *)(iVar44 + 0xcca78);
                }
              }
              else {
                if ((*pbVar42 & 0xf0) < 0x80) {
                  *(uint *)(DAT_000cd51c + 0xcce8e) = uVar56 + 1;
                  *(uint *)(iVar55 + 0xcd812) = uVar47 + 1;
                  goto LAB_000ccb16;
                }
                *(uint *)(DAT_000cd4fc + 0xcca9a) = uVar53;
                *(uint *)(iVar19 + 0xcd41e) = uVar47 + 2;
                bVar13 = *pbVar42;
                if (bVar13 != 0xa3) {
                  if (bVar13 == 0xa1) {
                    bVar13 = pbVar42[1];
                    if (bVar13 == 0xa1) {
                      uVar49 = 0;
                      iVar19 = DAT_000d3af0 + 0xd3802;
                      goto LAB_000ced1c;
                    }
                    if (bVar13 == 0xaa) {
                      iVar21 = 8;
                      iVar19 = DAT_000d3af8 + 0xd39ec;
                    }
                    else {
                      if (bVar13 != 0xad) goto LAB_000ccaa6;
                      iVar21 = 0x10;
                      iVar19 = DAT_000cf7ac + 0xcf160;
                    }
                  }
                  else {
                    if ((bVar13 != 0xa2) || (pbVar42[1] != 0xa6)) goto LAB_000ccaa6;
                    iVar21 = 0;
                    iVar19 = DAT_000cf7c0 + 0xcf656;
                  }
LAB_000ced1e:
                  puVar45 = (undefined4 *)(iVar21 + iVar19);
                  if (*(char *)(puVar45 + 1) == '\0') goto LAB_000ccaa6;
                  goto LAB_000ccb48;
                }
                uVar49 = pbVar42[1] - 0xa1;
                if (uVar49 < 0x5e) {
                  iVar19 = DAT_000cef00 + 0xced3a;
LAB_000ced1c:
                  iVar21 = uVar49 << 3;
                  goto LAB_000ced1e;
                }
              }
LAB_000ccaa6:
              uVar51 = uVar33 - uVar53;
              bVar13 = *(byte *)(DAT_000cd500 + 0xccad5);
            }
            else {
              iVar19 = *(int *)(iVar15 + 0xcca52);
              pbVar42 = (byte *)(iVar19 + uVar56);
              uVar53 = (uint)*(byte *)(iVar19 + uVar56);
              if ((((0x185d < (pbVar42[1] - 0xb0a1) + uVar53 * 0x100) || (uVar51 < 2)) ||
                  (uVar51 = (uint)*(byte *)(iVar19 + uVar56 + 1), 0x18 < uVar53 - 0xb0)) ||
                 ((0x5d < uVar51 - 0xa1 ||
                  (iVar19 = uVar53 * 0x5e + uVar51 + -0x4141, 0x7ffffffd < uVar56))))
              goto LAB_000ccafe;
              *(uint *)(iVar15 + 0xcca56) = uVar56 + 2;
              iVar55 = uVar49 * 0x18 + 0x30;
              *(uint *)(iVar15 + 0xcd3da) = uVar47 + 2;
              iVar21 = iVar32 + iVar55;
              *(int *)(iVar15 + 0xcd3de) = iVar21;
              *(undefined1 *)(iVar21 + 4) = *(undefined1 *)(iVar15 + 0xcca72);
              uVar2 = *(undefined1 *)(iVar15 + 0xcca67);
              *(undefined4 *)(iVar21 + 8) = 0;
              *(undefined1 *)(iVar21 + 5) = uVar2;
              *(undefined4 *)(iVar32 + iVar55) = 0;
              *(undefined1 *)(iVar21 + 0xf) = 0;
              *(undefined1 *)(iVar21 + 0x11) = 0;
              *(undefined4 *)(iVar21 + 0x14) = 0;
              *(undefined2 *)(iVar21 + 0xc) = 0x92e;
              *(undefined1 *)(iVar21 + 0xe) = 7;
              *(undefined1 *)(iVar21 + 0x10) = 7;
              *(undefined1 *)(iVar21 + 0x12) = 1;
              *(undefined1 *)(iVar21 + 0x13) = 1;
              *(undefined1 *)(*(int *)(iVar15 + 0xcd3de) + 5) = *(undefined1 *)(iVar15 + 0xcca67);
              *(undefined1 *)(*(int *)(iVar15 + 0xcd3de) + 4) = *(undefined1 *)(iVar15 + 0xcca72);
              iVar21 = DAT_000cd518;
              if ((*(char *)(iVar15 + 0xcd3d7) == '\x01') &&
                 (iVar55 = iVar19 * 3, *(char *)(DAT_000cf7c4 + 0xcf650 + iVar55) != '\x15')) {
                if (*(char *)(DAT_000cf7c4 + 0xcf650 + iVar55 + 2) == '\x01') {
                  iVar55 = 0x104;
                }
                else {
                  iVar55 = 400;
                }
              }
              else {
                iVar55 = 0x104;
              }
              iVar55 = iVar55 + *(short *)(DAT_000cd518 + 0xccdd2);
              if (iVar55 < *(int *)(DAT_000cd518 + 0xccdb0)) {
                *(int *)(*(int *)(DAT_000cd518 + 0xcd744) + 8) = *(int *)(DAT_000cd518 + 0xccdb0);
              }
              else {
                *(int *)(*(int *)(DAT_000cd518 + 0xcd744) + 8) = iVar55;
              }
              iVar55 = *(int *)(*(int *)(iVar21 + 0xcd744) + 8);
              if (0x7fffffffU - iVar55 < *(uint *)(iVar21 + 0xccdd4)) {
                uVar56 = *(uint *)(iVar21 + 0xccdbc);
                uVar33 = *(uint *)(iVar21 + 0xccdc0);
                pbVar42 = (byte *)(*(int *)(iVar21 + 0xccdb8) + uVar56);
                uVar47 = *(uint *)(iVar21 + 0xcd740);
                goto LAB_000ccafe;
              }
              *(uint *)(iVar21 + 0xccdd4) = *(uint *)(iVar21 + 0xccdd4) + iVar55;
              *(short *)(*(int *)(iVar21 + 0xcd744) + 0xc) = (short)iVar19;
              *(undefined4 *)(*(int *)(iVar21 + 0xcd744) + 0x14) = *(undefined4 *)(iVar21 + 0xccdc4)
              ;
              *(undefined1 *)(*(int *)(iVar21 + 0xcd744) + 0xe) = *(undefined1 *)(iVar21 + 0xcd748);
              *(undefined1 *)(*(int *)(iVar21 + 0xcd744) + 0xf) = *(undefined1 *)(iVar21 + 0xcd749);
              *(undefined1 *)(*(int *)(iVar21 + 0xcd744) + 0x10) = *(undefined1 *)(iVar21 + 0xcd74a)
              ;
              *(undefined1 *)(*(int *)(iVar21 + 0xcd744) + 0x11) = *(undefined1 *)(iVar21 + 0xcd74b)
              ;
              *(undefined1 *)(*(int *)(iVar21 + 0xcd744) + 0x12) = *(undefined1 *)(iVar21 + 0xcd73e)
              ;
              *(undefined1 *)(*(int *)(iVar21 + 0xcd744) + 0x13) = *(undefined1 *)(iVar21 + 0xcd73f)
              ;
              bVar13 = *(char *)(iVar21 + 0xccdd1) + 1;
              *(undefined1 *)(iVar21 + 0xcd748) = 7;
              *(char *)(iVar21 + 0xccdd0) = *(char *)(iVar21 + 0xccdd0) + '\x01';
              *(byte *)(iVar21 + 0xccdd1) = bVar13;
              *(undefined1 *)(iVar21 + 0xcd74a) = 7;
              *(undefined1 *)(iVar21 + 0xcd749) = 0;
              *(undefined1 *)(iVar21 + 0xcd74b) = 0;
              *(undefined1 *)(iVar21 + 0xcd73e) = 1;
              *(undefined1 *)(iVar21 + 0xcd73f) = 1;
              uVar33 = *(uint *)(iVar21 + 0xccdc0);
              uVar53 = *(uint *)(iVar21 + 0xccdbc);
              *(char *)(iVar21 + 0xcd73c) = *(char *)(iVar21 + 0xcd73c) + '\x01';
              uVar51 = uVar33 - uVar53;
            }
            uVar49 = (uint)bVar13;
            if ((((int)uVar51 < 1) || (99 < uVar49)) ||
               (uVar47 = *(uint *)(DAT_000cd504 + 0xcd45c), uVar56 = uVar53, 99 < uVar47)) break;
          } while( true );
        }
        goto LAB_000cce8e;
      }
    }
    uVar56 = (uint)*(byte *)(DAT_000cd540 + 0xcdaf6);
  }
  else {
    uVar56 = (uint)*(byte *)(DAT_000cd4d4 + 0xcd12c);
    if (uVar49 < uVar56) goto LAB_000cc95a;
    if (uVar49 == uVar56) {
      uVar49 = *(uint *)(DAT_000cd4d4 + 840000);
      *(byte *)(DAT_000cd4d4 + 0xcd12c) = *(byte *)(DAT_000cd4d4 + 0xcc7b1) + 1;
      if (uVar49 == 0) {
        uVar49 = 1;
      }
      *(undefined4 *)((int)&DAT_000cd53c + iVar44 + 2) = *(undefined4 *)(iVar44 + 0xccb92);
      if (param_2 < 5) {
        *(undefined4 *)((int)&DAT_000cd534 + iVar44 + 2) = 0;
        return -3;
      }
      iVar15 = *(int *)(iVar44 + 0xccb86);
      if (iVar15 == 0x14) {
        uVar56 = uVar49 * 0x666 >> 0xf;
LAB_000ccbd2:
        uVar51 = iVar15 * uVar56;
        uVar33 = uVar56;
        if (uVar51 < uVar49) {
          iVar44 = 0;
          do {
            uVar33 = uVar56 + 1;
            if (uVar49 <= uVar51 + iVar44 + iVar15) break;
            iVar44 = iVar44 + iVar15 + iVar15;
            uVar33 = uVar56 + 2;
            if (uVar49 <= uVar51 + iVar44) break;
            iVar44 = iVar44 + iVar15;
            uVar33 = uVar56 + 3;
            if (uVar49 <= uVar51 + iVar44) break;
            iVar44 = iVar44 + iVar15;
            uVar33 = uVar56 + 4;
            if (uVar49 <= uVar51 + iVar44) break;
            iVar44 = iVar44 + iVar15;
            uVar33 = uVar56 + 5;
            if (uVar49 <= uVar51 + iVar44) break;
            iVar44 = iVar44 + iVar15;
            uVar33 = uVar56 + 6;
            if (uVar49 <= uVar51 + iVar44) break;
            iVar44 = iVar44 + iVar15;
            uVar33 = uVar56 + 7;
            if (uVar49 <= uVar51 + iVar44) break;
            iVar44 = iVar44 + iVar15;
            uVar33 = uVar56 + 8;
            if (uVar49 <= uVar51 + iVar44) break;
            iVar44 = iVar44 + iVar15;
            uVar33 = uVar56 + 9;
            if (uVar49 <= uVar51 + iVar44) break;
            iVar44 = iVar44 + iVar15;
            uVar33 = uVar56 + 10;
            if (uVar49 <= uVar51 + iVar44) break;
            iVar44 = iVar44 + iVar15;
            uVar33 = uVar56 + 0xb;
            if (uVar49 <= uVar51 + iVar44) break;
            iVar44 = iVar44 + iVar15;
            uVar33 = uVar56 + 0xc;
            if (uVar49 <= uVar51 + iVar44) break;
            iVar44 = iVar44 + iVar15;
            uVar33 = uVar56 + 0xd;
            if (uVar49 <= uVar51 + iVar44) break;
            iVar44 = iVar44 + iVar15;
            uVar33 = uVar56 + 0xe;
            if (uVar49 <= uVar51 + iVar44) break;
            iVar44 = iVar44 + iVar15;
            uVar33 = uVar56 + 0xf;
            if (uVar49 <= uVar51 + iVar44) break;
            iVar44 = iVar44 + iVar15;
            uVar56 = uVar56 + 0x10;
            uVar33 = uVar56;
          } while (uVar51 + iVar44 < uVar49);
        }
        if (uVar33 < 0x200000) {
          if (0x3fff < uVar33) {
            bVar17 = (byte)((uVar33 << 0xb) >> 0x19) | 0x80;
            bVar13 = (byte)((uVar33 << 0x12) >> 0x19) | 0x80;
            bVar50 = (byte)uVar33 & 0x7f;
            goto LAB_000d1dfe;
          }
          if (uVar33 < 0x80) goto LAB_000cccd2;
          bVar50 = (byte)uVar33 & 0x7f;
          bVar13 = (byte)((uVar33 << 0x12) >> 0x19) | 0x80;
          iVar26 = 2;
          iVar11 = 4;
          iVar15 = 3;
          iVar44 = 1;
          iVar32 = 0;
        }
        else {
          bVar13 = 0xff;
          bVar50 = 0x7f;
          bVar17 = 0xff;
LAB_000d1dfe:
          iVar26 = 3;
          iVar15 = 4;
          iVar44 = 2;
          iVar32 = 1;
          *param_1 = bVar17;
          iVar11 = 5;
        }
        param_1[iVar32] = bVar13;
      }
      else {
        if (0x1fffe < uVar49) {
          uVar56 = __udivsi3(uVar49,iVar15);
          goto LAB_000ccbd2;
        }
        if (iVar15 != 0) {
          uVar33 = *(int *)(iVar44 + 0xccb8a) * uVar49;
          uVar56 = uVar33 >> 0xf;
          if ((uVar33 & 0x4000) != 0) {
            uVar56 = uVar56 + 1;
          }
          goto LAB_000ccbd2;
        }
        uVar33 = 0;
LAB_000cccd2:
        bVar50 = (byte)uVar33;
        iVar26 = 1;
        iVar11 = 3;
        iVar15 = 2;
        iVar44 = 0;
      }
      iVar32 = DAT_000cd514 + 0xcccee;
      goto LAB_000cc93c;
    }
LAB_000cc7c4:
    if (uVar56 < uVar49) {
      iVar11 = DAT_000cf7c8 + 0xd0176;
      iVar15 = DAT_000cf7cc + 0xd0178;
      iVar44 = DAT_000cf7d0 + 0xd0186;
      local_48 = uVar56;
LAB_000cf6f2:
      iVar32 = DAT_000d03e0;
      iVar26 = DAT_000cf7d4;
      iVar21 = DAT_000cf7d4 + 0xcf700;
      iVar16 = local_48 * 0x18 + 0x30;
      iVar55 = iVar21 + iVar16;
      iVar19 = *(int *)(iVar21 + iVar16);
      if (iVar19 != 1) {
        if (iVar19 == 2) {
          if (*(uint *)(DAT_000cf7d4 + 0xd00b4) < 0x7fffffffU - *(int *)(iVar55 + 8)) {
            *(uint *)(DAT_000cf7d4 + 0xd00b4) =
                 *(uint *)(DAT_000cf7d4 + 0xd00b4) + *(int *)(iVar55 + 8);
          }
          iVar21 = DAT_000cf7e0 + 0xcf79c;
          goto LAB_000cf79a;
        }
        uVar56 = local_48 + 1;
        uVar2 = (undefined1)uVar56;
        if (iVar19 != 0) {
          if (iVar19 != 3) {
            if (iVar19 != 4) {
              if (iVar19 != 5) {
                uVar56 = uVar56 & 0xff;
                *(undefined1 *)(DAT_000cf7d4 + 0xd00a0) = uVar2;
                iVar26 = 0;
                goto LAB_000cf73a;
              }
              *(undefined1 *)(DAT_000cf7d4 + 0xd00a0) = uVar2;
              if (*(int *)(iVar21 + iVar16) != 5) goto LAB_000d4150;
              if (param_2 < 5) goto LAB_000d6b0a;
              iVar32 = *(int *)(iVar55 + 8);
              if (iVar32 == 0) {
                uVar49 = *(uint *)(iVar26 + 0xd00b4);
                *(undefined4 *)(iVar26 + 0xd00b8) = 0;
                *(undefined4 *)(iVar26 + 0xd00b4) = 0;
              }
              else {
                uVar49 = iVar32 - *(int *)(iVar26 + 0xd00b0);
                *(int *)(iVar26 + 0xd00b4) =
                     (*(int *)(iVar26 + 0xd00b4) + *(int *)(iVar26 + 0xd00b0)) - iVar32;
                *(undefined4 *)(iVar26 + 0xd00b0) = *(undefined4 *)(iVar55 + 8);
                if (uVar49 < *(uint *)(iVar26 + 0xd00b8)) {
                  *(uint *)(DAT_000d4894 + 0xd4b64) = *(uint *)(iVar26 + 0xd00b8) - uVar49;
                }
                else {
                  *(undefined4 *)(DAT_000d6ddc + 0xd74ac) = 0;
                }
              }
              iVar26 = *(int *)(DAT_000d4898 + 0xd41ba);
              if (iVar26 == 0x14) {
                uVar56 = uVar49 * 0x666 >> 0xf;
LAB_000d41d4:
                uVar51 = iVar26 * uVar56;
                uVar33 = uVar56;
                if (uVar51 < uVar49) {
                  iVar32 = 0;
                  do {
                    uVar33 = uVar56 + 1;
                    if (uVar49 <= iVar32 + iVar26 + uVar51) break;
                    iVar32 = iVar32 + iVar26 + iVar26;
                    uVar33 = uVar56 + 2;
                    if (uVar49 <= iVar32 + uVar51) break;
                    iVar32 = iVar32 + iVar26;
                    uVar33 = uVar56 + 3;
                    if (uVar49 <= iVar32 + uVar51) break;
                    iVar32 = iVar32 + iVar26;
                    uVar33 = uVar56 + 4;
                    if (uVar49 <= iVar32 + uVar51) break;
                    iVar32 = iVar32 + iVar26;
                    uVar33 = uVar56 + 5;
                    if (uVar49 <= iVar32 + uVar51) break;
                    iVar32 = iVar32 + iVar26;
                    uVar33 = uVar56 + 6;
                    if (uVar49 <= iVar32 + uVar51) break;
                    iVar32 = iVar32 + iVar26;
                    uVar33 = uVar56 + 7;
                    if (uVar49 <= iVar32 + uVar51) break;
                    iVar32 = iVar32 + iVar26;
                    uVar33 = uVar56 + 8;
                    if (uVar49 <= iVar32 + uVar51) break;
                    iVar32 = iVar32 + iVar26;
                    uVar33 = uVar56 + 9;
                    if (uVar49 <= iVar32 + uVar51) break;
                    iVar32 = iVar32 + iVar26;
                    uVar33 = uVar56 + 10;
                    if (uVar49 <= iVar32 + uVar51) break;
                    iVar32 = iVar32 + iVar26;
                    uVar33 = uVar56 + 0xb;
                    if (uVar49 <= iVar32 + uVar51) break;
                    iVar32 = iVar32 + iVar26;
                    uVar33 = uVar56 + 0xc;
                    if (uVar49 <= iVar32 + uVar51) break;
                    iVar32 = iVar32 + iVar26;
                    uVar33 = uVar56 + 0xd;
                    if (uVar49 <= iVar32 + uVar51) break;
                    iVar32 = iVar32 + iVar26;
                    uVar33 = uVar56 + 0xe;
                    if (uVar49 <= iVar32 + uVar51) break;
                    iVar32 = iVar32 + iVar26;
                    uVar33 = uVar56 + 0xf;
                    if (uVar49 <= iVar32 + uVar51) break;
                    iVar32 = iVar32 + iVar26;
                    uVar56 = uVar56 + 0x10;
                    uVar33 = uVar56;
                  } while (iVar32 + uVar51 < uVar49);
                }
                if (uVar33 < 0x200000) {
                  if (0x3fff < uVar33) {
                    bVar50 = (byte)((uVar33 << 0xb) >> 0x19) | 0x80;
                    bVar13 = (byte)((uVar33 << 0x12) >> 0x19) | 0x80;
                    bVar17 = (byte)uVar33 & 0x7f;
                    goto LAB_000d42e2;
                  }
                  if (uVar33 < 0x80) goto LAB_000d6a9c;
                  iVar19 = 2;
                  bVar13 = (byte)((uVar33 << 0x12) >> 0x19) | 0x80;
                  bVar17 = (byte)uVar33 & 0x7f;
                  iVar26 = 4;
                  iVar16 = 3;
                  iVar21 = 1;
                  iVar32 = 0;
                }
                else {
                  bVar13 = 0xff;
                  bVar50 = 0xff;
                  bVar17 = 0x7f;
LAB_000d42e2:
                  iVar19 = 3;
                  iVar16 = 4;
                  iVar21 = 2;
                  iVar32 = 1;
                  *param_1 = bVar50;
                  iVar26 = 5;
                }
                param_1[iVar32] = bVar13;
              }
              else {
                if (0x1fffe < uVar49) {
                  uVar56 = __udivsi3(uVar49,iVar26);
                  goto LAB_000d41d4;
                }
                if (iVar26 != 0) {
                  uVar33 = *(int *)(DAT_000d4898 + 0xd41be) * uVar49;
                  uVar56 = uVar33 >> 0xf;
                  if ((uVar33 & 0x4000) != 0) {
                    uVar56 = uVar56 + 1;
                  }
                  goto LAB_000d41d4;
                }
                uVar33 = 0;
LAB_000d6a9c:
                bVar17 = (byte)uVar33;
                iVar19 = 1;
                iVar26 = 3;
                iVar16 = 2;
                iVar21 = 0;
              }
              param_1[iVar21] = bVar17;
              param_1[iVar19] = 0xc0;
              bVar13 = *(byte *)(iVar55 + 5);
              if ((int)((uint)bVar13 << 0x18) < 0) {
                if (0xe2 < bVar13) {
                  bVar13 = 0xe3;
                }
                param_1[iVar16] = bVar13;
              }
              else {
                if (0x62 < bVar13) {
                  bVar13 = 99;
                }
                param_1[iVar16] = bVar13;
              }
              uVar56 = (uint)*(byte *)(DAT_000d489c + 0xd4cc2);
              goto LAB_000cf73a;
            }
            *(undefined1 *)(DAT_000cf7d4 + 0xd00a0) = uVar2;
            if (*(int *)(iVar21 + iVar16) != 4) goto LAB_000d4150;
            if (param_2 < 6) goto LAB_000d6b0a;
            iVar32 = *(int *)(iVar55 + 8);
            if (iVar32 == 0) {
              uVar49 = *(uint *)(iVar26 + 0xd00b4);
              *(undefined4 *)(iVar26 + 0xd00b8) = 0;
              *(undefined4 *)(iVar26 + 0xd00b4) = 0;
            }
            else {
              uVar56 = *(uint *)(iVar26 + 0xd00b8);
              uVar49 = iVar32 - *(int *)(iVar26 + 0xd00b0);
              *(int *)(iVar26 + 0xd00b4) =
                   (*(int *)(iVar26 + 0xd00b4) + *(int *)(iVar26 + 0xd00b0)) - iVar32;
              uVar14 = *(undefined4 *)(iVar55 + 8);
              if (uVar49 < uVar56) {
                *(uint *)(iVar26 + 0xd00b8) = uVar56 - uVar49;
              }
              *(undefined4 *)(iVar26 + 0xd00b0) = uVar14;
              if (uVar49 >= uVar56) {
                *(undefined4 *)(iVar26 + 0xd00b8) = 0;
              }
            }
            iVar26 = *(int *)(DAT_000d48a0 + 0xd4386);
            if (iVar26 == 0x14) {
              uVar56 = uVar49 * 0x666 >> 0xf;
LAB_000d43a0:
              uVar51 = iVar26 * uVar56;
              uVar33 = uVar56;
              if (uVar51 < uVar49) {
                iVar32 = 0;
                do {
                  uVar33 = uVar56 + 1;
                  if (uVar49 <= iVar32 + iVar26 + uVar51) break;
                  iVar32 = iVar32 + iVar26 + iVar26;
                  uVar33 = uVar56 + 2;
                  if (uVar49 <= iVar32 + uVar51) break;
                  iVar32 = iVar32 + iVar26;
                  uVar33 = uVar56 + 3;
                  if (uVar49 <= iVar32 + uVar51) break;
                  iVar32 = iVar32 + iVar26;
                  uVar33 = uVar56 + 4;
                  if (uVar49 <= iVar32 + uVar51) break;
                  iVar32 = iVar32 + iVar26;
                  uVar33 = uVar56 + 5;
                  if (uVar49 <= iVar32 + uVar51) break;
                  iVar32 = iVar32 + iVar26;
                  uVar33 = uVar56 + 6;
                  if (uVar49 <= iVar32 + uVar51) break;
                  iVar32 = iVar32 + iVar26;
                  uVar33 = uVar56 + 7;
                  if (uVar49 <= iVar32 + uVar51) break;
                  iVar32 = iVar32 + iVar26;
                  uVar33 = uVar56 + 8;
                  if (uVar49 <= iVar32 + uVar51) break;
                  iVar32 = iVar32 + iVar26;
                  uVar33 = uVar56 + 9;
                  if (uVar49 <= iVar32 + uVar51) break;
                  iVar32 = iVar32 + iVar26;
                  uVar33 = uVar56 + 10;
                  if (uVar49 <= iVar32 + uVar51) break;
                  iVar32 = iVar32 + iVar26;
                  uVar33 = uVar56 + 0xb;
                  if (uVar49 <= iVar32 + uVar51) break;
                  iVar32 = iVar32 + iVar26;
                  uVar33 = uVar56 + 0xc;
                  if (uVar49 <= iVar32 + uVar51) break;
                  iVar32 = iVar32 + iVar26;
                  uVar33 = uVar56 + 0xd;
                  if (uVar49 <= iVar32 + uVar51) break;
                  iVar32 = iVar32 + iVar26;
                  uVar33 = uVar56 + 0xe;
                  if (uVar49 <= iVar32 + uVar51) break;
                  iVar32 = iVar32 + iVar26;
                  uVar33 = uVar56 + 0xf;
                  if (uVar49 <= iVar32 + uVar51) break;
                  iVar32 = iVar32 + iVar26;
                  uVar56 = uVar56 + 0x10;
                  uVar33 = uVar56;
                } while (iVar32 + uVar51 < uVar49);
              }
              if (uVar33 < 0x200000) {
                if (0x3fff < uVar33) {
                  bVar50 = (byte)((uVar33 << 0xb) >> 0x19) | 0x80;
                  bVar13 = (byte)((uVar33 << 0x12) >> 0x19) | 0x80;
                  bVar17 = (byte)uVar33 & 0x7f;
                  goto LAB_000d449c;
                }
                if (uVar33 < 0x80) goto LAB_000d5272;
                bVar17 = (byte)uVar33 & 0x7f;
                bVar13 = (byte)((uVar33 << 0x12) >> 0x19) | 0x80;
                iVar21 = 2;
                iVar26 = 5;
                iVar32 = 4;
                iVar19 = 3;
                iVar16 = 1;
                iVar48 = 0;
              }
              else {
                bVar13 = 0xff;
                bVar50 = 0xff;
                bVar17 = 0x7f;
LAB_000d449c:
                iVar21 = 3;
                iVar32 = 5;
                iVar19 = 4;
                iVar16 = 2;
                iVar48 = 1;
                *param_1 = bVar50;
                iVar26 = 6;
              }
              param_1[iVar48] = bVar13;
            }
            else {
              if (0x1fffe < uVar49) {
                uVar56 = __udivsi3(uVar49,iVar26);
                goto LAB_000d43a0;
              }
              if (iVar26 != 0) {
                uVar33 = *(int *)(DAT_000d48a0 + 0xd438a) * uVar49;
                uVar56 = uVar33 >> 0xf;
                if ((uVar33 & 0x4000) != 0) {
                  uVar56 = uVar56 + 1;
                }
                goto LAB_000d43a0;
              }
              uVar33 = 0;
LAB_000d5272:
              bVar17 = (byte)uVar33;
              iVar21 = 1;
              iVar26 = 4;
              iVar32 = 3;
              iVar19 = 2;
              iVar16 = 0;
            }
            param_1[iVar16] = bVar17;
            param_1[iVar21] = 0xb0;
            param_1[iVar19] = '\x14';
            iVar16 = DAT_000d48a8;
            bVar13 = *(byte *)(iVar55 + 5);
            uVar49 = (uint)(byte)(bVar13 - 1);
            if ((4 < uVar49) && (uVar49 = 0, bVar13 != 0)) {
              if (4 < bVar13) {
                bVar13 = 5;
              }
              uVar49 = (uint)(byte)(bVar13 - 1);
            }
            param_1[iVar32] = (uchar)*(undefined2 *)(DAT_000d48a4 + uVar49 * 2 + 0xd5394);
            uVar56 = (uint)*(byte *)(iVar16 + 0xd4e9e);
            goto LAB_000cf73a;
          }
          *(undefined1 *)(DAT_000cf7d4 + 0xd00a0) = uVar2;
          if (*(int *)(iVar21 + iVar16) != 3) {
LAB_000d4150:
            uVar56 = uVar56 & 0xff;
            iVar26 = 0;
            goto LAB_000cf73a;
          }
          if (param_2 < 6) {
LAB_000d6b0a:
            uVar56 = uVar56 & 0xff;
            iVar26 = -3;
            goto LAB_000cf73a;
          }
          iVar32 = *(int *)(iVar55 + 8);
          if (iVar32 == 0) {
            uVar49 = *(uint *)(iVar26 + 0xd00b4);
            *(undefined4 *)(iVar26 + 0xd00b8) = 0;
            *(undefined4 *)(iVar26 + 0xd00b4) = 0;
          }
          else {
            uVar56 = *(uint *)(iVar26 + 0xd00b8);
            uVar49 = iVar32 - *(int *)(iVar26 + 0xd00b0);
            *(int *)(iVar26 + 0xd00b4) =
                 (*(int *)(iVar26 + 0xd00b4) + *(int *)(iVar26 + 0xd00b0)) - iVar32;
            uVar14 = *(undefined4 *)(iVar55 + 8);
            if (uVar49 < uVar56) {
              *(uint *)(iVar26 + 0xd00b8) = uVar56 - uVar49;
            }
            *(undefined4 *)(iVar26 + 0xd00b0) = uVar14;
            if (uVar49 >= uVar56) {
              *(undefined4 *)(iVar26 + 0xd00b8) = 0;
            }
          }
          iVar26 = *(int *)(DAT_000d54d8 + 0xd508e);
          if (iVar26 == 0x14) {
            uVar56 = uVar49 * 0x666 >> 0xf;
LAB_000d50aa:
            uVar51 = iVar26 * uVar56;
            uVar33 = uVar56;
            if (uVar51 < uVar49) {
              iVar32 = 0;
              do {
                uVar33 = uVar56 + 1;
                if (uVar49 <= uVar51 + iVar32 + iVar26) break;
                iVar32 = iVar32 + iVar26 + iVar26;
                uVar33 = uVar56 + 2;
                if (uVar49 <= uVar51 + iVar32) break;
                iVar32 = iVar32 + iVar26;
                uVar33 = uVar56 + 3;
                if (uVar49 <= uVar51 + iVar32) break;
                iVar32 = iVar32 + iVar26;
                uVar33 = uVar56 + 4;
                if (uVar49 <= uVar51 + iVar32) break;
                iVar32 = iVar32 + iVar26;
                uVar33 = uVar56 + 5;
                if (uVar49 <= uVar51 + iVar32) break;
                iVar32 = iVar32 + iVar26;
                uVar33 = uVar56 + 6;
                if (uVar49 <= uVar51 + iVar32) break;
                iVar32 = iVar32 + iVar26;
                uVar33 = uVar56 + 7;
                if (uVar49 <= uVar51 + iVar32) break;
                iVar32 = iVar32 + iVar26;
                uVar33 = uVar56 + 8;
                if (uVar49 <= uVar51 + iVar32) break;
                iVar32 = iVar32 + iVar26;
                uVar33 = uVar56 + 9;
                if (uVar49 <= uVar51 + iVar32) break;
                iVar32 = iVar32 + iVar26;
                uVar33 = uVar56 + 10;
                if (uVar49 <= uVar51 + iVar32) break;
                iVar32 = iVar32 + iVar26;
                uVar33 = uVar56 + 0xb;
                if (uVar49 <= uVar51 + iVar32) break;
                iVar32 = iVar32 + iVar26;
                uVar33 = uVar56 + 0xc;
                if (uVar49 <= uVar51 + iVar32) break;
                iVar32 = iVar32 + iVar26;
                uVar33 = uVar56 + 0xd;
                if (uVar49 <= uVar51 + iVar32) break;
                iVar32 = iVar32 + iVar26;
                uVar33 = uVar56 + 0xe;
                if (uVar49 <= uVar51 + iVar32) break;
                iVar32 = iVar32 + iVar26;
                uVar33 = uVar56 + 0xf;
                if (uVar49 <= uVar51 + iVar32) break;
                iVar32 = iVar32 + iVar26;
                uVar56 = uVar56 + 0x10;
                uVar33 = uVar56;
              } while (uVar51 + iVar32 < uVar49);
            }
            if (uVar33 < 0x200000) {
              if (0x3fff < uVar33) {
                bVar50 = (byte)((uVar33 << 0xb) >> 0x19) | 0x80;
                bVar13 = (byte)((uVar33 << 0x12) >> 0x19) | 0x80;
                bVar17 = (byte)uVar33 & 0x7f;
                goto LAB_000d51b8;
              }
              if (uVar33 < 0x80) goto LAB_000d530c;
              bVar17 = (byte)uVar33 & 0x7f;
              bVar13 = (byte)((uVar33 << 0x12) >> 0x19) | 0x80;
              iVar32 = 2;
              iVar26 = 5;
              iVar16 = 4;
              iVar21 = 3;
              iVar19 = 1;
              iVar48 = 0;
            }
            else {
              bVar13 = 0xff;
              bVar50 = 0xff;
              bVar17 = 0x7f;
LAB_000d51b8:
              iVar32 = 3;
              iVar16 = 5;
              iVar21 = 4;
              iVar19 = 2;
              iVar48 = 1;
              *param_1 = bVar50;
              iVar26 = 6;
            }
            param_1[iVar48] = bVar13;
          }
          else {
            if (0x1fffe < uVar49) {
              uVar56 = __udivsi3(uVar49,iVar26);
              goto LAB_000d50aa;
            }
            if (iVar26 != 0) {
              uVar33 = *(int *)(DAT_000d54d8 + 0xd5092) * uVar49;
              uVar56 = uVar33 >> 0xf;
              if ((uVar33 & 0x4000) != 0) {
                uVar56 = uVar56 + 1;
              }
              goto LAB_000d50aa;
            }
            uVar33 = 0;
LAB_000d530c:
            bVar17 = (byte)uVar33;
            iVar32 = 1;
            iVar26 = 4;
            iVar16 = 3;
            iVar21 = 2;
            iVar19 = 0;
          }
          param_1[iVar19] = bVar17;
          param_1[iVar32] = 0xb0;
          iVar32 = DAT_000d54dc;
          param_1[iVar21] = '\x16';
          bVar13 = *(byte *)(iVar55 + 5);
          if (9 < bVar13) {
            bVar13 = 9;
            *(undefined1 *)(iVar55 + 5) = 9;
          }
          param_1[iVar16] = bVar13;
          uVar56 = (uint)*(byte *)(iVar32 + 0xd5b92);
          goto LAB_000cf73a;
        }
        uVar56 = uVar56 & 0xff;
        *(undefined4 *)(DAT_000cf7d4 + 0xd00b0) = 0;
        *(undefined1 *)(iVar26 + 0xd00a0) = uVar2;
        uVar3 = *(ushort *)(iVar55 + 0xc);
        *(undefined1 *)(iVar32 + 0xcf807) = 0;
        *(undefined4 *)(iVar32 + 0xcf802) = 0;
        *(undefined1 *)(iVar32 + 0xcf808) = 0;
        *(undefined4 *)(iVar32 + 0xcf7fe) = 0;
        *(undefined1 *)(iVar32 + 0xcfa8b) = 0;
        *(undefined1 *)(iVar32 + 0xcf90a) = 0;
        *(undefined1 *)(iVar32 + 0xcf809) = 0;
        *(undefined1 *)(iVar32 + 0xcfb8c) = 0;
        *(undefined1 *)(iVar32 + 0xcf806) = 0;
        *(undefined1 *)(iVar32 + 0xcfc0f) = 0;
        *(undefined1 *)((int)&DAT_000d0410 + iVar32 + 2) = 0;
        *(undefined1 *)(iVar32 + 0xcfc0e) = 0;
        iVar16 = DAT_000d03e4;
        if (0x92d < uVar3) {
          iVar26 = 0;
          goto LAB_000cf73a;
        }
        iVar19 = (uint)uVar3 * 3;
        *(ushort *)(iVar32 + 0xcf80a) = uVar3;
        iVar21 = iVar16 + 0xcf83a + iVar19;
        bVar13 = *(byte *)(iVar16 + 0xcf83a + iVar19);
        iVar16 = DAT_000d03e8 + 0xcf848;
        bVar17 = *(byte *)(iVar21 + 1);
        bVar50 = *(byte *)(iVar21 + 2);
        uVar14 = *(undefined4 *)(iVar55 + 8);
        *(undefined1 *)(iVar32 + 0xcf808) = 1;
        bVar5 = *(byte *)(iVar55 + 4);
        bVar6 = *(byte *)(iVar55 + 5);
        bVar13 = *(char *)((uint)bVar13 * 0x15 + iVar16 + 0xa9c) +
                 *(char *)((uint)bVar17 * 0x15 + iVar16 + 0xaa3) +
                 *(char *)(iVar16 + (uint)bVar50 * 0x15 + 0xaaa);
        cVar31 = *(char *)(iVar55 + 0x12);
        local_98 = (ushort *)(uint)bVar13;
        *(undefined4 *)(iVar32 + 0xcf7fe) = uVar14;
        *(byte *)(iVar32 + 0xcf809) = bVar13;
        *(byte *)(iVar32 + 0xcf806) = bVar6;
        *(byte *)(iVar32 + 0xcf807) = bVar5;
        *(undefined1 *)(iVar32 + 0xcfc0e) = 1;
        uVar33 = (uint)*(byte *)(iVar26 + 0xcf720);
        if (cVar31 == '\0') {
          if (uVar33 != 5) {
            *(undefined1 *)(iVar32 + 0xcfc12) = 0;
            *(undefined4 *)(iVar32 + 0xcfc16) = 0;
            *(undefined1 *)(iVar32 + 0xcfc1e) = 0;
            *(undefined1 *)(iVar32 + 0xcfc0f) = 1;
          }
          uVar51 = (uint)(uVar33 != 5);
        }
        else {
          uVar51 = 0;
        }
        iVar26 = DAT_000d03ec;
        if (*(char *)(iVar55 + 0x13) == '\0') {
          *(undefined1 *)(DAT_000d03ec + 0xd04d8) = 0;
          *(undefined4 *)(iVar26 + 0xd04dc) = 0;
          *(undefined1 *)(iVar26 + 0xd04e4) = 0;
          *(undefined1 *)(iVar26 + 0xd04d4) = 1;
        }
        iVar26 = DAT_000d03f0;
        bVar13 = *(byte *)(iVar55 + 0xe);
        if (bVar13 < 7) {
          uVar2 = *(undefined1 *)(iVar55 + 0xf);
          iVar32 = DAT_000d03f0 + 0xcfcf6 + uVar51 * 0x10;
          *(byte *)(iVar32 + 4) = bVar13;
          cVar31 = *(char *)(iVar26 + 0xcfcf7);
          *(undefined4 *)(iVar32 + 0xc) = uVar14;
          bVar17 = cVar31 + 1;
          *(undefined1 *)(iVar32 + 0x10) = uVar2;
          *(undefined4 *)(iVar32 + 8) = 0;
          uVar51 = (uint)bVar17;
          *(byte *)(iVar26 + 0xcfcf7) = bVar17;
        }
        if (uVar33 == 5) {
          if (bVar13 < 7) {
            uVar47 = uVar51 - 1;
            uVar51 = uVar47 & 0xff;
            *(char *)(DAT_000d62a4 + 0xd6151) = (char)uVar47;
          }
          iVar26 = DAT_000d62ac;
          iVar32 = DAT_000d62a8 + 0xd5d52 + (uVar49 + uVar56 & 0x1f) * 2;
          uVar2 = *(undefined1 *)(iVar32 + 0xd3c);
          iVar16 = DAT_000d62ac + 0xd6168 + uVar51 * 0x10;
          uVar8 = *(undefined1 *)(iVar32 + 0xd3d);
          *(undefined4 *)(iVar16 + 0xc) = uVar14;
          *(undefined1 *)(iVar16 + 4) = uVar2;
          cVar31 = *(char *)(iVar26 + 0xd6169);
          *(undefined1 *)(iVar16 + 0x10) = uVar8;
          *(undefined4 *)(iVar16 + 8) = 0;
          *(char *)(iVar26 + 0xd6169) = cVar31 + '\x01';
        }
        iVar26 = DAT_000d03f4;
        if (*(byte *)(iVar55 + 0x10) < 7) {
          uVar2 = *(undefined1 *)(iVar55 + 0x11);
          iVar16 = (uint)*(byte *)(DAT_000d03f4 + 0xd0532) * 0x10 + 0x808;
          iVar32 = DAT_000d03f4 + 0xcfd2e + iVar16;
          *(byte *)(DAT_000d03f4 + 0xcfd2e + iVar16) = *(byte *)(iVar55 + 0x10);
          *(undefined4 *)(iVar32 + 8) = uVar14;
          *(undefined1 *)(iVar32 + 0xc) = uVar2;
          *(undefined4 *)(iVar32 + 4) = 0;
          *(char *)(iVar26 + 0xd0532) = *(char *)(iVar26 + 0xd0532) + '\x01';
        }
        iVar22 = DAT_000d03f8 + 0xcf950;
        cVar31 = *(char *)(DAT_000d03f8 + 0xd02fe) + '\x01';
        *(char *)(DAT_000d03f8 + 0xd02fe) = cVar31;
        iVar48 = DAT_000d0414;
        iVar21 = DAT_000d0410;
        iVar19 = DAT_000d040c;
        iVar16 = DAT_000d0408;
        iVar32 = DAT_000d0404;
        iVar26 = DAT_000d0400;
        if (uVar56 < uVar49) {
          iVar46 = *(int *)(iVar22 + uVar56 * 0x18 + 0x30);
          uVar51 = uVar56;
          if (iVar46 == 0) {
            local_9c = (uint)*(byte *)(DAT_000d6284 + 0xd5f3c);
          }
          else {
            iVar20 = uVar56 * 0x18 + iVar22 + 0x30;
            local_9c = (uint)*(byte *)(DAT_000d03fc + 0xcfd9a);
            iVar27 = DAT_000d0400 + 0xcfdac;
            iVar28 = DAT_000d0404 + 0xcfdae;
            iVar34 = DAT_000d0408 + 0xcfdb4;
            iVar22 = *(int *)(DAT_000d03fc + 0xcf98a);
            iVar39 = DAT_000d040c + 0xcfdcc;
            uVar53 = (uint)*(byte *)(DAT_000d03fc + 0xcfd18);
            iVar35 = DAT_000d0410 + 0xcfdd8;
            iVar40 = DAT_000d0414 + 0xcfdde;
            bVar61 = true;
            uVar47 = uVar56;
            do {
              uVar58 = uVar47 + 1;
              if (iVar46 == 1) {
                cVar7 = *(char *)(iVar20 + 0x12);
                *(char *)(iVar32 + 0xcfdae) = (char)local_9c + '\x01';
                iVar46 = *(int *)(iVar20 + 8);
                if (((cVar7 == '\0') && (uVar33 != 5)) &&
                   (-1 < (int)((uint)*(byte *)(iVar32 + 0xcfdaf) << 0x18))) {
                  iVar23 = iVar28 + (uint)*(byte *)(iVar32 + 0xcfdaf) * 0x10;
                  *(undefined1 *)(iVar23 + 4) = 0;
                  cVar7 = *(char *)(iVar32 + 0xcfdaf);
                  *(undefined1 *)(iVar23 + 0x10) = 0;
                  *(int *)(iVar23 + 8) = iVar22;
                  *(char *)(iVar32 + 0xcfdaf) = cVar7 + '\x01';
                }
                if ((*(char *)(iVar20 + 0x13) == '\0') &&
                   (-1 < (int)((uint)*(byte *)(iVar48 + 0xd05e2) << 0x18))) {
                  iVar36 = (uint)*(byte *)(iVar48 + 0xd05e2) * 0x10 + 0x808;
                  iVar23 = iVar40 + iVar36;
                  *(undefined1 *)(iVar40 + iVar36) = 0;
                  *(undefined1 *)(iVar23 + 0xc) = 0;
                  *(int *)(iVar23 + 4) = iVar22;
                  *(char *)(iVar48 + 0xd05e2) = *(char *)(iVar48 + 0xd05e2) + '\x01';
                }
                if ((*(byte *)(iVar20 + 0xe) < 7) &&
                   (-1 < (int)((uint)*(byte *)(iVar21 + 0xcfdd9) << 0x18))) {
                  bVar10 = false;
                  iVar23 = iVar35 + (uint)*(byte *)(iVar21 + 0xcfdd9) * 0x10;
                  uVar2 = *(undefined1 *)(iVar20 + 0xf);
                  *(byte *)(iVar23 + 4) = *(byte *)(iVar20 + 0xe);
                  cVar7 = *(char *)(iVar21 + 0xcfdd9);
                  *(int *)(iVar23 + 8) = iVar22;
                  *(int *)(iVar23 + 0xc) = iVar46;
                  *(undefined1 *)(iVar23 + 0x10) = uVar2;
                  *(char *)(iVar21 + 0xcfdd9) = cVar7 + '\x01';
                }
                else {
                  bVar10 = true;
                }
                if (uVar33 == 5) {
                  if (bVar10) {
                    bVar13 = *(byte *)(DAT_000d2c60 + 0xd28f3);
                  }
                  else {
                    bVar13 = *(char *)(DAT_000d2c6c + 0xd2aad) - 1;
                    *(byte *)(DAT_000d2c6c + 0xd2aad) = bVar13;
                  }
                  if (-1 < (int)((uint)bVar13 << 0x18)) {
                    iVar23 = iVar39 + (uint)bVar13 * 0x10;
                    iVar36 = DAT_000d2c64 + 0xd24f6 + (uVar49 + uVar58 & 0x1f) * 2;
                    uVar2 = *(undefined1 *)(iVar36 + 0xd3d);
                    *(undefined1 *)(iVar23 + 4) = *(undefined1 *)(iVar36 + 0xd3c);
                    cVar7 = *(char *)(iVar19 + 0xcfdcd);
                    *(undefined1 *)(iVar23 + 0x10) = uVar2;
                    *(int *)(iVar23 + 8) = iVar22;
                    *(int *)(iVar23 + 0xc) = iVar46;
                    *(char *)(iVar19 + 0xcfdcd) = cVar7 + '\x01';
                  }
                }
                if ((*(byte *)(iVar20 + 0x10) < 7) &&
                   (-1 < (int)((uint)*(byte *)(iVar16 + 0xd05b8) << 0x18))) {
                  iVar36 = (uint)*(byte *)(iVar16 + 0xd05b8) * 0x10 + 0x808;
                  uVar2 = *(undefined1 *)(iVar20 + 0x11);
                  iVar23 = iVar34 + iVar36;
                  *(byte *)(iVar34 + iVar36) = *(byte *)(iVar20 + 0x10);
                  *(undefined1 *)(iVar23 + 0xc) = uVar2;
                  *(int *)(iVar23 + 4) = iVar22;
                  *(int *)(iVar23 + 8) = iVar46;
                  *(char *)(iVar16 + 0xd05b8) = *(char *)(iVar16 + 0xd05b8) + '\x01';
                }
                if ((uVar53 & 0x80) == 0) {
                  if (*(char *)(iVar20 + 5) == '\x01') {
                    if (bVar61) {
                      bVar61 = false;
                      iVar23 = uVar53 * 4;
                      uVar53 = uVar53 + 1 & 0xff;
                      *(int *)(DAT_000d54e4 + iVar23 + 0xd56f4) = iVar22;
                    }
                    else {
                      bVar61 = false;
                    }
                  }
                  else if (*(char *)(iVar20 + 5) == '\0') {
                    if (bVar61) {
                      bVar61 = true;
                    }
                    else {
                      bVar61 = true;
                      iVar23 = uVar53 * 4;
                      uVar53 = uVar53 + 1 & 0xff;
                      *(int *)(DAT_000d1f14 + iVar23 + 0xd20cc) = iVar22;
                    }
                  }
                }
                iVar22 = iVar22 + iVar46;
                local_9c = (uint)*(byte *)(DAT_000d1f18 + 0xd21d0);
                if (uVar49 <= uVar58) goto LAB_000d1dc6;
              }
              else {
                if (uVar49 <= uVar58) {
LAB_000d1dc6:
                  iVar26 = DAT_000d1f1c;
                  *(int *)(DAT_000d1f1c + 0xd1dd2) = iVar22;
                  *(char *)(iVar26 + 0xd2160) = (char)uVar53;
                  goto LAB_000cfbb4;
                }
                if (*(int *)(iVar20 + 0x18) != 0) {
                  if (*(int *)(iVar20 + 0x18) != 1) {
                    uVar41 = ~uVar58 + uVar49 & 7;
                    iVar23 = iVar20;
                    uVar29 = uVar58;
                    if (uVar41 != 0) {
                      uVar29 = uVar47 + 2;
                      if ((uVar49 <= uVar29) || (*(int *)(iVar20 + 0x30) == 0)) goto LAB_000cfb82;
                      iVar23 = iVar20 + 0x18;
                      if (*(int *)(iVar20 + 0x30) == 1) goto LAB_000cfb32;
                      if (uVar41 != 1) {
                        if (uVar41 != 2) {
                          if (uVar41 != 3) {
                            if (uVar41 != 4) {
                              if (uVar41 != 5) {
                                if (uVar41 != 6) {
                                  uVar29 = uVar47 + 3;
                                  if (*(int *)(iVar20 + 0x48) == 0) goto LAB_000cfb82;
                                  iVar23 = iVar20 + 0x30;
                                  if (*(int *)(iVar20 + 0x48) == 1) goto LAB_000cfb32;
                                }
                                piVar24 = (int *)(iVar23 + 0x30);
                                uVar29 = uVar29 + 1;
                                if (*piVar24 == 0) goto LAB_000cfb82;
                                iVar23 = iVar23 + 0x18;
                                if (*piVar24 == 1) goto LAB_000cfb32;
                              }
                              piVar24 = (int *)(iVar23 + 0x30);
                              uVar29 = uVar29 + 1;
                              if (*piVar24 == 0) goto LAB_000cfb82;
                              iVar23 = iVar23 + 0x18;
                              if (*piVar24 == 1) goto LAB_000cfb32;
                            }
                            piVar24 = (int *)(iVar23 + 0x30);
                            uVar29 = uVar29 + 1;
                            if (*piVar24 == 0) goto LAB_000cfb82;
                            iVar23 = iVar23 + 0x18;
                            if (*piVar24 == 1) goto LAB_000cfb32;
                          }
                          piVar24 = (int *)(iVar23 + 0x30);
                          uVar29 = uVar29 + 1;
                          if (*piVar24 == 0) goto LAB_000cfb82;
                          iVar23 = iVar23 + 0x18;
                          if (*piVar24 == 1) goto LAB_000cfb32;
                        }
                        piVar24 = (int *)(iVar23 + 0x30);
                        uVar29 = uVar29 + 1;
                        if (*piVar24 == 0) goto LAB_000cfb82;
                        iVar23 = iVar23 + 0x18;
                        if (*piVar24 == 1) goto LAB_000cfb32;
                      }
                    }
                    do {
                      if ((uVar49 <= uVar29 + 1) || (*(int *)(iVar23 + 0x30) == 0))
                      goto LAB_000cfb82;
                      if (*(int *)(iVar23 + 0x30) == 1) break;
                      if (*(int *)(iVar23 + 0x48) == 0) goto LAB_000cfb82;
                      if (*(int *)(iVar23 + 0x48) == 1) break;
                      if (*(int *)(iVar23 + 0x60) == 0) goto LAB_000cfb82;
                      if (*(int *)(iVar23 + 0x60) == 1) break;
                      if (*(int *)(iVar23 + 0x78) == 0) goto LAB_000cfb82;
                      if (*(int *)(iVar23 + 0x78) == 1) break;
                      if (*(int *)(iVar23 + 0x90) == 0) goto LAB_000cfb82;
                      if (*(int *)(iVar23 + 0x90) == 1) break;
                      if (*(int *)(iVar23 + 0xa8) == 0) goto LAB_000cfb82;
                      if (*(int *)(iVar23 + 0xa8) == 1) break;
                      if (*(int *)(iVar23 + 0xc0) == 0) goto LAB_000cfb82;
                      if (*(int *)(iVar23 + 0xc0) == 1) break;
                      piVar24 = (int *)(iVar23 + 0xd8);
                      uVar29 = uVar29 + 8;
                      if (*piVar24 == 0) goto LAB_000cfb82;
                      iVar23 = iVar23 + 0xc0;
                    } while (*piVar24 != 1);
                  }
LAB_000cfb32:
                  if (iVar46 == 2) {
                    uVar47 = local_9c + 1;
                    iVar46 = *(int *)(iVar20 + 8);
                    local_9c = uVar47 & 0xff;
                    *(char *)(iVar26 + 0xcfdac) = (char)uVar47;
                    if (-1 < (int)((uint)*(byte *)(iVar26 + 0xd05b0) << 0x18)) {
                      iVar23 = (uint)*(byte *)(iVar26 + 0xd05b0) * 0x10 + 0x808;
                      *(undefined1 *)(iVar27 + iVar23) = 4;
                      iVar23 = iVar27 + iVar23;
                      *(int *)(iVar23 + 4) = iVar22;
                      local_9c = (uint)*(byte *)(iVar26 + 0xcfdac);
                      *(int *)(iVar23 + 8) = iVar46;
                      *(undefined1 *)(iVar23 + 0xc) = 1;
                      *(char *)(iVar26 + 0xd05b0) = *(char *)(iVar26 + 0xd05b0) + '\x01';
                    }
                    iVar22 = iVar22 + iVar46;
                    *(undefined4 *)(iVar20 + 8) = 0;
                  }
                  else {
                    *(int *)(iVar20 + 8) = iVar22;
                  }
                }
              }
LAB_000cfb82:
              iVar23 = DAT_000d041c;
              iVar20 = iVar20 + 0x18;
              iVar46 = *(int *)(DAT_000d0418 + uVar58 * 0x18 + 0xcfbc4);
              uVar47 = uVar58;
            } while (iVar46 != 0);
            *(int *)(DAT_000d041c + 0xcfbac) = iVar22;
            *(char *)(iVar23 + 0xcff3a) = (char)uVar53;
LAB_000cfbb4:
            iVar26 = *(int *)(DAT_000d0420 + 0xcfbc0 + uVar56 * 0x18 + 0x30);
            if (iVar26 != 0) {
              if (iVar26 != 5 && iVar26 != 2) {
                uVar53 = ~uVar56 + uVar49 & 3;
                iVar32 = DAT_000d0420 + 0xcfbc0 + uVar56 * 0x18 + 0x30;
                uVar47 = uVar56;
                iVar26 = iVar32;
                if (uVar53 == 0) goto LAB_000cfc38;
                uVar47 = uVar56 + 1;
                if (uVar47 < uVar49) {
                  iVar16 = *(int *)(iVar32 + 0x18);
                  uVar51 = uVar47;
                  if (iVar16 == 0) goto LAB_000d5b30;
                  iVar26 = iVar32 + 0x18;
                  if (iVar16 != 2 && iVar16 != 5) {
                    if (uVar53 != 1) {
                      if (uVar53 != 2) {
                        iVar16 = *(int *)(iVar32 + 0x30);
                        uVar47 = uVar56 + 2;
                        uVar51 = uVar47;
                        if (iVar16 == 0) goto LAB_000d5b30;
                        iVar26 = iVar32 + 0x30;
                        if (iVar16 == 2 || iVar16 == 5) goto LAB_000cfca0;
                      }
                      iVar32 = *(int *)(iVar26 + 0x18);
                      uVar47 = uVar47 + 1;
                      uVar51 = uVar47;
                      if (iVar32 == 0) goto LAB_000d5b30;
                      iVar26 = iVar26 + 0x18;
                      if (iVar32 == 2 || iVar32 == 5) goto LAB_000cfca0;
                    }
LAB_000cfc38:
                    do {
                      if (uVar49 <= uVar47 + 1) break;
                      iVar32 = *(int *)(iVar26 + 0x18);
                      uVar51 = uVar47 + 1;
                      if (iVar32 == 0) goto LAB_000d5b30;
                      if (iVar32 == 2 || iVar32 == 5) break;
                      iVar32 = *(int *)(iVar26 + 0x30);
                      uVar51 = uVar47 + 2;
                      if (iVar32 == 0) goto LAB_000d5b30;
                      if (iVar32 == 2 || iVar32 == 5) break;
                      iVar32 = *(int *)(iVar26 + 0x48);
                      uVar51 = uVar47 + 3;
                      if (iVar32 == 0) goto LAB_000d5b30;
                      uVar47 = uVar47 + 4;
                      if (iVar32 == 2 || iVar32 == 5) break;
                      iVar32 = *(int *)(iVar26 + 0x60);
                      uVar51 = uVar47;
                      if (iVar32 == 0) goto LAB_000d5b30;
                      iVar26 = iVar26 + 0x60;
                    } while (iVar32 != 2 && iVar32 != 5);
                  }
                }
              }
              goto LAB_000cfca0;
            }
          }
LAB_000d5b30:
          iVar32 = DAT_000d6298;
          iVar26 = (uint)*(ushort *)(DAT_000d6288 + (uVar51 + 1) * 0x18 + 0xd5b68) * 3;
          if (*(char *)(DAT_000d628c + 0xd5b46 + iVar26) == '\x15') {
            pcVar30 = *(char **)(DAT_000d6294 + 0xd5b72);
            cVar7 = *(char *)((uint)*(byte *)(DAT_000d628c + 0xd5b46 + iVar26 + 1) * 0x15 +
                              DAT_000d6290 + 0xd6614);
            if (*pcVar30 == cVar7) {
              iVar26 = 0;
            }
            else if (pcVar30[4] == cVar7) {
              iVar26 = 1;
            }
            else if (pcVar30[8] == cVar7) {
              iVar26 = 2;
            }
            else if (pcVar30[0xc] == cVar7) {
              iVar26 = 3;
            }
            else if (pcVar30[0x10] == cVar7) {
              iVar26 = 4;
            }
            else if (pcVar30[0x14] == cVar7) {
              iVar26 = 5;
            }
            else if (pcVar30[0x18] == cVar7) {
              iVar26 = 6;
            }
            else {
              if (pcVar30[0x1c] != cVar7) goto LAB_000cfca0;
              iVar26 = 7;
            }
            uVar56 = (int)local_98 + 1;
            uVar4 = *(undefined2 *)(pcVar30 + iVar26 * 4 + 2);
            uVar49 = local_9c + 1;
            local_98 = (ushort *)(uVar56 & 0xff);
            local_9c = uVar49 & 0xff;
            *(char *)(DAT_000d6298 + 0xd5bdb) = (char)uVar56;
            *(undefined2 *)(iVar32 + 0xd5bde) = uVar4;
            *(char *)(iVar32 + 0xd5fe0) = (char)uVar49;
            *(undefined1 *)(iVar32 + 0xd5bda) = 2;
          }
        }
        else {
          local_9c = (uint)*(byte *)(DAT_000d629c + 0xd6002);
        }
LAB_000cfca0:
        local_84 = local_9c;
        if (local_9c != 0) {
          bVar13 = *(byte *)(DAT_000d0424 + 0xd00c5);
          if (5 < uVar33) {
            uVar33 = 4;
            *(undefined1 *)(DAT_000d0428 + 0xcfce8) = 4;
          }
          iVar26 = DAT_000d0438;
          if (cVar31 == '\x01') {
            local_98 = (ushort *)(int)*(short *)(DAT_000d6de4 + uVar33 * 6 + 0xd7920);
          }
          else if (*(char *)(DAT_000d042c + 0xd066e) == cVar31) {
            local_98 = (ushort *)(int)*(short *)((int)&DAT_000d7908 + DAT_000d6de0 + uVar33 * 6 + 2)
            ;
          }
          else {
            local_98 = (ushort *)(int)*(short *)(DAT_000d0430 + uVar33 * 6 + 0xd0a6c);
          }
          iVar32 = *(int *)(DAT_000d0434 + 0xd06b0) + (int)local_98;
          if ((char *)(iVar32 + 0x10eb4) < "_ZN6YAMAHA25MaDevDrv_SendDirectRamValEjjh") {
            uVar49 = iVar32 + 0x2000;
            if (0x3fff < (int)uVar49) goto LAB_000d2e52;
            uVar49 = uVar49 & ~((int)uVar49 >> 0x1f);
            bVar50 = (byte)uVar49 & 0x7f;
            bVar17 = (byte)((uVar49 << 0x11) >> 0x18);
          }
          else if (iVar32 < -0x10eb4) {
            bVar50 = 0;
            bVar17 = bVar50;
          }
          else {
LAB_000d2e52:
            bVar50 = 0x7f;
            bVar17 = bVar50;
          }
          *(byte *)(DAT_000d0438 + 0xcfe48) = bVar50;
          *(byte *)(iVar26 + 0xcfe49) = bVar17;
          *(undefined1 *)(iVar26 + 0xcfe47) = 0;
          iVar19 = DAT_000d044c;
          iVar16 = DAT_000d0448;
          iVar32 = DAT_000d0440;
          if (bVar13 == 0) {
            uVar49 = 1;
LAB_000d0034:
            uVar56 = uVar49 + 1;
            FUN_000cc564(uVar49,0x7f,local_98);
          }
          else {
            iVar48 = -0x10eb4;
            iVar21 = DAT_000d043c + 0xd0afe;
            local_74 = iVar26 + 0xd0152;
            iVar26 = iVar26 + 0xd0156;
            uVar56 = 1;
            piVar24 = (int *)(DAT_000d0444 + 0xcfd82);
            local_70 = 0;
            do {
              iVar46 = *(int *)(local_74 + 4);
              uVar49 = (uint)*(byte *)(iVar21 + (uint)*(byte *)(iVar26 + -8) * 0x12);
              iVar22 = iVar21 + (uint)*(byte *)(iVar26 + -8) * 0x12;
              bVar17 = *(byte *)(local_74 + 8);
              if (uVar49 != 0) {
                iVar20 = *(int *)(iVar26 + -4) * 0x7f;
                iVar28 = uVar49 + 1;
                iVar27 = 0x10eb4;
                uVar33 = 0;
                if ((*piVar24 != 0) &&
                   (uVar33 = __udivsi3(iVar46 * (uint)*(byte *)(iVar22 + 2) + iVar20), 0x7e < uVar33
                   )) {
                  uVar33 = 0x7f;
                }
                iVar34 = (int)*(short *)(iVar22 + 4) * (int)(short)(ushort)bVar17 + (int)local_98;
                if (0x10eb4 < iVar34 || iVar34 < -0x10eb4) {
                  if (0x10eb3 < iVar34) {
                    iVar34 = iVar27;
                  }
                  if (iVar34 < -0x10eb4) {
                    iVar34 = iVar48;
                  }
                }
                iVar34 = FUN_000cc564(uVar56,uVar33,iVar34);
                if (iVar34 == 0) {
                  uVar56 = uVar56 + 1;
                }
                if (*(char *)(iVar26 + -8) == '\0') {
                  *(undefined4 *)(iVar16 + 0xd072c) = 0;
                }
                iVar34 = 2;
                pbVar42 = (byte *)(iVar22 + 6);
                uVar3 = (ushort)bVar17;
                if (iVar28 != 2) {
                  if ((uVar49 - 1 & 1) != 0) {
                    uVar33 = 0;
                    if ((*piVar24 != 0) &&
                       (uVar33 = __udivsi3(iVar46 * (uint)*(byte *)(iVar22 + 6) + iVar20),
                       0x7e < uVar33)) {
                      uVar33 = 0x7f;
                    }
                    iVar34 = (int)*(short *)(iVar22 + 8) * (int)(short)(ushort)bVar17 +
                             (int)local_98;
                    if (0x10eb4 < iVar34 || iVar34 < -0x10eb4) {
                      if (0x10eb3 < iVar34) {
                        iVar34 = iVar27;
                      }
                      if (iVar34 < -0x10eb4) {
                        iVar34 = iVar48;
                      }
                    }
                    iVar34 = FUN_000cc564(uVar56,uVar33,iVar34);
                    if (iVar34 == 0) {
                      uVar56 = uVar56 + 1;
                    }
                    if (*(char *)(iVar26 + -8) == '\0') {
                      *(undefined4 *)(iVar16 + 0xd072c) = 0;
                    }
                    iVar34 = 3;
                    pbVar42 = (byte *)(iVar22 + 10);
                    if (iVar28 == 3) goto LAB_000cff8c;
                  }
                  do {
                    uVar33 = 0;
                    if ((*piVar24 != 0) &&
                       (uVar33 = __udivsi3(iVar46 * (uint)*pbVar42 + iVar20), 0x7e < uVar33)) {
                      uVar33 = 0x7f;
                    }
                    iVar35 = (int)*(short *)(pbVar42 + 2) * (int)(short)uVar3 + (int)local_98;
                    if (0x10eb4 < iVar35 || iVar35 < -0x10eb4) {
                      if (0x10eb3 < iVar35) {
                        iVar35 = iVar27;
                      }
                      if (iVar35 < -0x10eb4) {
                        iVar35 = iVar48;
                      }
                    }
                    iVar35 = FUN_000cc564(uVar56,uVar33,iVar35);
                    if (iVar35 == 0) {
                      uVar56 = uVar56 + 1;
                    }
                    if (*(char *)(iVar26 + -8) == '\0') {
                      *(undefined4 *)(iVar16 + 0xd072c) = 0;
                    }
                    uVar33 = 0;
                    if ((*piVar24 != 0) &&
                       (uVar33 = __udivsi3(iVar46 * (uint)pbVar42[4] + iVar20), 0x7e < uVar33)) {
                      uVar33 = 0x7f;
                    }
                    iVar35 = (int)*(short *)(pbVar42 + 6) * (int)(short)uVar3 + (int)local_98;
                    if (0x10eb4 < iVar35 || iVar35 < -0x10eb4) {
                      if (0x10eb3 < iVar35) {
                        iVar35 = iVar27;
                      }
                      if (iVar35 < -0x10eb4) {
                        iVar35 = iVar48;
                      }
                    }
                    iVar35 = FUN_000cc564(uVar56,uVar33,iVar35);
                    if (iVar35 == 0) {
                      uVar56 = uVar56 + 1;
                    }
                    if (*(char *)(iVar26 + -8) == '\0') {
                      *(undefined4 *)(iVar16 + 0xd072c) = 0;
                    }
                    pbVar42 = pbVar42 + 8;
                    iVar34 = iVar34 + 2;
                  } while (iVar34 != iVar28);
                }
LAB_000cff8c:
                iVar22 = (int)*(short *)(iVar22 + uVar49 * 4) * (int)(short)uVar3;
                if (0x10eb4 < iVar22 || iVar22 < -0x10eb4) {
                  if (0x10eb3 < iVar22) {
                    iVar22 = 0x10eb4;
                  }
                  if (iVar22 < -0x10eb4) {
                    iVar22 = iVar48;
                  }
                }
                iVar22 = iVar22 + *(int *)(iVar32 + 0xd0720);
                if ("" < (char *)(iVar22 + 0x10eb4)) {
                  if (0x10eb3 < iVar22) {
                    iVar22 = 0x10eb4;
                  }
                  if (iVar22 < -0x10eb4) {
                    iVar22 = iVar48;
                  }
                }
                *(int *)(iVar19 + 0xd072e) = iVar22;
              }
              iVar26 = iVar26 + 0x10;
              local_70 = local_70 + 1;
              local_74 = local_74 + 0x10;
            } while (bVar13 != local_70);
            if ((uVar56 < 0x7f) &&
               (uVar49 = uVar56, *(char *)(uVar56 * 3 + DAT_000d0450 + 0xd0136) != '\x7f'))
            goto LAB_000d0034;
          }
          iVar32 = DAT_000d0458;
          iVar26 = DAT_000d0454;
          local_84 = uVar56 & 0xff;
          piVar24 = (int *)(DAT_000d0458 + 0xd005a);
          bVar13 = *(byte *)(DAT_000d0458 + 0xd0c6e);
          iVar16 = *(short *)(DAT_000d0454 + 0xd0a00) + 0x60;
          *(char *)(DAT_000d0458 + 0xd0166) = (char)uVar56;
          uVar14 = UnsignedSaturate(iVar16,7);
          UnsignedDoesSaturate(iVar16,7);
          *(undefined1 *)(iVar32 + 0xd02e8) = 0;
          *(char *)(iVar32 + 0xd02e9) = (char)uVar14;
          if (bVar13 != 0) {
            iVar32 = iVar32 + 0xd046a;
            iVar16 = iVar32 + (uint)bVar13 * 0x10;
            iVar27 = *piVar24;
            sVar57 = *(short *)(iVar26 + 0xd0a00);
            iVar26 = DAT_000d045c + 0xd0eb2;
            iVar28 = DAT_000d0460 + 0xd00a0;
            uVar49 = 1;
            iVar46 = DAT_000d0464 + 0xd00b0;
            iVar35 = DAT_000d0468 + 0xd00b8;
            iVar34 = DAT_000d046c + 0xd00bc;
            iVar48 = DAT_000d0470 + 0xd00c0;
            iVar22 = DAT_000d0474 + 0xd00c4;
            iVar20 = -99;
            iVar19 = DAT_000d0478 + 0xd00dc;
            iVar21 = DAT_000d047c + 0xd00de;
LAB_000d00e8:
            iVar40 = *(int *)(iVar32 + 0x810);
            uVar33 = (uint)*(byte *)(iVar32 + 0x808);
            uVar56 = (uint)*(byte *)(iVar26 + uVar33 * 0x12);
            iVar39 = iVar26 + uVar33 * 0x12;
            iVar23 = iVar39 + 2;
            if (uVar56 != 0) {
              iVar36 = *(int *)(iVar32 + 0x80c) * 0x7f;
              uVar3 = (ushort)*(byte *)(iVar32 + 0x814);
              if (iVar27 == 0) {
                uVar9 = (ushort)*(byte *)(iVar32 + 0x814);
                if (uVar33 == 0) {
                  if ((int)(uVar56 << 0x1f) < 0) {
                    iVar39 = 0;
                  }
                  else {
                    iVar39 = (int)*(short *)(iVar39 + 4) * (int)(short)uVar9;
                    if (iVar39 < -99 || 99 < iVar39) {
                      if (0x62 < iVar39) {
                        iVar39 = 99;
                      }
                      if (iVar39 < -99) {
                        iVar39 = iVar20;
                      }
                    }
                    if (uVar49 < 0x80) {
                      iVar39 = sVar57 + iVar39 + 0x60;
                      uVar33 = UnsignedSaturate(iVar39,7);
                      UnsignedDoesSaturate(iVar39,7);
                      if ((*(char *)(iVar28 + uVar49 * 2 + 0x28c) != '\0') ||
                         (*(byte *)(iVar28 + uVar49 * 2 + 0x28d) != uVar33)) {
                        iVar39 = uVar49 * 2;
                        uVar49 = uVar49 + 1;
                        iVar39 = iVar39 + iVar46;
                        *(undefined1 *)(iVar39 + 0x28e) = 0;
                        *(char *)(iVar39 + 0x28f) = (char)uVar33;
                      }
                    }
                    iVar39 = 4;
                    sVar57 = 0;
                  }
                  while( true ) {
                    iVar40 = (int)*(short *)(iVar23 + iVar39 + 2) * (int)(short)uVar9;
                    if (iVar40 < -99 || 99 < iVar40) {
                      if (0x62 < iVar40) {
                        iVar40 = 99;
                      }
                      if (iVar40 < -99) {
                        iVar40 = iVar20;
                      }
                    }
                    if (uVar49 < 0x80) {
                      iVar40 = sVar57 + iVar40 + 0x60;
                      uVar33 = UnsignedSaturate(iVar40,7);
                      UnsignedDoesSaturate(iVar40,7);
                      if ((*(char *)(iVar28 + uVar49 * 2 + 0x28c) != '\0') ||
                         (*(byte *)(iVar28 + uVar49 * 2 + 0x28d) != uVar33)) {
                        iVar40 = uVar49 * 2 + iVar46;
                        uVar49 = uVar49 + 1;
                        *(char *)(iVar40 + 0x28f) = (char)uVar33;
                        *(undefined1 *)(iVar40 + 0x28e) = 0;
                      }
                    }
                    if (iVar39 + 4 == uVar56 * 4) break;
                    iVar40 = (int)*(short *)(iVar23 + iVar39 + 4 + 2) * (int)(short)uVar9;
                    if (iVar40 < -99 || 99 < iVar40) {
                      if (0x62 < iVar40) {
                        iVar40 = 99;
                      }
                      if (iVar40 < -99) {
                        iVar40 = iVar20;
                      }
                    }
                    if (uVar49 < 0x80) {
                      uVar33 = UnsignedSaturate(iVar40 + 0x60,7);
                      UnsignedDoesSaturate(iVar40 + 0x60,7);
                      if ((*(char *)(iVar28 + uVar49 * 2 + 0x28c) != '\0') ||
                         (*(byte *)(iVar28 + uVar49 * 2 + 0x28d) != uVar33)) {
                        iVar40 = uVar49 * 2 + iVar46;
                        uVar49 = uVar49 + 1;
                        *(char *)(iVar40 + 0x28f) = (char)uVar33;
                        *(undefined1 *)(iVar40 + 0x28e) = 0;
                      }
                    }
                    iVar39 = iVar39 + 8;
                    sVar57 = 0;
                  }
                  iVar12 = 0;
                }
                else {
                  iVar12 = (int)sVar57;
                  iVar40 = (int)*(short *)(iVar39 + 4) * (int)(short)uVar9;
                  if (iVar40 < -99 || 99 < iVar40) {
                    if (0x62 < iVar40) {
                      iVar40 = 99;
                    }
                    if (iVar40 < -99) {
                      iVar40 = iVar20;
                    }
                  }
                  if (uVar49 < 0x80) {
                    iVar40 = iVar40 + iVar12 + 0x60;
                    uVar33 = UnsignedSaturate(iVar40,7);
                    UnsignedDoesSaturate(iVar40,7);
                    if ((*(char *)(iVar35 + uVar49 * 2 + 0x28c) != '\0') ||
                       (*(byte *)(iVar35 + uVar49 * 2 + 0x28d) != uVar33)) {
                      iVar40 = uVar49 * 2;
                      uVar49 = uVar49 + 1;
                      iVar40 = iVar40 + iVar48;
                      *(undefined1 *)(iVar40 + 0x28e) = 0;
                      *(char *)(iVar40 + 0x28f) = (char)uVar33;
                    }
                  }
                  iVar40 = 4;
                  if (uVar56 != 1) {
                    if ((int)((uVar56 * 4 + -4) * 0x20000000) < 0) {
                      iVar39 = (int)*(short *)(iVar39 + 8) * (int)(short)uVar9;
                      if (iVar39 < -99 || 99 < iVar39) {
                        if (0x62 < iVar39) {
                          iVar39 = 99;
                        }
                        if (iVar39 < -99) {
                          iVar39 = iVar20;
                        }
                      }
                      if (uVar49 < 0x80) {
                        iVar39 = iVar39 + iVar12 + 0x60;
                        uVar33 = UnsignedSaturate(iVar39,7);
                        UnsignedDoesSaturate(iVar39,7);
                        if ((*(char *)(iVar35 + uVar49 * 2 + 0x28c) != '\0') ||
                           (*(byte *)(iVar35 + uVar49 * 2 + 0x28d) != uVar33)) {
                          iVar39 = uVar49 * 2;
                          uVar49 = uVar49 + 1;
                          iVar39 = iVar39 + iVar48;
                          *(undefined1 *)(iVar39 + 0x28e) = 0;
                          *(char *)(iVar39 + 0x28f) = (char)uVar33;
                        }
                      }
                      iVar40 = 8;
                      if (uVar56 == 2) goto LAB_000d2736;
                    }
                    do {
                      iVar39 = (int)*(short *)(iVar23 + iVar40 + 2) * (int)(short)uVar9;
                      if (iVar39 < -99 || 99 < iVar39) {
                        if (0x62 < iVar39) {
                          iVar39 = 99;
                        }
                        if (iVar39 < -99) {
                          iVar39 = iVar20;
                        }
                      }
                      if (uVar49 < 0x80) {
                        iVar39 = iVar39 + iVar12 + 0x60;
                        uVar33 = UnsignedSaturate(iVar39,7);
                        UnsignedDoesSaturate(iVar39,7);
                        if ((*(char *)(iVar35 + uVar49 * 2 + 0x28c) != '\0') ||
                           (*(byte *)(iVar35 + uVar49 * 2 + 0x28d) != uVar33)) {
                          iVar39 = uVar49 * 2 + iVar48;
                          uVar49 = uVar49 + 1;
                          *(char *)(iVar39 + 0x28f) = (char)uVar33;
                          *(undefined1 *)(iVar39 + 0x28e) = 0;
                        }
                      }
                      iVar39 = (int)*(short *)(iVar23 + iVar40 + 6) * (int)(short)uVar3;
                      if (iVar39 < -99 || 99 < iVar39) {
                        if (0x62 < iVar39) {
                          iVar39 = 99;
                        }
                        if (iVar39 < -99) {
                          iVar39 = iVar20;
                        }
                      }
                      if (uVar49 < 0x80) {
                        iVar39 = iVar39 + iVar12 + 0x60;
                        uVar33 = UnsignedSaturate(iVar39,7);
                        UnsignedDoesSaturate(iVar39,7);
                        if ((*(char *)(iVar35 + uVar49 * 2 + 0x28c) != '\0') ||
                           (*(byte *)(iVar35 + uVar49 * 2 + 0x28d) != uVar33)) {
                          iVar39 = uVar49 * 2 + iVar48;
                          uVar49 = uVar49 + 1;
                          *(char *)(iVar39 + 0x28f) = (char)uVar33;
                          *(undefined1 *)(iVar39 + 0x28e) = 0;
                        }
                      }
                      iVar40 = iVar40 + 8;
                    } while (iVar40 != uVar56 * 4);
                  }
                }
              }
              else {
                if (uVar33 == 0) {
                  iVar39 = 0;
                  do {
                    uVar33 = __udivsi3(iVar40 * (uint)*(byte *)(iVar23 + iVar39) + iVar36,iVar27);
                    iVar12 = (int)*(short *)(iVar23 + iVar39 + 2) * (int)(short)uVar3;
                    if (0x7e < uVar33) {
                      uVar33 = 0x7f;
                    }
                    if (iVar12 < -99 || 99 < iVar12) {
                      if (0x62 < iVar12) {
                        iVar12 = 99;
                      }
                      if (iVar12 < -99) {
                        iVar12 = iVar20;
                      }
                    }
                    if (uVar49 < 0x80) {
                      iVar12 = sVar57 + iVar12 + 0x60;
                      uVar51 = UnsignedSaturate(iVar12,7);
                      UnsignedDoesSaturate(iVar12,7);
                      if (uVar33 == *(byte *)(iVar22 + uVar49 * 2 + 0x28c)) {
                        iVar12 = uVar49 * 2;
                        if (*(byte *)(iVar22 + iVar12 + 0x28d) == uVar51) goto LAB_000d2c9a;
                      }
                      else {
                        iVar12 = uVar49 << 1;
                      }
                      uVar49 = uVar49 + 1;
                      iVar12 = iVar12 + iVar19;
                      *(char *)(iVar12 + 0x28e) = (char)uVar33;
                      *(char *)(iVar12 + 0x28f) = (char)uVar51;
                    }
LAB_000d2c9a:
                    iVar39 = iVar39 + 4;
                    if (iVar39 == uVar56 << 2) goto LAB_000d2d26;
                    sVar57 = 0;
                  } while( true );
                }
                iVar12 = (int)sVar57;
                iVar39 = 0;
                do {
                  uVar33 = __udivsi3(iVar40 * (uint)*(byte *)(iVar23 + iVar39) + iVar36,iVar27);
                  iVar25 = (int)*(short *)(iVar23 + iVar39 + 2) * (int)(short)uVar3;
                  iVar60 = iVar25;
                  if (0x62 < iVar25) {
                    iVar60 = 99;
                  }
                  if (iVar60 < -99) {
                    iVar60 = iVar20;
                  }
                  if (0x7e < uVar33) {
                    uVar33 = 0x7f;
                  }
                  if (-100 < iVar25 && iVar25 < 100) {
                    iVar60 = iVar25;
                  }
                  iVar60 = iVar60 + iVar12 + 0x60;
                  uVar51 = UnsignedSaturate(iVar60,7);
                  UnsignedDoesSaturate(iVar60,7);
                  iVar60 = uVar49 * 2;
                  if ((uVar49 < 0x80) &&
                     ((uVar33 != *(byte *)(iVar21 + uVar49 * 2 + 0x28c) ||
                      (*(byte *)(iVar21 + iVar60 + 0x28d) != uVar51)))) {
                    uVar49 = uVar49 + 1;
                    iVar60 = iVar60 + iVar34;
                    *(char *)(iVar60 + 0x28e) = (char)uVar33;
                    *(char *)(iVar60 + 0x28f) = (char)uVar51;
                  }
                  iVar39 = iVar39 + 4;
                } while (iVar39 != uVar56 << 2);
              }
              goto LAB_000d2736;
            }
            goto LAB_000d2780;
          }
          iVar27 = *piVar24;
          uVar49 = 1;
          goto LAB_000d27ae;
        }
        local_90 = local_9c;
        iVar27 = *(int *)(DAT_000d54e0 + 0xd533c);
        goto LAB_000d27fa;
      }
LAB_000cf79a:
      iVar26 = 0;
      uVar56 = local_48 + 1 & 0xff;
      *(char *)(iVar21 + 0x9a0) = (char)(local_48 + 1);
      goto LAB_000cf73a;
    }
  }
LAB_000cc7ca:
  iVar15 = DAT_000cd4dc;
  uVar49 = *(uint *)(DAT_000cd4d8 + 0xcd18e);
  uVar14 = *(undefined4 *)(DAT_000cd4dc + 0xcc7ee);
  *(char *)(DAT_000cd4d8 + 0xcd17a) = (char)uVar56 + '\x01';
  if (uVar49 == 0) {
    uVar49 = 1;
  }
  *(undefined4 *)(iVar15 + 0xcd19a) = uVar14;
  if (param_2 < 5) {
    *(undefined4 *)(iVar15 + 0xcd192) = 0;
    return -3;
  }
  iVar44 = *(int *)(iVar15 + 0xcc7e2);
  if (iVar44 == 0x14) {
    uVar56 = uVar49 * 0x666 >> 0xf;
LAB_000cc824:
    uVar51 = iVar44 * uVar56;
    uVar33 = uVar56;
    if (uVar51 < uVar49) {
      iVar15 = 0;
      do {
        uVar33 = uVar56 + 1;
        if (uVar49 <= uVar51 + iVar15 + iVar44) break;
        iVar15 = iVar15 + iVar44 + iVar44;
        uVar33 = uVar56 + 2;
        if (uVar49 <= uVar51 + iVar15) break;
        iVar15 = iVar15 + iVar44;
        uVar33 = uVar56 + 3;
        if (uVar49 <= uVar51 + iVar15) break;
        iVar15 = iVar15 + iVar44;
        uVar33 = uVar56 + 4;
        if (uVar49 <= uVar51 + iVar15) break;
        iVar15 = iVar15 + iVar44;
        uVar33 = uVar56 + 5;
        if (uVar49 <= uVar51 + iVar15) break;
        iVar15 = iVar15 + iVar44;
        uVar33 = uVar56 + 6;
        if (uVar49 <= uVar51 + iVar15) break;
        iVar15 = iVar15 + iVar44;
        uVar33 = uVar56 + 7;
        if (uVar49 <= uVar51 + iVar15) break;
        iVar15 = iVar15 + iVar44;
        uVar33 = uVar56 + 8;
        if (uVar49 <= uVar51 + iVar15) break;
        iVar15 = iVar15 + iVar44;
        uVar33 = uVar56 + 9;
        if (uVar49 <= uVar51 + iVar15) break;
        iVar15 = iVar15 + iVar44;
        uVar33 = uVar56 + 10;
        if (uVar49 <= uVar51 + iVar15) break;
        iVar15 = iVar15 + iVar44;
        uVar33 = uVar56 + 0xb;
        if (uVar49 <= uVar51 + iVar15) break;
        iVar15 = iVar15 + iVar44;
        uVar33 = uVar56 + 0xc;
        if (uVar49 <= uVar51 + iVar15) break;
        iVar15 = iVar15 + iVar44;
        uVar33 = uVar56 + 0xd;
        if (uVar49 <= uVar51 + iVar15) break;
        iVar15 = iVar15 + iVar44;
        uVar33 = uVar56 + 0xe;
        if (uVar49 <= uVar51 + iVar15) break;
        iVar15 = iVar15 + iVar44;
        uVar33 = uVar56 + 0xf;
        if (uVar49 <= uVar51 + iVar15) break;
        iVar15 = iVar15 + iVar44;
        uVar56 = uVar56 + 0x10;
        uVar33 = uVar56;
      } while (uVar51 + iVar15 < uVar49);
    }
    if (uVar33 < 0x200000) {
      if (0x3fff < uVar33) {
        bVar13 = (byte)((uVar33 << 0xb) >> 0x19) | 0x80;
        bVar17 = (byte)((uVar33 << 0x12) >> 0x19) | 0x80;
        bVar50 = (byte)uVar33 & 0x7f;
        goto LAB_000cc91e;
      }
      if (uVar33 < 0x80) goto LAB_000cf0dc;
      bVar50 = (byte)uVar33 & 0x7f;
      bVar17 = (byte)((uVar33 << 0x12) >> 0x19) | 0x80;
      iVar26 = 2;
      iVar11 = 4;
      iVar15 = 3;
      iVar44 = 1;
      iVar32 = 0;
    }
    else {
      bVar17 = 0xff;
      bVar50 = 0x7f;
      bVar13 = 0xff;
LAB_000cc91e:
      iVar26 = 3;
      iVar15 = 4;
      iVar44 = 2;
      iVar32 = 1;
      *param_1 = bVar13;
      iVar11 = 5;
    }
    param_1[iVar32] = bVar17;
  }
  else {
    if (0x1fffe < uVar49) {
      uVar56 = __udivsi3(uVar49,iVar44);
      goto LAB_000cc824;
    }
    if (iVar44 != 0) {
      uVar33 = *(int *)(iVar15 + 0xcc7e6) * uVar49;
      uVar56 = uVar33 >> 0xf;
      if ((uVar33 & 0x4000) != 0) {
        uVar56 = uVar56 + 1;
      }
      goto LAB_000cc824;
    }
    uVar33 = 0;
LAB_000cf0dc:
    bVar50 = (byte)uVar33;
    iVar26 = 1;
    iVar11 = 3;
    iVar15 = 2;
    iVar44 = 0;
  }
  iVar32 = DAT_000cd4e0 + 0xcc93e;
LAB_000cc93c:
  param_1[iVar44] = bVar50;
  param_1[iVar26] = 0xff;
  param_1[iVar15] = '\0';
  *(undefined4 *)(iVar32 + 0x9b4) = 0;
  *(undefined4 *)(iVar32 + 0x9b8) = 0;
  return iVar11;
LAB_000d2d26:
  iVar12 = 0;
LAB_000d2736:
  iVar39 = (int)*(short *)(iVar23 + uVar56 * 4 + -2) * (int)(short)uVar3;
  if (iVar39 < -99 || 99 < iVar39) {
    if (0x62 < iVar39) {
      iVar39 = 99;
    }
    if (iVar39 < -99) {
      iVar39 = iVar20;
    }
  }
  iVar12 = iVar12 + iVar39;
  if (0xc6 < iVar12 + 99U) {
    if (0x62 < iVar12) {
      iVar12 = 99;
    }
    if (iVar12 < -99) {
      iVar12 = iVar20;
    }
  }
  sVar57 = (short)iVar12;
LAB_000d2780:
  iVar32 = iVar32 + 0x10;
  if (iVar32 == iVar16) goto code_r0x000d278c;
  goto LAB_000d00e8;
code_r0x000d278c:
  *(short *)(DAT_000d2c70 + 0xd3144) = sVar57;
  if ((uVar49 < 0x7f) && (*(char *)(DAT_000d2c74 + uVar49 * 2 + 0xd2a30) != '\x7f')) {
LAB_000d27ae:
    iVar32 = DAT_000d2c7c + 0xd27be + uVar49 * 2;
    uVar49 = uVar49 + 1;
    iVar26 = *(short *)(DAT_000d2c78 + 0xd3168) + 0x60;
    *(undefined1 *)(iVar32 + 0x28e) = 0x7f;
    uVar14 = UnsignedSaturate(iVar26,7);
    UnsignedDoesSaturate(iVar26,7);
    *(char *)(iVar32 + 0x28f) = (char)uVar14;
  }
  local_90 = uVar49 & 0xff;
  bVar5 = *(byte *)(DAT_000d2c80 + 0xd27ef);
  bVar6 = *(byte *)(DAT_000d2c80 + 0xd27ee);
  local_98 = (ushort *)(uint)*(byte *)(DAT_000d2c80 + 0xd27f1);
  *(char *)(DAT_000d2c80 + 0xd2a73) = (char)uVar49;
LAB_000d27fa:
  iVar32 = DAT_000d2c88;
  iVar26 = DAT_000d2c84;
  if (iVar27 == 0) {
    *(undefined1 *)(DAT_000d3a9c + 0xd3140) = 0;
    uVar49 = 0;
  }
  else {
    uVar49 = (uint)*(byte *)(DAT_000d2c84 + 0xd2b98);
    if (uVar49 != 0) {
      puVar37 = (undefined1 *)(DAT_000d2c84 + 0xd2b99);
      piVar54 = (int *)(DAT_000d2c88 + 0xd2b40 + uVar49 * 4);
      uVar51 = ((int)piVar54 + (-4 - (DAT_000d2c88 + 0xd2b40)) & 0xfU) >> 2;
      uVar33 = __udivsi3(*(int *)(DAT_000d2c88 + 0xd2b44) * 0x7f,iVar27);
      piVar24 = (int *)(iVar32 + 0xd2b44);
      uVar56 = UnsignedSaturate(uVar33,7);
      UnsignedDoesSaturate(uVar33,7);
      if (0x7f < uVar33) {
        uVar33 = uVar56;
      }
      *(char *)(iVar26 + 0xd2b99) = (char)uVar33;
      if (piVar24 != piVar54) {
        if (uVar51 != 0) {
          if (uVar51 != 1) {
            if (uVar51 != 2) {
              puVar37 = (undefined1 *)(iVar26 + 0xd2b9a);
              piVar24 = (int *)(iVar32 + 0xd2b48);
              uVar33 = __udivsi3(*(int *)(iVar32 + 0xd2b48) * 0x7f,iVar27);
              uVar56 = UnsignedSaturate(uVar33,7);
              UnsignedDoesSaturate(uVar33,7);
              if (0x7f < uVar33) {
                uVar33 = uVar56;
              }
              *(char *)(iVar26 + 0xd2b9a) = (char)uVar33;
            }
            piVar24 = piVar24 + 1;
            uVar33 = __udivsi3(*piVar24 * 0x7f,iVar27);
            uVar56 = UnsignedSaturate(uVar33,7);
            UnsignedDoesSaturate(uVar33,7);
            if (0x7f < uVar33) {
              uVar33 = uVar56;
            }
            puVar37 = puVar37 + 1;
            *puVar37 = (char)uVar33;
          }
          piVar24 = piVar24 + 1;
          uVar33 = __udivsi3(*piVar24 * 0x7f,iVar27);
          uVar56 = UnsignedSaturate(uVar33,7);
          UnsignedDoesSaturate(uVar33,7);
          if (0x7f < uVar33) {
            uVar33 = uVar56;
          }
          puVar37 = puVar37 + 1;
          *puVar37 = (char)uVar33;
          if (piVar24 == piVar54) goto LAB_000d2db4;
        }
        do {
          uVar33 = __udivsi3(piVar24[1] * 0x7f,iVar27);
          iVar26 = piVar24[2];
          uVar56 = UnsignedSaturate(uVar33,7);
          UnsignedDoesSaturate(uVar33,7);
          if (0x7f < uVar33) {
            uVar33 = uVar56;
          }
          puVar37[1] = (char)uVar33;
          uVar33 = __udivsi3(iVar26 * 0x7f,iVar27);
          iVar26 = piVar24[3];
          uVar56 = UnsignedSaturate(uVar33,7);
          UnsignedDoesSaturate(uVar33,7);
          if (0x7f < uVar33) {
            uVar33 = uVar56;
          }
          puVar37[2] = (char)uVar33;
          uVar33 = __udivsi3(iVar26 * 0x7f,iVar27);
          piVar24 = piVar24 + 4;
          iVar26 = *piVar24;
          uVar56 = UnsignedSaturate(uVar33,7);
          UnsignedDoesSaturate(uVar33,7);
          if (0x7f < uVar33) {
            uVar33 = uVar56;
          }
          puVar37[3] = (char)uVar33;
          uVar33 = __udivsi3(iVar26 * 0x7f,iVar27);
          uVar56 = UnsignedSaturate(uVar33,7);
          UnsignedDoesSaturate(uVar33,7);
          if (0x7f < uVar33) {
            uVar33 = uVar56;
          }
          puVar37 = puVar37 + 4;
          *puVar37 = (char)uVar33;
        } while (piVar24 != piVar54);
      }
    }
  }
LAB_000d2db4:
  if ((int)local_98 << 0x18 < 0) {
    local_98 = (ushort *)0x7f;
    *(undefined1 *)(DAT_000d6df4 + 0xd6bfd) = 0x7f;
  }
  if ((int)(local_84 << 0x18) < 0) {
    iVar26 = 0x17d;
    *(undefined1 *)(DAT_000d6df0 + 0xd6cec) = 0x7f;
  }
  else {
    iVar26 = local_84 * 3;
  }
  if ((int)(local_90 << 0x18) < 0) {
    iVar32 = 0xfe;
    *(undefined1 *)(DAT_000d6dec + 0xd6e59) = 0x7f;
  }
  else {
    iVar32 = local_90 << 1;
  }
  if ((bVar5 & 0x80) != 0) {
    *(undefined1 *)(DAT_000d6de8 + 0xd6bc3) = 0x7f;
  }
  if ((bVar6 & 0x80) != 0) {
    *(undefined1 *)(DAT_000d62a0 + 0xd5c3e) = 0x7f;
  }
  iVar26 = iVar26 + (int)local_98 + iVar32 + uVar49;
  if (param_2 <= iVar26 + 0x13U) {
    iVar26 = 0;
    goto LAB_000d2e0c;
  }
  iVar32 = *(int *)(DAT_000d3aac + 0xd2e80);
  uVar49 = *(uint *)(DAT_000d3aac + 0xd3830);
  if (iVar32 == 0x14) {
    uVar56 = uVar49 * 0x666 >> 0xf;
LAB_000d2ea0:
    uVar51 = iVar32 * uVar56;
    uVar33 = uVar56;
    if (uVar51 < uVar49) {
      iVar16 = 0;
      do {
        uVar33 = uVar56 + 1;
        if (uVar49 <= iVar16 + iVar32 + uVar51) break;
        iVar16 = iVar16 + iVar32 + iVar32;
        uVar33 = uVar56 + 2;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 3;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 4;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 5;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 6;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 7;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 8;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 9;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 10;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 0xb;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 0xc;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 0xd;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 0xe;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 0xf;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar56 = uVar56 + 0x10;
        uVar33 = uVar56;
      } while (iVar16 + uVar51 < uVar49);
    }
    if (uVar33 < 0x200000) {
      if (0x3fff < uVar33) {
        bVar50 = (byte)((uVar33 << 0xb) >> 0x19) | 0x80;
        bVar13 = (byte)((uVar33 << 0x12) >> 0x19) | 0x80;
        bVar17 = (byte)uVar33 & 0x7f;
        goto LAB_000d2fae;
      }
      if (uVar33 < 0x80) goto LAB_000d5d14;
      bVar17 = (byte)uVar33 & 0x7f;
      bVar13 = (byte)((uVar33 << 0x12) >> 0x19) | 0x80;
      iVar21 = 2;
      iVar32 = 5;
      iVar16 = 4;
      iVar22 = 3;
      iVar48 = 1;
      iVar19 = 0;
    }
    else {
      bVar13 = 0xff;
      bVar50 = 0xff;
      bVar17 = 0x7f;
LAB_000d2fae:
      iVar21 = 3;
      iVar32 = 6;
      iVar22 = 4;
      iVar48 = 2;
      iVar19 = 1;
      *param_1 = bVar50;
      iVar16 = 5;
    }
    param_1[iVar19] = bVar13;
  }
  else {
    if (0x1fffe < uVar49) {
      uVar56 = __udivsi3(uVar49,iVar32);
      goto LAB_000d2ea0;
    }
    if (iVar32 != 0) {
      uVar33 = *(int *)(DAT_000d3aac + 0xd2e84) * uVar49;
      uVar56 = uVar33 >> 0xf;
      if ((uVar33 & 0x4000) != 0) {
        uVar56 = uVar56 + 1;
      }
      goto LAB_000d2ea0;
    }
    uVar33 = 0;
LAB_000d5d14:
    bVar17 = (byte)uVar33;
    iVar21 = 1;
    iVar32 = 4;
    iVar16 = 3;
    iVar22 = 2;
    iVar48 = 0;
  }
  iVar19 = DAT_000d3ab0;
  param_1[iVar48] = bVar17;
  param_1[iVar21] = 0x90;
  iVar21 = DAT_000d3ab4;
  param_1[iVar22] = *(byte *)(iVar19 + 0xd2fe0) | 0x80;
  param_1[iVar16] = *(uchar *)(iVar19 + 0xd2fe1);
  iVar16 = *(int *)(iVar21 + 0xd2fea);
  uVar49 = *(uint *)(iVar19 + 0xd2fd8);
  if (iVar16 == 0x14) {
    uVar56 = uVar49 * 0x666 >> 0xf;
LAB_000d3014:
    uVar51 = iVar16 * uVar56;
    uVar33 = uVar56;
    if (uVar51 < uVar49) {
      iVar19 = 0;
      do {
        uVar33 = uVar56 + 1;
        if (uVar49 <= iVar19 + iVar16 + uVar51) break;
        iVar19 = iVar19 + iVar16 + iVar16;
        uVar33 = uVar56 + 2;
        if (uVar49 <= iVar19 + uVar51) break;
        iVar19 = iVar19 + iVar16;
        uVar33 = uVar56 + 3;
        if (uVar49 <= iVar19 + uVar51) break;
        iVar19 = iVar19 + iVar16;
        uVar33 = uVar56 + 4;
        if (uVar49 <= iVar19 + uVar51) break;
        iVar19 = iVar19 + iVar16;
        uVar33 = uVar56 + 5;
        if (uVar49 <= iVar19 + uVar51) break;
        iVar19 = iVar19 + iVar16;
        uVar33 = uVar56 + 6;
        if (uVar49 <= iVar19 + uVar51) break;
        iVar19 = iVar19 + iVar16;
        uVar33 = uVar56 + 7;
        if (uVar49 <= iVar19 + uVar51) break;
        iVar19 = iVar19 + iVar16;
        uVar33 = uVar56 + 8;
        if (uVar49 <= iVar19 + uVar51) break;
        iVar19 = iVar19 + iVar16;
        uVar33 = uVar56 + 9;
        if (uVar49 <= iVar19 + uVar51) break;
        iVar19 = iVar19 + iVar16;
        uVar33 = uVar56 + 10;
        if (uVar49 <= iVar19 + uVar51) break;
        iVar19 = iVar19 + iVar16;
        uVar33 = uVar56 + 0xb;
        if (uVar49 <= iVar19 + uVar51) break;
        iVar19 = iVar19 + iVar16;
        uVar33 = uVar56 + 0xc;
        if (uVar49 <= iVar19 + uVar51) break;
        iVar19 = iVar19 + iVar16;
        uVar33 = uVar56 + 0xd;
        if (uVar49 <= iVar19 + uVar51) break;
        iVar19 = iVar19 + iVar16;
        uVar33 = uVar56 + 0xe;
        if (uVar49 <= iVar19 + uVar51) break;
        iVar19 = iVar19 + iVar16;
        uVar33 = uVar56 + 0xf;
        if (uVar49 <= iVar19 + uVar51) break;
        iVar19 = iVar19 + iVar16;
        uVar56 = uVar56 + 0x10;
        uVar33 = uVar56;
      } while (iVar19 + uVar51 < uVar49);
    }
    if (uVar33 < 0x200000) {
      if (0x3fff < uVar33) {
        bVar17 = (byte)((uVar33 << 0xb) >> 0x19) | 0x80;
        bVar50 = (byte)((uVar33 << 0x12) >> 0x19) | 0x80;
        bVar13 = (byte)uVar33 & 0x7f;
        goto LAB_000d311a;
      }
      if (uVar33 < 0x80) goto LAB_000d4db4;
      iVar16 = 2;
      bVar13 = (byte)uVar33 & 0x7f;
      bVar50 = (byte)((uVar33 << 0x12) >> 0x19) | 0x80;
      iVar19 = 1;
      iVar21 = 0;
    }
    else {
      bVar50 = 0xff;
      bVar17 = 0xff;
      bVar13 = 0x7f;
LAB_000d311a:
      iVar16 = 3;
      iVar19 = 2;
      iVar21 = 1;
      param_1[iVar32] = bVar17;
    }
    (param_1 + iVar32)[iVar21] = bVar50;
  }
  else {
    if (0x1fffe < uVar49) {
      uVar56 = __udivsi3(uVar49,iVar16);
      goto LAB_000d3014;
    }
    if (iVar16 != 0) {
      uVar33 = *(int *)(iVar21 + 0xd2fee) * uVar49;
      uVar56 = uVar33 >> 0xf;
      if ((uVar33 & 0x4000) != 0) {
        uVar56 = uVar56 + 1;
      }
      goto LAB_000d3014;
    }
    uVar33 = 0;
LAB_000d4db4:
    bVar13 = (byte)uVar33;
    iVar16 = 1;
    iVar19 = 0;
  }
  iVar48 = DAT_000d3abc;
  iVar21 = DAT_000d3ab8;
  iVar22 = iVar32 + iVar16;
  param_1[iVar19 + iVar32] = bVar13;
  param_1[iVar16 + iVar32] = '\0';
  iVar32 = *(int *)(iVar21 + 0xd313a);
  uVar49 = *(uint *)(iVar48 + 0xd313e);
  *(undefined4 *)((int)&DAT_000d3aec + iVar21 + 2) = *(undefined4 *)(iVar48 + 0xd313a);
  if (iVar32 == 0x14) {
    uVar56 = uVar49 * 0x666 >> 0xf;
LAB_000d3164:
    uVar51 = iVar32 * uVar56;
    uVar33 = uVar56;
    if (uVar51 < uVar49) {
      iVar16 = 0;
      do {
        uVar33 = uVar56 + 1;
        if (uVar49 <= iVar16 + iVar32 + uVar51) break;
        iVar16 = iVar16 + iVar32 + iVar32;
        uVar33 = uVar56 + 2;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 3;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 4;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 5;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 6;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 7;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 8;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 9;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 10;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 0xb;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 0xc;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 0xd;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 0xe;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar33 = uVar56 + 0xf;
        if (uVar49 <= iVar16 + uVar51) break;
        iVar16 = iVar16 + iVar32;
        uVar56 = uVar56 + 0x10;
        uVar33 = uVar56;
      } while (iVar16 + uVar51 < uVar49);
    }
    if (uVar33 < 0x200000) {
      if (0x3fff < uVar33) {
        local_30[0] = (byte)((uVar33 << 0xb) >> 0x19) | 0x80;
        bVar17 = (byte)((uVar33 << 0x12) >> 0x19) | 0x80;
        bVar13 = (byte)uVar33 & 0x7f;
        goto LAB_000d3272;
      }
      if (uVar33 < 0x80) goto LAB_000d5024;
      pbVar59 = local_30 + 2;
      bVar13 = (byte)uVar33 & 0x7f;
      bVar17 = (byte)((uVar33 << 0x12) >> 0x19) | 0x80;
      pbVar38 = local_30 + 1;
      pbVar42 = local_30;
      uVar49 = 2;
    }
    else {
      bVar17 = 0xff;
      local_30[0] = 0xff;
      bVar13 = 0x7f;
LAB_000d3272:
      pbVar59 = local_30 + 3;
      pbVar38 = local_30 + 2;
      pbVar42 = local_30 + 1;
      uVar49 = 3;
    }
    *pbVar42 = bVar17;
  }
  else {
    if (0x1fffe < uVar49) {
      uVar56 = __udivsi3(uVar49,iVar32);
      goto LAB_000d3164;
    }
    if (iVar32 != 0) {
      uVar33 = *(int *)(iVar21 + 0xd313e) * uVar49;
      uVar56 = uVar33 >> 0xf;
      if ((uVar33 & 0x4000) != 0) {
        uVar56 = uVar56 + 1;
      }
      goto LAB_000d3164;
    }
    uVar33 = 0;
LAB_000d5024:
    bVar13 = (byte)uVar33;
    pbVar59 = local_30 + 1;
    pbVar38 = local_30;
    uVar49 = 1;
  }
  uVar56 = iVar26 + 4 + uVar49;
  *pbVar38 = bVar13;
  *pbVar59 = 0;
  bVar61 = uVar56 < 0x80;
  if (bVar61) {
    iVar26 = 1;
  }
  else {
    uVar33 = uVar56 >> 7;
    uVar56 = uVar56 & 0x7f;
    iVar26 = 2;
    param_1[iVar22] = (byte)uVar33 | 0x80;
  }
  iVar32 = iVar22 + iVar26;
  param_1[(uint)!bVar61 + iVar22] = (uchar)uVar56;
  param_1[iVar26 + iVar22] = '\0';
  param_1[iVar32] = local_30[0];
  iVar26 = iVar32 + 1;
  if (uVar49 != 1) {
    bVar61 = uVar49 == 3;
    iVar26 = iVar32 + 2;
    if (bVar61) {
      uVar49 = (uint)local_30[2];
    }
    param_1[iVar32 + 1] = local_30[1];
    if (bVar61) {
      param_1[iVar26] = (uchar)uVar49;
      iVar26 = iVar32 + 3;
    }
  }
  iVar32 = DAT_000d3ac0;
  iVar46 = iVar26 + 1;
  param_1[iVar26] = *(uchar *)(DAT_000d3ac0 + 0xd3305);
  iVar22 = DAT_000d3adc;
  iVar48 = DAT_000d3ad8;
  iVar21 = DAT_000d3ad4;
  iVar19 = DAT_000d3ad0;
  iVar16 = DAT_000d3acc;
  iVar26 = DAT_000d3ac8;
  if (*(char *)(iVar32 + 0xd3304) != '\0') {
    local_98 = (ushort *)(iVar32 + 0xd3304);
    iVar20 = DAT_000d3ac4 + 0xd3318;
    uVar49 = 0;
    uVar56 = 0;
    do {
      local_98 = local_98 + 1;
      iVar34 = iVar20 + (uint)*local_98 * 3;
      iVar27 = (uint)*(byte *)(iVar20 + (uint)*local_98 * 3) * 0x15;
      pbVar42 = (byte *)(iVar11 + iVar27);
      iVar28 = iVar46;
      uVar33 = uVar49;
      if ((*(char *)(iVar11 + iVar27) != '\0') && (uVar49 < *(byte *)(iVar21 + 0xd3343))) {
        uVar51 = 0;
        do {
          iVar28 = iVar28 + 1;
          uVar33 = (uVar49 + iVar28) - iVar46;
          param_1[uVar51 + iVar46] = pbVar42[uVar51 + 1];
          uVar51 = uVar51 + 1;
          if (*pbVar42 <= uVar51) break;
        } while (uVar33 < *(byte *)(iVar26 + 0xd3329));
      }
      iVar46 = (uint)*(byte *)(iVar34 + 1) * 0x15 + iVar15;
      pbVar42 = (byte *)(iVar46 + 7);
      iVar27 = iVar28;
      uVar51 = uVar33;
      if ((*(char *)(iVar46 + 7) != '\0') && (uVar33 < *(byte *)(iVar48 + 0xd3345))) {
        uVar49 = 0;
        do {
          iVar27 = iVar27 + 1;
          uVar51 = (uVar33 + iVar27) - iVar28;
          param_1[uVar49 + iVar28] = pbVar42[uVar49 + 1];
          uVar49 = uVar49 + 1;
          if (*pbVar42 <= uVar49) break;
        } while (uVar51 < *(byte *)(iVar16 + 0xd332d));
      }
      iVar28 = (uint)*(byte *)(iVar34 + 2) * 0x15 + iVar44;
      pbVar42 = (byte *)(iVar28 + 6);
      iVar46 = iVar27;
      uVar49 = uVar51;
      if ((*(char *)(iVar28 + 6) != '\0') && (uVar51 < *(byte *)(iVar22 + 0xd3349))) {
        uVar33 = 0;
        do {
          iVar46 = iVar46 + 1;
          uVar49 = (uVar51 + iVar46) - iVar27;
          param_1[uVar33 + iVar27] = pbVar42[uVar33 + 1];
          uVar33 = uVar33 + 1;
          if (*pbVar42 <= uVar33) break;
        } while (uVar49 < *(byte *)(iVar19 + 0xd3339));
      }
      uVar56 = uVar56 + 1;
    } while (uVar56 < *(byte *)(iVar32 + 0xd3304));
  }
  iVar26 = DAT_000d3ae0;
  iVar16 = iVar46 + 1;
  iVar32 = DAT_000d3ae0 + 0xd346c;
  param_1[iVar46] = *(uchar *)(DAT_000d3ae0 + 0xd3578);
  if (*(char *)(iVar26 + 0xd3578) != '\0') {
    uVar49 = 0;
    iVar19 = iVar16;
    puVar43 = param_1 + iVar46;
    do {
      uVar51 = uVar49 + 1;
      uVar33 = uVar49 + 2;
      uVar56 = uVar49 + 3;
      iVar16 = iVar19 + 3;
      puVar43[1] = *(uchar *)(iVar32 + 0x10d);
      uVar49 = uVar49 + 4;
      puVar43[2] = *(uchar *)(iVar32 + 0x10e);
      puVar43[3] = *(uchar *)(iVar32 + 0x10f);
      if (*(byte *)(iVar26 + 0xd3578) <= uVar51) break;
      iVar16 = iVar19 + 6;
      puVar43[4] = *(uchar *)(iVar32 + 0x110);
      puVar43[5] = *(uchar *)(iVar32 + 0x111);
      puVar43[6] = *(uchar *)(iVar32 + 0x112);
      if (*(byte *)(iVar26 + 0xd3578) <= uVar33) break;
      puVar43[7] = *(uchar *)(iVar32 + 0x113);
      iVar16 = iVar19 + 9;
      puVar43[8] = *(uchar *)(iVar32 + 0x114);
      puVar43[9] = *(uchar *)(iVar32 + 0x115);
      if (*(byte *)(iVar26 + 0xd3578) <= uVar56) break;
      iVar16 = iVar19 + 0xc;
      puVar43[10] = *(uchar *)(iVar32 + 0x116);
      puVar43[0xb] = *(uchar *)(iVar32 + 0x117);
      puVar43[0xc] = *(uchar *)(iVar32 + 0x118);
      iVar19 = iVar16;
      puVar43 = puVar43 + 0xc;
      iVar32 = iVar32 + 0xc;
    } while (uVar49 < *(byte *)(iVar26 + 0xd3578));
  }
  iVar26 = DAT_000d3ae4;
  iVar19 = iVar16 + 1;
  iVar32 = DAT_000d3ae4 + 0xd3544;
  param_1[iVar16] = *(uchar *)(DAT_000d3ae4 + 0xd37d1);
  if (*(char *)(iVar26 + 0xd37d1) != '\0') {
    uVar49 = 0;
    iVar21 = iVar19;
    puVar43 = param_1 + iVar16;
    do {
      iVar16 = iVar32 + uVar49 * 2;
      uVar51 = uVar49 + 3;
      uVar56 = uVar49 + 1;
      iVar48 = iVar32 + uVar51 * 2;
      uVar33 = uVar49 + 2;
      iVar19 = iVar21 + 2;
      puVar43[1] = *(uchar *)(iVar16 + 0x28e);
      iVar22 = iVar32 + uVar56 * 2;
      iVar46 = iVar32 + uVar33 * 2;
      uVar49 = uVar49 + 4;
      puVar43[2] = *(uchar *)(iVar16 + 0x28f);
      if (*(byte *)(iVar26 + 0xd37d1) <= uVar56) break;
      iVar19 = iVar21 + 4;
      puVar43[3] = *(uchar *)(iVar22 + 0x28e);
      puVar43[4] = *(uchar *)(iVar22 + 0x28f);
      if (*(byte *)(iVar26 + 0xd37d1) <= uVar33) break;
      iVar19 = iVar21 + 6;
      puVar43[5] = *(uchar *)(iVar46 + 0x28e);
      puVar43[6] = *(uchar *)(iVar46 + 0x28f);
      if (*(byte *)(iVar26 + 0xd37d1) <= uVar51) break;
      iVar19 = iVar21 + 8;
      puVar43[7] = *(uchar *)(iVar48 + 0x28e);
      puVar43[8] = *(uchar *)(iVar48 + 0x28f);
      iVar21 = iVar19;
      puVar43 = puVar43 + 8;
    } while (uVar49 < *(byte *)(iVar26 + 0xd37d1));
  }
  iVar32 = DAT_000d3ae8;
  iVar26 = iVar19 + 1;
  piVar24 = (int *)(DAT_000d3ae8 + 0xd35fc);
  param_1[iVar19] = *(uchar *)(DAT_000d3ae8 + 0xd398a);
  if (*(char *)(iVar32 + 0xd398a) != '\0') {
    pbVar42 = param_1 + iVar19;
    pbVar38 = (byte *)(iVar32 + 0xd398b);
    do {
      bVar13 = *pbVar38;
      iVar26 = iVar26 + 1;
      if ((int)((uint)bVar13 << 0x18) < 0) {
        *pbVar38 = 0x7f;
        bVar13 = 0x7f;
      }
      pbVar42 = pbVar42 + 1;
      *pbVar42 = bVar13;
      pbVar38 = pbVar38 + 1;
    } while ((uint)((int)pbVar42 - (int)(param_1 + iVar19)) < (uint)*(byte *)(iVar32 + 0xd398a));
  }
  iVar27 = *piVar24;
LAB_000d2e0c:
  iVar16 = DAT_000d3aa4;
  iVar32 = DAT_000d3aa0;
  uVar49 = *(uint *)(DAT_000d3aa0 + 0xd37c4);
  *(int *)(DAT_000d3aa0 + 0xd37d4) = iVar27;
  *(undefined1 *)(iVar16 + 0xd2e31) = 0;
  if (uVar49 < 0x7fffffffU - iVar27) {
    *(uint *)(iVar32 + 0xd37c4) = uVar49 + iVar27;
  }
  if (iVar26 == 0) {
    iVar26 = -3;
    uVar56 = (uint)*(byte *)(DAT_000d6280 + 0xd64be);
  }
  else {
    uVar56 = (uint)*(byte *)(DAT_000d3aa8 + 0xd37ec);
  }
LAB_000cf73a:
  if (uVar56 == local_48) {
    uVar49 = uVar56 + 1;
    uVar56 = uVar49 & 0xff;
    *(char *)(DAT_000cf7dc + 0xd010a) = (char)uVar49;
  }
  if (iVar26 != 0) {
    *(undefined4 *)(DAT_000d48ac + 0xd4ed4) = *(undefined4 *)(iVar55 + 0x14);
    return iVar26;
  }
  uVar49 = (uint)*(byte *)(DAT_000cf7d8 + 0xcf779);
  local_48 = uVar56;
  if (uVar49 <= uVar56) goto LAB_000cc7ca;
  goto LAB_000cf6f2;
}

