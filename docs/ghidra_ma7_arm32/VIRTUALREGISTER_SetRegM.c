/* VIRTUALREGISTER_SetRegM @ 0003926c 20B */


/* ARM::VIRTUALREGISTER_SetRegM(unsigned char, unsigned char, unsigned char) */

void ARM::VIRTUALREGISTER_SetRegM(uchar param_1,uchar param_2,uchar param_3)

{
  if (param_1 < 2) {
    *(uchar *)((int)&DAT_00039b48 + (uint)param_2 + DAT_00039280 + (uint)param_1 * 0x100 + 2) =
         param_3;
  }
  return;
}

