/* MaMfiCnv_Seek @ 0009f988 12864B */


/* YAMAHA::MaMfiCnv_Seek(_MACNV_SEQ_INFO*, unsigned int, _MACNV_SEEK_INFO*) */

undefined4 YAMAHA::MaMfiCnv_Seek(_MACNV_SEQ_INFO *param_1,uint param_2,_MACNV_SEEK_INFO *param_3)

{
  code cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  uint uVar13;
  int iVar14;
  char *pcVar15;
  undefined2 uVar16;
  int iVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  undefined4 *puVar22;
  undefined1 uVar23;
  _MACNV_SEEK_INFO _Var24;
  undefined1 *puVar25;
  undefined4 *puVar26;
  _MACNV_SEEK_INFO *p_Var27;
  int iVar28;
  undefined4 *puVar29;
  int iVar30;
  int iVar31;
  short sVar32;
  undefined4 *puVar33;
  undefined4 *puVar34;
  uint uVar35;
  int iVar36;
  byte *pbVar37;
  undefined4 *puVar38;
  int iVar39;
  byte *pbVar40;
  char *pcVar41;
  undefined4 *puVar42;
  int iVar43;
  code *pcVar44;
  char cVar45;
  code cVar46;
  undefined4 *puVar47;
  bool bVar48;
  bool bVar49;
  bool bVar50;
  bool bVar51;
  bool bVar52;
  bool bVar53;
  bool bVar54;
  bool bVar55;
  byte local_68;
  byte local_58;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (pcVar41 = *(char **)(param_1 + 4), pcVar41 == (char *)0x0)) ||
     (param_3 == (_MACNV_SEEK_INFO *)0x0)) {
    return 0xfffffffe;
  }
  if (*pcVar41 != '\x01') {
    return 0xffffffff;
  }
  if (*(int *)(pcVar41 + 0x7bcc) >> 10 < (int)param_2) {
    return 0xfffffffe;
  }
  if (*(int *)(pcVar41 + 0x1f8) >> 10 < (int)param_2) {
    return 0xfffffffe;
  }
  pcVar41[0x1b7] = '\0';
  pcVar41[0x1b8] = '\0';
  pcVar41[0x13] = '\0';
  param_3[6] = (_MACNV_SEEK_INFO)0x0;
  param_3[4] = (_MACNV_SEEK_INFO)0x40;
  param_3[5] = (_MACNV_SEEK_INFO)0x40;
  param_3[7] = (_MACNV_SEEK_INFO)0x40;
  *(undefined2 *)(param_3 + 2) = 0x2000;
  *param_3 = (_MACNV_SEEK_INFO)0x64;
  uVar21 = 0;
  p_Var27 = param_3;
  do {
    uVar20 = uVar21 + 1;
    if ((uVar21 & 0xff) == 9) {
      param_3[0xf4] = (_MACNV_SEEK_INFO)0x80;
    }
    else {
      p_Var27[10] = (_MACNV_SEEK_INFO)0x0;
    }
    p_Var27 = p_Var27 + 0x1a;
    param_3[uVar21 * 0x1a + 0xd] = (_MACNV_SEEK_INFO)0x3f;
    param_3[uVar21 * 0x1a + 0xf] = (_MACNV_SEEK_INFO)0x7f;
    param_3[uVar21 * 0x1a + 0x12] = (_MACNV_SEEK_INFO)0x1;
    param_3[uVar21 * 0x1a + 0xb] = (_MACNV_SEEK_INFO)0x0;
    param_3[uVar21 * 0x1a + 0xc] = (_MACNV_SEEK_INFO)0x0;
    param_3[uVar21 * 0x1a + 0x18] = (_MACNV_SEEK_INFO)0x40;
    param_3[uVar21 * 0x1a + 0x10] = (_MACNV_SEEK_INFO)0x0;
    *(undefined2 *)(param_3 + uVar21 * 0x1a + 0x1c) = 0x2000;
    param_3[uVar21 * 0x1a + 0x11] = (_MACNV_SEEK_INFO)0x2;
    param_3[uVar21 * 0x1a + 0x13] = (_MACNV_SEEK_INFO)0x40;
    *(undefined2 *)(param_3 + uVar21 * 0x1a + 0x1e) = 0x2000;
    param_3[uVar21 * 0x1a + 0x14] = (_MACNV_SEEK_INFO)0x40;
    param_3[uVar21 * 0x1a + 0x15] = (_MACNV_SEEK_INFO)0x40;
    param_3[uVar21 * 0x1a + 0x16] = (_MACNV_SEEK_INFO)0x7f;
    param_3[uVar21 * 0x1a + 0x17] = (_MACNV_SEEK_INFO)0x28;
    param_3[uVar21 * 0x1a + 0x19] = (_MACNV_SEEK_INFO)0x0;
    *(undefined2 *)(param_3 + uVar21 * 0x1a + 0x20) = 0x40;
    param_3[uVar21 * 0x1a + 8] = (_MACNV_SEEK_INFO)0x0;
    param_3[uVar21 * 0x1a + 9] = (_MACNV_SEEK_INFO)0x0;
    param_3[uVar21 * 0x1a + 0x1a] = (_MACNV_SEEK_INFO)0x0;
    param_3[uVar21 * 0x1a + 0x1b] = (_MACNV_SEEK_INFO)0x0;
    uVar21 = uVar20;
  } while (uVar20 != 0x20);
  *(undefined4 *)(param_3 + 0x358) = 0x31ce;
  *(undefined4 *)(param_3 + 0x36c) = 0x31ce;
  *(undefined4 *)(param_3 + 0x380) = 0x31ce;
  *(undefined4 *)(param_3 + 0x394) = 0x31ce;
  *(undefined4 *)(param_3 + 0x348) = 0;
  *(undefined4 *)(param_3 + 0x34c) = 0;
  *(undefined4 *)(param_3 + 0x350) = 0;
  *(undefined4 *)(param_3 + 0x354) = 0;
  *(undefined4 *)(param_3 + 0x35c) = 1;
  *(undefined4 *)(param_3 + 0x360) = 0;
  *(undefined4 *)(param_3 + 0x364) = 0;
  *(undefined4 *)(param_3 + 0x368) = 0;
  *(undefined4 *)(param_3 + 0x370) = 2;
  *(undefined4 *)(param_3 + 0x374) = 0;
  *(undefined4 *)(param_3 + 0x378) = 0;
  *(undefined4 *)(param_3 + 0x37c) = 0;
  *(undefined4 *)(param_3 + 0x388) = 0;
  *(undefined4 *)(param_3 + 0x38c) = 0;
  *(undefined4 *)(param_3 + 0x390) = 0;
  *(undefined4 *)(param_3 + 900) = 3;
  pcVar41[0x6dc4] = '\0';
  pcVar41[0x6dc5] = '\0';
  pcVar41[0x6dc6] = '\0';
  pcVar41[0x6dc7] = '\0';
  pcVar41[0x6e84] = '\0';
  pcVar41[0x6e85] = '\0';
  pcVar41[0x6e86] = '\0';
  pcVar41[0x6e87] = '\0';
  pcVar41[0x6f44] = '\0';
  pcVar41[0x6f45] = '\0';
  pcVar41[0x6f46] = '\0';
  pcVar41[0x6f47] = '\0';
  pcVar41[0x7004] = '\0';
  pcVar41[0x7005] = '\0';
  pcVar41[0x7006] = '\0';
  pcVar41[0x7007] = '\0';
  pcVar41[0x70c4] = '\0';
  pcVar41[0x70c5] = '\0';
  pcVar41[0x70c6] = '\0';
  pcVar41[0x70c7] = '\0';
  pcVar41[0x7184] = '\0';
  pcVar41[0x7185] = '\0';
  pcVar41[0x7186] = '\0';
  pcVar41[0x7187] = '\0';
  pcVar41[0x7244] = '\0';
  pcVar41[0x7245] = '\0';
  pcVar41[0x7246] = '\0';
  pcVar41[0x7247] = '\0';
  pcVar41[0x7304] = '\0';
  pcVar41[0x7305] = '\0';
  pcVar41[0x7306] = '\0';
  pcVar41[0x7307] = '\0';
  if (param_2 == 0) {
    local_30 = 0;
    local_2c = 0;
    local_2b = 0;
    local_2f = 0xff;
    local_2e = 0x80;
    local_2d = 0x80;
    FUN_0009733c(pcVar41,0xffffffff,&local_30);
    local_30 = 1;
    local_2f = 0xff;
    local_2e = 0x80;
    local_2d = 0x80;
    uVar23 = 0;
    local_2c = uVar23;
    local_2b = uVar23;
    FUN_0009733c(pcVar41,0xffffffff,&local_30);
    local_2f = 0xff;
    local_2e = 0x80;
    local_2d = 0x80;
    local_30 = 2;
    local_2c = uVar23;
    local_2b = uVar23;
    FUN_0009733c(pcVar41,0xffffffff,&local_30);
    local_2f = 0xff;
    local_2e = 0x80;
    local_2d = 0x80;
    local_30 = 3;
    local_2c = uVar23;
    local_2b = uVar23;
    FUN_0009733c(pcVar41,0xffffffff,&local_30);
  }
  iVar39 = *(int *)(param_1 + 4);
  iVar17 = param_2 << 10;
  iVar10 = 0;
  *(undefined4 *)(iVar39 + 0x1dc) = 0;
  *(undefined4 *)(iVar39 + 0x1ec) = 0;
  *(undefined4 *)(iVar39 + 0x1f0) = 0;
  *(undefined4 *)(iVar39 + 500) = 0;
  *(undefined4 *)(iVar39 + 0x1fc) = 0;
  *(undefined4 *)(iVar39 + 0x200) = 0;
  *(undefined4 *)(iVar39 + 0x204) = 0;
  *(int *)(iVar39 + 0x5b3c) = iVar39 + 0x5b40;
  *(undefined4 *)(iVar39 + 0x5b34) = 0;
  *(undefined4 *)(iVar39 + 0x5b38) = 0;
  piVar19 = (int *)(iVar39 + 0x5b50);
  do {
    piVar19[-4] = (int)piVar19;
    *piVar19 = (int)(piVar19 + 4);
    piVar19[4] = (int)(piVar19 + 8);
    piVar19[8] = (int)(piVar19 + 0xc);
    piVar19[0xc] = (int)(piVar19 + 0x10);
    piVar19[0x10] = (int)(piVar19 + 0x14);
    piVar19[0x14] = (int)(piVar19 + 0x18);
    iVar10 = iVar10 + 0x11;
    piVar19[0x18] = (int)(piVar19 + 0x1c);
    piVar19[0x1c] = (int)(piVar19 + 0x20);
    piVar19[0x20] = (int)(piVar19 + 0x24);
    piVar19[0x24] = (int)(piVar19 + 0x28);
    piVar19[0x28] = (int)(piVar19 + 0x2c);
    piVar19[0x2c] = (int)(piVar19 + 0x30);
    piVar19[0x30] = (int)(piVar19 + 0x34);
    piVar19[0x34] = (int)(piVar19 + 0x38);
    piVar19[0x38] = (int)(piVar19 + 0x3c);
    piVar19[0x3c] = (int)(piVar19 + 0x40);
    piVar19 = piVar19 + 0x44;
  } while (iVar10 != 0xff);
  *(undefined4 *)(iVar39 + 0x6b30) = 0;
  *(undefined4 *)(iVar39 + 0x1d4) = 0;
  *(undefined1 *)(iVar39 + 8) = 0;
  *(undefined4 *)(iVar39 + 0x1e4) = 0x30;
  *(undefined4 *)(iVar39 + 0x1e0) = 0x7d;
  *(undefined4 *)(iVar39 + 0x1e8) = 0x2800;
  *(undefined1 *)(iVar39 + 9) = 0x40;
  *(undefined1 *)(iVar39 + 3) = 0x40;
  *(undefined1 *)(iVar39 + 4) = 0x7f;
  if (*(byte *)(iVar39 + 0xc) < 2) {
    memset((void *)(iVar39 + 0x37),0,0x10);
    memset((void *)(iVar39 + 0x47),0,0x10);
    memset((void *)(iVar39 + 0x57),2,0x10);
    memset((void *)(iVar39 + 0x67),0x3f,0x10);
    memset((void *)(iVar39 + 0x77),0x20,0x10);
    memset((void *)(iVar39 + 0xa7),0x7f,0x10);
    uVar8 = DAT_000a1b04;
    if ((((uint)(iVar39 + 0x208) | (uint)(iVar39 + 0x248) | (uint)(iVar39 + 0x27)) & 7) == 0) {
      *(undefined4 *)(iVar39 + 0x27) = DAT_000a1b00;
      *(undefined4 *)(iVar39 + 0x2b) = uVar8;
      *(undefined4 *)(iVar39 + 0x208) = 0x18;
      *(undefined4 *)(iVar39 + 0x20c) = 0x18;
      *(undefined4 *)(iVar39 + 0x210) = 0x18;
      *(undefined4 *)(iVar39 + 0x214) = 0x18;
      *(undefined4 *)(iVar39 + 0x218) = 0x18;
      *(undefined4 *)(iVar39 + 0x21c) = 0x18;
      *(undefined4 *)(iVar39 + 0x220) = 0x18;
      *(undefined4 *)(iVar39 + 0x224) = 0x18;
      *(undefined4 *)(iVar39 + 0x248) = 2;
      *(undefined4 *)(iVar39 + 0x24c) = 2;
      *(undefined4 *)(iVar39 + 0x250) = 2;
      *(undefined4 *)(iVar39 + 0x254) = 2;
      *(undefined4 *)(iVar39 + 600) = 2;
      *(undefined4 *)(iVar39 + 0x25c) = 2;
      uVar5 = DAT_000a1b0c;
      uVar8 = DAT_000a1b08;
      *(undefined4 *)(iVar39 + 0x260) = 2;
      *(undefined4 *)(iVar39 + 0x264) = 2;
      *(undefined4 *)(iVar39 + 0x2f) = uVar8;
      *(undefined4 *)(iVar39 + 0x33) = uVar5;
      *(undefined4 *)(iVar39 + 0x228) = 0x18;
      *(undefined4 *)(iVar39 + 0x22c) = 0x18;
      *(undefined4 *)(iVar39 + 0x230) = 0x18;
      *(undefined4 *)(iVar39 + 0x234) = 0x18;
      *(undefined4 *)(iVar39 + 0x238) = 0x18;
      *(undefined4 *)(iVar39 + 0x23c) = 0x18;
      *(undefined4 *)(iVar39 + 0x240) = 0x18;
      *(undefined4 *)(iVar39 + 0x244) = 0x18;
      *(undefined4 *)(iVar39 + 0x268) = 2;
      *(undefined4 *)(iVar39 + 0x26c) = 2;
      *(undefined4 *)(iVar39 + 0x270) = 2;
      *(undefined4 *)(iVar39 + 0x274) = 2;
      *(undefined4 *)(iVar39 + 0x278) = 2;
      *(undefined4 *)(iVar39 + 0x27c) = 2;
      *(undefined4 *)(iVar39 + 0x280) = 2;
      *(undefined4 *)(iVar39 + 0x284) = 2;
      goto LAB_0009fd7e;
    }
    *(undefined1 *)(iVar39 + 0x27) = 0;
    *(undefined4 *)(iVar39 + 0x208) = 0x18;
    *(undefined4 *)(iVar39 + 0x20c) = 0x18;
    *(undefined4 *)(iVar39 + 0x210) = 0x18;
    *(undefined4 *)(iVar39 + 0x214) = 0x18;
    *(undefined4 *)(iVar39 + 0x218) = 0x18;
    *(undefined4 *)(iVar39 + 0x21c) = 0x18;
    *(undefined4 *)(iVar39 + 0x220) = 0x18;
    *(undefined4 *)(iVar39 + 0x224) = 0x18;
    *(undefined4 *)(iVar39 + 0x228) = 0x18;
    *(undefined4 *)(iVar39 + 0x22c) = 0x18;
    *(undefined4 *)(iVar39 + 0x230) = 0x18;
    *(undefined4 *)(iVar39 + 0x248) = 2;
    *(undefined4 *)(iVar39 + 0x24c) = 2;
    *(undefined1 *)(iVar39 + 0x29) = 2;
    *(undefined4 *)(iVar39 + 0x250) = 2;
    *(undefined4 *)(iVar39 + 0x254) = 2;
    *(undefined4 *)(iVar39 + 600) = 2;
    *(undefined4 *)(iVar39 + 0x25c) = 2;
    *(undefined4 *)(iVar39 + 0x260) = 2;
    *(undefined4 *)(iVar39 + 0x264) = 2;
    *(undefined4 *)(iVar39 + 0x268) = 2;
    *(undefined4 *)(iVar39 + 0x26c) = 2;
    *(undefined4 *)(iVar39 + 0x270) = 2;
    *(undefined1 *)(iVar39 + 0x28) = 1;
  }
  else {
    *(undefined1 *)(iVar39 + 0x37) = 0;
    *(undefined1 *)(iVar39 + 0x38) = 0;
    *(undefined1 *)(iVar39 + 0x39) = 0;
    *(undefined1 *)(iVar39 + 0x3a) = 0;
    *(undefined1 *)(iVar39 + 0x3b) = 0;
    *(undefined1 *)(iVar39 + 0x3c) = 0;
    *(undefined1 *)(iVar39 + 0x3d) = 0;
    *(undefined1 *)(iVar39 + 0x3e) = 0;
    *(undefined1 *)(iVar39 + 0x3f) = 0;
    *(undefined1 *)(iVar39 + 0x41) = 0;
    *(undefined1 *)(iVar39 + 0x42) = 0;
    *(undefined1 *)(iVar39 + 0x43) = 0;
    *(undefined1 *)(iVar39 + 0x44) = 0;
    *(undefined1 *)(iVar39 + 0x45) = 0;
    *(undefined1 *)(iVar39 + 0x46) = 0;
    *(undefined1 *)(iVar39 + 0x40) = 1;
    memset((void *)(iVar39 + 0x47),0,0x10);
    memset((void *)(iVar39 + 0x57),2,0x10);
    memset((void *)(iVar39 + 0x67),0x3f,0x10);
    memset((void *)(iVar39 + 0x77),0x20,0x10);
    memset((void *)(iVar39 + 0xa7),0x7f,0x10);
    uVar6 = DAT_000a0a9c;
    uVar5 = DAT_000a0a98;
    uVar8 = DAT_000a0a94;
    if ((((uint)(iVar39 + 0x208) | (uint)(iVar39 + 0x248) | (uint)(iVar39 + 0x27)) & 7) == 0) {
      *(undefined4 *)(iVar39 + 0x27) = DAT_000a0a90;
      *(undefined4 *)(iVar39 + 0x2b) = uVar8;
      *(undefined4 *)(iVar39 + 0x208) = 0x18;
      *(undefined4 *)(iVar39 + 0x20c) = 0x18;
      *(undefined4 *)(iVar39 + 0x210) = 0x18;
      *(undefined4 *)(iVar39 + 0x214) = 0x18;
      *(undefined4 *)(iVar39 + 0x218) = 0x18;
      *(undefined4 *)(iVar39 + 0x21c) = 0x18;
      *(undefined4 *)(iVar39 + 0x220) = 0x18;
      *(undefined4 *)(iVar39 + 0x224) = 0x18;
      *(undefined4 *)(iVar39 + 0x248) = 2;
      *(undefined4 *)(iVar39 + 0x24c) = 2;
      *(undefined4 *)(iVar39 + 0x250) = 2;
      *(undefined4 *)(iVar39 + 0x254) = 2;
      *(undefined4 *)(iVar39 + 600) = 2;
      *(undefined4 *)(iVar39 + 0x25c) = 2;
      *(undefined4 *)(iVar39 + 0x260) = 2;
      *(undefined4 *)(iVar39 + 0x264) = 2;
      *(undefined4 *)(iVar39 + 0x2f) = uVar5;
      *(undefined4 *)(iVar39 + 0x33) = uVar6;
      *(undefined4 *)(iVar39 + 0x228) = 0x18;
      *(undefined4 *)(iVar39 + 0x22c) = 0x18;
      *(undefined4 *)(iVar39 + 0x230) = 0x18;
      *(undefined4 *)(iVar39 + 0x234) = 0x18;
      *(undefined4 *)(iVar39 + 0x238) = 0x18;
      *(undefined4 *)(iVar39 + 0x23c) = 0x18;
      *(undefined4 *)(iVar39 + 0x240) = 0x18;
      *(undefined4 *)(iVar39 + 0x244) = 0x18;
      *(undefined4 *)(iVar39 + 0x268) = 2;
      *(undefined4 *)(iVar39 + 0x26c) = 2;
      *(undefined4 *)(iVar39 + 0x270) = 2;
      *(undefined4 *)(iVar39 + 0x274) = 2;
      *(undefined4 *)(iVar39 + 0x278) = 2;
      *(undefined4 *)(iVar39 + 0x27c) = 2;
      *(undefined4 *)(iVar39 + 0x280) = 2;
      *(undefined4 *)(iVar39 + 0x284) = 2;
      goto LAB_0009fd7e;
    }
    *(undefined1 *)(iVar39 + 0x27) = 0;
    *(undefined1 *)(iVar39 + 0x28) = 1;
    *(undefined4 *)(iVar39 + 0x208) = 0x18;
    *(undefined4 *)(iVar39 + 0x20c) = 0x18;
    *(undefined4 *)(iVar39 + 0x210) = 0x18;
    *(undefined4 *)(iVar39 + 0x214) = 0x18;
    *(undefined4 *)(iVar39 + 0x218) = 0x18;
    *(undefined4 *)(iVar39 + 0x21c) = 0x18;
    *(undefined4 *)(iVar39 + 0x220) = 0x18;
    *(undefined4 *)(iVar39 + 0x224) = 0x18;
    *(undefined4 *)(iVar39 + 0x228) = 0x18;
    *(undefined4 *)(iVar39 + 0x22c) = 0x18;
    *(undefined4 *)(iVar39 + 0x230) = 0x18;
    *(undefined4 *)(iVar39 + 0x248) = 2;
    *(undefined4 *)(iVar39 + 0x24c) = 2;
    *(undefined1 *)(iVar39 + 0x29) = 2;
    *(undefined4 *)(iVar39 + 0x250) = 2;
    *(undefined4 *)(iVar39 + 0x254) = 2;
    *(undefined4 *)(iVar39 + 600) = 2;
    *(undefined4 *)(iVar39 + 0x25c) = 2;
    *(undefined4 *)(iVar39 + 0x260) = 2;
    *(undefined4 *)(iVar39 + 0x264) = 2;
    *(undefined4 *)(iVar39 + 0x268) = 2;
    *(undefined4 *)(iVar39 + 0x26c) = 2;
    *(undefined4 *)(iVar39 + 0x270) = 2;
  }
  *(undefined1 *)(iVar39 + 0x2a) = 3;
  *(undefined1 *)(iVar39 + 0x2b) = 4;
  *(undefined1 *)(iVar39 + 0x2c) = 5;
  *(undefined1 *)(iVar39 + 0x2d) = 6;
  *(undefined1 *)(iVar39 + 0x2e) = 7;
  *(undefined1 *)(iVar39 + 0x2f) = 8;
  *(undefined1 *)(iVar39 + 0x30) = 9;
  *(undefined1 *)(iVar39 + 0x31) = 10;
  *(undefined1 *)(iVar39 + 0x32) = 0xb;
  *(undefined4 *)(iVar39 + 0x234) = 0x18;
  *(undefined4 *)(iVar39 + 0x274) = 2;
  *(undefined4 *)(iVar39 + 0x238) = 0x18;
  *(undefined4 *)(iVar39 + 0x278) = 2;
  *(undefined4 *)(iVar39 + 0x23c) = 0x18;
  *(undefined4 *)(iVar39 + 0x27c) = 2;
  *(undefined4 *)(iVar39 + 0x240) = 0x18;
  *(undefined4 *)(iVar39 + 0x280) = 2;
  *(undefined4 *)(iVar39 + 0x244) = 0x18;
  *(undefined4 *)(iVar39 + 0x284) = 2;
  *(undefined1 *)(iVar39 + 0x33) = 0xc;
  *(undefined1 *)(iVar39 + 0x34) = 0xd;
  *(undefined1 *)(iVar39 + 0x35) = 0xe;
  *(undefined1 *)(iVar39 + 0x36) = 0xf;
