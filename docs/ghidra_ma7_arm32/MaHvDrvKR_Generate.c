/* MaHvDrvKR_Generate @ 000e8d24 3644B */


/* YAMAHA::MaHvDrvKR_Generate(unsigned char*) */

undefined4 YAMAHA::MaHvDrvKR_Generate(uchar *param_1)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  byte bVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  char cVar18;
  short sVar19;
  uint uVar20;
  uint uVar21;
  uchar *puVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uchar *puVar26;
  uint uVar27;
  int iVar28;
  byte bVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  bool bVar34;
  char cVar35;
  bool bVar36;
  int local_70;
  uint local_6c;
  int local_64;
  uint local_34;
  uint local_30;
  uint local_2c [2];
  
  iVar15 = DAT_000e9a00;
  iVar16 = DAT_000e99fc;
  if (param_1 == (uchar *)0x0) {
    return 0xfffffffe;
  }
  piVar14 = (int *)(DAT_000e99fc + 0xe8d3a);
  iVar4 = *piVar14;
  if (iVar4 != 2) {
    if (iVar4 != 1) {
      return 0xffffffff;
    }
    *param_1 = '\0';
    return 1;
  }
  piVar10 = *(int **)(DAT_000e99fc + 0xe98d2);
  if (piVar10 == (int *)0x0) {
    return 0xfffffffb;
  }
  uVar27 = *(uint *)(DAT_000e99fc + 0xe8d3e);
  if (uVar27 == 1) {
    *param_1 = '\0';
    return 1;
  }
  uVar20 = *(uint *)(DAT_000e99fc + 0xe8d46);
  if ((*(char *)(DAT_000e99fc + 0xe9783) == '\x01') && (*(uint *)(DAT_000e99fc + 0xe8d5a) <= uVar20)
     ) {
    *(undefined1 *)(DAT_000e99fc + 0xe9782) = 1;
    *(undefined1 *)(iVar16 + 0xe9783) = 1;
    *piVar14 = 1;
    *(undefined4 *)(iVar16 + 0xe8d3e) = 1;
    *(undefined4 *)(iVar16 + 0xe8d5a) = 0;
    *(undefined4 *)(iVar16 + 0xe8d5e) = 0;
    *(undefined2 *)(iVar16 + 0xe8d62) = 0;
    *(undefined1 *)(iVar16 + 0xe8d64) = 0;
    *(undefined1 *)(iVar16 + 0xe8d65) = 0;
    *(undefined1 *)(iVar16 + 0xe916e) = 0;
    *(undefined1 *)(iVar16 + 0xe957a) = 0;
    *(undefined4 *)(iVar16 + 0xe9786) = 0;
    *(undefined1 *)(iVar16 + 0xe978a) = 0;
    *(undefined1 *)(iVar16 + 0xe97a6) = 0;
    *param_1 = '\0';
    return 1;
  }
  if (uVar20 < *(uint *)(DAT_000e9a00 + 0xe8da2)) {
    *param_1 = '\0';
    *(int *)(iVar15 + 0xe8d8a) = *(int *)(iVar15 + 0xe8d8a) + 1;
    return 1;
  }
  uVar20 = uVar20 - *(uint *)(DAT_000e9a00 + 0xe8da2);
  uVar8 = *(uint *)(DAT_000e9a00 + 0xe8d8e);
  local_6c = *(uint *)(DAT_000e9a00 + (uint)*(byte *)(DAT_000e9a00 + 0xe986e) * 8 + 0xe97d6);
  if ((uVar8 < local_6c) || (*(byte *)(DAT_000e9a00 + 0xe986e) != 0)) {
    iVar16 = *(int *)(DAT_000e9a00 + 0xe9926);
  }
  else {
    local_6c = *(uint *)(DAT_000e9a00 + 0xe97de);
    iVar4 = *(int *)(DAT_000e9a00 + 0xe97da);
    *(undefined1 *)(DAT_000e9a00 + 0xe986e) = 1;
    if (iVar4 == 0) {
      *(undefined4 *)(iVar15 + 0xe9926) = 0;
      iVar16 = 0;
    }
    else {
      sVar19 = (*(byte *)(*piVar10 + iVar4 + 1) & 0x7f) +
               (*(byte *)(*piVar10 + iVar4) & 0x7f) * 0x80;
      *(short *)(iVar15 + 0xe991a) = sVar19;
      *(ushort *)(iVar15 + 0xe991c) =
           (*(byte *)(*piVar10 + iVar4 + 2 + 1) & 0x7f) +
           (*(byte *)(*piVar10 + iVar4 + 2) & 0x7f) * 0x80;
      iVar31 = (*(byte *)(*piVar10 + iVar4 + 4 + 1) & 0x7f) +
               (*(byte *)(*piVar10 + iVar4 + 4) & 0x7f) * 0x80;
      *(short *)(iVar15 + 0xe991e) = (short)iVar31;
      if (sVar19 != 0) {
        iVar31 = 0;
      }
      *(ushort *)(iVar15 + 0xe9920) =
           (*(byte *)(*piVar10 + iVar4 + 6 + 1) & 0x7f) +
           (*(byte *)(*piVar10 + iVar4 + 6) & 0x7f) * 0x80;
      *(ushort *)(iVar15 + 0xe9922) =
           (*(byte *)(*piVar10 + iVar4 + 8 + 1) & 0x7f) +
           (*(byte *)(*piVar10 + iVar4 + 8) & 0x7f) * 0x80;
      iVar16 = *piVar10;
      *(int *)(iVar15 + 0xe8d92) = iVar31;
      iVar16 = iVar16 + iVar4 + 10;
      *(int *)(iVar15 + 0xe9926) = iVar16;
    }
    uVar8 = 0;
    *(undefined4 *)(DAT_000e9a04 + 0xe8e88) = 0;
  }
  if (iVar16 == 0) {
    local_34 = 1;
    local_70 = 0;
  }
  else {
    iVar15 = *(int *)(DAT_000e9a08 + 0xe98ea);
    if (iVar15 == 0) {
      local_70 = 0;
LAB_000e8f84:
      if (*(short *)(DAT_000e9a18 + 0xe9b28) == 2) goto LAB_000e8eb4;
      local_34 = local_6c;
      if (local_6c == 1) {
        uVar21 = (uint)*(ushort *)(DAT_000e9a18 + 0xe9b2a);
        uVar24 = uVar21 - 1;
        *(uint *)(DAT_000e9a18 + 0xe8fa0) = uVar24;
      }
      else {
LAB_000e8f9a:
        uVar24 = *(uint *)(DAT_000e9a1c + 0xe8fb6);
        uVar21 = (uint)*(ushort *)(DAT_000e9a1c + 0xe9b40);
        if ((uVar24 != 0) && ((int)local_6c < (int)uVar21)) {
          iVar15 = *(int *)(DAT_000e9a1c + 0xe8fba);
          uVar8 = local_6c - uVar8;
          uVar5 = (uVar21 - uVar24) - iVar15;
          if (uVar8 - 2 < 0x7f) {
            uVar5 = *(int *)(DAT_000e9c18 + uVar8 * 4 + 0xeaa6a) * uVar5 >> 0xf;
          }
          else if (uVar8 != 1) {
            if (uVar8 < 0x81) {
              uVar5 = 0;
            }
            else {
              uVar5 = __udivsi3();
            }
          }
          iVar15 = uVar5 - iVar15;
          if (0 < iVar15) {
            uVar24 = uVar24 + iVar15;
            local_34 = 1;
            *(uint *)(DAT_000e9a5c + 0xe955c) = uVar24;
            goto LAB_000e8fb0;
          }
        }
        local_34 = 1;
      }
    }
    else {
      if (5 < (int)local_6c) {
        if (uVar8 + 2 < local_6c) {
          local_70 = 0;
        }
        else {
LAB_000e955e:
          local_70 = **(int **)(DAT_000e9a60 + 0xea0fe);
          if ((*(byte *)(local_70 + iVar15 + 1) & 0x7f) +
              (*(byte *)(local_70 + iVar15) & 0x7f) * 0x80 == 0) {
            iVar15 = ((*(byte *)(local_70 + iVar15 + 4 + 1) & 0x7f) +
                     (*(byte *)(local_70 + iVar15 + 4) & 0x7f) * 0x80) * 0x1a + iVar15;
          }
          local_70 = local_70 + iVar15 + 10;
        }
        goto LAB_000e8f84;
      }
      if (local_6c != 5) {
        local_70 = 0;
        goto LAB_000e8f84;
      }
      if (4 < uVar8 + 1) goto LAB_000e955e;
      local_70 = 0;
      if (*(short *)((int)&DAT_000e9a20 + DAT_000e9a08 + 2) != 2) goto LAB_000e8f9a;
LAB_000e8eb4:
      uVar21 = (uint)*(ushort *)((int)&DAT_000e9a5c + DAT_000e9a0c);
      if (((int)uVar21 < (int)local_6c) && ((int)(uVar21 + uVar8) <= (int)local_6c)) {
        *(undefined4 *)(DAT_000e9a0c + 0xe8ed2) = 0;
        local_34 = 0;
      }
      else {
        local_34 = 1;
      }
      if (local_6c == 1) {
        uVar24 = uVar21 - 1;
        *(uint *)(DAT_000e9c14 + 0xe9b38) = uVar24;
      }
      else {
        uVar24 = *(uint *)(DAT_000e9a10 + 0xe8efa);
        if ((uVar24 != 0) && ((int)local_6c < (int)uVar21)) {
          uVar8 = local_6c - uVar8;
          uVar5 = (uVar21 - uVar24) - *(int *)(DAT_000e9a10 + 0xe8efe);
          if (uVar8 - 2 < 0x7f) {
            uVar5 = *(int *)(DAT_000e9c1c + uVar8 * 4 + 0xeaaea) * uVar5 >> 0xf;
LAB_000e8f16:
            if ((int)uVar5 < 1) goto LAB_000e9bf8;
          }
          else {
            if (uVar8 == 1) goto LAB_000e8f16;
            if (0x80 < uVar8) {
              uVar5 = __udivsi3();
              goto LAB_000e8f16;
            }
LAB_000e9bf8:
            uVar5 = 1;
          }
          uVar24 = uVar24 + uVar5;
          *(uint *)(DAT_000e9a14 + 0xe8f3a) = uVar24;
        }
      }
    }
LAB_000e8fb0:
    if (uVar21 <= uVar24) {
      local_34 = 0;
      *(uint *)(DAT_000e9a20 + 0xe8fd6) = uVar21 - 1;
    }
    uVar8 = (uint)*(byte *)(DAT_000e9a24 + 0xe9abd);
    uVar24 = (uint)*(byte *)(DAT_000e9a24 + 0xe9400);
    uVar21 = uVar8 + 1;
    if ((uVar21 < uVar24) && (*(uint *)(DAT_000e9a24 + 0xe8fcc + (uVar8 + 0x88) * 8) <= uVar20)) {
      uVar5 = ~uVar21 + uVar24 & 7;
      iVar4 = DAT_000e9a24 + 0xe8fcc + (uVar8 + 0x87) * 8;
      iVar15 = iVar4;
      if (uVar5 == 0) {
LAB_000e9070:
        do {
          uVar8 = uVar21 + 1;
          cVar18 = (char)uVar21;
          uVar21 = uVar21 + 8;
          if (uVar8 == uVar24) {
            *(char *)(DAT_000e9a78 + 0xea259) = cVar18;
            goto LAB_000e90f6;
          }
          cVar35 = cVar18;
        } while ((((((*(uint *)(iVar15 + 0x10) <= uVar20) &&
                    (cVar35 = (char)uVar8, *(uint *)(iVar15 + 0x18) <= uVar20)) &&
                   (cVar35 = cVar18 + '\x02', *(uint *)(iVar15 + 0x20) <= uVar20)) &&
                  ((cVar35 = cVar18 + '\x03', *(uint *)(iVar15 + 0x28) <= uVar20 &&
                   (cVar35 = cVar18 + '\x04', *(uint *)(iVar15 + 0x30) <= uVar20)))) &&
                 (cVar35 = cVar18 + '\x05', *(uint *)(iVar15 + 0x38) <= uVar20)) &&
                ((cVar35 = cVar18 + '\x06', *(uint *)(iVar15 + 0x40) <= uVar20 &&
                 (puVar17 = (uint *)(iVar15 + 0x48), iVar15 = iVar15 + 0x40, cVar35 = cVar18 + '\a',
                 *puVar17 <= uVar20))));
      }
      else {
        iVar15 = iVar4 + 8;
        cVar35 = (char)uVar21;
        uVar21 = uVar8 + 2;
        if (*(uint *)(iVar4 + 0x10) <= uVar20) {
          if (uVar5 != 1) {
            iVar31 = iVar15;
            if (uVar5 != 2) {
              if (uVar5 != 3) {
                if (uVar5 != 4) {
                  if (uVar5 != 5) {
                    if (uVar5 != 6) {
                      cVar35 = (char)uVar21;
                      iVar15 = iVar4 + 0x10;
                      uVar21 = uVar8 + 3;
                      if (uVar20 < *(uint *)(iVar4 + 0x18)) goto LAB_000e90ec;
                    }
                    puVar17 = (uint *)(iVar15 + 0x10);
                    cVar35 = (char)uVar21;
                    iVar15 = iVar15 + 8;
                    uVar21 = uVar21 + 1;
                    if (uVar20 < *puVar17) goto LAB_000e90ec;
                  }
                  puVar17 = (uint *)(iVar15 + 0x10);
                  cVar35 = (char)uVar21;
                  iVar15 = iVar15 + 8;
                  uVar21 = uVar21 + 1;
                  if (uVar20 < *puVar17) goto LAB_000e90ec;
                }
                puVar17 = (uint *)(iVar15 + 0x10);
                cVar35 = (char)uVar21;
                iVar15 = iVar15 + 8;
                uVar21 = uVar21 + 1;
                if (uVar20 < *puVar17) goto LAB_000e90ec;
              }
              cVar35 = (char)uVar21;
              iVar31 = iVar15 + 8;
              uVar21 = uVar21 + 1;
              if (uVar20 < *(uint *)(iVar15 + 0x10)) goto LAB_000e90ec;
            }
            iVar15 = iVar31 + 8;
            cVar35 = (char)uVar21;
            uVar21 = uVar21 + 1;
            if (uVar20 < *(uint *)(iVar31 + 0x10)) goto LAB_000e90ec;
          }
          goto LAB_000e9070;
        }
      }
LAB_000e90ec:
      *(char *)(DAT_000e9a28 + 0xe9be5) = cVar35;
    }
LAB_000e90f6:
    uVar21 = (uint)*(byte *)(DAT_000e9a2c + 0xe9bf0);
    uVar24 = (uint)*(byte *)(DAT_000e9a2c + 0xe9129);
    uVar8 = uVar21 + 1;
    if ((uVar8 < uVar24) && (*(uint *)(DAT_000e9a2c + 0xe90fe + uVar21 * 8 + 0x34) <= uVar20)) {
      uVar5 = ~uVar8 + uVar24 & 7;
      iVar4 = DAT_000e9a2c + 0xe90fe + (uVar21 + 5) * 8;
      iVar15 = iVar4 + 4;
      if (uVar5 == 0) {
LAB_000e91a8:
        do {
          uVar21 = uVar8 + 1;
          cVar18 = (char)uVar8;
          uVar8 = uVar8 + 8;
          if (uVar21 == uVar24) {
            *(char *)(DAT_000e9a74 + 0xea248) = cVar18;
            goto LAB_000e922e;
          }
          cVar35 = cVar18;
        } while ((((*(uint *)(iVar15 + 0x10) <= uVar20) &&
                  (cVar35 = (char)uVar21, *(uint *)(iVar15 + 0x18) <= uVar20)) &&
                 (cVar35 = cVar18 + '\x02', *(uint *)(iVar15 + 0x20) <= uVar20)) &&
                (((cVar35 = cVar18 + '\x03', *(uint *)(iVar15 + 0x28) <= uVar20 &&
                  (cVar35 = cVar18 + '\x04', *(uint *)(iVar15 + 0x30) <= uVar20)) &&
                 ((cVar35 = cVar18 + '\x05', *(uint *)(iVar15 + 0x38) <= uVar20 &&
                  ((cVar35 = cVar18 + '\x06', *(uint *)(iVar15 + 0x40) <= uVar20 &&
                   (puVar17 = (uint *)(iVar15 + 0x48), iVar15 = iVar15 + 0x40,
                   cVar35 = cVar18 + '\a', *puVar17 <= uVar20))))))));
      }
      else {
        iVar15 = iVar4 + 0xc;
        cVar35 = (char)uVar8;
        uVar8 = uVar21 + 2;
        if (*(uint *)(iVar4 + 0x14) <= uVar20) {
          if (uVar5 != 1) {
            iVar31 = iVar15;
            if (uVar5 != 2) {
              if (uVar5 != 3) {
                if (uVar5 != 4) {
                  if (uVar5 != 5) {
                    if (uVar5 != 6) {
                      cVar35 = (char)uVar8;
                      iVar15 = iVar4 + 0x14;
                      uVar8 = uVar21 + 3;
                      if (uVar20 < *(uint *)(iVar4 + 0x1c)) goto LAB_000e9224;
                    }
                    puVar17 = (uint *)(iVar15 + 0x10);
                    cVar35 = (char)uVar8;
                    iVar15 = iVar15 + 8;
                    uVar8 = uVar8 + 1;
                    if (uVar20 < *puVar17) goto LAB_000e9224;
                  }
                  puVar17 = (uint *)(iVar15 + 0x10);
                  cVar35 = (char)uVar8;
                  iVar15 = iVar15 + 8;
                  uVar8 = uVar8 + 1;
                  if (uVar20 < *puVar17) goto LAB_000e9224;
                }
                puVar17 = (uint *)(iVar15 + 0x10);
                cVar35 = (char)uVar8;
                iVar15 = iVar15 + 8;
                uVar8 = uVar8 + 1;
                if (uVar20 < *puVar17) goto LAB_000e9224;
              }
              cVar35 = (char)uVar8;
              iVar31 = iVar15 + 8;
              uVar8 = uVar8 + 1;
              if (uVar20 < *(uint *)(iVar15 + 0x10)) goto LAB_000e9224;
            }
            iVar15 = iVar31 + 8;
            cVar35 = (char)uVar8;
            uVar8 = uVar8 + 1;
            if (uVar20 < *(uint *)(iVar31 + 0x10)) goto LAB_000e9224;
          }
          goto LAB_000e91a8;
        }
      }
LAB_000e9224:
      *(char *)((int)&DAT_000e9d1c + DAT_000e9a30 + 2) = cVar35;
    }
  }
