/* VIRTUALREGISTER_GetWtInfoPointer @ 000391d4 26B */


/* ARM::VIRTUALREGISTER_GetWtInfoPointer(unsigned char) */

int ARM::VIRTUALREGISTER_GetWtInfoPointer(uchar param_1)

{
  if (param_1 < 0x40) {
    return DAT_000391f0 + (uint)param_1 * 10 + 0x39462;
  }
  return 0;
}

