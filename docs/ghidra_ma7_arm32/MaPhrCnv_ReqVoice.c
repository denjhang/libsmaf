/* MaPhrCnv_ReqVoice @ 000bfe08 2598B */


/* YAMAHA::MaPhrCnv_ReqVoice(_MACNV_SEQ_INFO*) */

void YAMAHA::MaPhrCnv_ReqVoice(_MACNV_SEQ_INFO *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  byte bVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  int *piVar16;
  byte *pbVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  bool bVar21;
  uint local_80;
  uint local_6c;
  uint local_64;
  uint local_60;
  uint local_5c;
  byte local_58;
  byte local_57;
  byte local_56;
  byte local_55;
  byte local_54;
  byte local_53;
  byte local_52;
  undefined1 local_51;
  byte local_50;
  byte local_4f;
  byte local_4e;
  byte local_4d;
  byte local_4c;
  byte local_4b;
  int local_2c;
  
  piVar16 = *(int **)(DAT_000c0874 + 0xbfe18);
  local_2c = *piVar16;
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
     (piVar14 = *(int **)(param_1 + 4), piVar14 == (int *)0x0)) {
    uVar4 = 0xfffffffe;
  }
  else if (*piVar14 == 1) {
    uVar4 = 0xffffffff;
    piVar14[0x439] = -1;
    piVar14[0x43b] = -1;
    piVar14[0x43d] = -1;
    piVar14[0x43f] = -1;
    piVar14[0x441] = -1;
    piVar14[0x443] = -1;
    piVar14[0x445] = -1;
    piVar14[0x447] = -1;
    piVar14[0x449] = -1;
    piVar14[1099] = -1;
    piVar14[0x44d] = -1;
    piVar14[0x44f] = -1;
    piVar14[0x451] = -1;
    piVar14[0x453] = -1;
    piVar14[0x455] = -1;
    piVar14[0x457] = -1;
    if (piVar14[5] == 1) {
      iVar12 = *(int *)(param_1 + 4);
      pbVar17 = *(byte **)(iVar12 + 0x40);
      if ((pbVar17 != (byte *)0x0) && (uVar18 = *(uint *)(iVar12 + 0x18), 7 < uVar18)) {
        uVar6 = 0;
        do {
          uVar13 = (uint)pbVar17[1] << 0x10 | (uint)*pbVar17 << 0x18 | (uint)pbVar17[3] |
                   (uint)pbVar17[2] << 8;
          uVar15 = (uint)pbVar17[5] << 0x10 | (uint)pbVar17[4] << 0x18 | (uint)pbVar17[7] |
                   (uint)pbVar17[6] << 8;
          if (uVar13 == 0x4445564f) {
            iVar7 = iVar12 + uVar6 * 8;
            *(undefined4 *)(iVar7 + 0x10e4) = 0;
            if (uVar15 == 0) {
LAB_000c046e:
              *(undefined4 *)(iVar7 + 0x10e8) = 2;
            }
            else {
              bVar1 = pbVar17[8];
              uVar13 = bVar1 & 0x7f;
              *(uint *)(iVar7 + 0x10e8) = uVar13;
              if (uVar13 == 0x2c) {
LAB_000c0524:
                uVar6 = uVar6 + 1;
                *(undefined4 *)(iVar7 + 0x10e8) = 0x32;
                goto LAB_000c0400;
              }
              if (uVar13 < 0x2d) {
                if ((bVar1 & 0x7f) == 0 || uVar13 == 1) goto LAB_000c046e;
              }
              else if (0x2f < uVar13) {
                if (0x31 < uVar13) {
                  uVar6 = uVar6 + 1;
                  if (uVar13 == 0x75) {
                    *(undefined4 *)(iVar7 + 0x10e8) = 0x74;
                  }
                  goto LAB_000c0400;
                }
                goto LAB_000c0524;
              }
            }
            goto switchD_000c04dc_caseD_13;
          }
          if (uVar13 == 0x4558564f) {
            if (((((0x14 < uVar15) && (uVar13 = (uint)pbVar17[10], uVar13 + 3 <= uVar15)) &&
                 (pbVar17[8] == 0xff)) && ((pbVar17[9] == 0xf0 && (pbVar17[0xb] == 0x43)))) &&
               (pbVar17[uVar13 + 10] == 0xf7)) {
              switch(uVar13) {
              case 0x12:
              case 0x1c:
                if (pbVar17[0xc] == 3) {
                  if (uVar13 == 0x12) {
                    local_6c = 0x16;
                  }
                  else {
                    local_6c = 0x2a;
                  }
                  if (uVar13 == 0x12) {
                    uVar13 = 2;
                  }
                  else {
                    uVar13 = 4;
                  }
                  local_58 = pbVar17[0x11] & 3 | 0x80;
                  bVar1 = pbVar17[0x10];
                  uVar19 = 0;
                  local_57 = bVar1 & 199;
                  if ((bVar1 & 6) == 0) {
                    uVar13 = 2;
                  }
                  pbVar11 = &local_4c;
                  pbVar20 = pbVar17 + 0x12;
                  do {
                    bVar2 = *pbVar20;
                    uVar5 = (uint)bVar2;
                    if ((int)(uVar5 << 0x1d) < 0) {
                      bVar10 = 0;
                    }
                    else {
                      bVar10 = pbVar20[1] & 0xf0;
                    }
                    pbVar11[-10] = bVar10 | bVar2 & 1;
                    uVar8 = uVar5 << 0x1e;
                    bVar21 = -1 < (int)uVar8;
                    if (bVar21) {
                      uVar8 = pbVar20[1] & 0xf0;
                    }
                    bVar10 = (byte)uVar8;
                    if (!bVar21) {
                      bVar10 = 0x40;
                    }
                    pbVar11[-9] = bVar10 | pbVar20[1] & 0xf;
                    bVar21 = uVar19 != 0;
                    uVar19 = uVar19 + 1;
                    pbVar11[-8] = pbVar20[2];
                    bVar10 = (byte)((bVar1 & 0x3f) >> 3);
                    if (bVar21) {
                      bVar10 = 0;
                    }
                    pbVar11[-7] = pbVar20[3];
                    bVar3 = pbVar20[4];
                    pbVar11[-5] = 0;
                    pbVar11[-6] = (byte)((uVar5 << 0x1c) >> 0x1f) |
                                  (bVar3 & 0x38) << 1 | (byte)((bVar3 & 0xc0) >> 5);
                    bVar3 = pbVar20[4];
                    pbVar11[-3] = 0;
                    pbVar11[-1] = bVar2 & 0xf0;
                    pbVar11[-2] = 0;
                    pbVar11[-4] = bVar10 | (bVar3 & 7) << 3;
                    pbVar11 = pbVar11 + 10;
                    pbVar20 = pbVar20 + 5;
                  } while (uVar19 < uVar13);
LAB_000c0564:
                  MaSndDrv_MultiCnv(&local_58,local_6c);
                  iVar7 = *(int *)(param_1 + 4) + uVar6 * 8;
                  *(undefined4 *)(iVar7 + 0x10e4) = 1;
                  *(uint *)(iVar7 + 0x10e8) = uVar6;
                  MaSndDrv_SetVoice(param_1,1,uVar6,0,0,0,0,0,&local_58,local_6c);
                }
                break;
              case 0x14:
              case 0x22:
                if ((pbVar17[0xc] == 4) && (pbVar17[0xd] == 1)) {
                  if (uVar13 == 0x12) {
                    uVar9 = 2;
LAB_000c0558:
                    local_6c = 0x2a;
                  }
                  else {
                    uVar9 = 4;
                    if (uVar13 != 0x14) goto LAB_000c0558;
                    local_6c = 0x16;
                  }
                  FUN_0002e91c(pbVar17 + 0xe,&local_58,uVar9);
                  goto LAB_000c0564;
                }
              }
            }
switchD_000c04dc_caseD_13:
            uVar6 = uVar6 + 1;
          }
LAB_000c0400:
          uVar18 = uVar18 + (-8 - uVar15);
          pbVar17 = pbVar17 + uVar15 + 8;
        } while (7 < uVar18 && uVar6 < 4);
      }
    }
    else {
      if (piVar14[5] != 2) goto LAB_000c0024;
      iVar12 = *(int *)(param_1 + 4);
      pbVar17 = *(byte **)(iVar12 + 0x40);
      if (pbVar17 != (byte *)0x0) {
        *(undefined4 *)(iVar12 + 0x1164) = 0;
        *(undefined4 *)(iVar12 + 0x1168) = 0;
        *(undefined4 *)(iVar12 + 0x116c) = 0;
        *(undefined4 *)(iVar12 + 0x1170) = 0;
        *(undefined4 *)(iVar12 + 0x1174) = 0;
        *(undefined4 *)(iVar12 + 0x1178) = 0;
        *(undefined4 *)(iVar12 + 0x117c) = 0;
        *(undefined4 *)(iVar12 + 0x1180) = 0;
        *(undefined4 *)(iVar12 + 0x1184) = 0;
        *(undefined4 *)(iVar12 + 0x1188) = 0;
        *(undefined4 *)(iVar12 + 0x118c) = 0;
        *(undefined4 *)(iVar12 + 0x1190) = 0;
        *(undefined4 *)(iVar12 + 0x1194) = 0;
        *(undefined4 *)(iVar12 + 0x1198) = 0;
        *(undefined4 *)(iVar12 + 0x119c) = 0;
        *(undefined4 *)(iVar12 + 0x11a0) = 0;
        *(undefined4 *)(iVar12 + 0x11a4) = 0;
        *(undefined4 *)(iVar12 + 0x11a8) = 0;
        *(undefined4 *)(iVar12 + 0x11ac) = 0;
        *(undefined4 *)(iVar12 + 0x11b0) = 0;
        *(undefined4 *)(iVar12 + 0x11b4) = 0;
        *(undefined4 *)(iVar12 + 0x11b8) = 0;
        *(undefined4 *)(iVar12 + 0x11bc) = 0;
        *(undefined4 *)(iVar12 + 0x11c0) = 0;
        *(undefined4 *)(iVar12 + 0x11c4) = 0;
        *(undefined4 *)(iVar12 + 0x11c8) = 0;
        *(undefined4 *)(iVar12 + 0x11cc) = 0;
        *(undefined4 *)(iVar12 + 0x11d0) = 0;
        *(undefined4 *)(iVar12 + 0x11d4) = 0;
        *(undefined4 *)(iVar12 + 0x11d8) = 0;
        *(undefined4 *)(iVar12 + 0x11dc) = 0;
        *(undefined4 *)(iVar12 + 0x11e0) = 0;
        uVar18 = *(uint *)(iVar12 + 0x18);
        if (7 < uVar18) {
          local_80 = 0;
          do {
            uVar6 = (uint)pbVar17[1] << 0x10 | (uint)*pbVar17 << 0x18 | (uint)pbVar17[3] |
                    (uint)pbVar17[2] << 8;
            uVar13 = (uint)pbVar17[5] << 0x10 | (uint)pbVar17[4] << 0x18 | (uint)pbVar17[7] |
                     (uint)pbVar17[6] << 8;
            if (uVar6 == 0x45585756) {
              if (((((pbVar17[8] == 0xff) && (pbVar17[9] == 0xf1)) && (pbVar17[0xc] == 0x43)) &&
                  ((((pbVar17[0xd] == 5 && (pbVar17[0xe] == 0)) &&
                    ((uVar6 = (uint)pbVar17[0xf], uVar6 < 0x10 &&
                     ((uVar15 = (uint)*(ushort *)(pbVar17 + 10), 9 < uVar13 && (4 < uVar15)))))) &&
                   (uVar15 + 4 <= uVar13)))) &&
                 ((pbVar17[uVar15 + 0xb] == 0xf7 &&
                  (iVar12 = *(int *)(param_1 + 4) + uVar6 * 8, *(int *)(iVar12 + 0x1164) == 0)))) {
                *(uint *)(iVar12 + 0x1168) = uVar15 - 5;
                *(byte **)(iVar12 + 0x1164) = pbVar17 + 0x10;
                MaSndDrv_SetWtWave(param_1,uVar6,0,pbVar17 + 0x10,uVar15 - 5);
              }
            }
            else if ((((uVar6 == 0x4558564f) && (0x18 < uVar13)) &&
                     (uVar6 = (uint)pbVar17[10], uVar6 + 3 <= uVar13)) &&
                    (((pbVar17[8] == 0xff && (pbVar17[9] == 0xf0)) &&
                     ((pbVar17[0xb] == 0x43 &&
                      ((pbVar17[0xc] == 5 && (pbVar17[uVar6 + 10] == 0xf7)))))))) {
              if ((uVar6 == 0x17) || (uVar6 == 0x25)) {
                if (pbVar17[0xd] == 1) {
                  local_64 = (uint)pbVar17[0x10];
                  if (uVar6 == 0x17) {
                    local_5c = 0x16;
                  }
                  else {
                    local_5c = 0x2a;
                  }
                  if (local_64 < 0x80) {
                    local_6c = 0;
                    local_60 = 0;
                    goto LAB_000c00d8;
                  }
                }
              }
              else if ((uVar6 == 0x16) && (pbVar17[0xd] == 2)) {
                local_6c = (uint)pbVar17[0x1f];
                local_64 = (uint)CONCAT11(pbVar17[0x10],pbVar17[0x11]);
                if ((-1 < (int)((uint)pbVar17[0x12] << 0x1d)) &&
                   (((pbVar17[0x13] & 3) == 0 && (local_64 - 1 < 48000)))) {
                  local_5c = 0xe;
                  local_60 = 1;
LAB_000c00d8:
                  uVar15 = (uint)pbVar17[0xe];
                  if ((uVar15 & 0x7f) == 1) {
                    uVar19 = (uint)pbVar17[0xf];
                    if (uVar15 == 1) {
                      if ((pbVar17[0xf] & 0x80) == 0) goto LAB_000c00f6;
                    }
                    else if ((uVar15 != 0x81) || (uVar19 - 1 < 0x2f)) {
LAB_000c00f6:
                      iVar12 = *(int *)(param_1 + 4);
                      if (iVar12 != -0x10e4) {
                        if (uVar15 == *(uint *)(iVar12 + 0x10e4)) {
                          if (uVar19 == *(uint *)(iVar12 + 0x10e8)) goto LAB_000bff34;
                        }
                        else if (*(uint *)(iVar12 + 0x10e4) == 0xffffffff) goto LAB_000c0224;
                        if (uVar15 == *(uint *)(iVar12 + 0x10ec)) {
                          if (uVar19 == *(uint *)(iVar12 + 0x10f0)) goto LAB_000bff34;
                        }
                        else if (*(uint *)(iVar12 + 0x10ec) == 0xffffffff) goto LAB_000c0224;
                        if (uVar15 == *(uint *)(iVar12 + 0x10f4)) {
                          if (uVar19 == *(uint *)(iVar12 + 0x10f8)) goto LAB_000bff34;
                        }
                        else if (*(uint *)(iVar12 + 0x10f4) == 0xffffffff) goto LAB_000c0224;
                        if (uVar15 == *(uint *)(iVar12 + 0x10fc)) {
                          if (uVar19 == *(uint *)(iVar12 + 0x1100)) goto LAB_000bff34;
                        }
                        else if (*(uint *)(iVar12 + 0x10fc) == 0xffffffff) goto LAB_000c0224;
                        if (uVar15 == *(uint *)(iVar12 + 0x1104)) {
                          if (uVar19 == *(uint *)(iVar12 + 0x1108)) goto LAB_000bff34;
                        }
                        else if (*(uint *)(iVar12 + 0x1104) == 0xffffffff) goto LAB_000c0224;
                        if (uVar15 == *(uint *)(iVar12 + 0x110c)) {
                          if (uVar19 == *(uint *)(iVar12 + 0x1110)) goto LAB_000bff34;
                        }
                        else if (*(uint *)(iVar12 + 0x110c) == 0xffffffff) goto LAB_000c0224;
                        if (uVar15 == *(uint *)(iVar12 + 0x1114)) {
                          if (uVar19 == *(uint *)(iVar12 + 0x1118)) goto LAB_000bff34;
                        }
                        else if (*(uint *)(iVar12 + 0x1114) == 0xffffffff) goto LAB_000c0224;
                        if (uVar15 == *(uint *)(iVar12 + 0x111c)) {
                          if (uVar19 == *(uint *)(iVar12 + 0x1120)) goto LAB_000bff34;
                        }
                        else if (*(uint *)(iVar12 + 0x111c) == 0xffffffff) goto LAB_000c0224;
                        if (uVar15 == *(uint *)(iVar12 + 0x1124)) {
                          if (uVar19 == *(uint *)(iVar12 + 0x1128)) goto LAB_000bff34;
                        }
                        else if (*(uint *)(iVar12 + 0x1124) == 0xffffffff) goto LAB_000c0224;
                        if (uVar15 == *(uint *)(iVar12 + 0x112c)) {
                          if (uVar19 == *(uint *)(iVar12 + 0x1130)) goto LAB_000bff34;
                        }
                        else if (*(uint *)(iVar12 + 0x112c) == 0xffffffff) goto LAB_000c0224;
                        if (uVar15 == *(uint *)(iVar12 + 0x1134)) {
                          if (uVar19 == *(uint *)(iVar12 + 0x1138)) goto LAB_000bff34;
                        }
                        else if (*(uint *)(iVar12 + 0x1134) == 0xffffffff) goto LAB_000c0224;
                        if (uVar15 == *(uint *)(iVar12 + 0x113c)) {
                          if (uVar19 == *(uint *)(iVar12 + 0x1140)) goto LAB_000bff34;
                        }
                        else if (*(uint *)(iVar12 + 0x113c) == 0xffffffff) goto LAB_000c0224;
                        if (uVar15 == *(uint *)(iVar12 + 0x1144)) {
                          if (uVar19 == *(uint *)(iVar12 + 0x1148)) goto LAB_000bff34;
                        }
                        else if (*(uint *)(iVar12 + 0x1144) == 0xffffffff) goto LAB_000c0224;
                        if (uVar15 == *(uint *)(iVar12 + 0x114c)) {
                          if (uVar19 == *(uint *)(iVar12 + 0x1150)) goto LAB_000bff34;
                        }
                        else if (*(uint *)(iVar12 + 0x114c) == 0xffffffff) goto LAB_000c0224;
                        if (uVar15 == *(uint *)(iVar12 + 0x1154)) {
                          if (uVar19 == *(uint *)(iVar12 + 0x1158)) goto LAB_000bff34;
                        }
                        else if (*(uint *)(iVar12 + 0x1154) == 0xffffffff) goto LAB_000c0224;
                        if ((uVar15 == *(uint *)(iVar12 + 0x115c)) &&
                           (uVar19 == *(uint *)(iVar12 + 0x1160))) goto LAB_000bff34;
                      }
LAB_000c0224:
                      if (uVar6 == 0x17) {
                        FUN_0002e91c(pbVar17 + 0x11,&local_58,2);
                      }
                      else if (uVar6 == 0x25) {
                        FUN_0002e91c(pbVar17 + 0x11,&local_58,4);
                      }
                      else {
                        if (uVar6 != 0x16) goto LAB_000bff34;
                        bVar1 = pbVar17[0x12];
                        local_58 = bVar1 & 0xf8;
                        bVar2 = pbVar17[0x13];
                        if ((int)((uint)bVar2 << 0x1d) < 0) {
                          local_57 = (bVar2 & 0xc3) + 0x30;
                        }
                        else {
                          local_57 = (bVar2 & 0xc3) + (bVar1 & 1) * ' ';
                          if ((bVar1 & 1) == 0) {
                            local_58 = 0x80;
                          }
                        }
                        local_56 = pbVar17[0x14];
                        local_55 = pbVar17[0x15];
                        local_54 = pbVar17[0x16];
                        local_53 = pbVar17[0x17];
                        local_52 = pbVar17[0x18];
                        local_51 = 0;
                        local_50 = pbVar17[0x19];
                        local_4f = pbVar17[0x1a];
                        local_4e = pbVar17[0x1b];
                        local_4d = pbVar17[0x1c];
                        local_4c = pbVar17[0x1d];
                        local_4b = pbVar17[0x1e];
                      }
                      if (local_60 == 0) {
                        MaSndDrv_MultiCnv(&local_58,local_5c);
LAB_000c02d8:
                        if (*(int *)(iVar12 + 0x10e4) == -1) {
                          iVar7 = 0;
LAB_000c06b2:
                          iVar12 = iVar12 + iVar7 * 8;
                          *(uint *)(iVar12 + 0x10e4) = (uint)pbVar17[0xe];
                          *(uint *)(iVar12 + 0x10e8) = (uint)pbVar17[0xf];
                        }
                        else {
                          if (*(int *)(iVar12 + 0x10ec) == -1) {
                            iVar7 = 1;
                            goto LAB_000c06b2;
                          }
                          if (*(int *)(iVar12 + 0x10f4) == -1) {
                            iVar7 = 2;
                            goto LAB_000c06b2;
                          }
                          if (*(int *)(iVar12 + 0x10fc) == -1) {
                            iVar7 = 3;
                            goto LAB_000c06b2;
                          }
                          if (*(int *)(iVar12 + 0x1104) == -1) {
                            iVar7 = 4;
                            goto LAB_000c06b2;
                          }
                          if (*(int *)(iVar12 + 0x110c) == -1) {
                            iVar7 = 5;
                            goto LAB_000c06b2;
                          }
                          if (*(int *)(iVar12 + 0x1114) == -1) {
                            iVar7 = 6;
                            goto LAB_000c06b2;
                          }
                          if (*(int *)(iVar12 + 0x111c) == -1) {
                            iVar7 = 7;
                            goto LAB_000c06b2;
                          }
                          if (*(int *)(iVar12 + 0x1124) == -1) {
                            iVar7 = 8;
                            goto LAB_000c06b2;
                          }
                          if (*(int *)(iVar12 + 0x112c) == -1) {
                            iVar7 = 9;
                            goto LAB_000c06b2;
                          }
                          if (*(int *)(iVar12 + 0x1134) == -1) {
                            iVar7 = 10;
                            goto LAB_000c06b2;
                          }
                          if (*(int *)(iVar12 + 0x113c) == -1) {
                            iVar7 = 0xb;
                            goto LAB_000c06b2;
                          }
                          if (*(int *)(iVar12 + 0x1144) == -1) {
                            iVar7 = 0xc;
                            goto LAB_000c06b2;
                          }
                          if (*(int *)(iVar12 + 0x114c) == -1) {
                            iVar7 = 0xd;
                            goto LAB_000c06b2;
                          }
                          if (*(int *)(iVar12 + 0x1154) == -1) {
                            iVar7 = 0xe;
                            goto LAB_000c06b2;
                          }
                          if (*(int *)(iVar12 + 0x115c) == -1) {
                            iVar7 = 0xf;
                            goto LAB_000c06b2;
                          }
                        }
                        iVar12 = MaSndDrv_SetVoice(param_1,(uint)pbVar17[0xe],(uint)pbVar17[0xf],
                                                   local_60,local_64,local_6c,0,0,&local_58,local_5c
                                                  );
                        if ((iVar12 == 0) || (iVar12 == 1)) {
                          local_80 = local_80 + 1;
                        }
                      }
                      else if ((int)(local_6c << 0x18) < 0) {
                        local_6c = local_6c & 0x7f;
                        if (local_6c < 7) goto LAB_000c02d8;
                      }
                      else if ((*(int *)(iVar12 + (local_6c + 0x22a) * 8 + 0x14) != 0) &&
                              (local_6c = local_6c | 0x80, local_6c < 0xc0)) goto LAB_000c02d8;
                    }
                  }
                }
              }
            }
LAB_000bff34:
            pbVar17 = pbVar17 + uVar13 + 8;
            uVar18 = uVar18 + (-8 - uVar13);
          } while (7 < uVar18 && local_80 < 0x10);
        }
      }
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 0xffffffff;
  }
LAB_000c0024:
  if (local_2c != *piVar16) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

