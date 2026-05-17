/* MaHvsCnv_Conv @ 001b6784 1340B */


/* YAMAHA::MaHvsCnv_Conv(_MACNV_SEQ_INFO*, _MASND_CMD_PARAM*) */

undefined8 YAMAHA::MaHvsCnv_Conv(_MACNV_SEQ_INFO *param_1,_MASND_CMD_PARAM *param_2)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  char cVar5;
  byte *pbVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  undefined4 uVar13;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (pcVar10 = *(char **)(param_1 + 8), param_2 == (_MASND_CMD_PARAM *)0x0)) ||
     (pcVar10 == (char *)0x0)) {
    return 0xfffffffe;
  }
  if (*pcVar10 != '\x01') {
    return 0xffffffff;
  }
  cVar5 = pcVar10[0x3c0];
  if (cVar5 == '\x03') {
    return 0;
  }
  if (cVar5 == '\0') {
    pcVar12 = pcVar10 + 3;
    iVar4 = (*(code *)(&PTR_MaS2PCnvJP_Convert_00565d48)[(ulong)(byte)pcVar10[2] * 5])
                      (pcVar12,0x393,0);
    if (iVar4 < 1) {
      uVar7 = *(uint *)(pcVar10 + 0x3a4);
      if (uVar7 == 0xffffffff) {
        pcVar10[0x3a0] = -1;
        pcVar10[0x3a1] = -1;
        pcVar10[0x3a2] = -1;
        pcVar10[0x3a3] = -1;
        pcVar10[0x3c0] = '\x02';
        goto LAB_001b6a64;
      }
      pcVar10[0x3c0] = '\x01';
      pcVar10[0x3a0] = -1;
      pcVar10[0x3a1] = -1;
      pcVar10[0x3a2] = -1;
      pcVar10[0x3a3] = -1;
      goto LAB_001b68c8;
    }
    bVar2 = pcVar10[3];
    uVar7 = (uint)bVar2;
    *(char **)(pcVar10 + 0x3c8) = pcVar12;
    *(int *)(pcVar10 + 0x3d0) = iVar4;
    if ((char)bVar2 < '\0') {
      bVar3 = pcVar10[4];
      if ((char)bVar3 < '\0') {
        if (pcVar10[5] < '\0') {
          pcVar10[0x3a4] = -1;
          pcVar10[0x3a5] = -1;
          pcVar10[0x3a6] = -1;
          pcVar10[0x3a7] = -1;
          pcVar10[0x3a0] = -1;
          pcVar10[0x3a1] = -1;
          pcVar10[0x3a2] = -1;
          pcVar10[0x3a3] = -1;
          pcVar10[0x3c0] = '\x02';
          goto LAB_001b6a64;
        }
        lVar8 = 3;
        uVar7 = (bVar2 & 0x7f) * 0x4000 + (bVar3 & 0x7f) * 0x80 + (uint)(byte)pcVar10[5];
        iVar9 = 3;
      }
      else {
        lVar8 = 2;
        uVar7 = (uVar7 & 0x7f) * 0x80 + (uint)bVar3;
        iVar9 = 2;
      }
    }
    else {
      lVar8 = 1;
      iVar9 = 1;
    }
    if (iVar9 < iVar4) {
      pcVar12 = pcVar12 + lVar8;
      *(char **)(pcVar10 + 0x3c8) = pcVar12;
      *(int *)(pcVar10 + 0x3d0) = iVar4 - iVar9;
    }
    uVar7 = uVar7 + *(int *)(pcVar10 + 0x3a0);
    *(uint *)(pcVar10 + 0x3a0) = uVar7;
    if (((*pcVar12 == -0x70) && (uVar7 < *(uint *)(pcVar10 + 0x3a4))) &&
       (*(uint *)(pcVar10 + 0x3a4) != 0xffffffff)) {
      *(uint *)(pcVar10 + 0x3a4) = uVar7;
      cVar5 = pcVar10[0x3c0];
    }
    else {
      cVar5 = pcVar10[0x3c0];
    }
  }
  if (cVar5 == '\x02') {
LAB_001b6a64:
    iVar4 = *(int *)(pcVar10 + 0x39c);
    bVar2 = pcVar10[1];
    iVar9 = *(int *)(pcVar10 + 0x398) * 0x14 - iVar4;
    if (iVar9 < 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = iVar9 * *(int *)(pcVar10 + 0x3ac) + 0x3ffU >> 10;
    }
    iVar9 = *(int *)(pcVar10 + 0x3a8);
    *(uint *)(param_2 + 4) = uVar7;
    *(undefined4 *)param_2 = 0x2e;
    *(uint *)(param_2 + 8) = (uint)bVar2;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(uint *)(pcVar10 + 0x39c) = iVar4 + uVar7 * iVar9;
    pcVar10[0x3c0] = '\x03';
    return 1;
  }
  uVar7 = *(uint *)(pcVar10 + 0x3a4);
  uVar1 = *(uint *)(pcVar10 + 0x3a0);
  if (uVar7 <= uVar1) {
LAB_001b68c8:
    if (0x19999 < uVar7) {
      uVar7 = 0x19999;
    }
    iVar4 = *(int *)(pcVar10 + 0x39c);
    *(uint *)(pcVar10 + 0x398) = uVar7;
    bVar2 = pcVar10[1];
    iVar9 = uVar7 * 0x14 - iVar4;
    if (iVar9 < 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = iVar9 * *(int *)(pcVar10 + 0x3ac) + 0x3ffU >> 10;
    }
    *(uint *)(param_2 + 4) = uVar7;
    *(uint *)(param_2 + 8) = (uint)bVar2;
    *(undefined4 *)param_2 = 0x29;
    *(undefined8 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x18) = 0;
    pcVar10[0x3a4] = -1;
    pcVar10[0x3a5] = -1;
    pcVar10[0x3a6] = -1;
    pcVar10[0x3a7] = -1;
    *(uint *)(pcVar10 + 0x39c) = iVar4 + uVar7 * *(int *)(pcVar10 + 0x3a8);
    if (pcVar10[0x3c0] != '\x01') {
      pcVar10[0x3c0] = '\x04';
      return 1;
    }
    pcVar10[0x3c0] = '\x02';
    return 1;
  }
  pbVar6 = *(byte **)(pcVar10 + 0x3c8);
  bVar2 = *pbVar6;
  if (bVar2 == 0xb0) {
    if (pbVar6[1] == 0x14) {
      iVar4 = *(int *)(pcVar10 + 0x39c);
      bVar2 = pbVar6[2];
      iVar9 = uVar1 * 0x14 - iVar4;
      *(uint *)(pcVar10 + 0x398) = uVar1;
      bVar3 = pcVar10[1];
      if (iVar9 < 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = iVar9 * *(int *)(pcVar10 + 0x3ac) + 0x3ffU >> 10;
      }
      iVar9 = *(int *)(pcVar10 + 0x3a8);
      uVar13 = 0x2d;
      *(uint *)(param_2 + 4) = uVar7;
    }
    else {
      if (pbVar6[1] != 0x16) {
        return 0xfffffff0;
      }
      iVar4 = *(int *)(pcVar10 + 0x39c);
      bVar2 = pbVar6[2];
      iVar9 = uVar1 * 0x14 - iVar4;
      *(uint *)(pcVar10 + 0x398) = uVar1;
      bVar3 = pcVar10[1];
      if (iVar9 < 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = iVar9 * *(int *)(pcVar10 + 0x3ac) + 0x3ffU >> 10;
      }
      iVar9 = *(int *)(pcVar10 + 0x3a8);
      uVar13 = 0x25;
      *(uint *)(param_2 + 4) = uVar7;
    }
    *(undefined4 *)param_2 = uVar13;
    *(uint *)(param_2 + 8) = (uint)bVar3;
    *(ulong *)(param_2 + 0x10) = (ulong)bVar2;
    *(undefined4 *)(param_2 + 0x18) = 0;
    *(uint *)(pcVar10 + 0x39c) = iVar4 + uVar7 * iVar9;
  }
  else {
    if (bVar2 < 0xb1) {
      if (bVar2 == 0x90) {
        bVar2 = pbVar6[3];
        uVar7 = (uint)bVar2;
        if ((char)bVar2 < '\0') {
          bVar3 = pbVar6[4];
          if ((char)bVar3 < '\0') {
            if ((char)pbVar6[5] < '\0') {
              return 0xfffffff0;
            }
            uVar7 = (bVar2 & 0x7f) * 0x4000 + (bVar3 & 0x7f) * 0x80 + (uint)pbVar6[5];
          }
          else {
            uVar7 = (uVar7 & 0x7f) * 0x80 + (uint)bVar3;
          }
        }
        if (uVar7 != 0) {
          iVar4 = *(int *)(pcVar10 + 0x39c);
          *(uint *)(pcVar10 + 0x398) = uVar1;
          iVar9 = uVar1 * 0x14 - iVar4;
          bVar2 = pcVar10[1];
          uVar13 = *(undefined4 *)(pcVar10 + 0x3d0);
          if (iVar9 < 0) {
            uVar11 = 0;
          }
          else {
            uVar11 = iVar9 * *(int *)(pcVar10 + 0x3ac) + 0x3ffU >> 10;
          }
          iVar9 = *(int *)(pcVar10 + 0x3a8);
          *(uint *)(param_2 + 4) = uVar11;
          *(undefined4 *)param_2 = 0x28;
          *(uint *)(param_2 + 8) = (uint)bVar2;
          *(byte **)(param_2 + 0x10) = pbVar6 + 1;
          *(undefined4 *)(param_2 + 0x18) = uVar13;
          *(uint *)(pcVar10 + 0x39c) = iVar4 + uVar11 * iVar9;
          *(uint *)(pcVar10 + 0x3a4) = uVar7 + uVar1;
          goto LAB_001b6860;
        }
      }
      return 0xfffffff0;
    }
    if (bVar2 == 0xc0) {
      iVar4 = *(int *)(pcVar10 + 0x39c);
      bVar2 = pbVar6[1];
      iVar9 = uVar1 * 0x14 - iVar4;
      *(uint *)(pcVar10 + 0x398) = uVar1;
      bVar3 = pcVar10[1];
      if (iVar9 < 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = iVar9 * *(int *)(pcVar10 + 0x3ac) + 0x3ffU >> 10;
      }
      iVar9 = *(int *)(pcVar10 + 0x3a8);
      *(uint *)(param_2 + 4) = uVar7;
      *(undefined4 *)param_2 = 0x2a;
      *(uint *)(param_2 + 8) = (uint)bVar3;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(uint *)(param_2 + 0x18) = (uint)bVar2;
      *(uint *)(pcVar10 + 0x39c) = iVar4 + uVar7 * iVar9;
    }
    else {
      if (bVar2 != 0xff) {
        return 0xfffffff0;
      }
      if (pbVar6[1] != 0) {
        return 0xfffffff0;
      }
      iVar4 = *(int *)(pcVar10 + 0x39c);
      *(uint *)(pcVar10 + 0x398) = uVar1;
      iVar9 = uVar1 * 0x14 - iVar4;
      bVar2 = pcVar10[1];
      if (iVar9 < 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = iVar9 * *(int *)(pcVar10 + 0x3ac) + 0x3ffU >> 10;
      }
      iVar9 = *(int *)(pcVar10 + 0x3a8);
      *(uint *)(param_2 + 4) = uVar7;
      *(undefined4 *)param_2 = 0x1b;
      *(uint *)(param_2 + 8) = (uint)bVar2;
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined4 *)(param_2 + 0x18) = 0;
      *(uint *)(pcVar10 + 0x39c) = iVar4 + uVar7 * iVar9;
    }
  }
LAB_001b6860:
  pcVar10[0x3c0] = '\0';
  return 1;
}

