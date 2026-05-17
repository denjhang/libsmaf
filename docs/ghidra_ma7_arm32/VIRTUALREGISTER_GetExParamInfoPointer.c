/* VIRTUALREGISTER_GetExParamInfoPointer @ 00039234 24B */


/* ARM::VIRTUALREGISTER_GetExParamInfoPointer(unsigned char) */

int ARM::VIRTUALREGISTER_GetExParamInfoPointer(uchar param_1)

{
  if (param_1 < 0x10) {
    return (uint)param_1 * 7 + DAT_0003924c + 0x39a92;
  }
  return 0;
}

