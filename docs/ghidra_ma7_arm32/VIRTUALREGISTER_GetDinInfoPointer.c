/* VIRTUALREGISTER_GetDinInfoPointer @ 00039250 24B */


/* ARM::VIRTUALREGISTER_GetDinInfoPointer(unsigned char) */

int ARM::VIRTUALREGISTER_GetDinInfoPointer(uchar param_1)

{
  if (param_1 < 4) {
    return (uint)param_1 * 5 + DAT_00039268 + 0x39b1e;
  }
  return 0;
}

