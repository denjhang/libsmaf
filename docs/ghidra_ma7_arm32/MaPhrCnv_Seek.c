/* MaPhrCnv_Seek @ 000bea24 2388B */


/* YAMAHA::MaPhrCnv_Seek(_MACNV_SEQ_INFO*, unsigned int, _MACNV_SEEK_INFO*) */

void YAMAHA::MaPhrCnv_Seek(_MACNV_SEQ_INFO *param_1,uint param_2,_MACNV_SEEK_INFO *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  _MACNV_SEEK_INFO _Var14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  _MACNV_SEEK_INFO *p_Var18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  char cVar22;
  int iVar23;
  bool bVar24;
  char local_3c [16];
  int local_2c;
  
  piVar9 = *(int **)(DAT_000bf390 + 0xbea30);
  local_2c = *piVar9;
  if (((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
      (piVar12 = *(int **)(param_1 + 4), piVar12 != (int *)0x0)) &&
     (param_3 != (_MACNV_SEEK_INFO *)0x0)) {
    if (*piVar12 != 1) {
      uVar5 = 0xffffffff;
      goto LAB_000bed9c;
    }
    piVar15 = piVar12 + 5;
    iVar13 = 0x80;
    iVar20 = (int)piVar15 * 2 - (int)piVar12;
    piVar12[0x12] = 1;
    piVar12[0x1c] = 1;
    piVar12[0x26] = 1;
    piVar12[0x30] = 1;
    piVar12[0x3a] = 1;
    piVar12[0xc] = 0;
    piVar12[10] = 0;
    piVar12[0xb] = 0;
    piVar12[0x14] = 0;
    piVar12[0x15] = 0;
    piVar12[0x16] = 0;
    piVar12[0x19] = 0;
    piVar12[0x1b] = 0;
    piVar12[0x1e] = 0;
    piVar12[0x1f] = 0;
    piVar12[0x20] = 0;
    piVar12[0x23] = 0;
    piVar12[0x25] = 0;
    piVar12[0x28] = 0;
    piVar12[0x29] = 0;
    piVar12[0x2a] = 0;
    piVar12[0x2d] = 0;
    piVar12[0x2f] = 0;
    piVar12[0x32] = 0;
    piVar12[0x33] = 0;
    piVar12[0x34] = 0;
    piVar12[0x37] = 0;
    piVar12[0x39] = 0;
    piVar12[0x3c] = 0;
    piVar12[0x18] = 0x7f;
    piVar12[0x22] = 0x7f;
    piVar12[0x2c] = 0x7f;
    piVar12[0x36] = 0x7f;
    piVar12[0x3d] = 0;
    piVar12[0x3e] = 0;
    piVar12[0x40] = 0x7f;
    piVar12[0x41] = 0;
    piVar12[0x43] = 0;
    piVar12[0x46] = 0;
    piVar12[0x47] = 0;
    piVar12[0x48] = 0;
    piVar12[0x4a] = 0x7f;
    piVar12[0x4b] = 0;
    piVar12[0x4d] = 0;
    piVar12[0x50] = 0;
    piVar12[0x51] = 0;
    piVar12[0x52] = 0;
    piVar12[0x54] = 0x7f;
    piVar12[0x55] = 0;
    piVar12[0x57] = 0;
    piVar12[0x5a] = 0;
    piVar12[0x5b] = 0;
    piVar12[0x5c] = 0;
    piVar12[0x5e] = 0x7f;
    piVar12[0x5f] = 0;
    piVar12[0x61] = 0;
    piVar12[100] = 0;
    piVar12[0x65] = 0;
    piVar12[0x66] = 0;
    piVar12[0x68] = 0x7f;
    piVar12[0x69] = 0;
    piVar12[0x6b] = 0;
    piVar12[0x44] = 1;
    piVar12[0x4e] = 1;
    piVar12[0x58] = 1;
    piVar12[0x62] = 1;
    piVar12[0x6c] = 1;
    piVar12[0x6e] = 0;
    piVar12[0x6f] = 0;
    piVar12[0x70] = 0;
    piVar12[0x72] = 0x7f;
    piVar12[0x73] = 0;
    piVar12[0x75] = 0;
    piVar12[0x78] = 0;
    piVar12[0x79] = 0;
    piVar12[0x7a] = 0;
    piVar12[0x7c] = 0x7f;
    piVar12[0x7d] = 0;
    piVar12[0x7f] = 0;
    piVar12[0x82] = 0;
    piVar12[0x83] = 0;
    piVar12[0x84] = 0;
    piVar12[0x86] = 0x7f;
    piVar12[0x87] = 0;
    piVar12[0x89] = 0;
    piVar12[0x8c] = 0;
    piVar12[0x8d] = 0;
    piVar12[0x8e] = 0;
    piVar12[0x90] = 0x7f;
    piVar12[0x91] = 0;
    piVar12[0x93] = 0;
    piVar12[0x96] = 0;
    piVar12[0x97] = 0;
    piVar12[0x98] = 0;
    piVar12[0x9a] = 0x7f;
    piVar12[0x9b] = 0;
    piVar12[0x9d] = 0;
    piVar12[0x76] = 1;
    piVar12[0x80] = 1;
    piVar12[0x8a] = 1;
    piVar12[0x94] = 1;
    piVar12[0x9e] = 1;
    piVar12[0xa0] = 0;
    piVar12[0xa1] = 0;
    piVar12[0xa2] = 0;
    piVar12[0xa4] = 0x7f;
    piVar12[0xa5] = 0;
    piVar12[0xa7] = 0;
    piVar12[0xaa] = 0;
    piVar12[0xab] = 0;
    piVar12[0xac] = 0;
    piVar12[0xae] = 0x7f;
    piVar12[0xaf] = 0;
    piVar12[0xb1] = 0;
    piVar12[0xa8] = 1;
    *(undefined4 *)(iVar20 + 0x2b8) = 0;
    *(undefined4 *)(iVar20 + 0x2a0) = 0xffffffff;
    piVar10 = piVar12 + 0xc;
    do {
      *(undefined4 *)((int)piVar15 + (int)piVar10 + (0x2a0 - (int)piVar12)) = 0xffffffff;
      *(undefined4 *)((int)piVar15 + (int)piVar10 + (0x2b8 - (int)piVar12)) = 0;
      *(undefined4 *)((int)piVar15 + (int)piVar10 + -(int)piVar12 + 700) = 0xffffffff;
      *(undefined4 *)((int)piVar15 + (int)piVar10 + -(int)piVar12 + 0x2d4) = 0;
      iVar13 = iVar13 + -8;
      *(undefined4 *)((int)piVar15 + (int)piVar10 + -(int)piVar12 + 0x2d8) = 0xffffffff;
      *(undefined4 *)((int)piVar15 + (int)piVar10 + -(int)piVar12 + 0x2f0) = 0;
      *(undefined4 *)((int)piVar15 + (int)piVar10 + -(int)piVar12 + 0x2f4) = 0xffffffff;
      *(undefined4 *)((int)piVar15 + (int)piVar10 + -(int)piVar12 + 0x30c) = 0;
      *(undefined4 *)((int)piVar15 + (int)piVar10 + -(int)piVar12 + 0x310) = 0xffffffff;
      *(undefined4 *)((int)piVar15 + (int)piVar10 + -(int)piVar12 + 0x328) = 0;
      *(undefined4 *)((int)piVar15 + (int)piVar10 + -(int)piVar12 + 0x32c) = 0xffffffff;
      *(undefined4 *)((int)piVar15 + (int)piVar10 + -(int)piVar12 + 0x344) = 0;
      *(undefined4 *)((int)piVar15 + (int)piVar10 + -(int)piVar12 + 0x348) = 0xffffffff;
      *(undefined4 *)((int)piVar15 + (int)piVar10 + -(int)piVar12 + 0x360) = 0;
      *(undefined4 *)((int)piVar15 + (int)piVar10 + -(int)piVar12 + 0x364) = 0xffffffff;
      *(undefined4 *)((int)piVar15 + (int)piVar10 + -(int)piVar12 + 0x37c) = 0;
      piVar10 = piVar10 + 0x38;
    } while (iVar13 != 0);
    piVar12[0x433] = 0x1b;
    piVar12[0xe] = -1;
    *param_3 = (_MACNV_SEEK_INFO)0x7f;
    param_3[5] = (_MACNV_SEEK_INFO)0x7f;
    param_3[4] = (_MACNV_SEEK_INFO)0x40;
    *(undefined2 *)(param_3 + 2) = 0x2000;
    cVar22 = '\x10';
    p_Var18 = param_3;
    do {
      cVar22 = cVar22 + -2;
      p_Var18[10] = (_MACNV_SEEK_INFO)0x1;
      p_Var18[0xb] = (_MACNV_SEEK_INFO)0x0;
      p_Var18[0xc] = (_MACNV_SEEK_INFO)0x0;
      p_Var18[0xd] = (_MACNV_SEEK_INFO)0x64;
      p_Var18[0x18] = (_MACNV_SEEK_INFO)0x40;
      p_Var18[0xf] = (_MACNV_SEEK_INFO)0x7f;
      p_Var18[0x10] = (_MACNV_SEEK_INFO)0x0;
      *(undefined2 *)(p_Var18 + 0x1c) = 0x2000;
      p_Var18[0x11] = (_MACNV_SEEK_INFO)0x2;
      p_Var18[0x12] = (_MACNV_SEEK_INFO)0x0;
      p_Var18[0x13] = (_MACNV_SEEK_INFO)0x40;
      *(undefined2 *)(p_Var18 + 0x1e) = 0x2000;
      p_Var18[0x14] = (_MACNV_SEEK_INFO)0x40;
      p_Var18[0x15] = (_MACNV_SEEK_INFO)0x40;
      p_Var18[0x16] = (_MACNV_SEEK_INFO)0x7f;
      p_Var18[0x17] = (_MACNV_SEEK_INFO)0x0;
      p_Var18[0x19] = (_MACNV_SEEK_INFO)0x0;
      p_Var18[8] = (_MACNV_SEEK_INFO)0x0;
      p_Var18[9] = (_MACNV_SEEK_INFO)0x0;
      p_Var18[0x24] = (_MACNV_SEEK_INFO)0x1;
      p_Var18[0x25] = (_MACNV_SEEK_INFO)0x0;
      p_Var18[0x26] = (_MACNV_SEEK_INFO)0x0;
      p_Var18[0x27] = (_MACNV_SEEK_INFO)0x64;
      p_Var18[0x32] = (_MACNV_SEEK_INFO)0x40;
      p_Var18[0x29] = (_MACNV_SEEK_INFO)0x7f;
      p_Var18[0x2a] = (_MACNV_SEEK_INFO)0x0;
      *(undefined2 *)(p_Var18 + 0x36) = 0x2000;
      p_Var18[0x2b] = (_MACNV_SEEK_INFO)0x2;
      p_Var18[0x2c] = (_MACNV_SEEK_INFO)0x0;
      p_Var18[0x2d] = (_MACNV_SEEK_INFO)0x40;
      *(undefined2 *)(p_Var18 + 0x38) = 0x2000;
      p_Var18[0x2e] = (_MACNV_SEEK_INFO)0x40;
      p_Var18[0x2f] = (_MACNV_SEEK_INFO)0x40;
      p_Var18[0x30] = (_MACNV_SEEK_INFO)0x7f;
      p_Var18[0x31] = (_MACNV_SEEK_INFO)0x0;
      p_Var18[0x33] = (_MACNV_SEEK_INFO)0x0;
      p_Var18[0x22] = (_MACNV_SEEK_INFO)0x0;
      p_Var18[0x23] = (_MACNV_SEEK_INFO)0x0;
      p_Var18 = p_Var18 + 0x34;
    } while (cVar22 != '\0');
    uVar5 = 0;
    if (1 < piVar12[5] - 1U) goto LAB_000bed9c;
    if (param_2 <= (uint)(piVar12[0xd] * piVar12[8])) {
      uVar19 = 1;
      if (param_2 != 0) {
        uVar19 = __udivsi3();
      }
      iVar3 = DAT_000bf39c;
      iVar20 = DAT_000bf398;
      iVar13 = DAT_000bf394;
      uVar11 = piVar12[7];
      piVar12[0xc] = 0;
      piVar12[10] = 0;
      local_3c[0] = '\0';
      local_3c[1] = '\0';
      local_3c[2] = '\0';
      local_3c[3] = '\0';
      local_3c[4] = '\0';
      local_3c[5] = '\0';
      local_3c[6] = '\0';
      local_3c[7] = '\0';
      local_3c[8] = '\0';
      local_3c[9] = '\0';
      local_3c[10] = '\0';
      local_3c[0xb] = '\0';
      local_3c[0xc] = '\0';
      local_3c[0xd] = '\0';
      local_3c[0xe] = '\0';
      local_3c[0xf] = '\0';
      uVar16 = 0;
LAB_000bedf4:
      if (uVar16 < uVar11) {
        while( true ) {
          iVar4 = piVar12[0x11];
          iVar23 = uVar16 + 1;
          uVar6 = (uint)*(byte *)(iVar4 + uVar16);
          if ((int)(uVar6 << 0x18) < 0) {
            pbVar1 = (byte *)(iVar4 + iVar23);
            iVar23 = uVar16 + 2;
            uVar6 = *pbVar1 + 0x80 + (uVar6 & 0x7f) * 0x80;
          }
          uVar6 = piVar12[0xc] + uVar6;
          if (uVar19 <= uVar6) {
            if (param_2 == 0) {
              uVar16 = 0;
              uVar19 = 0;
            }
            else {
              uVar16 = uVar6 - uVar19 | 0x80000000;
            }
            piVar12[0xb] = uVar16;
            uVar5 = 0;
            piVar12[0xc] = uVar19;
            goto LAB_000bed9c;
          }
          piVar12[0xc] = uVar6;
          iVar7 = iVar23 + 1;
          piVar12[10] = iVar7;
          if (*(char *)(iVar4 + iVar23) == '\0') break;
          if (*(char *)(iVar4 + iVar23) != -1) {
            if (param_2 == 0) {
              piVar12[10] = uVar16;
              piVar12[0xb] = 0;
              piVar12[0xc] = 0;
              uVar5 = 0;
              goto LAB_000bed9c;
            }
            uVar16 = iVar23 + 2;
            piVar12[10] = uVar16;
            if ((int)((uint)*(byte *)(iVar4 + iVar7) << 0x18) < 0) {
              uVar16 = iVar23 + 3;
              piVar12[10] = uVar16;
            }
            goto LAB_000bedf4;
          }
          uVar16 = iVar23 + 2;
          piVar12[10] = uVar16;
          if (piVar12[5] == 2) {
            if (*(char *)(iVar4 + iVar7) == -0x10) {
              piVar12[10] = iVar23 + 3;
              uVar16 = (uint)*(byte *)(iVar4 + uVar16) + iVar23 + 3;
              piVar12[10] = uVar16;
            }
            goto LAB_000bedf4;
          }
          if (*(char *)(iVar4 + iVar7) != -0x10) goto LAB_000bedf4;
          iVar23 = iVar23 + 3;
          piVar12[10] = iVar23;
          bVar2 = *(byte *)(iVar4 + uVar16);
          if ((bVar2 == 6) && (iVar7 = iVar4 + iVar23, *(char *)(iVar4 + iVar23) == 'C')) {
            if (*(char *)(iVar7 + 1) == '\x03') {
              if ((*(char *)(iVar7 + 2) == -0x70) && (*(char *)(iVar7 + 5) == -9)) {
                uVar6 = *(byte *)(iVar7 + 3) & 0xf0;
                uVar16 = *(byte *)(iVar7 + 3) & 3;
                if (uVar6 == 0xc0) {
                  piVar12[uVar16 * 10 + 0x14] = piVar12[uVar16 * 10 + 0x14] | 2;
                  piVar12[uVar16 * 10 + 0x15] = (uint)*(byte *)(iVar7 + 4);
                }
                else if (uVar6 == 0xb0) {
                  piVar12[uVar16 * 10 + 0x14] = piVar12[uVar16 * 10 + 0x14] | 1;
                  piVar12[uVar16 * 10 + 0x16] = (uint)*(byte *)(iVar7 + 4);
                }
              }
            }
            else if ((((*(char *)(iVar7 + 1) == '\x04') && (*(char *)(iVar7 + 2) == '\x02')) &&
                     (*(byte *)(iVar7 + 4) < 0x19)) && (*(char *)(iVar7 + 5) == -9)) {
              uVar16 = *(byte *)(iVar7 + 3) & 3;
              piVar12[uVar16 * 10 + 0x1b] = 1;
              piVar12[uVar16 * 10 + 0x17] = (uint)*(byte *)(iVar7 + 4);
            }
          }
          uVar16 = (uint)bVar2 + iVar23;
          piVar12[10] = uVar16;
          if (uVar11 <= uVar16) goto LAB_000bee60;
        }
        uVar17 = iVar23 + 2;
        piVar12[10] = uVar17;
        bVar2 = *(byte *)(iVar4 + iVar7);
        uVar8 = bVar2 & 0x30;
        uVar6 = bVar2 & 0xf;
        uVar21 = (uint)(bVar2 >> 6);
        uVar16 = uVar17;
        if (uVar8 == 0x20) {
          if ((piVar12[5] != 2) || (uVar6 - 1 < 0xe)) {
            param_3[uVar21 * 0x1a + 0xc] = SUB41(*(undefined4 *)(iVar20 + uVar6 * 4 + 0xbf022),0);
            uVar11 = piVar12[7];
            uVar16 = piVar12[10];
          }
        }
        else {
          if (uVar8 == 0x30) {
            uVar16 = iVar23 + 3;
            piVar12[10] = uVar16;
            _Var14 = *(_MACNV_SEEK_INFO *)(iVar4 + uVar17);
            uVar8 = (uint)(byte)_Var14;
            switch(uVar6) {
            case 0:
              if (piVar12[5] == 2) {
                if (0x7f < uVar8) break;
                cVar22 = local_3c[uVar21];
                param_3[uVar21 * 0x1a + 10] = SUB41(piVar12[uVar21 * 10 + 0x12],0);
                if (cVar22 == '\0') {
                  if (piVar12[0x439] == 1) {
                    if (uVar8 != piVar12[0x43a]) {
LAB_000bf204:
                      if (piVar12[0x43b] == 1) {
                        if (uVar8 == piVar12[0x43c]) goto LAB_000bf002;
                      }
                      else if (piVar12[0x43b] == -1) goto LAB_000bf2c2;
                      if (piVar12[0x43d] == 1) {
                        if (uVar8 == piVar12[0x43e]) goto LAB_000bf002;
                      }
                      else if (piVar12[0x43d] == -1) goto LAB_000bf2c2;
                      if (piVar12[0x43f] == 1) {
                        if (uVar8 == piVar12[0x440]) goto LAB_000bf002;
                      }
                      else if (piVar12[0x43f] == -1) goto LAB_000bf2c2;
                      if (piVar12[0x441] == 1) {
                        if (uVar8 == piVar12[0x442]) goto LAB_000bf002;
                      }
                      else if (piVar12[0x441] == -1) goto LAB_000bf2c2;
                      if (piVar12[0x443] == 1) {
                        if (uVar8 == piVar12[0x444]) goto LAB_000bf002;
                      }
                      else if (piVar12[0x443] == -1) goto LAB_000bf2c2;
                      if (piVar12[0x445] == 1) {
                        if (uVar8 == piVar12[0x446]) goto LAB_000bf002;
                      }
                      else if (piVar12[0x445] == -1) goto LAB_000bf2c2;
                      if (piVar12[0x447] == 1) {
                        if (uVar8 == piVar12[0x448]) goto LAB_000bf002;
                      }
                      else if (piVar12[0x447] == -1) goto LAB_000bf2c2;
                      if (piVar12[0x449] == 1) {
                        if (uVar8 == piVar12[0x44a]) goto LAB_000bf002;
                      }
                      else if (piVar12[0x449] == -1) goto LAB_000bf2c2;
                      if (piVar12[1099] == 1) {
                        if (uVar8 == piVar12[0x44c]) goto LAB_000bf002;
                      }
                      else if (piVar12[1099] == -1) goto LAB_000bf2c2;
                      if (piVar12[0x44d] == 1) {
                        if (uVar8 == piVar12[0x44e]) goto LAB_000bf002;
                      }
                      else if (piVar12[0x44d] == -1) goto LAB_000bf2c2;
                      if (piVar12[0x44f] == 1) {
                        if (uVar8 == piVar12[0x450]) goto LAB_000bf002;
                      }
                      else if (piVar12[0x44f] == -1) goto LAB_000bf2c2;
                      if (piVar12[0x451] == 1) {
                        if (uVar8 == piVar12[0x452]) goto LAB_000bf002;
                      }
                      else if (piVar12[0x451] == -1) goto LAB_000bf2c2;
                      if (piVar12[0x453] == 1) {
                        if (uVar8 == piVar12[0x454]) goto LAB_000bf002;
                      }
                      else if (piVar12[0x453] == -1) goto LAB_000bf2c2;
                      if (piVar12[0x455] == 1) {
                        if (uVar8 == piVar12[0x456]) goto LAB_000bf002;
                      }
                      else if (piVar12[0x455] == -1) goto LAB_000bf2c2;
                      if ((piVar12[0x457] != 1) || (uVar8 != piVar12[0x458])) goto LAB_000bf2c2;
                    }
                  }
                  else {
                    if (piVar12[0x439] != -1) goto LAB_000bf204;
LAB_000bf2c2:
                    param_3[uVar21 * 0x1a + 10] = (_MACNV_SEEK_INFO)0x0;
                    _Var14 = (_MACNV_SEEK_INFO)0x0;
                  }
                }
              }
              else {
                uVar8 = uVar8 & 3;
                if (piVar12[uVar8 * 2 + 0x439] == 1) {
                  param_3[uVar21 * 0x1a + 10] = (_MACNV_SEEK_INFO)0x1;
                  _Var14 = *(_MACNV_SEEK_INFO *)(piVar12 + uVar8 * 2 + 0x43a);
                }
                else {
                  param_3[uVar21 * 0x1a + 10] = (_MACNV_SEEK_INFO)0x0;
                  uVar16 = piVar12[uVar8 * 2 + 0x43a];
                  if (uVar16 == 0x2c) {
LAB_000bf2da:
                    _Var14 = (_MACNV_SEEK_INFO)0x32;
                    piVar12[uVar8 * 2 + 0x43a] = 0x32;
                  }
                  else {
                    if (uVar16 < 0x2d) {
                      if (uVar16 < 2) {
                        _Var14 = (_MACNV_SEEK_INFO)0x2;
                        piVar12[uVar8 * 2 + 0x43a] = 2;
                        goto LAB_000bf002;
                      }
                    }
                    else if (0x2f < uVar16) {
                      if (uVar16 < 0x32) goto LAB_000bf2da;
                      if (uVar16 == 0x75) {
                        _Var14 = (_MACNV_SEEK_INFO)0x74;
                        piVar12[uVar8 * 2 + 0x43a] = 0x74;
                        goto LAB_000bf002;
                      }
                    }
                    _Var14 = SUB41(uVar16,0);
                  }
                }
              }
LAB_000bf002:
              param_3[uVar21 * 0x1a + 0xb] = _Var14;
              uVar16 = piVar12[10];
              uVar11 = piVar12[7];
              goto LAB_000bedf4;
            case 1:
              if ((piVar12[5] == 2) && ((uVar8 & 0x7f) < 2)) {
                local_3c[uVar21] = '\x01';
                piVar12[uVar21 * 10 + 0x12] = uVar8;
                goto LAB_000bedf4;
              }
              break;
            case 2:
              uVar6 = uVar8;
              if (uVar8 == 0x81) {
                uVar6 = 0xffffffff;
              }
              if (uVar8 != 0x81) {
                if (uVar8 < 0x82) {
                  if (4 < uVar6) {
LAB_000bf1b4:
                    uVar6 = piVar12[uVar21 * 10 + 0x19];
                    if (piVar12[5] != 2) {
                      uVar6 = 0;
                    }
                  }
                }
                else if (uVar6 == 0x83) {
                  uVar6 = 0xfffffffd;
                }
                else if (uVar6 < 0x83) {
                  uVar6 = 0xfffffffe;
                }
                else {
                  if (uVar6 != 0x84) goto LAB_000bf1b4;
                  uVar6 = 0xfffffffc;
                }
              }
              piVar12[uVar21 * 10 + 0x19] = uVar6;
              goto LAB_000bedf4;
            case 3:
              if ((piVar12[5] == 2) && (uVar8 < 0x80)) {
                param_3[uVar21 * 0x1a + 0xc] = SUB41(*(undefined4 *)(iVar3 + uVar8 * 4 + 0xbf066),0)
                ;
                uVar16 = piVar12[10];
                uVar11 = piVar12[7];
                goto LAB_000bedf4;
              }
              break;
            case 4:
              p_Var18 = (_MACNV_SEEK_INFO *)piVar12[5];
              if ((p_Var18 != (_MACNV_SEEK_INFO *)0x2) || (uVar8 < 0x80)) {
                iVar23 = piVar12[uVar21 * 10 + 0x1b];
                bVar24 = iVar23 == 1;
                if (bVar24) {
                  p_Var18 = param_3 + uVar21 * 0x1a;
                  iVar23 = piVar12[uVar21 * 10 + 0x17];
                }
                if (bVar24) {
                  p_Var18[0x11] = SUB41(iVar23,0);
                }
                if (bVar24) {
                  piVar12[uVar21 * 10 + 0x1b] = 0;
                }
                *(short *)(param_3 + uVar21 * 0x1a + 0x1c) = (short)((uVar8 & 0x7f) << 7);
                uVar16 = piVar12[10];
                uVar11 = piVar12[7];
                goto LAB_000bedf4;
              }
              break;
            case 5:
              if ((piVar12[5] == 2) && (uVar8 < 0x19)) {
                piVar12[uVar21 * 10 + 0x1b] = 1;
                piVar12[uVar21 * 10 + 0x17] = uVar8;
                goto LAB_000bedf4;
              }
              break;
            case 6:
              if ((piVar12[5] == 2) && (uVar8 < 0x80)) {
                piVar12[uVar21 * 10 + 0x18] = uVar8;
                goto LAB_000bedf4;
              }
              break;
            case 10:
              if ((piVar12[5] != 2) || (uVar8 < 0x80)) {
                param_3[uVar21 * 0x1a + 0x18] = (_MACNV_SEEK_INFO)((byte)_Var14 & 0x7f);
                uVar16 = piVar12[10];
                uVar11 = piVar12[7];
                goto LAB_000bedf4;
              }
              break;
            case 0xb:
              if ((piVar12[5] != 2) || (uVar8 < 0x80)) {
                param_3[uVar21 * 0x1a + 0xd] = (_MACNV_SEEK_INFO)((byte)_Var14 & 0x7f);
                uVar16 = piVar12[10];
                uVar11 = piVar12[7];
                goto LAB_000bedf4;
              }
            }
            goto LAB_000bedf4;
          }
          if (((bVar2 & 0x30) == 0) && ((piVar12[5] != 2 || (uVar6 - 1 < 0xe)))) {
            param_3[uVar21 * 0x1a + 0xd] = SUB41(*(undefined4 *)(iVar13 + uVar6 * 4 + 0xbefd8),0);
            uVar11 = piVar12[7];
            uVar16 = piVar12[10];
          }
        }
        goto LAB_000bedf4;
      }
LAB_000bee60:
      uVar5 = 0;
      goto LAB_000bed9c;
    }
  }
  uVar5 = 0xfffffffe;
LAB_000bed9c:
  if (local_2c != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

