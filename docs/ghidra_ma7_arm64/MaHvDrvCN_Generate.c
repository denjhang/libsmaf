/* MaHvDrvCN_Generate @ 0022a794 5332B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::MaHvDrvCN_Generate(unsigned char*) */

undefined8 YAMAHA::MaHvDrvCN_Generate(uchar *param_1)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  byte bVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  
  if (param_1 == (uchar *)0x0) {
    return 0xfffffffe;
  }
  if (DAT_0057f558 != 2) {
    if (DAT_0057f558 != 1) {
      return 0xffffffff;
    }
LAB_0022a7cc:
    *param_1 = '\0';
    return 1;
  }
  if (DAT_005800b0 == 0) {
    return 0xfffffffb;
  }
  if (DAT_0057f55c == 1) goto LAB_0022a7cc;
  if ((DAT_0057ffa1 == '\x01') && (DAT_0057f578 <= DAT_0057f564)) {
    DAT_0057f578 = 0;
    DAT_0057f57c = 0;
    DAT_0057f580 = 0;
    DAT_0057f582 = 0;
    DAT_0057f583 = 0;
    DAT_0057f98c = 0;
    DAT_0057fd98 = 0;
    DAT_0057f558 = 1;
    DAT_0057ffa0 = DAT_0057ffa1;
    DAT_0057ffa4 = 0;
    DAT_0057ffac = 0;
    DAT_0057f55c = DAT_0057f558;
    *param_1 = '\0';
    return 1;
  }
  if (DAT_0057f564 < DAT_0057f57c) {
    *param_1 = '\0';
    _DAT_0057f564 = CONCAT44(_DAT_0057f568,DAT_0057f564 + 1);
    return 1;
  }
  uVar15 = DAT_0057f564 - DAT_0057f57c;
  if (DAT_005800c8 == 0) {
    if ((DAT_0057f55c & 0xfffffffd) == 0) goto LAB_0022b370;
    lVar21 = 0x18;
    lVar18 = 0x19;
    uVar10 = 0;
LAB_0022b3e0:
    iVar5 = -0x80;
    uVar13 = 0;
  }
  else {
    if (DAT_0057ffa4 == 1) {
      DAT_0057f56c = DAT_005800ba - 1;
    }
    else if ((DAT_0057f56c != 0) && (DAT_0057ffa4 < (int)(uint)DAT_005800ba)) {
      uVar13 = DAT_005800ba - DAT_0057f56c;
      uVar14 = DAT_0057ffa4 - _DAT_0057f568;
      if (uVar14 - 2 < 0x7f) {
        uVar6 = uVar13 * *(int *)(&DAT_004a9af0 + (ulong)(uVar14 - 1) * 4) >> 0xf;
      }
      else {
        uVar6 = uVar13;
        if (uVar14 != 1) {
          if (uVar14 < 0x81) {
            uVar6 = 0;
          }
          else {
            uVar6 = 0;
            if (uVar14 != 0) {
              uVar6 = uVar13 / uVar14;
            }
          }
        }
      }
      if (0 < (int)(uVar6 - DAT_0057f570)) {
        DAT_0057f56c = DAT_0057f56c + (uVar6 - DAT_0057f570);
      }
    }
    if (DAT_005800ba <= DAT_0057f56c) {
      DAT_0057f56c = DAT_005800ba - 1;
    }
    uVar14 = (uint)DAT_00580030;
    uVar13 = uVar14 + 1;
    if ((uVar13 < DAT_0057f98c) && ((uint)(&DAT_0057f990)[(ulong)uVar13 * 2] <= uVar15)) {
      uVar6 = ~uVar13 + (uint)DAT_0057f98c & 3;
      if (uVar6 == 0) {
LAB_0022a9a0:
        do {
          uVar14 = uVar13 + 1;
          uVar6 = uVar13 + 3;
          uVar19 = uVar13 + 2;
          DAT_00580030 = (byte)uVar13;
          uVar13 = uVar13 + 4;
          if ((((DAT_0057f98c <= uVar14) || (uVar15 < (uint)(&DAT_0057f990)[(ulong)uVar14 * 2])) ||
              (DAT_00580030 = (byte)uVar14, uVar15 < (uint)(&DAT_0057f990)[(ulong)uVar19 * 2])) ||
             (DAT_00580030 = (byte)uVar19, uVar15 < (uint)(&DAT_0057f990)[(ulong)uVar6 * 2])) break;
          uVar14 = (&DAT_0057f990)[(ulong)uVar13 * 2];
          DAT_00580030 = (byte)uVar6;
joined_r0x0022a8f4:
        } while (uVar14 <= uVar15);
      }
      else {
        DAT_00580030 = (byte)uVar13;
        uVar13 = uVar14 + 2;
        if ((uVar13 < DAT_0057f98c) && ((uint)(&DAT_0057f990)[(ulong)uVar13 * 2] <= uVar15)) {
          if (uVar6 == 1) goto LAB_0022a9a0;
          if (uVar6 == 2) {
LAB_0022a8e0:
            DAT_00580030 = (byte)uVar13;
            uVar13 = uVar13 + 1;
            uVar14 = (&DAT_0057f990)[(ulong)uVar13 * 2];
            goto joined_r0x0022a8f4;
          }
          DAT_00580030 = (byte)uVar13;
          uVar13 = uVar14 + 3;
          if ((uint)(&DAT_0057f990)[(ulong)uVar13 * 2] <= uVar15) goto LAB_0022a8e0;
        }
      }
    }
    uVar14 = (uint)DAT_00580031;
    uVar13 = uVar14 + 1;
    if ((uVar13 < DAT_0057f583) && ((uint)(&DAT_0057f584)[(ulong)uVar13 * 2] <= uVar15)) {
      uVar6 = ~uVar13 + (uint)DAT_0057f583 & 3;
      if (uVar6 == 0) {
LAB_0022aab0:
        do {
          uVar14 = uVar13 + 1;
          uVar6 = uVar13 + 3;
          uVar19 = uVar13 + 2;
          DAT_00580031 = (byte)uVar13;
          uVar13 = uVar13 + 4;
          if ((((DAT_0057f583 <= uVar14) || (uVar15 < (uint)(&DAT_0057f584)[(ulong)uVar14 * 2])) ||
              (DAT_00580031 = (byte)uVar14, uVar15 < (uint)(&DAT_0057f584)[(ulong)uVar19 * 2])) ||
             (DAT_00580031 = (byte)uVar19, uVar15 < (uint)(&DAT_0057f584)[(ulong)uVar6 * 2])) break;
          uVar14 = (&DAT_0057f584)[(ulong)uVar13 * 2];
          DAT_00580031 = (byte)uVar6;
joined_r0x0022aa68:
        } while (uVar14 <= uVar15);
      }
      else {
        DAT_00580031 = (byte)uVar13;
        uVar13 = uVar14 + 2;
        if ((uVar13 < DAT_0057f583) && ((uint)(&DAT_0057f584)[(ulong)uVar13 * 2] <= uVar15)) {
          if (uVar6 == 1) goto LAB_0022aab0;
          if (uVar6 == 2) {
LAB_0022aa54:
            DAT_00580031 = (byte)uVar13;
            uVar13 = uVar13 + 1;
            uVar14 = (&DAT_0057f584)[(ulong)uVar13 * 2];
            goto joined_r0x0022aa68;
          }
          DAT_00580031 = (byte)uVar13;
          uVar13 = uVar14 + 3;
          if ((uint)(&DAT_0057f584)[(ulong)uVar13 * 2] <= uVar15) goto LAB_0022aa54;
        }
      }
    }
    if ((DAT_0057f55c & 0xfffffffd) == 0) {
LAB_0022b370:
      lVar20 = 0x20;
      uVar10 = 8;
      lVar21 = 0x20;
      *param_1 = DAT_005800f4;
      param_1[1] = DAT_005800f5 | 0x20;
      param_1[2] = DAT_005800f6;
      param_1[3] = DAT_005800f7 | 0x20;
      param_1[4] = DAT_005800f8;
      param_1[5] = DAT_005800f9 | 0x20;
      param_1[6] = DAT_005800fa;
      lVar18 = 0x21;
      param_1[7] = DAT_005800fb | 0x20;
      if (DAT_005800c8 == 0) goto LAB_0022b3e0;
    }
    else {
      lVar18 = 0x19;
      uVar10 = 0;
      lVar20 = 0x18;
    }
    if (DAT_0057f582 == 0x7f) {
      iVar5 = -0x80;
    }
    else {
      iVar5 = 0;
      if (DAT_00580101 == '\0') {
        iVar5 = 0;
        if (DAT_0057f583 != 0) {
          uVar13 = (uint)DAT_00580031;
          if ((int)(uint)DAT_00580031 < (int)(DAT_0057f583 - 1)) {
            iVar9 = (int)(short)(&DAT_0057f588)[(long)(int)uVar13 * 4];
            iVar11 = (&DAT_0057f584)[(long)(int)(uVar13 + 1) * 2] -
                     (&DAT_0057f584)[(long)(int)uVar13 * 2];
            if (iVar11 < 1) {
              iVar5 = 0;
            }
            else {
              iVar5 = 0;
              if (iVar11 != 0) {
                iVar5 = (int)((uVar15 - (&DAT_0057f584)[(long)(int)uVar13 * 2]) *
                             ((short)(&DAT_0057f588)[(long)(int)(uVar13 + 1) * 4] - iVar9)) / iVar11
                ;
              }
            }
          }
          else {
            iVar9 = (int)(short)(&DAT_0057f588)[(long)(int)uVar13 * 4];
            iVar5 = 0;
          }
          iVar5 = iVar5 + iVar9;
          if ((0xaa < iVar5 + 0x80U) && (bVar3 = iVar5 < 0x2b, iVar5 = 0x2a, bVar3)) {
            iVar5 = -0x80;
          }
          iVar5 = iVar5 - (uint)DAT_0057f582;
        }
      }
    }
    uVar13 = (uint)((*(byte *)(DAT_005800c8 + (ulong)(DAT_0057f56c * 0x1a) + 1) & 0x7f) +
                    (*(byte *)(DAT_005800c8 + (ulong)(DAT_0057f56c * 0x1a)) & 0x7f) * 0x80 == 0x3fff
                   );
    lVar21 = lVar20;
  }
  bVar3 = true;
  if ((DAT_00580034 != 0) && (DAT_0058003c != 0)) {
    bVar3 = DAT_005800be <= DAT_0057f56c;
  }
  puVar12 = &DAT_0057f558;
  iVar11 = 0;
  lVar20 = 0;
  do {
    uVar14 = 0x7f;
    iVar9 = iVar11 + DAT_0057f56c * 0x1a;
    if ((-0x80 < iVar5) && ((short)(&DAT_005800e4)[lVar20] != -0x8000)) {
      bVar8 = *(byte *)(DAT_005800c8 + (ulong)(iVar9 + 2));
      uVar6 = (uint)bVar8;
      if ((bVar3) || (iVar1 = DAT_00580034 - DAT_0058003c, iVar1 < 0)) {
LAB_0022ac70:
        uVar14 = uVar6;
        if (uVar14 == 0x7f) goto LAB_0022aca0;
      }
      else {
        if (0x7f < DAT_00580034) {
          if (iVar1 < 0x80) {
            uVar6 = (int)((uint)*(byte *)(DAT_005800c8 + (ulong)(iVar9 + 0x1c)) * (0x80 - iVar1) +
                         (uint)bVar8 * iVar1) >> 7;
          }
          goto LAB_0022ac70;
        }
        uVar6 = *(byte *)(DAT_005800c8 + (ulong)(iVar9 + 0x1c)) * DAT_0058003c + (uint)bVar8 * iVar1
        ;
        if (DAT_00580034 - 2 < 0x7f) {
          uVar6 = uVar6 * *(int *)(&DAT_004a9af0 + (ulong)(DAT_00580034 - 1) * 4) >> 0xf;
          goto LAB_0022ac70;
        }
        uVar14 = 0;
        if (DAT_00580034 == 1) goto LAB_0022ac70;
      }
      uVar6 = ((uVar14 + uVar13 * 8) - (int)(short)(&DAT_005800e4)[lVar20]) - iVar5;
      if (*(char *)((long)puVar12 + 0xcb1) == '\x01') {
        uVar6 = uVar6 + (int)(char)(&PTR_DAT_00580220)[lVar20][DAT_0057f574];
      }
      if (uVar6 < 0x80) {
        uVar14 = uVar6 & 0xff;
      }
      else {
        uVar14 = 0;
        if (0x7f < (int)uVar6) {
          uVar14 = 0x7f;
        }
      }
    }
LAB_0022aca0:
    param_1[uVar10] = (uchar)uVar14;
    if (DAT_005800c8 == 0) {
      bVar8 = 0;
      bVar16 = 0;
    }
    else {
      uVar14 = (*(byte *)(DAT_005800c8 + (ulong)(iVar9 + 3) + 1) & 0x7f) +
               (*(byte *)(DAT_005800c8 + (ulong)(iVar9 + 3)) & 0x7f) * 0x80;
      if ((!bVar3) && (iVar1 = DAT_00580034 - DAT_0058003c, -1 < iVar1)) {
        if (DAT_00580034 < 0x80) {
          uVar14 = ((*(byte *)(DAT_005800c8 + (ulong)(iVar9 + 0x1d) + 1) & 0x7f) +
                   (*(byte *)(DAT_005800c8 + (ulong)(iVar9 + 0x1d)) & 0x7f) * 0x80) * DAT_0058003c +
                   uVar14 * iVar1;
          if (DAT_00580034 - 2 < 0x7f) {
            uVar14 = uVar14 * *(int *)(&DAT_004a9af0 + (ulong)(DAT_00580034 - 1) * 4) >> 0xf;
          }
          else if (DAT_00580034 != 1) {
            uVar14 = 0;
          }
        }
        else if (iVar1 < 0x80) {
          uVar14 = (int)(((*(byte *)(DAT_005800c8 + (ulong)(iVar9 + 0x1d) + 1) & 0x7f) +
                         (*(byte *)(DAT_005800c8 + (ulong)(iVar9 + 0x1d)) & 0x7f) * 0x80) *
                         (0x80 - iVar1) + uVar14 * iVar1) >> 7;
        }
      }
      uVar6 = uVar14;
      if ((uVar13 != 1) && (DAT_005800d0 == '\0')) {
        uVar6 = 0x27d7;
        if (uVar14 < 0x27d8) {
          uVar6 = 0x27d7 - ((int)((0x27d7 - uVar14) * 0x45) >> 6);
        }
        else if ((int)uVar14 < 0x27d8) {
          uVar6 = 0xfffffce4;
        }
      }
      uVar6 = (int)(short)(&DAT_005800d4)[lVar20] + uVar6;
      if (*(char *)((long)puVar12 + 0xcb9) == '\x01') {
        uVar6 = uVar6 + (int)*(short *)((&PTR_DAT_00580260)[lVar20] + (ulong)DAT_0057f574 * 2);
      }
      if (uVar6 < 0x27d8) {
        uVar19 = (uVar6 >> 4) * 0x1b4 >> 0xf;
        uVar6 = uVar6 + uVar19 * -0x4b0;
        uVar14 = uVar6;
        if ((int)uVar6 < 0) {
          bVar2 = uVar19 == 0;
          uVar19 = uVar19 - 1;
          if (bVar2) {
            uVar19 = 0;
          }
          uVar14 = uVar6 + 0x4b0;
          uVar17 = ~uVar6 / 0x4b0 & 7;
          if ((int)uVar14 < 0) {
            if (uVar17 != 0) {
              if (uVar17 != 1) {
                uVar7 = uVar19;
                if (uVar17 != 2) {
                  if (uVar17 != 3) {
                    if (uVar17 != 4) {
                      if (uVar17 != 5) {
                        if (uVar17 != 6) {
                          uVar7 = uVar19 - 1;
                          uVar14 = uVar6 + 0x960;
                          if (uVar19 == 0) {
                            uVar7 = 0;
                          }
                        }
                        uVar19 = uVar7 - 1;
                        uVar14 = uVar14 + 0x4b0;
                        if (uVar7 == 0) {
                          uVar19 = 0;
                        }
                      }
                      uVar7 = uVar19 - 1;
                      uVar14 = uVar14 + 0x4b0;
                      if (uVar19 == 0) {
                        uVar7 = 0;
                      }
                    }
                    uVar19 = uVar7 - 1;
                    uVar14 = uVar14 + 0x4b0;
                    if (uVar7 == 0) {
                      uVar19 = 0;
                    }
                  }
                  uVar7 = uVar19 - 1;
                  uVar14 = uVar14 + 0x4b0;
                  if (uVar19 == 0) {
                    uVar7 = 0;
                  }
                }
                uVar19 = uVar7 - 1;
                uVar14 = uVar14 + 0x4b0;
                if (uVar7 == 0) {
                  uVar19 = 0;
                }
              }
              bVar2 = uVar19 == 0;
              uVar19 = uVar19 - 1;
              if (bVar2) {
                uVar19 = 0;
              }
              uVar14 = uVar14 + 0x4b0;
              if (-1 < (int)uVar14) goto LAB_0022b038;
            }
            do {
              iVar9 = uVar19 - 1;
              if (uVar19 == 0) {
                iVar9 = 0;
              }
              iVar1 = iVar9 + -1;
              if (iVar9 == 0) {
                iVar1 = 0;
              }
              iVar9 = iVar1 + -1;
              if (iVar1 == 0) {
                iVar9 = 0;
              }
              iVar1 = iVar9 + -1;
              if (iVar9 == 0) {
                iVar1 = 0;
              }
              iVar9 = iVar1 + -1;
              if (iVar1 == 0) {
                iVar9 = 0;
              }
              iVar1 = iVar9 + -1;
              if (iVar9 == 0) {
                iVar1 = 0;
              }
              iVar9 = iVar1 + -1;
              if (iVar1 == 0) {
                iVar9 = 0;
              }
              uVar19 = iVar9 - 1;
              if (iVar9 == 0) {
                uVar19 = 0;
              }
              uVar14 = uVar14 + 0x2580;
            } while ((int)uVar14 < 0);
          }
        }
LAB_0022b038:
        uVar6 = uVar14 * 0x148 >> 0xf;
        iVar9 = uVar14 + uVar6 * -100;
      }
      else if ((int)uVar6 < 0x27d8) {
        uVar6 = 0;
        iVar9 = 0;
        uVar19 = 0;
      }
      else {
        uVar6 = 5;
        iVar9 = 99;
        uVar19 = 8;
      }
      if (iVar9 < 1) {
        iVar9 = 0;
      }
      if (uVar19 < 8) {
        uVar6 = uVar6 + 0xc;
        if (0x1d < uVar6) goto LAB_0022ad9c;
LAB_0022aee0:
        uVar14 = uVar19;
      }
      else {
        uVar6 = uVar6 + 0x18;
        uVar19 = 7;
        uVar14 = 7;
        if (0x1d < uVar6) {
LAB_0022ad9c:
          if (uVar19 < 7) {
            uVar19 = uVar19 + 1;
          }
          uVar14 = uVar6 - 0xc;
          if (0x1d < uVar6 - 0xc) {
            if (uVar19 < 7) {
              uVar19 = uVar19 + 1;
            }
            uVar14 = uVar6 - 0x18;
            if (0x1d < uVar6 - 0x18) {
              if (uVar19 < 7) {
                uVar19 = uVar19 + 1;
              }
              uVar14 = uVar6 - 0x24;
              if (0x1d < uVar6 - 0x24) {
                if (uVar19 < 7) {
                  uVar19 = uVar19 + 1;
                }
                uVar14 = uVar6 - 0x30;
                if (0x1d < uVar6 - 0x30) {
                  if (uVar19 < 7) {
                    uVar19 = uVar19 + 1;
                  }
                  uVar14 = uVar6 - 0x3c;
                  if (0x1d < uVar6 - 0x3c) {
                    if (uVar19 < 7) {
                      uVar19 = uVar19 + 1;
                    }
                    uVar14 = uVar6 - 0x48;
                    if (0x1d < uVar6 - 0x48) {
                      if (uVar19 < 7) {
                        uVar19 = uVar19 + 1;
                      }
                      uVar14 = uVar6 - 0x54;
                      if (0x1d < uVar6 - 0x54) {
                        if (uVar19 < 7) {
                          uVar19 = uVar19 + 1;
                        }
                        uVar14 = uVar6 - 0x60;
                        if ((uVar6 - 0x60 == 0x1e) && (uVar14 = 0x12, uVar19 < 7)) {
                          uVar19 = uVar19 + 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          uVar6 = uVar14;
          uVar14 = 7;
          if (uVar19 != 8) goto LAB_0022aee0;
        }
      }
      uVar6 = (int)*(short *)(&DAT_004e8cc0 + (ulong)uVar6 * 2) +
              (((int)*(short *)(&DAT_004e8cc0 + (ulong)(uVar6 + 1) * 2) -
               (int)*(short *)(&DAT_004e8cc0 + (ulong)uVar6 * 2)) * iVar9 * 0x148 >> 0xf);
      if (uVar6 < 0x400) {
        bVar4 = (byte)(uVar6 >> 7) & 7;
        bVar8 = (byte)uVar6 & 0x7f;
      }
      else if ((int)uVar6 < 0x400) {
        bVar8 = 0;
        bVar4 = 0;
      }
      else {
        bVar8 = 0x7f;
        bVar4 = 7;
      }
      if ((int)uVar14 < 8) {
        bVar16 = bVar4 | (byte)((uVar14 & 7) << 3);
      }
      else {
        bVar16 = bVar4 | 0x38;
        if (uVar14 != 8) {
          bVar16 = bVar4;
        }
      }
    }
    iVar9 = (int)uVar10;
    lVar20 = lVar20 + 1;
    iVar11 = iVar11 + 3;
    puVar12 = (undefined4 *)((long)puVar12 + 1);
    param_1[iVar9 + 1] = bVar16;
    uVar10 = (ulong)(iVar9 + 3);
    param_1[iVar9 + 2] = bVar8;
  } while (lVar20 != 8);
  if (uVar13 != 0) {
    param_1[lVar21] = '@';
    param_1[lVar18] = '\0';
    goto LAB_0022b2a8;
  }
  uVar13 = DAT_005800fc;
  if (DAT_00580100 == '\x01') {
    uVar13 = (uint)DAT_0057f98c;
    if (DAT_0057f98c == 0) {
      uVar14 = (uint)DAT_0057f580;
      if (DAT_0057ffa0 == '\0') {
        uVar13 = 0x2000;
        goto LAB_0022b858;
      }
      iVar5 = DAT_005800d2 + DAT_00580044;
    }
    else {
      uVar14 = (uint)DAT_00580030;
      uVar13 = uVar14 + 1;
      if (uVar13 < DAT_0057f98c) {
        iVar5 = 0;
        iVar9 = (int)(short)(&DAT_0057f994)[(long)(int)uVar14 * 4];
        iVar11 = (&DAT_0057f990)[(long)(int)uVar13 * 2] - (&DAT_0057f990)[(long)(int)uVar14 * 2];
        if (0 < iVar11) {
          iVar5 = 0;
          if (iVar11 != 0) {
            iVar5 = (int)((uVar15 - (&DAT_0057f990)[(long)(int)uVar14 * 2]) *
                         ((short)(&DAT_0057f994)[(long)(int)uVar13 * 4] - iVar9)) / iVar11;
          }
        }
      }
      else {
        iVar9 = (int)(short)(&DAT_0057f994)[(long)(int)(uint)DAT_00580030 * 4];
        iVar5 = 0;
      }
      uVar13 = iVar5 + iVar9;
      uVar14 = (uint)DAT_0057f580;
      if (DAT_0057ffa0 == '\0') {
LAB_0022b858:
        if (DAT_0057f580 == -0x8000) {
          uVar14 = (uint)*(ushort *)(DAT_005800b0 + 0x14);
        }
        else {
          uVar6 = (uint)(*(ushort *)(DAT_005800b0 + 0x14) >> 4) * 0x1b4 >> 0xf;
          uVar19 = (uint)*(ushort *)(DAT_005800b0 + 0x14) + uVar6 * -0x4b0;
          uVar14 = uVar19;
          if ((int)uVar19 < 0) {
            bVar3 = uVar6 == 0;
            uVar6 = uVar6 - 1;
            if (bVar3) {
              uVar6 = 0;
            }
            uVar14 = uVar19 + 0x4b0;
            uVar17 = ~uVar19 / 0x4b0 & 7;
            if ((int)uVar14 < 0) {
              if (uVar17 != 0) {
                if (uVar17 != 1) {
                  uVar7 = uVar6;
                  if (uVar17 != 2) {
                    if (uVar17 != 3) {
                      if (uVar17 != 4) {
                        if (uVar17 != 5) {
                          if (uVar17 != 6) {
                            uVar7 = uVar6 - 1;
                            uVar14 = uVar19 + 0x960;
                            if (uVar6 == 0) {
                              uVar7 = 0;
                            }
                          }
                          uVar6 = uVar7 - 1;
                          uVar14 = uVar14 + 0x4b0;
                          if (uVar7 == 0) {
                            uVar6 = 0;
                          }
                        }
                        uVar7 = uVar6 - 1;
                        uVar14 = uVar14 + 0x4b0;
                        if (uVar6 == 0) {
                          uVar7 = 0;
                        }
                      }
                      uVar6 = uVar7 - 1;
                      uVar14 = uVar14 + 0x4b0;
                      if (uVar7 == 0) {
                        uVar6 = 0;
                      }
                    }
                    uVar7 = uVar6 - 1;
                    uVar14 = uVar14 + 0x4b0;
                    if (uVar6 == 0) {
                      uVar7 = 0;
                    }
                  }
                  uVar6 = uVar7 - 1;
                  uVar14 = uVar14 + 0x4b0;
                  if (uVar7 == 0) {
                    uVar6 = 0;
                  }
                }
                bVar3 = uVar6 == 0;
                uVar6 = uVar6 - 1;
                if (bVar3) {
                  uVar6 = 0;
                }
                uVar14 = uVar14 + 0x4b0;
                if (-1 < (int)uVar14) goto LAB_0022bae4;
              }
              do {
                iVar5 = uVar6 - 1;
                if (uVar6 == 0) {
                  iVar5 = 0;
                }
                iVar11 = iVar5 + -1;
                if (iVar5 == 0) {
                  iVar11 = 0;
                }
                iVar5 = iVar11 + -1;
                if (iVar11 == 0) {
                  iVar5 = 0;
                }
                iVar11 = iVar5 + -1;
                if (iVar5 == 0) {
                  iVar11 = 0;
                }
                iVar5 = iVar11 + -1;
                if (iVar11 == 0) {
                  iVar5 = 0;
                }
                iVar11 = iVar5 + -1;
                if (iVar5 == 0) {
                  iVar11 = 0;
                }
                iVar5 = iVar11 + -1;
                if (iVar11 == 0) {
                  iVar5 = 0;
                }
                uVar6 = iVar5 - 1;
                if (iVar5 == 0) {
                  uVar6 = 0;
                }
                uVar14 = uVar14 + 0x2580;
              } while ((int)uVar14 < 0);
            }
          }
LAB_0022bae4:
          uVar19 = uVar14 * 0x148 >> 0xf;
          uVar14 = uVar19 + 0xc;
          if (7 < uVar6) {
            uVar14 = uVar19 + 0x18;
            uVar6 = 7;
          }
          if (0x1d < uVar14) {
            uVar19 = uVar14 - 0xc;
            if (uVar6 < 7) {
              uVar6 = uVar6 + 1;
            }
            uVar17 = (uVar14 - 0x1e) / 0xc & 7;
            if (0x1d < uVar19) {
              if (uVar17 != 0) {
                if (uVar17 != 1) {
                  if (uVar17 != 2) {
                    if (uVar17 != 3) {
                      if (uVar17 != 4) {
                        if (uVar17 != 5) {
                          if ((uVar17 != 6) && (uVar19 = uVar14 - 0x18, uVar6 < 7)) {
                            uVar6 = uVar6 + 1;
                          }
                          uVar19 = uVar19 - 0xc;
                          if (uVar6 < 7) {
                            uVar6 = uVar6 + 1;
                          }
                        }
                        uVar19 = uVar19 - 0xc;
                        if (uVar6 < 7) {
                          uVar6 = uVar6 + 1;
                        }
                      }
                      uVar19 = uVar19 - 0xc;
                      if (uVar6 < 7) {
                        uVar6 = uVar6 + 1;
                      }
                    }
                    uVar19 = uVar19 - 0xc;
                    if (uVar6 < 7) {
                      uVar6 = uVar6 + 1;
                    }
                  }
                  uVar19 = uVar19 - 0xc;
                  if (uVar6 < 7) {
                    uVar6 = uVar6 + 1;
                  }
                }
                uVar19 = uVar19 - 0xc;
                if (uVar6 < 7) {
                  uVar6 = uVar6 + 1;
                }
                if (uVar19 < 0x1e) goto LAB_0022bc10;
              }
              do {
                uVar19 = uVar19 - 0x60;
                if (uVar6 < 7) {
                  uVar6 = uVar6 + 1;
                }
                if (uVar6 < 7) {
                  uVar6 = uVar6 + 1;
                }
                if (uVar6 < 7) {
                  uVar6 = uVar6 + 1;
                }
                if (uVar6 < 7) {
                  uVar6 = uVar6 + 1;
                }
                if (uVar6 < 7) {
                  uVar6 = uVar6 + 1;
                }
                if (uVar6 < 7) {
                  uVar6 = uVar6 + 1;
                }
                if (uVar6 < 7) {
                  uVar6 = uVar6 + 1;
                }
                if (uVar6 < 7) {
                  uVar6 = uVar6 + 1;
                }
              } while (0x1d < uVar19);
            }
LAB_0022bc10:
            if (7 < uVar6) {
              uVar6 = 7;
            }
          }
          uVar14 = (int)DAT_0057f580 + uVar6 * 0x4b0;
        }
      }
      iVar5 = DAT_005800d2 + DAT_00580044;
      if (uVar13 < 0x4000) {
        iVar11 = uVar13 - 0x2000;
      }
      else {
        iVar11 = -0x2000;
        if (0x3fff < (int)uVar13) {
          iVar11 = 0x1fff;
        }
      }
      iVar9 = 1;
      iVar11 = DAT_00580048 * iVar11;
      if (iVar11 < 0) {
        iVar11 = -iVar11;
        iVar9 = -1;
      }
      uVar13 = (iVar11 >> 0xd) * iVar9;
      if ((12000 < uVar13 + 6000) && (bVar3 = 6000 < (int)uVar13, uVar13 = 0xffffe890, bVar3)) {
        uVar13 = 6000;
      }
    }
    uVar13 = uVar14 + iVar5 + uVar13;
    if (((uint)DAT_005802a2 < (uint)DAT_0057fd98) &&
       ((uint)(&DAT_0057fd9c)[(int)(uint)DAT_005802a2] <= uVar15)) {
      uVar14 = (uint)DAT_005802a2;
      do {
        uVar6 = uVar14 + 1;
        uVar14 = uVar6 & 0xff;
        DAT_005802a3 = DAT_005802a3 != '\x01';
        DAT_005802a2 = (byte)uVar6;
        if (uVar14 == DAT_0057fd98) break;
      } while ((uint)(&DAT_0057fd9c)[(int)uVar14] <= uVar15);
    }
    if (DAT_005802a3 == '\0') {
      iVar5 = (int)(short)DAT_005802a0;
      if (DAT_005802a0 < 0x11) {
        DAT_005802a0 = DAT_005802a0 + 1;
      }
      else {
        DAT_005802a0 = 1;
        iVar5 = 0;
      }
      uVar13 = uVar13 + (int)(short)(&DAT_004e8d00)[iVar5];
    }
    else {
      DAT_005802a0 = 0;
    }
  }
  if (uVar13 < 0x4000) {
    uVar14 = (uVar13 >> 4) * 0x1b4 >> 0xf;
    uVar13 = uVar13 + uVar14 * -0x4b0;
    uVar15 = uVar13;
    if ((int)uVar13 < 0) {
      bVar3 = uVar14 == 0;
      uVar14 = uVar14 - 1;
      if (bVar3) {
        uVar14 = 0;
      }
      uVar15 = uVar13 + 0x4b0;
      uVar6 = ~uVar13 / 0x4b0 & 7;
      if ((int)uVar15 < 0) {
        if (uVar6 != 0) {
          if (uVar6 != 1) {
            uVar19 = uVar14;
            if (uVar6 != 2) {
              if (uVar6 != 3) {
                if (uVar6 != 4) {
                  if (uVar6 != 5) {
                    if (uVar6 != 6) {
                      uVar19 = uVar14 - 1;
                      uVar15 = uVar13 + 0x960;
                      if (uVar14 == 0) {
                        uVar19 = 0;
                      }
                    }
                    uVar14 = uVar19 - 1;
                    uVar15 = uVar15 + 0x4b0;
                    if (uVar19 == 0) {
                      uVar14 = 0;
                    }
                  }
                  uVar19 = uVar14 - 1;
                  uVar15 = uVar15 + 0x4b0;
                  if (uVar14 == 0) {
                    uVar19 = 0;
                  }
                }
                uVar14 = uVar19 - 1;
                uVar15 = uVar15 + 0x4b0;
                if (uVar19 == 0) {
                  uVar14 = 0;
                }
              }
              uVar19 = uVar14 - 1;
              uVar15 = uVar15 + 0x4b0;
              if (uVar14 == 0) {
                uVar19 = 0;
              }
            }
            uVar14 = uVar19 - 1;
            uVar15 = uVar15 + 0x4b0;
            if (uVar19 == 0) {
              uVar14 = 0;
            }
          }
          bVar3 = uVar14 == 0;
          uVar14 = uVar14 - 1;
          if (bVar3) {
            uVar14 = 0;
          }
          uVar15 = uVar15 + 0x4b0;
          if (-1 < (int)uVar15) goto LAB_0022b5e0;
        }
        do {
          iVar5 = uVar14 - 1;
          if (uVar14 == 0) {
            iVar5 = 0;
          }
          iVar11 = iVar5 + -1;
          if (iVar5 == 0) {
            iVar11 = 0;
          }
          iVar5 = iVar11 + -1;
          if (iVar11 == 0) {
            iVar5 = 0;
          }
          iVar11 = iVar5 + -1;
          if (iVar5 == 0) {
            iVar11 = 0;
          }
          iVar5 = iVar11 + -1;
          if (iVar11 == 0) {
            iVar5 = 0;
          }
          iVar11 = iVar5 + -1;
          if (iVar5 == 0) {
            iVar11 = 0;
          }
          iVar5 = iVar11 + -1;
          if (iVar11 == 0) {
            iVar5 = 0;
          }
          uVar14 = iVar5 - 1;
          if (iVar5 == 0) {
            uVar14 = 0;
          }
          uVar15 = uVar15 + 0x2580;
        } while ((int)uVar15 < 0);
      }
    }
LAB_0022b5e0:
    uVar13 = uVar15 * 0x148 >> 0xf;
    iVar5 = uVar15 + uVar13 * -100;
  }
  else if ((int)uVar13 < 0x4000) {
    uVar13 = 0;
    iVar5 = 0;
    uVar14 = 0;
  }
  else {
    uVar13 = 7;
    iVar5 = 0x53;
    uVar14 = 0xd;
  }
  uVar15 = uVar13 + 0xc;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  if (7 < uVar14) {
    uVar15 = uVar13 + 0x18;
    uVar14 = 7;
  }
  if (0x1d < uVar15) {
    if (uVar14 < 7) {
      uVar14 = uVar14 + 1;
    }
    uVar13 = uVar15 - 0xc;
    if (0x1d < uVar15 - 0xc) {
      if (uVar14 < 7) {
        uVar14 = uVar14 + 1;
      }
      uVar13 = uVar15 - 0x18;
      if (0x1d < uVar15 - 0x18) {
        if (uVar14 < 7) {
          uVar14 = uVar14 + 1;
        }
        uVar13 = uVar15 - 0x24;
        if (0x1d < uVar15 - 0x24) {
          if (uVar14 < 7) {
            uVar14 = uVar14 + 1;
          }
          uVar13 = uVar15 - 0x30;
          if (0x1d < uVar15 - 0x30) {
            if (uVar14 < 7) {
              uVar14 = uVar14 + 1;
            }
            uVar13 = uVar15 - 0x3c;
            if (0x1d < uVar15 - 0x3c) {
              if (uVar14 < 7) {
                uVar14 = uVar14 + 1;
              }
              uVar13 = uVar15 - 0x48;
              if (0x1d < uVar15 - 0x48) {
                if (uVar14 < 7) {
                  uVar14 = uVar14 + 1;
                }
                uVar13 = uVar15 - 0x54;
                if (0x1d < uVar15 - 0x54) {
                  if (uVar14 < 7) {
                    uVar14 = uVar14 + 1;
                  }
                  uVar13 = uVar15 - 0x60;
                  if (0x1d < uVar15 - 0x60) {
                    if (uVar14 < 7) {
                      uVar14 = uVar14 + 1;
                    }
                    uVar13 = uVar15 - 0x6c;
                    if (0x1d < uVar15 - 0x6c) {
                      if (uVar14 < 7) {
                        uVar14 = uVar14 + 1;
                      }
                      uVar13 = uVar15 - 0x78;
                      if (0x1d < uVar15 - 0x78) {
                        if (uVar14 < 7) {
                          uVar14 = uVar14 + 1;
                        }
                        uVar13 = uVar15 - 0x84;
                        if (0x1d < uVar15 - 0x84) {
                          if (uVar14 < 7) {
                            uVar14 = uVar14 + 1;
                          }
                          uVar13 = uVar15 - 0x90;
                          if (0x1d < uVar15 - 0x90) {
                            if (uVar14 < 7) {
                              uVar14 = uVar14 + 1;
                            }
                            uVar13 = uVar15 - 0x9c;
                            if ((0x1d < uVar15 - 0x9c) && (uVar13 = uVar15 - 0xa8, uVar14 < 7)) {
                              uVar14 = uVar14 + 1;
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
    uVar15 = uVar13;
    if (7 < uVar14) {
      uVar14 = 7;
    }
  }
  uVar15 = (int)*(short *)(&DAT_004e8cc0 + (ulong)uVar15 * 2) +
           (((int)*(short *)(&DAT_004e8cc0 + (ulong)(uVar15 + 1) * 2) -
            (int)*(short *)(&DAT_004e8cc0 + (ulong)uVar15 * 2)) * iVar5 * 0x148 >> 0xf);
  if (uVar15 < 0x400) {
    bVar16 = (byte)(((ulong)uVar15 << 0x31) >> 0x38);
    bVar8 = (byte)uVar15 & 0x7f;
  }
  else if ((int)uVar15 < 0x400) {
    bVar8 = 0;
    bVar16 = 0;
  }
  else {
    bVar8 = 0x7f;
    bVar16 = 7;
  }
  param_1[lVar21] = bVar16 | (byte)((uVar14 & 7) << 3);
  param_1[lVar18] = bVar8;
LAB_0022b2a8:
  DAT_0057f574 = DAT_0057f574 + 1;
  if (0x17 < DAT_0057f574) {
    DAT_0057f574 = 0;
  }
  _DAT_0057f564 = CONCAT44((int)((ulong)_DAT_0057f564 >> 0x20) + 1,(int)_DAT_0057f564 + 1);
  if (((DAT_00580034 == 0) || (DAT_0057f56c < DAT_005800bc)) || (DAT_005800be < DAT_0057f56c)) {
    DAT_0057f56c = DAT_0057f570 + DAT_0057f56c;
  }
  else {
    if ((DAT_00580038 != 0) && (DAT_0057f56c == DAT_00580038)) {
      DAT_00580034 = DAT_00580034 + 1;
      DAT_00580038 = 0;
    }
    DAT_0058003c = DAT_0058003c + 1;
    if (DAT_00580034 <= DAT_0058003c) {
      DAT_0058003c = 0;
      DAT_0057f56c = DAT_0057f56c + DAT_0057f570;
      if (DAT_005800be < DAT_0057f56c) {
        DAT_00580034 = 0;
      }
    }
  }
  if (DAT_0057f55c == 0) {
    param_1[0x22] = '\0';
    param_1[0x23] = '@';
    DAT_0057f55c = 3;
    return 0x24;
  }
  if (DAT_0057f55c != 2) {
    return 0x1a;
  }
  DAT_0057f55c = 3;
  return 0x22;
}

