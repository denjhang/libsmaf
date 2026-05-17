/* VIRTUALREGISTER_SetRegM @ 0013b120 52B */


/* ARM::VIRTUALREGISTER_SetRegM(unsigned char, unsigned char, unsigned char) */

void ARM::VIRTUALREGISTER_SetRegM(uchar param_1,uchar param_2,uchar param_3)

{
  if (1 < param_1) {
    return;
  }
  (&DAT_00597ca0)[(ulong)param_1 * 0x100 + (long)(int)(uint)param_2] = param_3;
  return;
}