LAB_000e922e:
  iVar15 = DAT_000e9a70;
  if ((uVar27 & 0xfffffffd) == 0) {
    iVar4 = 8;
    *param_1 = *(uchar *)(DAT_000e9a70 + 0xea2a6);
    param_1[1] = *(byte *)(iVar15 + 0xea2a7) | 0x20;
    param_1[2] = *(uchar *)(iVar15 + 0xea2a8);
    param_1[3] = *(byte *)(iVar15 + 0xea2a9) | 0x20;
    param_1[4] = *(uchar *)(iVar15 + 0xea2aa);
    param_1[5] = *(byte *)(iVar15 + 0xea2ab) | 0x20;
    param_1[6] = *(uchar *)(iVar15 + 0xea2ac);
    local_2c[0] = *(byte *)(iVar15 + 0xea2ad) | 0x20;
    param_1[7] = (uchar)local_2c[0];
    iVar16 = *(int *)(iVar15 + 0xea27e);
  }
  else {
    iVar4 = 0;
  }
  if (iVar16 == 0) {
    local_64 = -0x80;
    uVar27 = *(uint *)(DAT_000e9aa0 + 0xe99e8);
LAB_000e92c4:
    bVar29 = 1;
    bVar36 = false;
  }
  else {
    iVar15 = DAT_000e9a34 + 0xe9246;
    uVar27 = (uint)*(byte *)(DAT_000e9a34 + 0xe9270);
    if (uVar27 == 0x7f) {
      local_64 = -0x80;
    }
    else if (*(char *)(DAT_000e9a34 + 0xe9e23) == '\0') {
      if (*(byte *)(DAT_000e9a34 + 0xe9271) == 0) {
        local_64 = 0;
      }
      else {
        uVar8 = (uint)*(byte *)(DAT_000e9a34 + 0xe9d38);
        iVar31 = 0;
        if (uVar8 + 1 < (uint)*(byte *)(DAT_000e9a34 + 0xe9271)) {
          iVar30 = iVar15 + (uVar8 + 5) * 8;
          iVar15 = iVar15 + (uVar8 + 6) * 8;
          iVar12 = *(int *)(iVar30 + 4);
          iVar30 = (int)*(short *)(iVar30 + 8);
          if (0 < *(int *)(iVar15 + 4) - iVar12) {
            iVar31 = __divsi3((*(short *)(iVar15 + 8) - iVar30) * (uVar20 - iVar12));
          }
        }
        else {
          iVar30 = (int)*(short *)(iVar15 + uVar8 * 8 + 0x30);
        }
        local_64 = -0x80;
        if (-0x81 < iVar31 + iVar30) {
          local_64 = iVar31 + iVar30;
        }
        if (local_64 < 0x2b) {
          local_64 = local_64 - uVar27;
        }
        else {
          local_64 = 0x2a - uVar27;
        }
      }
    }
    else {
      local_64 = 0;
    }
    uVar27 = *(uint *)(DAT_000e9a38 + 0xe92b6);
    if ((*(byte *)(iVar16 + uVar27 * 0x1a + 1) & 0x7f) +
        (*(byte *)(iVar16 + uVar27 * 0x1a) & 0x7f) * 0x80 != 0x3fff) goto LAB_000e92c4;
    bVar29 = 0;
    bVar36 = true;
  }
  iVar3 = DAT_000e9a50;
  iVar2 = DAT_000e9a4c;
  iVar12 = DAT_000e9a48;
  iVar30 = DAT_000e9a44;
  iVar31 = DAT_000e9a40;
  iVar15 = DAT_000e9a3c;
  puVar22 = param_1 + iVar4;
  bVar34 = local_70 != 0;
  iVar28 = DAT_000e9a3c + 0xe92dc;
  iVar25 = DAT_000e9a44 + 0xe92f8;
  iVar4 = local_70 + 1;
  iVar23 = 0;
  puVar26 = puVar22;
  while( true ) {
    iVar11 = uVar27 * 0x1a + iVar23 * 3;
    iVar32 = iVar11 + 2;
    if ((local_64 < -0x7f) ||
       (iVar6 = (int)*(short *)(iVar2 + iVar23 * 2 + 0xe9ec8), iVar6 == -0x8000)) {
      uVar8 = 0x7f;
    }
    else {
      bVar9 = *(byte *)(iVar16 + iVar32);
      uVar8 = (uint)bVar9;
      if (bVar34) {
        if ((*(int *)(iVar2 + 0xe9318) + 2 == *(int *)(iVar2 + 0xe9d54)) ||
           (*(int *)(iVar2 + 0xe9d54) == 5)) {
          uVar8 = (int)((short)(ushort)bVar9 * 7 + (uint)*(byte *)(local_70 + 2)) >> 3;
        }
        else {
          uVar8 = (int)((short)(ushort)bVar9 * 3 + (uint)*(byte *)(local_70 + 2)) >> 2;
        }
      }
      if (uVar8 != 0x7f) {
        if (((*(short *)(iVar3 + 0xe9ec0) == 2) && (*(char *)(iVar3 + 0xe9e14) != '\0')) &&
           (uVar27 < *(ushort *)(iVar3 + 0xe9ec8))) {
          iVar33 = *(int *)(iVar3 + 0xe9334);
          if (iVar33 == 0) {
            uVar8 = (int)(uVar8 + *(int *)(iVar28 + 0xb14) * 3) >> 2;
          }
          else if (iVar33 == 1) {
            uVar8 = (int)(uVar8 + *(int *)(iVar28 + 0xb14)) >> 1;
          }
          else if (iVar33 == 2) {
            uVar8 = (int)(uVar8 * 3 + *(int *)(iVar28 + 0xb14)) >> 2;
          }
        }
        if (bVar36) {
          uVar8 = uVar8 + 8;
        }
        iVar33 = (uVar8 - iVar6) - local_64;
        UnsignedSaturate(iVar33,7);
        UnsignedDoesSaturate(iVar33,7);
        iVar6 = *(int *)(iVar28 + 0xc74);
        if (*(char *)(iVar12 + iVar23 + 0xe9f5f) == '\x01') {
          iVar6 = iVar33 + *(char *)(iVar6 + *(int *)(iVar12 + 0xe931a));
        }
        uVar8 = UnsignedSaturate(iVar6,7);
        UnsignedDoesSaturate(iVar6,7);
        uVar8 = uVar8 & 0xff;
      }
    }
    if ((iVar16 != 0) && (local_6c <= *(int *)(iVar31 + 0xe92fa) + 1U)) {
      *(uint *)(iVar28 + 0xb14) = (uint)*(byte *)(iVar16 + iVar32);
    }
    *puVar26 = (uchar)uVar8;
    iVar16 = *(int *)(iVar15 + 0xe9e84);
    if (iVar16 == 0) {
      bVar9 = 0;
      bVar13 = 0;
      local_30 = 0;
      local_2c[0] = 0;
    }
    else {
      iVar11 = iVar11 + 3;
      iVar32 = *(int *)(iVar15 + 0xe92ec);
      iVar16 = (*(byte *)(iVar16 + iVar11 + 1) & 0x7f) + (*(byte *)(iVar16 + iVar11) & 0x7f) * 0x80;
      if ((bool)(bVar29 & bVar34)) {
        if ((iVar32 + 2 == *(int *)(iVar15 + 0xe9d28)) || (*(int *)(iVar15 + 0xe9d28) == 5)) {
          iVar16 = (int)(iVar16 * 7 +
                        (*(byte *)(iVar4 + 3) & 0x7f) + (*(byte *)(local_70 + 3) & 0x7f) * 0x80) >>
                   3;
        }
        else {
          iVar16 = (int)(iVar16 * 3 +
                        (*(byte *)(iVar4 + 3) & 0x7f) + (*(byte *)(local_70 + 3) & 0x7f) * 0x80) >>
                   2;
        }
      }
      if (iVar32 + 1U < local_6c) {
        if (((*(short *)(MaResMgr_AllocFmExtWave + DAT_000e9a54) == 2) &&
            (*(char *)(DAT_000e9a54 + 0xe9f64) != '\0')) &&
           (*(uint *)(DAT_000e9a54 + 0xe9488) < (uint)*(ushort *)(DAT_000e9a54 + 0xea018))) {
          if (iVar32 == 0) {
            iVar16 = iVar16 + *(int *)(iVar28 + 0xaf4) * 3 >> 2;
          }
          else if (iVar32 == 1) {
            iVar16 = iVar16 + *(int *)(iVar28 + 0xaf4) >> 1;
          }
          else if (iVar32 == 2) {
            iVar16 = iVar16 * 3 + *(int *)(iVar28 + 0xaf4) >> 2;
          }
        }
      }
      else {
        *(int *)(iVar28 + 0xaf4) = iVar16;
      }
      uVar27 = iVar16 + *(short *)(iVar25 + iVar23 * 2 + 0xbb0);
      if (*(char *)(iVar25 + iVar23 + 0xc69) == '\x01') {
        uVar27 = uVar27 + (int)*(short *)(*(int *)(iVar28 + 0xc94) + *(int *)(iVar30 + 0xe9314) * 2)
        ;
      }
      uVar27 = uVar27 & ~((int)uVar27 >> 0x1f);
      if (0x27d6 < (int)uVar27) {
        uVar27 = 0x27d7;
      }
      iVar16 = FUN_000e5c98(local_2c,&local_30,uVar27);
      if (iVar16 < 0) {
        return 0xffffffff;
      }
      bVar13 = (byte)local_30 & 0x7f;
      bVar9 = (byte)((local_30 & 0x3ff) >> 7) | (byte)((local_2c[0] & 7) << 3);
    }
    iVar23 = iVar23 + 1;
    puVar26[1] = bVar9;
    puVar26[2] = bVar13;
    iVar28 = iVar28 + 4;
    puVar26 = puVar26 + 3;
    local_70 = local_70 + 3;
    iVar4 = iVar4 + 3;
    if (iVar23 == 8) break;
    uVar27 = *(uint *)(DAT_000e9a58 + 0xe950e);
    iVar16 = *(int *)(DAT_000e9a58 + 0xea0a2);
  }
  if (bVar36) {
    puVar22[0x18] = '@';
    puVar22[0x19] = '\0';
    goto LAB_000e9642;
  }
  iVar16 = DAT_000e9a64 + 0xe9600;
  if (*(char *)(DAT_000e9a64 + 0xea1dc) == '\x01') {
    iVar15 = 0;
    if (*(byte *)((int)&DAT_000e9a34 + DAT_000e9a64) != 0) {
      uVar27 = (uint)*(byte *)(DAT_000e9a64 + 0xea0f1);
      if (uVar27 + 1 < (uint)*(byte *)((int)&DAT_000e9a34 + DAT_000e9a64)) {
        iVar4 = uVar27 + 0x87;
        iVar15 = *(int *)(iVar16 + iVar4 * 8);
        if (*(int *)(iVar16 + (uVar27 + 0x88) * 8) - iVar15 < 1) {
          iVar31 = 0;
          iVar4 = (int)*(short *)(iVar16 + iVar4 * 8 + 4);
        }
        else {
          iVar4 = (int)*(short *)(iVar16 + iVar4 * 8 + 4);
          iVar31 = __divsi3((*(short *)(iVar16 + (uVar27 + 0x88) * 8 + 4) - iVar4) *
                            (uVar20 - iVar15));
        }
      }
      else {
        iVar31 = 0;
        iVar4 = (int)*(short *)(iVar16 + uVar27 * 8 + 0x43c);
      }
      iVar15 = UnsignedSaturate(iVar4 + iVar31,0xe);
      UnsignedDoesSaturate(iVar4 + iVar31,0xe);
      iVar15 = iVar15 + -0x2000;
    }
    sVar19 = *(short *)(DAT_000e9a7c + 0xe981c);
    if (*(char *)(DAT_000e9a7c + 0xea23c) == '\0') {
      if (sVar19 == -0x8000) {
        uVar27 = (uint)*(ushort *)(*(int *)(DAT_000e9a7c + 0xea38c) + 0x10);
      }
      else {
        FUN_000e5c98(local_2c,&local_30,*(undefined2 *)(*(int *)(DAT_000e9a7c + 0xea38c) + 0x10));
        uVar27 = local_2c[0] * 0x4b0 + (int)sVar19;
      }
    }
    else {
      uVar27 = (uint)sVar19;
    }
    iVar4 = DAT_000e9c10;
    iVar16 = DAT_000e9a90;
    iVar15 = iVar15 * *(short *)(DAT_000e9a80 + 0xea356);
    iVar31 = (int)*(short *)(DAT_000e9a80 + 0xea3c4) +
             *(int *)(MaResMgr_AllocMotor + DAT_000e9a80 + 2) + uVar27;
    if (iVar15 < 0) {
      iVar15 = -iVar15;
      iVar30 = -1;
    }
    else {
      iVar30 = 1;
    }
    iVar30 = iVar30 * (iVar15 >> 0xd);
    iVar15 = -6000;
    if (-0x1771 < iVar30) {
      iVar15 = iVar30;
    }
    if (iVar15 < 0x1771) {
      iVar31 = iVar31 + iVar15;
    }
    else {
      iVar31 = iVar31 + 6000;
    }
    if (local_34 == 0) {
      iVar31 = iVar31 + *(short *)(DAT_000e9a88 + (*(byte *)(DAT_000e9a84 + 0xe9872) & 0x7f) * 2 +
                                  0xe9890);
    }
    uVar27 = (uint)*(byte *)(DAT_000e9a8c + 0xea534);
    uVar8 = (uint)*(byte *)(DAT_000e9a8c + 0xea0be);
    if ((uVar27 < uVar8) &&
       (iVar15 = DAT_000e9a8c + 0xe987e + (uVar27 + 0x210) * 4, *(uint *)(iVar15 + 4) <= uVar20)) {
      uVar24 = ~uVar27 + uVar8 & 3;
      cVar35 = *(char *)(DAT_000e9a8c + 0xea535);
      puVar17 = (uint *)(iVar15 + 4);
      uVar21 = uVar27;
      if (uVar24 == 0) goto LAB_000e993e;
      cVar35 = cVar35 != '\x01';
      uVar21 = uVar27 + 1;
      cVar18 = (char)uVar21;
      if (uVar21 < uVar8) {
        puVar17 = (uint *)(iVar15 + 8);
        if (*puVar17 <= uVar20) {
          if (uVar24 == 1) goto LAB_000e993e;
          if (uVar24 != 2) {
            puVar17 = (uint *)(iVar15 + 0xc);
            uVar21 = uVar27 + 2;
            cVar35 = !(bool)cVar35;
            cVar18 = (char)uVar21;
            if (uVar20 < *puVar17) goto LAB_000e9b0c;
          }
          uVar27 = uVar21 + 1;
          cVar18 = (char)uVar27;
          uVar24 = puVar17[1];
          puVar17 = puVar17 + 1;
          cVar35 = !(bool)cVar35;
          while (uVar21 = uVar27, uVar24 <= uVar20) {
LAB_000e993e:
            cVar35 = cVar35 != '\x01';
            uVar27 = uVar21 + 4;
            cVar18 = (char)(uVar21 + 1);
            if (uVar8 <= uVar21 + 1) goto LAB_000e996e;
            if (((uVar20 < puVar17[1]) ||
                (bVar36 = !(bool)cVar35, cVar18 = (char)uVar21 + '\x02', cVar35 = bVar36,
                uVar20 < puVar17[2])) ||
               (cVar35 = !bVar36, cVar18 = (char)uVar21 + '\x03', uVar20 < puVar17[3])) break;
            cVar18 = (char)uVar27;
            uVar24 = puVar17[4];
            puVar17 = puVar17 + 4;
            cVar35 = bVar36;
          }
        }
LAB_000e9b0c:
        *(char *)(DAT_000e9c10 + 0xea7cb) = cVar35;
        *(char *)(iVar4 + 0xea7ca) = cVar18;
      }
      else {
LAB_000e996e:
        *(char *)(DAT_000e9a90 + 0xea62d) = cVar35;
        *(char *)(iVar16 + 0xea62c) = cVar18;
      }
    }
    else {
      cVar35 = *(char *)(DAT_000e9c20 + 0xea8ab);
    }
    if (cVar35 == '\0') {
      uVar1 = *(ushort *)(DAT_000e9a94 + 0xea642);
      if (uVar1 < 0x11) {
        iVar16 = (int)(short)uVar1;
        sVar19 = uVar1 + 1;
      }
      else {
        sVar19 = 1;
        iVar16 = 0;
      }
      iVar16 = DAT_000e9a98 + iVar16 * 2;
      *(short *)(DAT_000e9a9c + 0xea64e) = sVar19;
      iVar31 = iVar31 + *(short *)(iVar16 + 0xe9abc);
    }
    else {
      *(undefined2 *)(DAT_000e9c0c + 0xea79e) = 0;
    }
  }
  else {
    iVar31 = *(int *)(DAT_000e9a64 + 0xea1d8);
  }
  uVar7 = UnsignedSaturate(iVar31,0xe);
  UnsignedDoesSaturate(iVar31,0xe);
  FUN_000e5c98(local_2c,&local_30,uVar7);
  puVar22[0x19] = (byte)local_30 & 0x7f;
  puVar22[0x18] = (byte)(local_2c[0] << 3) & 0x38 | (byte)((local_30 << 0x16) >> 0x1d);
