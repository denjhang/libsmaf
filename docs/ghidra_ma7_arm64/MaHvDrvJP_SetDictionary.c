/* MaHvDrvJP_SetDictionary @ 002230f4 2828B */


/* YAMAHA::MaHvDrvJP_SetDictionary(unsigned char*, unsigned int, unsigned int, void*) */

undefined4 YAMAHA::MaHvDrvJP_SetDictionary(uchar *param_1,uint param_2,uint param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  
  if (DAT_0057e810 == 1) {
    if (param_3 == 0) {
      if (param_1 == (uchar *)0x0) {
        return 0xfffffffc;
      }
      if (param_2 < 0x18) {
        return 0xfffffffc;
      }
      if (*param_1 != 'H') {
        return 0xfffffffc;
      }
      if (param_1[1] != 'V') {
        return 0xfffffffc;
      }
      if (param_1[2] != 'T') {
        return 0xfffffffc;
      }
      if (param_1[3] != 'D') {
        return 0xfffffffc;
      }
      if ((param_1[8] & 0x7f) * 0x80 + (param_1[9] & 0x7f) != 1) {
        return 0xfffffffc;
      }
      if ((param_1[10] & 0x7f) * 0x80 + (param_1[0xb] & 0x7f) != 0) {
        return 0xfffffffc;
      }
      if ((param_1[0xc] & 0x7f) * 0x80 + (param_1[0xd] & 0x7f) != 0x14) {
        return 0xfffffffc;
      }
      if ((param_1[0xe] & 0x7f) * 0x80 + (param_1[0xf] & 0x7f) != 8) {
        return 0xfffffffc;
      }
      if (param_2 !=
          (param_1[7] & 0x7f) + 8 +
          ((param_1[6] & 0x7f) + ((param_1[4] & 0x7f) * 0x80 + (param_1[5] & 0x7f)) * 0x80) * 0x80)
      {
        return 0xfffffffc;
      }
      iVar21 = (param_1[0x12] & 0x7f) * 0x80 + (param_1[0x13] & 0x7f);
      if (iVar21 == 0) {
        return 0xfffffffc;
      }
      iVar3 = (param_1[0x14] & 0x7f) * 0x80 + (param_1[0x15] & 0x7f);
      if (iVar3 == 0) {
        return 0xfffffffc;
      }
      iVar4 = (param_1[0x16] & 0x7f) * 0x80 + (param_1[0x17] & 0x7f);
      if (iVar4 == 0) {
        return 0xfffffffc;
      }
      iVar10 = iVar21 * 5;
      pbVar18 = param_1 + 0x18;
      uVar22 = iVar10 + 0x18U + iVar3 * 0xe;
      if (param_1[0x18] - 1 < 0x20) {
        return 0xfffffffc;
      }
      iVar20 = 0;
      if (0x7e < param_1[0x18]) {
        return 0xfffffffc;
      }
      while( true ) {
        iVar20 = iVar20 + 1;
        uVar14 = (pbVar18[4] & 0x7f) +
                 ((pbVar18[3] & 0x7f) + ((pbVar18[1] & 0x7f) * 0x80 + (pbVar18[2] & 0x7f)) * 0x80) *
                 0x80;
        if (uVar22 < uVar14) {
          return 0xfffffffc;
        }
        if (uVar14 < iVar10 + 0x18U) {
          return 0xfffffffc;
        }
        if (iVar20 == iVar21) break;
        bVar6 = pbVar18[5];
        if (bVar6 - 1 < 0x20) {
          return 0xfffffffc;
        }
        if (0x7e < bVar6) {
          return 0xfffffffc;
        }
        if ((iVar20 != 0) && (bVar6 < *pbVar18)) {
          return 0xfffffffc;
        }
        pbVar18 = pbVar18 + 5;
      }
      uVar14 = iVar10 + 0x20;
      uVar17 = iVar10 + 0x1f;
      uVar23 = iVar10 + 0x1e;
      uVar16 = iVar10 + 0x1d;
      uVar1 = iVar10 + 0x1c;
      uVar2 = iVar10 + 0x1b;
      uVar25 = iVar10 + 0x1a;
      uVar24 = iVar10 + 0x19;
      iVar21 = 0;
      pbVar18 = (byte *)0x0;
      do {
        uVar9 = uVar14 - 8;
        bVar6 = param_1[uVar9];
        if (bVar6 - 1 < 0x20) {
          return 0xfffffffc;
        }
        if (0x7e < bVar6) {
          return 0xfffffffc;
        }
        if (pbVar18 != (byte *)0x0 && iVar21 != 0) {
          if (bVar6 < *pbVar18) {
            return 0xfffffffc;
          }
          bVar8 = param_1[uVar24];
          if (bVar8 - 1 < 0x20) {
            return 0xfffffffc;
          }
          if (0x7e < bVar8) {
            return 0xfffffffc;
          }
          if (*pbVar18 < bVar6) {
            if (param_1[uVar25] - 1 < 0x20) {
              return 0xfffffffc;
            }
            if (0x7e < param_1[uVar25]) {
              return 0xfffffffc;
            }
            if (param_1[uVar2] - 1 < 0x20) {
              return 0xfffffffc;
            }
            if (0x7e < param_1[uVar2]) {
              return 0xfffffffc;
            }
LAB_00223614:
            if (param_1[uVar1] - 1 < 0x20) {
              return 0xfffffffc;
            }
            if (0x7e < param_1[uVar1]) {
              return 0xfffffffc;
            }
            if (param_1[uVar16] - 1 < 0x20) {
              return 0xfffffffc;
            }
            if (0x7e < param_1[uVar16]) {
              return 0xfffffffc;
            }
LAB_00223644:
            if (param_1[uVar23] - 1 < 0x20) {
              return 0xfffffffc;
            }
            if (0x7e < param_1[uVar23]) {
              return 0xfffffffc;
            }
            uVar13 = (uint)param_1[uVar17];
            if (uVar13 - 1 < 0x20) {
              return 0xfffffffc;
            }
joined_r0x002239bc:
            if (0x7e < uVar13) {
              return 0xfffffffc;
            }
          }
          else {
            if (bVar8 < pbVar18[1]) {
              return 0xfffffffc;
            }
            bVar6 = param_1[uVar25];
            uVar13 = (uint)bVar6;
            if (uVar13 - 1 < 0x20) {
              return 0xfffffffc;
            }
            if (0x7e < uVar13) {
              return 0xfffffffc;
            }
            if (pbVar18[1] < bVar8) {
              if (param_1[uVar2] - 1 < 0x20) {
                return 0xfffffffc;
              }
              if (0x7e < param_1[uVar2]) {
                return 0xfffffffc;
              }
              if (param_1[uVar1] - 1 < 0x20) {
                return 0xfffffffc;
              }
              if (0x7e < param_1[uVar1]) {
                return 0xfffffffc;
              }
LAB_00223978:
              if (param_1[uVar16] - 1 < 0x20) {
                return 0xfffffffc;
              }
              if (0x7e < param_1[uVar16]) {
                return 0xfffffffc;
              }
              if (param_1[uVar23] - 1 < 0x20) {
                return 0xfffffffc;
              }
              if (0x7e < param_1[uVar23]) {
                return 0xfffffffc;
              }
LAB_002239a8:
              uVar13 = (uint)param_1[uVar17];
              if (uVar13 - 1 < 0x20) {
                return 0xfffffffc;
              }
              goto joined_r0x002239bc;
            }
            bVar8 = pbVar18[2];
            if (uVar13 <= bVar8 && (uint)bVar8 != (uint)bVar6) {
              return 0xfffffffc;
            }
            bVar7 = param_1[uVar2];
            if (bVar7 - 1 < 0x20) {
              return 0xfffffffc;
            }
            if (0x7e < bVar7) {
              return 0xfffffffc;
            }
            if ((uint)bVar8 < (uint)bVar6) goto LAB_00223614;
            if (bVar7 < pbVar18[3]) {
              return 0xfffffffc;
            }
            bVar6 = param_1[uVar1];
            if (bVar6 - 1 < 0x20) {
              return 0xfffffffc;
            }
            if (0x7e < bVar6) {
              return 0xfffffffc;
            }
            if (pbVar18[3] < bVar7) goto LAB_00223978;
            if (bVar6 < pbVar18[4]) {
              return 0xfffffffc;
            }
            bVar8 = param_1[uVar16];
            if (bVar8 - 1 < 0x20) {
              return 0xfffffffc;
            }
            if (0x7e < bVar8) {
              return 0xfffffffc;
            }
            if (pbVar18[4] < bVar6) goto LAB_00223644;
            if (bVar8 < pbVar18[5]) {
              return 0xfffffffc;
            }
            bVar6 = param_1[uVar23];
            if (bVar6 - 1 < 0x20) {
              return 0xfffffffc;
            }
            if (0x7e < bVar6) {
              return 0xfffffffc;
            }
            if (pbVar18[5] < bVar8) goto LAB_002239a8;
            if (bVar6 < pbVar18[6]) {
              return 0xfffffffc;
            }
            bVar8 = param_1[uVar17];
            if (bVar8 - 1 < 0x20) {
              return 0xfffffffc;
            }
            if (0x7e < bVar8) {
              return 0xfffffffc;
            }
            if (bVar6 <= pbVar18[6]) {
              if (bVar8 < pbVar18[7]) {
                return 0xfffffffc;
              }
              bVar6 = param_1[uVar14];
              if (bVar6 - 1 < 0x20) {
                return 0xfffffffc;
              }
              if (0x7e < bVar6) {
                return 0xfffffffc;
              }
              bVar11 = false;
              if ((bVar8 <= pbVar18[7]) && (bVar11 = bVar6 <= pbVar18[8], bVar6 < pbVar18[8])) {
                return 0xfffffffc;
              }
              goto LAB_0022375c;
            }
          }
          if (param_1[uVar14] - 1 < 0x20) {
            return 0xfffffffc;
          }
          bVar11 = false;
          if (0x7e < param_1[uVar14]) {
            return 0xfffffffc;
          }
        }
        else {
          if (param_1[uVar24] - 1 < 0x20) {
            return 0xfffffffc;
          }
          if (0x7e < param_1[uVar24]) {
            return 0xfffffffc;
          }
          if (param_1[uVar25] - 1 < 0x20) {
            return 0xfffffffc;
          }
          if (0x7e < param_1[uVar25]) {
            return 0xfffffffc;
          }
          if (param_1[uVar2] - 1 < 0x20) {
            return 0xfffffffc;
          }
          if (0x7e < param_1[uVar2]) {
            return 0xfffffffc;
          }
          if (param_1[uVar1] - 1 < 0x20) {
            return 0xfffffffc;
          }
          if (0x7e < param_1[uVar1]) {
            return 0xfffffffc;
          }
          if (param_1[uVar16] - 1 < 0x20) {
            return 0xfffffffc;
          }
          if (0x7e < param_1[uVar16]) {
            return 0xfffffffc;
          }
          if (param_1[uVar23] - 1 < 0x20) {
            return 0xfffffffc;
          }
          if (0x7e < param_1[uVar23]) {
            return 0xfffffffc;
          }
          if (param_1[uVar17] - 1 < 0x20) {
            return 0xfffffffc;
          }
          if (0x7e < param_1[uVar17]) {
            return 0xfffffffc;
          }
          if (param_1[uVar14] - 1 < 0x20) {
            return 0xfffffffc;
          }
          if (0x7e < param_1[uVar14]) {
            return 0xfffffffc;
          }
          bVar11 = true;
        }
LAB_0022375c:
        bVar6 = param_1[uVar14 + 1];
        if (bVar6 - 1 < 0x20) {
          return 0xfffffffc;
        }
        if (0x7e < bVar6) {
          return 0xfffffffc;
        }
        if (((bVar11) && (pbVar18 != (byte *)0x0 && iVar21 != 0)) && (bVar6 < pbVar18[9])) {
          return 0xfffffffc;
        }
        uVar15 = (ulong)(uVar14 + 2);
        uVar13 = (param_1[uVar15 + 3] & 0x7f) +
                 ((param_1[uVar15 + 2] & 0x7f) +
                 ((param_1[uVar15 + 1] & 0x7f) + (param_1[uVar15] & 0x7f) * 0x80) * 0x80) * 0x80;
        if (param_2 - 3 < uVar13) {
          return 0xfffffffc;
        }
        if (uVar13 < uVar22) {
          return 0xfffffffc;
        }
        iVar21 = iVar21 + 1;
        uVar14 = uVar14 + 0xe;
        uVar17 = uVar17 + 0xe;
        uVar23 = uVar23 + 0xe;
        uVar16 = uVar16 + 0xe;
        uVar1 = uVar1 + 0xe;
        uVar2 = uVar2 + 0xe;
        uVar25 = uVar25 + 0xe;
        uVar24 = uVar24 + 0xe;
        pbVar18 = param_1 + uVar9;
        if (iVar21 == iVar3) {
          if (uVar22 <= param_2 - 0xd) {
            iVar21 = 0;
            iVar20 = 0;
            if ((param_1[(ulong)uVar22 + 1] & 0x7f) + (param_1[uVar22] & 0x7f) * 0x80 < 2) {
              while( true ) {
                uVar14 = uVar22 + 4;
                uVar17 = uVar22 + 6;
                uVar23 = uVar22 + 8;
                iVar21 = iVar21 + 1;
                uVar16 = (param_1[(ulong)(uVar22 + 2) + 1] & 0x7f) +
                         (param_1[uVar22 + 2] & 0x7f) * 0x80;
                iVar20 = iVar20 + uVar16;
                if (uVar16 == 0) break;
                uVar22 = uVar22 + uVar16 * 0x1a + 10;
                uVar14 = (param_1[(ulong)uVar14 + 1] & 0x7f) + (param_1[uVar14] & 0x7f) * 0x80;
                if (uVar16 < uVar14) {
                  return 0xfffffffc;
                }
                uVar17 = (param_1[(ulong)uVar17 + 1] & 0x7f) + (param_1[uVar17] & 0x7f) * 0x80;
                if (uVar16 < uVar17) {
                  return 0xfffffffc;
                }
                if (uVar17 < uVar14) {
                  return 0xfffffffc;
                }
                if (uVar16 < (param_1[(ulong)uVar23 + 1] & 0x7f) + (param_1[uVar23] & 0x7f) * 0x80)
                {
                  return 0xfffffffc;
                }
                if (iVar21 == iVar4) {
                  if (param_2 != iVar10 + iVar3 * 0xe + 0x1a + iVar21 * 10 + iVar20 * 0x1a) {
                    return 0xfffffffc;
                  }
                  pbVar5 = param_1 + (ulong)(param_2 - 3) + 1;
                  pbVar18 = param_1 + 1;
                  uVar15 = (ulong)(pbVar5 + ~(ulong)param_1) & 3;
                  uVar22 = *(ushort *)(&DAT_004a8f70 + (ulong)(*param_1 ^ 0xff) * 2) ^ 0xff00;
                  if (pbVar18 != pbVar5) {
                    if (uVar15 == 0) goto LAB_00223b88;
                    if (uVar15 != 1) {
                      pbVar19 = pbVar18;
                      if (uVar15 != 2) {
                        pbVar19 = param_1 + 2;
                        uVar22 = ((uint)*(ushort *)
                                         (&DAT_004a8f70 +
                                         (long)(int)((uint)*pbVar18 ^ uVar22 >> 8) * 2) ^
                                 uVar22 << 8) & 0xffff;
                      }
                      pbVar18 = pbVar19 + 1;
                      uVar22 = ((uint)*(ushort *)
                                       (&DAT_004a8f70 +
                                       (long)(int)((uint)*pbVar19 ^ uVar22 >> 8) * 2) ^ uVar22 << 8)
                               & 0xffff;
                    }
                    uVar22 = (uint)*(ushort *)
                                    (&DAT_004a8f70 + (long)(int)((uint)*pbVar18 ^ uVar22 >> 8) * 2)
                             ^ uVar22 << 8;
                    for (pbVar18 = pbVar18 + 1; uVar22 = uVar22 & 0xffff, pbVar18 != pbVar5;
                        pbVar18 = pbVar18 + 4) {
LAB_00223b88:
                      uVar22 = ((uint)*(ushort *)
                                       (&DAT_004a8f70 +
                                       (long)(int)((uint)*pbVar18 ^ uVar22 >> 8) * 2) ^ uVar22 << 8)
                               & 0xffff;
                      uVar22 = ((uint)*(ushort *)
                                       (&DAT_004a8f70 +
                                       (long)(int)((uint)pbVar18[1] ^ uVar22 >> 8) * 2) ^
                               uVar22 << 8) & 0xffff;
                      uVar22 = ((uint)*(ushort *)
                                       (&DAT_004a8f70 +
                                       (long)(int)((uint)pbVar18[2] ^ uVar22 >> 8) * 2) ^
                               uVar22 << 8) & 0xffff;
                      uVar22 = (uint)*(ushort *)
                                      (&DAT_004a8f70 +
                                      (long)(int)((uint)pbVar18[3] ^ uVar22 >> 8) * 2) ^ uVar22 << 8
                      ;
                    }
                  }
                  if ((uint)param_1[param_2 - 1] + (uint)param_1[param_2 - 2] * 0x100 !=
                      (~uVar22 & 0xffff)) {
                    return 0xfffffffc;
                  }
                  return 0;
                }
                if (param_2 - 0xd < uVar22) {
                  return 0xfffffffc;
                }
                if (1 < (param_1[(ulong)uVar22 + 1] & 0x7f) + (param_1[uVar22] & 0x7f) * 0x80) {
                  return 0xfffffffc;
                }
              }
            }
          }
          return 0xfffffffc;
        }
      } while( true );
    }
    if (param_3 == 1) {
      if (param_1 == (uchar *)0x0) {
        uVar12 = 0;
        DAT_0057f340 = param_1;
      }
      else {
        if (param_2 < 0x18) {
          return 0xfffffffc;
        }
        if (*param_1 != 'H') {
          return 0xfffffffc;
        }
        if (param_1[1] != 'V') {
          return 0xfffffffc;
        }
        if (param_1[2] != 'T') {
          return 0xfffffffc;
        }
        if (param_1[3] != 'D') {
          return 0xfffffffc;
        }
        if ((param_1[8] & 0x7f) * 0x80 + (param_1[9] & 0x7f) != 1) {
          return 0xfffffffc;
        }
        if ((param_1[10] & 0x7f) * 0x80 + (param_1[0xb] & 0x7f) != 0) {
          return 0xfffffffc;
        }
        if ((param_1[0xc] & 0x7f) * 0x80 + (param_1[0xd] & 0x7f) != 0x14) {
          return 0xfffffffc;
        }
        if ((param_1[0xe] & 0x7f) * 0x80 + (param_1[0xf] & 0x7f) != 8) {
          return 0xfffffffc;
        }
        if (param_2 !=
            (param_1[7] & 0x7f) + 8 +
            ((param_1[6] & 0x7f) + ((param_1[4] & 0x7f) * 0x80 + (param_1[5] & 0x7f)) * 0x80) * 0x80
           ) {
          return 0xfffffffc;
        }
        if ((param_1[0x12] & 0x7f) * 0x80 + (param_1[0x13] & 0x7f) == 0) {
          return 0xfffffffc;
        }
        if ((param_1[0x14] & 0x7f) * 0x80 + (param_1[0x15] & 0x7f) == 0) {
          return 0xfffffffc;
        }
        if ((param_1[0x16] & 0x7f) * 0x80 + (param_1[0x17] & 0x7f) == 0) {
          return 0xfffffffc;
        }
        DAT_0057f348 = (param_1[0xc] & 0x7f) * 0x80 + (param_1[0xd] & 0x7f);
        DAT_0057f34c = (param_1[0xe] & 0x7f) * 0x80 + (param_1[0xf] & 0x7f);
        DAT_0057f354 = (param_1[0x10] & 0x7f) * 0x80 + (param_1[0x11] & 0x7f);
        iVar21 = (param_1[0x12] & 0x7f) * 0x80 + (param_1[0x13] & 0x7f);
        DAT_0057f356 = (undefined2)iVar21;
        DAT_0057f358 = iVar21 * 5 + 0x18;
        DAT_0057f35c = DAT_0057f358 + ((param_1[0x14] & 0x7f) * 0x80 + (param_1[0x15] & 0x7f)) * 0xe
        ;
        uVar12 = 0;
        DAT_0057f340 = param_1;
        DAT_0057f350 = param_2;
      }
    }
    else {
      uVar12 = 0xfffffffe;
    }
  }
  else {
    uVar12 = 0xffffffff;
  }
  return uVar12;
}

