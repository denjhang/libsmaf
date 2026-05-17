/* MaPhrCnv_Open @ 000be550 526B */


/* YAMAHA::MaPhrCnv_Open(_MACNV_SEQ_INFO*, _MACNV_OPEN_PARAM*) */

int YAMAHA::MaPhrCnv_Open(_MACNV_SEQ_INFO *param_1,_MACNV_OPEN_PARAM *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (puVar6 = *(undefined4 **)(param_1 + 4), puVar6 == (undefined4 *)0x0)) ||
     (param_2 == (_MACNV_OPEN_PARAM *)0x0)) {
    return -2;
  }
  *puVar6 = 0;
  if ((*(uint *)param_2 & 1) == 0) {
    pbVar7 = (byte *)puVar6[1];
    if (pbVar7 != *(byte **)(param_2 + 8)) {
      return -2;
    }
    uVar2 = *(uint *)(param_2 + 0xc);
    if (puVar6[2] != uVar2) {
      return -2;
    }
  }
  else {
    uVar2 = *(uint *)(param_2 + 0xc);
    pbVar7 = *(byte **)(param_2 + 8);
  }
  if (uVar2 == 0) {
    return -2;
  }
  if (pbVar7 == (byte *)0x0) {
    return -2;
  }
  if ((*(uint *)param_2 & 1) == 0) goto LAB_000be734;
  if (uVar2 < 10) {
    return -0x10;
  }
  if (((uint)pbVar7[1] << 0x10 | (uint)*pbVar7 << 0x18 | (uint)pbVar7[3] | (uint)pbVar7[2] << 8) !=
      0x4d4d4d44) {
    return -0x14;
  }
  uVar8 = (uint)pbVar7[5] << 0x10 | (uint)pbVar7[4] << 0x18 | (uint)pbVar7[7] | (uint)pbVar7[6] << 8
  ;
  if (uVar8 + 8 != uVar2) {
    return -0x13;
  }
  pbVar4 = pbVar7 + 1;
  iVar1 = DAT_000be760 + 0xbe602;
  pbVar9 = pbVar7 + uVar8 + 6;
  uVar2 = uVar8 + 5 & 3;
  uVar3 = *(ushort *)(iVar1 + (*pbVar7 ^ 0xff) * 2) ^ 0xff00;
  if (pbVar9 != pbVar4) {
    pbVar5 = pbVar4;
    if (uVar2 != 0) {
      if (uVar2 != 1) {
        bVar10 = uVar2 != 2;
        if (bVar10) {
          pbVar5 = pbVar7 + 2;
          uVar2 = (uint)*pbVar4;
        }
        if (bVar10) {
          uVar2 = uVar2 ^ uVar3 >> 8;
        }
        pbVar4 = pbVar5 + 1;
        if (bVar10) {
          uVar2 = (uint)*(ushort *)(iVar1 + uVar2 * 2);
        }
        if (bVar10) {
          uVar3 = (uVar2 ^ uVar3 << 8) & 0xffff;
        }
        uVar3 = ((uint)*(ushort *)(iVar1 + ((uint)*pbVar5 ^ uVar3 >> 8) * 2) ^ uVar3 << 8) & 0xffff;
      }
      uVar3 = ((uint)*(ushort *)(iVar1 + ((uint)*pbVar4 ^ uVar3 >> 8) * 2) ^ uVar3 << 8) & 0xffff;
      pbVar5 = pbVar4 + 1;
      if (pbVar9 == pbVar4 + 1) goto LAB_000be6c6;
    }
    do {
      pbVar4 = pbVar5 + 4;
      uVar2 = ((uint)*(ushort *)(iVar1 + ((uint)*pbVar5 ^ uVar3 >> 8) * 2) ^ uVar3 << 8) & 0xffff;
      uVar2 = ((uint)*(ushort *)(iVar1 + ((uint)pbVar5[1] ^ uVar2 >> 8) * 2) ^ uVar2 << 8) & 0xffff;
      uVar2 = ((uint)*(ushort *)(iVar1 + ((uint)pbVar5[2] ^ uVar2 >> 8) * 2) ^ uVar2 << 8) & 0xffff;
      uVar3 = ((uint)*(ushort *)(iVar1 + ((uint)pbVar5[3] ^ uVar2 >> 8) * 2) ^ uVar2 << 8) & 0xffff;
      pbVar5 = pbVar4;
    } while (pbVar9 != pbVar4);
  }
LAB_000be6c6:
  if (((uint)CONCAT11(pbVar7[uVar8 + 6],pbVar7[uVar8 + 7]) != (~uVar3 & 0xffff)) || (uVar8 < 0xf)) {
    return -0x10;
  }
  if (((uint)pbVar7[9] << 0x10 | (uint)pbVar7[8] << 0x18 | (uint)pbVar7[0xb] | (uint)pbVar7[10] << 8
      ) != 0x434e5449) {
    return -0x14;
  }
  uVar2 = (uint)pbVar7[0xd] << 0x10 | (uint)pbVar7[0xc] << 0x18 | (uint)pbVar7[0xf] |
          (uint)pbVar7[0xe] << 8;
  uVar3 = uVar2 + 10;
  bVar10 = uVar8 == uVar3;
  if (uVar8 >= uVar3) {
    bVar10 = uVar2 == 4;
  }
  if ((uVar8 < uVar3 || uVar2 < 4) || bVar10) {
    return -0x13;
  }
  iVar1 = FUN_000bd87c(pbVar7);
  if (iVar1 < 0) {
    return iVar1;
  }
  FUN_000bdb18(puVar6,pbVar7);
LAB_000be734:
  *puVar6 = 1;
  puVar6[9] = puVar6[8];
  return 0;
}

