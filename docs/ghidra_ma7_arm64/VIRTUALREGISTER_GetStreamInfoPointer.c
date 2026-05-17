/* VIRTUALREGISTER_GetStreamInfoPointer @ 0013b070 44B */


/* ARM::VIRTUALREGISTER_GetStreamInfoPointer(unsigned char) */

long ARM::VIRTUALREGISTER_GetStreamInfoPointer(uchar param_1)

{
  if (param_1 < 4) {
    return (ulong)param_1 * 0x14 + 0x5978c0;
  }
  return 0;
}

