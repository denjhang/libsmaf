/* MaJtsCnv_Seek @ 001b8314 2076B */


/* YAMAHA::MaJtsCnv_Seek(_MACNV_SEQ_INFO*, unsigned int, _MACNV_SEEK_INFO*) */

undefined8 YAMAHA::MaJtsCnv_Seek(_MACNV_SEQ_INFO *param_1,uint param_2,_MACNV_SEEK_INFO *param_3)

{
  int *piVar1;
  _MACNV_SEEK_INFO *p_Var2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  _MACNV_SEEK_INFO *p_Var6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
     (piVar14 = *(int **)(param_1 + 8), param_3 != (_MACNV_SEEK_INFO *)0x0)) {
    bVar5 = piVar14 == (int *)0x0;
    if (!bVar5) {
      if (*piVar14 != 1) {
        return 0xffffffff;
      }
      piVar1 = piVar14 + 6;
      piVar14[6] = 0;
      pbVar7 = *(byte **)(piVar14 + 0x14);
      piVar14[7] = 0x1e;
      piVar14[8] = 0x40;
      piVar14[0xf] = 100;
      uVar8 = (uint)bVar5;
      piVar14[0xc] = uVar8;
      piVar14[9] = uVar8;
      piVar14[0x10] = uVar8;
      piVar14[0x11] = uVar8;
      uVar8 = (uint)bVar5;
      piVar14[0x12] = uVar8;
      piVar14[10] = 0x1f;
      *(byte **)(piVar14 + 0x16) = pbVar7;
      piVar14[0x31a] = 0x1b;
      piVar14[0x1a] = uVar8;
      piVar14[0x20] = uVar8;
      piVar14[0x26] = uVar8;
      piVar14[0x2c] = uVar8;
      piVar14[0x32] = uVar8;
      piVar14[0x38] = uVar8;
      piVar14[0x3e] = uVar8;
      uVar8 = (uint)bVar5;
      piVar14[0x44] = uVar8;
      piVar14[0x4a] = uVar8;
      piVar14[0x50] = uVar8;
      piVar14[0x56] = uVar8;
      piVar14[0x5c] = uVar8;
      piVar14[0x62] = uVar8;
      piVar14[0x68] = uVar8;
      piVar14[0x6e] = uVar8;
      piVar14[0x74] = uVar8;
      piVar14[0x7a] = uVar8;
      piVar14[0x80] = uVar8;
      piVar14[0x86] = uVar8;
      piVar14[0x8c] = uVar8;
      piVar14[0x92] = uVar8;
      piVar14[0x98] = uVar8;
      piVar14[0x9e] = uVar8;
      uVar8 = (uint)bVar5;
      piVar14[0xa4] = uVar8;
      piVar14[0xaa] = uVar8;
      piVar14[0xb0] = uVar8;
      piVar14[0xb6] = uVar8;
      piVar14[0xbc] = uVar8;
      piVar14[0xc2] = uVar8;
      piVar14[200] = uVar8;
      piVar14[0xce] = uVar8;
      piVar14[0xd4] = uVar8;
      piVar14[0xda] = uVar8;
      piVar14[0xe0] = uVar8;
      piVar14[0xe6] = uVar8;
      piVar14[0xec] = uVar8;
      piVar14[0xf2] = uVar8;
      piVar14[0xf8] = uVar8;
      piVar14[0xfe] = uVar8;
      piVar14[0x104] = uVar8;
      piVar14[0x10a] = uVar8;
      piVar14[0x110] = uVar8;
      piVar14[0x116] = uVar8;
      piVar14[0x11c] = uVar8;
      piVar14[0x122] = uVar8;
      piVar14[0x128] = uVar8;
      piVar14[0x12e] = uVar8;
      piVar14[0x134] = uVar8;
      piVar14[0x13a] = uVar8;
      piVar14[0x140] = uVar8;
      piVar14[0x146] = uVar8;
      piVar14[0x14c] = uVar8;
      piVar14[0x152] = uVar8;
      piVar14[0x158] = uVar8;
      piVar14[0x15e] = uVar8;
      uVar8 = (uint)bVar5;
      piVar14[0x164] = uVar8;
      piVar14[0x16a] = uVar8;
      piVar14[0x170] = uVar8;
      piVar14[0x176] = uVar8;
      piVar14[0x17c] = uVar8;
      piVar14[0x182] = uVar8;
      piVar14[0x188] = uVar8;
      piVar14[0x18e] = uVar8;
      piVar14[0x194] = uVar8;
      piVar14[0x19a] = uVar8;
      piVar14[0x1a0] = uVar8;
      piVar14[0x1a6] = uVar8;
      piVar14[0x1ac] = uVar8;
      piVar14[0x1b2] = uVar8;
      piVar14[0x1b8] = uVar8;
      piVar14[0x1be] = uVar8;
      piVar14[0x1c4] = uVar8;
      piVar14[0x1ca] = uVar8;
      piVar14[0x1d0] = uVar8;
      piVar14[0x1d6] = uVar8;
      piVar14[0x1dc] = uVar8;
      piVar14[0x1e2] = uVar8;
      piVar14[0x1e8] = uVar8;
      piVar14[0x1ee] = uVar8;
      piVar14[500] = uVar8;
      piVar14[0x1fa] = uVar8;
      piVar14[0x200] = uVar8;
      piVar14[0x206] = uVar8;
      piVar14[0x20c] = uVar8;
      piVar14[0x212] = uVar8;
      piVar14[0x218] = uVar8;
      piVar14[0x21e] = uVar8;
      piVar14[0x224] = uVar8;
      piVar14[0x22a] = uVar8;
      piVar14[0x230] = uVar8;
      piVar14[0x236] = uVar8;
      piVar14[0x23c] = uVar8;
      piVar14[0x242] = uVar8;
      piVar14[0x248] = uVar8;
      piVar14[0x24e] = uVar8;
      piVar14[0x254] = uVar8;
      piVar14[0x25a] = uVar8;
      piVar14[0x260] = uVar8;
      piVar14[0x266] = uVar8;
      piVar14[0x26c] = uVar8;
      piVar14[0x272] = uVar8;
      piVar14[0x278] = uVar8;
      piVar14[0x27e] = uVar8;
      piVar14[0x284] = uVar8;
      piVar14[0x28a] = uVar8;
      piVar14[0x290] = uVar8;
      piVar14[0x296] = uVar8;
      piVar14[0x29c] = uVar8;
      piVar14[0x2a2] = uVar8;
      piVar14[0x2a8] = uVar8;
      piVar14[0x2ae] = uVar8;
      piVar14[0x2b4] = uVar8;
      piVar14[0x2ba] = uVar8;
      piVar14[0x2c0] = uVar8;
      piVar14[0x2c6] = uVar8;
      piVar14[0x2cc] = uVar8;
      piVar14[0x2d2] = uVar8;
      piVar14[0x2d8] = uVar8;
      piVar14[0x2de] = uVar8;
      uVar8 = (uint)bVar5;
      piVar14[0x2e4] = uVar8;
      piVar14[0x2ea] = uVar8;
      piVar14[0x2f0] = uVar8;
      piVar14[0x2f6] = uVar8;
      piVar14[0x2fc] = uVar8;
      piVar14[0x302] = uVar8;
      piVar14[0x308] = uVar8;
      piVar14[0x30e] = uVar8;
      piVar14[0x314] = uVar8;
      if (param_2 <= (uint)piVar14[0xd]) {
        uVar13 = (uint)bVar5;
        if (param_2 == 0) {
          uVar8 = piVar14[10];
          iVar4 = uVar8 * piVar14[9];
joined_r0x001b87bc:
          if (iVar4 == 0) {
            pbVar10 = *(byte **)(piVar14 + 0x18);
            uVar8 = 0xffffffff;
            while (pbVar7 < pbVar10) {
              while( true ) {
                bVar3 = pbVar7[1];
                uVar15 = (uint)*pbVar7;
                piVar14[9] = 0;
                uVar13 = (uint)bVar3;
                if (uVar15 - 0xf7 < 9) break;
                if ((0x7f < uVar15) || (uVar8 != 0xffffffff)) goto LAB_001b87dc;
                piVar14[9] = uVar13;
                if (piVar14[0x10] != 0) {
                  pbVar7 = pbVar7 + -2;
                  piVar14[0x10] = piVar14[0x10] + -1;
                }
LAB_001b8978:
                pbVar7 = pbVar7 + 2;
                *(byte **)(piVar14 + 0x16) = pbVar7;
                if (uVar13 != 0) goto LAB_001b8904;
                if (pbVar10 <= pbVar7) goto LAB_001b898c;
              }
              uVar9 = (uint)bVar3;
              switch(uVar15) {
              case 0xf7:
                if (uVar9 - 2 < 0x7e) {
                  piVar14[0x10] = uVar9 - 1;
                }
                break;
              case 0xf8:
                if (bVar3 < 0x65) {
                  pbVar7 = pbVar7 + 2;
                  piVar14[0xf] = uVar9;
                  *(byte **)(piVar14 + 0x16) = pbVar7;
LAB_001b8904:
                  if (*piVar1 == 1) goto LAB_001b8998;
                  uVar8 = piVar14[10];
                  iVar4 = uVar8 * piVar14[9];
                  goto joined_r0x001b87bc;
                }
                break;
              case 0xf9:
                if (piVar1[(ulong)bVar3 * 6 + 0x14] == 1) {
                  *(byte **)(piVar1 + (ulong)bVar3 * 6 + 0x18) = pbVar7;
                  piVar1[(ulong)bVar3 * 6 + 0x14] = 3;
                  pbVar7 = *(byte **)(piVar1 + (ulong)bVar3 * 6 + 0x16);
                  piVar14[0x11] = 1;
                }
                break;
              case 0xfa:
                if (piVar1[(long)(int)uVar13 * 6 + 0x14] == 2) {
                  piVar1[(long)(int)uVar13 * 6 + 0x14] = 1;
                  if (uVar9 == uVar8) {
                    uVar8 = 0xffffffff;
                  }
                }
                else if (piVar1[(long)(int)uVar13 * 6 + 0x14] == 3) {
                  piVar14[0x11] = 0;
                  piVar1[(long)(int)uVar13 * 6 + 0x14] = 1;
                  pbVar7 = *(byte **)(piVar1 + (long)(int)uVar13 * 6 + 0x18);
                }
                break;
              case 0xfb:
                if ((piVar1[(long)(int)uVar13 * 6 + 0x14] != 3) && (piVar14[0x11] == 0)) {
                  *(byte **)(piVar1 + (long)(int)uVar13 * 6 + 0x16) = pbVar7;
                  piVar1[(long)(int)uVar13 * 6 + 0x14] = 2;
                  if (uVar8 == 0xffffffff) {
                    uVar8 = uVar13;
                  }
                }
                break;
              case 0xfc:
                if ('\0' < (char)bVar3) {
                  piVar14[8] = uVar9;
                  uVar15 = 0;
                  if (uVar13 * piVar14[7] != 0) {
                    uVar15 = 60000 / (uVar13 * piVar14[7]);
                  }
                  piVar14[10] = uVar15;
                }
                break;
              case 0xfd:
                if (uVar13 - 5 < 0x7b) {
                  piVar14[7] = uVar9;
                  uVar13 = 0;
                  if (uVar9 * piVar14[8] != 0) {
                    uVar13 = 60000 / (uVar9 * piVar14[8]);
                  }
                  piVar14[10] = uVar13;
                }
                break;
              case 0xfe:
                piVar14[0xe] = uVar13;
                break;
              case 0xff:
                if (uVar8 == 0xffffffff) {
                  piVar14[9] = uVar13;
                  if (piVar14[0x10] != 0) {
                    piVar14[0x10] = piVar14[0x10] + -1;
                    pbVar7 = (byte *)(*(long *)(piVar14 + 0x16) - 2);
                  }
                  goto LAB_001b8978;
                }
              }
LAB_001b87dc:
              pbVar7 = pbVar7 + 2;
              *(byte **)(piVar14 + 0x16) = pbVar7;
            }
LAB_001b898c:
            piVar14[9] = 0;
            piVar14[6] = 1;
          }
          else {
            piVar14[0x12] = iVar4 - 1U;
            uVar13 = 0;
            if (uVar8 != 0) {
              uVar13 = (iVar4 - 1U) / uVar8;
            }
            piVar14[0xc] = 1;
            piVar14[9] = uVar13;
          }
LAB_001b8998:
          if ((byte *)(*(long *)(piVar14 + 0x14) + 2U) <= pbVar7) {
            *(byte **)(piVar14 + 0x16) = pbVar7 + -2;
          }
          piVar14[0x12] = 0;
          piVar14[9] = 0;
          piVar14[0xc] = 0;
        }
        else {
joined_r0x001b85b0:
          uVar15 = uVar8;
          if (uVar15 < param_2) {
            uVar13 = piVar14[10];
            uVar8 = uVar15 + uVar13 * piVar14[9];
            if (uVar8 < param_2) {
              pbVar7 = *(byte **)(piVar14 + 0x16);
              uVar13 = 0xffffffff;
              pbVar10 = *(byte **)(piVar14 + 0x18);
              piVar14[0xc] = uVar8;
              while (pbVar7 < pbVar10) {
                while( true ) {
                  bVar3 = pbVar7[1];
                  uVar9 = (uint)*pbVar7;
                  piVar14[9] = 0;
                  uVar11 = (uint)bVar3;
                  if (uVar9 - 0xf7 < 9) break;
                  if ((0x7f < uVar9) || (uVar13 != 0xffffffff)) goto LAB_001b85ec;
                  piVar14[9] = uVar11;
                  if (piVar14[0x10] != 0) {
                    pbVar7 = pbVar7 + -2;
                    piVar14[0x10] = piVar14[0x10] + -1;
                  }
LAB_001b8774:
                  pbVar7 = pbVar7 + 2;
                  *(byte **)(piVar14 + 0x16) = pbVar7;
                  if (uVar11 != 0) goto LAB_001b8714;
                  if (pbVar10 <= pbVar7) goto LAB_001b8788;
                }
                uVar12 = (uint)bVar3;
                switch(uVar9) {
                case 0xf7:
                  if (uVar12 - 2 < 0x7e) {
                    piVar14[0x10] = uVar12 - 1;
                  }
                  break;
                case 0xf8:
                  if (bVar3 < 0x65) {
                    piVar14[0xf] = uVar12;
                    *(byte **)(piVar14 + 0x16) = pbVar7 + 2;
LAB_001b8714:
                    uVar13 = uVar15;
                    if (*piVar1 != 1) goto joined_r0x001b85b0;
                    goto LAB_001b89bc;
                  }
                  break;
                case 0xf9:
                  if (piVar1[(ulong)bVar3 * 6 + 0x14] == 1) {
                    *(byte **)(piVar1 + (ulong)bVar3 * 6 + 0x18) = pbVar7;
                    piVar1[(ulong)bVar3 * 6 + 0x14] = 3;
                    pbVar7 = *(byte **)(piVar1 + (ulong)bVar3 * 6 + 0x16);
                    piVar14[0x11] = 1;
                  }
                  break;
                case 0xfa:
                  if (piVar1[(long)(int)uVar11 * 6 + 0x14] == 2) {
                    piVar1[(long)(int)uVar11 * 6 + 0x14] = 1;
                    if (uVar12 == uVar13) {
                      uVar13 = 0xffffffff;
                    }
                  }
                  else if (piVar1[(long)(int)uVar11 * 6 + 0x14] == 3) {
                    piVar14[0x11] = 0;
                    piVar1[(long)(int)uVar11 * 6 + 0x14] = 1;
                    pbVar7 = *(byte **)(piVar1 + (long)(int)uVar11 * 6 + 0x18);
                  }
                  break;
                case 0xfb:
                  if ((piVar1[(long)(int)uVar11 * 6 + 0x14] != 3) && (piVar14[0x11] == 0)) {
                    *(byte **)(piVar1 + (long)(int)uVar11 * 6 + 0x16) = pbVar7;
                    piVar1[(long)(int)uVar11 * 6 + 0x14] = 2;
                    if (uVar13 == 0xffffffff) {
                      uVar13 = uVar11;
                    }
                  }
                  break;
                case 0xfc:
                  if ('\0' < (char)bVar3) {
                    piVar14[8] = uVar12;
                    uVar9 = 0;
                    if (uVar11 * piVar14[7] != 0) {
                      uVar9 = 60000 / (uVar11 * piVar14[7]);
                    }
                    piVar14[10] = uVar9;
                  }
                  break;
                case 0xfd:
                  if (uVar11 - 5 < 0x7b) {
                    piVar14[7] = uVar12;
                    uVar9 = 0;
                    if (uVar12 * piVar14[8] != 0) {
                      uVar9 = 60000 / (uVar12 * piVar14[8]);
                    }
                    piVar14[10] = uVar9;
                  }
                  break;
                case 0xfe:
                  piVar14[0xe] = uVar11;
                  break;
                case 0xff:
                  if (uVar13 == 0xffffffff) {
                    piVar14[9] = uVar11;
                    if (piVar14[0x10] != 0) {
                      piVar14[0x10] = piVar14[0x10] + -1;
                      pbVar7 = (byte *)(*(long *)(piVar14 + 0x16) - 2);
                    }
                    goto LAB_001b8774;
                  }
                }
LAB_001b85ec:
                pbVar7 = pbVar7 + 2;
                *(byte **)(piVar14 + 0x16) = pbVar7;
              }
LAB_001b8788:
              piVar14[9] = 0;
              piVar14[6] = 1;
            }
            else {
              piVar14[0xc] = param_2;
              piVar14[0x12] = uVar8 - param_2;
              uVar15 = 0;
              if (uVar13 != 0) {
                uVar15 = (uVar8 - param_2) / uVar13;
              }
              piVar14[9] = uVar15;
            }
          }
          else {
            piVar14[0xc] = uVar13;
          }
        }
LAB_001b89bc:
        *param_3 = (_MACNV_SEEK_INFO)0x7f;
        param_3[4] = (_MACNV_SEEK_INFO)0x40;
        *(undefined2 *)(param_3 + 2) = 0x2000;
        param_3[5] = (_MACNV_SEEK_INFO)0x4c;
        p_Var6 = param_3 + 10;
        do {
          *p_Var6 = (_MACNV_SEEK_INFO)0x0;
          p_Var6[1] = (_MACNV_SEEK_INFO)0x50;
          p_Var2 = p_Var6 + 0x34;
          p_Var6[2] = (_MACNV_SEEK_INFO)0x0;
          p_Var6[3] = (_MACNV_SEEK_INFO)0x64;
          p_Var6[0xe] = (_MACNV_SEEK_INFO)0x40;
          p_Var6[5] = (_MACNV_SEEK_INFO)0x7f;
          p_Var6[6] = (_MACNV_SEEK_INFO)0x0;
          *(undefined2 *)(p_Var6 + 0x12) = 0x2000;
          p_Var6[7] = (_MACNV_SEEK_INFO)0x2;
          p_Var6[8] = (_MACNV_SEEK_INFO)0x1;
          p_Var6[9] = (_MACNV_SEEK_INFO)0x40;
          *(undefined2 *)(p_Var6 + 0x14) = 0x2000;
          p_Var6[10] = (_MACNV_SEEK_INFO)0x40;
          p_Var6[0xb] = (_MACNV_SEEK_INFO)0x40;
          p_Var6[0xc] = (_MACNV_SEEK_INFO)0x7f;
          p_Var6[0xd] = (_MACNV_SEEK_INFO)0x28;
          p_Var6[0xf] = (_MACNV_SEEK_INFO)0x0;
          p_Var6[-2] = (_MACNV_SEEK_INFO)0x0;
          p_Var6[-1] = (_MACNV_SEEK_INFO)0x0;
          p_Var6[0x1a] = (_MACNV_SEEK_INFO)0x0;
          p_Var6[0x1b] = (_MACNV_SEEK_INFO)0x50;
          p_Var6[0x1c] = (_MACNV_SEEK_INFO)0x0;
          p_Var6[0x1d] = (_MACNV_SEEK_INFO)0x64;
          p_Var6[0x28] = (_MACNV_SEEK_INFO)0x40;
          p_Var6[0x1f] = (_MACNV_SEEK_INFO)0x7f;
          p_Var6[0x20] = (_MACNV_SEEK_INFO)0x0;
          *(undefined2 *)(p_Var6 + 0x2c) = 0x2000;
          p_Var6[0x21] = (_MACNV_SEEK_INFO)0x2;
          p_Var6[0x22] = (_MACNV_SEEK_INFO)0x1;
          p_Var6[0x23] = (_MACNV_SEEK_INFO)0x40;
          *(undefined2 *)(p_Var6 + 0x2e) = 0x2000;
          p_Var6[0x24] = (_MACNV_SEEK_INFO)0x40;
          p_Var6[0x25] = (_MACNV_SEEK_INFO)0x40;
          p_Var6[0x26] = (_MACNV_SEEK_INFO)0x7f;
          p_Var6[0x27] = (_MACNV_SEEK_INFO)0x28;
          p_Var6[0x29] = (_MACNV_SEEK_INFO)0x0;
          p_Var6[0x18] = (_MACNV_SEEK_INFO)0x0;
          p_Var6[0x19] = (_MACNV_SEEK_INFO)0x0;
          p_Var6 = p_Var2;
        } while (p_Var2 != param_3 + 0x1aa);
        param_3[0xd] = SUB41(piVar14[0xf],0);
        return 0;
      }
    }
  }
  return 0xfffffffe;
}

