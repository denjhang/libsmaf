/* MaJtsCnv_Close @ 00094b6c 586B */


/* YAMAHA::MaJtsCnv_Close(_MACNV_SEQ_INFO*) */

undefined4 YAMAHA::MaJtsCnv_Close(_MACNV_SEQ_INFO *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) || (piVar2 = *(int **)(param_1 + 4), piVar2 == (int *)0x0)
     ) {
    uVar1 = 0xfffffffe;
  }
  else if (*piVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = 0;
    piVar2[3] = 0;
    piVar2[0x11] = piVar2[0x10];
    piVar2[9] = 0;
    piVar2[6] = 0;
    piVar2[0xd] = 0;
    piVar2[0xe] = 0;
    piVar2[0xf] = 0;
    piVar2[0x13] = 0;
    piVar2[0x16] = 0;
    piVar2[0x19] = 0;
    piVar2[0x1c] = 0;
    piVar2[0x1f] = 0;
    piVar2[0x22] = 0;
    piVar2[0x25] = 0;
    piVar2[0x28] = 0;
    piVar2[0x2b] = 0;
    piVar2[0x2e] = 0;
    piVar2[0x31] = 0;
    piVar2[0x34] = 0;
    piVar2[0x37] = 0;
    piVar2[0x3a] = 0;
    piVar2[0x3d] = 0;
    piVar2[0x40] = 0;
    piVar2[0x43] = 0;
    piVar2[0x46] = 0;
    piVar2[0x49] = 0;
    piVar2[0x4c] = 0;
    piVar2[4] = 0x1e;
    piVar2[5] = 0x40;
    piVar2[0xc] = 100;
    piVar2[7] = 0x1f;
    piVar2[0x193] = 0x1b;
    piVar2[0x4f] = 0;
    piVar2[0x52] = 0;
    piVar2[0x55] = 0;
    piVar2[0x58] = 0;
    piVar2[0x5b] = 0;
    piVar2[0x5e] = 0;
    piVar2[0x61] = 0;
    piVar2[100] = 0;
    piVar2[0x67] = 0;
    piVar2[0x6a] = 0;
    piVar2[0x6d] = 0;
    piVar2[0x70] = 0;
    piVar2[0x73] = 0;
    piVar2[0x76] = 0;
    piVar2[0x79] = 0;
    piVar2[0x7c] = 0;
    piVar2[0x7f] = 0;
    piVar2[0x82] = 0;
    piVar2[0x85] = 0;
    piVar2[0x88] = 0;
    piVar2[0x8b] = 0;
    piVar2[0x8e] = 0;
    piVar2[0x91] = 0;
    piVar2[0x94] = 0;
    piVar2[0x97] = 0;
    piVar2[0x9a] = 0;
    piVar2[0x9d] = 0;
    piVar2[0xa0] = 0;
    piVar2[0xa3] = 0;
    piVar2[0xa6] = 0;
    piVar2[0xa9] = 0;
    piVar2[0xac] = 0;
    piVar2[0xaf] = 0;
    piVar2[0xb2] = 0;
    piVar2[0xb5] = 0;
    piVar2[0xb8] = 0;
    piVar2[0xbb] = 0;
    piVar2[0xbe] = 0;
    piVar2[0xc1] = 0;
    piVar2[0xc4] = 0;
    piVar2[199] = 0;
    piVar2[0xca] = 0;
    piVar2[0xcd] = 0;
    piVar2[0xd0] = 0;
    piVar2[0xd3] = 0;
    piVar2[0xd6] = 0;
    piVar2[0xd9] = 0;
    piVar2[0xdc] = 0;
    piVar2[0xdf] = 0;
    piVar2[0xe2] = 0;
    piVar2[0xe5] = 0;
    piVar2[0xe8] = 0;
    piVar2[0xeb] = 0;
    piVar2[0xee] = 0;
    piVar2[0xf1] = 0;
    piVar2[0xf4] = 0;
    piVar2[0xf7] = 0;
    piVar2[0xfa] = 0;
    piVar2[0xfd] = 0;
    piVar2[0x100] = 0;
    piVar2[0x103] = 0;
    piVar2[0x106] = 0;
    piVar2[0x109] = 0;
    piVar2[0x10c] = 0;
    piVar2[0x10f] = 0;
    piVar2[0x112] = 0;
    piVar2[0x115] = 0;
    piVar2[0x118] = 0;
    piVar2[0x11b] = 0;
    piVar2[0x11e] = 0;
    piVar2[0x121] = 0;
    piVar2[0x124] = 0;
    piVar2[0x127] = 0;
    piVar2[0x12a] = 0;
    piVar2[0x12d] = 0;
    piVar2[0x130] = 0;
    piVar2[0x133] = 0;
    piVar2[0x136] = 0;
    piVar2[0x139] = 0;
    piVar2[0x13c] = 0;
    piVar2[0x13f] = 0;
    piVar2[0x142] = 0;
    piVar2[0x145] = 0;
    piVar2[0x148] = 0;
    piVar2[0x14b] = 0;
    piVar2[0x14e] = 0;
    piVar2[0x151] = 0;
    piVar2[0x154] = 0;
    piVar2[0x157] = 0;
    piVar2[0x15a] = 0;
    piVar2[0x15d] = 0;
    piVar2[0x160] = 0;
    piVar2[0x163] = 0;
    piVar2[0x166] = 0;
    piVar2[0x169] = 0;
    piVar2[0x16c] = 0;
    piVar2[0x16f] = 0;
    piVar2[0x172] = 0;
    piVar2[0x175] = 0;
    piVar2[0x178] = 0;
    piVar2[0x17b] = 0;
    piVar2[0x17e] = 0;
    piVar2[0x181] = 0;
    piVar2[0x184] = 0;
    piVar2[0x187] = 0;
    piVar2[0x18a] = 0;
    piVar2[0x18d] = 0;
    piVar2[400] = 0;
    *piVar2 = 0;
  }
  return uVar1;
}

