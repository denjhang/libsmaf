/* MaMidCnv_Open @ 000a978c 518B */


/* YAMAHA::MaMidCnv_Open(_MACNV_SEQ_INFO*, _MACNV_OPEN_PARAM*) */

int YAMAHA::MaMidCnv_Open(_MACNV_SEQ_INFO *param_1,_MACNV_OPEN_PARAM *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined2 *puVar8;
  
  if ((((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
       (puVar4 = *(undefined1 **)(param_1 + 4), puVar4 == (undefined1 *)0x0)) ||
      (param_2 == (_MACNV_OPEN_PARAM *)0x0)) ||
     ((*(int *)(param_2 + 8) == 0 || (*(int *)(param_2 + 0xc) == 0)))) {
    iVar7 = -2;
  }
  else {
    *puVar4 = 0;
    iVar3 = *(int *)(puVar4 + 4);
    iVar5 = *(int *)(puVar4 + 8);
    *(undefined4 *)(puVar4 + 4) = *(undefined4 *)(param_2 + 8);
    uVar1 = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(puVar4 + 0xc) = 0;
    puVar4[1] = 0;
    *(undefined4 *)(puVar4 + 8) = uVar1;
    puVar4[0xb0e] = 0;
    puVar4[0xb0f] = 0;
    puVar4[0xb10] = 0;
    puVar4[0xb11] = 0xff;
    puVar4[0xb12] = 0xff;
    *(undefined4 *)(puVar4 + 0x4c) = 4;
    *(undefined4 *)(puVar4 + 0x50) = 0x100;
    iVar2 = *(int *)(param_1 + 4);
    iVar6 = 0x80;
    iVar7 = iVar2;
    do {
      iVar6 = iVar6 + -0x10;
      *(undefined2 *)(iVar7 + 0xb1c) = 0xffff;
      *(undefined2 *)(iVar7 + 0xb18) = 0xf;
      *(undefined2 *)(iVar7 + 0xb26) = 0xffff;
      *(undefined2 *)(iVar7 + 0xb22) = 0xf;
      *(undefined2 *)(iVar7 + 0xb30) = 0xffff;
      *(undefined2 *)(iVar7 + 0xb2c) = 0xf;
      *(undefined2 *)(iVar7 + 0xb3a) = 0xffff;
      *(undefined2 *)(iVar7 + 0xb36) = 0xf;
      *(undefined2 *)(iVar7 + 0xb44) = 0xffff;
      *(undefined2 *)(iVar7 + 0xb40) = 0xf;
      *(undefined2 *)(iVar7 + 0xb4e) = 0xffff;
      *(undefined2 *)(iVar7 + 0xb4a) = 0xf;
      *(undefined2 *)(iVar7 + 0xb58) = 0xffff;
      *(undefined2 *)(iVar7 + 0xb54) = 0xf;
      *(undefined2 *)(iVar7 + 0xb62) = 0xffff;
      *(undefined2 *)(iVar7 + 0xb5e) = 0xf;
      *(undefined2 *)(iVar7 + 0xb6c) = 0xffff;
      *(undefined2 *)(iVar7 + 0xb68) = 0xf;
      *(undefined2 *)(iVar7 + 0xb76) = 0xffff;
      *(undefined2 *)(iVar7 + 0xb72) = 0xf;
      *(undefined2 *)(iVar7 + 0xb80) = 0xffff;
      *(undefined2 *)(iVar7 + 0xb7c) = 0xf;
      *(undefined2 *)(iVar7 + 0xb8a) = 0xffff;
      *(undefined2 *)(iVar7 + 0xb86) = 0xf;
      *(undefined2 *)(iVar7 + 0xb94) = 0xffff;
      *(undefined2 *)(iVar7 + 0xb90) = 0xf;
      *(undefined2 *)(iVar7 + 0xb9e) = 0xffff;
      *(undefined2 *)(iVar7 + 0xb9a) = 0xf;
      *(undefined2 *)(iVar7 + 0xba8) = 0xffff;
      *(undefined2 *)(iVar7 + 0xba4) = 0xf;
      *(undefined2 *)(iVar7 + 0xbb2) = 0xffff;
      *(undefined2 *)(iVar7 + 0xbae) = 0xf;
      iVar7 = iVar7 + 0xa0;
    } while (iVar6 != 0);
    iVar7 = 0x80;
    *(undefined2 *)(iVar2 + 0x1016) = 0;
    *(undefined2 *)(iVar2 + 0x1014) = 0x8f;
    puVar8 = (undefined2 *)(iVar2 + 0x1020);
    do {
      iVar7 = iVar7 + -0x10;
      *puVar8 = 0xffff;
      puVar8[-2] = 0x8f;
      puVar8[5] = 0xffff;
      puVar8[3] = 0x8f;
      puVar8[10] = 0xffff;
      puVar8[8] = 0x8f;
      puVar8[0xf] = 0xffff;
      puVar8[0xd] = 0x8f;
      puVar8[0x14] = 0xffff;
      puVar8[0x12] = 0x8f;
      puVar8[0x19] = 0xffff;
      puVar8[0x17] = 0x8f;
      puVar8[0x1e] = 0xffff;
      puVar8[0x1c] = 0x8f;
      puVar8[0x23] = 0xffff;
      puVar8[0x21] = 0x8f;
      puVar8[0x28] = 0xffff;
      puVar8[0x26] = 0x8f;
      puVar8[0x2d] = 0xffff;
      puVar8[0x2b] = 0x8f;
      puVar8[0x32] = 0xffff;
      puVar8[0x30] = 0x8f;
      puVar8[0x37] = 0xffff;
      puVar8[0x35] = 0x8f;
      puVar8[0x3c] = 0xffff;
      puVar8[0x3a] = 0x8f;
      puVar8[0x41] = 0xffff;
      puVar8[0x3f] = 0x8f;
      puVar8[0x46] = 0xffff;
      puVar8[0x44] = 0x8f;
      puVar8[0x4b] = 0xffff;
      puVar8[0x49] = 0x8f;
      puVar8 = puVar8 + 0x50;
    } while (iVar7 != 0);
    *(undefined2 *)(iVar2 + 0x1518) = 0x8f;
    *(undefined2 *)(iVar2 + 0x151a) = 0;
    if (*(int *)param_2 << 0x1f < 0) {
      iVar7 = FUN_000a8970(param_1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
      if (iVar7 < 0) {
        return iVar7;
      }
    }
    else if ((*(int *)(puVar4 + 4) != iVar3) || (*(int *)(puVar4 + 8) != iVar5)) {
      return -1;
    }
    iVar7 = 0;
    *puVar4 = 1;
    *(int *)(puVar4 + 0x38) = *(int *)(puVar4 + 0x34) + 1;
  }
  return iVar7;
}

