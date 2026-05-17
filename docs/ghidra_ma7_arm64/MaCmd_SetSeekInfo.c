/* MaCmd_SetSeekInfo @ 00239ad8 1344B */


/* YAMAHA::MaCmd_SetSeekInfo(unsigned int, int, unsigned int, unsigned int, _MACNV_SEEK_INFO*,
   unsigned char*) */

void YAMAHA::MaCmd_SetSeekInfo
               (uint param_1,int param_2,uint param_3,uint param_4,_MACNV_SEEK_INFO *param_5,
               uchar *param_6)

{
  char cVar1;
  _MACNV_SEEK_INFO _Var2;
  _MACNV_SEEK_INFO _Var3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  _MACNV_SEEK_INFO *p_Var11;
  undefined1 *puVar12;
  byte *pbVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  undefined1 uVar19;
  
  lVar8 = (ulong)param_1 * 0x65d0;
  lVar9 = (ulong)param_1 * 0x65d0;
  (&DAT_0074a7d2)[lVar8] = (byte)*param_5 & 0x7f;
  puVar12 = &DAT_0074a410 + lVar9;
  uVar18 = (param_1 & 0xf) << 4;
  (&DAT_0074a7d3)[lVar8] = (byte)param_5[5] & 0x7f;
  cVar1 = (&DAT_0074a7d8)[lVar8];
  uVar4 = *(ushort *)(&DAT_0052f750 + (long)(int)((byte)param_5[4] & 0x7f) * 2);
  *(ushort *)(&DAT_0074a7dc + lVar8) = uVar4;
  iVar17 = 0;
  uVar5 = *(ushort *)(&DAT_0052ef50 + (long)(int)(*(ushort *)(param_5 + 2) >> 4 & 0x3ff) * 2);
  *(ushort *)(&DAT_0074a7de + lVar8) = uVar5;
  p_Var11 = param_5;
  uVar16 = uVar18;
  do {
    bVar15 = (byte)uVar16;
    _Var2 = p_Var11[9];
    _Var3 = p_Var11[8];
    puVar12[2] = 0;
    puVar12[3] = 0xff;
    puVar12[1] = ((byte)_Var2 & 1) << 3 | (byte)_Var3 & 7;
    uVar19 = 0;
    _Var2 = p_Var11[10];
    *(_MACNV_SEEK_INFO *)(puVar12 + 4) = _Var2;
    *(_MACNV_SEEK_INFO *)(puVar12 + 5) = p_Var11[0xb];
    *(_MACNV_SEEK_INFO *)(puVar12 + 6) = p_Var11[0x12];
    puVar12[7] = (byte)p_Var11[0xd] & 0x7f;
    puVar12[8] = (byte)p_Var11[0xe] & 0x7f;
    *(_MACNV_SEEK_INFO *)(puVar12 + 10) = p_Var11[0x18];
    _Var3 = p_Var11[0xf];
    puVar12[0xc] = 1;
    puVar12[0xb] = (byte)_Var3 & 0x7f;
    *(_MACNV_SEEK_INFO *)(puVar12 + 0xd) = p_Var11[0x10];
    uVar14 = (uint)(byte)p_Var11[0x11];
    if (0x18 < (byte)p_Var11[0x11]) {
      uVar14 = 0x18;
    }
    puVar12[0xe] = (char)uVar14;
    *(undefined2 *)(puVar12 + 0x14) =
         *(undefined2 *)
          (&DAT_00531460 +
          ((ulong)uVar14 * 0x80 + ((ulong)(*(ushort *)(p_Var11 + 0x1c) >> 7) & 0x7f)) * 2);
    uVar6 = *(ushort *)(&DAT_0052f750 + (long)(int)((byte)p_Var11[0x13] & 0x7f) * 2);
    *(ushort *)(puVar12 + 0x18) = uVar6;
    uVar7 = *(ushort *)(&DAT_0052ef50 + (long)(int)(*(ushort *)(p_Var11 + 0x1e) >> 4 & 0x3ff) * 2);
    *(ushort *)(puVar12 + 0x1a) = uVar7;
    if (param_3 != 0) {
      uVar19 = (&DAT_00531350)[(ulong)(byte)p_Var11[0x17] & 0x7f];
    }
    puVar12[0x12] = uVar19;
    uVar19 = 0;
    if (param_4 != 0) {
      uVar19 = (&DAT_00531350)[(ulong)(byte)p_Var11[0x19] & 0x7f];
    }
    puVar12[0x13] = uVar19;
    uVar19 = 0x7c;
    if (param_3 != 0 || param_4 != 0) {
      uVar19 = (&DAT_00531350)[(ulong)(byte)p_Var11[0x16] & 0x7f];
    }
    puVar12[0x11] = uVar19;
    *(short *)(puVar12 + 0x16) =
         (short)(((uint)uVar7 * (uint)uVar6 >> 10) * ((uint)uVar5 * (uint)uVar4 >> 10) >> 10);
    _Var3 = p_Var11[0x1a];
    *(_MACNV_SEEK_INFO *)(puVar12 + 0x10) = _Var3;
    if ((_Var3 == (_MACNV_SEEK_INFO)0x2) || ((_Var3 == (_MACNV_SEEK_INFO)0x0 && (-1 < (char)_Var2)))
       ) {
      bVar15 = bVar15 | 0x40;
    }
    puVar12[0xf] = bVar15;
    if (cVar1 == '\0') {
      switch(p_Var11[0x1b]) {
      case (_MACNV_SEEK_INFO)0x2:
        *puVar12 = 0x40;
        break;
      case (_MACNV_SEEK_INFO)0x3:
        *puVar12 = 0x50;
        break;
      case (_MACNV_SEEK_INFO)0x4:
        *puVar12 = 0x60;
        break;
      case (_MACNV_SEEK_INFO)0x5:
        *puVar12 = 0x70;
        break;
      default:
        *puVar12 = 0;
      }
    }
    iVar17 = iVar17 + 1;
    p_Var11 = p_Var11 + 0x1a;
    puVar12 = puVar12 + 0x1e;
    uVar16 = uVar16 + 1 & 0xff;
  } while (iVar17 != 0x20);
  p_Var11 = param_5 + 0xc;
  uVar10 = 0;
  pbVar13 = &DAT_0074a421 + lVar9;
  lVar8 = (ulong)param_1 * 0x65d0;
  do {
    uVar16 = (uint)uVar10;
    if (-1 < param_2) {
      param_6[uVar10] = 0x80;
      uVar16 = uVar16 + 1;
    }
    param_6[uVar16] = 0x8b;
    param_6[uVar16 + 1] = (uchar)uVar18;
    uVar14 = (uint)(byte)(&DAT_0052ee00)[(byte)(&DAT_0074a7d3)[lVar8]] +
             (uint)(byte)(&DAT_0052ee00)[(byte)(&DAT_0074a7d2)[lVar8]] +
             (uint)(byte)(&DAT_0052ee00)[pbVar13[-8]] + (uint)(byte)(&DAT_0052ee00)[pbVar13[-10]] +
             (uint)(byte)(&DAT_0052ee00)[pbVar13[-6]];
    uVar10 = (ulong)uVar14;
    if (0xc0 < uVar14) {
      uVar10 = 0xc0;
    }
    bVar15 = (&DAT_0052ee80)[uVar10];
    param_6[uVar16 + 2] = bVar15 & 0x7c;
    param_6[uVar16 + 3] = (byte)p_Var11[0xc] & 0x7c | 1;
    param_6[uVar16 + 4] = pbVar13[-4] | pbVar13[-5] << 4;
    uVar14 = (uint)(byte)*p_Var11;
    if (4 < (byte)*p_Var11) {
      *p_Var11 = (_MACNV_SEEK_INFO)0x0;
      uVar14 = 0;
    }
    param_6[uVar16 + 5] =
         "  $$$((,,,0004444888<<<<@@@@DDDDDHHHHLLLLLPPPPPTTTTTTXXXXX\\\\\\\\\\\\``````dddddddhhhhhhlllllllpppppppttttttttxxxxxxxx|||||||"
         [(long)(int)uVar14 + 0x78];
    uVar14 = (uint)*(ushort *)(pbVar13 + 5) * (uint)*(ushort *)(pbVar13 + 3) >> 10;
    if (0x3fff < uVar14) {
      uVar14 = 0x3fff;
    }
    param_6[uVar16 + 6] = (uchar)(uVar14 >> 7);
    param_6[uVar16 + 7] = (byte)uVar14 & 0x7f;
    param_6[uVar16 + 8] = (&DAT_005313e0)[(ulong)(byte)p_Var11[8] & 0x7f] & 0x7e;
    if ((&DAT_0074a7d8)[lVar8] == '\0') {
      uVar14 = uVar16 + 0xb;
      param_6[uVar16 + 9] = (&DAT_005313e0)[(byte)p_Var11[9] & 0x7f] & 0x7f;
      param_6[uVar16 + 10] = (byte)param_1 | 0x80 | pbVar13[-0x11];
    }
    else {
      uVar14 = uVar16 + 10;
      param_6[uVar16 + 9] = (&DAT_005313e0)[(byte)p_Var11[9] & 0x7f] | 0x80;
    }
    if (param_3 != 0) {
      if (-1 < param_2) {
        param_6[uVar14] = 0x80;
        uVar14 = uVar14 + 1;
      }
      param_6[uVar14] = 0x95;
      uVar16 = uVar14 + 1;
      uVar14 = uVar14 + 2;
      param_6[uVar16] = pbVar13[1] & 0x7c | 0x80;
    }
    if (param_4 != 0) {
      if (-1 < param_2) {
        param_6[uVar14] = 0x80;
        uVar14 = uVar14 + 1;
      }
      param_6[uVar14] = 0x96;
      uVar16 = uVar14 + 1;
      uVar14 = uVar14 + 2;
      param_6[uVar16] = pbVar13[2] & 0x7c | 0x80;
    }
    if (param_3 != 0 || param_4 != 0) {
      if (-1 < param_2) {
        param_6[uVar14] = 0x80;
        uVar14 = uVar14 + 1;
      }
      param_6[uVar14] = 0x97;
      uVar16 = uVar14 + 1;
      uVar14 = uVar14 + 2;
      param_6[uVar16] = *pbVar13 & 0x7c | 0x80;
    }
    if (-1 < param_2) {
      param_6[uVar14] = 0x80;
      uVar14 = uVar14 + 1;
    }
    param_6[uVar14] = 0x8c;
    pbVar13 = pbVar13 + 0x1e;
    param_6[uVar14 + 1] = bVar15 & 0x7c | 0x81;
    uVar10 = (ulong)(uVar14 + 2);
    p_Var11 = p_Var11 + 0x1a;
    uVar18 = uVar18 + 1 & 0xff;
  } while (pbVar13 != (byte *)(lVar9 + 0x74a601));
  return;
}

