/* mapimachdep_MemCpy @ 0018a350 1540B */


/* YAMAHA::mapimachdep_MemCpy(unsigned char*, unsigned char*, unsigned int) */

void YAMAHA::mapimachdep_MemCpy(uchar *param_1,uchar *param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  uchar *puVar14;
  uchar *puVar15;
  uint uVar16;
  uint uVar17;
  uchar *puVar18;
  uchar *puVar19;
  long lVar20;
  int iVar21;
  ulong uVar22;
  uchar *puVar23;
  uchar *puVar24;
  uint uVar25;
  undefined8 uVar26;
  
  if (param_3 == 0) {
    return;
  }
  if ((param_2 < param_1 + 0x10 && param_1 < param_2 + 0x10) || (param_3 < 0x16)) {
    *param_1 = *param_2;
    uVar16 = param_3 - 1 & 0xf;
    lVar20 = 1;
    if (param_3 < 2) {
      return;
    }
    if (uVar16 != 0) {
      if (uVar16 != 1) {
        if (uVar16 != 2) {
          if (uVar16 != 3) {
            if (uVar16 != 4) {
              if (uVar16 != 5) {
                if (uVar16 != 6) {
                  if (uVar16 != 7) {
                    if (uVar16 != 8) {
                      if (uVar16 != 9) {
                        if (uVar16 != 10) {
                          if (uVar16 != 0xb) {
                            if (uVar16 != 0xc) {
                              if (uVar16 != 0xd) {
                                if (uVar16 != 0xe) {
                                  lVar20 = 2;
                                  param_1[1] = param_2[1];
                                }
                                param_1[lVar20] = param_2[lVar20];
                                lVar20 = lVar20 + 1;
                              }
                              param_1[lVar20] = param_2[lVar20];
                              lVar20 = lVar20 + 1;
                            }
                            param_1[lVar20] = param_2[lVar20];
                            lVar20 = lVar20 + 1;
                          }
                          param_1[lVar20] = param_2[lVar20];
                          lVar20 = lVar20 + 1;
                        }
                        param_1[lVar20] = param_2[lVar20];
                        lVar20 = lVar20 + 1;
                      }
                      param_1[lVar20] = param_2[lVar20];
                      lVar20 = lVar20 + 1;
                    }
                    param_1[lVar20] = param_2[lVar20];
                    lVar20 = lVar20 + 1;
                  }
                  param_1[lVar20] = param_2[lVar20];
                  lVar20 = lVar20 + 1;
                }
                param_1[lVar20] = param_2[lVar20];
                lVar20 = lVar20 + 1;
              }
              param_1[lVar20] = param_2[lVar20];
              lVar20 = lVar20 + 1;
            }
            param_1[lVar20] = param_2[lVar20];
            lVar20 = lVar20 + 1;
          }
          param_1[lVar20] = param_2[lVar20];
          lVar20 = lVar20 + 1;
        }
        param_1[lVar20] = param_2[lVar20];
        lVar20 = lVar20 + 1;
      }
      param_1[lVar20] = param_2[lVar20];
      lVar20 = lVar20 + 1;
      if (param_3 <= (uint)lVar20) {
        return;
      }
    }
    do {
      param_1[lVar20] = param_2[lVar20];
      lVar2 = lVar20 + 4;
      lVar3 = lVar20 + 5;
      param_1[lVar20 + 1] = param_2[lVar20 + 1];
      lVar4 = lVar20 + 6;
      lVar5 = lVar20 + 7;
      lVar6 = lVar20 + 8;
      lVar7 = lVar20 + 9;
      param_1[lVar20 + 2] = param_2[lVar20 + 2];
      lVar8 = lVar20 + 10;
      lVar9 = lVar20 + 0xb;
      lVar10 = lVar20 + 0xc;
      lVar11 = lVar20 + 0xd;
      param_1[lVar20 + 3] = param_2[lVar20 + 3];
      lVar12 = lVar20 + 0xe;
      lVar13 = lVar20 + 0xf;
      lVar20 = lVar20 + 0x10;
      param_1[lVar2] = param_2[lVar2];
      param_1[lVar3] = param_2[lVar3];
      param_1[lVar4] = param_2[lVar4];
      param_1[lVar5] = param_2[lVar5];
      param_1[lVar6] = param_2[lVar6];
      param_1[lVar7] = param_2[lVar7];
      param_1[lVar8] = param_2[lVar8];
      param_1[lVar9] = param_2[lVar9];
      param_1[lVar10] = param_2[lVar10];
      param_1[lVar11] = param_2[lVar11];
      param_1[lVar12] = param_2[lVar12];
      param_1[lVar13] = param_2[lVar13];
    } while ((uint)lVar20 < param_3);
    return;
  }
  uVar16 = -(int)param_2 & 0xf;
  if (param_3 < uVar16) {
    uVar16 = param_3;
  }
  if ((((uVar16 == 0) || (*param_1 = *param_2, uVar16 == 1)) ||
      (param_1[1] = param_2[1], uVar16 == 2)) ||
     (((param_1[2] = param_2[2], uVar16 == 3 || (param_1[3] = param_2[3], uVar16 == 4)) ||
      (param_1[4] = param_2[4], uVar16 == 5)))) {
LAB_0018a48c:
    uVar22 = (ulong)uVar16;
  }
  else {
    param_1[5] = param_2[5];
    if (uVar16 == 6) {
      uVar22 = 6;
    }
    else {
      param_1[6] = param_2[6];
      if (((uVar16 == 7) || (param_1[7] = param_2[7], uVar16 == 8)) ||
         (((param_1[8] = param_2[8], uVar16 == 9 ||
           (((param_1[9] = param_2[9], uVar16 == 10 || (param_1[10] = param_2[10], uVar16 == 0xb))
            || (param_1[0xb] = param_2[0xb], uVar16 == 0xc)))) ||
          (param_1[0xc] = param_2[0xc], uVar16 == 0xd)))) goto LAB_0018a48c;
      param_1[0xd] = param_2[0xd];
      if (uVar16 == 0xf) {
        uVar22 = 0xf;
        param_1[0xe] = param_2[0xe];
      }
      else {
        uVar22 = 0xe;
      }
    }
  }
  uVar17 = (param_3 - uVar16) - 0x10 >> 4;
  uVar1 = uVar17 + 1;
  if ((param_3 - 1) - uVar16 < 0xf) goto LAB_0018a5f8;
  puVar14 = param_2 + uVar16;
  puVar15 = param_1 + uVar16;
  uVar25 = 1;
  uVar17 = uVar17 & 7;
  puVar23 = puVar14 + 0x10;
  uVar26 = *(undefined8 *)puVar14;
  puVar18 = puVar15 + 0x10;
  *(undefined8 *)(puVar15 + 8) = *(undefined8 *)(puVar14 + 8);
  *(undefined8 *)puVar15 = uVar26;
  if (1 < uVar1) {
    if (uVar17 != 0) {
      if (uVar17 != 1) {
        puVar19 = puVar18;
        puVar24 = puVar23;
        if (uVar17 != 2) {
          if (uVar17 != 3) {
            if (uVar17 != 4) {
              if (uVar17 != 5) {
                if (uVar17 != 6) {
                  puVar24 = puVar14 + 0x20;
                  uVar26 = *(undefined8 *)puVar23;
                  uVar25 = 2;
                  puVar19 = puVar15 + 0x20;
                  *(undefined8 *)(puVar15 + 0x18) = *(undefined8 *)(puVar14 + 0x18);
                  *(undefined8 *)puVar18 = uVar26;
                }
                puVar23 = puVar24 + 0x10;
                uVar26 = *(undefined8 *)puVar24;
                uVar25 = uVar25 + 1;
                puVar18 = puVar19 + 0x10;
                *(undefined8 *)(puVar19 + 8) = *(undefined8 *)(puVar24 + 8);
                *(undefined8 *)puVar19 = uVar26;
              }
              puVar24 = puVar23 + 0x10;
              uVar26 = *(undefined8 *)puVar23;
              uVar25 = uVar25 + 1;
              puVar19 = puVar18 + 0x10;
              *(undefined8 *)(puVar18 + 8) = *(undefined8 *)(puVar23 + 8);
              *(undefined8 *)puVar18 = uVar26;
            }
            puVar23 = puVar24 + 0x10;
            uVar26 = *(undefined8 *)puVar24;
            uVar25 = uVar25 + 1;
            puVar18 = puVar19 + 0x10;
            *(undefined8 *)(puVar19 + 8) = *(undefined8 *)(puVar24 + 8);
            *(undefined8 *)puVar19 = uVar26;
          }
          puVar24 = puVar23 + 0x10;
          uVar26 = *(undefined8 *)puVar23;
          uVar25 = uVar25 + 1;
          puVar19 = puVar18 + 0x10;
          *(undefined8 *)(puVar18 + 8) = *(undefined8 *)(puVar23 + 8);
          *(undefined8 *)puVar18 = uVar26;
        }
        puVar23 = puVar24 + 0x10;
        uVar26 = *(undefined8 *)puVar24;
        uVar25 = uVar25 + 1;
        puVar18 = puVar19 + 0x10;
        *(undefined8 *)(puVar19 + 8) = *(undefined8 *)(puVar24 + 8);
        *(undefined8 *)puVar19 = uVar26;
      }
      uVar26 = *(undefined8 *)puVar23;
      uVar25 = uVar25 + 1;
      *(undefined8 *)(puVar18 + 8) = *(undefined8 *)(puVar23 + 8);
      *(undefined8 *)puVar18 = uVar26;
      puVar18 = puVar18 + 0x10;
      puVar23 = puVar23 + 0x10;
      if (uVar1 <= uVar25) goto LAB_0018a5ec;
    }
    do {
      uVar26 = *(undefined8 *)puVar23;
      uVar25 = uVar25 + 8;
      *(undefined8 *)(puVar18 + 8) = *(undefined8 *)(puVar23 + 8);
      *(undefined8 *)puVar18 = uVar26;
      uVar26 = *(undefined8 *)(puVar23 + 0x10);
      *(undefined8 *)(puVar18 + 0x18) = *(undefined8 *)(puVar23 + 0x18);
      *(undefined8 *)(puVar18 + 0x10) = uVar26;
      uVar26 = *(undefined8 *)(puVar23 + 0x20);
      *(undefined8 *)(puVar18 + 0x28) = *(undefined8 *)(puVar23 + 0x28);
      *(undefined8 *)(puVar18 + 0x20) = uVar26;
      uVar26 = *(undefined8 *)(puVar23 + 0x30);
      *(undefined8 *)(puVar18 + 0x38) = *(undefined8 *)(puVar23 + 0x38);
      *(undefined8 *)(puVar18 + 0x30) = uVar26;
      uVar26 = *(undefined8 *)(puVar23 + 0x40);
      *(undefined8 *)(puVar18 + 0x48) = *(undefined8 *)(puVar23 + 0x48);
      *(undefined8 *)(puVar18 + 0x40) = uVar26;
      uVar26 = *(undefined8 *)(puVar23 + 0x50);
      *(undefined8 *)(puVar18 + 0x58) = *(undefined8 *)(puVar23 + 0x58);
      *(undefined8 *)(puVar18 + 0x50) = uVar26;
      uVar26 = *(undefined8 *)(puVar23 + 0x60);
      *(undefined8 *)(puVar18 + 0x68) = *(undefined8 *)(puVar23 + 0x68);
      *(undefined8 *)(puVar18 + 0x60) = uVar26;
      uVar26 = *(undefined8 *)(puVar23 + 0x70);
      *(undefined8 *)(puVar18 + 0x78) = *(undefined8 *)(puVar23 + 0x78);
      *(undefined8 *)(puVar18 + 0x70) = uVar26;
      puVar18 = puVar18 + 0x80;
      puVar23 = puVar23 + 0x80;
    } while (uVar25 < uVar1);
  }
LAB_0018a5ec:
  uVar22 = (ulong)((int)uVar22 + uVar1 * 0x10);
  if (param_3 - uVar16 == uVar1 * 0x10) {
    return;
  }
LAB_0018a5f8:
  iVar21 = (int)uVar22;
  uVar16 = iVar21 + 1;
  param_1[uVar22] = param_2[uVar22];
  if (uVar16 < param_3) {
    uVar1 = iVar21 + 2;
    param_1[uVar16] = param_2[uVar16];
    if (uVar1 < param_3) {
      uVar16 = iVar21 + 3;
      param_1[uVar1] = param_2[uVar1];
      if (uVar16 < param_3) {
        uVar1 = iVar21 + 4;
        param_1[uVar16] = param_2[uVar16];
        if (uVar1 < param_3) {
          uVar16 = iVar21 + 5;
          param_1[uVar1] = param_2[uVar1];
          if (uVar16 < param_3) {
            uVar1 = iVar21 + 6;
            param_1[uVar16] = param_2[uVar16];
            if (uVar1 < param_3) {
              uVar16 = iVar21 + 7;
              param_1[uVar1] = param_2[uVar1];
              if (uVar16 < param_3) {
                uVar1 = iVar21 + 8;
                param_1[uVar16] = param_2[uVar16];
                if (uVar1 < param_3) {
                  uVar16 = iVar21 + 9;
                  param_1[uVar1] = param_2[uVar1];
                  if (uVar16 < param_3) {
                    uVar1 = iVar21 + 10;
                    param_1[uVar16] = param_2[uVar16];
                    if (uVar1 < param_3) {
                      uVar16 = iVar21 + 0xb;
                      param_1[uVar1] = param_2[uVar1];
                      if (uVar16 < param_3) {
                        uVar1 = iVar21 + 0xc;
                        param_1[uVar16] = param_2[uVar16];
                        if (uVar1 < param_3) {
                          uVar16 = iVar21 + 0xd;
                          param_1[uVar1] = param_2[uVar1];
                          if (uVar16 < param_3) {
                            uVar1 = iVar21 + 0xe;
                            param_1[uVar16] = param_2[uVar16];
                            if (uVar1 < param_3) {
                              param_1[uVar1] = param_2[uVar1];
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
  return;
}

