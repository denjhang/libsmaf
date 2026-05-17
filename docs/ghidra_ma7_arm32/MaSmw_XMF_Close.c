/* MaSmw_XMF_Close @ 0008d144 60B */


/* YAMAHA::MaSmw_XMF_Close(YAMAHA::_tagmaXMF_Info*) */

undefined4 YAMAHA::MaSmw_XMF_Close(_tagmaXMF_Info *param_1)

{
  if (param_1 == (_tagmaXMF_Info *)0x0) {
    return 0xfffffffe;
  }
  if (*(int *)param_1 == 1) {
    *(undefined4 *)param_1 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    return 0;
  }
  return 0xffffffff;
}

