/* HvInfo_Init @ 001b60f0 88B */


/* YAMAHA::HvInfo_Init(_MAHVSCNV_INFO*) */

void YAMAHA::HvInfo_Init(_MAHVSCNV_INFO *param_1)

{
  undefined8 uVar1;
  
  uVar1 = DAT_001b6148;
  *param_1 = (_MAHVSCNV_INFO)0x0;
  param_1[1] = (_MAHVSCNV_INFO)0x7f;
  param_1[2] = (_MAHVSCNV_INFO)0x0;
  *(undefined8 *)(param_1 + 0x398) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0x3a8) = uVar1;
  *(undefined8 *)(param_1 + 0x3b0) = 0;
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  param_1[0x3c0] = (_MAHVSCNV_INFO)0x0;
  *(undefined8 *)(param_1 + 0x3c8) = 0;
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  return;
}