LAB_0009fd7e:
  memset((void *)(iVar39 + 0x97),0x20,0x10);
  memset((void *)(iVar39 + 0x87),0x20,0x10);
  memset((void *)(iVar39 + 0x157),0x3f,0x20);
  memset((void *)(iVar39 + 0x177),0x3f,0x20);
  memset((void *)(iVar39 + 0xb7),-1,0x20);
  memset((void *)(iVar39 + 0xd7),0,0x20);
  puVar25 = (undefined1 *)(iVar39 + 0x6b43);
  *(undefined1 *)(iVar39 + 6) = 0x40;
  *(undefined2 *)(iVar39 + 0x1be) = 0x2000;
  *(undefined1 *)(iVar39 + 2) = 100;
  uVar21 = 0;
  do {
    if ((uVar21 & 0xff) == 9) {
      *(undefined1 *)(iVar39 + 0x6bf7) = 0x80;
    }
    else {
      *puVar25 = 0;
    }
    puVar25 = puVar25 + 0x14;
    uVar20 = uVar21 + 1;
    iVar10 = iVar39 + uVar21 * 0x14;
    *(undefined1 *)(iVar10 + 0x6b46) = 2;
    *(undefined1 *)(iVar10 + 0x6b47) = 2;
    *(undefined1 *)(iVar10 + 0x6b42) = 0;
    *(undefined1 *)(iVar10 + 0x6b45) = 0;
    *(undefined1 *)(iVar10 + 0x6b44) = 0x3f;
    *(undefined1 *)(iVar10 + 0x6b48) = 0x40;
    *(undefined1 *)(iVar10 + 0x6b49) = 0x7f;
    *(undefined1 *)(iVar10 + 0x6b4a) = 0;
    *(undefined2 *)(iVar10 + 0x6b52) = 0x2000;
    *(undefined1 *)(iVar10 + 0x6b4b) = 1;
    *(undefined1 *)(iVar10 + 0x6b4c) = 0x40;
    *(undefined2 *)(iVar10 + 0x6b54) = 0x2000;
    *(undefined1 *)(iVar10 + 0x6b4e) = 0x40;
    *(undefined1 *)(iVar10 + 0x6b4d) = 0x40;
    *(undefined1 *)(iVar10 + 0x6b4f) = 0x7f;
    *(undefined1 *)(iVar10 + 0x6b50) = 0x28;
    *(undefined1 *)(iVar10 + 0x6b51) = 0;
    uVar21 = uVar20;
  } while (uVar20 != 0x20);
  uVar21 = (uint)*(byte *)(iVar39 + 0x1b7);
  if (uVar21 < 0x88) {
    *(byte *)(iVar39 + 0x1b7) = *(byte *)(iVar39 + 0x1b7) + 1;
    iVar10 = uVar21 * 0x14 + 0x7118;
    iVar28 = iVar39 + iVar10;
    *(undefined4 *)(iVar39 + iVar10) = 0x10;
    *(undefined4 *)(iVar28 + 4) = 0;
    *(undefined4 *)(iVar28 + 8) = 0;
    *(undefined4 *)(iVar28 + 0xc) = 0;
    *(undefined4 *)(iVar28 + 0x10) = 0;
    uVar21 = (uint)*(byte *)(iVar39 + 0x1b7);
    if ((*(char *)(iVar39 + 0x7c75) == '\0') && (uVar21 < 0x88)) {
      *(byte *)(iVar39 + 0x1b7) = *(byte *)(iVar39 + 0x1b7) + 1;
      iVar10 = uVar21 * 0x14 + 0x7118;
      iVar28 = iVar39 + iVar10;
      *(undefined4 *)(iVar39 + iVar10) = 0x2f;
      *(undefined4 *)(iVar28 + 4) = 0;
      *(undefined4 *)(iVar28 + 8) = 0;
      *(undefined4 *)(iVar28 + 0xc) = 0x7f;
      *(undefined4 *)(iVar28 + 0x10) = 0;
      uVar21 = (uint)*(byte *)(iVar39 + 0x1b7);
    }
  }
  uVar20 = 1;
  while( true ) {
    if (uVar21 < 0x88) {
      *(char *)(iVar39 + 0x1b7) = (char)uVar21 + '\x01';
      iVar28 = uVar21 * 0x14 + 0x7118;
      iVar10 = iVar39 + iVar28;
      *(undefined4 *)(iVar39 + iVar28) = 0x10;
      *(undefined4 *)(iVar10 + 4) = 0;
      *(uint *)(iVar10 + 8) = uVar20;
      *(undefined4 *)(iVar10 + 0xc) = 0;
      *(undefined4 *)(iVar10 + 0x10) = 0;
      if (uVar20 == *(byte *)(iVar39 + 0x7c75)) {
        bVar12 = *(byte *)(iVar39 + 0x1b7);
        if (bVar12 < 0x88) {
          *(byte *)(iVar39 + 0x1b7) = bVar12 + 1;
          iVar28 = (uint)bVar12 * 0x14 + 0x7118;
          iVar10 = iVar39 + iVar28;
          *(undefined4 *)(iVar39 + iVar28) = 0x2f;
          *(undefined4 *)(iVar10 + 4) = 0;
          *(undefined4 *)(iVar10 + 8) = 0;
          *(undefined4 *)(iVar10 + 0xc) = 0x7f;
          *(undefined4 *)(iVar10 + 0x10) = 0;
        }
      }
    }
    if (uVar20 == 0x1f) break;
    bVar12 = *(byte *)(iVar39 + 0x1b7);
    if (bVar12 < 0x88) {
      *(byte *)(iVar39 + 0x1b7) = bVar12 + 1;
      iVar10 = (uint)bVar12 * 0x14 + 0x7118;
      iVar28 = iVar39 + iVar10;
      *(undefined4 *)(iVar39 + iVar10) = 0x10;
      *(undefined4 *)(iVar28 + 4) = 0;
      *(uint *)(iVar28 + 8) = uVar20 + 1;
      *(undefined4 *)(iVar28 + 0xc) = 0;
      *(undefined4 *)(iVar28 + 0x10) = 0;
      if (uVar20 + 1 == (uint)*(byte *)(iVar39 + 0x7c75)) {
        bVar12 = *(byte *)(iVar39 + 0x1b7);
        if (bVar12 < 0x88) {
          *(byte *)(iVar39 + 0x1b7) = bVar12 + 1;
          iVar10 = (uint)bVar12 * 0x14 + 0x7118;
          iVar28 = iVar39 + iVar10;
          *(undefined4 *)(iVar39 + iVar10) = 0x2f;
          *(undefined4 *)(iVar28 + 4) = 0;
          *(undefined4 *)(iVar28 + 8) = 0;
          *(undefined4 *)(iVar28 + 0xc) = 0x7f;
          *(undefined4 *)(iVar28 + 0x10) = 0;
        }
      }
    }
    bVar12 = *(byte *)(iVar39 + 0x1b7);
    if (bVar12 < 0x88) {
      *(byte *)(iVar39 + 0x1b7) = bVar12 + 1;
      iVar28 = (uint)bVar12 * 0x14 + 0x7118;
      iVar10 = iVar39 + iVar28;
      *(undefined4 *)(iVar39 + iVar28) = 0x10;
      *(undefined4 *)(iVar10 + 4) = 0;
      *(uint *)(iVar10 + 8) = uVar20 + 2;
      *(undefined4 *)(iVar10 + 0xc) = 0;
      *(undefined4 *)(iVar10 + 0x10) = 0;
      if (uVar20 + 2 == (uint)*(byte *)(iVar39 + 0x7c75)) {
        bVar12 = *(byte *)(iVar39 + 0x1b7);
        if (bVar12 < 0x88) {
          *(byte *)(iVar39 + 0x1b7) = bVar12 + 1;
          iVar28 = (uint)bVar12 * 0x14 + 0x7118;
          iVar10 = iVar39 + iVar28;
          *(undefined4 *)(iVar39 + iVar28) = 0x2f;
          *(undefined4 *)(iVar10 + 4) = 0;
          *(undefined4 *)(iVar10 + 8) = 0;
          *(undefined4 *)(iVar10 + 0xc) = 0x7f;
          *(undefined4 *)(iVar10 + 0x10) = 0;
        }
      }
    }
    bVar12 = *(byte *)(iVar39 + 0x1b7);
    if (bVar12 < 0x88) {
      *(byte *)(iVar39 + 0x1b7) = bVar12 + 1;
      iVar10 = (uint)bVar12 * 0x14 + 0x7118;
      iVar28 = iVar39 + iVar10;
      *(undefined4 *)(iVar39 + iVar10) = 0x10;
      *(undefined4 *)(iVar28 + 4) = 0;
      *(uint *)(iVar28 + 8) = uVar20 + 3;
      *(undefined4 *)(iVar28 + 0xc) = 0;
      *(undefined4 *)(iVar28 + 0x10) = 0;
      if (uVar20 + 3 == (uint)*(byte *)(iVar39 + 0x7c75)) {
        bVar12 = *(byte *)(iVar39 + 0x1b7);
        if (bVar12 < 0x88) {
          *(byte *)(iVar39 + 0x1b7) = bVar12 + 1;
          iVar10 = (uint)bVar12 * 0x14 + 0x7118;
          iVar28 = iVar39 + iVar10;
          *(undefined4 *)(iVar39 + iVar10) = 0x2f;
          *(undefined4 *)(iVar28 + 4) = 0;
          *(undefined4 *)(iVar28 + 8) = 0;
          *(undefined4 *)(iVar28 + 0xc) = 0x7f;
          *(undefined4 *)(iVar28 + 0x10) = 0;
        }
      }
    }
    bVar12 = *(byte *)(iVar39 + 0x1b7);
    if (bVar12 < 0x88) {
      *(byte *)(iVar39 + 0x1b7) = bVar12 + 1;
      iVar28 = (uint)bVar12 * 0x14 + 0x7118;
      iVar10 = iVar39 + iVar28;
      *(undefined4 *)(iVar39 + iVar28) = 0x10;
      *(undefined4 *)(iVar10 + 4) = 0;
      *(uint *)(iVar10 + 8) = uVar20 + 4;
      *(undefined4 *)(iVar10 + 0xc) = 0;
      *(undefined4 *)(iVar10 + 0x10) = 0;
      if (uVar20 + 4 == (uint)*(byte *)(iVar39 + 0x7c75)) {
        bVar12 = *(byte *)(iVar39 + 0x1b7);
        if (bVar12 < 0x88) {
          *(byte *)(iVar39 + 0x1b7) = bVar12 + 1;
          iVar28 = (uint)bVar12 * 0x14 + 0x7118;
          iVar10 = iVar39 + iVar28;
          *(undefined4 *)(iVar39 + iVar28) = 0x2f;
          *(undefined4 *)(iVar10 + 4) = 0;
          *(undefined4 *)(iVar10 + 8) = 0;
          *(undefined4 *)(iVar10 + 0xc) = 0x7f;
          *(undefined4 *)(iVar10 + 0x10) = 0;
        }
      }
    }
    uVar21 = (uint)*(byte *)(iVar39 + 0x1b7);
    uVar20 = uVar20 + 5;
  }
  puVar29 = (undefined4 *)(iVar39 + 0x117);
  puVar26 = (undefined4 *)(iVar39 + 0x7d17);
  puVar42 = (undefined4 *)(iVar39 + 0x7d1f);
  puVar34 = (undefined4 *)(iVar39 + 0x11f);
  bVar52 = puVar29 <= puVar42;
  bVar48 = puVar42 == puVar29;
  if (bVar52 && !bVar48) {
    bVar52 = puVar26 <= puVar34;
    bVar48 = puVar34 == puVar26;
  }
  puVar22 = (undefined4 *)(iVar39 + 0x7cf7);
  puVar47 = (undefined4 *)(iVar39 + 31999);
  bVar53 = puVar29 <= puVar47;
  bVar49 = puVar47 == puVar29;
  if (bVar53 && !bVar49) {
    bVar53 = puVar22 <= puVar34;
    bVar49 = puVar34 == puVar22;
  }
  puVar33 = (undefined4 *)(iVar39 + 0xf7);
  puVar38 = (undefined4 *)(iVar39 + 0xff);
  bVar54 = puVar33 <= puVar47;
  bVar50 = puVar47 == puVar33;
  if (bVar54 && !bVar50) {
    bVar54 = puVar22 <= puVar38;
    bVar50 = puVar38 == puVar22;
  }
  bVar55 = puVar33 <= puVar42;
  bVar51 = puVar42 == puVar33;
  if (bVar55 && !bVar51) {
    bVar55 = puVar26 <= puVar38;
    bVar51 = puVar38 == puVar26;
  }
  if ((((uint)puVar33 | (uint)puVar29 | (uint)puVar26 | (uint)puVar22) & 7) != 0 ||
      (((bVar53 && !bVar49 || bVar52 && !bVar48) || bVar54 && !bVar50) || bVar55 && !bVar51)) {
    pbVar40 = (byte *)(iVar39 + 0x7d16);
    pbVar37 = (byte *)(iVar39 + 0x7cf6);
    iVar10 = 0;
    iVar28 = iVar39;
    do {
      *(undefined1 *)(iVar28 + 0xf7) = 0;
      *(undefined1 *)(iVar28 + 0x117) = 0;
      iVar10 = iVar10 + 8;
      pbVar37[1] = pbVar40[1] & 0x1f;
      *(undefined1 *)(iVar28 + 0xf8) = 0;
      *(undefined1 *)(iVar28 + 0x118) = 0;
      pbVar37[2] = pbVar40[2] & 0x1f;
      *(undefined1 *)(iVar28 + 0xf9) = 0;
      *(undefined1 *)(iVar28 + 0x119) = 0;
      pbVar37[3] = pbVar40[3] & 0x1f;
      *(undefined1 *)(iVar28 + 0xfa) = 0;
      *(undefined1 *)(iVar28 + 0x11a) = 0;
      pbVar37[4] = pbVar40[4] & 0x1f;
      *(undefined1 *)(iVar28 + 0xfb) = 0;
      *(undefined1 *)(iVar28 + 0x11b) = 0;
      pbVar37[5] = pbVar40[5] & 0x1f;
      *(undefined1 *)(iVar28 + 0xfc) = 0;
      *(undefined1 *)(iVar28 + 0x11c) = 0;
      pbVar37[6] = pbVar40[6] & 0x1f;
      *(undefined1 *)(iVar28 + 0xfd) = 0;
      *(undefined1 *)(iVar28 + 0x11d) = 0;
      pbVar37[7] = pbVar40[7] & 0x1f;
      *(undefined1 *)(iVar28 + 0xfe) = 0;
      *(undefined1 *)(iVar28 + 0x11e) = 0;
      pbVar40 = pbVar40 + 8;
      pbVar37 = pbVar37 + 8;
      *pbVar37 = *pbVar40 & 0x1f;
      iVar28 = iVar28 + 8;
    } while (iVar10 != 0x20);
  }
  else {
    *puVar33 = 0;
    *(undefined4 *)(iVar39 + 0xfb) = 0;
    *puVar29 = 0;
    *(undefined4 *)(iVar39 + 0x11b) = 0;
    *(uint *)(iVar39 + 0x7cf7) = *(uint *)(iVar39 + 0x7d17) & 0x1f1f1f1f;
    *(uint *)(iVar39 + 0x7cfb) = *(uint *)(iVar39 + 0x7d1b) & 0x1f1f1f1f;
    *puVar38 = 0;
    *(undefined4 *)(iVar39 + 0x103) = 0;
    *puVar34 = 0;
    *(undefined4 *)(iVar39 + 0x123) = 0;
    *(uint *)(iVar39 + 0x7d03) = *(uint *)(iVar39 + 0x7d23) & 0x1f1f1f1f;
    *(uint *)(iVar39 + 31999) = *(uint *)(iVar39 + 0x7d1f) & 0x1f1f1f1f;
    *(undefined4 *)(iVar39 + 0x107) = 0;
    *(undefined4 *)(iVar39 + 0x10b) = 0;
    *(undefined4 *)(iVar39 + 0x127) = 0;
    *(undefined4 *)(iVar39 + 299) = 0;
    *(uint *)(iVar39 + 0x7d07) = *(uint *)(iVar39 + 0x7d27) & 0x1f1f1f1f;
    *(uint *)(iVar39 + 0x7d0b) = *(uint *)(iVar39 + 0x7d2b) & 0x1f1f1f1f;
    *(undefined4 *)(iVar39 + 0x10f) = 0;
    *(undefined4 *)(iVar39 + 0x113) = 0;
    *(undefined4 *)(iVar39 + 0x12f) = 0;
    *(undefined4 *)(iVar39 + 0x133) = 0;
    *(uint *)(iVar39 + 0x7d0f) = *(uint *)(iVar39 + 0x7d2f) & 0x1f1f1f1f;
    *(uint *)(iVar39 + 0x7d13) = *(uint *)(iVar39 + 0x7d33) & 0x1f1f1f1f;
  }
  iVar10 = iVar39 + 0x7bb8;
  if (*(char *)(iVar39 + 0xc) == '\x01') {
    uVar23 = 0x60;
  }
  else {
    uVar23 = 0x7f;
  }
  *(undefined1 *)(iVar39 + 5) = uVar23;
  memset((void *)(iVar39 + 0x137),-1,0x20);
  uVar21 = (uint)*(byte *)(iVar39 + 0x7c74);
  iVar28 = DAT_000a0ab4;
  iVar43 = DAT_000a0ab0;
  iVar14 = DAT_000a0aac;
  iVar2 = DAT_000a0aa8;
  iVar3 = DAT_000a0aa4;
  iVar4 = DAT_000a0aa0;
  if (uVar21 != 0) {
    uVar20 = 0;
    do {
      uVar35 = 1 << uVar20;
      iVar43 = uVar20 * 0x14;
      uVar20 = uVar20 + 1 & 0xff;
      iVar43 = iVar43 + 0x788;
      iVar28 = iVar10 + iVar43;
      if (2 < *(uint *)(iVar10 + iVar43)) {
        *(uint *)(iVar39 + 0x1d4) = *(uint *)(iVar39 + 0x1d4) | uVar35;
        *(undefined4 *)(iVar28 + 8) = 0;
        bVar12 = **(byte **)(iVar28 + 4);
        *(uint *)(iVar28 + 0xc) = (uint)bVar12;
        *(uint *)(iVar28 + 0x10) = *(int *)(iVar39 + 0x1e8) * (uint)bVar12;
        uVar21 = (uint)*(byte *)(iVar39 + 0x7c74);
      }
      iVar28 = DAT_000a0ab4;
      iVar43 = DAT_000a0ab0;
      iVar14 = DAT_000a0aac;
      iVar2 = DAT_000a0aa8;
      iVar3 = DAT_000a0aa4;
      iVar4 = DAT_000a0aa0;
    } while (uVar20 < uVar21);
  }
