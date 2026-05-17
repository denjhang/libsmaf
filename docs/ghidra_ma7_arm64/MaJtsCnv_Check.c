/* MaJtsCnv_Check @ 001b79f4 844B */


/* YAMAHA::MaJtsCnv_Check(_MACNV_SEQ_INFO*, _MACNV_CHECK_PARAM*) */

int YAMAHA::MaJtsCnv_Check(_MACNV_SEQ_INFO *param_1,_MACNV_CHECK_PARAM *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long lVar6;
  
  if (((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
      (puVar5 = *(undefined4 **)(param_1 + 8), param_2 != (_MACNV_CHECK_PARAM *)0x0)) &&
     (puVar5 != (undefined4 *)0x0)) {
    uVar2 = *(uint *)(param_2 + 0x10);
    *puVar5 = 0;
    *(undefined8 *)(puVar5 + 2) = 0;
    puVar5[4] = (uint)(puVar5 == (undefined4 *)0x0);
    lVar6 = *(long *)(param_2 + 8);
    if (((uVar2 != 0) && (lVar6 != 0)) && (uVar1 = uVar2 & 1, (uVar2 & 1) == 0)) {
      iVar3 = FUN_001b6cc0(lVar6,uVar2);
      if (iVar3 < 0) {
        return iVar3;
      }
      *(long *)(puVar5 + 0x14) = lVar6;
      *(ulong *)(puVar5 + 0x18) = lVar6 + (ulong)uVar2;
      FUN_001b7640(puVar5 + 6,lVar6,uVar2);
      puVar5[6] = uVar1;
      puVar5[0xc] = uVar1;
      puVar5[9] = uVar1;
      puVar5[7] = 0x1e;
      puVar5[8] = 0x40;
      puVar5[0xf] = 100;
      puVar5[0x10] = uVar1;
      puVar5[0x11] = uVar1;
      puVar5[0x12] = uVar1;
      puVar5[10] = 0x1f;
      *(undefined8 *)(puVar5 + 0x16) = *(undefined8 *)(puVar5 + 0x14);
      puVar5[0x31a] = 0x1b;
      puVar5[0x1a] = uVar1;
      puVar5[0x20] = uVar1;
      puVar5[0x26] = uVar1;
      puVar5[0x2c] = uVar1;
      puVar5[0x32] = uVar1;
      puVar5[0x38] = uVar1;
      puVar5[0x3e] = uVar1;
      puVar5[0x44] = uVar1;
      puVar5[0x4a] = uVar1;
      puVar5[0x50] = uVar1;
      puVar5[0x56] = uVar1;
      puVar5[0x5c] = uVar1;
      puVar5[0x62] = uVar1;
      puVar5[0x68] = uVar1;
      puVar5[0x6e] = uVar1;
      puVar5[0x74] = uVar1;
      puVar5[0x7a] = uVar1;
      puVar5[0x80] = uVar1;
      puVar5[0x86] = uVar1;
      puVar5[0x8c] = uVar1;
      puVar5[0x92] = uVar1;
      puVar5[0x98] = uVar1;
      puVar5[0x9e] = uVar1;
      puVar5[0xa4] = uVar1;
      puVar5[0xaa] = uVar1;
      puVar5[0xb0] = uVar1;
      puVar5[0xb6] = uVar1;
      puVar5[0xbc] = uVar1;
      puVar5[0xc2] = uVar1;
      puVar5[200] = uVar1;
      puVar5[0xce] = uVar1;
      puVar5[0xd4] = uVar1;
      puVar5[0xda] = uVar1;
      puVar5[0xe0] = uVar1;
      puVar5[0xe6] = uVar1;
      puVar5[0xec] = uVar1;
      puVar5[0xf2] = uVar1;
      puVar5[0xf8] = uVar1;
      puVar5[0xfe] = uVar1;
      puVar5[0x104] = uVar1;
      puVar5[0x10a] = uVar1;
      puVar5[0x110] = uVar1;
      puVar5[0x116] = uVar1;
      puVar5[0x11c] = uVar1;
      puVar5[0x122] = uVar1;
      puVar5[0x128] = uVar1;
      puVar5[0x12e] = uVar1;
      puVar5[0x134] = uVar1;
      puVar5[0x13a] = uVar1;
      puVar5[0x140] = uVar1;
      puVar5[0x146] = uVar1;
      puVar5[0x14c] = uVar1;
      puVar5[0x152] = uVar1;
      puVar5[0x158] = uVar1;
      puVar5[0x15e] = uVar1;
      puVar5[0x164] = uVar1;
      puVar5[0x16a] = uVar1;
      puVar5[0x170] = uVar1;
      puVar5[0x176] = uVar1;
      puVar5[0x17c] = uVar1;
      puVar5[0x182] = uVar1;
      puVar5[0x188] = uVar1;
      puVar5[0x18e] = uVar1;
      puVar5[0x194] = uVar1;
      puVar5[0x19a] = uVar1;
      puVar5[0x1a0] = uVar1;
      puVar5[0x1a6] = uVar1;
      puVar5[0x1ac] = uVar1;
      puVar5[0x1b2] = uVar1;
      puVar5[0x1b8] = uVar1;
      puVar5[0x1be] = uVar1;
      puVar5[0x1c4] = uVar1;
      puVar5[0x1ca] = uVar1;
      puVar5[0x1d0] = uVar1;
      puVar5[0x1d6] = uVar1;
      puVar5[0x1dc] = uVar1;
      puVar5[0x1e2] = uVar1;
      puVar5[0x1e8] = uVar1;
      puVar5[0x1ee] = uVar1;
      puVar5[500] = uVar1;
      puVar5[0x1fa] = uVar1;
      puVar5[0x200] = uVar1;
      puVar5[0x206] = uVar1;
      puVar5[0x20c] = uVar1;
      puVar5[0x212] = uVar1;
      puVar5[0x218] = uVar1;
      puVar5[0x21e] = uVar1;
      puVar5[0x224] = uVar1;
      puVar5[0x22a] = uVar1;
      puVar5[0x230] = uVar1;
      puVar5[0x236] = uVar1;
      puVar5[0x23c] = uVar1;
      puVar5[0x242] = uVar1;
      puVar5[0x248] = uVar1;
      puVar5[0x24e] = uVar1;
      puVar5[0x254] = uVar1;
      puVar5[0x25a] = uVar1;
      puVar5[0x260] = uVar1;
      puVar5[0x266] = uVar1;
      puVar5[0x26c] = uVar1;
      puVar5[0x272] = uVar1;
      puVar5[0x278] = uVar1;
      puVar5[0x27e] = uVar1;
      puVar5[0x284] = uVar1;
      puVar5[0x28a] = uVar1;
      puVar5[0x290] = uVar1;
      puVar5[0x296] = uVar1;
      puVar5[0x29c] = uVar1;
      puVar5[0x2a2] = uVar1;
      puVar5[0x2a8] = uVar1;
      puVar5[0x2ae] = uVar1;
      puVar5[0x2b4] = uVar1;
      puVar5[0x2ba] = uVar1;
      puVar5[0x2c0] = uVar1;
      puVar5[0x2c6] = uVar1;
      puVar5[0x2cc] = uVar1;
      puVar5[0x2d2] = uVar1;
      puVar5[0x2d8] = uVar1;
      puVar5[0x2de] = uVar1;
      puVar5[0x2e4] = uVar1;
      puVar5[0x2ea] = uVar1;
      puVar5[0x2f0] = uVar1;
      puVar5[0x2f6] = uVar1;
      puVar5[0x2fc] = uVar1;
      puVar5[0x302] = uVar1;
      puVar5[0x308] = uVar1;
      puVar5[0x30e] = uVar1;
      puVar5[0x314] = uVar1;
      puVar5[0xb] = 0x1f;
      if (0x13 < (uint)puVar5[0xd]) {
        if ((uint)puVar5[0xd] < 0x8000000) {
          uVar4 = *(undefined8 *)(param_2 + 8);
          puVar5[4] = *(undefined4 *)(param_2 + 0x10);
          *(undefined8 *)(puVar5 + 2) = uVar4;
          return iVar3;
        }
        return -0x17;
      }
      return -0x16;
    }
  }
  return -2;
}

