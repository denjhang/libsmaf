/* VIRTUALREGISTER_GetStreamInfoPointer @ 000391f4 26B */


/* ARM::VIRTUALREGISTER_GetStreamInfoPointer(unsigned char) */

int ARM::VIRTUALREGISTER_GetStreamInfoPointer(uchar param_1)

{
  if (param_1 < 4) {
    return DAT_00039210 + 0x39702 + (uint)param_1 * 0x14;
  }
  return 0;
}

