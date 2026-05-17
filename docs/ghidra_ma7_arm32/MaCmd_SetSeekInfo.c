/* MaCmd_SetSeekInfo @ 000f2ad8 1126B */


/* YAMAHA::MaCmd_SetSeekInfo(unsigned int, int, unsigned int, unsigned int, _MACNV_SEEK_INFO*,
   unsigned char*) */

void YAMAHA::MaCmd_SetSeekInfo
               (uint param_1,int param_2,uint param_3,uint param_4,_MACNV_SEEK_INFO *param_5,
               uchar *param_6)

{
  _MACNV_SEEK_INFO _Var1;
  _MACNV_SEEK_INFO _Var2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  _MACNV_SEEK_INFO *p_Var14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar17;
  byte bVar18;
  int iVar19;
  undefined1 *puVar20;
  undefined1 uVar21;
  uchar uVar22;
  uint uVar23;
  uint local_48;
  
  iVar10 = DAT_000f2f50;
  iVar19 = DAT_000f2f4c + 0xf2afa;
  puVar8 = (undefined1 *)(param_1 * 0x65d0 + DAT_000f2f48 + 0xf2af0);
  uVar23 = (param_1 & 0xf) << 4;
  puVar8[0x3c2] = (byte)*param_5 & 0x7f;
  puVar8[0x3c3] = (byte)param_5[5] & 0x7f;
  iVar17 = DAT_000f2f58;
  iVar11 = DAT_000f2f54;
  uVar13 = param_3 | param_4;
  uVar3 = *(ushort *)(iVar19 + ((byte)param_5[4] & 0x7f) * 2 + 0x84c);
  iVar9 = 0;
  *(ushort *)(puVar8 + 0x3cc) = uVar3;
  uVar4 = *(ushort *)(iVar19 + ((*(ushort *)(param_5 + 2) & 0x3fff) >> 4) * 2 + 0x4c);
  *(ushort *)(puVar8 + 0x3ce) = uVar4;
  uVar12 = uVar23;
  p_Var14 = param_5;
  puVar15 = puVar8;
  do {
    bVar18 = (byte)uVar12;
    _Var1 = p_Var14[9];
    _Var2 = p_Var14[8];
    puVar15[2] = 0;
    puVar15[3] = 0xff;
    puVar15[1] = (byte)_Var2 & 7 | ((byte)_Var1 & 1) << 3;
    _Var1 = p_Var14[10];
    *(_MACNV_SEEK_INFO *)(puVar15 + 4) = _Var1;
    *(_MACNV_SEEK_INFO *)(puVar15 + 5) = p_Var14[0xb];
    *(_MACNV_SEEK_INFO *)(puVar15 + 6) = p_Var14[0x12];
    puVar15[7] = (byte)p_Var14[0xd] & 0x7f;
    puVar15[8] = (byte)p_Var14[0xe] & 0x7f;
    *(_MACNV_SEEK_INFO *)(puVar15 + 10) = p_Var14[0x18];
    _Var2 = p_Var14[0xf];
    puVar15[0xc] = 1;
    puVar15[0xb] = (byte)_Var2 & 0x7f;
    *(_MACNV_SEEK_INFO *)(puVar15 + 0xd) = p_Var14[0x10];
    uVar16 = (uint)(byte)p_Var14[0x11];
    if (0x17 < uVar16) {
      uVar16 = 0x18;
    }
    puVar15[0xe] = (char)uVar16;
    *(undefined2 *)(puVar15 + 0x14) =
         *(undefined2 *)
          (iVar17 + 0xf2b64 + (((*(ushort *)(p_Var14 + 0x1c) & 0x3fff) >> 7) + uVar16 * 0x80) * 2 +
          0x364);
    uVar5 = *(ushort *)(iVar19 + ((byte)p_Var14[0x13] & 0x7f) * 2 + 0x84c);
    *(ushort *)(puVar15 + 0x18) = uVar5;
    uVar21 = (undefined1)param_3;
    uVar6 = *(ushort *)(iVar19 + ((*(ushort *)(p_Var14 + 0x1e) & 0x3fff) >> 4) * 2 + 0x4c);
    *(ushort *)(puVar15 + 0x1a) = uVar6;
    if (param_3 != 0) {
      uVar21 = *(undefined1 *)(((byte)p_Var14[0x17] & 0x7f) + iVar17 + 0xf2b64 + 0x25c);
    }
    puVar15[0x12] = uVar21;
    uVar21 = (undefined1)param_4;
    if (param_4 != 0) {
      uVar21 = *(undefined1 *)(((byte)p_Var14[0x19] & 0x7f) + iVar11 + 0xf2d9a);
    }
    puVar15[0x13] = uVar21;
    if (uVar13 == 0) {
      uVar21 = 0x7c;
    }
    else {
      uVar21 = *(undefined1 *)(((byte)p_Var14[0x16] & 0x7f) + iVar10 + 0xf2d84);
    }
    puVar15[0x11] = uVar21;
    *(short *)(puVar15 + 0x16) =
         (short)(((uint)uVar3 * (uint)uVar4 >> 10) * ((uint)uVar5 * (uint)uVar6 >> 10) >> 10);
    _Var2 = p_Var14[0x1a];
    *(_MACNV_SEEK_INFO *)(puVar15 + 0x10) = _Var2;
    if ((_Var2 == (_MACNV_SEEK_INFO)0x2) ||
       ((_Var2 == (_MACNV_SEEK_INFO)0x0 && (-1 < (int)((uint)(byte)_Var1 << 0x18))))) {
      bVar18 = bVar18 | 0x40;
    }
    puVar15[0xf] = bVar18;
    if (puVar8[0x3c8] == '\0') {
      switch(p_Var14[0x1b]) {
      case (_MACNV_SEEK_INFO)0x2:
        *puVar15 = 0x40;
        break;
      case (_MACNV_SEEK_INFO)0x3:
        *puVar15 = 0x50;
        break;
      case (_MACNV_SEEK_INFO)0x4:
        *puVar15 = 0x60;
        break;
      case (_MACNV_SEEK_INFO)0x5:
        *puVar15 = 0x70;
        break;
      default:
        *puVar15 = 0;
      }
    }
    iVar7 = DAT_000f2f5c;
    iVar9 = iVar9 + 1;
    p_Var14 = p_Var14 + 0x1a;
    puVar15 = puVar15 + 0x1e;
    uVar12 = uVar12 + 1 & 0xff;
  } while (iVar9 != 0x20);
  iVar17 = DAT_000f2f5c + 0xf2cf6;
  iVar10 = DAT_000f2f60 + 0xf2cf8;
  puVar20 = puVar8 + 0x11;
  iVar11 = 0;
  puVar15 = puVar8;
  local_48 = uVar23;
  do {
    uVar22 = (uchar)uVar23;
    if (-1 < param_2) {
      uVar22 = 0x80;
    }
    if (-1 < param_2) {
      param_6[iVar11] = uVar22;
      iVar11 = iVar11 + 1;
    }
    param_6[iVar11] = 0x8b;
    param_6[iVar11 + 1] = (uchar)local_48;
    uVar12 = (uint)*(byte *)((uint)(byte)puVar15[9] + iVar17 + -0xf8) +
             (uint)*(byte *)((uint)(byte)puVar8[0x3c3] + iVar17 + -0xf8) +
             (uint)*(byte *)((uint)(byte)puVar8[0x3c2] + iVar17 + -0xf8) +
             (uint)*(byte *)((uint)(byte)puVar20[-10] + iVar17 + -0xf8) +
             (uint)*(byte *)((uint)(byte)puVar15[0xb] + iVar17 + -0xf8);
    if (uVar12 < 0xc1) {
      iVar9 = uVar12 + iVar17;
    }
    else {
      iVar9 = iVar7 + 0xf2db6;
    }
    bVar18 = *(byte *)(iVar9 + -0x78) & 0x7c;
    param_6[iVar11 + 2] = bVar18;
    param_6[iVar11 + 3] = (byte)param_5[0x18] & 0x7c | 1;
    param_6[iVar11 + 4] = puVar15[0xd] | puVar15[0xc] << 4;
    uVar23 = (uint)(byte)param_5[0xc];
    uVar12 = uVar23;
    if (4 < uVar23) {
      uVar12 = 0;
    }
    if (4 < uVar23) {
      param_5[0xc] = (_MACNV_SEEK_INFO)0x0;
    }
    param_6[iVar11 + 5] = *(uchar *)(uVar12 + iVar10 + 0x2dc);
    uVar12 = (uint)*(ushort *)(puVar15 + 0x14) * (uint)*(ushort *)(puVar15 + 0x16) >> 10;
    if (0x3ffe < uVar12) {
      uVar12 = 0x3fff;
    }
    param_6[iVar11 + 7] = (byte)uVar12 & 0x7f;
    param_6[iVar11 + 6] = (uchar)(uVar12 >> 7);
    param_6[iVar11 + 8] = *(byte *)(((byte)param_5[0x14] & 0x7f) + iVar10 + 0x2e4) & 0x7e;
    if (puVar8[0x3c8] == '\0') {
      iVar9 = iVar11 + 0xb;
      param_6[iVar11 + 9] = *(byte *)(((byte)param_5[0x15] & 0x7f) + iVar10 + 0x2e4) & 0x7f;
      param_6[iVar11 + 10] = (byte)param_1 | 0x80 | puVar20[-0x11];
      iVar11 = iVar10;
    }
    else {
      iVar9 = iVar11 + 10;
      param_6[iVar11 + 9] = *(byte *)(((byte)param_5[0x15] & 0x7f) + iVar10 + 0x2e4) | 0x80;
      iVar11 = 0x3fff;
    }
    uVar22 = (uchar)iVar11;
    if (param_3 != 0) {
      if (-1 < param_2) {
        uVar22 = 0x80;
      }
      iVar11 = iVar9;
      if (-1 < param_2) {
        param_6[iVar9] = uVar22;
        iVar11 = iVar9 + 1;
      }
      param_6[iVar11] = 0x95;
      iVar9 = iVar11 + 2;
      param_6[iVar11 + 1] = puVar15[0x12] & 0x7c | 0x80;
    }
    if (param_4 != 0) {
      if (-1 < param_2) {
        uVar22 = 0x80;
      }
      iVar11 = iVar9;
      if (-1 < param_2) {
        param_6[iVar9] = uVar22;
        iVar11 = iVar9 + 1;
      }
      param_6[iVar11] = 0x96;
      iVar9 = iVar11 + 2;
      param_6[iVar11 + 1] = puVar15[0x13] & 0x7c | 0x80;
    }
    uVar12 = uVar13;
    if (uVar13 != 0) {
      if (-1 < param_2) {
        uVar12 = 0xffffff80;
      }
      iVar11 = iVar9;
      if (-1 < param_2) {
        param_6[iVar9] = (uchar)uVar12;
        iVar11 = iVar9 + 1;
      }
      param_6[iVar11] = 0x97;
      iVar9 = iVar11 + 2;
      param_6[iVar11 + 1] = puVar15[0x11] & 0x7c | 0x80;
    }
    uVar22 = (uchar)uVar12;
    puVar15 = puVar15 + 0x1e;
    puVar20 = puVar20 + 0x1e;
    if (-1 < param_2) {
      uVar22 = 0x80;
    }
    if (-1 < param_2) {
      param_6[iVar9] = uVar22;
      iVar9 = iVar9 + 1;
    }
    uVar23 = 0xffffff8c;
    local_48 = local_48 + 1 & 0xff;
    param_6[iVar9] = 0x8c;
    param_5 = param_5 + 0x1a;
    param_6[iVar9 + 1] = bVar18 | 0x81;
    iVar11 = iVar9 + 2;
  } while (puVar15 != puVar8 + 0x1e0);
  return;
}

