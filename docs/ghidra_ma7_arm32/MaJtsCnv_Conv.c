/* MaJtsCnv_Conv @ 00095484 740B */


/* YAMAHA::MaJtsCnv_Conv(_MACNV_SEQ_INFO*, _MASND_CMD_PARAM*) */

uint YAMAHA::MaJtsCnv_Conv(_MACNV_SEQ_INFO *param_1,_MASND_CMD_PARAM *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int extraout_r1;
  int extraout_r1_00;
  byte *pbVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (piVar8 = *(int **)(param_1 + 4), piVar8 == (int *)0x0)) ||
     (param_2 == (_MASND_CMD_PARAM *)0x0)) {
    uVar7 = 0xfffffffe;
  }
  else {
    if (*piVar8 == 1) {
      iVar9 = piVar8[0xf];
      if (iVar9 != 0) {
        iVar2 = __udivsi3(iVar9,piVar8[8]);
        piVar8[0xf] = 0;
        piVar8[9] = piVar8[9] + iVar9;
        if (iVar2 != 0) {
          *(int *)(param_2 + 4) = iVar2;
          *(undefined4 *)(param_2 + 8) = 0;
          *(undefined4 *)(param_2 + 0xc) = 0;
          *(undefined4 *)(param_2 + 0x10) = 0;
          *(undefined4 *)param_2 = 0x1b;
          return 1;
        }
      }
      if (piVar8[0x193] == 1) {
        *(undefined4 *)param_2 = 1;
        uVar7 = 1;
LAB_0009556e:
        iVar9 = piVar8[8];
        __aeabi_uidivmod(piVar8[9],iVar9);
        uVar4 = __udivsi3(piVar8[0x194] + extraout_r1,iVar9);
        *(undefined4 *)(param_2 + 4) = uVar4;
        *(int *)(param_2 + 8) = piVar8[0x195];
        *(int *)(param_2 + 0xc) = piVar8[0x196];
        *(int *)(param_2 + 0x10) = piVar8[0x197];
        piVar8[0x193] = 0x1b;
        piVar8[6] = 0;
        piVar8[9] = piVar8[0x194] + piVar8[9];
        return uVar7;
      }
      iVar2 = piVar8[7];
      iVar9 = piVar8[6];
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined4 *)param_2 = 0x1b;
      *(undefined4 *)(param_2 + 0xc) = 0;
      *(undefined4 *)(param_2 + 0x10) = 0;
      *(int *)(param_2 + 4) = iVar9 * iVar2;
      pbVar6 = (byte *)piVar8[0x11];
      pbVar10 = (byte *)piVar8[0x12];
LAB_0009551a:
      uVar7 = 0xffffffff;
      if (pbVar6 < pbVar10) {
        do {
          uVar3 = (uint)*pbVar6;
          bVar1 = pbVar6[1];
          uVar5 = (uint)bVar1;
          piVar8[6] = 0;
          switch(uVar3) {
          case 0xf7:
            if (uVar5 - 2 < 0x7e) {
              piVar8[0xd] = uVar5 - 1;
            }
            break;
          case 0xf8:
            if (uVar5 < 0x65) {
              piVar8[0xc] = uVar5;
              *(undefined4 *)param_2 = 4;
              iVar9 = piVar8[0xc];
              *(undefined4 *)(param_2 + 0x10) = 0;
              *(int *)(param_2 + 0xc) = iVar9;
              piVar8[0x11] = piVar8[0x11] + 2;
              uVar7 = (uint)(piVar8[3] != 1);
              goto LAB_00095556;
            }
            break;
          case 0xf9:
            if (piVar8[uVar5 * 3 + 0x13] == 1) {
              piVar8[uVar5 * 3 + 0x15] = (int)pbVar6;
              piVar8[uVar5 * 3 + 0x13] = 3;
              pbVar6 = (byte *)piVar8[uVar5 * 3 + 0x14];
              pbVar10 = (byte *)piVar8[0x12];
              piVar8[0xe] = 1;
            }
            break;
          case 0xfa:
            if (piVar8[uVar5 * 3 + 0x13] == 2) {
              piVar8[uVar5 * 3 + 0x13] = 1;
              pbVar10 = (byte *)piVar8[0x12];
              if (uVar5 == uVar7) {
                uVar7 = 0xffffffff;
              }
            }
            else if (piVar8[uVar5 * 3 + 0x13] == 3) {
              piVar8[0xe] = 0;
              pbVar6 = (byte *)piVar8[uVar5 * 3 + 0x15];
              piVar8[uVar5 * 3 + 0x13] = 1;
LAB_0009563a:
              pbVar10 = (byte *)piVar8[0x12];
            }
            break;
          case 0xfb:
            if ((piVar8[uVar5 * 3 + 0x13] != 3) && (piVar8[0xe] == 0)) {
              piVar8[uVar5 * 3 + 0x14] = (int)pbVar6;
              piVar8[uVar5 * 3 + 0x13] = 2;
              if (uVar7 != 0xffffffff) goto LAB_0009563a;
              pbVar10 = (byte *)piVar8[0x12];
              uVar7 = uVar5;
            }
            break;
          case 0xfc:
            if ('\0' < (char)bVar1) {
              piVar8[5] = uVar5;
              iVar9 = __udivsi3(60000,piVar8[4] * uVar5);
              piVar8[7] = iVar9;
            }
            break;
          case 0xfd:
            if (uVar5 - 5 < 0x7b) {
              piVar8[4] = uVar5;
              iVar9 = __udivsi3(60000,piVar8[5] * uVar5);
              piVar8[7] = iVar9;
            }
            break;
          case 0xfe:
            piVar8[0xb] = uVar5;
            break;
          case 0xff:
            if (uVar7 == 0xffffffff) {
              piVar8[6] = uVar5;
              if (piVar8[0xd] != 0) {
                pbVar6 = pbVar6 + -2;
                piVar8[0xd] = piVar8[0xd] + -1;
              }
              goto LAB_000956ca;
            }
            break;
          default:
            if ((uVar3 < 0x80) && (uVar7 == 0xffffffff)) goto code_r0x000956ae;
          }
          pbVar6 = pbVar6 + 2;
          piVar8[0x11] = (int)pbVar6;
          if (pbVar10 <= pbVar6) break;
        } while( true );
      }
      uVar7 = 0;
      piVar8[6] = 0;
      piVar8[3] = 1;
LAB_00095556:
      iVar9 = *(int *)param_2;
joined_r0x000956e2:
      if (iVar9 == 0) {
        piVar8[0x195] = 0;
        piVar8[0x193] = 1;
        piVar8[0x194] = piVar8[6] * piVar8[7];
        iVar9 = *(int *)(param_2 + 0xc);
        piVar8[0x197] = 0;
        piVar8[0x196] = iVar9;
        *(undefined4 *)(param_2 + 4) = 0;
        return uVar7;
      }
      if (iVar9 != 1) {
        iVar11 = piVar8[8];
        iVar9 = piVar8[7];
        iVar2 = piVar8[6];
        __aeabi_uidivmod(piVar8[9],iVar11);
        uVar4 = __udivsi3(extraout_r1_00 + iVar2 * iVar9,iVar11);
        *(undefined4 *)(param_2 + 4) = uVar4;
        piVar8[9] = piVar8[9] + iVar2 * iVar9;
        return uVar7;
      }
      *(int *)param_2 = piVar8[0x193];
      goto LAB_0009556e;
    }
    uVar7 = 0xffffffff;
  }
  return uVar7;
code_r0x000956ae:
  *(undefined4 *)param_2 = 0;
  *(uint *)(param_2 + 0xc) = uVar3;
  *(undefined4 *)(param_2 + 0x10) = 0x7f;
  piVar8[6] = uVar5;
  pbVar6 = (byte *)piVar8[0x11];
  if (piVar8[0xd] != 0) {
    pbVar6 = pbVar6 + -2;
    piVar8[0xd] = piVar8[0xd] + -1;
  }
LAB_000956ca:
  pbVar6 = pbVar6 + 2;
  piVar8[0x11] = (int)pbVar6;
  if (uVar5 != 0) {
    iVar9 = *(int *)param_2;
    uVar7 = (uint)(piVar8[3] != 1);
    goto joined_r0x000956e2;
  }
  pbVar10 = (byte *)piVar8[0x12];
  goto LAB_0009551a;
}

