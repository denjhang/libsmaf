/* VIRTUALREGISTER_GetRegM @ 0013b154 52B */


/* ARM::VIRTUALREGISTER_GetRegM(unsigned char, unsigned char) */

undefined1 ARM::VIRTUALREGISTER_GetRegM(uchar param_1,uchar param_2)

{
  if (1 < param_1) {
    return 0xff;
  }
  return (&DAT_00597ca0)[(ulong)param_1 * 0x100 + (long)(int)(uint)param_2];
}

