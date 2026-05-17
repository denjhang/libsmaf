/* VIRTUALREGISTER_SetRegC @ 000392a0 16B */


/* ARM::VIRTUALREGISTER_SetRegC(unsigned short, unsigned char) */

void ARM::VIRTUALREGISTER_SetRegC(ushort param_1,uchar param_2)

{
  if (param_1 < 0x80) {
    *(uchar *)((uint)param_1 + DAT_000392b0 + 0x39d7e) = param_2;
  }
  return;
}

