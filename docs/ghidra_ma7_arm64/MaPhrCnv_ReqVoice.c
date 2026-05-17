/* MaPhrCnv_ReqVoice @ 001f8bec 3656B */


/* YAMAHA::MaPhrCnv_ReqVoice(_MACNV_SEQ_INFO*) */

void YAMAHA::MaPhrCnv_ReqVoice(_MACNV_SEQ_INFO *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  byte bVar18;
  uint uVar19;
  byte local_38;
  byte local_37;
  byte local_36;
  byte local_35;
  byte local_34;
  byte local_33;
  byte local_32;
  undefined1 local_31;
  byte local_30;
  byte local_2f;
  byte local_2e;
  byte local_2d;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  byte local_29;
  byte local_28;
  undefined1 local_27;
  char local_26;
  undefined1 local_25;
  undefined1 local_24;
  byte local_23;
  byte local_22;
  byte local_21;
  byte local_20;
  byte local_1f;
  byte local_1e;
  undefined1 local_1d;
  char local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  byte local_19;
  byte local_18;
  byte local_17;
  byte local_16;
  byte local_15;
  byte local_14;
  undefined1 local_13;
  char local_12;
  undefined1 local_11;
  undefined1 local_10;
  byte local_f;
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
     (piVar14 = *(int **)(param_1 + 8), piVar14 == (int *)0x0)) {
    uVar5 = 0xfffffffe;
  }
  else if (*piVar14 == 1) {
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
    piVar14[0x459] = -1;
    piVar14[0x45b] = -1;
    piVar14[0x45d] = -1;
    if (piVar14[8] == 1) {
      pbVar13 = *(byte **)(piVar14 + 0x14);
      if ((pbVar13 != (byte *)0x0) && (uVar15 = piVar14[9], 7 < uVar15)) {
        uVar16 = 0;
        do {
          uVar6 = (uint)pbVar13[1] << 0x10 | (uint)*pbVar13 << 0x18 | (uint)pbVar13[3] |
                  (uint)pbVar13[2] << 8;
          uVar3 = (uint)pbVar13[5] << 0x10 | (uint)pbVar13[4] << 0x18 | (uint)pbVar13[7] |
                  (uint)pbVar13[6] << 8;
          if (uVar6 == 0x4445564f) {
            piVar14[(ulong)uVar16 * 2 + 0x43f] = 0;
            if (uVar3 == 0) {
LAB_001f93f0:
              piVar14[(ulong)uVar16 * 2 + 0x440] = 2;
              uVar19 = uVar16 + 1;
            }
            else {
              uVar6 = pbVar13[8] & 0x7f;
              piVar14[(ulong)uVar16 * 2 + 0x440] = uVar6;
              if (uVar6 != 0x2c) {
                if (uVar6 < 0x2d) {
                  if (uVar6 < 2) goto LAB_001f93f0;
                }
                else if (0x2f < uVar6) {
                  if (uVar6 < 0x32) goto LAB_001f93fc;
                  if (uVar6 == 0x75) {
                    piVar14[(ulong)uVar16 * 2 + 0x440] = 0x74;
                  }
                }
                goto switchD_001f93dc_caseD_13;
              }
LAB_001f93fc:
              piVar14[(ulong)uVar16 * 2 + 0x440] = 0x32;
              uVar19 = uVar16 + 1;
            }
          }
          else {
            uVar19 = uVar16;
            if (uVar6 == 0x4558564f) {
              if (((((0x14 < uVar3) && (bVar1 = pbVar13[10], bVar1 + 3 <= uVar3)) &&
                   (pbVar13[8] == 0xff)) && ((pbVar13[9] == 0xf0 && (pbVar13[0xb] == 0x43)))) &&
                 (pbVar13[(ulong)bVar1 + 10] == 0xf7)) {
                switch(bVar1) {
                case 0x12:
                case 0x1c:
                  if (pbVar13[0xc] == 3) {
                    iVar4 = 4;
                    if (bVar1 == 0x12) {
                      iVar4 = 2;
                    }
                    local_38 = pbVar13[0x11] & 3 | 0x80;
                    bVar18 = pbVar13[0x10];
                    uVar6 = 0x2a;
                    if (bVar1 == 0x12) {
                      uVar6 = 0x16;
                    }
                    local_36 = 0;
                    local_37 = bVar18 & 199;
                    bVar1 = pbVar13[0x12];
                    if ((bVar18 & 6) == 0) {
                      iVar4 = 2;
                    }
                    if ((bVar1 >> 2 & 1) == 0) {
                      local_36 = pbVar13[0x13] & 0xf0;
                    }
                    local_36 = local_36 | bVar1 & 1;
                    if ((bVar1 >> 1 & 1) == 0) {
                      bVar2 = pbVar13[0x13];
                      local_35 = bVar2 & 0xf0;
                    }
                    else {
                      bVar2 = pbVar13[0x13];
                      local_35 = 0x40;
                    }
                    local_35 = local_35 | bVar2 & 0xf;
                    local_2d = bVar1 & 0xf0;
                    local_2c = 0;
                    local_34 = pbVar13[0x14];
                    local_33 = pbVar13[0x15];
                    local_31 = 0;
                    local_32 = (pbVar13[0x16] & 0x38) << 1 | (byte)((pbVar13[0x16] & 0xc0) >> 5) |
                               bVar1 >> 3 & 1;
                    local_2f = 0;
                    local_2e = 0;
                    local_30 = bVar18 >> 3 & 7 | (pbVar13[0x16] & 7) << 3;
                    bVar1 = pbVar13[0x17];
                    if ((bVar1 >> 2 & 1) == 0) {
                      local_2c = pbVar13[0x18] & 0xf0;
                    }
                    local_2c = local_2c | bVar1 & 1;
                    if ((bVar1 >> 1 & 1) == 0) {
                      bVar18 = pbVar13[0x18];
                      local_2b = bVar18 & 0xf0;
                    }
                    else {
                      bVar18 = pbVar13[0x18];
                      local_2b = 0x40;
                    }
                    local_2b = local_2b | bVar18 & 0xf;
                    local_23 = bVar1 & 0xf0;
                    local_2a = pbVar13[0x19];
                    local_29 = pbVar13[0x1a];
                    local_27 = 0;
                    local_28 = (pbVar13[0x1b] & 0x38) << 1 | (byte)((pbVar13[0x1b] & 0xc0) >> 5) |
                               bVar1 >> 3 & 1;
                    local_25 = 0;
                    local_26 = (pbVar13[0x1b] & 7) << 3;
                    local_24 = 0;
                    if (iVar4 != 2) {
                      bVar1 = pbVar13[0x1c];
                      local_22 = 0;
                      if ((bVar1 >> 2 & 1) == 0) {
                        local_22 = pbVar13[0x1d] & 0xf0;
                      }
                      local_22 = local_22 | bVar1 & 1;
                      if ((bVar1 >> 1 & 1) == 0) {
                        bVar18 = pbVar13[0x1d];
                        local_21 = bVar18 & 0xf0;
                      }
                      else {
                        bVar18 = pbVar13[0x1d];
                        local_21 = 0x40;
                      }
                      local_21 = local_21 | bVar18 & 0xf;
                      local_19 = bVar1 & 0xf0;
                      local_20 = pbVar13[0x1e];
                      local_1f = pbVar13[0x1f];
                      local_1d = 0;
                      local_1e = (pbVar13[0x20] & 0x38) << 1 | (byte)((pbVar13[0x20] & 0xc0) >> 5) |
                                 bVar1 >> 3 & 1;
                      local_1b = 0;
                      local_1c = (pbVar13[0x20] & 7) << 3;
                      local_1a = 0;
                      if (iVar4 == 4) {
                        bVar1 = pbVar13[0x21];
                        local_18 = 0;
                        if ((bVar1 >> 2 & 1) == 0) {
                          local_18 = pbVar13[0x22] & 0xf0;
                        }
                        local_18 = local_18 | bVar1 & 1;
                        if ((bVar1 >> 1 & 1) == 0) {
                          bVar18 = pbVar13[0x22];
                          local_17 = bVar18 & 0xf0;
                        }
                        else {
                          bVar18 = pbVar13[0x22];
                          local_17 = 0x40;
                        }
                        local_17 = local_17 | bVar18 & 0xf;
                        local_f = bVar1 & 0xf0;
                        local_16 = pbVar13[0x23];
                        local_15 = pbVar13[0x24];
                        local_13 = 0;
                        local_14 = (pbVar13[0x25] & 0x38) << 1 | (byte)((pbVar13[0x25] & 0xc0) >> 5)
                                   | bVar1 >> 3 & 1;
                        local_11 = 0;
                        local_12 = (pbVar13[0x25] & 7) << 3;
                        local_10 = 0;
                      }
                    }
LAB_001f94dc:
                    MaSndDrv_MultiCnv(&local_38,uVar6);
                    lVar17 = *(long *)(param_1 + 8) + (ulong)uVar16 * 8;
                    *(uint *)(lVar17 + 0x1100) = uVar16;
                    *(undefined4 *)(lVar17 + 0x10fc) = 1;
                    uVar19 = uVar16 + 1;
                    MaSndDrv_SetVoice(param_1,1,uVar16,0,0,0,0,0,&local_38,uVar6);
                    goto LAB_001f92bc;
                  }
                  break;
                case 0x14:
                case 0x22:
                  if ((pbVar13[0xc] == 4) && (pbVar13[0xd] == 1)) {
                    if (bVar1 == 0x12) {
                      uVar8 = 2;
                      uVar6 = 0x2a;
                    }
                    else {
                      uVar6 = 0x16;
                      if (bVar1 != 0x14) {
                        uVar6 = 0x2a;
                      }
                      uVar8 = 4;
                    }
                    FUN_00128a44(pbVar13 + 0xe,&local_38,uVar8);
                    goto LAB_001f94dc;
                  }
                }
              }
switchD_001f93dc_caseD_13:
              uVar19 = uVar16 + 1;
            }
          }
LAB_001f92bc:
          pbVar13 = pbVar13 + (ulong)uVar3 + 8;
          uVar15 = (uVar15 - uVar3) - 8;
        } while ((uVar19 < 4) && (uVar16 = uVar19, 7 < uVar15));
      }
    }
    else {
      if (piVar14[8] != 2) {
        uVar5 = 0xffffffff;
        goto LAB_001f8e68;
      }
      pbVar13 = *(byte **)(piVar14 + 0x14);
      if (pbVar13 != (byte *)0x0) {
        uVar15 = piVar14[9];
        piVar14[0x460] = 0;
        piVar14[0x461] = 0;
        piVar14[0x462] = 0;
        piVar14[0x464] = 0;
        piVar14[0x465] = 0;
        piVar14[0x466] = 0;
        piVar14[0x468] = 0;
        piVar14[0x469] = 0;
        piVar14[0x46a] = 0;
        piVar14[0x46c] = 0;
        piVar14[0x46d] = 0;
        piVar14[0x46e] = 0;
        piVar14[0x470] = 0;
        piVar14[0x471] = 0;
        piVar14[0x472] = 0;
        piVar14[0x474] = 0;
        piVar14[0x475] = 0;
        piVar14[0x476] = 0;
        piVar14[0x478] = 0;
        piVar14[0x479] = 0;
        piVar14[0x47a] = 0;
        piVar14[0x47c] = 0;
        piVar14[0x47d] = 0;
        piVar14[0x47e] = 0;
        piVar14[0x480] = 0;
        piVar14[0x481] = 0;
        piVar14[0x482] = 0;
        piVar14[0x484] = 0;
        piVar14[0x485] = 0;
        piVar14[0x486] = 0;
        piVar14[0x488] = 0;
        piVar14[0x489] = 0;
        piVar14[0x48a] = 0;
        piVar14[0x48c] = 0;
        piVar14[0x48d] = 0;
        piVar14[0x48e] = 0;
        piVar14[0x490] = 0;
        piVar14[0x491] = 0;
        piVar14[0x492] = 0;
        piVar14[0x494] = 0;
        piVar14[0x495] = 0;
        piVar14[0x496] = 0;
        piVar14[0x498] = 0;
        piVar14[0x499] = 0;
        piVar14[0x49a] = 0;
        piVar14[0x49c] = 0;
        piVar14[0x49d] = 0;
        piVar14[0x49e] = 0;
        if (7 < uVar15) {
          uVar16 = 0;
          do {
            uVar6 = (uint)pbVar13[1] << 0x10 | (uint)*pbVar13 << 0x18 | (uint)pbVar13[3] |
                    (uint)pbVar13[2] << 8;
            uVar3 = (uint)pbVar13[5] << 0x10 | (uint)pbVar13[4] << 0x18 | (uint)pbVar13[7] |
                    (uint)pbVar13[6] << 8;
            if (uVar6 == 0x45585756) {
              if ((((pbVar13[8] == 0xff) && (pbVar13[9] == 0xf1)) && (pbVar13[0xc] == 0x43)) &&
                 ((pbVar13[0xd] == 5 && (pbVar13[0xe] == 0)))) {
                bVar1 = pbVar13[0xf];
                if ((((bVar1 < 0x10) &&
                     ((uVar6 = (uint)*(ushort *)(pbVar13 + 10), 9 < uVar3 && (4 < uVar6)))) &&
                    ((ulong)uVar6 + 3 < (ulong)uVar3)) &&
                   ((pbVar13[(ulong)uVar6 + 0xb] == 0xf7 &&
                    (lVar17 = *(long *)(param_1 + 8) + (ulong)bVar1 * 0x10,
                    *(long *)(lVar17 + 0x1180) == 0)))) {
                  *(byte **)(lVar17 + 0x1180) = pbVar13 + 0x10;
                  *(uint *)(lVar17 + 0x1188) = uVar6 - 5;
                  MaSndDrv_SetWtWave(param_1,(uint)bVar1,0,pbVar13 + 0x10,uVar6 - 5);
                }
              }
            }
            else if ((((uVar6 == 0x4558564f) && (0x18 < uVar3)) &&
                     (bVar1 = pbVar13[10], bVar1 + 3 <= uVar3)) &&
                    (((pbVar13[8] == 0xff && (pbVar13[9] == 0xf0)) &&
                     ((pbVar13[0xb] == 0x43 &&
                      ((pbVar13[0xc] == 5 && (pbVar13[(ulong)bVar1 + 10] == 0xf7)))))))) {
              if ((bVar1 == 0x17) || (bVar1 == 0x25)) {
                if (pbVar13[0xd] == 1) {
                  uVar6 = 0x16;
                  if (bVar1 != 0x17) {
                    uVar6 = 0x2a;
                  }
                  uVar19 = (uint)pbVar13[0x10];
                  if (pbVar13[0x10] < 0x80) {
                    uVar12 = 0;
                    uVar9 = 0;
                    goto LAB_001f8f68;
                  }
                }
              }
              else if ((bVar1 == 0x16) && (pbVar13[0xd] == 2)) {
                uVar19 = (uint)CONCAT11(pbVar13[0x10],pbVar13[0x11]);
                uVar12 = (ulong)pbVar13[0x1f];
                if (((pbVar13[0x12] >> 2 & 1) == 0) &&
                   (((pbVar13[0x13] & 3) == 0 && (uVar19 - 1 < 48000)))) {
                  uVar9 = 1;
                  uVar6 = 0xe;
LAB_001f8f68:
                  bVar18 = pbVar13[0xe];
                  if ((bVar18 & 0x7f) == 1) {
                    bVar2 = pbVar13[0xf];
                    uVar11 = (uint)bVar2;
                    if (bVar18 == 1) {
                      if (-1 < (char)bVar2) goto LAB_001f8f8c;
                    }
                    else if ((bVar18 != 0x81) || ((uVar11 - 1 & 0xff) < 0x2f)) {
LAB_001f8f8c:
                      lVar17 = *(long *)(param_1 + 8);
                      if (lVar17 != -0x10fc) {
                        if ((uint)bVar18 == *(uint *)(lVar17 + 0x10fc)) {
                          if (uVar11 == *(uint *)(lVar17 + 0x1100)) goto LAB_001f8d44;
                        }
                        else if (*(uint *)(lVar17 + 0x10fc) == 0xffffffff) goto LAB_001f90e0;
                        uVar10 = (uint)bVar18;
                        if (uVar10 == *(uint *)(lVar17 + 0x1104)) {
                          if (uVar11 == *(uint *)(lVar17 + 0x1108)) goto LAB_001f8d44;
                        }
                        else if (*(uint *)(lVar17 + 0x1104) == 0xffffffff) goto LAB_001f90e0;
                        uVar11 = (uint)bVar2;
                        if (uVar10 == *(uint *)(lVar17 + 0x110c)) {
                          if (uVar11 == *(uint *)(lVar17 + 0x1110)) goto LAB_001f8d44;
                        }
                        else if (*(uint *)(lVar17 + 0x110c) == 0xffffffff) goto LAB_001f90e0;
                        if (uVar10 == *(uint *)(lVar17 + 0x1114)) {
                          if (uVar11 == *(uint *)(lVar17 + 0x1118)) goto LAB_001f8d44;
                        }
                        else if (*(uint *)(lVar17 + 0x1114) == 0xffffffff) goto LAB_001f90e0;
                        if (uVar10 == *(uint *)(lVar17 + 0x111c)) {
                          if (uVar11 == *(uint *)(lVar17 + 0x1120)) goto LAB_001f8d44;
                        }
                        else if (*(uint *)(lVar17 + 0x111c) == 0xffffffff) goto LAB_001f90e0;
                        if (uVar10 == *(uint *)(lVar17 + 0x1124)) {
                          if (uVar11 == *(uint *)(lVar17 + 0x1128)) goto LAB_001f8d44;
                        }
                        else if (*(uint *)(lVar17 + 0x1124) == 0xffffffff) goto LAB_001f90e0;
                        if (uVar10 == *(uint *)(lVar17 + 0x112c)) {
                          if (uVar11 == *(uint *)(lVar17 + 0x1130)) goto LAB_001f8d44;
                        }
                        else if (*(uint *)(lVar17 + 0x112c) == 0xffffffff) goto LAB_001f90e0;
                        if (uVar10 == *(uint *)(lVar17 + 0x1134)) {
                          if (uVar11 == *(uint *)(lVar17 + 0x1138)) goto LAB_001f8d44;
                        }
                        else if (*(uint *)(lVar17 + 0x1134) == 0xffffffff) goto LAB_001f90e0;
                        if (uVar10 == *(uint *)(lVar17 + 0x113c)) {
                          if (uVar11 == *(uint *)(lVar17 + 0x1140)) goto LAB_001f8d44;
                        }
                        else if (*(uint *)(lVar17 + 0x113c) == 0xffffffff) goto LAB_001f90e0;
                        uVar10 = (uint)bVar18;
                        if (uVar10 == *(uint *)(lVar17 + 0x1144)) {
                          if (uVar11 == *(uint *)(lVar17 + 0x1148)) goto LAB_001f8d44;
                        }
                        else if (*(uint *)(lVar17 + 0x1144) == 0xffffffff) goto LAB_001f90e0;
                        uVar11 = (uint)bVar2;
                        if (uVar10 == *(uint *)(lVar17 + 0x114c)) {
                          if (uVar11 == *(uint *)(lVar17 + 0x1150)) goto LAB_001f8d44;
                        }
                        else if (*(uint *)(lVar17 + 0x114c) == 0xffffffff) goto LAB_001f90e0;
                        if (uVar10 == *(uint *)(lVar17 + 0x1154)) {
                          if (uVar11 == *(uint *)(lVar17 + 0x1158)) goto LAB_001f8d44;
                        }
                        else if (*(uint *)(lVar17 + 0x1154) == 0xffffffff) goto LAB_001f90e0;
                        if (uVar10 == *(uint *)(lVar17 + 0x115c)) {
                          if (uVar11 == *(uint *)(lVar17 + 0x1160)) goto LAB_001f8d44;
                        }
                        else if (*(uint *)(lVar17 + 0x115c) == 0xffffffff) goto LAB_001f90e0;
                        if (uVar10 == *(uint *)(lVar17 + 0x1164)) {
                          if (uVar11 == *(uint *)(lVar17 + 0x1168)) goto LAB_001f8d44;
                        }
                        else if (*(uint *)(lVar17 + 0x1164) == 0xffffffff) goto LAB_001f90e0;
                        if (uVar10 == *(uint *)(lVar17 + 0x116c)) {
                          if (uVar11 == *(uint *)(lVar17 + 0x1170)) goto LAB_001f8d44;
                        }
                        else if (*(uint *)(lVar17 + 0x116c) == 0xffffffff) goto LAB_001f90e0;
                        if ((uVar10 == *(uint *)(lVar17 + 0x1174)) &&
                           (uVar11 == *(uint *)(lVar17 + 0x1178))) goto LAB_001f8d44;
                      }
LAB_001f90e0:
                      if (bVar1 == 0x17) {
                        FUN_00128a44(pbVar13 + 0x11,&local_38,2);
                      }
                      else if (bVar1 == 0x25) {
                        FUN_00128a44(pbVar13 + 0x11,&local_38,4);
                      }
                      else {
                        if (bVar1 != 0x16) goto LAB_001f8d44;
                        bVar1 = pbVar13[0x12];
                        local_38 = bVar1 & 0xf8;
                        bVar18 = pbVar13[0x13];
                        if ((bVar18 >> 2 & 1) == 0) {
                          if ((bVar1 & 1) == 0) {
                            local_38 = 0x80;
                          }
                          local_37 = (bVar18 & 0xc3) + (bVar1 & 1) * ' ';
                        }
                        else {
                          local_37 = (bVar18 & 0xc3) + 0x30;
                        }
                        local_36 = pbVar13[0x14];
                        local_35 = pbVar13[0x15];
                        local_34 = pbVar13[0x16];
                        local_33 = pbVar13[0x17];
                        local_32 = pbVar13[0x18];
                        local_31 = 0;
                        local_30 = pbVar13[0x19];
                        local_2f = pbVar13[0x1a];
                        local_2e = pbVar13[0x1b];
                        local_2d = pbVar13[0x1c];
                        local_2c = pbVar13[0x1d];
                        local_2b = pbVar13[0x1e];
                      }
                      uVar11 = (uint)uVar12;
                      if (uVar9 == 0) {
                        MaSndDrv_MultiCnv(&local_38,uVar6);
LAB_001f9188:
                        if (*(int *)(lVar17 + 0x10fc) == -1) {
                          lVar7 = 0;
LAB_001f9474:
                          lVar17 = lVar17 + lVar7 * 8;
                          *(uint *)(lVar17 + 0x10fc) = (uint)pbVar13[0xe];
                          *(uint *)(lVar17 + 0x1100) = (uint)pbVar13[0xf];
                        }
                        else {
                          if (*(int *)(lVar17 + 0x1104) == -1) {
                            lVar7 = 1;
                            goto LAB_001f9474;
                          }
                          if (*(int *)(lVar17 + 0x110c) == -1) {
                            lVar7 = 2;
                            goto LAB_001f9474;
                          }
                          if (*(int *)(lVar17 + 0x1114) == -1) {
                            lVar7 = 3;
                            goto LAB_001f9474;
                          }
                          if (*(int *)(lVar17 + 0x111c) == -1) {
                            lVar7 = 4;
                            goto LAB_001f9474;
                          }
                          if (*(int *)(lVar17 + 0x1124) == -1) {
                            lVar7 = 5;
                            goto LAB_001f9474;
                          }
                          if (*(int *)(lVar17 + 0x112c) == -1) {
                            lVar7 = 6;
                            goto LAB_001f9474;
                          }
                          if (*(int *)(lVar17 + 0x1134) == -1) {
                            lVar7 = 7;
                            goto LAB_001f9474;
                          }
                          if (*(int *)(lVar17 + 0x113c) == -1) {
                            lVar7 = 8;
                            goto LAB_001f9474;
                          }
                          if (*(int *)(lVar17 + 0x1144) == -1) {
                            lVar7 = 9;
                            goto LAB_001f9474;
                          }
                          if (*(int *)(lVar17 + 0x114c) == -1) {
                            lVar7 = 10;
                            goto LAB_001f9474;
                          }
                          if (*(int *)(lVar17 + 0x1154) == -1) {
                            lVar7 = 0xb;
                            goto LAB_001f9474;
                          }
                          if (*(int *)(lVar17 + 0x115c) == -1) {
                            lVar7 = 0xc;
                            goto LAB_001f9474;
                          }
                          if (*(int *)(lVar17 + 0x1164) == -1) {
                            lVar7 = 0xd;
                            goto LAB_001f9474;
                          }
                          if (*(int *)(lVar17 + 0x116c) == -1) {
                            lVar7 = 0xe;
                            goto LAB_001f9474;
                          }
                          if (*(int *)(lVar17 + 0x1174) == -1) {
                            lVar7 = 0xf;
                            goto LAB_001f9474;
                          }
                        }
                        iVar4 = MaSndDrv_SetVoice(param_1,(uint)pbVar13[0xe],(uint)pbVar13[0xf],
                                                  uVar9,uVar19,uVar11,0,0,&local_38,uVar6);
                        if ((iVar4 == 0) || (iVar4 == 1)) {
                          uVar16 = uVar16 + 1;
                        }
                      }
                      else if (uVar11 >> 7 == 0) {
                        if ((*(long *)(lVar17 + uVar12 * 0x10 + 0x1180) != 0) &&
                           (uVar11 = uVar11 | 0x80, uVar11 < 0xc0)) goto LAB_001f9188;
                      }
                      else {
                        uVar11 = uVar11 & 0x7f;
                        if (uVar11 < 7) goto LAB_001f9188;
                      }
                    }
                  }
                }
              }
            }
LAB_001f8d44:
            pbVar13 = pbVar13 + (ulong)uVar3 + 8;
            uVar15 = (uVar15 - uVar3) - 8;
          } while ((uVar16 < 0x10) && (7 < uVar15));
        }
      }
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 0xffffffff;
  }
LAB_001f8e68:
  if (local_8 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

