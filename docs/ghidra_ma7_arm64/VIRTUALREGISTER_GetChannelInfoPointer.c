/* VIRTUALREGISTER_GetChannelInfoPointer @ 0013b09c 44B */


/* ARM::VIRTUALREGISTER_GetChannelInfoPointer(unsigned char) */

undefined * ARM::VIRTUALREGISTER_GetChannelInfoPointer(uchar param_1)

{
  if (param_1 < 0x40) {
    return &DAT_00597910 + (ulong)param_1 * 0xc;
  }
  return (undefined *)0x0;
}

