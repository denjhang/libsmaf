/* SetPitchBend @ 00144f24 76B */


/* ARM::CCh::SetPitchBend(unsigned char, unsigned char) */

byte ARM::CCh::SetPitchBend(uchar param_1,uchar param_2)

{
  long lVar1;
  
  if (param_2 < 0x40) {
    lVar1 = VIRTUALREGISTER_GetChannelInfoPointer(param_2);
    param_1 = *(byte *)(lVar1 + 5);
    *(uint *)(PTR_gChCi_00567290 + (ulong)param_2 * 0x20 + 0x1c) =
         ((uint)param_1 | (uint)*(byte *)(lVar1 + 4) << 7) << 6;
  }
  return param_1;
}

