/* MaJtsCnv_Conv @ 001b8bd4 948B */


/* YAMAHA::MaJtsCnv_Conv(_MACNV_SEQ_INFO*, _MASND_CMD_PARAM*) */

ulong YAMAHA::MaJtsCnv_Conv(_MACNV_SEQ_INFO *param_1,_MASND_CMD_PARAM *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  byte *pbVar15;
  long lVar16;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (piVar13 = *(int **)(param_1 + 8), param_2 == (_MASND_CMD_PARAM *)0x0)) ||
     (piVar13 == (int *)0x0)) {
    return 0xfffffffe;
  }
  if (*piVar13 != 1) {
    return 0xffffffff;
  }
  uVar14 = piVar13[0x12];
  if (uVar14 != 0) {
    piVar13[0x12] = 0;
    uVar12 = 0;
    if (piVar13[0xb] != 0) {
      uVar12 = uVar14 / (uint)piVar13[0xb];
    }
    piVar13[0xc] = piVar13[0xc] + uVar14;
    if (uVar12 != 0) {
      *(uint *)(param_2 + 4) = uVar12;
      *(undefined4 *)param_2 = 0x1b;
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x18) = 0;
      return 1;
    }
  }
  iVar1 = piVar13[0x31a];
  if (iVar1 == 1) {
    uVar14 = piVar13[0xc];
    uVar11 = 1;
    uVar12 = piVar13[0xb];
  }
  else {
    iVar2 = piVar13[10];
    iVar3 = piVar13[9];
    pbVar8 = *(byte **)(piVar13 + 0x16);
    pbVar15 = *(byte **)(piVar13 + 0x18);
    uVar14 = 0xffffffff;
    *(undefined4 *)param_2 = 0x1b;
    *(int *)(param_2 + 4) = iVar2 * iVar3;
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    do {
      while( true ) {
        if (pbVar15 <= pbVar8) {
          piVar13[9] = 0;
          iVar2 = *(int *)param_2;
          uVar12 = 0;
          piVar13[6] = 1;
          uVar11 = 0;
          goto joined_r0x001b8ec0;
        }
        bVar5 = *pbVar8;
        bVar6 = pbVar8[1];
        uVar11 = (ulong)bVar6;
        uVar12 = (uint)bVar5;
        piVar13[9] = 0;
        uVar9 = (uint)bVar6;
        if (8 < uVar12 - 0xf7) break;
        uVar10 = (uint)bVar6;
        switch(uVar12) {
        case 0xf7:
          if (uVar9 - 2 < 0x7e) {
            piVar13[0x10] = uVar9 - 1;
          }
          break;
        case 0xf8:
          if (bVar6 < 0x65) {
            iVar1 = piVar13[6];
            piVar13[0xf] = uVar9;
            *(undefined4 *)param_2 = 4;
            *(ulong *)(param_2 + 0x10) = (ulong)bVar6;
            *(undefined4 *)(param_2 + 0x18) = 0;
            uVar11 = (ulong)(iVar1 != 1);
            *(byte **)(piVar13 + 0x16) = pbVar8 + 2;
            uVar12 = 0;
            goto LAB_001b8e68;
          }
          break;
        case 0xf9:
          if (piVar13[uVar11 * 6 + 0x1a] == 1) {
            *(byte **)(piVar13 + uVar11 * 6 + 0x1e) = pbVar8;
            piVar13[uVar11 * 6 + 0x1a] = 3;
            pbVar8 = *(byte **)(piVar13 + uVar11 * 6 + 0x1c);
            piVar13[0x11] = 1;
          }
          break;
        case 0xfa:
          lVar16 = (long)(int)uVar10;
          if (piVar13[lVar16 * 6 + 0x1a] == 2) {
            piVar13[lVar16 * 6 + 0x1a] = 1;
            if (uVar10 == uVar14) {
              uVar14 = 0xffffffff;
            }
          }
          else if (piVar13[lVar16 * 6 + 0x1a] == 3) {
            piVar13[0x11] = 0;
            piVar13[lVar16 * 6 + 0x1a] = 1;
            pbVar8 = *(byte **)(piVar13 + lVar16 * 6 + 0x1e);
          }
          break;
        case 0xfb:
          lVar16 = (long)(int)uVar10;
          if ((piVar13[lVar16 * 6 + 0x1a] != 3) && (piVar13[0x11] == 0)) {
            *(byte **)(piVar13 + lVar16 * 6 + 0x1c) = pbVar8;
            piVar13[lVar16 * 6 + 0x1a] = 2;
            if (uVar14 == 0xffffffff) {
              uVar14 = uVar10;
            }
          }
          break;
        case 0xfc:
          if ('\0' < (char)bVar6) {
            piVar13[8] = uVar10;
            uVar12 = 0;
            if (uVar10 * piVar13[7] != 0) {
              uVar12 = 60000 / (uVar10 * piVar13[7]);
            }
            piVar13[10] = uVar12;
          }
          break;
        case 0xfd:
          if (uVar10 - 5 < 0x7b) {
            piVar13[7] = uVar10;
            uVar12 = 0;
            if (uVar10 * piVar13[8] != 0) {
              uVar12 = 60000 / (uVar10 * piVar13[8]);
            }
            piVar13[10] = uVar12;
          }
          break;
        case 0xfe:
          piVar13[0xe] = uVar10;
          break;
        case 0xff:
          if (uVar14 == 0xffffffff) {
            piVar13[9] = uVar9;
            if (piVar13[0x10] != 0) {
              piVar13[0x10] = piVar13[0x10] + -1;
              pbVar8 = (byte *)(*(long *)(piVar13 + 0x16) + -2);
            }
            goto LAB_001b8dfc;
          }
        }
LAB_001b8ca8:
        pbVar8 = pbVar8 + 2;
        *(byte **)(piVar13 + 0x16) = pbVar8;
      }
      if ((0x7f < uVar12) || (uVar14 != 0xffffffff)) goto LAB_001b8ca8;
      *(undefined4 *)param_2 = 0;
      *(undefined4 *)(param_2 + 0x18) = 0x7f;
      *(ulong *)(param_2 + 0x10) = (ulong)bVar5;
      piVar13[9] = uVar9;
      if (piVar13[0x10] != 0) {
        pbVar8 = pbVar8 + -2;
        piVar13[0x10] = piVar13[0x10] + -1;
      }
LAB_001b8dfc:
      uVar12 = (uint)bVar6;
      pbVar8 = pbVar8 + 2;
      *(byte **)(piVar13 + 0x16) = pbVar8;
    } while (uVar9 == 0);
    iVar2 = *(int *)param_2;
    uVar11 = (ulong)(piVar13[6] != 1);
joined_r0x001b8ec0:
    if (iVar2 == 0) {
      piVar13[0x31d] = (int)*(undefined8 *)(param_2 + 0x10);
      piVar13[0x31a] = 1;
      piVar13[0x31b] = uVar12 * piVar13[10];
      piVar13[0x31c] = 0;
      piVar13[0x31e] = 0;
      *(undefined4 *)(param_2 + 4) = 0;
      return uVar11;
    }
    if (iVar2 != 1) {
LAB_001b8e68:
      uVar14 = piVar13[0xc];
      uVar9 = piVar13[0xb];
      iVar1 = piVar13[10];
      uVar10 = 0;
      if (uVar9 != 0) {
        uVar10 = uVar14 / uVar9;
      }
      uVar7 = 0;
      if (uVar9 != 0) {
        uVar7 = (uVar12 * iVar1 + (uVar14 - uVar10 * uVar9)) / uVar9;
      }
      *(uint *)(param_2 + 4) = uVar7;
      piVar13[0xc] = uVar12 * iVar1 + uVar14;
      return uVar11;
    }
    uVar14 = piVar13[0xc];
    uVar12 = piVar13[0xb];
  }
  uVar9 = 0;
  if (uVar12 != 0) {
    uVar9 = uVar14 / uVar12;
  }
  iVar2 = piVar13[0x31b];
  iVar3 = piVar13[0x31c];
  uVar10 = piVar13[0x31d];
  iVar4 = piVar13[0x31e];
  *(int *)param_2 = iVar1;
  *(int *)(param_2 + 8) = iVar3;
  *(ulong *)(param_2 + 0x10) = (ulong)uVar10;
  *(int *)(param_2 + 0x18) = iVar4;
  uVar10 = 0;
  if (uVar12 != 0) {
    uVar10 = ((uVar14 - uVar9 * uVar12) + iVar2) / uVar12;
  }
  *(uint *)(param_2 + 4) = uVar10;
  piVar13[0xc] = iVar2 + uVar14;
  piVar13[0x31a] = 0x1b;
  piVar13[9] = 0;
  return uVar11;
}

