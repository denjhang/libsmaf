/* MaHvDrvKR_Generate @ 0022faa0 5200B */


/* YAMAHA::MaHvDrvKR_Generate(unsigned char*) */

undefined8 YAMAHA::MaHvDrvKR_Generate(uchar *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uchar *puVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  byte bVar18;
  byte bVar19;
  uint uVar20;
  long lVar21;
  uint uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  
  if (param_1 == (uchar *)0x0) {
    return 0xfffffffe;
  }
  if (DAT_005802a8 != 2) {
    if (DAT_005802a8 != 1) {
      return 0xffffffff;
    }
LAB_0022fad8:
    *param_1 = '\0';
    return 1;
  }
  if (DAT_00580e50 == (long *)0x0) {
    return 0xfffffffb;
  }
  if (DAT_005802ac == 1) goto LAB_0022fad8;
  if ((DAT_00580cf1 == '\x01') && (DAT_005802c8 <= DAT_005802b4)) {
    DAT_005802c8 = 0;
    DAT_005802cc = 0;
    DAT_005802d0 = 0;
    DAT_005802d2 = 0;
    DAT_005802d3 = 0;
    DAT_005806dc = 0;
    DAT_00580ae8 = 0;
    DAT_005802a8 = 1;
    DAT_00580cf0 = DAT_00580cf1;
    DAT_00580cf4 = 0;
    DAT_00580cf8 = 0;
    DAT_00580d14 = 0;
    DAT_005802ac = DAT_005802a8;
    *param_1 = '\0';
    return 1;
  }
  if (DAT_005802b4 < DAT_005802cc) {
    *param_1 = '\0';
    DAT_005802b4 = DAT_005802b4 + 1;
    return 1;
  }
  uVar7 = DAT_005802b4 - DAT_005802cc;
  uVar17 = (&DAT_00580d00)[(long)(int)(uint)DAT_00580d98 * 2];
  if ((uVar17 <= DAT_005802b8) && (DAT_00580d98 == 0)) {
    DAT_00580d98 = 1;
    if (DAT_00580d04 == 0) {
      DAT_00580e68 = 0;
    }
    else {
      lVar11 = *DAT_00580e50;
      DAT_00580e58 = (*(byte *)(lVar11 + (ulong)DAT_00580d04 + 1) & 0x7f) +
                     (*(byte *)(lVar11 + (ulong)DAT_00580d04) & 0x7f) * 0x80;
      DAT_00580e68 = lVar11 + (ulong)(DAT_00580d04 + 10);
      DAT_00580e5a = (*(byte *)(lVar11 + (ulong)(DAT_00580d04 + 2) + 1) & 0x7f) +
                     (*(byte *)(lVar11 + (ulong)(DAT_00580d04 + 2)) & 0x7f) * 0x80;
      DAT_005802bc = (*(byte *)(lVar11 + (ulong)(DAT_00580d04 + 4) + 1) & 0x7f) +
                     (*(byte *)(lVar11 + (ulong)(DAT_00580d04 + 4)) & 0x7f) * 0x80;
      DAT_00580e5c = (undefined2)DAT_005802bc;
      if (DAT_00580e58 != 0) {
        DAT_005802bc = 0;
      }
      DAT_00580e5e = (*(byte *)(lVar11 + (ulong)(DAT_00580d04 + 6) + 1) & 0x7f) +
                     (*(byte *)(lVar11 + (ulong)(DAT_00580d04 + 6)) & 0x7f) * 0x80;
      DAT_00580e60 = (*(byte *)(lVar11 + (ulong)(DAT_00580d04 + 8) + 1) & 0x7f) +
                     (*(byte *)(lVar11 + (ulong)(DAT_00580d04 + 8)) & 0x7f) * 0x80;
    }
    DAT_005802b8 = 0;
    uVar17 = DAT_00580d08;
  }
  if (DAT_00580e68 == 0) {
    lVar11 = 0;
    if ((DAT_005802ac & 0xfffffffd) == 0) {
      uVar22 = 1;
      goto LAB_002305b0;
    }
    lVar24 = 0x18;
    lVar26 = 0x19;
    iVar10 = 0;
    uVar22 = 1;
LAB_00230624:
    lVar21 = 0;
    iVar16 = -0x80;
    uVar4 = 0;
  }
  else {
    uVar22 = uVar17;
    if (DAT_00580d0c == 0) {
LAB_0022fc64:
      lVar11 = 0;
LAB_0022fc68:
      if (DAT_00580e58 == 2) {
        if ((int)(uint)DAT_00580e5a < (int)uVar17) {
LAB_0022fbc0:
          if ((int)uVar17 < (int)(DAT_00580e5a + DAT_005802b8)) goto LAB_0023088c;
          DAT_005802bc = 0;
          if (uVar17 != 1) {
            uVar22 = 0;
            goto LAB_0022fc98;
          }
          uVar22 = 0;
        }
        else {
LAB_0023088c:
          if (uVar17 != 1) goto LAB_00230898;
        }
        DAT_005802bc = DAT_00580e5a - 1;
      }
      else {
        if (uVar17 != 1) {
LAB_0022fc80:
          if ((DAT_005802bc != 0) && ((int)uVar17 < (int)(uint)DAT_00580e5a)) {
            uVar22 = uVar17 - DAT_005802b8;
            uVar4 = (DAT_00580e5a - DAT_005802bc) - DAT_005802c0;
            if (uVar22 - 2 < 0x7f) {
              uVar5 = uVar4 * *(int *)(&DAT_0052da30 + (ulong)(uVar22 - 1) * 4) >> 0xf;
            }
            else {
              uVar5 = uVar4;
              if (uVar22 != 1) {
                if (uVar22 < 0x81) {
                  uVar5 = 0;
                }
                else {
                  uVar5 = 0;
                  if (uVar22 != 0) {
                    uVar5 = uVar4 / uVar22;
                  }
                }
              }
            }
            if (0 < (int)(uVar5 - DAT_005802c0)) {
              DAT_005802bc = DAT_005802bc + (uVar5 - DAT_005802c0);
              uVar22 = 1;
              goto LAB_0022fc98;
            }
          }
          goto LAB_0022fc90;
        }
        DAT_005802bc = DAT_00580e5a - 1;
      }
    }
    else {
      if (5 < (int)uVar17) {
        if (DAT_005802b8 + 2 < uVar17) goto LAB_0022fc64;
LAB_00230738:
        lVar11 = *DAT_00580e50;
        uVar4 = DAT_00580d0c;
        if ((*(byte *)(lVar11 + (ulong)DAT_00580d0c + 1) & 0x7f) +
            (*(byte *)(lVar11 + (ulong)DAT_00580d0c) & 0x7f) * 0x80 == 0) {
          uVar4 = DAT_00580d0c +
                  ((*(byte *)(lVar11 + (ulong)(DAT_00580d0c + 4) + 1) & 0x7f) +
                  (*(byte *)(lVar11 + (ulong)(DAT_00580d0c + 4)) & 0x7f) * 0x80) * 0x1a;
        }
        lVar11 = lVar11 + (ulong)(uVar4 + 10);
        goto LAB_0022fc68;
      }
      lVar11 = 0;
      if (uVar17 != 5) goto LAB_0022fc68;
      if (4 < DAT_005802b8 + 1) goto LAB_00230738;
      if (DAT_00580e58 != 2) goto LAB_0022fc80;
      if (DAT_00580e5a < 5) goto LAB_0022fbc0;
LAB_00230898:
      if (((int)uVar17 < (int)(uint)DAT_00580e5a) && (DAT_005802bc != 0)) {
        uVar22 = uVar17 - DAT_005802b8;
        uVar4 = (DAT_00580e5a - DAT_005802bc) - DAT_005802c0;
        if (uVar22 - 2 < 0x7f) {
          uVar5 = uVar4 * *(int *)(&DAT_0052da30 + (ulong)(uVar22 - 1) * 4) >> 0xf;
LAB_002308e0:
          if ((int)uVar5 < 1) {
            uVar5 = 1;
          }
        }
        else {
          uVar5 = uVar4;
          if (uVar22 == 1) goto LAB_002308e0;
          uVar5 = 1;
          if (0x80 < uVar22) {
            uVar5 = 0;
            if (uVar22 != 0) {
              uVar5 = uVar4 / uVar22;
            }
            goto LAB_002308e0;
          }
        }
        DAT_005802bc = DAT_005802bc + uVar5;
        uVar22 = 1;
      }
      else {
LAB_0022fc90:
        uVar22 = 1;
      }
    }
LAB_0022fc98:
    if (DAT_00580e5a <= DAT_005802bc) {
      DAT_005802bc = DAT_00580e5a - 1;
      uVar22 = 0;
    }
    uVar5 = (uint)DAT_00580d99;
    uVar4 = uVar5 + 1;
    if ((uVar4 < DAT_005806dc) && ((uint)(&DAT_005806e0)[(long)(int)uVar4 * 2] <= uVar7)) {
      uVar20 = ~uVar4 + (uint)DAT_005806dc & 3;
      if (uVar20 == 0) {
LAB_0022fd40:
        do {
          uVar5 = uVar4 + 1;
          iVar10 = uVar4 + 3;
          iVar16 = uVar4 + 2;
          DAT_00580d99 = (byte)uVar4;
          uVar4 = uVar4 + 4;
          if ((((uVar5 == DAT_005806dc) || (uVar7 < (uint)(&DAT_005806e0)[(long)(int)uVar5 * 2])) ||
              (DAT_00580d99 = (byte)uVar5, uVar7 < (uint)(&DAT_005806e0)[(long)iVar16 * 2])) ||
             (DAT_00580d99 = (byte)iVar16, uVar7 < (uint)(&DAT_005806e0)[(long)iVar10 * 2])) break;
          uVar5 = (&DAT_005806e0)[(long)(int)uVar4 * 2];
          DAT_00580d99 = (byte)iVar10;
joined_r0x0022fd3c:
        } while (uVar5 <= uVar7);
      }
      else {
        DAT_00580d99 = (byte)uVar4;
        uVar4 = uVar5 + 2;
        if ((uint)(&DAT_005806e0)[(long)(int)uVar4 * 2] <= uVar7) {
          if (uVar20 == 1) goto LAB_0022fd40;
          if (uVar20 == 2) {
LAB_0022fd28:
            DAT_00580d99 = (byte)uVar4;
            uVar4 = uVar4 + 1;
            uVar5 = (&DAT_005806e0)[(long)(int)uVar4 * 2];
            goto joined_r0x0022fd3c;
          }
          DAT_00580d99 = (byte)uVar4;
          uVar4 = uVar5 + 3;
          if ((uint)(&DAT_005806e0)[(long)(int)uVar4 * 2] <= uVar7) goto LAB_0022fd28;
        }
      }
    }
    uVar5 = (uint)DAT_00580d9a;
    uVar4 = uVar5 + 1;
    if ((uVar4 < DAT_005802d3) && ((uint)(&DAT_005802d4)[(long)(int)uVar4 * 2] <= uVar7)) {
      uVar20 = ~uVar4 + (uint)DAT_005802d3 & 3;
      if (uVar20 == 0) {
LAB_0022fe3c:
        do {
          uVar5 = uVar4 + 1;
          iVar10 = uVar4 + 3;
          iVar16 = uVar4 + 2;
          DAT_00580d9a = (byte)uVar4;
          uVar4 = uVar4 + 4;
          if (((uVar5 == DAT_005802d3) || (uVar7 < (uint)(&DAT_005802d4)[(long)(int)uVar5 * 2])) ||
             ((DAT_00580d9a = (byte)uVar5, uVar7 < (uint)(&DAT_005802d4)[(long)iVar16 * 2] ||
              (DAT_00580d9a = (byte)iVar16, uVar7 < (uint)(&DAT_005802d4)[(long)iVar10 * 2]))))
          break;
          uVar5 = (&DAT_005802d4)[(long)(int)uVar4 * 2];
          DAT_00580d9a = (byte)iVar10;
joined_r0x0022fe38:
        } while (uVar5 <= uVar7);
      }
      else {
        DAT_00580d9a = (byte)uVar4;
        uVar4 = uVar5 + 2;
        if ((uint)(&DAT_005802d4)[(long)(int)uVar4 * 2] <= uVar7) {
          if (uVar20 == 1) goto LAB_0022fe3c;
          if (uVar20 == 2) {
LAB_0022fe24:
            DAT_00580d9a = (byte)uVar4;
            uVar4 = uVar4 + 1;
            uVar5 = (&DAT_005802d4)[(long)(int)uVar4 * 2];
            goto joined_r0x0022fe38;
          }
          DAT_00580d9a = (byte)uVar4;
          uVar4 = uVar5 + 3;
          if ((uint)(&DAT_005802d4)[(long)(int)uVar4 * 2] <= uVar7) goto LAB_0022fe24;
        }
      }
    }
    if ((DAT_005802ac & 0xfffffffd) == 0) {
LAB_002305b0:
      lVar25 = 0x21;
      lVar23 = 0x20;
      iVar10 = 8;
      lVar26 = 0x21;
      *param_1 = DAT_00580e94;
      lVar24 = 0x20;
      param_1[1] = DAT_00580e95 | 0x20;
      param_1[2] = DAT_00580e96;
      param_1[3] = DAT_00580e97 | 0x20;
      param_1[4] = DAT_00580e98;
      param_1[5] = DAT_00580e99 | 0x20;
      param_1[6] = DAT_00580e9a;
      param_1[7] = DAT_00580e9b | 0x20;
      if (DAT_00580e68 == 0) goto LAB_00230624;
    }
    else {
      iVar10 = 0;
      lVar25 = 0x19;
      lVar23 = 0x18;
    }
    if (DAT_005802d2 == 0x7f) {
      iVar16 = -0x80;
    }
    else {
      iVar16 = 0;
      if (DAT_00580ea1 == '\0') {
        iVar16 = 0;
        if (DAT_005802d3 != 0) {
          lVar24 = (long)(int)(uint)DAT_00580d9a;
          uVar4 = DAT_00580d9a + 1;
          iVar16 = 0;
          if (uVar4 < DAT_005802d3) {
            iVar6 = (int)(short)(&DAT_005802d8)[lVar24 * 4];
            iVar15 = (&DAT_005802d4)[(long)(int)uVar4 * 2] - (&DAT_005802d4)[lVar24 * 2];
            if (0 < iVar15) {
              iVar16 = 0;
              if (iVar15 != 0) {
                iVar16 = (int)((uVar7 - (&DAT_005802d4)[lVar24 * 2]) *
                              ((short)(&DAT_005802d8)[(long)(int)uVar4 * 4] - iVar6)) / iVar15;
              }
            }
          }
          else {
            iVar6 = (int)(short)(&DAT_005802d8)[lVar24 * 4];
          }
          iVar16 = iVar16 + iVar6;
          if (iVar16 < -0x80) {
            iVar16 = -0x80;
          }
          if (0x2a < iVar16) {
            iVar16 = 0x2a;
          }
          iVar16 = iVar16 - (uint)DAT_005802d2;
        }
      }
    }
    uVar4 = (uint)((*(byte *)(DAT_00580e68 + (ulong)(DAT_005802bc * 0x1a) + 1) & 0x7f) +
                   (*(byte *)(DAT_00580e68 + (ulong)(DAT_005802bc * 0x1a)) & 0x7f) * 0x80 == 0x3fff)
    ;
    lVar21 = DAT_00580e68;
    lVar24 = lVar23;
    lVar26 = lVar25;
  }
  iVar15 = 0;
  bVar2 = lVar11 != 0;
  iVar6 = DAT_005802bc * 0x1a;
  puVar9 = param_1 + iVar10;
  puVar13 = &DAT_005802a8;
  lVar25 = 0;
  uVar5 = iVar6 + 2;
  if (iVar16 < -0x7f) goto LAB_00230238;
LAB_0022ff60:
  if ((short)(&DAT_00580e84)[lVar25] == -0x8000) goto LAB_00230238;
  uVar8 = (uint)*(byte *)(lVar21 + (ulong)uVar5);
  uVar20 = uVar8;
  if (bVar2 != 0) {
    if ((DAT_005802b8 + 2 == DAT_00580cf4) || (DAT_00580cf4 == 5)) {
      uVar20 = (int)(((uint)*(byte *)(lVar21 + (ulong)uVar5) * 8 - uVar8) +
                    (uint)*(byte *)(lVar11 + 2)) >> 3;
    }
    else {
      uVar20 = (int)(uVar8 * 3 + (uint)*(byte *)(lVar11 + 2)) >> 2;
    }
  }
  if (uVar20 == 0x7f) goto LAB_00230238;
  if (((DAT_00580e58 == 2) && (DAT_00580d98 != 0)) && (DAT_005802bc < DAT_00580e60)) {
    if (DAT_005802b8 == 0) {
      uVar20 = (int)(uVar20 + *(int *)(lVar25 * 4 + 0x580dbc) * 3) >> 2;
    }
    else if (DAT_005802b8 == 1) {
      uVar20 = (int)(uVar20 + *(int *)(lVar25 * 4 + 0x580dbc)) >> 1;
    }
    else if (DAT_005802b8 == 2) {
      uVar20 = (int)(uVar20 * 3 + *(int *)(lVar25 * 4 + 0x580dbc)) >> 2;
    }
  }
  uVar5 = ((uVar20 + uVar4 * 8) - (int)(short)(&DAT_00580e84)[lVar25]) - iVar16;
  if (*(char *)((long)puVar13 + 0xd01) == '\x01') {
    uVar5 = uVar5 + (int)(char)(&PTR_DAT_00580fc0)[lVar25][DAT_005802c4];
  }
  if (lVar21 == 0) goto LAB_00230000;
  if (DAT_005802b8 + 1 < uVar17) goto LAB_00230000;
LAB_0022fff4:
  *(uint *)(lVar25 * 4 + 0x580dbc) = uVar8;
LAB_00230000:
  uVar20 = 0x7f;
  if ((int)uVar5 < 0x80) {
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    uVar20 = uVar5 & 0xff;
  }
LAB_00230018:
  *puVar9 = (uchar)uVar20;
  if (DAT_00580e68 == 0) {
    bVar19 = 0;
    bVar18 = 0;
  }
  else {
    iVar10 = (*(byte *)(DAT_00580e68 + (ulong)(iVar6 + 3) + 1) & 0x7f) +
             (*(byte *)(DAT_00580e68 + (ulong)(iVar6 + 3)) & 0x7f) * 0x80;
    if (((uint)bVar2 & (uVar4 ^ 1)) != 0) {
      if ((DAT_005802b8 + 2 == DAT_00580cf4) || (DAT_00580cf4 == 5)) {
        iVar10 = (int)((*(byte *)(lVar11 + 3) & 0x7f) * 0x80 + (*(byte *)(lVar11 + 4) & 0x7f) +
                      iVar10 * 7) >> 3;
      }
      else {
        iVar10 = (int)((*(byte *)(lVar11 + 3) & 0x7f) * 0x80 + (*(byte *)(lVar11 + 4) & 0x7f) +
                      iVar10 * 3) >> 2;
      }
    }
    if (DAT_005802b8 + 1 < uVar17) {
      if (((DAT_00580e58 == 2) && (DAT_00580d98 != 0)) && (DAT_005802bc < DAT_00580e60)) {
        if (DAT_005802b8 == 0) {
          iVar10 = iVar10 + *(int *)(lVar25 * 4 + 0x580d9c) * 3 >> 2;
        }
        else if (DAT_005802b8 == 1) {
          iVar10 = iVar10 + *(int *)(lVar25 * 4 + 0x580d9c) >> 1;
        }
        else if (DAT_005802b8 == 2) {
          iVar10 = iVar10 * 3 + *(int *)(lVar25 * 4 + 0x580d9c) >> 2;
        }
      }
    }
    else {
      *(int *)(lVar25 * 4 + 0x580d9c) = iVar10;
    }
    uVar5 = (short)(&DAT_00580e74)[lVar25] + iVar10;
    if (*(char *)((long)puVar13 + 0xd09) == '\x01') {
      uVar5 = uVar5 + (int)*(short *)((&PTR_DAT_00581000)[lVar25] + (ulong)DAT_005802c4 * 2);
    }
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    if (0x27d7 < (int)uVar5) {
      uVar5 = 0x27d7;
    }
    uVar20 = (int)((uVar5 >> 4) * 0x1b4) >> 0xf;
    iVar6 = uVar5 + uVar20 * -0x4b0;
    iVar10 = iVar6 * 0x148 >> 0xf;
    if (uVar20 == 8) {
      iVar3 = iVar10 + 0x18;
      uVar20 = 7;
      bVar18 = 0x38;
      if (0x1d < iVar3) {
LAB_00230104:
        if (uVar20 < 7) {
          uVar20 = uVar20 + 1;
        }
        iVar1 = iVar3 + -0xc;
        if (0x1d < iVar3 + -0xc) {
          if (uVar20 < 7) {
            uVar20 = uVar20 + 1;
          }
          iVar1 = iVar3 + -0x18;
          if (0x1d < iVar3 + -0x18) {
            if (uVar20 < 7) {
              uVar20 = uVar20 + 1;
            }
            iVar1 = iVar3 + -0x24;
            if (0x1d < iVar3 + -0x24) {
              if (uVar20 < 7) {
                uVar20 = uVar20 + 1;
              }
              iVar1 = iVar3 + -0x30;
              if (0x1d < iVar3 + -0x30) {
                if (uVar20 < 7) {
                  uVar20 = uVar20 + 1;
                }
                iVar1 = iVar3 + -0x3c;
                if (0x1d < iVar3 + -0x3c) {
                  if (uVar20 < 7) {
                    uVar20 = uVar20 + 1;
                  }
                  iVar1 = iVar3 + -0x48;
                  if (0x1d < iVar3 + -0x48) {
                    if (uVar20 < 7) {
                      uVar20 = uVar20 + 1;
                    }
                    iVar1 = iVar3 + -0x54;
                    if (0x1d < iVar3 + -0x54) {
                      if (uVar20 < 7) {
                        uVar20 = uVar20 + 1;
                      }
                      iVar1 = iVar3 + -0x60;
                      if ((iVar3 + -0x60 == 0x1e) && (iVar1 = 0x12, uVar20 < 7)) {
                        uVar20 = uVar20 + 1;
                      }
                    }
                  }
                }
              }
            }
          }
        }
        iVar3 = iVar1;
        bVar18 = 0x38;
        if (uVar20 != 8) goto LAB_00230290;
      }
    }
    else {
      iVar3 = iVar10 + 0xc;
      if (0x1d < iVar3) goto LAB_00230104;
LAB_00230290:
      bVar18 = (byte)((uVar20 & 7) << 3);
    }
    uVar5 = (int)*(short *)(&DAT_0052dc30 + (long)iVar3 * 2) +
            ((iVar6 + iVar10 * -100) *
             ((int)*(short *)(&DAT_0052dc30 + (long)(iVar3 + 1) * 2) -
             (int)*(short *)(&DAT_0052dc30 + (long)iVar3 * 2)) * 0x148 >> 0xf);
    if ((int)uVar5 < 0) {
      uVar5 = 0;
    }
    if (0x3ff < (int)uVar5) {
      uVar5 = 0x3ff;
    }
    bVar19 = (byte)uVar5 & 0x7f;
    bVar18 = bVar18 | (byte)(uVar5 >> 7) & 7;
  }
  lVar25 = lVar25 + 1;
  puVar9[1] = bVar18;
  puVar9[2] = bVar19;
  iVar15 = iVar15 + 3;
  puVar9 = puVar9 + 3;
  lVar11 = lVar11 + 3;
  puVar13 = (undefined4 *)((long)puVar13 + 1);
  if (lVar25 != 8) {
    iVar6 = iVar15 + DAT_005802bc * 0x1a;
    uVar5 = iVar6 + 2;
    lVar21 = DAT_00580e68;
    if (-0x80 < iVar16) goto LAB_0022ff60;
LAB_00230238:
    uVar20 = 0x7f;
    if ((lVar21 == 0) || (uVar20 = 0x7f, DAT_005802b8 + 1 < uVar17)) goto LAB_00230018;
    uVar8 = (uint)*(byte *)(lVar21 + (ulong)uVar5);
    uVar5 = 0x7f;
    goto LAB_0022fff4;
  }
  if (uVar4 != 0) {
    param_1[lVar24] = '@';
    param_1[lVar26] = '\0';
    goto LAB_00230538;
  }
  uVar17 = DAT_00580e9c;
  if (DAT_00580ea0 != '\x01') goto LAB_00230358;
  if (DAT_005806dc == 0) {
    uVar17 = (uint)DAT_005802d0;
    if (DAT_00580cf0 != '\0') {
      iVar10 = 0x2000;
      iVar16 = DAT_00580e72 + DAT_00580de4;
      goto LAB_0023099c;
    }
    iVar10 = 0x2000;
  }
  else {
    lVar11 = (long)(int)(uint)DAT_00580d99;
    uVar17 = DAT_00580d99 + 1;
    if (uVar17 < DAT_005806dc) {
      iVar15 = (int)(short)(&DAT_005806e4)[lVar11 * 4];
      iVar16 = (&DAT_005806e0)[(long)(int)uVar17 * 2] - (&DAT_005806e0)[lVar11 * 2];
      if (iVar16 < 1) {
        iVar10 = 0;
      }
      else {
        iVar10 = 0;
        if (iVar16 != 0) {
          iVar10 = (int)((uVar7 - (&DAT_005806e0)[lVar11 * 2]) *
                        ((short)(&DAT_005806e4)[(long)(int)uVar17 * 4] - iVar15)) / iVar16;
        }
      }
    }
    else {
      iVar15 = (int)(short)(&DAT_005806e4)[lVar11 * 4];
      iVar10 = 0;
    }
    iVar10 = iVar10 + iVar15;
    uVar17 = (uint)DAT_005802d0;
    if (DAT_00580cf0 != '\0') goto LAB_0023097c;
  }
  if (DAT_005802d0 == -0x8000) {
    uVar17 = (uint)*(ushort *)((long)DAT_00580e50 + 0x14);
    goto LAB_0023097c;
  }
  uVar17 = (int)((uint)(*(ushort *)((long)DAT_00580e50 + 0x14) >> 4) * 0x1b4) >> 0xf;
  iVar16 = (int)(((uint)*(ushort *)((long)DAT_00580e50 + 0x14) + uVar17 * -0x4b0) * 0x148) >> 0xf;
  if (uVar17 < 8) {
    iVar16 = iVar16 + 0xc;
    if (iVar16 < 0x1e) goto LAB_00230df8;
  }
  else {
    iVar16 = iVar16 + 0x18;
    uVar17 = 7;
    if (iVar16 < 0x1e) goto LAB_00230e04;
  }
  iVar15 = iVar16 + -0xc;
  if (uVar17 < 7) {
    uVar17 = uVar17 + 1;
  }
  uVar4 = (iVar16 - 0x1eU) / 0xc & 7;
  if (0x1d < iVar15) {
    if (uVar4 == 0) goto LAB_00230dac;
    if (uVar4 != 1) {
      if (uVar4 != 2) {
        if (uVar4 != 3) {
          if (uVar4 != 4) {
            if (uVar4 != 5) {
              if ((uVar4 != 6) && (iVar15 = iVar16 + -0x18, uVar17 < 7)) {
                uVar17 = uVar17 + 1;
              }
              iVar15 = iVar15 + -0xc;
              if (uVar17 < 7) {
                uVar17 = uVar17 + 1;
              }
            }
            iVar15 = iVar15 + -0xc;
            if (uVar17 < 7) {
              uVar17 = uVar17 + 1;
            }
          }
          iVar15 = iVar15 + -0xc;
          if (uVar17 < 7) {
            uVar17 = uVar17 + 1;
          }
        }
        iVar15 = iVar15 + -0xc;
        if (uVar17 < 7) {
          uVar17 = uVar17 + 1;
        }
      }
      iVar15 = iVar15 + -0xc;
      if (uVar17 < 7) {
        uVar17 = uVar17 + 1;
      }
    }
    iVar15 = iVar15 + -0xc;
    if (uVar17 < 7) {
      uVar17 = uVar17 + 1;
    }
    while (0x1d < iVar15) {
LAB_00230dac:
      iVar15 = iVar15 + -0x60;
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
    }
  }
LAB_00230df8:
  if (7 < uVar17) {
    uVar17 = 7;
  }
LAB_00230e04:
  uVar17 = (int)DAT_005802d0 + uVar17 * 0x4b0;
LAB_0023097c:
  iVar15 = 0x1fff;
  iVar16 = DAT_00580e72 + DAT_00580de4;
  if (iVar10 < 0x4000) {
LAB_0023099c:
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    iVar15 = iVar10 + -0x2000;
  }
  iVar15 = DAT_00580de8 * iVar15;
  if (iVar15 < 0) {
    iVar15 = -(-iVar15 >> 0xd);
    if (iVar15 < -6000) {
      iVar15 = -6000;
    }
    if (6000 < iVar15) {
      iVar15 = 6000;
    }
  }
  else {
    iVar15 = iVar15 >> 0xd;
    if (6000 < iVar15) {
      iVar15 = 6000;
    }
  }
  uVar17 = uVar17 + iVar16 + iVar15;
  if (uVar22 == 0) {
    uVar17 = uVar17 + (int)*(short *)(&DAT_0052dc70 + (long)(int)(DAT_005802b4 & 0x7f) * 2);
  }
  uVar22 = (uint)DAT_00581042;
  if (((uint)DAT_00581042 < (uint)DAT_00580ae8) &&
     ((uint)(&DAT_00580aec)[(uint)DAT_00581042] <= uVar7)) {
    uVar5 = (uint)DAT_00581042;
    uVar4 = ~uVar5 + (uint)DAT_00580ae8 & 3;
    if (uVar4 == 0) goto LAB_00230ab0;
    uVar22 = uVar5 + 1;
    DAT_00581043 = DAT_00581043 != '\x01';
    DAT_00581042 = (byte)uVar22;
    if ((uVar22 < DAT_00580ae8) && ((uint)(&DAT_00580aec)[uVar22] <= uVar7)) {
      if (uVar4 == 1) goto LAB_00230ab0;
      if (uVar4 != 2) {
        uVar22 = uVar5 + 2;
        DAT_00581043 = !(bool)DAT_00581043;
        DAT_00581042 = (byte)uVar22;
        if (uVar7 < (uint)(&DAT_00580aec)[uVar22]) goto LAB_00230b40;
      }
      uVar12 = (ulong)(uVar22 + 1);
      DAT_00581042 = (byte)(uVar22 + 1);
      uVar4 = (&DAT_00580aec)[uVar12];
      DAT_00581043 = !(bool)DAT_00581043;
      while (uVar22 = (uint)uVar12, uVar4 <= uVar7) {
LAB_00230ab0:
        uVar4 = uVar22 + 1;
        DAT_00581043 = DAT_00581043 != '\x01';
        uVar12 = (ulong)(uVar22 + 4);
        bVar19 = (byte)(uVar22 + 2);
        DAT_00581042 = (byte)uVar4;
        if ((((DAT_00580ae8 <= uVar4) || (uVar7 < (uint)(&DAT_00580aec)[uVar4])) ||
            (bVar2 = !(bool)DAT_00581043, DAT_00581042 = bVar19, DAT_00581043 = bVar2,
            uVar7 < (uint)(&DAT_00580aec)[uVar22 + 2])) ||
           (DAT_00581043 = !bVar2, DAT_00581042 = bVar19 + 1,
           uVar7 < (uint)(&DAT_00580aec)[uVar22 + 3])) break;
        DAT_00581042 = (byte)(uVar22 + 4);
        DAT_00581043 = bVar2;
        uVar4 = (&DAT_00580aec)[uVar12];
      }
    }
  }
LAB_00230b40:
  if (DAT_00581043 == '\0') {
    iVar10 = (int)(short)DAT_00581040;
    if (DAT_00581040 < 0x11) {
      DAT_00581040 = DAT_00581040 + 1;
    }
    else {
      DAT_00581040 = 1;
      iVar10 = 0;
    }
    uVar17 = uVar17 + (int)(short)(&DAT_0052dd70)[iVar10];
  }
  else {
    DAT_00581040 = 0;
  }
LAB_00230358:
  if ((int)uVar17 < 0) {
    uVar17 = 0;
  }
  if (0x3fff < (int)uVar17) {
    uVar17 = 0x3fff;
  }
  uVar7 = (int)((uVar17 >> 4) * 0x1b4) >> 0xf;
  iVar16 = uVar17 + uVar7 * -0x4b0;
  iVar10 = iVar16 * 0x148 >> 0xf;
  if ((int)uVar7 < 8) {
    iVar15 = iVar10 + 0xc;
    iVar6 = iVar15;
    if (0x1d < iVar15) goto LAB_002303c4;
  }
  else {
    iVar15 = iVar10 + 0x18;
    uVar7 = 7;
    if (iVar15 < 0x1e) {
      bVar19 = 0x38;
      goto LAB_002304e4;
    }
LAB_002303c4:
    if (uVar7 < 7) {
      uVar7 = uVar7 + 1;
    }
    iVar6 = iVar15 + -0xc;
    if (0x1d < iVar15 + -0xc) {
      if (uVar7 < 7) {
        uVar7 = uVar7 + 1;
      }
      iVar6 = iVar15 + -0x18;
      if (0x1d < iVar15 + -0x18) {
        if (uVar7 < 7) {
          uVar7 = uVar7 + 1;
        }
        iVar6 = iVar15 + -0x24;
        if (0x1d < iVar15 + -0x24) {
          if (uVar7 < 7) {
            uVar7 = uVar7 + 1;
          }
          iVar6 = iVar15 + -0x30;
          if (0x1d < iVar15 + -0x30) {
            if (uVar7 < 7) {
              uVar7 = uVar7 + 1;
            }
            iVar6 = iVar15 + -0x3c;
            if (0x1d < iVar15 + -0x3c) {
              if (uVar7 < 7) {
                uVar7 = uVar7 + 1;
              }
              iVar6 = iVar15 + -0x48;
              if (0x1d < iVar15 + -0x48) {
                if (uVar7 < 7) {
                  uVar7 = uVar7 + 1;
                }
                iVar6 = iVar15 + -0x54;
                if (0x1d < iVar15 + -0x54) {
                  if (uVar7 < 7) {
                    uVar7 = uVar7 + 1;
                  }
                  iVar6 = iVar15 + -0x60;
                  if (0x1d < iVar15 + -0x60) {
                    if (uVar7 < 7) {
                      uVar7 = uVar7 + 1;
                    }
                    iVar6 = iVar15 + -0x6c;
                    if (0x1d < iVar15 + -0x6c) {
                      if (uVar7 < 7) {
                        uVar7 = uVar7 + 1;
                      }
                      iVar6 = iVar15 + -0x78;
                      if (0x1d < iVar15 + -0x78) {
                        if (uVar7 < 7) {
                          uVar7 = uVar7 + 1;
                        }
                        iVar6 = iVar15 + -0x84;
                        if (0x1d < iVar15 + -0x84) {
                          if (uVar7 < 7) {
                            uVar7 = uVar7 + 1;
                          }
                          iVar6 = iVar15 + -0x90;
                          if (0x1d < iVar15 + -0x90) {
                            if (uVar7 < 7) {
                              uVar7 = uVar7 + 1;
                            }
                            iVar6 = iVar15 + -0x9c;
                            if ((0x1d < iVar15 + -0x9c) && (iVar6 = iVar15 + -0xa8, uVar7 < 7)) {
                              uVar7 = uVar7 + 1;
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
  iVar15 = iVar6;
  if (7 < uVar7) {
    uVar7 = 7;
  }
  bVar19 = (byte)((uVar7 & 7) << 3);
LAB_002304e4:
  uVar17 = (int)*(short *)(&DAT_0052dc30 + (long)iVar15 * 2) +
           ((iVar16 + iVar10 * -100) *
            ((int)*(short *)(&DAT_0052dc30 + (long)(iVar15 + 1) * 2) -
            (int)*(short *)(&DAT_0052dc30 + (long)iVar15 * 2)) * 0x148 >> 0xf);
  if ((int)uVar17 < 0) {
    uVar17 = 0;
  }
  if (0x3ff < (int)uVar17) {
    uVar17 = 0x3ff;
  }
  param_1[lVar24] = bVar19 | (byte)(uVar17 >> 7);
  param_1[lVar26] = (byte)uVar17 & 0x7f;
LAB_00230538:
  DAT_005802c4 = DAT_005802c4 + 1;
  DAT_005802b4 = DAT_005802b4 + 1;
  DAT_005802b8 = DAT_005802b8 + 1;
  DAT_005802bc = DAT_005802c0 + DAT_005802bc;
  if (0x17 < DAT_005802c4) {
    DAT_005802c4 = 0;
  }
  if (DAT_005802ac == 0) {
    param_1[0x22] = '\0';
    uVar14 = 0x24;
    param_1[0x23] = '@';
    DAT_005802ac = 3;
  }
  else {
    uVar14 = 0x1a;
    if (DAT_005802ac == 2) {
      uVar14 = 0x22;
      DAT_005802ac = 3;
    }
  }
  return uVar14;
}

