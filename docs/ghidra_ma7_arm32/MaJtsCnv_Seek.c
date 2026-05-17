/* MaJtsCnv_Seek @ 00094db8 1614B */


/* YAMAHA::MaJtsCnv_Seek(_MACNV_SEQ_INFO*, unsigned int, _MACNV_SEEK_INFO*) */

undefined4 YAMAHA::MaJtsCnv_Seek(_MACNV_SEQ_INFO *param_1,uint param_2,_MACNV_SEEK_INFO *param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  _MACNV_SEEK_INFO *p_Var7;
  int *piVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  
  if (((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
      (piVar8 = *(int **)(param_1 + 4), piVar8 != (int *)0x0)) &&
     (param_3 != (_MACNV_SEEK_INFO *)0x0)) {
    if (*piVar8 != 1) {
      return 0xffffffff;
    }
    pbVar9 = (byte *)piVar8[0x10];
    piVar8[5] = 0x40;
    piVar8[3] = 0;
    piVar8[9] = 0;
    piVar8[0x11] = (int)pbVar9;
    piVar8[6] = 0;
    piVar8[0xd] = 0;
    piVar8[0xe] = 0;
    piVar8[0xf] = 0;
    piVar8[0x13] = 0;
    piVar8[0x16] = 0;
    piVar8[0x19] = 0;
    piVar8[0x1c] = 0;
    piVar8[0x1f] = 0;
    piVar8[0x22] = 0;
    piVar8[0x25] = 0;
    piVar8[0x28] = 0;
    piVar8[0x2b] = 0;
    piVar8[0x2e] = 0;
    piVar8[0x31] = 0;
    piVar8[0x34] = 0;
    piVar8[0x37] = 0;
    piVar8[0x3a] = 0;
    piVar8[0x3d] = 0;
    piVar8[0x40] = 0;
    piVar8[0x43] = 0;
    piVar8[0x46] = 0;
    piVar8[0x49] = 0;
    piVar8[0x4c] = 0;
    piVar8[4] = 0x1e;
    piVar8[0xc] = 100;
    piVar8[7] = 0x1f;
    piVar8[0x193] = 0x1b;
    piVar8[0x4f] = 0;
    piVar8[0x52] = 0;
    piVar8[0x55] = 0;
    piVar8[0x58] = 0;
    piVar8[0x5b] = 0;
    piVar8[0x5e] = 0;
    piVar8[0x61] = 0;
    piVar8[100] = 0;
    piVar8[0x67] = 0;
    piVar8[0x6a] = 0;
    piVar8[0x6d] = 0;
    piVar8[0x70] = 0;
    piVar8[0x73] = 0;
    piVar8[0x76] = 0;
    piVar8[0x79] = 0;
    piVar8[0x7c] = 0;
    piVar8[0x7f] = 0;
    piVar8[0x82] = 0;
    piVar8[0x85] = 0;
    piVar8[0x88] = 0;
    piVar8[0x8b] = 0;
    piVar8[0x8e] = 0;
    piVar8[0x91] = 0;
    piVar8[0x94] = 0;
    piVar8[0x97] = 0;
    piVar8[0x9a] = 0;
    piVar8[0x9d] = 0;
    piVar8[0xa0] = 0;
    piVar8[0xa3] = 0;
    piVar8[0xa6] = 0;
    piVar8[0xa9] = 0;
    piVar8[0xac] = 0;
    piVar8[0xaf] = 0;
    piVar8[0xb2] = 0;
    piVar8[0xb5] = 0;
    piVar8[0xb8] = 0;
    piVar8[0xbb] = 0;
    piVar8[0xbe] = 0;
    piVar8[0xc1] = 0;
    piVar8[0xc4] = 0;
    piVar8[199] = 0;
    piVar8[0xca] = 0;
    piVar8[0xcd] = 0;
    piVar8[0xd0] = 0;
    piVar8[0xd3] = 0;
    piVar8[0xd6] = 0;
    piVar8[0xd9] = 0;
    piVar8[0xdc] = 0;
    piVar8[0xdf] = 0;
    piVar8[0xe2] = 0;
    piVar8[0xe5] = 0;
    piVar8[0xe8] = 0;
    piVar8[0xeb] = 0;
    piVar8[0xee] = 0;
    piVar8[0xf1] = 0;
    piVar8[0xf4] = 0;
    piVar8[0xf7] = 0;
    piVar8[0xfa] = 0;
    piVar8[0xfd] = 0;
    piVar8[0x100] = 0;
    piVar8[0x103] = 0;
    piVar8[0x106] = 0;
    piVar8[0x109] = 0;
    piVar8[0x10c] = 0;
    piVar8[0x10f] = 0;
    piVar8[0x112] = 0;
    piVar8[0x115] = 0;
    piVar8[0x118] = 0;
    piVar8[0x11b] = 0;
    piVar8[0x11e] = 0;
    piVar8[0x121] = 0;
    piVar8[0x124] = 0;
    piVar8[0x127] = 0;
    piVar8[0x12a] = 0;
    piVar8[0x12d] = 0;
    piVar8[0x130] = 0;
    piVar8[0x133] = 0;
    piVar8[0x136] = 0;
    piVar8[0x139] = 0;
    piVar8[0x13c] = 0;
    piVar8[0x13f] = 0;
    piVar8[0x142] = 0;
    piVar8[0x145] = 0;
    piVar8[0x148] = 0;
    piVar8[0x14b] = 0;
    piVar8[0x14e] = 0;
    piVar8[0x151] = 0;
    piVar8[0x154] = 0;
    piVar8[0x157] = 0;
    piVar8[0x15a] = 0;
    piVar8[0x15d] = 0;
    piVar8[0x160] = 0;
    piVar8[0x163] = 0;
    piVar8[0x166] = 0;
    piVar8[0x169] = 0;
    piVar8[0x16c] = 0;
    piVar8[0x16f] = 0;
    piVar8[0x172] = 0;
    piVar8[0x175] = 0;
    piVar8[0x178] = 0;
    piVar8[0x17b] = 0;
    piVar8[0x17e] = 0;
    piVar8[0x181] = 0;
    piVar8[0x184] = 0;
    piVar8[0x187] = 0;
    piVar8[0x18a] = 0;
    piVar8[0x18d] = 0;
    piVar8[400] = 0;
    if (param_2 <= (uint)piVar8[10]) {
      if (param_2 == 0) {
        iVar5 = piVar8[6] * piVar8[7];
        if (iVar5 == 0) {
LAB_00095028:
          pbVar10 = (byte *)piVar8[0x12];
LAB_0009502a:
          uVar12 = 0xffffffff;
          if (pbVar9 < pbVar10) {
            do {
              bVar1 = *pbVar9;
              bVar2 = pbVar9[1];
              uVar6 = (uint)bVar2;
              piVar8[6] = 0;
              switch(bVar1) {
              case 0xf7:
                if (uVar6 - 2 < 0x7e) {
                  piVar8[0xd] = uVar6 - 1;
                }
                break;
              case 0xf8:
                if (uVar6 < 0x65) {
                  piVar8[0xc] = uVar6;
                  pbVar9 = (byte *)(piVar8[0x11] + 2);
                  piVar8[0x11] = (int)pbVar9;
                  goto LAB_00095340;
                }
                break;
              case 0xf9:
                if (piVar8[uVar6 * 3 + 0x13] == 1) {
                  piVar8[uVar6 * 3 + 0x15] = (int)pbVar9;
                  piVar8[uVar6 * 3 + 0x13] = 3;
                  pbVar9 = (byte *)piVar8[uVar6 * 3 + 0x14];
                  piVar8[0xe] = 1;
                }
                break;
              case 0xfa:
                if (piVar8[uVar6 * 3 + 0x13] == 2) {
                  piVar8[uVar6 * 3 + 0x13] = 1;
                  if (uVar6 == uVar12) {
                    uVar12 = 0xffffffff;
                  }
                }
                else if (piVar8[uVar6 * 3 + 0x13] == 3) {
                  piVar8[0xe] = 0;
                  piVar8[uVar6 * 3 + 0x13] = 1;
                  pbVar9 = (byte *)piVar8[uVar6 * 3 + 0x15];
                }
                break;
              case 0xfb:
                if ((piVar8[uVar6 * 3 + 0x13] != 3) && (piVar8[0xe] == 0)) {
                  piVar8[uVar6 * 3 + 0x14] = (int)pbVar9;
                  if (uVar12 == 0xffffffff) {
                    uVar12 = uVar6;
                  }
                  piVar8[uVar6 * 3 + 0x13] = 2;
                }
                break;
              case 0xfc:
                if ('\0' < (char)bVar2) {
                  piVar8[5] = uVar6;
                  iVar5 = __udivsi3(60000,piVar8[4] * uVar6);
                  piVar8[7] = iVar5;
                }
                break;
              case 0xfd:
                if (uVar6 - 5 < 0x7b) {
                  piVar8[4] = uVar6;
                  iVar5 = __udivsi3(60000,piVar8[5] * uVar6);
                  piVar8[7] = iVar5;
                }
                break;
              case 0xfe:
                piVar8[0xb] = uVar6;
                break;
              case 0xff:
                if (uVar12 == 0xffffffff) {
                  piVar8[6] = uVar6;
                  if (piVar8[0xd] != 0) {
                    pbVar9 = pbVar9 + -2;
                    piVar8[0xd] = piVar8[0xd] + -1;
                  }
                  goto LAB_0009538e;
                }
                break;
              default:
                if ((bVar1 < 0x80) && (uVar12 == 0xffffffff)) goto code_r0x00095382;
              }
              pbVar9 = pbVar9 + 2;
              piVar8[0x11] = (int)pbVar9;
              if (pbVar10 <= pbVar9) break;
            } while( true );
          }
          piVar8[6] = 0;
          piVar8[3] = 1;
          goto LAB_000951a8;
        }
LAB_00095356:
        piVar8[0xf] = iVar5 + -1;
        iVar5 = __udivsi3();
        piVar8[9] = 1;
        piVar8[6] = iVar5;
LAB_000951a8:
        if ((byte *)(piVar8[0x10] + 2) <= pbVar9) {
          piVar8[0x11] = (int)(pbVar9 + -2);
        }
        piVar8[0xf] = 0;
        piVar8[6] = 0;
        piVar8[9] = 0;
      }
      else {
        uVar6 = 0;
        uVar12 = 0;
        if (param_2 != 0) {
LAB_00095068:
          uVar6 = uVar12;
          uVar12 = piVar8[6] * piVar8[7] + uVar6;
          if (uVar12 < param_2) {
            pbVar9 = (byte *)piVar8[0x11];
            pbVar10 = (byte *)piVar8[0x12];
            piVar8[9] = uVar12;
LAB_00095082:
            uVar11 = 0xffffffff;
            if (pbVar9 < pbVar10) {
              do {
                bVar1 = *pbVar9;
                bVar2 = pbVar9[1];
                uVar4 = (uint)bVar2;
                piVar8[6] = 0;
                switch(bVar1) {
                case 0xf7:
                  if (uVar4 - 2 < 0x7e) {
                    piVar8[0xd] = uVar4 - 1;
                  }
                  break;
                case 0xf8:
                  if (uVar4 < 0x65) {
                    piVar8[0xc] = uVar4;
                    piVar8[0x11] = piVar8[0x11] + 2;
                    goto LAB_0009516c;
                  }
                  break;
                case 0xf9:
                  if (piVar8[uVar4 * 3 + 0x13] == 1) {
                    piVar8[uVar4 * 3 + 0x15] = (int)pbVar9;
                    pbVar9 = (byte *)piVar8[uVar4 * 3 + 0x14];
                    piVar8[uVar4 * 3 + 0x13] = 3;
                    piVar8[0xe] = 1;
                  }
                  break;
                case 0xfa:
                  if (piVar8[uVar4 * 3 + 0x13] == 2) {
                    if (uVar4 == uVar11) {
                      uVar11 = 0xffffffff;
                    }
                    piVar8[uVar4 * 3 + 0x13] = 1;
                  }
                  else if (piVar8[uVar4 * 3 + 0x13] == 3) {
                    piVar8[0xe] = 0;
                    piVar8[uVar4 * 3 + 0x13] = 1;
                    pbVar9 = (byte *)piVar8[uVar4 * 3 + 0x15];
                  }
                  break;
                case 0xfb:
                  if ((piVar8[uVar4 * 3 + 0x13] != 3) && (piVar8[0xe] == 0)) {
                    if (uVar11 == 0xffffffff) {
                      uVar11 = uVar4;
                    }
                    piVar8[uVar4 * 3 + 0x14] = (int)pbVar9;
                    piVar8[uVar4 * 3 + 0x13] = 2;
                  }
                  break;
                case 0xfc:
                  if ('\0' < (char)bVar2) {
                    piVar8[5] = uVar4;
                    iVar5 = __udivsi3(60000,piVar8[4] * uVar4);
                    piVar8[7] = iVar5;
                  }
                  break;
                case 0xfd:
                  if (uVar4 - 5 < 0x7b) {
                    piVar8[4] = uVar4;
                    iVar5 = __udivsi3(60000,piVar8[5] * uVar4);
                    piVar8[7] = iVar5;
                  }
                  break;
                case 0xfe:
                  piVar8[0xb] = uVar4;
                  break;
                case 0xff:
                  if (uVar11 == 0xffffffff) {
                    piVar8[6] = uVar4;
                    if (piVar8[0xd] != 0) {
                      pbVar9 = pbVar9 + -2;
                      piVar8[0xd] = piVar8[0xd] + -1;
                    }
                    goto LAB_000953b2;
                  }
                  break;
                default:
                  if ((bVar1 < 0x80) && (uVar11 == 0xffffffff)) goto code_r0x000953a6;
                }
                pbVar9 = pbVar9 + 2;
                piVar8[0x11] = (int)pbVar9;
                if (pbVar10 <= pbVar9) break;
              } while( true );
            }
            piVar8[6] = 0;
            piVar8[3] = 1;
            goto LAB_000951be;
          }
          piVar8[0xf] = uVar12 - param_2;
          iVar5 = __udivsi3();
          piVar8[9] = param_2;
          piVar8[6] = iVar5;
          goto LAB_000951be;
        }
LAB_0009517c:
        piVar8[9] = uVar6;
      }
LAB_000951be:
      *param_3 = (_MACNV_SEEK_INFO)0x7f;
      cVar3 = '\x10';
      param_3[4] = (_MACNV_SEEK_INFO)0x40;
      *(undefined2 *)(param_3 + 2) = 0x2000;
      param_3[5] = (_MACNV_SEEK_INFO)0x4c;
      p_Var7 = param_3;
      do {
        cVar3 = cVar3 + -2;
        p_Var7[10] = (_MACNV_SEEK_INFO)0x0;
        p_Var7[0xb] = (_MACNV_SEEK_INFO)0x50;
        p_Var7[0xc] = (_MACNV_SEEK_INFO)0x0;
        p_Var7[0xd] = (_MACNV_SEEK_INFO)0x64;
        p_Var7[0x18] = (_MACNV_SEEK_INFO)0x40;
        p_Var7[0xf] = (_MACNV_SEEK_INFO)0x7f;
        p_Var7[0x10] = (_MACNV_SEEK_INFO)0x0;
        *(undefined2 *)(p_Var7 + 0x1c) = 0x2000;
        p_Var7[0x11] = (_MACNV_SEEK_INFO)0x2;
        p_Var7[0x12] = (_MACNV_SEEK_INFO)0x1;
        p_Var7[0x13] = (_MACNV_SEEK_INFO)0x40;
        *(undefined2 *)(p_Var7 + 0x1e) = 0x2000;
        p_Var7[0x14] = (_MACNV_SEEK_INFO)0x40;
        p_Var7[0x15] = (_MACNV_SEEK_INFO)0x40;
        p_Var7[0x16] = (_MACNV_SEEK_INFO)0x7f;
        p_Var7[0x17] = (_MACNV_SEEK_INFO)0x28;
        p_Var7[0x19] = (_MACNV_SEEK_INFO)0x0;
        p_Var7[8] = (_MACNV_SEEK_INFO)0x0;
        p_Var7[9] = (_MACNV_SEEK_INFO)0x0;
        p_Var7[0x24] = (_MACNV_SEEK_INFO)0x0;
        p_Var7[0x25] = (_MACNV_SEEK_INFO)0x50;
        p_Var7[0x26] = (_MACNV_SEEK_INFO)0x0;
        p_Var7[0x27] = (_MACNV_SEEK_INFO)0x64;
        p_Var7[0x32] = (_MACNV_SEEK_INFO)0x40;
        p_Var7[0x29] = (_MACNV_SEEK_INFO)0x7f;
        p_Var7[0x2a] = (_MACNV_SEEK_INFO)0x0;
        *(undefined2 *)(p_Var7 + 0x36) = 0x2000;
        p_Var7[0x2b] = (_MACNV_SEEK_INFO)0x2;
        p_Var7[0x2c] = (_MACNV_SEEK_INFO)0x1;
        p_Var7[0x2d] = (_MACNV_SEEK_INFO)0x40;
        *(undefined2 *)(p_Var7 + 0x38) = 0x2000;
        p_Var7[0x2e] = (_MACNV_SEEK_INFO)0x40;
        p_Var7[0x2f] = (_MACNV_SEEK_INFO)0x40;
        p_Var7[0x30] = (_MACNV_SEEK_INFO)0x7f;
        p_Var7[0x31] = (_MACNV_SEEK_INFO)0x28;
        p_Var7[0x33] = (_MACNV_SEEK_INFO)0x0;
        p_Var7[0x22] = (_MACNV_SEEK_INFO)0x0;
        p_Var7[0x23] = (_MACNV_SEEK_INFO)0x0;
        p_Var7 = p_Var7 + 0x34;
      } while (cVar3 != '\0');
      param_3[0xd] = SUB41(piVar8[0xc],0);
      return 0;
    }
  }
  return 0xfffffffe;
code_r0x000953a6:
  piVar8[6] = uVar4;
  if (piVar8[0xd] != 0) {
    pbVar9 = pbVar9 + -2;
    piVar8[0xd] = piVar8[0xd] + -1;
  }
LAB_000953b2:
  pbVar9 = pbVar9 + 2;
  piVar8[0x11] = (int)pbVar9;
  if (uVar4 != 0) goto LAB_0009516c;
  goto LAB_00095082;
LAB_0009516c:
  if (piVar8[3] == 1) goto LAB_000951be;
  if (param_2 <= uVar12) goto LAB_0009517c;
  goto LAB_00095068;
code_r0x00095382:
  piVar8[6] = uVar6;
  if (piVar8[0xd] != 0) {
    pbVar9 = pbVar9 + -2;
    piVar8[0xd] = piVar8[0xd] + -1;
  }
LAB_0009538e:
  pbVar9 = pbVar9 + 2;
  piVar8[0x11] = (int)pbVar9;
  if (uVar6 != 0) goto LAB_00095340;
  goto LAB_0009502a;
LAB_00095340:
  if (piVar8[3] == 1) goto LAB_000951a8;
  iVar5 = piVar8[6] * piVar8[7];
  if (iVar5 != 0) goto LAB_00095356;
  goto LAB_00095028;
}

