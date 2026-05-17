/* VIRTUALREGISTER_GetRegC @ 0013b488 40B */


/* ARM::VIRTUALREGISTER_GetRegC(unsigned short) */

undefined1 ARM::VIRTUALREGISTER_GetRegC(ushort param_1)

{
  if (0x7f < param_1) {
    return 0xff;
  }
  return (&DAT_00597ea0)[(int)(uint)param_1];
}

