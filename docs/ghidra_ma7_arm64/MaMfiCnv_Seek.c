/* MaMfiCnv_Seek @ 001c2130 30460B */


/* YAMAHA::MaMfiCnv_Seek(_MACNV_SEQ_INFO*, unsigned int, _MACNV_SEEK_INFO*) */

void YAMAHA::MaMfiCnv_Seek(_MACNV_SEQ_INFO *param_1,uint param_2,_MACNV_SEEK_INFO *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulong *puVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  char cVar10;
  uint uVar11;
  uint *puVar12;
  ulong uVar13;
  _MACNV_SEEK_INFO *p_Var14;
  undefined8 uVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  uint uVar22;
  int iVar23;
  byte *pbVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined1 *puVar27;
  uint uVar28;
  char *pcVar29;
  long lVar30;
  long lVar31;
  undefined2 uVar32;
  char *pcVar33;
  int iVar34;
  uint uVar35;
  undefined1 uVar36;
  int iVar37;
  char cVar38;
  int *piVar39;
  byte bVar40;
  long lVar41;
  char *pcVar42;
  int iVar43;
  _MACNV_SEEK_INFO _Var44;
  byte bVar45;
  
  lVar20 = *(long *)PTR___stack_chk_guard_00567868;
  if (((param_1 == (_MACNV_SEQ_INFO *)0x0) ||
      (pcVar42 = *(char **)(param_1 + 8), param_3 == (_MACNV_SEEK_INFO *)0x0)) ||
     (pcVar42 == (char *)0x0)) {
LAB_001c6d18:
    uVar15 = 0xfffffffe;
    goto LAB_001c4adc;
  }
  if (*pcVar42 != '\x01') {
    uVar15 = 0xffffffff;
    goto LAB_001c4adc;
  }
  if ((*(int *)(pcVar42 + 0x857c) >> 10 < (int)param_2) ||
     (*(int *)(pcVar42 + 0x1fc) >> 10 < (int)param_2)) goto LAB_001c6d18;
  pcVar42[0x1b7] = '\0';
  pcVar42[0x1b8] = '\0';
  pcVar42[0x13] = '\0';
  param_3[4] = (_MACNV_SEEK_INFO)0x40;
  p_Var14 = param_3 + 10;
  *param_3 = (_MACNV_SEEK_INFO)0x64;
  *(undefined2 *)(param_3 + 2) = 0x2000;
  param_3[5] = (_MACNV_SEEK_INFO)0x40;
  param_3[6] = (_MACNV_SEEK_INFO)0x0;
  param_3[7] = (_MACNV_SEEK_INFO)0x40;
  iVar43 = 0;
  do {
    if (iVar43 == 9) {
      param_3[0xf4] = (_MACNV_SEEK_INFO)0x80;
    }
    else {
      *p_Var14 = (_MACNV_SEEK_INFO)0x0;
    }
    p_Var14 = p_Var14 + 0x1a;
    iVar23 = iVar43 + 1;
    param_3[(long)iVar43 * 0x1a + 0xb] = (_MACNV_SEEK_INFO)0x0;
    param_3[(long)iVar43 * 0x1a + 0xc] = (_MACNV_SEEK_INFO)0x0;
    param_3[(long)iVar43 * 0x1a + 0xd] = (_MACNV_SEEK_INFO)0x3f;
    param_3[(long)iVar43 * 0x1a + 0x18] = (_MACNV_SEEK_INFO)0x40;
    param_3[(long)iVar43 * 0x1a + 0xf] = (_MACNV_SEEK_INFO)0x7f;
    param_3[(long)iVar43 * 0x1a + 0x10] = (_MACNV_SEEK_INFO)0x0;
    *(undefined2 *)(param_3 + (long)iVar43 * 0x1a + 0x1c) = 0x2000;
    param_3[(long)iVar43 * 0x1a + 0x11] = (_MACNV_SEEK_INFO)0x2;
    param_3[(long)iVar43 * 0x1a + 0x12] = (_MACNV_SEEK_INFO)0x1;
    param_3[(long)iVar43 * 0x1a + 0x13] = (_MACNV_SEEK_INFO)0x40;
    *(undefined2 *)(param_3 + (long)iVar43 * 0x1a + 0x1e) = 0x2000;
    param_3[(long)iVar43 * 0x1a + 0x14] = (_MACNV_SEEK_INFO)0x40;
    param_3[(long)iVar43 * 0x1a + 0x15] = (_MACNV_SEEK_INFO)0x40;
    param_3[(long)iVar43 * 0x1a + 0x16] = (_MACNV_SEEK_INFO)0x7f;
    param_3[(long)iVar43 * 0x1a + 0x17] = (_MACNV_SEEK_INFO)0x28;
    param_3[(long)iVar43 * 0x1a + 0x19] = (_MACNV_SEEK_INFO)0x0;
    *(undefined2 *)(param_3 + (long)iVar43 * 0x1a + 0x20) = 0x40;
    param_3[(long)iVar43 * 0x1a + 8] = (_MACNV_SEEK_INFO)0x0;
    param_3[(long)iVar43 * 0x1a + 9] = (_MACNV_SEEK_INFO)0x0;
    param_3[(long)iVar43 * 0x1a + 0x1a] = (_MACNV_SEEK_INFO)0x0;
    param_3[(long)iVar43 * 0x1a + 0x1b] = (_MACNV_SEEK_INFO)0x0;
    iVar43 = iVar23;
  } while (iVar23 != 0x20);
  *(undefined4 *)(param_3 + 0x348) = 0;
  *(undefined4 *)(param_3 + 0x34c) = 0;
  *(undefined4 *)(param_3 + 0x350) = 0;
  *(undefined4 *)(param_3 + 0x358) = 0x31ce;
  *(undefined4 *)(param_3 + 0x354) = 0;
  *(undefined4 *)(param_3 + 0x35c) = 1;
  *(undefined4 *)(param_3 + 0x360) = 0;
  *(undefined4 *)(param_3 + 0x36c) = 0x31ce;
  *(undefined4 *)(param_3 + 0x364) = 0;
  *(undefined4 *)(param_3 + 0x368) = 0;
  *(undefined4 *)(param_3 + 0x370) = 2;
  *(undefined4 *)(param_3 + 0x374) = 0;
  *(undefined4 *)(param_3 + 0x380) = 0x31ce;
  *(undefined4 *)(param_3 + 0x378) = 0;
  *(undefined4 *)(param_3 + 0x37c) = 0;
  *(undefined4 *)(param_3 + 900) = 3;
  *(undefined4 *)(param_3 + 0x388) = 0;
  *(undefined4 *)(param_3 + 0x394) = 0x31ce;
  *(undefined4 *)(param_3 + 0x38c) = 0;
  *(undefined4 *)(param_3 + 0x390) = 0;
  pcVar42[0x75f0] = '\0';
  pcVar42[0x75f1] = '\0';
  pcVar42[0x75f2] = '\0';
  pcVar42[0x75f3] = '\0';
  pcVar42[0x7710] = '\0';
  pcVar42[0x7711] = '\0';
  pcVar42[0x7712] = '\0';
  pcVar42[0x7713] = '\0';
  pcVar42[0x7830] = '\0';
  pcVar42[0x7831] = '\0';
  pcVar42[0x7832] = '\0';
  pcVar42[0x7833] = '\0';
  pcVar42[0x7950] = '\0';
  pcVar42[0x7951] = '\0';
  pcVar42[0x7952] = '\0';
  pcVar42[0x7953] = '\0';
  pcVar42[0x7a70] = '\0';
  pcVar42[0x7a71] = '\0';
  pcVar42[0x7a72] = '\0';
  pcVar42[0x7a73] = '\0';
  pcVar42[0x7b90] = '\0';
  pcVar42[0x7b91] = '\0';
  pcVar42[0x7b92] = '\0';
  pcVar42[0x7b93] = '\0';
  pcVar42[0x7cb0] = '\0';
  pcVar42[0x7cb1] = '\0';
  pcVar42[0x7cb2] = '\0';
  pcVar42[0x7cb3] = '\0';
  pcVar42[0x7dd0] = '\0';
  pcVar42[0x7dd1] = '\0';
  pcVar42[0x7dd2] = '\0';
  pcVar42[0x7dd3] = '\0';
  if (param_2 == 0) {
    uVar17 = *(uint *)(pcVar42 + 0xb0c);
    *(uint *)(pcVar42 + 0xb10) = uVar17;
    uVar25 = uVar17 + 1 & 0x3ff;
    uVar11 = uVar25 + 1 & 0x3ff;
    uVar19 = uVar11 + 1 & 0x3ff;
    pcVar29 = pcVar42 + (ulong)uVar17 * 0x14 + 0xb50;
    pcVar29[0] = '\0';
    pcVar29[1] = '\0';
    pcVar29[2] = '\0';
    pcVar29[3] = '\0';
    pcVar29 = pcVar42 + (ulong)uVar17 * 0x14 + 0xb54;
    pcVar29[0] = -1;
    pcVar29[1] = '\0';
    pcVar29[2] = '\0';
    pcVar29[3] = '\0';
    pcVar29 = pcVar42 + (ulong)uVar17 * 0x14 + 0xb58;
    pcVar29[0] = -0x80;
    pcVar29[1] = '\0';
    pcVar29[2] = '\0';
    pcVar29[3] = '\0';
    pcVar29 = pcVar42 + (ulong)uVar17 * 0x14 + 0xb5c;
    pcVar29[0] = -0x80;
    pcVar29[1] = '\0';
    pcVar29[2] = '\0';
    pcVar29[3] = '\0';
    pcVar29 = pcVar42 + (ulong)uVar17 * 0x14 + 0xb60;
    pcVar29[0] = '\0';
    pcVar29[1] = '\0';
    pcVar29[2] = '\0';
    pcVar29[3] = '\0';
    *(uint *)(pcVar42 + 0xb14) = uVar25;
    pcVar29 = pcVar42 + (ulong)uVar25 * 0x14 + 0xb50;
    pcVar29[0] = '\x01';
    pcVar29[1] = '\0';
    pcVar29[2] = '\0';
    pcVar29[3] = '\0';
    pcVar29 = pcVar42 + (ulong)uVar25 * 0x14 + 0xb54;
    pcVar29[0] = -1;
    pcVar29[1] = '\0';
    pcVar29[2] = '\0';
    pcVar29[3] = '\0';
    pcVar29 = pcVar42 + (ulong)uVar25 * 0x14 + 0xb58;
    pcVar29[0] = -0x80;
    pcVar29[1] = '\0';
    pcVar29[2] = '\0';
    pcVar29[3] = '\0';
    pcVar29 = pcVar42 + (ulong)uVar25 * 0x14 + 0xb5c;
    pcVar29[0] = -0x80;
    pcVar29[1] = '\0';
    pcVar29[2] = '\0';
    pcVar29[3] = '\0';
    pcVar29 = pcVar42 + (ulong)uVar25 * 0x14 + 0xb60;
    pcVar29[0] = '\0';
    pcVar29[1] = '\0';
    pcVar29[2] = '\0';
    pcVar29[3] = '\0';
    *(uint *)(pcVar42 + 0xb18) = uVar11;
    pcVar29 = pcVar42 + (ulong)uVar11 * 0x14 + 0xb50;
    pcVar29[0] = '\x02';
    pcVar29[1] = '\0';
    pcVar29[2] = '\0';
    pcVar29[3] = '\0';
    pcVar29 = pcVar42 + (ulong)uVar11 * 0x14 + 0xb54;
    pcVar29[0] = -1;
    pcVar29[1] = '\0';
    pcVar29[2] = '\0';
    pcVar29[3] = '\0';
    pcVar29 = pcVar42 + (ulong)uVar11 * 0x14 + 0xb58;
    pcVar29[0] = -0x80;
    pcVar29[1] = '\0';
    pcVar29[2] = '\0';
    pcVar29[3] = '\0';
    pcVar29 = pcVar42 + (ulong)uVar11 * 0x14 + 0xb5c;
    pcVar29[0] = -0x80;
    pcVar29[1] = '\0';
    pcVar29[2] = '\0';
    pcVar29[3] = '\0';
    pcVar29 = pcVar42 + (ulong)uVar11 * 0x14 + 0xb60;
    pcVar29[0] = '\0';
    pcVar29[1] = '\0';
    pcVar29[2] = '\0';
    pcVar29[3] = '\0';
    *(uint *)(pcVar42 + 0xb1c) = uVar19;
    pcVar29 = pcVar42 + (ulong)uVar19 * 0x14 + 0xb50;
    pcVar29[0] = '\x03';
    pcVar29[1] = '\0';
    pcVar29[2] = '\0';
    pcVar29[3] = '\0';
    pcVar29 = pcVar42 + (ulong)uVar19 * 0x14 + 0xb54;
    pcVar29[0] = -1;
    pcVar29[1] = '\0';
    pcVar29[2] = '\0';
    pcVar29[3] = '\0';
    pcVar29 = pcVar42 + (ulong)uVar19 * 0x14 + 0xb58;
    pcVar29[0] = -0x80;
    pcVar29[1] = '\0';
    pcVar29[2] = '\0';
    pcVar29[3] = '\0';
    pcVar29 = pcVar42 + (ulong)uVar19 * 0x14 + 0xb5c;
    pcVar29[0] = -0x80;
    pcVar29[1] = '\0';
    pcVar29[2] = '\0';
    pcVar29[3] = '\0';
    pcVar29 = pcVar42 + (ulong)uVar19 * 0x14 + 0xb60;
    pcVar29[0] = '\0';
    pcVar29[1] = '\0';
    pcVar29[2] = '\0';
    pcVar29[3] = '\0';
    *(uint *)(pcVar42 + 0xb0c) = uVar19 + 1 & 0x3ff;
  }
  lVar41 = *(long *)(param_1 + 8);
  *(undefined8 *)(lVar41 + 0x5b50) = 0;
  *(long *)(lVar41 + 0x6198) = lVar41 + 0x61b0;
  *(long *)(lVar41 + 0x61c8) = lVar41 + 0x61e0;
  *(long *)(lVar41 + 0x6180) = lVar41 + 0x6198;
  *(long *)(lVar41 + 0x61f8) = lVar41 + 0x6210;
  *(long *)(lVar41 + 0x61b0) = lVar41 + 0x61c8;
  *(long *)(lVar41 + 0x6228) = lVar41 + 0x6240;
  *(long *)(lVar41 + 0x61e0) = lVar41 + 0x61f8;
  *(long *)(lVar41 + 0x6258) = lVar41 + 0x6270;
  *(long *)(lVar41 + 0x6210) = lVar41 + 0x6228;
  *(long *)(lVar41 + 0x6288) = lVar41 + 0x62a0;
  *(long *)(lVar41 + 0x6240) = lVar41 + 0x6258;
  *(long *)(lVar41 + 0x62b8) = lVar41 + 0x62d0;
  *(long *)(lVar41 + 0x6270) = lVar41 + 0x6288;
  *(long *)(lVar41 + 0x62e8) = lVar41 + 0x6300;
  *(long *)(lVar41 + 0x62a0) = lVar41 + 0x62b8;
  *(long *)(lVar41 + 0x6318) = lVar41 + 0x6330;
  *(long *)(lVar41 + 0x62d0) = lVar41 + 0x62e8;
  *(long *)(lVar41 + 0x6348) = lVar41 + 0x6360;
  *(long *)(lVar41 + 0x6300) = lVar41 + 0x6318;
  *(long *)(lVar41 + 0x6330) = lVar41 + 0x6348;
  *(long *)(lVar41 + 0x5d60) = lVar41 + 0x5d78;
  *(long *)(lVar41 + 0x6360) = lVar41 + 0x6378;
  *(undefined8 *)(lVar41 + 0x5b58) = 0;
  *(long *)(lVar41 + 0x5d30) = lVar41 + 0x5d48;
  *(undefined4 *)(lVar41 + 0x204) = 0;
  *(undefined4 *)(lVar41 + 0x208) = 0;
  *(undefined4 *)(lVar41 + 0x1f8) = 0;
  *(undefined4 *)(lVar41 + 0x200) = 0;
  *(undefined4 *)(lVar41 + 0x1f0) = 0;
  *(undefined4 *)(lVar41 + 500) = 0;
  *(undefined4 *)(lVar41 + 0x1e0) = 0;
  *(long *)(lVar41 + 0x6378) = lVar41 + 0x6390;
  *(long *)(lVar41 + 0x5cb8) = lVar41 + 0x5cd0;
  *(long *)(lVar41 + 0x5c70) = lVar41 + 0x5c88;
  *(long *)(lVar41 + 0x63d8) = lVar41 + 0x63f0;
  *(long *)(lVar41 + 0x5c40) = lVar41 + 0x5c58;
  *(long *)(lVar41 + 0x5c58) = lVar41 + 0x5c70;
  *(long *)(lVar41 + 0x63f0) = lVar41 + 0x6408;
  *(long *)(lVar41 + 0x5c10) = lVar41 + 0x5c28;
  *(long *)(lVar41 + 0x5c28) = lVar41 + 0x5c40;
  *(long *)(lVar41 + 0x6408) = lVar41 + 0x6420;
  *(long *)(lVar41 + 0x5be0) = lVar41 + 0x5bf8;
  *(long *)(lVar41 + 0x5bf8) = lVar41 + 0x5c10;
  *(long *)(lVar41 + 0x6420) = lVar41 + 0x6438;
  *(long *)(lVar41 + 0x5bb0) = lVar41 + 0x5bc8;
  *(long *)(lVar41 + 0x5bc8) = lVar41 + 0x5be0;
  *(long *)(lVar41 + 0x6438) = lVar41 + 0x6450;
  *(long *)(lVar41 + 0x5b80) = lVar41 + 0x5b98;
  *(long *)(lVar41 + 0x5b98) = lVar41 + 0x5bb0;
  *(long *)(lVar41 + 0x6450) = lVar41 + 0x6468;
  *(long *)(lVar41 + 0x5b60) = lVar41 + 0x5b68;
  *(long *)(lVar41 + 0x5d00) = lVar41 + 0x5d18;
  *(long *)(lVar41 + 0x6468) = lVar41 + 0x6480;
  *(long *)(lVar41 + 0x6390) = lVar41 + 0x63a8;
  *(long *)(lVar41 + 0x6498) = lVar41 + 0x64b0;
  *(long *)(lVar41 + 0x5cd0) = lVar41 + 0x5ce8;
  *(long *)(lVar41 + 0x64b0) = lVar41 + 0x64c8;
  *(long *)(lVar41 + 0x63a8) = lVar41 + 0x63c0;
  *(long *)(lVar41 + 0x64c8) = lVar41 + 0x64e0;
  *(long *)(lVar41 + 0x5ca0) = lVar41 + 0x5cb8;
  *(long *)(lVar41 + 0x64e0) = lVar41 + 0x64f8;
  *(long *)(lVar41 + 0x63c0) = lVar41 + 0x63d8;
  *(long *)(lVar41 + 0x64f8) = lVar41 + 0x6510;
  *(long *)(lVar41 + 0x5b68) = lVar41 + 0x5b80;
  *(long *)(lVar41 + 0x5c88) = lVar41 + 0x5ca0;
  *(long *)(lVar41 + 0x6528) = lVar41 + 0x6540;
  *(long *)(lVar41 + 24000) = lVar41 + 0x5dd8;
  *(long *)(lVar41 + 0x5dd8) = lVar41 + 0x5df0;
  *(long *)(lVar41 + 0x5df0) = lVar41 + 0x5e08;
  *(long *)(lVar41 + 0x5e08) = lVar41 + 0x5e20;
  *(long *)(lVar41 + 0x5e20) = lVar41 + 0x5e38;
  *(long *)(lVar41 + 0x5e38) = lVar41 + 0x5e50;
  *(long *)(lVar41 + 0x5e50) = lVar41 + 0x5e68;
  *(long *)(lVar41 + 0x5e68) = lVar41 + 0x5e80;
  *(long *)(lVar41 + 0x5e80) = lVar41 + 0x5e98;
  *(long *)(lVar41 + 0x5e98) = lVar41 + 0x5eb0;
  *(long *)(lVar41 + 0x5eb0) = lVar41 + 0x5ec8;
  *(long *)(lVar41 + 0x5ec8) = lVar41 + 0x5ee0;
  *(long *)(lVar41 + 0x5ee0) = lVar41 + 0x5ef8;
  *(long *)(lVar41 + 0x5ef8) = lVar41 + 0x5f10;
  *(long *)(lVar41 + 0x5f10) = lVar41 + 0x5f28;
  *(long *)(lVar41 + 0x5f28) = lVar41 + 0x5f40;
  *(long *)(lVar41 + 0x5f40) = lVar41 + 0x5f58;
  *(long *)(lVar41 + 0x5f58) = lVar41 + 0x5f70;
  *(long *)(lVar41 + 0x5ce8) = lVar41 + 0x5d00;
  *(long *)(lVar41 + 0x5d18) = lVar41 + 0x5d30;
  *(long *)(lVar41 + 0x5d48) = lVar41 + 0x5d60;
  *(long *)(lVar41 + 0x5d78) = lVar41 + 0x5d90;
  *(long *)(lVar41 + 0x5d90) = lVar41 + 0x5da8;
  *(long *)(lVar41 + 0x5da8) = lVar41 + 24000;
  *(long *)(lVar41 + 0x5f70) = lVar41 + 0x5f88;
  *(long *)(lVar41 + 0x5f88) = lVar41 + 0x5fa0;
  *(long *)(lVar41 + 0x5fa0) = lVar41 + 0x5fb8;
  *(long *)(lVar41 + 0x5fb8) = lVar41 + 0x5fd0;
  *(long *)(lVar41 + 0x5fd0) = lVar41 + 0x5fe8;
  *(long *)(lVar41 + 0x5fe8) = lVar41 + 0x6000;
  *(long *)(lVar41 + 0x67e0) = lVar41 + 0x67f8;
  *(long *)(lVar41 + 0x67f8) = lVar41 + 0x6810;
  *(long *)(lVar41 + 0x6000) = lVar41 + 0x6018;
  *(long *)(lVar41 + 0x6018) = lVar41 + 0x6030;
  *(long *)(lVar41 + 0x69a8) = lVar41 + 0x69c0;
  *(long *)(lVar41 + 0x69d8) = lVar41 + 0x69f0;
  *(long *)(lVar41 + 0x6a08) = lVar41 + 0x6a20;
  *(long *)(lVar41 + 0x6a38) = lVar41 + 0x6a50;
  *(long *)(lVar41 + 0x6a50) = lVar41 + 0x6a68;
  *(long *)(lVar41 + 0x6a68) = lVar41 + 0x6a80;
  *(long *)(lVar41 + 0x6a80) = lVar41 + 0x6a98;
  *(long *)(lVar41 + 0x6a98) = lVar41 + 0x6ab0;
  *(long *)(lVar41 + 0x6ab0) = lVar41 + 0x6ac8;
  *(long *)(lVar41 + 0x6ac8) = lVar41 + 0x6ae0;
  *(long *)(lVar41 + 0x6ae0) = lVar41 + 0x6af8;
  *(long *)(lVar41 + 0x6af8) = lVar41 + 0x6b10;
  *(long *)(lVar41 + 0x6990) = lVar41 + 0x69a8;
  *(long *)(lVar41 + 0x6b10) = lVar41 + 0x6b28;
  *(long *)(lVar41 + 0x69c0) = lVar41 + 0x69d8;
  *(long *)(lVar41 + 0x6b28) = lVar41 + 0x6b40;
  *(long *)(lVar41 + 0x6030) = lVar41 + 0x6048;
  *(long *)(lVar41 + 0x6048) = lVar41 + 0x6060;
  *(long *)(lVar41 + 0x6060) = lVar41 + 0x6078;
  *(long *)(lVar41 + 0x6078) = lVar41 + 0x6090;
  *(long *)(lVar41 + 0x6090) = lVar41 + 0x60a8;
  *(long *)(lVar41 + 0x60a8) = lVar41 + 0x60c0;
  *(long *)(lVar41 + 0x60c0) = lVar41 + 0x60d8;
  *(long *)(lVar41 + 0x60d8) = lVar41 + 0x60f0;
  *(long *)(lVar41 + 0x60f0) = lVar41 + 0x6108;
  *(long *)(lVar41 + 0x6108) = lVar41 + 0x6120;
  *(long *)(lVar41 + 0x6120) = lVar41 + 0x6138;
  *(long *)(lVar41 + 0x6138) = lVar41 + 0x6150;
  *(long *)(lVar41 + 0x6150) = lVar41 + 0x6168;
  *(long *)(lVar41 + 0x6168) = lVar41 + 0x6180;
  *(long *)(lVar41 + 0x69f0) = lVar41 + 0x6a08;
  *(long *)(lVar41 + 0x6b40) = lVar41 + 0x6b58;
  *(long *)(lVar41 + 0x6a20) = lVar41 + 0x6a38;
  *(long *)(lVar41 + 0x6b58) = lVar41 + 0x6b70;
  *(long *)(lVar41 + 0x6b70) = lVar41 + 0x6b88;
  *(long *)(lVar41 + 0x6b88) = lVar41 + 0x6ba0;
  *(long *)(lVar41 + 0x6ba0) = lVar41 + 0x6bb8;
  *(long *)(lVar41 + 0x6bb8) = lVar41 + 0x6bd0;
  *(long *)(lVar41 + 0x6bd0) = lVar41 + 0x6be8;
  *(long *)(lVar41 + 0x6be8) = lVar41 + 0x6c00;
  *(long *)(lVar41 + 0x6c00) = lVar41 + 0x6c18;
  *(long *)(lVar41 + 0x6c18) = lVar41 + 0x6c30;
  *(long *)(lVar41 + 0x6c30) = lVar41 + 0x6c48;
  *(long *)(lVar41 + 0x6c48) = lVar41 + 0x6c60;
  *(long *)(lVar41 + 0x6c60) = lVar41 + 0x6c78;
  *(long *)(lVar41 + 0x6c78) = lVar41 + 0x6c90;
  *(long *)(lVar41 + 0x6c90) = lVar41 + 0x6ca8;
  *(long *)(lVar41 + 0x6cc0) = lVar41 + 0x6cd8;
  *(long *)(lVar41 + 0x6cd8) = lVar41 + 0x6cf0;
  *(long *)(lVar41 + 0x6cf0) = lVar41 + 0x6d08;
  *(long *)(lVar41 + 0x6d08) = lVar41 + 0x6d20;
  *(long *)(lVar41 + 0x6d20) = lVar41 + 0x6d38;
  *(long *)(lVar41 + 0x6d50) = lVar41 + 0x6d68;
  *(long *)(lVar41 + 0x6540) = lVar41 + 0x6558;
  *(long *)(lVar41 + 0x6558) = lVar41 + 0x6570;
  *(long *)(lVar41 + 0x6570) = lVar41 + 0x6588;
  *(long *)(lVar41 + 0x6588) = lVar41 + 0x65a0;
  *(long *)(lVar41 + 0x65a0) = lVar41 + 0x65b8;
  *(long *)(lVar41 + 0x65b8) = lVar41 + 0x65d0;
  *(long *)(lVar41 + 0x65d0) = lVar41 + 0x65e8;
  *(long *)(lVar41 + 0x65e8) = lVar41 + 0x6600;
  *(long *)(lVar41 + 0x6600) = lVar41 + 0x6618;
  *(long *)(lVar41 + 0x6618) = lVar41 + 0x6630;
  *(long *)(lVar41 + 0x6630) = lVar41 + 0x6648;
  *(long *)(lVar41 + 0x6648) = lVar41 + 0x6660;
  *(long *)(lVar41 + 0x6480) = lVar41 + 0x6498;
  *(long *)(lVar41 + 0x6510) = lVar41 + 0x6528;
  *(long *)(lVar41 + 0x6660) = lVar41 + 0x6678;
  *(long *)(lVar41 + 0x6678) = lVar41 + 0x6690;
  *(long *)(lVar41 + 0x6690) = lVar41 + 0x66a8;
  *(long *)(lVar41 + 0x66a8) = lVar41 + 0x66c0;
  *(long *)(lVar41 + 0x66c0) = lVar41 + 0x66d8;
  *(long *)(lVar41 + 0x66f0) = lVar41 + 0x6708;
  *(long *)(lVar41 + 0x6708) = lVar41 + 0x6720;
  *(long *)(lVar41 + 0x6720) = lVar41 + 0x6738;
  *(long *)(lVar41 + 0x6738) = lVar41 + 0x6750;
  *(long *)(lVar41 + 0x6750) = lVar41 + 0x6768;
  *(long *)(lVar41 + 0x6768) = lVar41 + 0x6780;
  *(long *)(lVar41 + 0x66d8) = lVar41 + 0x66f0;
  *(long *)(lVar41 + 0x6780) = lVar41 + 0x6798;
  *(long *)(lVar41 + 0x6798) = lVar41 + 0x67b0;
  *(long *)(lVar41 + 0x67b0) = lVar41 + 0x67c8;
  *(long *)(lVar41 + 0x67c8) = lVar41 + 0x67e0;
  *(long *)(lVar41 + 0x6fc0) = lVar41 + 0x6fd8;
  *(long *)(lVar41 + 0x6fd8) = lVar41 + 0x6ff0;
  *(long *)(lVar41 + 0x6ff0) = lVar41 + 0x7008;
  *(long *)(lVar41 + 0x7008) = lVar41 + 0x7020;
  *(long *)(lVar41 + 0x7020) = lVar41 + 0x7038;
  *(long *)(lVar41 + 0x6810) = lVar41 + 0x6828;
  *(long *)(lVar41 + 0x6828) = lVar41 + 0x6840;
  *(long *)(lVar41 + 0x6840) = lVar41 + 0x6858;
  *(long *)(lVar41 + 0x6858) = lVar41 + 0x6870;
  *(long *)(lVar41 + 0x6870) = lVar41 + 0x6888;
  *(long *)(lVar41 + 0x6888) = lVar41 + 0x68a0;
  *(long *)(lVar41 + 0x68a0) = lVar41 + 0x68b8;
  *(long *)(lVar41 + 0x68b8) = lVar41 + 0x68d0;
  *(long *)(lVar41 + 0x68d0) = lVar41 + 0x68e8;
  *(long *)(lVar41 + 0x68e8) = lVar41 + 0x6900;
  *(long *)(lVar41 + 0x6900) = lVar41 + 0x6918;
  *(long *)(lVar41 + 0x6918) = lVar41 + 0x6930;
  *(long *)(lVar41 + 0x6930) = lVar41 + 0x6948;
  *(long *)(lVar41 + 0x7158) = lVar41 + 0x7170;
  *(long *)(lVar41 + 0x6948) = lVar41 + 0x6960;
  *(long *)(lVar41 + 0x6960) = lVar41 + 27000;
  *(long *)(lVar41 + 0x7170) = lVar41 + 0x7188;
  *(long *)(lVar41 + 27000) = lVar41 + 0x6990;
  *(long *)(lVar41 + 0x7218) = lVar41 + 0x7230;
  *(long *)(lVar41 + 0x6d68) = lVar41 + 0x6d80;
  *(long *)(lVar41 + 0x6d80) = lVar41 + 0x6d98;
  *(long *)(lVar41 + 0x6d98) = lVar41 + 0x6db0;
  *(long *)(lVar41 + 0x6db0) = lVar41 + 0x6dc8;
  *(long *)(lVar41 + 0x6dc8) = lVar41 + 0x6de0;
  *(long *)(lVar41 + 0x6de0) = lVar41 + 0x6df8;
  *(long *)(lVar41 + 0x6df8) = lVar41 + 0x6e10;
  *(long *)(lVar41 + 0x6e10) = lVar41 + 0x6e28;
  *(long *)(lVar41 + 0x7188) = lVar41 + 0x71a0;
  *(long *)(lVar41 + 0x71a0) = lVar41 + 0x71b8;
  *(long *)(lVar41 + 0x71b8) = lVar41 + 0x71d0;
  *(long *)(lVar41 + 0x71d0) = lVar41 + 0x71e8;
  *(long *)(lVar41 + 0x71e8) = lVar41 + 0x7200;
  *(long *)(lVar41 + 0x7200) = lVar41 + 0x7218;
  *(long *)(lVar41 + 0x7230) = lVar41 + 0x7248;
  *(long *)(lVar41 + 0x7248) = lVar41 + 0x7260;
  *(long *)(lVar41 + 0x7260) = lVar41 + 0x7278;
  *(long *)(lVar41 + 0x7278) = lVar41 + 0x7290;
  *(long *)(lVar41 + 0x7290) = lVar41 + 0x72a8;
  *(long *)(lVar41 + 0x72a8) = lVar41 + 0x72c0;
  *(long *)(lVar41 + 0x72c0) = lVar41 + 0x72d8;
  *(long *)(lVar41 + 0x72d8) = lVar41 + 0x72f0;
  *(long *)(lVar41 + 0x72f0) = lVar41 + 0x7308;
  puVar1 = (undefined1 *)(lVar41 + 0x736b);
  *(long *)(lVar41 + 0x7308) = lVar41 + 0x7320;
  *(long *)(lVar41 + 0x7320) = lVar41 + 0x7338;
  *(long *)(lVar41 + 0x6ca8) = lVar41 + 0x6cc0;
  *(long *)(lVar41 + 0x6d38) = lVar41 + 0x6d50;
  *(long *)(lVar41 + 0x6e28) = lVar41 + 0x6e40;
  *(long *)(lVar41 + 0x6e40) = lVar41 + 0x6e58;
  *(long *)(lVar41 + 0x6e58) = lVar41 + 0x6e70;
  *(long *)(lVar41 + 0x6e70) = lVar41 + 0x6e88;
  *(long *)(lVar41 + 0x6e88) = lVar41 + 0x6ea0;
  *(long *)(lVar41 + 0x6ea0) = lVar41 + 0x6eb8;
  *(long *)(lVar41 + 0x6eb8) = lVar41 + 0x6ed0;
  *(long *)(lVar41 + 0x6ed0) = lVar41 + 0x6ee8;
  *(long *)(lVar41 + 0x6ee8) = lVar41 + 0x6f00;
  *(long *)(lVar41 + 0x6f00) = lVar41 + 0x6f18;
  *(long *)(lVar41 + 0x6f18) = lVar41 + 0x6f30;
  *(long *)(lVar41 + 0x6f30) = lVar41 + 0x6f48;
  *(long *)(lVar41 + 0x6f48) = lVar41 + 0x6f60;
  *(long *)(lVar41 + 0x6f60) = lVar41 + 0x6f78;
  *(long *)(lVar41 + 0x6f78) = lVar41 + 0x6f90;
  *(long *)(lVar41 + 0x6f90) = lVar41 + 0x6fa8;
  *(long *)(lVar41 + 0x6fa8) = lVar41 + 0x6fc0;
  *(long *)(lVar41 + 0x7038) = lVar41 + 0x7050;
  *(long *)(lVar41 + 0x7050) = lVar41 + 0x7068;
  *(long *)(lVar41 + 0x7068) = lVar41 + 0x7080;
  *(long *)(lVar41 + 0x7080) = lVar41 + 0x7098;
  *(long *)(lVar41 + 0x7098) = lVar41 + 0x70b0;
  *(long *)(lVar41 + 0x70b0) = lVar41 + 0x70c8;
  *(long *)(lVar41 + 0x70c8) = lVar41 + 0x70e0;
  *(long *)(lVar41 + 0x70e0) = lVar41 + 0x70f8;
  *(long *)(lVar41 + 0x70f8) = lVar41 + 0x7110;
  *(long *)(lVar41 + 0x7110) = lVar41 + 0x7128;
  *(long *)(lVar41 + 0x7128) = lVar41 + 0x7140;
  *(long *)(lVar41 + 0x7140) = lVar41 + 0x7158;
  *(long *)(lVar41 + 0x7338) = lVar41 + 0x7350;
  *(undefined4 *)(lVar41 + 0x1e8) = 0x30;
  *(undefined4 *)(lVar41 + 0x1e4) = 0x7d;
  *(undefined4 *)(lVar41 + 0x1ec) = 0x2800;
  *(undefined8 *)(lVar41 + 0x7350) = 0;
  *(undefined4 *)(lVar41 + 0x1d8) = 0;
  *(undefined4 *)(lVar41 + 0x20c) = 0x18;
  *(undefined4 *)(lVar41 + 0x210) = 0x18;
  *(undefined4 *)(lVar41 + 0x214) = 0x18;
  *(undefined1 *)(lVar41 + 0x2a) = 3;
  *(undefined4 *)(lVar41 + 0x218) = 0x18;
  *(undefined1 *)(lVar41 + 0x2b) = 4;
  *(undefined4 *)(lVar41 + 0x21c) = 0x18;
  *(undefined1 *)(lVar41 + 0x2c) = 5;
  *(undefined4 *)(lVar41 + 0x220) = 0x18;
  *(undefined1 *)(lVar41 + 0x2d) = 6;
  *(undefined4 *)(lVar41 + 0x224) = 0x18;
  *(undefined1 *)(lVar41 + 0x28) = 1;
  *(undefined1 *)(lVar41 + 8) = 0;
  *(undefined1 *)(lVar41 + 9) = 0x40;
  *(undefined1 *)(lVar41 + 4) = 0x7f;
  *(undefined1 *)(lVar41 + 3) = 0x40;
  *(undefined1 *)(lVar41 + 0x37) = 0;
  *(undefined1 *)(lVar41 + 0x27) = 0;
  *(undefined4 *)(lVar41 + 0x24c) = 2;
  *(undefined1 *)(lVar41 + 0x38) = 0;
  *(undefined4 *)(lVar41 + 0x250) = 2;
  *(undefined1 *)(lVar41 + 0x39) = 0;
  *(undefined1 *)(lVar41 + 0x29) = 2;
  *(undefined4 *)(lVar41 + 0x254) = 2;
  *(undefined1 *)(lVar41 + 0x3a) = 0;
  *(undefined4 *)(lVar41 + 600) = 2;
  *(undefined1 *)(lVar41 + 0x3b) = 0;
  *(undefined4 *)(lVar41 + 0x25c) = 2;
  *(undefined1 *)(lVar41 + 0x3c) = 0;
  *(undefined4 *)(lVar41 + 0x260) = 2;
  *(undefined1 *)(lVar41 + 0x3d) = 0;
  *(undefined4 *)(lVar41 + 0x264) = 2;
  *(undefined1 *)(lVar41 + 0x3e) = 0;
  *(undefined1 *)(lVar41 + 0x2e) = 7;
  *(undefined4 *)(lVar41 + 0x228) = 0x18;
  *(undefined1 *)(lVar41 + 0x2f) = 8;
  *(undefined4 *)(lVar41 + 0x22c) = 0x18;
  *(bool *)(lVar41 + 0x40) = 1 < *(byte *)(lVar41 + 0xc);
  *(undefined4 *)(lVar41 + 0x230) = 0x18;
  *(undefined4 *)(lVar41 + 0x234) = 0x18;
  *(undefined4 *)(lVar41 + 0x238) = 0x18;
  *(undefined4 *)(lVar41 + 0x23c) = 0x18;
  *(undefined4 *)(lVar41 + 0x240) = 0x18;
  *(undefined1 *)(lVar41 + 0x35) = 0xe;
  *(undefined4 *)(lVar41 + 0x244) = 0x18;
  *(undefined4 *)(lVar41 + 0x248) = 0x18;
  *(undefined1 *)(lVar41 + 0x30) = 9;
  *(undefined1 *)(lVar41 + 0x31) = 10;
  *(undefined1 *)(lVar41 + 0x32) = 0xb;
  *(undefined1 *)(lVar41 + 0x33) = 0xc;
  *(undefined1 *)(lVar41 + 0x34) = 0xd;
  *(undefined1 *)(lVar41 + 0x36) = 0xf;
  *(undefined4 *)(lVar41 + 0x268) = 2;
  *(undefined1 *)(lVar41 + 0x3f) = 0;
  *(undefined4 *)(lVar41 + 0x26c) = 2;
  *(undefined4 *)(lVar41 + 0x270) = 2;
  *(undefined1 *)(lVar41 + 0x41) = 0;
  *(undefined4 *)(lVar41 + 0x274) = 2;
  *(undefined1 *)(lVar41 + 0x42) = 0;
  *(undefined4 *)(lVar41 + 0x278) = 2;
  *(undefined1 *)(lVar41 + 0x43) = 0;
  *(undefined4 *)(lVar41 + 0x27c) = 2;
  *(undefined1 *)(lVar41 + 0x44) = 0;
  *(undefined4 *)(lVar41 + 0x280) = 2;
  *(undefined1 *)(lVar41 + 0x45) = 0;
  *(undefined4 *)(lVar41 + 0x284) = 2;
  *(undefined1 *)(lVar41 + 0x46) = 0;
  *(undefined4 *)(lVar41 + 0x288) = 2;
  *(undefined8 *)(lVar41 + 0x47) = 0;
  *(undefined8 *)(lVar41 + 0x4f) = 0;
  memset((void *)(lVar41 + 0x57),2,0x10);
  iVar23 = param_2 << 10;
  memset((void *)(lVar41 + 0x67),0x3f,0x10);
  memset((void *)(lVar41 + 0x77),0x20,0x10);
  memset((void *)(lVar41 + 0xa7),0x7f,0x10);
  memset((void *)(lVar41 + 0x87),0x20,0x10);
  memset((void *)(lVar41 + 0x97),0x20,0x10);
  memset((void *)(lVar41 + 0x157),0x3f,0x20);
  memset((void *)(lVar41 + 0x177),0x3f,0x20);
  *(undefined8 *)(lVar41 + 0xb7) = 0xffffffffffffffff;
  *(undefined8 *)(lVar41 + 0xbf) = 0xffffffffffffffff;
  *(undefined8 *)(lVar41 + 199) = 0xffffffffffffffff;
  *(undefined8 *)(lVar41 + 0xcf) = 0xffffffffffffffff;
  *(undefined8 *)(lVar41 + 0xd7) = 0;
  *(undefined8 *)(lVar41 + 0xdf) = 0;
  *(undefined8 *)(lVar41 + 0xe7) = 0;
  *(undefined8 *)(lVar41 + 0xef) = 0;
  iVar43 = 0;
  *(undefined1 *)(lVar41 + 2) = 100;
  *(undefined1 *)(lVar41 + 6) = 0x40;
  *(undefined2 *)(lVar41 + 0x1be) = 0x2000;
  puVar27 = puVar1;
  do {
    if (iVar43 == 9) {
      *(undefined1 *)(lVar41 + 0x741f) = 0x80;
    }
    else {
      *puVar27 = 0;
    }
    iVar16 = iVar43 + 1;
    lVar31 = lVar41 + (long)iVar43 * 0x14;
    *(undefined1 *)(lVar31 + 0x736a) = 0;
    *(undefined1 *)(lVar31 + 0x736d) = 0;
    *(undefined1 *)(lVar31 + 0x736c) = 0x3f;
    *(undefined1 *)(lVar31 + 0x7370) = 0x40;
    *(undefined1 *)(lVar31 + 0x7371) = 0x7f;
    *(undefined1 *)(lVar31 + 0x7372) = 0;
    *(undefined2 *)(lVar31 + 0x737a) = 0x2000;
    *(undefined1 *)(lVar31 + 0x736e) = 2;
    *(undefined1 *)(lVar31 + 0x736f) = 2;
    *(undefined1 *)(lVar31 + 0x7373) = 1;
    *(undefined1 *)(lVar31 + 0x7374) = 0x40;
    *(undefined2 *)(lVar31 + 0x737c) = 0x2000;
    *(undefined1 *)(lVar31 + 0x7376) = 0x40;
    *(undefined1 *)(lVar31 + 0x7375) = 0x40;
    *(undefined1 *)(lVar31 + 0x7377) = 0x7f;
    *(undefined1 *)(lVar31 + 0x7378) = 0x28;
    *(undefined1 *)(lVar31 + 0x7379) = 0;
    if (iVar16 == 9) {
      *(undefined1 *)(lVar41 + 0x741f) = 0x80;
    }
    else {
      puVar27[0x14] = 0;
    }
    iVar43 = iVar43 + 2;
    puVar27 = puVar27 + 0x28;
    lVar31 = lVar41 + (long)iVar16 * 0x14;
    *(undefined1 *)(lVar31 + 0x736a) = 0;
    *(undefined1 *)(lVar31 + 0x736d) = 0;
    *(undefined1 *)(lVar31 + 0x736c) = 0x3f;
    *(undefined1 *)(lVar31 + 0x7370) = 0x40;
    *(undefined1 *)(lVar31 + 0x7371) = 0x7f;
    *(undefined1 *)(lVar31 + 0x7372) = 0;
    *(undefined2 *)(lVar31 + 0x737a) = 0x2000;
    *(undefined1 *)(lVar31 + 0x736e) = 2;
    *(undefined1 *)(lVar31 + 0x736f) = 2;
    *(undefined1 *)(lVar31 + 0x7373) = 1;
    *(undefined1 *)(lVar31 + 0x7374) = 0x40;
    *(undefined2 *)(lVar31 + 0x737c) = 0x2000;
    *(undefined1 *)(lVar31 + 0x7376) = 0x40;
    *(undefined1 *)(lVar31 + 0x7375) = 0x40;
    *(undefined1 *)(lVar31 + 0x7377) = 0x7f;
    *(undefined1 *)(lVar31 + 0x7378) = 0x28;
    *(undefined1 *)(lVar31 + 0x7379) = 0;
  } while (iVar43 != 0x20);
  bVar40 = *(byte *)(lVar41 + 0x1b7);
  uVar25 = (uint)bVar40;
  if (bVar40 < 0x88) {
    *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
    lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
    *(undefined4 *)(lVar31 + 4) = 0x10;
    *(undefined4 *)(lVar31 + 8) = 0;
    *(undefined4 *)(lVar31 + 0xc) = 0;
    *(undefined8 *)(lVar31 + 0x14) = 0;
    *(undefined4 *)(lVar31 + 0x1c) = 0;
    uVar25 = (uint)*(byte *)(lVar41 + 0x1b7);
    if ((*(char *)(lVar41 + 0x8649) == '\0') && (uVar25 < 0x88)) {
      *(byte *)(lVar41 + 0x1b7) = *(byte *)(lVar41 + 0x1b7) + 1;
      lVar31 = lVar41 + (long)(int)uVar25 * 0x14 + 0x7ac0;
      *(undefined4 *)(lVar31 + 4) = 0x2f;
      *(undefined4 *)(lVar31 + 8) = 0;
      *(undefined4 *)(lVar31 + 0xc) = 0;
      *(undefined8 *)(lVar31 + 0x14) = 0x7f;
      *(undefined4 *)(lVar31 + 0x1c) = 0;
      uVar25 = (uint)*(byte *)(lVar41 + 0x1b7);
    }
  }
  uVar11 = 1;
  pbVar24 = (byte *)(lVar41 + 0x8649);
  while( true ) {
    if (uVar25 < 0x88) {
      *(char *)(lVar41 + 0x1b7) = (char)uVar25 + '\x01';
      lVar31 = lVar41 + (long)(int)uVar25 * 0x14 + 0x7ac0;
      *(undefined4 *)(lVar31 + 4) = 0x10;
      *(undefined4 *)(lVar31 + 8) = 0;
      *(uint *)(lVar31 + 0xc) = uVar11;
      *(undefined8 *)(lVar31 + 0x14) = 0;
      *(undefined4 *)(lVar31 + 0x1c) = 0;
      if ((uVar11 == *pbVar24) && (bVar40 = *(byte *)(lVar41 + 0x1b7), bVar40 < 0x88)) {
        *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
        lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
        *(undefined4 *)(lVar31 + 4) = 0x2f;
        *(undefined4 *)(lVar31 + 8) = 0;
        *(undefined4 *)(lVar31 + 0xc) = 0;
        *(undefined8 *)(lVar31 + 0x14) = 0x7f;
        *(undefined4 *)(lVar31 + 0x1c) = 0;
      }
    }
    if (uVar11 == 0x1f) break;
    bVar40 = *(byte *)(lVar41 + 0x1b7);
    if (bVar40 < 0x88) {
      *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
      lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
      *(undefined4 *)(lVar31 + 4) = 0x10;
      *(undefined4 *)(lVar31 + 8) = 0;
      *(uint *)(lVar31 + 0xc) = uVar11 + 1;
      *(undefined8 *)(lVar31 + 0x14) = 0;
      *(undefined4 *)(lVar31 + 0x1c) = 0;
      if ((uVar11 + 1 == (uint)*pbVar24) && (bVar40 = *(byte *)(lVar41 + 0x1b7), bVar40 < 0x88)) {
        *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
        lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
        *(undefined4 *)(lVar31 + 4) = 0x2f;
        *(undefined4 *)(lVar31 + 8) = 0;
        *(undefined4 *)(lVar31 + 0xc) = 0;
        *(undefined8 *)(lVar31 + 0x14) = 0x7f;
        *(undefined4 *)(lVar31 + 0x1c) = 0;
      }
    }
    bVar40 = *(byte *)(lVar41 + 0x1b7);
    if (bVar40 < 0x88) {
      *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
      lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
      *(undefined4 *)(lVar31 + 4) = 0x10;
      *(undefined4 *)(lVar31 + 8) = 0;
      *(uint *)(lVar31 + 0xc) = uVar11 + 2;
      *(undefined8 *)(lVar31 + 0x14) = 0;
      *(undefined4 *)(lVar31 + 0x1c) = 0;
      if ((uVar11 + 2 == (uint)*pbVar24) && (bVar40 = *(byte *)(lVar41 + 0x1b7), bVar40 < 0x88)) {
        *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
        lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
        *(undefined4 *)(lVar31 + 4) = 0x2f;
        *(undefined4 *)(lVar31 + 8) = 0;
        *(undefined4 *)(lVar31 + 0xc) = 0;
        *(undefined8 *)(lVar31 + 0x14) = 0x7f;
        *(undefined4 *)(lVar31 + 0x1c) = 0;
      }
    }
    bVar40 = *(byte *)(lVar41 + 0x1b7);
    if (bVar40 < 0x88) {
      *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
      lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
      *(undefined4 *)(lVar31 + 4) = 0x10;
      *(undefined4 *)(lVar31 + 8) = 0;
      *(uint *)(lVar31 + 0xc) = uVar11 + 3;
      *(undefined8 *)(lVar31 + 0x14) = 0;
      *(undefined4 *)(lVar31 + 0x1c) = 0;
      if ((uVar11 + 3 == (uint)*pbVar24) && (bVar40 = *(byte *)(lVar41 + 0x1b7), bVar40 < 0x88)) {
        *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
        lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
        *(undefined4 *)(lVar31 + 4) = 0x2f;
        *(undefined4 *)(lVar31 + 8) = 0;
        *(undefined4 *)(lVar31 + 0xc) = 0;
        *(undefined8 *)(lVar31 + 0x14) = 0x7f;
        *(undefined4 *)(lVar31 + 0x1c) = 0;
      }
    }
    bVar40 = *(byte *)(lVar41 + 0x1b7);
    if (bVar40 < 0x88) {
      *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
      lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
      *(undefined4 *)(lVar31 + 4) = 0x10;
      *(undefined4 *)(lVar31 + 8) = 0;
      *(uint *)(lVar31 + 0xc) = uVar11 + 4;
      *(undefined8 *)(lVar31 + 0x14) = 0;
      *(undefined4 *)(lVar31 + 0x1c) = 0;
      if ((uVar11 + 4 == (uint)*pbVar24) && (bVar40 = *(byte *)(lVar41 + 0x1b7), bVar40 < 0x88)) {
        *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
        lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
        *(undefined4 *)(lVar31 + 4) = 0x2f;
        *(undefined4 *)(lVar31 + 8) = 0;
        *(undefined4 *)(lVar31 + 0xc) = 0;
        *(undefined8 *)(lVar31 + 0x14) = 0x7f;
        *(undefined4 *)(lVar31 + 0x1c) = 0;
      }
    }
    uVar25 = (uint)*(byte *)(lVar41 + 0x1b7);
    uVar11 = uVar11 + 5;
  }
  iVar43 = 0x20;
  uVar25 = (uint)-(lVar41 + 0xf7) & 0xf;
  if ((-(lVar41 + 0xf7) & 0xfU) == 0) {
    iVar37 = 2;
    uVar21 = 0;
    iVar16 = iVar43;
    iVar34 = iVar43;
  }
  else {
    *(undefined1 *)(lVar41 + 0xf7) = 0;
    *(undefined1 *)(lVar41 + 0x117) = 0;
    *(byte *)(lVar41 + 0x86cb) = *(byte *)(lVar41 + 0x86eb) & 0x1f;
    uVar11 = uVar25;
    if (uVar25 == 1) {
      iVar43 = 0x1f;
    }
    else {
      *(undefined1 *)(lVar41 + 0xf8) = 0;
      *(undefined1 *)(lVar41 + 0x118) = 0;
      *(byte *)(lVar41 + 0x86cc) = *(byte *)(lVar41 + 0x86ec) & 0x1f;
      if (uVar25 == 2) {
        iVar43 = 0x1e;
      }
      else {
        *(undefined1 *)(lVar41 + 0xf9) = 0;
        *(undefined1 *)(lVar41 + 0x119) = 0;
        *(byte *)(lVar41 + 0x86cd) = *(byte *)(lVar41 + 0x86ed) & 0x1f;
        if (uVar25 == 3) {
          iVar43 = 0x1d;
        }
        else {
          *(undefined1 *)(lVar41 + 0xfa) = 0;
          *(undefined1 *)(lVar41 + 0x11a) = 0;
          *(byte *)(lVar41 + 0x86ce) = *(byte *)(lVar41 + 0x86ee) & 0x1f;
          if (uVar25 == 4) {
            iVar43 = 0x1c;
          }
          else {
            *(undefined1 *)(lVar41 + 0xfb) = 0;
            *(undefined1 *)(lVar41 + 0x11b) = 0;
            *(byte *)(lVar41 + 0x86cf) = *(byte *)(lVar41 + 0x86ef) & 0x1f;
            if (uVar25 == 5) {
              iVar43 = 0x1b;
            }
            else {
              *(undefined1 *)(lVar41 + 0xfc) = 0;
              *(undefined1 *)(lVar41 + 0x11c) = 0;
              *(byte *)(lVar41 + 0x86d0) = *(byte *)(lVar41 + 0x86f0) & 0x1f;
              if (uVar25 == 6) {
                iVar43 = 0x1a;
              }
              else {
                *(undefined1 *)(lVar41 + 0xfd) = 0;
                *(undefined1 *)(lVar41 + 0x11d) = 0;
                *(byte *)(lVar41 + 0x86d1) = *(byte *)(lVar41 + 0x86f1) & 0x1f;
                if (uVar25 == 7) {
                  iVar43 = 0x19;
                }
                else {
                  *(undefined1 *)(lVar41 + 0xfe) = 0;
                  *(undefined1 *)(lVar41 + 0x11e) = 0;
                  *(byte *)(lVar41 + 0x86d2) = *(byte *)(lVar41 + 0x86f2) & 0x1f;
                  if (uVar25 == 8) {
                    iVar43 = 0x18;
                    uVar11 = 8;
                  }
                  else {
                    *(undefined1 *)(lVar41 + 0xff) = 0;
                    *(undefined1 *)(lVar41 + 0x11f) = 0;
                    *(byte *)(lVar41 + 0x86d3) = *(byte *)(lVar41 + 0x86f3) & 0x1f;
                    if (uVar25 == 9) {
                      iVar43 = 0x17;
                    }
                    else {
                      *(undefined1 *)(lVar41 + 0x100) = 0;
                      *(undefined1 *)(lVar41 + 0x120) = 0;
                      *(byte *)(lVar41 + 0x86d4) = *(byte *)(lVar41 + 0x86f4) & 0x1f;
                      if (uVar25 == 10) {
                        iVar43 = 0x16;
                      }
                      else {
                        *(undefined1 *)(lVar41 + 0x101) = 0;
                        *(undefined1 *)(lVar41 + 0x121) = 0;
                        *(byte *)(lVar41 + 0x86d5) = *(byte *)(lVar41 + 0x86f5) & 0x1f;
                        if (uVar25 == 0xb) {
                          iVar43 = 0x15;
                        }
                        else {
                          *(undefined1 *)(lVar41 + 0x102) = 0;
                          *(undefined1 *)(lVar41 + 0x122) = 0;
                          *(byte *)(lVar41 + 0x86d6) = *(byte *)(lVar41 + 0x86f6) & 0x1f;
                          if (uVar25 == 0xc) {
                            iVar43 = 0x14;
                          }
                          else {
                            *(undefined1 *)(lVar41 + 0x103) = 0;
                            *(undefined1 *)(lVar41 + 0x123) = 0;
                            *(byte *)(lVar41 + 0x86d7) = *(byte *)(lVar41 + 0x86f7) & 0x1f;
                            if (uVar25 == 0xd) {
                              iVar43 = 0x13;
                            }
                            else {
                              *(undefined1 *)(lVar41 + 0x104) = 0;
                              *(undefined1 *)(lVar41 + 0x124) = 0;
                              *(byte *)(lVar41 + 0x86d8) = *(byte *)(lVar41 + 0x86f8) & 0x1f;
                              if (uVar25 == 0xf) {
                                *(undefined1 *)(lVar41 + 0x105) = 0;
                                iVar43 = 0x11;
                                *(undefined1 *)(lVar41 + 0x125) = 0;
                                *(byte *)(lVar41 + 0x86d9) = *(byte *)(lVar41 + 0x86f9) & 0x1f;
                              }
                              else {
                                iVar43 = 0x12;
                                uVar11 = 0xe;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar21 = (ulong)uVar25;
    iVar37 = 1;
    iVar16 = 0x20 - uVar25;
    iVar34 = 0x10;
    uVar25 = uVar11;
  }
  puVar2 = (undefined8 *)(lVar41 + uVar21 + 0xf7);
  puVar3 = (undefined8 *)(lVar41 + uVar21 + 0x117);
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar4 = (ulong *)(lVar41 + uVar21 + 0x86eb);
  puVar3[1] = 0;
  *puVar3 = 0;
  puVar5 = (ulong *)(lVar41 + uVar21 + 0x86cb);
  uVar21 = *puVar4;
  puVar5[1] = puVar4[1] & 0x1f1f1f1f1f1f1f1f;
  *puVar5 = uVar21 & 0x1f1f1f1f1f1f1f1f;
  if (iVar37 == 2) {
    puVar2[3] = 0;
    puVar2[2] = 0;
    puVar3[3] = 0;
    puVar3[2] = 0;
    uVar21 = puVar4[2];
    puVar5[3] = puVar4[3] & 0x1f1f1f1f1f1f1f1f;
    puVar5[2] = uVar21 & 0x1f1f1f1f1f1f1f1f;
  }
  uVar25 = uVar25 + iVar34;
  iVar43 = iVar43 - iVar34;
  if (iVar34 != iVar16) {
    lVar31 = lVar41 + (ulong)uVar25;
    *(undefined1 *)(lVar31 + 0xf7) = 0;
    *(undefined1 *)(lVar31 + 0x117) = 0;
    *(byte *)(lVar31 + 0x86cb) = *(byte *)(lVar31 + 0x86eb) & 0x1f;
    if (iVar43 != 1) {
      lVar31 = lVar41 + (ulong)(uVar25 + 1);
      *(undefined1 *)(lVar31 + 0xf7) = 0;
      *(undefined1 *)(lVar31 + 0x117) = 0;
      *(byte *)(lVar31 + 0x86cb) = *(byte *)(lVar31 + 0x86eb) & 0x1f;
      if (iVar43 != 2) {
        lVar31 = lVar41 + (ulong)(uVar25 + 2);
        *(undefined1 *)(lVar31 + 0xf7) = 0;
        *(undefined1 *)(lVar31 + 0x117) = 0;
        *(byte *)(lVar31 + 0x86cb) = *(byte *)(lVar31 + 0x86eb) & 0x1f;
        if (iVar43 != 3) {
          lVar31 = lVar41 + (ulong)(uVar25 + 3);
          *(undefined1 *)(lVar31 + 0xf7) = 0;
          *(undefined1 *)(lVar31 + 0x117) = 0;
          *(byte *)(lVar31 + 0x86cb) = *(byte *)(lVar31 + 0x86eb) & 0x1f;
          if (iVar43 != 4) {
            lVar31 = lVar41 + (ulong)(uVar25 + 4);
            *(undefined1 *)(lVar31 + 0xf7) = 0;
            *(undefined1 *)(lVar31 + 0x117) = 0;
            *(byte *)(lVar31 + 0x86cb) = *(byte *)(lVar31 + 0x86eb) & 0x1f;
            if (iVar43 != 5) {
              lVar31 = lVar41 + (ulong)(uVar25 + 5);
              *(undefined1 *)(lVar31 + 0xf7) = 0;
              *(undefined1 *)(lVar31 + 0x117) = 0;
              *(byte *)(lVar31 + 0x86cb) = *(byte *)(lVar31 + 0x86eb) & 0x1f;
              if (iVar43 != 6) {
                lVar31 = lVar41 + (ulong)(uVar25 + 6);
                *(undefined1 *)(lVar31 + 0xf7) = 0;
                *(undefined1 *)(lVar31 + 0x117) = 0;
                *(byte *)(lVar31 + 0x86cb) = *(byte *)(lVar31 + 0x86eb) & 0x1f;
                if (iVar43 != 7) {
                  lVar31 = lVar41 + (ulong)(uVar25 + 7);
                  *(undefined1 *)(lVar31 + 0xf7) = 0;
                  *(undefined1 *)(lVar31 + 0x117) = 0;
                  *(byte *)(lVar31 + 0x86cb) = *(byte *)(lVar31 + 0x86eb) & 0x1f;
                  if (iVar43 != 8) {
                    lVar31 = lVar41 + (ulong)(uVar25 + 8);
                    *(undefined1 *)(lVar31 + 0xf7) = 0;
                    *(undefined1 *)(lVar31 + 0x117) = 0;
                    *(byte *)(lVar31 + 0x86cb) = *(byte *)(lVar31 + 0x86eb) & 0x1f;
                    if (iVar43 != 9) {
                      lVar31 = lVar41 + (ulong)(uVar25 + 9);
                      *(undefined1 *)(lVar31 + 0xf7) = 0;
                      *(undefined1 *)(lVar31 + 0x117) = 0;
                      *(byte *)(lVar31 + 0x86cb) = *(byte *)(lVar31 + 0x86eb) & 0x1f;
                      if (iVar43 != 10) {
                        lVar31 = lVar41 + (ulong)(uVar25 + 10);
                        *(undefined1 *)(lVar31 + 0xf7) = 0;
                        *(undefined1 *)(lVar31 + 0x117) = 0;
                        *(byte *)(lVar31 + 0x86cb) = *(byte *)(lVar31 + 0x86eb) & 0x1f;
                        if (iVar43 != 0xb) {
                          lVar31 = lVar41 + (ulong)(uVar25 + 0xb);
                          *(undefined1 *)(lVar31 + 0xf7) = 0;
                          *(undefined1 *)(lVar31 + 0x117) = 0;
                          *(byte *)(lVar31 + 0x86cb) = *(byte *)(lVar31 + 0x86eb) & 0x1f;
                          if (iVar43 != 0xc) {
                            lVar31 = lVar41 + (ulong)(uVar25 + 0xc);
                            *(undefined1 *)(lVar31 + 0xf7) = 0;
                            *(undefined1 *)(lVar31 + 0x117) = 0;
                            *(byte *)(lVar31 + 0x86cb) = *(byte *)(lVar31 + 0x86eb) & 0x1f;
                            if (iVar43 != 0xd) {
                              lVar31 = lVar41 + (ulong)(uVar25 + 0xd);
                              *(undefined1 *)(lVar31 + 0xf7) = 0;
                              *(undefined1 *)(lVar31 + 0x117) = 0;
                              *(byte *)(lVar31 + 0x86cb) = *(byte *)(lVar31 + 0x86eb) & 0x1f;
                              if (iVar43 != 0xe) {
                                lVar31 = lVar41 + (ulong)(uVar25 + 0xe);
                                *(undefined1 *)(lVar31 + 0xf7) = 0;
                                *(undefined1 *)(lVar31 + 0x117) = 0;
                                *(byte *)(lVar31 + 0x86cb) = *(byte *)(lVar31 + 0x86eb) & 0x1f;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  uVar36 = 0x60;
  if (*(char *)(lVar41 + 0xc) != '\x01') {
    uVar36 = 0x7f;
  }
  *(undefined1 *)(lVar41 + 5) = uVar36;
  *(undefined8 *)(lVar41 + 0x137) = 0xffffffffffffffff;
  *(undefined8 *)(lVar41 + 0x13f) = 0xffffffffffffffff;
  *(undefined8 *)(lVar41 + 0x147) = 0xffffffffffffffff;
  *(undefined8 *)(lVar41 + 0x14f) = 0xffffffffffffffff;
  bVar40 = *(byte *)(lVar41 + 0x8648);
  if (bVar40 != 0) {
    bVar45 = bVar40 - 1 & 3;
    if (2 < *(uint *)(lVar41 + 0x8f18)) {
      *(uint *)(lVar41 + 0x1d8) = *(uint *)(lVar41 + 0x1d8) | 1;
      *(undefined4 *)(lVar41 + 0x8f28) = 0;
      bVar9 = **(byte **)(lVar41 + 0x8f20);
      *(uint *)(lVar41 + 0x8f2c) = (uint)bVar9;
      *(uint *)(lVar41 + 0x8f30) = ((uint)bVar9 + (uint)bVar9 * 4) * 0x800;
    }
    uVar25 = 1;
    puVar12 = (uint *)(lVar41 + 0x8f38);
    if (1 < bVar40) {
      if (bVar45 != 0) {
        if (bVar45 != 1) {
          if (bVar45 != 2) {
            if (2 < *puVar12) {
              *(uint *)(lVar41 + 0x1d8) = *(uint *)(lVar41 + 0x1d8) | 2;
              *(undefined4 *)(lVar41 + 0x8f48) = 0;
              bVar45 = **(byte **)(lVar41 + 0x8f40);
              *(uint *)(lVar41 + 0x8f4c) = (uint)bVar45;
              *(uint *)(lVar41 + 0x8f50) = ((uint)bVar45 + (uint)bVar45 * 4) * 0x800;
            }
            uVar25 = 2;
            puVar12 = (uint *)(lVar41 + 0x8f58);
          }
          if (2 < *puVar12) {
            *(uint *)(lVar41 + 0x1d8) = *(uint *)(lVar41 + 0x1d8) | 1 << (ulong)uVar25;
            puVar12[4] = 0;
            bVar45 = **(byte **)(puVar12 + 2);
            puVar12[5] = (uint)bVar45;
            puVar12[6] = ((uint)bVar45 + (uint)bVar45 * 4) * 0x800;
          }
          uVar25 = uVar25 + 1;
          puVar12 = puVar12 + 8;
        }
        if (2 < *puVar12) {
          *(uint *)(lVar41 + 0x1d8) = *(uint *)(lVar41 + 0x1d8) | 1 << (ulong)uVar25;
          puVar12[4] = 0;
          bVar45 = **(byte **)(puVar12 + 2);
          puVar12[5] = (uint)bVar45;
          puVar12[6] = ((uint)bVar45 + (uint)bVar45 * 4) * 0x800;
        }
        uVar25 = uVar25 + 1;
        puVar12 = puVar12 + 8;
        if (bVar40 <= uVar25) goto LAB_001c3934;
      }
      do {
        if (2 < *puVar12) {
          *(uint *)(lVar41 + 0x1d8) = *(uint *)(lVar41 + 0x1d8) | 1 << (ulong)(uVar25 & 0x1f);
          puVar12[4] = 0;
          bVar45 = **(byte **)(puVar12 + 2);
          puVar12[5] = (uint)bVar45;
          puVar12[6] = ((uint)bVar45 + (uint)bVar45 * 4) * 0x800;
        }
        if (2 < puVar12[8]) {
          *(uint *)(lVar41 + 0x1d8) = *(uint *)(lVar41 + 0x1d8) | 1 << (ulong)(uVar25 + 1 & 0x1f);
          puVar12[0xc] = 0;
          bVar45 = **(byte **)(puVar12 + 10);
          puVar12[0xd] = (uint)bVar45;
          puVar12[0xe] = ((uint)bVar45 + (uint)bVar45 * 4) * 0x800;
        }
        if (2 < puVar12[0x10]) {
          *(uint *)(lVar41 + 0x1d8) = *(uint *)(lVar41 + 0x1d8) | 1 << (ulong)(uVar25 + 2 & 0x1f);
          puVar12[0x14] = 0;
          bVar45 = **(byte **)(puVar12 + 0x12);
          puVar12[0x15] = (uint)bVar45;
          puVar12[0x16] = ((uint)bVar45 + (uint)bVar45 * 4) * 0x800;
        }
        if (2 < puVar12[0x18]) {
          *(uint *)(lVar41 + 0x1d8) = *(uint *)(lVar41 + 0x1d8) | 1 << (ulong)(uVar25 + 3 & 0x1f);
          puVar12[0x1c] = 0;
          bVar45 = **(byte **)(puVar12 + 0x1a);
          puVar12[0x1d] = (uint)bVar45;
          puVar12[0x1e] = ((uint)bVar45 + (uint)bVar45 * 4) * 0x800;
        }
        uVar25 = uVar25 + 4;
        puVar12 = puVar12 + 0x20;
      } while ((uVar25 & 0xff) < (uint)bVar40);
    }
  }
LAB_001c3934:
  uVar25 = (uint)bVar40;
  if ((*(int *)(lVar41 + 0x8578) <= *(int *)(lVar41 + 0x1e0)) &&
     (*(uint *)(lVar41 + 0x1d4) <= *(uint *)(lVar41 + 0x8f28))) goto LAB_001c3e90;
  *(undefined4 *)(lVar41 + 0x1f0) = 0x7fffffff;
  uVar11 = (uint)bVar40;
  if (bVar40 == 0) {
    uVar19 = 0;
  }
  else {
    uVar17 = *(uint *)(lVar41 + 0x1d8);
    uVar19 = 0;
    bVar40 = bVar40 - 1 & 3;
    if (((uVar17 & 1) != 0) && (*(int *)(lVar41 + 0x8f30) < 0x7fffffff)) {
      *(int *)(lVar41 + 0x1f0) = *(int *)(lVar41 + 0x8f30);
    }
    piVar18 = (int *)(lVar41 + 0x8f50);
    uVar28 = 1;
    if (1 < uVar25) {
      if (bVar40 != 0) {
        if (bVar40 != 1) {
          if (bVar40 != 2) {
            if (((uVar17 >> 1 & 1) != 0) && (*(int *)(lVar41 + 0x8f50) < *(int *)(lVar41 + 0x1f0)))
            {
              *(int *)(lVar41 + 0x1f0) = *(int *)(lVar41 + 0x8f50);
              uVar19 = 1;
            }
            piVar18 = (int *)(lVar41 + 0x8f70);
            uVar28 = 2;
          }
          if (((1 << (ulong)uVar28 & uVar17) != 0) && (*piVar18 < *(int *)(lVar41 + 0x1f0))) {
            *(int *)(lVar41 + 0x1f0) = *piVar18;
            uVar19 = uVar28;
          }
          piVar18 = piVar18 + 8;
          uVar28 = uVar28 + 1;
        }
        if (((1 << (ulong)uVar28 & uVar17) != 0) && (*piVar18 < *(int *)(lVar41 + 0x1f0))) {
          *(int *)(lVar41 + 0x1f0) = *piVar18;
          uVar19 = uVar28;
        }
        uVar28 = uVar28 + 1;
        piVar18 = piVar18 + 8;
        if (uVar25 < uVar28 || uVar11 == uVar28) goto LAB_001c3aec;
      }
      do {
        if (((1 << (ulong)(uVar28 & 0x1f) & uVar17) != 0) && (*piVar18 < *(int *)(lVar41 + 0x1f0)))
        {
          *(int *)(lVar41 + 0x1f0) = *piVar18;
          uVar19 = uVar28;
        }
        if (((1 << (ulong)(uVar28 + 1 & 0x1f) & uVar17) != 0) &&
           (piVar18[8] < *(int *)(lVar41 + 0x1f0))) {
          *(int *)(lVar41 + 0x1f0) = piVar18[8];
          uVar19 = uVar28 + 1;
        }
        if (((1 << (ulong)(uVar28 + 2 & 0x1f) & uVar17) != 0) &&
           (piVar18[0x10] < *(int *)(lVar41 + 0x1f0))) {
          *(int *)(lVar41 + 0x1f0) = piVar18[0x10];
          uVar19 = uVar28 + 2;
        }
        if (((1 << (ulong)(uVar28 + 3 & 0x1f) & uVar17) != 0) &&
           (piVar18[0x18] < *(int *)(lVar41 + 0x1f0))) {
          *(int *)(lVar41 + 0x1f0) = piVar18[0x18];
          uVar19 = uVar28 + 3;
        }
        uVar28 = uVar28 + 4;
        piVar18 = piVar18 + 0x20;
      } while ((uVar28 & 0xff) < uVar11);
    }
  }
LAB_001c3aec:
  uVar21 = (ulong)uVar19;
  lVar6 = lVar41 + uVar21 * 0x20;
  iVar43 = *(int *)(lVar6 + 0x8f2c);
  *(int *)(lVar41 + 0x1e0) = iVar43;
  iVar16 = *(int *)(lVar6 + 0x8f30);
  *(int *)(lVar41 + 0x1f0) = iVar16;
  uVar17 = *(uint *)(lVar6 + 0x8f28);
  lVar31 = *(long *)(lVar41 + uVar21 * 0x20 + 0x8f20) + (ulong)uVar17;
  if (*(char *)(lVar31 + 1) == -1) {
    bVar40 = *(byte *)(lVar31 + 2);
    if (0xef < bVar40) {
      FUN_001bb5b0(param_1,0xfffffffe,uVar19,bVar40,lVar31 + 5,
                   (uint)*(byte *)(lVar31 + 4) + (uint)*(byte *)(lVar31 + 3) * 0x100);
      uVar28 = *(uint *)(lVar41 + 0x1d8);
      goto LAB_001c3b38;
    }
    bVar45 = *(byte *)(lVar31 + 3);
    uVar28 = (uint)bVar45;
    if (((*(byte *)(lVar41 + 0x8710) & 0x40) != 0) || (uVar22 = (uint)bVar40, 0x3a < uVar22 - 0xb0))
    goto switchD_001c4214_caseD_b2;
    uVar35 = (uint)bVar45;
    switch(uVar22) {
    case 0xb0:
      if ((uVar19 != 0) || (0x7f < bVar45)) goto switchD_001c4214_caseD_b2;
      *(byte *)(lVar41 + 2) = bVar45;
      uVar28 = *(uint *)(lVar41 + 0x1d8);
      break;
    case 0xb1:
      if ((uVar19 == 0) && (uVar35 < 0x80)) {
        *(byte *)(lVar41 + 3) = bVar45;
        uVar25 = *(byte *)(lVar41 + 0x77) & 0x7f;
        if (bVar45 == 0x40) {
          *(char *)(lVar41 + 0x7370) = (char)(uVar25 << 1);
          *(char *)(lVar41 + 0x7384) = *(char *)(lVar41 + 0x78) << 1;
          *(char *)(lVar41 + 0x7398) = *(char *)(lVar41 + 0x79) << 1;
          *(char *)(lVar41 + 0x73ac) = *(char *)(lVar41 + 0x7a) << 1;
          *(char *)(lVar41 + 0x73c0) = *(char *)(lVar41 + 0x7b) << 1;
          *(char *)(lVar41 + 0x73d4) = *(char *)(lVar41 + 0x7c) << 1;
          *(char *)(lVar41 + 0x73e8) = *(char *)(lVar41 + 0x7d) << 1;
          *(char *)(lVar41 + 0x73fc) = *(char *)(lVar41 + 0x7e) << 1;
          *(char *)(lVar41 + 0x7410) = *(char *)(lVar41 + 0x7f) << 1;
          *(char *)(lVar41 + 0x7424) = *(char *)(lVar41 + 0x80) << 1;
          *(char *)(lVar41 + 0x7438) = *(char *)(lVar41 + 0x81) << 1;
          *(char *)(lVar41 + 0x744c) = *(char *)(lVar41 + 0x82) << 1;
          *(char *)(lVar41 + 0x7460) = *(char *)(lVar41 + 0x83) << 1;
          *(char *)(lVar41 + 0x7474) = *(char *)(lVar41 + 0x84) << 1;
          *(char *)(lVar41 + 0x7488) = *(char *)(lVar41 + 0x85) << 1;
          bVar40 = *(char *)(lVar41 + 0x86) << 1;
        }
        else {
          bVar40 = bVar45;
          if (uVar25 != 0x20) {
            bVar40 = (&DAT_0048e740)
                     [(ulong)((*(byte *)(lVar41 + 0x77) & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20]
            ;
          }
          *(byte *)(lVar41 + 0x7370) = bVar40;
          bVar40 = bVar45;
          if ((*(byte *)(lVar41 + 0x78) & 0x7f) != 0x20) {
            bVar40 = (&DAT_0048e740)
                     [(ulong)((*(byte *)(lVar41 + 0x78) & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20]
            ;
          }
          *(byte *)(lVar41 + 0x7384) = bVar40;
          bVar40 = bVar45;
          if ((*(byte *)(lVar41 + 0x79) & 0x7f) != 0x20) {
            bVar40 = (&DAT_0048e740)
                     [(ulong)((*(byte *)(lVar41 + 0x79) & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20]
            ;
          }
          *(byte *)(lVar41 + 0x7398) = bVar40;
          bVar40 = bVar45;
          if ((*(byte *)(lVar41 + 0x7a) & 0x7f) != 0x20) {
            bVar40 = (&DAT_0048e740)
                     [(ulong)((*(byte *)(lVar41 + 0x7a) & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20]
            ;
          }
          *(byte *)(lVar41 + 0x73ac) = bVar40;
          bVar40 = bVar45;
          if ((*(byte *)(lVar41 + 0x7b) & 0x7f) != 0x20) {
            bVar40 = (&DAT_0048e740)
                     [(ulong)((*(byte *)(lVar41 + 0x7b) & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20]
            ;
          }
          *(byte *)(lVar41 + 0x73c0) = bVar40;
          bVar40 = bVar45;
          if ((*(byte *)(lVar41 + 0x7c) & 0x7f) != 0x20) {
            bVar40 = (&DAT_0048e740)
                     [(ulong)((*(byte *)(lVar41 + 0x7c) & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20]
            ;
          }
          *(byte *)(lVar41 + 0x73d4) = bVar40;
          bVar40 = bVar45;
          if ((*(byte *)(lVar41 + 0x7d) & 0x7f) != 0x20) {
            bVar40 = (&DAT_0048e740)
                     [(ulong)((*(byte *)(lVar41 + 0x7d) & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20]
            ;
          }
          *(byte *)(lVar41 + 0x73e8) = bVar40;
          bVar40 = bVar45;
          if ((*(byte *)(lVar41 + 0x7e) & 0x7f) != 0x20) {
            bVar40 = (&DAT_0048e740)
                     [(ulong)((*(byte *)(lVar41 + 0x7e) & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20]
            ;
          }
          *(byte *)(lVar41 + 0x73fc) = bVar40;
          bVar40 = bVar45;
          if ((*(byte *)(lVar41 + 0x7f) & 0x7f) != 0x20) {
            bVar40 = (&DAT_0048e740)
                     [(ulong)((*(byte *)(lVar41 + 0x7f) & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20]
            ;
          }
          *(byte *)(lVar41 + 0x7410) = bVar40;
          bVar40 = bVar45;
          if ((*(byte *)(lVar41 + 0x80) & 0x7f) != 0x20) {
            bVar40 = (&DAT_0048e740)
                     [(ulong)((*(byte *)(lVar41 + 0x80) & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20]
            ;
          }
          *(byte *)(lVar41 + 0x7424) = bVar40;
          bVar40 = bVar45;
          if ((*(byte *)(lVar41 + 0x81) & 0x7f) != 0x20) {
            bVar40 = (&DAT_0048e740)
                     [(ulong)((*(byte *)(lVar41 + 0x81) & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20]
            ;
          }
          *(byte *)(lVar41 + 0x7438) = bVar40;
          bVar40 = bVar45;
          if ((*(byte *)(lVar41 + 0x82) & 0x7f) != 0x20) {
            bVar40 = (&DAT_0048e740)
                     [(ulong)((*(byte *)(lVar41 + 0x82) & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20]
            ;
          }
          *(byte *)(lVar41 + 0x744c) = bVar40;
          bVar40 = bVar45;
          if ((*(byte *)(lVar41 + 0x83) & 0x7f) != 0x20) {
            bVar40 = (&DAT_0048e740)
                     [(ulong)((*(byte *)(lVar41 + 0x83) & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20]
            ;
          }
          *(byte *)(lVar41 + 0x7460) = bVar40;
          bVar40 = bVar45;
          if ((*(byte *)(lVar41 + 0x84) & 0x7f) != 0x20) {
            bVar40 = (&DAT_0048e740)
                     [(ulong)((*(byte *)(lVar41 + 0x84) & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20]
            ;
          }
          *(byte *)(lVar41 + 0x7474) = bVar40;
          bVar40 = bVar45;
          if ((*(byte *)(lVar41 + 0x85) & 0x7f) != 0x20) {
            bVar40 = (&DAT_0048e740)
                     [(ulong)((*(byte *)(lVar41 + 0x85) & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20]
            ;
          }
          *(byte *)(lVar41 + 0x7488) = bVar40;
          bVar40 = bVar45;
          if ((*(byte *)(lVar41 + 0x86) & 0x7f) != 0x20) {
            bVar40 = (&DAT_0048e740)
                     [(ulong)((*(byte *)(lVar41 + 0x86) & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20]
            ;
          }
        }
        *(byte *)(lVar41 + 0x749c) = bVar40;
        if (*(byte *)(lVar41 + 0x197) < 0x40) {
          uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x197) + 0x137);
          if (uVar25 == 0xff) {
            *(byte *)(lVar41 + 0x74b0) = bVar45;
          }
          else {
            uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
            if (uVar35 != 0x40) {
              if ((uVar25 & 0x7f) == 0x20) {
                *(byte *)(lVar41 + 0x74b0) = bVar45;
                goto LAB_001c7350;
              }
              uVar36 = (&DAT_0048e740)[(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
            }
            *(undefined1 *)(lVar41 + 0x74b0) = uVar36;
          }
        }
LAB_001c7350:
        if (*(byte *)(lVar41 + 0x198) < 0x40) {
          uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x198) + 0x137);
          if (uVar25 == 0xff) {
            *(byte *)(lVar41 + 0x74c4) = bVar45;
          }
          else {
            uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
            if (bVar45 != 0x40) {
              if ((uVar25 & 0x7f) == 0x20) {
                *(byte *)(lVar41 + 0x74c4) = bVar45;
                goto LAB_001c7394;
              }
              uVar36 = (&DAT_0048e740)[(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
            }
            *(undefined1 *)(lVar41 + 0x74c4) = uVar36;
          }
        }
LAB_001c7394:
        if (*(byte *)(lVar41 + 0x199) < 0x40) {
          uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x199) + 0x137);
          if (uVar25 == 0xff) {
            *(byte *)(lVar41 + 0x74d8) = bVar45;
          }
          else {
            uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
            if (uVar35 != 0x40) {
              if ((uVar25 & 0x7f) == 0x20) {
                *(byte *)(lVar41 + 0x74d8) = bVar45;
                goto LAB_001c73d8;
              }
              uVar36 = (&DAT_0048e740)[(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
            }
            *(undefined1 *)(lVar41 + 0x74d8) = uVar36;
          }
        }
LAB_001c73d8:
        if (*(byte *)(lVar41 + 0x19a) < 0x40) {
          uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x19a) + 0x137);
          if (uVar25 == 0xff) {
            *(byte *)(lVar41 + 0x74ec) = bVar45;
          }
          else {
            uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
            if (bVar45 != 0x40) {
              if ((uVar25 & 0x7f) == 0x20) {
                *(byte *)(lVar41 + 0x74ec) = bVar45;
                goto LAB_001c741c;
              }
              uVar36 = (&DAT_0048e740)[(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
            }
            *(undefined1 *)(lVar41 + 0x74ec) = uVar36;
          }
        }
LAB_001c741c:
        if (*(byte *)(lVar41 + 0x19b) < 0x40) {
          uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x19b) + 0x137);
          if (uVar25 == 0xff) {
            *(byte *)(lVar41 + 0x7500) = bVar45;
          }
          else {
            uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
            if (uVar35 != 0x40) {
              if ((uVar25 & 0x7f) == 0x20) {
                *(byte *)(lVar41 + 0x7500) = bVar45;
                goto LAB_001c7460;
              }
              uVar36 = (&DAT_0048e740)[(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
            }
            *(undefined1 *)(lVar41 + 0x7500) = uVar36;
          }
        }
LAB_001c7460:
        if (*(byte *)(lVar41 + 0x19c) < 0x40) {
          uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x19c) + 0x137);
          if (uVar25 == 0xff) {
            *(byte *)(lVar41 + 0x7514) = bVar45;
          }
          else {
            uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
            if (bVar45 != 0x40) {
              if ((uVar25 & 0x7f) == 0x20) {
                *(byte *)(lVar41 + 0x7514) = bVar45;
                goto LAB_001c74a4;
              }
              uVar36 = (&DAT_0048e740)[(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
            }
            *(undefined1 *)(lVar41 + 0x7514) = uVar36;
          }
        }
LAB_001c74a4:
        if (*(byte *)(lVar41 + 0x19d) < 0x40) {
          uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x19d) + 0x137);
          if (uVar25 == 0xff) {
            *(byte *)(lVar41 + 0x7528) = bVar45;
          }
          else {
            uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
            if (uVar35 != 0x40) {
              if ((uVar25 & 0x7f) == 0x20) {
                *(byte *)(lVar41 + 0x7528) = bVar45;
                goto LAB_001c74e8;
              }
              uVar36 = (&DAT_0048e740)[(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
            }
            *(undefined1 *)(lVar41 + 0x7528) = uVar36;
          }
        }
LAB_001c74e8:
        if (*(byte *)(lVar41 + 0x19e) < 0x40) {
          uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x19e) + 0x137);
          if (uVar25 == 0xff) {
            *(byte *)(lVar41 + 0x753c) = bVar45;
          }
          else {
            uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
            if (bVar45 != 0x40) {
              if ((uVar25 & 0x7f) == 0x20) {
                *(byte *)(lVar41 + 0x753c) = bVar45;
                goto LAB_001c752c;
              }
              uVar36 = (&DAT_0048e740)[(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
            }
            *(undefined1 *)(lVar41 + 0x753c) = uVar36;
          }
        }
LAB_001c752c:
        if (*(byte *)(lVar41 + 0x19f) < 0x40) {
          uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x19f) + 0x137);
          if (uVar25 == 0xff) {
            *(byte *)(lVar41 + 0x7550) = bVar45;
          }
          else {
            uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
            if (bVar45 != 0x40) {
              if ((uVar25 & 0x7f) == 0x20) {
                *(byte *)(lVar41 + 0x7550) = bVar45;
                goto LAB_001c7570;
              }
              uVar36 = (&DAT_0048e740)[(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
            }
            *(undefined1 *)(lVar41 + 0x7550) = uVar36;
          }
        }
LAB_001c7570:
        if (*(byte *)(lVar41 + 0x1a0) < 0x40) {
          uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x1a0) + 0x137);
          if (uVar25 == 0xff) {
            *(byte *)(lVar41 + 0x7564) = bVar45;
          }
          else {
            uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
            if (uVar35 != 0x40) {
              if ((uVar25 & 0x7f) == 0x20) {
                *(byte *)(lVar41 + 0x7564) = bVar45;
                goto LAB_001c75b4;
              }
              uVar36 = (&DAT_0048e740)[(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
            }
            *(undefined1 *)(lVar41 + 0x7564) = uVar36;
          }
        }
LAB_001c75b4:
        if (*(byte *)(lVar41 + 0x1a1) < 0x40) {
          uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x1a1) + 0x137);
          if (uVar25 == 0xff) {
            *(byte *)(lVar41 + 0x7578) = bVar45;
          }
          else {
            uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
            if (bVar45 != 0x40) {
              if ((uVar25 & 0x7f) == 0x20) {
                *(byte *)(lVar41 + 0x7578) = bVar45;
                goto LAB_001c75f8;
              }
              uVar36 = (&DAT_0048e740)[(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
            }
            *(undefined1 *)(lVar41 + 0x7578) = uVar36;
          }
        }
LAB_001c75f8:
        if (*(byte *)(lVar41 + 0x1a2) < 0x40) {
          uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x1a2) + 0x137);
          if (uVar25 == 0xff) {
            *(byte *)(lVar41 + 0x758c) = bVar45;
          }
          else {
            uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
            if (uVar35 != 0x40) {
              if ((uVar25 & 0x7f) == 0x20) {
                *(byte *)(lVar41 + 0x758c) = bVar45;
                goto LAB_001c763c;
              }
              uVar36 = (&DAT_0048e740)[(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
            }
            *(undefined1 *)(lVar41 + 0x758c) = uVar36;
          }
        }
LAB_001c763c:
        if (*(byte *)(lVar41 + 0x1a3) < 0x40) {
          uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x1a3) + 0x137);
          if (uVar25 == 0xff) {
            *(byte *)(lVar41 + 0x75a0) = bVar45;
          }
          else {
            uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
            if (bVar45 != 0x40) {
              if ((uVar25 & 0x7f) == 0x20) {
                *(byte *)(lVar41 + 0x75a0) = bVar45;
                goto LAB_001c7680;
              }
              uVar36 = (&DAT_0048e740)[(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
            }
            *(undefined1 *)(lVar41 + 0x75a0) = uVar36;
          }
        }
LAB_001c7680:
        if (*(byte *)(lVar41 + 0x1a4) < 0x40) {
          uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x1a4) + 0x137);
          if (uVar25 == 0xff) {
            *(byte *)(lVar41 + 0x75b4) = bVar45;
          }
          else {
            uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
            if (uVar35 != 0x40) {
              if ((uVar25 & 0x7f) == 0x20) {
                *(byte *)(lVar41 + 0x75b4) = bVar45;
                goto LAB_001c76c4;
              }
              uVar36 = (&DAT_0048e740)[(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
            }
            *(undefined1 *)(lVar41 + 0x75b4) = uVar36;
          }
        }
LAB_001c76c4:
        if (*(byte *)(lVar41 + 0x1a5) < 0x40) {
          uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x1a5) + 0x137);
          if (uVar25 == 0xff) {
            *(byte *)(lVar41 + 0x75c8) = bVar45;
          }
          else {
            uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
            if (bVar45 != 0x40) {
              if ((uVar25 & 0x7f) == 0x20) {
                *(byte *)(lVar41 + 0x75c8) = bVar45;
                goto LAB_001c7708;
              }
              uVar36 = (&DAT_0048e740)[(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
            }
            *(undefined1 *)(lVar41 + 0x75c8) = uVar36;
          }
        }
LAB_001c7708:
        if (*(byte *)(lVar41 + 0x1a6) < 0x40) {
          uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x1a6) + 0x137);
          if (uVar25 == 0xff) {
            *(byte *)(lVar41 + 0x75dc) = bVar45;
            uVar28 = *(uint *)(lVar41 + 0x1d8);
          }
          else {
            bVar40 = (byte)((uVar25 & 0x7f) << 1);
            if ((uVar35 != 0x40) && (bVar40 = bVar45, (uVar25 & 0x7f) != 0x20)) {
              bVar40 = (&DAT_0048e740)[(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
            }
            *(byte *)(lVar41 + 0x75dc) = bVar40;
            uVar28 = *(uint *)(lVar41 + 0x1d8);
          }
          break;
        }
      }
    default:
      goto switchD_001c4214_caseD_b2;
    case 0xba:
      if ((uVar19 != 0) || ((char)bVar45 < '\0')) goto switchD_001c4214_caseD_b2;
      uVar13 = (ulong)(bVar45 >> 3) & 0xf;
      uVar35 = uVar35 & 7;
      lVar31 = lVar41 + uVar13;
      *(char *)(lVar31 + 0x37) = (char)uVar35;
      if (*(byte *)(lVar41 + 0xc) < 3) {
        if ((*(byte *)(lVar41 + 0xc) == 1) && (*(char *)(lVar31 + 0x17) == '\x01')) {
          uVar35 = 1;
          uVar25 = (uint)uVar13;
          uVar11 = (uint)uVar13 << 1;
          uVar17 = 8;
        }
        else {
          bVar40 = *(byte *)(lVar41 + uVar13 + 0x57);
          if (bVar40 < 2) {
            uVar25 = uVar35;
            uVar11 = uVar35;
            uVar17 = uVar35;
            if ((bVar45 & 7) != 0) goto LAB_001c9394;
          }
          else {
            bVar9 = (bVar40 >> 1) - 1;
            if ((bVar45 & 7) != 0) goto LAB_001c5bc0;
            uVar35 = (uint)bVar9;
            uVar11 = (uint)*(byte *)(lVar31 + 0x47) + (bVar40 & 1) * 0x40;
            uVar25 = uVar11 & 0x7f;
            uVar11 = (uVar11 & 0xf) << 1;
            uVar17 = uVar35 * 8 + (uVar25 >> 4);
          }
        }
        lVar31 = lVar41 + uVar13 * 4;
        lVar30 = lVar41 + uVar13 * 0x14;
        *(char *)(lVar30 + 0x736b) = (char)uVar35;
        *(char *)(lVar30 + 0x736a) = (char)uVar25;
        uVar25 = *(uint *)(lVar41 + (ulong)uVar17 * 4 + 0x28c) >> (ulong)uVar11 & 3;
        uVar26 = *(undefined4 *)(&DAT_0048df90 + (ulong)uVar25 * 4);
        *(undefined4 *)(lVar31 + 0x20c) = *(undefined4 *)(&DAT_0048df80 + (ulong)uVar25 * 4);
        *(undefined4 *)(lVar31 + 0x24c) = uVar26;
        uVar28 = *(uint *)(lVar41 + 0x1d8);
      }
      else {
        if (uVar35 != 1) goto switchD_001c4214_caseD_b2;
        bVar40 = *(byte *)(lVar31 + 0x57);
        if (bVar40 < 2) {
LAB_001c9394:
          lVar31 = lVar41 + uVar13 * 0x14;
          *(undefined1 *)(lVar31 + 0x736b) = 0x80;
          *(byte *)(lVar31 + 0x736a) = bVar40;
        }
        else {
          bVar9 = (bVar40 >> 1) - 1;
LAB_001c5bc0:
          lVar31 = lVar41 + uVar13 * 0x14;
          *(byte *)(lVar31 + 0x736b) = bVar9 + 0x80;
          *(byte *)(lVar31 + 0x736a) = bVar40 & 1;
        }
        lVar31 = lVar41 + uVar13 * 4;
        *(undefined4 *)(lVar31 + 0x20c) = 0x18;
        *(undefined4 *)(lVar31 + 0x24c) = 2;
        uVar28 = *(uint *)(lVar41 + 0x1d8);
      }
      break;
    case 0xbc:
      if ((uVar19 != 0) || (0x7f < uVar35)) goto switchD_001c4214_caseD_b2;
      iVar34 = (uVar35 - 0x40) + *(int *)(lVar41 + 0x1e4);
      *(int *)(lVar41 + 0x1e4) = iVar34;
      if (iVar34 < 0x14) {
        iVar34 = 0x14;
        *(undefined4 *)(lVar41 + 0x1e4) = 0x14;
      }
      else if (0xff < iVar34) {
        iVar34 = 0xff;
        *(undefined4 *)(lVar41 + 0x1e4) = 0xff;
      }
      lVar31 = (long)(iVar34 * *(int *)(lVar41 + 0x1e8));
      iVar34 = 0;
      if (lVar31 != 0) {
        iVar34 = (int)(0x3a98000 / lVar31);
      }
      *(int *)(lVar41 + 0x1ec) = iVar34;
      uVar28 = *(uint *)(lVar41 + 0x1d8);
      if (uVar25 != 0) {
        uVar11 = uVar25 - 1 & 3;
        if (((uVar28 & 1) != 0) && (iVar16 < *(int *)(lVar41 + 0x8f30))) {
          *(int *)(lVar41 + 0x8f30) = iVar16 + iVar34 * (*(int *)(lVar41 + 0x8f2c) - iVar43);
        }
        uVar17 = 1;
        piVar18 = (int *)(lVar41 + 0x8f50);
        if (uVar25 != 1) {
          if (uVar11 != 0) {
            if (uVar11 != 1) {
              if (uVar11 != 2) {
                if (((uVar28 >> 1 & 1) != 0) && (iVar16 < *(int *)(lVar41 + 0x8f50))) {
                  *(int *)(lVar41 + 0x8f50) = iVar16 + iVar34 * (*(int *)(lVar41 + 0x8f4c) - iVar43)
                  ;
                }
                uVar17 = 2;
                piVar18 = (int *)(lVar41 + 0x8f70);
              }
              if (((1 << (ulong)uVar17 & uVar28) != 0) && (iVar16 < *piVar18)) {
                *piVar18 = iVar16 + iVar34 * (piVar18[-1] - iVar43);
              }
              uVar17 = uVar17 + 1;
              piVar18 = piVar18 + 8;
            }
            if (((1 << (ulong)uVar17 & uVar28) != 0) && (iVar16 < *piVar18)) {
              *piVar18 = iVar16 + iVar34 * (piVar18[-1] - iVar43);
            }
            uVar17 = uVar17 + 1;
            piVar18 = piVar18 + 8;
            if (uVar17 == uVar25) break;
          }
          do {
            if (((1 << (ulong)(uVar17 & 0x1f) & uVar28) != 0) && (iVar16 < *piVar18)) {
              *piVar18 = iVar16 + iVar34 * (piVar18[-1] - iVar43);
            }
            if (((1 << (ulong)(uVar17 + 1 & 0x1f) & uVar28) != 0) && (iVar16 < piVar18[8])) {
              piVar18[8] = iVar16 + iVar34 * (piVar18[7] - iVar43);
            }
            if (((1 << (ulong)(uVar17 + 2 & 0x1f) & uVar28) != 0) && (iVar16 < piVar18[0x10])) {
              piVar18[0x10] = iVar16 + iVar34 * (piVar18[0xf] - iVar43);
            }
            if (((1 << (ulong)(uVar17 + 3 & 0x1f) & uVar28) != 0) && (iVar16 < piVar18[0x18])) {
              piVar18[0x18] = iVar16 + iVar34 * (piVar18[0x17] - iVar43);
            }
            uVar17 = uVar17 + 4;
            piVar18 = piVar18 + 0x20;
          } while (uVar17 != uVar25);
        }
      }
      break;
    case 0xbd:
      if ((uVar19 != 0) || (0x7f < uVar35)) goto switchD_001c4214_caseD_b2;
      uVar28 = *(uint *)(lVar41 + 0x1d8);
      iVar43 = (uint)*(byte *)(lVar41 + 2) + (uVar35 - 0x40);
      if (0x7f < iVar43) {
        iVar43 = 0x7f;
      }
      if (iVar43 < 0) {
        iVar43 = 0;
      }
      *(char *)(lVar41 + 2) = (char)iVar43;
      break;
    case 0xbf:
      if (uVar19 != 0) goto switchD_001c4214_caseD_b2;
      *(undefined1 *)(lVar41 + 4) = 0x7f;
      *(undefined1 *)(lVar41 + 0x57) = 2;
      *(undefined1 *)(lVar41 + 0x67) = 0x3f;
      *(undefined1 *)(lVar41 + 0xa7) = 0x7f;
      *(undefined1 *)(lVar41 + 0x58) = 2;
      *(undefined1 *)(lVar41 + 0x68) = 0x3f;
      *(undefined1 *)(lVar41 + 0xa8) = 0x7f;
      *(undefined1 *)(lVar41 + 0x28) = 1;
      *(undefined1 *)(lVar41 + 0x59) = 2;
      *(undefined1 *)(lVar41 + 0x69) = 0x3f;
      *(undefined1 *)(lVar41 + 0xa9) = 0x7f;
      *(undefined1 *)(lVar41 + 0x29) = 2;
      *(undefined1 *)(lVar41 + 0x5a) = 2;
      *(undefined1 *)(lVar41 + 3) = 0x40;
      *(undefined1 *)(lVar41 + 0x37) = 0;
      *(undefined1 *)(lVar41 + 0x47) = 0;
      *(undefined1 *)(lVar41 + 0x77) = 0x20;
      *(undefined1 *)(lVar41 + 0x27) = 0;
      *(undefined1 *)(lVar41 + 0x97) = 0x20;
      *(undefined1 *)(lVar41 + 0x87) = 0x20;
      *(undefined1 *)(lVar41 + 0x38) = 0;
      *(undefined1 *)(lVar41 + 0x48) = 0;
      *(undefined1 *)(lVar41 + 0x78) = 0x20;
      *(undefined1 *)(lVar41 + 0x98) = 0x20;
      *(undefined1 *)(lVar41 + 0x88) = 0x20;
      *(undefined1 *)(lVar41 + 0x39) = 0;
      *(undefined1 *)(lVar41 + 0x49) = 0;
      *(undefined1 *)(lVar41 + 0x79) = 0x20;
      *(undefined1 *)(lVar41 + 0x99) = 0x20;
      *(undefined1 *)(lVar41 + 0x89) = 0x20;
      *(undefined1 *)(lVar41 + 0x3a) = 0;
      *(undefined1 *)(lVar41 + 0x4a) = 0;
      *(undefined1 *)(lVar41 + 0x6a) = 0x3f;
      *(undefined1 *)(lVar41 + 0xaa) = 0x7f;
      *(undefined1 *)(lVar41 + 0x2a) = 3;
      *(undefined1 *)(lVar41 + 0x5b) = 2;
      *(undefined1 *)(lVar41 + 0x6b) = 0x3f;
      *(undefined1 *)(lVar41 + 0xab) = 0x7f;
      *(undefined1 *)(lVar41 + 0x2b) = 4;
      *(undefined1 *)(lVar41 + 0x5c) = 2;
      *(undefined1 *)(lVar41 + 0x6c) = 0x3f;
      *(undefined1 *)(lVar41 + 0xac) = 0x7f;
      *(undefined1 *)(lVar41 + 0x2c) = 5;
      *(undefined1 *)(lVar41 + 0x5d) = 2;
      *(undefined1 *)(lVar41 + 0x6d) = 0x3f;
      *(undefined1 *)(lVar41 + 0xad) = 0x7f;
      *(undefined1 *)(lVar41 + 0x2d) = 6;
      *(undefined1 *)(lVar41 + 0x7a) = 0x20;
      *(undefined1 *)(lVar41 + 0x9a) = 0x20;
      *(undefined1 *)(lVar41 + 0x8a) = 0x20;
      *(undefined1 *)(lVar41 + 0x3b) = 0;
      *(undefined1 *)(lVar41 + 0x4b) = 0;
      *(undefined1 *)(lVar41 + 0x7b) = 0x20;
      *(undefined1 *)(lVar41 + 0x9b) = 0x20;
      *(undefined1 *)(lVar41 + 0x8b) = 0x20;
      *(undefined1 *)(lVar41 + 0x3c) = 0;
      *(undefined1 *)(lVar41 + 0x4c) = 0;
      *(undefined1 *)(lVar41 + 0x7c) = 0x20;
      *(undefined1 *)(lVar41 + 0x9c) = 0x20;
      *(undefined1 *)(lVar41 + 0x8c) = 0x20;
      *(undefined1 *)(lVar41 + 0x3d) = 0;
      *(undefined1 *)(lVar41 + 0x4d) = 0;
      *(undefined1 *)(lVar41 + 0x7d) = 0x20;
      *(undefined1 *)(lVar41 + 0x9d) = 0x20;
      *(undefined1 *)(lVar41 + 0x8d) = 0x20;
      *(undefined1 *)(lVar41 + 0x3e) = 0;
      *(undefined1 *)(lVar41 + 0x4e) = 0;
      *(undefined1 *)(lVar41 + 0x5e) = 2;
      *(undefined1 *)(lVar41 + 0x6e) = 0x3f;
      *(undefined1 *)(lVar41 + 0xae) = 0x7f;
      *(undefined1 *)(lVar41 + 0x5f) = 2;
      *(undefined1 *)(lVar41 + 0x6f) = 0x3f;
      *(undefined1 *)(lVar41 + 0xaf) = 0x7f;
      *(bool *)(lVar41 + 0x40) = 1 < *(byte *)(lVar41 + 0xc);
      *(undefined1 *)(lVar41 + 0x60) = 2;
      *(undefined1 *)(lVar41 + 0x70) = 0x3f;
      *(undefined1 *)(lVar41 + 0xb0) = 0x7f;
      *(undefined1 *)(lVar41 + 0x30) = 9;
      *(undefined1 *)(lVar41 + 0x61) = 2;
      *(undefined1 *)(lVar41 + 0x71) = 0x3f;
      *(undefined1 *)(lVar41 + 0xb1) = 0x7f;
      *(undefined1 *)(lVar41 + 0x31) = 10;
      *(undefined1 *)(lVar41 + 0x7e) = 0x20;
      *(undefined1 *)(lVar41 + 0x2e) = 7;
      *(undefined1 *)(lVar41 + 0x9e) = 0x20;
      *(undefined1 *)(lVar41 + 0x8e) = 0x20;
      *(undefined1 *)(lVar41 + 0x3f) = 0;
      *(undefined1 *)(lVar41 + 0x4f) = 0;
      *(undefined1 *)(lVar41 + 0x7f) = 0x20;
      *(undefined1 *)(lVar41 + 0x2f) = 8;
      *(undefined1 *)(lVar41 + 0x9f) = 0x20;
      *(undefined1 *)(lVar41 + 0x8f) = 0x20;
      *(undefined1 *)(lVar41 + 0x50) = 0;
      *(undefined1 *)(lVar41 + 0x80) = 0x20;
      *(undefined1 *)(lVar41 + 0xa0) = 0x20;
      *(undefined1 *)(lVar41 + 0x90) = 0x20;
      *(undefined1 *)(lVar41 + 0x41) = 0;
      *(undefined1 *)(lVar41 + 0x51) = 0;
      *(undefined1 *)(lVar41 + 0x81) = 0x20;
      *(undefined1 *)(lVar41 + 0xa1) = 0x20;
      *(undefined1 *)(lVar41 + 0x62) = 2;
      *(undefined1 *)(lVar41 + 0x72) = 0x3f;
      *(undefined1 *)(lVar41 + 0xb2) = 0x7f;
      *(undefined1 *)(lVar41 + 0x32) = 0xb;
      *(undefined1 *)(lVar41 + 99) = 2;
      *(undefined1 *)(lVar41 + 0x73) = 0x3f;
      *(undefined1 *)(lVar41 + 0xb3) = 0x7f;
      *(undefined1 *)(lVar41 + 0x33) = 0xc;
      *(undefined1 *)(lVar41 + 100) = 2;
      *(undefined1 *)(lVar41 + 0x74) = 0x3f;
      *(undefined1 *)(lVar41 + 0xb4) = 0x7f;
      *(undefined1 *)(lVar41 + 0x34) = 0xd;
      *(undefined1 *)(lVar41 + 0x65) = 2;
      *(undefined1 *)(lVar41 + 0x75) = 0x3f;
      *(undefined1 *)(lVar41 + 0x91) = 0x20;
      *(undefined1 *)(lVar41 + 0x42) = 0;
      *(undefined1 *)(lVar41 + 0x52) = 0;
      *(undefined1 *)(lVar41 + 0x82) = 0x20;
      *(undefined1 *)(lVar41 + 0xa2) = 0x20;
      *(undefined1 *)(lVar41 + 0x92) = 0x20;
      *(undefined1 *)(lVar41 + 0x43) = 0;
      *(undefined1 *)(lVar41 + 0x53) = 0;
      *(undefined1 *)(lVar41 + 0x83) = 0x20;
      *(undefined1 *)(lVar41 + 0xa3) = 0x20;
      *(undefined1 *)(lVar41 + 0x93) = 0x20;
      *(undefined1 *)(lVar41 + 0x44) = 0;
      *(undefined1 *)(lVar41 + 0x54) = 0;
      *(undefined1 *)(lVar41 + 0x84) = 0x20;
      *(undefined1 *)(lVar41 + 0xa4) = 0x20;
      *(undefined1 *)(lVar41 + 0x94) = 0x20;
      *(undefined1 *)(lVar41 + 0x45) = 0;
      *(undefined1 *)(lVar41 + 0x55) = 0;
      *(undefined1 *)(lVar41 + 0x85) = 0x20;
      *(undefined1 *)(lVar41 + 0xb5) = 0x7f;
      *(undefined1 *)(lVar41 + 0x35) = 0xe;
      *(undefined1 *)(lVar41 + 0x66) = 2;
      *(undefined1 *)(lVar41 + 0x76) = 0x3f;
      *(undefined1 *)(lVar41 + 0xb6) = 0x7f;
      *(undefined1 *)(lVar41 + 0xa5) = 0x20;
      *(undefined1 *)(lVar41 + 0x36) = 0xf;
      *(undefined1 *)(lVar41 + 0x95) = 0x20;
      *(undefined1 *)(lVar41 + 0x46) = 0;
      *(undefined1 *)(lVar41 + 0x56) = 0;
      *(undefined1 *)(lVar41 + 0x86) = 0x20;
      *(undefined8 *)(lVar41 + 0x214) = 0x1800000018;
      *(undefined8 *)(lVar41 + 0x20c) = 0x1800000018;
      *(undefined8 *)(lVar41 + 0x224) = 0x1800000018;
      *(undefined8 *)(lVar41 + 0x21c) = 0x1800000018;
      *(undefined8 *)(lVar41 + 0x234) = 0x1800000018;
      *(undefined8 *)(lVar41 + 0x22c) = 0x1800000018;
      *(undefined8 *)(lVar41 + 0x244) = 0x1800000018;
      *(undefined8 *)(lVar41 + 0x23c) = 0x1800000018;
      *(undefined8 *)(lVar41 + 0x254) = 0x200000002;
      *(undefined8 *)(lVar41 + 0x24c) = 0x200000002;
      *(undefined8 *)(lVar41 + 0x264) = 0x200000002;
      *(undefined8 *)(lVar41 + 0x25c) = 0x200000002;
      *(undefined8 *)(lVar41 + 0x274) = 0x200000002;
      *(undefined8 *)(lVar41 + 0x26c) = 0x200000002;
      *(undefined8 *)(lVar41 + 0x284) = 0x200000002;
      *(undefined8 *)(lVar41 + 0x27c) = 0x200000002;
      *(undefined1 *)(lVar41 + 0x157) = 0x3f;
      *(undefined1 *)(lVar41 + 0x177) = 0x3f;
      *(undefined1 *)(lVar41 + 0x158) = 0x3f;
      *(undefined1 *)(lVar41 + 0x178) = 0x3f;
      *(undefined1 *)(lVar41 + 0x159) = 0x3f;
      *(undefined1 *)(lVar41 + 0x179) = 0x3f;
      *(undefined1 *)(lVar41 + 0x15a) = 0x3f;
      *(undefined1 *)(lVar41 + 0xa6) = 0x20;
      *(undefined1 *)(lVar41 + 0x96) = 0x20;
      *(undefined1 *)(lVar41 + 0xb7) = 0xff;
      *(undefined1 *)(lVar41 + 0xd7) = 0;
      *(undefined1 *)(lVar41 + 0xb8) = 0xff;
      *(undefined1 *)(lVar41 + 0xd8) = 0;
      *(undefined1 *)(lVar41 + 0xb9) = 0xff;
      *(undefined1 *)(lVar41 + 0xd9) = 0;
      *(undefined1 *)(lVar41 + 0x17a) = 0x3f;
      *(undefined1 *)(lVar41 + 0x15b) = 0x3f;
      *(undefined1 *)(lVar41 + 0x17b) = 0x3f;
      *(undefined1 *)(lVar41 + 0x15c) = 0x3f;
      *(undefined1 *)(lVar41 + 0x17c) = 0x3f;
      *(undefined1 *)(lVar41 + 0x15d) = 0x3f;
      *(undefined1 *)(lVar41 + 0x17d) = 0x3f;
      *(undefined1 *)(lVar41 + 0x15e) = 0x3f;
      *(undefined1 *)(lVar41 + 0x17e) = 0x3f;
      *(undefined1 *)(lVar41 + 0x15f) = 0x3f;
      *(undefined1 *)(lVar41 + 0x17f) = 0x3f;
      *(undefined1 *)(lVar41 + 0x160) = 0x3f;
      *(undefined1 *)(lVar41 + 0x180) = 0x3f;
      *(undefined1 *)(lVar41 + 0x161) = 0x3f;
      *(undefined1 *)(lVar41 + 0x181) = 0x3f;
      *(undefined1 *)(lVar41 + 0x162) = 0x3f;
      *(undefined1 *)(lVar41 + 0x182) = 0x3f;
      *(undefined1 *)(lVar41 + 0xba) = 0xff;
      *(undefined1 *)(lVar41 + 0xda) = 0;
      *(undefined1 *)(lVar41 + 0xbb) = 0xff;
      *(undefined1 *)(lVar41 + 0xdb) = 0;
      *(undefined1 *)(lVar41 + 0xbc) = 0xff;
      *(undefined1 *)(lVar41 + 0xdc) = 0;
      *(undefined1 *)(lVar41 + 0xbd) = 0xff;
      *(undefined1 *)(lVar41 + 0xdd) = 0;
      *(undefined1 *)(lVar41 + 0xbe) = 0xff;
      *(undefined1 *)(lVar41 + 0xde) = 0;
      *(undefined1 *)(lVar41 + 0xbf) = 0xff;
      *(undefined1 *)(lVar41 + 0xdf) = 0;
      *(undefined1 *)(lVar41 + 0xc0) = 0xff;
      *(undefined1 *)(lVar41 + 0xe0) = 0;
      *(undefined1 *)(lVar41 + 0xc1) = 0xff;
      *(undefined1 *)(lVar41 + 0xe1) = 0;
      *(undefined1 *)(lVar41 + 0xc2) = 0xff;
      *(undefined1 *)(lVar41 + 0xe2) = 0;
      *(undefined1 *)(lVar41 + 0x163) = 0x3f;
      *(undefined1 *)(lVar41 + 0x183) = 0x3f;
      *(undefined1 *)(lVar41 + 0x164) = 0x3f;
      *(undefined1 *)(lVar41 + 0x184) = 0x3f;
      *(undefined1 *)(lVar41 + 0x165) = 0x3f;
      *(undefined1 *)(lVar41 + 0x185) = 0x3f;
      *(undefined1 *)(lVar41 + 0x166) = 0x3f;
      *(undefined1 *)(lVar41 + 0x186) = 0x3f;
      *(undefined1 *)(lVar41 + 0x167) = 0x3f;
      *(undefined1 *)(lVar41 + 0x187) = 0x3f;
      *(undefined1 *)(lVar41 + 0x168) = 0x3f;
      *(undefined1 *)(lVar41 + 0x188) = 0x3f;
      *(undefined1 *)(lVar41 + 0x169) = 0x3f;
      *(undefined1 *)(lVar41 + 0x189) = 0x3f;
      *(undefined1 *)(lVar41 + 0x16a) = 0x3f;
      *(undefined1 *)(lVar41 + 0x18a) = 0x3f;
      *(undefined1 *)(lVar41 + 0x16b) = 0x3f;
      *(undefined1 *)(lVar41 + 0xc3) = 0xff;
      *(undefined1 *)(lVar41 + 0xe3) = 0;
      *(undefined1 *)(lVar41 + 0xc4) = 0xff;
      *(undefined1 *)(lVar41 + 0xe4) = 0;
      *(undefined1 *)(lVar41 + 0xc5) = 0xff;
      *(undefined1 *)(lVar41 + 0xe5) = 0;
      *(undefined1 *)(lVar41 + 0xc6) = 0xff;
      *(undefined1 *)(lVar41 + 0xe6) = 0;
      *(undefined1 *)(lVar41 + 199) = 0xff;
      *(undefined1 *)(lVar41 + 0xe7) = 0;
      *(undefined1 *)(lVar41 + 200) = 0xff;
      *(undefined1 *)(lVar41 + 0xe8) = 0;
      *(undefined1 *)(lVar41 + 0xc9) = 0xff;
      *(undefined1 *)(lVar41 + 0xe9) = 0;
      *(undefined1 *)(lVar41 + 0xca) = 0xff;
      *(undefined1 *)(lVar41 + 0xea) = 0;
      *(undefined1 *)(lVar41 + 0x18b) = 0x3f;
      *(undefined1 *)(lVar41 + 0x16c) = 0x3f;
      *(undefined1 *)(lVar41 + 0x18c) = 0x3f;
      *(undefined1 *)(lVar41 + 0x16d) = 0x3f;
      *(undefined1 *)(lVar41 + 0x18d) = 0x3f;
      *(undefined1 *)(lVar41 + 0x16e) = 0x3f;
      *(undefined1 *)(lVar41 + 0x18e) = 0x3f;
      *(undefined1 *)(lVar41 + 0x16f) = 0x3f;
      *(undefined1 *)(lVar41 + 399) = 0x3f;
      *(undefined1 *)(lVar41 + 0x170) = 0x3f;
      *(undefined1 *)(lVar41 + 400) = 0x3f;
      *(undefined1 *)(lVar41 + 0x171) = 0x3f;
      *(undefined1 *)(lVar41 + 0x191) = 0x3f;
      *(undefined1 *)(lVar41 + 0x172) = 0x3f;
      *(undefined1 *)(lVar41 + 0x192) = 0x3f;
      *(undefined1 *)(lVar41 + 0x173) = 0x3f;
      *(undefined1 *)(lVar41 + 0x193) = 0x3f;
      *(undefined1 *)(lVar41 + 0xcb) = 0xff;
      *(undefined1 *)(lVar41 + 0xeb) = 0;
      *(undefined1 *)(lVar41 + 0xcc) = 0xff;
      *(undefined1 *)(lVar41 + 0xec) = 0;
      *(undefined1 *)(lVar41 + 0xcd) = 0xff;
      *(undefined1 *)(lVar41 + 0xed) = 0;
      *(undefined1 *)(lVar41 + 0xce) = 0xff;
      *(undefined1 *)(lVar41 + 0xee) = 0;
      *(undefined1 *)(lVar41 + 0xcf) = 0xff;
      *(undefined1 *)(lVar41 + 0xef) = 0;
      *(undefined1 *)(lVar41 + 0xd0) = 0xff;
      *(undefined1 *)(lVar41 + 0xf0) = 0;
      *(undefined1 *)(lVar41 + 0xd1) = 0xff;
      *(undefined1 *)(lVar41 + 0xf1) = 0;
      *(undefined1 *)(lVar41 + 0xd2) = 0xff;
      *(undefined1 *)(lVar41 + 0xf2) = 0;
      *(undefined1 *)(lVar41 + 0xd3) = 0xff;
      *(undefined1 *)(lVar41 + 0xf3) = 0;
      *(undefined1 *)(lVar41 + 0x174) = 0x3f;
      *(undefined1 *)(lVar41 + 0x194) = 0x3f;
      *(undefined1 *)(lVar41 + 0x175) = 0x3f;
      *(undefined1 *)(lVar41 + 0x195) = 0x3f;
      *(undefined1 *)(lVar41 + 0x176) = 0x3f;
      *(undefined1 *)(lVar41 + 0x196) = 0x3f;
      *(undefined1 *)(lVar41 + 0xd4) = 0xff;
      *(undefined1 *)(lVar41 + 0xf4) = 0;
      *(undefined1 *)(lVar41 + 0xd5) = 0xff;
      *(undefined1 *)(lVar41 + 0xf5) = 0;
      *(undefined1 *)(lVar41 + 0xd6) = 0xff;
      *(undefined1 *)(lVar41 + 0xf6) = 0;
      *(undefined1 *)(lVar41 + 2) = 100;
      *(undefined1 *)(lVar41 + 6) = 0x40;
      *(undefined2 *)(lVar41 + 0x1be) = 0x2000;
      iVar34 = 0;
      puVar27 = puVar1;
      do {
        if (iVar34 == 9) {
          *(undefined1 *)(lVar41 + 0x741f) = 0x80;
        }
        else {
          *puVar27 = 0;
        }
        iVar37 = iVar34 + 1;
        lVar31 = lVar41 + (long)iVar34 * 0x14;
        *(undefined1 *)(lVar31 + 0x736a) = 0;
        *(undefined1 *)(lVar31 + 0x736d) = 0;
        *(undefined1 *)(lVar31 + 0x736c) = 0x3f;
        *(undefined1 *)(lVar31 + 0x7370) = 0x40;
        *(undefined1 *)(lVar31 + 0x7371) = 0x7f;
        *(undefined1 *)(lVar31 + 0x7372) = 0;
        *(undefined2 *)(lVar31 + 0x737a) = 0x2000;
        *(undefined1 *)(lVar31 + 0x736e) = 2;
        *(undefined1 *)(lVar31 + 0x736f) = 2;
        *(undefined1 *)(lVar31 + 0x7373) = 1;
        *(undefined1 *)(lVar31 + 0x7374) = 0x40;
        *(undefined2 *)(lVar31 + 0x737c) = 0x2000;
        *(undefined1 *)(lVar31 + 0x7376) = 0x40;
        *(undefined1 *)(lVar31 + 0x7375) = 0x40;
        *(undefined1 *)(lVar31 + 0x7377) = 0x7f;
        *(undefined1 *)(lVar31 + 0x7378) = 0x28;
        *(undefined1 *)(lVar31 + 0x7379) = 0;
        if (iVar37 == 9) {
          *(undefined1 *)(lVar41 + 0x741f) = 0x80;
        }
        else {
          puVar27[0x14] = 0;
        }
        puVar27 = puVar27 + 0x28;
        iVar34 = iVar34 + 2;
        lVar31 = lVar41 + (long)iVar37 * 0x14;
        *(undefined1 *)(lVar31 + 0x736a) = 0;
        *(undefined1 *)(lVar31 + 0x736d) = 0;
        *(undefined1 *)(lVar31 + 0x736c) = 0x3f;
        *(undefined1 *)(lVar31 + 0x7370) = 0x40;
        *(undefined1 *)(lVar31 + 0x7371) = 0x7f;
        *(undefined1 *)(lVar31 + 0x7372) = 0;
        *(undefined2 *)(lVar31 + 0x737a) = 0x2000;
        *(undefined1 *)(lVar31 + 0x736e) = 2;
        *(undefined1 *)(lVar31 + 0x736f) = 2;
        *(undefined1 *)(lVar31 + 0x7373) = 1;
        *(undefined1 *)(lVar31 + 0x7374) = 0x40;
        *(undefined2 *)(lVar31 + 0x737c) = 0x2000;
        *(undefined1 *)(lVar31 + 0x7376) = 0x40;
        *(undefined1 *)(lVar31 + 0x7375) = 0x40;
        *(undefined1 *)(lVar31 + 0x7377) = 0x7f;
        *(undefined1 *)(lVar31 + 0x7378) = 0x28;
        *(undefined1 *)(lVar31 + 0x7379) = 0;
      } while (iVar34 != 0x20);
      bVar40 = *(byte *)(lVar41 + 0x1b7);
      uVar25 = (uint)bVar40;
      if (bVar40 < 0x88) {
        *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
        lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
        *(undefined4 *)(lVar31 + 4) = 0x10;
        *(undefined4 *)(lVar31 + 8) = 0;
        *(undefined4 *)(lVar31 + 0xc) = 0;
        *(undefined8 *)(lVar31 + 0x14) = 0;
        *(undefined4 *)(lVar31 + 0x1c) = 0;
        uVar25 = (uint)*(byte *)(lVar41 + 0x1b7);
        if ((*(char *)(lVar41 + 0x8649) == '\0') && (uVar25 < 0x88)) {
          *(byte *)(lVar41 + 0x1b7) = *(byte *)(lVar41 + 0x1b7) + 1;
          lVar31 = lVar41 + (long)(int)uVar25 * 0x14 + 0x7ac0;
          *(undefined4 *)(lVar31 + 4) = 0x2f;
          *(undefined4 *)(lVar31 + 8) = 0;
          *(undefined4 *)(lVar31 + 0xc) = 0;
          *(undefined8 *)(lVar31 + 0x14) = 0x7f;
          *(undefined4 *)(lVar31 + 0x1c) = 0;
          uVar25 = (uint)*(byte *)(lVar41 + 0x1b7);
        }
      }
      uVar11 = 1;
      pbVar24 = (byte *)(lVar41 + 0x8649);
      while( true ) {
        if (uVar25 < 0x88) {
          *(char *)(lVar41 + 0x1b7) = (char)uVar25 + '\x01';
          lVar31 = lVar41 + (long)(int)uVar25 * 0x14 + 0x7ac0;
          *(undefined4 *)(lVar31 + 4) = 0x10;
          *(undefined4 *)(lVar31 + 8) = 0;
          *(uint *)(lVar31 + 0xc) = uVar11;
          *(undefined8 *)(lVar31 + 0x14) = 0;
          *(undefined4 *)(lVar31 + 0x1c) = 0;
          if ((uVar11 == *pbVar24) && (bVar40 = *(byte *)(lVar41 + 0x1b7), bVar40 < 0x88)) {
            *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
            lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
            *(undefined4 *)(lVar31 + 4) = 0x2f;
            *(undefined4 *)(lVar31 + 8) = 0;
            *(undefined4 *)(lVar31 + 0xc) = 0;
            *(undefined8 *)(lVar31 + 0x14) = 0x7f;
            *(undefined4 *)(lVar31 + 0x1c) = 0;
          }
        }
        uVar25 = uVar11 + 1;
        if (uVar25 == 0x20) break;
        bVar40 = *(byte *)(lVar41 + 0x1b7);
        if (bVar40 < 0x88) {
          *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
          lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
          *(undefined4 *)(lVar31 + 4) = 0x10;
          *(undefined4 *)(lVar31 + 8) = 0;
          *(uint *)(lVar31 + 0xc) = uVar25;
          *(undefined8 *)(lVar31 + 0x14) = 0;
          *(undefined4 *)(lVar31 + 0x1c) = 0;
          if ((uVar25 == *pbVar24) && (bVar40 = *(byte *)(lVar41 + 0x1b7), bVar40 < 0x88)) {
            *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
            lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
            *(undefined4 *)(lVar31 + 4) = 0x2f;
            *(undefined4 *)(lVar31 + 8) = 0;
            *(undefined4 *)(lVar31 + 0xc) = 0;
            *(undefined8 *)(lVar31 + 0x14) = 0x7f;
            *(undefined4 *)(lVar31 + 0x1c) = 0;
          }
        }
        bVar40 = *(byte *)(lVar41 + 0x1b7);
        if (bVar40 < 0x88) {
          *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
          lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
          *(undefined4 *)(lVar31 + 4) = 0x10;
          *(undefined4 *)(lVar31 + 8) = 0;
          *(uint *)(lVar31 + 0xc) = uVar11 + 2;
          *(undefined8 *)(lVar31 + 0x14) = 0;
          *(undefined4 *)(lVar31 + 0x1c) = 0;
          if ((uVar11 + 2 == (uint)*pbVar24) && (bVar40 = *(byte *)(lVar41 + 0x1b7), bVar40 < 0x88))
          {
            *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
            lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
            *(undefined4 *)(lVar31 + 4) = 0x2f;
            *(undefined4 *)(lVar31 + 8) = 0;
            *(undefined4 *)(lVar31 + 0xc) = 0;
            *(undefined8 *)(lVar31 + 0x14) = 0x7f;
            *(undefined4 *)(lVar31 + 0x1c) = 0;
          }
        }
        bVar40 = *(byte *)(lVar41 + 0x1b7);
        if (bVar40 < 0x88) {
          *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
          lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
          *(undefined4 *)(lVar31 + 4) = 0x10;
          *(undefined4 *)(lVar31 + 8) = 0;
          *(uint *)(lVar31 + 0xc) = uVar11 + 3;
          *(undefined8 *)(lVar31 + 0x14) = 0;
          *(undefined4 *)(lVar31 + 0x1c) = 0;
          if ((uVar11 + 3 == (uint)*pbVar24) && (bVar40 = *(byte *)(lVar41 + 0x1b7), bVar40 < 0x88))
          {
            *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
            lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
            *(undefined4 *)(lVar31 + 4) = 0x2f;
            *(undefined4 *)(lVar31 + 8) = 0;
            *(undefined4 *)(lVar31 + 0xc) = 0;
            *(undefined8 *)(lVar31 + 0x14) = 0x7f;
            *(undefined4 *)(lVar31 + 0x1c) = 0;
          }
        }
        bVar40 = *(byte *)(lVar41 + 0x1b7);
        if (bVar40 < 0x88) {
          *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
          lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
          *(undefined4 *)(lVar31 + 4) = 0x10;
          *(undefined4 *)(lVar31 + 8) = 0;
          *(uint *)(lVar31 + 0xc) = uVar11 + 4;
          *(undefined8 *)(lVar31 + 0x14) = 0;
          *(undefined4 *)(lVar31 + 0x1c) = 0;
          if ((uVar11 + 4 == (uint)*pbVar24) && (bVar40 = *(byte *)(lVar41 + 0x1b7), bVar40 < 0x88))
          {
            *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
            lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
            *(undefined4 *)(lVar31 + 4) = 0x2f;
            *(undefined4 *)(lVar31 + 8) = 0;
            *(undefined4 *)(lVar31 + 0xc) = 0;
            *(undefined8 *)(lVar31 + 0x14) = 0x7f;
            *(undefined4 *)(lVar31 + 0x1c) = 0;
          }
        }
        uVar25 = (uint)*(byte *)(lVar41 + 0x1b7);
        uVar11 = uVar11 + 5;
      }
      *(undefined1 *)(lVar41 + 0xf7) = 0;
      *(undefined1 *)(lVar41 + 0x117) = 0;
      *(byte *)(lVar41 + 0x86cb) = *(byte *)(lVar41 + 0x86eb) & 0x1f;
      *(undefined1 *)(lVar41 + 0xf8) = 0;
      *(undefined1 *)(lVar41 + 0x118) = 0;
      *(byte *)(lVar41 + 0x86cc) = *(byte *)(lVar41 + 0x86ec) & 0x1f;
      *(undefined1 *)(lVar41 + 0xf9) = 0;
      *(undefined1 *)(lVar41 + 0x119) = 0;
      *(byte *)(lVar41 + 0x86cd) = *(byte *)(lVar41 + 0x86ed) & 0x1f;
      *(undefined1 *)(lVar41 + 0xfa) = 0;
      *(undefined1 *)(lVar41 + 0x11a) = 0;
      *(byte *)(lVar41 + 0x86ce) = *(byte *)(lVar41 + 0x86ee) & 0x1f;
      *(undefined1 *)(lVar41 + 0xfb) = 0;
      *(undefined1 *)(lVar41 + 0x11b) = 0;
      *(byte *)(lVar41 + 0x86cf) = *(byte *)(lVar41 + 0x86ef) & 0x1f;
      *(undefined1 *)(lVar41 + 0xfc) = 0;
      *(undefined1 *)(lVar41 + 0x11c) = 0;
      *(byte *)(lVar41 + 0x86d0) = *(byte *)(lVar41 + 0x86f0) & 0x1f;
      *(undefined1 *)(lVar41 + 0xfd) = 0;
      *(undefined1 *)(lVar41 + 0x11d) = 0;
      *(byte *)(lVar41 + 0x86d1) = *(byte *)(lVar41 + 0x86f1) & 0x1f;
      *(undefined1 *)(lVar41 + 0xfe) = 0;
      *(undefined1 *)(lVar41 + 0x11e) = 0;
      *(byte *)(lVar41 + 0x86d2) = *(byte *)(lVar41 + 0x86f2) & 0x1f;
      *(undefined1 *)(lVar41 + 0xff) = 0;
      *(undefined1 *)(lVar41 + 0x11f) = 0;
      *(byte *)(lVar41 + 0x86d3) = *(byte *)(lVar41 + 0x86f3) & 0x1f;
      *(undefined1 *)(lVar41 + 0x100) = 0;
      *(undefined1 *)(lVar41 + 0x120) = 0;
      *(byte *)(lVar41 + 0x86d4) = *(byte *)(lVar41 + 0x86f4) & 0x1f;
      *(undefined1 *)(lVar41 + 0x101) = 0;
      *(undefined1 *)(lVar41 + 0x121) = 0;
      *(byte *)(lVar41 + 0x86d5) = *(byte *)(lVar41 + 0x86f5) & 0x1f;
      *(undefined1 *)(lVar41 + 0x102) = 0;
      *(undefined1 *)(lVar41 + 0x122) = 0;
      *(byte *)(lVar41 + 0x86d6) = *(byte *)(lVar41 + 0x86f6) & 0x1f;
      *(undefined1 *)(lVar41 + 0x103) = 0;
      *(undefined1 *)(lVar41 + 0x123) = 0;
      *(byte *)(lVar41 + 0x86d7) = *(byte *)(lVar41 + 0x86f7) & 0x1f;
      *(undefined1 *)(lVar41 + 0x104) = 0;
      *(undefined1 *)(lVar41 + 0x124) = 0;
      *(byte *)(lVar41 + 0x86d8) = *(byte *)(lVar41 + 0x86f8) & 0x1f;
      *(undefined1 *)(lVar41 + 0x105) = 0;
      *(undefined1 *)(lVar41 + 0x125) = 0;
      *(byte *)(lVar41 + 0x86d9) = *(byte *)(lVar41 + 0x86f9) & 0x1f;
      *(undefined1 *)(lVar41 + 0x106) = 0;
      *(undefined1 *)(lVar41 + 0x126) = 0;
      *(byte *)(lVar41 + 0x86da) = *(byte *)(lVar41 + 0x86fa) & 0x1f;
      *(undefined1 *)(lVar41 + 0x107) = 0;
      *(undefined1 *)(lVar41 + 0x127) = 0;
      *(byte *)(lVar41 + 0x86db) = *(byte *)(lVar41 + 0x86fb) & 0x1f;
      *(undefined1 *)(lVar41 + 0x108) = 0;
      *(undefined1 *)(lVar41 + 0x128) = 0;
      *(byte *)(lVar41 + 0x86dc) = *(byte *)(lVar41 + 0x86fc) & 0x1f;
      *(undefined1 *)(lVar41 + 0x109) = 0;
      *(undefined1 *)(lVar41 + 0x129) = 0;
      *(byte *)(lVar41 + 0x86dd) = *(byte *)(lVar41 + 0x86fd) & 0x1f;
      *(undefined1 *)(lVar41 + 0x10a) = 0;
      *(undefined1 *)(lVar41 + 0x12a) = 0;
      *(byte *)(lVar41 + 0x86de) = *(byte *)(lVar41 + 0x86fe) & 0x1f;
      *(undefined1 *)(lVar41 + 0x10b) = 0;
      *(undefined1 *)(lVar41 + 299) = 0;
      *(byte *)(lVar41 + 0x86df) = *(byte *)(lVar41 + 0x86ff) & 0x1f;
      *(undefined1 *)(lVar41 + 0x10c) = 0;
      *(undefined1 *)(lVar41 + 300) = 0;
      *(byte *)(lVar41 + 0x86e0) = *(byte *)(lVar41 + 0x8700) & 0x1f;
      *(undefined1 *)(lVar41 + 0x10d) = 0;
      *(undefined1 *)(lVar41 + 0x12d) = 0;
      *(byte *)(lVar41 + 0x86e1) = *(byte *)(lVar41 + 0x8701) & 0x1f;
      *(undefined1 *)(lVar41 + 0x10e) = 0;
      *(undefined1 *)(lVar41 + 0x12e) = 0;
      *(byte *)(lVar41 + 0x86e2) = *(byte *)(lVar41 + 0x8702) & 0x1f;
      *(undefined1 *)(lVar41 + 0x10f) = 0;
      *(undefined1 *)(lVar41 + 0x12f) = 0;
      *(byte *)(lVar41 + 0x86e3) = *(byte *)(lVar41 + 0x8703) & 0x1f;
      *(undefined1 *)(lVar41 + 0x110) = 0;
      *(undefined1 *)(lVar41 + 0x130) = 0;
      *(byte *)(lVar41 + 0x86e4) = *(byte *)(lVar41 + 0x8704) & 0x1f;
      *(undefined1 *)(lVar41 + 0x111) = 0;
      *(undefined1 *)(lVar41 + 0x131) = 0;
      *(byte *)(lVar41 + 0x86e5) = *(byte *)(lVar41 + 0x8705) & 0x1f;
      *(undefined1 *)(lVar41 + 0x112) = 0;
      *(undefined1 *)(lVar41 + 0x132) = 0;
      *(byte *)(lVar41 + 0x86e6) = *(byte *)(lVar41 + 0x8706) & 0x1f;
      *(undefined1 *)(lVar41 + 0x113) = 0;
      *(undefined1 *)(lVar41 + 0x133) = 0;
      *(byte *)(lVar41 + 0x86e7) = *(byte *)(lVar41 + 0x8707) & 0x1f;
      *(undefined1 *)(lVar41 + 0x114) = 0;
      *(undefined1 *)(lVar41 + 0x134) = 0;
      *(byte *)(lVar41 + 0x86e8) = *(byte *)(lVar41 + 0x8708) & 0x1f;
      *(undefined1 *)(lVar41 + 0x115) = 0;
      *(undefined1 *)(lVar41 + 0x135) = 0;
      *(byte *)(lVar41 + 0x86e9) = *(byte *)(lVar41 + 0x8709) & 0x1f;
      *(undefined1 *)(lVar41 + 0x116) = 0;
      *(undefined1 *)(lVar41 + 0x136) = 0;
      *(byte *)(lVar41 + 0x86ea) = *(byte *)(lVar41 + 0x870a) & 0x1f;
      *(undefined1 *)(lVar41 + 0x137) = 0xff;
      *(undefined1 *)(lVar41 + 0x138) = 0xff;
      *(undefined1 *)(lVar41 + 0x139) = 0xff;
      *(undefined1 *)(lVar41 + 0x13a) = 0xff;
      uVar36 = 0x60;
      if (*(char *)(lVar41 + 0xc) != '\x01') {
        uVar36 = 0x7f;
      }
      *(undefined1 *)(lVar41 + 0x13b) = 0xff;
      *(undefined1 *)(lVar41 + 5) = uVar36;
      *(undefined1 *)(lVar41 + 0x13c) = 0xff;
      *(undefined1 *)(lVar41 + 0x13d) = 0xff;
      *(undefined1 *)(lVar41 + 0x13e) = 0xff;
      *(undefined1 *)(lVar41 + 0x13f) = 0xff;
      *(undefined1 *)(lVar41 + 0x140) = 0xff;
      *(undefined1 *)(lVar41 + 0x141) = 0xff;
      *(undefined1 *)(lVar41 + 0x142) = 0xff;
      *(undefined1 *)(lVar41 + 0x143) = 0xff;
      *(undefined1 *)(lVar41 + 0x144) = 0xff;
      *(undefined1 *)(lVar41 + 0x145) = 0xff;
      *(undefined1 *)(lVar41 + 0x146) = 0xff;
      *(undefined1 *)(lVar41 + 0x147) = 0xff;
      *(undefined1 *)(lVar41 + 0x148) = 0xff;
      *(undefined1 *)(lVar41 + 0x149) = 0xff;
      *(undefined1 *)(lVar41 + 0x14a) = 0xff;
      *(undefined1 *)(lVar41 + 0x14b) = 0xff;
      *(undefined1 *)(lVar41 + 0x14c) = 0xff;
      *(undefined1 *)(lVar41 + 0x14d) = 0xff;
      *(undefined1 *)(lVar41 + 0x14e) = 0xff;
      *(undefined1 *)(lVar41 + 0x14f) = 0xff;
      *(undefined1 *)(lVar41 + 0x150) = 0xff;
      *(undefined1 *)(lVar41 + 0x151) = 0xff;
      *(undefined1 *)(lVar41 + 0x152) = 0xff;
      *(undefined1 *)(lVar41 + 0x153) = 0xff;
      *(undefined1 *)(lVar41 + 0x154) = 0xff;
      *(undefined1 *)(lVar41 + 0x155) = 0xff;
      *(undefined1 *)(lVar41 + 0x156) = 0xff;
      *(undefined4 *)(lVar41 + 0x1ec) = 0x2800;
      *(undefined4 *)(lVar41 + 0x1e8) = 0x30;
      *(undefined4 *)(lVar41 + 0x1e4) = 0x7d;
      uVar28 = *(uint *)(lVar41 + 0x1d8);
      bVar40 = *(byte *)(lVar41 + 0x8648);
      if (bVar40 != 0) {
        bVar45 = bVar40 - 1 & 3;
        if (((uVar28 & 1) != 0) && (iVar16 < *(int *)(lVar41 + 0x8f30))) {
          *(int *)(lVar41 + 0x8f30) = iVar16 + (*(int *)(lVar41 + 0x8f2c) - iVar43) * 0x2800;
        }
        uVar25 = 1;
        piVar18 = (int *)(lVar41 + 0x8f50);
        uVar11 = (uint)bVar40;
        if (uVar11 == 1) goto switchD_001c4214_caseD_b2;
        if (bVar45 != 0) {
          if (bVar45 != 1) {
            if (bVar45 != 2) {
              if (((uVar28 >> 1 & 1) != 0) && (iVar16 < *(int *)(lVar41 + 0x8f50))) {
                *(int *)(lVar41 + 0x8f50) = iVar16 + (*(int *)(lVar41 + 0x8f4c) - iVar43) * 0x2800;
              }
              uVar25 = 2;
              piVar18 = (int *)(lVar41 + 0x8f70);
            }
            if (((1 << (ulong)uVar25 & uVar28) != 0) && (iVar16 < *piVar18)) {
              *piVar18 = iVar16 + (piVar18[-1] - iVar43) * 0x2800;
            }
            uVar25 = uVar25 + 1;
            piVar18 = piVar18 + 8;
          }
          if (((1 << (ulong)uVar25 & uVar28) != 0) && (iVar16 < *piVar18)) {
            *piVar18 = iVar16 + (piVar18[-1] - iVar43) * 0x2800;
          }
          uVar25 = uVar25 + 1;
          piVar18 = piVar18 + 8;
          if (uVar25 == uVar11) goto switchD_001c4214_caseD_b2;
        }
        do {
          if (((1 << (ulong)(uVar25 & 0x1f) & uVar28) != 0) && (iVar16 < *piVar18)) {
            *piVar18 = iVar16 + (piVar18[-1] - iVar43) * 0x2800;
          }
          if (((1 << (ulong)(uVar25 + 1 & 0x1f) & uVar28) != 0) && (iVar16 < piVar18[8])) {
            piVar18[8] = iVar16 + (piVar18[7] - iVar43) * 0x2800;
          }
          if (((1 << (ulong)(uVar25 + 2 & 0x1f) & uVar28) != 0) && (iVar16 < piVar18[0x10])) {
            piVar18[0x10] = iVar16 + (piVar18[0xf] - iVar43) * 0x2800;
          }
          if (((1 << (ulong)(uVar25 + 3 & 0x1f) & uVar28) != 0) && (iVar16 < piVar18[0x18])) {
            piVar18[0x18] = iVar16 + (piVar18[0x17] - iVar43) * 0x2800;
          }
          uVar25 = uVar25 + 4;
          piVar18 = piVar18 + 0x20;
        } while (uVar25 != uVar11);
        uVar28 = *(uint *)(lVar41 + 0x1d8);
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
      if ((uVar19 != 0) ||
         (iVar34 = *(int *)(&DAT_0048eb40 + (ulong)(uVar22 & 0xf) * 4), iVar34 == 0))
      goto switchD_001c4214_caseD_b2;
      *(int *)(lVar41 + 0x1e8) = iVar34;
      *(uint *)(lVar41 + 0x1e4) = uVar35;
      if (bVar45 < 0x14) {
        uVar28 = 0x14;
        *(undefined4 *)(lVar41 + 0x1e4) = 0x14;
      }
      iVar37 = 0;
      if ((long)(int)(iVar34 * uVar28) != 0) {
        iVar37 = (int)(0x3a98000 / (long)(int)(iVar34 * uVar28));
      }
      uVar28 = *(uint *)(lVar41 + 0x1d8);
      *(int *)(lVar41 + 0x1ec) = iVar37;
      if (uVar11 != 0) {
        uVar17 = uVar25 - 1 & 3;
        if (((uVar28 & 1) != 0) && (iVar16 < *(int *)(lVar41 + 0x8f30))) {
          *(int *)(lVar41 + 0x8f30) = iVar16 + iVar37 * (*(int *)(lVar41 + 0x8f2c) - iVar43);
        }
        uVar22 = 1;
        piVar18 = (int *)(lVar41 + 0x8f50);
        if (uVar25 != 1) {
          if (uVar17 != 0) {
            if (uVar17 != 1) {
              if (uVar17 != 2) {
                if (((uVar28 >> 1 & 1) != 0) && (iVar16 < *(int *)(lVar41 + 0x8f50))) {
                  *(int *)(lVar41 + 0x8f50) = iVar16 + iVar37 * (*(int *)(lVar41 + 0x8f4c) - iVar43)
                  ;
                }
                uVar22 = 2;
                piVar18 = (int *)(lVar41 + 0x8f70);
              }
              if (((1 << (ulong)uVar22 & uVar28) != 0) && (iVar16 < *piVar18)) {
                *piVar18 = iVar16 + iVar37 * (piVar18[-1] - iVar43);
              }
              uVar22 = uVar22 + 1;
              piVar18 = piVar18 + 8;
            }
            if (((1 << (ulong)uVar22 & uVar28) != 0) && (iVar16 < *piVar18)) {
              *piVar18 = iVar16 + iVar37 * (piVar18[-1] - iVar43);
            }
            uVar22 = uVar22 + 1;
            piVar18 = piVar18 + 8;
            if (uVar22 == uVar11) break;
          }
          do {
            if (((1 << (ulong)(uVar22 & 0x1f) & uVar28) != 0) && (iVar16 < *piVar18)) {
              *piVar18 = iVar16 + iVar37 * (piVar18[-1] - iVar43);
            }
            if (((1 << (ulong)(uVar22 + 1 & 0x1f) & uVar28) != 0) && (iVar16 < piVar18[8])) {
              piVar18[8] = iVar16 + iVar37 * (piVar18[7] - iVar43);
            }
            if (((1 << (ulong)(uVar22 + 2 & 0x1f) & uVar28) != 0) && (iVar16 < piVar18[0x10])) {
              piVar18[0x10] = iVar16 + iVar37 * (piVar18[0xf] - iVar43);
            }
            if (((1 << (ulong)(uVar22 + 3 & 0x1f) & uVar28) != 0) && (iVar16 < piVar18[0x18])) {
              piVar18[0x18] = iVar16 + iVar37 * (piVar18[0x17] - iVar43);
            }
            uVar22 = uVar22 + 4;
            piVar18 = piVar18 + 0x20;
          } while (uVar22 != uVar11);
        }
      }
      break;
    case 0xd0:
      if (uVar19 == 0) {
        if (uVar35 == 0) {
          *(undefined1 *)(lVar41 + 0x1b9) = 0;
          *(undefined1 *)(lVar41 + 0x1ba) = 0;
          *(undefined1 *)(lVar41 + 0x1bb) = 0;
          *(undefined1 *)(lVar41 + 0x1bc) = 0;
          uVar28 = *(uint *)(lVar41 + 0x1d8);
          break;
        }
        if ((uVar35 == 1) && (*(char *)(lVar41 + 0x864a) == '\0')) {
          *(undefined4 *)(lVar41 + 0x1d8) = 0;
          *(byte *)(lVar41 + 0x13) = bVar45;
          uVar25 = (uint)*(byte *)(lVar41 + 0x8648);
          goto LAB_001c3e90;
        }
      }
switchD_001c4214_caseD_b2:
      uVar28 = *(uint *)(lVar41 + 0x1d8);
      break;
    case 0xdc:
      iVar16 = uVar35 << 8;
      if (*(byte *)(lVar41 + 0xc) < 3) {
        iVar16 = 0;
      }
      *(int *)(lVar6 + 0x8f2c) = iVar43 + iVar16;
      *(int *)(lVar6 + 0x8f30) = *(int *)(lVar6 + 0x8f30) + iVar16 * *(int *)(lVar41 + 0x1ec);
      uVar28 = *(uint *)(lVar41 + 0x1d8);
      break;
    case 0xdf:
      uVar28 = *(uint *)(lVar41 + 0x1d8) & (1 << (ulong)(uVar19 & 0x1f) ^ 0xffffffffU);
      *(uint *)(lVar41 + 0x1d8) = uVar28;
      if (uVar28 != 0) goto LAB_001c3b40;
      *(undefined1 *)(lVar41 + 0x13) = 1;
      uVar25 = (uint)*(byte *)(lVar41 + 0x8648);
      goto LAB_001c3e90;
    case 0xe0:
      bVar40 = *(byte *)(lVar41 + (ulong)((uint)(bVar45 >> 6) + uVar19 * 4) + 0x27);
      uVar13 = (ulong)bVar40;
      *(char *)(lVar41 + uVar13 + 0x47) = (char)(uVar35 & 0x3f);
      if ((*(char *)(lVar41 + 0xc) == '\x01') && (*(char *)(lVar41 + uVar13 + 0x17) == '\x01')) {
        uVar11 = (bVar40 & 0xf) << 1;
        uVar25 = (bVar40 >> 4) + 8;
        bVar45 = 1;
      }
      else {
        lVar31 = lVar41 + uVar13;
        bVar40 = *(byte *)(lVar31 + 0x57);
        if (bVar40 < 2) {
          if (*(char *)(lVar31 + 0x37) != '\0') {
            lVar31 = lVar41 + uVar13 * 0x14;
            *(undefined1 *)(lVar31 + 0x736b) = 0x80;
            *(byte *)(lVar31 + 0x736a) = bVar40;
            goto LAB_001c7770;
          }
          uVar11 = 0;
          bVar40 = 0;
          bVar45 = 0;
          uVar25 = uVar11;
        }
        else {
          bVar45 = (bVar40 >> 1) - 1;
          if (*(char *)(lVar31 + 0x37) != '\0') {
            lVar31 = lVar41 + uVar13 * 0x14;
            *(byte *)(lVar31 + 0x736b) = (bVar40 >> 1) + 0x7f;
            *(byte *)(lVar31 + 0x736a) = bVar40 & 1;
LAB_001c7770:
            lVar31 = lVar41 + uVar13 * 4;
            *(undefined4 *)(lVar31 + 0x20c) = 0x18;
            *(undefined4 *)(lVar31 + 0x24c) = 2;
            uVar28 = *(uint *)(lVar41 + 0x1d8);
            break;
          }
          uVar25 = (uVar35 & 0x3f) + (bVar40 & 1) * 0x40;
          bVar40 = (byte)uVar25;
          uVar11 = (uVar25 & 0xf) << 1;
          uVar25 = (uint)(bVar40 >> 4) + (uint)bVar45 * 8;
        }
      }
      lVar31 = lVar41 + uVar13 * 4;
      lVar30 = lVar41 + uVar13 * 0x14;
      *(byte *)(lVar30 + 0x736b) = bVar45;
      *(byte *)(lVar30 + 0x736a) = bVar40;
      uVar25 = *(uint *)(lVar41 + (ulong)uVar25 * 4 + 0x28c) >> (ulong)uVar11 & 3;
      uVar26 = *(undefined4 *)(&DAT_0048df90 + (ulong)uVar25 * 4);
      *(undefined4 *)(lVar31 + 0x20c) = *(undefined4 *)(&DAT_0048df80 + (ulong)uVar25 * 4);
      *(undefined4 *)(lVar31 + 0x24c) = uVar26;
      uVar28 = *(uint *)(lVar41 + 0x1d8);
      break;
    case 0xe1:
      uVar25 = uVar35 & 0x3f;
      bVar40 = *(byte *)(lVar41 + (ulong)((uint)(bVar45 >> 6) + uVar19 * 4) + 0x27);
      uVar13 = (ulong)bVar40;
      lVar31 = lVar41 + uVar13;
      *(char *)(lVar31 + 0x57) = (char)uVar25;
      if (*(char *)(lVar41 + 0xc) == '\x01') {
        if (*(char *)(lVar31 + 0x17) == '\x01') {
          uVar11 = (uint)bVar40;
          uVar17 = (uVar11 & 0xf) << 1;
          uVar25 = (bVar40 >> 4) + 8;
          cVar10 = '\x01';
        }
        else if (uVar25 < 2) {
          if (*(char *)(lVar31 + 0x37) != '\0') goto LAB_001c9000;
          uVar11 = 0;
          uVar17 = 0;
          uVar25 = 0;
          cVar10 = '\0';
        }
        else {
          uVar25 = (uVar25 >> 1) - 1;
          cVar10 = (char)uVar25;
          if (*(char *)(lVar31 + 0x37) != '\0') goto LAB_001c4ec4;
          uVar17 = (uint)*(byte *)(lVar31 + 0x47) + (uVar35 & 1) * 0x40;
          uVar11 = uVar17 & 0x7f;
          uVar17 = (uVar17 & 0xf) << 1;
          uVar25 = (uVar11 >> 4) + (uVar25 & 0xff) * 8;
        }
        lVar31 = lVar41 + uVar13 * 4;
        lVar30 = lVar41 + uVar13 * 0x14;
        *(char *)(lVar30 + 0x736b) = cVar10;
        *(char *)(lVar30 + 0x736a) = (char)uVar11;
        uVar25 = *(uint *)(lVar41 + (ulong)uVar25 * 4 + 0x28c) >> (ulong)uVar17 & 3;
        uVar26 = *(undefined4 *)(&DAT_0048df90 + (ulong)uVar25 * 4);
        *(undefined4 *)(lVar31 + 0x20c) = *(undefined4 *)(&DAT_0048df80 + (ulong)uVar25 * 4);
        *(undefined4 *)(lVar31 + 0x24c) = uVar26;
        uVar28 = *(uint *)(lVar41 + 0x1d8);
      }
      else {
        if (*(char *)(lVar31 + 0x37) != '\x01') goto switchD_001c4214_caseD_b2;
        if (uVar25 < 2) {
LAB_001c9000:
          lVar31 = lVar41 + uVar13 * 0x14;
          *(undefined1 *)(lVar31 + 0x736b) = 0x80;
          *(char *)(lVar31 + 0x736a) = (char)uVar25;
        }
        else {
          cVar10 = (char)(uVar25 >> 1) + -1;
LAB_001c4ec4:
          lVar31 = lVar41 + uVar13 * 0x14;
          *(char *)(lVar31 + 0x736b) = cVar10 + -0x80;
          *(byte *)(lVar31 + 0x736a) = bVar45 & 1;
        }
        lVar31 = lVar41 + uVar13 * 4;
        *(undefined4 *)(lVar31 + 0x24c) = 2;
        *(undefined4 *)(lVar31 + 0x20c) = 0x18;
        uVar28 = *(uint *)(lVar41 + 0x1d8);
      }
      break;
    case 0xe2:
      *(byte *)(lVar41 + (ulong)*(byte *)(lVar41 + (ulong)((uint)(bVar45 >> 6) + uVar19 * 4) + 0x27)
               + 0x67) = bVar45 & 0x3f;
      uVar28 = *(uint *)(lVar41 + 0x1d8);
      break;
    case 0xe3:
      uVar35 = uVar35 & 0x3f;
      uVar13 = (ulong)*(byte *)(lVar41 + (ulong)((uint)(bVar45 >> 6) + uVar19 * 4) + 0x27);
      bVar45 = (byte)(uVar35 << 1);
      *(char *)(lVar41 + uVar13 + 0x77) = (char)uVar35;
      bVar40 = *(byte *)(lVar41 + 3);
      if ((bVar40 != 0x40) && (bVar45 = bVar40, uVar35 != 0x20)) {
        bVar45 = (&DAT_0048e740)[(ulong)(uVar35 >> 1) + (ulong)(bVar40 >> 2) * 0x20];
      }
      *(byte *)(lVar41 + uVar13 * 0x14 + 0x7370) = bVar45;
      uVar28 = *(uint *)(lVar41 + 0x1d8);
      break;
    case 0xe4:
      uVar13 = (ulong)*(byte *)(lVar41 + (ulong)((uint)(bVar45 >> 6) + uVar19 * 4) + 0x27);
      *(char *)(lVar41 + uVar13 + 0x87) = (char)(uVar35 & 0x3f);
      uVar25 = *(int *)(&DAT_0048eb80 + (ulong)*(byte *)(lVar41 + uVar13 + 0x97) * 4) +
               (uVar35 & 0x3f) * 2;
      if ((int)uVar25 < 0) goto LAB_001c5cdc;
LAB_001c5068:
      uVar32 = (undefined2)((uVar25 & 0x1ff) << 7);
      if (0x7f < (int)uVar25) {
        uVar32 = 0x3f80;
      }
      goto LAB_001c5078;
    case 0xe5:
      if (((bVar45 & 0x30) != 0) || (*(byte *)(lVar41 + 0xc) < 2)) goto switchD_001c4214_caseD_b2;
      *(byte *)(lVar41 + (ulong)(byte)((bVar45 >> 6) + (char)(uVar19 << 2)) + 0x27) = bVar45 & 0xf;
      uVar28 = *(uint *)(lVar41 + 0x1d8);
      break;
    case 0xe6:
      uVar13 = (ulong)*(byte *)(lVar41 + (ulong)((uint)(bVar45 >> 6) + uVar19 * 4) + 0x27);
      cVar38 = ((bVar45 & 0x3f) - 0x20) + *(char *)(lVar41 + uVar13 + 0x67);
      cVar10 = '\0';
      if ((-1 < cVar38) && (cVar10 = cVar38, '?' < cVar38)) {
        cVar10 = '?';
      }
      *(char *)(lVar41 + uVar13 + 0x67) = cVar10;
      uVar28 = *(uint *)(lVar41 + 0x1d8);
      break;
    case 0xe7:
      if (0x18 < (uVar35 & 0x3f)) goto switchD_001c4214_caseD_b2;
      *(char *)(lVar41 + (ulong)*(byte *)(lVar41 + (ulong)((uint)(bVar45 >> 6) + uVar19 * 4) + 0x27)
                         * 0x14 + 0x736f) = (char)(uVar35 & 0x3f);
      uVar28 = *(uint *)(lVar41 + 0x1d8);
      break;
    case 0xe8:
      uVar13 = (ulong)*(byte *)(lVar41 + (ulong)((uint)(bVar45 >> 6) + uVar19 * 4) + 0x27);
      iVar43 = *(int *)(&DAT_0048eb80 + (ulong)(uVar35 & 0x3f) * 4);
      *(char *)(lVar41 + uVar13 + 0x97) = (char)(uVar35 & 0x3f);
      uVar25 = iVar43 + (uint)*(byte *)(lVar41 + uVar13 + 0x87) * 2;
      if (-1 < (int)uVar25) goto LAB_001c5068;
LAB_001c5cdc:
      uVar32 = 0;
LAB_001c5078:
      lVar31 = lVar41 + uVar13 * 0x14;
      *(undefined1 *)(lVar31 + 0x736e) = *(undefined1 *)(lVar31 + 0x736f);
      *(undefined2 *)(lVar31 + 0x737a) = uVar32;
      uVar28 = *(uint *)(lVar41 + 0x1d8);
      break;
    case 0xe9:
      *(byte *)(lVar41 + (ulong)*(byte *)(lVar41 + (ulong)((uint)(bVar45 >> 6) + uVar19 * 4) + 0x27)
               + 0x97) = bVar45 & 0x3f;
      uVar28 = *(uint *)(lVar41 + 0x1d8);
      break;
    case 0xea:
      bVar40 = *(byte *)(lVar41 + (ulong)((uint)(bVar45 >> 6) + uVar19 * 4) + 0x27);
      uVar25 = (uVar35 & 0x3f) << 1;
      if (bVar40 == *(byte *)(lVar41 + 0x8649)) {
        uVar25 = 0;
      }
      *(undefined1 *)(lVar41 + (ulong)bVar40 * 0x14 + 0x736d) = (&DAT_0048e680)[uVar25];
      uVar28 = *(uint *)(lVar41 + 0x1d8);
    }
LAB_001c3b38:
    if (uVar28 == 0) goto LAB_001c3e7c;
LAB_001c3b3c:
    uVar17 = *(uint *)(lVar6 + 0x8f28);
LAB_001c3b40:
    uVar25 = uVar17 + 1;
    lVar31 = lVar41 + 0x8568 + uVar21 * 0x20;
    uVar11 = *(uint *)(lVar31 + 0x9b0);
    if (uVar25 < uVar11) {
      lVar30 = *(long *)(lVar31 + 0x9b8);
      lVar31 = lVar30 + (ulong)uVar25;
      if ((*(byte *)(lVar30 + (ulong)uVar25) & 0x3f) == 0x3f) {
        if ((char)*(byte *)(lVar31 + 1) < '\0') {
          uVar25 = uVar17 + 4;
          if (0xef < *(byte *)(lVar31 + 1)) {
            uVar25 = uVar17 + 5 + (uint)*(byte *)(lVar31 + 2) * 0x100 + (uint)*(byte *)(lVar31 + 3);
          }
        }
        else {
          uVar25 = uVar25 + *(ushort *)(lVar41 + 0x8632);
        }
      }
      else {
        uVar25 = uVar25 + *(ushort *)(lVar41 + 0x8630);
      }
      if (uVar11 < uVar25) goto LAB_001c41c0;
      *(uint *)(lVar6 + 0x8f28) = uVar25;
      lVar31 = lVar41 + 0x8568 + uVar21 * 0x20;
      if (*(uint *)(lVar31 + 0x9b0) < uVar25 + 3) goto LAB_001c41c0;
      uVar25 = (uint)*(byte *)(*(long *)(lVar31 + 0x9b8) + (ulong)uVar25);
      *(uint *)(lVar6 + 0x8f2c) = *(int *)(lVar6 + 0x8f2c) + uVar25;
      *(uint *)(lVar6 + 0x8f30) = *(int *)(lVar6 + 0x8f30) + uVar25 * *(int *)(lVar41 + 0x1ec);
      uVar28 = *(uint *)(lVar41 + 0x1d8);
    }
    else {
LAB_001c41c0:
      uVar28 = uVar28 & (1 << (ulong)(uVar19 & 0x1f) ^ 0xffffffffU);
      *(uint *)(lVar41 + 0x1d8) = uVar28;
    }
    if (uVar28 == 0) goto LAB_001c3e7c;
    bVar40 = *(byte *)(lVar41 + 0x8648);
    goto LAB_001c3934;
  }
  if (*(char *)(lVar31 + 1) != '\x7f') goto switchD_001c4214_caseD_b2;
  bVar40 = *(byte *)(lVar31 + 2);
  if (0xef < bVar40) {
    lVar30 = *(long *)(param_1 + 8);
    if (((((*(char *)(lVar30 + 0x8640) == '\x04') && ((*(byte *)(lVar30 + 0x8710) >> 6 & 1) == 0))
         && (bVar40 == 0xf0)) &&
        ((uVar19 == 0 && (5 < (uint)*(byte *)(lVar31 + 4) + (uint)*(byte *)(lVar31 + 3) * 0x100))))
       && (*(char *)(lVar30 + 0x870c) != '\0')) {
      uVar11 = *(uint *)(lVar30 + 0xb0c);
      uVar13 = (ulong)uVar11;
      uVar25 = *(byte *)(lVar31 + 5) & 0x1f;
      lVar8 = lVar30 + uVar13 * 0x14;
      *(uint *)(lVar30 + ((ulong)uVar25 + 0x2c4) * 4) = uVar11;
      lVar7 = lVar30 + uVar13 * 0x14;
      *(uint *)(lVar8 + 0xb50) = uVar25;
      *(uint *)(lVar8 + 0xb54) = (uint)*(byte *)(lVar31 + 6);
      bVar40 = *(byte *)(lVar31 + 7);
      if (bVar40 < 0x44) {
        *(undefined4 *)(lVar7 + 0xb58) = 0x44;
      }
      else if (bVar40 < 0xbc) {
        *(uint *)(lVar7 + 0xb58) = (uint)bVar40;
      }
      else {
        *(undefined4 *)(lVar7 + 0xb58) = 0xbb;
      }
      bVar40 = *(byte *)(lVar31 + 8);
      lVar8 = lVar30 + uVar13 * 0x14;
      if (bVar40 < 0x62) {
        *(undefined4 *)(lVar8 + 0xb5c) = 0x62;
      }
      else if (bVar40 < 0x9f) {
        *(uint *)(lVar8 + 0xb5c) = (uint)bVar40;
      }
      else {
        *(undefined4 *)(lVar8 + 0xb5c) = 0x9e;
      }
      iVar43 = (uint)*(byte *)(lVar31 + 9) * 0x100 + (uint)*(byte *)(lVar31 + 10);
      *(uint *)(lVar30 + uVar13 * 0x14 + 0xb60) =
           ((int)*(uint *)(lVar30 + 0x1ec) >> 10) * iVar43 +
           (iVar43 * (*(uint *)(lVar30 + 0x1ec) & 0x3ff) + 0x200 >> 10);
      *(uint *)(lVar30 + 0xb0c) = uVar11 + 1 & 0x3ff;
      uVar28 = *(uint *)(lVar41 + 0x1d8);
      goto LAB_001c3b38;
    }
    goto switchD_001c4214_caseD_b2;
  }
  lVar30 = *(long *)(param_1 + 8);
  bVar45 = *(byte *)(lVar31 + 3);
  if ((*(char *)(lVar30 + 0x8640) != '\x04') || ((*(byte *)(lVar30 + 0x8710) >> 6 & 1) != 0))
  goto switchD_001c4214_caseD_b2;
  if (bVar40 == 0x80) {
    *(byte *)(lVar30 + (ulong)((uint)(bVar45 >> 6) + uVar19 * 4) + 0x177) = bVar45 & 0x3f;
    uVar28 = *(uint *)(lVar41 + 0x1d8);
    goto LAB_001c3b38;
  }
  if (bVar40 < 0x81) {
    if (bVar40 != 0) goto switchD_001c4214_caseD_b2;
    *(byte *)(lVar30 + (ulong)((uint)(bVar45 >> 6) + uVar19 * 4) + 0x197) = bVar45 & 0x3f;
    uVar28 = *(uint *)(lVar41 + 0x1d8);
    goto LAB_001c3b38;
  }
  if (bVar40 == 0x81) {
    uVar25 = (uint)(bVar45 >> 6) + uVar19 * 4;
    if ((((*(byte *)(lVar30 + 0x8568 + (ulong)uVar25 + 0x143) >> 1 & 1) != 0) &&
        (bVar40 = *(byte *)(lVar30 + (ulong)uVar25 + 0x197), bVar40 < 0x40)) &&
       (*(int *)(lVar30 + (ulong)bVar40 * 0x20 + 0x8724) != 2)) {
      uVar11 = bVar45 & 0x3f;
      bVar45 = (byte)(uVar11 << 1);
      *(char *)(lVar30 + (ulong)bVar40 + 0x137) = (char)uVar11;
      bVar40 = *(byte *)(lVar30 + 3);
      if ((bVar40 != 0x40) && (bVar45 = bVar40, uVar11 != 0x20)) {
        bVar45 = (&DAT_0048e740)[(ulong)(uVar11 >> 1) + (ulong)(bVar40 >> 2) * 0x20];
      }
      *(byte *)(lVar30 + (ulong)(uVar25 + 0x10) * 0x14 + 0x7370) = bVar45;
      uVar28 = *(uint *)(lVar41 + 0x1d8);
      goto LAB_001c3b38;
    }
    goto switchD_001c4214_caseD_b2;
  }
  if (bVar40 != 0x90) goto switchD_001c4214_caseD_b2;
  bVar40 = *(byte *)(lVar30 + (ulong)((uint)(bVar45 >> 6) + uVar19 * 4) + 0x27);
  uVar25 = bVar45 & 0x1f;
  uVar13 = (ulong)(bVar40 + 0x10);
  if ((bVar45 & 0x20) == 0) {
    uVar13 = (ulong)bVar40;
  }
  *(char *)(lVar30 + 0x8568 + uVar13 + 0x163) = (char)uVar25;
  if (3 < uVar25) goto switchD_001c4214_caseD_b2;
  *(byte *)(lVar30 + 0xb) = (&DAT_0048e730)[(int)uVar25] | *(byte *)(lVar30 + 0xb);
  uVar28 = *(uint *)(lVar41 + 0x1d8);
  if (uVar28 != 0) goto LAB_001c3b3c;
LAB_001c3e7c:
  uVar25 = (uint)*(byte *)(lVar41 + 0x8648);
LAB_001c3e90:
  if (uVar25 != 0) {
    iVar43 = *(int *)(lVar41 + 0x1f0);
    piVar18 = (int *)(lVar41 + 0x8f30);
    do {
      piVar39 = piVar18 + 8;
      *piVar18 = *piVar18 - iVar43;
      piVar18 = piVar39;
    } while (piVar39 != (int *)(lVar41 + (ulong)(byte)((char)uVar25 - 1) * 0x20 + 0x8f50));
  }
  iVar43 = 0;
  *(undefined4 *)(lVar41 + 0x1f0) = 0;
  if (0 < iVar23) {
    do {
      *(undefined4 *)(lVar41 + 0x1f0) = 0x7fffffff;
      bVar40 = *(byte *)(lVar41 + 0x8648);
      if (bVar40 == 0) {
LAB_001c45c4:
        *(int *)(lVar41 + 0x1f0) = iVar23;
        iVar43 = iVar23;
        break;
      }
      uVar25 = *(uint *)(lVar41 + 0x1d8);
      uVar11 = 0;
      bVar45 = bVar40 - 1 & 3;
      iVar43 = 0x7fffffff;
      if (((uVar25 & 1) != 0) && (iVar16 = *(int *)(lVar41 + 0x8f30), iVar16 < 0x7fffffff)) {
        *(int *)(lVar41 + 0x1f0) = iVar16;
        iVar43 = iVar16;
      }
      piVar18 = (int *)(lVar41 + 0x8f50);
      uVar19 = 1;
      uVar17 = (uint)bVar40;
      if (1 < bVar40) {
        if (bVar45 != 0) {
          if (bVar45 != 1) {
            if (bVar45 != 2) {
              if (((uVar25 >> 1 & 1) != 0) && (iVar16 = *(int *)(lVar41 + 0x8f50), iVar16 < iVar43))
              {
                *(int *)(lVar41 + 0x1f0) = iVar16;
                uVar11 = 1;
                iVar43 = iVar16;
              }
              piVar18 = (int *)(lVar41 + 0x8f70);
              uVar19 = 2;
            }
            if (((1 << (ulong)uVar19 & uVar25) != 0) && (iVar16 = *piVar18, iVar16 < iVar43)) {
              *(int *)(lVar41 + 0x1f0) = iVar16;
              uVar11 = uVar19;
              iVar43 = iVar16;
            }
            piVar18 = piVar18 + 8;
            uVar19 = uVar19 + 1;
          }
          if (((1 << (ulong)uVar19 & uVar25) != 0) && (iVar16 = *piVar18, iVar16 < iVar43)) {
            *(int *)(lVar41 + 0x1f0) = iVar16;
            uVar11 = uVar19;
            iVar43 = iVar16;
          }
          uVar19 = uVar19 + 1;
          piVar18 = piVar18 + 8;
          if (bVar40 <= uVar19) goto LAB_001c40a4;
        }
        do {
          if (((1 << (ulong)(uVar19 & 0x1f) & uVar25) != 0) && (iVar16 = *piVar18, iVar16 < iVar43))
          {
            *(int *)(lVar41 + 0x1f0) = iVar16;
            uVar11 = uVar19;
            iVar43 = iVar16;
          }
          if (((1 << (ulong)(uVar19 + 1 & 0x1f) & uVar25) != 0) &&
             (iVar16 = piVar18[8], iVar16 < iVar43)) {
            *(int *)(lVar41 + 0x1f0) = iVar16;
            uVar11 = uVar19 + 1;
            iVar43 = iVar16;
          }
          if (((1 << (ulong)(uVar19 + 2 & 0x1f) & uVar25) != 0) &&
             (iVar16 = piVar18[0x10], iVar16 < iVar43)) {
            *(int *)(lVar41 + 0x1f0) = iVar16;
            uVar11 = uVar19 + 2;
            iVar43 = iVar16;
          }
          if (((1 << (ulong)(uVar19 + 3 & 0x1f) & uVar25) != 0) &&
             (iVar16 = piVar18[0x18], iVar16 < iVar43)) {
            *(int *)(lVar41 + 0x1f0) = iVar16;
            uVar11 = uVar19 + 3;
            iVar43 = iVar16;
          }
          uVar19 = uVar19 + 4;
          piVar18 = piVar18 + 0x20;
        } while ((uVar19 & 0xff) < uVar17);
      }
LAB_001c40a4:
      if (iVar23 <= iVar43) goto LAB_001c45c4;
      uVar21 = (ulong)uVar11;
      lVar6 = lVar41 + uVar21 * 0x20;
      iVar43 = *(int *)(lVar6 + 0x8f2c);
      *(int *)(lVar41 + 0x1e0) = iVar43;
      iVar16 = *(int *)(lVar6 + 0x8f30);
      *(int *)(lVar41 + 0x1f0) = iVar16;
      uVar19 = *(uint *)(lVar6 + 0x8f28);
      lVar31 = *(long *)(lVar41 + uVar21 * 0x20 + 0x8f20) + (ulong)uVar19;
      if (*(char *)(lVar31 + 1) == -1) {
        bVar40 = *(byte *)(lVar31 + 2);
        if (0xef < bVar40) {
          FUN_001bb5b0(param_1,0xffffffff,uVar11,bVar40,lVar31 + 5,
                       (uint)*(byte *)(lVar31 + 4) + (uint)*(byte *)(lVar31 + 3) * 0x100);
          uVar25 = *(uint *)(lVar41 + 0x1d8);
          goto switchD_001c4490_caseD_b2;
        }
        bVar45 = *(byte *)(lVar31 + 3);
        uVar28 = (uint)bVar45;
        if (((*(byte *)(lVar41 + 0x8710) & 0x40) != 0) ||
           (uVar22 = (uint)bVar40, 0x3a < uVar22 - 0xb0)) goto switchD_001c4490_caseD_b2;
        uVar35 = (uint)bVar45;
        switch(uVar22) {
        case 0xb0:
          if ((uVar11 == 0) && (uVar35 < 0x80)) {
            *(byte *)(lVar41 + 2) = bVar45;
          }
          break;
        case 0xb1:
          if ((uVar11 == 0) && (uVar35 < 0x80)) {
            *(byte *)(lVar41 + 3) = bVar45;
            uVar25 = *(byte *)(lVar41 + 0x77) & 0x7f;
            if (uVar35 == 0x40) {
              *(char *)(lVar41 + 0x7370) = (char)(uVar25 << 1);
              *(char *)(lVar41 + 0x7384) = *(char *)(lVar41 + 0x78) << 1;
              *(char *)(lVar41 + 0x7398) = *(char *)(lVar41 + 0x79) << 1;
              *(char *)(lVar41 + 0x73ac) = *(char *)(lVar41 + 0x7a) << 1;
              *(char *)(lVar41 + 0x73c0) = *(char *)(lVar41 + 0x7b) << 1;
              *(char *)(lVar41 + 0x73d4) = *(char *)(lVar41 + 0x7c) << 1;
              *(char *)(lVar41 + 0x73e8) = *(char *)(lVar41 + 0x7d) << 1;
              *(char *)(lVar41 + 0x73fc) = *(char *)(lVar41 + 0x7e) << 1;
              *(char *)(lVar41 + 0x7410) = *(char *)(lVar41 + 0x7f) << 1;
              *(char *)(lVar41 + 0x7424) = *(char *)(lVar41 + 0x80) << 1;
              *(char *)(lVar41 + 0x7438) = *(char *)(lVar41 + 0x81) << 1;
              *(char *)(lVar41 + 0x744c) = *(char *)(lVar41 + 0x82) << 1;
              *(char *)(lVar41 + 0x7460) = *(char *)(lVar41 + 0x83) << 1;
              *(char *)(lVar41 + 0x7474) = *(char *)(lVar41 + 0x84) << 1;
              *(char *)(lVar41 + 0x7488) = *(char *)(lVar41 + 0x85) << 1;
              bVar40 = *(char *)(lVar41 + 0x86) << 1;
            }
            else {
              bVar40 = bVar45;
              if (uVar25 != 0x20) {
                bVar40 = (&DAT_0048e740)
                         [(ulong)((*(byte *)(lVar41 + 0x77) & 0x7f) >> 1) +
                          (ulong)(bVar45 >> 2) * 0x20];
              }
              *(byte *)(lVar41 + 0x7370) = bVar40;
              bVar40 = bVar45;
              if ((*(byte *)(lVar41 + 0x78) & 0x7f) != 0x20) {
                bVar40 = (&DAT_0048e740)
                         [(ulong)((*(byte *)(lVar41 + 0x78) & 0x7f) >> 1) +
                          (ulong)(bVar45 >> 2) * 0x20];
              }
              *(byte *)(lVar41 + 0x7384) = bVar40;
              bVar40 = bVar45;
              if ((*(byte *)(lVar41 + 0x79) & 0x7f) != 0x20) {
                bVar40 = (&DAT_0048e740)
                         [(ulong)((*(byte *)(lVar41 + 0x79) & 0x7f) >> 1) +
                          (ulong)(bVar45 >> 2) * 0x20];
              }
              *(byte *)(lVar41 + 0x7398) = bVar40;
              bVar40 = bVar45;
              if ((*(byte *)(lVar41 + 0x7a) & 0x7f) != 0x20) {
                bVar40 = (&DAT_0048e740)
                         [(ulong)((*(byte *)(lVar41 + 0x7a) & 0x7f) >> 1) +
                          (ulong)(bVar45 >> 2) * 0x20];
              }
              *(byte *)(lVar41 + 0x73ac) = bVar40;
              bVar40 = bVar45;
              if ((*(byte *)(lVar41 + 0x7b) & 0x7f) != 0x20) {
                bVar40 = (&DAT_0048e740)
                         [(ulong)((*(byte *)(lVar41 + 0x7b) & 0x7f) >> 1) +
                          (ulong)(bVar45 >> 2) * 0x20];
              }
              *(byte *)(lVar41 + 0x73c0) = bVar40;
              bVar40 = bVar45;
              if ((*(byte *)(lVar41 + 0x7c) & 0x7f) != 0x20) {
                bVar40 = (&DAT_0048e740)
                         [(ulong)((*(byte *)(lVar41 + 0x7c) & 0x7f) >> 1) +
                          (ulong)(bVar45 >> 2) * 0x20];
              }
              *(byte *)(lVar41 + 0x73d4) = bVar40;
              bVar40 = bVar45;
              if ((*(byte *)(lVar41 + 0x7d) & 0x7f) != 0x20) {
                bVar40 = (&DAT_0048e740)
                         [(ulong)((*(byte *)(lVar41 + 0x7d) & 0x7f) >> 1) +
                          (ulong)(bVar45 >> 2) * 0x20];
              }
              *(byte *)(lVar41 + 0x73e8) = bVar40;
              bVar40 = bVar45;
              if ((*(byte *)(lVar41 + 0x7e) & 0x7f) != 0x20) {
                bVar40 = (&DAT_0048e740)
                         [(ulong)((*(byte *)(lVar41 + 0x7e) & 0x7f) >> 1) +
                          (ulong)(bVar45 >> 2) * 0x20];
              }
              *(byte *)(lVar41 + 0x73fc) = bVar40;
              bVar40 = bVar45;
              if ((*(byte *)(lVar41 + 0x7f) & 0x7f) != 0x20) {
                bVar40 = (&DAT_0048e740)
                         [(ulong)((*(byte *)(lVar41 + 0x7f) & 0x7f) >> 1) +
                          (ulong)(bVar45 >> 2) * 0x20];
              }
              *(byte *)(lVar41 + 0x7410) = bVar40;
              bVar40 = bVar45;
              if ((*(byte *)(lVar41 + 0x80) & 0x7f) != 0x20) {
                bVar40 = (&DAT_0048e740)
                         [(ulong)((*(byte *)(lVar41 + 0x80) & 0x7f) >> 1) +
                          (ulong)(bVar45 >> 2) * 0x20];
              }
              *(byte *)(lVar41 + 0x7424) = bVar40;
              bVar40 = bVar45;
              if ((*(byte *)(lVar41 + 0x81) & 0x7f) != 0x20) {
                bVar40 = (&DAT_0048e740)
                         [(ulong)((*(byte *)(lVar41 + 0x81) & 0x7f) >> 1) +
                          (ulong)(bVar45 >> 2) * 0x20];
              }
              *(byte *)(lVar41 + 0x7438) = bVar40;
              bVar40 = bVar45;
              if ((*(byte *)(lVar41 + 0x82) & 0x7f) != 0x20) {
                bVar40 = (&DAT_0048e740)
                         [(ulong)((*(byte *)(lVar41 + 0x82) & 0x7f) >> 1) +
                          (ulong)(bVar45 >> 2) * 0x20];
              }
              *(byte *)(lVar41 + 0x744c) = bVar40;
              bVar40 = bVar45;
              if ((*(byte *)(lVar41 + 0x83) & 0x7f) != 0x20) {
                bVar40 = (&DAT_0048e740)
                         [(ulong)((*(byte *)(lVar41 + 0x83) & 0x7f) >> 1) +
                          (ulong)(bVar45 >> 2) * 0x20];
              }
              *(byte *)(lVar41 + 0x7460) = bVar40;
              bVar40 = bVar45;
              if ((*(byte *)(lVar41 + 0x84) & 0x7f) != 0x20) {
                bVar40 = (&DAT_0048e740)
                         [(ulong)((*(byte *)(lVar41 + 0x84) & 0x7f) >> 1) +
                          (ulong)(bVar45 >> 2) * 0x20];
              }
              *(byte *)(lVar41 + 0x7474) = bVar40;
              bVar40 = bVar45;
              if ((*(byte *)(lVar41 + 0x85) & 0x7f) != 0x20) {
                bVar40 = (&DAT_0048e740)
                         [(ulong)((*(byte *)(lVar41 + 0x85) & 0x7f) >> 1) +
                          (ulong)(bVar45 >> 2) * 0x20];
              }
              *(byte *)(lVar41 + 0x7488) = bVar40;
              bVar40 = bVar45;
              if ((*(byte *)(lVar41 + 0x86) & 0x7f) != 0x20) {
                bVar40 = (&DAT_0048e740)
                         [(ulong)((*(byte *)(lVar41 + 0x86) & 0x7f) >> 1) +
                          (ulong)(bVar45 >> 2) * 0x20];
              }
            }
            *(byte *)(lVar41 + 0x749c) = bVar40;
            if (*(byte *)(lVar41 + 0x197) < 0x40) {
              uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x197) + 0x137);
              if (uVar25 == 0xff) {
                *(byte *)(lVar41 + 0x74b0) = bVar45;
              }
              else {
                uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
                if (uVar35 != 0x40) {
                  if ((uVar25 & 0x7f) == 0x20) {
                    *(byte *)(lVar41 + 0x74b0) = bVar45;
                    goto LAB_001c7a38;
                  }
                  uVar36 = (&DAT_0048e740)
                           [(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
                }
                *(undefined1 *)(lVar41 + 0x74b0) = uVar36;
              }
            }
LAB_001c7a38:
            if (*(byte *)(lVar41 + 0x198) < 0x40) {
              uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x198) + 0x137);
              if (uVar25 == 0xff) {
                *(byte *)(lVar41 + 0x74c4) = bVar45;
              }
              else {
                uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
                if (uVar35 != 0x40) {
                  if ((uVar25 & 0x7f) == 0x20) {
                    *(byte *)(lVar41 + 0x74c4) = bVar45;
                    goto LAB_001c7a7c;
                  }
                  uVar36 = (&DAT_0048e740)
                           [(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
                }
                *(undefined1 *)(lVar41 + 0x74c4) = uVar36;
              }
            }
LAB_001c7a7c:
            if (*(byte *)(lVar41 + 0x199) < 0x40) {
              uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x199) + 0x137);
              if (uVar25 == 0xff) {
                *(byte *)(lVar41 + 0x74d8) = bVar45;
              }
              else {
                uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
                if (uVar35 != 0x40) {
                  if ((uVar25 & 0x7f) == 0x20) {
                    *(byte *)(lVar41 + 0x74d8) = bVar45;
                    goto LAB_001c7ac0;
                  }
                  uVar36 = (&DAT_0048e740)
                           [(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
                }
                *(undefined1 *)(lVar41 + 0x74d8) = uVar36;
              }
            }
LAB_001c7ac0:
            if (*(byte *)(lVar41 + 0x19a) < 0x40) {
              uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x19a) + 0x137);
              if (uVar25 == 0xff) {
                *(byte *)(lVar41 + 0x74ec) = bVar45;
              }
              else {
                uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
                if (uVar35 != 0x40) {
                  if ((uVar25 & 0x7f) == 0x20) {
                    *(byte *)(lVar41 + 0x74ec) = bVar45;
                    goto LAB_001c7b04;
                  }
                  uVar36 = (&DAT_0048e740)
                           [(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
                }
                *(undefined1 *)(lVar41 + 0x74ec) = uVar36;
              }
            }
LAB_001c7b04:
            if (*(byte *)(lVar41 + 0x19b) < 0x40) {
              uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x19b) + 0x137);
              if (uVar25 == 0xff) {
                *(byte *)(lVar41 + 0x7500) = bVar45;
              }
              else {
                uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
                if (uVar35 != 0x40) {
                  if ((uVar25 & 0x7f) == 0x20) {
                    *(byte *)(lVar41 + 0x7500) = bVar45;
                    goto LAB_001c7b48;
                  }
                  uVar36 = (&DAT_0048e740)
                           [(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
                }
                *(undefined1 *)(lVar41 + 0x7500) = uVar36;
              }
            }
LAB_001c7b48:
            if (*(byte *)(lVar41 + 0x19c) < 0x40) {
              uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x19c) + 0x137);
              if (uVar25 == 0xff) {
                *(byte *)(lVar41 + 0x7514) = bVar45;
              }
              else {
                uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
                if (uVar35 != 0x40) {
                  if ((uVar25 & 0x7f) == 0x20) {
                    *(byte *)(lVar41 + 0x7514) = bVar45;
                    goto LAB_001c7b8c;
                  }
                  uVar36 = (&DAT_0048e740)
                           [(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
                }
                *(undefined1 *)(lVar41 + 0x7514) = uVar36;
              }
            }
LAB_001c7b8c:
            if (*(byte *)(lVar41 + 0x19d) < 0x40) {
              uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x19d) + 0x137);
              if (uVar25 == 0xff) {
                *(byte *)(lVar41 + 0x7528) = bVar45;
              }
              else {
                uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
                if (uVar35 != 0x40) {
                  if ((uVar25 & 0x7f) == 0x20) {
                    *(byte *)(lVar41 + 0x7528) = bVar45;
                    goto LAB_001c7bd0;
                  }
                  uVar36 = (&DAT_0048e740)
                           [(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
                }
                *(undefined1 *)(lVar41 + 0x7528) = uVar36;
              }
            }
LAB_001c7bd0:
            if (*(byte *)(lVar41 + 0x19e) < 0x40) {
              uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x19e) + 0x137);
              if (uVar25 == 0xff) {
                *(byte *)(lVar41 + 0x753c) = bVar45;
              }
              else {
                uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
                if (bVar45 != 0x40) {
                  if ((uVar25 & 0x7f) == 0x20) {
                    *(byte *)(lVar41 + 0x753c) = bVar45;
                    goto LAB_001c7c14;
                  }
                  uVar36 = (&DAT_0048e740)
                           [(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
                }
                *(undefined1 *)(lVar41 + 0x753c) = uVar36;
              }
            }
LAB_001c7c14:
            if (*(byte *)(lVar41 + 0x19f) < 0x40) {
              uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x19f) + 0x137);
              if (uVar25 == 0xff) {
                *(byte *)(lVar41 + 0x7550) = bVar45;
              }
              else {
                uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
                if (uVar35 != 0x40) {
                  if ((uVar25 & 0x7f) == 0x20) {
                    *(byte *)(lVar41 + 0x7550) = bVar45;
                    goto LAB_001c7c58;
                  }
                  uVar36 = (&DAT_0048e740)
                           [(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
                }
                *(undefined1 *)(lVar41 + 0x7550) = uVar36;
              }
            }
LAB_001c7c58:
            if (*(byte *)(lVar41 + 0x1a0) < 0x40) {
              uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x1a0) + 0x137);
              if (uVar25 == 0xff) {
                *(byte *)(lVar41 + 0x7564) = bVar45;
              }
              else {
                uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
                if (bVar45 != 0x40) {
                  if ((uVar25 & 0x7f) == 0x20) {
                    *(byte *)(lVar41 + 0x7564) = bVar45;
                    goto LAB_001c7c9c;
                  }
                  uVar36 = (&DAT_0048e740)
                           [(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
                }
                *(undefined1 *)(lVar41 + 0x7564) = uVar36;
              }
            }
LAB_001c7c9c:
            if (*(byte *)(lVar41 + 0x1a1) < 0x40) {
              uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x1a1) + 0x137);
              if (uVar25 == 0xff) {
                *(byte *)(lVar41 + 0x7578) = bVar45;
              }
              else {
                uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
                if (uVar35 != 0x40) {
                  if ((uVar25 & 0x7f) == 0x20) {
                    *(byte *)(lVar41 + 0x7578) = bVar45;
                    goto LAB_001c7ce0;
                  }
                  uVar36 = (&DAT_0048e740)
                           [(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
                }
                *(undefined1 *)(lVar41 + 0x7578) = uVar36;
              }
            }
LAB_001c7ce0:
            if (*(byte *)(lVar41 + 0x1a2) < 0x40) {
              uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x1a2) + 0x137);
              if (uVar25 == 0xff) {
                *(byte *)(lVar41 + 0x758c) = bVar45;
              }
              else {
                uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
                if (bVar45 != 0x40) {
                  if ((uVar25 & 0x7f) == 0x20) {
                    *(byte *)(lVar41 + 0x758c) = bVar45;
                    goto LAB_001c7d24;
                  }
                  uVar36 = (&DAT_0048e740)
                           [(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
                }
                *(undefined1 *)(lVar41 + 0x758c) = uVar36;
              }
            }
LAB_001c7d24:
            if (*(byte *)(lVar41 + 0x1a3) < 0x40) {
              uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x1a3) + 0x137);
              if (uVar25 == 0xff) {
                *(byte *)(lVar41 + 0x75a0) = bVar45;
              }
              else {
                uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
                if (uVar35 != 0x40) {
                  if ((uVar25 & 0x7f) == 0x20) {
                    *(byte *)(lVar41 + 0x75a0) = bVar45;
                    goto LAB_001c7d68;
                  }
                  uVar36 = (&DAT_0048e740)
                           [(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
                }
                *(undefined1 *)(lVar41 + 0x75a0) = uVar36;
              }
            }
LAB_001c7d68:
            if (*(byte *)(lVar41 + 0x1a4) < 0x40) {
              uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x1a4) + 0x137);
              if (uVar25 == 0xff) {
                *(byte *)(lVar41 + 0x75b4) = bVar45;
              }
              else {
                uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
                if (bVar45 != 0x40) {
                  if ((uVar25 & 0x7f) == 0x20) {
                    *(byte *)(lVar41 + 0x75b4) = bVar45;
                    goto LAB_001c7dac;
                  }
                  uVar36 = (&DAT_0048e740)
                           [(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
                }
                *(undefined1 *)(lVar41 + 0x75b4) = uVar36;
              }
            }
LAB_001c7dac:
            if (*(byte *)(lVar41 + 0x1a5) < 0x40) {
              uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x1a5) + 0x137);
              if (uVar25 == 0xff) {
                *(byte *)(lVar41 + 0x75c8) = bVar45;
              }
              else {
                uVar36 = (undefined1)((uVar25 & 0x7f) << 1);
                if (uVar35 != 0x40) {
                  if ((uVar25 & 0x7f) == 0x20) {
                    *(byte *)(lVar41 + 0x75c8) = bVar45;
                    goto LAB_001c7df0;
                  }
                  uVar36 = (&DAT_0048e740)
                           [(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
                }
                *(undefined1 *)(lVar41 + 0x75c8) = uVar36;
              }
            }
LAB_001c7df0:
            if (0x3f < *(byte *)(lVar41 + 0x1a6)) goto LAB_001c45bc;
            uVar25 = (uint)*(byte *)(lVar41 + (int)(uint)*(byte *)(lVar41 + 0x1a6) + 0x137);
            if (uVar25 == 0xff) {
              *(byte *)(lVar41 + 0x75dc) = bVar45;
              uVar25 = *(uint *)(lVar41 + 0x1d8);
            }
            else {
              bVar40 = (byte)((uVar25 & 0x7f) << 1);
              if ((uVar35 != 0x40) && (bVar40 = bVar45, (uVar25 & 0x7f) != 0x20)) {
                bVar40 = (&DAT_0048e740)
                         [(ulong)((uVar25 & 0x7f) >> 1) + (ulong)(bVar45 >> 2) * 0x20];
              }
              *(byte *)(lVar41 + 0x75dc) = bVar40;
              uVar25 = *(uint *)(lVar41 + 0x1d8);
            }
          }
          break;
        case 0xba:
          if ((uVar11 == 0) && (-1 < (char)bVar45)) {
            uVar13 = (ulong)(bVar45 >> 3) & 0xf;
            uVar19 = bVar45 & 7;
            lVar31 = lVar41 + uVar13;
            *(char *)(lVar31 + 0x37) = (char)uVar19;
            if (*(byte *)(lVar41 + 0xc) < 3) {
              if ((*(byte *)(lVar41 + 0xc) == 1) && (*(char *)(lVar31 + 0x17) == '\x01')) {
                uVar19 = 1;
                uVar17 = (uint)uVar13;
                uVar28 = (uint)uVar13 << 1;
                uVar22 = 8;
              }
              else {
                bVar40 = *(byte *)(lVar41 + uVar13 + 0x57);
                if (bVar40 < 2) {
                  uVar17 = uVar19;
                  uVar28 = uVar19;
                  uVar22 = uVar19;
                  if ((bVar45 & 7) != 0) goto LAB_001c96d0;
                }
                else {
                  bVar9 = (bVar40 >> 1) - 1;
                  if ((bVar45 & 7) != 0) goto LAB_001c5d88;
                  uVar19 = (uint)bVar9;
                  uVar28 = (uint)*(byte *)(lVar31 + 0x47) + (bVar40 & 1) * 0x40;
                  uVar17 = uVar28 & 0x7f;
                  uVar28 = (uVar28 & 0xf) << 1;
                  uVar22 = uVar19 * 8 + (uVar17 >> 4);
                }
              }
              lVar31 = lVar41 + uVar13 * 4;
              lVar30 = lVar41 + uVar13 * 0x14;
              *(char *)(lVar30 + 0x736b) = (char)uVar19;
              *(char *)(lVar30 + 0x736a) = (char)uVar17;
              uVar19 = *(uint *)(lVar41 + (ulong)uVar22 * 4 + 0x28c) >> (ulong)uVar28 & 3;
              uVar26 = *(undefined4 *)(&DAT_0048df90 + (ulong)uVar19 * 4);
              *(undefined4 *)(lVar31 + 0x20c) = *(undefined4 *)(&DAT_0048df80 + (ulong)uVar19 * 4);
              *(undefined4 *)(lVar31 + 0x24c) = uVar26;
            }
            else if (uVar19 == 1) {
              bVar40 = *(byte *)(lVar31 + 0x57);
              if (bVar40 < 2) {
LAB_001c96d0:
                lVar31 = lVar41 + uVar13 * 0x14;
                *(undefined1 *)(lVar31 + 0x736b) = 0x80;
                *(byte *)(lVar31 + 0x736a) = bVar40;
              }
              else {
                bVar9 = (bVar40 >> 1) - 1;
LAB_001c5d88:
                lVar31 = lVar41 + uVar13 * 0x14;
                *(byte *)(lVar31 + 0x736b) = bVar9 + 0x80;
                *(byte *)(lVar31 + 0x736a) = bVar40 & 1;
              }
              lVar31 = lVar41 + uVar13 * 4;
              *(undefined4 *)(lVar31 + 0x20c) = 0x18;
              *(undefined4 *)(lVar31 + 0x24c) = 2;
            }
          }
          break;
        case 0xbc:
          if ((uVar11 == 0) && (uVar35 < 0x80)) {
            iVar34 = (uVar35 - 0x40) + *(int *)(lVar41 + 0x1e4);
            if (iVar34 < 0x14) {
              iVar34 = 0x14;
              *(undefined4 *)(lVar41 + 0x1e4) = 0x14;
            }
            else {
              if (0xff < iVar34) {
                iVar34 = 0xff;
              }
              *(int *)(lVar41 + 0x1e4) = iVar34;
            }
            uVar19 = uVar17 - 1 & 3;
            lVar31 = (long)(iVar34 * *(int *)(lVar41 + 0x1e8));
            iVar34 = 0;
            if (lVar31 != 0) {
              iVar34 = (int)(0x3a98000 / lVar31);
            }
            *(int *)(lVar41 + 0x1ec) = iVar34;
            if (((uVar25 & 1) != 0) && (iVar16 < *(int *)(lVar41 + 0x8f30))) {
              *(int *)(lVar41 + 0x8f30) = iVar16 + iVar34 * (*(int *)(lVar41 + 0x8f2c) - iVar43);
            }
            uVar28 = 1;
            piVar18 = (int *)(lVar41 + 0x8f50);
            if (uVar17 != 1) {
              if (uVar19 != 0) {
                if (uVar19 != 1) {
                  if (uVar19 != 2) {
                    if (((uVar25 >> 1 & 1) != 0) && (iVar16 < *(int *)(lVar41 + 0x8f50))) {
                      *(int *)(lVar41 + 0x8f50) =
                           iVar16 + iVar34 * (*(int *)(lVar41 + 0x8f4c) - iVar43);
                    }
                    uVar28 = 2;
                    piVar18 = (int *)(lVar41 + 0x8f70);
                  }
                  if (((1 << (ulong)uVar28 & uVar25) != 0) && (iVar16 < *piVar18)) {
                    *piVar18 = iVar16 + iVar34 * (piVar18[-1] - iVar43);
                  }
                  uVar28 = uVar28 + 1;
                  piVar18 = piVar18 + 8;
                }
                if (((1 << (ulong)uVar28 & uVar25) != 0) && (iVar16 < *piVar18)) {
                  *piVar18 = iVar16 + iVar34 * (piVar18[-1] - iVar43);
                }
                uVar28 = uVar28 + 1;
                piVar18 = piVar18 + 8;
                if (uVar28 == uVar17) break;
              }
              do {
                if (((1 << (ulong)(uVar28 & 0x1f) & uVar25) != 0) && (iVar16 < *piVar18)) {
                  *piVar18 = iVar16 + iVar34 * (piVar18[-1] - iVar43);
                }
                if (((1 << (ulong)(uVar28 + 1 & 0x1f) & uVar25) != 0) && (iVar16 < piVar18[8])) {
                  piVar18[8] = iVar16 + iVar34 * (piVar18[7] - iVar43);
                }
                if (((1 << (ulong)(uVar28 + 2 & 0x1f) & uVar25) != 0) && (iVar16 < piVar18[0x10])) {
                  piVar18[0x10] = iVar16 + iVar34 * (piVar18[0xf] - iVar43);
                }
                if (((1 << (ulong)(uVar28 + 3 & 0x1f) & uVar25) != 0) && (iVar16 < piVar18[0x18])) {
                  piVar18[0x18] = iVar16 + iVar34 * (piVar18[0x17] - iVar43);
                }
                uVar28 = uVar28 + 4;
                piVar18 = piVar18 + 0x20;
              } while (uVar28 != uVar17);
            }
          }
          break;
        case 0xbd:
          if ((uVar11 == 0) && (uVar35 < 0x80)) {
            iVar43 = (uint)*(byte *)(lVar41 + 2) + (uVar35 - 0x40);
            if (0x7f < iVar43) {
              iVar43 = 0x7f;
            }
            if (iVar43 < 0) {
              iVar43 = 0;
            }
            *(char *)(lVar41 + 2) = (char)iVar43;
          }
          break;
        case 0xbf:
          if (uVar11 == 0) {
            *(undefined1 *)(lVar41 + 4) = 0x7f;
            *(undefined1 *)(lVar41 + 0x57) = 2;
            *(undefined1 *)(lVar41 + 0x67) = 0x3f;
            *(undefined1 *)(lVar41 + 0xa7) = 0x7f;
            *(undefined1 *)(lVar41 + 0x58) = 2;
            *(undefined1 *)(lVar41 + 0x68) = 0x3f;
            *(undefined1 *)(lVar41 + 0xa8) = 0x7f;
            *(undefined1 *)(lVar41 + 0x59) = 2;
            *(undefined1 *)(lVar41 + 0x69) = 0x3f;
            *(undefined1 *)(lVar41 + 0xa9) = 0x7f;
            *(undefined1 *)(lVar41 + 0x29) = 2;
            *(undefined1 *)(lVar41 + 3) = 0x40;
            *(undefined1 *)(lVar41 + 0x37) = 0;
            *(undefined1 *)(lVar41 + 0x47) = 0;
            *(undefined1 *)(lVar41 + 0x77) = 0x20;
            *(undefined1 *)(lVar41 + 0x27) = 0;
            *(undefined1 *)(lVar41 + 0x97) = 0x20;
            *(undefined1 *)(lVar41 + 0x87) = 0x20;
            *(undefined1 *)(lVar41 + 0x38) = 0;
            *(undefined1 *)(lVar41 + 0x48) = 0;
            *(undefined1 *)(lVar41 + 0x78) = 0x20;
            *(undefined1 *)(lVar41 + 0x28) = 1;
            *(undefined1 *)(lVar41 + 0x98) = 0x20;
            *(undefined1 *)(lVar41 + 0x88) = 0x20;
            *(undefined1 *)(lVar41 + 0x39) = 0;
            *(undefined1 *)(lVar41 + 0x49) = 0;
            *(undefined1 *)(lVar41 + 0x79) = 0x20;
            *(undefined1 *)(lVar41 + 0x99) = 0x20;
            *(undefined1 *)(lVar41 + 0x89) = 0x20;
            *(undefined1 *)(lVar41 + 0x3a) = 0;
            *(undefined1 *)(lVar41 + 0x4a) = 0;
            *(undefined1 *)(lVar41 + 0x5a) = 2;
            *(undefined1 *)(lVar41 + 0x6a) = 0x3f;
            *(undefined1 *)(lVar41 + 0xaa) = 0x7f;
            *(undefined1 *)(lVar41 + 0x5b) = 2;
            *(undefined1 *)(lVar41 + 0x6b) = 0x3f;
            *(undefined1 *)(lVar41 + 0xab) = 0x7f;
            *(undefined1 *)(lVar41 + 0x5c) = 2;
            *(undefined1 *)(lVar41 + 0x6c) = 0x3f;
            *(undefined1 *)(lVar41 + 0xac) = 0x7f;
            *(undefined1 *)(lVar41 + 0x5d) = 2;
            *(undefined1 *)(lVar41 + 0x6d) = 0x3f;
            *(undefined1 *)(lVar41 + 0xad) = 0x7f;
            *(undefined1 *)(lVar41 + 0x7a) = 0x20;
            *(undefined1 *)(lVar41 + 0x2a) = 3;
            *(undefined1 *)(lVar41 + 0x9a) = 0x20;
            *(undefined1 *)(lVar41 + 0x8a) = 0x20;
            *(undefined1 *)(lVar41 + 0x3b) = 0;
            *(undefined1 *)(lVar41 + 0x4b) = 0;
            *(undefined1 *)(lVar41 + 0x7b) = 0x20;
            *(undefined1 *)(lVar41 + 0x2b) = 4;
            *(undefined1 *)(lVar41 + 0x9b) = 0x20;
            *(undefined1 *)(lVar41 + 0x8b) = 0x20;
            *(undefined1 *)(lVar41 + 0x3c) = 0;
            *(undefined1 *)(lVar41 + 0x4c) = 0;
            *(undefined1 *)(lVar41 + 0x7c) = 0x20;
            *(undefined1 *)(lVar41 + 0x2c) = 5;
            *(undefined1 *)(lVar41 + 0x9c) = 0x20;
            *(undefined1 *)(lVar41 + 0x8c) = 0x20;
            *(undefined1 *)(lVar41 + 0x3d) = 0;
            *(undefined1 *)(lVar41 + 0x4d) = 0;
            *(undefined1 *)(lVar41 + 0x7d) = 0x20;
            *(undefined1 *)(lVar41 + 0x2d) = 6;
            *(undefined1 *)(lVar41 + 0x9d) = 0x20;
            *(undefined1 *)(lVar41 + 0x8d) = 0x20;
            *(undefined1 *)(lVar41 + 0x3e) = 0;
            *(undefined1 *)(lVar41 + 0x5e) = 2;
            *(undefined1 *)(lVar41 + 0x6e) = 0x3f;
            *(undefined1 *)(lVar41 + 0xae) = 0x7f;
            *(undefined1 *)(lVar41 + 0x5f) = 2;
            *(undefined1 *)(lVar41 + 0x6f) = 0x3f;
            *(undefined1 *)(lVar41 + 0xaf) = 0x7f;
            *(undefined1 *)(lVar41 + 0x60) = 2;
            *(undefined1 *)(lVar41 + 0x70) = 0x3f;
            *(bool *)(lVar41 + 0x40) = 1 < *(byte *)(lVar41 + 0xc);
            *(undefined1 *)(lVar41 + 0xb0) = 0x7f;
            *(undefined1 *)(lVar41 + 0x61) = 2;
            *(undefined1 *)(lVar41 + 0x71) = 0x3f;
            *(undefined1 *)(lVar41 + 0xb1) = 0x7f;
            *(undefined1 *)(lVar41 + 0x4e) = 0;
            *(undefined1 *)(lVar41 + 0x7e) = 0x20;
            *(undefined1 *)(lVar41 + 0x2e) = 7;
            *(undefined1 *)(lVar41 + 0x9e) = 0x20;
            *(undefined1 *)(lVar41 + 0x8e) = 0x20;
            *(undefined1 *)(lVar41 + 0x3f) = 0;
            *(undefined1 *)(lVar41 + 0x4f) = 0;
            *(undefined1 *)(lVar41 + 0x7f) = 0x20;
            *(undefined1 *)(lVar41 + 0x2f) = 8;
            *(undefined1 *)(lVar41 + 0x9f) = 0x20;
            *(undefined1 *)(lVar41 + 0x8f) = 0x20;
            *(undefined1 *)(lVar41 + 0x50) = 0;
            *(undefined1 *)(lVar41 + 0x80) = 0x20;
            *(undefined1 *)(lVar41 + 0x30) = 9;
            *(undefined1 *)(lVar41 + 0xa0) = 0x20;
            *(undefined1 *)(lVar41 + 0x90) = 0x20;
            *(undefined1 *)(lVar41 + 0x41) = 0;
            *(undefined1 *)(lVar41 + 0x51) = 0;
            *(undefined1 *)(lVar41 + 0x81) = 0x20;
            *(undefined1 *)(lVar41 + 0x31) = 10;
            *(undefined1 *)(lVar41 + 0x62) = 2;
            *(undefined1 *)(lVar41 + 0x72) = 0x3f;
            *(undefined1 *)(lVar41 + 0xb2) = 0x7f;
            *(undefined1 *)(lVar41 + 99) = 2;
            *(undefined1 *)(lVar41 + 0x73) = 0x3f;
            *(undefined1 *)(lVar41 + 0xb3) = 0x7f;
            *(undefined1 *)(lVar41 + 100) = 2;
            *(undefined1 *)(lVar41 + 0x74) = 0x3f;
            *(undefined1 *)(lVar41 + 0xb4) = 0x7f;
            *(undefined1 *)(lVar41 + 0x65) = 2;
            *(undefined1 *)(lVar41 + 0x75) = 0x3f;
            *(undefined1 *)(lVar41 + 0xa1) = 0x20;
            *(undefined1 *)(lVar41 + 0x91) = 0x20;
            *(undefined1 *)(lVar41 + 0x42) = 0;
            *(undefined1 *)(lVar41 + 0x52) = 0;
            *(undefined1 *)(lVar41 + 0x82) = 0x20;
            *(undefined1 *)(lVar41 + 0x32) = 0xb;
            *(undefined1 *)(lVar41 + 0xa2) = 0x20;
            *(undefined1 *)(lVar41 + 0x92) = 0x20;
            *(undefined1 *)(lVar41 + 0x43) = 0;
            *(undefined1 *)(lVar41 + 0x53) = 0;
            *(undefined1 *)(lVar41 + 0x83) = 0x20;
            *(undefined1 *)(lVar41 + 0x33) = 0xc;
            *(undefined1 *)(lVar41 + 0xa3) = 0x20;
            *(undefined1 *)(lVar41 + 0x93) = 0x20;
            *(undefined1 *)(lVar41 + 0x44) = 0;
            *(undefined1 *)(lVar41 + 0x54) = 0;
            *(undefined1 *)(lVar41 + 0x84) = 0x20;
            *(undefined1 *)(lVar41 + 0x34) = 0xd;
            *(undefined1 *)(lVar41 + 0xa4) = 0x20;
            *(undefined1 *)(lVar41 + 0x94) = 0x20;
            *(undefined1 *)(lVar41 + 0x45) = 0;
            *(undefined1 *)(lVar41 + 0x55) = 0;
            *(undefined1 *)(lVar41 + 0x85) = 0x20;
            *(undefined1 *)(lVar41 + 0x66) = 2;
            *(undefined1 *)(lVar41 + 0xb5) = 0x7f;
            *(undefined1 *)(lVar41 + 0x76) = 0x3f;
            *(undefined1 *)(lVar41 + 0xb6) = 0x7f;
            *(undefined1 *)(lVar41 + 0x35) = 0xe;
            *(undefined1 *)(lVar41 + 0x36) = 0xf;
            *(undefined1 *)(lVar41 + 0xa5) = 0x20;
            *(undefined1 *)(lVar41 + 0x95) = 0x20;
            *(undefined1 *)(lVar41 + 0x46) = 0;
            *(undefined1 *)(lVar41 + 0x56) = 0;
            *(undefined1 *)(lVar41 + 0x86) = 0x20;
            *(undefined8 *)(lVar41 + 0x214) = 0x1800000018;
            *(undefined8 *)(lVar41 + 0x20c) = 0x1800000018;
            *(undefined8 *)(lVar41 + 0x224) = 0x1800000018;
            *(undefined8 *)(lVar41 + 0x21c) = 0x1800000018;
            *(undefined8 *)(lVar41 + 0x234) = 0x1800000018;
            *(undefined8 *)(lVar41 + 0x22c) = 0x1800000018;
            *(undefined8 *)(lVar41 + 0x244) = 0x1800000018;
            *(undefined8 *)(lVar41 + 0x23c) = 0x1800000018;
            *(undefined4 *)(lVar41 + 0x24c) = 2;
            *(undefined4 *)(lVar41 + 0x250) = 2;
            *(undefined4 *)(lVar41 + 0x254) = 2;
            *(undefined4 *)(lVar41 + 600) = 2;
            *(undefined4 *)(lVar41 + 0x25c) = 2;
            *(undefined4 *)(lVar41 + 0x260) = 2;
            *(undefined4 *)(lVar41 + 0x264) = 2;
            *(undefined4 *)(lVar41 + 0x268) = 2;
            *(undefined4 *)(lVar41 + 0x26c) = 2;
            *(undefined4 *)(lVar41 + 0x270) = 2;
            *(undefined4 *)(lVar41 + 0x274) = 2;
            *(undefined4 *)(lVar41 + 0x278) = 2;
            *(undefined4 *)(lVar41 + 0x27c) = 2;
            *(undefined4 *)(lVar41 + 0x280) = 2;
            *(undefined4 *)(lVar41 + 0x284) = 2;
            *(undefined4 *)(lVar41 + 0x288) = 2;
            *(undefined1 *)(lVar41 + 0x157) = 0x3f;
            *(undefined1 *)(lVar41 + 0x177) = 0x3f;
            *(undefined1 *)(lVar41 + 0x158) = 0x3f;
            *(undefined1 *)(lVar41 + 0x178) = 0x3f;
            *(undefined1 *)(lVar41 + 0x159) = 0x3f;
            *(undefined1 *)(lVar41 + 0x179) = 0x3f;
            *(undefined1 *)(lVar41 + 0xa6) = 0x20;
            *(undefined1 *)(lVar41 + 0x96) = 0x20;
            *(undefined1 *)(lVar41 + 0xb7) = 0xff;
            *(undefined1 *)(lVar41 + 0xd7) = 0;
            *(undefined1 *)(lVar41 + 0xb8) = 0xff;
            *(undefined1 *)(lVar41 + 0xd8) = 0;
            *(undefined1 *)(lVar41 + 0xb9) = 0xff;
            *(undefined1 *)(lVar41 + 0xd9) = 0;
            *(undefined1 *)(lVar41 + 0x15a) = 0x3f;
            *(undefined1 *)(lVar41 + 0x17a) = 0x3f;
            *(undefined1 *)(lVar41 + 0x15b) = 0x3f;
            *(undefined1 *)(lVar41 + 0x17b) = 0x3f;
            *(undefined1 *)(lVar41 + 0x15c) = 0x3f;
            *(undefined1 *)(lVar41 + 0x17c) = 0x3f;
            *(undefined1 *)(lVar41 + 0x15d) = 0x3f;
            *(undefined1 *)(lVar41 + 0x17d) = 0x3f;
            *(undefined1 *)(lVar41 + 0x15e) = 0x3f;
            *(undefined1 *)(lVar41 + 0x17e) = 0x3f;
            *(undefined1 *)(lVar41 + 0x15f) = 0x3f;
            *(undefined1 *)(lVar41 + 0x17f) = 0x3f;
            *(undefined1 *)(lVar41 + 0x160) = 0x3f;
            *(undefined1 *)(lVar41 + 0x180) = 0x3f;
            *(undefined1 *)(lVar41 + 0x161) = 0x3f;
            *(undefined1 *)(lVar41 + 0x181) = 0x3f;
            *(undefined1 *)(lVar41 + 0x162) = 0x3f;
            *(undefined1 *)(lVar41 + 0xba) = 0xff;
            *(undefined1 *)(lVar41 + 0xda) = 0;
            *(undefined1 *)(lVar41 + 0xbb) = 0xff;
            *(undefined1 *)(lVar41 + 0xdb) = 0;
            *(undefined1 *)(lVar41 + 0xbc) = 0xff;
            *(undefined1 *)(lVar41 + 0xdc) = 0;
            *(undefined1 *)(lVar41 + 0xbd) = 0xff;
            *(undefined1 *)(lVar41 + 0xdd) = 0;
            *(undefined1 *)(lVar41 + 0xbe) = 0xff;
            *(undefined1 *)(lVar41 + 0xde) = 0;
            *(undefined1 *)(lVar41 + 0xbf) = 0xff;
            *(undefined1 *)(lVar41 + 0xdf) = 0;
            *(undefined1 *)(lVar41 + 0xc0) = 0xff;
            *(undefined1 *)(lVar41 + 0xe0) = 0;
            *(undefined1 *)(lVar41 + 0xc1) = 0xff;
            *(undefined1 *)(lVar41 + 0xe1) = 0;
            *(undefined1 *)(lVar41 + 0x182) = 0x3f;
            *(undefined1 *)(lVar41 + 0x163) = 0x3f;
            *(undefined1 *)(lVar41 + 0x183) = 0x3f;
            *(undefined1 *)(lVar41 + 0x164) = 0x3f;
            *(undefined1 *)(lVar41 + 0x184) = 0x3f;
            *(undefined1 *)(lVar41 + 0x165) = 0x3f;
            *(undefined1 *)(lVar41 + 0x185) = 0x3f;
            *(undefined1 *)(lVar41 + 0x166) = 0x3f;
            *(undefined1 *)(lVar41 + 0x186) = 0x3f;
            *(undefined1 *)(lVar41 + 0x167) = 0x3f;
            *(undefined1 *)(lVar41 + 0x187) = 0x3f;
            *(undefined1 *)(lVar41 + 0x168) = 0x3f;
            *(undefined1 *)(lVar41 + 0x188) = 0x3f;
            *(undefined1 *)(lVar41 + 0x169) = 0x3f;
            *(undefined1 *)(lVar41 + 0x189) = 0x3f;
            *(undefined1 *)(lVar41 + 0x16a) = 0x3f;
            *(undefined1 *)(lVar41 + 0x18a) = 0x3f;
            *(undefined1 *)(lVar41 + 0xc2) = 0xff;
            *(undefined1 *)(lVar41 + 0xe2) = 0;
            *(undefined1 *)(lVar41 + 0xc3) = 0xff;
            *(undefined1 *)(lVar41 + 0xe3) = 0;
            *(undefined1 *)(lVar41 + 0xc4) = 0xff;
            *(undefined1 *)(lVar41 + 0xe4) = 0;
            *(undefined1 *)(lVar41 + 0xc5) = 0xff;
            *(undefined1 *)(lVar41 + 0xe5) = 0;
            *(undefined1 *)(lVar41 + 0xc6) = 0xff;
            *(undefined1 *)(lVar41 + 0xe6) = 0;
            *(undefined1 *)(lVar41 + 199) = 0xff;
            *(undefined1 *)(lVar41 + 0xe7) = 0;
            *(undefined1 *)(lVar41 + 200) = 0xff;
            *(undefined1 *)(lVar41 + 0xe8) = 0;
            *(undefined1 *)(lVar41 + 0xc9) = 0xff;
            *(undefined1 *)(lVar41 + 0xe9) = 0;
            *(undefined1 *)(lVar41 + 0xca) = 0xff;
            *(undefined1 *)(lVar41 + 0xea) = 0;
            *(undefined1 *)(lVar41 + 0x16b) = 0x3f;
            *(undefined1 *)(lVar41 + 0x18b) = 0x3f;
            *(undefined1 *)(lVar41 + 0x16c) = 0x3f;
            *(undefined1 *)(lVar41 + 0x18c) = 0x3f;
            *(undefined1 *)(lVar41 + 0x16d) = 0x3f;
            *(undefined1 *)(lVar41 + 0x18d) = 0x3f;
            *(undefined1 *)(lVar41 + 0x16e) = 0x3f;
            *(undefined1 *)(lVar41 + 0x18e) = 0x3f;
            *(undefined1 *)(lVar41 + 0x16f) = 0x3f;
            *(undefined1 *)(lVar41 + 399) = 0x3f;
            *(undefined1 *)(lVar41 + 0x170) = 0x3f;
            *(undefined1 *)(lVar41 + 400) = 0x3f;
            *(undefined1 *)(lVar41 + 0x171) = 0x3f;
            *(undefined1 *)(lVar41 + 0x191) = 0x3f;
            *(undefined1 *)(lVar41 + 0x172) = 0x3f;
            *(undefined1 *)(lVar41 + 0x192) = 0x3f;
            *(undefined1 *)(lVar41 + 0x173) = 0x3f;
            *(undefined1 *)(lVar41 + 0xcb) = 0xff;
            *(undefined1 *)(lVar41 + 0xeb) = 0;
            *(undefined1 *)(lVar41 + 0xcc) = 0xff;
            *(undefined1 *)(lVar41 + 0xec) = 0;
            *(undefined1 *)(lVar41 + 0xcd) = 0xff;
            *(undefined1 *)(lVar41 + 0xed) = 0;
            *(undefined1 *)(lVar41 + 0xce) = 0xff;
            *(undefined1 *)(lVar41 + 0xee) = 0;
            *(undefined1 *)(lVar41 + 0xcf) = 0xff;
            *(undefined1 *)(lVar41 + 0xef) = 0;
            *(undefined1 *)(lVar41 + 0xd0) = 0xff;
            *(undefined1 *)(lVar41 + 0xf0) = 0;
            *(undefined1 *)(lVar41 + 0xd1) = 0xff;
            *(undefined1 *)(lVar41 + 0xf1) = 0;
            *(undefined1 *)(lVar41 + 0xd2) = 0xff;
            *(undefined1 *)(lVar41 + 0xf2) = 0;
            *(undefined1 *)(lVar41 + 0x193) = 0x3f;
            *(undefined1 *)(lVar41 + 0x174) = 0x3f;
            *(undefined1 *)(lVar41 + 0x194) = 0x3f;
            *(undefined1 *)(lVar41 + 0x175) = 0x3f;
            *(undefined1 *)(lVar41 + 0x195) = 0x3f;
            *(undefined1 *)(lVar41 + 0x176) = 0x3f;
            *(undefined1 *)(lVar41 + 0x196) = 0x3f;
            *(undefined1 *)(lVar41 + 0xd3) = 0xff;
            *(undefined1 *)(lVar41 + 0xf3) = 0;
            *(undefined1 *)(lVar41 + 0xd4) = 0xff;
            *(undefined1 *)(lVar41 + 0xf4) = 0;
            *(undefined1 *)(lVar41 + 0xd5) = 0xff;
            *(undefined1 *)(lVar41 + 0xf5) = 0;
            *(undefined1 *)(lVar41 + 0xd6) = 0xff;
            *(undefined1 *)(lVar41 + 0xf6) = 0;
            *(undefined1 *)(lVar41 + 2) = 100;
            *(undefined1 *)(lVar41 + 6) = 0x40;
            *(undefined2 *)(lVar41 + 0x1be) = 0x2000;
            iVar34 = 0;
            puVar27 = puVar1;
            do {
              if (iVar34 == 9) {
                *(undefined1 *)(lVar41 + 0x741f) = 0x80;
              }
              else {
                *puVar27 = 0;
              }
              iVar37 = iVar34 + 1;
              lVar31 = lVar41 + (long)iVar34 * 0x14;
              *(undefined1 *)(lVar31 + 0x736a) = 0;
              *(undefined1 *)(lVar31 + 0x736d) = 0;
              *(undefined1 *)(lVar31 + 0x736c) = 0x3f;
              *(undefined1 *)(lVar31 + 0x7370) = 0x40;
              *(undefined1 *)(lVar31 + 0x7371) = 0x7f;
              *(undefined1 *)(lVar31 + 0x7372) = 0;
              *(undefined2 *)(lVar31 + 0x737a) = 0x2000;
              *(undefined1 *)(lVar31 + 0x736e) = 2;
              *(undefined1 *)(lVar31 + 0x736f) = 2;
              *(undefined1 *)(lVar31 + 0x7373) = 1;
              *(undefined1 *)(lVar31 + 0x7374) = 0x40;
              *(undefined2 *)(lVar31 + 0x737c) = 0x2000;
              *(undefined1 *)(lVar31 + 0x7376) = 0x40;
              *(undefined1 *)(lVar31 + 0x7375) = 0x40;
              *(undefined1 *)(lVar31 + 0x7377) = 0x7f;
              *(undefined1 *)(lVar31 + 0x7378) = 0x28;
              *(undefined1 *)(lVar31 + 0x7379) = 0;
              if (iVar37 == 9) {
                *(undefined1 *)(lVar41 + 0x741f) = 0x80;
              }
              else {
                puVar27[0x14] = 0;
              }
              puVar27 = puVar27 + 0x28;
              iVar34 = iVar34 + 2;
              lVar31 = lVar41 + (long)iVar37 * 0x14;
              *(undefined1 *)(lVar31 + 0x736a) = 0;
              *(undefined1 *)(lVar31 + 0x736d) = 0;
              *(undefined1 *)(lVar31 + 0x736c) = 0x3f;
              *(undefined1 *)(lVar31 + 0x7370) = 0x40;
              *(undefined1 *)(lVar31 + 0x7371) = 0x7f;
              *(undefined1 *)(lVar31 + 0x7372) = 0;
              *(undefined2 *)(lVar31 + 0x737a) = 0x2000;
              *(undefined1 *)(lVar31 + 0x736e) = 2;
              *(undefined1 *)(lVar31 + 0x736f) = 2;
              *(undefined1 *)(lVar31 + 0x7373) = 1;
              *(undefined1 *)(lVar31 + 0x7374) = 0x40;
              *(undefined2 *)(lVar31 + 0x737c) = 0x2000;
              *(undefined1 *)(lVar31 + 0x7376) = 0x40;
              *(undefined1 *)(lVar31 + 0x7375) = 0x40;
              *(undefined1 *)(lVar31 + 0x7377) = 0x7f;
              *(undefined1 *)(lVar31 + 0x7378) = 0x28;
              *(undefined1 *)(lVar31 + 0x7379) = 0;
            } while (iVar34 != 0x20);
            bVar40 = *(byte *)(lVar41 + 0x1b7);
            uVar19 = (uint)bVar40;
            if (bVar40 < 0x88) {
              *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
              lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
              *(undefined4 *)(lVar31 + 4) = 0x10;
              *(undefined4 *)(lVar31 + 8) = 0;
              *(undefined4 *)(lVar31 + 0xc) = 0;
              *(undefined8 *)(lVar31 + 0x14) = 0;
              *(undefined4 *)(lVar31 + 0x1c) = 0;
              uVar19 = (uint)*(byte *)(lVar41 + 0x1b7);
              if ((*(char *)(lVar41 + 0x8649) == '\0') && (uVar19 < 0x88)) {
                *(byte *)(lVar41 + 0x1b7) = *(byte *)(lVar41 + 0x1b7) + 1;
                lVar31 = lVar41 + (long)(int)uVar19 * 0x14 + 0x7ac0;
                *(undefined4 *)(lVar31 + 4) = 0x2f;
                *(undefined4 *)(lVar31 + 8) = 0;
                *(undefined4 *)(lVar31 + 0xc) = 0;
                *(undefined8 *)(lVar31 + 0x14) = 0x7f;
                *(undefined4 *)(lVar31 + 0x1c) = 0;
                uVar19 = (uint)*(byte *)(lVar41 + 0x1b7);
              }
            }
            uVar17 = 1;
            pbVar24 = (byte *)(lVar41 + 0x8649);
            while( true ) {
              if (uVar19 < 0x88) {
                *(char *)(lVar41 + 0x1b7) = (char)uVar19 + '\x01';
                lVar31 = lVar41 + (long)(int)uVar19 * 0x14 + 0x7ac0;
                *(undefined4 *)(lVar31 + 4) = 0x10;
                *(undefined4 *)(lVar31 + 8) = 0;
                *(uint *)(lVar31 + 0xc) = uVar17;
                *(undefined8 *)(lVar31 + 0x14) = 0;
                *(undefined4 *)(lVar31 + 0x1c) = 0;
                if ((uVar17 == *pbVar24) && (bVar40 = *(byte *)(lVar41 + 0x1b7), bVar40 < 0x88)) {
                  *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
                  lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar31 + 4) = 0x2f;
                  *(undefined4 *)(lVar31 + 8) = 0;
                  *(undefined4 *)(lVar31 + 0xc) = 0;
                  *(undefined8 *)(lVar31 + 0x14) = 0x7f;
                  *(undefined4 *)(lVar31 + 0x1c) = 0;
                }
              }
              uVar19 = uVar17 + 1;
              if (uVar19 == 0x20) break;
              bVar40 = *(byte *)(lVar41 + 0x1b7);
              if (bVar40 < 0x88) {
                *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
                lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
                *(undefined4 *)(lVar31 + 4) = 0x10;
                *(undefined4 *)(lVar31 + 8) = 0;
                *(uint *)(lVar31 + 0xc) = uVar19;
                *(undefined8 *)(lVar31 + 0x14) = 0;
                *(undefined4 *)(lVar31 + 0x1c) = 0;
                if ((uVar19 == *pbVar24) && (bVar40 = *(byte *)(lVar41 + 0x1b7), bVar40 < 0x88)) {
                  *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
                  lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar31 + 4) = 0x2f;
                  *(undefined4 *)(lVar31 + 8) = 0;
                  *(undefined4 *)(lVar31 + 0xc) = 0;
                  *(undefined8 *)(lVar31 + 0x14) = 0x7f;
                  *(undefined4 *)(lVar31 + 0x1c) = 0;
                }
              }
              bVar40 = *(byte *)(lVar41 + 0x1b7);
              if (bVar40 < 0x88) {
                *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
                lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
                *(undefined4 *)(lVar31 + 4) = 0x10;
                *(undefined4 *)(lVar31 + 8) = 0;
                *(uint *)(lVar31 + 0xc) = uVar17 + 2;
                *(undefined8 *)(lVar31 + 0x14) = 0;
                *(undefined4 *)(lVar31 + 0x1c) = 0;
                if ((uVar17 + 2 == (uint)*pbVar24) &&
                   (bVar40 = *(byte *)(lVar41 + 0x1b7), bVar40 < 0x88)) {
                  *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
                  lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar31 + 4) = 0x2f;
                  *(undefined4 *)(lVar31 + 8) = 0;
                  *(undefined4 *)(lVar31 + 0xc) = 0;
                  *(undefined8 *)(lVar31 + 0x14) = 0x7f;
                  *(undefined4 *)(lVar31 + 0x1c) = 0;
                }
              }
              bVar40 = *(byte *)(lVar41 + 0x1b7);
              if (bVar40 < 0x88) {
                *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
                lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
                *(undefined4 *)(lVar31 + 4) = 0x10;
                *(undefined4 *)(lVar31 + 8) = 0;
                *(uint *)(lVar31 + 0xc) = uVar17 + 3;
                *(undefined8 *)(lVar31 + 0x14) = 0;
                *(undefined4 *)(lVar31 + 0x1c) = 0;
                if ((uVar17 + 3 == (uint)*pbVar24) &&
                   (bVar40 = *(byte *)(lVar41 + 0x1b7), bVar40 < 0x88)) {
                  *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
                  lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar31 + 4) = 0x2f;
                  *(undefined4 *)(lVar31 + 8) = 0;
                  *(undefined4 *)(lVar31 + 0xc) = 0;
                  *(undefined8 *)(lVar31 + 0x14) = 0x7f;
                  *(undefined4 *)(lVar31 + 0x1c) = 0;
                }
              }
              bVar40 = *(byte *)(lVar41 + 0x1b7);
              if (bVar40 < 0x88) {
                *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
                lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
                *(undefined4 *)(lVar31 + 4) = 0x10;
                *(undefined4 *)(lVar31 + 8) = 0;
                *(uint *)(lVar31 + 0xc) = uVar17 + 4;
                *(undefined8 *)(lVar31 + 0x14) = 0;
                *(undefined4 *)(lVar31 + 0x1c) = 0;
                if ((uVar17 + 4 == (uint)*pbVar24) &&
                   (bVar40 = *(byte *)(lVar41 + 0x1b7), bVar40 < 0x88)) {
                  *(byte *)(lVar41 + 0x1b7) = bVar40 + 1;
                  lVar31 = lVar41 + (long)(int)(uint)bVar40 * 0x14 + 0x7ac0;
                  *(undefined4 *)(lVar31 + 4) = 0x2f;
                  *(undefined4 *)(lVar31 + 8) = 0;
                  *(undefined4 *)(lVar31 + 0xc) = 0;
                  *(undefined8 *)(lVar31 + 0x14) = 0x7f;
                  *(undefined4 *)(lVar31 + 0x1c) = 0;
                }
              }
              uVar19 = (uint)*(byte *)(lVar41 + 0x1b7);
              uVar17 = uVar17 + 5;
            }
            *(undefined1 *)(lVar41 + 0xf7) = 0;
            *(undefined1 *)(lVar41 + 0x117) = 0;
            *(byte *)(lVar41 + 0x86cb) = *(byte *)(lVar41 + 0x86eb) & 0x1f;
            *(undefined1 *)(lVar41 + 0xf8) = 0;
            *(undefined1 *)(lVar41 + 0x118) = 0;
            *(byte *)(lVar41 + 0x86cc) = *(byte *)(lVar41 + 0x86ec) & 0x1f;
            *(undefined1 *)(lVar41 + 0xf9) = 0;
            *(undefined1 *)(lVar41 + 0x119) = 0;
            *(byte *)(lVar41 + 0x86cd) = *(byte *)(lVar41 + 0x86ed) & 0x1f;
            *(undefined1 *)(lVar41 + 0xfa) = 0;
            *(undefined1 *)(lVar41 + 0x11a) = 0;
            *(byte *)(lVar41 + 0x86ce) = *(byte *)(lVar41 + 0x86ee) & 0x1f;
            *(undefined1 *)(lVar41 + 0xfb) = 0;
            *(undefined1 *)(lVar41 + 0x11b) = 0;
            *(byte *)(lVar41 + 0x86cf) = *(byte *)(lVar41 + 0x86ef) & 0x1f;
            *(undefined1 *)(lVar41 + 0xfc) = 0;
            *(undefined1 *)(lVar41 + 0x11c) = 0;
            *(byte *)(lVar41 + 0x86d0) = *(byte *)(lVar41 + 0x86f0) & 0x1f;
            *(undefined1 *)(lVar41 + 0xfd) = 0;
            *(undefined1 *)(lVar41 + 0x11d) = 0;
            *(byte *)(lVar41 + 0x86d1) = *(byte *)(lVar41 + 0x86f1) & 0x1f;
            *(undefined1 *)(lVar41 + 0xfe) = 0;
            *(undefined1 *)(lVar41 + 0x11e) = 0;
            *(byte *)(lVar41 + 0x86d2) = *(byte *)(lVar41 + 0x86f2) & 0x1f;
            *(undefined1 *)(lVar41 + 0xff) = 0;
            *(undefined1 *)(lVar41 + 0x11f) = 0;
            *(byte *)(lVar41 + 0x86d3) = *(byte *)(lVar41 + 0x86f3) & 0x1f;
            *(undefined1 *)(lVar41 + 0x100) = 0;
            *(undefined1 *)(lVar41 + 0x120) = 0;
            *(byte *)(lVar41 + 0x86d4) = *(byte *)(lVar41 + 0x86f4) & 0x1f;
            *(undefined1 *)(lVar41 + 0x101) = 0;
            *(undefined1 *)(lVar41 + 0x121) = 0;
            *(byte *)(lVar41 + 0x86d5) = *(byte *)(lVar41 + 0x86f5) & 0x1f;
            *(undefined1 *)(lVar41 + 0x102) = 0;
            *(undefined1 *)(lVar41 + 0x122) = 0;
            *(byte *)(lVar41 + 0x86d6) = *(byte *)(lVar41 + 0x86f6) & 0x1f;
            *(undefined1 *)(lVar41 + 0x103) = 0;
            *(undefined1 *)(lVar41 + 0x123) = 0;
            *(byte *)(lVar41 + 0x86d7) = *(byte *)(lVar41 + 0x86f7) & 0x1f;
            *(undefined1 *)(lVar41 + 0x104) = 0;
            *(undefined1 *)(lVar41 + 0x124) = 0;
            *(byte *)(lVar41 + 0x86d8) = *(byte *)(lVar41 + 0x86f8) & 0x1f;
            *(undefined1 *)(lVar41 + 0x105) = 0;
            *(undefined1 *)(lVar41 + 0x125) = 0;
            *(byte *)(lVar41 + 0x86d9) = *(byte *)(lVar41 + 0x86f9) & 0x1f;
            *(undefined1 *)(lVar41 + 0x106) = 0;
            *(undefined1 *)(lVar41 + 0x126) = 0;
            *(byte *)(lVar41 + 0x86da) = *(byte *)(lVar41 + 0x86fa) & 0x1f;
            *(undefined1 *)(lVar41 + 0x107) = 0;
            *(undefined1 *)(lVar41 + 0x127) = 0;
            *(byte *)(lVar41 + 0x86db) = *(byte *)(lVar41 + 0x86fb) & 0x1f;
            *(undefined1 *)(lVar41 + 0x108) = 0;
            *(undefined1 *)(lVar41 + 0x128) = 0;
            *(byte *)(lVar41 + 0x86dc) = *(byte *)(lVar41 + 0x86fc) & 0x1f;
            *(undefined1 *)(lVar41 + 0x109) = 0;
            *(undefined1 *)(lVar41 + 0x129) = 0;
            *(byte *)(lVar41 + 0x86dd) = *(byte *)(lVar41 + 0x86fd) & 0x1f;
            *(undefined1 *)(lVar41 + 0x10a) = 0;
            *(undefined1 *)(lVar41 + 0x12a) = 0;
            *(byte *)(lVar41 + 0x86de) = *(byte *)(lVar41 + 0x86fe) & 0x1f;
            *(undefined1 *)(lVar41 + 0x10b) = 0;
            *(undefined1 *)(lVar41 + 299) = 0;
            *(byte *)(lVar41 + 0x86df) = *(byte *)(lVar41 + 0x86ff) & 0x1f;
            *(undefined1 *)(lVar41 + 0x10c) = 0;
            *(undefined1 *)(lVar41 + 300) = 0;
            *(byte *)(lVar41 + 0x86e0) = *(byte *)(lVar41 + 0x8700) & 0x1f;
            *(undefined1 *)(lVar41 + 0x10d) = 0;
            *(undefined1 *)(lVar41 + 0x12d) = 0;
            *(byte *)(lVar41 + 0x86e1) = *(byte *)(lVar41 + 0x8701) & 0x1f;
            *(undefined1 *)(lVar41 + 0x10e) = 0;
            *(undefined1 *)(lVar41 + 0x12e) = 0;
            *(byte *)(lVar41 + 0x86e2) = *(byte *)(lVar41 + 0x8702) & 0x1f;
            *(undefined1 *)(lVar41 + 0x10f) = 0;
            *(undefined1 *)(lVar41 + 0x12f) = 0;
            *(byte *)(lVar41 + 0x86e3) = *(byte *)(lVar41 + 0x8703) & 0x1f;
            *(undefined1 *)(lVar41 + 0x110) = 0;
            *(undefined1 *)(lVar41 + 0x130) = 0;
            *(byte *)(lVar41 + 0x86e4) = *(byte *)(lVar41 + 0x8704) & 0x1f;
            *(undefined1 *)(lVar41 + 0x111) = 0;
            *(undefined1 *)(lVar41 + 0x131) = 0;
            *(byte *)(lVar41 + 0x86e5) = *(byte *)(lVar41 + 0x8705) & 0x1f;
            *(undefined1 *)(lVar41 + 0x112) = 0;
            *(undefined1 *)(lVar41 + 0x132) = 0;
            *(byte *)(lVar41 + 0x86e6) = *(byte *)(lVar41 + 0x8706) & 0x1f;
            *(undefined1 *)(lVar41 + 0x113) = 0;
            *(undefined1 *)(lVar41 + 0x133) = 0;
            *(byte *)(lVar41 + 0x86e7) = *(byte *)(lVar41 + 0x8707) & 0x1f;
            *(undefined1 *)(lVar41 + 0x114) = 0;
            *(undefined1 *)(lVar41 + 0x134) = 0;
            *(byte *)(lVar41 + 0x86e8) = *(byte *)(lVar41 + 0x8708) & 0x1f;
            *(undefined1 *)(lVar41 + 0x115) = 0;
            *(undefined1 *)(lVar41 + 0x135) = 0;
            *(byte *)(lVar41 + 0x86e9) = *(byte *)(lVar41 + 0x8709) & 0x1f;
            *(undefined1 *)(lVar41 + 0x116) = 0;
            *(undefined1 *)(lVar41 + 0x136) = 0;
            *(byte *)(lVar41 + 0x86ea) = *(byte *)(lVar41 + 0x870a) & 0x1f;
            *(undefined1 *)(lVar41 + 0x137) = 0xff;
            *(undefined1 *)(lVar41 + 0x138) = 0xff;
            *(undefined1 *)(lVar41 + 0x139) = 0xff;
            *(undefined1 *)(lVar41 + 0x13a) = 0xff;
            uVar36 = 0x60;
            if (*(char *)(lVar41 + 0xc) != '\x01') {
              uVar36 = 0x7f;
            }
            *(undefined1 *)(lVar41 + 0x13b) = 0xff;
            *(undefined1 *)(lVar41 + 5) = uVar36;
            *(undefined1 *)(lVar41 + 0x13c) = 0xff;
            *(undefined1 *)(lVar41 + 0x13d) = 0xff;
            *(undefined1 *)(lVar41 + 0x13e) = 0xff;
            *(undefined1 *)(lVar41 + 0x13f) = 0xff;
            *(undefined1 *)(lVar41 + 0x140) = 0xff;
            *(undefined1 *)(lVar41 + 0x141) = 0xff;
            *(undefined1 *)(lVar41 + 0x142) = 0xff;
            *(undefined1 *)(lVar41 + 0x143) = 0xff;
            *(undefined1 *)(lVar41 + 0x144) = 0xff;
            *(undefined1 *)(lVar41 + 0x145) = 0xff;
            *(undefined1 *)(lVar41 + 0x146) = 0xff;
            *(undefined1 *)(lVar41 + 0x147) = 0xff;
            *(undefined1 *)(lVar41 + 0x148) = 0xff;
            *(undefined1 *)(lVar41 + 0x149) = 0xff;
            *(undefined1 *)(lVar41 + 0x14a) = 0xff;
            *(undefined1 *)(lVar41 + 0x14b) = 0xff;
            *(undefined1 *)(lVar41 + 0x14c) = 0xff;
            *(undefined1 *)(lVar41 + 0x14d) = 0xff;
            *(undefined1 *)(lVar41 + 0x14e) = 0xff;
            *(undefined1 *)(lVar41 + 0x14f) = 0xff;
            *(undefined1 *)(lVar41 + 0x150) = 0xff;
            *(undefined1 *)(lVar41 + 0x151) = 0xff;
            *(undefined1 *)(lVar41 + 0x152) = 0xff;
            *(undefined1 *)(lVar41 + 0x153) = 0xff;
            *(undefined1 *)(lVar41 + 0x154) = 0xff;
            *(undefined1 *)(lVar41 + 0x155) = 0xff;
            *(undefined1 *)(lVar41 + 0x156) = 0xff;
            *(undefined4 *)(lVar41 + 0x1e4) = 0x7d;
            *(undefined4 *)(lVar41 + 0x1e8) = 0x30;
            *(undefined4 *)(lVar41 + 0x1ec) = 0x2800;
            bVar40 = *(byte *)(lVar41 + 0x8648);
            if (bVar40 != 0) {
              bVar45 = bVar40 - 1 & 3;
              if (((uVar25 & 1) != 0) && (iVar16 < *(int *)(lVar41 + 0x8f30))) {
                *(int *)(lVar41 + 0x8f30) = iVar16 + (*(int *)(lVar41 + 0x8f2c) - iVar43) * 0x2800;
              }
              uVar19 = 1;
              piVar18 = (int *)(lVar41 + 0x8f50);
              uVar17 = (uint)bVar40;
              if (uVar17 != 1) {
                if (bVar45 != 0) {
                  if (bVar45 != 1) {
                    if (bVar45 != 2) {
                      if (((uVar25 >> 1 & 1) != 0) && (iVar16 < *(int *)(lVar41 + 0x8f50))) {
                        *(int *)(lVar41 + 0x8f50) =
                             iVar16 + (*(int *)(lVar41 + 0x8f4c) - iVar43) * 0x2800;
                      }
                      uVar19 = 2;
                      piVar18 = (int *)(lVar41 + 0x8f70);
                    }
                    if (((1 << (ulong)uVar19 & uVar25) != 0) && (iVar16 < *piVar18)) {
                      *piVar18 = iVar16 + (piVar18[-1] - iVar43) * 0x2800;
                    }
                    uVar19 = uVar19 + 1;
                    piVar18 = piVar18 + 8;
                  }
                  if (((1 << (ulong)uVar19 & uVar25) != 0) && (iVar16 < *piVar18)) {
                    *piVar18 = iVar16 + (piVar18[-1] - iVar43) * 0x2800;
                  }
                  uVar19 = uVar19 + 1;
                  piVar18 = piVar18 + 8;
                  if (uVar19 == uVar17) goto LAB_001c45bc;
                }
                do {
                  if (((1 << (ulong)(uVar19 & 0x1f) & uVar25) != 0) && (iVar16 < *piVar18)) {
                    *piVar18 = iVar16 + (piVar18[-1] - iVar43) * 0x2800;
                  }
                  if (((1 << (ulong)(uVar19 + 1 & 0x1f) & uVar25) != 0) && (iVar16 < piVar18[8])) {
                    piVar18[8] = iVar16 + (piVar18[7] - iVar43) * 0x2800;
                  }
                  if (((1 << (ulong)(uVar19 + 2 & 0x1f) & uVar25) != 0) && (iVar16 < piVar18[0x10]))
                  {
                    piVar18[0x10] = iVar16 + (piVar18[0xf] - iVar43) * 0x2800;
                  }
                  if (((1 << (ulong)(uVar19 + 3 & 0x1f) & uVar25) != 0) && (iVar16 < piVar18[0x18]))
                  {
                    piVar18[0x18] = iVar16 + (piVar18[0x17] - iVar43) * 0x2800;
                  }
                  uVar19 = uVar19 + 4;
                  piVar18 = piVar18 + 0x20;
                } while (uVar19 != uVar17);
                uVar25 = *(uint *)(lVar41 + 0x1d8);
                break;
              }
            }
LAB_001c45bc:
            uVar25 = *(uint *)(lVar41 + 0x1d8);
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
          if ((uVar11 == 0) &&
             (iVar34 = *(int *)(&DAT_0048eb40 + (ulong)(uVar22 & 0xf) * 4), iVar34 != 0)) {
            *(int *)(lVar41 + 0x1e8) = iVar34;
            *(uint *)(lVar41 + 0x1e4) = uVar35;
            if (bVar45 < 0x14) {
              uVar28 = 0x14;
              *(undefined4 *)(lVar41 + 0x1e4) = 0x14;
            }
            uVar19 = uVar17 - 1 & 3;
            iVar37 = 0;
            if ((long)(int)(uVar28 * iVar34) != 0) {
              iVar37 = (int)(0x3a98000 / (long)(int)(uVar28 * iVar34));
            }
            *(int *)(lVar41 + 0x1ec) = iVar37;
            if (((uVar25 & 1) != 0) && (iVar16 < *(int *)(lVar41 + 0x8f30))) {
              *(int *)(lVar41 + 0x8f30) = iVar16 + iVar37 * (*(int *)(lVar41 + 0x8f2c) - iVar43);
            }
            uVar28 = 1;
            piVar18 = (int *)(lVar41 + 0x8f50);
            if (uVar17 != 1) {
              if (uVar19 != 0) {
                if (uVar19 != 1) {
                  if (uVar19 != 2) {
                    if (((uVar25 >> 1 & 1) != 0) && (iVar16 < *(int *)(lVar41 + 0x8f50))) {
                      *(int *)(lVar41 + 0x8f50) =
                           iVar16 + iVar37 * (*(int *)(lVar41 + 0x8f4c) - iVar43);
                    }
                    uVar28 = 2;
                    piVar18 = (int *)(lVar41 + 0x8f70);
                  }
                  if (((1 << (ulong)uVar28 & uVar25) != 0) && (iVar16 < *piVar18)) {
                    *piVar18 = iVar16 + iVar37 * (piVar18[-1] - iVar43);
                  }
                  uVar28 = uVar28 + 1;
                  piVar18 = piVar18 + 8;
                }
                if (((1 << (ulong)uVar28 & uVar25) != 0) && (iVar16 < *piVar18)) {
                  *piVar18 = iVar16 + iVar37 * (piVar18[-1] - iVar43);
                }
                uVar28 = uVar28 + 1;
                piVar18 = piVar18 + 8;
                if (uVar28 == uVar17) break;
              }
              do {
                if (((1 << (ulong)(uVar28 & 0x1f) & uVar25) != 0) && (iVar16 < *piVar18)) {
                  *piVar18 = iVar16 + iVar37 * (piVar18[-1] - iVar43);
                }
                if (((1 << (ulong)(uVar28 + 1 & 0x1f) & uVar25) != 0) && (iVar16 < piVar18[8])) {
                  piVar18[8] = iVar16 + iVar37 * (piVar18[7] - iVar43);
                }
                if (((1 << (ulong)(uVar28 + 2 & 0x1f) & uVar25) != 0) && (iVar16 < piVar18[0x10])) {
                  piVar18[0x10] = iVar16 + iVar37 * (piVar18[0xf] - iVar43);
                }
                if (((1 << (ulong)(uVar28 + 3 & 0x1f) & uVar25) != 0) && (iVar16 < piVar18[0x18])) {
                  piVar18[0x18] = iVar16 + iVar37 * (piVar18[0x17] - iVar43);
                }
                uVar28 = uVar28 + 4;
                piVar18 = piVar18 + 0x20;
              } while (uVar28 != uVar17);
            }
          }
          break;
        case 0xd0:
          if (uVar11 == 0) {
            if (uVar35 == 0) {
              *(undefined1 *)(lVar41 + 0x1b9) = 0;
              *(undefined1 *)(lVar41 + 0x1ba) = 0;
              *(undefined1 *)(lVar41 + 0x1bb) = 0;
              *(undefined1 *)(lVar41 + 0x1bc) = 0;
            }
            else if ((uVar35 == 1) && (*(char *)(lVar41 + 0x864a) == '\0')) {
              *(undefined4 *)(lVar41 + 0x1d8) = 0;
              *(byte *)(lVar41 + 0x13) = bVar45;
              iVar43 = *(int *)(lVar41 + 0x1f0);
              goto LAB_001c45d4;
            }
          }
          break;
        case 0xdc:
          iVar16 = uVar35 << 8;
          if (*(byte *)(lVar41 + 0xc) < 3) {
            iVar16 = 0;
          }
          *(int *)(lVar6 + 0x8f2c) = iVar43 + iVar16;
          *(int *)(lVar6 + 0x8f30) = *(int *)(lVar6 + 0x8f30) + iVar16 * *(int *)(lVar41 + 0x1ec);
          break;
        case 0xdf:
          uVar25 = uVar25 & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
          *(uint *)(lVar41 + 0x1d8) = uVar25;
          if (uVar25 != 0) goto LAB_001c40fc;
          *(undefined1 *)(lVar41 + 0x13) = 1;
          iVar43 = *(int *)(lVar41 + 0x1f0);
          goto LAB_001c45d4;
        case 0xe0:
          bVar40 = *(byte *)(lVar41 + (ulong)((uint)(bVar45 >> 6) + uVar11 * 4) + 0x27);
          uVar13 = (ulong)bVar40;
          *(char *)(lVar41 + uVar13 + 0x47) = (char)(uVar35 & 0x3f);
          if ((*(char *)(lVar41 + 0xc) == '\x01') && (*(char *)(lVar41 + uVar13 + 0x17) == '\x01'))
          {
            uVar17 = (bVar40 & 0xf) << 1;
            uVar19 = (bVar40 >> 4) + 8;
            bVar45 = 1;
          }
          else {
            lVar31 = lVar41 + uVar13;
            bVar40 = *(byte *)(lVar31 + 0x57);
            if (bVar40 < 2) {
              if (*(char *)(lVar31 + 0x37) != '\0') {
                lVar31 = lVar41 + uVar13 * 0x14;
                *(undefined1 *)(lVar31 + 0x736b) = 0x80;
                *(byte *)(lVar31 + 0x736a) = bVar40;
                goto LAB_001c66a4;
              }
              uVar17 = 0;
              bVar40 = 0;
              bVar45 = 0;
              uVar19 = uVar17;
            }
            else {
              bVar45 = (bVar40 >> 1) - 1;
              if (*(char *)(lVar31 + 0x37) != '\0') {
                lVar31 = lVar41 + uVar13 * 0x14;
                *(byte *)(lVar31 + 0x736b) = (bVar40 >> 1) + 0x7f;
                *(byte *)(lVar31 + 0x736a) = bVar40 & 1;
LAB_001c66a4:
                lVar31 = lVar41 + uVar13 * 4;
                *(undefined4 *)(lVar31 + 0x20c) = 0x18;
                *(undefined4 *)(lVar31 + 0x24c) = 2;
                break;
              }
              uVar19 = (uVar35 & 0x3f) + (bVar40 & 1) * 0x40;
              bVar40 = (byte)uVar19;
              uVar17 = (uVar19 & 0xf) << 1;
              uVar19 = (uint)(bVar40 >> 4) + (uint)bVar45 * 8;
            }
          }
          lVar31 = lVar41 + uVar13 * 4;
          lVar30 = lVar41 + uVar13 * 0x14;
          *(byte *)(lVar30 + 0x736b) = bVar45;
          *(byte *)(lVar30 + 0x736a) = bVar40;
          uVar19 = *(uint *)(lVar41 + (ulong)uVar19 * 4 + 0x28c) >> (ulong)uVar17 & 3;
          uVar26 = *(undefined4 *)(&DAT_0048df90 + (ulong)uVar19 * 4);
          *(undefined4 *)(lVar31 + 0x20c) = *(undefined4 *)(&DAT_0048df80 + (ulong)uVar19 * 4);
          *(undefined4 *)(lVar31 + 0x24c) = uVar26;
          break;
        case 0xe1:
          uVar19 = uVar35 & 0x3f;
          bVar40 = *(byte *)(lVar41 + (ulong)((uint)(bVar45 >> 6) + uVar11 * 4) + 0x27);
          uVar13 = (ulong)bVar40;
          lVar31 = lVar41 + uVar13;
          *(char *)(lVar31 + 0x57) = (char)uVar19;
          if (*(char *)(lVar41 + 0xc) == '\x01') {
            if (*(char *)(lVar31 + 0x17) == '\x01') {
              uVar17 = (bVar40 & 0xf) << 1;
              uVar19 = (bVar40 >> 4) + 8;
              cVar10 = '\x01';
            }
            else if (uVar19 < 2) {
              if (*(char *)(lVar31 + 0x37) != '\0') goto LAB_001c9168;
              bVar40 = 0;
              uVar17 = 0;
              cVar10 = '\0';
              uVar19 = uVar17;
            }
            else {
              uVar19 = (uVar19 >> 1) - 1;
              cVar10 = (char)uVar19;
              if (*(char *)(lVar31 + 0x37) != '\0') goto LAB_001c6688;
              uVar17 = (uint)*(byte *)(lVar31 + 0x47) + (uVar35 & 1) * 0x40;
              uVar28 = uVar17 & 0x7f;
              bVar40 = (byte)uVar28;
              uVar17 = (uVar17 & 0xf) << 1;
              uVar19 = (uVar28 >> 4) + (uVar19 & 0xff) * 8;
            }
            lVar31 = lVar41 + uVar13 * 4;
            lVar30 = lVar41 + uVar13 * 0x14;
            *(char *)(lVar30 + 0x736b) = cVar10;
            *(byte *)(lVar30 + 0x736a) = bVar40;
            uVar19 = *(uint *)(lVar41 + (ulong)uVar19 * 4 + 0x28c) >> (ulong)uVar17 & 3;
            uVar26 = *(undefined4 *)(&DAT_0048df90 + (ulong)uVar19 * 4);
            *(undefined4 *)(lVar31 + 0x20c) = *(undefined4 *)(&DAT_0048df80 + (ulong)uVar19 * 4);
            *(undefined4 *)(lVar31 + 0x24c) = uVar26;
          }
          else if (*(char *)(lVar31 + 0x37) == '\x01') {
            if (uVar19 < 2) {
LAB_001c9168:
              lVar31 = lVar41 + uVar13 * 0x14;
              *(undefined1 *)(lVar31 + 0x736b) = 0x80;
              *(char *)(lVar31 + 0x736a) = (char)uVar19;
              goto LAB_001c66a4;
            }
            cVar10 = (char)(uVar19 >> 1) + -1;
LAB_001c6688:
            lVar31 = lVar41 + uVar13 * 0x14;
            *(char *)(lVar31 + 0x736b) = cVar10 + -0x80;
            *(byte *)(lVar31 + 0x736a) = bVar45 & 1;
            goto LAB_001c66a4;
          }
          break;
        case 0xe2:
          *(byte *)(lVar41 + (ulong)*(byte *)(lVar41 + (ulong)((uint)(bVar45 >> 6) + uVar11 * 4) +
                                             0x27) + 0x67) = bVar45 & 0x3f;
          break;
        case 0xe3:
          uVar35 = uVar35 & 0x3f;
          uVar13 = (ulong)*(byte *)(lVar41 + (ulong)((uint)(bVar45 >> 6) + uVar11 * 4) + 0x27);
          bVar45 = (byte)(uVar35 << 1);
          *(char *)(lVar41 + uVar13 + 0x77) = (char)uVar35;
          bVar40 = *(byte *)(lVar41 + 3);
          if ((bVar40 != 0x40) && (bVar45 = bVar40, uVar35 != 0x20)) {
            bVar45 = (&DAT_0048e740)[(ulong)(uVar35 >> 1) + (ulong)(bVar40 >> 2) * 0x20];
          }
          *(byte *)(lVar41 + uVar13 * 0x14 + 0x7370) = bVar45;
          break;
        case 0xe4:
          uVar13 = (ulong)*(byte *)(lVar41 + (ulong)((uint)(bVar45 >> 6) + uVar11 * 4) + 0x27);
          lVar31 = lVar41 + uVar13;
          *(char *)(lVar31 + 0x87) = (char)(uVar35 & 0x3f);
          uVar19 = *(int *)(&DAT_0048eb80 + (ulong)*(byte *)(lVar31 + 0x97) * 4) +
                   (uVar35 & 0x3f) * 2;
          if ((int)uVar19 < 0) {
            uVar32 = 0;
          }
          else {
            uVar32 = (undefined2)((uVar19 & 0x1ff) << 7);
            if (0x7f < (int)uVar19) {
              uVar32 = 0x3f80;
            }
          }
          lVar31 = lVar41 + uVar13 * 0x14;
          *(undefined1 *)(lVar31 + 0x736e) = *(undefined1 *)(lVar31 + 0x736f);
          *(undefined2 *)(lVar31 + 0x737a) = uVar32;
          break;
        case 0xe5:
          if (((bVar45 & 0x30) == 0) && (1 < *(byte *)(lVar41 + 0xc))) {
            *(byte *)(lVar41 + (ulong)(byte)((bVar45 >> 6) + (char)(uVar11 << 2)) + 0x27) =
                 bVar45 & 0xf;
          }
          break;
        case 0xe6:
          uVar13 = (ulong)*(byte *)(lVar41 + (ulong)((uint)(bVar45 >> 6) + uVar11 * 4) + 0x27);
          cVar38 = ((bVar45 & 0x3f) - 0x20) + *(char *)(lVar41 + uVar13 + 0x67);
          cVar10 = '\0';
          if ((-1 < cVar38) && (cVar10 = cVar38, '?' < cVar38)) {
            cVar10 = '?';
          }
          *(char *)(lVar41 + uVar13 + 0x67) = cVar10;
          break;
        case 0xe7:
          if ((uVar35 & 0x3f) < 0x19) {
            *(char *)(lVar41 + (ulong)*(byte *)(lVar41 + (ulong)((uint)(bVar45 >> 6) + uVar11 * 4) +
                                               0x27) * 0x14 + 0x736f) = (char)(uVar35 & 0x3f);
          }
          break;
        case 0xe8:
          uVar13 = (ulong)*(byte *)(lVar41 + (ulong)((uint)(bVar45 >> 6) + uVar11 * 4) + 0x27);
          lVar31 = lVar41 + uVar13;
          iVar43 = *(int *)(&DAT_0048eb80 + (ulong)(uVar35 & 0x3f) * 4);
          *(char *)(lVar31 + 0x97) = (char)(uVar35 & 0x3f);
          uVar19 = iVar43 + (uint)*(byte *)(lVar31 + 0x87) * 2;
          if ((int)uVar19 < 0) {
            uVar32 = 0;
          }
          else {
            uVar32 = (undefined2)((uVar19 & 0x1ff) << 7);
            if (0x7f < (int)uVar19) {
              uVar32 = 0x3f80;
            }
          }
          lVar31 = lVar41 + uVar13 * 0x14;
          *(undefined1 *)(lVar31 + 0x736e) = *(undefined1 *)(lVar31 + 0x736f);
          *(undefined2 *)(lVar31 + 0x737a) = uVar32;
          break;
        case 0xe9:
          *(byte *)(lVar41 + (ulong)*(byte *)(lVar41 + (ulong)((uint)(bVar45 >> 6) + uVar11 * 4) +
                                             0x27) + 0x97) = bVar45 & 0x3f;
          break;
        case 0xea:
          bVar40 = *(byte *)(lVar41 + (ulong)((uint)(bVar45 >> 6) + uVar11 * 4) + 0x27);
          uVar19 = (uVar35 & 0x3f) << 1;
          if (bVar40 == *(byte *)(lVar41 + 0x8649)) {
            uVar19 = 0;
          }
          *(undefined1 *)(lVar41 + (ulong)bVar40 * 0x14 + 0x736d) = (&DAT_0048e680)[uVar19];
        }
switchD_001c4490_caseD_b2:
      }
      else {
        if (*(char *)(lVar31 + 1) != '\x7f') goto switchD_001c4490_caseD_b2;
        bVar40 = *(byte *)(lVar31 + 2);
        if (0xef < bVar40) {
          lVar30 = *(long *)(param_1 + 8);
          if ((((*(char *)(lVar30 + 0x8640) == '\x04') &&
               ((*(byte *)(lVar30 + 0x8710) >> 6 & 1) == 0)) && (bVar40 == 0xf0)) &&
             (((uVar11 == 0 &&
               (5 < (uint)*(byte *)(lVar31 + 4) + (uint)*(byte *)(lVar31 + 3) * 0x100)) &&
              (*(char *)(lVar30 + 0x870c) != '\0')))) {
            uVar19 = *(uint *)(lVar30 + 0xb0c);
            uVar13 = (ulong)uVar19;
            uVar25 = *(byte *)(lVar31 + 5) & 0x1f;
            lVar8 = lVar30 + uVar13 * 0x14;
            *(uint *)(lVar30 + ((ulong)uVar25 + 0x2c4) * 4) = uVar19;
            *(uint *)(lVar8 + 0xb50) = uVar25;
            *(uint *)(lVar8 + 0xb54) = (uint)*(byte *)(lVar31 + 6);
            bVar40 = *(byte *)(lVar31 + 7);
            if (bVar40 < 0x44) {
              *(undefined4 *)(lVar8 + 0xb58) = 0x44;
            }
            else if (bVar40 < 0xbc) {
              *(uint *)(lVar8 + 0xb58) = (uint)bVar40;
            }
            else {
              *(undefined4 *)(lVar8 + 0xb58) = 0xbb;
            }
            bVar40 = *(byte *)(lVar31 + 8);
            lVar8 = lVar30 + uVar13 * 0x14;
            if (bVar40 < 0x62) {
              *(undefined4 *)(lVar8 + 0xb5c) = 0x62;
            }
            else if (bVar40 < 0x9f) {
              *(uint *)(lVar8 + 0xb5c) = (uint)bVar40;
            }
            else {
              *(undefined4 *)(lVar8 + 0xb5c) = 0x9e;
            }
            iVar43 = (uint)*(byte *)(lVar31 + 9) * 0x100 + (uint)*(byte *)(lVar31 + 10);
            *(uint *)(lVar30 + uVar13 * 0x14 + 0xb60) =
                 ((int)*(uint *)(lVar30 + 0x1ec) >> 10) * iVar43 +
                 (iVar43 * (*(uint *)(lVar30 + 0x1ec) & 0x3ff) + 0x200 >> 10);
            *(uint *)(lVar30 + 0xb0c) = uVar19 + 1 & 0x3ff;
            goto LAB_001c45bc;
          }
          goto switchD_001c4490_caseD_b2;
        }
        lVar30 = *(long *)(param_1 + 8);
        bVar45 = *(byte *)(lVar31 + 3);
        if ((*(char *)(lVar30 + 0x8640) != '\x04') || ((*(byte *)(lVar30 + 0x8710) >> 6 & 1) != 0))
        goto switchD_001c4490_caseD_b2;
        if (bVar40 == 0x80) {
          *(byte *)(lVar30 + (ulong)((uint)(bVar45 >> 6) + uVar11 * 4) + 0x177) = bVar45 & 0x3f;
          goto switchD_001c4490_caseD_b2;
        }
        if (bVar40 < 0x81) {
          if (bVar40 == 0) {
            *(byte *)(lVar30 + (ulong)((uint)(bVar45 >> 6) + uVar11 * 4) + 0x197) = bVar45 & 0x3f;
          }
          goto switchD_001c4490_caseD_b2;
        }
        if (bVar40 == 0x81) {
          uVar19 = (uint)(bVar45 >> 6) + uVar11 * 4;
          if ((((*(byte *)(lVar30 + 0x8568 + (ulong)uVar19 + 0x143) >> 1 & 1) != 0) &&
              (bVar40 = *(byte *)(lVar30 + (ulong)uVar19 + 0x197), bVar40 < 0x40)) &&
             (*(int *)(lVar30 + 0x8568 + (ulong)bVar40 * 0x20 + 0x1bc) != 2)) {
            uVar17 = bVar45 & 0x3f;
            bVar45 = (byte)(uVar17 << 1);
            *(char *)(lVar30 + (ulong)bVar40 + 0x137) = (char)uVar17;
            bVar40 = *(byte *)(lVar30 + 3);
            if ((bVar40 != 0x40) && (bVar45 = bVar40, uVar17 != 0x20)) {
              bVar45 = (&DAT_0048e740)[(ulong)(uVar17 >> 1) + (ulong)(bVar40 >> 2) * 0x20];
            }
            *(byte *)(lVar30 + (ulong)(uVar19 + 0x10) * 0x14 + 0x7370) = bVar45;
          }
          goto switchD_001c4490_caseD_b2;
        }
        if (bVar40 != 0x90) goto switchD_001c4490_caseD_b2;
        bVar40 = *(byte *)(lVar30 + (ulong)((uint)(bVar45 >> 6) + uVar11 * 4) + 0x27);
        uVar25 = bVar45 & 0x1f;
        uVar13 = (ulong)(bVar40 + 0x10);
        if ((bVar45 & 0x20) == 0) {
          uVar13 = (ulong)bVar40;
        }
        *(char *)(lVar30 + uVar13 + 0x86cb) = (char)uVar25;
        if (3 < uVar25) goto LAB_001c45bc;
        *(byte *)(lVar30 + 0xb) = (&DAT_0048e730)[(int)uVar25] | *(byte *)(lVar30 + 0xb);
        uVar25 = *(uint *)(lVar41 + 0x1d8);
      }
      if (uVar25 == 0) {
        iVar43 = *(int *)(lVar41 + 0x1f0);
        break;
      }
      uVar19 = *(uint *)(lVar6 + 0x8f28);
LAB_001c40fc:
      uVar17 = uVar19 + 1;
      lVar31 = lVar41 + 0x8568 + uVar21 * 0x20;
      uVar28 = *(uint *)(lVar31 + 0x9b0);
      if (uVar17 < uVar28) {
        lVar30 = *(long *)(lVar31 + 0x9b8);
        lVar31 = lVar30 + (ulong)uVar17;
        if ((*(byte *)(lVar30 + (ulong)uVar17) & 0x3f) == 0x3f) {
          if ((char)*(byte *)(lVar31 + 1) < '\0') {
            if (*(byte *)(lVar31 + 1) < 0xf0) {
              uVar17 = uVar19 + 4;
            }
            else {
              uVar17 = uVar19 + 5 +
                       (uint)*(byte *)(lVar31 + 2) * 0x100 + (uint)*(byte *)(lVar31 + 3);
            }
          }
          else {
            uVar17 = uVar17 + *(ushort *)(lVar41 + 0x8632);
          }
        }
        else {
          uVar17 = uVar17 + *(ushort *)(lVar41 + 0x8630);
        }
        if (uVar28 < uVar17) goto LAB_001c4438;
        *(uint *)(lVar6 + 0x8f28) = uVar17;
        lVar31 = lVar41 + 0x8568 + uVar21 * 0x20;
        if (*(uint *)(lVar31 + 0x9b0) < uVar17 + 3) goto LAB_001c4438;
        uVar25 = (uint)*(byte *)(*(long *)(lVar31 + 0x9b8) + (ulong)uVar17);
        *(uint *)(lVar6 + 0x8f2c) = *(int *)(lVar6 + 0x8f2c) + uVar25;
        *(uint *)(lVar6 + 0x8f30) = *(int *)(lVar6 + 0x8f30) + uVar25 * *(int *)(lVar41 + 0x1ec);
        iVar43 = *(int *)(lVar41 + 0x1f0);
      }
      else {
LAB_001c4438:
        iVar43 = *(int *)(lVar41 + 0x1f0);
        *(uint *)(lVar41 + 0x1d8) = uVar25 & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
      }
    } while (iVar43 < iVar23);
  }
LAB_001c45d4:
  *(int *)(lVar41 + 500) = iVar43;
  *(int *)(lVar41 + 0x1f8) = iVar43;
  *param_3 = (_MACNV_SEEK_INFO)0x7f;
  param_3[4] = *(_MACNV_SEEK_INFO *)(pcVar42 + 6);
  uVar32 = *(undefined2 *)(pcVar42 + 0x1be);
  param_3[5] = (_MACNV_SEEK_INFO)0x7f;
  *(undefined2 *)(param_3 + 2) = uVar32;
  if (*(long *)(pcVar42 + 0xb28) == 0) {
    param_3[6] = (_MACNV_SEEK_INFO)0xff;
    if (*(long *)(pcVar42 + 0xb40) == 0) goto LAB_001c6dcc;
LAB_001c4610:
    _Var44 = *(_MACNV_SEEK_INFO *)(pcVar42 + 9);
  }
  else {
    param_3[6] = *(_MACNV_SEEK_INFO *)(pcVar42 + 8);
    if (*(long *)(pcVar42 + 0xb40) != 0) goto LAB_001c4610;
LAB_001c6dcc:
    _Var44 = (_MACNV_SEEK_INFO)0xff;
  }
  param_3[7] = _Var44;
  bVar40 = 0;
  p_Var14 = param_3;
  pcVar29 = pcVar42;
  pcVar33 = pcVar42;
  do {
    p_Var14[0xb] = *(_MACNV_SEEK_INFO *)(pcVar33 + 0x736a);
    p_Var14[10] = *(_MACNV_SEEK_INFO *)(pcVar33 + 0x736b);
    if (pcVar29[0x57] == '4') {
      p_Var14[10] = (_MACNV_SEEK_INFO)0x8f;
    }
    p_Var14[0xc] = *(_MACNV_SEEK_INFO *)(pcVar33 + 0x736d);
    uVar21 = (ulong)((uint)(byte)(&DAT_0048e460)[(ulong)(byte)pcVar29[0x67] * 2] +
                    (uint)(byte)(&DAT_0048e460)[(byte)pcVar42[2]]);
    if (0xc0 < (uint)(byte)(&DAT_0048e460)[(ulong)(byte)pcVar29[0x67] * 2] +
               (uint)(byte)(&DAT_0048e460)[(byte)pcVar42[2]]) {
      uVar21 = 0xc0;
    }
    p_Var14[0xd] = *(_MACNV_SEEK_INFO *)(&DAT_0048e4e0 + uVar21);
    if (bVar40 < 0x10) {
      uVar25 = *(int *)(&DAT_0048d870 + (long)(int)(uint)(byte)pcVar42[7] * 4) +
               *(int *)(&DAT_0048d870 + (long)(int)(uint)(byte)pcVar42[2] * 4) +
               *(int *)(&DAT_0048d870 + (long)(int)((uint)(byte)pcVar29[0x177] << 1) * 4);
      if (0xc0 < uVar25) {
        uVar25 = 0xc0;
      }
      p_Var14[0x1ae] = SUB41((&DAT_0048dc70)[uVar25],0);
    }
    p_Var14[0x18] = *(_MACNV_SEEK_INFO *)(pcVar33 + 0x7370);
    p_Var14[0xf] = *(_MACNV_SEEK_INFO *)(pcVar33 + 0x7371);
    p_Var14[0x10] = *(_MACNV_SEEK_INFO *)(pcVar33 + 0x7372);
    *(undefined2 *)(p_Var14 + 0x1c) = *(undefined2 *)(pcVar33 + 0x737a);
    p_Var14[0x11] = *(_MACNV_SEEK_INFO *)(pcVar33 + 0x736e);
    if ((pcVar42[0x10] != '\x01') || (_Var44 = (_MACNV_SEEK_INFO)0x0, 2 < (byte)pcVar42[0xc])) {
      _Var44 = *(_MACNV_SEEK_INFO *)(pcVar33 + 0x7373);
    }
    p_Var14[0x12] = _Var44;
    bVar40 = bVar40 + 1;
    p_Var14[0x13] = *(_MACNV_SEEK_INFO *)(pcVar33 + 0x7374);
    *(undefined2 *)(p_Var14 + 0x1e) = *(undefined2 *)(pcVar33 + 0x737c);
    p_Var14[0x14] = *(_MACNV_SEEK_INFO *)(pcVar33 + 0x7376);
    p_Var14[0x15] = *(_MACNV_SEEK_INFO *)(pcVar33 + 0x7375);
    p_Var14[0x16] = *(_MACNV_SEEK_INFO *)(pcVar33 + 0x7377);
    p_Var14[0x17] = *(_MACNV_SEEK_INFO *)(pcVar33 + 0x7378);
    p_Var14[0x19] = *(_MACNV_SEEK_INFO *)(pcVar33 + 0x7379);
    p_Var14[8] = (_MACNV_SEEK_INFO)(pcVar29[0x866b] & 7);
    p_Var14[9] = (_MACNV_SEEK_INFO)(pcVar29[0x868b] & 1);
    p_Var14[0x1a] = *(_MACNV_SEEK_INFO *)(pcVar29 + 0x864b);
    _Var44 = (_MACNV_SEEK_INFO)((pcVar29[0x86cb] & 0x1fU) + 2);
    if ((pcVar29[0x86cb] & 0x1fU) == 0x1f) {
      _Var44 = (_MACNV_SEEK_INFO)0x0;
    }
    p_Var14[0x1b] = _Var44;
    p_Var14 = p_Var14 + 0x1a;
    pcVar29 = pcVar29 + 1;
    pcVar33 = pcVar33 + 0x14;
  } while (bVar40 != 0x20);
  uVar25 = *(uint *)(pcVar42 + 0xb10);
  *(undefined4 *)(param_3 + 0x348) = 0;
  *(undefined4 *)(param_3 + 0x34c) = 0;
  if (uVar25 != 0x400) {
    *(int *)(param_3 + 0x358) = *(int *)(pcVar42 + (ulong)uVar25 * 0x14 + 0xb54) * 0x32;
    *(int *)(param_3 + 0x350) = (*(int *)(pcVar42 + (ulong)uVar25 * 0x14 + 0xb58) + -0x80) * 3;
    *(int *)(param_3 + 0x354) = (*(int *)(pcVar42 + (ulong)uVar25 * 0x14 + 0xb5c) + -0x80) * 3;
  }
  uVar25 = *(uint *)(pcVar42 + 0xb14);
  *(undefined4 *)(param_3 + 0x360) = 0;
  *(undefined4 *)(param_3 + 0x35c) = 1;
  if (uVar25 != 0x400) {
    *(int *)(param_3 + 0x36c) = *(int *)(pcVar42 + (ulong)uVar25 * 0x14 + 0xb54) * 0x32;
    *(int *)(param_3 + 0x364) = (*(int *)(pcVar42 + (ulong)uVar25 * 0x14 + 0xb58) + -0x80) * 3;
    *(int *)(param_3 + 0x368) = (*(int *)(pcVar42 + (ulong)uVar25 * 0x14 + 0xb5c) + -0x80) * 3;
  }
  uVar25 = *(uint *)(pcVar42 + 0xb18);
  *(undefined4 *)(param_3 + 0x374) = 0;
  *(undefined4 *)(param_3 + 0x370) = 2;
  if (uVar25 != 0x400) {
    *(int *)(param_3 + 0x380) = *(int *)(pcVar42 + (ulong)uVar25 * 0x14 + 0xb54) * 0x32;
    *(int *)(param_3 + 0x378) = (*(int *)(pcVar42 + (ulong)uVar25 * 0x14 + 0xb58) + -0x80) * 3;
    *(int *)(param_3 + 0x37c) = (*(int *)(pcVar42 + (ulong)uVar25 * 0x14 + 0xb5c) + -0x80) * 3;
  }
  uVar25 = *(uint *)(pcVar42 + 0xb1c);
  *(undefined4 *)(param_3 + 0x388) = 0;
  *(undefined4 *)(param_3 + 900) = 3;
  if (uVar25 != 0x400) {
    *(int *)(param_3 + 0x394) = *(int *)(pcVar42 + (ulong)uVar25 * 0x14 + 0xb54) * 0x32;
    *(int *)(param_3 + 0x38c) = (*(int *)(pcVar42 + (ulong)uVar25 * 0x14 + 0xb58) + -0x80) * 3;
    *(int *)(param_3 + 0x390) = (*(int *)(pcVar42 + (ulong)uVar25 * 0x14 + 0xb5c) + -0x80) * 3;
  }
  if (pcVar42[0x870c] == '\x01') {
    pbVar24 = (byte *)(pcVar42 + 0x86cb);
    uVar25 = 0;
    do {
      uVar11 = *pbVar24 & 0x1f;
      if (((((&DAT_0048e730)[uVar11] & pcVar42[10]) != 0) || (3 < uVar11)) &&
         (bVar40 = pcVar42[0x1b7], bVar40 < 0x88)) {
        pcVar42[0x1b7] = bVar40 + 1;
        lVar41 = (long)(int)(uint)bVar40 * 0x14;
        pcVar29 = pcVar42 + lVar41 + 0x7ac4;
        pcVar29[0] = '\x10';
        pcVar29[1] = '\0';
        pcVar29[2] = '\0';
        pcVar29[3] = '\0';
        pcVar29 = pcVar42 + lVar41 + 0x7ac8;
        pcVar29[0] = '\0';
        pcVar29[1] = '\0';
        pcVar29[2] = '\0';
        pcVar29[3] = '\0';
        *(uint *)(pcVar42 + lVar41 + 0x7acc) = uVar25;
        pcVar29 = pcVar42 + lVar41 + 0x7ad4;
        pcVar29[0] = '\0';
        pcVar29[1] = '\0';
        pcVar29[2] = '\0';
        pcVar29[3] = '\0';
        pcVar29[4] = '\0';
        pcVar29[5] = '\0';
        pcVar29[6] = '\0';
        pcVar29[7] = '\0';
        pcVar29 = pcVar42 + lVar41 + 0x7adc;
        pcVar29[0] = '\0';
        pcVar29[1] = '\0';
        pcVar29[2] = '\0';
        pcVar29[3] = '\0';
        if (uVar25 == (byte)pcVar42[0x8649]) {
          bVar40 = pcVar42[0x1b7];
          uVar19 = (uint)bVar40;
          if (uVar19 < 0x88) {
            pcVar42[0x1b7] = bVar40 + 1;
            lVar41 = (long)(int)(uint)bVar40 * 0x14;
            pcVar29 = pcVar42 + lVar41 + 0x7ac4;
            pcVar29[0] = '/';
            pcVar29[1] = '\0';
            pcVar29[2] = '\0';
            pcVar29[3] = '\0';
            pcVar29 = pcVar42 + lVar41 + 0x7ac8;
            pcVar29[0] = '\0';
            pcVar29[1] = '\0';
            pcVar29[2] = '\0';
            pcVar29[3] = '\0';
            pcVar29 = pcVar42 + lVar41 + 0x7acc;
            pcVar29[0] = '\0';
            pcVar29[1] = '\0';
            pcVar29[2] = '\0';
            pcVar29[3] = '\0';
            pcVar29 = pcVar42 + lVar41 + 0x7ad4;
            pcVar29[0] = '\x7f';
            pcVar29[1] = '\0';
            pcVar29[2] = '\0';
            pcVar29[3] = '\0';
            pcVar29[4] = '\0';
            pcVar29[5] = '\0';
            pcVar29[6] = '\0';
            pcVar29[7] = '\0';
            pcVar29 = pcVar42 + lVar41 + 0x7adc;
            pcVar29[0] = '\0';
            pcVar29[1] = '\0';
            pcVar29[2] = '\0';
            pcVar29[3] = '\0';
            goto LAB_001c4c5c;
          }
        }
        else {
LAB_001c4c5c:
          uVar19 = (uint)(byte)pcVar42[0x1b7];
        }
        pcVar42[0x1b7] = (char)uVar19 + '\x01';
        lVar41 = (long)(int)uVar19 * 0x14;
        pcVar29 = pcVar42 + lVar41 + 0x7ac4;
        pcVar29[0] = '2';
        pcVar29[1] = '\0';
        pcVar29[2] = '\0';
        pcVar29[3] = '\0';
        pcVar29 = pcVar42 + lVar41 + 0x7ac8;
        pcVar29[0] = '\0';
        pcVar29[1] = '\0';
        pcVar29[2] = '\0';
        pcVar29[3] = '\0';
        *(uint *)(pcVar42 + lVar41 + 0x7acc) = uVar25;
        if (uVar11 == 0x1f) {
          uVar21 = 0;
        }
        else {
          uVar21 = (ulong)(uVar11 + 2);
        }
        *(ulong *)(pcVar42 + lVar41 + 0x7ad4) = uVar21;
        pcVar29 = pcVar42 + lVar41 + 0x7adc;
        pcVar29[0] = '\0';
        pcVar29[1] = '\0';
        pcVar29[2] = '\0';
        pcVar29[3] = '\0';
      }
      uVar11 = uVar25 + 1;
      uVar19 = pbVar24[1] & 0x1f;
      if (((((&DAT_0048e730)[uVar19] & pcVar42[10]) != 0) || (3 < uVar19)) &&
         (bVar40 = pcVar42[0x1b7], bVar40 < 0x88)) {
        pcVar42[0x1b7] = bVar40 + 1;
        lVar41 = (long)(int)(uint)bVar40 * 0x14;
        pcVar29 = pcVar42 + lVar41 + 0x7ac4;
        pcVar29[0] = '\x10';
        pcVar29[1] = '\0';
        pcVar29[2] = '\0';
        pcVar29[3] = '\0';
        pcVar29 = pcVar42 + lVar41 + 0x7ac8;
        pcVar29[0] = '\0';
        pcVar29[1] = '\0';
        pcVar29[2] = '\0';
        pcVar29[3] = '\0';
        *(uint *)(pcVar42 + lVar41 + 0x7acc) = uVar11;
        pcVar29 = pcVar42 + lVar41 + 0x7ad4;
        pcVar29[0] = '\0';
        pcVar29[1] = '\0';
        pcVar29[2] = '\0';
        pcVar29[3] = '\0';
        pcVar29[4] = '\0';
        pcVar29[5] = '\0';
        pcVar29[6] = '\0';
        pcVar29[7] = '\0';
        pcVar29 = pcVar42 + lVar41 + 0x7adc;
        pcVar29[0] = '\0';
        pcVar29[1] = '\0';
        pcVar29[2] = '\0';
        pcVar29[3] = '\0';
        bVar40 = pcVar42[0x1b7];
        uVar17 = (uint)bVar40;
        if ((uVar11 == (byte)pcVar42[0x8649]) && (bVar40 < 0x88)) {
          pcVar42[0x1b7] = bVar40 + 1;
          lVar41 = (long)(int)uVar17 * 0x14;
          pcVar29 = pcVar42 + lVar41 + 0x7ac4;
          pcVar29[0] = '/';
          pcVar29[1] = '\0';
          pcVar29[2] = '\0';
          pcVar29[3] = '\0';
          pcVar29 = pcVar42 + lVar41 + 0x7ac8;
          pcVar29[0] = '\0';
          pcVar29[1] = '\0';
          pcVar29[2] = '\0';
          pcVar29[3] = '\0';
          pcVar29 = pcVar42 + lVar41 + 0x7acc;
          pcVar29[0] = '\0';
          pcVar29[1] = '\0';
          pcVar29[2] = '\0';
          pcVar29[3] = '\0';
          pcVar29 = pcVar42 + lVar41 + 0x7ad4;
          pcVar29[0] = '\x7f';
          pcVar29[1] = '\0';
          pcVar29[2] = '\0';
          pcVar29[3] = '\0';
          pcVar29[4] = '\0';
          pcVar29[5] = '\0';
          pcVar29[6] = '\0';
          pcVar29[7] = '\0';
          pcVar29 = pcVar42 + lVar41 + 0x7adc;
          pcVar29[0] = '\0';
          pcVar29[1] = '\0';
          pcVar29[2] = '\0';
          pcVar29[3] = '\0';
          uVar17 = (uint)(byte)pcVar42[0x1b7];
        }
        pcVar42[0x1b7] = (char)uVar17 + '\x01';
        lVar41 = (long)(int)uVar17 * 0x14;
        pcVar29 = pcVar42 + lVar41 + 0x7ac4;
        pcVar29[0] = '2';
        pcVar29[1] = '\0';
        pcVar29[2] = '\0';
        pcVar29[3] = '\0';
        pcVar29 = pcVar42 + lVar41 + 0x7ac8;
        pcVar29[0] = '\0';
        pcVar29[1] = '\0';
        pcVar29[2] = '\0';
        pcVar29[3] = '\0';
        *(uint *)(pcVar42 + lVar41 + 0x7acc) = uVar11;
        if (uVar19 == 0x1f) {
          uVar21 = 0;
        }
        else {
          uVar21 = (ulong)(uVar19 + 2);
        }
        *(ulong *)(pcVar42 + lVar41 + 0x7ad4) = uVar21;
        pcVar29 = pcVar42 + lVar41 + 0x7adc;
        pcVar29[0] = '\0';
        pcVar29[1] = '\0';
        pcVar29[2] = '\0';
        pcVar29[3] = '\0';
      }
      uVar25 = uVar25 + 2;
      pbVar24 = pbVar24 + 2;
    } while (uVar25 != 0x20);
  }
  if (((byte)pcVar42[0x8710] >> 6 & 1) != 0) {
    if (*(int *)(pcVar42 + 0x8724) == 2) {
      if (pcVar42[0x8642] != '\x01') goto LAB_001c4928;
    }
    else {
      if (pcVar42[0x8642] == '\x01') {
        bVar40 = pcVar42[0x1b7];
        bVar45 = pcVar42[0x117];
        bVar9 = pcVar42[0x118];
        if (bVar40 < 0x88) {
          pcVar42[0x1b7] = bVar40 + 1;
          iVar43 = *(int *)(pcVar42 + 500);
          lVar41 = (long)(int)(uint)bVar40 * 0x14;
          uVar26 = 0;
          iVar23 = 0;
          pcVar29 = pcVar42 + lVar41 + 0x7ac4;
          pcVar29[0] = '!';
          pcVar29[1] = '\0';
          pcVar29[2] = '\0';
          pcVar29[3] = '\0';
          pcVar29 = pcVar42 + lVar41 + 0x7ac8;
          pcVar29[0] = '\x10';
          pcVar29[1] = '\0';
          pcVar29[2] = '\0';
          pcVar29[3] = '\0';
          *(uint *)(pcVar42 + lVar41 + 0x7acc) = (uint)bVar45;
          *(ulong *)(pcVar42 + lVar41 + 0x7ad4) = (ulong)bVar9;
          pcVar29 = pcVar42 + lVar41 + 0x7adc;
          pcVar29[0] = '\0';
          pcVar29[1] = '\0';
          pcVar29[2] = '\0';
          pcVar29[3] = '\0';
          *(uint *)(pcVar42 + 500) = iVar43 + (uint)(byte)pcVar42[1] * 0x4000;
          goto LAB_001c4930;
        }
      }
      else {
LAB_001c4928:
        uVar26 = 0x10;
        iVar23 = 0x10;
LAB_001c4930:
        bVar40 = pcVar42[0x1b7];
        if (bVar40 < 0x88) {
          bVar45 = pcVar42[199];
          if ((bVar45 == 0xff) || ((byte)pcVar42[0x8642] < 2)) {
            iVar43 = *(int *)(pcVar42 + 500);
          }
          else {
            if ((pcVar42[0xd] == '\0') || (pcVar42[0x8647] == '\x01')) {
              iVar43 = *(int *)(&DAT_0048d870 + (long)(int)((byte)pcVar42[0xe7] & 0x7f) * 4);
            }
            else {
              iVar43 = *(int *)(&DAT_0048da70 + (long)(int)((byte)pcVar42[0xe7] & 0x7f) * 4);
            }
            lVar41 = (long)(int)(uint)bVar40 * 0x14;
            pcVar42[0x1b7] = bVar40 + 1;
            iVar16 = *(int *)(&DAT_0048d870 + (long)(int)(uint)(byte)pcVar42[7] * 4);
            iVar34 = *(int *)(&DAT_0048d870 + (long)(int)(uint)(byte)pcVar42[2] * 4);
            pcVar29 = pcVar42 + lVar41 + 0x7ac4;
            pcVar29[0] = '\"';
            pcVar29[1] = '\0';
            pcVar29[2] = '\0';
            pcVar29[3] = '\0';
            uVar25 = iVar16 + iVar34 + iVar43;
            *(undefined4 *)(pcVar42 + lVar41 + 0x7ac8) = uVar26;
            *(ulong *)(pcVar42 + lVar41 + 0x7ad4) = (ulong)bVar45;
            pcVar29 = pcVar42 + lVar41 + 0x7acc;
            pcVar29[0] = '\x10';
            pcVar29[1] = '\0';
            pcVar29[2] = '\0';
            pcVar29[3] = '\0';
            if (0xc0 < uVar25) {
              uVar25 = 0xc0;
            }
            if (((pcVar42[0x10] == '\x01') && (uVar25 < 0x19)) && (pcVar42[0x870f] == '\x01')) {
              uVar25 = 0x19;
            }
            iVar43 = *(int *)(pcVar42 + 500);
            *(undefined4 *)(pcVar42 + lVar41 + 0x7adc) = (&DAT_0048dc70)[uVar25];
            pcVar42[199] = -1;
            bVar40 = pcVar42[0x1b7];
            pcVar42[0xe7] = '\0';
            iVar16 = iVar23 * (uint)(byte)pcVar42[1];
            iVar23 = 0;
            uVar26 = 0;
            iVar43 = iVar43 + iVar16 * 0x400;
          }
          pcVar42[0x1b7] = bVar40 + 1;
          lVar41 = (long)(int)(uint)bVar40 * 0x14;
          uVar21 = 0;
          pcVar29 = pcVar42 + lVar41 + 0x7ac4;
          pcVar29[0] = ' ';
          pcVar29[1] = '\0';
          pcVar29[2] = '\0';
          pcVar29[3] = '\0';
          *(undefined4 *)(pcVar42 + lVar41 + 0x7ac8) = uVar26;
          pcVar29 = pcVar42 + lVar41 + 0x7acc;
          pcVar29[0] = '\x10';
          pcVar29[1] = '\0';
          pcVar29[2] = '\0';
          pcVar29[3] = '\0';
          pcVar29 = pcVar42 + lVar41 + 0x7ad4;
          pcVar29[0] = '\0';
          pcVar29[1] = '\0';
          pcVar29[2] = '\0';
          pcVar29[3] = '\0';
          pcVar29[4] = '\0';
          pcVar29[5] = '\0';
          pcVar29[6] = '\0';
          pcVar29[7] = '\0';
          if (pcVar42[0x10] == '\x01') {
            uVar25 = 0;
            if (pcVar42[0x870f] == '\x01') {
              uVar25 = 0x19;
            }
            uVar21 = (ulong)uVar25;
          }
          *(undefined4 *)(pcVar42 + lVar41 + 0x7adc) = (&DAT_0048dc70)[uVar21];
          *(uint *)(pcVar42 + 500) = iVar43 + iVar23 * (uint)(byte)pcVar42[1] * 0x400;
        }
      }
      pcVar42[0x118] = '\0';
      pcVar42[0x117] = '\x10';
    }
  }
  pcVar42[0x15] = '\0';
  pcVar42[0x14] = '\x01';
  uVar15 = 0;
LAB_001c4adc:
  if (lVar20 == *(long *)PTR___stack_chk_guard_00567868) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar15);
}

