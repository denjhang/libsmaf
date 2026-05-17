/* HvInfo_Init @ 00093360 68B */


/* YAMAHA::HvInfo_Init(_MAHVSCNV_INFO*) */

undefined4 YAMAHA::HvInfo_Init(_MAHVSCNV_INFO *param_1)

{
  param_1[1] = (_MAHVSCNV_INFO)0x7f;
  *(undefined4 *)(param_1 + 0x3a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3a8) = 0x14;
  *(undefined4 *)(param_1 + 0x3ac) = 0x33;
  *param_1 = (_MAHVSCNV_INFO)0x0;
  param_1[2] = (_MAHVSCNV_INFO)0x0;
  *(undefined4 *)(param_1 + 0x398) = 0;
  *(undefined4 *)(param_1 + 0x39c) = 0;
  *(undefined4 *)(param_1 + 0x3a0) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  param_1[0x3b8] = (_MAHVSCNV_INFO)0x0;
  *(undefined4 *)(param_1 + 0x3bc) = 0;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  return 0;
}

