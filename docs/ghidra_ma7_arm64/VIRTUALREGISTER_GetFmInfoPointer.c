/* VIRTUALREGISTER_GetFmInfoPointer @ 0013b01c 40B */


/* ARM::VIRTUALREGISTER_GetFmInfoPointer(unsigned char) */

long ARM::VIRTUALREGISTER_GetFmInfoPointer(uchar param_1)

{
  if (param_1 < 0x40) {
    return (ulong)param_1 * 10 + 0x5973c0;
  }
  return 0;
}

