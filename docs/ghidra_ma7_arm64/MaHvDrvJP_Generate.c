/* MaHvDrvJP_Generate @ 00225754 4076B */


/* YAMAHA::MaHvDrvJP_Generate(unsigned char*) */

undefined8 YAMAHA::MaHvDrvJP_Generate(uchar *param_1)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  byte bVar20;
  byte bVar21;
  uint uVar22;
  
  if (param_1 == (uchar *)0x0) {
    return 0xfffffffe;
  }
  if (DAT_0057e810 != 2) {
    if (DAT_0057e810 != 1) {
      return 0xffffffff;
    }
LAB_0022578c:
    *param_1 = '\0';
    return 1;
  }
  if (DAT_0057f360 == (long *)0x0) {
    return 0xfffffffb;
  }
  if (DAT_0057e814 == 1) goto LAB_0022578c;
  if ((DAT_0057f259 == '\x01') && (DAT_0057e830 <= DAT_0057e81c)) {
    DAT_0057e830 = 0;
    DAT_0057e834 = 0;
    DAT_0057e838 = 0;
    DAT_0057e83a = 0;
    DAT_0057e83b = 0;
    DAT_0057ec44 = 0;
    DAT_0057f050 = 0;
    DAT_0057e810 = 1;
    DAT_0057f258 = DAT_0057f259;
    DAT_0057f25c = 0;
    DAT_0057f260 = 0;
    DAT_0057f26c = 0;
    DAT_0057e814 = DAT_0057e810;
    *param_1 = '\0';
    return 1;
  }
  if (DAT_0057e81c < DAT_0057e834) {
    *param_1 = '\0';
    DAT_0057e81c = DAT_0057e81c + 1;
    return 1;
  }
  uVar9 = DAT_0057e81c - DAT_0057e834;
  if (DAT_0057f25c < 6) {
    lVar12 = 0;
    if (DAT_0057f25c != 5) goto LAB_00225880;
    if (3 < DAT_0057e820) goto LAB_0022580c;
    if (DAT_0057f378 != 0) goto LAB_00225894;
    bVar1 = true;
    lVar12 = 0;
LAB_00225b4c:
    if ((DAT_0057e814 & 0xfffffffd) == 0) {
LAB_00226180:
      lVar19 = 0x21;
      lVar18 = 0x20;
      uVar17 = 8;
      *param_1 = DAT_0057f3a4;
      param_1[1] = DAT_0057f3a5 | 0x20;
      param_1[2] = DAT_0057f3a6;
      param_1[3] = DAT_0057f3a7 | 0x20;
      param_1[4] = DAT_0057f3a8;
      param_1[5] = DAT_0057f3a9 | 0x20;
      param_1[6] = DAT_0057f3aa;
      param_1[7] = DAT_0057f3ab | 0x20;
    }
    else {
      lVar19 = 0x19;
      lVar18 = 0x18;
      uVar17 = 0;
    }
    if (DAT_0057f378 == 0) goto LAB_0022615c;
    if (DAT_0057e83a == 0x7f) {
      iVar10 = -0x80;
    }
    else {
      iVar10 = 0;
      if (DAT_0057f3b1 == '\0') {
        iVar10 = 0;
        if (DAT_0057e83b != 0) {
          uVar13 = (uint)DAT_0057f2f1;
          iVar10 = 0;
          if ((int)(uint)DAT_0057f2f1 < (int)(DAT_0057e83b - 1)) {
            iVar6 = (int)(short)(&DAT_0057e840)[(long)(int)uVar13 * 4];
            iVar15 = (&DAT_0057e83c)[(long)(int)(uVar13 + 1) * 2] -
                     (&DAT_0057e83c)[(long)(int)uVar13 * 2];
            if (0 < iVar15) {
              iVar10 = 0;
              if (iVar15 != 0) {
                iVar10 = (int)((uVar9 - (&DAT_0057e83c)[(long)(int)uVar13 * 2]) *
                              ((short)(&DAT_0057e840)[(long)(int)(uVar13 + 1) * 4] - iVar6)) /
                         iVar15;
              }
            }
          }
          else {
            iVar6 = (int)(short)(&DAT_0057e840)[(long)(int)uVar13 * 4];
          }
          iVar10 = iVar10 + iVar6;
          if (iVar10 < -0x80) {
            iVar10 = -0x80;
          }
          if (0x2a < iVar10) {
            iVar10 = 0x2a;
          }
          iVar10 = iVar10 - (uint)DAT_0057e83a;
        }
      }
    }
    uVar13 = (uint)((*(byte *)(DAT_0057f378 + (ulong)(DAT_0057e824 * 0x1a)) & 0x7f) * 0x80 +
                    (*(byte *)(DAT_0057f378 + (ulong)(DAT_0057e824 * 0x1a) + 1) & 0x7f) == 0x3fff);
  }
  else {
    lVar12 = 0;
    if (DAT_0057f25c - 2U <= DAT_0057e820) {
LAB_0022580c:
      lVar12 = 0;
      if (((DAT_0057f260 == '\x02') && (DAT_0057f264 != 0)) && (DAT_0057f268 != 0)) {
        lVar12 = *DAT_0057f360;
        uVar17 = DAT_0057f268;
        if ((*(byte *)(lVar12 + (ulong)DAT_0057f268 + 1) & 0x7f) +
            (*(byte *)(lVar12 + (ulong)DAT_0057f268) & 0x7f) * 0x80 == 0) {
          uVar17 = DAT_0057f268 +
                   ((*(byte *)(lVar12 + (ulong)(DAT_0057f268 + 4) + 1) & 0x7f) +
                   (*(byte *)(lVar12 + (ulong)(DAT_0057f268 + 4)) & 0x7f) * 0x80) * 0x1a;
        }
        lVar12 = lVar12 + (ulong)(uVar17 + 10);
      }
    }
LAB_00225880:
    if (DAT_0057f378 != 0) {
      if (DAT_0057f25c == 1) {
        DAT_0057e824 = DAT_0057f36a - 1;
      }
      else {
LAB_00225894:
        if ((DAT_0057e824 != 0) && (DAT_0057f25c < (int)(uint)DAT_0057f36a)) {
          uVar17 = DAT_0057f36a - DAT_0057e824;
          uVar13 = DAT_0057f25c - DAT_0057e820;
          if (uVar13 - 2 < 0x7f) {
            uVar5 = uVar17 * *(int *)(&DAT_004a92f0 + (ulong)(uVar13 - 1) * 4) >> 0xf;
          }
          else {
            uVar5 = uVar17;
            if (uVar13 != 1) {
              if (uVar13 < 0x81) {
                uVar5 = 0;
              }
              else {
                uVar5 = 0;
                if (uVar13 != 0) {
                  uVar5 = uVar17 / uVar13;
                }
              }
            }
          }
          if (0 < (int)(uVar5 - DAT_0057e828)) {
            DAT_0057e824 = DAT_0057e824 + (uVar5 - DAT_0057e828);
          }
        }
      }
      bVar1 = DAT_0057e824 < DAT_0057f36a;
      if (!bVar1) {
        DAT_0057e824 = DAT_0057f36a - 1;
      }
      uVar13 = (uint)DAT_0057f2f0;
      uVar17 = uVar13 + 1;
      if ((uVar17 < DAT_0057ec44) && ((uint)(&DAT_0057ec48)[(ulong)uVar17 * 2] <= uVar9)) {
        uVar5 = ~uVar17 + (uint)DAT_0057ec44 & 3;
        if (uVar5 == 0) {
LAB_00225a08:
          do {
            uVar13 = uVar17 + 1;
            uVar5 = uVar17 + 3;
            uVar22 = uVar17 + 2;
            DAT_0057f2f0 = (byte)uVar17;
            uVar17 = uVar17 + 4;
            if ((((DAT_0057ec44 <= uVar13) || (uVar9 < (uint)(&DAT_0057ec48)[(ulong)uVar13 * 2])) ||
                (DAT_0057f2f0 = (byte)uVar13, uVar9 < (uint)(&DAT_0057ec48)[(ulong)uVar22 * 2])) ||
               (DAT_0057f2f0 = (byte)uVar22, uVar9 < (uint)(&DAT_0057ec48)[(ulong)uVar5 * 2]))
            break;
            uVar13 = (&DAT_0057ec48)[(ulong)uVar17 * 2];
            DAT_0057f2f0 = (byte)uVar5;
joined_r0x00225958:
          } while (uVar13 <= uVar9);
        }
        else {
          DAT_0057f2f0 = (byte)uVar17;
          uVar17 = uVar13 + 2;
          if ((uVar17 < DAT_0057ec44) && ((uint)(&DAT_0057ec48)[(ulong)uVar17 * 2] <= uVar9)) {
            if (uVar5 == 1) goto LAB_00225a08;
            if (uVar5 == 2) {
LAB_00225944:
              DAT_0057f2f0 = (byte)uVar17;
              uVar17 = uVar17 + 1;
              uVar13 = (&DAT_0057ec48)[(ulong)uVar17 * 2];
              goto joined_r0x00225958;
            }
            DAT_0057f2f0 = (byte)uVar17;
            uVar17 = uVar13 + 3;
            if ((uint)(&DAT_0057ec48)[(ulong)uVar17 * 2] <= uVar9) goto LAB_00225944;
          }
        }
      }
      uVar13 = (uint)DAT_0057f2f1;
      uVar17 = uVar13 + 1;
      if ((uVar17 < DAT_0057e83b) && ((uint)(&DAT_0057e83c)[(ulong)uVar17 * 2] <= uVar9)) {
        uVar5 = ~uVar17 + (uint)DAT_0057e83b & 3;
        if (uVar5 == 0) {
LAB_00225b18:
          do {
            uVar13 = uVar17 + 1;
            uVar5 = uVar17 + 3;
            uVar22 = uVar17 + 2;
            DAT_0057f2f1 = (byte)uVar17;
            uVar17 = uVar17 + 4;
            if ((((DAT_0057e83b <= uVar13) || (uVar9 < (uint)(&DAT_0057e83c)[(ulong)uVar13 * 2])) ||
                (DAT_0057f2f1 = (byte)uVar13, uVar9 < (uint)(&DAT_0057e83c)[(ulong)uVar22 * 2])) ||
               (DAT_0057f2f1 = (byte)uVar22, uVar9 < (uint)(&DAT_0057e83c)[(ulong)uVar5 * 2]))
            break;
            uVar13 = (&DAT_0057e83c)[(ulong)uVar17 * 2];
            DAT_0057f2f1 = (byte)uVar5;
joined_r0x00225ad0:
          } while (uVar13 <= uVar9);
        }
        else {
          DAT_0057f2f1 = (byte)uVar17;
          uVar17 = uVar13 + 2;
          if ((uVar17 < DAT_0057e83b) && ((uint)(&DAT_0057e83c)[(ulong)uVar17 * 2] <= uVar9)) {
            if (uVar5 == 1) goto LAB_00225b18;
            if (uVar5 == 2) {
LAB_00225abc:
              DAT_0057f2f1 = (byte)uVar17;
              uVar17 = uVar17 + 1;
              uVar13 = (&DAT_0057e83c)[(ulong)uVar17 * 2];
              goto joined_r0x00225ad0;
            }
            DAT_0057f2f1 = (byte)uVar17;
            uVar17 = uVar13 + 3;
            if ((uint)(&DAT_0057e83c)[(ulong)uVar17 * 2] <= uVar9) goto LAB_00225abc;
          }
        }
      }
      goto LAB_00225b4c;
    }
    if ((DAT_0057e814 & 0xfffffffd) == 0) {
      bVar1 = true;
      goto LAB_00226180;
    }
    lVar19 = 0x19;
    lVar18 = 0x18;
    uVar17 = 0;
    bVar1 = true;
LAB_0022615c:
    iVar10 = -0x80;
    uVar13 = 0;
  }
  bVar3 = lVar12 != 0;
  puVar14 = &DAT_0057e810;
  iVar15 = 0;
  lVar11 = 0;
  do {
    uVar5 = 0x7f;
    iVar6 = iVar15 + DAT_0057e824 * 0x1a;
    if ((-0x80 < iVar10) && ((short)(&DAT_0057f394)[lVar11] != -0x8000)) {
      bVar21 = *(byte *)(DAT_0057f378 + (ulong)(iVar6 + 2));
      uVar5 = (uint)bVar21;
      if (bVar3 != 0) {
        if ((DAT_0057e820 == DAT_0057f25c - 2U) || (DAT_0057f25c == 5)) {
          uVar5 = (int)(((uint)bVar21 * 8 - uVar5) + (uint)*(byte *)(lVar12 + 2)) >> 3;
        }
        else {
          uVar5 = (int)((uint)bVar21 * 3 + (uint)*(byte *)(lVar12 + 2)) >> 2;
        }
      }
      if (uVar5 != 0x7f) {
        uVar22 = ((uVar5 + uVar13 * 8) - (int)(short)(&DAT_0057f394)[lVar11]) - iVar10;
        if (*(char *)((long)puVar14 + 0xca9) == '\x01') {
          uVar22 = uVar22 + (int)(char)(&PTR_DAT_0057f4d0)[lVar11][DAT_0057e82c];
        }
        uVar5 = 0x7f;
        if ((int)uVar22 < 0x80) {
          if ((int)uVar22 < 0) {
            uVar22 = 0;
          }
          uVar5 = uVar22 & 0xff;
        }
      }
    }
    param_1[uVar17] = (uchar)uVar5;
    if (DAT_0057f378 == 0) {
      bVar21 = 0;
      bVar20 = 0;
    }
    else {
      uVar7 = (ulong)(iVar6 + 3);
      iVar6 = (*(byte *)(DAT_0057f378 + uVar7 + 1) & 0x7f) +
              (*(byte *)(DAT_0057f378 + uVar7) & 0x7f) * 0x80;
      if (((uint)bVar3 & (uVar13 ^ 1)) != 0) {
        if ((DAT_0057e820 == DAT_0057f25c - 2U) || (DAT_0057f25c == 5)) {
          iVar6 = (int)((*(byte *)(lVar12 + 3) & 0x7f) * 0x80 + (*(byte *)(lVar12 + 4) & 0x7f) +
                       iVar6 * 7) >> 3;
        }
        else {
          iVar6 = (int)((*(byte *)(lVar12 + 3) & 0x7f) * 0x80 + (*(byte *)(lVar12 + 4) & 0x7f) +
                       iVar6 * 3) >> 2;
        }
      }
      uVar5 = (short)(&DAT_0057f384)[lVar11] + iVar6;
      if (*(char *)((long)puVar14 + 0xcb1) == '\x01') {
        uVar5 = uVar5 + (int)*(short *)((&PTR_DAT_0057f510)[lVar11] + (ulong)DAT_0057e82c * 2);
      }
      if ((int)uVar5 < 0) {
        uVar5 = 0;
      }
      if (0x27d7 < (int)uVar5) {
        uVar5 = 0x27d7;
      }
      uVar22 = (int)((uVar5 >> 4) * 0x1b4) >> 0xf;
      iVar2 = uVar5 + uVar22 * -0x4b0;
      iVar6 = iVar2 * 0x148 >> 0xf;
      if (uVar22 == 8) {
        iVar4 = iVar6 + 0x18;
        uVar22 = 7;
        if (0x1d < iVar4) goto LAB_00225c0c;
        uVar5 = 7;
      }
      else {
        iVar4 = iVar6 + 0xc;
        if (0x1d < iVar4) {
LAB_00225c0c:
          iVar8 = iVar4 + -0xc;
          if (uVar22 < 7) {
            uVar22 = uVar22 + 1;
          }
          if (0x1d < iVar8) {
            iVar8 = iVar4 + -0x18;
            if (uVar22 < 7) {
              uVar22 = uVar22 + 1;
            }
            if (0x1d < iVar8) {
              iVar8 = iVar4 + -0x24;
              if (uVar22 < 7) {
                uVar22 = uVar22 + 1;
              }
              if (0x1d < iVar8) {
                iVar8 = iVar4 + -0x30;
                if (uVar22 < 7) {
                  uVar22 = uVar22 + 1;
                }
                if (0x1d < iVar8) {
                  iVar8 = iVar4 + -0x3c;
                  if (uVar22 < 7) {
                    uVar22 = uVar22 + 1;
                  }
                  if (0x1d < iVar8) {
                    iVar8 = iVar4 + -0x48;
                    if (uVar22 < 7) {
                      uVar22 = uVar22 + 1;
                    }
                    if (0x1d < iVar8) {
                      iVar8 = iVar4 + -0x54;
                      if (uVar22 < 7) {
                        uVar22 = uVar22 + 1;
                      }
                      if (0x1d < iVar8) {
                        iVar8 = iVar4 + -0x60;
                        if (uVar22 < 7) {
                          uVar22 = uVar22 + 1;
                        }
                        if ((iVar8 == 0x1e) && (iVar8 = 0x12, uVar22 < 7)) {
                          uVar22 = uVar22 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          uVar5 = 7;
          iVar4 = iVar8;
          if (uVar22 == 8) goto LAB_00225cc4;
        }
        uVar5 = uVar22;
      }
LAB_00225cc4:
      uVar22 = (int)*(short *)(&DAT_004a94f0 + (long)iVar4 * 2) +
               ((iVar2 + iVar6 * -100) *
                ((int)*(short *)(&DAT_004a94f0 + (long)(iVar4 + 1) * 2) -
                (int)*(short *)(&DAT_004a94f0 + (long)iVar4 * 2)) * 0x148 >> 0xf);
      if ((int)uVar22 < 0) {
        uVar22 = 0;
      }
      if (0x3ff < (int)uVar22) {
        uVar22 = 0x3ff;
      }
      bVar21 = (byte)uVar22 & 0x7f;
      bVar20 = (byte)((uVar5 & 7) << 3) | (byte)(uVar22 >> 7);
    }
    uVar5 = uVar17 + 2;
    lVar11 = lVar11 + 1;
    iVar15 = iVar15 + 3;
    lVar12 = lVar12 + 3;
    param_1[uVar17 + 1] = bVar20;
    uVar17 = uVar17 + 3;
    param_1[uVar5] = bVar21;
    puVar14 = (undefined4 *)((long)puVar14 + 1);
  } while (lVar11 != 8);
  if (uVar13 != 0) {
    param_1[lVar18] = '@';
    param_1[lVar19] = '\0';
    goto LAB_002260dc;
  }
  uVar17 = DAT_0057f3ac;
  if (DAT_0057f3b0 == '\x01') {
    if (DAT_0057ec44 == 0) {
      uVar17 = (uint)DAT_0057e838;
      if (DAT_0057f258 == '\0') {
        iVar10 = 0x2000;
        goto LAB_0022635c;
      }
      iVar10 = 0x2000;
      iVar15 = DAT_0057f382 + DAT_0057f2f8;
LAB_00226390:
      if (iVar10 < 0) {
        iVar10 = 0;
      }
      iVar6 = iVar10 + -0x2000;
    }
    else {
      lVar12 = (long)(int)(uint)DAT_0057f2f0;
      uVar17 = DAT_0057f2f0 + 1;
      if (uVar17 < DAT_0057ec44) {
        iVar6 = (int)(short)(&DAT_0057ec4c)[lVar12 * 4];
        iVar15 = (&DAT_0057ec48)[(long)(int)uVar17 * 2] - (&DAT_0057ec48)[lVar12 * 2];
        if (iVar15 < 1) {
          iVar10 = 0;
        }
        else {
          iVar10 = 0;
          if (iVar15 != 0) {
            iVar10 = (int)((uVar9 - (&DAT_0057ec48)[lVar12 * 2]) *
                          ((short)(&DAT_0057ec4c)[(long)(int)uVar17 * 4] - iVar6)) / iVar15;
          }
        }
      }
      else {
        iVar6 = (int)(short)(&DAT_0057ec4c)[lVar12 * 4];
        iVar10 = 0;
      }
      iVar10 = iVar10 + iVar6;
      uVar17 = (uint)DAT_0057e838;
      if (DAT_0057f258 == '\0') {
LAB_0022635c:
        if (DAT_0057e838 == -0x8000) {
          uVar17 = (uint)*(ushort *)((long)DAT_0057f360 + 0x14);
        }
        else {
          uVar17 = (int)((uint)(*(ushort *)((long)DAT_0057f360 + 0x14) >> 4) * 0x1b4) >> 0xf;
          iVar15 = (int)(((uint)*(ushort *)((long)DAT_0057f360 + 0x14) + uVar17 * -0x4b0) * 0x148)
                   >> 0xf;
          if (uVar17 < 8) {
            iVar15 = iVar15 + 0xc;
            if (0x1d < iVar15) goto LAB_002265e8;
LAB_002266ec:
            if (7 < uVar17) {
              uVar17 = 7;
            }
          }
          else {
            iVar15 = iVar15 + 0x18;
            uVar17 = 7;
            if (0x1d < iVar15) {
LAB_002265e8:
              iVar6 = iVar15 + -0xc;
              if (uVar17 < 7) {
                uVar17 = uVar17 + 1;
              }
              uVar13 = (iVar15 - 0x1eU) / 0xc & 7;
              if (0x1d < iVar6) {
                if (uVar13 != 0) {
                  if (uVar13 != 1) {
                    if (uVar13 != 2) {
                      if (uVar13 != 3) {
                        if (uVar13 != 4) {
                          if (uVar13 != 5) {
                            if ((uVar13 != 6) && (iVar6 = iVar15 + -0x18, uVar17 < 7)) {
                              uVar17 = uVar17 + 1;
                            }
                            iVar6 = iVar6 + -0xc;
                            if (uVar17 < 7) {
                              uVar17 = uVar17 + 1;
                            }
                          }
                          iVar6 = iVar6 + -0xc;
                          if (uVar17 < 7) {
                            uVar17 = uVar17 + 1;
                          }
                        }
                        iVar6 = iVar6 + -0xc;
                        if (uVar17 < 7) {
                          uVar17 = uVar17 + 1;
                        }
                      }
                      iVar6 = iVar6 + -0xc;
                      if (uVar17 < 7) {
                        uVar17 = uVar17 + 1;
                      }
                    }
                    iVar6 = iVar6 + -0xc;
                    if (uVar17 < 7) {
                      uVar17 = uVar17 + 1;
                    }
                  }
                  iVar6 = iVar6 + -0xc;
                  if (uVar17 < 7) {
                    uVar17 = uVar17 + 1;
                  }
                  if (iVar6 < 0x1e) goto LAB_002266ec;
                }
                do {
                  iVar6 = iVar6 + -0x60;
                  if (uVar17 < 7) {
                    uVar17 = uVar17 + 1;
                  }
                  if (uVar17 < 7) {
                    uVar17 = uVar17 + 1;
                  }
                  if (uVar17 < 7) {
                    uVar17 = uVar17 + 1;
                  }
                  if (uVar17 < 7) {
                    uVar17 = uVar17 + 1;
                  }
                  if (uVar17 < 7) {
                    uVar17 = uVar17 + 1;
                  }
                  if (uVar17 < 7) {
                    uVar17 = uVar17 + 1;
                  }
                  if (uVar17 < 7) {
                    uVar17 = uVar17 + 1;
                  }
                  if (uVar17 < 7) {
                    uVar17 = uVar17 + 1;
                  }
                } while (0x1d < iVar6);
              }
              goto LAB_002266ec;
            }
          }
          uVar17 = (int)DAT_0057e838 + uVar17 * 0x4b0;
        }
      }
      iVar6 = 0x1fff;
      iVar15 = DAT_0057f382 + DAT_0057f2f8;
      if (iVar10 < 0x4000) goto LAB_00226390;
    }
    iVar6 = DAT_0057f2fc * iVar6;
    if (iVar6 < 0) {
      iVar6 = -(-iVar6 >> 0xd);
      if (iVar6 < -6000) {
        iVar6 = -6000;
      }
      if (6000 < iVar6) {
        iVar6 = 6000;
      }
    }
    else {
      iVar6 = iVar6 >> 0xd;
      if (6000 < iVar6) {
        iVar6 = 6000;
      }
    }
    uVar17 = uVar17 + iVar15 + iVar6;
    if (!bVar1) {
      uVar17 = uVar17 + (int)*(short *)(&DAT_004a9530 + (long)(int)(DAT_0057e81c & 0x7f) * 2);
    }
    if (DAT_0057f552 < DAT_0057f050) {
      uVar5 = (uint)DAT_0057f552;
      uVar13 = (&DAT_0057f054)[(int)uVar5];
      while (uVar13 <= uVar9) {
        uVar13 = uVar5 + 1;
        uVar5 = uVar13 & 0xff;
        DAT_0057f553 = DAT_0057f553 != '\x01';
        DAT_0057f552 = (byte)uVar13;
        if (uVar5 == DAT_0057f050) break;
        uVar13 = (&DAT_0057f054)[(int)uVar5];
      }
    }
    if (DAT_0057f553 == '\0') {
      iVar10 = (int)(short)DAT_0057f550;
      if (DAT_0057f550 < 0x11) {
        DAT_0057f550 = DAT_0057f550 + 1;
      }
      else {
        DAT_0057f550 = 1;
        iVar10 = 0;
      }
      uVar17 = uVar17 + (int)(short)(&DAT_004a9630)[iVar10];
    }
    else {
      DAT_0057f550 = 0;
    }
  }
  if ((int)uVar17 < 0) {
    uVar17 = 0;
  }
  if (0x3fff < (int)uVar17) {
    uVar17 = 0x3fff;
  }
  uVar9 = (int)((uVar17 >> 4) * 0x1b4) >> 0xf;
  iVar15 = uVar17 + uVar9 * -0x4b0;
  iVar10 = iVar15 * 0x148 >> 0xf;
  if ((int)uVar9 < 8) {
    iVar6 = iVar10 + 0xc;
    iVar2 = iVar6;
    if (0x1d < iVar6) goto LAB_00225f70;
LAB_00226080:
    iVar6 = iVar2;
    if (7 < uVar9) {
      uVar9 = 7;
    }
    bVar21 = (byte)((uVar9 & 7) << 3);
  }
  else {
    iVar6 = iVar10 + 0x18;
    uVar9 = 7;
    if (0x1d < iVar6) {
LAB_00225f70:
      if (uVar9 < 7) {
        uVar9 = uVar9 + 1;
      }
      iVar2 = iVar6 + -0xc;
      if (0x1d < iVar6 + -0xc) {
        if (uVar9 < 7) {
          uVar9 = uVar9 + 1;
        }
        iVar2 = iVar6 + -0x18;
        if (0x1d < iVar6 + -0x18) {
          if (uVar9 < 7) {
            uVar9 = uVar9 + 1;
          }
          iVar2 = iVar6 + -0x24;
          if (0x1d < iVar6 + -0x24) {
            if (uVar9 < 7) {
              uVar9 = uVar9 + 1;
            }
            iVar2 = iVar6 + -0x30;
            if (0x1d < iVar6 + -0x30) {
              if (uVar9 < 7) {
                uVar9 = uVar9 + 1;
              }
              iVar2 = iVar6 + -0x3c;
              if (0x1d < iVar6 + -0x3c) {
                if (uVar9 < 7) {
                  uVar9 = uVar9 + 1;
                }
                iVar2 = iVar6 + -0x48;
                if (0x1d < iVar6 + -0x48) {
                  if (uVar9 < 7) {
                    uVar9 = uVar9 + 1;
                  }
                  iVar2 = iVar6 + -0x54;
                  if (0x1d < iVar6 + -0x54) {
                    if (uVar9 < 7) {
                      uVar9 = uVar9 + 1;
                    }
                    iVar2 = iVar6 + -0x60;
                    if (0x1d < iVar6 + -0x60) {
                      if (uVar9 < 7) {
                        uVar9 = uVar9 + 1;
                      }
                      iVar2 = iVar6 + -0x6c;
                      if (0x1d < iVar6 + -0x6c) {
                        if (uVar9 < 7) {
                          uVar9 = uVar9 + 1;
                        }
                        iVar2 = iVar6 + -0x78;
                        if (0x1d < iVar6 + -0x78) {
                          if (uVar9 < 7) {
                            uVar9 = uVar9 + 1;
                          }
                          iVar2 = iVar6 + -0x84;
                          if (0x1d < iVar6 + -0x84) {
                            if (uVar9 < 7) {
                              uVar9 = uVar9 + 1;
                            }
                            iVar2 = iVar6 + -0x90;
                            if (0x1d < iVar6 + -0x90) {
                              if (uVar9 < 7) {
                                uVar9 = uVar9 + 1;
                              }
                              iVar2 = iVar6 + -0x9c;
                              if ((0x1d < iVar6 + -0x9c) && (iVar2 = iVar6 + -0xa8, uVar9 < 7)) {
                                uVar9 = uVar9 + 1;
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
      goto LAB_00226080;
    }
    bVar21 = 0x38;
  }
  uVar9 = (int)*(short *)(&DAT_004a94f0 + (long)iVar6 * 2) +
          ((iVar15 + iVar10 * -100) *
           ((int)*(short *)(&DAT_004a94f0 + (long)(iVar6 + 1) * 2) -
           (int)*(short *)(&DAT_004a94f0 + (long)iVar6 * 2)) * 0x148 >> 0xf);
  if ((int)uVar9 < 0) {
    uVar9 = 0;
  }
  if (0x3ff < (int)uVar9) {
    uVar9 = 0x3ff;
  }
  param_1[lVar18] = bVar21 | (byte)(uVar9 >> 7);
  param_1[lVar19] = (byte)uVar9 & 0x7f;
LAB_002260dc:
  DAT_0057e82c = DAT_0057e82c + 1;
  DAT_0057e81c = DAT_0057e81c + 1;
  DAT_0057e820 = DAT_0057e820 + 1;
  DAT_0057e824 = DAT_0057e828 + DAT_0057e824;
  if (0x17 < DAT_0057e82c) {
    DAT_0057e82c = 0;
  }
  if (DAT_0057e814 == 0) {
    param_1[0x22] = '\0';
    uVar16 = 0x24;
    param_1[0x23] = '@';
    DAT_0057e814 = 3;
  }
  else {
    uVar16 = 0x1a;
    if (DAT_0057e814 == 2) {
      uVar16 = 0x22;
      DAT_0057e814 = 3;
    }
  }
  return uVar16;
}

