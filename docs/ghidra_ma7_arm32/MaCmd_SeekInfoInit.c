/* MaCmd_SeekInfoInit @ 000f2f64 228B */


/* YAMAHA::MaCmd_SeekInfoInit(_MACNV_SEEK_INFO*) */

void YAMAHA::MaCmd_SeekInfoInit(_MACNV_SEEK_INFO *param_1)

{
  int iVar1;
  
  *param_1 = (_MACNV_SEEK_INFO)0x7f;
  param_1[5] = (_MACNV_SEEK_INFO)0x4c;
  *(undefined2 *)(param_1 + 2) = 0x2000;
  iVar1 = 0x20;
  param_1[4] = (_MACNV_SEEK_INFO)0x40;
  param_1[6] = (_MACNV_SEEK_INFO)0xfe;
  param_1[7] = (_MACNV_SEEK_INFO)0xfe;
  do {
    iVar1 = iVar1 + -2;
    param_1[8] = (_MACNV_SEEK_INFO)0x0;
    param_1[9] = (_MACNV_SEEK_INFO)0x0;
    param_1[10] = (_MACNV_SEEK_INFO)0x0;
    param_1[0xb] = (_MACNV_SEEK_INFO)0x0;
    param_1[0xc] = (_MACNV_SEEK_INFO)0x0;
    param_1[0xd] = (_MACNV_SEEK_INFO)0x64;
    param_1[0xe] = (_MACNV_SEEK_INFO)0x7f;
    param_1[0xf] = (_MACNV_SEEK_INFO)0x7f;
    param_1[0x10] = (_MACNV_SEEK_INFO)0x0;
    param_1[0x11] = (_MACNV_SEEK_INFO)0x2;
    param_1[0x12] = (_MACNV_SEEK_INFO)0x1;
    param_1[0x13] = (_MACNV_SEEK_INFO)0x40;
    param_1[0x14] = (_MACNV_SEEK_INFO)0x40;
    param_1[0x15] = (_MACNV_SEEK_INFO)0x40;
    param_1[0x16] = (_MACNV_SEEK_INFO)0x7c;
    param_1[0x17] = (_MACNV_SEEK_INFO)0x28;
    param_1[0x18] = (_MACNV_SEEK_INFO)0x40;
    param_1[0x19] = (_MACNV_SEEK_INFO)0x0;
    param_1[0x1a] = (_MACNV_SEEK_INFO)0x0;
    *(undefined2 *)(param_1 + 0x1c) = 0x2000;
    *(undefined2 *)(param_1 + 0x1e) = 0x2000;
    *(undefined2 *)(param_1 + 0x20) = 0;
    param_1[0x22] = (_MACNV_SEEK_INFO)0x0;
    param_1[0x23] = (_MACNV_SEEK_INFO)0x0;
    param_1[0x24] = (_MACNV_SEEK_INFO)0x0;
    param_1[0x25] = (_MACNV_SEEK_INFO)0x0;
    param_1[0x26] = (_MACNV_SEEK_INFO)0x0;
    param_1[0x27] = (_MACNV_SEEK_INFO)0x64;
    param_1[0x28] = (_MACNV_SEEK_INFO)0x7f;
    param_1[0x29] = (_MACNV_SEEK_INFO)0x7f;
    param_1[0x2a] = (_MACNV_SEEK_INFO)0x0;
    param_1[0x2b] = (_MACNV_SEEK_INFO)0x2;
    param_1[0x2c] = (_MACNV_SEEK_INFO)0x1;
    param_1[0x2d] = (_MACNV_SEEK_INFO)0x40;
    param_1[0x2e] = (_MACNV_SEEK_INFO)0x40;
    param_1[0x2f] = (_MACNV_SEEK_INFO)0x40;
    param_1[0x30] = (_MACNV_SEEK_INFO)0x7c;
    param_1[0x31] = (_MACNV_SEEK_INFO)0x28;
    param_1[0x32] = (_MACNV_SEEK_INFO)0x40;
    param_1[0x33] = (_MACNV_SEEK_INFO)0x0;
    param_1[0x34] = (_MACNV_SEEK_INFO)0x0;
    *(undefined2 *)(param_1 + 0x36) = 0x2000;
    *(undefined2 *)(param_1 + 0x38) = 0x2000;
    *(undefined2 *)(param_1 + 0x3a) = 0;
    param_1 = param_1 + 0x34;
  } while (iVar1 != 0);
  return;
}

