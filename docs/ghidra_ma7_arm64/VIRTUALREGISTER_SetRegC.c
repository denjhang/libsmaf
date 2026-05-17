/* VIRTUALREGISTER_SetRegC @ 0013b188 36B */


/* ARM::VIRTUALREGISTER_SetRegC(unsigned short, unsigned char) */

void ARM::VIRTUALREGISTER_SetRegC(ushort param_1,uchar param_2)

{
  if (param_1 < 0x80) {
    (&DAT_00597ea0)[(int)(uint)param_1] = param_2;
  }
  return;
}

