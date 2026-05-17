/* MaPhrCnv_Check @ 000be298 692B */


/* YAMAHA::MaPhrCnv_Check(_MACNV_SEQ_INFO*, _MACNV_CHECK_PARAM*) */

int YAMAHA::MaPhrCnv_Check(_MACNV_SEQ_INFO *param_1,_MACNV_CHECK_PARAM *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  bool bVar11;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (puVar7 = *(undefined4 **)(param_1 + 4), puVar7 == (undefined4 *)0x0)) ||
     (param_2 == (_MACNV_CHECK_PARAM *)0x0)) {
    return -2;
  }
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
  uVar2 = *(uint *)(param_2 + 0xc);
  pbVar6 = *(byte **)(param_2 + 8);
  if (*(int *)param_2 == 2) {
    iVar1 = 2;
  }
  else {
    iVar1 = 1;
  }
  if (uVar2 == 0) {
    return -2;
  }
  if (pbVar6 == (byte *)0x0) {
    return -2;
  }
  if (iVar1 == 2) {
    if (uVar2 < 10) {
      return -0x10;
    }
    if (((uint)pbVar6[1] << 0x10 | (uint)*pbVar6 << 0x18 | (uint)pbVar6[3] | (uint)pbVar6[2] << 8)
        != 0x4d4d4d44) {
      return -0x14;
    }
    uVar3 = (uint)pbVar6[7] | (uint)pbVar6[5] << 0x10 | (uint)pbVar6[4] << 0x18 |
            (uint)pbVar6[6] << 8;
    if (uVar2 != uVar3 + 8) {
      return -0x13;
    }
    if (uVar3 < 0xf) {
      return -0x10;
    }
    if (((uint)pbVar6[9] << 0x10 | (uint)pbVar6[8] << 0x18 | (uint)pbVar6[0xb] |
        (uint)pbVar6[10] << 8) != 0x434e5449) {
      return -0x14;
    }
    uVar9 = (uint)pbVar6[0xd] << 0x10 | (uint)pbVar6[0xc] << 0x18 | (uint)pbVar6[0xf] |
            (uint)pbVar6[0xe] << 8;
    uVar2 = uVar9 + 10;
    bVar11 = uVar3 == uVar2;
    if (uVar3 >= uVar2) {
      bVar11 = uVar9 == 4;
    }
    if ((uVar3 < uVar2 || uVar9 < 4) || bVar11) {
      return -0x13;
    }
    goto LAB_000be512;
  }
  if (uVar2 < 10) {
    return -0x10;
  }
  if (((uint)pbVar6[1] << 0x10 | (uint)*pbVar6 << 0x18 | (uint)pbVar6[3] | (uint)pbVar6[2] << 8) !=
      0x4d4d4d44) {
    return -0x14;
  }
  uVar3 = (uint)pbVar6[5] << 0x10 | (uint)pbVar6[4] << 0x18 | (uint)pbVar6[7] | (uint)pbVar6[6] << 8
  ;
  if (uVar2 != uVar3 + 8) {
    return -0x13;
  }
  pbVar4 = pbVar6 + 1;
  iVar1 = DAT_000be54c + 0xbe394;
  pbVar10 = pbVar6 + uVar3 + 6;
  uVar8 = uVar3 + 5 & 3;
  uVar9 = *(ushort *)(iVar1 + (*pbVar6 ^ 0xff) * 2) ^ 0xff00;
  if (pbVar10 != pbVar4) {
    pbVar5 = pbVar4;
    if (uVar8 != 0) {
      if (uVar8 != 1) {
        bVar11 = uVar8 != 2;
        if (bVar11) {
          pbVar5 = pbVar6 + 2;
          uVar8 = (uint)*pbVar4;
        }
        if (bVar11) {
          uVar8 = uVar8 ^ uVar9 >> 8;
        }
        pbVar4 = pbVar5 + 1;
        if (bVar11) {
          uVar8 = (uint)*(ushort *)(iVar1 + uVar8 * 2);
        }
        if (bVar11) {
          uVar9 = (uVar8 ^ uVar9 << 8) & 0xffff;
        }
        uVar9 = ((uint)*(ushort *)(iVar1 + ((uint)*pbVar5 ^ uVar9 >> 8) * 2) ^ uVar9 << 8) & 0xffff;
      }
      uVar9 = ((uint)*(ushort *)(iVar1 + ((uint)*pbVar4 ^ uVar9 >> 8) * 2) ^ uVar9 << 8) & 0xffff;
      pbVar5 = pbVar4 + 1;
      if (pbVar10 == pbVar4 + 1) goto LAB_000be454;
    }
    do {
      pbVar4 = pbVar5 + 4;
      uVar9 = ((uint)*(ushort *)(iVar1 + ((uint)*pbVar5 ^ uVar9 >> 8) * 2) ^ uVar9 << 8) & 0xffff;
      uVar9 = ((uint)*(ushort *)(iVar1 + ((uint)pbVar5[1] ^ uVar9 >> 8) * 2) ^ uVar9 << 8) & 0xffff;
      uVar9 = ((uint)*(ushort *)(iVar1 + ((uint)pbVar5[2] ^ uVar9 >> 8) * 2) ^ uVar9 << 8) & 0xffff;
      uVar9 = ((uint)*(ushort *)(iVar1 + ((uint)pbVar5[3] ^ uVar9 >> 8) * 2) ^ uVar9 << 8) & 0xffff;
      pbVar5 = pbVar4;
    } while (pbVar10 != pbVar4);
  }
LAB_000be454:
  if (((uint)CONCAT11(pbVar6[uVar3 + 6],pbVar6[uVar2 - 1]) != (~uVar9 & 0xffff)) || (uVar3 < 0xf)) {
    return -0x10;
  }
  if (((uint)pbVar6[9] << 0x10 | (uint)pbVar6[8] << 0x18 | (uint)pbVar6[0xb] | (uint)pbVar6[10] << 8
      ) != 0x434e5449) {
    return -0x14;
  }
  uVar9 = (uint)pbVar6[0xd] << 0x10 | (uint)pbVar6[0xc] << 0x18 | (uint)pbVar6[0xf] |
          (uint)pbVar6[0xe] << 8;
  uVar2 = uVar9 + 10;
  bVar11 = uVar3 == uVar2;
  if (uVar2 <= uVar3) {
    bVar11 = uVar9 == 4;
  }
  if ((uVar2 > uVar3 || uVar9 < 4) || bVar11) {
    return -0x13;
  }
LAB_000be512:
  iVar1 = FUN_000bd87c(pbVar6);
  if (-1 < iVar1) {
    FUN_000bdb18(puVar7,pbVar6);
    puVar7[1] = *(undefined4 *)(param_2 + 8);
    puVar7[2] = *(undefined4 *)(param_2 + 0xc);
    return iVar1;
  }
  return iVar1;
}

