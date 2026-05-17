/* MaHvDrvCN_Generate @ 000e5054 2974B */


/* YAMAHA::MaHvDrvCN_Generate(unsigned char*) */

undefined4 YAMAHA::MaHvDrvCN_Generate(uchar *param_1)

{
  bool bVar1;
  uint *puVar2;
  short sVar3;
  ushort uVar4;
  undefined1 uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  char cVar14;
  byte bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  uchar *puVar23;
  uchar *puVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  int iVar28;
  uint uVar29;
  int iVar30;
  uint uVar31;
  int iVar32;
  char cVar33;
  bool bVar34;
  int local_58;
  int local_54;
  uint local_30;
  uint local_2c [2];
  
  iVar18 = DAT_000e5bf8;
  iVar17 = DAT_000e5bf4;
  if (param_1 == (uchar *)0x0) {
    return 0xfffffffe;
  }
  piVar19 = (int *)(DAT_000e5bf4 + 0xe506a);
  iVar11 = *piVar19;
  if (iVar11 != 2) {
    if (iVar11 != 1) {
      return 0xffffffff;
    }
    *param_1 = '\0';
    return 1;
  }
  if (*(int *)(DAT_000e5bf4 + 0xe5bb2) == 0) {
    return 0xfffffffb;
  }
  uVar26 = *(uint *)(DAT_000e5bf4 + 0xe506e);
  local_30 = 0;
  local_2c[0] = 0;
  if (uVar26 == 1) {
    *param_1 = '\0';
    return 1;
  }
  uVar25 = *(uint *)(DAT_000e5bf4 + 0xe5076);
  if ((*(char *)(DAT_000e5bf4 + 0xe5ab3) == '\x01') && (*(uint *)(DAT_000e5bf4 + 0xe508a) <= uVar25)
     ) {
    *(undefined4 *)(DAT_000e5bf4 + 0xe508a) = 0;
    *(undefined4 *)(iVar17 + 0xe508e) = 0;
    *(undefined2 *)(iVar17 + 0xe5092) = 0;
    *(undefined1 *)(iVar17 + 0xe5094) = 0;
    *(undefined1 *)(iVar17 + 0xe5095) = 0;
    *(undefined1 *)(iVar17 + 0xe549e) = 0;
    *(undefined1 *)(iVar17 + 0xe58aa) = 0;
    *(undefined1 *)(iVar17 + 0xe5ab2) = 1;
    *(undefined1 *)(iVar17 + 0xe5ab3) = 1;
    *(undefined4 *)(iVar17 + 0xe5ab6) = 0;
    *(undefined1 *)(iVar17 + 0xe5abe) = 0;
    *piVar19 = 1;
    *(undefined4 *)(iVar17 + 0xe506e) = 1;
    *param_1 = '\0';
    return 1;
  }
  if (uVar25 < *(uint *)(DAT_000e5bf8 + 0xe50d6)) {
    *param_1 = '\0';
    *(int *)(iVar18 + 0xe50be) = *(int *)(iVar18 + 0xe50be) + 1;
    return 1;
  }
  local_58 = *(int *)((int)&DAT_000e5c08 + DAT_000e5bf8 + 2);
  uVar25 = uVar25 - *(uint *)(DAT_000e5bf8 + 0xe50d6);
  iVar17 = *(int *)(DAT_000e5bf8 + 0xe5afe);
  if (local_58 != 0) {
    if (iVar17 == 1) {
      uVar29 = (uint)*(ushort *)((int)&DAT_000e5c00 + DAT_000e5bf8);
      uVar20 = uVar29 - 1;
      *(uint *)(DAT_000e5bf8 + 0xe50c6) = uVar20;
    }
    else {
      uVar20 = *(uint *)(DAT_000e5bf8 + 0xe50c6);
      uVar29 = (uint)*(ushort *)((int)&DAT_000e5c00 + DAT_000e5bf8);
      if ((uVar20 != 0) && (iVar17 < (int)uVar29)) {
        uVar31 = uVar29 - uVar20;
        uVar22 = iVar17 - *(int *)(DAT_000e5bf8 + 0xe50c2);
        if (uVar22 - 2 < 0x7f) {
          uVar31 = *(int *)(DAT_000e5c90 + uVar22 * 4 + 0xe602c) * uVar31 >> 0xf;
        }
        else if (uVar22 != 1) {
          if (uVar22 < 0x81) {
            uVar31 = 0;
          }
          else {
            uVar31 = __udivsi3();
          }
        }
        iVar17 = uVar31 - *(int *)(DAT_000e5c44 + 0xe5744);
        if (0 < iVar17) {
          uVar20 = uVar20 + iVar17;
          *(uint *)(DAT_000e5c44 + 0xe5740) = uVar20;
        }
      }
    }
    if (uVar29 <= uVar20) {
      *(uint *)(DAT_000e5bfc + 0xe5106) = uVar29 - 1;
    }
    uVar31 = (uint)*(byte *)(DAT_000e5c00 + 0xe5bd2);
    uVar20 = (uint)*(byte *)(DAT_000e5c00 + 0xe552e);
    uVar29 = uVar31 + 1;
    if ((uVar29 < uVar20) && (*(uint *)(DAT_000e5c00 + 0xe50fa + (uVar31 + 0x88) * 8) <= uVar25)) {
      uVar22 = ~uVar29 + uVar20 & 7;
      iVar18 = DAT_000e5c00 + 0xe50fa + (uVar31 + 0x87) * 8;
      iVar17 = iVar18;
      if (uVar22 == 0) goto LAB_000e51a4;
      cVar33 = (char)uVar29;
      uVar29 = uVar31 + 2;
      if (uVar29 < uVar20) {
        iVar17 = iVar18 + 8;
        cVar14 = cVar33;
        if (*(uint *)(iVar18 + 0x10) <= uVar25) {
          if (uVar22 != 1) {
            iVar11 = iVar17;
            if (uVar22 != 2) {
              if (uVar22 != 3) {
                if (uVar22 != 4) {
                  if (uVar22 != 5) {
                    if (uVar22 != 6) {
                      cVar14 = (char)uVar29;
                      iVar17 = iVar18 + 0x10;
                      uVar29 = uVar31 + 3;
                      if (uVar25 < *(uint *)(iVar18 + 0x18)) goto LAB_000e5220;
                    }
                    puVar2 = (uint *)(iVar17 + 0x10);
                    cVar14 = (char)uVar29;
                    iVar17 = iVar17 + 8;
                    uVar29 = uVar29 + 1;
                    if (uVar25 < *puVar2) goto LAB_000e5220;
                  }
                  puVar2 = (uint *)(iVar17 + 0x10);
                  cVar14 = (char)uVar29;
                  iVar17 = iVar17 + 8;
                  uVar29 = uVar29 + 1;
                  if (uVar25 < *puVar2) goto LAB_000e5220;
                }
                puVar2 = (uint *)(iVar17 + 0x10);
                cVar14 = (char)uVar29;
                iVar17 = iVar17 + 8;
                uVar29 = uVar29 + 1;
                if (uVar25 < *puVar2) goto LAB_000e5220;
              }
              cVar14 = (char)uVar29;
              iVar11 = iVar17 + 8;
              uVar29 = uVar29 + 1;
              if (uVar25 < *(uint *)(iVar17 + 0x10)) goto LAB_000e5220;
            }
            iVar17 = iVar11 + 8;
            cVar14 = (char)uVar29;
            uVar29 = uVar29 + 1;
            if (uVar25 < *(uint *)(iVar11 + 0x10)) goto LAB_000e5220;
          }
LAB_000e51a4:
          do {
            uVar31 = uVar29 + 1;
            cVar33 = (char)uVar29;
            uVar29 = uVar29 + 8;
            if (uVar20 <= uVar31) goto LAB_000e56de;
            cVar14 = cVar33;
          } while ((((*(uint *)(iVar17 + 0x10) <= uVar25) &&
                    (cVar14 = (char)uVar31, *(uint *)(iVar17 + 0x18) <= uVar25)) &&
                   (cVar14 = cVar33 + '\x02', *(uint *)(iVar17 + 0x20) <= uVar25)) &&
                  (((cVar14 = cVar33 + '\x03', *(uint *)(iVar17 + 0x28) <= uVar25 &&
                    (cVar14 = cVar33 + '\x04', *(uint *)(iVar17 + 0x30) <= uVar25)) &&
                   ((cVar14 = cVar33 + '\x05', *(uint *)(iVar17 + 0x38) <= uVar25 &&
                    ((cVar14 = cVar33 + '\x06', *(uint *)(iVar17 + 0x40) <= uVar25 &&
                     (puVar2 = (uint *)(iVar17 + 0x48), iVar17 = iVar17 + 0x40,
                     cVar14 = cVar33 + '\a', *puVar2 <= uVar25))))))));
        }
LAB_000e5220:
        *(char *)(DAT_000e5c04 + 0xe5d00) = cVar14;
      }
      else {
LAB_000e56de:
        *(char *)(DAT_000e5c3c + 0xe61be) = cVar33;
      }
    }
    uVar31 = (uint)*(byte *)(DAT_000e5c08 + 0xe5d0b);
    uVar20 = (uint)*(byte *)(DAT_000e5c08 + 0xe525d);
    uVar29 = uVar31 + 1;
    if ((uVar29 < uVar20) && (*(uint *)(DAT_000e5c08 + 0xe5232 + uVar31 * 8 + 0x34) <= uVar25)) {
      uVar22 = ~uVar29 + uVar20 & 7;
      iVar18 = DAT_000e5c08 + 0xe5232 + (uVar31 + 5) * 8;
      iVar17 = iVar18 + 4;
      if (uVar22 == 0) goto LAB_000e52de;
      cVar33 = (char)uVar29;
      uVar29 = uVar31 + 2;
      if (uVar29 < uVar20) {
        iVar17 = iVar18 + 0xc;
        cVar14 = cVar33;
        if (*(uint *)(iVar18 + 0x14) <= uVar25) {
          if (uVar22 != 1) {
            iVar11 = iVar17;
            if (uVar22 != 2) {
              if (uVar22 != 3) {
                if (uVar22 != 4) {
                  if (uVar22 != 5) {
                    if (uVar22 != 6) {
                      cVar14 = (char)uVar29;
                      iVar17 = iVar18 + 0x14;
                      uVar29 = uVar31 + 3;
                      if (uVar25 < *(uint *)(iVar18 + 0x1c)) goto LAB_000e535a;
                    }
                    puVar2 = (uint *)(iVar17 + 0x10);
                    cVar14 = (char)uVar29;
                    iVar17 = iVar17 + 8;
                    uVar29 = uVar29 + 1;
                    if (uVar25 < *puVar2) goto LAB_000e535a;
                  }
                  puVar2 = (uint *)(iVar17 + 0x10);
                  cVar14 = (char)uVar29;
                  iVar17 = iVar17 + 8;
                  uVar29 = uVar29 + 1;
                  if (uVar25 < *puVar2) goto LAB_000e535a;
                }
                puVar2 = (uint *)(iVar17 + 0x10);
                cVar14 = (char)uVar29;
                iVar17 = iVar17 + 8;
                uVar29 = uVar29 + 1;
                if (uVar25 < *puVar2) goto LAB_000e535a;
              }
              cVar14 = (char)uVar29;
              iVar11 = iVar17 + 8;
              uVar29 = uVar29 + 1;
              if (uVar25 < *(uint *)(iVar17 + 0x10)) goto LAB_000e535a;
            }
            iVar17 = iVar11 + 8;
            cVar14 = (char)uVar29;
            uVar29 = uVar29 + 1;
            if (uVar25 < *(uint *)(iVar11 + 0x10)) goto LAB_000e535a;
          }
LAB_000e52de:
          do {
            uVar31 = uVar29 + 1;
            cVar33 = (char)uVar29;
            uVar29 = uVar29 + 8;
            if (uVar20 <= uVar31) goto LAB_000e56f0;
            cVar14 = cVar33;
          } while (((((*(uint *)(iVar17 + 0x10) <= uVar25) &&
                     (cVar14 = (char)uVar31, *(uint *)(iVar17 + 0x18) <= uVar25)) &&
                    (cVar14 = cVar33 + '\x02', *(uint *)(iVar17 + 0x20) <= uVar25)) &&
                   ((cVar14 = cVar33 + '\x03', *(uint *)(iVar17 + 0x28) <= uVar25 &&
                    (cVar14 = cVar33 + '\x04', *(uint *)(iVar17 + 0x30) <= uVar25)))) &&
                  ((cVar14 = cVar33 + '\x05', *(uint *)(iVar17 + 0x38) <= uVar25 &&
                   ((cVar14 = cVar33 + '\x06', *(uint *)(iVar17 + 0x40) <= uVar25 &&
                    (puVar2 = (uint *)(iVar17 + 0x48), iVar17 = iVar17 + 0x40,
                    cVar14 = cVar33 + '\a', *puVar2 <= uVar25))))));
        }
LAB_000e535a:
        *(char *)(DAT_000e5c0c + 0xe5e3b) = cVar14;
      }
      else {
LAB_000e56f0:
        *(char *)(DAT_000e5c40 + 0xe61d1) = cVar33;
      }
    }
  }
  iVar17 = DAT_000e5c38;
  if ((uVar26 & 0xfffffffd) == 0) {
    iVar18 = 8;
    *param_1 = *(uchar *)(DAT_000e5c38 + 0xe61fe);
    param_1[1] = *(byte *)(iVar17 + 0xe61ff) | 0x20;
    param_1[2] = *(uchar *)(iVar17 + 0xe6200);
    param_1[3] = *(byte *)(iVar17 + 0xe6201) | 0x20;
    param_1[4] = (&UNK_000e6202)[iVar17];
    param_1[5] = (&UNK_000e6203)[iVar17] | 0x20;
    param_1[6] = (uchar)FUN_000e6204[iVar17];
    local_30 = *(byte *)(iVar17 + 0xe6205) | 0x20;
    param_1[7] = (uchar)local_30;
    local_58 = *(int *)(iVar17 + 0xe61d6);
  }
  else {
    iVar18 = 0;
  }
  if (local_58 == 0) {
    local_54 = -0x80;
    uVar26 = *(uint *)(DAT_000e5c88 + 0xe5b0a);
  }
  else {
    iVar17 = DAT_000e5c10 + 0xe5380;
    bVar15 = *(byte *)(DAT_000e5c10 + 0xe53aa);
    if (bVar15 == 0x7f) {
      local_54 = -0x80;
    }
    else if (*(char *)(DAT_000e5c10 + 0xe5f0d) == '\0') {
      if (*(byte *)(DAT_000e5c10 + 0xe53ab) == 0) {
        local_54 = 0;
      }
      else {
        uVar26 = (uint)*(byte *)(DAT_000e5c10 + 0xe5e59);
        local_54 = 0;
        if ((int)uVar26 < (int)(*(byte *)(DAT_000e5c10 + 0xe53ab) - 1)) {
          iVar30 = iVar17 + (uVar26 + 5) * 8;
          iVar17 = iVar17 + (uVar26 + 6) * 8;
          iVar11 = *(int *)(iVar30 + 4);
          iVar30 = (int)*(short *)(iVar30 + 8);
          if (0 < *(int *)(iVar17 + 4) - iVar11) {
            local_54 = __divsi3((*(short *)(iVar17 + 8) - iVar30) * (uVar25 - iVar11));
          }
        }
        else {
          iVar30 = (int)*(short *)(iVar17 + uVar26 * 8 + 0x30);
        }
        local_54 = local_54 + iVar30;
        if (0xaa < local_54 + 0x80U) {
          if (local_54 < 0x2b) {
            local_54 = -0x80;
          }
          else {
            local_54 = 0x2a;
          }
        }
        local_54 = local_54 - (uint)bVar15;
      }
    }
    else {
      local_54 = 0;
    }
    uVar26 = *(uint *)(DAT_000e5c14 + 0xe53ba);
    if ((*(byte *)(local_58 + uVar26 * 0x1a + 1) & 0x7f) +
        (*(byte *)(local_58 + uVar26 * 0x1a) & 0x7f) * 0x80 == 0x3fff) {
      bVar34 = true;
      goto LAB_000e53ca;
    }
  }
  bVar34 = false;
LAB_000e53ca:
  iVar9 = DAT_000e5c30;
  iVar8 = DAT_000e5c2c;
  iVar7 = DAT_000e5c28;
  iVar30 = DAT_000e5c24;
  iVar11 = DAT_000e5c20;
  iVar17 = DAT_000e5c1c;
  if (*(int *)(DAT_000e5c18 + 0xe5eae) == 0) {
    bVar1 = true;
  }
  else if (*(int *)(FUN_000e5eb4 + DAT_000e5c18 + 2) == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = *(ushort *)(DAT_000e5c18 + 0xe5f24) <= uVar26;
  }
  puVar23 = param_1 + iVar18;
  iVar21 = 0;
  iVar18 = DAT_000e5c20 + 0xe540e;
  iVar28 = DAT_000e5c30 + 0xe5424;
  puVar24 = puVar23;
  do {
    iVar16 = uVar26 * 0x1a + iVar21 * 3;
    if ((local_54 < -0x7f) ||
       (iVar12 = (int)*(short *)(iVar17 + iVar21 * 2 + 0xe5f74), iVar12 == -0x8000)) {
LAB_000e5522:
      uVar26 = 0x7f;
    }
    else {
      iVar27 = *(int *)(iVar17 + 0xe5f5c) + iVar16;
      uVar26 = (uint)*(byte *)(iVar27 + 2);
      if (!bVar1) {
        uVar20 = *(uint *)(iVar17 + 0xe5ee0);
        iVar32 = uVar20 - *(int *)(iVar17 + 0xe5ee8);
        if (-1 < iVar32) {
          if (uVar20 < 0x80) {
            uVar26 = iVar32 * uVar26 + *(int *)(iVar17 + 0xe5ee8) * (uint)*(byte *)(iVar27 + 0x1c);
            if (uVar20 - 2 < 0x7f) {
              uVar26 = *(int *)(iVar30 + uVar20 * 4 + 0xe58d0) * uVar26 >> 0xf;
            }
            else if (uVar20 != 1) {
              uVar26 = 0;
            }
          }
          else if (iVar32 < 0x80) {
            uVar26 = (int)(iVar32 * uVar26 + (0x80 - iVar32) * (uint)*(byte *)(iVar27 + 0x1c)) >> 7;
          }
        }
      }
      if (uVar26 != 0x7f) {
        if (bVar34) {
          uVar26 = uVar26 + 8;
        }
        uVar26 = (uVar26 - iVar12) - local_54;
        if (*(char *)(iVar18 + iVar21 + 0xc11) == '\x01') {
          uVar26 = uVar26 + (int)*(char *)(*(int *)(iVar18 + iVar21 * 4 + 0xc24) +
                                          *(int *)(iVar11 + 0xe542a));
        }
        if (uVar26 < 0x80) {
          uVar26 = uVar26 & 0xff;
        }
        else {
          if (0x7f < (int)uVar26) goto LAB_000e5522;
          uVar26 = 0;
        }
      }
    }
    *puVar24 = (uchar)uVar26;
    iVar12 = *(int *)(iVar7 + 0xe5f72);
    if (iVar12 == 0) {
      uVar26 = 0;
      local_30 = 0;
      local_2c[0] = 0;
    }
    else {
      uVar26 = (*(byte *)(iVar12 + iVar16 + 3 + 1) & 0x7f) +
               (*(byte *)(iVar12 + iVar16 + 3) & 0x7f) * 0x80;
      if (!bVar1) {
        uVar20 = *(uint *)(iVar7 + 0xe5ef6);
        iVar27 = uVar20 - *(int *)(iVar7 + 0xe5efe);
        if (-1 < iVar27) {
          if (uVar20 < 0x80) {
            uVar26 = iVar27 * uVar26 +
                     *(int *)(iVar7 + 0xe5efe) *
                     ((*(byte *)(iVar12 + iVar16 + 0x1d + 1) & 0x7f) +
                     (*(byte *)(iVar12 + iVar16 + 0x1d) & 0x7f) * 0x80);
            if (uVar20 - 2 < 0x7f) {
              uVar26 = *(int *)(DAT_000e5c60 + uVar20 * 4 + 0xe5de6) * uVar26 >> 0xf;
            }
            else if (uVar20 != 1) {
              uVar26 = 0;
            }
          }
          else if (iVar27 < 0x80) {
            uVar26 = (int)(iVar27 * uVar26 +
                          (0x80 - iVar27) *
                          ((*(byte *)(iVar12 + iVar16 + 0x1d + 1) & 0x7f) +
                          (*(byte *)(iVar12 + iVar16 + 0x1d) & 0x7f) * 0x80)) >> 7;
          }
        }
      }
      if ((*(char *)(iVar8 + 0xe5f7a) == '\0') && (!bVar34)) {
        if (uVar26 < 0x27d8) {
          uVar26 = 0x27d7 - ((int)((0x27d7 - uVar26) * 0x45) >> 6);
        }
        else if ((int)uVar26 < 0x27d8) {
          uVar26 = 0xfffffce4;
        }
        else {
          uVar26 = 0x27d7;
        }
      }
      uVar26 = uVar26 + (int)*(short *)(iVar28 + iVar21 * 2 + 0xb60);
      if (*(char *)(iVar28 + iVar21 + 0xc19) == '\x01') {
        uVar26 = uVar26 + (int)*(short *)(*(int *)(iVar28 + iVar21 * 4 + 0xc44) +
                                         *(int *)(iVar9 + 0xe5440) * 2);
      }
      if (0x27d7 < uVar26) {
        if ((int)uVar26 < 0x27d8) {
          uVar26 = 0;
        }
        else {
          uVar26 = 0x27d7;
        }
      }
      iVar16 = FUN_000e210c(&local_30,local_2c,uVar26);
      if (iVar16 < 0) {
        return 0xffffffff;
      }
      if (local_30 < 8) {
        uVar26 = (local_30 & 7) << 3;
      }
      else if ((int)local_30 < 8) {
        local_30 = 0;
        uVar26 = local_30;
      }
      else {
        uVar26 = 0x38;
        local_30 = 7;
      }
    }
    if (local_2c[0] < 0x400) {
      bVar15 = (byte)((local_2c[0] & 0x7fff) >> 7);
      uVar20 = local_2c[0] & 0x7f;
    }
    else if ((int)local_2c[0] < 0x400) {
      local_2c[0] = 0;
      bVar15 = 0;
      uVar20 = local_2c[0];
    }
    else {
      uVar20 = 0x7f;
      bVar15 = 7;
      local_2c[0] = 0x3ff;
    }
    iVar21 = iVar21 + 1;
    puVar24[2] = (uchar)uVar20;
    puVar24[1] = (byte)uVar26 | bVar15;
    puVar24 = puVar24 + 3;
    if (iVar21 == 8) break;
    uVar26 = *(uint *)(DAT_000e5c34 + 0xe5494);
  } while( true );
  if (bVar34) {
    puVar23[0x18] = '@';
    puVar23[0x19] = '\0';
  }
  else {
    iVar17 = DAT_000e5c48 + 0xe57c8;
    if (*(char *)(DAT_000e5c48 + 0xe6354) == '\x01') {
      uVar26 = 0x2000;
      if (*(byte *)((int)&DAT_000e5bfc + DAT_000e5c48) != 0) {
        uVar26 = (uint)*(byte *)(DAT_000e5c48 + 0xe62a0);
        if (uVar26 + 1 < (uint)*(byte *)((int)&DAT_000e5bfc + DAT_000e5c48)) {
          iVar11 = uVar26 + 0x87;
          iVar18 = *(int *)(iVar17 + iVar11 * 8);
          if (*(int *)(iVar17 + (uVar26 + 0x88) * 8) - iVar18 < 1) {
            iVar18 = 0;
            iVar11 = (int)*(short *)(iVar17 + iVar11 * 8 + 4);
          }
          else {
            iVar11 = (int)*(short *)(iVar17 + iVar11 * 8 + 4);
            iVar18 = __divsi3((*(short *)(iVar17 + (uVar26 + 0x88) * 8 + 4) - iVar11) *
                              (uVar25 - iVar18));
          }
        }
        else {
          iVar18 = 0;
          iVar11 = (int)*(short *)(iVar17 + uVar26 * 8 + 0x43c);
        }
        uVar26 = iVar18 + iVar11;
      }
      sVar3 = *(short *)(DAT_000e5c64 + 0xe59e4);
      if (*(char *)(DAT_000e5c64 + 0xe6404) == '\0') {
        if (sVar3 == -0x8000) {
          uVar20 = (uint)*(ushort *)(*(int *)(DAT_000e5c64 + 0xe6504) + 0x10);
        }
        else {
          FUN_000e210c(&local_30,local_2c,*(undefined2 *)(*(int *)(DAT_000e5c64 + 0xe6504) + 0x10));
          uVar20 = local_30 * 0x4b0 + (int)sVar3;
        }
      }
      else {
        uVar20 = (uint)sVar3;
      }
      iVar18 = DAT_000e5c78;
      iVar17 = DAT_000e5c74;
      bVar34 = uVar26 < 0x4000;
      if (bVar34) {
        uVar26 = uVar26 - 0x2000;
      }
      uVar29 = uVar26;
      if ((!bVar34) && (uVar29 = 0xffffe000, 0x3fff < (int)uVar26)) {
        uVar29 = 0x1fff;
      }
      iVar11 = uVar29 * (int)*(short *)(DAT_000e5c6c + 0xe64fc);
      if (iVar11 < 0) {
        iVar11 = -iVar11;
        iVar30 = -1;
      }
      else {
        iVar30 = 1;
      }
      iVar30 = iVar30 * (iVar11 >> 0xd);
      iVar11 = iVar30;
      if ((12000 < iVar30 + 6000U) && (iVar11 = -6000, 6000 < iVar30)) {
        iVar11 = 6000;
      }
      iVar30 = DAT_000e5c70 + 0xe5a50;
      uVar20 = iVar11 + uVar20 + (int)*(short *)(DAT_000e5c68 + 0xe6542) +
                                 *(int *)(DAT_000e5c68 + 0xe64d0);
      uVar26 = (uint)*(byte *)(DAT_000e5c70 + 0xe66b6);
      if ((uVar26 < *(byte *)(DAT_000e5c70 + 0xe6290)) &&
         (*(uint *)(iVar30 + uVar26 * 4 + 0x844) <= uVar25)) {
        cVar33 = *(char *)(DAT_000e5c70 + 0xe66b7);
        iVar30 = DAT_000e5c74 + 0xe5a7e;
        do {
          uVar29 = uVar26 + 1;
          uVar26 = uVar29 & 0xff;
          cVar33 = cVar33 != '\x01';
          uVar5 = (undefined1)uVar29;
          if (uVar26 == *(byte *)(DAT_000e5c70 + 0xe6290)) {
            *(char *)(DAT_000e5c78 + 0xe670d) = cVar33;
            *(undefined1 *)(iVar18 + 0xe670c) = uVar5;
            goto LAB_000e5aac;
          }
        } while (*(uint *)(iVar30 + uVar26 * 4 + 0x844) <= uVar25);
        *(char *)(DAT_000e5c74 + 0xe66e5) = cVar33;
        *(undefined1 *)(iVar17 + 0xe66e4) = uVar5;
      }
      else {
        cVar33 = *(char *)(DAT_000e5c94 + 0xe6849);
      }
LAB_000e5aac:
      uVar10 = (ushort)iVar30;
      if (cVar33 == '\0') {
        uVar4 = *(ushort *)(DAT_000e5c7c + 0xe6720);
        if (uVar4 < 0x11) {
          iVar17 = (int)(short)uVar4;
          uVar6 = uVar4 + 1;
        }
        else {
          uVar10 = 1;
          iVar17 = 0;
          uVar6 = uVar4;
        }
        iVar17 = DAT_000e5c80 + iVar17 * 2;
        if (uVar4 < 0x11) {
          uVar10 = uVar6;
        }
        *(ushort *)(DAT_000e5c84 + 0xe672c) = uVar10;
        uVar20 = uVar20 + (int)*(short *)(iVar17 + 0xe681e);
      }
      else {
        *(undefined2 *)(DAT_000e5c8c + 0xe67be) = 0;
      }
    }
    else {
      uVar20 = *(uint *)(DAT_000e5c48 + 0xe6350);
    }
    if (0x3fff < uVar20) {
      if ((int)uVar20 < 0x4000) {
        uVar20 = 0;
      }
      else {
        uVar20 = 0x3fff;
      }
    }
    FUN_000e210c(&local_30,local_2c,uVar20);
    puVar23[0x19] = (byte)local_2c[0] & 0x7f;
    puVar23[0x18] = (byte)(local_30 << 3) & 0x38 | (byte)((local_2c[0] << 0x16) >> 0x1d);
  }
  iVar18 = DAT_000e5c50;
  iVar17 = DAT_000e5c4c;
  uVar26 = *(int *)(DAT_000e5c4c + 0xe5836) + 1;
  piVar19 = (int *)(DAT_000e5c4c + 0xe582a);
  uVar25 = *(uint *)(DAT_000e5c50 + 0xe62f8);
  if (0x17 < uVar26) {
    uVar26 = 0;
  }
  *(int *)(DAT_000e5c4c + 0xe5826) = *(int *)(DAT_000e5c4c + 0xe5826) + 1;
  *(int *)(iVar17 + 0xe582a) = *piVar19 + 1;
  *(uint *)(iVar17 + 0xe5836) = uVar26;
  if (((uVar25 == 0) ||
      (uVar26 = *(uint *)(iVar18 + 0xe5830), uVar26 < *(ushort *)(iVar18 + 0xe636c))) ||
     (uVar10 = *(ushort *)(iVar18 + 0xe636e), uVar10 < uVar26)) {
    *(int *)(DAT_000e5c5c + 0xe58e0) =
         *(int *)(DAT_000e5c5c + 0xe58e0) + *(int *)(DAT_000e5c5c + 0xe58e4);
  }
  else {
    if ((*(uint *)(iVar18 + 0xe62fc) != 0) && (uVar26 == *(uint *)(iVar18 + 0xe62fc))) {
      uVar25 = uVar25 + 1;
      *(uint *)(iVar18 + 0xe62f8) = uVar25;
      *(undefined4 *)(iVar18 + 0xe62fc) = 0;
    }
    iVar17 = DAT_000e5c54;
    uVar20 = *(int *)(DAT_000e5c54 + 0xe6360) + 1;
    *(uint *)(DAT_000e5c54 + 0xe6360) = uVar20;
    if (uVar25 <= uVar20) {
      *(undefined4 *)(iVar17 + 0xe6360) = 0;
      uVar26 = uVar26 + *(int *)(iVar17 + 0xe5894);
      *(uint *)(iVar17 + 0xe5890) = uVar26;
      if (uVar10 < uVar26) {
        *(undefined4 *)(iVar17 + 0xe6358) = 0;
      }
    }
  }
  iVar17 = DAT_000e5c58;
  if (*(int *)(DAT_000e5c58 + 0xe58ac) == 0) {
    param_1[0x23] = '@';
    uVar13 = 0x24;
    param_1[0x22] = '\0';
    *(undefined4 *)(iVar17 + 0xe58ac) = 3;
  }
  else if (*(int *)(DAT_000e5c58 + 0xe58ac) == 2) {
    uVar13 = 0x22;
    *(undefined4 *)(DAT_000e5c58 + 0xe58ac) = 3;
  }
  else {
    uVar13 = 0x1a;
  }
  return uVar13;
}

