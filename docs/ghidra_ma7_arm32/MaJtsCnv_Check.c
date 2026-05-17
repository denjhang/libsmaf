/* MaJtsCnv_Check @ 000945f0 702B */


/* YAMAHA::MaJtsCnv_Check(_MACNV_SEQ_INFO*, _MACNV_CHECK_PARAM*) */

int YAMAHA::MaJtsCnv_Check(_MACNV_SEQ_INFO *param_1,_MACNV_CHECK_PARAM *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  
  if (((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
      (puVar2 = *(undefined4 **)(param_1 + 4), puVar2 != (undefined4 *)0x0)) &&
     (param_2 != (_MACNV_CHECK_PARAM *)0x0)) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    uVar3 = *(uint *)(param_2 + 0xc);
    iVar4 = *(int *)(param_2 + 8);
    if (((uVar3 != 0) && ((uVar3 & 1) == 0)) && (iVar4 != 0)) {
      iVar1 = FUN_00093b24(iVar4,uVar3);
      if (iVar1 < 0) {
        return iVar1;
      }
      puVar2[0x12] = iVar4 + uVar3;
      puVar2[0x10] = iVar4;
      FUN_00094244(puVar2 + 3,iVar4,uVar3);
      puVar2[5] = 0x40;
      puVar2[3] = 0;
      puVar2[9] = 0;
      puVar2[6] = 0;
      puVar2[0xd] = 0;
      puVar2[0xe] = 0;
      puVar2[0xf] = 0;
      puVar2[0x13] = 0;
      puVar2[0x16] = 0;
      puVar2[0x19] = 0;
      puVar2[0x1c] = 0;
      puVar2[0x1f] = 0;
      puVar2[0x22] = 0;
      puVar2[0x25] = 0;
      puVar2[0x28] = 0;
      puVar2[0x2b] = 0;
      puVar2[0x2e] = 0;
      puVar2[0x31] = 0;
      puVar2[0x34] = 0;
      puVar2[0x37] = 0;
      puVar2[0x3a] = 0;
      puVar2[0x3d] = 0;
      puVar2[0x40] = 0;
      puVar2[0x43] = 0;
      puVar2[0x46] = 0;
      puVar2[0x49] = 0;
      puVar2[0x4c] = 0;
      puVar2[0x11] = puVar2[0x10];
      puVar2[4] = 0x1e;
      puVar2[0xc] = 100;
      puVar2[7] = 0x1f;
      puVar2[0x193] = 0x1b;
      puVar2[0x4f] = 0;
      puVar2[0x52] = 0;
      puVar2[0x55] = 0;
      puVar2[0x58] = 0;
      puVar2[0x5b] = 0;
      puVar2[0x5e] = 0;
      puVar2[0x61] = 0;
      puVar2[100] = 0;
      puVar2[0x67] = 0;
      puVar2[0x6a] = 0;
      puVar2[0x6d] = 0;
      puVar2[0x70] = 0;
      puVar2[0x73] = 0;
      puVar2[0x76] = 0;
      puVar2[0x79] = 0;
      puVar2[0x7c] = 0;
      puVar2[0x7f] = 0;
      puVar2[0x82] = 0;
      puVar2[0x85] = 0;
      puVar2[0x88] = 0;
      puVar2[0x8b] = 0;
      puVar2[0x8e] = 0;
      puVar2[0x91] = 0;
      puVar2[0x94] = 0;
      puVar2[0x97] = 0;
      puVar2[0x9a] = 0;
      puVar2[0x9d] = 0;
      puVar2[0xa0] = 0;
      puVar2[0xa3] = 0;
      puVar2[0xa6] = 0;
      puVar2[0xa9] = 0;
      puVar2[0xac] = 0;
      puVar2[0xaf] = 0;
      puVar2[0xb2] = 0;
      puVar2[0xb5] = 0;
      puVar2[0xb8] = 0;
      puVar2[0xbb] = 0;
      puVar2[0xbe] = 0;
      puVar2[0xc1] = 0;
      puVar2[0xc4] = 0;
      puVar2[199] = 0;
      puVar2[0xca] = 0;
      puVar2[0xcd] = 0;
      puVar2[0xd0] = 0;
      puVar2[0xd3] = 0;
      puVar2[0xd6] = 0;
      puVar2[0xd9] = 0;
      puVar2[0xdc] = 0;
      puVar2[0xdf] = 0;
      puVar2[0xe2] = 0;
      puVar2[0xe5] = 0;
      puVar2[0xe8] = 0;
      puVar2[0xeb] = 0;
      puVar2[0xee] = 0;
      puVar2[0xf1] = 0;
      puVar2[0xf4] = 0;
      puVar2[0xf7] = 0;
      puVar2[0xfa] = 0;
      puVar2[0xfd] = 0;
      puVar2[0x100] = 0;
      puVar2[0x103] = 0;
      puVar2[0x106] = 0;
      puVar2[0x109] = 0;
      puVar2[0x10c] = 0;
      puVar2[0x10f] = 0;
      puVar2[0x112] = 0;
      puVar2[0x115] = 0;
      puVar2[0x118] = 0;
      puVar2[0x11b] = 0;
      puVar2[0x11e] = 0;
      puVar2[0x121] = 0;
      puVar2[0x124] = 0;
      puVar2[0x127] = 0;
      puVar2[0x12a] = 0;
      puVar2[0x12d] = 0;
      puVar2[0x130] = 0;
      puVar2[0x133] = 0;
      puVar2[0x136] = 0;
      puVar2[0x139] = 0;
      puVar2[0x13c] = 0;
      puVar2[0x13f] = 0;
      puVar2[0x142] = 0;
      puVar2[0x145] = 0;
      puVar2[0x148] = 0;
      puVar2[0x14b] = 0;
      puVar2[0x14e] = 0;
      puVar2[0x151] = 0;
      puVar2[0x154] = 0;
      puVar2[0x157] = 0;
      puVar2[0x15a] = 0;
      puVar2[0x15d] = 0;
      puVar2[0x160] = 0;
      puVar2[0x163] = 0;
      puVar2[0x166] = 0;
      puVar2[0x169] = 0;
      puVar2[0x16c] = 0;
      puVar2[0x16f] = 0;
      puVar2[0x172] = 0;
      puVar2[0x175] = 0;
      puVar2[0x178] = 0;
      puVar2[0x17b] = 0;
      puVar2[0x17e] = 0;
      puVar2[0x181] = 0;
      puVar2[8] = 0x1f;
      puVar2[0x184] = 0;
      puVar2[0x187] = 0;
      puVar2[0x18a] = 0;
      puVar2[0x18d] = 0;
      puVar2[400] = 0;
      if (0x13 < (uint)puVar2[10]) {
        if ((uint)puVar2[10] < 0x8000000) {
          puVar2[1] = *(undefined4 *)(param_2 + 8);
          puVar2[2] = *(undefined4 *)(param_2 + 0xc);
          return iVar1;
        }
        return -0x17;
      }
      return -0x16;
    }
  }
  return -2;
}

