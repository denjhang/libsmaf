/* MaJtsCnv_Open @ 001b7d40 856B */


/* YAMAHA::MaJtsCnv_Open(_MACNV_SEQ_INFO*, _MACNV_OPEN_PARAM*) */

undefined8 YAMAHA::MaJtsCnv_Open(_MACNV_SEQ_INFO *param_1,_MACNV_OPEN_PARAM *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  long lVar5;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (puVar3 = *(undefined4 **)(param_1 + 8), param_2 == (_MACNV_OPEN_PARAM *)0x0)) ||
     (puVar3 == (undefined4 *)0x0)) {
    return 0xfffffffe;
  }
  uVar1 = *(uint *)param_2;
  *puVar3 = 0;
  if ((uVar1 & 1) == 0) {
    lVar5 = *(long *)(puVar3 + 2);
    if (lVar5 != *(long *)(param_2 + 8)) {
      return 0xfffffffe;
    }
    uVar4 = *(uint *)(param_2 + 0x10);
    if (puVar3[4] != uVar4) {
      return 0xfffffffe;
    }
  }
  else {
    lVar5 = *(long *)(param_2 + 8);
    uVar4 = *(uint *)(param_2 + 0x10);
  }
  if (uVar4 == 0) {
    return 0xfffffffe;
  }
  if ((uVar4 & 1) == 0) {
    if (lVar5 == 0) {
      return 0xfffffffe;
    }
    if ((uVar1 & 1) != 0) {
      uVar2 = FUN_001b6cc0(lVar5,uVar4);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      *(long *)(puVar3 + 0x14) = lVar5;
      *(ulong *)(puVar3 + 0x18) = lVar5 + (ulong)uVar4;
      FUN_001b7640(puVar3 + 6,lVar5,uVar4);
      puVar3[6] = 0;
      puVar3[0xc] = 0;
      puVar3[9] = 0;
      puVar3[7] = 0x1e;
      puVar3[8] = 0x40;
      puVar3[0xf] = 100;
      puVar3[0x10] = 0;
      puVar3[0x11] = 0;
      puVar3[0x12] = 0;
      puVar3[10] = 0x1f;
      *(undefined8 *)(puVar3 + 0x16) = *(undefined8 *)(puVar3 + 0x14);
      puVar3[0x31a] = 0x1b;
      puVar3[0x1a] = 0;
      puVar3[0x20] = 0;
      puVar3[0x26] = 0;
      puVar3[0x2c] = 0;
      puVar3[0x32] = 0;
      puVar3[0x38] = 0;
      puVar3[0x3e] = 0;
      puVar3[0x44] = 0;
      puVar3[0x4a] = 0;
      puVar3[0x50] = 0;
      puVar3[0x56] = 0;
      puVar3[0x5c] = 0;
      puVar3[0x62] = 0;
      puVar3[0x68] = 0;
      puVar3[0x6e] = 0;
      puVar3[0x74] = 0;
      puVar3[0x7a] = 0;
      puVar3[0x80] = 0;
      puVar3[0x86] = 0;
      puVar3[0x8c] = 0;
      puVar3[0x92] = 0;
      puVar3[0x98] = 0;
      puVar3[0x9e] = 0;
      puVar3[0xa4] = 0;
      puVar3[0xaa] = 0;
      puVar3[0xb0] = 0;
      puVar3[0xb6] = 0;
      puVar3[0xbc] = 0;
      puVar3[0xc2] = 0;
      puVar3[200] = 0;
      puVar3[0xce] = 0;
      puVar3[0xd4] = 0;
      puVar3[0xda] = 0;
      puVar3[0xe0] = 0;
      puVar3[0xe6] = 0;
      puVar3[0xec] = 0;
      puVar3[0xf2] = 0;
      puVar3[0xf8] = 0;
      puVar3[0xfe] = 0;
      puVar3[0x104] = 0;
      puVar3[0x10a] = 0;
      puVar3[0x110] = 0;
      puVar3[0x116] = 0;
      puVar3[0x11c] = 0;
      puVar3[0x122] = 0;
      puVar3[0x128] = 0;
      puVar3[0x12e] = 0;
      puVar3[0x134] = 0;
      puVar3[0x13a] = 0;
      puVar3[0x140] = 0;
      puVar3[0x146] = 0;
      puVar3[0x14c] = 0;
      puVar3[0x152] = 0;
      puVar3[0x158] = 0;
      puVar3[0x15e] = 0;
      puVar3[0x164] = 0;
      puVar3[0x16a] = 0;
      puVar3[0x170] = 0;
      puVar3[0x176] = 0;
      puVar3[0x17c] = 0;
      puVar3[0x182] = 0;
      puVar3[0x188] = 0;
      puVar3[0x18e] = 0;
      puVar3[0x194] = 0;
      puVar3[0x19a] = 0;
      puVar3[0x1a0] = 0;
      puVar3[0x1a6] = 0;
      puVar3[0x1ac] = 0;
      puVar3[0x1b2] = 0;
      puVar3[0x1b8] = 0;
      puVar3[0x1be] = 0;
      puVar3[0x1c4] = 0;
      puVar3[0x1ca] = 0;
      puVar3[0x1d0] = 0;
      puVar3[0x1d6] = 0;
      puVar3[0x1dc] = 0;
      puVar3[0x1e2] = 0;
      puVar3[0x1e8] = 0;
      puVar3[0x1ee] = 0;
      puVar3[500] = 0;
      puVar3[0x1fa] = 0;
      puVar3[0x200] = 0;
      puVar3[0x206] = 0;
      puVar3[0x20c] = 0;
      puVar3[0x212] = 0;
      puVar3[0x218] = 0;
      puVar3[0x21e] = 0;
      puVar3[0x224] = 0;
      puVar3[0x22a] = 0;
      puVar3[0x230] = 0;
      puVar3[0x236] = 0;
      puVar3[0x23c] = 0;
      puVar3[0x242] = 0;
      puVar3[0x248] = 0;
      puVar3[0x24e] = 0;
      puVar3[0x254] = 0;
      puVar3[0x25a] = 0;
      puVar3[0x260] = 0;
      puVar3[0x266] = 0;
      puVar3[0x26c] = 0;
      puVar3[0x272] = 0;
      puVar3[0x278] = 0;
      puVar3[0x27e] = 0;
      puVar3[0x284] = 0;
      puVar3[0x28a] = 0;
      puVar3[0x290] = 0;
      puVar3[0x296] = 0;
      puVar3[0x29c] = 0;
      puVar3[0x2a2] = 0;
      puVar3[0x2a8] = 0;
      puVar3[0x2ae] = 0;
      puVar3[0x2b4] = 0;
      puVar3[0x2ba] = 0;
      puVar3[0x2c0] = 0;
      puVar3[0x2c6] = 0;
      puVar3[0x2cc] = 0;
      puVar3[0x2d2] = 0;
      puVar3[0x2d8] = 0;
      puVar3[0x2de] = 0;
      puVar3[0x2e4] = 0;
      puVar3[0x2ea] = 0;
      puVar3[0x2f0] = 0;
      puVar3[0x2f6] = 0;
      puVar3[0x2fc] = 0;
      puVar3[0x302] = 0;
      puVar3[0x308] = 0;
      puVar3[0x30e] = 0;
      puVar3[0x314] = 0;
      puVar3[0xb] = 0x1f;
      if ((uint)puVar3[0xd] < 0x14) {
        return 0xffffffea;
      }
      if (0x7ffffff < (uint)puVar3[0xd]) {
        return 0xffffffe9;
      }
    }
    *puVar3 = 1;
    return 0;
  }
  return 0xfffffffe;
}

