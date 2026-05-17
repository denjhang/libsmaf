/* VIRTUALREGISTER_GetWtInfoPointer @ 0013b044 44B */


/* ARM::VIRTUALREGISTER_GetWtInfoPointer(unsigned char) */

long ARM::VIRTUALREGISTER_GetWtInfoPointer(uchar param_1)

{
  if (param_1 < 0x40) {
    return (ulong)param_1 * 10 + 0x597640;
  }
  return 0;
}

