/* MaMfiCnv_Check @ 001bfae0 3892B */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* YAMAHA::MaMfiCnv_Check(_MACNV_SEQ_INFO*, _MACNV_CHECK_PARAM*) */

undefined8 YAMAHA::MaMfiCnv_Check(_MACNV_SEQ_INFO *param_1,_MACNV_CHECK_PARAM *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  char *pcVar18;
  long lVar19;
  undefined4 *puVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  int iVar23;
  uint uVar24;
  long lVar25;
  ulong uVar26;
  int iVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  int iVar31;
  uint uVar32;
  
  if ((((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
       (lVar25 = *(long *)(param_1 + 8), param_2 == (_MACNV_CHECK_PARAM *)0x0)) || (lVar25 == 0)) ||
     ((lVar19 = *(long *)(param_2 + 8), lVar19 == 0 ||
      (iVar23 = *(int *)(param_2 + 0x10), iVar23 == 0)))) {
    uVar17 = 0xfffffffe;
  }
  else {
    *(undefined1 *)(lVar25 + 0x10) = 0;
    *(long *)(lVar25 + 0x1c0) = lVar19;
    uVar28 = *(uint *)param_1;
    *(int *)(lVar25 + 0x1c8) = iVar23;
    if ((uVar28 & 0xf00) == 0x100) {
      *(undefined1 *)(lVar25 + 0x10) = 1;
    }
    *(undefined1 *)(lVar25 + 0x12) = 0;
    *(undefined1 *)(lVar25 + 0x11) = 1;
    *(undefined1 *)(lVar25 + 0x7368) = 0xff;
    *(undefined1 *)(lVar25 + 0x7369) = 0xff;
    *(undefined1 *)(lVar25 + 0x870d) = 0;
    *(undefined4 *)(lVar25 + 0x856c) = 0;
    *(undefined4 *)(lVar25 + 0x8570) = 0;
    *(undefined1 *)(lVar25 + 0x870e) = 0;
    *(undefined1 *)(lVar25 + 0x8710) = 0;
    uVar28 = (uint)-(lVar25 + 0x864b) & 0xf;
    *(undefined2 *)(lVar25 + 0x863c) = 0;
    *(undefined8 *)(lVar25 + 0x85f8) = 0;
    *(undefined8 *)(lVar25 + 0x85f0) = 0;
    *(undefined8 *)(lVar25 + 0x8608) = 0;
    *(undefined8 *)(lVar25 + 0x8600) = 0;
    *(undefined8 *)(lVar25 + 0x8618) = 0;
    *(undefined8 *)(lVar25 + 0x8610) = 0;
    *(undefined8 *)(lVar25 + 0x8628) = 0;
    *(undefined8 *)(lVar25 + 0x8620) = 0;
    *(undefined2 *)(lVar25 + 0x863e) = 0;
    *(undefined1 *)(lVar25 + 0x8649) = 0x20;
    if ((-(lVar25 + 0x864b) & 0xfU) == 0) {
      uVar26 = 0;
      iVar23 = 2;
      uVar24 = 0x20;
      uVar28 = 0x20;
      iVar31 = 0x20;
      uVar32 = 0;
    }
    else {
      *(undefined1 *)(lVar25 + 0x864b) = 0;
      *(undefined1 *)(lVar25 + 0x86cb) = 0x1f;
      *(undefined1 *)(lVar25 + 0x86eb) = 0x1f;
      *(undefined1 *)(lVar25 + 0x86ab) = 0;
      *(undefined1 *)(lVar25 + 0x866b) = 0;
      *(undefined1 *)(lVar25 + 0x868b) = 0;
      *(undefined1 *)(lVar25 + 0x197) = 0xff;
      uVar32 = uVar28;
      if (uVar28 == 1) {
        iVar31 = 0x1f;
      }
      else {
        *(undefined1 *)(lVar25 + 0x864c) = 0;
        *(undefined1 *)(lVar25 + 0x86cc) = 0x1f;
        *(undefined1 *)(lVar25 + 0x86ec) = 0x1f;
        *(undefined1 *)(lVar25 + 0x86ac) = 0;
        *(undefined1 *)(lVar25 + 0x866c) = 0;
        *(undefined1 *)(lVar25 + 0x868c) = 0;
        *(undefined1 *)(lVar25 + 0x198) = 0xff;
        if (uVar28 == 2) {
          iVar31 = 0x1e;
        }
        else {
          *(undefined1 *)(lVar25 + 0x864d) = 0;
          *(undefined1 *)(lVar25 + 0x86cd) = 0x1f;
          *(undefined1 *)(lVar25 + 0x86ed) = 0x1f;
          *(undefined1 *)(lVar25 + 0x86ad) = 0;
          *(undefined1 *)(lVar25 + 0x866d) = 0;
          *(undefined1 *)(lVar25 + 0x868d) = 0;
          *(undefined1 *)(lVar25 + 0x199) = 0xff;
          if (uVar28 == 3) {
            iVar31 = 0x1d;
          }
          else {
            *(undefined1 *)(lVar25 + 0x864e) = 0;
            *(undefined1 *)(lVar25 + 0x86ce) = 0x1f;
            *(undefined1 *)(lVar25 + 0x86ee) = 0x1f;
            *(undefined1 *)(lVar25 + 0x86ae) = 0;
            *(undefined1 *)(lVar25 + 0x866e) = 0;
            *(undefined1 *)(lVar25 + 0x868e) = 0;
            *(undefined1 *)(lVar25 + 0x19a) = 0xff;
            if (uVar28 == 4) {
              iVar31 = 0x1c;
            }
            else {
              *(undefined1 *)(lVar25 + 0x864f) = 0;
              *(undefined1 *)(lVar25 + 0x86cf) = 0x1f;
              *(undefined1 *)(lVar25 + 0x86ef) = 0x1f;
              *(undefined1 *)(lVar25 + 0x86af) = 0;
              *(undefined1 *)(lVar25 + 0x866f) = 0;
              *(undefined1 *)(lVar25 + 0x868f) = 0;
              *(undefined1 *)(lVar25 + 0x19b) = 0xff;
              if (uVar28 == 5) {
                iVar31 = 0x1b;
              }
              else {
                *(undefined1 *)(lVar25 + 0x8650) = 0;
                *(undefined1 *)(lVar25 + 0x86d0) = 0x1f;
                *(undefined1 *)(lVar25 + 0x86f0) = 0x1f;
                *(undefined1 *)(lVar25 + 0x86b0) = 0;
                *(undefined1 *)(lVar25 + 0x8670) = 0;
                *(undefined1 *)(lVar25 + 0x8690) = 0;
                *(undefined1 *)(lVar25 + 0x19c) = 0xff;
                if (uVar28 == 6) {
                  iVar31 = 0x1a;
                }
                else {
                  *(undefined1 *)(lVar25 + 0x8651) = 0;
                  *(undefined1 *)(lVar25 + 0x86d1) = 0x1f;
                  *(undefined1 *)(lVar25 + 0x86f1) = 0x1f;
                  *(undefined1 *)(lVar25 + 0x86b1) = 0;
                  *(undefined1 *)(lVar25 + 0x8671) = 0;
                  *(undefined1 *)(lVar25 + 0x8691) = 0;
                  *(undefined1 *)(lVar25 + 0x19d) = 0xff;
                  if (uVar28 == 7) {
                    iVar31 = 0x19;
                  }
                  else {
                    *(undefined1 *)(lVar25 + 0x8652) = 0;
                    *(undefined1 *)(lVar25 + 0x86d2) = 0x1f;
                    *(undefined1 *)(lVar25 + 0x86f2) = 0x1f;
                    *(undefined1 *)(lVar25 + 0x86b2) = 0;
                    *(undefined1 *)(lVar25 + 0x8672) = 0;
                    *(undefined1 *)(lVar25 + 0x8692) = 0;
                    *(undefined1 *)(lVar25 + 0x19e) = 0xff;
                    if (uVar28 == 8) {
                      iVar31 = 0x18;
                    }
                    else {
                      *(undefined1 *)(lVar25 + 0x8653) = 0;
                      *(undefined1 *)(lVar25 + 0x86d3) = 0x1f;
                      *(undefined1 *)(lVar25 + 0x86f3) = 0x1f;
                      *(undefined1 *)(lVar25 + 0x86b3) = 0;
                      *(undefined1 *)(lVar25 + 0x8673) = 0;
                      *(undefined1 *)(lVar25 + 0x8693) = 0;
                      *(undefined1 *)(lVar25 + 0x19f) = 0xff;
                      if (uVar28 == 9) {
                        iVar31 = 0x17;
                        uVar32 = 9;
                      }
                      else {
                        *(undefined1 *)(lVar25 + 0x8654) = 0;
                        *(undefined1 *)(lVar25 + 0x86d4) = 0x1f;
                        *(undefined1 *)(lVar25 + 0x86f4) = 0x1f;
                        *(undefined1 *)(lVar25 + 0x86b4) = 0;
                        *(undefined1 *)(lVar25 + 0x8674) = 0;
                        *(undefined1 *)(lVar25 + 0x8694) = 0;
                        *(undefined1 *)(lVar25 + 0x1a0) = 0xff;
                        if (uVar28 == 10) {
                          iVar31 = 0x16;
                        }
                        else {
                          *(undefined1 *)(lVar25 + 0x8655) = 0;
                          *(undefined1 *)(lVar25 + 0x86d5) = 0x1f;
                          *(undefined1 *)(lVar25 + 0x86f5) = 0x1f;
                          *(undefined1 *)(lVar25 + 0x86b5) = 0;
                          *(undefined1 *)(lVar25 + 0x8675) = 0;
                          *(undefined1 *)(lVar25 + 0x8695) = 0;
                          *(undefined1 *)(lVar25 + 0x1a1) = 0xff;
                          if (uVar28 == 0xb) {
                            iVar31 = 0x15;
                          }
                          else {
                            *(undefined1 *)(lVar25 + 0x8656) = 0;
                            *(undefined1 *)(lVar25 + 0x86d6) = 0x1f;
                            *(undefined1 *)(lVar25 + 0x86f6) = 0x1f;
                            *(undefined1 *)(lVar25 + 0x86b6) = 0;
                            *(undefined1 *)(lVar25 + 0x8676) = 0;
                            *(undefined1 *)(lVar25 + 0x8696) = 0;
                            *(undefined1 *)(lVar25 + 0x1a2) = 0xff;
                            if (uVar28 == 0xc) {
                              iVar31 = 0x14;
                            }
                            else {
                              *(undefined1 *)(lVar25 + 0x8657) = 0;
                              *(undefined1 *)(lVar25 + 0x86d7) = 0x1f;
                              *(undefined1 *)(lVar25 + 0x86f7) = 0x1f;
                              *(undefined1 *)(lVar25 + 0x86b7) = 0;
                              *(undefined1 *)(lVar25 + 0x8677) = 0;
                              *(undefined1 *)(lVar25 + 0x8697) = 0;
                              *(undefined1 *)(lVar25 + 0x1a3) = 0xff;
                              if (uVar28 == 0xd) {
                                iVar31 = 0x13;
                              }
                              else {
                                *(undefined1 *)(lVar25 + 0x8658) = 0;
                                *(undefined1 *)(lVar25 + 0x86d8) = 0x1f;
                                *(undefined1 *)(lVar25 + 0x86f8) = 0x1f;
                                *(undefined1 *)(lVar25 + 0x86b8) = 0;
                                *(undefined1 *)(lVar25 + 0x8678) = 0;
                                *(undefined1 *)(lVar25 + 0x8698) = 0;
                                *(undefined1 *)(lVar25 + 0x1a4) = 0xff;
                                if (uVar28 == 0xf) {
                                  *(undefined1 *)(lVar25 + 0x8659) = 0;
                                  iVar31 = 0x11;
                                  *(undefined1 *)(lVar25 + 0x86d9) = 0x1f;
                                  *(undefined1 *)(lVar25 + 0x86f9) = 0x1f;
                                  *(undefined1 *)(lVar25 + 0x86b9) = 0;
                                  *(undefined1 *)(lVar25 + 0x8679) = 0;
                                  *(undefined1 *)(lVar25 + 0x8699) = 0;
                                  *(undefined1 *)(lVar25 + 0x1a5) = 0xff;
                                }
                                else {
                                  iVar31 = 0x12;
                                  uVar32 = 0xe;
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
      uVar26 = (ulong)(byte)uVar28;
      uVar24 = 0x10;
      iVar23 = 1;
      uVar28 = 0x20 - uVar28 & 0xff;
    }
    puVar21 = (undefined8 *)(lVar25 + uVar26 + 0x864b);
    puVar2 = (undefined8 *)(lVar25 + uVar26 + 0x86cb);
    puVar21[1] = 0;
    *puVar21 = 0;
    puVar3 = (undefined8 *)(lVar25 + uVar26 + 0x86eb);
    puVar2[1] = 0x1f1f1f1f1f1f1f1f;
    *puVar2 = 0x1f1f1f1f1f1f1f1f;
    puVar4 = (undefined8 *)(lVar25 + uVar26 + 0x86ab);
    puVar3[1] = 0x1f1f1f1f1f1f1f1f;
    *puVar3 = 0x1f1f1f1f1f1f1f1f;
    puVar5 = (undefined8 *)(lVar25 + uVar26 + 0x866b);
    puVar4[1] = 0;
    *puVar4 = 0;
    puVar6 = (undefined8 *)(lVar25 + uVar26 + 0x868b);
    puVar5[1] = 0;
    *puVar5 = 0;
    puVar7 = (undefined8 *)(lVar25 + uVar26 + 0x197);
    puVar6[1] = 0;
    *puVar6 = 0;
    puVar7[1] = 0xffffffffffffffff;
    *puVar7 = 0xffffffffffffffff;
    if (iVar23 == 2) {
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
    uVar29 = iVar31 - uVar24;
    iVar23 = uVar32 + uVar24;
    if (uVar28 != uVar24) {
      lVar19 = lVar25 + iVar23;
      *(undefined1 *)(lVar19 + 0x864b) = 0;
      *(undefined1 *)(lVar19 + 0x86cb) = 0x1f;
      *(undefined1 *)(lVar19 + 0x86eb) = 0x1f;
      *(undefined1 *)(lVar19 + 0x86ab) = 0;
      *(undefined1 *)(lVar19 + 0x866b) = 0;
      *(undefined1 *)(lVar19 + 0x868b) = 0;
      *(undefined1 *)(lVar19 + 0x197) = 0xff;
      if ((uVar29 & 0xff) != 1) {
        lVar19 = lVar25 + (iVar23 + 1);
        *(undefined1 *)(lVar19 + 0x864b) = 0;
        *(undefined1 *)(lVar19 + 0x86cb) = 0x1f;
        *(undefined1 *)(lVar19 + 0x86eb) = 0x1f;
        *(undefined1 *)(lVar19 + 0x86ab) = 0;
        *(undefined1 *)(lVar19 + 0x866b) = 0;
        *(undefined1 *)(lVar19 + 0x868b) = 0;
        *(undefined1 *)(lVar19 + 0x197) = 0xff;
        if ((uVar29 & 0xff) != 2) {
          lVar19 = lVar25 + (iVar23 + 2);
          uVar28 = uVar29 & 0xff;
          *(undefined1 *)(lVar19 + 0x864b) = 0;
          *(undefined1 *)(lVar19 + 0x86cb) = 0x1f;
          *(undefined1 *)(lVar19 + 0x86eb) = 0x1f;
          *(undefined1 *)(lVar19 + 0x86ab) = 0;
          *(undefined1 *)(lVar19 + 0x866b) = 0;
          *(undefined1 *)(lVar19 + 0x868b) = 0;
          *(undefined1 *)(lVar19 + 0x197) = 0xff;
          if (uVar28 != 3) {
            lVar19 = lVar25 + (iVar23 + 3);
            *(undefined1 *)(lVar19 + 0x864b) = 0;
            *(undefined1 *)(lVar19 + 0x86cb) = 0x1f;
            *(undefined1 *)(lVar19 + 0x86eb) = 0x1f;
            *(undefined1 *)(lVar19 + 0x86ab) = 0;
            *(undefined1 *)(lVar19 + 0x866b) = 0;
            *(undefined1 *)(lVar19 + 0x868b) = 0;
            *(undefined1 *)(lVar19 + 0x197) = 0xff;
            if (uVar28 != 4) {
              lVar19 = lVar25 + (iVar23 + 4);
              *(undefined1 *)(lVar19 + 0x864b) = 0;
              *(undefined1 *)(lVar19 + 0x86cb) = 0x1f;
              *(undefined1 *)(lVar19 + 0x86eb) = 0x1f;
              *(undefined1 *)(lVar19 + 0x86ab) = 0;
              *(undefined1 *)(lVar19 + 0x866b) = 0;
              *(undefined1 *)(lVar19 + 0x868b) = 0;
              *(undefined1 *)(lVar19 + 0x197) = 0xff;
              if (uVar28 != 5) {
                lVar19 = lVar25 + (iVar23 + 5);
                *(undefined1 *)(lVar19 + 0x864b) = 0;
                *(undefined1 *)(lVar19 + 0x86cb) = 0x1f;
                *(undefined1 *)(lVar19 + 0x86eb) = 0x1f;
                *(undefined1 *)(lVar19 + 0x86ab) = 0;
                *(undefined1 *)(lVar19 + 0x866b) = 0;
                *(undefined1 *)(lVar19 + 0x868b) = 0;
                *(undefined1 *)(lVar19 + 0x197) = 0xff;
                if (uVar28 != 6) {
                  lVar19 = lVar25 + (iVar23 + 6);
                  uVar29 = uVar29 & 0xff;
                  *(undefined1 *)(lVar19 + 0x864b) = 0;
                  *(undefined1 *)(lVar19 + 0x86cb) = 0x1f;
                  *(undefined1 *)(lVar19 + 0x86eb) = 0x1f;
                  *(undefined1 *)(lVar19 + 0x86ab) = 0;
                  *(undefined1 *)(lVar19 + 0x866b) = 0;
                  *(undefined1 *)(lVar19 + 0x868b) = 0;
                  *(undefined1 *)(lVar19 + 0x197) = 0xff;
                  if (uVar29 != 7) {
                    lVar19 = lVar25 + (iVar23 + 7);
                    *(undefined1 *)(lVar19 + 0x864b) = 0;
                    *(undefined1 *)(lVar19 + 0x86cb) = 0x1f;
                    *(undefined1 *)(lVar19 + 0x86eb) = 0x1f;
                    *(undefined1 *)(lVar19 + 0x86ab) = 0;
                    *(undefined1 *)(lVar19 + 0x866b) = 0;
                    *(undefined1 *)(lVar19 + 0x868b) = 0;
                    *(undefined1 *)(lVar19 + 0x197) = 0xff;
                    if (uVar29 != 8) {
                      lVar19 = lVar25 + (iVar23 + 8);
                      *(undefined1 *)(lVar19 + 0x864b) = 0;
                      *(undefined1 *)(lVar19 + 0x86cb) = 0x1f;
                      *(undefined1 *)(lVar19 + 0x86eb) = 0x1f;
                      *(undefined1 *)(lVar19 + 0x86ab) = 0;
                      *(undefined1 *)(lVar19 + 0x866b) = 0;
                      *(undefined1 *)(lVar19 + 0x868b) = 0;
                      *(undefined1 *)(lVar19 + 0x197) = 0xff;
                      if (uVar29 != 9) {
                        lVar19 = lVar25 + (iVar23 + 9);
                        *(undefined1 *)(lVar19 + 0x864b) = 0;
                        *(undefined1 *)(lVar19 + 0x86cb) = 0x1f;
                        *(undefined1 *)(lVar19 + 0x86eb) = 0x1f;
                        *(undefined1 *)(lVar19 + 0x86ab) = 0;
                        *(undefined1 *)(lVar19 + 0x866b) = 0;
                        *(undefined1 *)(lVar19 + 0x868b) = 0;
                        *(undefined1 *)(lVar19 + 0x197) = 0xff;
                        if (uVar29 != 10) {
                          lVar19 = lVar25 + (iVar23 + 10);
                          *(undefined1 *)(lVar19 + 0x864b) = 0;
                          *(undefined1 *)(lVar19 + 0x86cb) = 0x1f;
                          *(undefined1 *)(lVar19 + 0x86eb) = 0x1f;
                          *(undefined1 *)(lVar19 + 0x86ab) = 0;
                          *(undefined1 *)(lVar19 + 0x866b) = 0;
                          *(undefined1 *)(lVar19 + 0x868b) = 0;
                          *(undefined1 *)(lVar19 + 0x197) = 0xff;
                          if (uVar29 != 0xb) {
                            lVar19 = lVar25 + (iVar23 + 0xb);
                            *(undefined1 *)(lVar19 + 0x864b) = 0;
                            *(undefined1 *)(lVar19 + 0x86cb) = 0x1f;
                            *(undefined1 *)(lVar19 + 0x86eb) = 0x1f;
                            *(undefined1 *)(lVar19 + 0x86ab) = 0;
                            *(undefined1 *)(lVar19 + 0x866b) = 0;
                            *(undefined1 *)(lVar19 + 0x868b) = 0;
                            *(undefined1 *)(lVar19 + 0x197) = 0xff;
                            if (uVar29 != 0xc) {
                              lVar19 = lVar25 + (iVar23 + 0xc);
                              *(undefined1 *)(lVar19 + 0x864b) = 0;
                              *(undefined1 *)(lVar19 + 0x86cb) = 0x1f;
                              *(undefined1 *)(lVar19 + 0x86eb) = 0x1f;
                              *(undefined1 *)(lVar19 + 0x86ab) = 0;
                              *(undefined1 *)(lVar19 + 0x866b) = 0;
                              *(undefined1 *)(lVar19 + 0x868b) = 0;
                              *(undefined1 *)(lVar19 + 0x197) = 0xff;
                              if (uVar29 != 0xd) {
                                lVar19 = lVar25 + (iVar23 + 0xd);
                                *(undefined1 *)(lVar19 + 0x864b) = 0;
                                *(undefined1 *)(lVar19 + 0x86cb) = 0x1f;
                                *(undefined1 *)(lVar19 + 0x86eb) = 0x1f;
                                *(undefined1 *)(lVar19 + 0x86ab) = 0;
                                *(undefined1 *)(lVar19 + 0x866b) = 0;
                                *(undefined1 *)(lVar19 + 0x868b) = 0;
                                *(undefined1 *)(lVar19 + 0x197) = 0xff;
                                if (uVar29 != 0xe) {
                                  lVar19 = lVar25 + (iVar23 + 0xe);
                                  *(undefined1 *)(lVar19 + 0x864b) = 0;
                                  *(undefined1 *)(lVar19 + 0x86cb) = 0x1f;
                                  *(undefined1 *)(lVar19 + 0x86eb) = 0x1f;
                                  *(undefined1 *)(lVar19 + 0x86ab) = 0;
                                  *(undefined1 *)(lVar19 + 0x866b) = 0;
                                  *(undefined1 *)(lVar19 + 0x868b) = 0;
                                  *(undefined1 *)(lVar19 + 0x197) = 0xff;
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
    puVar20 = (undefined4 *)(lVar25 + 0x8718);
    do {
      *puVar20 = 0;
      puVar20[1] = 0;
      puVar20[2] = 0;
      puVar20[3] = 0;
      puVar20[4] = 0;
      *(undefined8 *)(puVar20 + 6) = 0;
      puVar20[8] = 0;
      puVar1 = puVar20 + 0x40;
      puVar20[9] = 0;
      puVar20[10] = 0;
      puVar20[0xb] = 0;
      puVar20[0xc] = 0;
      *(undefined8 *)(puVar20 + 0xe) = 0;
      puVar20[0x10] = 0;
      puVar20[0x11] = 0;
      puVar20[0x12] = 0;
      puVar20[0x13] = 0;
      puVar20[0x14] = 0;
      *(undefined8 *)(puVar20 + 0x16) = 0;
      puVar20[0x18] = 0;
      puVar20[0x19] = 0;
      puVar20[0x1a] = 0;
      puVar20[0x1b] = 0;
      puVar20[0x1c] = 0;
      *(undefined8 *)(puVar20 + 0x1e) = 0;
      puVar20[0x20] = 0;
      puVar20[0x21] = 0;
      puVar20[0x22] = 0;
      puVar20[0x23] = 0;
      puVar20[0x24] = 0;
      *(undefined8 *)(puVar20 + 0x26) = 0;
      puVar20[0x28] = 0;
      puVar20[0x29] = 0;
      puVar20[0x2a] = 0;
      puVar20[0x2b] = 0;
      puVar20[0x2c] = 0;
      *(undefined8 *)(puVar20 + 0x2e) = 0;
      puVar20[0x30] = 0;
      puVar20[0x31] = 0;
      puVar20[0x32] = 0;
      puVar20[0x33] = 0;
      puVar20[0x34] = 0;
      *(undefined8 *)(puVar20 + 0x36) = 0;
      puVar20[0x38] = 0;
      puVar20[0x39] = 0;
      puVar20[0x3a] = 0;
      puVar20[0x3b] = 0;
      puVar20[0x3c] = 0;
      *(undefined8 *)(puVar20 + 0x3e) = 0;
      uVar16 = _UNK_001c0a68;
      uVar15 = _DAT_001c0a60;
      uVar14 = _UNK_001c0a58;
      uVar13 = _DAT_001c0a50;
      uVar12 = _UNK_001c0a48;
      uVar11 = _DAT_001c0a40;
      uVar10 = _UNK_001c0a38;
      uVar9 = _DAT_001c0a30;
      uVar8 = _UNK_001c0a28;
      uVar17 = _DAT_001c0a20;
      puVar20 = puVar1;
    } while (puVar1 != (undefined4 *)(lVar25 + 0x8f18));
    puVar21 = (undefined8 *)(lVar25 + 0xb50);
    do {
      puVar21[1] = uVar8;
      *puVar21 = uVar17;
      puVar21[3] = uVar10;
      puVar21[2] = uVar9;
      puVar21[5] = uVar12;
      puVar21[4] = uVar11;
      puVar21[7] = uVar14;
      puVar21[6] = uVar13;
      puVar21[9] = uVar16;
      puVar21[8] = uVar15;
      puVar21[0xb] = uVar8;
      puVar21[10] = uVar17;
      puVar21[0xd] = uVar10;
      puVar21[0xc] = uVar9;
      puVar21[0xf] = uVar12;
      puVar21[0xe] = uVar11;
      puVar21[0x11] = uVar14;
      puVar21[0x10] = uVar13;
      puVar21[0x13] = uVar16;
      puVar21[0x12] = uVar15;
      puVar2 = puVar21 + 0x28;
      puVar21[0x15] = uVar8;
      puVar21[0x14] = uVar17;
      puVar21[0x17] = uVar10;
      puVar21[0x16] = uVar9;
      puVar21[0x19] = uVar12;
      puVar21[0x18] = uVar11;
      puVar21[0x1b] = uVar14;
      puVar21[0x1a] = uVar13;
      puVar21[0x1d] = uVar16;
      puVar21[0x1c] = uVar15;
      puVar21[0x1f] = uVar8;
      puVar21[0x1e] = uVar17;
      puVar21[0x21] = uVar10;
      puVar21[0x20] = uVar9;
      puVar21[0x23] = uVar12;
      puVar21[0x22] = uVar11;
      puVar21[0x25] = uVar14;
      puVar21[0x24] = uVar13;
      puVar21[0x27] = uVar16;
      puVar21[0x26] = uVar15;
      puVar21 = puVar2;
    } while (puVar2 != (undefined8 *)(lVar25 + 0x5b50));
    uVar26 = -(lVar25 + 0xa8cU >> 2 & 3);
    *(undefined8 *)(lVar25 + 0xb18) = 0x40000000400;
    *(undefined8 *)(lVar25 + 0xb10) = 0x40000000400;
    uVar28 = (uint)uVar26 & 3;
    *(undefined1 *)(lVar25 + 0x16) = 0;
    if ((uVar26 & 3) == 0) {
      uVar26 = 0;
      iVar30 = 8;
      iVar23 = 0x20;
      uVar32 = 0;
      iVar27 = 0x20;
      iVar31 = iVar23;
    }
    else {
      *(undefined4 *)(lVar25 + 0xa8c) = 1;
      uVar32 = uVar28;
      if (uVar28 == 1) {
        iVar27 = 0x1f;
      }
      else {
        *(undefined4 *)(lVar25 + 0xa90) = 1;
        if (uVar28 == 3) {
          *(undefined4 *)(lVar25 + 0xa94) = 1;
          iVar27 = 0x1d;
        }
        else {
          iVar27 = 0x1e;
          uVar32 = 2;
        }
      }
      uVar26 = (ulong)uVar28;
      iVar23 = 0x20 - uVar28;
      iVar30 = 7;
      iVar31 = 0x1c;
    }
    puVar21 = (undefined8 *)(lVar25 + (uVar26 + 0x2a3) * 4);
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
    if (iVar30 == 8) {
      puVar21[0xf] = 0x100000001;
      puVar21[0xe] = 0x100000001;
    }
    uVar32 = uVar32 + iVar31;
    if (iVar23 != iVar31) {
      *(undefined4 *)(lVar25 + (ulong)uVar32 * 4 + 0xa8c) = 1;
      if (iVar27 - iVar31 != 1) {
        *(undefined4 *)(lVar25 + (ulong)(byte)((char)uVar32 + 1) * 4 + 0xa8c) = 1;
        if (iVar27 - iVar31 != 2) {
          *(undefined4 *)(lVar25 + (ulong)(uVar32 + 2) * 4 + 0xa8c) = 1;
        }
      }
    }
    iVar23 = 0;
    do {
      uVar28 = iVar23 * 8;
      iVar23 = iVar23 + 1;
      *(undefined4 *)(lVar25 + (ulong)uVar28 * 4 + 0x28c) = 0x55555555;
      *(undefined4 *)(lVar25 + (ulong)(uVar28 + 1) * 4 + 0x28c) = 0x55555555;
      *(undefined4 *)(lVar25 + (ulong)(uVar28 + 2) * 4 + 0x28c) = 0x55555555;
      *(undefined4 *)(lVar25 + (ulong)(uVar28 + 3) * 4 + 0x28c) = 0x55555555;
      *(undefined4 *)(lVar25 + (ulong)(uVar28 + 4) * 4 + 0x28c) = 0x55555555;
      *(undefined4 *)(lVar25 + (ulong)(uVar28 + 5) * 4 + 0x28c) = 0x55555555;
      *(undefined4 *)(lVar25 + (ulong)(uVar28 + 6) * 4 + 0x28c) = 0x55555555;
      *(undefined4 *)(lVar25 + (ulong)(uVar28 + 7) * 4 + 0x28c) = 0x55555555;
    } while (iVar23 != 0x20);
    *(undefined4 *)(lVar25 + 0x20c) = 0x18;
    *(undefined4 *)(lVar25 + 0x210) = 0x18;
    *(undefined4 *)(lVar25 + 0x214) = 0x18;
    *(undefined4 *)(lVar25 + 0x218) = 0x18;
    *(undefined1 *)(lVar25 + 0x2b) = 4;
    *(undefined1 *)(lVar25 + 4) = 0x7f;
    *(undefined1 *)(lVar25 + 0x28) = 1;
    *(undefined4 *)(lVar25 + 0xac8) = 0;
    *(undefined4 *)(lVar25 + 0xae8) = 0;
    *(undefined1 *)(lVar25 + 0x2a) = 3;
    *(undefined4 *)(lVar25 + 0xb08) = 0;
    *(undefined8 *)(lVar25 + 0xb28) = 0;
    *(undefined4 *)(lVar25 + 0xb20) = 0;
    *(undefined8 *)(lVar25 + 0xb40) = 0;
    *(undefined4 *)(lVar25 + 0xb38) = 0;
    *(undefined1 *)(lVar25 + 8) = 0;
    *(undefined1 *)(lVar25 + 9) = 0x40;
    *(undefined1 *)(lVar25 + 0xb) = 0;
    *(undefined4 *)(lVar25 + 0xb0c) = 0;
    *(undefined1 *)(lVar25 + 7) = 0x40;
    *(undefined1 *)(lVar25 + 3) = 0x40;
    *(undefined1 *)(lVar25 + 0x37) = 0;
    *(undefined1 *)(lVar25 + 0x27) = 0;
    *(undefined4 *)(lVar25 + 0x24c) = 2;
    *(undefined1 *)(lVar25 + 0x38) = 0;
    *(undefined4 *)(lVar25 + 0x250) = 2;
    *(undefined1 *)(lVar25 + 0x39) = 0;
    *(undefined1 *)(lVar25 + 0x29) = 2;
    *(undefined4 *)(lVar25 + 0x254) = 2;
    *(undefined1 *)(lVar25 + 0x3a) = 0;
    *(undefined4 *)(lVar25 + 600) = 2;
    *(undefined1 *)(lVar25 + 0x3b) = 0;
    *(undefined4 *)(lVar25 + 0x21c) = 0x18;
    *(undefined1 *)(lVar25 + 0x2c) = 5;
    *(undefined4 *)(lVar25 + 0x220) = 0x18;
    *(undefined4 *)(lVar25 + 0x224) = 0x18;
    *(undefined4 *)(lVar25 + 0x228) = 0x18;
    *(undefined4 *)(lVar25 + 0x22c) = 0x18;
    *(undefined4 *)(lVar25 + 0x230) = 0x18;
    *(undefined1 *)(lVar25 + 0x31) = 10;
    *(undefined4 *)(lVar25 + 0x234) = 0x18;
    *(undefined4 *)(lVar25 + 0x238) = 0x18;
    *(undefined1 *)(lVar25 + 0x33) = 0xc;
    *(undefined4 *)(lVar25 + 0x23c) = 0x18;
    *(undefined1 *)(lVar25 + 0x2d) = 6;
    *(undefined1 *)(lVar25 + 0x2e) = 7;
    *(undefined1 *)(lVar25 + 0x2f) = 8;
    *(bool *)(lVar25 + 0x40) = 1 < *(byte *)(lVar25 + 0xc);
    *(undefined1 *)(lVar25 + 0x30) = 9;
    *(undefined1 *)(lVar25 + 0x32) = 0xb;
    *(undefined4 *)(lVar25 + 0x25c) = 2;
    *(undefined1 *)(lVar25 + 0x3c) = 0;
    *(undefined4 *)(lVar25 + 0x260) = 2;
    *(undefined1 *)(lVar25 + 0x3d) = 0;
    *(undefined4 *)(lVar25 + 0x264) = 2;
    *(undefined1 *)(lVar25 + 0x3e) = 0;
    *(undefined4 *)(lVar25 + 0x268) = 2;
    *(undefined1 *)(lVar25 + 0x3f) = 0;
    *(undefined4 *)(lVar25 + 0x26c) = 2;
    *(undefined4 *)(lVar25 + 0x270) = 2;
    *(undefined1 *)(lVar25 + 0x41) = 0;
    *(undefined4 *)(lVar25 + 0x274) = 2;
    *(undefined1 *)(lVar25 + 0x42) = 0;
    *(undefined4 *)(lVar25 + 0x278) = 2;
    *(undefined1 *)(lVar25 + 0x43) = 0;
    *(undefined4 *)(lVar25 + 0x27c) = 2;
    *(undefined1 *)(lVar25 + 0x44) = 0;
    *(undefined4 *)(lVar25 + 0x240) = 0x18;
    *(undefined4 *)(lVar25 + 0x244) = 0x18;
    *(undefined4 *)(lVar25 + 0x248) = 0x18;
    *(undefined1 *)(lVar25 + 0x34) = 0xd;
    *(undefined1 *)(lVar25 + 0x35) = 0xe;
    *(undefined1 *)(lVar25 + 0x36) = 0xf;
    *(undefined4 *)(lVar25 + 0x280) = 2;
    *(undefined1 *)(lVar25 + 0x45) = 0;
    *(undefined4 *)(lVar25 + 0x284) = 2;
    *(undefined1 *)(lVar25 + 0x46) = 0;
    *(undefined4 *)(lVar25 + 0x288) = 2;
    *(undefined8 *)(lVar25 + 0x47) = 0;
    *(undefined8 *)(lVar25 + 0x4f) = 0;
    memset((void *)(lVar25 + 0x57),2,0x10);
    memset((void *)(lVar25 + 0x67),0x3f,0x10);
    memset((void *)(lVar25 + 0x77),0x20,0x10);
    memset((void *)(lVar25 + 0xa7),0x7f,0x10);
    memset((void *)(lVar25 + 0x87),0x20,0x10);
    memset((void *)(lVar25 + 0x97),0x20,0x10);
    memset((void *)(lVar25 + 0x157),0x3f,0x20);
    memset((void *)(lVar25 + 0x177),0x3f,0x20);
    *(undefined8 *)(lVar25 + 0xb7) = 0xffffffffffffffff;
    *(undefined8 *)(lVar25 + 0xbf) = 0xffffffffffffffff;
    *(undefined8 *)(lVar25 + 199) = 0xffffffffffffffff;
    *(undefined8 *)(lVar25 + 0xcf) = 0xffffffffffffffff;
    *(undefined8 *)(lVar25 + 0xd7) = 0;
    *(undefined8 *)(lVar25 + 0xdf) = 0;
    *(undefined8 *)(lVar25 + 0xe7) = 0;
    *(undefined8 *)(lVar25 + 0xef) = 0;
    puVar22 = (undefined1 *)(lVar25 + 0x736b);
    iVar23 = 0;
    *(undefined1 *)(lVar25 + 2) = 100;
    *(undefined1 *)(lVar25 + 6) = 0x40;
    *(undefined2 *)(lVar25 + 0x1be) = 0x2000;
    do {
      if (iVar23 == 9) {
        *(undefined1 *)(lVar25 + 0x741f) = 0x80;
      }
      else {
        *puVar22 = 0;
      }
      iVar31 = iVar23 + 1;
      lVar19 = lVar25 + (long)iVar23 * 0x14;
      *(undefined1 *)(lVar19 + 0x736a) = 0;
      *(undefined1 *)(lVar19 + 0x736d) = 0;
      *(undefined1 *)(lVar19 + 0x736c) = 0x3f;
      *(undefined1 *)(lVar19 + 0x7370) = 0x40;
      *(undefined1 *)(lVar19 + 0x7371) = 0x7f;
      *(undefined1 *)(lVar19 + 0x7372) = 0;
      *(undefined2 *)(lVar19 + 0x737a) = 0x2000;
      *(undefined1 *)(lVar19 + 0x736e) = 2;
      *(undefined1 *)(lVar19 + 0x736f) = 2;
      *(undefined1 *)(lVar19 + 0x7373) = 1;
      *(undefined1 *)(lVar19 + 0x7374) = 0x40;
      *(undefined2 *)(lVar19 + 0x737c) = 0x2000;
      *(undefined1 *)(lVar19 + 0x7376) = 0x40;
      *(undefined1 *)(lVar19 + 0x7375) = 0x40;
      *(undefined1 *)(lVar19 + 0x7377) = 0x7f;
      *(undefined1 *)(lVar19 + 0x7378) = 0x28;
      *(undefined1 *)(lVar19 + 0x7379) = 0;
      if (iVar31 == 9) {
        *(undefined1 *)(lVar25 + 0x741f) = 0x80;
      }
      else {
        puVar22[0x14] = 0;
      }
      iVar23 = iVar23 + 2;
      puVar22 = puVar22 + 0x28;
      lVar19 = lVar25 + (long)iVar31 * 0x14;
      *(undefined1 *)(lVar19 + 0x736a) = 0;
      *(undefined1 *)(lVar19 + 0x736d) = 0;
      *(undefined1 *)(lVar19 + 0x736c) = 0x3f;
      *(undefined1 *)(lVar19 + 0x7370) = 0x40;
      *(undefined1 *)(lVar19 + 0x7371) = 0x7f;
      *(undefined1 *)(lVar19 + 0x7372) = 0;
      *(undefined2 *)(lVar19 + 0x737a) = 0x2000;
      *(undefined1 *)(lVar19 + 0x736e) = 2;
      *(undefined1 *)(lVar19 + 0x736f) = 2;
      *(undefined1 *)(lVar19 + 0x7373) = 1;
      *(undefined1 *)(lVar19 + 0x7374) = 0x40;
      *(undefined2 *)(lVar19 + 0x737c) = 0x2000;
      *(undefined1 *)(lVar19 + 0x7376) = 0x40;
      *(undefined1 *)(lVar19 + 0x7375) = 0x40;
      *(undefined1 *)(lVar19 + 0x7377) = 0x7f;
      *(undefined1 *)(lVar19 + 0x7378) = 0x28;
      *(undefined1 *)(lVar19 + 0x7379) = 0;
    } while (iVar23 != 0x20);
    *(undefined1 *)(lVar25 + 10) = 0xf;
    uVar32 = *(uint *)param_2;
    uVar28 = uVar32 & 0x10;
    if ((uVar32 >> 4 & 1) != 0) {
      *(undefined1 *)(lVar25 + 0x12) = 1;
      uVar28 = 1;
      uVar32 = *(uint *)param_2;
    }
    if ((uVar32 >> 5 & 1) != 0) {
      *(undefined1 *)(lVar25 + 0x11) = 0;
    }
    pcVar18 = *(char **)(param_2 + 8);
    if (((*pcVar18 != 'm') || (pcVar18[1] != 'e')) || ((pcVar18[2] != 'l' || (pcVar18[3] != 'o'))))
    {
      return 0xffffffec;
    }
    uVar17 = FUN_001bdb4c(param_1,pcVar18,*(undefined4 *)(param_2 + 0x10),uVar28);
    if (-1 < (int)uVar17) {
      uVar17 = 0;
      *(undefined1 *)(lVar25 + 0x870b) = 1;
    }
  }
  return uVar17;
}

