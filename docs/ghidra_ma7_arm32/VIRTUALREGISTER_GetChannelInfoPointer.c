/* VIRTUALREGISTER_GetChannelInfoPointer @ 00039214 26B */


/* ARM::VIRTUALREGISTER_GetChannelInfoPointer(unsigned char) */

int ARM::VIRTUALREGISTER_GetChannelInfoPointer(uchar param_1)

{
  if (param_1 < 0x40) {
    return DAT_00039230 + 0x39772 + (uint)param_1 * 0xc;
  }
  return 0;
}

