/* MaHvDrvJP_Generate @ 000e1584 2798B */


/* YAMAHA::MaHvDrvJP_Generate(unsigned char*) */

undefined4 YAMAHA::MaHvDrvJP_Generate(uchar *param_1)

{
  bool bVar1;
  uint *puVar2;
  short sVar3;
  ushort uVar4;
  undefined1 uVar5;
  ushort uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  ushort uVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  char cVar15;
  byte bVar16;
  int iVar17;
  byte bVar18;
  int *piVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  uchar *puVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  uchar *puVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  bool bVar35;
  char cVar36;
  int local_5c;
  int local_58;
  int local_54;
  uint local_30;
  uint local_2c [2];
  
  iVar20 = DAT_000e2078;
  iVar22 = DAT_000e2074;
  if (param_1 == (uchar *)0x0) {
    return 0xfffffffe;
  }
  piVar19 = (int *)(DAT_000e2074 + 0xe159a);
  iVar12 = *piVar19;
  if (iVar12 != 2) {
    if (iVar12 != 1) {
      return 0xffffffff;
    }
    *param_1 = '\0';
    return 1;
  }
  piVar13 = *(int **)((int)&DAT_000e20dc + DAT_000e2074 + 2);
  if (piVar13 == (int *)0x0) {
    return 0xfffffffb;
  }
  uVar30 = *(uint *)(DAT_000e2074 + 0xe159e);
  local_30 = 0;
  local_2c[0] = 0;
  if (uVar30 == 1) {
    *param_1 = '\0';
    return 1;
  }
  uVar28 = *(uint *)(DAT_000e2074 + 0xe15a6);
  if ((*(char *)(DAT_000e2074 + 0xe1fe3) == '\x01') && (*(uint *)(DAT_000e2074 + 0xe15ba) <= uVar28)
     ) {
    *(undefined4 *)(DAT_000e2074 + 0xe15ba) = 0;
    *(undefined4 *)(iVar22 + 0xe15be) = 0;
    *(undefined2 *)(iVar22 + 0xe15c2) = 0;
    *(undefined1 *)(iVar22 + 0xe15c4) = 0;
    *(undefined1 *)(iVar22 + 0xe15c5) = 0;
    *(undefined1 *)(iVar22 + 0xe19ce) = 0;
    *(undefined1 *)(iVar22 + 0xe1dda) = 0;
    *(undefined1 *)(iVar22 + 0xe1fe2) = 1;
    *(undefined1 *)(iVar22 + 0xe1fe3) = 1;
    *(undefined4 *)(iVar22 + 0xe1fe6) = 0;
    *(undefined1 *)(iVar22 + 0xe1fea) = 0;
    *(undefined1 *)(iVar22 + 0xe1ff6) = 0;
    *piVar19 = 1;
    *(undefined4 *)(iVar22 + 0xe159e) = 1;
    *param_1 = '\0';
    return 1;
  }
  if (uVar28 < *(uint *)(DAT_000e2078 + 0xe1606)) {
    *param_1 = '\0';
    *(int *)(iVar20 + 0xe15ee) = *(int *)(iVar20 + 0xe15ee) + 1;
    return 1;
  }
  iVar22 = *(int *)(DAT_000e2078 + 0xe202e);
  uVar28 = uVar28 - *(uint *)(DAT_000e2078 + 0xe1606);
  if (iVar22 < 6) {
    if (iVar22 != 5) {
      local_54 = 0;
      goto LAB_000e166c;
    }
    if (3 < *(uint *)(DAT_000e2078 + 0xe15f2)) goto LAB_000e1606;
    local_58 = *(int *)(DAT_000e2078 + 0xe2136);
    if (local_58 != 0) {
      local_54 = 0;
      goto LAB_000e1684;
    }
    bVar1 = true;
    local_54 = 0;
  }
  else {
    if (*(uint *)(DAT_000e2078 + 0xe15f2) < iVar22 - 2U) {
      local_54 = 0;
    }
    else {
LAB_000e1606:
      if (*(char *)(DAT_000e207c + 0xe205e) == '\x02') {
        if (*(int *)(DAT_000e207c + 0xe2062) == 0) {
          local_54 = 0;
        }
        else {
          iVar20 = *(int *)(DAT_000e207c + 0xe2066);
          if (iVar20 == 0) {
            local_54 = 0;
          }
          else {
            local_54 = *piVar13;
            if ((*(byte *)(local_54 + iVar20 + 1) & 0x7f) +
                (*(byte *)(local_54 + iVar20) & 0x7f) * 0x80 == 0) {
              iVar20 = ((*(byte *)(local_54 + iVar20 + 4 + 1) & 0x7f) +
                       (*(byte *)(local_54 + iVar20 + 4) & 0x7f) * 0x80) * 0x1a + iVar20;
            }
            local_54 = local_54 + iVar20 + 10;
          }
        }
      }
      else {
        local_54 = 0;
      }
    }
LAB_000e166c:
    local_58 = *(int *)(DAT_000e2080 + 0xe21c8);
    if (local_58 == 0) {
      bVar1 = true;
    }
    else {
      if (iVar22 == 1) {
        uVar29 = (uint)*(ushort *)(DAT_000e2080 + 0xe21be);
        uVar24 = uVar29 - 1;
        *(uint *)(DAT_000e2080 + 0xe1688) = uVar24;
      }
      else {
LAB_000e1684:
        uVar24 = *(uint *)(DAT_000e2084 + 0xe16a0);
        uVar29 = (uint)*(ushort *)(DAT_000e2084 + 0xe21d6);
        if ((uVar24 != 0) && (iVar22 < (int)uVar29)) {
          uVar21 = uVar29 - uVar24;
          uVar25 = iVar22 - *(int *)(DAT_000e2084 + 0xe169c);
          if (uVar25 - 2 < 0x7f) {
            uVar21 = *(int *)(DAT_000e20c4 + uVar25 * 4 + 0xe2c1a) * uVar21 >> 0xf;
          }
          else if (uVar25 != 1) {
            if (uVar25 < 0x81) {
              uVar21 = 0;
            }
            else {
              uVar21 = __udivsi3();
            }
          }
          iVar22 = uVar21 - *(int *)(DAT_000e20c8 + 0xe1cde);
          if (0 < iVar22) {
            uVar24 = uVar24 + iVar22;
            *(uint *)(DAT_000e20c8 + 0xe1cda) = uVar24;
          }
        }
      }
      bVar1 = uVar24 < uVar29;
      if (!bVar1) {
        *(uint *)(DAT_000e2088 + 0xe16c4) = uVar29 - 1;
      }
      uVar29 = (uint)*(byte *)(DAT_000e208c + 0xe219a);
      uVar24 = (uint)*(byte *)(DAT_000e208c + 0xe1aee);
      uVar21 = uVar29 + 1;
      if ((uVar21 < uVar24) && (*(uint *)(DAT_000e208c + 0xe16ba + (uVar29 + 0x88) * 8) <= uVar28))
      {
        uVar25 = ~uVar21 + uVar24 & 7;
        iVar20 = DAT_000e208c + 0xe16ba + (uVar29 + 0x87) * 8;
        iVar22 = iVar20;
        if (uVar25 == 0) goto LAB_000e1762;
        cVar36 = (char)uVar21;
        uVar21 = uVar29 + 2;
        if (uVar21 < uVar24) {
          iVar22 = iVar20 + 8;
          cVar15 = cVar36;
          if (*(uint *)(iVar20 + 0x10) <= uVar28) {
            if (uVar25 != 1) {
              iVar12 = iVar22;
              if (uVar25 != 2) {
                if (uVar25 != 3) {
                  if (uVar25 != 4) {
                    if (uVar25 != 5) {
                      if (uVar25 != 6) {
                        cVar15 = (char)uVar21;
                        iVar22 = iVar20 + 0x10;
                        uVar21 = uVar29 + 3;
                        if (uVar28 < *(uint *)(iVar20 + 0x18)) goto LAB_000e17de;
                      }
                      puVar2 = (uint *)(iVar22 + 0x10);
                      cVar15 = (char)uVar21;
                      iVar22 = iVar22 + 8;
                      uVar21 = uVar21 + 1;
                      if (uVar28 < *puVar2) goto LAB_000e17de;
                    }
                    puVar2 = (uint *)(iVar22 + 0x10);
                    cVar15 = (char)uVar21;
                    iVar22 = iVar22 + 8;
                    uVar21 = uVar21 + 1;
                    if (uVar28 < *puVar2) goto LAB_000e17de;
                  }
                  puVar2 = (uint *)(iVar22 + 0x10);
                  cVar15 = (char)uVar21;
                  iVar22 = iVar22 + 8;
                  uVar21 = uVar21 + 1;
                  if (uVar28 < *puVar2) goto LAB_000e17de;
                }
                cVar15 = (char)uVar21;
                iVar12 = iVar22 + 8;
                uVar21 = uVar21 + 1;
                if (uVar28 < *(uint *)(iVar22 + 0x10)) goto LAB_000e17de;
              }
              iVar22 = iVar12 + 8;
              cVar15 = (char)uVar21;
              uVar21 = uVar21 + 1;
              if (uVar28 < *(uint *)(iVar12 + 0x10)) goto LAB_000e17de;
            }
LAB_000e1762:
            do {
              uVar29 = uVar21 + 1;
              cVar36 = (char)uVar21;
              uVar21 = uVar21 + 8;
              if (uVar24 <= uVar29) goto LAB_000e1c3a;
              cVar15 = cVar36;
            } while (((((*(uint *)(iVar22 + 0x10) <= uVar28) &&
                       (cVar15 = (char)uVar29, *(uint *)(iVar22 + 0x18) <= uVar28)) &&
                      (cVar15 = cVar36 + '\x02', *(uint *)(iVar22 + 0x20) <= uVar28)) &&
                     ((cVar15 = cVar36 + '\x03', *(uint *)(iVar22 + 0x28) <= uVar28 &&
                      (cVar15 = cVar36 + '\x04', *(uint *)(iVar22 + 0x30) <= uVar28)))) &&
                    ((cVar15 = cVar36 + '\x05', *(uint *)(iVar22 + 0x38) <= uVar28 &&
                     ((cVar15 = cVar36 + '\x06', *(uint *)(iVar22 + 0x40) <= uVar28 &&
                      (puVar2 = (uint *)(iVar22 + 0x48), iVar22 = iVar22 + 0x40,
                      cVar15 = cVar36 + '\a', *puVar2 <= uVar28))))));
          }
LAB_000e17de:
          *(char *)(DAT_000e2090 + 0xe22c6) = cVar15;
        }
        else {
LAB_000e1c3a:
          *(char *)(DAT_000e20bc + 0xe2722) = cVar36;
        }
      }
      uVar21 = (uint)*(byte *)(DAT_000e2094 + 0xe22d1);
      uVar24 = (uint)*(byte *)(DAT_000e2094 + 0xe181b);
      uVar29 = uVar21 + 1;
      if ((uVar29 < uVar24) && (*(uint *)(DAT_000e2094 + 0xe17f0 + uVar21 * 8 + 0x34) <= uVar28)) {
        uVar25 = ~uVar29 + uVar24 & 7;
        iVar20 = DAT_000e2094 + 0xe17f0 + (uVar21 + 5) * 8;
        iVar22 = iVar20 + 4;
        if (uVar25 == 0) goto LAB_000e189e;
        cVar36 = (char)uVar29;
        uVar29 = uVar21 + 2;
        if (uVar29 < uVar24) {
          iVar22 = iVar20 + 0xc;
          cVar15 = cVar36;
          if (*(uint *)(iVar20 + 0x14) <= uVar28) {
            if (uVar25 != 1) {
              iVar12 = iVar22;
              if (uVar25 != 2) {
                if (uVar25 != 3) {
                  if (uVar25 != 4) {
                    if (uVar25 != 5) {
                      if (uVar25 != 6) {
                        cVar15 = (char)uVar29;
                        iVar22 = iVar20 + 0x14;
                        uVar29 = uVar21 + 3;
                        if (uVar28 < *(uint *)(iVar20 + 0x1c)) goto LAB_000e191e;
                      }
                      puVar2 = (uint *)(iVar22 + 0x10);
                      cVar15 = (char)uVar29;
                      iVar22 = iVar22 + 8;
                      uVar29 = uVar29 + 1;
                      if (uVar28 < *puVar2) goto LAB_000e191e;
                    }
                    puVar2 = (uint *)(iVar22 + 0x10);
                    cVar15 = (char)uVar29;
                    iVar22 = iVar22 + 8;
                    uVar29 = uVar29 + 1;
                    if (uVar28 < *puVar2) goto LAB_000e191e;
                  }
                  puVar2 = (uint *)(iVar22 + 0x10);
                  cVar15 = (char)uVar29;
                  iVar22 = iVar22 + 8;
                  uVar29 = uVar29 + 1;
                  if (uVar28 < *puVar2) goto LAB_000e191e;
                }
                cVar15 = (char)uVar29;
                iVar12 = iVar22 + 8;
                uVar29 = uVar29 + 1;
                if (uVar28 < *(uint *)(iVar22 + 0x10)) goto LAB_000e191e;
              }
              iVar22 = iVar12 + 8;
              cVar15 = (char)uVar29;
              uVar29 = uVar29 + 1;
              if (uVar28 < *(uint *)(iVar12 + 0x10)) goto LAB_000e191e;
            }
LAB_000e189e:
            do {
              uVar21 = uVar29 + 1;
              cVar36 = (char)uVar29;
              uVar29 = uVar29 + 8;
              if (uVar24 <= uVar21) goto LAB_000e1c4c;
              cVar15 = cVar36;
            } while ((((*(uint *)(iVar22 + 0x10) <= uVar28) &&
                      (cVar15 = (char)uVar21, *(uint *)(iVar22 + 0x18) <= uVar28)) &&
                     (cVar15 = cVar36 + '\x02', *(uint *)(iVar22 + 0x20) <= uVar28)) &&
                    (((cVar15 = cVar36 + '\x03', *(uint *)(iVar22 + 0x28) <= uVar28 &&
                      (cVar15 = cVar36 + '\x04', *(uint *)(iVar22 + 0x30) <= uVar28)) &&
                     ((cVar15 = cVar36 + '\x05', *(uint *)(iVar22 + 0x38) <= uVar28 &&
                      ((cVar15 = cVar36 + '\x06', *(uint *)(iVar22 + 0x40) <= uVar28 &&
                       (puVar2 = (uint *)(iVar22 + 0x48), iVar22 = iVar22 + 0x40,
                       cVar15 = cVar36 + '\a', *puVar2 <= uVar28))))))));
          }
LAB_000e191e:
          *(char *)(DAT_000e2098 + 0xe2407) = cVar15;
        }
        else {
LAB_000e1c4c:
          *(char *)(DAT_000e20c0 + 0xe2735) = cVar36;
        }
      }
    }
  }
  iVar22 = DAT_000e20b8;
  if ((uVar30 & 0xfffffffd) == 0) {
    iVar20 = 8;
    *param_1 = *(uchar *)(DAT_000e20b8 + 0xe272e);
    param_1[1] = *(byte *)(iVar22 + 0xe272f) | 0x20;
    param_1[2] = *(uchar *)(iVar22 + 0xe2730);
    param_1[3] = *(byte *)(iVar22 + 0xe2731) | 0x20;
    param_1[4] = *(uchar *)(iVar22 + 0xe2732);
    param_1[5] = *(byte *)(iVar22 + 0xe2733) | 0x20;
    param_1[6] = *(uchar *)(iVar22 + 0xe2734);
    local_30 = *(byte *)(iVar22 + 0xe2735) | 0x20;
    param_1[7] = (uchar)local_30;
    local_58 = *(int *)(iVar22 + 0xe2706);
  }
  else {
    iVar20 = 0;
  }
  if (local_58 == 0) {
    local_5c = -0x80;
    iVar22 = *(int *)(DAT_000e2100 + 0xe1f74);
  }
  else {
    iVar22 = DAT_000e209c + 0xe1942;
    uVar30 = (uint)*(byte *)(DAT_000e209c + 0xe196c);
    if (uVar30 == 0x7f) {
      local_5c = -0x80;
    }
    else if (*(char *)(DAT_000e209c + 0xe24cb) == '\0') {
      if (*(byte *)(DAT_000e209c + 0xe196d) == 0) {
        local_5c = 0;
      }
      else {
        uVar24 = (uint)*(byte *)(DAT_000e209c + 0xe2423);
        iVar12 = 0;
        if ((int)uVar24 < (int)(*(byte *)(DAT_000e209c + 0xe196d) - 1)) {
          iVar32 = iVar22 + (uVar24 + 5) * 8;
          iVar22 = iVar22 + (uVar24 + 6) * 8;
          iVar17 = *(int *)(iVar32 + 4);
          iVar32 = (int)*(short *)(iVar32 + 8);
          if (0 < *(int *)(iVar22 + 4) - iVar17) {
            iVar12 = __divsi3((*(short *)(iVar22 + 8) - iVar32) * (uVar28 - iVar17));
          }
        }
        else {
          iVar32 = (int)*(short *)(iVar22 + uVar24 * 8 + 0x30);
        }
        local_5c = -0x80;
        if (-0x81 < iVar32 + iVar12) {
          local_5c = iVar32 + iVar12;
        }
        if (local_5c < 0x2b) {
          local_5c = local_5c - uVar30;
        }
        else {
          local_5c = 0x2a - uVar30;
        }
      }
    }
    else {
      local_5c = 0;
    }
    iVar22 = *(int *)(DAT_000e20a0 + 0xe1982);
    if ((*(byte *)(local_58 + iVar22 * 0x1a + 1) & 0x7f) +
        (*(byte *)(local_58 + iVar22 * 0x1a) & 0x7f) * 0x80 == 0x3fff) {
      bVar18 = 0;
      bVar7 = true;
      goto LAB_000e1994;
    }
  }
  bVar18 = 1;
  bVar7 = false;
LAB_000e1994:
  iVar9 = DAT_000e20b4;
  iVar8 = DAT_000e20b0;
  iVar32 = DAT_000e20ac;
  iVar17 = DAT_000e20a8;
  iVar12 = DAT_000e20a4;
  puVar23 = param_1 + iVar20;
  bVar35 = local_54 != 0;
  iVar26 = DAT_000e20a8 + 0xe19bc;
  iVar33 = local_54 + 1;
  iVar31 = DAT_000e20b4 + 0xe19d6;
  iVar20 = 0;
  puVar27 = puVar23;
  do {
    iVar22 = iVar22 * 0x1a + iVar20 * 3;
    if ((local_5c < -0x7f) ||
       (iVar34 = (int)*(short *)(iVar12 + iVar20 * 2 + 0xe2510), iVar34 == -0x8000)) {
LAB_000e1b3c:
      uVar30 = 0x7f;
    }
    else {
      bVar10 = *(byte *)(*(int *)(iVar12 + 0xe24f8) + iVar22 + 2);
      uVar30 = (uint)bVar10;
      if (bVar35) {
        if ((*(int *)(iVar12 + 0xe19b4) == *(int *)(iVar12 + 0xe23f0) + -2) ||
           (*(int *)(iVar12 + 0xe23f0) == 5)) {
          uVar30 = (int)((short)(ushort)bVar10 * 7 + (uint)*(byte *)(local_54 + 2)) >> 3;
        }
        else {
          uVar30 = (int)((short)(ushort)bVar10 * 3 + (uint)*(byte *)(local_54 + 2)) >> 2;
        }
      }
      if (uVar30 != 0x7f) {
        if (bVar7) {
          uVar30 = uVar30 + 8;
        }
        uVar30 = (uVar30 - iVar34) - local_5c;
        if (*(char *)(iVar26 + iVar20 + 0xc0d) == '\x01') {
          uVar30 = uVar30 + (int)*(char *)(*(int *)(iVar26 + iVar20 * 4 + 0xc20) +
                                          *(int *)(iVar17 + 0xe19d8));
        }
        if (0x7f < (int)uVar30) goto LAB_000e1b3c;
        uVar30 = uVar30 & ~((int)uVar30 >> 0x1f) & 0xff;
      }
    }
    *puVar27 = (uchar)uVar30;
    iVar34 = *(int *)(iVar32 + 0xe251a);
    if (iVar34 == 0) {
      bVar10 = 0;
      bVar16 = 0;
      uVar30 = 0;
      uVar24 = 0;
    }
    else {
      iVar22 = iVar22 + 3;
      iVar22 = (*(byte *)(iVar34 + iVar22 + 1) & 0x7f) + (*(byte *)(iVar34 + iVar22) & 0x7f) * 0x80;
      if ((bool)(bVar18 & bVar35)) {
        if ((*(int *)(iVar32 + 0xe19d6) == *(int *)(iVar32 + 0xe2412) + -2) ||
           (*(int *)(iVar32 + 0xe2412) == 5)) {
          iVar22 = (int)(iVar22 * 7 +
                        (*(byte *)(iVar33 + 3) & 0x7f) + (*(byte *)(local_54 + 3) & 0x7f) * 0x80) >>
                   3;
        }
        else {
          iVar22 = (int)(iVar22 * 3 +
                        (*(byte *)(iVar33 + 3) & 0x7f) + (*(byte *)(local_54 + 3) & 0x7f) * 0x80) >>
                   2;
        }
      }
      uVar30 = iVar22 + *(short *)(iVar31 + iVar20 * 2 + 0xb5c);
      if (*(char *)(iVar31 + iVar20 + 0xc15) == '\x01') {
        uVar30 = uVar30 + (int)*(short *)(*(int *)(iVar31 + iVar20 * 4 + 0xc40) +
                                         *(int *)(iVar9 + 0xe19f2) * 2);
      }
      uVar30 = uVar30 & ~((int)uVar30 >> 0x1f);
      if (0x27d6 < (int)uVar30) {
        uVar30 = 0x27d7;
      }
      iVar22 = FUN_000de858(&local_30,local_2c,uVar30);
      if (iVar22 < 0) {
        return 0xffffffff;
      }
      uVar30 = UnsignedSaturate(local_30,3);
      UnsignedDoesSaturate(local_30,3);
      uVar24 = UnsignedSaturate(local_2c[0],10);
      UnsignedDoesSaturate(local_2c[0],10);
      bVar16 = (byte)uVar24 & 0x7f;
      bVar10 = (byte)((uVar30 & 7) << 3) | (byte)(uVar24 >> 7);
    }
    iVar20 = iVar20 + 1;
    puVar27[1] = bVar10;
    puVar27[2] = bVar16;
    local_54 = local_54 + 3;
    puVar27 = puVar27 + 3;
    iVar33 = iVar33 + 3;
    local_30 = uVar30;
    local_2c[0] = uVar24;
    if (iVar20 == 8) break;
    iVar22 = *(int *)(iVar8 + 0xe19d6);
  } while( true );
  if (bVar7) {
    puVar23[0x18] = '@';
    puVar23[0x19] = '\0';
  }
  else {
    iVar22 = DAT_000e20cc + 0xe1d16;
    if (*(char *)(DAT_000e20cc + 0xe289e) == '\x01') {
      iVar20 = 0;
      if (*(byte *)(DAT_000e20cc + 0xe214a) != 0) {
        uVar30 = (uint)*(byte *)(DAT_000e20cc + 0xe27f6);
        if (uVar30 + 1 < (uint)*(byte *)(DAT_000e20cc + 0xe214a)) {
          iVar12 = uVar30 + 0x87;
          iVar20 = *(int *)(iVar22 + iVar12 * 8);
          if (*(int *)(iVar22 + (uVar30 + 0x88) * 8) - iVar20 < 1) {
            iVar17 = 0;
            iVar12 = (int)*(short *)(iVar22 + iVar12 * 8 + 4);
          }
          else {
            iVar12 = (int)*(short *)(iVar22 + iVar12 * 8 + 4);
            iVar17 = __divsi3((*(short *)(iVar22 + (uVar30 + 0x88) * 8 + 4) - iVar12) *
                              (uVar28 - iVar20));
          }
        }
        else {
          iVar17 = 0;
          iVar12 = (int)*(short *)(iVar22 + uVar30 * 8 + 0x43c);
        }
        iVar20 = UnsignedSaturate(iVar12 + iVar17,0xe);
        UnsignedDoesSaturate(iVar12 + iVar17,0xe);
        iVar20 = iVar20 + -0x2000;
      }
      sVar3 = *(short *)(DAT_000e20d8 + 0xe1e60);
      if (*(char *)(DAT_000e20d8 + 0xe2880) == '\0') {
        if (sVar3 == -0x8000) {
          uVar30 = (uint)*(ushort *)(*(int *)(DAT_000e20d8 + 0xe297c) + 0x10);
        }
        else {
          FUN_000de858(&local_30,local_2c,*(undefined2 *)(*(int *)(DAT_000e20d8 + 0xe297c) + 0x10));
          uVar30 = local_30 * 0x4b0 + (int)sVar3;
        }
      }
      else {
        uVar30 = (uint)sVar3;
      }
      iVar12 = DAT_000e20f0;
      iVar22 = DAT_000e20ec;
      iVar20 = iVar20 * *(short *)(DAT_000e20dc + 0xe294a);
      iVar17 = (int)*(short *)(DAT_000e20dc + 0xe29b8) + *(int *)(DAT_000e20dc + 0xe2946) + uVar30;
      if (iVar20 < 0) {
        iVar20 = -iVar20;
        iVar32 = -1;
      }
      else {
        iVar32 = 1;
      }
      iVar32 = iVar32 * (iVar20 >> 0xd);
      iVar20 = -6000;
      if (-0x1771 < iVar32) {
        iVar20 = iVar32;
      }
      if (iVar20 < 0x1771) {
        iVar17 = iVar17 + iVar20;
      }
      else {
        iVar17 = iVar17 + 6000;
      }
      if (!bVar1) {
        iVar17 = iVar17 + *(short *)(DAT_000e20e4 + (*(byte *)(DAT_000e20e0 + 0xe1eb0) & 0x7f) * 2 +
                                    0xe1f1a);
      }
      uVar30 = (uint)*(byte *)(DAT_000e20e8 + 0xe2b1e);
      bVar18 = *(byte *)(DAT_000e20e8 + 0xe26fc);
      uVar11 = (ushort)bVar18;
      if ((uVar30 < bVar18) && (*(uint *)(DAT_000e20e8 + uVar30 * 4 + 0xe2700) <= uVar28)) {
        cVar36 = *(char *)(DAT_000e20e8 + 0xe2b1f);
        do {
          uVar24 = uVar30 + 1;
          uVar30 = uVar24 & 0xff;
          cVar36 = cVar36 != '\x01';
          uVar5 = (undefined1)uVar24;
          if (uVar30 == bVar18) {
            *(char *)(DAT_000e20f0 + 0xe2b71) = cVar36;
            *(undefined1 *)(iVar12 + 0xe2b70) = uVar5;
            goto LAB_000e1f14;
          }
        } while (*(uint *)(DAT_000e20ec + uVar30 * 4 + 0xe2726) <= uVar28);
        *(char *)(DAT_000e20ec + 0xe2b45) = cVar36;
        *(undefined1 *)(iVar22 + 0xe2b44) = uVar5;
      }
      else {
        cVar36 = *(char *)(DAT_000e2108 + 0xe2cbd);
      }
LAB_000e1f14:
      if (cVar36 == '\0') {
        uVar4 = *(ushort *)(DAT_000e20f4 + 0xe2b84);
        if (uVar4 < 0x11) {
          iVar22 = (int)(short)uVar4;
          uVar6 = uVar4 + 1;
        }
        else {
          uVar11 = 1;
          iVar22 = 0;
          uVar6 = uVar4;
        }
        iVar22 = DAT_000e20f8 + iVar22 * 2;
        if (uVar4 < 0x11) {
          uVar11 = uVar6;
        }
        *(ushort *)(DAT_000e20fc + 0xe2b90) = uVar11;
        iVar17 = iVar17 + *(short *)((int)&DAT_000e209c + iVar22 + 2);
      }
      else {
        *(undefined2 *)(DAT_000e2104 + 0xe2c3c) = 0;
      }
    }
    else {
      iVar17 = *(int *)(DAT_000e20cc + 0xe289a);
    }
    uVar14 = UnsignedSaturate(iVar17,0xe);
    UnsignedDoesSaturate(iVar17,0xe);
    FUN_000de858(&local_30,local_2c,uVar14);
    puVar23[0x19] = (byte)local_2c[0] & 0x7f;
    puVar23[0x18] = (byte)(local_30 << 3) & 0x38 | (byte)((local_2c[0] << 0x16) >> 0x1d);
  }
  iVar20 = DAT_000e20d4;
  iVar22 = DAT_000e20d0;
  uVar30 = *(int *)(DAT_000e20d0 + 0xe1d78) + 1;
  piVar19 = (int *)(DAT_000e20d0 + 0xe1d6c);
  iVar17 = *(int *)(DAT_000e20d0 + 0xe1d70);
  iVar12 = *(int *)(DAT_000e20d0 + 0xe1d74);
  iVar32 = *(int *)(DAT_000e20d4 + 0xe1d62);
  if (0x17 < uVar30) {
    uVar30 = 0;
  }
  *(int *)(DAT_000e20d0 + 0xe1d68) = *(int *)(DAT_000e20d0 + 0xe1d68) + 1;
  *(int *)(iVar22 + 0xe1d6c) = *piVar19 + 1;
  *(int *)(iVar22 + 0xe1d70) = iVar17 + iVar12;
  *(uint *)(iVar22 + 0xe1d78) = uVar30;
  if (iVar32 == 0) {
    param_1[0x23] = '@';
    uVar14 = 0x24;
    param_1[0x22] = '\0';
    *(undefined4 *)(iVar20 + 0xe1d62) = 3;
  }
  else if (iVar32 == 2) {
    uVar14 = 0x22;
    *(undefined4 *)(iVar20 + 0xe1d62) = 3;
  }
  else {
    uVar14 = 0x1a;
  }
  return uVar14;
}

