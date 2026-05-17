/* MaPhrCnv_Seek @ 001f5dc8 4140B */


/* YAMAHA::MaPhrCnv_Seek(_MACNV_SEQ_INFO*, unsigned int, _MACNV_SEEK_INFO*) */

void YAMAHA::MaPhrCnv_Seek(_MACNV_SEQ_INFO *param_1,uint param_2,_MACNV_SEEK_INFO *param_3)

{
  uint uVar1;
  int *piVar2;
  _MACNV_SEEK_INFO *p_Var3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  _MACNV_SEEK_INFO _Var16;
  uint uVar17;
  int *piVar18;
  _MACNV_SEEK_INFO *p_Var19;
  uint uVar20;
  char local_18 [16];
  long local_8;
  
  local_8 = *(long *)PTR___stack_chk_guard_00567868;
  if (((param_1 != (_MACNV_SEQ_INFO *)0x0) &&
      (piVar18 = *(int **)(param_1 + 8), param_3 != (_MACNV_SEEK_INFO *)0x0)) &&
     (bVar8 = piVar18 == (int *)0x0, !bVar8)) {
    if (*piVar18 != 1) {
      uVar10 = 0xffffffff;
      goto LAB_001f64f8;
    }
    piVar2 = piVar18 + 8;
    piVar18[0xf] = 0;
    uVar9 = (uint)bVar8;
    piVar18[0xd] = uVar9;
    piVar18[0xe] = uVar9;
    piVar18[0x18] = 1;
    piVar18[0x1a] = uVar9;
    piVar18[0x1b] = uVar9;
    uVar9 = (uint)bVar8;
    piVar18[0x1c] = uVar9;
    piVar18[0x1e] = 0x7f;
    piVar18[0x1f] = uVar9;
    piVar18[0x21] = uVar9;
    piVar18[0x22] = 1;
    piVar18[0x24] = uVar9;
    piVar18[0x25] = uVar9;
    piVar18[0x26] = uVar9;
    piVar18[0x28] = 0x7f;
    piVar18[0x29] = uVar9;
    piVar18[0x2b] = uVar9;
    piVar18[0x2c] = 1;
    uVar9 = (uint)bVar8;
    piVar18[0x2e] = uVar9;
    piVar18[0x2f] = uVar9;
    piVar18[0x30] = uVar9;
    piVar18[0x32] = 0x7f;
    piVar18[0x33] = uVar9;
    piVar18[0x35] = uVar9;
    piVar18[0x36] = 1;
    piVar18[0x38] = uVar9;
    piVar18[0x39] = uVar9;
    piVar18[0x3a] = uVar9;
    piVar18[0x3c] = 0x7f;
    piVar18[0x3d] = uVar9;
    piVar18[0x3f] = uVar9;
    piVar18[0x40] = 1;
    piVar18[0x42] = uVar9;
    piVar18[0x43] = uVar9;
    piVar18[0x44] = uVar9;
    piVar18[0x46] = 0x7f;
    piVar18[0x47] = uVar9;
    piVar18[0x49] = uVar9;
    piVar18[0x4a] = 1;
    piVar18[0x4c] = uVar9;
    uVar9 = (uint)bVar8;
    piVar18[0x4d] = uVar9;
    piVar18[0x4e] = uVar9;
    piVar18[0x50] = 0x7f;
    piVar18[0x51] = uVar9;
    piVar18[0x53] = uVar9;
    piVar18[0x54] = 1;
    piVar18[0x56] = uVar9;
    piVar18[0x57] = uVar9;
    piVar18[0x58] = uVar9;
    piVar18[0x5a] = 0x7f;
    piVar18[0x5b] = uVar9;
    piVar18[0x5d] = uVar9;
    piVar18[0x5e] = 1;
    piVar18[0x60] = uVar9;
    piVar18[0x61] = uVar9;
    piVar18[0x62] = uVar9;
    piVar18[100] = 0x7f;
    piVar18[0x65] = uVar9;
    piVar18[0x67] = uVar9;
    piVar18[0x68] = 1;
    piVar18[0x6a] = uVar9;
    piVar18[0x6b] = uVar9;
    piVar18[0x6c] = uVar9;
    piVar18[0x6e] = 0x7f;
    piVar18[0x6f] = uVar9;
    piVar18[0x71] = uVar9;
    piVar18[0x72] = 1;
    piVar18[0x74] = uVar9;
    piVar18[0x75] = uVar9;
    piVar18[0x76] = uVar9;
    piVar18[0x78] = 0x7f;
    piVar18[0x79] = uVar9;
    piVar18[0x7b] = uVar9;
    piVar18[0x7c] = 1;
    piVar18[0x7e] = uVar9;
    piVar18[0x7f] = uVar9;
    piVar18[0x80] = uVar9;
    piVar18[0x82] = 0x7f;
    piVar18[0x83] = uVar9;
    piVar18[0x85] = uVar9;
    piVar18[0x86] = 1;
    piVar18[0x88] = uVar9;
    piVar18[0x89] = uVar9;
    piVar18[0x8a] = uVar9;
    piVar18[0x8c] = 0x7f;
    uVar9 = (uint)bVar8;
    piVar18[0x8d] = uVar9;
    piVar18[0x8f] = uVar9;
    piVar18[0x90] = 1;
    piVar18[0x92] = uVar9;
    piVar18[0x93] = uVar9;
    piVar18[0x94] = uVar9;
    piVar18[0x96] = 0x7f;
    piVar18[0x97] = uVar9;
    piVar18[0x99] = uVar9;
    piVar18[0x9a] = 1;
    piVar18[0x9c] = uVar9;
    piVar18[0x9d] = uVar9;
    piVar18[0x9e] = uVar9;
    piVar18[0xa0] = 0x7f;
    piVar18[0xa1] = uVar9;
    piVar18[0xa3] = uVar9;
    piVar18[0xa4] = 1;
    piVar18[0xa6] = uVar9;
    piVar18[0xa7] = uVar9;
    piVar18[0xa8] = uVar9;
    piVar18[0xaa] = 0x7f;
    piVar18[0xab] = uVar9;
    piVar18[0xad] = uVar9;
    piVar18[0xae] = 1;
    piVar18[0xb0] = uVar9;
    piVar18[0xb1] = uVar9;
    piVar18[0xb2] = uVar9;
    piVar18[0xb4] = 0x7f;
    piVar18[0xb5] = uVar9;
    piVar18[0xb7] = uVar9;
    piVar18[0xb8] = -1;
    piVar18[0xbe] = uVar9;
    piVar18[0xbf] = -1;
    piVar18[0xc5] = uVar9;
    piVar18[0xc6] = -1;
    piVar18[0xcc] = uVar9;
    piVar18[0xcd] = -1;
    piVar18[0xd3] = uVar9;
    piVar18[0xd4] = -1;
    piVar18[0xda] = uVar9;
    piVar18[0xdb] = -1;
    piVar18[0xe1] = uVar9;
    piVar18[0xe2] = -1;
    piVar18[0xe8] = uVar9;
    piVar18[0xe9] = -1;
    piVar18[0xef] = uVar9;
    piVar18[0xf0] = -1;
    piVar18[0xf6] = uVar9;
    piVar18[0xf7] = -1;
    piVar18[0xfd] = uVar9;
    piVar18[0xfe] = -1;
    piVar18[0x104] = uVar9;
    piVar18[0x105] = -1;
    piVar18[0x10b] = uVar9;
    piVar18[0x10c] = -1;
    piVar18[0x112] = uVar9;
    piVar18[0x113] = -1;
    piVar18[0x119] = uVar9;
    piVar18[0x11a] = -1;
    piVar18[0x120] = uVar9;
    piVar18[0x121] = -1;
    piVar18[0x127] = uVar9;
    piVar18[0x128] = -1;
    piVar18[0x12e] = uVar9;
    piVar18[0x12f] = -1;
    piVar18[0x135] = uVar9;
    piVar18[0x136] = -1;
    piVar18[0x13c] = uVar9;
    piVar18[0x13d] = -1;
    piVar18[0x143] = uVar9;
    piVar18[0x144] = -1;
    piVar18[0x14a] = uVar9;
    piVar18[0x14b] = -1;
    piVar18[0x151] = uVar9;
    piVar18[0x152] = -1;
    piVar18[0x158] = uVar9;
    piVar18[0x159] = -1;
    piVar18[0x15f] = uVar9;
    piVar18[0x160] = -1;
    piVar18[0x166] = uVar9;
    piVar18[0x167] = -1;
    piVar18[0x16d] = uVar9;
    piVar18[0x16e] = -1;
    piVar18[0x174] = uVar9;
    piVar18[0x175] = -1;
    piVar18[0x17b] = uVar9;
    piVar18[0x17c] = -1;
    piVar18[0x182] = uVar9;
    piVar18[0x183] = -1;
    piVar18[0x189] = uVar9;
    piVar18[0x18a] = -1;
    piVar18[400] = uVar9;
    piVar18[0x191] = -1;
    piVar18[0x197] = uVar9;
    piVar18[0x198] = -1;
    piVar18[0x19e] = uVar9;
    piVar18[0x19f] = -1;
    piVar18[0x1a5] = uVar9;
    piVar18[0x1a6] = -1;
    piVar18[0x1ac] = uVar9;
    piVar18[0x1ad] = -1;
    piVar18[0x1b3] = uVar9;
    piVar18[0x1b4] = -1;
    piVar18[0x1ba] = uVar9;
    piVar18[0x1bb] = -1;
    piVar18[0x1c1] = uVar9;
    piVar18[0x1c2] = -1;
    piVar18[0x1c8] = uVar9;
    piVar18[0x1c9] = -1;
    piVar18[0x1cf] = uVar9;
    piVar18[0x1d0] = -1;
    piVar18[0x1d6] = uVar9;
    piVar18[0x1d7] = -1;
    piVar18[0x1dd] = uVar9;
    piVar18[0x1de] = -1;
    uVar9 = (uint)bVar8;
    piVar18[0x1e4] = uVar9;
    piVar18[0x1e5] = -1;
    piVar18[0x1eb] = uVar9;
    piVar18[0x1ec] = -1;
    piVar18[0x1f2] = uVar9;
    piVar18[499] = -1;
    piVar18[0x1f9] = uVar9;
    piVar18[0x1fa] = -1;
    piVar18[0x200] = uVar9;
    piVar18[0x201] = -1;
    piVar18[0x207] = uVar9;
    piVar18[0x208] = -1;
    piVar18[0x20e] = uVar9;
    piVar18[0x20f] = -1;
    piVar18[0x215] = uVar9;
    piVar18[0x216] = -1;
    piVar18[0x21c] = uVar9;
    piVar18[0x21d] = -1;
    piVar18[0x223] = uVar9;
    piVar18[0x224] = -1;
    piVar18[0x22a] = uVar9;
    piVar18[0x22b] = -1;
    piVar18[0x231] = uVar9;
    piVar18[0x232] = -1;
    piVar18[0x238] = uVar9;
    piVar18[0x239] = -1;
    piVar18[0x23f] = uVar9;
    piVar18[0x240] = -1;
    piVar18[0x246] = uVar9;
    piVar18[0x247] = -1;
    piVar18[0x24d] = uVar9;
    piVar18[0x24e] = -1;
    piVar18[0x254] = uVar9;
    piVar18[0x255] = -1;
    piVar18[0x25b] = uVar9;
    piVar18[0x25c] = -1;
    piVar18[0x262] = uVar9;
    piVar18[0x263] = -1;
    piVar18[0x269] = uVar9;
    piVar18[0x26a] = -1;
    piVar18[0x270] = uVar9;
    piVar18[0x271] = -1;
    piVar18[0x277] = uVar9;
    piVar18[0x278] = -1;
    piVar18[0x27e] = uVar9;
    piVar18[0x27f] = -1;
    piVar18[0x285] = uVar9;
    piVar18[0x286] = -1;
    piVar18[0x28c] = uVar9;
    piVar18[0x28d] = -1;
    piVar18[0x293] = uVar9;
    piVar18[0x294] = -1;
    piVar18[0x29a] = uVar9;
    piVar18[0x29b] = -1;
    piVar18[0x2a1] = uVar9;
    piVar18[0x2a2] = -1;
    piVar18[0x2a8] = uVar9;
    piVar18[0x2a9] = -1;
    piVar18[0x2af] = uVar9;
    piVar18[0x2b0] = -1;
    piVar18[0x2b6] = uVar9;
    piVar18[0x2b7] = -1;
    piVar18[0x2bd] = uVar9;
    piVar18[0x2be] = -1;
    piVar18[0x2c4] = uVar9;
    piVar18[0x2c5] = -1;
    piVar18[0x2cb] = uVar9;
    piVar18[0x2cc] = -1;
    piVar18[0x2d2] = uVar9;
    piVar18[0x2d3] = -1;
    piVar18[0x2d9] = uVar9;
    piVar18[0x2da] = -1;
    piVar18[0x2e0] = uVar9;
    piVar18[0x2e1] = -1;
    piVar18[0x2e7] = uVar9;
    piVar18[0x2e8] = -1;
    piVar18[0x2ee] = uVar9;
    piVar18[0x2ef] = -1;
    piVar18[0x2f5] = uVar9;
    piVar18[0x2f6] = -1;
    piVar18[0x2fc] = uVar9;
    piVar18[0x2fd] = -1;
    piVar18[0x303] = uVar9;
    piVar18[0x304] = -1;
    piVar18[0x30a] = uVar9;
    piVar18[0x30b] = -1;
    piVar18[0x311] = uVar9;
    piVar18[0x312] = -1;
    piVar18[0x318] = uVar9;
    piVar18[0x319] = -1;
    piVar18[799] = uVar9;
    piVar18[800] = -1;
    piVar18[0x326] = uVar9;
    piVar18[0x327] = -1;
    piVar18[0x32d] = uVar9;
    piVar18[0x32e] = -1;
    piVar18[0x334] = uVar9;
    piVar18[0x335] = -1;
    piVar18[0x33b] = uVar9;
    piVar18[0x33c] = -1;
    piVar18[0x342] = uVar9;
    piVar18[0x343] = -1;
    piVar18[0x349] = uVar9;
    piVar18[0x34a] = -1;
    piVar18[0x350] = uVar9;
    piVar18[0x351] = -1;
    piVar18[0x357] = uVar9;
    piVar18[0x358] = -1;
    piVar18[0x35e] = uVar9;
    piVar18[0x35f] = -1;
    piVar18[0x365] = uVar9;
    piVar18[0x366] = -1;
    piVar18[0x36c] = uVar9;
    piVar18[0x36d] = -1;
    piVar18[0x373] = uVar9;
    piVar18[0x374] = -1;
    piVar18[0x37a] = uVar9;
    piVar18[0x37b] = -1;
    piVar18[0x381] = uVar9;
    piVar18[0x382] = -1;
    piVar18[0x388] = uVar9;
    piVar18[0x389] = -1;
    piVar18[0x38f] = uVar9;
    piVar18[0x390] = -1;
    piVar18[0x396] = uVar9;
    piVar18[0x397] = -1;
    piVar18[0x39d] = uVar9;
    piVar18[0x39e] = -1;
    piVar18[0x3a4] = uVar9;
    piVar18[0x3a5] = -1;
    piVar18[0x3ab] = uVar9;
    piVar18[0x3ac] = -1;
    piVar18[0x3b2] = uVar9;
    piVar18[0x3b3] = -1;
    piVar18[0x3b9] = uVar9;
    piVar18[0x3ba] = -1;
    piVar18[0x3c0] = uVar9;
    piVar18[0x3c1] = -1;
    piVar18[0x3c7] = uVar9;
    piVar18[0x3c8] = -1;
    piVar18[0x3ce] = uVar9;
    piVar18[0x3cf] = -1;
    piVar18[0x3d5] = uVar9;
    piVar18[0x3d6] = -1;
    piVar18[0x3dc] = uVar9;
    piVar18[0x3dd] = -1;
    piVar18[0x3e3] = uVar9;
    piVar18[0x3e4] = -1;
    piVar18[0x3ea] = uVar9;
    piVar18[0x3eb] = -1;
    piVar18[0x3f1] = uVar9;
    piVar18[0x3f2] = -1;
    piVar18[0x3f8] = uVar9;
    piVar18[0x3f9] = -1;
    piVar18[0x3ff] = uVar9;
    piVar18[0x400] = -1;
    piVar18[0x406] = uVar9;
    piVar18[0x407] = -1;
    piVar18[0x40d] = uVar9;
    piVar18[0x40e] = -1;
    piVar18[0x414] = uVar9;
    piVar18[0x415] = -1;
    piVar18[0x41b] = uVar9;
    piVar18[0x41c] = -1;
    piVar18[0x422] = uVar9;
    piVar18[0x423] = -1;
    piVar18[0x429] = uVar9;
    piVar18[0x42a] = -1;
    piVar18[0x430] = uVar9;
    piVar18[0x431] = -1;
    piVar18[0x437] = uVar9;
    piVar18[0x438] = -1;
    piVar18[0x43e] = uVar9;
    piVar18[0x439] = 0x1b;
    piVar18[0x11] = -1;
    *param_3 = (_MACNV_SEEK_INFO)0x7f;
    param_3[4] = (_MACNV_SEEK_INFO)0x40;
    *(undefined2 *)(param_3 + 2) = 0x2000;
    param_3[5] = (_MACNV_SEEK_INFO)0x7f;
    p_Var19 = param_3 + 10;
    do {
      *p_Var19 = (_MACNV_SEEK_INFO)0x1;
      p_Var19[1] = (_MACNV_SEEK_INFO)0x0;
      p_Var3 = p_Var19 + 0x34;
      p_Var19[2] = (_MACNV_SEEK_INFO)0x0;
      p_Var19[3] = (_MACNV_SEEK_INFO)0x64;
      p_Var19[0xe] = (_MACNV_SEEK_INFO)0x40;
      p_Var19[5] = (_MACNV_SEEK_INFO)0x7f;
      p_Var19[6] = (_MACNV_SEEK_INFO)0x0;
      *(undefined2 *)(p_Var19 + 0x12) = 0x2000;
      p_Var19[7] = (_MACNV_SEEK_INFO)0x2;
      p_Var19[8] = (_MACNV_SEEK_INFO)0x0;
      p_Var19[9] = (_MACNV_SEEK_INFO)0x40;
      *(undefined2 *)(p_Var19 + 0x14) = 0x2000;
      p_Var19[10] = (_MACNV_SEEK_INFO)0x40;
      p_Var19[0xb] = (_MACNV_SEEK_INFO)0x40;
      p_Var19[0xc] = (_MACNV_SEEK_INFO)0x7f;
      p_Var19[0xd] = (_MACNV_SEEK_INFO)0x0;
      p_Var19[0xf] = (_MACNV_SEEK_INFO)0x0;
      p_Var19[-2] = (_MACNV_SEEK_INFO)0x0;
      p_Var19[-1] = (_MACNV_SEEK_INFO)0x0;
      p_Var19[0x1a] = (_MACNV_SEEK_INFO)0x1;
      p_Var19[0x1b] = (_MACNV_SEEK_INFO)0x0;
      p_Var19[0x1c] = (_MACNV_SEEK_INFO)0x0;
      p_Var19[0x1d] = (_MACNV_SEEK_INFO)0x64;
      p_Var19[0x28] = (_MACNV_SEEK_INFO)0x40;
      p_Var19[0x1f] = (_MACNV_SEEK_INFO)0x7f;
      p_Var19[0x20] = (_MACNV_SEEK_INFO)0x0;
      *(undefined2 *)(p_Var19 + 0x2c) = 0x2000;
      p_Var19[0x21] = (_MACNV_SEEK_INFO)0x2;
      p_Var19[0x22] = (_MACNV_SEEK_INFO)0x0;
      p_Var19[0x23] = (_MACNV_SEEK_INFO)0x40;
      *(undefined2 *)(p_Var19 + 0x2e) = 0x2000;
      p_Var19[0x24] = (_MACNV_SEEK_INFO)0x40;
      p_Var19[0x25] = (_MACNV_SEEK_INFO)0x40;
      p_Var19[0x26] = (_MACNV_SEEK_INFO)0x7f;
      p_Var19[0x27] = (_MACNV_SEEK_INFO)0x0;
      p_Var19[0x29] = (_MACNV_SEEK_INFO)0x0;
      p_Var19[0x18] = (_MACNV_SEEK_INFO)0x0;
      p_Var19[0x19] = (_MACNV_SEEK_INFO)0x0;
      p_Var19 = p_Var3;
    } while (p_Var3 != param_3 + 0x1aa);
    uVar10 = 0;
    if (1 < piVar18[8] - 1U) goto LAB_001f64f8;
    uVar9 = piVar18[0xb];
    if (param_2 <= uVar9 * piVar18[0x10]) {
      uVar17 = 1;
      if ((param_2 != 0) && (uVar17 = 0, uVar9 != 0)) {
        uVar17 = param_2 / uVar9;
      }
      uVar20 = piVar18[10];
      local_18[0] = '\0';
      local_18[1] = '\0';
      local_18[2] = '\0';
      local_18[3] = '\0';
      local_18[4] = '\0';
      local_18[5] = '\0';
      local_18[6] = '\0';
      local_18[7] = '\0';
      local_18[8] = '\0';
      local_18[9] = '\0';
      local_18[10] = '\0';
      local_18[0xb] = '\0';
      local_18[0xc] = '\0';
      local_18[0xd] = '\0';
      local_18[0xe] = '\0';
      local_18[0xf] = '\0';
      piVar18[0xf] = 0;
      piVar18[0xd] = 0;
      uVar9 = 0;
LAB_001f65b4:
      if (uVar9 < uVar20) {
        while( true ) {
          lVar13 = *(long *)(piVar18 + 0x16);
          uVar12 = uVar9 + 1;
          bVar6 = *(byte *)(lVar13 + (ulong)uVar9);
          uVar11 = (uint)bVar6;
          if ((char)bVar6 < '\0') {
            uVar15 = (ulong)uVar12;
            uVar12 = uVar9 + 2;
            uVar11 = *(byte *)(lVar13 + uVar15) + 0x80 + (bVar6 & 0x7f) * 0x80;
          }
          uVar11 = uVar11 + piVar18[0xf];
          if (uVar17 <= uVar11) {
            if (param_2 == 0) {
              uVar17 = 0;
              uVar9 = 0;
            }
            else {
              uVar9 = uVar11 - uVar17 | 0x80000000;
            }
            piVar18[0xe] = uVar9;
            uVar10 = 0;
            piVar18[0xf] = uVar17;
            goto LAB_001f64f8;
          }
          piVar18[0xf] = uVar11;
          uVar11 = uVar12 + 1;
          piVar18[0xd] = uVar11;
          if (*(char *)(lVar13 + (ulong)uVar12) == '\0') break;
          if (*(char *)(lVar13 + (ulong)uVar12) != -1) {
            if (param_2 == 0) {
              piVar18[0xd] = uVar9;
              uVar10 = 0;
              piVar18[0xe] = 0;
              piVar18[0xf] = 0;
              goto LAB_001f64f8;
            }
            piVar18[0xd] = uVar12 + 2;
            uVar9 = uVar12 + 2;
            if (*(char *)(lVar13 + (ulong)uVar11) < '\0') {
              piVar18[0xd] = uVar12 + 3;
              uVar9 = uVar12 + 3;
            }
            goto LAB_001f65b4;
          }
          uVar9 = uVar12 + 2;
          lVar13 = *(long *)(piVar18 + 0x16);
          piVar18[0xd] = uVar9;
          if (*piVar2 == 2) {
            if (*(char *)(lVar13 + (ulong)uVar11) == -0x10) {
              piVar18[0xd] = uVar12 + 3;
              uVar9 = (uint)*(byte *)(lVar13 + (ulong)uVar9) + uVar12 + 3;
              piVar18[0xd] = uVar9;
            }
            goto LAB_001f65b4;
          }
          if (*(char *)(lVar13 + (ulong)uVar11) != -0x10) goto LAB_001f65b4;
          uVar12 = uVar12 + 3;
          piVar18[0xd] = uVar12;
          bVar6 = *(byte *)(lVar13 + (ulong)uVar9);
          if ((bVar6 == 6) &&
             (lVar4 = lVar13 + (ulong)uVar12, *(char *)(lVar13 + (ulong)uVar12) == 'C')) {
            if (*(char *)(lVar4 + 1) == '\x03') {
              if ((*(char *)(lVar4 + 2) == -0x70) && (*(char *)(lVar4 + 5) == -9)) {
                uVar9 = *(byte *)(lVar4 + 3) & 0xf0;
                uVar15 = (ulong)(*(byte *)(lVar4 + 3) & 3);
                if (uVar9 == 0xc0) {
                  piVar2[uVar15 * 10 + 0x12] = piVar2[uVar15 * 10 + 0x12] | 2;
                  piVar2[uVar15 * 10 + 0x13] = (uint)*(byte *)(lVar4 + 4);
                }
                else if (uVar9 == 0xb0) {
                  piVar2[uVar15 * 10 + 0x12] = piVar2[uVar15 * 10 + 0x12] | 1;
                  piVar2[uVar15 * 10 + 0x14] = (uint)*(byte *)(lVar4 + 4);
                }
              }
            }
            else if ((((*(char *)(lVar4 + 1) == '\x04') && (*(char *)(lVar4 + 2) == '\x02')) &&
                     (*(byte *)(lVar4 + 4) < 0x19)) && (*(char *)(lVar4 + 5) == -9)) {
              uVar15 = (ulong)*(byte *)(lVar4 + 3) & 3;
              piVar2[uVar15 * 10 + 0x19] = 1;
              piVar2[uVar15 * 10 + 0x15] = (uint)*(byte *)(lVar4 + 4);
            }
          }
          uVar9 = bVar6 + uVar12;
          piVar18[0xd] = uVar9;
          if (uVar20 <= uVar9) goto LAB_001f6654;
        }
        uVar1 = uVar12 + 2;
        piVar18[0xd] = uVar1;
        bVar6 = *(byte *)(lVar13 + (ulong)uVar11);
        uVar11 = bVar6 & 0x30;
        uVar5 = bVar6 & 0xf;
        uVar15 = (ulong)(bVar6 >> 6);
        uVar9 = uVar1;
        if (uVar11 == 0x20) {
          if ((*piVar2 != 2) || (uVar5 - 1 < 0xe)) {
            _Var16 = SUB41(*(undefined4 *)(&DAT_0048fb80 + (ulong)uVar5 * 4),0);
LAB_001f673c:
            param_3[uVar15 * 0x1a + 0xc] = _Var16;
            uVar20 = piVar18[10];
            uVar9 = piVar18[0xd];
          }
          goto LAB_001f65b4;
        }
        if (uVar11 == 0x30) {
          uVar9 = uVar12 + 3;
          piVar18[0xd] = uVar9;
          _Var16 = *(_MACNV_SEEK_INFO *)(lVar13 + (ulong)uVar1);
          uVar14 = (ulong)(byte)_Var16;
          if (uVar5 < 0xc) {
            uVar12 = (uint)(byte)_Var16;
            switch(uVar5) {
            case 0:
              if (*piVar2 == 2) {
                if (0x7f < uVar12) goto LAB_001f65b4;
                cVar7 = local_18[uVar15];
                param_3[uVar15 * 0x1a + 10] = SUB41(piVar2[uVar15 * 10 + 0x10],0);
                if (cVar7 == '\0') {
                  if (piVar18[0x43f] == 1) {
                    if (uVar12 != piVar18[0x440]) {
LAB_001f6b94:
                      if (piVar18[0x441] == 1) {
                        if (uVar12 == piVar18[0x442]) goto LAB_001f6a64;
                      }
                      else if (piVar18[0x441] == -1) goto LAB_001f6cb8;
                      if (piVar18[0x443] == 1) {
                        if (uVar12 == piVar18[0x444]) goto LAB_001f6a64;
                      }
                      else if (piVar18[0x443] == -1) goto LAB_001f6cb8;
                      if (piVar18[0x445] == 1) {
                        if (uVar12 == piVar18[0x446]) goto LAB_001f6a64;
                      }
                      else if (piVar18[0x445] == -1) goto LAB_001f6cb8;
                      if (piVar18[0x447] == 1) {
                        if (uVar12 == piVar18[0x448]) goto LAB_001f6a64;
                      }
                      else if (piVar18[0x447] == -1) goto LAB_001f6cb8;
                      if (piVar18[0x449] == 1) {
                        if (uVar12 == piVar18[0x44a]) goto LAB_001f6a64;
                      }
                      else if (piVar18[0x449] == -1) goto LAB_001f6cb8;
                      if (piVar18[1099] == 1) {
                        if (uVar12 == piVar18[0x44c]) goto LAB_001f6a64;
                      }
                      else if (piVar18[1099] == -1) goto LAB_001f6cb8;
                      if (piVar18[0x44d] == 1) {
                        if (uVar12 == piVar18[0x44e]) goto LAB_001f6a64;
                      }
                      else if (piVar18[0x44d] == -1) goto LAB_001f6cb8;
                      if (piVar18[0x44f] == 1) {
                        if (uVar12 == piVar18[0x450]) goto LAB_001f6a64;
                      }
                      else if (piVar18[0x44f] == -1) goto LAB_001f6cb8;
                      if (piVar18[0x451] == 1) {
                        if (uVar12 == piVar18[0x452]) goto LAB_001f6a64;
                      }
                      else if (piVar18[0x451] == -1) goto LAB_001f6cb8;
                      if (piVar18[0x453] == 1) {
                        if (uVar12 == piVar18[0x454]) goto LAB_001f6a64;
                      }
                      else if (piVar18[0x453] == -1) goto LAB_001f6cb8;
                      if (piVar18[0x455] == 1) {
                        if (uVar12 == piVar18[0x456]) goto LAB_001f6a64;
                      }
                      else if (piVar18[0x455] == -1) goto LAB_001f6cb8;
                      if (piVar18[0x457] == 1) {
                        if (uVar12 == piVar18[0x458]) goto LAB_001f6a64;
                      }
                      else if (piVar18[0x457] == -1) goto LAB_001f6cb8;
                      if (piVar18[0x459] == 1) {
                        if (uVar12 == piVar18[0x45a]) goto LAB_001f6a64;
                      }
                      else if (piVar18[0x459] == -1) goto LAB_001f6cb8;
                      if (piVar18[0x45b] == 1) {
                        if (uVar12 == piVar18[0x45c]) goto LAB_001f6a64;
                      }
                      else if (piVar18[0x45b] == -1) goto LAB_001f6cb8;
                      if ((piVar18[0x45d] != 1) || (uVar12 != piVar18[0x45e])) goto LAB_001f6cb8;
                    }
                  }
                  else {
                    if (piVar18[0x43f] != -1) goto LAB_001f6b94;
LAB_001f6cb8:
                    param_3[uVar15 * 0x1a + 10] = (_MACNV_SEEK_INFO)0x0;
                    _Var16 = (_MACNV_SEEK_INFO)0x0;
                  }
                }
              }
              else {
                uVar14 = uVar14 & 3;
                if (piVar18[uVar14 * 2 + 0x43f] == 1) {
                  param_3[uVar15 * 0x1a + 10] = (_MACNV_SEEK_INFO)0x1;
                  _Var16 = SUB41(piVar18[uVar14 * 2 + 0x440],0);
                }
                else {
                  param_3[uVar15 * 0x1a + 10] = (_MACNV_SEEK_INFO)0x0;
                  uVar9 = piVar18[uVar14 * 2 + 0x440];
                  if (uVar9 == 0x2c) {
LAB_001f6cf8:
                    piVar18[uVar14 * 2 + 0x440] = 0x32;
                    _Var16 = (_MACNV_SEEK_INFO)0x32;
                  }
                  else {
                    if (uVar9 < 0x2d) {
                      if (uVar9 < 2) {
                        piVar18[uVar14 * 2 + 0x440] = 2;
                        _Var16 = (_MACNV_SEEK_INFO)0x2;
                        goto LAB_001f6a64;
                      }
                    }
                    else if (0x2f < uVar9) {
                      if (uVar9 < 0x32) goto LAB_001f6cf8;
                      if (uVar9 == 0x75) {
                        piVar18[uVar14 * 2 + 0x440] = 0x74;
                        _Var16 = (_MACNV_SEEK_INFO)0x74;
                        goto LAB_001f6a64;
                      }
                    }
                    _Var16 = SUB41(uVar9,0);
                  }
                }
              }
LAB_001f6a64:
              param_3[uVar15 * 0x1a + 0xb] = _Var16;
              uVar9 = piVar18[0xd];
              uVar20 = piVar18[10];
              goto LAB_001f65b4;
            case 1:
              if ((*piVar2 == 2) && ((uVar12 & 0x7f) < 2)) {
                local_18[uVar15] = '\x01';
                piVar2[uVar15 * 10 + 0x10] = uVar12;
              }
              goto LAB_001f65b4;
            case 2:
              uVar11 = piVar2[uVar15 * 10 + 0x17];
              if (uVar12 == 0x81) {
                uVar14 = 0xffffffff;
              }
              else if (uVar12 < 0x82) {
                if (4 < uVar12) {
LAB_001f6aa0:
                  if (*piVar2 != 2) {
                    uVar11 = 0;
                  }
                  uVar14 = (ulong)uVar11;
                }
              }
              else if (uVar12 == 0x83) {
                uVar14 = 0xfffffffd;
              }
              else if (uVar12 < 0x83) {
                uVar14 = 0xfffffffe;
              }
              else {
                uVar14 = 0xfffffffc;
                if (uVar12 != 0x84) goto LAB_001f6aa0;
              }
              piVar2[uVar15 * 10 + 0x17] = (int)uVar14;
              goto LAB_001f65b4;
            case 3:
              if ((uVar12 < 0x80) && (*piVar2 == 2)) {
                _Var16 = SUB41(*(undefined4 *)(&DAT_0048fbc0 + uVar14 * 4),0);
                goto LAB_001f673c;
              }
              break;
            case 4:
              if ((uVar12 < 0x80) || (*piVar2 != 2)) {
                if (piVar2[uVar15 * 10 + 0x19] == 1) {
                  param_3[uVar15 * 0x1a + 0x11] = SUB41(piVar2[uVar15 * 10 + 0x15],0);
                  piVar2[uVar15 * 10 + 0x19] = 0;
                  uVar9 = piVar18[0xd];
                  uVar20 = piVar18[10];
                }
                *(short *)(param_3 + uVar15 * 0x1a + 0x1c) = (short)((uVar12 & 0x7f) << 7);
              }
              goto LAB_001f65b4;
            case 5:
              if ((uVar12 < 0x19) && (*piVar2 == 2)) {
                piVar2[uVar15 * 10 + 0x19] = 1;
                piVar2[uVar15 * 10 + 0x15] = uVar12;
                goto LAB_001f65b4;
              }
              break;
            case 6:
              if ((uVar12 < 0x80) && (*piVar2 == 2)) {
                piVar2[uVar15 * 10 + 0x16] = uVar12;
                goto LAB_001f65b4;
              }
              break;
            case 10:
              if ((uVar12 < 0x80) || (*piVar2 != 2)) {
                param_3[uVar15 * 0x1a + 0x18] = (_MACNV_SEEK_INFO)((byte)_Var16 & 0x7f);
                uVar9 = piVar18[0xd];
                uVar20 = piVar18[10];
              }
              goto LAB_001f65b4;
            case 0xb:
              if ((uVar12 < 0x80) || (*piVar2 != 2)) {
                param_3[uVar15 * 0x1a + 0xd] = (_MACNV_SEEK_INFO)((byte)_Var16 & 0x7f);
                uVar9 = piVar18[0xd];
                uVar20 = piVar18[10];
              }
              goto LAB_001f65b4;
            }
          }
          goto LAB_001f65b4;
        }
        if (((bVar6 & 0x30) == 0) && ((*piVar2 != 2 || (uVar5 - 1 < 0xe)))) {
          param_3[uVar15 * 0x1a + 0xd] = SUB41(*(undefined4 *)(&DAT_0048fb40 + (ulong)uVar5 * 4),0);
          uVar20 = piVar18[10];
          uVar9 = piVar18[0xd];
        }
        goto LAB_001f65b4;
      }
LAB_001f6654:
      uVar10 = 0;
      goto LAB_001f64f8;
    }
  }
  uVar10 = 0xfffffffe;
LAB_001f64f8:
  if (local_8 != *(long *)PTR___stack_chk_guard_00567868) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar10);
  }
  return;
}

