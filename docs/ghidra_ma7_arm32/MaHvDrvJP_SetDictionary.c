/* MaHvDrvJP_SetDictionary @ 000e0060 1506B */


/* YAMAHA::MaHvDrvJP_SetDictionary(unsigned char*, unsigned int, unsigned int, void*) */

undefined4 YAMAHA::MaHvDrvJP_SetDictionary(uchar *param_1,uint param_2,uint param_3,void *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uchar *puVar4;
  undefined4 uVar5;
  int iVar6;
  uchar *puVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  uint uVar17;
  uchar *puVar18;
  uint uVar19;
  uint uVar20;
  bool bVar21;
  
  iVar3 = DAT_000e0644;
  if (*(int *)(DAT_000e0644 + 0xe0072) == 1) {
    if (param_3 == 0) {
      iVar3 = FUN_000decd0();
      if (iVar3 != -1) {
        iVar12 = (param_1[0x13] & 0x7f) + (param_1[0x12] & 0x7f) * 0x80;
        iVar6 = (param_1[0x15] & 0x7f) + (param_1[0x14] & 0x7f) * 0x80;
        iVar3 = iVar12 * 5;
        uVar17 = iVar3 + 0x18;
        if ((iVar6 != 0) &&
           (iVar11 = (param_1[0x17] & 0x7f) + (param_1[0x16] & 0x7f) * 0x80, iVar11 != 0)) {
          uVar13 = iVar6 * 0xe + uVar17;
          if (iVar12 == 0) {
LAB_000e023c:
            iVar12 = 0;
            puVar7 = param_1 + iVar3 + 0x22;
            puVar4 = (uchar *)0x0;
            puVar18 = param_1 + uVar17;
            do {
              if (puVar4 == (uchar *)0x0 || iVar12 == 0) {
                if (puVar7[-10] - 1 < 0x20 || 0x7e < puVar7[-10]) {
                  return 0xfffffffc;
                }
                if (puVar18[1] - 1 < 0x20 || 0x7e < puVar18[1]) {
                  return 0xfffffffc;
                }
                if (puVar18[2] - 1 < 0x20 || 0x7e < puVar18[2]) {
                  return 0xfffffffc;
                }
                if (puVar18[3] - 1 < 0x20 || 0x7e < puVar18[3]) {
                  return 0xfffffffc;
                }
                if (puVar18[4] - 1 < 0x20 || 0x7e < puVar18[4]) {
                  return 0xfffffffc;
                }
                if (puVar18[5] - 1 < 0x20 || 0x7e < puVar18[5]) {
                  return 0xfffffffc;
                }
                if (puVar18[6] - 1 < 0x20 || 0x7e < puVar18[6]) {
                  return 0xfffffffc;
                }
                if (puVar18[7] - 1 < 0x20 || 0x7e < puVar18[7]) {
                  return 0xfffffffc;
                }
                if (puVar18[8] - 1 < 0x20 || 0x7e < puVar18[8]) {
                  return 0xfffffffc;
                }
                if (puVar18[9] - 1 < 0x20 || 0x7e < puVar18[9]) {
                  return 0xfffffffc;
                }
              }
              else {
                bVar21 = true;
                iVar10 = 0;
                do {
                  uVar17 = (uint)puVar18[iVar10];
                  if (uVar17 - 1 < 0x20 || 0x7e < uVar17) {
                    return 0xfffffffc;
                  }
                  if (bVar21) {
                    bVar21 = uVar17 <= puVar4[iVar10];
                    if (uVar17 < puVar4[iVar10]) {
                      return 0xfffffffc;
                    }
                  }
                  else {
                    bVar21 = false;
                  }
                  iVar10 = iVar10 + 1;
                } while (iVar10 != 10);
              }
              uVar17 = (puVar7[3] & 0x7f) +
                       ((puVar7[2] & 0x7f) +
                       ((puVar7[1] & 0x7f) + (puVar18[10] & 0x7f) * 0x80) * 0x80) * 0x80;
              if (param_2 - 3 < uVar17 || uVar17 < uVar13) {
                return 0xfffffffc;
              }
              iVar12 = iVar12 + 1;
              puVar7 = puVar7 + 0xe;
              puVar4 = puVar18;
              puVar18 = puVar18 + 0xe;
            } while (iVar12 != iVar6);
            if ((uVar13 <= param_2 - 0xd) &&
               ((param_1[uVar13 + 1] & 0x7f) + (param_1[uVar13] & 0x7f) * 0x80 < 2)) {
              iVar12 = 0;
              iVar10 = 0;
              while( true ) {
                iVar12 = iVar12 + 1;
                uVar17 = (param_1[uVar13 + 3] & 0x7f) + (param_1[uVar13 + 2] & 0x7f) * 0x80;
                iVar10 = iVar10 + uVar17;
                iVar14 = uVar17 * 0x1a + uVar13;
                if (uVar17 == 0) break;
                uVar15 = iVar14 + 10;
                uVar19 = (param_1[uVar13 + 5] & 0x7f) + (param_1[uVar13 + 4] & 0x7f) * 0x80;
                if (uVar17 < uVar19) {
                  return 0xfffffffc;
                }
                uVar20 = (param_1[uVar13 + 7] & 0x7f) + (param_1[uVar13 + 6] & 0x7f) * 0x80;
                if (uVar17 < uVar20 || uVar20 < uVar19) {
                  return 0xfffffffc;
                }
                if (uVar17 < (param_1[uVar13 + 9] & 0x7f) + (param_1[uVar13 + 8] & 0x7f) * 0x80) {
                  return 0xfffffffc;
                }
                if (iVar12 == iVar11) {
                  if (param_2 != iVar10 * 0x1a + iVar3 + iVar6 * 0xe + 0x1a + iVar12 * 10) {
                    return 0xfffffffc;
                  }
                  iVar3 = param_2 - 2;
                  pbVar16 = param_1 + iVar3;
                  uVar17 = 0;
                  if (iVar3 != 0) {
                    pbVar8 = param_1 + 1;
                    iVar6 = DAT_000e0648 + 0xe0572;
                    uVar13 = ~((int)param_1 - (int)pbVar16) & 3;
                    uVar17 = *(ushort *)(iVar6 + (*param_1 ^ 0xff) * 2 + 0xbec) ^ 0xff00;
                    if (pbVar16 != pbVar8) {
                      if (uVar13 == 0) goto LAB_000e05de;
                      if (uVar13 != 1) {
                        pbVar9 = pbVar8;
                        if (uVar13 != 2) {
                          pbVar9 = param_1 + 2;
                          uVar17 = ((uint)*(ushort *)
                                           (iVar6 + ((uint)*pbVar8 ^ uVar17 >> 8) * 2 + 0xbec) ^
                                   uVar17 << 8) & 0xffff;
                        }
                        pbVar8 = pbVar9 + 1;
                        uVar17 = ((uint)*(ushort *)
                                         (iVar6 + ((uint)*pbVar9 ^ uVar17 >> 8) * 2 + 0xbec) ^
                                 uVar17 << 8) & 0xffff;
                      }
                      uVar13 = (uint)*pbVar8 ^ uVar17 >> 8;
                      for (pbVar8 = pbVar8 + 1;
                          uVar17 = ((uint)*(ushort *)(iVar6 + uVar13 * 2 + 0xbec) ^ uVar17 << 8) &
                                   0xffff, pbVar16 != pbVar8; pbVar8 = pbVar8 + 4) {
LAB_000e05de:
                        uVar17 = ((uint)*(ushort *)
                                         (iVar6 + ((uint)*pbVar8 ^ uVar17 >> 8) * 2 + 0xbec) ^
                                 uVar17 << 8) & 0xffff;
                        uVar17 = ((uint)*(ushort *)
                                         (iVar6 + ((uint)pbVar8[1] ^ uVar17 >> 8) * 2 + 0xbec) ^
                                 uVar17 << 8) & 0xffff;
                        uVar17 = ((uint)*(ushort *)
                                         (iVar6 + ((uint)pbVar8[2] ^ uVar17 >> 8) * 2 + 0xbec) ^
                                 uVar17 << 8) & 0xffff;
                        uVar13 = (uint)pbVar8[3] ^ uVar17 >> 8;
                      }
                    }
                    uVar17 = ~uVar17 & 0xffff;
                  }
                  if (uVar17 != CONCAT11(param_1[iVar3],param_1[param_2 - 1])) {
                    return 0xfffffffc;
                  }
                  return 0;
                }
                if (param_2 - 0xd < uVar15) {
                  return 0xfffffffc;
                }
                uVar13 = uVar15;
                if (1 < (param_1[iVar14 + 0xb] & 0x7f) + (param_1[uVar15] & 0x7f) * 0x80) {
                  return 0xfffffffc;
                }
              }
            }
          }
          else {
            uVar19 = (uint)param_1[0x18];
            if (0x1f < uVar19 - 1 && uVar19 < 0x7f) {
              puVar7 = param_1 + 0x19;
              iVar10 = 0;
              puVar4 = param_1 + 0x18;
              puVar18 = param_1 + 0x1d;
              while( true ) {
                uVar15 = uVar19;
                iVar10 = iVar10 + 1;
                uVar19 = (puVar7[3] & 0x7f) +
                         ((puVar7[2] & 0x7f) +
                         ((puVar7[1] & 0x7f) + (puVar18[-4] & 0x7f) * 0x80) * 0x80) * 0x80;
                if (uVar13 < uVar19 || uVar19 < uVar17) break;
                if (iVar10 == iVar12) goto LAB_000e023c;
                uVar19 = (uint)puVar7[4];
                puVar7 = puVar7 + 5;
                if (uVar19 - 1 < 0x20 || 0x7e < uVar19) {
                  return 0xfffffffc;
                }
                bVar21 = puVar4 != (uchar *)0x0;
                puVar4 = puVar18;
                puVar18 = puVar18 + 5;
                if ((iVar10 != 0 && bVar21) && (uVar19 < uVar15)) {
                  return 0xfffffffc;
                }
              }
            }
          }
        }
      }
      return 0xfffffffc;
    }
    if (param_3 == 1) {
      if (param_1 == (uchar *)0x0) {
        *(undefined4 *)(DAT_000e0644 + 0xe0b9a) = 0;
        uVar5 = 0;
      }
      else {
        iVar6 = FUN_000decd0();
        if (iVar6 < 0) {
          return 0xfffffffc;
        }
        *(uchar **)(iVar3 + 0xe0b9a) = param_1;
        uVar5 = 0;
        *(ushort *)(iVar3 + 0xe0b9e) = (param_1[0xd] & 0x7f) + (param_1[0xc] & 0x7f) * 0x80;
        *(uint *)(iVar3 + 0xe0ba2) = (param_1[0xf] & 0x7f) + (param_1[0xe] & 0x7f) * 0x80;
        *(ushort *)(iVar3 + 0xe0baa) = (param_1[0x11] & 0x7f) + (param_1[0x10] & 0x7f) * 0x80;
        iVar6 = (param_1[0x13] & 0x7f) + (param_1[0x12] & 0x7f) * 0x80;
        *(short *)(iVar3 + 0xe0bac) = (short)iVar6;
        bVar1 = param_1[0x14];
        bVar2 = param_1[0x15];
        iVar6 = iVar6 * 5 + 0x18;
        *(int *)(iVar3 + 0xe0bae) = iVar6;
        *(uint *)(iVar3 + 0xe0ba6) = param_2;
        *(uint *)(iVar3 + 0xe0bb2) = iVar6 + ((bVar2 & 0x7f) + (bVar1 & 0x7f) * 0x80) * 0xe;
      }
    }
    else {
      uVar5 = 0xfffffffe;
    }
  }
  else {
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

