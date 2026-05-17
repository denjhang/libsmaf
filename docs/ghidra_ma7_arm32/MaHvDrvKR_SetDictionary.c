/* MaHvDrvKR_SetDictionary @ 000e7668 1514B */


/* YAMAHA::MaHvDrvKR_SetDictionary(unsigned char*, unsigned int, unsigned int, void*) */

undefined4 YAMAHA::MaHvDrvKR_SetDictionary(uchar *param_1,uint param_2,uint param_3,void *param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uchar *puVar6;
  int iVar7;
  uchar *puVar8;
  int iVar9;
  int iVar10;
  uchar *puVar11;
  uchar *puVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  byte *pbVar18;
  uint uVar19;
  byte *pbVar20;
  byte *pbVar21;
  bool bVar22;
  
  iVar3 = DAT_000e7c54;
  if (*(int *)(DAT_000e7c54 + 0xe767a) == 1) {
    if (param_3 == 0) {
      iVar3 = FUN_000e6110();
      if (iVar3 != -1) {
        iVar13 = (param_1[0x13] & 0x7f) + (param_1[0x12] & 0x7f) * 0x80;
        iVar7 = (param_1[0x15] & 0x7f) + (param_1[0x14] & 0x7f) * 0x80;
        iVar3 = iVar13 * 5;
        uVar17 = iVar3 + 0x18;
        if ((iVar7 != 0) &&
           (iVar10 = (param_1[0x17] & 0x7f) + (param_1[0x16] & 0x7f) * 0x80, iVar10 != 0)) {
          uVar14 = iVar7 * 0xe + uVar17;
          if (iVar13 == 0) {
LAB_000e7844:
            iVar13 = 0;
            puVar8 = param_1 + iVar3 + 0x22;
            puVar12 = (uchar *)0x0;
            puVar11 = param_1 + uVar17;
            do {
              if (puVar12 == (uchar *)0x0 || iVar13 == 0) {
                if (puVar8[-10] - 1 < 0x20 || 0x7e < puVar8[-10]) {
                  return 0xfffffffc;
                }
                if (puVar11[1] - 1 < 0x20 || 0x7e < puVar11[1]) {
                  return 0xfffffffc;
                }
                if (puVar11[2] - 1 < 0x20 || 0x7e < puVar11[2]) {
                  return 0xfffffffc;
                }
                if (puVar11[3] - 1 < 0x20 || 0x7e < puVar11[3]) {
                  return 0xfffffffc;
                }
                if (puVar11[4] - 1 < 0x20 || 0x7e < puVar11[4]) {
                  return 0xfffffffc;
                }
                if (puVar11[5] - 1 < 0x20 || 0x7e < puVar11[5]) {
                  return 0xfffffffc;
                }
                if (puVar11[6] - 1 < 0x20 || 0x7e < puVar11[6]) {
                  return 0xfffffffc;
                }
                if (puVar11[7] - 1 < 0x20 || 0x7e < puVar11[7]) {
                  return 0xfffffffc;
                }
                if (puVar11[8] - 1 < 0x20 || 0x7e < puVar11[8]) {
                  return 0xfffffffc;
                }
                if (puVar11[9] - 1 < 0x20 || 0x7e < puVar11[9]) {
                  return 0xfffffffc;
                }
              }
              else {
                bVar22 = true;
                iVar9 = 0;
                do {
                  uVar17 = (uint)puVar11[iVar9];
                  if (uVar17 - 1 < 0x20 || 0x7e < uVar17) {
                    return 0xfffffffc;
                  }
                  if (bVar22) {
                    bVar22 = uVar17 <= puVar12[iVar9];
                    if (uVar17 < puVar12[iVar9]) {
                      return 0xfffffffc;
                    }
                  }
                  else {
                    bVar22 = false;
                  }
                  iVar9 = iVar9 + 1;
                } while (iVar9 != 10);
              }
              uVar17 = (puVar8[3] & 0x7f) +
                       ((puVar8[2] & 0x7f) +
                       ((puVar8[1] & 0x7f) + (puVar11[10] & 0x7f) * 0x80) * 0x80) * 0x80;
              if (param_2 - 3 < uVar17 || uVar17 < uVar14) {
                return 0xfffffffc;
              }
              iVar13 = iVar13 + 1;
              puVar8 = puVar8 + 0xe;
              puVar12 = puVar11;
              puVar11 = puVar11 + 0xe;
            } while (iVar13 != iVar7);
            if ((uVar14 <= param_2 - 0xd) &&
               ((param_1[uVar14 + 1] & 0x7f) + (param_1[uVar14] & 0x7f) * 0x80 < 3)) {
              iVar13 = 0;
              iVar9 = 0;
              while( true ) {
                iVar13 = iVar13 + 1;
                uVar17 = (param_1[uVar14 + 3] & 0x7f) + (param_1[uVar14 + 2] & 0x7f) * 0x80;
                iVar9 = iVar9 + uVar17;
                iVar16 = uVar17 * 0x1a + uVar14;
                if (uVar17 == 0) break;
                uVar15 = iVar16 + 10;
                uVar19 = (param_1[uVar14 + 5] & 0x7f) + (param_1[uVar14 + 4] & 0x7f) * 0x80;
                if (uVar17 < uVar19) {
                  return 0xfffffffc;
                }
                uVar5 = (param_1[uVar14 + 7] & 0x7f) + (param_1[uVar14 + 6] & 0x7f) * 0x80;
                if (uVar17 < uVar5 || uVar5 < uVar19) {
                  return 0xfffffffc;
                }
                if (uVar17 < (param_1[uVar14 + 9] & 0x7f) + (param_1[uVar14 + 8] & 0x7f) * 0x80) {
                  return 0xfffffffc;
                }
                if (iVar13 == iVar10) {
                  if (param_2 != iVar9 * 0x1a + iVar3 + iVar7 * 0xe + 0x1a + iVar13 * 10) {
                    return 0xfffffffc;
                  }
                  iVar3 = param_2 - 2;
                  pbVar18 = param_1 + iVar3;
                  uVar17 = 0;
                  if (iVar3 != 0) {
                    pbVar20 = param_1 + 1;
                    iVar7 = DAT_000e7c58 + 0xe7b7e;
                    uVar14 = ~((int)param_1 - (int)pbVar18) & 3;
                    uVar17 = *(ushort *)(iVar7 + (*param_1 ^ 0xff) * 2 + 0xba0) ^ 0xff00;
                    if (pbVar18 != pbVar20) {
                      if (uVar14 == 0) goto LAB_000e7bea;
                      if (uVar14 != 1) {
                        pbVar21 = pbVar20;
                        if (uVar14 != 2) {
                          pbVar21 = param_1 + 2;
                          uVar17 = ((uint)*(ushort *)
                                           (iVar7 + ((uint)*pbVar20 ^ uVar17 >> 8) * 2 + 0xba0) ^
                                   uVar17 << 8) & 0xffff;
                        }
                        pbVar20 = pbVar21 + 1;
                        uVar17 = ((uint)*(ushort *)
                                         (iVar7 + ((uint)*pbVar21 ^ uVar17 >> 8) * 2 + 0xba0) ^
                                 uVar17 << 8) & 0xffff;
                      }
                      uVar14 = (uint)*pbVar20 ^ uVar17 >> 8;
                      for (pbVar20 = pbVar20 + 1;
                          uVar17 = ((uint)*(ushort *)(iVar7 + uVar14 * 2 + 0xba0) ^ uVar17 << 8) &
                                   0xffff, pbVar18 != pbVar20; pbVar20 = pbVar20 + 4) {
LAB_000e7bea:
                        uVar17 = ((uint)*(ushort *)
                                         (iVar7 + ((uint)*pbVar20 ^ uVar17 >> 8) * 2 + 0xba0) ^
                                 uVar17 << 8) & 0xffff;
                        uVar17 = ((uint)*(ushort *)
                                         (iVar7 + ((uint)pbVar20[1] ^ uVar17 >> 8) * 2 + 0xba0) ^
                                 uVar17 << 8) & 0xffff;
                        uVar17 = ((uint)*(ushort *)
                                         (iVar7 + ((uint)pbVar20[2] ^ uVar17 >> 8) * 2 + 0xba0) ^
                                 uVar17 << 8) & 0xffff;
                        uVar14 = (uint)pbVar20[3] ^ uVar17 >> 8;
                      }
                    }
                    uVar17 = ~uVar17 & 0xffff;
                  }
                  if (uVar17 != (uint)param_1[param_2 - 1] + (uint)param_1[iVar3] * 0x100) {
                    return 0xfffffffc;
                  }
                  return 0;
                }
                if (param_2 - 0xd < uVar15) {
                  return 0xfffffffc;
                }
                uVar14 = uVar15;
                if (2 < (param_1[iVar16 + 0xb] & 0x7f) + (param_1[uVar15] & 0x7f) * 0x80) {
                  return 0xfffffffc;
                }
              }
            }
          }
          else {
            uVar19 = (uint)param_1[0x18];
            if (0x1f < uVar19 - 1 && uVar19 < 0x7f) {
              puVar8 = param_1 + 0x19;
              iVar9 = 0;
              puVar12 = param_1 + 0x1d;
              puVar11 = param_1 + 0x18;
              while( true ) {
                uVar15 = uVar19;
                puVar6 = puVar12;
                iVar9 = iVar9 + 1;
                uVar19 = (puVar8[3] & 0x7f) +
                         ((puVar8[2] & 0x7f) +
                         ((puVar8[1] & 0x7f) + (puVar6[-4] & 0x7f) * 0x80) * 0x80) * 0x80;
                if (uVar14 < uVar19 || uVar19 < uVar17) break;
                if (iVar9 == iVar13) goto LAB_000e7844;
                uVar19 = (uint)puVar8[4];
                puVar8 = puVar8 + 5;
                if (uVar19 - 1 < 0x20 || 0x7e < uVar19) {
                  return 0xfffffffc;
                }
                bVar22 = puVar11 != (uchar *)0x0;
                puVar12 = puVar6 + 5;
                puVar11 = puVar6;
                if ((iVar9 != 0 && bVar22) && (uVar19 < uVar15)) {
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
        *(undefined4 *)(DAT_000e7c54 + 0xe81f6) = 0;
        uVar4 = 0;
      }
      else {
        iVar7 = FUN_000e6110();
        if (iVar7 < 0) {
          return 0xfffffffc;
        }
        *(uchar **)(iVar3 + 0xe81f6) = param_1;
        uVar4 = 0;
        *(ushort *)(iVar3 + 0xe81fa) = (param_1[0xd] & 0x7f) + (param_1[0xc] & 0x7f) * 0x80;
        *(uint *)(iVar3 + 0xe81fe) = (param_1[0xf] & 0x7f) + (param_1[0xe] & 0x7f) * 0x80;
        *(ushort *)(iVar3 + 0xe8206) = (param_1[0x11] & 0x7f) + (param_1[0x10] & 0x7f) * 0x80;
        iVar7 = (param_1[0x13] & 0x7f) + (param_1[0x12] & 0x7f) * 0x80;
        *(short *)(iVar3 + 0xe8208) = (short)iVar7;
        bVar1 = param_1[0x14];
        bVar2 = param_1[0x15];
        iVar7 = iVar7 * 5 + 0x18;
        *(int *)(iVar3 + 0xe820a) = iVar7;
        *(uint *)(iVar3 + 0xe8202) = param_2;
        *(uint *)(iVar3 + 0xe820e) = iVar7 + ((bVar2 & 0x7f) + (bVar1 & 0x7f) * 0x80) * 0xe;
      }
    }
    else {
      uVar4 = 0xfffffffe;
    }
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

