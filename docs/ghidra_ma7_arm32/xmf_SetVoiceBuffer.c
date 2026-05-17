/* xmf_SetVoiceBuffer @ 0008e6f8 6436B */


/* YAMAHA::xmf_SetVoiceBuffer(void*, YAMAHA::_MAXMFCNV_PRM*) */

undefined4 YAMAHA::xmf_SetVoiceBuffer(void *param_1,_MAXMFCNV_PRM *param_2)

{
  undefined1 *puVar1;
  _MAXMFCNV_PRM _Var2;
  char cVar3;
  short sVar4;
  short sVar5;
  ushort uVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  int iVar15;
  undefined *puVar16;
  char *pcVar17;
  byte bVar18;
  int iVar19;
  undefined1 uVar20;
  byte bVar21;
  int iVar22;
  uint uVar23;
  undefined *puVar24;
  undefined4 uVar25;
  int iVar26;
  undefined1 uVar27;
  undefined4 *puVar28;
  uint uVar29;
  undefined *puVar30;
  uint uVar31;
  int iVar32;
  uint uVar33;
  int iVar34;
  int iVar35;
  int local_60;
  undefined *local_54;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  memset(param_1,0,0x30);
  *(_MAXMFCNV_PRM *)param_1 = param_2[1];
  *(char *)((int)param_1 + 1) = (char)*(undefined4 *)param_2;
  *(char *)((int)param_1 + 2) = (char)*(undefined4 *)(param_2 + 4);
  *(char *)((int)param_1 + 3) = (char)*(undefined4 *)(param_2 + 8);
  uVar25 = *(undefined4 *)(param_2 + 0xc);
  *(undefined1 *)((int)param_1 + 5) = 5;
  *(char *)((int)param_1 + 4) = (char)uVar25;
  _Var2 = param_2[0x21];
  *(_MAXMFCNV_PRM *)((int)param_1 + 6) = _Var2;
  uVar14 = *(uint *)(param_2 + 0x20);
  *(undefined1 *)((int)param_1 + 0xc) = 0xf0;
  *(undefined1 *)((int)param_1 + 8) = 0x80;
  *(undefined1 *)((int)param_1 + 10) = 2;
  *(char *)((int)param_1 + 7) = (char)uVar14;
  *(undefined1 *)((int)param_1 + 0xb) = 0xff;
  *(undefined1 *)((int)param_1 + 0xf) = 0xd;
  *(undefined1 *)((int)param_1 + 0xe) = 0x11;
  if (*(int *)(param_2 + 0x1c) == 0x10) {
    uVar27 = 0x81;
  }
  else {
    uVar27 = 0x82;
  }
  *(undefined1 *)((int)param_1 + 9) = uVar27;
  iVar22 = *(int *)(param_2 + 0x14);
  if (iVar22 == *(int *)(param_2 + 0x18)) {
    *(byte *)((int)param_1 + 0x12) = (byte)((uint)((iVar22 + -2) * 0x20000) >> 0x19);
    *(char *)((int)param_1 + 0x13) = (char)*(undefined4 *)(param_2 + 0x14) + -2;
    *(byte *)((int)param_1 + 0x14) =
         (byte)((uint)((*(int *)(param_2 + 0x18) + -2) * 0x20000) >> 0x19);
    *(char *)((int)param_1 + 0x15) = (char)*(undefined4 *)(param_2 + 0x18) + -2;
  }
  else {
    *(byte *)((int)param_1 + 0x12) = (byte)((uint)(iVar22 << 0x11) >> 0x19);
    *(char *)((int)param_1 + 0x13) = (char)*(undefined4 *)(param_2 + 0x14);
    *(byte *)((int)param_1 + 0x14) =
         (byte)((uint)((*(int *)(param_2 + 0x18) + -1) * 0x20000) >> 0x19);
    *(char *)((int)param_1 + 0x15) = (char)*(undefined4 *)(param_2 + 0x18) + -1;
  }
  uVar23 = (uint)*(byte *)((int)param_1 + 0x30);
  *(undefined1 *)((int)param_1 + 0x26) = 0x1f;
  *(undefined1 *)((int)param_1 + 0x27) = 0x1f;
  *(undefined1 *)((int)param_1 + 0x28) = 0x1f;
  *(undefined1 *)((int)param_1 + 0x29) = 0x1f;
  *(undefined1 *)((int)param_1 + 0x2a) = 0;
  *(undefined1 *)((int)param_1 + 0x2b) = 0;
  *(undefined1 *)((int)param_1 + 0x2c) = 0;
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  *(byte *)((int)param_1 + 0x2f) = (byte)*(undefined4 *)(param_2 + 0x10) | 0x80;
  if (uVar23 != 0x3c) {
    uVar14 = (uVar14 & 0xff) + (uint)(byte)_Var2 * 0x100;
    if (uVar23 < 0x3c) {
      uVar31 = 0x3c - uVar23 & 0xffff;
      uVar29 = uVar31 / 0xc;
      uVar33 = uVar29 & 0xff;
      uVar31 = uVar31 % 0xc;
      uVar23 = uVar14;
      if (uVar33 != 0) {
        uVar23 = uVar14 * 2;
        bVar13 = (char)uVar29 - 1U & 0xf;
        uVar29 = 1;
        if (1 < uVar33) {
          if (bVar13 != 0) {
            if (bVar13 != 1) {
              if (bVar13 != 2) {
                if (bVar13 != 3) {
                  if (bVar13 != 4) {
                    if (bVar13 != 5) {
                      if (bVar13 != 6) {
                        if (bVar13 != 7) {
                          if (bVar13 != 8) {
                            if (bVar13 != 9) {
                              if (bVar13 != 10) {
                                if (bVar13 != 0xb) {
                                  if (bVar13 != 0xc) {
                                    if (bVar13 != 0xd) {
                                      if (bVar13 != 0xe) {
                                        uVar23 = uVar14 * 4;
                                        uVar29 = 2;
                                      }
                                      uVar29 = uVar29 + 1;
                                      uVar23 = uVar23 << 1;
                                    }
                                    uVar29 = uVar29 + 1;
                                    uVar23 = uVar23 << 1;
                                  }
                                  uVar29 = uVar29 + 1;
                                  uVar23 = uVar23 << 1;
                                }
                                uVar29 = uVar29 + 1;
                                uVar23 = uVar23 << 1;
                              }
                              uVar29 = uVar29 + 1;
                              uVar23 = uVar23 << 1;
                            }
                            uVar29 = uVar29 + 1;
                            uVar23 = uVar23 << 1;
                          }
                          uVar23 = uVar23 << 1;
                          uVar29 = uVar29 + 1 & 0xff;
                        }
                        uVar23 = uVar23 << 1;
                        uVar29 = uVar29 + 1 & 0xff;
                      }
                      uVar23 = uVar23 << 1;
                      uVar29 = uVar29 + 1 & 0xff;
                    }
                    uVar23 = uVar23 << 1;
                    uVar29 = uVar29 + 1 & 0xff;
                  }
                  uVar23 = uVar23 << 1;
                  uVar29 = uVar29 + 1 & 0xff;
                }
                uVar23 = uVar23 << 1;
                uVar29 = uVar29 + 1 & 0xff;
              }
              uVar23 = uVar23 << 1;
              uVar29 = uVar29 + 1 & 0xff;
            }
            uVar23 = uVar23 << 1;
            uVar29 = uVar29 + 1 & 0xff;
            if (uVar33 <= uVar29) goto joined_r0x0008eca4;
          }
          do {
            uVar23 = uVar23 << 0x10;
            uVar29 = uVar29 + 0x10 & 0xff;
          } while (uVar29 < uVar33);
        }
      }
joined_r0x0008eca4:
      uVar14 = uVar23;
      if (uVar31 != 0) {
        iVar22 = DAT_0008f730 + 0x8e95a + (uVar31 - 1) * 4;
        iVar34 = *(int *)(iVar22 + 0xa4);
        iVar22 = *(int *)(iVar22 + 0x78);
        goto LAB_0008e974;
      }
    }
    else {
      uVar23 = uVar23 - 0x3c & 0xffff;
      uVar33 = uVar23 / 0xc;
      uVar31 = uVar33 & 0xff;
      uVar23 = uVar23 % 0xc;
      if (uVar31 != 0) {
        uVar29 = 1;
        uVar14 = uVar14 >> 1;
        bVar13 = (char)uVar33 - 1U & 0xf;
        if (1 < uVar31) {
          if (bVar13 != 0) {
            if (bVar13 != 1) {
              if (bVar13 != 2) {
                if (bVar13 != 3) {
                  if (bVar13 != 4) {
                    if (bVar13 != 5) {
                      if (bVar13 != 6) {
                        if (bVar13 != 7) {
                          if (bVar13 != 8) {
                            if (bVar13 != 9) {
                              if (bVar13 != 10) {
                                if (bVar13 != 0xb) {
                                  if (bVar13 != 0xc) {
                                    if (bVar13 != 0xd) {
                                      if (bVar13 != 0xe) {
                                        uVar14 = 0;
                                        uVar29 = 2;
                                      }
                                      uVar29 = uVar29 + 1;
                                      uVar14 = uVar14 >> 1;
                                    }
                                    uVar29 = uVar29 + 1;
                                    uVar14 = uVar14 >> 1;
                                  }
                                  uVar29 = uVar29 + 1;
                                  uVar14 = uVar14 >> 1;
                                }
                                uVar29 = uVar29 + 1;
                                uVar14 = uVar14 >> 1;
                              }
                              uVar29 = uVar29 + 1;
                              uVar14 = uVar14 >> 1;
                            }
                            uVar29 = uVar29 + 1;
                            uVar14 = uVar14 >> 1;
                          }
                          uVar14 = uVar14 >> 1;
                          uVar29 = uVar29 + 1 & 0xff;
                        }
                        uVar14 = uVar14 >> 1;
                        uVar29 = uVar29 + 1 & 0xff;
                      }
                      uVar14 = uVar14 >> 1;
                      uVar29 = uVar29 + 1 & 0xff;
                    }
                    uVar14 = uVar14 >> 1;
                    uVar29 = uVar29 + 1 & 0xff;
                  }
                  uVar14 = uVar14 >> 1;
                  uVar29 = uVar29 + 1 & 0xff;
                }
                uVar14 = uVar14 >> 1;
                uVar29 = uVar29 + 1 & 0xff;
              }
              uVar14 = uVar14 >> 1;
              uVar29 = uVar29 + 1 & 0xff;
            }
            uVar14 = uVar14 >> 1;
            uVar29 = uVar29 + 1 & 0xff;
            if (uVar31 <= uVar29) goto LAB_0008e8ec;
          }
          do {
            uVar14 = 0;
            uVar29 = uVar29 + 0x10 & 0xff;
          } while (uVar29 < uVar31);
        }
      }
LAB_0008e8ec:
      if (uVar23 != 0) {
        iVar22 = DAT_0008f72c + 0x8e902 + (uVar23 - 1) * 4;
        iVar34 = *(int *)(iVar22 + 0xfc);
        iVar22 = *(int *)(iVar22 + 0xd0);
LAB_0008e974:
        uVar14 = ((iVar34 * uVar14) / 100000 + (iVar22 * uVar14) / 100) / 10;
      }
    }
    uVar23 = uVar14;
    if (48000 < uVar14) {
      while (((((uVar23 = uVar14 >> 1, 48000 < uVar14 >> 1 &&
                (uVar23 = uVar14 >> 2, 48000 < uVar14 >> 2)) &&
               (uVar23 = uVar14 >> 3, 48000 < uVar14 >> 3)) &&
              (((uVar23 = uVar14 >> 4, 48000 < uVar14 >> 4 &&
                (uVar23 = uVar14 >> 5, 48000 < uVar14 >> 5)) &&
               ((uVar23 = uVar14 >> 6, 48000 < uVar14 >> 6 &&
                ((uVar23 = uVar14 >> 7, 48000 < uVar14 >> 7 &&
                 (uVar23 = uVar14 >> 8, 48000 < uVar14 >> 8)))))))) &&
             (uVar23 = uVar14 >> 9, 48000 < uVar14 >> 9))) {
        uVar23 = uVar14 >> 10;
        if ((((uVar14 >> 10 < 0xbb81) || (uVar23 = uVar14 >> 0xb, uVar14 >> 0xb < 0xbb81)) ||
            (uVar23 = uVar14 >> 0xc, uVar14 >> 0xc < 0xbb81)) ||
           (((uVar23 = uVar14 >> 0xd, uVar14 >> 0xd < 0xbb81 ||
             (uVar23 = uVar14 >> 0xe, uVar14 >> 0xe < 0xbb81)) ||
            ((uVar23 = uVar14 >> 0xf, uVar14 >> 0xf < 0xbb81 ||
             (uVar14 = uVar14 >> 0x10, uVar23 = uVar14, uVar14 < 0xbb81)))))) break;
      }
    }
    *(char *)((int)param_1 + 7) = (char)uVar23;
    *(char *)((int)param_1 + 6) = (char)(uVar23 >> 8);
  }
  iVar12 = DAT_0008f750;
  iVar11 = DAT_0008f744;
  iVar10 = DAT_0008f740;
  iVar9 = DAT_0008f73c;
  iVar34 = DAT_0008f738;
  iVar22 = DAT_0008f734;
  if (*(int *)(param_2 + 0x28) == 0) {
    return 0x27;
  }
  uVar14 = *(uint *)(param_2 + 0x2c);
  if (uVar14 == 0) {
    return 0x27;
  }
  local_60 = 0x1f;
  uVar23 = 0;
  iVar15 = DAT_0008f748 + 0x8ea80;
  iVar19 = DAT_0008f74c + 0x8ea86;
  local_54 = (undefined *)0x0;
  iVar32 = DAT_0008f754 + 0x8ea8e;
  bVar8 = false;
  bVar7 = false;
  puVar30 = (undefined *)0x0;
  while (uVar23 < uVar14) {
    iVar35 = *(int *)(param_2 + 0x28) + uVar23;
    puVar1 = (undefined1 *)(*(int *)(param_2 + 0x28) + uVar23);
    uVar23 = uVar23 + 0xc;
    uVar31 = (uint)*(byte *)(iVar35 + 10) << 0x10;
    uVar33 = uVar31 | (uint)*(byte *)(iVar35 + 0xb) << 0x18;
    sVar4 = CONCAT11(*(undefined1 *)(iVar35 + 1),*puVar1);
    puVar16 = (undefined *)(uVar33 | *(byte *)(iVar35 + 8) | (uint)*(byte *)(iVar35 + 9) << 8);
    sVar5 = *(short *)(iVar35 + 2);
    uVar6 = *(ushort *)(iVar35 + 4);
    if (sVar4 == 1) {
      if (uVar6 == 1) {
        if (sVar5 == 0) {
          if ((int)puVar16 < 0) {
            uVar31 = -(int)puVar16 & 0xffffff;
          }
          uVar31 = uVar31 >> 0x10;
          if (0x77 < uVar31) {
            uVar31 = 0x78;
          }
          *(byte *)((int)param_1 + 0xe) =
               *(byte *)(iVar22 + uVar31 / 10 + 0x8f17c) | *(byte *)((int)param_1 + 0xe) & 7;
          uVar14 = *(uint *)(param_2 + 0x2c);
        }
      }
      else if ((uVar6 == 3) && (sVar5 == 0)) {
        if ((int)puVar16 < 0) {
          if (puVar16 < (undefined *)0xfffb0000) {
            iVar35 = 1;
            if (puVar16 < (undefined *)0xfff60000) {
              if (puVar16 < (undefined *)0xffec0000) goto LAB_0008edb6;
              iVar35 = 2;
            }
          }
          else {
            iVar35 = 0;
          }
          bVar13 = *(byte *)(iVar35 + iVar34 + 0x8f192);
        }
        else {
          if (puVar16 < (undefined *)0x50001) {
            iVar35 = 0;
          }
          else {
            iVar35 = 1;
            if ((undefined *)0xa0000 < puVar16) {
              if (&UNK_00140000 < puVar16) {
LAB_0008edb6:
                bVar13 = 7;
                goto LAB_0008edb8;
              }
              iVar35 = 2;
            }
          }
          bVar13 = *(byte *)(iVar35 + iVar9 + 0x8f1c2);
        }
LAB_0008edb8:
        *(byte *)((int)param_1 + 0xe) = bVar13 | *(byte *)((int)param_1 + 0xe) & 0xf8;
        uVar14 = *(uint *)(param_2 + 0x2c);
      }
    }
    else if (sVar4 == 0) {
      if (uVar6 == 0x209) {
        if (sVar5 == 0) {
          puVar16 = (undefined *)FUN_0008e630();
          puVar28 = (undefined4 *)(iVar10 + 0x8f0b4);
          uVar14 = 4;
          if (&UNK_003d08ff < puVar16) {
            puVar16 = &UNK_003d0900;
          }
          do {
            puVar24 = (undefined *)puVar28[1];
            uVar33 = uVar14 & 0xff;
            uVar31 = uVar14;
            if (puVar24 < puVar16) {
LAB_0008f8f6:
              if (uVar33 == 4) {
                bVar13 = 0x10;
                *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0xfe;
                bVar18 = *(byte *)((int)param_1 + 0xb) & 0xf;
                goto LAB_0008f38e;
              }
              uVar14 = *(int *)(iVar11 + uVar31 * 4 + 0x8f0aa) - (int)puVar16;
              if (uVar14 < (uint)((int)puVar16 - (int)puVar24)) {
                uVar33 = uVar33 - 1;
              }
              bVar18 = *(byte *)((int)param_1 + 0xb) & 0xf;
              *(byte *)((int)param_1 + 0xb) = bVar18;
              if (uVar14 < (uint)((int)puVar16 - (int)puVar24)) {
                uVar31 = uVar33 & 0xff;
              }
              bVar21 = *(byte *)((int)param_1 + 0xf) & 0xfe;
              *(byte *)((int)param_1 + 0xf) = bVar21;
              bVar13 = (byte)(((int)uVar31 >> 1 & 0x1eU) << 3);
              if (((int)uVar31 >> 1 & 1U) != 0) goto LAB_0008f388;
              goto LAB_0008f38e;
            }
            puVar24 = (undefined *)puVar28[2];
            uVar31 = uVar14 + 1;
            uVar33 = uVar31 & 0xff;
            if (puVar24 < puVar16) goto LAB_0008f8f6;
            puVar24 = (undefined *)puVar28[3];
            uVar31 = uVar14 + 2;
            uVar33 = uVar31 & 0xff;
            if (puVar24 < puVar16) goto LAB_0008f8f6;
            puVar24 = (undefined *)puVar28[4];
            uVar31 = uVar14 + 3;
            uVar33 = uVar31 & 0xff;
            if (puVar24 < puVar16) goto LAB_0008f8f6;
            puVar24 = (undefined *)puVar28[5];
            uVar31 = uVar14 + 4;
            uVar33 = uVar31 & 0xff;
            if (puVar24 < puVar16) goto LAB_0008f8f6;
            puVar24 = (undefined *)puVar28[6];
            uVar31 = uVar14 + 5;
            uVar33 = uVar31 & 0xff;
            if (puVar24 < puVar16) goto LAB_0008f8f6;
            puVar24 = (undefined *)puVar28[7];
            uVar31 = uVar14 + 6;
            uVar33 = uVar31 & 0xff;
            if (puVar24 < puVar16) goto LAB_0008f8f6;
            puVar24 = (undefined *)puVar28[8];
            uVar31 = uVar14 + 7;
            uVar33 = uVar31 & 0xff;
            if (puVar24 < puVar16) goto LAB_0008f8f6;
            puVar24 = (undefined *)puVar28[9];
            uVar31 = uVar14 + 8;
            uVar33 = uVar31 & 0xff;
            if (puVar24 < puVar16) goto LAB_0008f8f6;
            puVar28 = puVar28 + 10;
            puVar24 = (undefined *)*puVar28;
            uVar31 = uVar14 + 9;
            uVar33 = uVar31 & 0xff;
            if (puVar24 < puVar16) goto LAB_0008f8f6;
            uVar14 = uVar14 + 10;
          } while (uVar14 != 0x40);
          bVar13 = 0xf0;
          bVar18 = *(byte *)((int)param_1 + 0xb) & 0xf;
          bVar21 = *(byte *)((int)param_1 + 0xf) & 0xfe;
LAB_0008f388:
          *(byte *)((int)param_1 + 0xf) = bVar21 | 1;
LAB_0008f38e:
          *(byte *)((int)param_1 + 0xb) = bVar13 | bVar18;
          uVar14 = *(uint *)(param_2 + 0x2c);
        }
      }
      else if (uVar6 < 0x20a) {
        if (uVar6 == 0x104) {
          if (sVar5 == 0) {
            iVar35 = 0;
            if ((int)puVar16 < -0x7025e40) {
LAB_0008fa7e:
              bVar13 = *(byte *)(iVar35 + DAT_00090060 + 0x8ffb6);
            }
            else {
              if ((int)puVar16 < -0x364b7a9) {
                iVar35 = 1;
                goto LAB_0008fa7e;
              }
              if ((int)puVar16 < -0x19a7900) {
                iVar35 = 2;
                goto LAB_0008fa7e;
              }
              bVar13 = 0xc0;
            }
            *(byte *)((int)param_1 + 9) = bVar13 | *(byte *)((int)param_1 + 9) & 0x3f;
            uVar14 = *(uint *)(param_2 + 0x2c);
          }
        }
        else if (uVar6 < 0x105) {
          if (uVar6 == 3) {
            if (sVar5 == 0) {
              if ((int)puVar16 < 0) {
                if (puVar16 < (undefined *)0xfb500000) {
                  uVar31 = 0;
                  uVar14 = uVar31;
                }
                else {
                  uVar14 = ((int)puVar16 >> 0x10) + 0x4b0;
                  uVar31 = uVar14 / 100;
                  uVar14 = uVar14 % 100;
                }
              }
              else if (puVar16 < (undefined *)0x4b00001) {
                uVar14 = (uVar33 >> 0x10) + 0x4b0;
                uVar31 = uVar14 / 100;
                uVar14 = uVar14 % 100;
              }
              else {
                uVar31 = 0x18;
                uVar14 = 0;
              }
              iVar26 = DAT_0008f75c + 0x8f1de + uVar31 * 4;
              iVar35 = DAT_0008f75c + 0x8f1de + uVar14 * 4;
              uVar14 = (uint)*(byte *)((int)param_1 + 7) + (uint)*(byte *)((int)param_1 + 6) * 0x100
                       >> 1;
              iVar26 = (*(int *)(iVar26 + 0x128) * uVar14) / 1000 +
                       (*(int *)(iVar26 + 0x18c) * uVar14) / 1000000;
              uVar14 = ((uint)(*(int *)(iVar35 + 0x380) * iVar26) / 100000 +
                        (uint)(*(int *)(iVar35 + 0x1f0) * iVar26) / 100 + 5) / 10;
              *(char *)((int)param_1 + 7) = (char)uVar14;
              *(char *)((int)param_1 + 6) = (char)(uVar14 >> 8);
              uVar14 = *(uint *)(param_2 + 0x2c);
            }
          }
          else if ((uVar6 == 4) && (sVar5 == 0)) {
            if ((int)puVar16 < 0) {
              if (puVar16 < (undefined *)0xffd10000) {
                if (puVar16 < (undefined *)0xffb20000) {
                  if (puVar16 < (undefined *)0xff930000) {
                    if (puVar16 < (undefined *)0xff730000) {
                      if (puVar16 < (undefined *)0xff540000) {
                        if (puVar16 < (undefined *)0xff350000) {
                          if (puVar16 < (undefined *)0xff160000) {
                            if (puVar16 < (undefined *)0xfef60000) {
                              if (puVar16 < (undefined *)0xfed70000) {
                                if (puVar16 < (undefined *)0xfeb80000) {
                                  if (puVar16 < (undefined *)0xfe990000) {
                                    if (puVar16 < (undefined *)0xfe790000) {
                                      if (puVar16 < (undefined *)0xfe5a0000) {
                                        if (puVar16 < (undefined *)0xfe3b0000) {
                                          if (puVar16 < (undefined *)0xfe1c0000) {
                                            bVar13 = 0;
                                            goto LAB_0008ed68;
                                          }
                                          iVar35 = 0xe;
                                        }
                                        else {
                                          iVar35 = 0xd;
                                        }
                                      }
                                      else {
                                        iVar35 = 0xc;
                                      }
                                    }
                                    else {
                                      iVar35 = 0xb;
                                    }
                                  }
                                  else {
                                    iVar35 = 10;
                                  }
                                }
                                else {
                                  iVar35 = 9;
                                }
                              }
                              else {
                                iVar35 = 8;
                              }
                            }
                            else {
                              iVar35 = 7;
                            }
                          }
                          else {
                            iVar35 = 6;
                          }
                        }
                        else {
                          iVar35 = 5;
                        }
                      }
                      else {
                        iVar35 = 4;
                      }
                    }
                    else {
                      iVar35 = 3;
                    }
                  }
                  else {
                    iVar35 = 2;
                  }
                }
                else {
                  iVar35 = 1;
                }
              }
              else {
                iVar35 = 0;
              }
              bVar13 = *(byte *)(iVar35 + DAT_00090064 + 0x8ffd4);
            }
            else {
              if (puVar16 < (undefined *)0x2f0001) {
                iVar35 = 0;
              }
              else if (puVar16 < (undefined *)0x4e0001) {
                iVar35 = 1;
              }
              else if (puVar16 < (undefined *)0x6d0001) {
                iVar35 = 2;
              }
              else if (puVar16 < (undefined *)0x8d0001) {
                iVar35 = 3;
              }
              else if (puVar16 < (undefined *)0xac0001) {
                iVar35 = 4;
              }
              else if (puVar16 < (undefined *)0xcb0001) {
                iVar35 = 5;
              }
              else if (puVar16 < (undefined *)0xea0001) {
                iVar35 = 6;
              }
              else if (puVar16 < (undefined *)0x10a0001) {
                iVar35 = 7;
              }
              else if (puVar16 < (undefined *)0x1290001) {
                iVar35 = 8;
              }
              else if (puVar16 < (undefined *)0x1480001) {
                iVar35 = 9;
              }
              else if (puVar16 < (undefined *)0x1670001) {
                iVar35 = 10;
              }
              else if (puVar16 < (undefined *)0x1870001) {
                iVar35 = 0xb;
              }
              else if (puVar16 < (undefined *)0x1a60001) {
                iVar35 = 0xc;
              }
              else if (puVar16 < (undefined *)0x1c50001) {
                iVar35 = 0xd;
              }
              else {
                if ((undefined *)0x1e40000 < puVar16) {
                  bVar13 = 0xf8;
                  goto LAB_0008ed68;
                }
                iVar35 = 0xe;
              }
              bVar13 = *(byte *)(iVar35 + DAT_00090068 + 0x902de);
            }
LAB_0008ed68:
            *(byte *)((int)param_1 + 8) = bVar13 | *(byte *)((int)param_1 + 8) & 7;
            *(byte *)((int)param_1 + 9) = *(byte *)((int)param_1 + 9) & 0xdf | 0x20;
            uVar14 = *(uint *)(param_2 + 0x2c);
          }
        }
        else if (uVar6 == 0x206) {
          if (sVar5 == 0) {
            puVar16 = (undefined *)FUN_0008e630();
            uVar14 = 4;
            puVar28 = (undefined4 *)(DAT_00090054 + 0x8fcba);
            if (&UNK_003d08ff < puVar16) {
              puVar16 = &UNK_003d0900;
            }
            do {
              puVar24 = (undefined *)puVar28[1];
              uVar33 = uVar14 & 0xff;
              uVar31 = uVar14;
              if (puVar24 < puVar16) {
LAB_0008f8a6:
                if (uVar33 == 4) {
                  bVar18 = 0x10;
                  *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0xf7;
                  bVar13 = *(byte *)((int)param_1 + 0xc) & 0xf;
                  goto LAB_0008f480;
                }
                uVar14 = *(int *)(DAT_00090058 + uVar31 * 4 + 0x8fde6) - (int)puVar16;
                if (uVar14 < (uint)((int)puVar16 - (int)puVar24)) {
                  uVar33 = uVar33 - 1;
                }
                bVar13 = *(byte *)((int)param_1 + 0xc) & 0xf;
                *(byte *)((int)param_1 + 0xc) = bVar13;
                if (uVar14 < (uint)((int)puVar16 - (int)puVar24)) {
                  uVar31 = uVar33 & 0xff;
                }
                bVar21 = *(byte *)((int)param_1 + 0xf) & 0xf7;
                *(byte *)((int)param_1 + 0xf) = bVar21;
                bVar18 = (byte)(((int)uVar31 >> 1 & 0x1eU) << 3);
                if (((int)uVar31 >> 1 & 1U) != 0) goto LAB_0008f82a;
                goto LAB_0008f480;
              }
              puVar24 = (undefined *)puVar28[2];
              uVar31 = uVar14 + 1;
              uVar33 = uVar31 & 0xff;
              if (puVar24 < puVar16) goto LAB_0008f8a6;
              puVar24 = (undefined *)puVar28[3];
              uVar31 = uVar14 + 2;
              uVar33 = uVar31 & 0xff;
              if (puVar24 < puVar16) goto LAB_0008f8a6;
              puVar24 = (undefined *)puVar28[4];
              uVar31 = uVar14 + 3;
              uVar33 = uVar31 & 0xff;
              if (puVar24 < puVar16) goto LAB_0008f8a6;
              puVar24 = (undefined *)puVar28[5];
              uVar31 = uVar14 + 4;
              uVar33 = uVar31 & 0xff;
              if (puVar24 < puVar16) goto LAB_0008f8a6;
              puVar24 = (undefined *)puVar28[6];
              uVar31 = uVar14 + 5;
              uVar33 = uVar31 & 0xff;
              if (puVar24 < puVar16) goto LAB_0008f8a6;
              puVar24 = (undefined *)puVar28[7];
              uVar31 = uVar14 + 6;
              uVar33 = uVar31 & 0xff;
              if (puVar24 < puVar16) goto LAB_0008f8a6;
              puVar24 = (undefined *)puVar28[8];
              uVar31 = uVar14 + 7;
              uVar33 = uVar31 & 0xff;
              if (puVar24 < puVar16) goto LAB_0008f8a6;
              puVar24 = (undefined *)puVar28[9];
              uVar31 = uVar14 + 8;
              uVar33 = uVar31 & 0xff;
              if (puVar24 < puVar16) goto LAB_0008f8a6;
              puVar28 = puVar28 + 10;
              puVar24 = (undefined *)*puVar28;
              uVar31 = uVar14 + 9;
              uVar33 = uVar31 & 0xff;
              if (puVar24 < puVar16) goto LAB_0008f8a6;
              uVar14 = uVar14 + 10;
            } while (uVar14 != 0x40);
            bVar18 = 0xf0;
            bVar13 = *(byte *)((int)param_1 + 0xc) & 0xf;
            bVar21 = *(byte *)((int)param_1 + 0xf) & 0xf7;
LAB_0008f82a:
            *(byte *)((int)param_1 + 0xf) = bVar21 | 8;
LAB_0008f480:
            *(byte *)((int)param_1 + 0xc) = bVar13 | bVar18;
            uVar14 = *(uint *)(param_2 + 0x2c);
          }
        }
        else if ((uVar6 == 0x207) && (sVar5 == 0)) {
          puVar16 = (undefined *)FUN_0008e630();
          uVar14 = 4;
          puVar28 = (undefined4 *)(DAT_0008f758 + 0x8f6b6);
          if (&UNK_003d08ff < puVar16) {
            puVar16 = &UNK_003d0900;
          }
          do {
            puVar24 = (undefined *)puVar28[1];
            uVar33 = uVar14 & 0xff;
            uVar31 = uVar14;
            if (puVar24 < puVar16) {
LAB_0008f948:
              if (uVar33 == 4) {
                bVar18 = 1;
                *(byte *)((int)param_1 + 0xf) = *(byte *)((int)param_1 + 0xf) & 0xfb;
                bVar13 = *(byte *)((int)param_1 + 0xb) & 0xf0;
                goto LAB_0008f14c;
              }
              uVar14 = *(int *)(DAT_0009005c + uVar31 * 4 + 0x8ff88) - (int)puVar16;
              bVar21 = *(byte *)((int)param_1 + 0xf) & 0xfb;
              if (uVar14 < (uint)((int)puVar16 - (int)puVar24)) {
                uVar31 = uVar33 - 1;
              }
              bVar13 = *(byte *)((int)param_1 + 0xb) & 0xf0;
              *(byte *)((int)param_1 + 0xf) = bVar21;
              if (uVar14 < (uint)((int)puVar16 - (int)puVar24)) {
                uVar31 = uVar31 & 0xff;
              }
              *(byte *)((int)param_1 + 0xb) = bVar13;
              bVar18 = (byte)((uVar31 << 0x16) >> 0x18);
              if ((uVar31 & 2) != 0) goto LAB_0008f146;
              goto LAB_0008f14c;
            }
            puVar24 = (undefined *)puVar28[2];
            uVar31 = uVar14 + 1;
            uVar33 = uVar31 & 0xff;
            if (puVar24 < puVar16) goto LAB_0008f948;
            puVar24 = (undefined *)puVar28[3];
            uVar31 = uVar14 + 2;
            uVar33 = uVar31 & 0xff;
            if (puVar24 < puVar16) goto LAB_0008f948;
            puVar24 = (undefined *)puVar28[4];
            uVar31 = uVar14 + 3;
            uVar33 = uVar31 & 0xff;
            if (puVar24 < puVar16) goto LAB_0008f948;
            puVar24 = (undefined *)puVar28[5];
            uVar31 = uVar14 + 4;
            uVar33 = uVar31 & 0xff;
            if (puVar24 < puVar16) goto LAB_0008f948;
            puVar24 = (undefined *)puVar28[6];
            uVar31 = uVar14 + 5;
            uVar33 = uVar31 & 0xff;
            if (puVar24 < puVar16) goto LAB_0008f948;
            puVar24 = (undefined *)puVar28[7];
            uVar31 = uVar14 + 6;
            uVar33 = uVar31 & 0xff;
            if (puVar24 < puVar16) goto LAB_0008f948;
            puVar24 = (undefined *)puVar28[8];
            uVar31 = uVar14 + 7;
            uVar33 = uVar31 & 0xff;
            if (puVar24 < puVar16) goto LAB_0008f948;
            puVar24 = (undefined *)puVar28[9];
            uVar31 = uVar14 + 8;
            uVar33 = uVar31 & 0xff;
            if (puVar24 < puVar16) goto LAB_0008f948;
            puVar28 = puVar28 + 10;
            puVar24 = (undefined *)*puVar28;
            uVar31 = uVar14 + 9;
            uVar33 = uVar31 & 0xff;
            if (puVar24 < puVar16) goto LAB_0008f948;
            uVar14 = uVar14 + 10;
          } while (uVar14 != 0x40);
          bVar18 = 0xf;
          bVar13 = *(byte *)((int)param_1 + 0xb) & 0xf0;
          bVar21 = *(byte *)((int)param_1 + 0xf) & 0xfb;
LAB_0008f146:
          *(byte *)((int)param_1 + 0xf) = bVar21 | 4;
LAB_0008f14c:
          *(byte *)((int)param_1 + 0xb) = bVar18 | bVar13;
          uVar14 = *(uint *)(param_2 + 0x2c);
        }
      }
      else if (uVar6 == 0x30b) {
        if (sVar5 == 0) {
          pcVar17 = (char *)FUN_0008e630();
          if ("IQ" < pcVar17) {
            pcVar17 = "Q";
          }
          if ("i\"F3\"Gy\"I\x1b(\v\x0e\'\x1e\x19-n\'7@8>v,Cs\"F/\x19H\x11\x1dI\x0e(2\x11(\r\x1d0f$8\x1a4>l%D\x03 Ep\x1cG`\x1eI (H\x12(\x19\x181g\"8%1?:!C}\x1cEe\x1dGN\x1dI\x1a(B\x14(5\x112\x06!8).?d\x1dC{\x1aEO\x1cGH\x1dI\x1a"
              < pcVar17) {
            bVar13 = 1;
            iVar35 = 2;
            iVar26 = 1;
LAB_0008fad6:
            if ((uint)((int)pcVar17 - *(int *)(iVar15 + iVar35 * 4 + 0x758)) <=
                (uint)(*(int *)(iVar15 + iVar26 * 4 + 0x758) - (int)pcVar17)) {
              bVar13 = (byte)iVar35;
            }
          }
          else {
            if ("\x06" < pcVar17) {
              bVar13 = 2;
              iVar35 = 3;
              iVar26 = 2;
              goto LAB_0008fad6;
            }
            if (&UNK_00258000 < pcVar17) {
              bVar13 = 3;
              iVar35 = 4;
              iVar26 = 3;
              goto LAB_0008fad6;
            }
            if ("M[\x10" < pcVar17) {
              bVar13 = 4;
              iVar35 = 5;
              iVar26 = 4;
              goto LAB_0008fad6;
            }
            if (&UNK_001a4000 < pcVar17) {
              bVar13 = 5;
              iVar35 = 6;
              iVar26 = 5;
              goto LAB_0008fad6;
            }
            if (&UNK_0015e000 < pcVar17) {
              bVar13 = 6;
              iVar35 = 7;
              iVar26 = 6;
              goto LAB_0008fad6;
            }
            if (&UNK_0012c000 < pcVar17) {
              bVar13 = 7;
              iVar35 = 8;
              iVar26 = 7;
              goto LAB_0008fad6;
            }
            if (&UNK_00106801 < pcVar17) {
              bVar13 = 8;
              iVar35 = 9;
              iVar26 = 8;
              goto LAB_0008fad6;
            }
            if ((char *)0xd2000 < pcVar17) {
              bVar13 = 9;
              iVar35 = 10;
              iVar26 = 9;
              goto LAB_0008fad6;
            }
            if ((char *)0xaf000 < pcVar17) {
              bVar13 = 10;
              iVar35 = 0xb;
              iVar26 = 10;
              goto LAB_0008fad6;
            }
            if ((char *)0x96000 < pcVar17) {
              bVar13 = 0xb;
              iVar35 = 0xc;
              iVar26 = 0xb;
              goto LAB_0008fad6;
            }
            if ((char *)0x83400 < pcVar17) {
              bVar13 = 0xc;
              iVar35 = 0xd;
              iVar26 = 0xc;
              goto LAB_0008fad6;
            }
            if ((char *)0x69000 < pcVar17) {
              bVar13 = 0xd;
              iVar35 = 0xe;
              iVar26 = 0xd;
              goto LAB_0008fad6;
            }
            if ("" < pcVar17) {
              bVar13 = 0xe;
              iVar35 = 0xf;
              iVar26 = 0xe;
              goto LAB_0008fad6;
            }
            if ((char *)0x4b000 < pcVar17) {
              bVar13 = 0xf;
              iVar35 = 0x10;
              iVar26 = 0xf;
              goto LAB_0008fad6;
            }
            if ((char *)0x41a00 < pcVar17) {
              bVar13 = 0x10;
              iVar35 = 0x11;
              iVar26 = 0x10;
              goto LAB_0008fad6;
            }
            if ((char *)0x34801 < pcVar17) {
              bVar13 = 0x11;
              iVar35 = 0x12;
              iVar26 = 0x11;
              goto LAB_0008fad6;
            }
            if ("HA7ltb_volE" < pcVar17) {
              bVar13 = 0x12;
              iVar35 = 0x13;
              iVar26 = 0x12;
              goto LAB_0008fad6;
            }
            if ("N6YAMAHA14Mapi_Hvs_CloseEi" < pcVar17) {
              bVar13 = 0x13;
              iVar35 = 0x14;
              iVar26 = 0x13;
              goto LAB_0008fad6;
            }
            if ("\x14" < pcVar17) {
              bVar13 = 0x14;
              iVar35 = 0x15;
              iVar26 = 0x14;
              goto LAB_0008fad6;
            }
            if ((char *)0xd200 < pcVar17) {
              bVar13 = 0x15;
              iVar35 = 0x16;
              iVar26 = 0x15;
              goto LAB_0008fad6;
            }
            if ((char *)0x9600 < pcVar17) {
              bVar13 = 0x16;
              iVar35 = 0x17;
              iVar26 = 0x16;
              goto LAB_0008fad6;
            }
            if ((char *)0x6900 < pcVar17) {
              bVar13 = 0x17;
              iVar35 = 0x18;
              iVar26 = 0x17;
              goto LAB_0008fad6;
            }
            if ((char *)0x4b00 < pcVar17) {
              bVar13 = 0x18;
              iVar35 = 0x19;
              iVar26 = 0x18;
              goto LAB_0008fad6;
            }
            if ((char *)0x3480 < pcVar17) {
              bVar13 = 0x19;
              iVar35 = 0x1a;
              iVar26 = 0x19;
              goto LAB_0008fad6;
            }
            if ((char *)0x25bc < pcVar17) {
              bVar13 = 0x1a;
              iVar35 = 0x1b;
              iVar26 = 0x1a;
              goto LAB_0008fad6;
            }
            if ((char *)0x1a40 < pcVar17) {
              bVar13 = 0x1b;
              iVar35 = 0x1c;
              iVar26 = 0x1b;
              goto LAB_0008fad6;
            }
            if ((char *)0x12c0 < pcVar17) {
              bVar13 = 0x1c;
              iVar35 = 0x1d;
              iVar26 = 0x1c;
              goto LAB_0008fad6;
            }
            if ((char *)0xd20 < pcVar17) {
              bVar13 = 0x1d;
              iVar35 = 0x1e;
              iVar26 = 0x1d;
              goto LAB_0008fad6;
            }
            if ((char *)0x960 < pcVar17) {
              bVar13 = 0x1e;
              iVar26 = 0x1e;
              iVar35 = 0x1f;
              goto LAB_0008fad6;
            }
            bVar13 = 0x1f;
          }
          *(byte *)((int)param_1 + 0x27) = bVar13 | *(byte *)((int)param_1 + 0x27) & 0xe0;
          *(byte *)((int)param_1 + 10) = *(byte *)((int)param_1 + 10) | 4;
          uVar14 = *(uint *)(param_2 + 0x2c);
        }
      }
      else if (uVar6 < 0x30c) {
        if (uVar6 == 0x20a) {
          if (sVar5 == 0) {
            if (puVar16 < (undefined *)0x2350000) {
              iVar35 = 0;
LAB_0008f834:
              bVar13 = *(byte *)(iVar35 + iVar12 + 0x8f1bc);
            }
            else {
              if (puVar16 < (undefined *)0x2530000) {
                iVar35 = 1;
                goto LAB_0008f834;
              }
              if (puVar16 < (undefined *)0x2710000) {
                iVar35 = 2;
                goto LAB_0008f834;
              }
              if (puVar16 < (undefined *)0x28f0000) {
                iVar35 = 3;
                goto LAB_0008f834;
              }
              if (puVar16 < (undefined *)0x2ad0000) {
                iVar35 = 4;
                goto LAB_0008f834;
              }
              if (puVar16 < (undefined *)0x2cb0000) {
                iVar35 = 5;
                goto LAB_0008f834;
              }
              if (puVar16 < (undefined *)0x2e90000) {
                iVar35 = 6;
                goto LAB_0008f834;
              }
              if (puVar16 < (undefined *)0x3070000) {
                iVar35 = 7;
                goto LAB_0008f834;
              }
              if (puVar16 < (undefined *)0x3250000) {
                iVar35 = 8;
                goto LAB_0008f834;
              }
              if (puVar16 < (undefined *)0x3430000) {
                iVar35 = 9;
                goto LAB_0008f834;
              }
              if (puVar16 < (undefined *)0x3610000) {
                iVar35 = 10;
                goto LAB_0008f834;
              }
              if (puVar16 < (undefined *)0x37f0000) {
                iVar35 = 0xb;
                goto LAB_0008f834;
              }
              if (puVar16 < (undefined *)0x39d0000) {
                iVar35 = 0xc;
                goto LAB_0008f834;
              }
              if (puVar16 < (undefined *)0x3bb0000) {
                iVar35 = 0xd;
                goto LAB_0008f834;
              }
              if (puVar16 < (undefined *)0x3d90000) {
                iVar35 = 0xe;
                goto LAB_0008f834;
              }
              bVar13 = 0;
            }
            bVar18 = *(byte *)((int)param_1 + 0xc) & 0xf0;
            goto LAB_0008f480;
          }
        }
        else if ((uVar6 == 0x30a) && (sVar5 == 0)) {
          pcVar17 = (char *)FUN_0008e630();
          if ("IQ" < pcVar17) {
            pcVar17 = "Q";
          }
          if ("i\"F3\"Gy\"I\x1b(\v\x0e\'\x1e\x19-n\'7@8>v,Cs\"F/\x19H\x11\x1dI\x0e(2\x11(\r\x1d0f$8\x1a4>l%D\x03 Ep\x1cG`\x1eI (H\x12(\x19\x181g\"8%1?:!C}\x1cEe\x1dGN\x1dI\x1a(B\x14(5\x112\x06!8).?d\x1dC{\x1aEO\x1cGH\x1dI\x1a"
              < pcVar17) {
            iVar35 = 2;
            local_60 = 1;
LAB_0008fb52:
            if ((uint)((int)pcVar17 - *(int *)(iVar32 + iVar35 * 4 + 0x758)) <=
                (uint)(*(int *)(iVar32 + local_60 * 4 + 0x758) - (int)pcVar17)) {
              local_60 = iVar35;
            }
          }
          else {
            if ("\x06" < pcVar17) {
              iVar35 = 3;
              local_60 = 2;
              goto LAB_0008fb52;
            }
            if (&UNK_00258000 < pcVar17) {
              iVar35 = 4;
              local_60 = 3;
              goto LAB_0008fb52;
            }
            if ("M[\x10" < pcVar17) {
              iVar35 = 5;
              local_60 = 4;
              goto LAB_0008fb52;
            }
            if (&UNK_001a4000 < pcVar17) {
              iVar35 = 6;
              local_60 = 5;
              goto LAB_0008fb52;
            }
            if (&UNK_0015e000 < pcVar17) {
              iVar35 = 7;
              local_60 = 6;
              goto LAB_0008fb52;
            }
            if (&UNK_0012c000 < pcVar17) {
              iVar35 = 8;
              local_60 = 7;
              goto LAB_0008fb52;
            }
            if (&UNK_00106801 < pcVar17) {
              iVar35 = 9;
              local_60 = 8;
              goto LAB_0008fb52;
            }
            if ((char *)0xd2000 < pcVar17) {
              iVar35 = 10;
              local_60 = 9;
              goto LAB_0008fb52;
            }
            if ((char *)0xaf000 < pcVar17) {
              iVar35 = 0xb;
              local_60 = 10;
              goto LAB_0008fb52;
            }
            if ((char *)0x96000 < pcVar17) {
              iVar35 = 0xc;
              local_60 = 0xb;
              goto LAB_0008fb52;
            }
            if ((char *)0x83400 < pcVar17) {
              iVar35 = 0xd;
              local_60 = 0xc;
              goto LAB_0008fb52;
            }
            if ((char *)0x69000 < pcVar17) {
              iVar35 = 0xe;
              local_60 = 0xd;
              goto LAB_0008fb52;
            }
            if ("" < pcVar17) {
              iVar35 = 0xf;
              local_60 = 0xe;
              goto LAB_0008fb52;
            }
            if ((char *)0x4b000 < pcVar17) {
              iVar35 = 0x10;
              local_60 = 0xf;
              goto LAB_0008fb52;
            }
            if ((char *)0x41a00 < pcVar17) {
              iVar35 = 0x11;
              local_60 = 0x10;
              goto LAB_0008fb52;
            }
            if ((char *)0x34801 < pcVar17) {
              iVar35 = 0x12;
              local_60 = 0x11;
              goto LAB_0008fb52;
            }
            if ("HA7ltb_volE" < pcVar17) {
              iVar35 = 0x13;
              local_60 = 0x12;
              goto LAB_0008fb52;
            }
            if ("N6YAMAHA14Mapi_Hvs_CloseEi" < pcVar17) {
              iVar35 = 0x14;
              local_60 = 0x13;
              goto LAB_0008fb52;
            }
            if ("\x14" < pcVar17) {
              iVar35 = 0x15;
              local_60 = 0x14;
              goto LAB_0008fb52;
            }
            if ((char *)0xd200 < pcVar17) {
              iVar35 = 0x16;
              local_60 = 0x15;
              goto LAB_0008fb52;
            }
            if ((char *)0x9600 < pcVar17) {
              iVar35 = 0x17;
              local_60 = 0x16;
              goto LAB_0008fb52;
            }
            if ((char *)0x6900 < pcVar17) {
              iVar35 = 0x18;
              local_60 = 0x17;
              goto LAB_0008fb52;
            }
            if ((char *)0x4b00 < pcVar17) {
              iVar35 = 0x19;
              local_60 = 0x18;
              goto LAB_0008fb52;
            }
            if ((char *)0x3480 < pcVar17) {
              iVar35 = 0x1a;
              local_60 = 0x19;
              goto LAB_0008fb52;
            }
            if ((char *)0x25bc < pcVar17) {
              iVar35 = 0x1b;
              local_60 = 0x1a;
              goto LAB_0008fb52;
            }
            if ((char *)0x1a40 < pcVar17) {
              iVar35 = 0x1c;
              local_60 = 0x1b;
              goto LAB_0008fb52;
            }
            if ((char *)0x12c0 < pcVar17) {
              iVar35 = 0x1d;
              local_60 = 0x1c;
              goto LAB_0008fb52;
            }
            if ((char *)0xd20 < pcVar17) {
              local_60 = 0x1d;
              iVar35 = 0x1e;
              goto LAB_0008fb52;
            }
            if ((char *)0x960 < pcVar17) {
              iVar35 = 0x1f;
              local_60 = 0x1e;
              goto LAB_0008fb52;
            }
            local_60 = 0x1f;
          }
          *(byte *)((int)param_1 + 10) = *(byte *)((int)param_1 + 10) | 4;
          *(char *)((int)param_1 + 0x26) = (char)local_60;
          uVar14 = *(uint *)(param_2 + 0x2c);
        }
      }
      else if (uVar6 == 0x30d) {
        if (sVar5 == 0) {
          pcVar17 = (char *)FUN_0008e630();
          if ("IQ" < pcVar17) {
            pcVar17 = "Q";
          }
          if ("i\"F3\"Gy\"I\x1b(\v\x0e\'\x1e\x19-n\'7@8>v,Cs\"F/\x19H\x11\x1dI\x0e(2\x11(\r\x1d0f$8\x1a4>l%D\x03 Ep\x1cG`\x1eI (H\x12(\x19\x181g\"8%1?:!C}\x1cEe\x1dGN\x1dI\x1a(B\x14(5\x112\x06!8).?d\x1dC{\x1aEO\x1cGH\x1dI\x1a"
              < pcVar17) {
            bVar13 = 1;
            iVar35 = 2;
            iVar26 = 1;
            bVar18 = 2;
LAB_0008fe9a:
            if ((uint)((int)pcVar17 - *(int *)(iVar19 + iVar35 * 4 + 0x758)) <=
                (uint)(*(int *)(iVar19 + iVar26 * 4 + 0x758) - (int)pcVar17)) {
              bVar13 = bVar18;
            }
          }
          else {
            if ("\x06" < pcVar17) {
              bVar13 = 2;
              iVar35 = 3;
              iVar26 = 2;
              bVar18 = 3;
              goto LAB_0008fe9a;
            }
            if (&UNK_00258000 < pcVar17) {
              bVar13 = 3;
              iVar35 = 4;
              iVar26 = 3;
              bVar18 = 4;
              goto LAB_0008fe9a;
            }
            if ("M[\x10" < pcVar17) {
              bVar13 = 4;
              iVar35 = 5;
              iVar26 = 4;
              bVar18 = 5;
              goto LAB_0008fe9a;
            }
            if (&UNK_001a4000 < pcVar17) {
              bVar13 = 5;
              iVar35 = 6;
              iVar26 = 5;
              bVar18 = 6;
              goto LAB_0008fe9a;
            }
            if (&UNK_0015e000 < pcVar17) {
              bVar13 = 6;
              iVar35 = 7;
              iVar26 = 6;
              bVar18 = 7;
              goto LAB_0008fe9a;
            }
            if (&UNK_0012c000 < pcVar17) {
              bVar13 = 7;
              iVar35 = 8;
              iVar26 = 7;
              bVar18 = 8;
              goto LAB_0008fe9a;
            }
            if (&UNK_00106801 < pcVar17) {
              bVar13 = 8;
              iVar35 = 9;
              iVar26 = 8;
              bVar18 = 9;
              goto LAB_0008fe9a;
            }
            if ((char *)0xd2000 < pcVar17) {
              bVar13 = 9;
              iVar35 = 10;
              iVar26 = 9;
              bVar18 = 10;
              goto LAB_0008fe9a;
            }
            if ((char *)0xaf000 < pcVar17) {
              bVar13 = 10;
              iVar35 = 0xb;
              iVar26 = 10;
              bVar18 = 0xb;
              goto LAB_0008fe9a;
            }
            if ((char *)0x96000 < pcVar17) {
              bVar13 = 0xb;
              iVar35 = 0xc;
              iVar26 = 0xb;
              bVar18 = 0xc;
              goto LAB_0008fe9a;
            }
            if ((char *)0x83400 < pcVar17) {
              bVar13 = 0xc;
              iVar35 = 0xd;
              iVar26 = 0xc;
              bVar18 = 0xd;
              goto LAB_0008fe9a;
            }
            if ((char *)0x69000 < pcVar17) {
              bVar13 = 0xd;
              iVar35 = 0xe;
              iVar26 = 0xd;
              bVar18 = 0xe;
              goto LAB_0008fe9a;
            }
            if ("" < pcVar17) {
              bVar13 = 0xe;
              iVar35 = 0xf;
              iVar26 = 0xe;
              bVar18 = 0xf;
              goto LAB_0008fe9a;
            }
            if ((char *)0x4b000 < pcVar17) {
              bVar13 = 0xf;
              iVar35 = 0x10;
              iVar26 = 0xf;
              bVar18 = 0x10;
              goto LAB_0008fe9a;
            }
            if ((char *)0x41a00 < pcVar17) {
              bVar13 = 0x10;
              iVar35 = 0x11;
              iVar26 = 0x10;
              bVar18 = 0x11;
              goto LAB_0008fe9a;
            }
            if ((char *)0x34801 < pcVar17) {
              bVar13 = 0x11;
              iVar35 = 0x12;
              iVar26 = 0x11;
              bVar18 = 0x12;
              goto LAB_0008fe9a;
            }
            if ("HA7ltb_volE" < pcVar17) {
              bVar13 = 0x12;
              iVar35 = 0x13;
              iVar26 = 0x12;
              bVar18 = 0x13;
              goto LAB_0008fe9a;
            }
            if ("N6YAMAHA14Mapi_Hvs_CloseEi" < pcVar17) {
              bVar13 = 0x13;
              iVar35 = 0x14;
              iVar26 = 0x13;
              bVar18 = 0x14;
              goto LAB_0008fe9a;
            }
            if ("\x14" < pcVar17) {
              bVar13 = 0x14;
              iVar35 = 0x15;
              iVar26 = 0x14;
              bVar18 = 0x15;
              goto LAB_0008fe9a;
            }
            if ((char *)0xd200 < pcVar17) {
              bVar13 = 0x15;
              iVar35 = 0x16;
              iVar26 = 0x15;
              bVar18 = 0x16;
              goto LAB_0008fe9a;
            }
            if ((char *)0x9600 < pcVar17) {
              bVar13 = 0x16;
              iVar35 = 0x17;
              iVar26 = 0x16;
              bVar18 = 0x17;
              goto LAB_0008fe9a;
            }
            if ((char *)0x6900 < pcVar17) {
              bVar13 = 0x17;
              iVar35 = 0x18;
              iVar26 = 0x17;
              bVar18 = 0x18;
              goto LAB_0008fe9a;
            }
            if ((char *)0x4b00 < pcVar17) {
              bVar13 = 0x18;
              iVar35 = 0x19;
              iVar26 = 0x18;
              bVar18 = 0x19;
              goto LAB_0008fe9a;
            }
            if ((char *)0x3480 < pcVar17) {
              bVar13 = 0x19;
              iVar35 = 0x1a;
              iVar26 = 0x19;
              bVar18 = 0x1a;
              goto LAB_0008fe9a;
            }
            if ((char *)0x25bc < pcVar17) {
              bVar13 = 0x1a;
              iVar35 = 0x1b;
              iVar26 = 0x1a;
              bVar18 = 0x1b;
              goto LAB_0008fe9a;
            }
            if ((char *)0x1a40 < pcVar17) {
              bVar13 = 0x1b;
              iVar35 = 0x1c;
              iVar26 = 0x1b;
              bVar18 = 0x1c;
              goto LAB_0008fe9a;
            }
            if ((char *)0x12c0 < pcVar17) {
              bVar13 = 0x1c;
              iVar35 = 0x1d;
              iVar26 = 0x1c;
              bVar18 = 0x1d;
              goto LAB_0008fe9a;
            }
            if ((char *)0xd20 < pcVar17) {
              bVar13 = 0x1d;
              iVar26 = 0x1d;
              iVar35 = 0x1e;
              bVar18 = 0x1e;
              goto LAB_0008fe9a;
            }
            if ((char *)0x960 < pcVar17) {
              bVar13 = 0x1e;
              iVar35 = 0x1f;
              iVar26 = 0x1e;
              bVar18 = 0x1f;
              goto LAB_0008fe9a;
            }
            bVar13 = 0x1f;
          }
          *(byte *)((int)param_1 + 10) = *(byte *)((int)param_1 + 10) | 4;
          *(byte *)((int)param_1 + 0x29) = bVar13 | *(byte *)((int)param_1 + 0x29) & 0xe0;
          uVar14 = *(uint *)(param_2 + 0x2c);
        }
      }
      else if ((uVar6 == 0x30e) && (sVar5 == 0)) {
        uVar27 = 0;
        if (bVar8) {
          iVar35 = (int)((int)puVar30 * 1000 * (uVar33 >> 0x10)) / 0xe6b68;
          if ((int)puVar30 < 0) {
            iVar35 = iVar35 + -5;
          }
          else {
            iVar35 = iVar35 + 5;
          }
          uVar27 = (undefined1)(iVar35 / 10);
        }
        *(undefined1 *)((int)param_1 + 0x2c) = uVar27;
        *(undefined1 *)((int)param_1 + 0x2d) = uVar27;
        *(byte *)((int)param_1 + 10) = *(byte *)((int)param_1 + 10) | 4;
        bVar7 = true;
        uVar14 = *(uint *)(param_2 + 0x2c);
        local_54 = puVar16;
      }
    }
    else if (((sVar4 == 5) && (uVar6 == 3)) && (sVar5 == 0)) {
      uVar14 = 1000;
      if (bVar7) {
        uVar14 = (uint)local_54 >> 0x10;
      }
      if ((int)puVar16 < 0) {
        iVar35 = ((int)puVar16 >> 0x10) * 1000;
        uVar27 = (undefined1)((iVar35 / 0x3b1 + -5) / 10);
        uVar20 = (undefined1)(((int)(iVar35 * uVar14) / 0xe6b68 + -5) / 10);
      }
      else {
        uVar31 = (uVar33 >> 0x10) * 1000;
        uVar27 = (undefined1)((uVar31 / 0x3b1 + 5) / 10);
        uVar20 = (undefined1)(((int)(uVar31 * uVar14) / 0xe6b68 + 5) / 10);
      }
      *(undefined1 *)((int)param_1 + 0x2b) = uVar27;
      *(undefined1 *)((int)param_1 + 0x2c) = uVar20;
      *(undefined1 *)((int)param_1 + 0x2d) = uVar20;
      *(byte *)((int)param_1 + 10) = *(byte *)((int)param_1 + 10) | 4;
      bVar8 = true;
      uVar14 = *(uint *)(param_2 + 0x2c);
      puVar30 = puVar16;
    }
  }
  cVar3 = *(char *)((int)param_1 + 0x2b);
  if (local_60 == 0x1f) {
    *(char *)((int)param_1 + 0x2a) = cVar3;
  }
  else if (*(char *)((int)param_1 + 0x2a) != cVar3) goto LAB_0008ef50;
  *(undefined1 *)((int)param_1 + 0x26) = 0;
LAB_0008ef50:
  if (*(char *)((int)param_1 + 0x2c) == cVar3) {
    *(undefined1 *)((int)param_1 + 0x27) = 0;
  }
  if (*(char *)((int)param_1 + 0x2c) == *(char *)((int)param_1 + 0x2d)) {
    *(undefined1 *)((int)param_1 + 0x28) = 0;
  }
  if (*(char *)((int)param_1 + 0x2d) == '\0') {
    *(undefined1 *)((int)param_1 + 0x29) = 0;
  }
  return 0x27;
}