LAB_000e9642:
  iVar15 = DAT_000e9a6c;
  iVar16 = DAT_000e9a68;
  uVar27 = *(int *)(DAT_000e9a68 + 0xe966a) + 1;
  piVar14 = (int *)(DAT_000e9a68 + 0xe965e);
  iVar30 = *(int *)(DAT_000e9a68 + 0xe9662);
  iVar4 = *(int *)(DAT_000e9a68 + 0xe9666);
  iVar31 = *(int *)(DAT_000e9a6c + 0xe9654);
  if (0x17 < uVar27) {
    uVar27 = 0;
  }
  *(int *)(DAT_000e9a68 + 0xe965a) = *(int *)(DAT_000e9a68 + 0xe965a) + 1;
  *(int *)(iVar16 + 0xe965e) = *piVar14 + 1;
  *(int *)(iVar16 + 0xe9662) = iVar30 + iVar4;
  *(uint *)(iVar16 + 0xe966a) = uVar27;
  if (iVar31 == 0) {
    param_1[0x23] = '@';
    uVar7 = 0x24;
    param_1[0x22] = '\0';
    *(undefined4 *)(iVar15 + 0xe9654) = 3;
  }
  else if (iVar31 == 2) {
    uVar7 = 0x22;
    *(undefined4 *)(iVar15 + 0xe9654) = 3;
  }
  else {
    uVar7 = 0x1a;
  }
  return uVar7;
}

