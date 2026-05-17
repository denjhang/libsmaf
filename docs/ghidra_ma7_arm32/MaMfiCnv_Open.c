/* MaMfiCnv_Open @ 0009e958 2766B */


/* YAMAHA::MaMfiCnv_Open(_MACNV_SEQ_INFO*, _MACNV_OPEN_PARAM*) */

int YAMAHA::MaMfiCnv_Open(_MACNV_SEQ_INFO *param_1,_MACNV_OPEN_PARAM *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 *puVar11;
  char cVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  int iVar20;
  undefined1 local_30;
  
  if ((((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
       (puVar11 = *(undefined1 **)(param_1 + 4), puVar11 == (undefined1 *)0x0)) ||
      (param_2 == (_MACNV_OPEN_PARAM *)0x0)) ||
     ((*(int *)(param_2 + 8) == 0 || (*(int *)(param_2 + 0xc) == 0)))) {
    return -2;
  }
  uVar7 = *(uint *)param_2;
  if (uVar7 == 0) {
    puVar11[10] = 0xf;
    local_30 = 1;
  }
  else {
    local_30 = (undefined1)(((uVar7 ^ 0x1000) & 0x1fff) >> 0xc);
    puVar11[10] = ~(byte)(uVar7 >> 0x10) & 0xf;
  }
  if ((puVar11[0x10] == '\0') && ((*(uint *)param_1 & 0xf00) == 0x100)) {
    puVar11[0x10] = 1;
  }
  *puVar11 = 0;
  iVar13 = *(int *)(puVar11 + 0x1c0);
  iVar8 = *(int *)(param_2 + 8);
  iVar15 = *(int *)(puVar11 + 0x1c4);
  *(int *)(puVar11 + 0x1c0) = iVar8;
  iVar5 = *(int *)(param_2 + 0xc);
  *(undefined4 *)(puVar11 + 0x1c8) = 4;
  *(undefined4 *)(puVar11 + 0x1cc) = 0x100;
  *(int *)(puVar11 + 0x1c4) = iVar5;
  *(undefined4 *)(puVar11 + 0x70c8) = 0xffffffff;
  *(undefined4 *)(puVar11 + 0x70cc) = 0xffffffff;
  *(undefined4 *)(puVar11 + 0x70d4) = 0xffffffff;
  *(undefined4 *)(puVar11 + 0x70d8) = 0xffffffff;
  *(undefined4 *)(puVar11 + 0x70e0) = 0xffffffff;
  *(undefined4 *)(puVar11 + 0x70e4) = 0xffffffff;
  *(undefined4 *)(puVar11 + 0x70ec) = 0xffffffff;
  *(undefined4 *)(puVar11 + 0x70f0) = 0xffffffff;
  *(undefined4 *)(puVar11 + 0x70f8) = 0xffffffff;
  *(undefined4 *)(puVar11 + 0x70fc) = 0xffffffff;
  *(undefined4 *)(puVar11 + 0x7104) = 0xffffffff;
  *(undefined4 *)(puVar11 + 0x7108) = 0xffffffff;
  *(undefined4 *)(puVar11 + 0x7110) = 0xffffffff;
  *(undefined4 *)(puVar11 + 0x7114) = 0xffffffff;
  if (-1 < *(int *)param_2 << 0x1f) {
    if ((iVar13 != iVar8) || (iVar15 != iVar5)) {
      return -1;
    }
    goto LAB_0009ea44;
  }
  puVar16 = puVar11 + 0x7cd6;
  puVar14 = puVar11 + 0x7c96;
  puVar17 = puVar11 + 0x7cf6;
  puVar6 = puVar11 + 0x7cb6;
  puVar11[0x11] = 1;
  puVar11[0x12] = 0;
  puVar19 = puVar11 + 0x7c76;
  puVar11[0x6b40] = 0xff;
  puVar11[0x6b41] = 0xff;
  puVar18 = puVar11 + 0x7d16;
  *(undefined4 *)(puVar11 + 0x7c3c) = 0;
  *(undefined4 *)(puVar11 + 0x7c40) = 0;
  *(undefined4 *)(puVar11 + 0x7c44) = 0;
  *(undefined4 *)(puVar11 + 0x7c48) = 0;
  *(undefined4 *)(puVar11 + 0x7c4c) = 0;
  *(undefined4 *)(puVar11 + 0x7c50) = 0;
  puVar11[0x7d39] = 0;
  *(undefined4 *)(puVar11 + 0x7bbc) = 0;
  *(undefined4 *)(puVar11 + 0x7bc0) = 0;
  puVar11[0x7d3a] = 0;
  puVar11[0x7d3c] = 0;
  *(undefined4 *)(puVar11 + 0x7c54) = 0;
  *(undefined2 *)(puVar11 + 0x7c68) = 0;
  *(undefined4 *)(puVar11 + 0x7c58) = 0;
  *(undefined2 *)(puVar11 + 0x7c6a) = 0;
  puVar11[0x7c75] = 0x20;
  iVar5 = 0;
  do {
    puVar19[1] = 0;
    puVar17[1] = 0x1f;
    puVar18[1] = 0x1f;
    puVar16[1] = 0;
    puVar14[1] = 0;
    puVar6[1] = 0;
    puVar11[iVar5 + 0x197] = 0xff;
    puVar19[2] = 0;
    puVar17[2] = 0x1f;
    puVar18[2] = 0x1f;
    puVar16[2] = 0;
    iVar8 = iVar5 + 4;
    puVar14[2] = 0;
    puVar6[2] = 0;
    puVar11[iVar5 + 0x198] = 0xff;
    puVar19[3] = 0;
    puVar17[3] = 0x1f;
    puVar18[3] = 0x1f;
    puVar16[3] = 0;
    puVar14[3] = 0;
    puVar6[3] = 0;
    puVar11[iVar5 + 0x199] = 0xff;
    puVar19 = puVar19 + 4;
    *puVar19 = 0;
    puVar17 = puVar17 + 4;
    *puVar17 = 0x1f;
    puVar18 = puVar18 + 4;
    *puVar18 = 0x1f;
    puVar16 = puVar16 + 4;
    *puVar16 = 0;
    puVar14 = puVar14 + 4;
    *puVar14 = 0;
    puVar6 = puVar6 + 4;
    *puVar6 = 0;
    puVar11[iVar5 + 0x19a] = 0xff;
    iVar5 = iVar8;
  } while (iVar8 != 0x20);
  iVar5 = 0;
  puVar19 = puVar11 + 0x7d40;
  puVar17 = puVar11 + 0x7d48;
  do {
    iVar5 = iVar5 + 8;
    *(undefined4 *)(puVar17 + -8) = 0;
    *(undefined4 *)(puVar17 + -4) = 0;
    *(undefined4 *)(puVar19 + 8) = 0;
    *(undefined4 *)(puVar19 + 0xc) = 0;
    *(undefined4 *)(puVar19 + 0x10) = 0;
    *(undefined4 *)(puVar19 + 0x14) = 0;
    *(undefined4 *)(puVar17 + 0x10) = 0;
    *(undefined4 *)(puVar17 + 0x14) = 0;
    *(undefined4 *)(puVar19 + 0x20) = 0;
    *(undefined4 *)(puVar19 + 0x24) = 0;
    *(undefined4 *)(puVar19 + 0x28) = 0;
    *(undefined4 *)(puVar19 + 0x2c) = 0;
    *(undefined4 *)(puVar17 + 0x28) = 0;
    *(undefined4 *)(puVar17 + 0x2c) = 0;
    *(undefined4 *)(puVar19 + 0x38) = 0;
    *(undefined4 *)(puVar19 + 0x3c) = 0;
    *(undefined4 *)(puVar19 + 0x40) = 0;
    *(undefined4 *)(puVar19 + 0x44) = 0;
    *(undefined4 *)(puVar17 + 0x40) = 0;
    *(undefined4 *)(puVar17 + 0x44) = 0;
    *(undefined4 *)(puVar19 + 0x50) = 0;
    *(undefined4 *)(puVar19 + 0x54) = 0;
    *(undefined4 *)(puVar19 + 0x58) = 0;
    *(undefined4 *)(puVar19 + 0x5c) = 0;
    *(undefined4 *)(puVar17 + 0x58) = 0;
    *(undefined4 *)(puVar17 + 0x5c) = 0;
    *(undefined4 *)(puVar19 + 0x68) = 0;
    *(undefined4 *)(puVar19 + 0x6c) = 0;
    *(undefined4 *)(puVar19 + 0x70) = 0;
    *(undefined4 *)(puVar19 + 0x74) = 0;
    *(undefined4 *)(puVar17 + 0x70) = 0;
    *(undefined4 *)(puVar17 + 0x74) = 0;
    *(undefined4 *)(puVar19 + 0x80) = 0;
    *(undefined4 *)(puVar19 + 0x84) = 0;
    *(undefined4 *)(puVar19 + 0x88) = 0;
    *(undefined4 *)(puVar19 + 0x8c) = 0;
    *(undefined4 *)(puVar17 + 0x88) = 0;
    *(undefined4 *)(puVar17 + 0x8c) = 0;
    *(undefined4 *)(puVar19 + 0x98) = 0;
    *(undefined4 *)(puVar19 + 0x9c) = 0;
    *(undefined4 *)(puVar19 + 0xa0) = 0;
    *(undefined4 *)(puVar19 + 0xa4) = 0;
    *(undefined4 *)(puVar17 + 0xa0) = 0;
    *(undefined4 *)(puVar17 + 0xa4) = 0;
    *(undefined4 *)(puVar19 + 0xb0) = 0;
    *(undefined4 *)(puVar19 + 0xb4) = 0;
    *(undefined4 *)(puVar19 + 0xb8) = 0;
    *(undefined4 *)(puVar19 + 0xbc) = 0;
    puVar19 = puVar19 + 0xc0;
    puVar17 = puVar17 + 0xc0;
  } while (iVar5 != 0x40);
  iVar5 = 0x400;
  puVar19 = puVar11;
  do {
    iVar5 = iVar5 + -8;
    *(undefined4 *)(puVar19 + 0xb34) = 0x1f;
    *(undefined4 *)(puVar19 + 0xb38) = 0xff;
    *(undefined4 *)(puVar19 + 0xb3c) = 0x80;
    *(undefined4 *)(puVar19 + 0xb40) = 0x80;
    *(undefined4 *)(puVar19 + 0xb44) = 0;
    *(undefined4 *)(puVar19 + 0xb48) = 0x1f;
    *(undefined4 *)(puVar19 + 0xb4c) = 0xff;
    *(undefined4 *)(puVar19 + 0xb50) = 0x80;
    *(undefined4 *)(puVar19 + 0xb54) = 0x80;
    *(undefined4 *)(puVar19 + 0xb58) = 0;
    *(undefined4 *)(puVar19 + 0xb5c) = 0x1f;
    *(undefined4 *)(puVar19 + 0xb60) = 0xff;
    *(undefined4 *)(puVar19 + 0xb64) = 0x80;
    *(undefined4 *)(puVar19 + 0xb68) = 0x80;
    *(undefined4 *)(puVar19 + 0xb6c) = 0;
    *(undefined4 *)(puVar19 + 0xb70) = 0x1f;
    *(undefined4 *)(puVar19 + 0xb74) = 0xff;
    *(undefined4 *)(puVar19 + 0xb78) = 0x80;
    *(undefined4 *)(puVar19 + 0xb7c) = 0x80;
    *(undefined4 *)(puVar19 + 0xb80) = 0;
    *(undefined4 *)(puVar19 + 0xb84) = 0x1f;
    *(undefined4 *)(puVar19 + 0xb88) = 0xff;
    *(undefined4 *)(puVar19 + 0xb8c) = 0x80;
    *(undefined4 *)(puVar19 + 0xb90) = 0x80;
    *(undefined4 *)(puVar19 + 0xb94) = 0;
    *(undefined4 *)(puVar19 + 0xb98) = 0x1f;
    *(undefined4 *)(puVar19 + 0xb9c) = 0xff;
    *(undefined4 *)(puVar19 + 0xba0) = 0x80;
    *(undefined4 *)(puVar19 + 0xba4) = 0x80;
    *(undefined4 *)(puVar19 + 0xba8) = 0;
    *(undefined4 *)(puVar19 + 0xbac) = 0x1f;
    *(undefined4 *)(puVar19 + 0xbb0) = 0xff;
    *(undefined4 *)(puVar19 + 0xbb4) = 0x80;
    *(undefined4 *)(puVar19 + 3000) = 0x80;
    *(undefined4 *)(puVar19 + 0xbbc) = 0;
    *(undefined4 *)(puVar19 + 0xbc0) = 0x1f;
    *(undefined4 *)(puVar19 + 0xbc4) = 0xff;
    *(undefined4 *)(puVar19 + 0xbc8) = 0x80;
    *(undefined4 *)(puVar19 + 0xbcc) = 0x80;
    *(undefined4 *)(puVar19 + 0xbd0) = 0;
    puVar19 = puVar19 + 0xa0;
  } while (iVar5 != 0);
  puVar11[0x16] = 0;
  *(undefined4 *)(puVar11 + 0xb0c) = 0x400;
  *(undefined4 *)(puVar11 + 0xb10) = 0x400;
  *(undefined4 *)(puVar11 + 0xb14) = 0x400;
  *(undefined4 *)(puVar11 + 0xb18) = 0x400;
  *(undefined4 *)(puVar11 + 0xa88) = 1;
  *(undefined4 *)(puVar11 + 0xa8c) = 1;
  *(undefined4 *)(puVar11 + 0xa90) = 1;
  *(undefined4 *)(puVar11 + 0xa94) = 1;
  *(undefined4 *)(puVar11 + 0xa98) = 1;
  *(undefined4 *)(puVar11 + 0xa9c) = 1;
  *(undefined4 *)(puVar11 + 0xaa0) = 1;
  *(undefined4 *)(puVar11 + 0xaa4) = 1;
  *(undefined4 *)(puVar11 + 0xaa8) = 1;
  *(undefined4 *)(puVar11 + 0xaac) = 1;
  *(undefined4 *)(puVar11 + 0xab0) = 1;
  *(undefined4 *)(puVar11 + 0xab4) = 1;
  *(undefined4 *)(puVar11 + 0xab8) = 1;
  *(undefined4 *)(puVar11 + 0xabc) = 1;
  *(undefined4 *)(puVar11 + 0xac0) = 1;
  *(undefined4 *)(puVar11 + 0xac8) = 1;
  *(undefined4 *)(puVar11 + 0xacc) = 1;
  *(undefined4 *)(puVar11 + 0xad0) = 1;
  *(undefined4 *)(puVar11 + 0xad4) = 1;
  *(undefined4 *)(puVar11 + 0xad8) = 1;
  *(undefined4 *)(puVar11 + 0xadc) = 1;
  *(undefined4 *)(puVar11 + 0xae0) = 1;
  *(undefined4 *)(puVar11 + 0xae8) = 1;
  *(undefined4 *)(puVar11 + 0xaec) = 1;
  *(undefined4 *)(puVar11 + 0xaf0) = 1;
  *(undefined4 *)(puVar11 + 0xaf4) = 1;
  *(undefined4 *)(puVar11 + 0xaf8) = 1;
  *(undefined4 *)(puVar11 + 0xafc) = 1;
  *(undefined4 *)(puVar11 + 0xb00) = 1;
  iVar5 = 0;
  do {
    iVar20 = iVar5 * 8;
    *(undefined4 *)(puVar11 + (iVar20 + 0xa2) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar20 + 0xa3) * 4) = 0x55555555;
    iVar8 = (iVar5 + 1) * 8;
    *(undefined4 *)(puVar11 + (iVar20 + 0xa4) * 4) = 0x55555555;
    iVar15 = (iVar5 + 3) * 8;
    *(undefined4 *)(puVar11 + (iVar20 + 0xa5) * 4) = 0x55555555;
    iVar13 = (iVar5 + 2) * 8;
    *(undefined4 *)(puVar11 + (iVar20 + 0xa6) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar20 + 0xa7) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar20 + 0xa8) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar20 + 0xa9) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar8 + 0xa2) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar8 + 0xa3) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar8 + 0xa4) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar8 + 0xa5) * 4) = 0x55555555;
    iVar5 = iVar5 + 4;
    *(undefined4 *)(puVar11 + (iVar8 + 0xa6) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar8 + 0xa7) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar8 + 0xa8) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar8 + 0xa9) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar13 + 0xa2) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar13 + 0xa3) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar13 + 0xa4) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar13 + 0xa5) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar13 + 0xa6) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar13 + 0xa7) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar13 + 0xa8) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar13 + 0xa9) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar15 + 0xa2) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar15 + 0xa3) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar15 + 0xa4) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar15 + 0xa5) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar15 + 0xa6) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar15 + 0xa7) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar15 + 0xa8) * 4) = 0x55555555;
    *(undefined4 *)(puVar11 + (iVar15 + 0xa9) * 4) = 0x55555555;
  } while (iVar5 != 0x20);
  *(undefined4 *)(puVar11 + 0xac4) = 0;
  *(undefined4 *)(puVar11 + 0xae4) = 0;
  *(undefined4 *)(puVar11 + 0xb04) = 0;
  *(undefined4 *)(puVar11 + 0xb20) = 0;
  *(undefined4 *)(puVar11 + 0xb1c) = 0;
  *(undefined4 *)(puVar11 + 0xb2c) = 0;
  *(undefined4 *)(puVar11 + 0xb28) = 0;
  puVar11[8] = 0;
  puVar11[0xb] = 0;
  *(undefined4 *)(puVar11 + 0xb08) = 0;
  puVar11[9] = 0x40;
  puVar11[7] = 0x40;
  puVar11[3] = 0x40;
  puVar11[4] = 0x7f;
  if ((byte)puVar11[0xc] < 2) {
    memset(puVar11 + 0x37,0,0x10);
    memset(puVar11 + 0x47,0,0x10);
    memset(puVar11 + 0x57,2,0x10);
    memset(puVar11 + 0x67,0x3f,0x10);
    memset(puVar11 + 0x77,0x20,0x10);
    memset(puVar11 + 0xa7,0x7f,0x10);
    if ((((uint)(puVar11 + 0x208) | (uint)(puVar11 + 0x27) | (uint)(puVar11 + 0x248)) & 7) == 0)
    goto LAB_0009f03c;
    puVar11[0x27] = 0;
    *(undefined4 *)(puVar11 + 0x208) = 0x18;
    *(undefined4 *)(puVar11 + 0x20c) = 0x18;
    *(undefined4 *)(puVar11 + 0x210) = 0x18;
    *(undefined4 *)(puVar11 + 0x214) = 0x18;
    *(undefined4 *)(puVar11 + 0x218) = 0x18;
    *(undefined4 *)(puVar11 + 0x21c) = 0x18;
    *(undefined4 *)(puVar11 + 0x220) = 0x18;
    *(undefined4 *)(puVar11 + 0x224) = 0x18;
    *(undefined4 *)(puVar11 + 0x228) = 0x18;
    *(undefined4 *)(puVar11 + 0x22c) = 0x18;
    *(undefined4 *)(puVar11 + 0x230) = 0x18;
    *(undefined4 *)(puVar11 + 0x248) = 2;
    *(undefined4 *)(puVar11 + 0x24c) = 2;
    puVar11[0x29] = 2;
    *(undefined4 *)(puVar11 + 0x250) = 2;
    *(undefined4 *)(puVar11 + 0x254) = 2;
    *(undefined4 *)(puVar11 + 600) = 2;
    *(undefined4 *)(puVar11 + 0x25c) = 2;
    *(undefined4 *)(puVar11 + 0x260) = 2;
    *(undefined4 *)(puVar11 + 0x264) = 2;
    *(undefined4 *)(puVar11 + 0x268) = 2;
    *(undefined4 *)(puVar11 + 0x26c) = 2;
    *(undefined4 *)(puVar11 + 0x270) = 2;
    puVar11[0x28] = 1;
LAB_0009f31c:
    puVar11[0x2a] = 3;
    puVar11[0x2b] = 4;
    puVar11[0x2c] = 5;
    puVar11[0x2e] = 7;
    puVar11[0x2f] = 8;
    puVar11[0x2d] = 6;
    puVar11[0x30] = 9;
    puVar11[0x31] = 10;
    puVar11[0x32] = 0xb;
    *(undefined4 *)(puVar11 + 0x234) = 0x18;
    *(undefined4 *)(puVar11 + 0x274) = 2;
    *(undefined4 *)(puVar11 + 0x238) = 0x18;
    *(undefined4 *)(puVar11 + 0x278) = 2;
    *(undefined4 *)(puVar11 + 0x23c) = 0x18;
    *(undefined4 *)(puVar11 + 0x27c) = 2;
    *(undefined4 *)(puVar11 + 0x240) = 0x18;
    *(undefined4 *)(puVar11 + 0x280) = 2;
    *(undefined4 *)(puVar11 + 0x244) = 0x18;
    *(undefined4 *)(puVar11 + 0x284) = 2;
    puVar11[0x33] = 0xc;
    puVar11[0x34] = 0xd;
    puVar11[0x35] = 0xe;
    puVar11[0x36] = 0xf;
  }
  else {
    puVar11[0x37] = 0;
    puVar11[0x38] = 0;
    puVar11[0x39] = 0;
    puVar11[0x3a] = 0;
    puVar11[0x3b] = 0;
    puVar11[0x3c] = 0;
    puVar11[0x3d] = 0;
    puVar11[0x3e] = 0;
    puVar11[0x3f] = 0;
    puVar11[0x41] = 0;
    puVar11[0x42] = 0;
    puVar11[0x43] = 0;
    puVar11[0x44] = 0;
    puVar11[0x45] = 0;
    puVar11[0x46] = 0;
    puVar11[0x40] = 1;
    memset(puVar11 + 0x47,0,0x10);
    memset(puVar11 + 0x57,2,0x10);
    memset(puVar11 + 0x67,0x3f,0x10);
    memset(puVar11 + 0x77,0x20,0x10);
    memset(puVar11 + 0xa7,0x7f,0x10);
    if ((((uint)(puVar11 + 0x208) | (uint)(puVar11 + 0x27) | (uint)(puVar11 + 0x248)) & 7) != 0) {
      puVar11[0x27] = 0;
      puVar11[0x28] = 1;
      *(undefined4 *)(puVar11 + 0x208) = 0x18;
      *(undefined4 *)(puVar11 + 0x20c) = 0x18;
      *(undefined4 *)(puVar11 + 0x210) = 0x18;
      *(undefined4 *)(puVar11 + 0x214) = 0x18;
      *(undefined4 *)(puVar11 + 0x218) = 0x18;
      *(undefined4 *)(puVar11 + 0x21c) = 0x18;
      *(undefined4 *)(puVar11 + 0x220) = 0x18;
      *(undefined4 *)(puVar11 + 0x224) = 0x18;
      *(undefined4 *)(puVar11 + 0x228) = 0x18;
      *(undefined4 *)(puVar11 + 0x22c) = 0x18;
      *(undefined4 *)(puVar11 + 0x230) = 0x18;
      *(undefined4 *)(puVar11 + 0x248) = 2;
      *(undefined4 *)(puVar11 + 0x24c) = 2;
      puVar11[0x29] = 2;
      *(undefined4 *)(puVar11 + 0x250) = 2;
      *(undefined4 *)(puVar11 + 0x254) = 2;
      *(undefined4 *)(puVar11 + 600) = 2;
      *(undefined4 *)(puVar11 + 0x25c) = 2;
      *(undefined4 *)(puVar11 + 0x260) = 2;
      *(undefined4 *)(puVar11 + 0x264) = 2;
      *(undefined4 *)(puVar11 + 0x268) = 2;
      *(undefined4 *)(puVar11 + 0x26c) = 2;
      *(undefined4 *)(puVar11 + 0x270) = 2;
      goto LAB_0009f31c;
    }
LAB_0009f03c:
    uVar4 = DAT_0009f434;
    uVar3 = DAT_0009f430;
    uVar2 = DAT_0009f42c;
    *(undefined4 *)(puVar11 + 0x27) = DAT_0009f428;
    *(undefined4 *)(puVar11 + 0x2b) = uVar2;
    *(undefined4 *)(puVar11 + 0x208) = 0x18;
    *(undefined4 *)(puVar11 + 0x20c) = 0x18;
    *(undefined4 *)(puVar11 + 0x210) = 0x18;
    *(undefined4 *)(puVar11 + 0x214) = 0x18;
    *(undefined4 *)(puVar11 + 0x218) = 0x18;
    *(undefined4 *)(puVar11 + 0x21c) = 0x18;
    *(undefined4 *)(puVar11 + 0x220) = 0x18;
    *(undefined4 *)(puVar11 + 0x224) = 0x18;
    *(undefined4 *)(puVar11 + 0x248) = 2;
    *(undefined4 *)(puVar11 + 0x24c) = 2;
    *(undefined4 *)(puVar11 + 0x250) = 2;
    *(undefined4 *)(puVar11 + 0x254) = 2;
    *(undefined4 *)(puVar11 + 600) = 2;
    *(undefined4 *)(puVar11 + 0x25c) = 2;
    *(undefined4 *)(puVar11 + 0x260) = 2;
    *(undefined4 *)(puVar11 + 0x264) = 2;
    *(undefined4 *)(puVar11 + 0x2f) = uVar3;
    *(undefined4 *)(puVar11 + 0x33) = uVar4;
    *(undefined4 *)(puVar11 + 0x228) = 0x18;
    *(undefined4 *)(puVar11 + 0x22c) = 0x18;
    *(undefined4 *)(puVar11 + 0x230) = 0x18;
    *(undefined4 *)(puVar11 + 0x234) = 0x18;
    *(undefined4 *)(puVar11 + 0x238) = 0x18;
    *(undefined4 *)(puVar11 + 0x23c) = 0x18;
    *(undefined4 *)(puVar11 + 0x240) = 0x18;
    *(undefined4 *)(puVar11 + 0x244) = 0x18;
    *(undefined4 *)(puVar11 + 0x268) = 2;
    *(undefined4 *)(puVar11 + 0x26c) = 2;
    *(undefined4 *)(puVar11 + 0x270) = 2;
    *(undefined4 *)(puVar11 + 0x274) = 2;
    *(undefined4 *)(puVar11 + 0x278) = 2;
    *(undefined4 *)(puVar11 + 0x27c) = 2;
    *(undefined4 *)(puVar11 + 0x280) = 2;
    *(undefined4 *)(puVar11 + 0x284) = 2;
  }
  memset(puVar11 + 0x97,0x20,0x10);
  memset(puVar11 + 0x87,0x20,0x10);
  memset(puVar11 + 0x157,0x3f,0x20);
  memset(puVar11 + 0x177,0x3f,0x20);
  memset(puVar11 + 0xb7,-1,0x20);
  memset(puVar11 + 0xd7,0,0x20);
  puVar19 = puVar11 + 0x6b43;
  *(undefined2 *)(puVar11 + 0x1be) = 0x2000;
  puVar11[6] = 0x40;
  puVar11[2] = 100;
  uVar7 = 0;
  do {
    if ((uVar7 & 0xff) == 9) {
      puVar11[0x6bf7] = 0x80;
    }
    else {
      *puVar19 = 0;
    }
    puVar19 = puVar19 + 0x14;
    uVar9 = uVar7 + 1;
    puVar11[uVar7 * 0x14 + 0x6b42] = 0;
    puVar11[uVar7 * 0x14 + 0x6b45] = 0;
    puVar11[uVar7 * 0x14 + 0x6b44] = 0x3f;
    puVar11[uVar7 * 0x14 + 0x6b48] = 0x40;
    puVar11[uVar7 * 0x14 + 0x6b49] = 0x7f;
    puVar11[uVar7 * 0x14 + 0x6b4a] = 0;
    *(undefined2 *)(puVar11 + uVar7 * 0x14 + 0x6b52) = 0x2000;
    puVar11[uVar7 * 0x14 + 0x6b46] = 2;
    puVar11[uVar7 * 0x14 + 0x6b47] = 2;
    puVar11[uVar7 * 0x14 + 0x6b4b] = 1;
    puVar11[uVar7 * 0x14 + 0x6b4c] = 0x40;
    *(undefined2 *)(puVar11 + uVar7 * 0x14 + 0x6b54) = 0x2000;
    puVar11[uVar7 * 0x14 + 0x6b4e] = 0x40;
    puVar11[uVar7 * 0x14 + 0x6b4d] = 0x40;
    puVar11[uVar7 * 0x14 + 0x6b4f] = 0x7f;
    puVar11[uVar7 * 0x14 + 0x6b50] = 0x28;
    puVar11[uVar7 * 0x14 + 0x6b51] = 0;
    uVar7 = uVar9;
  } while (uVar9 != 0x20);
  pcVar10 = *(char **)(param_2 + 8);
  if ((((*pcVar10 != 'm') || (pcVar10[1] != 'e')) || (pcVar10[2] != 'l')) || (pcVar10[3] != 'o')) {
    return -0x14;
  }
  iVar5 = FUN_0009c9d8(param_1,pcVar10,*(undefined4 *)(param_2 + 0xc),0);
  if (iVar5 < 0) {
    return iVar5;
  }