LAB_000a0230:
  if ((*(int *)(iVar39 + 0x7bc8) <= *(int *)(iVar39 + 0x1dc)) &&
     (*(uint *)(iVar39 + 0x1d0) <= *(uint *)(iVar39 + 0x8348))) goto LAB_000a04ba;
  *(undefined4 *)(iVar39 + 0x1ec) = 0x7fffffff;
  if (uVar21 == 0) {
    uVar20 = 0;
  }
  else {
    iVar30 = 0;
    uVar35 = uVar21 - 1 & 3;
    uVar18 = 0;
    uVar20 = 0;
    uVar13 = *(uint *)(iVar39 + 0x1d4);
    if (uVar35 != 0) {
      if (((uVar13 & 1) != 0) && (*(int *)(iVar39 + 0x8350) < 0x7fffffff)) {
        *(int *)(iVar39 + 0x1ec) = *(int *)(iVar39 + 0x8350);
      }
      iVar30 = 0x14;
      if (uVar21 < 2) goto LAB_000a0388;
      cVar45 = (char)uVar35;
      uVar18 = 1;
      if (cVar45 != '\x01') {
        if (cVar45 != '\x02') {
          if (((int)(uVar13 << 0x1e) < 0) && (*(int *)(iVar39 + 0x8364) < *(int *)(iVar39 + 0x1ec)))
          {
            *(int *)(iVar39 + 0x1ec) = *(int *)(iVar39 + 0x8364);
            uVar20 = 1;
          }
          iVar30 = 0x28;
          uVar18 = 2;
        }
        if (((1 << uVar18 & uVar13) != 0) &&
           (iVar11 = *(int *)(iVar39 + iVar30 + 0x8350), iVar11 < *(int *)(iVar39 + 0x1ec))) {
          *(int *)(iVar39 + 0x1ec) = iVar11;
          uVar20 = uVar18;
        }
        iVar30 = iVar30 + 0x14;
        uVar18 = uVar18 + 1;
      }
    }
    while( true ) {
      if (((1 << (uVar18 & 0xff) & uVar13) != 0) &&
         (iVar11 = *(int *)(iVar39 + iVar30 + 0x8350), iVar11 < *(int *)(iVar39 + 0x1ec))) {
        *(int *)(iVar39 + 0x1ec) = iVar11;
        uVar20 = uVar18;
      }
      uVar35 = uVar18 + 1;
      iVar11 = iVar30 + 0x14;
      if (uVar21 <= (uVar35 & 0xff)) break;
      if (((1 << (uVar35 & 0xff) & uVar13) != 0) &&
         (iVar31 = *(int *)(iVar39 + iVar11 + 0x8350), iVar31 < *(int *)(iVar39 + 0x1ec))) {
        *(int *)(iVar39 + 0x1ec) = iVar31;
        uVar20 = uVar35;
      }
      if (((1 << (uVar18 + 2 & 0xff) & uVar13) != 0) &&
         (iVar31 = *(int *)(iVar11 + iVar39 + 0x8364), iVar31 < *(int *)(iVar39 + 0x1ec))) {
        *(int *)(iVar39 + 0x1ec) = iVar31;
        uVar20 = uVar18 + 2;
      }
      if (((1 << (uVar18 + 3 & 0xff) & uVar13) != 0) &&
         (iVar11 = *(int *)(iVar11 + iVar39 + 0x8378), iVar11 < *(int *)(iVar39 + 0x1ec))) {
        *(int *)(iVar39 + 0x1ec) = iVar11;
        uVar20 = uVar18 + 3;
      }
      iVar30 = iVar30 + 0x50;
      uVar18 = uVar18 + 4;
    }
  }
