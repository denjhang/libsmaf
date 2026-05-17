/* xmf_SetVoiceBuffer @ 001adfe4 10304B */


/* YAMAHA::xmf_SetVoiceBuffer(void*, YAMAHA::_MAXMFCNV_PRM*) */

undefined8 YAMAHA::xmf_SetVoiceBuffer(void *param_1,_MAXMFCNV_PRM *param_2)

{
  long lVar1;
  _MAXMFCNV_PRM _Var2;
  bool bVar3;
  bool bVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  char cVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  char cVar15;
  ulong uVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined1 uVar22;
  uint uVar23;
  byte bVar24;
  byte bVar25;
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((long)param_1 + 8) = 0;
  *(undefined8 *)((long)param_1 + 0x10) = 0;
  *(undefined8 *)((long)param_1 + 0x18) = 0;
  *(undefined8 *)((long)param_1 + 0x20) = 0;
  *(undefined8 *)((long)param_1 + 0x28) = 0;
  *(_MAXMFCNV_PRM *)param_1 = param_2[1];
  *(char *)((long)param_1 + 1) = (char)*(undefined4 *)param_2;
  *(char *)((long)param_1 + 2) = (char)*(undefined4 *)(param_2 + 4);
  *(char *)((long)param_1 + 3) = (char)*(undefined4 *)(param_2 + 8);
  *(char *)((long)param_1 + 4) = (char)*(undefined4 *)(param_2 + 0xc);
  *(undefined1 *)((long)param_1 + 5) = 5;
  _Var2 = param_2[0x21];
  *(_MAXMFCNV_PRM *)((long)param_1 + 6) = _Var2;
  uVar20 = *(uint *)(param_2 + 0x20);
  *(char *)((long)param_1 + 7) = (char)uVar20;
  *(undefined1 *)((long)param_1 + 8) = 0x80;
  *(undefined1 *)((long)param_1 + 10) = 2;
  *(undefined1 *)((long)param_1 + 0xb) = 0xff;
  *(undefined1 *)((long)param_1 + 0xc) = 0xf0;
  *(undefined1 *)((long)param_1 + 0xf) = 0xd;
  *(undefined1 *)((long)param_1 + 0xe) = 0x11;
  uVar22 = 0x81;
  if (*(int *)(param_2 + 0x1c) != 0x10) {
    uVar22 = 0x82;
  }
  *(undefined1 *)((long)param_1 + 9) = uVar22;
  iVar18 = *(int *)(param_2 + 0x14);
  if (iVar18 == *(int *)(param_2 + 0x18)) {
    *(byte *)((long)param_1 + 0x12) = (byte)((uint)(iVar18 + -2) >> 8) & 0x7f;
    *(char *)((long)param_1 + 0x13) = (char)*(undefined4 *)(param_2 + 0x14) + -2;
    *(byte *)((long)param_1 + 0x14) = (byte)((uint)(*(int *)(param_2 + 0x18) + -2) >> 8) & 0x7f;
    *(char *)((long)param_1 + 0x15) = (char)*(undefined4 *)(param_2 + 0x18) + -2;
  }
  else {
    *(byte *)((long)param_1 + 0x12) = (byte)((uint)iVar18 >> 8) & 0x7f;
    *(char *)((long)param_1 + 0x13) = (char)*(undefined4 *)(param_2 + 0x14);
    *(byte *)((long)param_1 + 0x14) = (byte)((uint)(*(int *)(param_2 + 0x18) + -1) >> 8) & 0x7f;
    *(char *)((long)param_1 + 0x15) = (char)*(undefined4 *)(param_2 + 0x18) + -1;
  }
  *(undefined1 *)((long)param_1 + 0x2a) = 0;
  *(undefined1 *)((long)param_1 + 0x26) = 0x1f;
  *(undefined1 *)((long)param_1 + 0x27) = 0x1f;
  *(undefined1 *)((long)param_1 + 0x28) = 0x1f;
  *(undefined1 *)((long)param_1 + 0x29) = 0x1f;
  *(undefined1 *)((long)param_1 + 0x2b) = 0;
  *(undefined1 *)((long)param_1 + 0x2c) = 0;
  *(undefined1 *)((long)param_1 + 0x2d) = 0;
  *(undefined1 *)((long)param_1 + 0x2e) = 0;
  bVar24 = *(byte *)((long)param_1 + 0x30);
  *(byte *)((long)param_1 + 0x2f) = (byte)*(undefined4 *)(param_2 + 0x10) | 0x80;
  if (bVar24 != 0x3c) {
    uVar20 = (uVar20 & 0xff) + (uint)(byte)_Var2 * 0x100;
    uVar9 = (ulong)uVar20;
    if (bVar24 < 0x3c) {
      uVar13 = 0x3c - bVar24;
      uVar23 = (uVar13 & 0xffff) / 0xc;
      uVar13 = (uVar13 & 0xffff) + uVar23 * -0xc & 0xffff;
      if (uVar23 == 0) {
LAB_001ae398:
        uVar20 = (uint)uVar9;
      }
      else {
        uVar8 = uVar20 * 2;
        uVar9 = (ulong)uVar8;
        bVar24 = (char)uVar23 - 1U & 0xf;
        uVar19 = 1;
        uVar21 = 1;
        if ((uVar23 & 0xff) < 2) goto LAB_001ae398;
        if (bVar24 != 0) {
          if (bVar24 != 1) {
            if (bVar24 != 2) {
              if (bVar24 != 3) {
                if (bVar24 != 4) {
                  if (bVar24 != 5) {
                    if (bVar24 != 6) {
                      if (bVar24 != 7) {
                        if (bVar24 != 8) {
                          if (bVar24 != 9) {
                            if (bVar24 != 10) {
                              if (bVar24 != 0xb) {
                                if (bVar24 != 0xc) {
                                  if (bVar24 != 0xd) {
                                    if (bVar24 != 0xe) {
                                      uVar8 = uVar20 * 4;
                                      uVar21 = 2;
                                    }
                                    uVar21 = uVar21 + 1;
                                    uVar8 = uVar8 << 1;
                                  }
                                  uVar21 = uVar21 + 1;
                                  uVar8 = uVar8 << 1;
                                }
                                uVar21 = uVar21 + 1;
                                uVar8 = uVar8 << 1;
                              }
                              uVar21 = uVar21 + 1;
                              uVar8 = uVar8 << 1;
                            }
                            uVar21 = uVar21 + 1;
                            uVar8 = uVar8 << 1;
                          }
                          uVar21 = uVar21 + 1;
                          uVar8 = uVar8 << 1;
                        }
                        uVar8 = uVar8 << 1;
                        uVar21 = uVar21 + 1 & 0xff;
                      }
                      uVar8 = uVar8 << 1;
                      uVar21 = uVar21 + 1 & 0xff;
                    }
                    uVar8 = uVar8 << 1;
                    uVar21 = uVar21 + 1 & 0xff;
                  }
                  uVar8 = uVar8 << 1;
                  uVar21 = uVar21 + 1 & 0xff;
                }
                uVar8 = uVar8 << 1;
                uVar21 = uVar21 + 1 & 0xff;
              }
              uVar8 = uVar8 << 1;
              uVar21 = uVar21 + 1 & 0xff;
            }
            uVar8 = uVar8 << 1;
            uVar21 = uVar21 + 1 & 0xff;
          }
          uVar9 = (ulong)(uVar8 << 1);
          uVar19 = uVar21 + 1 & 0xff;
          uVar20 = uVar21 + 1 & 0xff;
          if ((uVar23 & 0xff) < uVar20 || (uVar23 & 0xff) == uVar20) goto LAB_001ae398;
        }
        do {
          uVar20 = (int)uVar9 << 0x10;
          uVar9 = (ulong)uVar20;
          uVar19 = (uint)(byte)((char)uVar19 + 0x10);
        } while (uVar19 <= (uVar23 & 0xff) && (uVar23 & 0xff) != uVar19);
      }
      if (uVar13 != 0) {
        iVar14 = uVar13 - 1;
        iVar18 = *(int *)(&DAT_0048c570 + (long)iVar14 * 4);
        iVar14 = *(int *)(&DAT_0048c5a0 + (long)iVar14 * 4);
        goto LAB_001ae3cc;
      }
    }
    else {
      uVar13 = bVar24 - 0x3c;
      uVar23 = (uVar13 & 0xffff) / 0xc;
      if (uVar23 != 0) {
        uVar9 = (ulong)(uVar20 >> 1);
        bVar24 = (char)uVar23 - 1U & 0xf;
        uVar21 = 1;
        uVar20 = 1;
        if (1 < (uVar23 & 0xff)) {
          if (bVar24 != 0) {
            if (bVar24 != 1) {
              if (bVar24 != 2) {
                if (bVar24 != 3) {
                  if (bVar24 != 4) {
                    if (bVar24 != 5) {
                      if (bVar24 != 6) {
                        if (bVar24 != 7) {
                          if (bVar24 != 8) {
                            if (bVar24 != 9) {
                              if (bVar24 != 10) {
                                if (bVar24 != 0xb) {
                                  if (bVar24 != 0xc) {
                                    if (bVar24 != 0xd) {
                                      if (bVar24 != 0xe) {
                                        uVar9 = 0;
                                        uVar20 = 2;
                                      }
                                      uVar20 = uVar20 + 1;
                                      uVar9 = uVar9 >> 1;
                                    }
                                    uVar20 = uVar20 + 1;
                                    uVar9 = uVar9 >> 1;
                                  }
                                  uVar20 = uVar20 + 1;
                                  uVar9 = uVar9 >> 1;
                                }
                                uVar20 = uVar20 + 1;
                                uVar9 = uVar9 >> 1;
                              }
                              uVar20 = uVar20 + 1;
                              uVar9 = uVar9 >> 1;
                            }
                            uVar20 = uVar20 + 1;
                            uVar9 = uVar9 >> 1;
                          }
                          uVar9 = uVar9 >> 1;
                          uVar20 = uVar20 + 1 & 0xff;
                        }
                        uVar9 = uVar9 >> 1;
                        uVar20 = uVar20 + 1 & 0xff;
                      }
                      uVar9 = uVar9 >> 1;
                      uVar20 = uVar20 + 1 & 0xff;
                    }
                    uVar9 = uVar9 >> 1;
                    uVar20 = uVar20 + 1 & 0xff;
                  }
                  uVar9 = uVar9 >> 1;
                  uVar20 = uVar20 + 1 & 0xff;
                }
                uVar9 = uVar9 >> 1;
                uVar20 = uVar20 + 1 & 0xff;
              }
              uVar9 = uVar9 >> 1;
              uVar20 = uVar20 + 1 & 0xff;
            }
            uVar9 = uVar9 >> 1;
            uVar21 = uVar20 + 1 & 0xff;
            uVar20 = uVar20 + 1 & 0xff;
            if ((uVar23 & 0xff) < uVar20 || (uVar23 & 0xff) == uVar20) goto LAB_001ae328;
          }
          do {
            uVar9 = 0;
            uVar21 = (uint)(byte)((char)uVar21 + 0x10);
          } while (uVar21 <= (uVar23 & 0xff) && (uVar23 & 0xff) != uVar21);
        }
      }
LAB_001ae328:
      uVar20 = (uint)uVar9;
      uVar13 = (uVar13 & 0xffff) + uVar23 * -0xc & 0xffff;
      if (uVar13 != 0) {
        iVar14 = uVar13 - 1;
        iVar18 = *(int *)(&DAT_0048c5d0 + (long)iVar14 * 4);
        iVar14 = *(int *)(&DAT_0048c600 + (long)iVar14 * 4);
LAB_001ae3cc:
        uVar9 = (ulong)((uVar20 * iVar14) / 100000 + (uVar20 * iVar18) / 100) / 10;
      }
    }
    uVar10 = uVar9;
    if (48000 < (uint)uVar9) {
      while (((((uVar9 = uVar10 >> 1, 48000 < (uint)uVar9 &&
                (uVar9 = uVar10 >> 2, 48000 < (uint)uVar9)) &&
               (uVar9 = uVar10 >> 3, 48000 < (uint)uVar9)) &&
              ((uVar9 = uVar10 >> 4, 48000 < (uint)uVar9 &&
               (uVar9 = uVar10 >> 5, 48000 < (uint)uVar9)))) &&
             (((uVar9 = uVar10 >> 6, 48000 < (uint)uVar9 &&
               ((uVar9 = uVar10 >> 7, 48000 < (uint)uVar9 &&
                (uVar9 = uVar10 >> 8, 48000 < (uint)(uVar10 >> 8))))) &&
              (uVar9 = uVar10 >> 9, 48000 < (uint)uVar9))))) {
        uVar9 = uVar10 >> 10;
        if (((((uint)uVar9 < 0xbb81) || (uVar9 = uVar10 >> 0xb, (uint)uVar9 < 0xbb81)) ||
            (uVar9 = uVar10 >> 0xc, (uint)uVar9 < 0xbb81)) ||
           (((uVar9 = uVar10 >> 0xd, (uint)uVar9 < 0xbb81 ||
             (uVar9 = uVar10 >> 0xe, (uint)uVar9 < 0xbb81)) ||
            ((uVar9 = uVar10 >> 0xf, (uint)uVar9 < 0xbb81 ||
             (uVar9 = uVar10 >> 0x10, uVar16 = uVar10 >> 0x10, uVar10 = uVar9, (uint)uVar16 < 0xbb81
             )))))) break;
      }
    }
    *(char *)((long)param_1 + 7) = (char)uVar9;
    *(char *)((long)param_1 + 6) = (char)(uVar9 >> 8);
  }
  if (*(long *)(param_2 + 0x28) == 0) {
    return 0x27;
  }
  uVar20 = *(uint *)(param_2 + 0x30);
  if (uVar20 == 0) {
    return 0x27;
  }
  cVar11 = '\x1f';
  bVar4 = false;
  bVar3 = false;
  uVar13 = 0;
  uVar9 = 0;
  uVar10 = 0;
  while (uVar13 < uVar20) {
    uVar16 = (ulong)uVar13;
    uVar13 = uVar13 + 0xc;
    lVar1 = *(long *)(param_2 + 0x28) + uVar16;
    sVar5 = CONCAT11(*(undefined1 *)(lVar1 + 1),*(undefined1 *)(*(long *)(param_2 + 0x28) + uVar16))
    ;
    sVar6 = *(short *)(lVar1 + 4);
    uVar23 = (uint)*(byte *)(lVar1 + 10) << 0x10 | (uint)*(byte *)(lVar1 + 0xb) << 0x18;
    sVar7 = *(short *)(lVar1 + 2);
    uVar21 = uVar23 | *(byte *)(lVar1 + 8) | (uint)*(byte *)(lVar1 + 9) << 8;
    if (sVar5 == 1) {
      if (sVar6 == 1) {
        if (sVar7 == 0) {
          if ((int)uVar21 < 0) {
            uVar23 = -uVar21;
          }
          bVar24 = (byte)(uVar23 >> 0x10);
          if (0x78 < (uVar23 >> 0x10 & 0xff)) {
            bVar24 = 0x78;
          }
          *(byte *)((long)param_1 + 0xe) =
               *(byte *)((long)param_1 + 0xe) & 7 | (&DAT_0048cd00)[(ulong)bVar24 / 10];
          uVar20 = *(uint *)(param_2 + 0x30);
        }
      }
      else if ((sVar6 == 3) && (sVar7 == 0)) {
        iVar18 = 1;
        if ((int)uVar21 < 0) {
          if (0xfffaffff < uVar21) goto LAB_001afc6c;
          if (0xfff5ffff < uVar21) goto LAB_001aef3c;
          bVar24 = 7;
          if (0xffebffff < uVar21) goto LAB_001aef38;
        }
        else {
          if (uVar21 < 0x50001) {
LAB_001afc6c:
            iVar18 = 0;
          }
          else if (0xa0000 < uVar21) {
            if (0x140000 < uVar21) {
              bVar24 = 7;
              goto LAB_001ae9e0;
            }
LAB_001aef38:
            iVar18 = 2;
          }
LAB_001aef3c:
          bVar24 = (&DAT_0048cd10)[iVar18];
        }
LAB_001ae9e0:
        *(byte *)((long)param_1 + 0xe) = bVar24 | *(byte *)((long)param_1 + 0xe) & 0xf8;
        uVar20 = *(uint *)(param_2 + 0x30);
      }
    }
    else {
      uVar8 = (int)uVar21 >> 0x10;
      if (sVar5 == 5) {
        if ((sVar6 == 3) && (sVar7 == 0)) {
          iVar18 = (int)(uVar10 >> 0x10);
          if (!bVar3) {
            iVar18 = 1000;
          }
          if ((int)uVar21 < 0) {
            uVar22 = (undefined1)(((int)(uVar8 * 1000) / 0x3b1 + -5) / 10);
            iVar18 = (int)(iVar18 * uVar8 * 1000) / 0xe6b68 + -5;
          }
          else {
            uVar20 = (uVar23 >> 0x10) * 1000;
            uVar22 = (undefined1)((uVar20 / 0x3b1 + 5) / 10);
            iVar18 = (int)(iVar18 * uVar20) / 0xe6b68 + 5;
          }
          *(undefined1 *)((long)param_1 + 0x2b) = uVar22;
          uVar22 = (undefined1)(iVar18 / 10);
          *(byte *)((long)param_1 + 10) = *(byte *)((long)param_1 + 10) | 4;
          bVar4 = true;
          *(undefined1 *)((long)param_1 + 0x2c) = uVar22;
          *(undefined1 *)((long)param_1 + 0x2d) = uVar22;
          uVar20 = *(uint *)(param_2 + 0x30);
          uVar9 = (ulong)uVar21;
        }
      }
      else if (sVar5 == 0) {
        if (sVar6 == 0x209) {
          if (sVar7 == 0) {
            if ((int)uVar21 < 0) {
              if (0xd405e45e < uVar21) {
                uVar20 = 0xffff - ((uint)((int)uVar21 / 0x4b0) >> 0x10);
                if (9 < uVar20) {
                  uVar20 = 9;
                }
                uVar23 = 0;
                if (*(uint *)(&DAT_0048cac0 + (ulong)uVar20 * 4) != 0) {
                  uVar23 = (((((int)uVar21 / 0x4b0 & 0xffffU) + 0x10000) *
                             *(int *)(&DAT_0048ca60 + (ulong)uVar20 * 4) >> 0x10) *
                           *(int *)(&DAT_0048ca90 + (ulong)uVar20 * 4)) /
                           *(uint *)(&DAT_0048cac0 + (ulong)uVar20 * 4);
                }
                goto LAB_001aefb8;
              }
              uVar23 = 0;
            }
            else {
              iVar18 = 1;
              uVar20 = (uint)((int)uVar21 / 0x4b0) >> 0x10;
              if (uVar20 != 0) {
                iVar18 = 2 << (ulong)(uVar20 - 1 & 0x1f);
              }
              uVar20 = iVar18 * (((int)uVar21 / 0x4b0 & 0xffffU) + 0x10000);
              uVar23 = (uVar20 & 0xffff) * 1000;
              uVar23 = (uVar20 >> 0x10) * 100000 + (uVar23 >> 0x10) * 100 +
                       ((uVar23 & 0xffff) * 100 >> 0x10);
LAB_001aefb8:
              if (4000000 < uVar23) {
                uVar23 = 4000000;
              }
            }
            uVar20 = 4;
            puVar17 = &DAT_0048cc00;
            do {
              uVar8 = *puVar17;
              uVar19 = uVar20 & 0xff;
              uVar21 = uVar20;
              if (uVar8 < uVar23) {
LAB_001af9d0:
                if (uVar19 == 4) {
                  bVar12 = 0x10;
                  *(byte *)((long)param_1 + 0xf) = *(byte *)((long)param_1 + 0xf) & 0xfe;
                  bVar24 = *(byte *)((long)param_1 + 0xb) & 0xf;
                  goto LAB_001af100;
                }
                if (*(int *)(&UNK_0048cbf0 + (long)(int)(uVar21 - 1) * 4) - uVar23 < uVar23 - uVar8)
                {
                  uVar21 = uVar19 - 1 & 0xff;
                }
                uVar21 = (int)uVar21 >> 1;
                bVar24 = *(byte *)((long)param_1 + 0xb) & 0xf;
                bVar25 = *(byte *)((long)param_1 + 0xf) & 0xfe;
                *(byte *)((long)param_1 + 0xb) = bVar24;
                *(byte *)((long)param_1 + 0xf) = bVar25;
                bVar12 = (byte)((uVar21 & 0x1e) << 3);
                if ((uVar21 & 1) != 0) goto LAB_001af0f8;
                bVar12 = (byte)((uVar21 & 0x1e) << 3);
                goto LAB_001af100;
              }
              uVar8 = puVar17[1];
              uVar21 = uVar20 + 1;
              uVar19 = uVar21 & 0xff;
              if (uVar8 < uVar23) goto LAB_001af9d0;
              uVar8 = puVar17[2];
              uVar21 = uVar20 + 2;
              uVar19 = uVar21 & 0xff;
              if (uVar8 < uVar23) goto LAB_001af9d0;
              uVar8 = puVar17[3];
              uVar21 = uVar20 + 3;
              uVar19 = uVar21 & 0xff;
              if (uVar8 < uVar23) goto LAB_001af9d0;
              uVar8 = puVar17[4];
              uVar21 = uVar20 + 4;
              uVar19 = uVar21 & 0xff;
              if (uVar8 < uVar23) goto LAB_001af9d0;
              uVar8 = puVar17[5];
              uVar21 = uVar20 + 5;
              uVar19 = uVar21 & 0xff;
              if (uVar8 < uVar23) goto LAB_001af9d0;
              uVar8 = puVar17[6];
              uVar21 = uVar20 + 6;
              uVar19 = uVar21 & 0xff;
              if (uVar8 < uVar23) goto LAB_001af9d0;
              uVar8 = puVar17[7];
              uVar21 = uVar20 + 7;
              uVar19 = uVar21 & 0xff;
              if (uVar8 < uVar23) goto LAB_001af9d0;
              uVar8 = puVar17[8];
              uVar21 = uVar20 + 8;
              uVar19 = uVar21 & 0xff;
              if (uVar8 < uVar23) goto LAB_001af9d0;
              uVar8 = puVar17[9];
              uVar21 = uVar20 + 9;
              uVar19 = uVar21 & 0xff;
              if (uVar8 < uVar23) goto LAB_001af9d0;
              puVar17 = puVar17 + 10;
              uVar20 = uVar20 + 10;
            } while (puVar17 != (uint *)&DAT_0048ccf0);
            bVar12 = 0xf0;
            bVar24 = *(byte *)((long)param_1 + 0xb) & 0xf;
            bVar25 = *(byte *)((long)param_1 + 0xf) & 0xfe;
LAB_001af0f8:
            *(byte *)((long)param_1 + 0xf) = bVar25 | 1;
LAB_001af100:
            *(byte *)((long)param_1 + 0xb) = bVar12 | bVar24;
            uVar20 = *(uint *)(param_2 + 0x30);
          }
        }
        else if (sVar6 < 0x20a) {
          if (sVar6 == 0x104) {
            if (sVar7 == 0) {
              if ((int)uVar21 < -0x7025e40) {
                iVar18 = 0;
LAB_001b029c:
                bVar24 = (&DAT_0048ca50)[iVar18];
              }
              else {
                if ((int)uVar21 < -0x364b7a9) {
                  iVar18 = 1;
                  goto LAB_001b029c;
                }
                bVar24 = 0xc0;
                if ((int)uVar21 < -0x19a7900) {
                  iVar18 = 2;
                  goto LAB_001b029c;
                }
              }
              *(byte *)((long)param_1 + 9) = bVar24 | *(byte *)((long)param_1 + 9) & 0x3f;
              uVar20 = *(uint *)(param_2 + 0x30);
            }
          }
          else if (sVar6 < 0x105) {
            if (sVar6 == 3) {
              if (sVar7 == 0) {
                if ((int)uVar21 < 0) {
                  if (0xfb4fffff < uVar21) goto LAB_001af128;
                  uVar20 = 0;
                  uVar16 = 0;
                }
                else if (uVar21 < 0x4b00001) {
                  uVar8 = uVar23 >> 0x10;
LAB_001af128:
                  uVar16 = (ulong)(uVar8 + 0x4b0) / 100;
                  uVar20 = uVar8 + 0x4b0 + (int)uVar16 * -100;
                }
                else {
                  uVar20 = 0;
                  uVar16 = 0x18;
                }
                uVar23 = (uint)*(byte *)((long)param_1 + 6) * 0x100 +
                         (uint)*(byte *)((long)param_1 + 7) >> 1;
                iVar18 = (uVar23 * *(int *)(&DAT_0048c630 + uVar16 * 4)) / 1000 +
                         (uVar23 * *(int *)(&DAT_0048c6a0 + uVar16 * 4)) / 1000000;
                uVar16 = (ulong)((uint)(iVar18 * *(int *)(&DAT_0048c8a0 + (ulong)uVar20 * 4)) /
                                 100000 + (uint)(iVar18 * *(int *)(&DAT_0048c710 + (ulong)uVar20 * 4
                                                                  )) / 100 + 5) / 10;
                *(char *)((long)param_1 + 7) = (char)uVar16;
                *(char *)((long)param_1 + 6) = (char)(uVar16 >> 8);
                uVar20 = *(uint *)(param_2 + 0x30);
              }
            }
            else if ((sVar6 == 4) && (sVar7 == 0)) {
              if ((int)uVar21 < 0) {
                if (uVar21 < 0xffd10000) {
                  if (uVar21 < 0xffb20000) {
                    if (uVar21 < 0xff930000) {
                      if (uVar21 < 0xff730000) {
                        if (uVar21 < 0xff540000) {
                          if (uVar21 < 0xff350000) {
                            if (uVar21 < 0xff160000) {
                              if (uVar21 < 0xfef60000) {
                                if (uVar21 < 0xfed70000) {
                                  if (uVar21 < 0xfeb80000) {
                                    if (uVar21 < 0xfe990000) {
                                      if (uVar21 < 0xfe790000) {
                                        if (uVar21 < 0xfe5a0000) {
                                          if (uVar21 < 0xfe3b0000) {
                                            bVar24 = 0;
                                            if (uVar21 < 0xfe1c0000) goto LAB_001ae694;
                                            iVar18 = 0xe;
                                          }
                                          else {
                                            iVar18 = 0xd;
                                          }
                                        }
                                        else {
                                          iVar18 = 0xc;
                                        }
                                      }
                                      else {
                                        iVar18 = 0xb;
                                      }
                                    }
                                    else {
                                      iVar18 = 10;
                                    }
                                  }
                                  else {
                                    iVar18 = 9;
                                  }
                                }
                                else {
                                  iVar18 = 8;
                                }
                              }
                              else {
                                iVar18 = 7;
                              }
                            }
                            else {
                              iVar18 = 6;
                            }
                          }
                          else {
                            iVar18 = 5;
                          }
                        }
                        else {
                          iVar18 = 4;
                        }
                      }
                      else {
                        iVar18 = 3;
                      }
                    }
                    else {
                      iVar18 = 2;
                    }
                  }
                  else {
                    iVar18 = 1;
                  }
                }
                else {
                  iVar18 = 0;
                }
                bVar24 = (&DAT_0048ca30)[iVar18];
              }
              else {
                if (uVar21 < 0x2f0001) {
                  iVar18 = 0;
                }
                else if (uVar21 < 0x4e0001) {
                  iVar18 = 1;
                }
                else if (uVar21 < 0x6d0001) {
                  iVar18 = 2;
                }
                else if (uVar21 < 0x8d0001) {
                  iVar18 = 3;
                }
                else if (uVar21 < 0xac0001) {
                  iVar18 = 4;
                }
                else if (uVar21 < 0xcb0001) {
                  iVar18 = 5;
                }
                else if (uVar21 < 0xea0001) {
                  iVar18 = 6;
                }
                else if (uVar21 < 0x10a0001) {
                  iVar18 = 7;
                }
                else if (uVar21 < 0x1290001) {
                  iVar18 = 8;
                }
                else if (uVar21 < 0x1480001) {
                  iVar18 = 9;
                }
                else if (uVar21 < 0x1670001) {
                  iVar18 = 10;
                }
                else if (uVar21 < 0x1870001) {
                  iVar18 = 0xb;
                }
                else if (uVar21 < 0x1a60001) {
                  iVar18 = 0xc;
                }
                else if (uVar21 < 0x1c50001) {
                  iVar18 = 0xd;
                }
                else {
                  if (0x1e40000 < uVar21) {
                    bVar24 = 0xf8;
                    goto LAB_001ae694;
                  }
                  iVar18 = 0xe;
                }
                bVar24 = (&DAT_0048ca40)[iVar18];
              }
LAB_001ae694:
              *(byte *)((long)param_1 + 8) = bVar24 | *(byte *)((long)param_1 + 8) & 7;
              *(byte *)((long)param_1 + 9) = *(byte *)((long)param_1 + 9) | 0x20;
              uVar20 = *(uint *)(param_2 + 0x30);
            }
          }
          else if (sVar6 == 0x206) {
            if (sVar7 == 0) {
              if ((int)uVar21 < 0) {
                if (0xd405e45e < uVar21) {
                  uVar20 = 0xffff - ((uint)((int)uVar21 / 0x4b0) >> 0x10);
                  if (9 < uVar20) {
                    uVar20 = 9;
                  }
                  uVar23 = 0;
                  if (*(uint *)(&DAT_0048cac0 + (ulong)uVar20 * 4) != 0) {
                    uVar23 = (((((int)uVar21 / 0x4b0 & 0xffffU) + 0x10000) *
                               *(int *)(&DAT_0048ca60 + (ulong)uVar20 * 4) >> 0x10) *
                             *(int *)(&DAT_0048ca90 + (ulong)uVar20 * 4)) /
                             *(uint *)(&DAT_0048cac0 + (ulong)uVar20 * 4);
                  }
                  goto LAB_001af664;
                }
                uVar23 = 0;
              }
              else {
                iVar18 = 1;
                uVar20 = (uint)((int)uVar21 / 0x4b0) >> 0x10;
                if (uVar20 != 0) {
                  iVar18 = 2 << (ulong)(uVar20 - 1 & 0x1f);
                }
                uVar20 = iVar18 * (((int)uVar21 / 0x4b0 & 0xffffU) + 0x10000);
                uVar23 = (uVar20 & 0xffff) * 1000;
                uVar23 = (uVar20 >> 0x10) * 100000 + (uVar23 >> 0x10) * 100 +
                         ((uVar23 & 0xffff) * 100 >> 0x10);
LAB_001af664:
                if (4000000 < uVar23) {
                  uVar23 = 4000000;
                }
              }
              uVar20 = 4;
              puVar17 = &DAT_0048cb00;
              do {
                uVar8 = *puVar17;
                uVar19 = uVar20 & 0xff;
                uVar21 = uVar20;
                if (uVar8 < uVar23) {
LAB_001af9ac:
                  if (uVar19 == 4) {
                    bVar12 = 0x10;
                    *(byte *)((long)param_1 + 0xf) = *(byte *)((long)param_1 + 0xf) & 0xf7;
                    bVar24 = *(byte *)((long)param_1 + 0xc) & 0xf;
                    goto LAB_001af7b0;
                  }
                  if (*(int *)(&UNK_0048caf0 + (long)(int)(uVar21 - 1) * 4) - uVar23 <
                      uVar23 - uVar8) {
                    uVar21 = uVar19 - 1 & 0xff;
                  }
                  uVar21 = (int)uVar21 >> 1;
                  bVar25 = *(byte *)((long)param_1 + 0xf) & 0xf7;
                  bVar24 = *(byte *)((long)param_1 + 0xc) & 0xf;
                  *(byte *)((long)param_1 + 0xc) = bVar24;
                  *(byte *)((long)param_1 + 0xf) = bVar25;
                  bVar12 = (byte)((uVar21 & 0x1e) << 3);
                  if ((uVar21 & 1) != 0) goto LAB_001af7a8;
                  bVar12 = (byte)((uVar21 & 0x1e) << 3);
                  goto LAB_001af7b0;
                }
                uVar8 = puVar17[1];
                uVar21 = uVar20 + 1;
                uVar19 = uVar21 & 0xff;
                if (uVar8 < uVar23) goto LAB_001af9ac;
                uVar8 = puVar17[2];
                uVar21 = uVar20 + 2;
                uVar19 = uVar21 & 0xff;
                if (uVar8 < uVar23) goto LAB_001af9ac;
                uVar8 = puVar17[3];
                uVar21 = uVar20 + 3;
                uVar19 = uVar21 & 0xff;
                if (uVar8 < uVar23) goto LAB_001af9ac;
                uVar8 = puVar17[4];
                uVar21 = uVar20 + 4;
                uVar19 = uVar21 & 0xff;
                if (uVar8 < uVar23) goto LAB_001af9ac;
                uVar8 = puVar17[5];
                uVar21 = uVar20 + 5;
                uVar19 = uVar21 & 0xff;
                if (uVar8 < uVar23) goto LAB_001af9ac;
                uVar8 = puVar17[6];
                uVar21 = uVar20 + 6;
                uVar19 = uVar21 & 0xff;
                if (uVar8 < uVar23) goto LAB_001af9ac;
                uVar8 = puVar17[7];
                uVar21 = uVar20 + 7;
                uVar19 = uVar21 & 0xff;
                if (uVar8 < uVar23) goto LAB_001af9ac;
                uVar8 = puVar17[8];
                uVar21 = uVar20 + 8;
                uVar19 = uVar21 & 0xff;
                if (uVar8 < uVar23) goto LAB_001af9ac;
                uVar8 = puVar17[9];
                uVar21 = uVar20 + 9;
                uVar19 = uVar21 & 0xff;
                if (uVar8 < uVar23) goto LAB_001af9ac;
                puVar17 = puVar17 + 10;
                uVar20 = uVar20 + 10;
              } while (puVar17 != (uint *)&UNK_0048cbf0);
              bVar12 = 0xf0;
              bVar25 = *(byte *)((long)param_1 + 0xf) & 0xf7;
              bVar24 = *(byte *)((long)param_1 + 0xc) & 0xf;
LAB_001af7a8:
              *(byte *)((long)param_1 + 0xf) = bVar25 | 8;
LAB_001af7b0:
              *(byte *)((long)param_1 + 0xc) = bVar12 | bVar24;
              uVar20 = *(uint *)(param_2 + 0x30);
            }
          }
          else if ((sVar6 == 0x207) && (sVar7 == 0)) {
            if ((int)uVar21 < 0) {
              if (0xd405e45e < uVar21) {
                uVar20 = 0xffff - ((uint)((int)uVar21 / 0x4b0) >> 0x10);
                if (9 < uVar20) {
                  uVar20 = 9;
                }
                uVar23 = 0;
                if (*(uint *)(&DAT_0048cac0 + (ulong)uVar20 * 4) != 0) {
                  uVar23 = (((((int)uVar21 / 0x4b0 & 0xffffU) + 0x10000) *
                             *(int *)(&DAT_0048ca60 + (ulong)uVar20 * 4) >> 0x10) *
                           *(int *)(&DAT_0048ca90 + (ulong)uVar20 * 4)) /
                           *(uint *)(&DAT_0048cac0 + (ulong)uVar20 * 4);
                }
                goto LAB_001aed08;
              }
              uVar23 = 0;
            }
            else {
              iVar18 = 1;
              uVar20 = (uint)((int)uVar21 / 0x4b0) >> 0x10;
              if (uVar20 != 0) {
                iVar18 = 2 << (ulong)(uVar20 - 1 & 0x1f);
              }
              uVar20 = iVar18 * (((int)uVar21 / 0x4b0 & 0xffffU) + 0x10000);
              uVar23 = (uVar20 & 0xffff) * 1000;
              uVar23 = (uVar20 >> 0x10) * 100000 + (uVar23 >> 0x10) * 100 +
                       ((uVar23 & 0xffff) * 100 >> 0x10);
LAB_001aed08:
              if (4000000 < uVar23) {
                uVar23 = 4000000;
              }
            }
            uVar20 = 4;
            puVar17 = &DAT_0048cc00;
            do {
              uVar8 = *puVar17;
              uVar19 = uVar20 & 0xff;
              uVar16 = (ulong)uVar20;
              uVar21 = uVar20;
              if (uVar8 < uVar23) {
LAB_001afa38:
                if (uVar19 == 4) {
                  bVar12 = 1;
                  *(byte *)((long)param_1 + 0xf) = *(byte *)((long)param_1 + 0xf) & 0xfb;
                  bVar24 = *(byte *)((long)param_1 + 0xb) & 0xf0;
                  goto LAB_001aee54;
                }
                if (*(int *)(&UNK_0048cbf0 + (long)(int)(uVar21 - 1) * 4) - uVar23 < uVar23 - uVar8)
                {
                  uVar16 = (ulong)(byte)((char)uVar19 - 1);
                }
                bVar12 = (byte)(uVar16 >> 2);
                bVar25 = *(byte *)((long)param_1 + 0xf) & 0xfb;
                bVar24 = *(byte *)((long)param_1 + 0xb) & 0xf0;
                *(byte *)((long)param_1 + 0xb) = bVar24;
                *(byte *)((long)param_1 + 0xf) = bVar25;
                if (((uint)uVar16 >> 1 & 1) == 0) goto LAB_001aee54;
                goto LAB_001aee4c;
              }
              uVar8 = puVar17[1];
              uVar21 = uVar20 + 1;
              uVar19 = uVar21 & 0xff;
              uVar16 = (ulong)uVar21;
              if (uVar8 < uVar23) goto LAB_001afa38;
              uVar8 = puVar17[2];
              uVar21 = uVar20 + 2;
              uVar16 = (ulong)uVar21;
              uVar19 = uVar21 & 0xff;
              if (uVar8 < uVar23) goto LAB_001afa38;
              uVar8 = puVar17[3];
              uVar21 = uVar20 + 3;
              uVar16 = (ulong)uVar21;
              uVar19 = uVar21 & 0xff;
              if (uVar8 < uVar23) goto LAB_001afa38;
              uVar8 = puVar17[4];
              uVar21 = uVar20 + 4;
              uVar16 = (ulong)uVar21;
              uVar19 = uVar21 & 0xff;
              if (uVar8 < uVar23) goto LAB_001afa38;
              uVar8 = puVar17[5];
              uVar21 = uVar20 + 5;
              uVar16 = (ulong)uVar21;
              uVar19 = uVar21 & 0xff;
              if (uVar8 < uVar23) goto LAB_001afa38;
              uVar8 = puVar17[6];
              uVar21 = uVar20 + 6;
              uVar16 = (ulong)uVar21;
              uVar19 = uVar21 & 0xff;
              if (uVar8 < uVar23) goto LAB_001afa38;
              uVar8 = puVar17[7];
              uVar21 = uVar20 + 7;
              uVar16 = (ulong)uVar21;
              uVar19 = uVar21 & 0xff;
              if (uVar8 < uVar23) goto LAB_001afa38;
              uVar8 = puVar17[8];
              uVar21 = uVar20 + 8;
              uVar16 = (ulong)uVar21;
              uVar19 = uVar21 & 0xff;
              if (uVar8 < uVar23) goto LAB_001afa38;
              uVar8 = puVar17[9];
              uVar21 = uVar20 + 9;
              uVar16 = (ulong)uVar21;
              uVar19 = uVar21 & 0xff;
              if (uVar8 < uVar23) goto LAB_001afa38;
              puVar17 = puVar17 + 10;
              uVar20 = uVar20 + 10;
            } while (puVar17 != (uint *)&DAT_0048ccf0);
            bVar12 = 0xf;
            bVar25 = *(byte *)((long)param_1 + 0xf) & 0xfb;
            bVar24 = *(byte *)((long)param_1 + 0xb) & 0xf0;
LAB_001aee4c:
            *(byte *)((long)param_1 + 0xf) = bVar25 | 4;
LAB_001aee54:
            *(byte *)((long)param_1 + 0xb) = bVar24 | bVar12;
            uVar20 = *(uint *)(param_2 + 0x30);
          }
        }
        else if (sVar6 == 0x30b) {
          if (sVar7 == 0) {
            if ((int)uVar21 < 0) {
              bVar24 = 0x1f;
              if (0xd405e45e < uVar21) {
                uVar20 = 0xffff - ((uint)((int)uVar21 / 0x4b0) >> 0x10);
                if (9 < uVar20) {
                  uVar20 = 9;
                }
                uVar23 = 0;
                if (*(uint *)(&DAT_0048cac0 + (ulong)uVar20 * 4) != 0) {
                  uVar23 = (((((int)uVar21 / 0x4b0 & 0xffffU) + 0x10000) *
                             *(int *)(&DAT_0048ca60 + (ulong)uVar20 * 4) >> 0x10) *
                           *(int *)(&DAT_0048ca90 + (ulong)uVar20 * 4)) /
                           *(uint *)(&DAT_0048cac0 + (ulong)uVar20 * 4);
                }
                goto LAB_001af58c;
              }
            }
            else {
              iVar18 = 1;
              uVar20 = (uint)((int)uVar21 / 0x4b0) >> 0x10;
              if (uVar20 != 0) {
                iVar18 = 2 << (ulong)(uVar20 - 1 & 0x1f);
              }
              uVar20 = iVar18 * (((int)uVar21 / 0x4b0 & 0xffffU) + 0x10000);
              uVar23 = (uVar20 & 0xffff) * 1000;
              uVar23 = (uVar20 >> 0x10) * 100000 + (uVar23 >> 0x10) * 100 +
                       ((uVar23 & 0xffff) * 100 >> 0x10);
LAB_001af58c:
              if (uVar23 < 0x3d0901) {
                if (uVar23 < 0x348001) {
                  if (uVar23 < 0x2bc001) {
                    if (uVar23 < 0x258001) {
                      if (uVar23 < 0x20d001) {
                        if (uVar23 < 0x1a4001) {
                          if (uVar23 < 0x15e001) {
                            if (uVar23 < 0x12c001) {
                              if (uVar23 < 0x106802) {
                                if (uVar23 < 0xd2001) {
                                  if (uVar23 < 0xaf001) {
                                    if (uVar23 < 0x96001) {
                                      if (uVar23 < 0x83401) {
                                        if (uVar23 < 0x69001) {
                                          if (uVar23 < 0x57801) {
                                            if (uVar23 < 0x4b001) {
                                              if (uVar23 < 0x41a01) {
                                                if (uVar23 < 0x34802) {
                                                  if (uVar23 < 0x25801) {
                                                    if (uVar23 < 0x1a401) {
                                                      if (uVar23 < 0x12c01) {
                                                        if (uVar23 < 0xd201) {
                                                          if (uVar23 < 0x9601) {
                                                            if (uVar23 < 0x6901) {
                                                              if (uVar23 < 0x4b01) {
                                                                if (uVar23 < 0x3481) {
                                                                  if (uVar23 < 0x25bd) {
                                                                    if (uVar23 < 0x1a41) {
                                                                      if (uVar23 < 0x12c1) {
                                                                        if (uVar23 < 0xd21) {
                                                                          if (uVar23 < 0x961) {
                                                                            bVar24 = 0x1f;
                                                                            goto LAB_001af5d0;
                                                                          }
                                                                          bVar24 = 0x1e;
                                                                          iVar18 = 0x1e;
                                                                          iVar14 = 0x1f;
                                                                          bVar12 = 0x1f;
                                                                        }
                                                                        else {
                                                                          bVar24 = 0x1d;
                                                                          iVar18 = 0x1d;
                                                                          iVar14 = 0x1e;
                                                                          bVar12 = 0x1e;
                                                                        }
                                                                      }
                                                                      else {
                                                                        bVar24 = 0x1c;
                                                                        iVar18 = 0x1c;
                                                                        iVar14 = 0x1d;
                                                                        bVar12 = 0x1d;
                                                                      }
                                                                    }
                                                                    else {
                                                                      bVar24 = 0x1b;
                                                                      iVar18 = 0x1b;
                                                                      iVar14 = 0x1c;
                                                                      bVar12 = 0x1c;
                                                                    }
                                                                  }
                                                                  else {
                                                                    bVar24 = 0x1a;
                                                                    iVar18 = 0x1a;
                                                                    iVar14 = 0x1b;
                                                                    bVar12 = 0x1b;
                                                                  }
                                                                }
                                                                else {
                                                                  bVar24 = 0x19;
                                                                  iVar18 = 0x19;
                                                                  iVar14 = 0x1a;
                                                                  bVar12 = 0x1a;
                                                                }
                                                              }
                                                              else {
                                                                bVar24 = 0x18;
                                                                iVar18 = 0x18;
                                                                iVar14 = 0x19;
                                                                bVar12 = 0x19;
                                                              }
                                                            }
                                                            else {
                                                              bVar24 = 0x17;
                                                              iVar18 = 0x17;
                                                              iVar14 = 0x18;
                                                              bVar12 = 0x18;
                                                            }
                                                          }
                                                          else {
                                                            bVar24 = 0x16;
                                                            iVar18 = 0x16;
                                                            iVar14 = 0x17;
                                                            bVar12 = 0x17;
                                                          }
                                                        }
                                                        else {
                                                          bVar24 = 0x15;
                                                          iVar18 = 0x15;
                                                          iVar14 = 0x16;
                                                          bVar12 = 0x16;
                                                        }
                                                      }
                                                      else {
                                                        bVar24 = 0x14;
                                                        iVar18 = 0x14;
                                                        iVar14 = 0x15;
                                                        bVar12 = 0x15;
                                                      }
                                                    }
                                                    else {
                                                      bVar24 = 0x13;
                                                      iVar18 = 0x13;
                                                      iVar14 = 0x14;
                                                      bVar12 = 0x14;
                                                    }
                                                  }
                                                  else {
                                                    bVar24 = 0x12;
                                                    iVar18 = 0x12;
                                                    iVar14 = 0x13;
                                                    bVar12 = 0x13;
                                                  }
                                                }
                                                else {
                                                  bVar24 = 0x11;
                                                  iVar18 = 0x11;
                                                  iVar14 = 0x12;
                                                  bVar12 = 0x12;
                                                }
                                              }
                                              else {
                                                bVar24 = 0x10;
                                                iVar18 = 0x10;
                                                iVar14 = 0x11;
                                                bVar12 = 0x11;
                                              }
                                            }
                                            else {
                                              bVar24 = 0xf;
                                              iVar18 = 0xf;
                                              iVar14 = 0x10;
                                              bVar12 = 0x10;
                                            }
                                          }
                                          else {
                                            bVar24 = 0xe;
                                            iVar18 = 0xe;
                                            iVar14 = 0xf;
                                            bVar12 = 0xf;
                                          }
                                        }
                                        else {
                                          bVar24 = 0xd;
                                          iVar18 = 0xd;
                                          iVar14 = 0xe;
                                          bVar12 = 0xe;
                                        }
                                      }
                                      else {
                                        bVar24 = 0xc;
                                        iVar18 = 0xc;
                                        iVar14 = 0xd;
                                        bVar12 = 0xd;
                                      }
                                    }
                                    else {
                                      bVar24 = 0xb;
                                      iVar18 = 0xb;
                                      iVar14 = 0xc;
                                      bVar12 = 0xc;
                                    }
                                  }
                                  else {
                                    bVar24 = 10;
                                    iVar18 = 10;
                                    iVar14 = 0xb;
                                    bVar12 = 0xb;
                                  }
                                }
                                else {
                                  bVar24 = 9;
                                  iVar18 = 9;
                                  iVar14 = 10;
                                  bVar12 = 10;
                                }
                              }
                              else {
                                bVar24 = 8;
                                iVar18 = 8;
                                iVar14 = 9;
                                bVar12 = 9;
                              }
                            }
                            else {
                              bVar24 = 7;
                              iVar18 = 7;
                              iVar14 = 8;
                              bVar12 = 8;
                            }
                          }
                          else {
                            bVar24 = 6;
                            iVar18 = 6;
                            iVar14 = 7;
                            bVar12 = 7;
                          }
                        }
                        else {
                          bVar24 = 5;
                          iVar18 = 5;
                          iVar14 = 6;
                          bVar12 = 6;
                        }
                      }
                      else {
                        bVar24 = 4;
                        iVar18 = 4;
                        iVar14 = 5;
                        bVar12 = 5;
                      }
                    }
                    else {
                      bVar24 = 3;
                      iVar18 = 3;
                      iVar14 = 4;
                      bVar12 = 4;
                    }
                  }
                  else {
                    bVar24 = 2;
                    iVar18 = 2;
                    iVar14 = 3;
                    bVar12 = 3;
                  }
                }
                else {
                  bVar24 = 1;
                  iVar18 = 1;
                  iVar14 = 2;
                  bVar12 = 2;
                }
              }
              else {
                bVar24 = 1;
                iVar14 = 2;
                iVar18 = 1;
                uVar23 = 4000000;
                bVar12 = 2;
              }
              if (uVar23 - *(int *)(&UNK_0048cd20 + (long)iVar14 * 4) <=
                  *(int *)(&UNK_0048cd20 + (long)iVar18 * 4) - uVar23) {
                bVar24 = bVar12;
              }
            }
LAB_001af5d0:
            *(byte *)((long)param_1 + 10) = *(byte *)((long)param_1 + 10) | 4;
            *(byte *)((long)param_1 + 0x27) = bVar24 | *(byte *)((long)param_1 + 0x27) & 0xe0;
            uVar20 = *(uint *)(param_2 + 0x30);
          }
        }
        else if (sVar6 < 0x30c) {
          if (sVar6 == 0x20a) {
            if (sVar7 == 0) {
              if (uVar21 < 0x2350000) {
                iVar18 = 0;
LAB_001b071c:
                bVar24 = (&DAT_0048ccf0)[iVar18];
              }
              else {
                if (uVar21 < 0x2530000) {
                  iVar18 = 1;
                  goto LAB_001b071c;
                }
                if (uVar21 < 0x2710000) {
                  iVar18 = 2;
                  goto LAB_001b071c;
                }
                if (uVar21 < 0x28f0000) {
                  iVar18 = 3;
                  goto LAB_001b071c;
                }
                if (uVar21 < 0x2ad0000) {
                  iVar18 = 4;
                  goto LAB_001b071c;
                }
                if (uVar21 < 0x2cb0000) {
                  iVar18 = 5;
                  goto LAB_001b071c;
                }
                if (uVar21 < 0x2e90000) {
                  iVar18 = 6;
                  goto LAB_001b071c;
                }
                if (uVar21 < 0x3070000) {
                  iVar18 = 7;
                  goto LAB_001b071c;
                }
                if (uVar21 < 0x3250000) {
                  iVar18 = 8;
                  goto LAB_001b071c;
                }
                if (uVar21 < 0x3430000) {
                  iVar18 = 9;
                  goto LAB_001b071c;
                }
                if (uVar21 < 0x3610000) {
                  iVar18 = 10;
                  goto LAB_001b071c;
                }
                if (uVar21 < 0x37f0000) {
                  iVar18 = 0xb;
                  goto LAB_001b071c;
                }
                if (uVar21 < 0x39d0000) {
                  iVar18 = 0xc;
                  goto LAB_001b071c;
                }
                if (uVar21 < 0x3bb0000) {
                  iVar18 = 0xd;
                  goto LAB_001b071c;
                }
                bVar24 = 0;
                if (uVar21 < 0x3d90000) {
                  iVar18 = 0xe;
                  goto LAB_001b071c;
                }
              }
              *(byte *)((long)param_1 + 0xc) = bVar24 | *(byte *)((long)param_1 + 0xc) & 0xf0;
              uVar20 = *(uint *)(param_2 + 0x30);
            }
          }
          else if ((sVar6 == 0x30a) && (sVar7 == 0)) {
            if ((int)uVar21 < 0) {
              cVar11 = '\x1f';
              if (0xd405e45e < uVar21) {
                uVar20 = 0xffff - ((uint)((int)uVar21 / 0x4b0) >> 0x10);
                if (9 < uVar20) {
                  uVar20 = 9;
                }
                uVar23 = 0;
                if (*(uint *)(&DAT_0048cac0 + (ulong)uVar20 * 4) != 0) {
                  uVar23 = (((((int)uVar21 / 0x4b0 & 0xffffU) + 0x10000) *
                             *(int *)(&DAT_0048ca60 + (ulong)uVar20 * 4) >> 0x10) *
                           *(int *)(&DAT_0048ca90 + (ulong)uVar20 * 4)) /
                           *(uint *)(&DAT_0048cac0 + (ulong)uVar20 * 4);
                }
                goto LAB_001aea80;
              }
            }
            else {
              iVar18 = 1;
              uVar20 = (uint)((int)uVar21 / 0x4b0) >> 0x10;
              if (uVar20 != 0) {
                iVar18 = 2 << (ulong)(uVar20 - 1 & 0x1f);
              }
              uVar20 = iVar18 * (((int)uVar21 / 0x4b0 & 0xffffU) + 0x10000);
              uVar23 = (uVar20 & 0xffff) * 1000;
              uVar23 = (uVar20 >> 0x10) * 100000 + (uVar23 >> 0x10) * 100 +
                       ((uVar23 & 0xffff) * 100 >> 0x10);
LAB_001aea80:
              if (uVar23 < 0x3d0901) {
                if (uVar23 < 0x348001) {
                  if (uVar23 < 0x2bc001) {
                    if (uVar23 < 0x258001) {
                      if (uVar23 < 0x20d001) {
                        if (uVar23 < 0x1a4001) {
                          if (uVar23 < 0x15e001) {
                            if (uVar23 < 0x12c001) {
                              if (uVar23 < 0x106802) {
                                if (uVar23 < 0xd2001) {
                                  if (uVar23 < 0xaf001) {
                                    if (uVar23 < 0x96001) {
                                      if (uVar23 < 0x83401) {
                                        if (uVar23 < 0x69001) {
                                          if (uVar23 < 0x57801) {
                                            if (uVar23 < 0x4b001) {
                                              if (uVar23 < 0x41a01) {
                                                if (uVar23 < 0x34802) {
                                                  if (uVar23 < 0x25801) {
                                                    if (uVar23 < 0x1a401) {
                                                      if (uVar23 < 0x12c01) {
                                                        if (uVar23 < 0xd201) {
                                                          if (uVar23 < 0x9601) {
                                                            if (uVar23 < 0x6901) {
                                                              if (uVar23 < 0x4b01) {
                                                                if (uVar23 < 0x3481) {
                                                                  if (uVar23 < 0x25bd) {
                                                                    if (uVar23 < 0x1a41) {
                                                                      if (uVar23 < 0x12c1) {
                                                                        if (uVar23 < 0xd21) {
                                                                          if (uVar23 < 0x961) {
                                                                            cVar11 = '\x1f';
                                                                            goto LAB_001aebe4;
                                                                          }
                                                                          cVar11 = '\x1e';
                                                                          iVar14 = 0x1e;
                                                                          iVar18 = 0x1f;
                                                                          cVar15 = '\x1f';
                                                                        }
                                                                        else {
                                                                          cVar11 = '\x1d';
                                                                          iVar14 = 0x1d;
                                                                          iVar18 = 0x1e;
                                                                          cVar15 = '\x1e';
                                                                        }
                                                                      }
                                                                      else {
                                                                        cVar11 = '\x1c';
                                                                        iVar14 = 0x1c;
                                                                        iVar18 = 0x1d;
                                                                        cVar15 = '\x1d';
                                                                      }
                                                                    }
                                                                    else {
                                                                      cVar11 = '\x1b';
                                                                      iVar14 = 0x1b;
                                                                      iVar18 = 0x1c;
                                                                      cVar15 = '\x1c';
                                                                    }
                                                                  }
                                                                  else {
                                                                    cVar11 = '\x1a';
                                                                    iVar14 = 0x1a;
                                                                    iVar18 = 0x1b;
                                                                    cVar15 = '\x1b';
                                                                  }
                                                                }
                                                                else {
                                                                  cVar11 = '\x19';
                                                                  iVar14 = 0x19;
                                                                  iVar18 = 0x1a;
                                                                  cVar15 = '\x1a';
                                                                }
                                                              }
                                                              else {
                                                                cVar11 = '\x18';
                                                                iVar14 = 0x18;
                                                                iVar18 = 0x19;
                                                                cVar15 = '\x19';
                                                              }
                                                            }
                                                            else {
                                                              cVar11 = '\x17';
                                                              iVar14 = 0x17;
                                                              iVar18 = 0x18;
                                                              cVar15 = '\x18';
                                                            }
                                                          }
                                                          else {
                                                            cVar11 = '\x16';
                                                            iVar14 = 0x16;
                                                            iVar18 = 0x17;
                                                            cVar15 = '\x17';
                                                          }
                                                        }
                                                        else {
                                                          cVar11 = '\x15';
                                                          iVar14 = 0x15;
                                                          iVar18 = 0x16;
                                                          cVar15 = '\x16';
                                                        }
                                                      }
                                                      else {
                                                        cVar11 = '\x14';
                                                        iVar14 = 0x14;
                                                        iVar18 = 0x15;
                                                        cVar15 = '\x15';
                                                      }
                                                    }
                                                    else {
                                                      cVar11 = '\x13';
                                                      iVar14 = 0x13;
                                                      iVar18 = 0x14;
                                                      cVar15 = '\x14';
                                                    }
                                                  }
                                                  else {
                                                    cVar11 = '\x12';
                                                    iVar14 = 0x12;
                                                    iVar18 = 0x13;
                                                    cVar15 = '\x13';
                                                  }
                                                }
                                                else {
                                                  cVar11 = '\x11';
                                                  iVar14 = 0x11;
                                                  iVar18 = 0x12;
                                                  cVar15 = '\x12';
                                                }
                                              }
                                              else {
                                                cVar11 = '\x10';
                                                iVar14 = 0x10;
                                                iVar18 = 0x11;
                                                cVar15 = '\x11';
                                              }
                                            }
                                            else {
                                              cVar11 = '\x0f';
                                              iVar14 = 0xf;
                                              iVar18 = 0x10;
                                              cVar15 = '\x10';
                                            }
                                          }
                                          else {
                                            cVar11 = '\x0e';
                                            iVar14 = 0xe;
                                            iVar18 = 0xf;
                                            cVar15 = '\x0f';
                                          }
                                        }
                                        else {
                                          cVar11 = '\r';
                                          iVar14 = 0xd;
                                          iVar18 = 0xe;
                                          cVar15 = '\x0e';
                                        }
                                      }
                                      else {
                                        cVar11 = '\f';
                                        iVar14 = 0xc;
                                        iVar18 = 0xd;
                                        cVar15 = '\r';
                                      }
                                    }
                                    else {
                                      cVar11 = '\v';
                                      iVar14 = 0xb;
                                      iVar18 = 0xc;
                                      cVar15 = '\f';
                                    }
                                  }
                                  else {
                                    cVar11 = '\n';
                                    iVar14 = 10;
                                    iVar18 = 0xb;
                                    cVar15 = '\v';
                                  }
                                }
                                else {
                                  cVar11 = '\t';
                                  iVar14 = 9;
                                  iVar18 = 10;
                                  cVar15 = '\n';
                                }
                              }
                              else {
                                cVar11 = '\b';
                                iVar14 = 8;
                                iVar18 = 9;
                                cVar15 = '\t';
                              }
                            }
                            else {
                              cVar11 = '\a';
                              iVar14 = 7;
                              iVar18 = 8;
                              cVar15 = '\b';
                            }
                          }
                          else {
                            cVar11 = '\x06';
                            iVar14 = 6;
                            iVar18 = 7;
                            cVar15 = '\a';
                          }
                        }
                        else {
                          cVar11 = '\x05';
                          iVar14 = 5;
                          iVar18 = 6;
                          cVar15 = '\x06';
                        }
                      }
                      else {
                        cVar11 = '\x04';
                        iVar14 = 4;
                        iVar18 = 5;
                        cVar15 = '\x05';
                      }
                    }
                    else {
                      cVar11 = '\x03';
                      iVar14 = 3;
                      iVar18 = 4;
                      cVar15 = '\x04';
                    }
                  }
                  else {
                    cVar11 = '\x02';
                    iVar14 = 2;
                    iVar18 = 3;
                    cVar15 = '\x03';
                  }
                }
                else {
                  cVar11 = '\x01';
                  iVar14 = 1;
                  iVar18 = 2;
                  cVar15 = '\x02';
                }
              }
              else {
                cVar11 = '\x01';
                iVar18 = 2;
                iVar14 = 1;
                uVar23 = 4000000;
                cVar15 = '\x02';
              }
              if (uVar23 - *(int *)(&UNK_0048cd20 + (long)iVar18 * 4) <=
                  *(int *)(&UNK_0048cd20 + (long)iVar14 * 4) - uVar23) {
                cVar11 = cVar15;
              }
            }
LAB_001aebe4:
            *(char *)((long)param_1 + 0x26) = cVar11;
            *(byte *)((long)param_1 + 10) = *(byte *)((long)param_1 + 10) | 4;
            uVar20 = *(uint *)(param_2 + 0x30);
          }
        }
        else if (sVar6 == 0x30d) {
          if (sVar7 == 0) {
            if ((int)uVar21 < 0) {
              bVar24 = 0x1f;
              if (0xd405e45e < uVar21) {
                uVar20 = 0xffff - ((uint)((int)uVar21 / 0x4b0) >> 0x10);
                if (9 < uVar20) {
                  uVar20 = 9;
                }
                uVar23 = 0;
                if (*(uint *)(&DAT_0048cac0 + (ulong)uVar20 * 4) != 0) {
                  uVar23 = (((((int)uVar21 / 0x4b0 & 0xffffU) + 0x10000) *
                             *(int *)(&DAT_0048ca60 + (ulong)uVar20 * 4) >> 0x10) *
                           *(int *)(&DAT_0048ca90 + (ulong)uVar20 * 4)) /
                           *(uint *)(&DAT_0048cac0 + (ulong)uVar20 * 4);
                }
                goto LAB_001af398;
              }
            }
            else {
              iVar18 = 1;
              uVar20 = (uint)((int)uVar21 / 0x4b0) >> 0x10;
              if (uVar20 != 0) {
                iVar18 = 2 << (ulong)(uVar20 - 1 & 0x1f);
              }
              uVar20 = iVar18 * (((int)uVar21 / 0x4b0 & 0xffffU) + 0x10000);
              uVar23 = (uVar20 & 0xffff) * 1000;
              uVar23 = (uVar20 >> 0x10) * 100000 + (uVar23 >> 0x10) * 100 +
                       ((uVar23 & 0xffff) * 100 >> 0x10);
LAB_001af398:
              if (uVar23 < 0x3d0901) {
                if (uVar23 < 0x348001) {
                  if (uVar23 < 0x2bc001) {
                    if (uVar23 < 0x258001) {
                      if (uVar23 < 0x20d001) {
                        if (uVar23 < 0x1a4001) {
                          if (uVar23 < 0x15e001) {
                            if (uVar23 < 0x12c001) {
                              if (uVar23 < 0x106802) {
                                if (uVar23 < 0xd2001) {
                                  if (uVar23 < 0xaf001) {
                                    if (uVar23 < 0x96001) {
                                      if (uVar23 < 0x83401) {
                                        if (uVar23 < 0x69001) {
                                          if (uVar23 < 0x57801) {
                                            if (uVar23 < 0x4b001) {
                                              if (uVar23 < 0x41a01) {
                                                if (uVar23 < 0x34802) {
                                                  if (uVar23 < 0x25801) {
                                                    if (uVar23 < 0x1a401) {
                                                      if (uVar23 < 0x12c01) {
                                                        if (uVar23 < 0xd201) {
                                                          if (uVar23 < 0x9601) {
                                                            if (uVar23 < 0x6901) {
                                                              if (uVar23 < 0x4b01) {
                                                                if (uVar23 < 0x3481) {
                                                                  if (uVar23 < 0x25bd) {
                                                                    if (uVar23 < 0x1a41) {
                                                                      if (uVar23 < 0x12c1) {
                                                                        if (uVar23 < 0xd21) {
                                                                          if (uVar23 < 0x961) {
                                                                            bVar24 = 0x1f;
                                                                            goto LAB_001af4fc;
                                                                          }
                                                                          bVar24 = 0x1e;
                                                                          iVar14 = 0x1e;
                                                                          iVar18 = 0x1f;
                                                                          bVar12 = 0x1f;
                                                                        }
                                                                        else {
                                                                          bVar24 = 0x1d;
                                                                          iVar14 = 0x1d;
                                                                          iVar18 = 0x1e;
                                                                          bVar12 = 0x1e;
                                                                        }
                                                                      }
                                                                      else {
                                                                        bVar24 = 0x1c;
                                                                        iVar14 = 0x1c;
                                                                        iVar18 = 0x1d;
                                                                        bVar12 = 0x1d;
                                                                      }
                                                                    }
                                                                    else {
                                                                      bVar24 = 0x1b;
                                                                      iVar14 = 0x1b;
                                                                      iVar18 = 0x1c;
                                                                      bVar12 = 0x1c;
                                                                    }
                                                                  }
                                                                  else {
                                                                    bVar24 = 0x1a;
                                                                    iVar14 = 0x1a;
                                                                    iVar18 = 0x1b;
                                                                    bVar12 = 0x1b;
                                                                  }
                                                                }
                                                                else {
                                                                  bVar24 = 0x19;
                                                                  iVar14 = 0x19;
                                                                  iVar18 = 0x1a;
                                                                  bVar12 = 0x1a;
                                                                }
                                                              }
                                                              else {
                                                                bVar24 = 0x18;
                                                                iVar14 = 0x18;
                                                                iVar18 = 0x19;
                                                                bVar12 = 0x19;
                                                              }
                                                            }
                                                            else {
                                                              bVar24 = 0x17;
                                                              iVar14 = 0x17;
                                                              iVar18 = 0x18;
                                                              bVar12 = 0x18;
                                                            }
                                                          }
                                                          else {
                                                            bVar24 = 0x16;
                                                            iVar14 = 0x16;
                                                            iVar18 = 0x17;
                                                            bVar12 = 0x17;
                                                          }
                                                        }
                                                        else {
                                                          bVar24 = 0x15;
                                                          iVar14 = 0x15;
                                                          iVar18 = 0x16;
                                                          bVar12 = 0x16;
                                                        }
                                                      }
                                                      else {
                                                        bVar24 = 0x14;
                                                        iVar14 = 0x14;
                                                        iVar18 = 0x15;
                                                        bVar12 = 0x15;
                                                      }
                                                    }
                                                    else {
                                                      bVar24 = 0x13;
                                                      iVar14 = 0x13;
                                                      iVar18 = 0x14;
                                                      bVar12 = 0x14;
                                                    }
                                                  }
                                                  else {
                                                    bVar24 = 0x12;
                                                    iVar14 = 0x12;
                                                    iVar18 = 0x13;
                                                    bVar12 = 0x13;
                                                  }
                                                }
                                                else {
                                                  bVar24 = 0x11;
                                                  iVar14 = 0x11;
                                                  iVar18 = 0x12;
                                                  bVar12 = 0x12;
                                                }
                                              }
                                              else {
                                                bVar24 = 0x10;
                                                iVar14 = 0x10;
                                                iVar18 = 0x11;
                                                bVar12 = 0x11;
                                              }
                                            }
                                            else {
                                              bVar24 = 0xf;
                                              iVar14 = 0xf;
                                              iVar18 = 0x10;
                                              bVar12 = 0x10;
                                            }
                                          }
                                          else {
                                            bVar24 = 0xe;
                                            iVar14 = 0xe;
                                            iVar18 = 0xf;
                                            bVar12 = 0xf;
                                          }
                                        }
                                        else {
                                          bVar24 = 0xd;
                                          iVar14 = 0xd;
                                          iVar18 = 0xe;
                                          bVar12 = 0xe;
                                        }
                                      }
                                      else {
                                        bVar24 = 0xc;
                                        iVar14 = 0xc;
                                        iVar18 = 0xd;
                                        bVar12 = 0xd;
                                      }
                                    }
                                    else {
                                      bVar24 = 0xb;
                                      iVar14 = 0xb;
                                      iVar18 = 0xc;
                                      bVar12 = 0xc;
                                    }
                                  }
                                  else {
                                    bVar24 = 10;
                                    iVar14 = 10;
                                    iVar18 = 0xb;
                                    bVar12 = 0xb;
                                  }
                                }
                                else {
                                  bVar24 = 9;
                                  iVar14 = 9;
                                  iVar18 = 10;
                                  bVar12 = 10;
                                }
                              }
                              else {
                                bVar24 = 8;
                                iVar14 = 8;
                                iVar18 = 9;
                                bVar12 = 9;
                              }
                            }
                            else {
                              bVar24 = 7;
                              iVar14 = 7;
                              iVar18 = 8;
                              bVar12 = 8;
                            }
                          }
                          else {
                            bVar24 = 6;
                            iVar14 = 6;
                            iVar18 = 7;
                            bVar12 = 7;
                          }
                        }
                        else {
                          bVar24 = 5;
                          iVar14 = 5;
                          iVar18 = 6;
                          bVar12 = 6;
                        }
                      }
                      else {
                        bVar24 = 4;
                        iVar14 = 4;
                        iVar18 = 5;
                        bVar12 = 5;
                      }
                    }
                    else {
                      bVar24 = 3;
                      iVar14 = 3;
                      iVar18 = 4;
                      bVar12 = 4;
                    }
                  }
                  else {
                    bVar24 = 2;
                    iVar14 = 2;
                    iVar18 = 3;
                    bVar12 = 3;
                  }
                }
                else {
                  bVar24 = 1;
                  iVar14 = 1;
                  iVar18 = 2;
                  bVar12 = 2;
                }
              }
              else {
                bVar24 = 1;
                iVar18 = 2;
                iVar14 = 1;
                uVar23 = 4000000;
                bVar12 = 2;
              }
              if (uVar23 - *(int *)(&UNK_0048cd20 + (long)iVar18 * 4) <=
                  *(int *)(&UNK_0048cd20 + (long)iVar14 * 4) - uVar23) {
                bVar24 = bVar12;
              }
            }
LAB_001af4fc:
            *(byte *)((long)param_1 + 0x29) = bVar24 | *(byte *)((long)param_1 + 0x29) & 0xe0;
            *(byte *)((long)param_1 + 10) = *(byte *)((long)param_1 + 10) | 4;
            uVar20 = *(uint *)(param_2 + 0x30);
          }
        }
        else if ((sVar6 == 0x30e) && (sVar7 == 0)) {
          uVar22 = 0;
          if (bVar4) {
            iVar18 = (int)uVar9;
            if (iVar18 < 0) {
              iVar18 = (int)((uVar23 >> 0x10) * iVar18 * 1000) / 0xe6b68 + -5;
            }
            else {
              iVar18 = (int)((uVar23 >> 0x10) * iVar18 * 1000) / 0xe6b68 + 5;
            }
            uVar22 = (undefined1)(iVar18 / 10);
          }
          *(undefined1 *)((long)param_1 + 0x2c) = uVar22;
          bVar3 = true;
          *(undefined1 *)((long)param_1 + 0x2d) = uVar22;
          *(byte *)((long)param_1 + 10) = *(byte *)((long)param_1 + 10) | 4;
          uVar20 = *(uint *)(param_2 + 0x30);
          uVar10 = (ulong)uVar21;
        }
      }
    }
  }
  cVar15 = *(char *)((long)param_1 + 0x2b);
  if (cVar11 == '\x1f') {
    *(char *)((long)param_1 + 0x2a) = cVar15;
  }
  else if (*(char *)((long)param_1 + 0x2a) != cVar15) goto LAB_001aec18;
  *(undefined1 *)((long)param_1 + 0x26) = 0;
LAB_001aec18:
  if (*(char *)((long)param_1 + 0x2c) == cVar15) {
    *(undefined1 *)((long)param_1 + 0x27) = 0;
  }
  if (*(char *)((long)param_1 + 0x2c) == *(char *)((long)param_1 + 0x2d)) {
    *(undefined1 *)((long)param_1 + 0x28) = 0;
  }
  if (*(char *)((long)param_1 + 0x2d) == '\0') {
    *(undefined1 *)((long)param_1 + 0x29) = 0;
  }
  return 0x27;
}