LAB_0009ea44:
  if (0xf < (byte)puVar11[10]) {
    puVar11[10] = 0xf;
  }
  cVar1 = puVar11[0x7c6c];
  if (cVar1 == '\x01') {
    puVar11[0xd] = 0;
    puVar11[1] = 4;
    puVar11[7] = 0x60;
    puVar11[0x7c6e] = 0;
    cVar12 = puVar11[0x7c6f];
  }
  else if (cVar1 == '\x02') {
    puVar11[7] = 0x7f;
    puVar11[1] = 4;
    puVar11[0xd] = 0;
    cVar12 = puVar11[0x7c6f];
    puVar11[0x7c6e] = 1;
  }
  else {
    cVar12 = puVar11[0x7c6f];
    if (cVar12 == '\x02') {
      puVar11[0x7c6e] = 0;
    }
    puVar11[1] = 4;
    puVar11[0xd] = 1;
    if ((int)((uint)(byte)puVar11[0x7d3c] << 0x19) < 0) {
      puVar11[0x7c6e] = 2;
    }
  }
  if (puVar11[0x10] == '\x01') {
    puVar11[0xd] = 1;
  }
  puVar11[0x7d38] = local_30;
  puVar11[0xc] = cVar1;
  puVar11[0xf] = cVar12;
  puVar11[0xe] = puVar11[0x7c76];
  *(undefined4 *)(puVar11 + 0x1d0) = *(undefined4 *)(puVar11 + 0x7bb8);
  puVar11[0x14] = 0;
  *puVar11 = 1;
  *(int *)(puVar11 + 0x1f8) = *(int *)(puVar11 + 0x7bcc) + 1;
  return 0;
}