LAB_000a0388:
  iVar30 = uVar20 * 4;
  iVar36 = uVar20 * 0x14 + 0x788;
  iVar31 = iVar10 + iVar36;
  *(undefined4 *)(iVar39 + 0x1dc) = *(undefined4 *)(iVar31 + 0xc);
  *(undefined4 *)(iVar39 + 0x1ec) = *(undefined4 *)(iVar31 + 0x10);
  iVar11 = *(int *)(iVar31 + 4) + *(int *)(iVar31 + 8);
  if (*(char *)(iVar11 + 1) != -1) {
    if (*(char *)(iVar11 + 1) == '\x7f') {
      bVar12 = *(byte *)(iVar11 + 2);
      iVar7 = *(int *)(param_1 + 4);
      if (bVar12 < 0xf0) {
        bVar9 = *(byte *)(iVar11 + 3);
        uVar21 = (uint)bVar9;
        iVar11 = iVar7 + 0x7bb8;
        if ((*(char *)(iVar7 + 0x7c6c) == '\x04') &&
           (-1 < (int)((uint)*(byte *)(iVar7 + 0x7d3c) << 0x19))) {
          if (bVar12 == 0x80) {
            *(byte *)(iVar30 + iVar7 + (uint)(bVar9 >> 6) + 0x177) = bVar9 & 0x3f;
            uVar35 = *(uint *)(iVar39 + 0x1d4);
            goto LAB_000a03bc;
          }
          if (bVar12 < 0x81) {
            if (bVar12 == 0) {
              *(byte *)(iVar30 + iVar7 + (uint)(bVar9 >> 6) + 0x197) = bVar9 & 0x3f;
              uVar35 = *(uint *)(iVar39 + 0x1d4);
              goto LAB_000a03bc;
            }
          }
          else if (bVar12 == 0x81) {
            iVar30 = iVar30 + (uint)(bVar9 >> 6);
            if ((((int)((uint)*(byte *)(iVar11 + iVar30 + 0x11f) << 0x1e) < 0) &&
                (uVar35 = (uint)*(byte *)(iVar7 + iVar30 + 0x197), uVar35 < 0x40)) &&
               (*(int *)(iVar11 + uVar35 * 0x18 + 0x194) != 2)) {
              uVar21 = uVar21 & 0x3f;
              *(char *)(uVar35 + iVar7 + 0x137) = (char)uVar21;
              bVar9 = (char)uVar21 * '\x02';
              bVar12 = *(byte *)(iVar7 + 3);
              if ((bVar12 != 0x40) && (bVar9 = bVar12, uVar21 != 0x20)) {
                bVar9 = *(byte *)(iVar4 + (uint)(bVar12 >> 2) * 0x20 + (uVar21 >> 1) + 0xa109e);
              }
              *(byte *)(iVar7 + (iVar30 + 0x10) * 0x14 + 0x6b48) = bVar9;
              uVar35 = *(uint *)(iVar39 + 0x1d4);
              goto LAB_000a03bc;
            }
          }
          else if (bVar12 == 0x90) {
            uVar13 = uVar21 & 0x1f;
            uVar35 = (uint)*(byte *)(iVar7 + iVar30 + (uint)(bVar9 >> 6) + 0x27);
            if ((int)(uVar21 << 0x1a) < 0) {
              uVar35 = uVar35 + 0x10;
            }
            *(char *)(uVar35 + iVar11 + 0x13f) = (char)uVar13;
            if (uVar13 < 4) {
              *(byte *)(iVar7 + 0xb) = *(byte *)(uVar13 + iVar3 + 0xa0d10) | *(byte *)(iVar7 + 0xb);
              uVar35 = *(uint *)(iVar39 + 0x1d4);
              goto LAB_000a03bc;
            }
          }
        }
      }
      else if (((((*(char *)(iVar7 + 0x7c6c) == '\x04') &&
                 (-1 < (int)((uint)*(byte *)(iVar7 + 0x7d3c) << 0x19))) && (bVar12 == 0xf0)) &&
               ((uVar20 == 0 &&
                (5 < (uint)*(byte *)(iVar11 + 4) + (uint)*(byte *)(iVar11 + 3) * 0x100)))) &&
              (*(char *)(iVar7 + 0x7d38) != '\0')) {
        FUN_0009733c(iVar7,0xfffffffe,iVar11 + 5);
      }
    }
    goto switchD_000a0722_caseD_b2;
  }
  uVar35 = (uint)*(byte *)(iVar11 + 2);
  if (0xef < uVar35) {
    FUN_0009a90c(param_1,0xfffffffe,uVar20,uVar35,iVar11 + 5,
                 (uint)*(byte *)(iVar11 + 4) + (uint)*(byte *)(iVar11 + 3) * 0x100);
    uVar35 = *(uint *)(iVar39 + 0x1d4);
    goto LAB_000a03bc;
  }
  bVar12 = *(byte *)(iVar11 + 3);
  uVar13 = (uint)bVar12;
  if ((*(byte *)(iVar39 + 0x7d3c) & 0x40) != 0) goto switchD_000a0722_caseD_b2;
  switch(uVar35) {
  case 0xb0:
    if ((uVar20 != 0) || (0x7f < uVar13)) goto switchD_000a0722_caseD_b2;
    *(byte *)(iVar39 + 2) = bVar12;
    uVar35 = *(uint *)(iVar39 + 0x1d4);
    break;
  case 0xb1:
    if ((uVar20 == 0) && (uVar13 < 0x80)) {
      *(byte *)(iVar39 + 3) = bVar12;
      cVar45 = *(byte *)(iVar39 + 0x77) << 1;
      if (uVar13 == 0x40) {
        *(char *)(iVar39 + 0x6b48) = cVar45;
        *(char *)(iVar39 + 0x6b5c) = *(char *)(iVar39 + 0x78) << 1;
        *(char *)(iVar39 + 0x6b70) = *(char *)(iVar39 + 0x79) << 1;
        *(char *)(iVar39 + 0x6b84) = *(char *)(iVar39 + 0x7a) << 1;
        *(char *)(iVar39 + 0x6b98) = *(char *)(iVar39 + 0x7b) << 1;
        *(char *)(iVar39 + 0x6bac) = *(char *)(iVar39 + 0x7c) << 1;
        *(char *)(iVar39 + 0x6bc0) = *(char *)(iVar39 + 0x7d) << 1;
        *(char *)(iVar39 + 0x6bd4) = *(char *)(iVar39 + 0x7e) << 1;
        *(char *)(iVar39 + 0x6be8) = *(char *)(iVar39 + 0x7f) << 1;
        *(char *)(iVar39 + 0x6bfc) = *(char *)(iVar39 + 0x80) << 1;
        *(char *)(iVar39 + 0x6c10) = *(char *)(iVar39 + 0x81) << 1;
        *(char *)(iVar39 + 0x6c24) = *(char *)(iVar39 + 0x82) << 1;
        *(char *)(iVar39 + 0x6c38) = *(char *)(iVar39 + 0x83) << 1;
        *(char *)(iVar39 + 0x6c4c) = *(char *)(iVar39 + 0x84) << 1;
        *(char *)(iVar39 + 0x6c60) = *(char *)(iVar39 + 0x85) << 1;
        pcVar15 = (char *)((uint)*(byte *)(iVar39 + 0x86) << 1);
        *(char *)(iVar39 + 0x6c74) = (char)pcVar15;
        if (*(byte *)(iVar39 + 0x197) < 0x40) {
          uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar39 + 0x197) + iVar39 + 0x137);
          if (uVar21 != 0xff) {
            pcVar15 = (char *)(iVar39 + 0x6c80);
            iVar30 = uVar21 << 1;
          }
          else {
            iVar30 = iVar39 + 0x6c80;
          }
          if (uVar21 != 0xff) {
            pcVar15[8] = (char)iVar30;
          }
          else {
            *(byte *)(iVar30 + 8) = bVar12;
          }
        }
        if (*(byte *)(iVar39 + 0x198) < 0x40) {
          uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar39 + 0x198) + iVar39 + 0x137);
          if (uVar21 != 0xff) {
            pcVar15 = (char *)(iVar39 + 0x6c80);
            iVar30 = uVar21 << 1;
          }
          else {
            iVar30 = iVar39 + 0x6c80;
          }
          if (uVar21 != 0xff) {
            pcVar15[0x1c] = (char)iVar30;
          }
          else {
            *(byte *)(iVar30 + 0x1c) = bVar12;
          }
        }
        if (*(byte *)(iVar39 + 0x199) < 0x40) {
          cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x199) + iVar39 + 0x137);
          if (cVar45 == -1) {
            *(byte *)(iVar39 + 0x6cb0) = bVar12;
          }
          else {
            pcVar15 = (char *)(iVar39 + 0x6c80);
            *(char *)(iVar39 + 0x6cb0) = cVar45 << 1;
          }
        }
        if (*(byte *)(iVar39 + 0x19a) < 0x40) {
          cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x19a) + iVar39 + 0x137);
          if (cVar45 == -1) {
            *(byte *)(iVar39 + 0x6cc4) = bVar12;
          }
          else {
            pcVar15 = (char *)(iVar39 + 0x6c80);
            *(char *)(iVar39 + 0x6cc4) = cVar45 << 1;
          }
        }
        if (*(byte *)(iVar39 + 0x19b) < 0x40) {
          cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x19b) + iVar39 + 0x137);
          if (cVar45 == -1) {
            *(byte *)(iVar39 + 0x6cd8) = bVar12;
          }
          else {
            pcVar15 = (char *)(iVar39 + 0x6c80);
            *(char *)(iVar39 + 0x6cd8) = cVar45 << 1;
          }
        }
        if (*(byte *)(iVar39 + 0x19c) < 0x40) {
          cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x19c) + iVar39 + 0x137);
          if (cVar45 == -1) {
            *(byte *)(iVar39 + 0x6cec) = bVar12;
          }
          else {
            pcVar15 = (char *)(iVar39 + 0x6c80);
            *(char *)(iVar39 + 0x6cec) = cVar45 << 1;
          }
        }
        if (*(byte *)(iVar39 + 0x19d) < 0x40) {
          cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x19d) + iVar39 + 0x137);
          if (cVar45 == -1) {
            *(byte *)(iVar39 + 0x6d00) = bVar12;
          }
          else {
            pcVar15 = (char *)(iVar39 + 0x6d00);
            *pcVar15 = cVar45 << 1;
          }
        }
        if (*(byte *)(iVar39 + 0x19e) < 0x40) {
          uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar39 + 0x19e) + iVar39 + 0x137);
          if (uVar21 != 0xff) {
            pcVar15 = (char *)(iVar39 + 0x6d00);
            iVar30 = uVar21 << 1;
          }
          else {
            iVar30 = iVar39 + 0x6d00;
          }
          if (uVar21 != 0xff) {
            pcVar15[0x14] = (char)iVar30;
          }
          else {
            *(byte *)(iVar30 + 0x14) = bVar12;
          }
        }
        if (*(byte *)(iVar39 + 0x19f) < 0x40) {
          cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x19f) + iVar39 + 0x137);
          if (cVar45 == -1) {
            *(byte *)(iVar39 + 0x6d28) = bVar12;
          }
          else {
            pcVar15 = (char *)(iVar39 + 0x6d00);
            *(char *)(iVar39 + 0x6d28) = cVar45 << 1;
          }
        }
        if (*(byte *)(iVar39 + 0x1a0) < 0x40) {
          cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x1a0) + iVar39 + 0x137);
          if (cVar45 == -1) {
            *(byte *)(iVar39 + 0x6d3c) = bVar12;
          }
          else {
            pcVar15 = (char *)(iVar39 + 0x6d00);
            *(char *)(iVar39 + 0x6d3c) = cVar45 << 1;
          }
        }
        if (*(byte *)(iVar39 + 0x1a1) < 0x40) {
          cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x1a1) + iVar39 + 0x137);
          if (cVar45 == -1) {
            *(byte *)(iVar39 + 0x6d50) = bVar12;
          }
          else {
            pcVar15 = (char *)(iVar39 + 0x6d00);
            *(char *)(iVar39 + 0x6d50) = cVar45 << 1;
          }
        }
        if (*(byte *)(iVar39 + 0x1a2) < 0x40) {
          cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x1a2) + iVar39 + 0x137);
          if (cVar45 == -1) {
            *(byte *)(iVar39 + 0x6d64) = bVar12;
          }
          else {
            pcVar15 = (char *)(iVar39 + 0x6d00);
            *(char *)(iVar39 + 0x6d64) = cVar45 << 1;
          }
        }
        if (*(byte *)(iVar39 + 0x1a3) < 0x40) {
          cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x1a3) + iVar39 + 0x137);
          if (cVar45 == -1) {
            *(byte *)(iVar39 + 0x6d78) = bVar12;
          }
          else {
            pcVar15 = (char *)(iVar39 + 0x6d00);
            *(char *)(iVar39 + 0x6d78) = cVar45 << 1;
          }
        }
        if (*(byte *)(iVar39 + 0x1a4) < 0x40) {
          uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar39 + 0x1a4) + iVar39 + 0x137);
          if (uVar21 != 0xff) {
            pcVar15 = (char *)(iVar39 + 0x6d80);
            iVar30 = uVar21 << 1;
          }
          else {
            iVar30 = iVar39 + 0x6d80;
          }
          if (uVar21 != 0xff) {
            pcVar15[0xc] = (char)iVar30;
          }
          else {
            *(byte *)(iVar30 + 0xc) = bVar12;
          }
        }
        if (*(byte *)(iVar39 + 0x1a5) < 0x40) {
          cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x1a5) + iVar39 + 0x137);
          if (cVar45 == -1) {
            *(byte *)(iVar39 + 0x6da0) = bVar12;
          }
          else {
            *(char *)(iVar39 + 0x6da0) = cVar45 << 1;
          }
        }
        if (*(byte *)(iVar39 + 0x1a6) < 0x40) {
          cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x1a6) + iVar39 + 0x137);
          if (cVar45 == -1) {
            *(byte *)(iVar39 + 0x6db4) = bVar12;
          }
          else {
            *(char *)(iVar39 + 0x6db4) = cVar45 << 1;
          }
        }
      }
      else {
        if (cVar45 == '@') {
          uVar21 = (uint)(bVar12 >> 2);
          bVar9 = bVar12;
        }
        else {
          uVar21 = (uint)(bVar12 >> 2);
          bVar9 = *(byte *)(DAT_000a1b14 + uVar21 * 0x20 +
                            (uint)((*(byte *)(iVar39 + 0x77) & 0x7f) >> 1) + 0xa212c);
        }
        *(byte *)(iVar39 + 0x6b48) = bVar9;
        bVar9 = bVar12;
        if ((*(byte *)(iVar39 + 0x78) & 0x7f) != 0x20) {
          bVar9 = *(byte *)(DAT_000a1b18 + uVar21 * 0x20 +
                            (uint)((*(byte *)(iVar39 + 0x78) & 0x7f) >> 1) + 0xa2154);
        }
        *(byte *)(iVar39 + 0x6b5c) = bVar9;
        bVar9 = bVar12;
        if ((*(byte *)(iVar39 + 0x79) & 0x7f) != 0x20) {
          bVar9 = *(byte *)(DAT_000a1b1c + uVar21 * 0x20 +
                            (uint)((*(byte *)(iVar39 + 0x79) & 0x7f) >> 1) + 0xa217c);
        }
        *(byte *)(iVar39 + 0x6b70) = bVar9;
        bVar9 = bVar12;
        if ((*(byte *)(iVar39 + 0x7a) & 0x7f) != 0x20) {
          bVar9 = *(byte *)(DAT_000a1b20 + uVar21 * 0x20 +
                            (uint)((*(byte *)(iVar39 + 0x7a) & 0x7f) >> 1) + 0xa21a6);
        }
        *(byte *)(iVar39 + 0x6b84) = bVar9;
        uVar35 = *(byte *)(iVar39 + 0x7b) & 0x7f;
        bVar9 = bVar12;
        if (uVar35 != 0x20) {
          bVar9 = *(byte *)(DAT_000a1b24 + uVar21 * 0x20 + (uVar35 >> 1) + 0xa21ce);
        }
        *(byte *)(iVar39 + 0x6b98) = bVar9;
        uVar35 = *(byte *)(iVar39 + 0x7c) & 0x7f;
        bVar9 = bVar12;
        if (uVar35 != 0x20) {
          bVar9 = *(byte *)(DAT_000a1b28 + uVar21 * 0x20 + (uVar35 >> 1) + 0xa21f6);
        }
        *(byte *)(iVar39 + 0x6bac) = bVar9;
        uVar35 = *(byte *)(iVar39 + 0x7d) & 0x7f;
        bVar9 = bVar12;
        if (uVar35 != 0x20) {
          bVar9 = *(byte *)(DAT_000a1b2c + uVar21 * 0x20 + (uVar35 >> 1) + 0xa2220);
        }
        *(byte *)(iVar39 + 0x6bc0) = bVar9;
        uVar35 = *(byte *)(iVar39 + 0x7e) & 0x7f;
        bVar9 = bVar12;
        if (uVar35 != 0x20) {
          bVar9 = *(byte *)(DAT_000a1b30 + uVar21 * 0x20 + (uVar35 >> 1) + 0xa224a);
        }
        *(byte *)(iVar39 + 0x6bd4) = bVar9;
        uVar35 = *(byte *)(iVar39 + 0x7f) & 0x7f;
        bVar9 = bVar12;
        if (uVar35 != 0x20) {
          bVar9 = *(byte *)(DAT_000a1b34 + uVar21 * 0x20 + (uVar35 >> 1) + 0xa2274);
        }
        *(byte *)(iVar39 + 0x6be8) = bVar9;
        uVar35 = *(byte *)(iVar39 + 0x80) & 0x7f;
        bVar9 = bVar12;
        if (uVar35 != 0x20) {
          bVar9 = *(byte *)(DAT_000a1b38 + uVar21 * 0x20 + (uVar35 >> 1) + 0xa229e);
        }
        *(byte *)(iVar39 + 0x6bfc) = bVar9;
        bVar9 = bVar12;
        if ((*(byte *)(iVar39 + 0x81) & 0x7f) != 0x20) {
          bVar9 = *(byte *)(DAT_000a1b3c + uVar21 * 0x20 +
                            (uint)((*(byte *)(iVar39 + 0x81) & 0x7f) >> 1) + 0xa22c4);
        }
        *(byte *)(iVar39 + 0x6c10) = bVar9;
        uVar35 = *(byte *)(iVar39 + 0x82) & 0x7f;
        bVar9 = bVar12;
        if (uVar35 != 0x20) {
          bVar9 = *(byte *)(DAT_000a1b40 + uVar21 * 0x20 + (uVar35 >> 1) + 0xa22f0);
        }
        *(byte *)(iVar39 + 0x6c24) = bVar9;
        uVar35 = *(byte *)(iVar39 + 0x83) & 0x7f;
        bVar9 = bVar12;
        if (uVar35 != 0x20) {
          bVar9 = *(byte *)(DAT_000a1b44 + uVar21 * 0x20 + (uVar35 >> 1) + 0xa231a);
        }
        *(byte *)(iVar39 + 0x6c38) = bVar9;
        uVar35 = *(byte *)(iVar39 + 0x84) & 0x7f;
        bVar9 = bVar12;
        if (uVar35 != 0x20) {
          bVar9 = *(byte *)(DAT_000a1b48 + uVar21 * 0x20 + (uVar35 >> 1) + 0xa2344);
        }
        *(byte *)(iVar39 + 0x6c4c) = bVar9;
        uVar35 = *(byte *)(iVar39 + 0x85) & 0x7f;
        bVar9 = bVar12;
        if (uVar35 != 0x20) {
          bVar9 = *(byte *)(DAT_000a1b4c + uVar21 * 0x20 + (uVar35 >> 1) + 0xa236e);
        }
        *(byte *)(iVar39 + 0x6c60) = bVar9;
        bVar9 = bVar12;
        if ((*(byte *)(iVar39 + 0x86) & 0x7f) != 0x20) {
          bVar9 = *(byte *)(DAT_000a1b50 + uVar21 * 0x20 + ((*(byte *)(iVar39 + 0x86) & 0x7f) >> 1)
                           + 0xa2398);
        }
        pbVar40 = (byte *)(iVar39 + 0x6c88);
        iVar11 = DAT_000a1b54 + 0xa1524;
        *(byte *)(iVar39 + 0x6c74) = bVar9;
        iVar11 = iVar11 + uVar21 * 0x20;
        iVar30 = iVar39;
        do {
          if (*(byte *)(iVar30 + 0x197) < 0x40) {
            uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar30 + 0x197) + iVar39 + 0x137);
            if (uVar21 == 0xff) {
              *pbVar40 = bVar12;
            }
            else {
              bVar9 = bVar12;
              if ((uVar21 & 0x7f) != 0x20) {
                bVar9 = *(byte *)(iVar11 + ((uVar21 & 0x7f) >> 1) + 0xe90);
              }
              *pbVar40 = bVar9;
            }
          }
          if (*(byte *)(iVar30 + 0x198) < 0x40) {
            uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar30 + 0x198) + iVar39 + 0x137);
            if (uVar21 == 0xff) {
              pbVar40[0x14] = bVar12;
            }
            else {
              bVar9 = bVar12;
              if ((uVar21 & 0x7f) != 0x20) {
                bVar9 = *(byte *)(iVar11 + ((uVar21 & 0x7f) >> 1) + 0xe90);
              }
              pbVar40[0x14] = bVar9;
            }
          }
          if (*(byte *)(iVar30 + 0x199) < 0x40) {
            uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar30 + 0x199) + iVar39 + 0x137);
            if (uVar21 == 0xff) {
              pbVar40[0x28] = bVar12;
            }
            else {
              bVar9 = bVar12;
              if ((uVar21 & 0x7f) != 0x20) {
                bVar9 = *(byte *)(iVar11 + ((uVar21 & 0x7f) >> 1) + 0xe90);
              }
              pbVar40[0x28] = bVar9;
            }
          }
          if (*(byte *)(iVar30 + 0x19a) < 0x40) {
            uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar30 + 0x19a) + iVar39 + 0x137);
            if (uVar21 == 0xff) {
              pbVar40[0x3c] = bVar12;
            }
            else {
              bVar9 = bVar12;
              if ((uVar21 & 0x7f) != 0x20) {
                bVar9 = *(byte *)(iVar11 + ((uVar21 & 0x7f) >> 1) + 0xe90);
              }
              pbVar40[0x3c] = bVar9;
            }
          }
          if (*(byte *)(iVar30 + 0x19b) < 0x40) {
            uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar30 + 0x19b) + iVar39 + 0x137);
            if (uVar21 == 0xff) {
              pbVar40[0x50] = bVar12;
            }
            else {
              bVar9 = bVar12;
              if ((uVar21 & 0x7f) != 0x20) {
                bVar9 = *(byte *)(iVar11 + ((uVar21 & 0x7f) >> 1) + 0xe90);
              }
              pbVar40[0x50] = bVar9;
            }
          }
          if (*(byte *)(iVar30 + 0x19c) < 0x40) {
            uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar30 + 0x19c) + iVar39 + 0x137);
            if (uVar21 == 0xff) {
              pbVar40[100] = bVar12;
            }
            else {
              bVar9 = bVar12;
              if ((uVar21 & 0x7f) != 0x20) {
                bVar9 = *(byte *)(iVar11 + ((uVar21 & 0x7f) >> 1) + 0xe90);
              }
              pbVar40[100] = bVar9;
            }
          }
          if (*(byte *)(iVar30 + 0x19d) < 0x40) {
            uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar30 + 0x19d) + iVar39 + 0x137);
            if (uVar21 == 0xff) {
              pbVar40[0x78] = bVar12;
            }
            else {
              bVar9 = bVar12;
              if ((uVar21 & 0x7f) != 0x20) {
                bVar9 = *(byte *)(iVar11 + ((uVar21 & 0x7f) >> 1) + 0xe90);
              }
              pbVar40[0x78] = bVar9;
            }
          }
          if (*(byte *)(iVar30 + 0x19e) < 0x40) {
            uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar30 + 0x19e) + iVar39 + 0x137);
            if (uVar21 == 0xff) {
              pbVar40[0x8c] = bVar12;
            }
            else {
              bVar9 = bVar12;
              if ((uVar21 & 0x7f) != 0x20) {
                bVar9 = *(byte *)(iVar11 + ((uVar21 & 0x7f) >> 1) + 0xe90);
              }
              pbVar40[0x8c] = bVar9;
            }
          }
          iVar30 = iVar30 + 8;
          pbVar40 = pbVar40 + 0xa0;
        } while (iVar30 != iVar39 + 0x10);
      }
    }
  default:
    goto switchD_000a0722_caseD_b2;
  case 0xba:
    if ((uVar20 == 0) && (-1 < (int)(uVar13 << 0x18))) {
      uVar21 = (uVar13 & 0x7f) >> 3;
      iVar30 = iVar39 + uVar21;
      *(char *)(iVar30 + 0x37) = (char)(uVar13 & 7);
      if ((*(byte *)(iVar39 + 0xc) < 3) || ((uVar13 & 7) == 1)) goto LAB_000a1938;
    }
    goto switchD_000a0722_caseD_b2;
  case 0xbc:
    if ((uVar20 == 0) && (uVar13 < 0x80)) {
      iVar30 = *(int *)(iVar39 + 0x1e0) + (uVar13 - 0x40);
      *(int *)(iVar39 + 0x1e0) = iVar30;
      if (iVar30 < 0x14) {
        iVar30 = 0x14;
        *(undefined4 *)(iVar39 + 0x1e0) = 0x14;
      }
      else if (0xff < iVar30) {
        iVar30 = 0xff;
        *(undefined4 *)(iVar39 + 0x1e0) = 0xff;
      }
      uVar8 = __divsi3(0x3a98000,*(int *)(iVar39 + 0x1e4) * iVar30);
      *(undefined4 *)(iVar39 + 0x1e8) = uVar8;
      if (uVar21 != 0) {
        uVar35 = *(uint *)(iVar39 + 0x1d4);
        piVar19 = (int *)(iVar39 + 0x834c);
        uVar13 = 0;
        do {
          uVar18 = uVar13 & 0xff;
          uVar13 = uVar13 + 1;
          if (((1 << uVar18 & uVar35) != 0) &&
             (iVar30 = *(int *)(iVar39 + 0x1ec), iVar30 < piVar19[1])) {
            piVar19[1] = iVar30;
            piVar19[1] = *(int *)(iVar39 + 0x1e8) * (*piVar19 - *(int *)(iVar39 + 0x1dc)) + iVar30;
            uVar35 = *(uint *)(iVar39 + 0x1d4);
            uVar21 = (uint)*(byte *)(iVar39 + 0x7c74);
          }
          piVar19 = piVar19 + 5;
        } while (uVar13 < uVar21);
        break;
      }
    }
    goto switchD_000a0722_caseD_b2;
  case 0xbd:
    if ((uVar20 != 0) || (0x7f < uVar13)) goto switchD_000a0722_caseD_b2;
    uVar35 = *(uint *)(iVar39 + 0x1d4);
    iVar30 = (uint)*(byte *)(iVar39 + 2) + (uVar13 - 0x40);
    uVar8 = UnsignedSaturate(iVar30,7);
    UnsignedDoesSaturate(iVar30,7);
    *(char *)(iVar39 + 2) = (char)uVar8;
    break;
  case 0xbf:
    if (uVar20 == 0) {
      FUN_00098638(iVar39,0xfffffffe);
      *(undefined4 *)(iVar39 + 0x1e4) = 0x30;
      *(undefined4 *)(iVar39 + 0x1e0) = 0x7d;
      *(undefined4 *)(iVar39 + 0x1e8) = 0x2800;
      uVar21 = (uint)*(byte *)(iVar39 + 0x7c74);
      if (uVar21 != 0) {
        uVar35 = *(uint *)(iVar39 + 0x1d4);
        piVar19 = (int *)(iVar39 + 0x834c);
        uVar13 = 0;
        do {
          uVar18 = uVar13 & 0xff;
          uVar13 = uVar13 + 1;
          if (((1 << uVar18 & uVar35) != 0) &&
             (iVar30 = *(int *)(iVar39 + 0x1ec), iVar30 < piVar19[1])) {
            piVar19[1] = iVar30;
            piVar19[1] = *(int *)(iVar39 + 0x1e8) * (*piVar19 - *(int *)(iVar39 + 0x1dc)) + iVar30;
            uVar35 = *(uint *)(iVar39 + 0x1d4);
            uVar21 = (uint)*(byte *)(iVar39 + 0x7c74);
          }
          piVar19 = piVar19 + 5;
        } while (uVar13 < uVar21);
        break;
      }
    }
    goto switchD_000a0722_caseD_b2;
  case 0xc0:
  case 0xc1:
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
    if ((uVar20 == 0) &&
       (iVar30 = *(int *)(DAT_000a1b58 + (uVar35 & 0xf) * 4 + 0xa18ba), iVar30 != 0)) {
      *(int *)(iVar39 + 0x1e4) = iVar30;
      *(uint *)(iVar39 + 0x1e0) = uVar13;
      if (uVar13 < 0x14) {
        uVar13 = 0x14;
        *(undefined4 *)(iVar39 + 0x1e0) = 0x14;
      }
      uVar8 = __divsi3(0x3a98000,uVar13 * iVar30);
      *(undefined4 *)(iVar39 + 0x1e8) = uVar8;
      if (uVar21 != 0) {
        uVar35 = *(uint *)(iVar39 + 0x1d4);
        piVar19 = (int *)(iVar39 + 0x834c);
        uVar13 = 0;
        do {
          uVar18 = uVar13 & 0xff;
          uVar13 = uVar13 + 1;
          if (((1 << uVar18 & uVar35) != 0) &&
             (iVar30 = *(int *)(iVar39 + 0x1ec), iVar30 < piVar19[1])) {
            piVar19[1] = iVar30;
            piVar19[1] = *(int *)(iVar39 + 0x1e8) * (*piVar19 - *(int *)(iVar39 + 0x1dc)) + iVar30;
            uVar35 = *(uint *)(iVar39 + 0x1d4);
            uVar21 = (uint)*(byte *)(iVar39 + 0x7c74);
          }
          piVar19 = piVar19 + 5;
        } while (uVar13 < uVar21);
        break;
      }
    }
    goto switchD_000a0722_caseD_b2;
  case 0xd0:
    if (uVar20 == 0) {
      if (uVar13 == 0) {
        *(undefined1 *)(iVar39 + 0x1b9) = 0;
        *(undefined1 *)(iVar39 + 0x1ba) = 0;
        *(undefined1 *)(iVar39 + 0x1bb) = 0;
        *(undefined1 *)(iVar39 + 0x1bc) = 0;
        uVar35 = *(uint *)(iVar39 + 0x1d4);
        break;
      }
      if ((uVar13 == 1) && (*(char *)(iVar39 + 0x7c76) == '\0')) {
        *(undefined4 *)(iVar39 + 0x1d4) = 0;
        *(byte *)(iVar39 + 0x13) = bVar12;
LAB_000a04b6:
        uVar21 = (uint)*(byte *)(iVar39 + 0x7c74);
LAB_000a04ba:
        if (uVar21 != 0) {
          iVar43 = *(int *)(iVar39 + 0x1ec);
          iVar28 = iVar10;
          do {
            iVar14 = iVar28 - iVar39;
            iVar28 = iVar28 + 0x14;
            iVar14 = iVar14 + iVar10;
            *(int *)(iVar14 + -0x7420) = *(int *)(iVar14 + -0x7420) - iVar43;
          } while (iVar28 != (short)((short)uVar21 - 1U & 0xff) * 0x14 + iVar39 + 0x7bcc);
        }
        iVar4 = DAT_000a0acc;
        iVar3 = DAT_000a0ac8;
        iVar2 = DAT_000a0ac4;
        iVar14 = DAT_000a0ac0;
        iVar43 = DAT_000a0abc;
        iVar28 = DAT_000a0ab8;
        iVar30 = 0;
        *(undefined4 *)(iVar39 + 0x1ec) = 0;
        if (0 < iVar17) {
          do {
            iVar30 = 0x7fffffff;
            *(undefined4 *)(iVar39 + 0x1ec) = 0x7fffffff;
            uVar21 = (uint)*(byte *)(iVar39 + 0x7c74);
            if (uVar21 == 0) {
LAB_000a0c70:
              *(int *)(iVar39 + 0x1ec) = iVar17;
              iVar30 = iVar17;
              break;
            }
            iVar11 = 0;
            uVar35 = uVar21 - 1 & 3;
            uVar13 = 0;
            uVar20 = 0;
            uVar18 = *(uint *)(iVar39 + 0x1d4);
            if (uVar35 == 0) {
LAB_000a0640:
              while( true ) {
                if (((1 << (uVar13 & 0xff) & uVar18) != 0) &&
                   (iVar31 = *(int *)(iVar39 + iVar11 + 0x8350), iVar31 < iVar30)) {
                  *(int *)(iVar39 + 0x1ec) = iVar31;
                  iVar30 = iVar31;
                  uVar20 = uVar13;
                }
                uVar35 = uVar13 + 1;
                iVar31 = iVar11 + 0x14;
                if (uVar21 <= (uVar35 & 0xff)) break;
                if (((1 << (uVar35 & 0xff) & uVar18) != 0) &&
                   (iVar36 = *(int *)(iVar39 + iVar31 + 0x8350), iVar36 < iVar30)) {
                  *(int *)(iVar39 + 0x1ec) = iVar36;
                  iVar30 = iVar36;
                  uVar20 = uVar35;
                }
                if (((1 << (uVar13 + 2 & 0xff) & uVar18) != 0) &&
                   (iVar36 = *(int *)(iVar31 + iVar39 + 0x8364), iVar36 < iVar30)) {
                  *(int *)(iVar39 + 0x1ec) = iVar36;
                  iVar30 = iVar36;
                  uVar20 = uVar13 + 2;
                }
                if (((1 << (uVar13 + 3 & 0xff) & uVar18) != 0) &&
                   (iVar31 = *(int *)(iVar31 + iVar39 + 0x8378), iVar31 < iVar30)) {
                  *(int *)(iVar39 + 0x1ec) = iVar31;
                  iVar30 = iVar31;
                  uVar20 = uVar13 + 3;
                }
                iVar11 = iVar11 + 0x50;
                uVar13 = uVar13 + 4;
              }
            }
            else {
              if (((uVar18 & 1) != 0) && (iVar11 = *(int *)(iVar39 + 0x8350), iVar11 < 0x7fffffff))
              {
                *(int *)(iVar39 + 0x1ec) = iVar11;
                iVar30 = iVar11;
              }
              iVar11 = 0x14;
              if (1 < uVar21) {
                cVar45 = (char)uVar35;
                uVar13 = 1;
                if (cVar45 != '\x01') {
                  if (cVar45 != '\x02') {
                    if (((int)(uVar18 << 0x1e) < 0) &&
                       (iVar11 = *(int *)(iVar39 + 0x8364), iVar11 < iVar30)) {
                      *(int *)(iVar39 + 0x1ec) = iVar11;
                      uVar20 = 1;
                      iVar30 = iVar11;
                    }
                    iVar11 = 0x28;
                    uVar13 = 2;
                  }
                  if (((1 << uVar13 & uVar18) != 0) &&
                     (iVar31 = *(int *)(iVar39 + iVar11 + 0x8350), iVar31 < iVar30)) {
                    *(int *)(iVar39 + 0x1ec) = iVar31;
                    iVar30 = iVar31;
                    uVar20 = uVar13;
                  }
                  iVar11 = iVar11 + 0x14;
                  uVar13 = uVar13 + 1;
                }
                goto LAB_000a0640;
              }
            }
            if (iVar17 <= iVar30) goto LAB_000a0c70;
            iVar30 = uVar20 * 4;
            iVar36 = uVar20 * 0x14 + 0x788;
            iVar31 = iVar10 + iVar36;
            *(undefined4 *)(iVar39 + 0x1dc) = *(undefined4 *)(iVar31 + 0xc);
            *(undefined4 *)(iVar39 + 0x1ec) = *(undefined4 *)(iVar31 + 0x10);
            iVar11 = *(int *)(iVar31 + 4) + *(int *)(iVar31 + 8);
            if (*(char *)(iVar11 + 1) == -1) {
              uVar35 = (uint)*(byte *)(iVar11 + 2);
              if (0xef < uVar35) {
                FUN_0009a90c(param_1,0xffffffff,uVar20,uVar35,iVar11 + 5,
                             (uint)*(byte *)(iVar11 + 4) + (uint)*(byte *)(iVar11 + 3) * 0x100);
                uVar18 = *(uint *)(iVar39 + 0x1d4);
                goto switchD_000a0b06_caseD_b2;
              }
              cVar1 = *(code *)(iVar11 + 3);
              uVar13 = (uint)(byte)cVar1;
              if ((*(byte *)(iVar39 + 0x7d3c) & 0x40) != 0) goto switchD_000a0b06_caseD_b2;
              switch(uVar35) {
              case 0xb0:
                if ((uVar20 == 0) && (uVar13 < 0x80)) {
                  *(code *)(iVar39 + 2) = cVar1;
                }
                break;
              case 0xb1:
                if ((uVar20 == 0) && (uVar13 < 0x80)) {
                  *(code *)(iVar39 + 3) = cVar1;
                  cVar45 = *(byte *)(iVar39 + 0x77) << 1;
                  if (uVar13 == 0x40) {
                    *(char *)(iVar39 + 0x6b48) = cVar45;
                    *(char *)(iVar39 + 0x6b5c) = *(char *)(iVar39 + 0x78) << 1;
                    *(char *)(iVar39 + 0x6b70) = *(char *)(iVar39 + 0x79) << 1;
                    *(char *)(iVar39 + 0x6b84) = *(char *)(iVar39 + 0x7a) << 1;
                    *(char *)(iVar39 + 0x6b98) = *(char *)(iVar39 + 0x7b) << 1;
                    *(char *)(iVar39 + 0x6bac) = *(char *)(iVar39 + 0x7c) << 1;
                    *(char *)(iVar39 + 0x6bc0) = *(char *)(iVar39 + 0x7d) << 1;
                    *(char *)(iVar39 + 0x6bd4) = *(char *)(iVar39 + 0x7e) << 1;
                    *(char *)(iVar39 + 0x6be8) = *(char *)(iVar39 + 0x7f) << 1;
                    *(char *)(iVar39 + 0x6bfc) = *(char *)(iVar39 + 0x80) << 1;
                    *(char *)(iVar39 + 0x6c10) = *(char *)(iVar39 + 0x81) << 1;
                    *(char *)(iVar39 + 0x6c24) = *(char *)(iVar39 + 0x82) << 1;
                    *(char *)(iVar39 + 0x6c38) = *(char *)(iVar39 + 0x83) << 1;
                    *(char *)(iVar39 + 0x6c4c) = *(char *)(iVar39 + 0x84) << 1;
                    *(char *)(iVar39 + 0x6c60) = *(char *)(iVar39 + 0x85) << 1;
                    pcVar15 = (char *)((uint)*(byte *)(iVar39 + 0x86) << 1);
                    *(char *)(iVar39 + 0x6c74) = (char)pcVar15;
                    if (*(byte *)(iVar39 + 0x197) < 0x40) {
                      uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar39 + 0x197) + iVar39 + 0x137);
                      if (uVar21 != 0xff) {
                        pcVar15 = (char *)(iVar39 + 0x6c80);
                        iVar30 = uVar21 << 1;
                      }
                      else {
                        iVar30 = iVar39 + 0x6c80;
                      }
                      if (uVar21 != 0xff) {
                        pcVar15[8] = (char)iVar30;
                      }
                      else {
                        *(code *)(iVar30 + 8) = cVar1;
                      }
                    }
                    if (*(byte *)(iVar39 + 0x198) < 0x40) {
                      uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar39 + 0x198) + iVar39 + 0x137);
                      if (uVar21 != 0xff) {
                        pcVar15 = (char *)(iVar39 + 0x6c80);
                        iVar30 = uVar21 << 1;
                      }
                      else {
                        iVar30 = iVar39 + 0x6c80;
                      }
                      if (uVar21 != 0xff) {
                        pcVar15[0x1c] = (char)iVar30;
                      }
                      else {
                        *(code *)(iVar30 + 0x1c) = cVar1;
                      }
                    }
                    if (*(byte *)(iVar39 + 0x199) < 0x40) {
                      cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x199) + iVar39 + 0x137);
                      if (cVar45 == -1) {
                        *(code *)(iVar39 + 0x6cb0) = cVar1;
                      }
                      else {
                        pcVar15 = (char *)(iVar39 + 0x6c80);
                        *(char *)(iVar39 + 0x6cb0) = cVar45 << 1;
                      }
                    }
                    if (*(byte *)(iVar39 + 0x19a) < 0x40) {
                      cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x19a) + iVar39 + 0x137);
                      if (cVar45 == -1) {
                        *(code *)(iVar39 + 0x6cc4) = cVar1;
                      }
                      else {
                        pcVar15 = (char *)(iVar39 + 0x6c80);
                        *(char *)(iVar39 + 0x6cc4) = cVar45 << 1;
                      }
                    }
                    if (*(byte *)(iVar39 + 0x19b) < 0x40) {
                      cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x19b) + iVar39 + 0x137);
                      if (cVar45 == -1) {
                        *(code *)(iVar39 + 0x6cd8) = cVar1;
                      }
                      else {
                        pcVar15 = (char *)(iVar39 + 0x6c80);
                        *(char *)(iVar39 + 0x6cd8) = cVar45 << 1;
                      }
                    }
                    if (*(byte *)(iVar39 + 0x19c) < 0x40) {
                      cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x19c) + iVar39 + 0x137);
                      if (cVar45 == -1) {
                        *(code *)(iVar39 + 0x6cec) = cVar1;
                      }
                      else {
                        pcVar15 = (char *)(iVar39 + 0x6c80);
                        *(char *)(iVar39 + 0x6cec) = cVar45 << 1;
                      }
                    }
                    if (*(byte *)(iVar39 + 0x19d) < 0x40) {
                      cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x19d) + iVar39 + 0x137);
                      if (cVar45 == -1) {
                        *(code *)(iVar39 + 0x6d00) = cVar1;
                      }
                      else {
                        pcVar15 = (char *)(iVar39 + 0x6d00);
                        *pcVar15 = cVar45 << 1;
                      }
                    }
                    if (*(byte *)(iVar39 + 0x19e) < 0x40) {
                      uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar39 + 0x19e) + iVar39 + 0x137);
                      if (uVar21 != 0xff) {
                        pcVar15 = (char *)(iVar39 + 0x6d00);
                        iVar30 = uVar21 << 1;
                      }
                      else {
                        iVar30 = iVar39 + 0x6d00;
                      }
                      if (uVar21 != 0xff) {
                        pcVar15[0x14] = (char)iVar30;
                      }
                      else {
                        *(code *)(iVar30 + 0x14) = cVar1;
                      }
                    }
                    if (*(byte *)(iVar39 + 0x19f) < 0x40) {
                      cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x19f) + iVar39 + 0x137);
                      if (cVar45 == -1) {
                        *(code *)(iVar39 + 0x6d28) = cVar1;
                      }
                      else {
                        pcVar15 = (char *)(iVar39 + 0x6d00);
                        *(char *)(iVar39 + 0x6d28) = cVar45 << 1;
                      }
                    }
                    if (*(byte *)(iVar39 + 0x1a0) < 0x40) {
                      cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x1a0) + iVar39 + 0x137);
                      if (cVar45 == -1) {
                        *(code *)(iVar39 + 0x6d3c) = cVar1;
                      }
                      else {
                        pcVar15 = (char *)(iVar39 + 0x6d00);
                        *(char *)(iVar39 + 0x6d3c) = cVar45 << 1;
                      }
                    }
                    if (*(byte *)(iVar39 + 0x1a1) < 0x40) {
                      cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x1a1) + iVar39 + 0x137);
                      if (cVar45 == -1) {
                        *(code *)(iVar39 + 0x6d50) = cVar1;
                      }
                      else {
                        pcVar15 = (char *)(iVar39 + 0x6d00);
                        *(char *)(iVar39 + 0x6d50) = cVar45 << 1;
                      }
                    }
                    if (*(byte *)(iVar39 + 0x1a2) < 0x40) {
                      cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x1a2) + iVar39 + 0x137);
                      if (cVar45 == -1) {
                        *(code *)(iVar39 + 0x6d64) = cVar1;
                      }
                      else {
                        pcVar15 = (char *)(iVar39 + 0x6d00);
                        *(char *)(iVar39 + 0x6d64) = cVar45 << 1;
                      }
                    }
                    if (*(byte *)(iVar39 + 0x1a3) < 0x40) {
                      cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x1a3) + iVar39 + 0x137);
                      if (cVar45 == -1) {
                        *(code *)(iVar39 + 0x6d78) = cVar1;
                      }
                      else {
                        pcVar15 = (char *)(iVar39 + 0x6d00);
                        *(char *)(iVar39 + 0x6d78) = cVar45 << 1;
                      }
                    }
                    if (*(byte *)(iVar39 + 0x1a4) < 0x40) {
                      uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar39 + 0x1a4) + iVar39 + 0x137);
                      if (uVar21 != 0xff) {
                        pcVar15 = (char *)(iVar39 + 0x6d80);
                        iVar30 = uVar21 << 1;
                      }
                      else {
                        iVar30 = iVar39 + 0x6d80;
                      }
                      if (uVar21 != 0xff) {
                        pcVar15[0xc] = (char)iVar30;
                      }
                      else {
                        *(code *)(iVar30 + 0xc) = cVar1;
                      }
                    }
                    if (*(byte *)(iVar39 + 0x1a5) < 0x40) {
                      cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x1a5) + iVar39 + 0x137);
                      if (cVar45 == -1) {
                        *(code *)(iVar39 + 0x6da0) = cVar1;
                      }
                      else {
                        *(char *)(iVar39 + 0x6da0) = cVar45 << 1;
                      }
                    }
                    if (*(byte *)(iVar39 + 0x1a6) < 0x40) {
                      cVar45 = *(char *)((uint)*(byte *)(iVar39 + 0x1a6) + iVar39 + 0x137);
                      if (cVar45 == -1) {
                        *(code *)(iVar39 + 0x6db4) = cVar1;
                      }
                      else {
                        *(char *)(iVar39 + 0x6db4) = cVar45 << 1;
                      }
                    }
                  }
                  else {
                    if (cVar45 == '@') {
                      uVar21 = (uint)((byte)cVar1 >> 2);
                      cVar46 = cVar1;
                    }
                    else {
                      uVar21 = (uint)((byte)cVar1 >> 2);
                      cVar46 = *(code *)(DAT_000a2b04 + uVar21 * 0x20 +
                                         (uint)((*(byte *)(iVar39 + 0x77) & 0x7f) >> 1) + 0xa2c9e);
                    }
                    *(code *)(iVar39 + 0x6b48) = cVar46;
                    cVar46 = cVar1;
                    if ((*(byte *)(iVar39 + 0x78) & 0x7f) != 0x20) {
                      cVar46 = *(code *)(DAT_000a2b08 + uVar21 * 0x20 +
                                         (uint)((*(byte *)(iVar39 + 0x78) & 0x7f) >> 1) + 0xa2cc4);
                    }
                    *(code *)(iVar39 + 0x6b5c) = cVar46;
                    uVar35 = *(byte *)(iVar39 + 0x79) & 0x7f;
                    cVar46 = cVar1;
                    if (uVar35 != 0x20) {
                      cVar46 = *(code *)(DAT_000a2b0c + uVar21 * 0x20 + (uVar35 >> 1) + 0xa2cf0);
                    }
                    *(code *)(iVar39 + 0x6b70) = cVar46;
                    uVar35 = *(byte *)(iVar39 + 0x7a) & 0x7f;
                    cVar46 = cVar1;
                    if (uVar35 != 0x20) {
                      cVar46 = *(code *)(DAT_000a2b10 + uVar21 * 0x20 + (uVar35 >> 1) + 0xa2d1e);
                    }
                    *(code *)(iVar39 + 0x6b84) = cVar46;
                    uVar35 = *(byte *)(iVar39 + 0x7b) & 0x7f;
                    cVar46 = cVar1;
                    if (uVar35 != 0x20) {
                      cVar46 = *(code *)(DAT_000a2b14 + uVar21 * 0x20 + (uVar35 >> 1) + 0xa2d4a);
                    }
                    *(code *)(iVar39 + 0x6b98) = cVar46;
                    uVar35 = *(byte *)(iVar39 + 0x7c) & 0x7f;
                    cVar46 = cVar1;
                    if (uVar35 != 0x20) {
                      cVar46 = *(code *)(DAT_000a2b18 + uVar21 * 0x20 + (uVar35 >> 1) + 0xa2d72);
                    }
                    *(code *)(iVar39 + 0x6bac) = cVar46;
                    uVar35 = *(byte *)(iVar39 + 0x7d) & 0x7f;
                    cVar46 = cVar1;
                    if (uVar35 != 0x20) {
                      cVar46 = *(code *)(DAT_000a2b1c + uVar21 * 0x20 + (uVar35 >> 1) + 0xa2d9c);
                    }
                    *(code *)(iVar39 + 0x6bc0) = cVar46;
                    uVar35 = *(byte *)(iVar39 + 0x7e) & 0x7f;
                    cVar46 = cVar1;
                    if (uVar35 != 0x20) {
                      cVar46 = *(code *)(DAT_000a2b20 + uVar21 * 0x20 + (uVar35 >> 1) + 0xa2dc6);
                    }
                    *(code *)(iVar39 + 0x6bd4) = cVar46;
                    uVar35 = *(byte *)(iVar39 + 0x7f) & 0x7f;
                    cVar46 = cVar1;
                    if (uVar35 != 0x20) {
                      cVar46 = *(code *)(DAT_000a2b24 + uVar21 * 0x20 + (uVar35 >> 1) + 0xa2df0);
                    }
                    *(code *)(iVar39 + 0x6be8) = cVar46;
                    uVar35 = *(byte *)(iVar39 + 0x80) & 0x7f;
                    cVar46 = cVar1;
                    if (uVar35 != 0x20) {
                      cVar46 = *(code *)(DAT_000a2b28 + uVar21 * 0x20 + (uVar35 >> 1) + 0xa2e1a);
                    }
                    *(code *)(iVar39 + 0x6bfc) = cVar46;
                    cVar46 = cVar1;
                    if ((*(byte *)(iVar39 + 0x81) & 0x7f) != 0x20) {
                      cVar46 = *(code *)(DAT_000a2b2c + uVar21 * 0x20 +
                                         (uint)((*(byte *)(iVar39 + 0x81) & 0x7f) >> 1) + 0xa2e40);
                    }
                    *(code *)(iVar39 + 0x6c10) = cVar46;
                    uVar35 = *(byte *)(iVar39 + 0x82) & 0x7f;
                    cVar46 = cVar1;
                    if (uVar35 != 0x20) {
                      cVar46 = *(code *)(DAT_000a2b30 + uVar21 * 0x20 + (uVar35 >> 1) + 0xa2e6c);
                    }
                    *(code *)(iVar39 + 0x6c24) = cVar46;
                    uVar35 = *(byte *)(iVar39 + 0x83) & 0x7f;
                    cVar46 = cVar1;
                    if (uVar35 != 0x20) {
                      cVar46 = MaMfiCnv_Ctrl[DAT_000a2b34 + uVar21 * 0x20 + (uVar35 >> 1) + 6];
                    }
                    *(code *)(iVar39 + 0x6c38) = cVar46;
                    uVar35 = *(byte *)(iVar39 + 0x84) & 0x7f;
                    cVar46 = cVar1;
                    if (uVar35 != 0x20) {
                      cVar46 = *(code *)(DAT_000a2b38 + uVar21 * 0x20 + (uVar35 >> 1) + 0xa2ec0);
                    }
                    *(code *)(iVar39 + 0x6c4c) = cVar46;
                    uVar35 = *(byte *)(iVar39 + 0x85) & 0x7f;
                    cVar46 = cVar1;
                    if (uVar35 != 0x20) {
                      cVar46 = *(code *)(DAT_000a2b3c + uVar21 * 0x20 + (uVar35 >> 1) + 0xa2eea);
                    }
                    *(code *)(iVar39 + 0x6c60) = cVar46;
                    iVar30 = DAT_000a2b44;
                    uVar35 = *(byte *)(iVar39 + 0x86) & 0x7f;
                    cVar46 = cVar1;
                    if (uVar35 != 0x20) {
                      cVar46 = *(code *)(DAT_000a2b40 + uVar21 * 0x20 + (uVar35 >> 1) + 0xa2f14);
                    }
                    pcVar44 = (code *)(iVar39 + 0x6c88);
                    *(code *)(iVar39 + 0x6c74) = cVar46;
                    iVar11 = iVar30 + 0xa20a2 + uVar21 * 0x20;
                    iVar30 = iVar39;
                    do {
                      if (*(byte *)(iVar30 + 0x197) < 0x40) {
                        uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar30 + 0x197) + iVar39 + 0x137);
                        if (uVar21 == 0xff) {
                          *pcVar44 = cVar1;
                        }
                        else if ((uVar21 & 0x7f) == 0x20) {
                          *pcVar44 = cVar1;
                        }
                        else {
                          *pcVar44 = *(code *)(iVar11 + ((uVar21 & 0x7f) >> 1) + 0xe90);
                        }
                      }
                      if (*(byte *)(iVar30 + 0x198) < 0x40) {
                        uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar30 + 0x198) + iVar39 + 0x137);
                        if (uVar21 == 0xff) {
                          pcVar44[0x14] = cVar1;
                        }
                        else {
                          cVar46 = cVar1;
                          if ((uVar21 & 0x7f) != 0x20) {
                            cVar46 = *(code *)(iVar11 + ((uVar21 & 0x7f) >> 1) + 0xe90);
                          }
                          pcVar44[0x14] = cVar46;
                        }
                      }
                      if (*(byte *)(iVar30 + 0x199) < 0x40) {
                        uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar30 + 0x199) + iVar39 + 0x137);
                        if (uVar21 == 0xff) {
                          pcVar44[0x28] = cVar1;
                        }
                        else {
                          cVar46 = cVar1;
                          if ((uVar21 & 0x7f) != 0x20) {
                            cVar46 = *(code *)(iVar11 + ((uVar21 & 0x7f) >> 1) + 0xe90);
                          }
                          pcVar44[0x28] = cVar46;
                        }
                      }
                      if (*(byte *)(iVar30 + 0x19a) < 0x40) {
                        uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar30 + 0x19a) + iVar39 + 0x137);
                        if (uVar21 == 0xff) {
                          pcVar44[0x3c] = cVar1;
                        }
                        else {
                          cVar46 = cVar1;
                          if ((uVar21 & 0x7f) != 0x20) {
                            cVar46 = *(code *)(iVar11 + ((uVar21 & 0x7f) >> 1) + 0xe90);
                          }
                          pcVar44[0x3c] = cVar46;
                        }
                      }
                      if (*(byte *)(iVar30 + 0x19b) < 0x40) {
                        uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar30 + 0x19b) + iVar39 + 0x137);
                        if (uVar21 == 0xff) {
                          pcVar44[0x50] = cVar1;
                        }
                        else {
                          cVar46 = cVar1;
                          if ((uVar21 & 0x7f) != 0x20) {
                            cVar46 = *(code *)(iVar11 + ((uVar21 & 0x7f) >> 1) + 0xe90);
                          }
                          pcVar44[0x50] = cVar46;
                        }
                      }
                      if (*(byte *)(iVar30 + 0x19c) < 0x40) {
                        uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar30 + 0x19c) + iVar39 + 0x137);
                        if (uVar21 == 0xff) {
                          pcVar44[100] = cVar1;
                        }
                        else {
                          cVar46 = cVar1;
                          if ((uVar21 & 0x7f) != 0x20) {
                            cVar46 = *(code *)(iVar11 + ((uVar21 & 0x7f) >> 1) + 0xe90);
                          }
                          pcVar44[100] = cVar46;
                        }
                      }
                      if (*(byte *)(iVar30 + 0x19d) < 0x40) {
                        uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar30 + 0x19d) + iVar39 + 0x137);
                        if (uVar21 == 0xff) {
                          pcVar44[0x78] = cVar1;
                        }
                        else {
                          cVar46 = cVar1;
                          if ((uVar21 & 0x7f) != 0x20) {
                            cVar46 = *(code *)(iVar11 + ((uVar21 & 0x7f) >> 1) + 0xe90);
                          }
                          pcVar44[0x78] = cVar46;
                        }
                      }
                      if (*(byte *)(iVar30 + 0x19e) < 0x40) {
                        uVar21 = (uint)*(byte *)((uint)*(byte *)(iVar30 + 0x19e) + iVar39 + 0x137);
                        if (uVar21 == 0xff) {
                          pcVar44[0x8c] = cVar1;
                        }
                        else {
                          cVar46 = cVar1;
                          if ((uVar21 & 0x7f) != 0x20) {
                            cVar46 = *(code *)(iVar11 + ((uVar21 & 0x7f) >> 1) + 0xe90);
                          }
                          pcVar44[0x8c] = cVar46;
                        }
                      }
                      iVar30 = iVar30 + 8;
                      pcVar44 = pcVar44 + 0xa0;
                    } while (iVar30 != iVar39 + 0x10);
                  }
                }
                break;
              case 0xba:
                if ((uVar20 == 0) && (-1 < (int)(uVar13 << 0x18))) {
                  uVar21 = (uVar13 & 0x7f) >> 3;
                  iVar30 = iVar39 + uVar21;
                  *(char *)(iVar30 + 0x37) = (char)(uVar13 & 7);
                  if ((*(byte *)(iVar39 + 0xc) < 3) || ((uVar13 & 7) == 1)) goto LAB_000a234c;
                }
                break;
              case 0xbc:
                if ((uVar20 == 0) && (uVar13 < 0x80)) {
                  iVar30 = (uVar13 - 0x40) + *(int *)(iVar39 + 0x1e0);
                  if (iVar30 < 0x14) {
                    iVar30 = 0x14;
                    *(undefined4 *)(iVar39 + 0x1e0) = 0x14;
                  }
                  else {
                    if (0xff < iVar30) {
                      iVar30 = 0xff;
                    }
                    *(int *)(iVar39 + 0x1e0) = iVar30;
                  }
                  uVar8 = __divsi3(0x3a98000,*(int *)(iVar39 + 0x1e4) * iVar30);
                  piVar19 = (int *)(iVar39 + 0x834c);
                  uVar35 = 0;
                  *(undefined4 *)(iVar39 + 0x1e8) = uVar8;
                  do {
                    uVar13 = uVar35 & 0xff;
                    uVar35 = uVar35 + 1;
                    if (((1 << uVar13 & uVar18) != 0) &&
                       (iVar30 = *(int *)(iVar39 + 0x1ec), iVar30 < piVar19[1])) {
                      piVar19[1] = iVar30;
                      piVar19[1] = *(int *)(iVar39 + 0x1e8) * (*piVar19 - *(int *)(iVar39 + 0x1dc))
                                   + iVar30;
                      uVar18 = *(uint *)(iVar39 + 0x1d4);
                      uVar21 = (uint)*(byte *)(iVar39 + 0x7c74);
                    }
                    piVar19 = piVar19 + 5;
                  } while (uVar35 < uVar21);
                }
                break;
              case 0xbd:
                if ((uVar20 == 0) && (uVar13 < 0x80)) {
                  iVar30 = (uint)*(byte *)(iVar39 + 2) + (uVar13 - 0x40);
                  uVar8 = UnsignedSaturate(iVar30,7);
                  UnsignedDoesSaturate(iVar30,7);
                  *(char *)(iVar39 + 2) = (char)uVar8;
                }
                break;
              case 0xbf:
                if (uVar20 == 0) {
                  FUN_00098638(iVar39,0xffffffff);
                  *(undefined4 *)(iVar39 + 0x1e0) = 0x7d;
                  *(undefined4 *)(iVar39 + 0x1e4) = 0x30;
                  *(undefined4 *)(iVar39 + 0x1e8) = 0x2800;
                  uVar21 = (uint)*(byte *)(iVar39 + 0x7c74);
                  if (uVar21 == 0) goto LAB_000a0c6a;
                  uVar18 = *(uint *)(iVar39 + 0x1d4);
                  piVar19 = (int *)(iVar39 + 0x834c);
                  uVar35 = 0;
                  do {
                    uVar13 = uVar35 & 0xff;
                    uVar35 = uVar35 + 1;
                    if (((1 << uVar13 & uVar18) != 0) &&
                       (iVar30 = *(int *)(iVar39 + 0x1ec), iVar30 < piVar19[1])) {
                      piVar19[1] = iVar30;
                      piVar19[1] = *(int *)(iVar39 + 0x1e8) * (*piVar19 - *(int *)(iVar39 + 0x1dc))
                                   + iVar30;
                      uVar18 = *(uint *)(iVar39 + 0x1d4);
                      uVar21 = (uint)*(byte *)(iVar39 + 0x7c74);
                    }
                    piVar19 = piVar19 + 5;
                  } while (uVar35 < uVar21);
                }
                break;
              case 0xc0:
              case 0xc1:
              case 0xc2:
              case 0xc3:
              case 0xc4:
              case 0xc5:
              case 0xc6:
              case 199:
              case 200:
              case 0xc9:
              case 0xca:
              case 0xcb:
              case 0xcc:
              case 0xcd:
              case 0xce:
              case 0xcf:
                if ((uVar20 == 0) &&
                   (iVar30 = *(int *)(DAT_000a2b48 + (uVar35 & 0xf) * 4 + 0xa2616), iVar30 != 0)) {
                  *(uint *)(iVar39 + 0x1e0) = uVar13;
                  *(int *)(iVar39 + 0x1e4) = iVar30;
                  if (uVar13 < 0x14) {
                    uVar13 = 0x14;
                    *(undefined4 *)(iVar39 + 0x1e0) = 0x14;
                  }
                  uVar8 = __divsi3(0x3a98000,uVar13 * iVar30);
                  piVar19 = (int *)(iVar39 + 0x834c);
                  uVar35 = 0;
                  *(undefined4 *)(iVar39 + 0x1e8) = uVar8;
                  do {
                    uVar13 = uVar35 & 0xff;
                    uVar35 = uVar35 + 1;
                    if (((1 << uVar13 & uVar18) != 0) &&
                       (iVar30 = *(int *)(iVar39 + 0x1ec), iVar30 < piVar19[1])) {
                      piVar19[1] = iVar30;
                      piVar19[1] = *(int *)(iVar39 + 0x1e8) * (*piVar19 - *(int *)(iVar39 + 0x1dc))
                                   + iVar30;
                      uVar18 = *(uint *)(iVar39 + 0x1d4);
                      uVar21 = (uint)*(byte *)(iVar39 + 0x7c74);
                    }
                    piVar19 = piVar19 + 5;
                  } while (uVar35 < uVar21);
                }
                break;
              case 0xd0:
                if (uVar20 == 0) {
                  if (uVar13 == 0) {
                    *(undefined1 *)(iVar39 + 0x1b9) = 0;
                    *(undefined1 *)(iVar39 + 0x1ba) = 0;
                    *(undefined1 *)(iVar39 + 0x1bb) = 0;
                    *(undefined1 *)(iVar39 + 0x1bc) = 0;
                  }
                  else if ((uVar13 == 1) && (*(char *)(iVar39 + 0x7c76) == '\0')) {
                    *(undefined4 *)(iVar39 + 0x1d4) = 0;
                    *(code *)(iVar39 + 0x13) = cVar1;
                    goto LAB_000a0a70;
                  }
                }
                break;
              case 0xdc:
                if (*(byte *)(iVar39 + 0xc) < 3) {
                  iVar30 = 0;
                }
                else {
                  iVar30 = uVar13 << 8;
                }
                *(int *)(iVar31 + 0xc) = *(int *)(iVar31 + 0xc) + iVar30;
                *(int *)(iVar31 + 0x10) =
                     *(int *)(iVar39 + 0x1e8) * iVar30 + *(int *)(iVar31 + 0x10);
                uVar18 = *(uint *)(iVar39 + 0x1d4);
                break;
              case 0xdf:
                uVar18 = uVar18 & ~(1 << (uVar20 & 0xff));
                *(uint *)(iVar39 + 0x1d4) = uVar18;
                if (uVar18 == 0) {
                  *(undefined1 *)(iVar39 + 0x13) = 1;
                  goto LAB_000a0a70;
                }
                goto LAB_000a06a6;
              case 0xe0:
                uVar21 = (uint)*(byte *)(iVar39 + iVar30 + (uint)((byte)cVar1 >> 6) + 0x27);
                *(char *)(iVar39 + uVar21 + 0x47) = (char)(uVar13 & 0x3f);
                FUN_000971c0(iVar39,0xffffffff,uVar21,uVar13 & 0x3f);
                uVar18 = *(uint *)(iVar39 + 0x1d4);
                break;
              case 0xe1:
                uVar21 = (uint)*(byte *)(iVar30 + iVar39 + (uint)((byte)cVar1 >> 6) + 0x27);
                iVar30 = iVar39 + uVar21;
                *(byte *)(iVar30 + 0x57) = (byte)cVar1 & 0x3f;
                if ((*(char *)(iVar39 + 0xc) == '\x01') || (*(char *)(iVar30 + 0x37) == '\x01')) {
LAB_000a234c:
                  FUN_000971c0(iVar39,0xffffffff,uVar21,*(undefined1 *)(iVar30 + 0x47));
                  uVar18 = *(uint *)(iVar39 + 0x1d4);
                }
                break;
              case 0xe2:
                *(byte *)((uint)*(byte *)(iVar30 + iVar39 + (uint)((byte)cVar1 >> 6) + 0x27) +
                          iVar39 + 0x67) = (byte)cVar1 & 0x3f;
                break;
              case 0xe3:
                uVar13 = uVar13 & 0x3f;
                bVar9 = (char)uVar13 * '\x02';
                uVar21 = (uint)*(byte *)(iVar30 + iVar39 + (uint)((byte)cVar1 >> 6) + 0x27);
                *(char *)(iVar39 + uVar21 + 0x77) = (char)uVar13;
                bVar12 = *(byte *)(iVar39 + 3);
                if ((bVar12 != 0x40) && (bVar9 = bVar12, uVar13 != 0x20)) {
                  bVar9 = *(byte *)(iVar4 + (uint)(bVar12 >> 2) * 0x20 + (uVar13 >> 1) + 0xa13b0);
                }
                *(byte *)(iVar39 + uVar21 * 0x14 + 0x6b48) = bVar9;
                break;
              case 0xe4:
                uVar21 = (uint)*(byte *)(iVar30 + iVar39 + (uint)((byte)cVar1 >> 6) + 0x27);
                iVar30 = iVar39 + uVar21;
                *(char *)(iVar30 + 0x87) = (char)(uVar13 & 0x3f);
                iVar30 = *(int *)(iVar3 + (uint)*(byte *)(iVar30 + 0x97) * 4 + 0xa06f4) +
                         (uVar13 & 0x3f) * 2;
                if (iVar30 < 0) {
                  sVar32 = 0;
                }
                else if (iVar30 < 0x80) {
                  sVar32 = (short)iVar30 * 0x80;
                }
                else {
                  sVar32 = 0x3f80;
                }
                iVar30 = iVar39 + uVar21 * 0x14;
                *(short *)(iVar30 + 0x6b52) = sVar32;
                *(undefined1 *)(iVar30 + 0x6b46) = *(undefined1 *)(iVar30 + 0x6b47);
                break;
              case 0xe5:
                if ((((byte)cVar1 & 0x30) == 0) && (1 < *(byte *)(iVar39 + 0xc))) {
                  *(byte *)((iVar30 + (uint)((byte)cVar1 >> 6) & 0xff) + iVar39 + 0x27) =
                       (byte)cVar1 & 0xf;
                }
                break;
              case 0xe6:
                iVar30 = (uint)*(byte *)(iVar30 + iVar39 + (uint)((byte)cVar1 >> 6) + 0x27) + iVar39
                ;
                bVar12 = *(char *)(iVar30 + 0x67) + (((byte)cVar1 & 0x3f) - 0x20);
                local_58 = *(byte *)(iVar39 + 0x7d3c) & 0x40;
                if ((-1 < (char)bVar12) && (local_58 = bVar12, '?' < (char)bVar12)) {
                  local_58 = 0x3f;
                }
                *(byte *)(iVar30 + 0x67) = local_58;
                break;
              case 0xe7:
                if ((uVar13 & 0x3f) < 0x19) {
                  *(char *)(iVar39 + (uint)*(byte *)(iVar30 + iVar39 + (uint)((byte)cVar1 >> 6) +
                                                    0x27) * 0x14 + 0x6b47) = (char)(uVar13 & 0x3f);
                }
                break;
              case 0xe8:
                uVar21 = (uint)*(byte *)(iVar30 + iVar39 + (uint)((byte)cVar1 >> 6) + 0x27);
                iVar30 = iVar39 + uVar21;
                iVar11 = *(int *)(iVar2 + (uVar13 & 0x3f) * 4 + 0xa06f2);
                *(char *)(iVar30 + 0x97) = (char)(uVar13 & 0x3f);
                iVar11 = iVar11 + (uint)*(byte *)(iVar30 + 0x87) * 2;
                if (iVar11 < 0) {
                  sVar32 = 0;
                }
                else if (iVar11 < 0x80) {
                  sVar32 = (short)iVar11 * 0x80;
                }
                else {
                  sVar32 = 0x3f80;
                }
                iVar30 = iVar39 + uVar21 * 0x14;
                *(short *)(iVar30 + 0x6b52) = sVar32;
                *(undefined1 *)(iVar30 + 0x6b46) = *(undefined1 *)(iVar30 + 0x6b47);
                break;
              case 0xe9:
                *(byte *)((uint)*(byte *)(iVar30 + iVar39 + (uint)((byte)cVar1 >> 6) + 0x27) +
                          iVar39 + 0x97) = (byte)cVar1 & 0x3f;
                break;
              case 0xea:
                uVar21 = (uint)*(byte *)(iVar39 + iVar30 + (uint)((byte)cVar1 >> 6) + 0x27);
                iVar30 = (uVar13 & 0x3f) << 1;
                if (uVar21 == *(byte *)(iVar39 + 0x7c75)) {
                  iVar30 = 0;
                }
                *(undefined1 *)(iVar39 + uVar21 * 0x14 + 0x6b45) =
                     *(undefined1 *)(iVar30 + iVar14 + 0xa12f8);
              }
