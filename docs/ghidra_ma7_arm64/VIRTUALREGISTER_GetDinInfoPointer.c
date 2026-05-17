/* VIRTUALREGISTER_GetDinInfoPointer @ 0013b0f4 44B */


/* ARM::VIRTUALREGISTER_GetDinInfoPointer(unsigned char) */

long ARM::VIRTUALREGISTER_GetDinInfoPointer(uchar param_1)

{
  if (param_1 < 4) {
    return (ulong)param_1 * 5 + 0x597c80;
  }
  return 0;
}

