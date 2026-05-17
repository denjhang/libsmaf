/* MaS2PCnvJP_Convert @ 000c3074 16374B */


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* YAMAHA::MaS2PCnvJP_Convert(unsigned char*, unsigned int, void*) */

uchar * YAMAHA::MaS2PCnvJP_Convert(uchar *param_1,uint param_2,void *param_3)

{
  undefined1 uVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  bool bVar5;
  uchar *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  byte bVar19;
  char cVar20;
  byte *pbVar21;
  int iVar22;
  int iVar23;
  byte bVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  undefined1 uVar30;
  uchar uVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  uchar *puVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  short sVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  uint uVar46;
  int iVar47;
  uint uVar48;
  uint uVar49;
  int iVar50;
  int iVar51;
  undefined1 *puVar52;
  uint uVar53;
  int iVar54;
  uchar *puVar55;
  undefined4 *puVar56;
  int iVar57;
  byte *pbVar58;
  int iVar59;
  int *piVar60;
  int iVar61;
  int *piVar62;
  int iVar63;
  bool bVar64;
  undefined8 uVar65;
  uint local_b4;
  int local_b0;
  int local_ac;
  int local_a4;
  uint local_6c;
  uint local_68;
  uint local_60;
  uint local_44;
  byte local_30 [12];
  
  iVar44 = DAT_000c3d8c;
  iVar12 = DAT_000c3d50;
  if (*(int *)(DAT_000c3d4c + 0xc3080) != 1) {
    return (uchar *)0xffffffff;
  }
  if (param_2 == 0 || param_1 == (uchar *)0x0) {
    return (uchar *)0xfffffffe;
  }
  if (*(int *)(DAT_000c3d4c + 0xc308c) == 0) {
    return (uchar *)0x0;
  }
  local_b4 = (uint)*(byte *)(DAT_000c3d4c + 0xc30a5);
  if (local_b4 == 0) {
LAB_000c30a4:
    uVar53 = *(uint *)(DAT_000c3d50 + 0xc30c0);
    uVar25 = *(uint *)(DAT_000c3d50 + 0xc30bc);
    if (uVar53 <= uVar25) {
      return (uchar *)0x0;
    }
    uVar30 = *(undefined1 *)(DAT_000c3d50 + 0xc30d8);
    uVar1 = *(undefined1 *)(DAT_000c3d50 + 0xc30cd);
    *(undefined1 *)((int)&DAT_000c3d5c + DAT_000c3d50 + 2) = 1;
    *(undefined1 *)((int)&DAT_000c3d5c + iVar12 + 3) = 1;
    *(undefined1 *)(iVar12 + 0xc30f4) = 1;
    *(undefined4 *)(iVar12 + 0xc30d4) = 0;
    *(undefined1 *)(iVar12 + 0xc30e0) = uVar30;
    *(undefined1 *)(iVar12 + 0xc30e1) = uVar1;
    *(undefined1 *)(iVar12 + 0xc30d1) = 0;
    *(undefined1 *)(iVar12 + 0xc30d0) = 0;
    *(undefined1 *)((int)&DAT_000c3d5c + iVar12) = 0;
    *(undefined4 *)((int)&DAT_000c3d60 + iVar12) = 0;
    *(undefined1 *)((int)&DAT_000c3d68 + iVar12 + 1) = 0;
    *(undefined1 *)((int)&DAT_000c3d68 + iVar12 + 3) = 0;
    *(undefined1 *)((int)&DAT_000c3d6c + iVar12) = 0;
    *(undefined4 *)((int)&DAT_000c3d70 + iVar12) = 0;
    *(undefined4 *)((int)&DAT_000c3d74 + iVar12) = 0;
    *(undefined2 *)((int)&DAT_000c3d78 + iVar12) = 0;
    *(undefined1 *)((int)&DAT_000c3d78 + iVar12 + 2) = 0;
    *(undefined4 *)((int)&DAT_000c3d7c + iVar12) = 0;
    *(undefined4 *)((int)&DAT_000c3d84 + iVar12) = 0;
    *(undefined4 *)(iVar12 + 0xc30e4) = 0;
    *(undefined4 *)(iVar12 + 0xc30dc) = 0;
    *(undefined4 *)(iVar12 + 0xc30ec) = 0;
    *(undefined1 *)(iVar12 + 0xc30f1) = 0;
    *(undefined1 *)(iVar12 + 0xc30f3) = 0;
    *(undefined1 *)(iVar12 + 0xc30cc) = 4;
    *(undefined1 *)((int)&DAT_000c3d68 + iVar12) = 7;
    *(undefined1 *)((int)&DAT_000c3d68 + iVar12 + 2) = 7;
    *(undefined1 *)(iVar12 + 0xc30f0) = 7;
    *(undefined1 *)(iVar12 + 0xc30f2) = 7;
    *(int *)((int)&DAT_000c3d64 + iVar12) = iVar12 + 0xc30dc;
    *(undefined1 *)(iVar12 + 0xc30e8) = 0xa5;
    *(undefined1 *)(iVar12 + 0xc30f5) = 1;
    *(undefined4 *)(iVar12 + 0xc30f8) = 0;
    if (*(char *)(iVar12 + 0xc30c8) == '\0') {
      FUN_000c2990();
      uVar53 = *(uint *)(iVar12 + 0xc30c0);
      uVar25 = *(uint *)(iVar12 + 0xc30bc);
      local_b4 = (uint)*(byte *)(iVar12 + 0xc30d1);
      uVar49 = uVar53 - uVar25;
      if ((int)uVar49 < 1) goto LAB_000c380e;
      if (local_b4 < 100) goto LAB_000c32f4;
LAB_000c35ee:
      uVar25 = (uint)*(byte *)(DAT_000c3d90 + 0xc42b6);
      goto LAB_000c30cc;
    }
    uVar49 = uVar53 - uVar25;
    if (0 < (int)uVar49) {
      local_b4 = 0;
LAB_000c32f4:
      iVar22 = DAT_000c3d74;
      iVar7 = DAT_000c3d70;
      iVar45 = DAT_000c3d6c;
      iVar42 = DAT_000c3d68;
      iVar44 = DAT_000c3d64;
      iVar12 = DAT_000c3d60;
      uVar46 = *(uint *)(DAT_000c3d60 + 0xc3fb0);
      while (uVar46 < 100) {
        *(uint *)(iVar12 + 0xc3314) = uVar25 + 1;
        iVar26 = DAT_000c3da4;
        if (uVar49 == 1) {
          pbVar21 = (byte *)(*(int *)(iVar12 + 0xc3308) + uVar25);
LAB_000c3418:
          iVar33 = DAT_000c3d98;
          iVar32 = DAT_000c3d88;
          iVar26 = DAT_000c3d78;
          uVar13 = uVar25 + 2;
          if (uVar53 < uVar13) {
            *(uint *)(DAT_000c3d88 + 0xc343a) = uVar25 + 1;
            *(uint *)(iVar32 + 0xc40de) = uVar46 + 1;
            bVar19 = *pbVar21;
joined_r0x000c335e:
            uVar25 = bVar19 - 0x20;
            if (uVar25 < 0x5f) {
              iVar26 = iVar22 + 0xc37be;
LAB_000c3366:
              puVar56 = (undefined4 *)(iVar26 + uVar25 * 8);
              cVar20 = *(char *)(puVar56 + 1);
              if (cVar20 != '\0') {
                if (cVar20 == '\v' || cVar20 == '\x06') {
                  *(int *)(iVar44 + 0xc3fc8) = *(int *)(iVar44 + 0xc3fc8) + 1;
                }
                goto LAB_000c338a;
              }
              uVar13 = *(uint *)(iVar42 + 0xc332a);
            }
            else {
              uVar25 = bVar19 - 0xa1;
              if (uVar25 < 0x10) {
                iVar26 = iVar45 + 0xc3ab0;
                goto LAB_000c3366;
              }
              uVar13 = *(uint *)(iVar7 + 0xc3332);
            }
          }
          else {
            if (((*pbVar21 & 0xe0) != 0x80) && ((*pbVar21 & 0xe0) != 0xe0)) {
              *(uint *)(DAT_000c3d78 + 0xc3362) = uVar25 + 1;
              *(uint *)(iVar26 + 0xc4006) = uVar46 + 1;
              bVar19 = *pbVar21;
              goto joined_r0x000c335e;
            }
            *(uint *)(DAT_000c3d98 + 0xc3656) = uVar13;
            *(uint *)(iVar33 + 0xc42fa) = uVar46 + 2;
            if (*pbVar21 == 0x81) {
              uVar25 = pbVar21[1] - 0x40;
              iVar26 = DAT_000c3db0 + 0xc3838;
              if (uVar25 < 0x58) goto LAB_000c383a;
              goto LAB_000c33bc;
            }
            if ((*pbVar21 != 0x82) || (uVar25 = pbVar21[1] - 0x60, 0x3a < uVar25))
            goto LAB_000c33bc;
            iVar26 = DAT_000c3db4 + 0xc3b1c;
LAB_000c383a:
            puVar56 = (undefined4 *)(iVar26 + uVar25 * 8);
            if (*(char *)(puVar56 + 1) == '\0') goto LAB_000c33bc;
LAB_000c338a:
            if (((code *)*puVar56 == (code *)0x0) ||
               (iVar26 = (*(code *)*puVar56)(*(undefined1 *)((int)puVar56 + 5)), -1 < iVar26)) {
              if (*(byte *)(puVar56 + 1) == 0xc || (*(byte *)(puVar56 + 1) & 0xfb) == 10) {
                local_b4 = (uint)*(byte *)(DAT_000c3dc0 + 0xc3939);
                break;
              }
              uVar53 = *(uint *)(DAT_000c3d7c + 0xc33ca);
              uVar13 = *(uint *)(DAT_000c3d7c + 0xc33c6);
            }
            else {
              uVar53 = *(uint *)(DAT_000c3db8 + 0xc387c);
              uVar13 = *(uint *)(DAT_000c3db8 + 0xc3878);
            }
          }
LAB_000c33bc:
          uVar49 = uVar53 - uVar13;
          bVar19 = *(byte *)(DAT_000c3d80 + 0xc33ed);
        }
        else {
          pbVar21 = (byte *)(*(int *)(iVar12 + 0xc3308) + uVar25);
          if (((0x52 < (pbVar21[1] - 0x829f) +
                       (uint)*(byte *)(*(int *)(iVar12 + 0xc3308) + uVar25) * 0x100) || (uVar49 < 2)
              ) || (uVar13 = pbVar21[1] - 0x9f, 0x52 < uVar13)) goto LAB_000c3418;
          uVar16 = (uint)*(byte *)(DAT_000c3d9c + 0xc367c + uVar13 * 8);
          if (uVar16 == 6) {
            uVar13 = uVar16;
            if (3 < uVar49) {
              if (pbVar21[2] == 0x81) {
                if (pbVar21[3] == 0x4a) {
                  if (((5 < uVar49) && (pbVar21[4] == 0x82)) &&
                     (bVar19 = pbVar21[5], (byte)(bVar19 + 0x61) < 9)) {
                    pbVar14 = *(byte **)(DAT_000c6fa4 + 0xc6e06);
                    bVar10 = *pbVar14;
                    if (bVar10 != 0) {
                      if (pbVar14[1] == bVar19) {
                        iVar32 = 0;
                      }
                      else {
                        if (bVar10 < 2) goto LAB_000c40e0;
                        if (pbVar14[2] == bVar19) {
                          iVar32 = 1;
                        }
                        else {
                          if (bVar10 == 2) goto LAB_000c40e0;
                          if (pbVar14[3] == bVar19) {
                            iVar32 = 2;
                          }
                          else {
                            if (bVar10 == 3) goto LAB_000c40e0;
                            if (pbVar14[4] == bVar19) {
                              iVar32 = 3;
                            }
                            else {
                              if (bVar10 == 4) goto LAB_000c40e0;
                              if (pbVar14[5] == bVar19) {
                                iVar32 = 4;
                              }
                              else {
                                if ((bVar10 == 5) || (pbVar14[6] != bVar19)) goto LAB_000c40e0;
                                iVar32 = 5;
                              }
                            }
                          }
                        }
                      }
                      uVar16 = iVar32 + 8;
                      uVar13 = uVar16;
                      goto LAB_000c36a8;
                    }
                  }
LAB_000c40e0:
                  uVar16 = 7;
                  uVar13 = uVar16;
                }
              }
              else if ((pbVar21[2] == 0x82) && (bVar19 = pbVar21[3], (byte)(bVar19 + 0x5f) < 7)) {
                pbVar14 = *(byte **)(DAT_000c3dbc + 0xc38a0);
                bVar10 = *pbVar14;
                if (bVar10 == 0) {
LAB_000c38f0:
                  uVar13 = 6;
                }
                else {
                  if (pbVar14[1] == bVar19) {
                    iVar32 = 0;
                  }
                  else {
                    if (bVar10 < 2) goto LAB_000c38f0;
                    if (pbVar14[2] == bVar19) {
                      iVar32 = 1;
                    }
                    else {
                      if (bVar10 == 2) goto LAB_000c38f0;
                      if (pbVar14[3] == bVar19) {
                        iVar32 = 2;
                      }
                      else {
                        if (bVar10 == 3) goto LAB_000c38f0;
                        if (pbVar14[4] == bVar19) {
                          iVar32 = 3;
                        }
                        else {
                          if (bVar10 == 4) goto LAB_000c38f0;
                          if (pbVar14[5] == bVar19) {
                            iVar32 = 4;
                          }
                          else {
                            if ((bVar10 == 5) || (pbVar14[6] != bVar19)) goto LAB_000c38f0;
                            iVar32 = 5;
                          }
                        }
                      }
                    }
                  }
                  uVar16 = iVar32 + 0xc;
                  uVar13 = uVar16;
                }
              }
            }
          }
          else {
            pbVar14 = *(byte **)(DAT_000c3d9c + 0xc367c + uVar13 * 8 + 4);
            if ((((pbVar14 != (byte *)0x0) && (3 < uVar49)) && (pbVar21[2] == 0x82)) &&
               ((bVar19 = pbVar21[3], (byte)(bVar19 + 0x61) < 0x53 &&
                (uVar13 = (uint)*pbVar14, uVar13 != 0)))) {
              if (pbVar14[1] == bVar19) {
                uVar48 = 0;
              }
              else {
                uVar34 = 0;
                uVar18 = uVar13 - 1 & 7;
                pbVar58 = pbVar14;
                if (uVar18 != 0) {
                  pbVar58 = pbVar14 + 1;
                  uVar34 = 1;
                  uVar48 = uVar34;
                  if (bVar19 == pbVar14[2]) goto LAB_000c3f6a;
                  if (uVar18 != 1) {
                    if (uVar18 != 2) {
                      if (uVar18 != 3) {
                        if (uVar18 != 4) {
                          if (uVar18 != 5) {
                            if (uVar18 != 6) {
                              uVar34 = 2;
                              pbVar58 = pbVar14 + 2;
                              uVar48 = uVar34;
                              if (bVar19 == pbVar14[3]) goto LAB_000c3f6a;
                            }
                            pbVar14 = pbVar58 + 2;
                            uVar34 = uVar34 + 1;
                            pbVar58 = pbVar58 + 1;
                            uVar48 = uVar34;
                            if (bVar19 == *pbVar14) goto LAB_000c3f6a;
                          }
                          pbVar14 = pbVar58 + 2;
                          uVar34 = uVar34 + 1;
                          pbVar58 = pbVar58 + 1;
                          uVar48 = uVar34;
                          if (bVar19 == *pbVar14) goto LAB_000c3f6a;
                        }
                        pbVar14 = pbVar58 + 2;
                        uVar34 = uVar34 + 1;
                        pbVar58 = pbVar58 + 1;
                        uVar48 = uVar34;
                        if (bVar19 == *pbVar14) goto LAB_000c3f6a;
                      }
                      pbVar14 = pbVar58 + 2;
                      uVar34 = uVar34 + 1;
                      pbVar58 = pbVar58 + 1;
                      uVar48 = uVar34;
                      if (bVar19 == *pbVar14) goto LAB_000c3f6a;
                    }
                    pbVar14 = pbVar58 + 2;
                    uVar34 = uVar34 + 1;
                    pbVar58 = pbVar58 + 1;
                    uVar48 = uVar34;
                    if (bVar19 == *pbVar14) goto LAB_000c3f6a;
                  }
                }
                do {
                  if (uVar13 <= uVar34 + 1) goto LAB_000c369e;
                  uVar48 = uVar34 + 1;
                } while ((((bVar19 != pbVar58[2]) && (uVar48 = uVar34 + 2, bVar19 != pbVar58[3])) &&
                         ((uVar48 = uVar34 + 3, bVar19 != pbVar58[4] &&
                          (((uVar48 = uVar34 + 4, bVar19 != pbVar58[5] &&
                            (uVar48 = uVar34 + 5, bVar19 != pbVar58[6])) &&
                           (uVar48 = uVar34 + 6, bVar19 != pbVar58[7])))))) &&
                        ((uVar48 = uVar34 + 7, bVar19 != pbVar58[8] &&
                         (pbVar14 = pbVar58 + 9, uVar34 = uVar34 + 8, uVar48 = uVar34,
                         pbVar58 = pbVar58 + 8, bVar19 != *pbVar14))));
              }
LAB_000c3f6a:
              uVar16 = uVar16 + 1 + uVar48;
            }
LAB_000c369e:
            uVar13 = uVar16;
            if (0xa4 < uVar16) goto LAB_000c3418;
          }
LAB_000c36a8:
          iVar32 = DAT_000c3da0 + 0xc36b4 + uVar13 * 10;
          uVar13 = (uint)*(byte *)(iVar32 + 8);
          if ((uVar49 < uVar13) || (0x7fffffff - uVar13 < uVar25)) goto LAB_000c3418;
          iVar33 = local_b4 * 0x20 + 0x30;
          iVar40 = DAT_000c3da4 + 0xc36e0;
          iVar36 = iVar40 + iVar33;
          uVar30 = *(undefined1 *)(DAT_000c3da4 + 0xc370c);
          *(int *)(DAT_000c3da4 + 0xc4398) = iVar36;
          *(uint *)(iVar26 + 0xc4394) = uVar13 + uVar46;
          *(uint *)(iVar26 + 0xc36f0) = uVar25 + uVar13;
          *(undefined1 *)(iVar36 + 4) = uVar30;
          uVar30 = *(undefined1 *)(iVar26 + 0xc3701);
          *(undefined4 *)(iVar36 + 8) = 0;
          *(undefined1 *)(iVar36 + 5) = uVar30;
          *(undefined4 *)(iVar40 + iVar33) = 0;
          *(undefined1 *)(iVar36 + 0x14) = 7;
          *(undefined1 *)(iVar36 + 0x16) = 7;
          *(undefined4 *)(iVar36 + 0x10) = 0;
          *(undefined1 *)(iVar36 + 0x15) = 0;
          *(undefined1 *)(iVar36 + 0x17) = 0;
          *(undefined4 *)(iVar36 + 0x1c) = 0;
          *(undefined1 *)(iVar36 + 0x18) = 1;
          *(undefined1 *)(iVar36 + 0x19) = 1;
          *(undefined1 *)(iVar36 + 0xc) = 0xa5;
          iVar33 = DAT_000c3da8;
          if (*(char *)(iVar26 + 0xc4391) == '\x01') {
            uVar25 = (uint)*(ushort *)(iVar32 + 6);
          }
          else {
            uVar25 = 0xa0;
          }
          iVar26 = uVar25 + (int)*(short *)(DAT_000c3da8 + 0xc3758);
          if (iVar26 < *(int *)(DAT_000c3da8 + 0xc3736)) {
            *(int *)(*(int *)(DAT_000c3da8 + 0xc43ea) + 8) = *(int *)(DAT_000c3da8 + 0xc3736);
          }
          else {
            *(int *)(*(int *)(DAT_000c3da8 + 0xc43ea) + 8) = iVar26;
          }
          iVar26 = *(int *)(*(int *)(iVar33 + 0xc43ea) + 8);
          if (0x7fffffffU - iVar26 < *(uint *)(iVar33 + 0xc375a)) {
            uVar46 = *(uint *)(iVar33 + 0xc43e6);
            uVar25 = *(uint *)(iVar33 + 0xc3742);
            uVar53 = *(uint *)(iVar33 + 0xc3746);
            pbVar21 = (byte *)(*(int *)(iVar33 + 0xc373e) + uVar25);
            goto LAB_000c3418;
          }
          *(uint *)(iVar33 + 0xc375a) = *(uint *)(iVar33 + 0xc375a) + iVar26;
          *(undefined1 *)(*(int *)(iVar33 + 0xc43ea) + 5) = *(undefined1 *)(iVar33 + 0xc3753);
          *(undefined1 *)(*(int *)(iVar33 + 0xc43ea) + 4) = *(undefined1 *)(iVar33 + 0xc375e);
          *(char *)(*(int *)(iVar33 + 0xc43ea) + 0xc) = (char)uVar16;
          *(undefined4 *)(*(int *)(iVar33 + 0xc43ea) + 0x1c) = *(undefined4 *)(iVar33 + 0xc374a);
          *(undefined1 *)(*(int *)(iVar33 + 0xc43ea) + 0x14) = *(undefined1 *)(iVar33 + 0xc43ee);
          *(undefined1 *)(*(int *)(iVar33 + 0xc43ea) + 0x15) = *(undefined1 *)(iVar33 + 0xc43ef);
          *(undefined1 *)(*(int *)(iVar33 + 0xc43ea) + 0x16) = *(undefined1 *)(iVar33 + 0xc43f0);
          *(undefined1 *)(*(int *)(iVar33 + 0xc43ea) + 0x17) = *(undefined1 *)(iVar33 + 0xc43f1);
          *(undefined1 *)(*(int *)(iVar33 + 0xc43ea) + 0x18) = *(undefined1 *)(iVar33 + 0xc43e4);
          *(undefined1 *)(*(int *)(iVar33 + 0xc43ea) + 0x19) = *(undefined1 *)(iVar33 + 0xc43e5);
          *(undefined1 *)(iVar33 + 0xc43ee) = 7;
          *(undefined1 *)(iVar33 + 0xc43f0) = 7;
          *(undefined1 *)(iVar33 + 0xc43ef) = 0;
          *(undefined1 *)(iVar33 + 0xc43f1) = 0;
          *(undefined1 *)(iVar33 + 0xc43e4) = 1;
          bVar19 = *(char *)(iVar33 + 0xc3757) + 1;
          uVar53 = *(uint *)(iVar33 + 0xc3746);
          *(undefined1 *)(iVar33 + 0xc43e5) = 1;
          uVar13 = *(uint *)(iVar33 + 0xc3742);
          *(char *)(iVar33 + 0xc3756) = *(char *)(iVar33 + 0xc3756) + '\x01';
          *(byte *)(iVar33 + 0xc3757) = bVar19;
          uVar49 = uVar53 - uVar13;
          *(char *)(iVar33 + 0xc43e2) = *(char *)(iVar33 + 0xc43e2) + '\x01';
        }
        local_b4 = (uint)bVar19;
        if ((int)uVar49 < 1) break;
        if (99 < local_b4) goto LAB_000c35ee;
        uVar25 = uVar13;
        uVar46 = *(uint *)(DAT_000c3d84 + 0xc4094);
      }
LAB_000c380e:
      if (local_b4 != 0) goto LAB_000c35ee;
    }
    uVar25 = (uint)*(byte *)(DAT_000c3dac + 0xc44de);
  }
  else {
    uVar25 = (uint)*(byte *)(DAT_000c3d4c + 0xc3d40);
    if (local_b4 < uVar25) goto LAB_000c30a4;
    if (local_b4 == uVar25) {
      uVar25 = *(uint *)((int)&DAT_000c3d54 + DAT_000c3d4c);
      *(byte *)(DAT_000c3d4c + 0xc3d40) = *(byte *)(DAT_000c3d4c + 0xc30a5) + 1;
      if (uVar25 == 0) {
        uVar25 = 1;
      }
      *(undefined4 *)(iVar44 + 0xc4170) = *(undefined4 *)(iVar44 + 0xc34a4);
      if (param_2 < 5) {
        *(undefined4 *)(iVar44 + 0xc4168) = 0;
        return (uchar *)0xfffffffd;
      }
      iVar12 = *(int *)(iVar44 + 0xc3498);
      if (iVar12 == 0) {
        uVar53 = 0;
LAB_000c35fc:
        bVar24 = (byte)uVar53;
        iVar42 = 1;
        puVar6 = (uchar *)0x3;
        iVar12 = 2;
        iVar44 = 0;
        goto LAB_000c360e;
      }
      if (uVar25 < 0x1ffff) {
        if (iVar12 == 0x14) {
          uVar49 = uVar25 * 0x666 >> 0xf;
        }
        else {
          uVar53 = *(int *)(iVar44 + 0xc349c) * uVar25;
          uVar49 = uVar53 >> 0xf;
          if ((uVar53 & 0x4000) != 0) {
            uVar49 = uVar49 + 1;
          }
        }
      }
      else {
        uVar49 = __udivsi3(uVar25,iVar12);
      }
      uVar46 = iVar12 * uVar49;
      uVar53 = uVar49;
      if (uVar46 < uVar25) {
        iVar44 = 0;
        do {
          uVar53 = uVar49 + 1;
          if (uVar25 <= uVar46 + iVar44 + iVar12) break;
          iVar44 = iVar44 + iVar12 + iVar12;
          uVar53 = uVar49 + 2;
          if (uVar25 <= uVar46 + iVar44) break;
          iVar44 = iVar44 + iVar12;
          uVar53 = uVar49 + 3;
          if (uVar25 <= uVar46 + iVar44) break;
          iVar44 = iVar44 + iVar12;
          uVar53 = uVar49 + 4;
          if (uVar25 <= uVar46 + iVar44) break;
          iVar44 = iVar44 + iVar12;
          uVar53 = uVar49 + 5;
          if (uVar25 <= uVar46 + iVar44) break;
          iVar44 = iVar44 + iVar12;
          uVar53 = uVar49 + 6;
          if (uVar25 <= uVar46 + iVar44) break;
          iVar44 = iVar44 + iVar12;
          uVar53 = uVar49 + 7;
          if (uVar25 <= uVar46 + iVar44) break;
          iVar44 = iVar44 + iVar12;
          uVar53 = uVar49 + 8;
          if (uVar25 <= uVar46 + iVar44) break;
          iVar44 = iVar44 + iVar12;
          uVar53 = uVar49 + 9;
          if (uVar25 <= uVar46 + iVar44) break;
          iVar44 = iVar44 + iVar12;
          uVar53 = uVar49 + 10;
          if (uVar25 <= uVar46 + iVar44) break;
          iVar44 = iVar44 + iVar12;
          uVar53 = uVar49 + 0xb;
          if (uVar25 <= uVar46 + iVar44) break;
          iVar44 = iVar44 + iVar12;
          uVar53 = uVar49 + 0xc;
          if (uVar25 <= uVar46 + iVar44) break;
          iVar44 = iVar44 + iVar12;
          uVar53 = uVar49 + 0xd;
          if (uVar25 <= uVar46 + iVar44) break;
          iVar44 = iVar44 + iVar12;
          uVar53 = uVar49 + 0xe;
          if (uVar25 <= uVar46 + iVar44) break;
          iVar44 = iVar44 + iVar12;
          uVar53 = uVar49 + 0xf;
          if (uVar25 <= uVar46 + iVar44) break;
          iVar44 = iVar44 + iVar12;
          uVar49 = uVar49 + 0x10;
          uVar53 = uVar49;
        } while (uVar46 + iVar44 < uVar25);
      }
      if (uVar53 < 0x200000) {
        if (0x3fff < uVar53) {
          bVar10 = (byte)((uVar53 << 0xb) >> 0x19) | 0x80;
          bVar19 = (byte)((uVar53 << 0x12) >> 0x19) | 0x80;
          bVar24 = (byte)uVar53 & 0x7f;
          goto LAB_000c35b2;
        }
        if (uVar53 < 0x80) goto LAB_000c35fc;
        bVar24 = (byte)uVar53 & 0x7f;
        bVar19 = (byte)((uVar53 << 0x12) >> 0x19) | 0x80;
        iVar42 = 2;
        puVar6 = &DAT_00000004;
        iVar12 = 3;
        iVar44 = 1;
        iVar45 = 0;
      }
      else {
        bVar10 = 0xff;
        bVar24 = 0x7f;
        bVar19 = bVar10;
LAB_000c35b2:
        iVar42 = 3;
        iVar12 = 4;
        iVar44 = 2;
        iVar45 = 1;
        *param_1 = bVar10;
        puVar6 = &DAT_00000005;
      }
      param_1[iVar45] = bVar19;
LAB_000c360e:
      iVar45 = DAT_000c3d94;
      param_1[iVar44] = bVar24;
      param_1[iVar42] = 0xff;
      param_1[iVar12] = '\0';
      *(undefined4 *)(iVar45 + 0xc42f2) = 0;
      *(undefined4 *)(iVar45 + 0xc42f6) = 0;
      return puVar6;
    }
LAB_000c30cc:
    iVar45 = DAT_000c3dd8;
    iVar42 = DAT_000c3dcc;
    iVar44 = DAT_000c3dc8;
    iVar12 = DAT_000c3dc4;
    if (uVar25 < local_b4) {
      iVar32 = DAT_000c3dc4 + 0xc3cc8;
      iVar22 = DAT_000c3dd0 + 0xc4036;
      iVar26 = DAT_000c3dc8 + 0xc3dca;
      iVar36 = (int)&DAT_000c3dc8 + DAT_000c3dcc;
      iVar33 = DAT_000c3dd4 + 0xc3fb8;
      iVar7 = DAT_000c3dd8 + 0xc3dd6;
      local_6c = uVar25;
      do {
        iVar39 = DAT_000c3dec;
        iVar40 = DAT_000c3ddc;
        iVar43 = local_6c * 0x20 + 0x30;
        iVar27 = DAT_000c3ddc + 0xc3982;
        iVar37 = iVar27 + iVar43;
        iVar8 = *(int *)(iVar27 + iVar43);
        if (iVar8 == 1) {
LAB_000c3a14:
          puVar6 = (uchar *)0x0;
          uVar25 = local_6c + 1 & 0xff;
          *(char *)(iVar27 + 0xcc0) = (char)(local_6c + 1);
        }
        else {
          if (iVar8 == 2) {
            if (*(uint *)(DAT_000c3ddc + 0xc4656) < 0x7fffffffU - *(int *)(iVar37 + 8)) {
              *(uint *)(DAT_000c3ddc + 0xc4656) =
                   *(uint *)(DAT_000c3ddc + 0xc4656) + *(int *)(iVar37 + 8);
            }
            iVar27 = DAT_000c3de8 + 0xc3a16;
            goto LAB_000c3a14;
          }
          uVar53 = local_6c + 1;
          uVar30 = (undefined1)uVar53;
          if (iVar8 == 0) {
            uVar25 = uVar53 & 0xff;
            *(undefined4 *)(DAT_000c3ddc + 0xc4652) = 0;
            *(undefined1 *)(iVar40 + 0xc4642) = uVar30;
            bVar19 = *(byte *)(iVar37 + 0xc);
            uVar49 = (uint)bVar19;
            *(undefined4 *)(iVar39 + 0xc3a3a) = 0;
            *(undefined4 *)(iVar39 + 0xc3a3e) = 0;
            *(undefined1 *)(iVar39 + 0xc3a42) = 0;
            *(undefined1 *)(iVar39 + 0xc3a43) = 0;
            *(undefined1 *)(iVar39 + 0xc3a44) = 0;
            *(undefined1 *)(iVar39 + 0xc3a45) = 0;
            *(undefined1 *)(iVar39 + 0xc3c4a) = 0;
            *(undefined1 *)(iVar39 + 0xc3a48) = 0;
            *(undefined1 *)(iVar39 + 0xc3e4c) = 0;
            *(undefined1 *)(iVar39 + 0xc3ecf) = 0;
            *(undefined1 *)(iVar39 + 0xc46d2) = 0;
            *(undefined1 *)(iVar39 + 0xc3ece) = 0;
            iVar39 = DAT_000c4ca0;
            puVar6 = (uchar *)0x0;
            if (uVar49 < 0xa5) {
              iVar27 = *(int *)(iVar37 + 8);
              iVar8 = DAT_000c3df0 + 0xc3a70 + uVar49 * 10;
              if ((((*(char *)(DAT_000c3df0 + 0xc3a70 + uVar49 * 10) == 'S') &&
                   (*(char *)(iVar8 + 1) == 'O')) && (*(char *)(iVar8 + 2) == 'K')) &&
                 (*(char *)(iVar8 + 3) == 'U')) {
                if (*(uint *)(iVar40 + 0xc4656) < 0x7fffffffU - iVar27) {
                  *(uint *)(iVar40 + 0xc4656) = *(uint *)(iVar40 + 0xc4656) + iVar27;
                }
                if (*(uint *)(DAT_000c3df4 + 0xc477a) < 0x7fffffffU - iVar27) {
                  *(uint *)(DAT_000c3df4 + 0xc477a) = *(uint *)(DAT_000c3df4 + 0xc477a) + iVar27;
                }
                uVar49 = (uint)*(byte *)(iVar37 + 0x14);
                if (uVar49 < 7) {
                  iVar39 = (int)*(short *)(DAT_000c3df8 + 0xc4156 + uVar49 * 0x12 +
                                          (uint)*(byte *)(DAT_000c3df8 + 0xc4156 + uVar49 * 0x12) *
                                          4) * (int)(short)(ushort)*(byte *)(iVar37 + 0x15) +
                           *(int *)(DAT_000c3dfc + 0xc47ac);
                  iVar40 = -0x10eb4;
                  if (-0x10eb5 < iVar39) {
                    iVar40 = iVar39;
                  }
                  if (iVar40 < 0x10eb5) {
                    *(int *)(DAT_000c3dfc + 0xc47ac) = iVar40;
                  }
                  else {
                    *(undefined4 *)(DAT_000c3dfc + 0xc47ac) = 0x10eb4;
                  }
                }
                uVar49 = (uint)*(byte *)(iVar37 + 0x16);
                if (uVar49 < 7) {
                  iVar40 = (int)*(short *)(DAT_000c3e00 + 0xc4230 + uVar49 * 0x12 +
                                          (uint)*(byte *)(DAT_000c3e00 + 0xc4230 + uVar49 * 0x12) *
                                          4) * (int)(short)(ushort)*(byte *)(iVar37 + 0x17) +
                           (int)*(short *)(DAT_000c3e04 + 0xc4808);
                  if (iVar40 < -99) {
                    iVar40 = -99;
                  }
                  if (0x62 < iVar40) {
                    iVar40 = 99;
                  }
                  *(short *)(DAT_000c3e04 + 0xc4808) = (short)iVar40;
                }
                if (*(char *)(iVar37 + 0x18) == '\0') {
                  *(undefined4 *)(DAT_000c3e08 + 0xc4838) = 0;
                }
                if (*(char *)(iVar37 + 0x19) == '\0') {
                  *(undefined2 *)(DAT_000c3e0c + 0xc484e) = 0;
                }
                iVar61 = DAT_000c3e10 + 0xc3b8e;
                *(char *)(DAT_000c3e10 + 0xc485c) = *(char *)(DAT_000c3e10 + 0xc485c) + '\x01';
                iVar43 = DAT_000c3e30;
                iVar27 = DAT_000c3e2c;
                iVar8 = DAT_000c3e28;
                iVar39 = DAT_000c3e24;
                iVar40 = DAT_000c3e18;
                if (local_b4 <= uVar25) goto LAB_000c4098;
                iVar9 = *(int *)(iVar61 + uVar25 * 0x20 + 0x30);
                puVar6 = (uchar *)0x0;
                if (iVar9 != 0) {
                  iVar50 = uVar25 * 0x20 + 0x30;
                  piVar62 = (int *)(iVar61 + iVar50);
                  iVar38 = DAT_000c3e14 + 0xc42bc;
                  iVar61 = DAT_000c3e1c + 0xc4248;
                  iVar50 = iVar50 + DAT_000c3e18 + 0xc3bca;
                  iVar57 = DAT_000c3e20 + 0xc3bda;
                  uVar46 = uVar25 + 1;
                  uVar49 = uVar25;
                  do {
                    if (iVar9 == 1) {
                      iVar9 = *(int *)(iVar50 + 8);
                      uVar13 = *(uint *)(iVar40 + 0xc489e);
                      uVar16 = 0x7fffffff - iVar9;
                      if (uVar13 < uVar16) {
                        *(uint *)(iVar40 + 0xc489e) = iVar9 + uVar13;
                        iVar9 = *(int *)(iVar50 + 8);
                        uVar16 = 0x7fffffff - iVar9;
                      }
                      uVar13 = *(uint *)(iVar8 + 0xc48ac);
                      if (uVar13 < uVar16) {
                        *(uint *)(iVar8 + 0xc48ac) = iVar9 + uVar13;
                      }
                      uVar13 = (uint)*(byte *)(iVar50 + 0x14);
                      if (uVar13 < 7) {
                        iVar9 = (int)*(short *)(iVar61 + uVar13 * 0x12 +
                                               (uint)*(byte *)(iVar61 + uVar13 * 0x12) * 4) *
                                (int)(short)(ushort)*(byte *)(iVar50 + 0x15) +
                                *(int *)((int)&DAT_000c4ca0 + DAT_000c4c78);
                        if (iVar9 < -0x10eb4) {
                          iVar9 = -0x10eb4;
                        }
                        if (iVar9 < 0x10eb5) {
                          *(int *)((int)&DAT_000c4ca0 + DAT_000c4c78) = iVar9;
                        }
                        else {
                          *(undefined4 *)((int)&DAT_000c4ca0 + DAT_000c4c78) = 0x10eb4;
                        }
                      }
                      uVar13 = (uint)*(byte *)(iVar50 + 0x16);
                      if (uVar13 < 7) {
                        iVar15 = (int)*(short *)(iVar38 + uVar13 * 0x12 +
                                                (uint)*(byte *)(iVar38 + uVar13 * 0x12) * 4) *
                                 (int)(short)(ushort)*(byte *)(iVar50 + 0x17) +
                                 (int)*(short *)(iVar43 + 0xc48be);
                        iVar9 = -99;
                        if (-100 < iVar15) {
                          iVar9 = iVar15;
                        }
                        if (0x62 < iVar9) {
                          iVar9 = 99;
                        }
                        *(short *)(iVar43 + 0xc48be) = (short)iVar9;
                      }
                      if (*(char *)(iVar50 + 0x18) == '\0') {
                        *(undefined4 *)(iVar39 + 0xc48a6) = 0;
                      }
                      if (*(char *)(iVar50 + 0x19) == '\0') {
                        *(undefined2 *)(iVar27 + 0xc48bc) = 0;
                      }
                    }
                    else if (uVar46 < local_b4) {
                      iVar15 = *(int *)(iVar57 + uVar46 * 0x20 + 0x30);
                      if (iVar15 != 0) {
                        if (iVar15 != 1) {
                          uVar16 = ~uVar46 + local_b4 & 7;
                          iVar54 = uVar46 * 0x20 + 0x30 + iVar57;
                          uVar13 = uVar46;
                          iVar15 = iVar54;
                          if (uVar16 != 0) {
                            uVar13 = uVar46 + 1;
                            if ((local_b4 <= uVar13) || (*(int *)(iVar54 + 0x20) == 0))
                            goto LAB_000c3d2e;
                            iVar15 = iVar54 + 0x20;
                            if (*(int *)(iVar54 + 0x20) == 1) goto LAB_000c3d24;
                            if (uVar16 != 1) {
                              if (uVar16 != 2) {
                                if (uVar16 != 3) {
                                  if (uVar16 != 4) {
                                    if (uVar16 != 5) {
                                      if (uVar16 != 6) {
                                        uVar13 = uVar46 + 2;
                                        if (*(int *)(iVar54 + 0x40) == 0) goto LAB_000c3d2e;
                                        iVar15 = iVar54 + 0x40;
                                        if (*(int *)(iVar54 + 0x40) == 1) goto LAB_000c3d24;
                                      }
                                      piVar60 = (int *)(iVar15 + 0x20);
                                      uVar13 = uVar13 + 1;
                                      if (*piVar60 == 0) goto LAB_000c3d2e;
                                      iVar15 = iVar15 + 0x20;
                                      if (*piVar60 == 1) goto LAB_000c3d24;
                                    }
                                    piVar60 = (int *)(iVar15 + 0x20);
                                    uVar13 = uVar13 + 1;
                                    if (*piVar60 == 0) goto LAB_000c3d2e;
                                    iVar15 = iVar15 + 0x20;
                                    if (*piVar60 == 1) goto LAB_000c3d24;
                                  }
                                  piVar60 = (int *)(iVar15 + 0x20);
                                  uVar13 = uVar13 + 1;
                                  if (*piVar60 == 0) goto LAB_000c3d2e;
                                  iVar15 = iVar15 + 0x20;
                                  if (*piVar60 == 1) goto LAB_000c3d24;
                                }
                                piVar60 = (int *)(iVar15 + 0x20);
                                uVar13 = uVar13 + 1;
                                if (*piVar60 == 0) goto LAB_000c3d2e;
                                iVar15 = iVar15 + 0x20;
                                if (*piVar60 == 1) goto LAB_000c3d24;
                              }
                              piVar60 = (int *)(iVar15 + 0x20);
                              uVar13 = uVar13 + 1;
                              if (*piVar60 == 0) goto LAB_000c3d2e;
                              iVar15 = iVar15 + 0x20;
                              if (*piVar60 == 1) goto LAB_000c3d24;
                            }
                          }
                          do {
                            if ((local_b4 <= uVar13 + 1) || (*(int *)(iVar15 + 0x20) == 0))
                            goto LAB_000c3d2e;
                            if (*(int *)(iVar15 + 0x20) == 1) break;
                            if (*(int *)(iVar15 + 0x40) == 0) goto LAB_000c3d2e;
                            if (*(int *)(iVar15 + 0x40) == 1) break;
                            if (*(int *)(iVar15 + 0x60) == 0) goto LAB_000c3d2e;
                            if (*(int *)(iVar15 + 0x60) == 1) break;
                            if (*(int *)(iVar15 + 0x80) == 0) goto LAB_000c3d2e;
                            if (*(int *)(iVar15 + 0x80) == 1) break;
                            if (*(int *)(iVar15 + 0xa0) == 0) goto LAB_000c3d2e;
                            if (*(int *)(iVar15 + 0xa0) == 1) break;
                            if (*(int *)(iVar15 + 0xc0) == 0) goto LAB_000c3d2e;
                            if (*(int *)(iVar15 + 0xc0) == 1) break;
                            if (*(int *)(iVar15 + 0xe0) == 0) goto LAB_000c3d2e;
                            if (*(int *)(iVar15 + 0xe0) == 1) break;
                            piVar60 = (int *)(iVar15 + 0x100);
                            uVar13 = uVar13 + 8;
                            if (*piVar60 == 0) goto LAB_000c3d2e;
                            iVar15 = iVar15 + 0x100;
                          } while (*piVar60 != 1);
                        }
LAB_000c3d24:
                        if (iVar9 != 2) {
                          piVar62[2] = 0;
                        }
                      }
                    }
LAB_000c3d2e:
                    uVar49 = uVar49 + 1;
                    if (local_b4 <= uVar49) goto LAB_000c4098;
                    piVar62 = piVar62 + 8;
                    iVar9 = *piVar62;
                    uVar46 = uVar46 + 1 & 0xffff;
                  } while (iVar9 != 0);
                  puVar6 = (uchar *)0x0;
                }
              }
              else {
                piVar62 = (int *)(DAT_000c4ca0 + 0xc462c);
                bVar24 = *(byte *)(DAT_000c4c9c + uVar49 * 10 + 0xc462d);
                local_44 = (uint)bVar24;
                bVar10 = *(byte *)(iVar37 + 4);
                uVar30 = *(undefined1 *)(iVar37 + 5);
                *(byte *)(DAT_000c4ca0 + 0xc4638) = bVar19;
                cVar20 = *(char *)(iVar37 + 0x18);
                *(byte *)(iVar39 + 0xc4637) = bVar24;
                *piVar62 = iVar27;
                *(undefined1 *)(iVar39 + 0xc4634) = uVar30;
                *(byte *)(iVar39 + 0xc4635) = bVar10;
                *(undefined1 *)(iVar39 + 0xc4636) = 1;
                *(undefined1 *)(iVar39 + 0xc4ac0) = 1;
                if (cVar20 == '\0') {
                  uVar53 = (uint)*(byte *)(DAT_000c6f24 + 0xc6478);
                  if (uVar53 != 5) {
                    *(undefined1 *)(iVar39 + 0xc4ac4) = 0;
                    *(undefined4 *)(iVar39 + 0xc4ac8) = 0;
                    *(undefined1 *)(iVar39 + 0xc4ad0) = 0;
                    *(undefined1 *)(iVar39 + 0xc4ac1) = 1;
                  }
                  uVar49 = (uint)(uVar53 != 5);
                }
                else {
                  uVar49 = 0;
                  uVar53 = (uint)*(byte *)(DAT_000c4ca4 + 0xc468a);
                }
                iVar40 = DAT_000c4ca8;
                if (*(char *)(iVar37 + 0x19) == '\0') {
                  *(undefined1 *)(DAT_000c4ca8 + 0xc5318) = 0;
                  *(undefined4 *)(iVar40 + 0xc531c) = 0;
                  *(undefined1 *)(iVar40 + 0xc5324) = 0;
                  *(undefined1 *)(iVar40 + 0xc5314) = 1;
                }
                iVar40 = DAT_000c4cac;
                bVar19 = *(byte *)(iVar37 + 0x14);
                if (bVar19 < 7) {
                  uVar30 = *(undefined1 *)(iVar37 + 0x15);
                  iVar39 = DAT_000c4cac + 0xc4b36 + uVar49 * 0x10;
                  *(byte *)(iVar39 + 4) = bVar19;
                  cVar20 = *(char *)(iVar40 + 0xc4b37);
                  *(int *)(iVar39 + 0xc) = iVar27;
                  bVar24 = cVar20 + 1;
                  *(undefined1 *)(iVar39 + 0x10) = uVar30;
                  *(undefined4 *)(iVar39 + 8) = 0;
                  uVar49 = (uint)bVar24;
                  *(byte *)(iVar40 + 0xc4b37) = bVar24;
                }
                if (uVar53 == 5) {
                  if (bVar19 < 7) {
                    uVar46 = uVar49 - 1;
                    uVar49 = uVar46 & 0xff;
                    *(char *)(DAT_000c6f78 + 0xc7051) = (char)uVar46;
                  }
                  iVar40 = DAT_000c6f80;
                  iVar8 = DAT_000c6f7c + 0xc6bcc + (local_b4 + uVar25 & 0x1f) * 2;
                  iVar39 = DAT_000c6f80 + 0xc7066 + uVar49 * 0x10;
                  uVar30 = *(undefined1 *)(iVar8 + 0x77d);
                  *(undefined1 *)(iVar39 + 4) = *(undefined1 *)(iVar8 + 0x77c);
                  cVar20 = *(char *)(iVar40 + 0xc7067);
                  *(undefined1 *)(iVar39 + 0x10) = uVar30;
                  *(int *)(iVar39 + 0xc) = iVar27;
                  *(undefined4 *)(iVar39 + 8) = 0;
                  *(char *)(iVar40 + 0xc7067) = cVar20 + '\x01';
                }
                iVar40 = DAT_000c4cb0;
                if (*(byte *)(iVar37 + 0x16) < 7) {
                  uVar30 = *(undefined1 *)(iVar37 + 0x17);
                  iVar8 = (uint)*(byte *)(DAT_000c4cb0 + 0xc537e) * 0x10 + 0x808;
                  iVar39 = DAT_000c4cb0 + 0xc4b7a + iVar8;
                  *(byte *)(DAT_000c4cb0 + 0xc4b7a + iVar8) = *(byte *)(iVar37 + 0x16);
                  *(int *)(iVar39 + 8) = iVar27;
                  *(undefined1 *)(iVar39 + 0xc) = uVar30;
                  *(undefined4 *)(iVar39 + 4) = 0;
                  *(char *)(iVar40 + 0xc537e) = *(char *)(iVar40 + 0xc537e) + '\x01';
                }
                iVar9 = DAT_000c4cb4 + 0xc4718;
                cVar20 = *(char *)(DAT_000c4cb4 + 0xc53e6) + '\x01';
                *(char *)(DAT_000c4cb4 + 0xc53e6) = cVar20;
                iVar61 = DAT_000c4ccc;
                iVar43 = DAT_000c4cc8;
                iVar8 = DAT_000c4cc4;
                iVar39 = DAT_000c4cc0;
                iVar40 = DAT_000c4cb8;
                if (uVar25 < local_b4) {
                  iVar50 = uVar25 * 0x20;
                  iVar38 = *(int *)(iVar50 + iVar9 + 0x30);
                  uVar49 = uVar25;
                  if (iVar38 == 0) {
                    local_68 = (uint)*(byte *)(DAT_000c6f64 + 0xc6fb6);
                  }
                  else {
                    iVar47 = DAT_000c4cb8 + 0xc4be6;
                    local_68 = (uint)*(byte *)(DAT_000c4cbc + 0xc4bea);
                    iVar57 = DAT_000c4cc0 + 0xc4bfe;
                    local_ac = *(int *)(DAT_000c4cbc + 0xc4756);
                    iVar15 = DAT_000c4cc4 + 0xc4c08;
                    iVar54 = DAT_000c4ccc + 0xc4c26;
                    iVar51 = DAT_000c4cc8 + 0xc4c0c;
                    uVar13 = (uint)*(byte *)(DAT_000c4cbc + 0xc4b68);
                    bVar64 = true;
                    iVar9 = iVar9 + uVar25 * 0x20;
                    uVar46 = uVar25;
                    do {
                      if (iVar38 == 1) {
                        cVar2 = *(char *)(iVar9 + 0x48);
                        iVar38 = *(int *)(iVar9 + 0x38);
                        *(char *)(iVar40 + 0xc4be6) = (char)local_68 + '\x01';
                        if (((cVar2 == '\0') && (uVar53 != 5)) &&
                           (-1 < (int)((uint)*(byte *)(iVar40 + 0xc4be7) << 0x18))) {
                          iVar17 = iVar47 + (uint)*(byte *)(iVar40 + 0xc4be7) * 0x10;
                          *(undefined1 *)(iVar17 + 4) = 0;
                          cVar2 = *(char *)(iVar40 + 0xc4be7);
                          *(undefined1 *)(iVar17 + 0x10) = 0;
                          *(int *)(iVar17 + 8) = iVar27;
                          *(char *)(iVar40 + 0xc4be7) = cVar2 + '\x01';
                        }
                        if ((*(char *)(iVar9 + 0x49) == '\0') &&
                           (-1 < (int)((uint)*(byte *)(iVar43 + 0xc5410) << 0x18))) {
                          iVar28 = (uint)*(byte *)(iVar43 + 0xc5410) * 0x10 + 0x808;
                          iVar17 = iVar51 + iVar28;
                          *(undefined1 *)(iVar51 + iVar28) = 0;
                          *(undefined1 *)(iVar17 + 0xc) = 0;
                          *(int *)(iVar17 + 4) = iVar27;
                          *(char *)(iVar43 + 0xc5410) = *(char *)(iVar43 + 0xc5410) + '\x01';
                        }
                        if ((*(byte *)(iVar9 + 0x44) < 7) &&
                           (-1 < (int)((uint)*(byte *)(iVar8 + 0xc4c09) << 0x18))) {
                          uVar30 = *(undefined1 *)(iVar9 + 0x45);
                          iVar17 = iVar15 + (uint)*(byte *)(iVar8 + 0xc4c09) * 0x10;
                          *(byte *)(iVar17 + 4) = *(byte *)(iVar9 + 0x44);
                          cVar2 = *(char *)(iVar8 + 0xc4c09);
                          *(int *)(iVar17 + 8) = iVar27;
                          bVar5 = false;
                          *(int *)(iVar17 + 0xc) = iVar38;
                          *(undefined1 *)(iVar17 + 0x10) = uVar30;
                          *(char *)(iVar8 + 0xc4c09) = cVar2 + '\x01';
                        }
                        else {
                          bVar5 = true;
                        }
                        if (uVar53 == 5) {
                          if (bVar5) {
                            bVar19 = *(byte *)(DAT_000c6f1c + 0xc6833);
                          }
                          else {
                            bVar19 = *(char *)(DAT_000c6f34 + 0xc695b) - 1;
                            *(byte *)(DAT_000c6f34 + 0xc695b) = bVar19;
                          }
                          if (-1 < (int)((uint)bVar19 << 0x18)) {
                            iVar17 = DAT_000c6f20 + 0xc63b2 + (local_b4 + 1 + uVar46 & 0x1f) * 2;
                            iVar28 = iVar54 + (uint)bVar19 * 0x10;
                            uVar30 = *(undefined1 *)(iVar17 + 0x77d);
                            *(undefined1 *)(iVar28 + 4) = *(undefined1 *)(iVar17 + 0x77c);
                            cVar2 = *(char *)(iVar61 + 0xc4c27);
                            *(undefined1 *)(iVar28 + 0x10) = uVar30;
                            *(int *)(iVar28 + 8) = iVar27;
                            *(int *)(iVar28 + 0xc) = iVar38;
                            *(char *)(iVar61 + 0xc4c27) = cVar2 + '\x01';
                          }
                        }
                        if ((*(byte *)(iVar9 + 0x46) < 7) &&
                           (-1 < (int)((uint)*(byte *)(iVar39 + 0xc5402) << 0x18))) {
                          iVar28 = (uint)*(byte *)(iVar39 + 0xc5402) * 0x10 + 0x808;
                          uVar30 = *(undefined1 *)(iVar9 + 0x47);
                          iVar17 = iVar57 + iVar28;
                          *(byte *)(iVar57 + iVar28) = *(byte *)(iVar9 + 0x46);
                          *(undefined1 *)(iVar17 + 0xc) = uVar30;
                          *(int *)(iVar17 + 4) = iVar27;
                          *(int *)(iVar17 + 8) = iVar38;
                          *(char *)(iVar39 + 0xc5402) = *(char *)(iVar39 + 0xc5402) + '\x01';
                        }
                        if ((uVar13 & 0x80) == 0) {
                          if (*(char *)(iVar9 + 0x35) == '\x01') {
                            if (bVar64) {
                              bVar64 = false;
                              iVar17 = uVar13 * 4;
                              uVar13 = uVar13 + 1 & 0xff;
                              *(int *)(DAT_000c6fa0 + iVar17 + 0xc715c) = iVar27;
                            }
                            else {
                              bVar64 = false;
                            }
                          }
                          else if (*(char *)(iVar9 + 0x35) == '\0') {
                            if (bVar64) {
                              bVar64 = true;
                            }
                            else {
                              bVar64 = true;
                              iVar17 = uVar13 * 4;
                              uVar13 = uVar13 + 1 & 0xff;
                              *(int *)(DAT_000c6f14 + iVar17 + 0xc656a) = iVar27;
                            }
                          }
                        }
                        iVar27 = iVar27 + iVar38;
                        local_68 = (uint)*(byte *)(DAT_000c6f18 + 0xc6674);
                        local_ac = iVar27;
                      }
                      else {
                        uVar16 = uVar46 + 1 & 0xffff;
                        if (uVar16 < local_b4) {
                          iVar17 = *(int *)(DAT_000c4cd0 + 0xc47da + uVar16 * 0x20 + 0x30);
                          if (iVar17 != 0) {
                            if (iVar17 != 1) {
                              uVar18 = ~uVar16 + local_b4 & 7;
                              iVar28 = DAT_000c4cd0 + 0xc47da + uVar16 * 0x20 + 0x30;
                              iVar17 = iVar28;
                              uVar48 = uVar16;
                              if (uVar18 != 0) {
                                uVar48 = uVar16 + 1;
                                if ((local_b4 <= uVar48) || (*(int *)(iVar28 + 0x20) == 0))
                                goto LAB_000c48ee;
                                iVar17 = iVar28 + 0x20;
                                if (*(int *)(iVar28 + 0x20) == 1) goto LAB_000c48e2;
                                if (uVar18 != 1) {
                                  if (uVar18 != 2) {
                                    if (uVar18 != 3) {
                                      if (uVar18 != 4) {
                                        if (uVar18 != 5) {
                                          if (uVar18 != 6) {
                                            uVar48 = uVar16 + 2;
                                            if (*(int *)(iVar28 + 0x40) == 0) goto LAB_000c48ee;
                                            iVar17 = iVar28 + 0x40;
                                            if (*(int *)(iVar28 + 0x40) == 1) goto LAB_000c48e2;
                                          }
                                          piVar62 = (int *)(iVar17 + 0x20);
                                          uVar48 = uVar48 + 1;
                                          if (*piVar62 == 0) goto LAB_000c48ee;
                                          iVar17 = iVar17 + 0x20;
                                          if (*piVar62 == 1) goto LAB_000c48e2;
                                        }
                                        piVar62 = (int *)(iVar17 + 0x20);
                                        uVar48 = uVar48 + 1;
                                        if (*piVar62 == 0) goto LAB_000c48ee;
                                        iVar17 = iVar17 + 0x20;
                                        if (*piVar62 == 1) goto LAB_000c48e2;
                                      }
                                      piVar62 = (int *)(iVar17 + 0x20);
                                      uVar48 = uVar48 + 1;
                                      if (*piVar62 == 0) goto LAB_000c48ee;
                                      iVar17 = iVar17 + 0x20;
                                      if (*piVar62 == 1) goto LAB_000c48e2;
                                    }
                                    piVar62 = (int *)(iVar17 + 0x20);
                                    uVar48 = uVar48 + 1;
                                    if (*piVar62 == 0) goto LAB_000c48ee;
                                    iVar17 = iVar17 + 0x20;
                                    if (*piVar62 == 1) goto LAB_000c48e2;
                                  }
                                  piVar62 = (int *)(iVar17 + 0x20);
                                  uVar48 = uVar48 + 1;
                                  if (*piVar62 == 0) goto LAB_000c48ee;
                                  iVar17 = iVar17 + 0x20;
                                  if (*piVar62 == 1) goto LAB_000c48e2;
                                }
                              }
                              do {
                                if ((local_b4 <= uVar48 + 1) || (*(int *)(iVar17 + 0x20) == 0))
                                goto LAB_000c48ee;
                                if (*(int *)(iVar17 + 0x20) == 1) break;
                                if (*(int *)(iVar17 + 0x40) == 0) goto LAB_000c48ee;
                                if (*(int *)(iVar17 + 0x40) == 1) break;
                                if (*(int *)(iVar17 + 0x60) == 0) goto LAB_000c48ee;
                                if (*(int *)(iVar17 + 0x60) == 1) break;
                                if (*(int *)(iVar17 + 0x80) == 0) goto LAB_000c48ee;
                                if (*(int *)(iVar17 + 0x80) == 1) break;
                                if (*(int *)(iVar17 + 0xa0) == 0) goto LAB_000c48ee;
                                if (*(int *)(iVar17 + 0xa0) == 1) break;
                                if (*(int *)(iVar17 + 0xc0) == 0) goto LAB_000c48ee;
                                if (*(int *)(iVar17 + 0xc0) == 1) break;
                                if (*(int *)(iVar17 + 0xe0) == 0) goto LAB_000c48ee;
                                if (*(int *)(iVar17 + 0xe0) == 1) break;
                                piVar62 = (int *)(iVar17 + 0x100);
                                uVar48 = uVar48 + 8;
                                if (*piVar62 == 0) goto LAB_000c48ee;
                                iVar17 = iVar17 + 0x100;
                              } while (*piVar62 != 1);
                            }
LAB_000c48e2:
                            if (iVar38 == 2) {
                              uVar16 = local_68 + 1;
                              iVar38 = *(int *)(iVar9 + 0x38);
                              local_68 = uVar16 & 0xff;
                              bVar19 = *(byte *)(iVar45 + 0xc45da);
                              *(char *)((int)&DAT_000c3dd4 + iVar45 + 2) = (char)uVar16;
                              if (-1 < (int)((uint)bVar19 << 0x18)) {
                                iVar17 = (uint)bVar19 * 0x10 + 0x808;
                                iVar28 = iVar7 + iVar17;
                                *(undefined1 *)(iVar7 + iVar17) = 4;
                                local_68 = (uint)*(byte *)((int)&DAT_000c3dd4 + iVar45 + 2);
                                *(int *)(iVar28 + 4) = iVar27;
                                *(int *)(iVar28 + 8) = iVar38;
                                *(undefined1 *)(iVar28 + 0xc) = 1;
                                *(char *)(iVar45 + 0xc45da) = *(char *)(iVar45 + 0xc45da) + '\x01';
                              }
                              iVar27 = iVar27 + iVar38;
                              *(undefined4 *)(iVar9 + 0x38) = 0;
                              local_ac = iVar27;
                            }
                            else {
                              *(int *)(iVar9 + 0x38) = iVar27;
                            }
                          }
                        }
                      }
LAB_000c48ee:
                      iVar38 = DAT_000c6f30;
                      iVar17 = DAT_000c4cd8;
                      uVar46 = uVar46 + 1;
                      if (local_b4 <= uVar46) {
                        iVar40 = DAT_000c6f2c + iVar50;
                        *(int *)(DAT_000c6f30 + 0xc649c) = local_ac;
                        iVar40 = *(int *)(iVar40 + 0xc64c8);
                        *(char *)(iVar38 + 0xc68ae) = (char)uVar13;
                        goto LAB_000c4920;
                      }
                      iVar38 = *(int *)(iVar9 + 0x50);
                      iVar9 = iVar9 + 0x20;
                    } while (iVar38 != 0);
                    iVar40 = *(int *)(DAT_000c4cd4 + iVar50 + 0xc4936);
                    *(int *)(DAT_000c4cd8 + 0xc4912) = local_ac;
                    *(char *)(iVar17 + 0xc4d24) = (char)uVar13;
LAB_000c4920:
                    if (iVar40 != 0) {
                      if (iVar40 != 5 && iVar40 != 2) {
                        uVar13 = ~uVar25 + local_b4 & 3;
                        iVar50 = iVar50 + DAT_000c4cdc + 0xc4978;
                        iVar40 = iVar50;
                        uVar46 = uVar25;
                        if (uVar13 == 0) goto LAB_000c49a4;
                        uVar46 = uVar25 + 1;
                        if (uVar46 < local_b4) {
                          iVar39 = *(int *)(iVar50 + 0x20);
                          uVar49 = uVar46;
                          if (iVar39 == 0) goto LAB_000c6b26;
                          iVar40 = iVar50 + 0x20;
                          if (iVar39 != 2 && iVar39 != 5) {
                            if (uVar13 != 1) {
                              if (uVar13 != 2) {
                                iVar39 = *(int *)(iVar50 + 0x40);
                                uVar46 = uVar25 + 2;
                                uVar49 = uVar46;
                                if (iVar39 == 0) goto LAB_000c6b26;
                                iVar40 = iVar50 + 0x40;
                                if (iVar39 == 2 || iVar39 == 5) goto LAB_000c4a0c;
                              }
                              iVar39 = *(int *)(iVar40 + 0x20);
                              uVar46 = uVar46 + 1;
                              uVar49 = uVar46;
                              if (iVar39 == 0) goto LAB_000c6b26;
                              iVar40 = iVar40 + 0x20;
                              if (iVar39 == 2 || iVar39 == 5) goto LAB_000c4a0c;
                            }
LAB_000c49a4:
                            do {
                              if (local_b4 <= uVar46 + 1) break;
                              iVar39 = *(int *)(iVar40 + 0x20);
                              uVar49 = uVar46 + 1;
                              if (iVar39 == 0) goto LAB_000c6b26;
                              if (iVar39 == 2 || iVar39 == 5) break;
                              iVar39 = *(int *)(iVar40 + 0x40);
                              uVar49 = uVar46 + 2;
                              if (iVar39 == 0) goto LAB_000c6b26;
                              if (iVar39 == 2 || iVar39 == 5) break;
                              iVar39 = *(int *)(iVar40 + 0x60);
                              uVar49 = uVar46 + 3;
                              if (iVar39 == 0) goto LAB_000c6b26;
                              if (iVar39 == 2 || iVar39 == 5) break;
                              iVar39 = *(int *)(iVar40 + 0x80);
                              uVar49 = uVar46 + 4;
                              if (iVar39 == 0) goto LAB_000c6b26;
                              iVar40 = iVar40 + 0x80;
                              uVar46 = uVar46 + 4;
                            } while (iVar39 != 2 && iVar39 != 5);
                          }
                        }
                      }
                      goto LAB_000c4a0c;
                    }
                  }
LAB_000c6b26:
                  iVar40 = DAT_000c6f74;
                  bVar19 = *(byte *)(DAT_000c6f68 + uVar49 * 0x20 + 0xc6b6e);
                  cVar2 = *(char *)(DAT_000c6f6c + 0xc6b38 + (uint)bVar19 * 10);
                  iVar39 = DAT_000c6f6c + 0xc6b38 + (uint)bVar19 * 10;
                  if (cVar2 == 'a') {
                    if ((((*(char *)(iVar39 + 1) == '\0') && (*(char *)(iVar39 + 2) == '\0')) &&
                        (*(char *)(iVar39 + 3) == '\0')) &&
                       (iVar8 = 0, *(char *)(iVar39 + 4) == '\0')) goto LAB_000c6b74;
                  }
                  else if (cVar2 == 'i') {
                    if (((*(char *)(iVar39 + 1) == '\0') && (*(char *)(iVar39 + 2) == '\0')) &&
                       ((*(char *)(iVar39 + 3) == '\0' && (*(char *)(iVar39 + 4) == '\0')))) {
                      iVar8 = 1;
                      goto LAB_000c6b74;
                    }
                  }
                  else if (cVar2 == 'M') {
                    if (((*(char *)(iVar39 + 1) == '\0') && (*(char *)(iVar39 + 2) == '\0')) &&
                       ((*(char *)(iVar39 + 3) == '\0' && (*(char *)(iVar39 + 4) == '\0')))) {
                      iVar8 = 2;
                      goto LAB_000c6b74;
                    }
                  }
                  else if (cVar2 == 'e') {
                    if ((((*(char *)(iVar39 + 1) == '\0') && (*(char *)(iVar39 + 2) == '\0')) &&
                        (*(char *)(iVar39 + 3) == '\0')) && (*(char *)(iVar39 + 4) == '\0')) {
                      iVar8 = 3;
                      goto LAB_000c6b74;
                    }
                  }
                  else if (cVar2 == 'o') {
                    if (((*(char *)(iVar39 + 1) == '\0') && (*(char *)(iVar39 + 2) == '\0')) &&
                       ((*(char *)(iVar39 + 3) == '\0' && (*(char *)(iVar39 + 4) == '\0')))) {
                      iVar8 = 4;
LAB_000c6b74:
                      uVar25 = local_68 + 1;
                      bVar24 = *(byte *)(DAT_000c6f70 + iVar8 * 6 + 0xc7373);
                      local_68 = uVar25 & 0xff;
                      *(byte *)(DAT_000c6f74 + 0xc6b99) = bVar19;
                      uVar49 = bVar24 + local_44;
                      *(char *)(iVar40 + 0xc7020) = (char)uVar25;
                      local_44 = uVar49 & 0xff;
                      *(undefined1 *)(iVar40 + 0xc6b96) = 2;
                      *(char *)(iVar40 + 0xc6b97) = (char)uVar49;
                    }
                  }
                  else if ((((cVar2 == 'N') && (*(char *)(iVar39 + 1) == '\\')) &&
                           (*(char *)(iVar39 + 2) == '\0')) &&
                          ((*(char *)(iVar39 + 3) == '\0' && (*(char *)(iVar39 + 4) == '\0')))) {
                    iVar8 = 5;
                    goto LAB_000c6b74;
                  }
                }
                else {
                  local_68 = (uint)*(byte *)(DAT_000c72e4 + 0xc7498);
                }
LAB_000c4a0c:
                local_60 = local_68;
                if (local_68 == 0) {
                  local_b4 = local_68;
                }
                else {
                  bVar19 = *(byte *)(DAT_000c4ce0 + 0xc4eb3);
                  if (5 < uVar53) {
                    uVar53 = 4;
                    *(undefined1 *)(DAT_000c4ce4 + 0xc4a4e) = 4;
                  }
                  if (cVar20 == '\x01') {
                    local_b0 = (int)*(short *)(DAT_000c6f94 + uVar53 * 6 + 0xc7428);
                  }
                  else if (*(char *)(DAT_000c4ce8 + 0xc56f2) == cVar20) {
                    local_b0 = (int)*(short *)(&UNK_000c751e + DAT_000c6f9c + uVar53 * 6);
                  }
                  else {
                    local_b0 = (int)*(short *)(DAT_000c4cec + uVar53 * 6 + 0xc5210);
                  }
                  uVar25 = *(uint *)(DAT_000c4cf0 + 0xc5734);
                  *(undefined1 *)(iVar44 + 0xc393e) = 0;
                  iVar40 = local_b0 + uVar25;
                  if ((int)(local_b0 + uVar25) < -0x2000) {
                    iVar40 = -0x2000;
                  }
                  iVar39 = 0x1fff;
                  if (iVar40 < 0x1fff) {
                    iVar39 = iVar40;
                  }
                  *(short *)(iVar44 + 0xc3940) = (short)iVar39;
                  if (bVar19 == 0) {
                    uVar53 = 1;
LAB_000c4e92:
                    iVar40 = DAT_000c5b38;
                    iVar39 = DAT_000c5b34 + 0xc4e9c;
                    if (*(char *)(iVar39 + (uVar53 + 3) * 4) != '\x7f') {
                      iVar8 = uVar53 + 4;
                      uVar53 = uVar53 + 1;
                      *(undefined1 *)(iVar39 + iVar8 * 4) = 0x7f;
                      local_b0 = *(int *)((int)&DAT_000c5b78 + iVar40 + 2) + local_b0;
                      uVar11 = SignedSaturate(local_b0,0xd);
                      SignedDoesSaturate(local_b0,0xd);
                      *(short *)(iVar39 + iVar8 * 4 + 2) = (short)uVar11;
                    }
                  }
                  else {
                    uVar49 = 0xfffef14c;
                    iVar43 = DAT_000c4cf4 + 0xc4aa2;
                    iVar38 = DAT_000c4cf8 + 0xc4aac;
                    iVar61 = DAT_000c4cfc + 0xc4ab4;
                    iVar39 = DAT_000c4d00 + 0xc4ac0;
                    iVar8 = DAT_000c4d04 + 0xc4acc;
                    iVar9 = DAT_000c4d08 + 0xc4ada;
                    iVar40 = DAT_000c4d0c + 0xc4ae0;
                    uVar53 = 1;
                    iVar50 = DAT_000c4d10 + 0xc4aee;
                    local_a4 = iVar44 + 0xc3dce;
                    local_b4 = 0x10eb4;
                    local_ac = iVar26;
                    do {
                      uVar13 = (uint)*(byte *)(local_a4 + -8);
                      bVar24 = *(byte *)(local_ac + 8);
                      iVar15 = *(int *)(local_ac + 4);
                      uVar46 = (uint)*(byte *)(iVar33 + uVar13 * 0x12);
                      iVar54 = iVar33 + uVar13 * 0x12;
                      iVar57 = iVar54 + 2;
                      if (uVar46 != 0) {
                        iVar47 = *(int *)(local_a4 + -4) * 0x7f;
                        uVar3 = (ushort)bVar24;
                        if (iVar27 == 0) {
                          uVar4 = (ushort)bVar24;
                          if (uVar13 == 0) {
                            uVar13 = (uVar46 * 4 - 4 & 0xf) >> 2;
                            iVar15 = 0;
                            if (uVar13 != 0) {
                              if (uVar53 < 0x80) {
                                uVar16 = (int)*(short *)(iVar54 + 4) * (int)(short)uVar3 + local_b0;
                                if ((int)uVar16 < -0x10eb4) {
                                  uVar16 = uVar49;
                                }
                                if (0x10eb4 < (int)uVar16) {
                                  uVar16 = local_b4;
                                }
                                uVar48 = uVar16 + uVar25;
                                if ((int)(uVar16 + uVar25) < -0x2000) {
                                  uVar48 = 0xffffe000;
                                }
                                if (0x1ffe < (int)uVar48) {
                                  uVar48 = 0x1fff;
                                }
                                if ((*(char *)(iVar8 + (uVar53 + 3) * 4) != '\0') ||
                                   ((uVar48 & 0xffff) !=
                                    (uint)*(ushort *)(iVar8 + (uVar53 + 3) * 4 + 2))) {
                                  iVar15 = uVar53 + 4;
                                  uVar53 = uVar53 + 1;
                                  *(undefined1 *)(iVar43 + iVar15 * 4) = 0;
                                  *(short *)(iVar43 + iVar15 * 4 + 2) = (short)uVar48;
                                }
                              }
                              iVar15 = 4;
                              uVar25 = 0;
                              if (uVar13 != 1) {
                                if (uVar13 != 2) {
                                  if (uVar53 < 0x80) {
                                    uVar25 = (int)*(short *)(iVar54 + 8) * (int)(short)uVar3 +
                                             local_b0;
                                    if ((int)uVar25 < -0x10eb4) {
                                      uVar25 = uVar49;
                                    }
                                    if (0x10eb3 < (int)uVar25) {
                                      uVar25 = local_b4;
                                    }
                                    if ((int)uVar25 < -0x2000) {
                                      uVar25 = 0xffffe000;
                                    }
                                    if (0x1ffe < (int)uVar25) {
                                      uVar25 = 0x1fff;
                                    }
                                    if ((*(char *)(iVar8 + (uVar53 + 3) * 4) != '\0') ||
                                       ((uVar25 & 0xffff) !=
                                        (uint)*(ushort *)(iVar8 + (uVar53 + 3) * 4 + 2))) {
                                      iVar15 = uVar53 + 4;
                                      uVar53 = uVar53 + 1;
                                      *(undefined1 *)(iVar43 + iVar15 * 4) = 0;
                                      *(short *)(iVar43 + iVar15 * 4 + 2) = (short)uVar25;
                                    }
                                  }
                                  iVar15 = 8;
                                }
                                if (uVar53 < 0x80) {
                                  uVar25 = (int)*(short *)(iVar57 + iVar15 + 2) * (int)(short)uVar3
                                           + local_b0;
                                  if ((int)uVar25 < -0x10eb4) {
                                    uVar25 = uVar49;
                                  }
                                  if (0x10eb3 < (int)uVar25) {
                                    uVar25 = local_b4;
                                  }
                                  if ((int)uVar25 < -0x2000) {
                                    uVar25 = 0xffffe000;
                                  }
                                  if (0x1ffe < (int)uVar25) {
                                    uVar25 = 0x1fff;
                                  }
                                  if ((*(char *)(iVar8 + (uVar53 + 3) * 4) != '\0') ||
                                     ((uVar25 & 0xffff) !=
                                      (uint)*(ushort *)(iVar8 + (uVar53 + 3) * 4 + 2))) {
                                    iVar54 = uVar53 + 4;
                                    uVar53 = uVar53 + 1;
                                    *(undefined1 *)(iVar43 + iVar54 * 4) = 0;
                                    *(short *)(iVar43 + iVar54 * 4 + 2) = (short)uVar25;
                                  }
                                }
                                iVar15 = iVar15 + 4;
                                uVar25 = 0;
                              }
                            }
                            while( true ) {
                              if (uVar53 < 0x80) {
                                uVar13 = (int)*(short *)(iVar57 + iVar15 + 2) * (int)(short)uVar3 +
                                         local_b0;
                                if ((int)uVar13 < -0x10eb4) {
                                  uVar13 = uVar49;
                                }
                                if (0x10eb4 < (int)uVar13) {
                                  uVar13 = local_b4;
                                }
                                uVar16 = uVar25 + uVar13;
                                if ((int)(uVar25 + uVar13) < -0x2000) {
                                  uVar16 = 0xffffe000;
                                }
                                if (0x1ffe < (int)uVar16) {
                                  uVar16 = 0x1fff;
                                }
                                if ((*(char *)(iVar8 + (uVar53 + 3) * 4) != '\0') ||
                                   ((uVar16 & 0xffff) !=
                                    (uint)*(ushort *)(iVar8 + (uVar53 + 3) * 4 + 2))) {
                                  iVar54 = uVar53 + 4;
                                  uVar53 = uVar53 + 1;
                                  *(undefined1 *)(iVar43 + iVar54 * 4) = 0;
                                  *(short *)(iVar43 + iVar54 * 4 + 2) = (short)uVar16;
                                }
                              }
                              iVar54 = iVar15 + 4;
                              if (iVar54 == uVar46 * 4) break;
                              if (uVar53 < 0x80) {
                                uVar25 = (int)*(short *)(iVar57 + iVar54 + 2) * (int)(short)uVar3 +
                                         local_b0;
                                if ((int)uVar25 < -0x10eb4) {
                                  uVar25 = uVar49;
                                }
                                if (0x10eb3 < (int)uVar25) {
                                  uVar25 = local_b4;
                                }
                                if ((int)uVar25 < -0x2000) {
                                  uVar25 = 0xffffe000;
                                }
                                if (0x1ffe < (int)uVar25) {
                                  uVar25 = 0x1fff;
                                }
                                if ((*(char *)(iVar8 + (uVar53 + 3) * 4) != '\0') ||
                                   ((uVar25 & 0xffff) !=
                                    (uint)*(ushort *)(iVar8 + (uVar53 + 3) * 4 + 2))) {
                                  iVar47 = uVar53 + 4;
                                  uVar53 = uVar53 + 1;
                                  *(undefined1 *)(iVar43 + iVar47 * 4) = 0;
                                  *(short *)(iVar43 + iVar47 * 4 + 2) = (short)uVar25;
                                }
                              }
                              if (uVar53 < 0x80) {
                                uVar25 = (int)*(short *)(iVar57 + iVar54 + 6) * (int)(short)uVar3 +
                                         local_b0;
                                if ((int)uVar25 < -0x10eb4) {
                                  uVar25 = uVar49;
                                }
                                if (0x10eb3 < (int)uVar25) {
                                  uVar25 = local_b4;
                                }
                                if ((int)uVar25 < -0x2000) {
                                  uVar25 = 0xffffe000;
                                }
                                if (0x1ffe < (int)uVar25) {
                                  uVar25 = 0x1fff;
                                }
                                if ((*(char *)(iVar8 + (uVar53 + 3) * 4) != '\0') ||
                                   ((uVar25 & 0xffff) !=
                                    (uint)*(ushort *)(iVar8 + (uVar53 + 3) * 4 + 2))) {
                                  iVar47 = uVar53 + 4;
                                  uVar53 = uVar53 + 1;
                                  *(undefined1 *)(iVar43 + iVar47 * 4) = 0;
                                  *(short *)(iVar43 + iVar47 * 4 + 2) = (short)uVar25;
                                }
                              }
                              if (uVar53 < 0x80) {
                                uVar25 = (int)*(short *)(iVar57 + iVar54 + 10) * (int)(short)uVar4 +
                                         local_b0;
                                if ((int)uVar25 < -0x10eb4) {
                                  uVar25 = uVar49;
                                }
                                if (0x10eb3 < (int)uVar25) {
                                  uVar25 = local_b4;
                                }
                                if ((int)uVar25 < -0x2000) {
                                  uVar25 = 0xffffe000;
                                }
                                if (0x1ffe < (int)uVar25) {
                                  uVar25 = 0x1fff;
                                }
                                if ((*(char *)(iVar8 + (uVar53 + 3) * 4) != '\0') ||
                                   ((uVar25 & 0xffff) !=
                                    (uint)*(ushort *)(iVar8 + (uVar53 + 3) * 4 + 2))) {
                                  iVar54 = uVar53 + 4;
                                  uVar53 = uVar53 + 1;
                                  *(undefined1 *)(iVar43 + iVar54 * 4) = 0;
                                  *(short *)(iVar43 + iVar54 * 4 + 2) = (short)uVar25;
                                }
                              }
                              iVar15 = iVar15 + 0x10;
                              uVar25 = 0;
                            }
                            uVar25 = 0;
                          }
                          else {
                            iVar15 = uVar46 * 4;
                            uVar13 = (iVar15 - 4U & 0xf) >> 2;
                            if (uVar53 < 0x80) {
                              uVar16 = (int)*(short *)(iVar54 + 4) * (int)(short)uVar4 + local_b0;
                              if ((int)uVar16 < -0x10eb4) {
                                uVar16 = uVar49;
                              }
                              if (0x10eb4 < (int)uVar16) {
                                uVar16 = local_b4;
                              }
                              uVar48 = uVar16 + uVar25;
                              if ((int)(uVar16 + uVar25) < -0x2000) {
                                uVar48 = 0xffffe000;
                              }
                              if (0x1ffe < (int)uVar48) {
                                uVar48 = 0x1fff;
                              }
                              if ((*(char *)(iVar38 + (uVar53 + 3) * 4) != '\0') ||
                                 ((uVar48 & 0xffff) !=
                                  (uint)*(ushort *)(iVar38 + (uVar53 + 3) * 4 + 2))) {
                                iVar47 = uVar53 + 4;
                                uVar53 = uVar53 + 1;
                                *(undefined1 *)(iVar9 + iVar47 * 4) = 0;
                                *(short *)(iVar9 + iVar47 * 4 + 2) = (short)uVar48;
                              }
                            }
                            iVar47 = 4;
                            if (uVar46 != 1) {
                              if (uVar13 != 0) {
                                if (uVar13 != 1) {
                                  if (uVar13 != 2) {
                                    if (uVar53 < 0x80) {
                                      uVar13 = (int)*(short *)(iVar54 + 8) * (int)(short)uVar4 +
                                               local_b0;
                                      if ((int)uVar13 < -0x10eb4) {
                                        uVar13 = uVar49;
                                      }
                                      if (0x10eb4 < (int)uVar13) {
                                        uVar13 = local_b4;
                                      }
                                      uVar16 = uVar13 + uVar25;
                                      if ((int)(uVar13 + uVar25) < -0x2000) {
                                        uVar16 = 0xffffe000;
                                      }
                                      if (0x1ffe < (int)uVar16) {
                                        uVar16 = 0x1fff;
                                      }
                                      if ((*(char *)(iVar38 + (uVar53 + 3) * 4) != '\0') ||
                                         ((uVar16 & 0xffff) !=
                                          (uint)*(ushort *)(iVar38 + (uVar53 + 3) * 4 + 2))) {
                                        iVar54 = uVar53 + 4;
                                        uVar53 = uVar53 + 1;
                                        *(undefined1 *)(iVar9 + iVar54 * 4) = 0;
                                        *(short *)(iVar9 + iVar54 * 4 + 2) = (short)uVar16;
                                      }
                                    }
                                    iVar47 = 8;
                                  }
                                  if (uVar53 < 0x80) {
                                    uVar13 = (int)*(short *)(iVar57 + iVar47 + 2) *
                                             (int)(short)uVar4 + local_b0;
                                    if ((int)uVar13 < -0x10eb4) {
                                      uVar13 = uVar49;
                                    }
                                    if (0x10eb4 < (int)uVar13) {
                                      uVar13 = local_b4;
                                    }
                                    uVar16 = uVar13 + uVar25;
                                    if ((int)(uVar13 + uVar25) < -0x2000) {
                                      uVar16 = 0xffffe000;
                                    }
                                    if (0x1ffe < (int)uVar16) {
                                      uVar16 = 0x1fff;
                                    }
                                    if ((*(char *)(iVar38 + (uVar53 + 3) * 4) != '\0') ||
                                       ((uVar16 & 0xffff) !=
                                        (uint)*(ushort *)(iVar38 + (uVar53 + 3) * 4 + 2))) {
                                      iVar54 = uVar53 + 4;
                                      uVar53 = uVar53 + 1;
                                      *(undefined1 *)(iVar9 + iVar54 * 4) = 0;
                                      *(short *)(iVar9 + iVar54 * 4 + 2) = (short)uVar16;
                                    }
                                  }
                                  iVar47 = iVar47 + 4;
                                }
                                if (uVar53 < 0x80) {
                                  uVar13 = (int)*(short *)(iVar57 + iVar47 + 2) * (int)(short)uVar3
                                           + local_b0;
                                  if ((int)uVar13 < -0x10eb4) {
                                    uVar13 = uVar49;
                                  }
                                  if (0x10eb4 < (int)uVar13) {
                                    uVar13 = local_b4;
                                  }
                                  uVar16 = uVar13 + uVar25;
                                  if ((int)(uVar13 + uVar25) < -0x2000) {
                                    uVar16 = 0xffffe000;
                                  }
                                  if (0x1ffe < (int)uVar16) {
                                    uVar16 = 0x1fff;
                                  }
                                  if ((*(char *)(iVar38 + (uVar53 + 3) * 4) != '\0') ||
                                     ((uVar16 & 0xffff) !=
                                      (uint)*(ushort *)(iVar38 + (uVar53 + 3) * 4 + 2))) {
                                    iVar54 = uVar53 + 4;
                                    uVar53 = uVar53 + 1;
                                    *(undefined1 *)(iVar9 + iVar54 * 4) = 0;
                                    *(short *)(iVar9 + iVar54 * 4 + 2) = (short)uVar16;
                                  }
                                }
                                iVar47 = iVar47 + 4;
                                if (iVar47 == iVar15) goto LAB_000c4e38;
                              }
                              do {
                                if (uVar53 < 0x80) {
                                  uVar13 = (int)*(short *)(iVar57 + iVar47 + 2) * (int)(short)uVar3
                                           + local_b0;
                                  if ((int)uVar13 < -0x10eb4) {
                                    uVar13 = uVar49;
                                  }
                                  if (0x10eb4 < (int)uVar13) {
                                    uVar13 = local_b4;
                                  }
                                  uVar16 = uVar13 + uVar25;
                                  if ((int)(uVar13 + uVar25) < -0x2000) {
                                    uVar16 = 0xffffe000;
                                  }
                                  if (0x1ffe < (int)uVar16) {
                                    uVar16 = 0x1fff;
                                  }
                                  if ((*(char *)(iVar38 + (uVar53 + 3) * 4) != '\0') ||
                                     ((uVar16 & 0xffff) !=
                                      (uint)*(ushort *)(iVar38 + (uVar53 + 3) * 4 + 2))) {
                                    iVar54 = uVar53 + 4;
                                    uVar53 = uVar53 + 1;
                                    *(undefined1 *)(iVar9 + iVar54 * 4) = 0;
                                    *(short *)(iVar9 + iVar54 * 4 + 2) = (short)uVar16;
                                  }
                                }
                                iVar54 = iVar47 + 4;
                                if (uVar53 < 0x80) {
                                  uVar13 = (int)*(short *)(iVar57 + iVar54 + 2) * (int)(short)uVar3
                                           + local_b0;
                                  if ((int)uVar13 < -0x10eb4) {
                                    uVar13 = uVar49;
                                  }
                                  if (0x10eb4 < (int)uVar13) {
                                    uVar13 = local_b4;
                                  }
                                  uVar16 = uVar13 + uVar25;
                                  if ((int)(uVar13 + uVar25) < -0x2000) {
                                    uVar16 = 0xffffe000;
                                  }
                                  if (0x1ffe < (int)uVar16) {
                                    uVar16 = 0x1fff;
                                  }
                                  if ((*(char *)(iVar38 + (uVar53 + 3) * 4) != '\0') ||
                                     ((uVar16 & 0xffff) !=
                                      (uint)*(ushort *)(iVar38 + (uVar53 + 3) * 4 + 2))) {
                                    iVar51 = uVar53 + 4;
                                    uVar53 = uVar53 + 1;
                                    *(undefined1 *)(iVar9 + iVar51 * 4) = 0;
                                    *(short *)(iVar9 + iVar51 * 4 + 2) = (short)uVar16;
                                  }
                                }
                                if (uVar53 < 0x80) {
                                  uVar13 = (int)*(short *)(iVar57 + iVar54 + 6) * (int)(short)uVar3
                                           + local_b0;
                                  if ((int)uVar13 < -0x10eb4) {
                                    uVar13 = uVar49;
                                  }
                                  if (0x10eb4 < (int)uVar13) {
                                    uVar13 = local_b4;
                                  }
                                  uVar16 = uVar13 + uVar25;
                                  if ((int)(uVar13 + uVar25) < -0x2000) {
                                    uVar16 = 0xffffe000;
                                  }
                                  if (0x1ffe < (int)uVar16) {
                                    uVar16 = 0x1fff;
                                  }
                                  if ((*(char *)(iVar38 + (uVar53 + 3) * 4) != '\0') ||
                                     ((uVar16 & 0xffff) !=
                                      (uint)*(ushort *)(iVar38 + (uVar53 + 3) * 4 + 2))) {
                                    iVar51 = uVar53 + 4;
                                    uVar53 = uVar53 + 1;
                                    *(undefined1 *)(iVar9 + iVar51 * 4) = 0;
                                    *(short *)(iVar9 + iVar51 * 4 + 2) = (short)uVar16;
                                  }
                                }
                                if (uVar53 < 0x80) {
                                  uVar13 = (int)*(short *)(iVar57 + iVar54 + 10) * (int)(short)uVar3
                                           + local_b0;
                                  if ((int)uVar13 < -0x10eb4) {
                                    uVar13 = uVar49;
                                  }
                                  if (0x10eb4 < (int)uVar13) {
                                    uVar13 = local_b4;
                                  }
                                  uVar16 = uVar13 + uVar25;
                                  if ((int)(uVar13 + uVar25) < -0x2000) {
                                    uVar16 = 0xffffe000;
                                  }
                                  if (0x1ffe < (int)uVar16) {
                                    uVar16 = 0x1fff;
                                  }
                                  if ((*(char *)(iVar38 + (uVar53 + 3) * 4) != '\0') ||
                                     ((uVar16 & 0xffff) !=
                                      (uint)*(ushort *)(iVar38 + (uVar53 + 3) * 4 + 2))) {
                                    iVar54 = uVar53 + 4;
                                    uVar53 = uVar53 + 1;
                                    *(undefined1 *)(iVar9 + iVar54 * 4) = 0;
                                    *(short *)(iVar9 + iVar54 * 4 + 2) = (short)uVar16;
                                  }
                                }
                                iVar47 = iVar47 + 0x10;
                              } while (iVar47 != iVar15);
                            }
                          }
                        }
                        else if (uVar13 == 0) {
                          iVar51 = 0;
                          if (-1 < (int)(uVar46 << 0x1f)) {
                            uVar13 = __udivsi3(iVar15 * (uint)*(byte *)(iVar54 + 2) + iVar47,iVar27)
                            ;
                            if (0x7e < uVar13) {
                              uVar13 = 0x7f;
                            }
                            if (uVar53 < 0x80) {
                              uVar16 = (int)*(short *)(iVar54 + 4) * (int)(short)uVar3 + local_b0;
                              if ((int)uVar16 < -0x10eb4) {
                                uVar16 = uVar49;
                              }
                              if (0x10eb4 < (int)uVar16) {
                                uVar16 = local_b4;
                              }
                              uVar48 = uVar16 + uVar25;
                              if ((int)(uVar16 + uVar25) < -0x2000) {
                                uVar48 = 0xffffe000;
                              }
                              if (0x1ffe < (int)uVar48) {
                                uVar48 = 0x1fff;
                              }
                              if (((uint)*(byte *)(iVar39 + (uVar53 + 3) * 4) != (uVar13 & 0xff)) ||
                                 ((uVar48 & 0xffff) !=
                                  (uint)*(ushort *)(iVar39 + (uVar53 + 3) * 4 + 2))) {
                                iVar54 = uVar53 + 4;
                                uVar53 = uVar53 + 1;
                                *(char *)(iVar40 + iVar54 * 4) = (char)uVar13;
                                *(short *)(iVar40 + iVar54 * 4 + 2) = (short)uVar48;
                              }
                            }
                            iVar51 = 4;
                            uVar25 = 0;
                          }
                          while( true ) {
                            uVar13 = __udivsi3(iVar15 * (uint)*(byte *)(iVar57 + iVar51) + iVar47,
                                               iVar27);
                            if (0x7e < uVar13) {
                              uVar13 = 0x7f;
                            }
                            if (uVar53 < 0x80) {
                              uVar16 = (int)*(short *)(iVar57 + iVar51 + 2) *
                                       (int)(short)(ushort)bVar24 + local_b0;
                              if ((int)uVar16 < -0x10eb4) {
                                uVar16 = uVar49;
                              }
                              if (0x10eb4 < (int)uVar16) {
                                uVar16 = local_b4;
                              }
                              uVar48 = uVar25 + uVar16;
                              if ((int)(uVar25 + uVar16) < -0x2000) {
                                uVar48 = 0xffffe000;
                              }
                              if (0x1ffe < (int)uVar48) {
                                uVar48 = 0x1fff;
                              }
                              if (((uint)*(byte *)(iVar39 + (uVar53 + 3) * 4) != (uVar13 & 0xff)) ||
                                 ((uVar48 & 0xffff) !=
                                  (uint)*(ushort *)(iVar39 + (uVar53 + 3) * 4 + 2))) {
                                iVar54 = uVar53 + 4;
                                uVar53 = uVar53 + 1;
                                *(char *)(iVar40 + iVar54 * 4) = (char)uVar13;
                                *(short *)(iVar40 + iVar54 * 4 + 2) = (short)uVar48;
                              }
                            }
                            iVar54 = iVar51 + 4;
                            if (iVar54 == uVar46 << 2) break;
                            uVar25 = __udivsi3(iVar15 * (uint)*(byte *)(iVar57 + iVar54) + iVar47,
                                               iVar27);
                            if (0x7e < uVar25) {
                              uVar25 = 0x7f;
                            }
                            if (uVar53 < 0x80) {
                              uVar13 = (int)*(short *)(iVar57 + iVar54 + 2) *
                                       (int)(short)(ushort)bVar24 + local_b0;
                              if ((int)uVar13 < -0x10eb4) {
                                uVar13 = uVar49;
                              }
                              if (0x10eb3 < (int)uVar13) {
                                uVar13 = local_b4;
                              }
                              if ((int)uVar13 < -0x2000) {
                                uVar13 = 0xffffe000;
                              }
                              if (0x1ffe < (int)uVar13) {
                                uVar13 = 0x1fff;
                              }
                              if (((uint)*(byte *)(iVar39 + (uVar53 + 3) * 4) != (uVar25 & 0xff)) ||
                                 ((uVar13 & 0xffff) !=
                                  (uint)*(ushort *)(iVar39 + (uVar53 + 3) * 4 + 2))) {
                                iVar54 = uVar53 + 4;
                                uVar53 = uVar53 + 1;
                                *(char *)(iVar40 + iVar54 * 4) = (char)uVar25;
                                *(short *)(iVar40 + iVar54 * 4 + 2) = (short)uVar13;
                              }
                            }
                            iVar51 = iVar51 + 8;
                            uVar25 = 0;
                          }
                          uVar25 = 0;
                        }
                        else {
                          uVar13 = __udivsi3(iVar15 * (uint)*(byte *)(iVar54 + 2) + iVar47);
                          if (0x7e < uVar13) {
                            uVar13 = 0x7f;
                          }
                          if (uVar53 < 0x80) {
                            uVar16 = (int)*(short *)(iVar54 + 4) * (int)(short)uVar3 + local_b0;
                            if ((int)uVar16 < -0x10eb4) {
                              uVar16 = uVar49;
                            }
                            if (0x10eb4 < (int)uVar16) {
                              uVar16 = local_b4;
                            }
                            uVar48 = uVar16 + uVar25;
                            if ((int)(uVar16 + uVar25) < -0x2000) {
                              uVar48 = 0xffffe000;
                            }
                            if (0x1ffe < (int)uVar48) {
                              uVar48 = 0x1fff;
                            }
                            if (((uint)*(byte *)(iVar61 + (uVar53 + 3) * 4) != (uVar13 & 0xff)) ||
                               ((uVar48 & 0xffff) !=
                                (uint)*(ushort *)(iVar61 + (uVar53 + 3) * 4 + 2))) {
                              iVar51 = uVar53 + 4;
                              uVar53 = uVar53 + 1;
                              *(char *)(iVar50 + iVar51 * 4) = (char)uVar13;
                              *(short *)(iVar50 + iVar51 * 4 + 2) = (short)uVar48;
                            }
                          }
                          iVar51 = 4;
                          if (uVar46 != 1) {
                            if ((uVar46 * 4 - 4 & 7) != 0) {
                              uVar13 = __udivsi3(iVar15 * (uint)*(byte *)(iVar54 + 6) + iVar47,
                                                 iVar27);
                              if (0x7e < uVar13) {
                                uVar13 = 0x7f;
                              }
                              if (uVar53 < 0x80) {
                                uVar16 = (int)*(short *)(iVar54 + 8) * (int)(short)uVar3 + local_b0;
                                if ((int)uVar16 < -0x10eb4) {
                                  uVar16 = uVar49;
                                }
                                if (0x10eb4 < (int)uVar16) {
                                  uVar16 = local_b4;
                                }
                                uVar48 = uVar25 + uVar16;
                                if ((int)(uVar25 + uVar16) < -0x2000) {
                                  uVar48 = 0xffffe000;
                                }
                                if (0x1ffe < (int)uVar48) {
                                  uVar48 = 0x1fff;
                                }
                                if (((uint)*(byte *)(iVar61 + (uVar53 + 3) * 4) != (uVar13 & 0xff))
                                   || ((uVar48 & 0xffff) !=
                                       (uint)*(ushort *)(iVar61 + (uVar53 + 3) * 4 + 2))) {
                                  iVar54 = uVar53 + 4;
                                  uVar53 = uVar53 + 1;
                                  *(char *)(iVar50 + iVar54 * 4) = (char)uVar13;
                                  *(short *)(iVar50 + iVar54 * 4 + 2) = (short)uVar48;
                                }
                              }
                              iVar51 = 8;
                              if (uVar46 == 2) goto LAB_000c4e38;
                            }
                            do {
                              uVar13 = __udivsi3(iVar15 * (uint)*(byte *)(iVar57 + iVar51) + iVar47,
                                                 iVar27);
                              if (0x7e < uVar13) {
                                uVar13 = 0x7f;
                              }
                              if (uVar53 < 0x80) {
                                uVar16 = (int)*(short *)(iVar57 + iVar51 + 2) *
                                         (int)(short)(ushort)bVar24 + local_b0;
                                if ((int)uVar16 < -0x10eb4) {
                                  uVar16 = uVar49;
                                }
                                if (0x10eb4 < (int)uVar16) {
                                  uVar16 = local_b4;
                                }
                                uVar48 = uVar25 + uVar16;
                                if ((int)(uVar25 + uVar16) < -0x2000) {
                                  uVar48 = 0xffffe000;
                                }
                                if (0x1ffe < (int)uVar48) {
                                  uVar48 = 0x1fff;
                                }
                                if (((uint)*(byte *)(iVar61 + (uVar53 + 3) * 4) != (uVar13 & 0xff))
                                   || ((uVar48 & 0xffff) !=
                                       (uint)*(ushort *)(iVar61 + (uVar53 + 3) * 4 + 2))) {
                                  iVar54 = uVar53 + 4;
                                  uVar53 = uVar53 + 1;
                                  *(char *)(iVar50 + iVar54 * 4) = (char)uVar13;
                                  *(short *)(iVar50 + iVar54 * 4 + 2) = (short)uVar48;
                                }
                              }
                              uVar13 = __udivsi3(iVar15 * (uint)*(byte *)(iVar57 + iVar51 + 4) +
                                                 iVar47,iVar27);
                              if (0x7e < uVar13) {
                                uVar13 = 0x7f;
                              }
                              if (uVar53 < 0x80) {
                                uVar16 = (int)*(short *)(iVar57 + iVar51 + 4 + 2) *
                                         (int)(short)(ushort)bVar24 + local_b0;
                                if ((int)uVar16 < -0x10eb4) {
                                  uVar16 = uVar49;
                                }
                                if (0x10eb4 < (int)uVar16) {
                                  uVar16 = local_b4;
                                }
                                uVar48 = uVar25 + uVar16;
                                if ((int)(uVar25 + uVar16) < -0x2000) {
                                  uVar48 = 0xffffe000;
                                }
                                if (0x1ffe < (int)uVar48) {
                                  uVar48 = 0x1fff;
                                }
                                if (((uint)*(byte *)(iVar61 + (uVar53 + 3) * 4) != (uVar13 & 0xff))
                                   || ((uVar48 & 0xffff) !=
                                       (uint)*(ushort *)(iVar61 + (uVar53 + 3) * 4 + 2))) {
                                  iVar54 = uVar53 + 4;
                                  uVar53 = uVar53 + 1;
                                  *(char *)(iVar50 + iVar54 * 4) = (char)uVar13;
                                  *(short *)(iVar50 + iVar54 * 4 + 2) = (short)uVar48;
                                }
                              }
                              iVar51 = iVar51 + 8;
                            } while (iVar51 != uVar46 * 4);
                          }
                        }
LAB_000c4e38:
                        uVar46 = (int)*(short *)(iVar57 + uVar46 * 4 + -2) *
                                 (int)(short)(ushort)bVar24;
                        if ((int)uVar46 < -0x10eb4) {
                          uVar46 = uVar49;
                        }
                        if (0x10eb4 < (int)uVar46) {
                          uVar46 = local_b4;
                        }
                        uVar13 = uVar25 + uVar46;
                        if ((int)(uVar25 + uVar46) < -0x10eb4) {
                          uVar13 = uVar49;
                        }
                        uVar25 = uVar13;
                        if (0x10eb3 < (int)uVar13) {
                          uVar25 = local_b4;
                        }
                      }
                      local_ac = local_ac + 0x10;
                      local_a4 = local_a4 + 0x10;
                    } while (local_ac != iVar26 + (uint)bVar19 * 0x10);
                    *(uint *)((int)&DAT_000c5b54 + DAT_000c5b30 + 2) = uVar25;
                    if (uVar53 < 0x7f) goto LAB_000c4e92;
                  }
                  iVar40 = DAT_000c5b3c;
                  local_60 = uVar53 & 0xff;
                  bVar19 = *(byte *)(iVar42 + 0xc45cc);
                  iVar39 = *(short *)(DAT_000c5b3c + 0xc5ba2) + 0x60;
                  *(char *)(iVar42 + 0xc3942) = (char)uVar53;
                  uVar11 = UnsignedSaturate(iVar39,7);
                  UnsignedDoesSaturate(iVar39,7);
                  *(undefined1 *)(iVar42 + 0xc3b46) = 0;
                  *(short *)(iVar42 + 0xc3b48) = (short)uVar11;
                  if (bVar19 == 0) {
                    uVar25 = 1;
LAB_000c51ce:
                    if (*(char *)(DAT_000c5b64 + 0xc51d6 + uVar25 * 4 + 0x20e) != '\x7f') {
                      iVar40 = uVar25 + 0x84;
                      bVar10 = *(byte *)(DAT_000c5b64 + 0xc51df);
                      uVar25 = uVar25 + 1;
                      local_44 = (uint)*(byte *)(DAT_000c5b64 + 0xc51e1);
                      iVar39 = DAT_000c5b64 + 0xc51d6 + iVar40 * 4;
                      iVar40 = *(short *)(DAT_000c5b68 + 0xc5ec0) + 0x60;
                      uVar11 = UnsignedSaturate(iVar40,7);
                      UnsignedDoesSaturate(iVar40,7);
                      *(undefined1 *)(iVar39 + 2) = 0x7f;
                      *(short *)(iVar39 + 4) = (short)uVar11;
                    }
                  }
                  else {
                    sVar41 = *(short *)(iVar40 + 0xc5ba2);
                    iVar38 = DAT_000c5b40 + 0xc4f12;
                    iVar9 = DAT_000c5b44 + 0xc4f18;
                    iVar15 = DAT_000c5b48 + 0xc4f1e;
                    iVar8 = DAT_000c5b4c + 0xc4f24;
                    iVar61 = DAT_000c5b50 + 0xc4f2a;
                    iVar43 = DAT_000c5b54 + 0xc4f30;
                    iVar50 = -99;
                    uVar25 = 1;
                    iVar39 = DAT_000c5b58 + 0xc4f48;
                    iVar57 = DAT_000c5b5c + 0xc4f4a;
                    iVar40 = iVar36;
                    do {
                      uVar49 = (uint)*(byte *)(iVar40 + 0x808);
                      iVar51 = *(int *)(iVar40 + 0x810);
                      uVar53 = (uint)*(byte *)(iVar22 + uVar49 * 0x12);
                      bVar24 = *(byte *)(iVar40 + 0x814);
                      iVar54 = iVar22 + uVar49 * 0x12;
                      iVar47 = iVar54 + 2;
                      if (uVar53 != 0) {
                        iVar17 = *(int *)(iVar40 + 0x80c) * 0x7f;
                        uVar3 = (ushort)bVar24;
                        if (iVar27 == 0) {
                          if (uVar49 == 0) {
                            if ((int)(uVar53 << 0x1f) < 0) {
                              iVar54 = 0;
                            }
                            else {
                              iVar54 = (int)*(short *)(iVar54 + 4) * (int)(short)uVar3;
                              if (iVar54 < -99) {
                                iVar54 = iVar50;
                              }
                              if (0x62 < iVar54) {
                                iVar54 = 99;
                              }
                              if (uVar25 < 0x80) {
                                iVar51 = iVar15 + (uVar25 + 0x83) * 4;
                                iVar17 = sVar41 + iVar54 + 0x60;
                                iVar54 = UnsignedSaturate(iVar17,7);
                                UnsignedDoesSaturate(iVar17,7);
                                if ((*(char *)(iVar51 + 2) != '\0') ||
                                   (*(short *)(iVar51 + 4) != iVar54)) {
                                  iVar51 = uVar25 + 0x84;
                                  uVar25 = uVar25 + 1;
                                  iVar51 = iVar38 + iVar51 * 4;
                                  *(undefined1 *)(iVar51 + 2) = 0;
                                  *(short *)(iVar51 + 4) = (short)iVar54;
                                }
                              }
                              iVar54 = 4;
                              sVar41 = 0;
                            }
                            while( true ) {
                              iVar51 = (int)*(short *)(iVar47 + iVar54 + 2) * (int)(short)uVar3;
                              if (iVar51 < -99) {
                                iVar51 = iVar50;
                              }
                              if (0x62 < iVar51) {
                                iVar51 = 99;
                              }
                              if (uVar25 < 0x80) {
                                iVar17 = sVar41 + iVar51 + 0x60;
                                iVar28 = iVar15 + (uVar25 + 0x83) * 4;
                                iVar51 = UnsignedSaturate(iVar17,7);
                                UnsignedDoesSaturate(iVar17,7);
                                if ((*(char *)(iVar28 + 2) != '\0') ||
                                   (*(short *)(iVar28 + 4) != iVar51)) {
                                  iVar17 = uVar25 + 0x84;
                                  uVar25 = uVar25 + 1;
                                  iVar17 = iVar38 + iVar17 * 4;
                                  *(undefined1 *)(iVar17 + 2) = 0;
                                  *(short *)(iVar17 + 4) = (short)iVar51;
                                }
                              }
                              if (iVar54 + 4 == uVar53 * 4) break;
                              iVar51 = (int)*(short *)(iVar47 + iVar54 + 4 + 2) * (int)(short)uVar3;
                              if (iVar51 < -99) {
                                iVar51 = iVar50;
                              }
                              if (0x62 < iVar51) {
                                iVar51 = 99;
                              }
                              if (uVar25 < 0x80) {
                                iVar17 = UnsignedSaturate(iVar51 + 0x60,7);
                                UnsignedDoesSaturate(iVar51 + 0x60,7);
                                iVar51 = iVar15 + (uVar25 + 0x83) * 4;
                                if ((*(char *)(iVar51 + 2) != '\0') ||
                                   (*(short *)(iVar51 + 4) != iVar17)) {
                                  iVar51 = uVar25 + 0x84;
                                  uVar25 = uVar25 + 1;
                                  iVar51 = iVar38 + iVar51 * 4;
                                  *(undefined1 *)(iVar51 + 2) = 0;
                                  *(short *)(iVar51 + 4) = (short)iVar17;
                                }
                              }
                              iVar54 = iVar54 + 8;
                              sVar41 = 0;
                            }
                            iVar28 = 0;
                          }
                          else {
                            iVar28 = (int)sVar41;
                            iVar51 = (int)*(short *)(iVar54 + 4) * (int)(short)uVar3;
                            if (iVar51 < -99) {
                              iVar51 = iVar50;
                            }
                            if (0x62 < iVar51) {
                              iVar51 = 99;
                            }
                            if (uVar25 < 0x80) {
                              iVar17 = iVar9 + (uVar25 + 0x83) * 4;
                              iVar63 = iVar51 + iVar28 + 0x60;
                              iVar51 = UnsignedSaturate(iVar63,7);
                              UnsignedDoesSaturate(iVar63,7);
                              if ((*(char *)(iVar17 + 2) != '\0') ||
                                 (*(short *)(iVar17 + 4) != iVar51)) {
                                iVar17 = uVar25 + 0x84;
                                uVar25 = uVar25 + 1;
                                iVar17 = iVar8 + iVar17 * 4;
                                *(undefined1 *)(iVar17 + 2) = 0;
                                *(short *)(iVar17 + 4) = (short)iVar51;
                              }
                            }
                            iVar51 = 4;
                            if (uVar53 != 1) {
                              if ((int)((uVar53 * 4 + -4) * 0x20000000) < 0) {
                                iVar54 = (int)*(short *)(iVar54 + 8) * (int)(short)uVar3;
                                if (iVar54 < -99) {
                                  iVar54 = iVar50;
                                }
                                if (0x62 < iVar54) {
                                  iVar54 = 99;
                                }
                                if (uVar25 < 0x80) {
                                  iVar51 = iVar9 + (uVar25 + 0x83) * 4;
                                  iVar17 = iVar54 + iVar28 + 0x60;
                                  iVar54 = UnsignedSaturate(iVar17,7);
                                  UnsignedDoesSaturate(iVar17,7);
                                  if ((*(char *)(iVar51 + 2) != '\0') ||
                                     (*(short *)(iVar51 + 4) != iVar54)) {
                                    iVar51 = uVar25 + 0x84;
                                    uVar25 = uVar25 + 1;
                                    iVar51 = iVar8 + iVar51 * 4;
                                    *(undefined1 *)(iVar51 + 2) = 0;
                                    *(short *)(iVar51 + 4) = (short)iVar54;
                                  }
                                }
                                iVar51 = 8;
                                if (uVar53 == 2) goto LAB_000c5184;
                              }
                              do {
                                iVar17 = iVar9 + (uVar25 + 0x83) * 4;
                                iVar63 = iVar8 + (uVar25 + 0x84) * 4;
                                iVar54 = (int)*(short *)(iVar47 + iVar51 + 2) * (int)(short)uVar3;
                                if (iVar54 < -99) {
                                  iVar54 = iVar50;
                                }
                                if (0x62 < iVar54) {
                                  iVar54 = 99;
                                }
                                iVar54 = iVar54 + iVar28 + 0x60;
                                if (uVar25 < 0x80) {
                                  iVar23 = UnsignedSaturate(iVar54,7);
                                  UnsignedDoesSaturate(iVar54,7);
                                  if ((*(char *)(iVar17 + 2) != '\0') ||
                                     (*(short *)(iVar17 + 4) != iVar23)) {
                                    uVar25 = uVar25 + 1;
                                    *(short *)(iVar63 + 4) = (short)iVar23;
                                    *(undefined1 *)(iVar63 + 2) = 0;
                                  }
                                }
                                iVar17 = iVar9 + (uVar25 + 0x83) * 4;
                                iVar63 = iVar8 + (uVar25 + 0x84) * 4;
                                iVar54 = (int)*(short *)(iVar47 + iVar51 + 6) * (int)(short)uVar3;
                                if (iVar54 < -99) {
                                  iVar54 = iVar50;
                                }
                                if (0x62 < iVar54) {
                                  iVar54 = 99;
                                }
                                iVar54 = iVar54 + iVar28 + 0x60;
                                if (uVar25 < 0x80) {
                                  iVar23 = UnsignedSaturate(iVar54,7);
                                  UnsignedDoesSaturate(iVar54,7);
                                  if ((*(char *)(iVar17 + 2) != '\0') ||
                                     (*(short *)(iVar17 + 4) != iVar23)) {
                                    uVar25 = uVar25 + 1;
                                    *(short *)(iVar63 + 4) = (short)iVar23;
                                    *(undefined1 *)(iVar63 + 2) = 0;
                                  }
                                }
                                iVar51 = iVar51 + 8;
                              } while (iVar51 != uVar53 * 4);
                            }
                          }
                        }
                        else if (uVar49 == 0) {
                          if ((int)(uVar53 << 0x1f) < 0) {
                            iVar54 = 0;
                          }
                          else {
                            uVar49 = __udivsi3(iVar51 * (uint)*(byte *)(iVar54 + 2) + iVar17,iVar27)
                            ;
                            iVar54 = (int)*(short *)(iVar54 + 4) * (int)(short)uVar3;
                            if (iVar54 < -99) {
                              iVar54 = iVar50;
                            }
                            if (0x62 < iVar54) {
                              iVar54 = 99;
                            }
                            if (0x7e < uVar49) {
                              uVar49 = 0x7f;
                            }
                            if (uVar25 < 0x80) {
                              iVar63 = iVar61 + (uVar25 + 0x83) * 4;
                              iVar28 = sVar41 + iVar54 + 0x60;
                              iVar54 = UnsignedSaturate(iVar28,7);
                              UnsignedDoesSaturate(iVar28,7);
                              if ((*(byte *)(iVar63 + 2) != uVar49) ||
                                 (*(short *)(iVar63 + 4) != iVar54)) {
                                iVar28 = uVar25 + 0x84;
                                uVar25 = uVar25 + 1;
                                iVar28 = iVar43 + iVar28 * 4;
                                *(char *)(iVar28 + 2) = (char)uVar49;
                                *(short *)(iVar28 + 4) = (short)iVar54;
                              }
                            }
                            iVar54 = 4;
                            sVar41 = 0;
                          }
                          while( true ) {
                            uVar49 = __udivsi3(iVar51 * (uint)*(byte *)(iVar47 + iVar54) + iVar17,
                                               iVar27);
                            iVar28 = (int)*(short *)(iVar47 + iVar54 + 2) * (int)(short)uVar3;
                            if (iVar28 < -99) {
                              iVar28 = iVar50;
                            }
                            if (0x62 < iVar28) {
                              iVar28 = 99;
                            }
                            if (0x7e < uVar49) {
                              uVar49 = 0x7f;
                            }
                            if (uVar25 < 0x80) {
                              iVar63 = iVar61 + (uVar25 + 0x83) * 4;
                              iVar23 = sVar41 + iVar28 + 0x60;
                              iVar28 = UnsignedSaturate(iVar23,7);
                              UnsignedDoesSaturate(iVar23,7);
                              if ((*(byte *)(iVar63 + 2) != uVar49) ||
                                 (*(short *)(iVar63 + 4) != iVar28)) {
                                iVar63 = uVar25 + 0x84;
                                uVar25 = uVar25 + 1;
                                iVar63 = iVar43 + iVar63 * 4;
                                *(char *)(iVar63 + 2) = (char)uVar49;
                                *(short *)(iVar63 + 4) = (short)iVar28;
                              }
                            }
                            iVar28 = iVar54 + 4;
                            if (iVar28 == uVar53 << 2) break;
                            uVar49 = __udivsi3(iVar51 * (uint)*(byte *)(iVar47 + iVar28) + iVar17,
                                               iVar27);
                            iVar28 = (int)*(short *)(iVar47 + iVar28 + 2) * (int)(short)uVar3;
                            if (iVar28 < -99) {
                              iVar28 = iVar50;
                            }
                            if (0x62 < iVar28) {
                              iVar28 = 99;
                            }
                            if (0x7e < uVar49) {
                              uVar49 = 0x7f;
                            }
                            if (uVar25 < 0x80) {
                              iVar23 = iVar61 + (uVar25 + 0x83) * 4;
                              iVar63 = UnsignedSaturate(iVar28 + 0x60,7);
                              UnsignedDoesSaturate(iVar28 + 0x60,7);
                              if ((*(byte *)(iVar23 + 2) != uVar49) ||
                                 (*(short *)(iVar23 + 4) != iVar63)) {
                                iVar28 = uVar25 + 0x84;
                                uVar25 = uVar25 + 1;
                                iVar28 = iVar43 + iVar28 * 4;
                                *(char *)(iVar28 + 2) = (char)uVar49;
                                *(short *)(iVar28 + 4) = (short)iVar63;
                              }
                            }
                            iVar54 = iVar54 + 8;
                            sVar41 = 0;
                          }
                          iVar28 = 0;
                        }
                        else {
                          iVar28 = (int)sVar41;
                          uVar49 = __udivsi3(iVar51 * (uint)*(byte *)(iVar54 + 2) + iVar17);
                          iVar63 = (int)*(short *)(iVar54 + 4) * (int)(short)(ushort)bVar24;
                          if (iVar63 < -99) {
                            iVar63 = iVar50;
                          }
                          if (0x62 < iVar63) {
                            iVar63 = 99;
                          }
                          if (0x7e < uVar49) {
                            uVar49 = 0x7f;
                          }
                          if (uVar25 < 0x80) {
                            iVar29 = iVar63 + iVar28 + 0x60;
                            iVar23 = iVar39 + (uVar25 + 0x83) * 4;
                            iVar63 = UnsignedSaturate(iVar29,7);
                            UnsignedDoesSaturate(iVar29,7);
                            if ((uVar49 != *(byte *)(iVar23 + 2)) ||
                               (*(short *)(iVar23 + 4) != iVar63)) {
                              iVar23 = uVar25 + 0x84;
                              uVar25 = uVar25 + 1;
                              iVar23 = iVar57 + iVar23 * 4;
                              *(char *)(iVar23 + 2) = (char)uVar49;
                              *(short *)(iVar23 + 4) = (short)iVar63;
                            }
                          }
                          iVar63 = 4;
                          if (uVar53 != 1) {
                            if ((int)((uVar53 * 4 + -4) * 0x20000000) < 0) {
                              uVar49 = __udivsi3(iVar51 * (uint)*(byte *)(iVar54 + 6) + iVar17,
                                                 iVar27);
                              iVar54 = (int)*(short *)(iVar54 + 8) * (int)(short)(ushort)bVar24;
                              if (iVar54 < -99) {
                                iVar54 = iVar50;
                              }
                              if (0x62 < iVar54) {
                                iVar54 = 99;
                              }
                              if (0x7e < uVar49) {
                                uVar49 = 0x7f;
                              }
                              if (uVar25 < 0x80) {
                                iVar63 = iVar39 + (uVar25 + 0x83) * 4;
                                iVar23 = iVar54 + iVar28 + 0x60;
                                iVar54 = UnsignedSaturate(iVar23,7);
                                UnsignedDoesSaturate(iVar23,7);
                                if ((uVar49 != *(byte *)(iVar63 + 2)) ||
                                   (*(short *)(iVar63 + 4) != iVar54)) {
                                  iVar63 = uVar25 + 0x84;
                                  uVar25 = uVar25 + 1;
                                  iVar63 = iVar57 + iVar63 * 4;
                                  *(char *)(iVar63 + 2) = (char)uVar49;
                                  *(short *)(iVar63 + 4) = (short)iVar54;
                                }
                              }
                              iVar63 = 8;
                              if (uVar53 == 2) goto LAB_000c5184;
                            }
                            do {
                              uVar49 = __udivsi3(iVar51 * (uint)*(byte *)(iVar47 + iVar63) + iVar17,
                                                 iVar27);
                              iVar29 = iVar39 + (uVar25 + 0x83) * 4;
                              iVar54 = (int)*(short *)(iVar47 + iVar63 + 2) * (int)(short)uVar3;
                              iVar23 = iVar57 + (uVar25 + 0x84) * 4;
                              if (iVar54 < -99) {
                                iVar54 = iVar50;
                              }
                              if (0x62 < iVar54) {
                                iVar54 = 99;
                              }
                              iVar59 = iVar54 + iVar28 + 0x60;
                              iVar54 = UnsignedSaturate(iVar59,7);
                              UnsignedDoesSaturate(iVar59,7);
                              if (0x7e < uVar49) {
                                uVar49 = 0x7f;
                              }
                              if ((uVar25 < 0x80) &&
                                 ((uVar49 != *(byte *)(iVar29 + 2) ||
                                  (*(short *)(iVar29 + 4) != iVar54)))) {
                                uVar25 = uVar25 + 1;
                                *(char *)(iVar23 + 2) = (char)uVar49;
                                *(short *)(iVar23 + 4) = (short)iVar54;
                              }
                              uVar49 = __udivsi3(iVar51 * (uint)*(byte *)(iVar47 + iVar63 + 4) +
                                                 iVar17,iVar27);
                              iVar29 = iVar39 + (uVar25 + 0x83) * 4;
                              iVar54 = (int)*(short *)(iVar47 + iVar63 + 4 + 2) * (int)(short)uVar3;
                              iVar23 = iVar57 + (uVar25 + 0x84) * 4;
                              if (iVar54 < -99) {
                                iVar54 = iVar50;
                              }
                              if (0x62 < iVar54) {
                                iVar54 = 99;
                              }
                              iVar59 = iVar54 + iVar28 + 0x60;
                              iVar54 = UnsignedSaturate(iVar59,7);
                              UnsignedDoesSaturate(iVar59,7);
                              if (0x7e < uVar49) {
                                uVar49 = 0x7f;
                              }
                              if ((uVar25 < 0x80) &&
                                 ((uVar49 != *(byte *)(iVar29 + 2) ||
                                  (*(short *)(iVar29 + 4) != iVar54)))) {
                                uVar25 = uVar25 + 1;
                                *(char *)(iVar23 + 2) = (char)uVar49;
                                *(short *)(iVar23 + 4) = (short)iVar54;
                              }
                              iVar63 = iVar63 + 8;
                            } while (iVar63 != uVar53 * 4);
                          }
                        }
LAB_000c5184:
                        iVar54 = (int)*(short *)(iVar47 + uVar53 * 4 + -2) * (int)(short)uVar3;
                        if (iVar54 < -99) {
                          iVar54 = iVar50;
                        }
                        if (iVar54 < 100) {
                          iVar28 = iVar28 + iVar54;
                        }
                        else {
                          iVar28 = iVar28 + 99;
                        }
                        if (iVar28 < -99) {
                          iVar28 = iVar50;
                        }
                        if (0x62 < iVar28) {
                          iVar28 = 99;
                        }
                        sVar41 = (short)iVar28;
                      }
                      iVar40 = iVar40 + 0x10;
                    } while (iVar40 != iVar36 + (uint)bVar19 * 0x10);
                    *(short *)(DAT_000c5b60 + 0xc5e96) = sVar41;
                    if (uVar25 < 0x7f) goto LAB_000c51ce;
                  }
                  local_b4 = uVar25 & 0xff;
                  *(char *)(DAT_000c5b6c + 0xc542e) = (char)uVar25;
                }
                iVar40 = DAT_000c5b70;
                if (iVar27 == 0) {
                  *(undefined1 *)(DAT_000c6f28 + 0xc6896) = 0;
                  uVar25 = 0;
                }
                else {
                  uVar25 = (uint)*(byte *)(DAT_000c5b70 + 0xc5642);
                  if (uVar25 != 0) {
                    piVar60 = (int *)(iVar32 + uVar25 * 4);
                    piVar62 = (int *)(iVar12 + 0xc3ccc);
                    puVar52 = (undefined1 *)(DAT_000c5b70 + 0xc5643);
                    uVar49 = ((int)piVar60 + (-4 - iVar32) & 0xfU) >> 2;
                    uVar53 = __udivsi3(*(int *)(iVar12 + 0xc3ccc) * 0x7f,iVar27);
                    if (0x7e < uVar53) {
                      uVar53 = 0x7f;
                    }
                    *(char *)(iVar40 + 0xc5643) = (char)uVar53;
                    if (piVar62 != piVar60) {
                      if (uVar49 != 0) {
                        if (uVar49 != 1) {
                          if (uVar49 != 2) {
                            piVar62 = (int *)(iVar12 + 0xc3cd0);
                            puVar52 = (undefined1 *)(iVar40 + 0xc5644);
                            uVar53 = __udivsi3(*piVar62 * 0x7f,iVar27);
                            if (0x7e < uVar53) {
                              uVar53 = 0x7f;
                            }
                            *(char *)(iVar40 + 0xc5644) = (char)uVar53;
                          }
                          piVar62 = piVar62 + 1;
                          uVar53 = __udivsi3(*piVar62 * 0x7f,iVar27);
                          if (0x7e < uVar53) {
                            uVar53 = 0x7f;
                          }
                          puVar52 = puVar52 + 1;
                          *puVar52 = (char)uVar53;
                        }
                        piVar62 = piVar62 + 1;
                        uVar53 = __udivsi3(*piVar62 * 0x7f,iVar27);
                        if (0x7e < uVar53) {
                          uVar53 = 0x7f;
                        }
                        puVar52 = puVar52 + 1;
                        *puVar52 = (char)uVar53;
                        if (piVar62 == piVar60) goto LAB_000c5330;
                      }
                      do {
                        uVar53 = __udivsi3(piVar62[1] * 0x7f,iVar27);
                        iVar40 = piVar62[2];
                        if (0x7e < uVar53) {
                          uVar53 = 0x7f;
                        }
                        puVar52[1] = (char)uVar53;
                        uVar53 = __udivsi3(iVar40 * 0x7f,iVar27);
                        iVar40 = piVar62[3];
                        if (uVar53 < 0x7f) {
                          uVar30 = (undefined1)uVar53;
                        }
                        else {
                          uVar30 = 0x7f;
                        }
                        puVar52[2] = uVar30;
                        uVar53 = __udivsi3(iVar40 * 0x7f,iVar27);
                        piVar62 = piVar62 + 4;
                        iVar40 = *piVar62;
                        if (0x7e < uVar53) {
                          uVar53 = 0x7f;
                        }
                        puVar52[3] = (char)uVar53;
                        uVar53 = __udivsi3(iVar40 * 0x7f,iVar27);
                        if (0x7e < uVar53) {
                          uVar53 = 0x7f;
                        }
                        puVar52 = puVar52 + 4;
                        *puVar52 = (char)uVar53;
                      } while (piVar62 != piVar60);
                    }
                  }
                }
LAB_000c5330:
                if ((int)(local_44 << 0x18) < 0) {
                  local_44 = 0x7f;
                  *(undefined1 *)(DAT_000c6f90 + 0xc6c47) = 0x7f;
                }
                if ((int)(local_60 << 0x18) < 0) {
                  iVar40 = 0x17d;
                  *(undefined1 *)(DAT_000c6f8c + 0xc6c3a) = 0x7f;
                }
                else {
                  iVar40 = local_60 * 3;
                }
                if ((local_b4 & 0x80) == 0) {
                  iVar39 = local_b4 << 1;
                }
                else {
                  iVar39 = 0xfe;
                  *(undefined1 *)(DAT_000c6f88 + 0xc6e28) = 0x7f;
                }
                if ((bVar10 & 0x80) != 0) {
                  *(undefined1 *)(DAT_000c6f84 + 0xc6c11) = 0x7f;
                }
                iVar40 = uVar25 + iVar39 + local_44 + iVar40;
                if (iVar40 + 0x13U < param_2) {
                  iVar39 = *(int *)(DAT_000c6f38 + 0xc64e0);
                  uVar25 = *(uint *)(DAT_000c6f38 + 0xc71b0);
                  if (iVar39 == 0) {
                    uVar53 = 0;
LAB_000c6d96:
                    bVar24 = (byte)uVar53;
                    iVar27 = 1;
                    iVar61 = 4;
                    iVar8 = 3;
                    iVar39 = 2;
                    iVar43 = 0;
                  }
                  else {
                    if (uVar25 < 0x1ffff) {
                      if (iVar39 == 0x14) {
                        uVar49 = uVar25 * 0x666 >> 0xf;
                      }
                      else {
                        uVar53 = *(int *)(DAT_000c6f38 + 0xc64e4) * uVar25;
                        uVar49 = uVar53 >> 0xf;
                        if ((uVar53 & 0x4000) != 0) {
                          uVar49 = uVar49 + 1;
                        }
                      }
                    }
                    else {
                      uVar49 = __udivsi3(uVar25,iVar39);
                    }
                    uVar46 = iVar39 * uVar49;
                    uVar53 = uVar49;
                    if (uVar46 < uVar25) {
                      iVar8 = 0;
                      do {
                        uVar53 = uVar49 + 1;
                        if (uVar25 <= iVar8 + iVar39 + uVar46) break;
                        iVar8 = iVar8 + iVar39 + iVar39;
                        uVar53 = uVar49 + 2;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 3;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 4;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 5;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 6;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 7;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 8;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 9;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 10;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 0xb;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 0xc;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 0xd;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 0xe;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 0xf;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar49 = uVar49 + 0x10;
                        uVar53 = uVar49;
                      } while (iVar8 + uVar46 < uVar25);
                    }
                    if (uVar53 < 0x200000) {
                      if (0x3fff < uVar53) {
                        bVar10 = (byte)((uVar53 << 0xb) >> 0x19) | 0x80;
                        bVar19 = (byte)((uVar53 << 0x12) >> 0x19) | 0x80;
                        bVar24 = (byte)uVar53 & 0x7f;
                        goto LAB_000c65de;
                      }
                      if (uVar53 < 0x80) goto LAB_000c6d96;
                      iVar27 = 2;
                      bVar19 = (byte)((uVar53 << 0x12) >> 0x19) | 0x80;
                      bVar24 = (byte)uVar53 & 0x7f;
                      iVar61 = 5;
                      iVar8 = 4;
                      iVar39 = 3;
                      iVar43 = 1;
                      iVar9 = 0;
                    }
                    else {
                      bVar10 = 0xff;
                      bVar24 = 0x7f;
                      bVar19 = bVar10;
LAB_000c65de:
                      iVar61 = 6;
                      iVar39 = 4;
                      iVar43 = 2;
                      iVar9 = 1;
                      *param_1 = bVar10;
                      iVar27 = 3;
                      iVar8 = 5;
                    }
                    param_1[iVar9] = bVar19;
                  }
                  iVar9 = DAT_000c6f3c;
                  param_1[iVar43] = bVar24;
                  param_1[iVar27] = 0x90;
                  iVar27 = DAT_000c6f40;
                  bVar19 = *(byte *)(iVar9 + 0xc660e);
                  if (0x7e < bVar19) {
                    bVar19 = 0x7f;
                  }
                  param_1[iVar39] = bVar19 | 0x80;
                  bVar19 = *(byte *)(iVar9 + 0xc660f);
                  if (0x7e < bVar19) {
                    bVar19 = 0x7f;
                  }
                  param_1[iVar8] = bVar19;
                  iVar39 = *(int *)(iVar27 + 0xc661e);
                  uVar25 = *(uint *)(iVar9 + 0xc6606);
                  if (iVar39 == 0) {
                    uVar25 = 0;
LAB_000c6de6:
                    bVar24 = (byte)uVar25;
                    iVar39 = 1;
                    iVar8 = 0;
                  }
                  else {
                    if (uVar25 < 0x1ffff) {
                      if (iVar39 == 0x14) {
                        uVar65 = CONCAT44(iVar8,uVar25 * 0x666 >> 0xf);
                      }
                      else {
                        uVar49 = *(int *)(iVar27 + 0xc6622) * uVar25;
                        uVar53 = uVar49 >> 0xf;
                        uVar65 = CONCAT44(iVar8,uVar53);
                        if ((uVar49 & 0x4000) != 0) {
                          uVar65 = CONCAT44(iVar8,uVar53 + 1);
                        }
                      }
                    }
                    else {
                      uVar65 = __udivsi3(uVar25,iVar39);
                    }
                    iVar8 = (int)uVar65;
                    uVar53 = iVar39 * iVar8;
                    if (uVar53 < uVar25) {
                      iVar27 = 0;
                      do {
                        iVar27 = iVar27 + iVar39;
                        uVar65 = CONCAT44(iVar27,iVar8 + 1);
                        if (uVar25 <= iVar27 + uVar53) break;
                        iVar27 = iVar27 + iVar39;
                        uVar65 = CONCAT44(iVar27,iVar8 + 2);
                        if (uVar25 <= iVar27 + uVar53) break;
                        iVar27 = iVar27 + iVar39;
                        uVar65 = CONCAT44(iVar27,iVar8 + 3);
                        if (uVar25 <= iVar27 + uVar53) break;
                        iVar27 = iVar27 + iVar39;
                        uVar65 = CONCAT44(iVar27,iVar8 + 4);
                        if (uVar25 <= iVar27 + uVar53) break;
                        iVar27 = iVar27 + iVar39;
                        uVar65 = CONCAT44(iVar27,iVar8 + 5);
                        if (uVar25 <= iVar27 + uVar53) break;
                        iVar27 = iVar27 + iVar39;
                        uVar65 = CONCAT44(iVar27,iVar8 + 6);
                        if (uVar25 <= iVar27 + uVar53) break;
                        iVar27 = iVar27 + iVar39;
                        uVar65 = CONCAT44(iVar27,iVar8 + 7);
                        if (uVar25 <= iVar27 + uVar53) break;
                        iVar27 = iVar27 + iVar39;
                        uVar65 = CONCAT44(iVar27,iVar8 + 8);
                        if (uVar25 <= iVar27 + uVar53) break;
                        iVar27 = iVar27 + iVar39;
                        uVar65 = CONCAT44(iVar27,iVar8 + 9);
                        if (uVar25 <= iVar27 + uVar53) break;
                        iVar27 = iVar27 + iVar39;
                        uVar65 = CONCAT44(iVar27,iVar8 + 10);
                        if (uVar25 <= iVar27 + uVar53) break;
                        iVar27 = iVar27 + iVar39;
                        uVar65 = CONCAT44(iVar27,iVar8 + 0xb);
                        if (uVar25 <= iVar27 + uVar53) break;
                        iVar27 = iVar27 + iVar39;
                        uVar65 = CONCAT44(iVar27,iVar8 + 0xc);
                        if (uVar25 <= iVar27 + uVar53) break;
                        iVar27 = iVar27 + iVar39;
                        uVar65 = CONCAT44(iVar27,iVar8 + 0xd);
                        if (uVar25 <= iVar27 + uVar53) break;
                        iVar27 = iVar27 + iVar39;
                        uVar65 = CONCAT44(iVar27,iVar8 + 0xe);
                        if (uVar25 <= iVar27 + uVar53) break;
                        iVar27 = iVar27 + iVar39;
                        uVar65 = CONCAT44(iVar27,iVar8 + 0xf);
                        if (uVar25 <= iVar27 + uVar53) break;
                        iVar27 = iVar27 + iVar39;
                        iVar8 = iVar8 + 0x10;
                        uVar65 = CONCAT44(iVar27,iVar8);
                      } while (iVar27 + uVar53 < uVar25);
                    }
                    uVar25 = (uint)uVar65;
                    bVar19 = (byte)((ulonglong)uVar65 >> 0x20);
                    if (0x1fffff < uVar25) {
                      bVar19 = 0xff;
                    }
                    if (0x1fffff < uVar25) {
                      bVar24 = 0x7f;
                      bVar10 = bVar19;
LAB_000c6740:
                      param_1[iVar61] = bVar19;
                      iVar8 = 2;
                      iVar39 = 3;
                      iVar27 = 1;
                    }
                    else {
                      if (0x3fff < uVar25) {
                        bVar19 = (byte)((uVar25 << 0xb) >> 0x19) | 0x80;
                        bVar10 = (byte)((uVar25 << 0x12) >> 0x19) | 0x80;
                        bVar24 = (byte)uVar65 & 0x7f;
                        goto LAB_000c6740;
                      }
                      if (uVar25 < 0x80) goto LAB_000c6de6;
                      iVar39 = 2;
                      bVar24 = (byte)uVar65 & 0x7f;
                      bVar10 = (byte)((uVar25 << 0x12) >> 0x19) | 0x80;
                      iVar8 = 1;
                      iVar27 = 0;
                    }
                    (param_1 + iVar61)[iVar27] = bVar10;
                  }
                  iVar27 = DAT_000c6f44;
                  iVar43 = iVar61 + iVar39;
                  param_1[iVar8 + iVar61] = bVar24;
                  iVar8 = DAT_000c6f48;
                  param_1[iVar39 + iVar61] = '\0';
                  uVar25 = *(uint *)(iVar27 + 0xc6760);
                  iVar39 = *(int *)(iVar8 + 0xc6764);
                  *(undefined4 *)(iVar8 + 0xc7438) = *(undefined4 *)(iVar27 + 0xc675c);
                  if (iVar39 == 0) {
                    uVar53 = 0;
LAB_000c6c94:
                    bVar10 = (byte)uVar53;
                    pbVar58 = local_30 + 1;
                    pbVar21 = local_30;
                    uVar25 = 1;
                  }
                  else {
                    if (uVar25 < 0x1ffff) {
                      if (iVar39 == 0x14) {
                        uVar49 = uVar25 * 0x666 >> 0xf;
                      }
                      else {
                        uVar53 = *(int *)(iVar8 + 0xc6768) * uVar25;
                        uVar49 = uVar53 >> 0xf;
                        if ((uVar53 & 0x4000) != 0) {
                          uVar49 = uVar49 + 1;
                        }
                      }
                    }
                    else {
                      uVar49 = __udivsi3(uVar25,iVar39);
                    }
                    uVar46 = iVar39 * uVar49;
                    uVar53 = uVar49;
                    if (uVar46 < uVar25) {
                      iVar8 = 0;
                      do {
                        uVar53 = uVar49 + 1;
                        if (uVar25 <= iVar8 + iVar39 + uVar46) break;
                        iVar8 = iVar8 + iVar39 + iVar39;
                        uVar53 = uVar49 + 2;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 3;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 4;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 5;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 6;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 7;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 8;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 9;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 10;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 0xb;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 0xc;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 0xd;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 0xe;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar53 = uVar49 + 0xf;
                        if (uVar25 <= iVar8 + uVar46) break;
                        iVar8 = iVar8 + iVar39;
                        uVar49 = uVar49 + 0x10;
                        uVar53 = uVar49;
                      } while (iVar8 + uVar46 < uVar25);
                    }
                    if (uVar53 < 0x200000) {
                      if (0x3fff < uVar53) {
                        local_30[0] = (byte)((uVar53 << 0xb) >> 0x19) | 0x80;
                        bVar19 = (byte)((uVar53 << 0x12) >> 0x19) | 0x80;
                        bVar10 = (byte)uVar53 & 0x7f;
                        goto LAB_000c6868;
                      }
                      if (uVar53 < 0x80) goto LAB_000c6c94;
                      pbVar58 = local_30 + 2;
                      bVar10 = (byte)uVar53 & 0x7f;
                      bVar19 = (byte)((uVar53 << 0x12) >> 0x19) | 0x80;
                      pbVar21 = local_30 + 1;
                      pbVar14 = local_30;
                      uVar25 = 2;
                    }
                    else {
                      local_30[0] = 0xff;
                      bVar10 = 0x7f;
                      bVar19 = local_30[0];
LAB_000c6868:
                      pbVar58 = local_30 + 3;
                      pbVar21 = local_30 + 2;
                      pbVar14 = local_30 + 1;
                      uVar25 = 3;
                    }
                    *pbVar14 = bVar19;
                  }
                  uVar53 = iVar40 + 4 + uVar25;
                  *pbVar21 = bVar10;
                  *pbVar58 = 0;
                  bVar19 = (byte)uVar53;
                  if (0x7f < uVar53) {
                    bVar19 = bVar19 & 0x7f;
                    iVar40 = 2;
                    param_1[iVar43] = (byte)(uVar53 >> 7) | 0x80;
                  }
                  else {
                    iVar40 = 1;
                  }
                  iVar39 = iVar43 + iVar40;
                  param_1[(uint)(0x7f < uVar53) + iVar43] = bVar19;
                  param_1[iVar40 + iVar43] = '\0';
                  param_1[iVar39] = local_30[0];
                  iVar40 = iVar39 + 1;
                  if (uVar25 != 1) {
                    bVar64 = uVar25 != 2;
                    iVar40 = iVar39 + 2;
                    if (bVar64) {
                      uVar25 = (uint)local_30[2];
                    }
                    param_1[iVar39 + 1] = local_30[1];
                    if (bVar64) {
                      param_1[iVar40] = (uchar)uVar25;
                      iVar40 = iVar39 + 3;
                    }
                  }
                  iVar39 = DAT_000c6f4c;
                  iVar8 = iVar40 + 1;
                  param_1[iVar40] = *(uchar *)(DAT_000c6f4c + 0xc68f7);
                  iVar40 = DAT_000c6f54;
                  uVar25 = (uint)*(byte *)(iVar39 + 0xc68f6);
                  if (uVar25 != 0) {
                    iVar43 = DAT_000c6f50 + 0xc6906;
                    uVar53 = DAT_000c6f54 + 0xc690a;
                    local_b4 = 0;
                    iVar27 = iVar8;
                    uVar49 = 0;
                    do {
                      if (0x7f < uVar49) {
                        uVar53 = 0;
                      }
                      if (uVar49 < 0x80) {
                        uVar53 = 1;
                      }
                      iVar61 = iVar43 + (uint)*(byte *)(iVar39 + local_b4 + 0xc68f8) * 10;
                      uVar46 = (uint)*(byte *)(iVar61 + 9);
                      if (uVar46 == 0) {
                        uVar53 = 0;
                      }
                      iVar8 = iVar27;
                      uVar13 = uVar49;
                      if (uVar53 != 0) {
                        iVar61 = iVar61 - uVar49;
                        uVar25 = 0;
                        iVar9 = iVar27;
                        do {
                          uVar13 = uVar49 + 1;
                          uVar53 = uVar25 + 1;
                          uVar48 = uVar25 + 3;
                          param_1[uVar25 + iVar27] = *(uchar *)(iVar61 + uVar49);
                          uVar16 = uVar25 + 2;
                          uVar25 = uVar25 + 4;
                          iVar8 = iVar9 + 1;
                          if (uVar46 <= uVar53 || 0x7f < uVar13) break;
                          uVar18 = uVar49 + 2;
                          param_1[uVar53 + iVar27] = *(uchar *)(iVar61 + uVar13);
                          iVar8 = iVar9 + 2;
                          uVar13 = uVar18;
                          if (uVar46 <= uVar16 || 0x7f < uVar18) break;
                          uVar13 = uVar49 + 3;
                          param_1[uVar16 + iVar27] = *(uchar *)(iVar61 + uVar18);
                          uVar53 = 0;
                          iVar8 = iVar9 + 3;
                          if (uVar46 <= uVar48 || 0x7f < uVar13) break;
                          uVar49 = uVar49 + 4;
                          iVar9 = iVar9 + 4;
                          param_1[uVar48 + iVar27] = *(uchar *)(iVar61 + uVar13);
                          uVar53 = 0;
                          iVar8 = iVar9;
                          uVar13 = uVar49;
                        } while (uVar25 < uVar46 && uVar49 < 0x80);
                        uVar25 = (uint)*(byte *)(iVar40 + 0xc6914);
                      }
                      local_b4 = local_b4 + 1;
                      iVar27 = iVar8;
                      uVar49 = uVar13;
                    } while (local_b4 < uVar25);
                  }
                  iVar40 = DAT_000c6f58;
                  puVar6 = (uchar *)(iVar8 + 1);
                  iVar39 = DAT_000c6f58 + 0xc6a0e;
                  param_1[iVar8] = *(uchar *)(DAT_000c6f58 + 0xc6a1c);
                  if (*(char *)(iVar40 + 0xc6a1c) != '\0') {
                    uVar25 = 0;
                    puVar35 = param_1 + iVar8;
                    do {
                      bVar19 = *(byte *)(iVar39 + 0x10);
                      uVar31 = '\0';
                      uVar25 = uVar25 + 1;
                      if ((bVar19 & 0x80) != 0) {
                        *(undefined1 *)(iVar39 + 0x10) = 0x7f;
                        bVar19 = 0x7f;
                      }
                      puVar35[1] = bVar19;
                      uVar53 = (int)*(short *)(iVar39 + 0x12) + 0x2000;
                      puVar6 = puVar35 + (4 - (int)param_1);
                      uVar53 = uVar53 & ~((int)uVar53 >> 0x1f);
                      if (0x3ffe < (int)uVar53) {
                        uVar53 = 0x3fff;
                      }
                      if (0x7f < uVar53) {
                        uVar31 = (uchar)((uVar53 << 0x11) >> 0x18);
                      }
                      puVar35[2] = (byte)uVar53 & 0x7f;
                      puVar35[3] = uVar31;
                      iVar39 = iVar39 + 4;
                      puVar35 = puVar35 + 3;
                    } while (uVar25 < *(byte *)(iVar40 + 0xc6a1c));
                  }
                  iVar40 = DAT_000c6f5c;
                  puVar55 = puVar6 + 1;
                  iVar39 = DAT_000c6f5c + 0xc6a80;
                  puVar35 = param_1 + (int)puVar6;
                  param_1[(int)puVar6] = *(uchar *)(DAT_000c6f5c + 0xc6c90);
                  if (*(char *)(iVar40 + 0xc6c90) != '\0') {
                    uVar25 = 0;
                    do {
                      bVar19 = *(byte *)(iVar39 + 0x212);
                      uVar25 = uVar25 + 1;
                      puVar55 = puVar55 + 2;
                      if ((int)((uint)bVar19 << 0x18) < 0) {
                        *(undefined1 *)(iVar39 + 0x212) = 0x7f;
                        bVar19 = 0x7f;
                      }
                      puVar35[1] = bVar19;
                      uVar11 = UnsignedSaturate((int)*(short *)(iVar39 + 0x214),7);
                      UnsignedDoesSaturate((int)*(short *)(iVar39 + 0x214),7);
                      puVar35 = puVar35 + 2;
                      *puVar35 = (uchar)uVar11;
                      iVar39 = iVar39 + 4;
                    } while (uVar25 < *(byte *)(iVar40 + 0xc6c90));
                  }
                  iVar40 = DAT_000c6f60;
                  puVar6 = puVar55 + 1;
                  piVar62 = (int *)(DAT_000c6f60 + 0xc6ad6);
                  param_1[(int)puVar55] = *(uchar *)(DAT_000c6f60 + 0xc6ee8);
                  if (*(char *)(iVar40 + 0xc6ee8) != '\0') {
                    pbVar21 = param_1 + (int)puVar55;
                    pbVar14 = (byte *)(iVar40 + 0xc6ee9);
                    do {
                      bVar19 = *pbVar14;
                      puVar6 = puVar6 + 1;
                      if ((int)((uint)bVar19 << 0x18) < 0) {
                        *pbVar14 = 0x7f;
                        bVar19 = 0x7f;
                      }
                      pbVar21 = pbVar21 + 1;
                      *pbVar21 = bVar19;
                      pbVar14 = pbVar14 + 1;
                    } while ((uint)((int)pbVar21 - (int)(param_1 + (int)puVar55)) <
                             (uint)*(byte *)(iVar40 + 0xc6ee8));
                  }
                  iVar27 = *piVar62;
                }
                else {
                  puVar6 = (uchar *)0x0;
                }
                iVar39 = DAT_000c5b78;
                iVar40 = DAT_000c5b74;
                uVar25 = *(uint *)(DAT_000c5b74 + 0xc605a);
                *(int *)(DAT_000c5b74 + 0xc606a) = iVar27;
                *(undefined1 *)(iVar39 + 0xc53a7) = 0;
                if (uVar25 < 0x7fffffffU - iVar27) {
                  *(uint *)(iVar40 + 0xc605a) = uVar25 + iVar27;
                }
                if (puVar6 == (uchar *)0x0) {
                  puVar6 = (uchar *)0xfffffffd;
                  uVar25 = (uint)(byte)(&UNK_000c7c96)[DAT_000c72dc];
                }
                else {
                  uVar25 = (uint)*(byte *)(DAT_000c5b7c + 0xc6082);
                }
              }
            }
          }
          else {
            if (iVar8 != 3) {
              if (iVar8 != 4) {
                if (iVar8 != 5) {
                  uVar25 = uVar53 & 0xff;
                  *(undefined1 *)(DAT_000c3ddc + 0xc4642) = uVar30;
                  puVar6 = (uchar *)0x0;
                  goto LAB_000c39b4;
                }
                *(undefined1 *)(DAT_000c3ddc + 0xc4642) = uVar30;
                if (*(int *)(iVar27 + iVar43) != 5) goto LAB_000c4098;
                if (param_2 < 5) goto LAB_000c7138;
                iVar39 = *(int *)(iVar37 + 8);
                if (iVar39 == 0) {
                  uVar25 = *(uint *)(iVar40 + 0xc4656);
                  *(undefined4 *)(iVar40 + 0xc465a) = 0;
                  *(undefined4 *)(iVar40 + 0xc4656) = 0;
                }
                else {
                  uVar25 = iVar39 - *(int *)(iVar40 + 0xc4652);
                  *(int *)(iVar40 + 0xc4656) =
                       (*(int *)(iVar40 + 0xc4656) + *(int *)(iVar40 + 0xc4652)) - iVar39;
                  *(undefined4 *)(iVar40 + 0xc4652) = *(undefined4 *)(iVar37 + 8);
                  if (uVar25 < *(uint *)(iVar40 + 0xc465a)) {
                    *(uint *)(DAT_000c4c94 + 0xc5178) = *(uint *)(iVar40 + 0xc465a) - uVar25;
                  }
                  else {
                    *(undefined4 *)(&UNK_000c7cbe + DAT_000c72e0) = 0;
                  }
                }
                iVar40 = *(int *)(DAT_000c4c98 + 0xc44ae);
                if (iVar40 == 0) {
                  uVar53 = 0;
LAB_000c6cf2:
                  bVar24 = (byte)uVar53;
                  iVar8 = 1;
                  puVar6 = (uchar *)0x3;
                  iVar39 = 2;
                  iVar27 = 0;
                }
                else {
                  if (uVar25 < 0x1ffff) {
                    if (iVar40 == 0x14) {
                      uVar49 = uVar25 * 0x666 >> 0xf;
                    }
                    else {
                      uVar53 = *(int *)(DAT_000c4c98 + 0xc44b2) * uVar25;
                      uVar49 = uVar53 >> 0xf;
                      if ((uVar53 & 0x4000) != 0) {
                        uVar49 = uVar49 + 1;
                      }
                    }
                  }
                  else {
                    uVar49 = __udivsi3(uVar25,iVar40);
                  }
                  uVar46 = iVar40 * uVar49;
                  uVar53 = uVar49;
                  if (uVar46 < uVar25) {
                    iVar39 = 0;
                    do {
                      uVar53 = uVar49 + 1;
                      if (uVar25 <= iVar39 + iVar40 + uVar46) break;
                      iVar39 = iVar39 + iVar40 + iVar40;
                      uVar53 = uVar49 + 2;
                      if (uVar25 <= iVar39 + uVar46) break;
                      iVar39 = iVar39 + iVar40;
                      uVar53 = uVar49 + 3;
                      if (uVar25 <= iVar39 + uVar46) break;
                      iVar39 = iVar39 + iVar40;
                      uVar53 = uVar49 + 4;
                      if (uVar25 <= iVar39 + uVar46) break;
                      iVar39 = iVar39 + iVar40;
                      uVar53 = uVar49 + 5;
                      if (uVar25 <= iVar39 + uVar46) break;
                      iVar39 = iVar39 + iVar40;
                      uVar53 = uVar49 + 6;
                      if (uVar25 <= iVar39 + uVar46) break;
                      iVar39 = iVar39 + iVar40;
                      uVar53 = uVar49 + 7;
                      if (uVar25 <= iVar39 + uVar46) break;
                      iVar39 = iVar39 + iVar40;
                      uVar53 = uVar49 + 8;
                      if (uVar25 <= iVar39 + uVar46) break;
                      iVar39 = iVar39 + iVar40;
                      uVar53 = uVar49 + 9;
                      if (uVar25 <= iVar39 + uVar46) break;
                      iVar39 = iVar39 + iVar40;
                      uVar53 = uVar49 + 10;
                      if (uVar25 <= iVar39 + uVar46) break;
                      iVar39 = iVar39 + iVar40;
                      uVar53 = uVar49 + 0xb;
                      if (uVar25 <= iVar39 + uVar46) break;
                      iVar39 = iVar39 + iVar40;
                      uVar53 = uVar49 + 0xc;
                      if (uVar25 <= iVar39 + uVar46) break;
                      iVar39 = iVar39 + iVar40;
                      uVar53 = uVar49 + 0xd;
                      if (uVar25 <= iVar39 + uVar46) break;
                      iVar39 = iVar39 + iVar40;
                      uVar53 = uVar49 + 0xe;
                      if (uVar25 <= iVar39 + uVar46) break;
                      iVar39 = iVar39 + iVar40;
                      uVar53 = uVar49 + 0xf;
                      if (uVar25 <= iVar39 + uVar46) break;
                      iVar39 = iVar39 + iVar40;
                      uVar49 = uVar49 + 0x10;
                      uVar53 = uVar49;
                    } while (iVar39 + uVar46 < uVar25);
                  }
                  if (uVar53 < 0x200000) {
                    if (0x3fff < uVar53) {
                      bVar10 = (byte)((uVar53 << 0xb) >> 0x19) | 0x80;
                      bVar19 = (byte)((uVar53 << 0x12) >> 0x19) | 0x80;
                      bVar24 = (byte)uVar53 & 0x7f;
                      goto LAB_000c45aa;
                    }
                    if (uVar53 < 0x80) goto LAB_000c6cf2;
                    bVar24 = (byte)uVar53 & 0x7f;
                    bVar19 = (byte)((uVar53 << 0x12) >> 0x19) | 0x80;
                    iVar8 = 2;
                    puVar6 = &DAT_00000004;
                    iVar39 = 3;
                    iVar27 = 1;
                    iVar40 = 0;
                  }
                  else {
                    bVar10 = 0xff;
                    bVar24 = 0x7f;
                    bVar19 = bVar10;
LAB_000c45aa:
                    iVar8 = 3;
                    puVar6 = &DAT_00000005;
                    iVar27 = 2;
                    iVar40 = 1;
                    *param_1 = bVar10;
                    iVar39 = 4;
                  }
                  param_1[iVar40] = bVar19;
                }
                param_1[iVar27] = bVar24;
                param_1[iVar8] = 0xc0;
                bVar19 = *(byte *)(iVar37 + 5);
                if ((int)((uint)bVar19 << 0x18) < 0) {
                  if (0xe2 < bVar19) {
                    bVar19 = 0xe3;
                  }
                  param_1[iVar39] = bVar19;
                }
                else {
                  if (0x62 < bVar19) {
                    bVar19 = 99;
                  }
                  param_1[iVar39] = bVar19;
                }
                uVar25 = (uint)(byte)(&UNK_000c79ea)[DAT_000c6f98];
                goto LAB_000c39b4;
              }
              *(undefined1 *)(DAT_000c3ddc + 0xc4642) = uVar30;
              if (*(int *)(iVar27 + iVar43) != 4) goto LAB_000c4098;
              if (param_2 < 6) goto LAB_000c7138;
              iVar39 = *(int *)(iVar37 + 8);
              if (iVar39 == 0) {
                uVar25 = *(uint *)(iVar40 + 0xc4656);
                *(undefined4 *)(iVar40 + 0xc465a) = 0;
                *(undefined4 *)(iVar40 + 0xc4656) = 0;
              }
              else {
                uVar53 = *(uint *)(iVar40 + 0xc465a);
                uVar25 = iVar39 - *(int *)(iVar40 + 0xc4652);
                *(int *)(iVar40 + 0xc4656) =
                     (*(int *)(iVar40 + 0xc4656) + *(int *)(iVar40 + 0xc4652)) - iVar39;
                uVar11 = *(undefined4 *)(iVar37 + 8);
                if (uVar25 < uVar53) {
                  *(uint *)(iVar40 + 0xc465a) = uVar53 - uVar25;
                }
                *(undefined4 *)(iVar40 + 0xc4652) = uVar11;
                if (uVar25 >= uVar53) {
                  *(undefined4 *)(iVar40 + 0xc465a) = 0;
                }
              }
              iVar40 = *(int *)(DAT_000c4c88 + 0xc42f2);
              if (iVar40 == 0) {
                uVar53 = 0;
LAB_000c6d42:
                bVar19 = (byte)uVar53;
                iVar40 = 1;
                puVar6 = &DAT_00000004;
                iVar39 = 3;
                iVar8 = 2;
                iVar27 = 0;
              }
              else {
                if (uVar25 < 0x1ffff) {
                  if (iVar40 == 0x14) {
                    uVar49 = uVar25 * 0x666 >> 0xf;
                  }
                  else {
                    uVar53 = *(int *)(DAT_000c4c88 + 0xc42f6) * uVar25;
                    uVar49 = uVar53 >> 0xf;
                    if ((uVar53 & 0x4000) != 0) {
                      uVar49 = uVar49 + 1;
                    }
                  }
                }
                else {
                  uVar49 = __udivsi3(uVar25,iVar40);
                }
                uVar46 = iVar40 * uVar49;
                uVar53 = uVar49;
                if (uVar46 < uVar25) {
                  iVar39 = 0;
                  do {
                    uVar53 = uVar49 + 1;
                    if (uVar25 <= uVar46 + iVar39 + iVar40) break;
                    iVar39 = iVar39 + iVar40 + iVar40;
                    uVar53 = uVar49 + 2;
                    if (uVar25 <= uVar46 + iVar39) break;
                    iVar39 = iVar39 + iVar40;
                    uVar53 = uVar49 + 3;
                    if (uVar25 <= uVar46 + iVar39) break;
                    iVar39 = iVar39 + iVar40;
                    uVar53 = uVar49 + 4;
                    if (uVar25 <= uVar46 + iVar39) break;
                    iVar39 = iVar39 + iVar40;
                    uVar53 = uVar49 + 5;
                    if (uVar25 <= uVar46 + iVar39) break;
                    iVar39 = iVar39 + iVar40;
                    uVar53 = uVar49 + 6;
                    if (uVar25 <= uVar46 + iVar39) break;
                    iVar39 = iVar39 + iVar40;
                    uVar53 = uVar49 + 7;
                    if (uVar25 <= uVar46 + iVar39) break;
                    iVar39 = iVar39 + iVar40;
                    uVar53 = uVar49 + 8;
                    if (uVar25 <= uVar46 + iVar39) break;
                    iVar39 = iVar39 + iVar40;
                    uVar53 = uVar49 + 9;
                    if (uVar25 <= uVar46 + iVar39) break;
                    iVar39 = iVar39 + iVar40;
                    uVar53 = uVar49 + 10;
                    if (uVar25 <= uVar46 + iVar39) break;
                    iVar39 = iVar39 + iVar40;
                    uVar53 = uVar49 + 0xb;
                    if (uVar25 <= uVar46 + iVar39) break;
                    iVar39 = iVar39 + iVar40;
                    uVar53 = uVar49 + 0xc;
                    if (uVar25 <= uVar46 + iVar39) break;
                    iVar39 = iVar39 + iVar40;
                    uVar53 = uVar49 + 0xd;
                    if (uVar25 <= uVar46 + iVar39) break;
                    iVar39 = iVar39 + iVar40;
                    uVar53 = uVar49 + 0xe;
                    if (uVar25 <= uVar46 + iVar39) break;
                    iVar39 = iVar39 + iVar40;
                    uVar53 = uVar49 + 0xf;
                    if (uVar25 <= uVar46 + iVar39) break;
                    iVar39 = iVar39 + iVar40;
                    uVar49 = uVar49 + 0x10;
                    uVar53 = uVar49;
                  } while (uVar46 + iVar39 < uVar25);
                }
                if (uVar53 < 0x200000) {
                  if (0x3fff < uVar53) {
                    bVar24 = (byte)((uVar53 << 0xb) >> 0x19) | 0x80;
                    bVar10 = (byte)((uVar53 << 0x12) >> 0x19) | 0x80;
                    bVar19 = (byte)uVar53 & 0x7f;
                    goto LAB_000c43ee;
                  }
                  if (uVar53 < 0x80) goto LAB_000c6d42;
                  bVar19 = (byte)uVar53 & 0x7f;
                  bVar10 = (byte)((uVar53 << 0x12) >> 0x19) | 0x80;
                  iVar40 = 2;
                  puVar6 = &DAT_00000005;
                  iVar39 = 4;
                  iVar8 = 3;
                  iVar27 = 1;
                  iVar43 = 0;
                }
                else {
                  bVar24 = 0xff;
                  bVar19 = 0x7f;
                  bVar10 = bVar24;
LAB_000c43ee:
                  iVar40 = 3;
                  iVar8 = 4;
                  iVar27 = 2;
                  iVar43 = 1;
                  *param_1 = bVar24;
                  puVar6 = (uchar *)0x6;
                  iVar39 = 5;
                }
                param_1[iVar43] = bVar10;
              }
              param_1[iVar27] = bVar19;
              param_1[iVar40] = 0xb0;
              param_1[iVar8] = '\x14';
              iVar40 = DAT_000c4c90;
              bVar19 = *(byte *)(iVar37 + 5);
              if (bVar19 < 6) {
                uVar25 = 0;
                if (bVar19 != 0) {
                  uVar25 = (uint)(byte)(bVar19 - 1);
                }
              }
              else {
                uVar25 = 4;
              }
              param_1[iVar39] = (uchar)*(undefined2 *)(DAT_000c4c8c + uVar25 * 2 + 0xc4c1e);
              uVar25 = (uint)*(byte *)(iVar40 + 0xc5106);
              goto LAB_000c39b4;
            }
            *(undefined1 *)(DAT_000c3ddc + 0xc4642) = uVar30;
            if (*(int *)(iVar27 + iVar43) != 3) {
LAB_000c4098:
              uVar25 = uVar53 & 0xff;
              puVar6 = (uchar *)0x0;
              goto LAB_000c39b4;
            }
            if (param_2 < 6) {
LAB_000c7138:
              uVar25 = uVar53 & 0xff;
              puVar6 = (uchar *)0xfffffffd;
              goto LAB_000c39b4;
            }
            iVar39 = *(int *)(iVar37 + 8);
            if (iVar39 == 0) {
              uVar25 = *(uint *)(iVar40 + 0xc4656);
              *(undefined4 *)(iVar40 + 0xc465a) = 0;
              *(undefined4 *)(iVar40 + 0xc4656) = 0;
            }
            else {
              uVar53 = *(uint *)(iVar40 + 0xc465a);
              uVar25 = iVar39 - *(int *)(iVar40 + 0xc4652);
              *(int *)(iVar40 + 0xc4656) =
                   (*(int *)(iVar40 + 0xc4656) + *(int *)(iVar40 + 0xc4652)) - iVar39;
              uVar11 = *(undefined4 *)(iVar37 + 8);
              if (uVar25 < uVar53) {
                *(uint *)(iVar40 + 0xc465a) = uVar53 - uVar25;
              }
              *(undefined4 *)(iVar40 + 0xc4652) = uVar11;
              if (uVar25 >= uVar53) {
                *(undefined4 *)(iVar40 + 0xc465a) = 0;
              }
            }
            iVar40 = *(int *)(DAT_000c4c80 + 0xc414c);
            if (iVar40 == 0) {
              uVar53 = 0;
LAB_000c6cde:
              bVar19 = (byte)uVar53;
              iVar8 = 1;
              puVar6 = &DAT_00000004;
              iVar40 = 3;
              iVar39 = 2;
              iVar27 = 0;
            }
            else {
              if (uVar25 < 0x1ffff) {
                if (iVar40 == 0x14) {
                  uVar49 = uVar25 * 0x666 >> 0xf;
                }
                else {
                  uVar53 = *(int *)(DAT_000c4c80 + 0xc4150) * uVar25;
                  uVar49 = uVar53 >> 0xf;
                  if ((uVar53 & 0x4000) != 0) {
                    uVar49 = uVar49 + 1;
                  }
                }
              }
              else {
                uVar49 = __udivsi3(uVar25,iVar40);
              }
              uVar46 = iVar40 * uVar49;
              uVar53 = uVar49;
              if (uVar46 < uVar25) {
                iVar39 = 0;
                do {
                  uVar53 = uVar49 + 1;
                  if (uVar25 <= iVar39 + iVar40 + uVar46) break;
                  iVar39 = iVar39 + iVar40 + iVar40;
                  uVar53 = uVar49 + 2;
                  if (uVar25 <= iVar39 + uVar46) break;
                  iVar39 = iVar39 + iVar40;
                  uVar53 = uVar49 + 3;
                  if (uVar25 <= iVar39 + uVar46) break;
                  iVar39 = iVar39 + iVar40;
                  uVar53 = uVar49 + 4;
                  if (uVar25 <= iVar39 + uVar46) break;
                  iVar39 = iVar39 + iVar40;
                  uVar53 = uVar49 + 5;
                  if (uVar25 <= iVar39 + uVar46) break;
                  iVar39 = iVar39 + iVar40;
                  uVar53 = uVar49 + 6;
                  if (uVar25 <= iVar39 + uVar46) break;
                  iVar39 = iVar39 + iVar40;
                  uVar53 = uVar49 + 7;
                  if (uVar25 <= iVar39 + uVar46) break;
                  iVar39 = iVar39 + iVar40;
                  uVar53 = uVar49 + 8;
                  if (uVar25 <= iVar39 + uVar46) break;
                  iVar39 = iVar39 + iVar40;
                  uVar53 = uVar49 + 9;
                  if (uVar25 <= iVar39 + uVar46) break;
                  iVar39 = iVar39 + iVar40;
                  uVar53 = uVar49 + 10;
                  if (uVar25 <= iVar39 + uVar46) break;
                  iVar39 = iVar39 + iVar40;
                  uVar53 = uVar49 + 0xb;
                  if (uVar25 <= iVar39 + uVar46) break;
                  iVar39 = iVar39 + iVar40;
                  uVar53 = uVar49 + 0xc;
                  if (uVar25 <= iVar39 + uVar46) break;
                  iVar39 = iVar39 + iVar40;
                  uVar53 = uVar49 + 0xd;
                  if (uVar25 <= iVar39 + uVar46) break;
                  iVar39 = iVar39 + iVar40;
                  uVar53 = uVar49 + 0xe;
                  if (uVar25 <= iVar39 + uVar46) break;
                  iVar39 = iVar39 + iVar40;
                  uVar53 = uVar49 + 0xf;
                  if (uVar25 <= iVar39 + uVar46) break;
                  iVar39 = iVar39 + iVar40;
                  uVar49 = uVar49 + 0x10;
                  uVar53 = uVar49;
                } while (iVar39 + uVar46 < uVar25);
              }
              if (uVar53 < 0x200000) {
                if (0x3fff < uVar53) {
                  bVar24 = (byte)((uVar53 << 0xb) >> 0x19) | 0x80;
                  bVar10 = (byte)((uVar53 << 0x12) >> 0x19) | 0x80;
                  bVar19 = (byte)uVar53 & 0x7f;
                  goto LAB_000c424a;
                }
                if (uVar53 < 0x80) goto LAB_000c6cde;
                bVar19 = (byte)uVar53 & 0x7f;
                bVar10 = (byte)((uVar53 << 0x12) >> 0x19) | 0x80;
                iVar8 = 2;
                puVar6 = &DAT_00000005;
                iVar40 = 4;
                iVar39 = 3;
                iVar27 = 1;
                iVar43 = 0;
              }
              else {
                bVar24 = 0xff;
                bVar19 = 0x7f;
                bVar10 = bVar24;
LAB_000c424a:
                iVar8 = 3;
                puVar6 = (uchar *)0x6;
                iVar39 = 4;
                iVar27 = 2;
                iVar43 = 1;
                *param_1 = bVar24;
                iVar40 = 5;
              }
              param_1[iVar43] = bVar10;
            }
            param_1[iVar27] = bVar19;
            iVar27 = DAT_000c4c84;
            param_1[iVar8] = 0xb0;
            param_1[iVar39] = '\x16';
            bVar19 = *(byte *)(iVar37 + 5);
            if (9 < bVar19) {
              bVar19 = 9;
              *(undefined1 *)(iVar37 + 5) = 9;
            }
            param_1[iVar40] = bVar19;
            uVar25 = (uint)*(byte *)(iVar27 + 0xc4f3c);
          }
        }
LAB_000c39b4:
        if (local_6c == uVar25) {
          uVar25 = local_6c + 1 & 0xff;
          *(char *)(DAT_000c3de4 + 0xc46a4) = (char)(local_6c + 1);
        }
        if (puVar6 != (uchar *)0x0) {
          *(undefined4 *)(DAT_000c4c7c + 0xc4d84) = *(undefined4 *)(iVar37 + 0x1c);
          return puVar6;
        }
        local_b4 = (uint)*(byte *)(DAT_000c3de0 + 0xc39f3);
        local_6c = uVar25;
      } while (uVar25 < local_b4);
    }
  }
  iVar12 = DAT_000c3d58;
  uVar53 = *(uint *)((int)&DAT_000c3db4 + DAT_000c3d54 + 2);
  uVar11 = *(undefined4 *)(DAT_000c3d58 + 0xc30f6);
  *(char *)((int)&DAT_000c3da0 + DAT_000c3d54 + 2) = (char)uVar25 + '\x01';
  if (uVar53 == 0) {
    uVar53 = 1;
  }
  *(undefined4 *)((int)&DAT_000c3dc0 + iVar12 + 2) = uVar11;
  if (param_2 < 5) {
    *(undefined4 *)((int)&DAT_000c3db8 + iVar12 + 2) = 0;
    return (uchar *)0xfffffffd;
  }
  iVar44 = *(int *)(iVar12 + 0xc30ea);
  if (iVar44 == 0) {
    uVar25 = 0;
LAB_000c3450:
    bVar24 = (byte)uVar25;
    iVar45 = 1;
    puVar6 = (uchar *)0x3;
    iVar44 = 2;
    iVar12 = 0;
    goto LAB_000c3228;
  }
  if (uVar53 < 0x1ffff) {
    if (iVar44 == 0x14) {
      uVar49 = uVar53 * 0x666 >> 0xf;
    }
    else {
      uVar25 = *(int *)(iVar12 + 0xc30ee) * uVar53;
      uVar49 = uVar25 >> 0xf;
      if ((uVar25 & 0x4000) != 0) {
        uVar49 = uVar49 + 1;
      }
    }
  }
  else {
    uVar49 = __udivsi3(uVar53,iVar44);
  }
  uVar46 = iVar44 * uVar49;
  uVar25 = uVar49;
  if (uVar46 < uVar53) {
    iVar12 = 0;
    do {
      uVar25 = uVar49 + 1;
      if (uVar53 <= iVar12 + iVar44 + uVar46) break;
      iVar12 = iVar12 + iVar44 + iVar44;
      uVar25 = uVar49 + 2;
      if (uVar53 <= iVar12 + uVar46) break;
      iVar12 = iVar12 + iVar44;
      uVar25 = uVar49 + 3;
      if (uVar53 <= iVar12 + uVar46) break;
      iVar12 = iVar12 + iVar44;
      uVar25 = uVar49 + 4;
      if (uVar53 <= iVar12 + uVar46) break;
      iVar12 = iVar12 + iVar44;
      uVar25 = uVar49 + 5;
      if (uVar53 <= iVar12 + uVar46) break;
      iVar12 = iVar12 + iVar44;
      uVar25 = uVar49 + 6;
      if (uVar53 <= iVar12 + uVar46) break;
      iVar12 = iVar12 + iVar44;
      uVar25 = uVar49 + 7;
      if (uVar53 <= iVar12 + uVar46) break;
      iVar12 = iVar12 + iVar44;
      uVar25 = uVar49 + 8;
      if (uVar53 <= iVar12 + uVar46) break;
      iVar12 = iVar12 + iVar44;
      uVar25 = uVar49 + 9;
      if (uVar53 <= iVar12 + uVar46) break;
      iVar12 = iVar12 + iVar44;
      uVar25 = uVar49 + 10;
      if (uVar53 <= iVar12 + uVar46) break;
      iVar12 = iVar12 + iVar44;
      uVar25 = uVar49 + 0xb;
      if (uVar53 <= iVar12 + uVar46) break;
      iVar12 = iVar12 + iVar44;
      uVar25 = uVar49 + 0xc;
      if (uVar53 <= iVar12 + uVar46) break;
      iVar12 = iVar12 + iVar44;
      uVar25 = uVar49 + 0xd;
      if (uVar53 <= iVar12 + uVar46) break;
      iVar12 = iVar12 + iVar44;
      uVar25 = uVar49 + 0xe;
      if (uVar53 <= iVar12 + uVar46) break;
      iVar12 = iVar12 + iVar44;
      uVar25 = uVar49 + 0xf;
      if (uVar53 <= iVar12 + uVar46) break;
      iVar12 = iVar12 + iVar44;
      uVar49 = uVar49 + 0x10;
      uVar25 = uVar49;
    } while (iVar12 + uVar46 < uVar53);
  }
  if (uVar25 < 0x200000) {
    if (0x3fff < uVar25) {
      bVar10 = (byte)((uVar25 << 0xb) >> 0x19) | 0x80;
      bVar19 = (byte)((uVar25 << 0x12) >> 0x19) | 0x80;
      bVar24 = (byte)uVar25 & 0x7f;
      goto LAB_000c320c;
    }
    if (uVar25 < 0x80) goto LAB_000c3450;
    bVar24 = (byte)uVar25 & 0x7f;
    bVar19 = (byte)((uVar25 << 0x12) >> 0x19) | 0x80;
    iVar45 = 2;
    puVar6 = &DAT_00000004;
    iVar44 = 3;
    iVar12 = 1;
    iVar42 = 0;
  }
  else {
    bVar10 = 0xff;
    bVar24 = 0x7f;
    bVar19 = bVar10;
LAB_000c320c:
    iVar45 = 3;
    puVar6 = &DAT_00000005;
    iVar44 = 4;
    iVar12 = 2;
    iVar42 = 1;
    *param_1 = bVar10;
  }
  param_1[iVar42] = bVar19;
LAB_000c3228:
  iVar42 = DAT_000c3d5c;
  param_1[iVar12] = bVar24;
  param_1[iVar45] = 0xff;
  param_1[iVar44] = '\0';
  *(undefined4 *)(iVar42 + 0xc3f0c) = 0;
  *(undefined4 *)(iVar42 + 0xc3f10) = 0;
  return puVar6;
}