switchD_000a0b06_caseD_b2:
            }
            else {
              if (*(char *)(iVar11 + 1) != '\x7f') goto switchD_000a0b06_caseD_b2;
              bVar12 = *(byte *)(iVar11 + 2);
              iVar7 = *(int *)(param_1 + 4);
              if (0xef < bVar12) {
                if ((((*(char *)(iVar7 + 0x7c6c) == '\x04') &&
                     (-1 < (int)((uint)*(byte *)(iVar7 + 0x7d3c) << 0x19))) && (bVar12 == 0xf0)) &&
                   (((uVar20 == 0 &&
                     (5 < (uint)*(byte *)(iVar11 + 4) + (uint)*(byte *)(iVar11 + 3) * 0x100)) &&
                    (*(char *)(iVar7 + 0x7d38) != '\0')))) {
                  FUN_0009733c(iVar7,0xffffffff,iVar11 + 5);
LAB_000a0c6a:
                  uVar18 = *(uint *)(iVar39 + 0x1d4);
                }
                goto switchD_000a0b06_caseD_b2;
              }
              bVar9 = *(byte *)(iVar11 + 3);
              uVar21 = (uint)bVar9;
              iVar11 = iVar7 + 0x7bb8;
              if ((*(char *)(iVar7 + 0x7c6c) != '\x04') || ((*(byte *)(iVar7 + 0x7d3c) & 0x40) != 0)
                 ) goto switchD_000a0b06_caseD_b2;
              if (bVar12 == 0x80) {
                *(byte *)(iVar30 + iVar7 + (uint)(bVar9 >> 6) + 0x177) = bVar9 & 0x3f;
                uVar18 = *(uint *)(iVar39 + 0x1d4);
                goto switchD_000a0b06_caseD_b2;
              }
              if (bVar12 < 0x81) {
                if (bVar12 == 0) {
                  *(byte *)(iVar30 + iVar7 + (uint)(bVar9 >> 6) + 0x197) = bVar9 & 0x3f;
                  uVar18 = *(uint *)(iVar39 + 0x1d4);
                }
                goto switchD_000a0b06_caseD_b2;
              }
              if (bVar12 == 0x81) {
                iVar30 = iVar30 + (uint)(bVar9 >> 6);
                if ((((int)((uint)*(byte *)(iVar11 + iVar30 + 0x11f) << 0x1e) < 0) &&
                    (uVar35 = (uint)*(byte *)(iVar7 + iVar30 + 0x197), uVar35 < 0x40)) &&
                   (*(int *)(iVar11 + uVar35 * 0x18 + 0x194) != 2)) {
                  uVar21 = uVar21 & 0x3f;
                  *(char *)(uVar35 + iVar7 + 0x137) = (char)uVar21;
                  bVar9 = (char)uVar21 * '\x02';
                  bVar12 = *(byte *)(iVar7 + 3);
                  if ((bVar12 != 0x40) && (bVar9 = bVar12, uVar21 != 0x20)) {
                    bVar9 = *(byte *)(iVar28 + (uint)(bVar12 >> 2) * 0x20 + (uVar21 >> 1) + 0xa1398)
                    ;
                  }
                  *(byte *)(iVar7 + (iVar30 + 0x10) * 0x14 + 0x6b48) = bVar9;
                  uVar18 = *(uint *)(iVar39 + 0x1d4);
                }
                goto switchD_000a0b06_caseD_b2;
              }
              if (bVar12 != 0x90) goto switchD_000a0b06_caseD_b2;
              uVar35 = uVar21 & 0x1f;
              uVar13 = (uint)*(byte *)(iVar7 + iVar30 + (uint)(bVar9 >> 6) + 0x27);
              if ((int)(uVar21 << 0x1a) < 0) {
                uVar13 = uVar13 + 0x10;
              }
              *(char *)(uVar13 + iVar11 + 0x13f) = (char)uVar35;
              if (3 < uVar35) goto LAB_000a0c6a;
              *(byte *)(iVar7 + 0xb) = *(byte *)(uVar35 + iVar43 + 0xa100a) | *(byte *)(iVar7 + 0xb)
              ;
              uVar18 = *(uint *)(iVar39 + 0x1d4);
            }
            if (uVar18 == 0) {
LAB_000a0a70:
              iVar30 = *(int *)(iVar39 + 0x1ec);
              break;
            }
