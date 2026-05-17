/* MaMfiCnv_Open @ 001c0a70 4240B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::MaMfiCnv_Open(_MACNV_SEQ_INFO*, _MACNV_OPEN_PARAM*) */

undefined8 YAMAHA::MaMfiCnv_Open(_MACNV_SEQ_INFO *param_1,_MACNV_OPEN_PARAM *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  char *pcVar20;
  undefined8 *puVar21;
  int iVar22;
  ulong uVar23;
  undefined1 *puVar24;
  uint uVar25;
  long lVar26;
  int iVar27;
  long lVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  undefined1 *puVar34;
  byte bVar35;
  undefined4 *puVar36;
  char cVar37;
  
  if ((((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
       (puVar34 = *(undefined1 **)(param_1 + 8), param_2 == (_MACNV_OPEN_PARAM *)0x0)) ||
      (puVar34 == (undefined1 *)0x0)) ||
     ((*(long *)(param_2 + 8) == 0 || (*(int *)(param_2 + 0x10) == 0)))) {
    return 0xfffffffe;
  }
  uVar29 = *(uint *)param_2;
  if (uVar29 == 0) {
    bVar35 = 1;
    puVar34[10] = 0xf;
  }
  else {
    bVar35 = (byte)(((ulong)uVar29 ^ 0x1000) >> 0xc) & 1;
    puVar34[10] = ~(byte)(uVar29 >> 0x10) & 0xf;
  }
  if ((puVar34[0x10] == '\0') && ((*(uint *)param_1 & 0xf00) == 0x100)) {
    puVar34[0x10] = 1;
  }
  *puVar34 = 0;
  lVar26 = *(long *)(puVar34 + 0x1c0);
  lVar28 = *(long *)(param_2 + 8);
  iVar32 = *(int *)(param_2 + 0x10);
  iVar27 = *(int *)(puVar34 + 0x1c8);
  *(long *)(puVar34 + 0x1c0) = lVar28;
  *(int *)(puVar34 + 0x1c8) = iVar32;
  *(undefined4 *)(puVar34 + 0x1cc) = 4;
  *(undefined4 *)(puVar34 + 0x1d0) = 0x100;
  uVar29 = *(uint *)param_2;
  *(undefined4 *)(puVar34 + 0x7a74) = 0xffffffff;
  *(undefined4 *)(puVar34 + 0x7a78) = 0xffffffff;
  *(undefined4 *)(puVar34 + 0x7a80) = 0xffffffff;
  *(undefined4 *)(puVar34 + 0x7a84) = 0xffffffff;
  *(undefined4 *)(puVar34 + 0x7a8c) = 0xffffffff;
  *(undefined4 *)(puVar34 + 0x7a90) = 0xffffffff;
  *(undefined4 *)(puVar34 + 0x7a98) = 0xffffffff;
  *(undefined4 *)(puVar34 + 0x7a9c) = 0xffffffff;
  *(undefined4 *)(puVar34 + 0x7aa4) = 0xffffffff;
  *(undefined4 *)(puVar34 + 0x7aa8) = 0xffffffff;
  *(undefined4 *)(puVar34 + 0x7ab0) = 0xffffffff;
  *(undefined4 *)(puVar34 + 0x7ab4) = 0xffffffff;
  *(undefined4 *)(puVar34 + 0x7abc) = 0xffffffff;
  *(undefined4 *)(puVar34 + 0x7ac0) = 0xffffffff;
  if ((uVar29 & 1) == 0) {
    if ((lVar26 != lVar28) || (iVar27 != iVar32)) {
      return 0xffffffff;
    }
  }
  else {
    puVar34[0x12] = 0;
    puVar34[0x11] = 1;
    puVar34[0x7368] = 0xff;
    puVar34[0x7369] = 0xff;
    puVar34[0x870d] = 0;
    *(undefined4 *)(puVar34 + 0x856c) = 0;
    *(undefined4 *)(puVar34 + 0x8570) = 0;
    puVar34[0x870e] = 0;
    puVar34[0x8710] = 0;
    uVar29 = (uint)-(long)(puVar34 + 0x864b) & 0xf;
    *(undefined2 *)(puVar34 + 0x863c) = 0;
    *(undefined8 *)(puVar34 + 0x85f8) = 0;
    *(undefined8 *)(puVar34 + 0x85f0) = 0;
    *(undefined8 *)(puVar34 + 0x8608) = 0;
    *(undefined8 *)(puVar34 + 0x8600) = 0;
    *(undefined8 *)(puVar34 + 0x8618) = 0;
    *(undefined8 *)(puVar34 + 0x8610) = 0;
    *(undefined8 *)(puVar34 + 0x8628) = 0;
    *(undefined8 *)(puVar34 + 0x8620) = 0;
    *(undefined2 *)(puVar34 + 0x863e) = 0;
    puVar34[0x8649] = 0x20;
    if ((-(long)(puVar34 + 0x864b) & 0xfU) == 0) {
      uVar23 = 0;
      iVar27 = 2;
      uVar25 = 0x20;
      uVar29 = 0x20;
      iVar32 = 0x20;
      uVar31 = 0;
    }
    else {
      puVar34[0x864b] = 0;
      puVar34[0x86cb] = 0x1f;
      puVar34[0x86eb] = 0x1f;
      puVar34[0x86ab] = 0;
      puVar34[0x866b] = 0;
      puVar34[0x868b] = 0;
      puVar34[0x197] = 0xff;
      uVar31 = uVar29;
      if (uVar29 == 1) {
        iVar32 = 0x1f;
      }
      else {
        puVar34[0x864c] = 0;
        puVar34[0x86cc] = 0x1f;
        puVar34[0x86ec] = 0x1f;
        puVar34[0x86ac] = 0;
        puVar34[0x866c] = 0;
        puVar34[0x868c] = 0;
        puVar34[0x198] = 0xff;
        if (uVar29 == 2) {
          iVar32 = 0x1e;
        }
        else {
          puVar34[0x864d] = 0;
          puVar34[0x86cd] = 0x1f;
          puVar34[0x86ed] = 0x1f;
          puVar34[0x86ad] = 0;
          puVar34[0x866d] = 0;
          puVar34[0x868d] = 0;
          puVar34[0x199] = 0xff;
          if (uVar29 == 3) {
            iVar32 = 0x1d;
          }
          else {
            puVar34[0x864e] = 0;
            puVar34[0x86ce] = 0x1f;
            puVar34[0x86ee] = 0x1f;
            puVar34[0x86ae] = 0;
            puVar34[0x866e] = 0;
            puVar34[0x868e] = 0;
            puVar34[0x19a] = 0xff;
            if (uVar29 == 4) {
              iVar32 = 0x1c;
            }
            else {
              puVar34[0x864f] = 0;
              puVar34[0x86cf] = 0x1f;
              puVar34[0x86ef] = 0x1f;
              puVar34[0x86af] = 0;
              puVar34[0x866f] = 0;
              puVar34[0x868f] = 0;
              puVar34[0x19b] = 0xff;
              if (uVar29 == 5) {
                iVar32 = 0x1b;
              }
              else {
                puVar34[0x8650] = 0;
                puVar34[0x86d0] = 0x1f;
                puVar34[0x86f0] = 0x1f;
                puVar34[0x86b0] = 0;
                puVar34[0x8670] = 0;
                puVar34[0x8690] = 0;
                puVar34[0x19c] = 0xff;
                if (uVar29 == 6) {
                  iVar32 = 0x1a;
                }
                else {
                  puVar34[0x8651] = 0;
                  puVar34[0x86d1] = 0x1f;
                  puVar34[0x86f1] = 0x1f;
                  puVar34[0x86b1] = 0;
                  puVar34[0x8671] = 0;
                  puVar34[0x8691] = 0;
                  puVar34[0x19d] = 0xff;
                  if (uVar29 == 7) {
                    iVar32 = 0x19;
                  }
                  else {
                    puVar34[0x8652] = 0;
                    puVar34[0x86d2] = 0x1f;
                    puVar34[0x86f2] = 0x1f;
                    puVar34[0x86b2] = 0;
                    puVar34[0x8672] = 0;
                    puVar34[0x8692] = 0;
                    puVar34[0x19e] = 0xff;
                    if (uVar29 == 8) {
                      iVar32 = 0x18;
                      uVar31 = 8;
                    }
                    else {
                      puVar34[0x8653] = 0;
                      puVar34[0x86d3] = 0x1f;
                      puVar34[0x86f3] = 0x1f;
                      puVar34[0x86b3] = 0;
                      puVar34[0x8673] = 0;
                      puVar34[0x8693] = 0;
                      puVar34[0x19f] = 0xff;
                      if (uVar29 == 9) {
                        iVar32 = 0x17;
                      }
                      else {
                        puVar34[0x8654] = 0;
                        puVar34[0x86d4] = 0x1f;
                        puVar34[0x86f4] = 0x1f;
                        puVar34[0x86b4] = 0;
                        puVar34[0x8674] = 0;
                        puVar34[0x8694] = 0;
                        puVar34[0x1a0] = 0xff;
                        if (uVar29 == 10) {
                          iVar32 = 0x16;
                        }
                        else {
                          puVar34[0x8655] = 0;
                          puVar34[0x86d5] = 0x1f;
                          puVar34[0x86f5] = 0x1f;
                          puVar34[0x86b5] = 0;
                          puVar34[0x8675] = 0;
                          puVar34[0x8695] = 0;
                          puVar34[0x1a1] = 0xff;
                          if (uVar29 == 0xb) {
                            iVar32 = 0x15;
                          }
                          else {
                            puVar34[0x8656] = 0;
                            puVar34[0x86d6] = 0x1f;
                            puVar34[0x86f6] = 0x1f;
                            puVar34[0x86b6] = 0;
                            puVar34[0x8676] = 0;
                            puVar34[0x8696] = 0;
                            puVar34[0x1a2] = 0xff;
                            if (uVar29 == 0xc) {
                              iVar32 = 0x14;
                            }
                            else {
                              puVar34[0x8657] = 0;
                              puVar34[0x86d7] = 0x1f;
                              puVar34[0x86f7] = 0x1f;
                              puVar34[0x86b7] = 0;
                              puVar34[0x8677] = 0;
                              puVar34[0x8697] = 0;
                              puVar34[0x1a3] = 0xff;
                              if (uVar29 == 0xd) {
                                iVar32 = 0x13;
                              }
                              else {
                                puVar34[0x8658] = 0;
                                puVar34[0x86d8] = 0x1f;
                                puVar34[0x86f8] = 0x1f;
                                puVar34[0x86b8] = 0;
                                puVar34[0x8678] = 0;
                                puVar34[0x8698] = 0;
                                puVar34[0x1a4] = 0xff;
                                if (uVar29 == 0xf) {
                                  puVar34[0x8659] = 0;
                                  iVar32 = 0x11;
                                  puVar34[0x86d9] = 0x1f;
                                  puVar34[0x86f9] = 0x1f;
                                  puVar34[0x86b9] = 0;
                                  puVar34[0x8679] = 0;
                                  puVar34[0x8699] = 0;
                                  puVar34[0x1a5] = 0xff;
                                }
                                else {
                                  iVar32 = 0x12;
                                  uVar31 = 0xe;
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
      uVar23 = (ulong)(byte)uVar29;
      uVar25 = 0x10;
      iVar27 = 1;
      uVar29 = 0x20 - uVar29 & 0xff;
    }
    puVar21 = (undefined8 *)(puVar34 + uVar23 + 0x864b);
    puVar2 = (undefined8 *)(puVar34 + uVar23 + 0x86cb);
    puVar21[1] = 0;
    *puVar21 = 0;
    puVar3 = (undefined8 *)(puVar34 + uVar23 + 0x86eb);
    puVar2[1] = 0x1f1f1f1f1f1f1f1f;
    *puVar2 = 0x1f1f1f1f1f1f1f1f;
    puVar4 = (undefined8 *)(puVar34 + uVar23 + 0x86ab);
    puVar3[1] = 0x1f1f1f1f1f1f1f1f;
    *puVar3 = 0x1f1f1f1f1f1f1f1f;
    puVar5 = (undefined8 *)(puVar34 + uVar23 + 0x866b);
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar6 = (undefined8 *)(puVar34 + uVar23 + 0x868b);
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar7 = (undefined8 *)(puVar34 + uVar23 + 0x197);
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar7[1] = 0xffffffffffffffff;
    *puVar7 = 0xffffffffffffffff;
    if (iVar27 == 2) {
      puVar21[3] = 0;
      puVar21[2] = 0;
      puVar2[3] = 0x1f1f1f1f1f1f1f1f;
      puVar2[2] = 0x1f1f1f1f1f1f1f1f;
      puVar3[3] = 0x1f1f1f1f1f1f1f1f;
      puVar3[2] = 0x1f1f1f1f1f1f1f1f;
      puVar4[3] = 0;
      puVar4[2] = 0;
      puVar5[3] = 0;
      puVar5[2] = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      puVar7[3] = 0xffffffffffffffff;
      puVar7[2] = 0xffffffffffffffff;
    }
    uVar30 = iVar32 - uVar25;
    iVar32 = uVar31 + uVar25;
    if (uVar29 != uVar25) {
      iVar27 = iVar32 + 1;
      puVar34[(long)iVar32 + 0x864b] = 0;
      puVar34[(long)iVar32 + 0x86cb] = 0x1f;
      puVar34[(long)iVar32 + 0x86eb] = 0x1f;
      puVar34[(long)iVar32 + 0x86ab] = 0;
      puVar34[(long)iVar32 + 0x866b] = 0;
      puVar34[(long)iVar32 + 0x868b] = 0;
      puVar34[(long)iVar32 + 0x197] = 0xff;
      if ((uVar30 & 0xff) != 1) {
        iVar22 = iVar32 + 2;
        puVar34[(long)iVar27 + 0x864b] = 0;
        puVar34[(long)iVar27 + 0x86cb] = 0x1f;
        puVar34[(long)iVar27 + 0x86eb] = 0x1f;
        puVar34[(long)iVar27 + 0x86ab] = 0;
        puVar34[(long)iVar27 + 0x866b] = 0;
        puVar34[(long)iVar27 + 0x868b] = 0;
        puVar34[(long)iVar27 + 0x197] = 0xff;
        if ((uVar30 & 0xff) != 2) {
          iVar27 = iVar32 + 3;
          uVar29 = uVar30 & 0xff;
          puVar34[(long)iVar22 + 0x864b] = 0;
          puVar34[(long)iVar22 + 0x86cb] = 0x1f;
          puVar34[(long)iVar22 + 0x86eb] = 0x1f;
          puVar34[(long)iVar22 + 0x86ab] = 0;
          puVar34[(long)iVar22 + 0x866b] = 0;
          puVar34[(long)iVar22 + 0x868b] = 0;
          puVar34[(long)iVar22 + 0x197] = 0xff;
          if (uVar29 != 3) {
            iVar22 = iVar32 + 4;
            puVar34[(long)iVar27 + 0x864b] = 0;
            puVar34[(long)iVar27 + 0x86cb] = 0x1f;
            puVar34[(long)iVar27 + 0x86eb] = 0x1f;
            puVar34[(long)iVar27 + 0x86ab] = 0;
            puVar34[(long)iVar27 + 0x866b] = 0;
            puVar34[(long)iVar27 + 0x868b] = 0;
            puVar34[(long)iVar27 + 0x197] = 0xff;
            if (uVar29 != 4) {
              iVar27 = iVar32 + 5;
              puVar34[(long)iVar22 + 0x864b] = 0;
              puVar34[(long)iVar22 + 0x86cb] = 0x1f;
              puVar34[(long)iVar22 + 0x86eb] = 0x1f;
              puVar34[(long)iVar22 + 0x86ab] = 0;
              puVar34[(long)iVar22 + 0x866b] = 0;
              puVar34[(long)iVar22 + 0x868b] = 0;
              puVar34[(long)iVar22 + 0x197] = 0xff;
              if (uVar29 != 5) {
                iVar22 = iVar32 + 6;
                puVar34[(long)iVar27 + 0x864b] = 0;
                puVar34[(long)iVar27 + 0x86cb] = 0x1f;
                puVar34[(long)iVar27 + 0x86eb] = 0x1f;
                puVar34[(long)iVar27 + 0x86ab] = 0;
                puVar34[(long)iVar27 + 0x866b] = 0;
                puVar34[(long)iVar27 + 0x868b] = 0;
                puVar34[(long)iVar27 + 0x197] = 0xff;
                if (uVar29 != 6) {
                  iVar27 = iVar32 + 7;
                  uVar30 = uVar30 & 0xff;
                  puVar34[(long)iVar22 + 0x864b] = 0;
                  puVar34[(long)iVar22 + 0x86cb] = 0x1f;
                  puVar34[(long)iVar22 + 0x86eb] = 0x1f;
                  puVar34[(long)iVar22 + 0x86ab] = 0;
                  puVar34[(long)iVar22 + 0x866b] = 0;
                  puVar34[(long)iVar22 + 0x868b] = 0;
                  puVar34[(long)iVar22 + 0x197] = 0xff;
                  if (uVar30 != 7) {
                    iVar22 = iVar32 + 8;
                    puVar34[(long)iVar27 + 0x864b] = 0;
                    puVar34[(long)iVar27 + 0x86cb] = 0x1f;
                    puVar34[(long)iVar27 + 0x86eb] = 0x1f;
                    puVar34[(long)iVar27 + 0x86ab] = 0;
                    puVar34[(long)iVar27 + 0x866b] = 0;
                    puVar34[(long)iVar27 + 0x868b] = 0;
                    puVar34[(long)iVar27 + 0x197] = 0xff;
                    if (uVar30 != 8) {
                      iVar27 = iVar32 + 9;
                      puVar34[(long)iVar22 + 0x864b] = 0;
                      puVar34[(long)iVar22 + 0x86cb] = 0x1f;
                      puVar34[(long)iVar22 + 0x86eb] = 0x1f;
                      puVar34[(long)iVar22 + 0x86ab] = 0;
                      puVar34[(long)iVar22 + 0x866b] = 0;
                      puVar34[(long)iVar22 + 0x868b] = 0;
                      puVar34[(long)iVar22 + 0x197] = 0xff;
                      if (uVar30 != 9) {
                        iVar22 = iVar32 + 10;
                        puVar34[(long)iVar27 + 0x864b] = 0;
                        puVar34[(long)iVar27 + 0x86cb] = 0x1f;
                        puVar34[(long)iVar27 + 0x86eb] = 0x1f;
                        puVar34[(long)iVar27 + 0x86ab] = 0;
                        puVar34[(long)iVar27 + 0x866b] = 0;
                        puVar34[(long)iVar27 + 0x868b] = 0;
                        puVar34[(long)iVar27 + 0x197] = 0xff;
                        if (uVar30 != 10) {
                          iVar27 = iVar32 + 0xb;
                          puVar34[(long)iVar22 + 0x864b] = 0;
                          puVar34[(long)iVar22 + 0x86cb] = 0x1f;
                          puVar34[(long)iVar22 + 0x86eb] = 0x1f;
                          puVar34[(long)iVar22 + 0x86ab] = 0;
                          puVar34[(long)iVar22 + 0x866b] = 0;
                          puVar34[(long)iVar22 + 0x868b] = 0;
                          puVar34[(long)iVar22 + 0x197] = 0xff;
                          if (uVar30 != 0xb) {
                            iVar22 = iVar32 + 0xc;
                            puVar34[(long)iVar27 + 0x864b] = 0;
                            puVar34[(long)iVar27 + 0x86cb] = 0x1f;
                            puVar34[(long)iVar27 + 0x86eb] = 0x1f;
                            puVar34[(long)iVar27 + 0x86ab] = 0;
                            puVar34[(long)iVar27 + 0x866b] = 0;
                            puVar34[(long)iVar27 + 0x868b] = 0;
                            puVar34[(long)iVar27 + 0x197] = 0xff;
                            if (uVar30 != 0xc) {
                              iVar27 = iVar32 + 0xd;
                              puVar34[(long)iVar22 + 0x864b] = 0;
                              puVar34[(long)iVar22 + 0x86cb] = 0x1f;
                              puVar34[(long)iVar22 + 0x86eb] = 0x1f;
                              puVar34[(long)iVar22 + 0x86ab] = 0;
                              puVar34[(long)iVar22 + 0x866b] = 0;
                              puVar34[(long)iVar22 + 0x868b] = 0;
                              puVar34[(long)iVar22 + 0x197] = 0xff;
                              if (uVar30 != 0xd) {
                                iVar32 = iVar32 + 0xe;
                                puVar34[(long)iVar27 + 0x864b] = 0;
                                puVar34[(long)iVar27 + 0x86cb] = 0x1f;
                                puVar34[(long)iVar27 + 0x86eb] = 0x1f;
                                puVar34[(long)iVar27 + 0x86ab] = 0;
                                puVar34[(long)iVar27 + 0x866b] = 0;
                                puVar34[(long)iVar27 + 0x868b] = 0;
                                puVar34[(long)iVar27 + 0x197] = 0xff;
                                if (uVar30 != 0xe) {
                                  puVar34[(long)iVar32 + 0x864b] = 0;
                                  puVar34[(long)iVar32 + 0x86cb] = 0x1f;
                                  puVar34[(long)iVar32 + 0x86eb] = 0x1f;
                                  puVar34[(long)iVar32 + 0x86ab] = 0;
                                  puVar34[(long)iVar32 + 0x866b] = 0;
                                  puVar34[(long)iVar32 + 0x868b] = 0;
                                  puVar34[(long)iVar32 + 0x197] = 0xff;
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
    }
    puVar36 = (undefined4 *)(puVar34 + 0x8718);
    do {
      *puVar36 = 0;
      puVar36[1] = 0;
      puVar36[2] = 0;
      puVar36[3] = 0;
      puVar36[4] = 0;
      *(undefined8 *)(puVar36 + 6) = 0;
      puVar36[8] = 0;
      puVar1 = puVar36 + 0x40;
      puVar36[9] = 0;
      puVar36[10] = 0;
      puVar36[0xb] = 0;
      puVar36[0xc] = 0;
      *(undefined8 *)(puVar36 + 0xe) = 0;
      puVar36[0x10] = 0;
      puVar36[0x11] = 0;
      puVar36[0x12] = 0;
      puVar36[0x13] = 0;
      puVar36[0x14] = 0;
      *(undefined8 *)(puVar36 + 0x16) = 0;
      puVar36[0x18] = 0;
      puVar36[0x19] = 0;
      puVar36[0x1a] = 0;
      puVar36[0x1b] = 0;
      puVar36[0x1c] = 0;
      *(undefined8 *)(puVar36 + 0x1e) = 0;
      puVar36[0x20] = 0;
      puVar36[0x21] = 0;
      puVar36[0x22] = 0;
      puVar36[0x23] = 0;
      puVar36[0x24] = 0;
      *(undefined8 *)(puVar36 + 0x26) = 0;
      puVar36[0x28] = 0;
      puVar36[0x29] = 0;
      puVar36[0x2a] = 0;
      puVar36[0x2b] = 0;
      puVar36[0x2c] = 0;
      *(undefined8 *)(puVar36 + 0x2e) = 0;
      puVar36[0x30] = 0;
      puVar36[0x31] = 0;
      puVar36[0x32] = 0;
      puVar36[0x33] = 0;
      puVar36[0x34] = 0;
      *(undefined8 *)(puVar36 + 0x36) = 0;
      puVar36[0x38] = 0;
      puVar36[0x39] = 0;
      puVar36[0x3a] = 0;
      puVar36[0x3b] = 0;
      puVar36[0x3c] = 0;
      *(undefined8 *)(puVar36 + 0x3e) = 0;
      uVar18 = _UNK_001c1b48;
      uVar17 = _DAT_001c1b40;
      uVar16 = _UNK_001c1b38;
      uVar15 = _DAT_001c1b30;
      uVar14 = _UNK_001c1b28;
      uVar13 = _DAT_001c1b20;
      uVar12 = _UNK_001c1b18;
      uVar11 = _DAT_001c1b10;
      uVar10 = _UNK_001c1b08;
      uVar19 = _DAT_001c1b00;
      puVar36 = puVar1;
    } while (puVar1 != (undefined4 *)(puVar34 + 0x8f18));
    puVar21 = (undefined8 *)(puVar34 + 0xb50);
    do {
      puVar21[1] = uVar10;
      *puVar21 = uVar19;
      puVar21[3] = uVar12;
      puVar21[2] = uVar11;
      puVar21[5] = uVar14;
      puVar21[4] = uVar13;
      puVar21[7] = uVar16;
      puVar21[6] = uVar15;
      puVar21[9] = uVar18;
      puVar21[8] = uVar17;
      puVar21[0xb] = uVar10;
      puVar21[10] = uVar19;
      puVar21[0xd] = uVar12;
      puVar21[0xc] = uVar11;
      puVar21[0xf] = uVar14;
      puVar21[0xe] = uVar13;
      puVar21[0x11] = uVar16;
      puVar21[0x10] = uVar15;
      puVar21[0x13] = uVar18;
      puVar21[0x12] = uVar17;
      puVar2 = puVar21 + 0x28;
      puVar21[0x15] = uVar10;
      puVar21[0x14] = uVar19;
      puVar21[0x17] = uVar12;
      puVar21[0x16] = uVar11;
      puVar21[0x19] = uVar14;
      puVar21[0x18] = uVar13;
      puVar21[0x1b] = uVar16;
      puVar21[0x1a] = uVar15;
      puVar21[0x1d] = uVar18;
      puVar21[0x1c] = uVar17;
      puVar21[0x1f] = uVar10;
      puVar21[0x1e] = uVar19;
      puVar21[0x21] = uVar12;
      puVar21[0x20] = uVar11;
      puVar21[0x23] = uVar14;
      puVar21[0x22] = uVar13;
      puVar21[0x25] = uVar16;
      puVar21[0x24] = uVar15;
      puVar21[0x27] = uVar18;
      puVar21[0x26] = uVar17;
      puVar21 = puVar2;
    } while (puVar2 != (undefined8 *)(puVar34 + 0x5b50));
    uVar23 = -((ulong)(puVar34 + 0xa8c) >> 2 & 3);
    *(undefined8 *)(puVar34 + 0xb18) = 0x40000000400;
    *(undefined8 *)(puVar34 + 0xb10) = 0x40000000400;
    uVar29 = (uint)uVar23 & 3;
    puVar34[0x16] = 0;
    if ((uVar23 & 3) == 0) {
      uVar23 = 0;
      iVar33 = 8;
      iVar32 = 0x20;
      uVar31 = 0;
      iVar22 = 0x20;
      iVar27 = iVar32;
    }
    else {
      *(undefined4 *)(puVar34 + 0xa8c) = 1;
      uVar31 = uVar29;
      if (uVar29 == 1) {
        iVar22 = 0x1f;
      }
      else {
        *(undefined4 *)(puVar34 + 0xa90) = 1;
        if (uVar29 == 3) {
          *(undefined4 *)(puVar34 + 0xa94) = 1;
          iVar22 = 0x1d;
        }
        else {
          iVar22 = 0x1e;
          uVar31 = 2;
        }
      }
      uVar23 = (ulong)uVar29;
      iVar32 = 0x20 - uVar29;
      iVar33 = 7;
      iVar27 = 0x1c;
    }
    puVar21 = (undefined8 *)(puVar34 + (uVar23 + 0x2a3) * 4);
    puVar21[1] = 0x100000001;
    *puVar21 = 0x100000001;
    puVar21[3] = 0x100000001;
    puVar21[2] = 0x100000001;
    puVar21[5] = 0x100000001;
    puVar21[4] = 0x100000001;
    puVar21[7] = 0x100000001;
    puVar21[6] = 0x100000001;
    puVar21[9] = 0x100000001;
    puVar21[8] = 0x100000001;
    puVar21[0xb] = 0x100000001;
    puVar21[10] = 0x100000001;
    puVar21[0xd] = 0x100000001;
    puVar21[0xc] = 0x100000001;
    if (iVar33 == 8) {
      puVar21[0xf] = 0x100000001;
      puVar21[0xe] = 0x100000001;
    }
    uVar31 = uVar31 + iVar27;
    if (iVar32 != iVar27) {
      *(undefined4 *)(puVar34 + (ulong)uVar31 * 4 + 0xa8c) = 1;
      if (iVar22 - iVar27 != 1) {
        *(undefined4 *)(puVar34 + (ulong)(byte)((char)uVar31 + 1) * 4 + 0xa8c) = 1;
        if (iVar22 - iVar27 != 2) {
          *(undefined4 *)(puVar34 + (ulong)(uVar31 + 2) * 4 + 0xa8c) = 1;
        }
      }
    }
    iVar32 = 0;
    do {
      uVar29 = iVar32 * 8;
      iVar32 = iVar32 + 1;
      *(undefined4 *)(puVar34 + (ulong)uVar29 * 4 + 0x28c) = 0x55555555;
      *(undefined4 *)(puVar34 + (ulong)(uVar29 + 1) * 4 + 0x28c) = 0x55555555;
      *(undefined4 *)(puVar34 + (ulong)(uVar29 + 2) * 4 + 0x28c) = 0x55555555;
      *(undefined4 *)(puVar34 + (ulong)(uVar29 + 3) * 4 + 0x28c) = 0x55555555;
      *(undefined4 *)(puVar34 + (ulong)(uVar29 + 4) * 4 + 0x28c) = 0x55555555;
      *(undefined4 *)(puVar34 + (ulong)(uVar29 + 5) * 4 + 0x28c) = 0x55555555;
      *(undefined4 *)(puVar34 + (ulong)(uVar29 + 6) * 4 + 0x28c) = 0x55555555;
      *(undefined4 *)(puVar34 + (ulong)(uVar29 + 7) * 4 + 0x28c) = 0x55555555;
    } while (iVar32 != 0x20);
    puVar34[0x2b] = 4;
    *(undefined4 *)(puVar34 + 0x20c) = 0x18;
    *(undefined4 *)(puVar34 + 0x210) = 0x18;
    *(undefined4 *)(puVar34 + 0x214) = 0x18;
    *(undefined4 *)(puVar34 + 0x218) = 0x18;
    puVar34[9] = 0x40;
    puVar34[7] = 0x40;
    puVar34[0x2a] = 3;
    puVar34[4] = 0x7f;
    puVar34[3] = 0x40;
    puVar34[0x28] = 1;
    *(undefined4 *)(puVar34 + 0xac8) = 0;
    *(undefined4 *)(puVar34 + 0xae8) = 0;
    *(undefined4 *)(puVar34 + 0xb08) = 0;
    *(undefined8 *)(puVar34 + 0xb28) = 0;
    *(undefined4 *)(puVar34 + 0xb20) = 0;
    *(undefined8 *)(puVar34 + 0xb40) = 0;
    *(undefined4 *)(puVar34 + 0xb38) = 0;
    puVar34[8] = 0;
    puVar34[0xb] = 0;
    *(undefined4 *)(puVar34 + 0xb0c) = 0;
    puVar34[0x37] = 0;
    puVar34[0x27] = 0;
    *(undefined4 *)(puVar34 + 0x24c) = 2;
    puVar34[0x38] = 0;
    *(undefined4 *)(puVar34 + 0x250) = 2;
    puVar34[0x39] = 0;
    puVar34[0x29] = 2;
    *(undefined4 *)(puVar34 + 0x254) = 2;
    puVar34[0x3a] = 0;
    *(undefined4 *)(puVar34 + 600) = 2;
    puVar34[0x3b] = 0;
    *(undefined4 *)(puVar34 + 0x21c) = 0x18;
    puVar34[0x2e] = 7;
    puVar34[0x32] = 0xb;
    puVar34[0x2c] = 5;
    *(undefined4 *)(puVar34 + 0x220) = 0x18;
    puVar34[0x2d] = 6;
    *(undefined4 *)(puVar34 + 0x224) = 0x18;
    *(undefined4 *)(puVar34 + 0x228) = 0x18;
    puVar34[0x2f] = 8;
    *(undefined4 *)(puVar34 + 0x22c) = 0x18;
    puVar34[0x40] = 1 < (byte)puVar34[0xc];
    puVar34[0x30] = 9;
    *(undefined4 *)(puVar34 + 0x230) = 0x18;
    puVar34[0x31] = 10;
    *(undefined4 *)(puVar34 + 0x234) = 0x18;
    *(undefined4 *)(puVar34 + 0x238) = 0x18;
    puVar34[0x33] = 0xc;
    *(undefined4 *)(puVar34 + 0x23c) = 0x18;
    *(undefined4 *)(puVar34 + 0x25c) = 2;
    puVar34[0x3c] = 0;
    *(undefined4 *)(puVar34 + 0x260) = 2;
    puVar34[0x3d] = 0;
    *(undefined4 *)(puVar34 + 0x264) = 2;
    puVar34[0x3e] = 0;
    *(undefined4 *)(puVar34 + 0x268) = 2;
    puVar34[0x3f] = 0;
    *(undefined4 *)(puVar34 + 0x26c) = 2;
    *(undefined4 *)(puVar34 + 0x270) = 2;
    puVar34[0x41] = 0;
    *(undefined4 *)(puVar34 + 0x274) = 2;
    puVar34[0x42] = 0;
    *(undefined4 *)(puVar34 + 0x278) = 2;
    puVar34[0x43] = 0;
    *(undefined4 *)(puVar34 + 0x27c) = 2;
    puVar34[0x44] = 0;
    puVar34[0x34] = 0xd;
    *(undefined4 *)(puVar34 + 0x240) = 0x18;
    puVar34[0x35] = 0xe;
    *(undefined4 *)(puVar34 + 0x244) = 0x18;
    puVar34[0x36] = 0xf;
    *(undefined4 *)(puVar34 + 0x248) = 0x18;
    *(undefined4 *)(puVar34 + 0x280) = 2;
    puVar34[0x45] = 0;
    *(undefined4 *)(puVar34 + 0x284) = 2;
    puVar34[0x46] = 0;
    *(undefined4 *)(puVar34 + 0x288) = 2;
    *(undefined8 *)(puVar34 + 0x47) = 0;
    *(undefined8 *)(puVar34 + 0x4f) = 0;
    memset(puVar34 + 0x57,2,0x10);
    memset(puVar34 + 0x67,0x3f,0x10);
    memset(puVar34 + 0x77,0x20,0x10);
    memset(puVar34 + 0xa7,0x7f,0x10);
    memset(puVar34 + 0x87,0x20,0x10);
    memset(puVar34 + 0x97,0x20,0x10);
    memset(puVar34 + 0x157,0x3f,0x20);
    memset(puVar34 + 0x177,0x3f,0x20);
    *(undefined8 *)(puVar34 + 0xb7) = 0xffffffffffffffff;
    *(undefined8 *)(puVar34 + 0xbf) = 0xffffffffffffffff;
    *(undefined8 *)(puVar34 + 199) = 0xffffffffffffffff;
    *(undefined8 *)(puVar34 + 0xcf) = 0xffffffffffffffff;
    *(undefined8 *)(puVar34 + 0xd7) = 0;
    *(undefined8 *)(puVar34 + 0xdf) = 0;
    *(undefined8 *)(puVar34 + 0xe7) = 0;
    *(undefined8 *)(puVar34 + 0xef) = 0;
    puVar24 = puVar34 + 0x736b;
    puVar34[6] = 0x40;
    iVar32 = 0;
    puVar34[2] = 100;
    *(undefined2 *)(puVar34 + 0x1be) = 0x2000;
    do {
      if (iVar32 == 9) {
        puVar34[0x741f] = 0x80;
      }
      else {
        *puVar24 = 0;
      }
      iVar27 = iVar32 + 1;
      puVar34[(long)iVar32 * 0x14 + 0x736a] = 0;
      puVar34[(long)iVar32 * 0x14 + 0x736d] = 0;
      puVar34[(long)iVar32 * 0x14 + 0x736c] = 0x3f;
      puVar34[(long)iVar32 * 0x14 + 0x7370] = 0x40;
      puVar34[(long)iVar32 * 0x14 + 0x7371] = 0x7f;
      puVar34[(long)iVar32 * 0x14 + 0x7372] = 0;
      *(undefined2 *)(puVar34 + (long)iVar32 * 0x14 + 0x737a) = 0x2000;
      puVar34[(long)iVar32 * 0x14 + 0x736e] = 2;
      puVar34[(long)iVar32 * 0x14 + 0x736f] = 2;
      puVar34[(long)iVar32 * 0x14 + 0x7373] = 1;
      puVar34[(long)iVar32 * 0x14 + 0x7374] = 0x40;
      *(undefined2 *)(puVar34 + (long)iVar32 * 0x14 + 0x737c) = 0x2000;
      puVar34[(long)iVar32 * 0x14 + 0x7376] = 0x40;
      puVar34[(long)iVar32 * 0x14 + 0x7375] = 0x40;
      puVar34[(long)iVar32 * 0x14 + 0x7377] = 0x7f;
      puVar34[(long)iVar32 * 0x14 + 0x7378] = 0x28;
      puVar34[(long)iVar32 * 0x14 + 0x7379] = 0;
      if (iVar27 == 9) {
        puVar34[0x741f] = 0x80;
      }
      else {
        puVar24[0x14] = 0;
      }
      iVar32 = iVar32 + 2;
      puVar24 = puVar24 + 0x28;
      puVar34[(long)iVar27 * 0x14 + 0x736a] = 0;
      puVar34[(long)iVar27 * 0x14 + 0x736d] = 0;
      puVar34[(long)iVar27 * 0x14 + 0x736c] = 0x3f;
      puVar34[(long)iVar27 * 0x14 + 0x7370] = 0x40;
      puVar34[(long)iVar27 * 0x14 + 0x7371] = 0x7f;
      puVar34[(long)iVar27 * 0x14 + 0x7372] = 0;
      *(undefined2 *)(puVar34 + (long)iVar27 * 0x14 + 0x737a) = 0x2000;
      puVar34[(long)iVar27 * 0x14 + 0x736e] = 2;
      puVar34[(long)iVar27 * 0x14 + 0x736f] = 2;
      puVar34[(long)iVar27 * 0x14 + 0x7373] = 1;
      puVar34[(long)iVar27 * 0x14 + 0x7374] = 0x40;
      *(undefined2 *)(puVar34 + (long)iVar27 * 0x14 + 0x737c) = 0x2000;
      puVar34[(long)iVar27 * 0x14 + 0x7376] = 0x40;
      puVar34[(long)iVar27 * 0x14 + 0x7375] = 0x40;
      puVar34[(long)iVar27 * 0x14 + 0x7377] = 0x7f;
      puVar34[(long)iVar27 * 0x14 + 0x7378] = 0x28;
      puVar34[(long)iVar27 * 0x14 + 0x7379] = 0;
    } while (iVar32 != 0x20);
    pcVar20 = *(char **)(param_2 + 8);
    if ((((*pcVar20 != 'm') || (pcVar20[1] != 'e')) || (pcVar20[2] != 'l')) || (pcVar20[3] != 'o'))
    {
      return 0xffffffec;
    }
    uVar19 = FUN_001bdb4c(param_1,pcVar20,*(undefined4 *)(param_2 + 0x10),0);
    if ((int)uVar19 < 0) {
      return uVar19;
    }
  }
  if (0xf < (byte)puVar34[10]) {
    puVar34[10] = 0xf;
  }
  cVar8 = puVar34[0x8640];
  if (cVar8 == '\x01') {
    puVar34[0xd] = 0;
    puVar34[1] = 4;
    puVar34[7] = 0x60;
    puVar34[0x8642] = 0;
    cVar37 = puVar34[0x8643];
  }
  else if (cVar8 == '\x02') {
    puVar34[0xd] = 0;
    puVar34[1] = 4;
    puVar34[7] = 0x7f;
    puVar34[0x8642] = 1;
    cVar37 = puVar34[0x8643];
  }
  else {
    cVar37 = puVar34[0x8643];
    if (cVar37 == '\x02') {
      puVar34[0x8642] = 0;
    }
    puVar34[1] = 4;
    puVar34[0xd] = 1;
    if (((byte)puVar34[0x8710] >> 6 & 1) != 0) {
      puVar34[0x8642] = 2;
      cVar9 = puVar34[0x10];
      goto joined_r0x001c19a8;
    }
  }
  cVar9 = puVar34[0x10];
joined_r0x001c19a8:
  if (cVar9 == '\x01') {
    puVar34[0xd] = 1;
  }
  puVar34[0x870c] = bVar35;
  puVar34[0xc] = cVar8;
  puVar34[0xf] = cVar37;
  puVar34[0xe] = puVar34[0x864a];
  *(undefined4 *)(puVar34 + 0x1d4) = *(undefined4 *)(puVar34 + 0x8568);
  *(int *)(puVar34 + 0x1fc) = *(int *)(puVar34 + 0x857c) + 1;
  *puVar34 = 1;
  puVar34[0x14] = 0;
  return 0;
}

