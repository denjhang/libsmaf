/* DINCONTROL_SetDinBufInfo @ 0014601c 64B */


/* ARM::DINCONTROL_SetDinBufInfo(unsigned int, short*, short*, unsigned int) */

undefined8 ARM::DINCONTROL_SetDinBufInfo(uint param_1,short *param_2,short *param_3,uint param_4)

{
  if (param_1 < 2) {
    (&DAT_00599420)[param_1] = param_2;
    (&DAT_00599430)[param_1] = param_3;
    (&DAT_00599440)[param_1] = param_4;
    return 0;
  }
  return 0xffffffff;
}