LAB_000a06a6:
            iVar30 = FUN_0009707c(iVar10,uVar20);
            if ((iVar30 < 0) || (*(uint *)(iVar10 + iVar36) < *(int *)(iVar31 + 8) + 3U)) {
              *(uint *)(iVar39 + 0x1d4) = *(uint *)(iVar39 + 0x1d4) & ~(1 << (uVar20 & 0xff));
            }
            else {
              uVar21 = (uint)*(byte *)(*(int *)(iVar31 + 4) + *(int *)(iVar31 + 8));
              *(uint *)(iVar31 + 0xc) = *(int *)(iVar31 + 0xc) + uVar21;
              *(uint *)(iVar31 + 0x10) = *(int *)(iVar39 + 0x1e8) * uVar21 + *(int *)(iVar31 + 0x10)
              ;
            }
            iVar30 = *(int *)(iVar39 + 0x1ec);
          } while (iVar30 < iVar17);
        }
        *(int *)(iVar39 + 0x1f0) = iVar30;
        *(int *)(iVar39 + 500) = iVar30;
        *param_3 = (_MACNV_SEEK_INFO)0x7f;
        param_3[4] = *(_MACNV_SEEK_INFO *)(pcVar41 + 6);
        uVar16 = *(undefined2 *)(pcVar41 + 0x1be);
        param_3[5] = (_MACNV_SEEK_INFO)0x7f;
        *(undefined2 *)(param_3 + 2) = uVar16;
        if (*(int *)(pcVar41 + 0xb20) == 0) {
          _Var24 = (_MACNV_SEEK_INFO)0xff;
        }
        else {
          _Var24 = *(_MACNV_SEEK_INFO *)(pcVar41 + 8);
        }
        param_3[6] = _Var24;
        iVar10 = DAT_000a1b10;
        if (*(int *)(pcVar41 + 0xb2c) == 0) {
          _Var24 = (_MACNV_SEEK_INFO)0xff;
        }
        else {
          _Var24 = *(_MACNV_SEEK_INFO *)(pcVar41 + 9);
        }
        bVar12 = 0;
        param_3[7] = _Var24;
        iVar39 = iVar10 + 0xa0cd8;
        pcVar15 = pcVar41;
        p_Var27 = param_3;
        iVar17 = 0;
        do {
          p_Var27[0xb] = *(_MACNV_SEEK_INFO *)(pcVar41 + iVar17 + 0x6b42);
          p_Var27[10] = *(_MACNV_SEEK_INFO *)(pcVar41 + iVar17 + 0x6b43);
          if (pcVar15[0x57] == '4') {
            p_Var27[10] = (_MACNV_SEEK_INFO)0x8f;
          }
          p_Var27[0xc] = *(_MACNV_SEEK_INFO *)(pcVar41 + iVar17 + 0x6b45);
          uVar21 = (uint)*(byte *)((uint)(byte)pcVar41[2] + iVar39 + 0x9b8) +
                   (uint)*(byte *)(iVar39 + (uint)(byte)pcVar15[0x67] * 2 + 0x9b8);
          if (uVar21 < 0xc1) {
            iVar28 = iVar39 + uVar21;
          }
          else {
            iVar28 = iVar10 + 0xa0d98;
          }
          p_Var27[0xd] = *(_MACNV_SEEK_INFO *)(iVar28 + 0xa38);
          if (bVar12 < 0x10) {
            uVar21 = *(int *)(iVar39 + (uint)(byte)pcVar15[0x177] * 8 + 0x5b8) +
                     *(int *)(iVar39 + (uint)(byte)pcVar41[2] * 4 + 0x5b8) +
                     *(int *)(iVar39 + (uint)(byte)pcVar41[7] * 4 + 0x5b8);
            if (0xbf < uVar21) {
              uVar21 = 0xc0;
            }
            p_Var27[0x1ae] = SUB41(*(undefined4 *)(iVar39 + uVar21 * 4),0);
          }
          p_Var27[0x18] = *(_MACNV_SEEK_INFO *)(pcVar41 + iVar17 + 0x6b48);
          p_Var27[0xf] = *(_MACNV_SEEK_INFO *)(pcVar41 + iVar17 + 0x6b49);
          p_Var27[0x10] = *(_MACNV_SEEK_INFO *)(pcVar41 + iVar17 + 0x6b4a);
          *(undefined2 *)(p_Var27 + 0x1c) = *(undefined2 *)(pcVar41 + iVar17 + 0x6b52);
          p_Var27[0x11] = *(_MACNV_SEEK_INFO *)(pcVar41 + iVar17 + 0x6b46);
          if ((pcVar41[0x10] == '\x01') && ((byte)pcVar41[0xc] < 3)) {
            _Var24 = (_MACNV_SEEK_INFO)0x0;
          }
          else {
            _Var24 = *(_MACNV_SEEK_INFO *)(pcVar41 + iVar17 + 0x6b4b);
          }
          p_Var27[0x12] = _Var24;
          bVar12 = bVar12 + 1;
          p_Var27[0x13] = *(_MACNV_SEEK_INFO *)(pcVar41 + iVar17 + 0x6b4c);
          *(undefined2 *)(p_Var27 + 0x1e) = *(undefined2 *)(pcVar41 + iVar17 + 0x6b54);
          p_Var27[0x14] = *(_MACNV_SEEK_INFO *)(pcVar41 + iVar17 + 0x6b4e);
          p_Var27[0x15] = *(_MACNV_SEEK_INFO *)(pcVar41 + iVar17 + 0x6b4d);
          p_Var27[0x16] = *(_MACNV_SEEK_INFO *)(pcVar41 + iVar17 + 0x6b4f);
          p_Var27[0x17] = *(_MACNV_SEEK_INFO *)(pcVar41 + iVar17 + 0x6b50);
          p_Var27[0x19] = *(_MACNV_SEEK_INFO *)(pcVar41 + iVar17 + 0x6b51);
          p_Var27[8] = (_MACNV_SEEK_INFO)(pcVar15[0x7c97] & 7);
          p_Var27[9] = (_MACNV_SEEK_INFO)(pcVar15[0x7cb7] & 1);
          p_Var27[0x1a] = *(_MACNV_SEEK_INFO *)(pcVar15 + 0x7c77);
          if ((pcVar15[0x7cf7] & 0x1fU) == 0x1f) {
            _Var24 = (_MACNV_SEEK_INFO)0x0;
          }
          else {
            _Var24 = (_MACNV_SEEK_INFO)((pcVar15[0x7cf7] & 0x1fU) + 2);
          }
          p_Var27[0x1b] = _Var24;
          pcVar15 = pcVar15 + 1;
          p_Var27 = p_Var27 + 0x1a;
          iVar17 = iVar17 + 0x14;
        } while (bVar12 != 0x20);
        *(undefined4 *)(param_3 + 0x348) = 0;
        *(undefined4 *)(param_3 + 0x34c) = 0;
        iVar10 = *(int *)(pcVar41 + 0xb0c);
        if (iVar10 != 0x400) {
          *(int *)(param_3 + 0x358) = *(int *)(pcVar41 + iVar10 * 0x14 + 0xb38) * 0x32;
          *(int *)(param_3 + 0x350) = (*(int *)(pcVar41 + iVar10 * 0x14 + 0xb3c) + -0x80) * 3;
          *(int *)(param_3 + 0x354) = (*(int *)(pcVar41 + iVar10 * 0x14 + 0xb40) + -0x80) * 3;
        }
        *(undefined4 *)(param_3 + 0x35c) = 1;
        *(undefined4 *)(param_3 + 0x360) = 0;
        iVar10 = *(int *)(pcVar41 + 0xb10);
        if (iVar10 != 0x400) {
          *(int *)(param_3 + 0x36c) = *(int *)(pcVar41 + iVar10 * 0x14 + 0xb38) * 0x32;
          *(int *)(param_3 + 0x364) = (*(int *)(pcVar41 + iVar10 * 0x14 + 0xb3c) + -0x80) * 3;
          *(int *)(param_3 + 0x368) = (*(int *)(pcVar41 + iVar10 * 0x14 + 0xb40) + -0x80) * 3;
        }
        *(undefined4 *)(param_3 + 0x370) = 2;
        *(undefined4 *)(param_3 + 0x374) = 0;
        iVar10 = *(int *)(pcVar41 + 0xb14);
        if (iVar10 != 0x400) {
          *(int *)(param_3 + 0x380) = *(int *)(pcVar41 + iVar10 * 0x14 + 0xb38) * 0x32;
          *(int *)(param_3 + 0x378) = (*(int *)(pcVar41 + iVar10 * 0x14 + 0xb3c) + -0x80) * 3;
          *(int *)(param_3 + 0x37c) = (*(int *)(pcVar41 + iVar10 * 0x14 + 0xb40) + -0x80) * 3;
        }
        *(undefined4 *)(param_3 + 900) = 3;
        *(undefined4 *)(param_3 + 0x388) = 0;
        iVar10 = *(int *)(pcVar41 + 0xb18);
        if (iVar10 != 0x400) {
          *(int *)(param_3 + 0x394) = *(int *)(pcVar41 + iVar10 * 0x14 + 0xb38) * 0x32;
          *(int *)(param_3 + 0x38c) = (*(int *)(pcVar41 + iVar10 * 0x14 + 0xb3c) + -0x80) * 3;
          *(int *)(param_3 + 0x390) = (*(int *)(pcVar41 + iVar10 * 0x14 + 0xb40) + -0x80) * 3;
        }
        if (pcVar41[0x7d38] == '\x01') {
          iVar10 = 0;
          pbVar40 = (byte *)(pcVar41 + 0x7cf6);
          do {
            FUN_0009dee8(pcVar41,iVar10,pbVar40[1] & 0x1f);
            FUN_0009dee8(pcVar41,iVar10 + 1,pbVar40[2] & 0x1f);
            FUN_0009dee8(pcVar41,iVar10 + 2,pbVar40[3] & 0x1f);
            FUN_0009dee8(pcVar41,iVar10 + 3,pbVar40[4] & 0x1f);
            FUN_0009dee8(pcVar41,iVar10 + 4,pbVar40[5] & 0x1f);
            FUN_0009dee8(pcVar41,iVar10 + 5,pbVar40[6] & 0x1f);
            FUN_0009dee8(pcVar41,iVar10 + 6,pbVar40[7] & 0x1f);
            pbVar40 = pbVar40 + 8;
            iVar17 = iVar10 + 7;
            iVar10 = iVar10 + 8;
            FUN_0009dee8(pcVar41,iVar17,*pbVar40 & 0x1f);
          } while (iVar10 != 0x20);
        }
        if (((int)((uint)(byte)pcVar41[0x7d3c] << 0x19) < 0) &&
           ((*(int *)(pcVar41 + 0x7d4c) != 2 || (pcVar41[0x7c6e] != '\x01')))) {
          FUN_00098150(pcVar41,0x10,0x10,0,0);
        }
        pcVar41[0x15] = '\0';
        pcVar41[0x14] = '\x01';
        return 0;
      }
    }
