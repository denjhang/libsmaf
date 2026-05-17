/* mapimachdep_MemCpy @ 000739b8 666B */


/* YAMAHA::mapimachdep_MemCpy(unsigned char*, unsigned char*, unsigned int) */

void YAMAHA::mapimachdep_MemCpy(uchar *param_1,uchar *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  
  if (param_3 == 0) {
    return;
  }
  if ((((uint)param_1 | (uint)param_2) & 3) != 0 ||
      (param_3 < 10 || param_1 < param_2 + 4 && param_2 < param_1 + 4)) {
    uVar5 = 1;
    uVar1 = param_3 - 1 & 0xf;
    *param_1 = *param_2;
    if (param_3 == 1) {
      return;
    }
    if (uVar1 != 0) {
      if (uVar1 != 1) {
        if (uVar1 != 2) {
          if (uVar1 != 3) {
            if (uVar1 != 4) {
              if (uVar1 != 5) {
                if (uVar1 != 6) {
                  if (uVar1 != 7) {
                    if (uVar1 != 8) {
                      if (uVar1 != 9) {
                        if (uVar1 != 10) {
                          if (uVar1 != 0xb) {
                            if (uVar1 != 0xc) {
                              if (uVar1 != 0xd) {
                                if (uVar1 != 0xe) {
                                  uVar5 = 2;
                                  param_1[1] = param_2[1];
                                }
                                param_1[uVar5] = param_2[uVar5];
                                uVar5 = uVar5 + 1;
                              }
                              param_1[uVar5] = param_2[uVar5];
                              uVar5 = uVar5 + 1;
                            }
                            param_1[uVar5] = param_2[uVar5];
                            uVar5 = uVar5 + 1;
                          }
                          param_1[uVar5] = param_2[uVar5];
                          uVar5 = uVar5 + 1;
                        }
                        param_1[uVar5] = param_2[uVar5];
                        uVar5 = uVar5 + 1;
                      }
                      param_1[uVar5] = param_2[uVar5];
                      uVar5 = uVar5 + 1;
                    }
                    param_1[uVar5] = param_2[uVar5];
                    uVar5 = uVar5 + 1;
                  }
                  param_1[uVar5] = param_2[uVar5];
                  uVar5 = uVar5 + 1;
                }
                param_1[uVar5] = param_2[uVar5];
                uVar5 = uVar5 + 1;
              }
              param_1[uVar5] = param_2[uVar5];
              uVar5 = uVar5 + 1;
            }
            param_1[uVar5] = param_2[uVar5];
            uVar5 = uVar5 + 1;
          }
          param_1[uVar5] = param_2[uVar5];
          uVar5 = uVar5 + 1;
        }
        param_1[uVar5] = param_2[uVar5];
        uVar5 = uVar5 + 1;
      }
      param_1[uVar5] = param_2[uVar5];
      uVar5 = uVar5 + 1;
      if (uVar5 == param_3) {
        return;
      }
    }
    do {
      param_1[uVar5] = param_2[uVar5];
      iVar13 = uVar5 + 7;
      iVar10 = uVar5 + 8;
      iVar11 = uVar5 + 9;
      iVar12 = uVar5 + 10;
      param_1[uVar5 + 1] = param_2[uVar5 + 1];
      param_1[uVar5 + 2] = param_2[uVar5 + 2];
      iVar9 = uVar5 + 0xb;
      param_1[uVar5 + 3] = param_2[uVar5 + 3];
      iVar8 = uVar5 + 0xc;
      param_1[uVar5 + 4] = param_2[uVar5 + 4];
      iVar7 = uVar5 + 0xd;
      param_1[uVar5 + 5] = param_2[uVar5 + 5];
      iVar6 = uVar5 + 0xe;
      param_1[uVar5 + 6] = param_2[uVar5 + 6];
      iVar2 = uVar5 + 0xf;
      uVar5 = uVar5 + 0x10;
      param_1[iVar13] = param_2[iVar13];
      param_1[iVar10] = param_2[iVar10];
      param_1[iVar11] = param_2[iVar11];
      param_1[iVar12] = param_2[iVar12];
      param_1[iVar9] = param_2[iVar9];
      param_1[iVar8] = param_2[iVar8];
      param_1[iVar7] = param_2[iVar7];
      param_1[iVar6] = param_2[iVar6];
      param_1[iVar2] = param_2[iVar2];
    } while (uVar5 != param_3);
    return;
  }
  uVar3 = param_3 >> 2;
  uVar1 = 1;
  uVar4 = uVar3 * 4;
  uVar5 = uVar3 - 1 & 7;
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  iVar2 = 4;
  if (1 < uVar3) {
    if (uVar5 != 0) {
      if (uVar5 != 1) {
        if (uVar5 != 2) {
          if (uVar5 != 3) {
            if (uVar5 != 4) {
              if (uVar5 != 5) {
                bVar14 = uVar5 != 6;
                if (bVar14) {
                  uVar5 = *(uint *)(param_2 + 4);
                  iVar2 = 8;
                  uVar1 = 2;
                }
                uVar1 = uVar1 + 1;
                if (bVar14) {
                  *(uint *)(param_1 + 4) = uVar5;
                }
                *(undefined4 *)(param_1 + iVar2) = *(undefined4 *)(param_2 + iVar2);
                iVar2 = iVar2 + 4;
              }
              uVar1 = uVar1 + 1;
              *(undefined4 *)(param_1 + iVar2) = *(undefined4 *)(param_2 + iVar2);
              iVar2 = iVar2 + 4;
            }
            uVar1 = uVar1 + 1;
            *(undefined4 *)(param_1 + iVar2) = *(undefined4 *)(param_2 + iVar2);
            iVar2 = iVar2 + 4;
          }
          uVar1 = uVar1 + 1;
          *(undefined4 *)(param_1 + iVar2) = *(undefined4 *)(param_2 + iVar2);
          iVar2 = iVar2 + 4;
        }
        uVar1 = uVar1 + 1;
        *(undefined4 *)(param_1 + iVar2) = *(undefined4 *)(param_2 + iVar2);
        iVar2 = iVar2 + 4;
      }
      uVar1 = uVar1 + 1;
      *(undefined4 *)(param_1 + iVar2) = *(undefined4 *)(param_2 + iVar2);
      iVar2 = iVar2 + 4;
      if (uVar3 <= uVar1) goto LAB_00073a74;
    }
    do {
      iVar9 = iVar2 + 8;
      iVar8 = iVar2 + 0xc;
      iVar13 = iVar2 + 0x10;
      iVar10 = iVar2 + 0x14;
      *(undefined4 *)(param_1 + iVar2) = *(undefined4 *)(param_2 + iVar2);
      iVar7 = iVar2 + 0x18;
      uVar1 = uVar1 + 8;
      *(undefined4 *)(param_1 + iVar2 + 4) = *(undefined4 *)(param_2 + iVar2 + 4);
      iVar6 = iVar2 + 0x1c;
      iVar2 = iVar2 + 0x20;
      *(undefined4 *)(param_1 + iVar9) = *(undefined4 *)(param_2 + iVar9);
      *(undefined4 *)(param_1 + iVar8) = *(undefined4 *)(param_2 + iVar8);
      *(undefined4 *)(param_1 + iVar13) = *(undefined4 *)(param_2 + iVar13);
      *(undefined4 *)(param_1 + iVar10) = *(undefined4 *)(param_2 + iVar10);
      *(undefined4 *)(param_1 + iVar7) = *(undefined4 *)(param_2 + iVar7);
      *(undefined4 *)(param_1 + iVar6) = *(undefined4 *)(param_2 + iVar6);
    } while (uVar1 < uVar3);
  }
LAB_00073a74:
  if (param_3 != uVar4) {
    uVar5 = uVar4 + 1;
    param_1[uVar3 * 4] = param_2[uVar3 * 4];
    if (uVar5 < param_3) {
      uVar4 = uVar4 + 2;
      param_1[uVar5] = param_2[uVar5];
      if (uVar4 < param_3) {
        param_1[uVar4] = param_2[uVar4];
      }
    }
  }
  return;
}

