/* MaHvDrvKR_SetDictionary @ 0022de3c 2828B */


/* WARNING: Type propagation algorithm not settling */
/* YAMAHA::MaHvDrvKR_SetDictionary(unsigned char*, unsigned int, unsigned int, void*) */

undefined4 YAMAHA::MaHvDrvKR_SetDictionary(uchar *param_1,uint param_2,uint param_3,void *param_4)

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
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  uint uVar17;
  byte *pbVar18;
  byte *pbVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  
  if (DAT_005802a8 != 1) {
    return 0xffffffff;
  }
  if (param_3 != 0) {
    if (param_3 != 1) {
      return 0xfffffffe;
    }
    if (param_1 == (uchar *)0x0) {
      DAT_00580e30 = (uchar *)0x0;
      return 0;
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
    if ((param_1[10] & 0x7f) * 0x80 + (param_1[0xb] & 0x7f) != 1) {
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
        ((param_1[6] & 0x7f) + ((param_1[4] & 0x7f) * 0x80 + (param_1[5] & 0x7f)) * 0x80) * 0x80) {
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
    DAT_00580e30 = param_1;
    DAT_00580e38 = (param_1[0xc] & 0x7f) * 0x80 + (param_1[0xd] & 0x7f);
    DAT_00580e3c = (param_1[0xe] & 0x7f) * 0x80 + (param_1[0xf] & 0x7f);
    DAT_00580e44 = (param_1[0x10] & 0x7f) * 0x80 + (param_1[0x11] & 0x7f);
    iVar20 = (param_1[0x12] & 0x7f) * 0x80 + (param_1[0x13] & 0x7f);
    DAT_00580e46 = (short)iVar20;
    DAT_00580e48 = iVar20 * 5 + 0x18;
    DAT_00580e40 = param_2;
    DAT_00580e4c = DAT_00580e48 + ((param_1[0x14] & 0x7f) * 0x80 + (param_1[0x15] & 0x7f)) * 0xe;
    return 0;
  }
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
  if ((param_1[10] & 0x7f) * 0x80 + (param_1[0xb] & 0x7f) != 1) {
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
      ((param_1[6] & 0x7f) + ((param_1[4] & 0x7f) * 0x80 + (param_1[5] & 0x7f)) * 0x80) * 0x80) {
    return 0xfffffffc;
  }
  iVar20 = (param_1[0x12] & 0x7f) * 0x80 + (param_1[0x13] & 0x7f);
  if (iVar20 == 0) {
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
  iVar10 = iVar20 * 5;
  pbVar18 = param_1 + 0x18;
  uVar21 = iVar10 + 0x18U + iVar3 * 0xe;
  if (param_1[0x18] - 1 < 0x20) {
    return 0xfffffffc;
  }
  iVar14 = 0;
  if (0x7e < param_1[0x18]) {
    return 0xfffffffc;
  }
  while( true ) {
    iVar14 = iVar14 + 1;
    uVar13 = (pbVar18[4] & 0x7f) +
             ((pbVar18[3] & 0x7f) + ((pbVar18[1] & 0x7f) * 0x80 + (pbVar18[2] & 0x7f)) * 0x80) *
             0x80;
    if (uVar21 < uVar13) {
      return 0xfffffffc;
    }
    if (uVar13 < iVar10 + 0x18U) {
      return 0xfffffffc;
    }
    if (iVar14 == iVar20) break;
    bVar6 = pbVar18[5];
    if (bVar6 - 1 < 0x20) {
      return 0xfffffffc;
    }
    if (0x7e < bVar6) {
      return 0xfffffffc;
    }
    if ((iVar14 != 0) && (bVar6 < *pbVar18)) {
      return 0xfffffffc;
    }
    pbVar18 = pbVar18 + 5;
  }
  uVar13 = iVar10 + 0x20;
  uVar17 = iVar10 + 0x1f;
  uVar22 = iVar10 + 0x1e;
  uVar16 = iVar10 + 0x1d;
  uVar1 = iVar10 + 0x1c;
  uVar2 = iVar10 + 0x1b;
  uVar24 = iVar10 + 0x1a;
  uVar23 = iVar10 + 0x19;
  iVar20 = 0;
  pbVar18 = (byte *)0x0;
  do {
    uVar9 = uVar13 - 8;
    bVar6 = param_1[uVar9];
    if (bVar6 - 1 < 0x20) {
      return 0xfffffffc;
    }
    if (0x7e < bVar6) {
      return 0xfffffffc;
    }
    if (pbVar18 != (byte *)0x0 && iVar20 != 0) {
      if (bVar6 < *pbVar18) {
        return 0xfffffffc;
      }
      bVar8 = param_1[uVar23];
      if (bVar8 - 1 < 0x20) {
        return 0xfffffffc;
      }
      if (0x7e < bVar8) {
        return 0xfffffffc;
      }
      if (*pbVar18 < bVar6) {
        if (param_1[uVar24] - 1 < 0x20) {
          return 0xfffffffc;
        }
        if (0x7e < param_1[uVar24]) {
          return 0xfffffffc;
        }
        if (param_1[uVar2] - 1 < 0x20) {
          return 0xfffffffc;
        }
        if (0x7e < param_1[uVar2]) {
          return 0xfffffffc;
        }
LAB_0022e36c:
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
LAB_0022e39c:
        if (param_1[uVar22] - 1 < 0x20) {
          return 0xfffffffc;
        }
        if (0x7e < param_1[uVar22]) {
          return 0xfffffffc;
        }
        uVar12 = (uint)param_1[uVar17];
        if (uVar12 - 1 < 0x20) {
          return 0xfffffffc;
        }
joined_r0x0022e70c:
        if (0x7e < uVar12) {
          return 0xfffffffc;
        }
      }
      else {
        if (bVar8 < pbVar18[1]) {
          return 0xfffffffc;
        }
        bVar6 = param_1[uVar24];
        uVar12 = (uint)bVar6;
        if (uVar12 - 1 < 0x20) {
          return 0xfffffffc;
        }
        if (0x7e < uVar12) {
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
LAB_0022e6c8:
          if (param_1[uVar16] - 1 < 0x20) {
            return 0xfffffffc;
          }
          if (0x7e < param_1[uVar16]) {
            return 0xfffffffc;
          }
          if (param_1[uVar22] - 1 < 0x20) {
            return 0xfffffffc;
          }
          if (0x7e < param_1[uVar22]) {
            return 0xfffffffc;
          }
LAB_0022e6f8:
          uVar12 = (uint)param_1[uVar17];
          if (uVar12 - 1 < 0x20) {
            return 0xfffffffc;
          }
          goto joined_r0x0022e70c;
        }
        bVar8 = pbVar18[2];
        if (uVar12 <= bVar8 && (uint)bVar8 != (uint)bVar6) {
          return 0xfffffffc;
        }
        bVar7 = param_1[uVar2];
        if (bVar7 - 1 < 0x20) {
          return 0xfffffffc;
        }
        if (0x7e < bVar7) {
          return 0xfffffffc;
        }
        if ((uint)bVar8 < (uint)bVar6) goto LAB_0022e36c;
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
        if (pbVar18[3] < bVar7) goto LAB_0022e6c8;
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
        if (pbVar18[4] < bVar6) goto LAB_0022e39c;
        if (bVar8 < pbVar18[5]) {
          return 0xfffffffc;
        }
        bVar6 = param_1[uVar22];
        if (bVar6 - 1 < 0x20) {
          return 0xfffffffc;
        }
        if (0x7e < bVar6) {
          return 0xfffffffc;
        }
        if (pbVar18[5] < bVar8) goto LAB_0022e6f8;
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
          bVar6 = param_1[uVar13];
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
          goto LAB_0022e4b0;
        }
      }
      if (param_1[uVar13] - 1 < 0x20) {
        return 0xfffffffc;
      }
      bVar11 = false;
      if (0x7e < param_1[uVar13]) {
        return 0xfffffffc;
      }
    }
    else {
      if (param_1[uVar23] - 1 < 0x20) {
        return 0xfffffffc;
      }
      if (0x7e < param_1[uVar23]) {
        return 0xfffffffc;
      }
      if (param_1[uVar24] - 1 < 0x20) {
        return 0xfffffffc;
      }
      if (0x7e < param_1[uVar24]) {
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
      if (param_1[uVar22] - 1 < 0x20) {
        return 0xfffffffc;
      }
      if (0x7e < param_1[uVar22]) {
        return 0xfffffffc;
      }
      if (param_1[uVar17] - 1 < 0x20) {
        return 0xfffffffc;
      }
      if (0x7e < param_1[uVar17]) {
        return 0xfffffffc;
      }
      if (param_1[uVar13] - 1 < 0x20) {
        return 0xfffffffc;
      }
      if (0x7e < param_1[uVar13]) {
        return 0xfffffffc;
      }
      bVar11 = true;
    }
LAB_0022e4b0:
    bVar6 = param_1[uVar13 + 1];
    if (bVar6 - 1 < 0x20) {
      return 0xfffffffc;
    }
    if (0x7e < bVar6) {
      return 0xfffffffc;
    }
    if (((bVar11) && (pbVar18 != (byte *)0x0 && iVar20 != 0)) && (bVar6 < pbVar18[9])) {
      return 0xfffffffc;
    }
    uVar15 = (ulong)(uVar13 + 2);
    uVar12 = (param_1[uVar15 + 3] & 0x7f) +
             ((param_1[uVar15 + 2] & 0x7f) +
             ((param_1[uVar15 + 1] & 0x7f) + (param_1[uVar15] & 0x7f) * 0x80) * 0x80) * 0x80;
    if (param_2 - 3 < uVar12) {
      return 0xfffffffc;
    }
    if (uVar12 < uVar21) {
      return 0xfffffffc;
    }
    iVar20 = iVar20 + 1;
    uVar13 = uVar13 + 0xe;
    uVar17 = uVar17 + 0xe;
    uVar22 = uVar22 + 0xe;
    uVar16 = uVar16 + 0xe;
    uVar1 = uVar1 + 0xe;
    uVar2 = uVar2 + 0xe;
    uVar24 = uVar24 + 0xe;
    uVar23 = uVar23 + 0xe;
    pbVar18 = param_1 + uVar9;
    if (iVar20 == iVar3) {
      if (uVar21 <= param_2 - 0xd) {
        iVar20 = 0;
        iVar14 = 0;
        if ((param_1[(ulong)uVar21 + 1] & 0x7f) + (param_1[uVar21] & 0x7f) * 0x80 < 3) {
          while( true ) {
            uVar13 = uVar21 + 4;
            uVar17 = uVar21 + 6;
            uVar22 = uVar21 + 8;
            iVar20 = iVar20 + 1;
            uVar16 = (param_1[(ulong)(uVar21 + 2) + 1] & 0x7f) + (param_1[uVar21 + 2] & 0x7f) * 0x80
            ;
            iVar14 = iVar14 + uVar16;
            if (uVar16 == 0) break;
            uVar21 = uVar21 + uVar16 * 0x1a + 10;
            uVar13 = (param_1[(ulong)uVar13 + 1] & 0x7f) + (param_1[uVar13] & 0x7f) * 0x80;
            if (uVar16 < uVar13) {
              return 0xfffffffc;
            }
            uVar17 = (param_1[(ulong)uVar17 + 1] & 0x7f) + (param_1[uVar17] & 0x7f) * 0x80;
            if (uVar16 < uVar17) {
              return 0xfffffffc;
            }
            if (uVar17 < uVar13) {
              return 0xfffffffc;
            }
            if (uVar16 < (param_1[(ulong)uVar22 + 1] & 0x7f) + (param_1[uVar22] & 0x7f) * 0x80) {
              return 0xfffffffc;
            }
            if (iVar20 == iVar4) {
              if (param_2 != iVar10 + iVar3 * 0xe + 0x1a + iVar20 * 10 + iVar14 * 0x1a) {
                return 0xfffffffc;
              }
              pbVar5 = param_1 + (ulong)(param_2 - 3) + 1;
              pbVar18 = param_1 + 1;
              uVar15 = (ulong)(pbVar5 + ~(ulong)param_1) & 3;
              uVar21 = *(ushort *)(&DAT_0052d6b0 + (ulong)(*param_1 ^ 0xff) * 2) ^ 0xff00;
              if (pbVar18 != pbVar5) {
                if (uVar15 == 0) goto LAB_0022e8d0;
                if (uVar15 != 1) {
                  pbVar19 = pbVar18;
                  if (uVar15 != 2) {
                    pbVar19 = param_1 + 2;
                    uVar21 = ((uint)*(ushort *)
                                     (&DAT_0052d6b0 + (long)(int)((uint)*pbVar18 ^ uVar21 >> 8) * 2)
                             ^ uVar21 << 8) & 0xffff;
                  }
                  pbVar18 = pbVar19 + 1;
                  uVar21 = ((uint)*(ushort *)
                                   (&DAT_0052d6b0 + (long)(int)((uint)*pbVar19 ^ uVar21 >> 8) * 2) ^
                           uVar21 << 8) & 0xffff;
                }
                uVar21 = (uint)*(ushort *)
                                (&DAT_0052d6b0 + (long)(int)((uint)*pbVar18 ^ uVar21 >> 8) * 2) ^
                         uVar21 << 8;
                for (pbVar18 = pbVar18 + 1; uVar21 = uVar21 & 0xffff, pbVar18 != pbVar5;
                    pbVar18 = pbVar18 + 4) {
LAB_0022e8d0:
                  uVar21 = ((uint)*(ushort *)
                                   (&DAT_0052d6b0 + (long)(int)((uint)*pbVar18 ^ uVar21 >> 8) * 2) ^
                           uVar21 << 8) & 0xffff;
                  uVar21 = ((uint)*(ushort *)
                                   (&DAT_0052d6b0 + (long)(int)((uint)pbVar18[1] ^ uVar21 >> 8) * 2)
                           ^ uVar21 << 8) & 0xffff;
                  uVar21 = ((uint)*(ushort *)
                                   (&DAT_0052d6b0 + (long)(int)((uint)pbVar18[2] ^ uVar21 >> 8) * 2)
                           ^ uVar21 << 8) & 0xffff;
                  uVar21 = (uint)*(ushort *)
                                  (&DAT_0052d6b0 + (long)(int)((uint)pbVar18[3] ^ uVar21 >> 8) * 2)
                           ^ uVar21 << 8;
                }
              }
              if ((uint)param_1[param_2 - 1] + (uint)param_1[param_2 - 2] * 0x100 ==
                  (~uVar21 & 0xffff)) {
                return 0;
              }
              return 0xfffffffc;
            }
            if (param_2 - 0xd < uVar21) {
              return 0xfffffffc;
            }
            if (2 < (param_1[(ulong)uVar21 + 1] & 0x7f) + (param_1[uVar21] & 0x7f) * 0x80) {
              return 0xfffffffc;
            }
          }
        }
      }
      return 0xfffffffc;
    }
  } while( true );
}

