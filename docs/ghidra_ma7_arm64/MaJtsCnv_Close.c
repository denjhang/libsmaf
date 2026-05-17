/* MaJtsCnv_Close @ 001b8098 636B */


/* YAMAHA::MaJtsCnv_Close(_MACNV_SEQ_INFO*) */

undefined8 YAMAHA::MaJtsCnv_Close(_MACNV_SEQ_INFO *param_1)

{
  int *piVar1;
  
  if ((param_1 != (_MACNV_SEQ_INFO *)0x0) && (piVar1 = *(int **)(param_1 + 8), piVar1 != (int *)0x0)
     ) {
    if (*piVar1 != 0) {
      piVar1[6] = 0;
      piVar1[7] = 0x1e;
      piVar1[8] = 0x40;
      piVar1[0xf] = 100;
      piVar1[0xc] = 0;
      piVar1[9] = 0;
      piVar1[0x10] = 0;
      piVar1[0x11] = 0;
      piVar1[0x12] = 0;
      piVar1[10] = 0x1f;
      *(undefined8 *)(piVar1 + 0x16) = *(undefined8 *)(piVar1 + 0x14);
      piVar1[0x31a] = 0x1b;
      piVar1[0x1a] = 0;
      piVar1[0x20] = 0;
      piVar1[0x26] = 0;
      piVar1[0x2c] = 0;
      piVar1[0x32] = 0;
      piVar1[0x38] = 0;
      piVar1[0x3e] = 0;
      piVar1[0x44] = 0;
      piVar1[0x4a] = 0;
      piVar1[0x50] = 0;
      piVar1[0x56] = 0;
      piVar1[0x5c] = 0;
      piVar1[0x62] = 0;
      piVar1[0x68] = 0;
      piVar1[0x6e] = 0;
      piVar1[0x74] = 0;
      piVar1[0x7a] = 0;
      piVar1[0x80] = 0;
      piVar1[0x86] = 0;
      piVar1[0x8c] = 0;
      piVar1[0x92] = 0;
      piVar1[0x98] = 0;
      piVar1[0x9e] = 0;
      piVar1[0xa4] = 0;
      piVar1[0xaa] = 0;
      piVar1[0xb0] = 0;
      piVar1[0xb6] = 0;
      piVar1[0xbc] = 0;
      piVar1[0xc2] = 0;
      piVar1[200] = 0;
      piVar1[0xce] = 0;
      piVar1[0xd4] = 0;
      piVar1[0xda] = 0;
      piVar1[0xe0] = 0;
      piVar1[0xe6] = 0;
      piVar1[0xec] = 0;
      piVar1[0xf2] = 0;
      piVar1[0xf8] = 0;
      piVar1[0xfe] = 0;
      piVar1[0x104] = 0;
      piVar1[0x10a] = 0;
      piVar1[0x110] = 0;
      piVar1[0x116] = 0;
      piVar1[0x11c] = 0;
      piVar1[0x122] = 0;
      piVar1[0x128] = 0;
      piVar1[0x12e] = 0;
      piVar1[0x134] = 0;
      piVar1[0x13a] = 0;
      piVar1[0x140] = 0;
      piVar1[0x146] = 0;
      piVar1[0x14c] = 0;
      piVar1[0x152] = 0;
      piVar1[0x158] = 0;
      piVar1[0x15e] = 0;
      piVar1[0x164] = 0;
      piVar1[0x16a] = 0;
      piVar1[0x170] = 0;
      piVar1[0x176] = 0;
      piVar1[0x17c] = 0;
      piVar1[0x182] = 0;
      piVar1[0x188] = 0;
      piVar1[0x18e] = 0;
      piVar1[0x194] = 0;
      piVar1[0x19a] = 0;
      piVar1[0x1a0] = 0;
      piVar1[0x1a6] = 0;
      piVar1[0x1ac] = 0;
      piVar1[0x1b2] = 0;
      piVar1[0x1b8] = 0;
      piVar1[0x1be] = 0;
      piVar1[0x1c4] = 0;
      piVar1[0x1ca] = 0;
      piVar1[0x1d0] = 0;
      piVar1[0x1d6] = 0;
      piVar1[0x1dc] = 0;
      piVar1[0x1e2] = 0;
      piVar1[0x1e8] = 0;
      piVar1[0x1ee] = 0;
      piVar1[500] = 0;
      piVar1[0x1fa] = 0;
      piVar1[0x200] = 0;
      piVar1[0x206] = 0;
      piVar1[0x20c] = 0;
      piVar1[0x212] = 0;
      piVar1[0x218] = 0;
      piVar1[0x21e] = 0;
      piVar1[0x224] = 0;
      piVar1[0x22a] = 0;
      piVar1[0x230] = 0;
      piVar1[0x236] = 0;
      piVar1[0x23c] = 0;
      piVar1[0x242] = 0;
      piVar1[0x248] = 0;
      piVar1[0x24e] = 0;
      piVar1[0x254] = 0;
      piVar1[0x25a] = 0;
      piVar1[0x260] = 0;
      piVar1[0x266] = 0;
      piVar1[0x26c] = 0;
      piVar1[0x272] = 0;
      piVar1[0x278] = 0;
      piVar1[0x27e] = 0;
      piVar1[0x284] = 0;
      piVar1[0x28a] = 0;
      piVar1[0x290] = 0;
      piVar1[0x296] = 0;
      piVar1[0x29c] = 0;
      piVar1[0x2a2] = 0;
      piVar1[0x2a8] = 0;
      piVar1[0x2ae] = 0;
      piVar1[0x2b4] = 0;
      piVar1[0x2ba] = 0;
      piVar1[0x2c0] = 0;
      piVar1[0x2c6] = 0;
      piVar1[0x2cc] = 0;
      piVar1[0x2d2] = 0;
      piVar1[0x2d8] = 0;
      piVar1[0x2de] = 0;
      piVar1[0x2e4] = 0;
      piVar1[0x2ea] = 0;
      piVar1[0x2f0] = 0;
      piVar1[0x2f6] = 0;
      piVar1[0x2fc] = 0;
      piVar1[0x302] = 0;
      piVar1[0x308] = 0;
      piVar1[0x30e] = 0;
      piVar1[0x314] = 0;
      *piVar1 = 0;
      return 0;
    }
    return 0xffffffff;
  }
  return 0xfffffffe;
}