switchD_000a0722_caseD_b2:
    uVar35 = *(uint *)(iVar39 + 0x1d4);
    break;
  case 0xdc:
    if (*(byte *)(iVar39 + 0xc) < 3) {
      iVar30 = 0;
    }
    else {
      iVar30 = uVar13 << 8;
    }
    *(int *)(iVar31 + 0xc) = *(int *)(iVar31 + 0xc) + iVar30;
    *(int *)(iVar31 + 0x10) = *(int *)(iVar39 + 0x1e8) * iVar30 + *(int *)(iVar31 + 0x10);
    uVar35 = *(uint *)(iVar39 + 0x1d4);
    break;
  case 0xdf:
    uVar21 = *(uint *)(iVar39 + 0x1d4) & ~(1 << (uVar20 & 0xff));
    *(uint *)(iVar39 + 0x1d4) = uVar21;
    if (uVar21 != 0) goto LAB_000a03c0;
    *(undefined1 *)(iVar39 + 0x13) = 1;
    goto LAB_000a04b6;
  case 0xe0:
    uVar21 = (uint)*(byte *)(iVar30 + iVar39 + (uint)(bVar12 >> 6) + 0x27);
    *(char *)(iVar39 + uVar21 + 0x47) = (char)(uVar13 & 0x3f);
    FUN_000971c0(iVar39,0xfffffffe,uVar21,uVar13 & 0x3f);
    uVar35 = *(uint *)(iVar39 + 0x1d4);
    break;
  case 0xe1:
    uVar21 = (uint)*(byte *)(iVar30 + iVar39 + (uint)(bVar12 >> 6) + 0x27);
    iVar30 = iVar39 + uVar21;
    *(byte *)(iVar30 + 0x57) = bVar12 & 0x3f;
    if ((*(char *)(iVar39 + 0xc) != '\x01') && (*(char *)(iVar30 + 0x37) != '\x01'))
    goto switchD_000a0722_caseD_b2;
