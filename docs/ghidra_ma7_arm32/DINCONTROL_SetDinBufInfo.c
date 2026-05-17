/* DINCONTROL_SetDinBufInfo @ 00041ab0 40B */


/* ARM::DINCONTROL_SetDinBufInfo(unsigned int, short*, short*, unsigned int) */

undefined4 ARM::DINCONTROL_SetDinBufInfo(uint param_1,short *param_2,short *param_3,uint param_4)

{
  int iVar1;
  
  if (param_1 < 2) {
    iVar1 = DAT_00041ad8 + 0x41abe + param_1 * 4;
    *(short **)(DAT_00041ad8 + 0x41abe + param_1 * 4) = param_2;
    *(short **)(iVar1 + 8) = param_3;
    *(uint *)(iVar1 + 0x10) = param_4;
    return 0;
  }
  return 0xffffffff;
}

