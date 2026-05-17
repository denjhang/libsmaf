/* VIRTUALREGISTER_GetFmInfoPointer @ 000391b8 22B */


/* ARM::VIRTUALREGISTER_GetFmInfoPointer(unsigned char) */

int ARM::VIRTUALREGISTER_GetFmInfoPointer(uchar param_1)

{
  if (param_1 < 0x40) {
    return DAT_000391d0 + 0x391c6 + (uint)param_1 * 10;
  }
  return 0;
}