LAB_000a1938:
    FUN_000971c0(iVar39,0xfffffffe,uVar21,*(undefined1 *)(iVar30 + 0x47));
    uVar35 = *(uint *)(iVar39 + 0x1d4);
    break;
  case 0xe2:
    *(byte *)((uint)*(byte *)(iVar30 + iVar39 + (uint)(bVar12 >> 6) + 0x27) + iVar39 + 0x67) =
         bVar12 & 0x3f;
    uVar35 = *(uint *)(iVar39 + 0x1d4);
    break;
  case 0xe3:
    uVar13 = uVar13 & 0x3f;
    bVar9 = (char)uVar13 * '\x02';
    uVar21 = (uint)*(byte *)(iVar30 + iVar39 + (uint)(bVar12 >> 6) + 0x27);
    *(char *)(iVar39 + uVar21 + 0x77) = (char)uVar13;
    bVar12 = *(byte *)(iVar39 + 3);
    if ((bVar12 != 0x40) && (bVar9 = bVar12, uVar13 != 0x20)) {
      bVar9 = *(byte *)(iVar28 + (uint)(bVar12 >> 2) * 0x20 + (uVar13 >> 1) + 0xa10b6);
    }
    *(byte *)(iVar39 + uVar21 * 0x14 + 0x6b48) = bVar9;
    uVar35 = *(uint *)(iVar39 + 0x1d4);
    break;
  case 0xe4:
    uVar21 = (uint)*(byte *)(iVar30 + iVar39 + (uint)(bVar12 >> 6) + 0x27);
    *(char *)(iVar39 + uVar21 + 0x87) = (char)(uVar13 & 0x3f);
    iVar30 = *(int *)(iVar43 + (uint)*(byte *)(iVar39 + uVar21 + 0x97) * 4 + 0xa03fa) +
             (uVar13 & 0x3f) * 2;
    if (-1 < iVar30) goto LAB_000a1a0a;
LAB_000a1bee:
    uVar16 = 0;
    goto LAB_000a1a18;
  case 0xe5:
    if (((bVar12 & 0x30) != 0) || (*(byte *)(iVar39 + 0xc) < 2)) goto switchD_000a0722_caseD_b2;
    *(byte *)(iVar39 + (iVar30 + (uint)(bVar12 >> 6) & 0xff) + 0x27) = bVar12 & 0xf;
    uVar35 = *(uint *)(iVar39 + 0x1d4);
    break;
  case 0xe6:
    iVar30 = (uint)*(byte *)(iVar30 + iVar39 + (uint)(bVar12 >> 6) + 0x27) + iVar39;
    bVar12 = *(char *)(iVar30 + 0x67) + ((bVar12 & 0x3f) - 0x20);
    local_68 = *(byte *)(iVar39 + 0x7d3c) & 0x40;
    if ((-1 < (char)bVar12) && (local_68 = bVar12, '?' < (char)bVar12)) {
      local_68 = 0x3f;
    }
    *(byte *)(iVar30 + 0x67) = local_68;
    uVar35 = *(uint *)(iVar39 + 0x1d4);
    break;
  case 0xe7:
    if (0x18 < (uVar13 & 0x3f)) goto switchD_000a0722_caseD_b2;
    *(char *)(iVar39 + (uint)*(byte *)(iVar30 + iVar39 + (uint)(bVar12 >> 6) + 0x27) * 0x14 + 0x6b47
             ) = (char)(uVar13 & 0x3f);
    uVar35 = *(uint *)(iVar39 + 0x1d4);
    break;
  case 0xe8:
    uVar21 = (uint)*(byte *)(iVar30 + iVar39 + (uint)(bVar12 >> 6) + 0x27);
    iVar30 = *(int *)(iVar14 + (uVar13 & 0x3f) * 4 + 0xa03f8);
    *(char *)(iVar39 + uVar21 + 0x97) = (char)(uVar13 & 0x3f);
    iVar30 = iVar30 + (uint)*(byte *)(iVar39 + uVar21 + 0x87) * 2;
    if (iVar30 < 0) goto LAB_000a1bee;
LAB_000a1a0a:
    if (iVar30 < 0x80) {
      uVar16 = (undefined2)(iVar30 << 7);
    }
    else {
      uVar16 = 0x3f80;
    }
LAB_000a1a18:
    iVar30 = iVar39 + uVar21 * 0x14;
    *(undefined2 *)(iVar30 + 0x6b52) = uVar16;
    *(undefined1 *)(iVar30 + 0x6b46) = *(undefined1 *)(iVar30 + 0x6b47);
    uVar35 = *(uint *)(iVar39 + 0x1d4);
    break;
  case 0xe9:
    *(byte *)((uint)*(byte *)(iVar30 + iVar39 + (uint)(bVar12 >> 6) + 0x27) + iVar39 + 0x97) =
         bVar12 & 0x3f;
    uVar35 = *(uint *)(iVar39 + 0x1d4);
    break;
  case 0xea:
    uVar21 = (uint)*(byte *)(iVar39 + iVar30 + (uint)(bVar12 >> 6) + 0x27);
    iVar30 = (uVar13 & 0x3f) << 1;
    if (uVar21 == *(byte *)(iVar39 + 0x7c75)) {
      iVar30 = 0;
    }
    *(undefined1 *)(iVar39 + uVar21 * 0x14 + 0x6b45) = *(undefined1 *)(iVar30 + iVar2 + 0xa0ffe);
    uVar35 = *(uint *)(iVar39 + 0x1d4);
  }
LAB_000a03bc:
  if (uVar35 == 0) goto LAB_000a04b6;
LAB_000a03c0:
  iVar30 = FUN_0009707c(iVar10,uVar20);
  if ((iVar30 < 0) || (*(uint *)(iVar10 + iVar36) < *(int *)(iVar31 + 8) + 3U)) {
    uVar21 = *(uint *)(iVar39 + 0x1d4) & ~(1 << (uVar20 & 0xff));
    *(uint *)(iVar39 + 0x1d4) = uVar21;
  }
  else {
    uVar21 = (uint)*(byte *)(*(int *)(iVar31 + 4) + *(int *)(iVar31 + 8));
    *(uint *)(iVar31 + 0xc) = *(int *)(iVar31 + 0xc) + uVar21;
    *(uint *)(iVar31 + 0x10) = *(int *)(iVar39 + 0x1e8) * uVar21 + *(int *)(iVar31 + 0x10);
    uVar21 = *(uint *)(iVar39 + 0x1d4);
  }
  if (uVar21 == 0) goto LAB_000a04b6;
  uVar21 = (uint)*(byte *)(iVar39 + 0x7c74);
  goto LAB_000a0230;
}

