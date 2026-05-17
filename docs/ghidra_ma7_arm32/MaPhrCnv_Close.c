/* MaPhrCnv_Close @ 000be764 704B */


/* YAMAHA::MaPhrCnv_Close(_MACNV_SEQ_INFO*) */

undefined4 YAMAHA::MaPhrCnv_Close(_MACNV_SEQ_INFO *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int local_24;
  
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) || (piVar3 = *(int **)(param_1 + 4), piVar3 == (int *)0x0)
     ) {
    uVar1 = 0xfffffffe;
  }
  else if (*piVar3 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    piVar4 = piVar3 + 5;
    iVar5 = (int)piVar4 * 2 - (int)piVar3;
    local_24 = 1;
    piVar3[0x12] = 1;
    piVar3[0x1c] = 1;
    piVar3[0x26] = 1;
    piVar3[0x30] = 1;
    piVar3[0x3a] = 1;
    piVar3[0xc] = 0;
    piVar3[10] = 0;
    piVar3[0xb] = 0;
    piVar3[0x14] = 0;
    piVar3[0x15] = 0;
    piVar3[0x16] = 0;
    piVar3[0x19] = 0;
    piVar3[0x1b] = 0;
    piVar3[0x1e] = 0;
    piVar3[0x1f] = 0;
    piVar3[0x20] = 0;
    piVar3[0x23] = 0;
    piVar3[0x25] = 0;
    piVar3[0x28] = 0;
    piVar3[0x29] = 0;
    piVar3[0x2a] = 0;
    piVar3[0x2d] = 0;
    piVar3[0x2f] = 0;
    piVar3[0x32] = 0;
    piVar3[0x33] = 0;
    piVar3[0x34] = 0;
    piVar3[0x37] = 0;
    piVar3[0x39] = 0;
    piVar3[0x3c] = 0;
    piVar3[0x18] = 0x7f;
    piVar3[0x22] = 0x7f;
    piVar3[0x2c] = 0x7f;
    piVar3[0x36] = 0x7f;
    piVar3[0x3d] = 0;
    piVar3[0x3e] = 0;
    piVar3[0x40] = 0x7f;
    piVar3[0x41] = 0;
    piVar3[0x43] = 0;
    piVar3[0x44] = 1;
    piVar3[0x46] = 0;
    piVar3[0x47] = 0;
    piVar3[0x48] = 0;
    piVar3[0x4a] = 0x7f;
    piVar3[0x4b] = 0;
    piVar3[0x4d] = 0;
    piVar3[0x4e] = 1;
    piVar3[0x50] = 0;
    piVar3[0x51] = 0;
    piVar3[0x52] = 0;
    piVar3[0x54] = 0x7f;
    piVar3[0x55] = 0;
    piVar3[0x57] = 0;
    piVar3[0x58] = 1;
    piVar3[0x5a] = 0;
    piVar3[0x5b] = 0;
    piVar3[0x5c] = 0;
    piVar3[0x5e] = 0x7f;
    piVar3[0x5f] = 0;
    piVar3[0x61] = 0;
    piVar3[0x62] = 1;
    piVar3[100] = 0;
    piVar3[0x65] = 0;
    piVar3[0x66] = 0;
    piVar3[0x68] = 0x7f;
    piVar3[0x69] = 0;
    piVar3[0x6b] = 0;
    piVar3[0x6c] = 1;
    piVar3[0x6e] = 0;
    piVar3[0x6f] = 0;
    piVar3[0x70] = 0;
    piVar3[0x72] = 0x7f;
    piVar3[0x73] = 0;
    piVar3[0x75] = 0;
    piVar3[0x76] = 1;
    piVar3[0x78] = 0;
    piVar3[0x79] = 0;
    piVar3[0x7a] = 0;
    piVar3[0x7c] = 0x7f;
    piVar3[0x7d] = 0;
    piVar3[0x7f] = 0;
    piVar3[0x80] = 1;
    piVar3[0x82] = 0;
    piVar3[0x83] = 0;
    piVar3[0x84] = 0;
    piVar3[0x86] = 0x7f;
    piVar3[0x87] = 0;
    piVar3[0x89] = 0;
    piVar3[0x8a] = 1;
    piVar3[0x8c] = 0;
    piVar3[0x8d] = 0;
    piVar3[0x8e] = 0;
    piVar3[0x90] = 0x7f;
    piVar3[0x91] = 0;
    piVar3[0x93] = 0;
    piVar3[0x94] = 1;
    piVar3[0x96] = 0;
    piVar3[0x97] = 0;
    piVar3[0x98] = 0;
    piVar3[0x9a] = 0x7f;
    piVar3[0x9b] = 0;
    piVar3[0x9d] = 0;
    piVar3[0x9e] = 1;
    piVar3[0xa0] = 0;
    piVar3[0xa1] = 0;
    piVar3[0xa2] = 0;
    piVar3[0xa4] = 0x7f;
    piVar3[0xa5] = 0;
    piVar3[0xa7] = 0;
    piVar3[0xa8] = 1;
    piVar3[0xaa] = 0;
    piVar3[0xab] = 0;
    piVar3[0xac] = 0;
    piVar3[0xae] = 0x7f;
    piVar3[0xaf] = 0;
    piVar3[0xb1] = 0;
    *(undefined4 *)(iVar5 + 0x2b8) = 0;
    *(undefined4 *)(iVar5 + 0x2a0) = 0xffffffff;
    piVar2 = piVar3 + 0xc;
    do {
      local_24 = local_24 + 8;
      *(undefined4 *)((int)piVar4 + (int)piVar2 + (0x2a0 - (int)piVar3)) = 0xffffffff;
      *(undefined4 *)((int)piVar4 + (int)piVar2 + (0x2b8 - (int)piVar3)) = 0;
      *(undefined4 *)((int)piVar4 + (int)piVar2 + -(int)piVar3 + 700) = 0xffffffff;
      *(undefined4 *)((int)piVar4 + (int)piVar2 + -(int)piVar3 + 0x2d4) = 0;
      *(undefined4 *)((int)piVar4 + (int)piVar2 + -(int)piVar3 + 0x2d8) = 0xffffffff;
      *(undefined4 *)((int)piVar4 + (int)piVar2 + -(int)piVar3 + 0x2f0) = 0;
      *(undefined4 *)((int)piVar4 + (int)piVar2 + -(int)piVar3 + 0x2f4) = 0xffffffff;
      *(undefined4 *)((int)piVar4 + (int)piVar2 + -(int)piVar3 + 0x30c) = 0;
      *(undefined4 *)((int)piVar4 + (int)piVar2 + -(int)piVar3 + 0x310) = 0xffffffff;
      *(undefined4 *)((int)piVar4 + (int)piVar2 + -(int)piVar3 + 0x328) = 0;
      *(undefined4 *)((int)piVar4 + (int)piVar2 + -(int)piVar3 + 0x32c) = 0xffffffff;
      *(undefined4 *)((int)piVar4 + (int)piVar2 + -(int)piVar3 + 0x344) = 0;
      *(undefined4 *)((int)piVar4 + (int)piVar2 + -(int)piVar3 + 0x348) = 0xffffffff;
      *(undefined4 *)((int)piVar4 + (int)piVar2 + -(int)piVar3 + 0x360) = 0;
      *(undefined4 *)((int)piVar4 + (int)piVar2 + -(int)piVar3 + 0x364) = 0xffffffff;
      *(undefined4 *)((int)piVar4 + (int)piVar2 + -(int)piVar3 + 0x37c) = 0;
      piVar2 = piVar2 + 0x38;
    } while (local_24 != 0x81);
    uVar1 = 0;
    piVar3[0x433] = 0x1b;
    piVar3[0xe] = -1;
    *piVar3 = 0;
  }
  return uVar1;
}

