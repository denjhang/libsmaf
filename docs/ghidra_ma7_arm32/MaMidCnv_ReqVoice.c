/* MaMidCnv_ReqVoice @ 000a99d8 574B */


/* YAMAHA::MaMidCnv_ReqVoice(_MACNV_SEQ_INFO*) */

int YAMAHA::MaMidCnv_ReqVoice(_MACNV_SEQ_INFO *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  
  if ((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
     (pcVar4 = *(char **)(param_1 + 4), pcVar4 == (char *)0x0)) {
    iVar2 = -2;
  }
  else {
    if (*pcVar4 != '\x01') {
      return -1;
    }
    iVar2 = 0x80;
    pcVar8 = pcVar4;
    do {
      iVar2 = iVar2 + -0x10;
      pcVar8[0xb1c] = -1;
      pcVar8[0xb1d] = -1;
      pcVar8[0xb18] = '\x0f';
      pcVar8[0xb19] = '\0';
      pcVar8[0xb26] = -1;
      pcVar8[0xb27] = -1;
      pcVar8[0xb22] = '\x0f';
      pcVar8[0xb23] = '\0';
      pcVar8[0xb30] = -1;
      pcVar8[0xb31] = -1;
      pcVar8[0xb2c] = '\x0f';
      pcVar8[0xb2d] = '\0';
      pcVar8[0xb3a] = -1;
      pcVar8[0xb3b] = -1;
      pcVar8[0xb36] = '\x0f';
      pcVar8[0xb37] = '\0';
      pcVar8[0xb44] = -1;
      pcVar8[0xb45] = -1;
      pcVar8[0xb40] = '\x0f';
      pcVar8[0xb41] = '\0';
      pcVar8[0xb4e] = -1;
      pcVar8[0xb4f] = -1;
      pcVar8[0xb4a] = '\x0f';
      pcVar8[0xb4b] = '\0';
      pcVar8[0xb58] = -1;
      pcVar8[0xb59] = -1;
      pcVar8[0xb54] = '\x0f';
      pcVar8[0xb55] = '\0';
      pcVar8[0xb62] = -1;
      pcVar8[0xb63] = -1;
      pcVar8[0xb5e] = '\x0f';
      pcVar8[0xb5f] = '\0';
      pcVar8[0xb6c] = -1;
      pcVar8[0xb6d] = -1;
      pcVar8[0xb68] = '\x0f';
      pcVar8[0xb69] = '\0';
      pcVar8[0xb76] = -1;
      pcVar8[0xb77] = -1;
      pcVar8[0xb72] = '\x0f';
      pcVar8[0xb73] = '\0';
      pcVar8[0xb80] = -1;
      pcVar8[0xb81] = -1;
      pcVar8[0xb7c] = '\x0f';
      pcVar8[0xb7d] = '\0';
      pcVar8[0xb8a] = -1;
      pcVar8[0xb8b] = -1;
      pcVar8[0xb86] = '\x0f';
      pcVar8[0xb87] = '\0';
      pcVar8[0xb94] = -1;
      pcVar8[0xb95] = -1;
      pcVar8[0xb90] = '\x0f';
      pcVar8[0xb91] = '\0';
      pcVar8[0xb9e] = -1;
      pcVar8[0xb9f] = -1;
      pcVar8[0xb9a] = '\x0f';
      pcVar8[0xb9b] = '\0';
      pcVar8[0xba8] = -1;
      pcVar8[0xba9] = -1;
      pcVar8[0xba4] = '\x0f';
      pcVar8[0xba5] = '\0';
      pcVar8[0xbb2] = -1;
      pcVar8[0xbb3] = -1;
      pcVar8[0xbae] = '\x0f';
      pcVar8[0xbaf] = '\0';
      pcVar8 = pcVar8 + 0xa0;
    } while (iVar2 != 0);
    pcVar4[0x1016] = '\0';
    pcVar4[0x1017] = '\0';
    pcVar4[0x1014] = -0x71;
    pcVar4[0x1015] = '\0';
    iVar2 = 0;
    pcVar8 = pcVar4 + 0x1020;
    do {
      iVar2 = iVar2 + 0x10;
      pcVar8[0] = -1;
      pcVar8[1] = -1;
      pcVar8[-0xffffffff00000004] = -0x71;
      pcVar8[-0xffffffff00000003] = '\0';
      pcVar8[10] = -1;
      pcVar8[0xb] = -1;
      pcVar8[6] = -0x71;
      pcVar8[7] = '\0';
      pcVar8[0x14] = -1;
      pcVar8[0x15] = -1;
      pcVar8[0x10] = -0x71;
      pcVar8[0x11] = '\0';
      pcVar8[0x1e] = -1;
      pcVar8[0x1f] = -1;
      pcVar8[0x1a] = -0x71;
      pcVar8[0x1b] = '\0';
      pcVar8[0x28] = -1;
      pcVar8[0x29] = -1;
      pcVar8[0x24] = -0x71;
      pcVar8[0x25] = '\0';
      pcVar8[0x32] = -1;
      pcVar8[0x33] = -1;
      pcVar8[0x2e] = -0x71;
      pcVar8[0x2f] = '\0';
      pcVar8[0x3c] = -1;
      pcVar8[0x3d] = -1;
      pcVar8[0x38] = -0x71;
      pcVar8[0x39] = '\0';
      pcVar8[0x46] = -1;
      pcVar8[0x47] = -1;
      pcVar8[0x42] = -0x71;
      pcVar8[0x43] = '\0';
      pcVar8[0x50] = -1;
      pcVar8[0x51] = -1;
      pcVar8[0x4c] = -0x71;
      pcVar8[0x4d] = '\0';
      pcVar8[0x5a] = -1;
      pcVar8[0x5b] = -1;
      pcVar8[0x56] = -0x71;
      pcVar8[0x57] = '\0';
      pcVar8[100] = -1;
      pcVar8[0x65] = -1;
      pcVar8[0x60] = -0x71;
      pcVar8[0x61] = '\0';
      pcVar8[0x6e] = -1;
      pcVar8[0x6f] = -1;
      pcVar8[0x6a] = -0x71;
      pcVar8[0x6b] = '\0';
      pcVar8[0x78] = -1;
      pcVar8[0x79] = -1;
      pcVar8[0x74] = -0x71;
      pcVar8[0x75] = '\0';
      pcVar8[0x82] = -1;
      pcVar8[0x83] = -1;
      pcVar8[0x7e] = -0x71;
      pcVar8[0x7f] = '\0';
      pcVar8[0x8c] = -1;
      pcVar8[0x8d] = -1;
      pcVar8[0x88] = -0x71;
      pcVar8[0x89] = '\0';
      pcVar8[0x96] = -1;
      pcVar8[0x97] = -1;
      pcVar8[0x92] = -0x71;
      pcVar8[0x93] = '\0';
      pcVar8 = pcVar8 + 0xa0;
    } while (iVar2 != 0x80);
    pcVar4[0x1518] = -0x71;
    pcVar4[0x1519] = '\0';
    pcVar4[0x151a] = '\0';
    pcVar4[0x151b] = '\0';
    iVar9 = *(int *)(param_1 + 4);
    iVar10 = iVar9 + 0x10;
    FUN_000a7d78(iVar10);
    iVar2 = *(int *)(iVar9 + 0x58);
    while (iVar2 != 0) {
      if (*(char *)(iVar9 + 0x24) == '\x01') {
        uVar7 = 0;
      }
      else {
        iVar2 = *(int *)(*(int *)(iVar9 + 0x2dc) + 4);
        if (*(int *)(iVar9 + 0x2e4) == iVar2) break;
        uVar7 = (uint)*(byte *)(iVar2 + 8);
      }
      iVar2 = iVar10 + uVar7 * 0x14;
      if (0 < *(int *)(iVar2 + 0x5c)) break;
      iVar6 = *(int *)(iVar2 + 0x58);
      iVar3 = iVar6 + 1;
      *(int *)(iVar2 + 0x58) = iVar3;
      bVar1 = *(byte *)(*(int *)(iVar2 + 0x54) + iVar6);
      uVar5 = (uint)bVar1;
      if (uVar5 < 0xf0) {
        if ((int)(uVar5 << 0x18) < 0) {
          *(byte *)(iVar2 + 0x4c) = bVar1;
        }
        else {
          uVar5 = (uint)*(byte *)(iVar2 + 0x4c);
          if (-1 < (int)(uVar5 << 0x18)) break;
          *(int *)(iVar2 + 0x58) = iVar6;
          iVar3 = iVar6;
        }
        if (((uVar5 & 0xf0) == 0xc0) || ((uVar5 & 0xf0) == 0xd0)) {
          *(int *)(iVar2 + 0x58) = iVar3 + 1;
        }
        else {
          *(int *)(iVar2 + 0x58) = iVar3 + 2;
        }
      }
      else if (uVar5 - 0xf0 < 0x10) {
        return iVar3;
      }
      FUN_000a6010(iVar10,uVar7);
      iVar2 = *(int *)(iVar9 + 0x58);
    }
    iVar2 = 0;
  }
  return iVar2;
}

