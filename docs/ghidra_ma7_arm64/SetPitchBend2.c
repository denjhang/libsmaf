/* SetPitchBend2 @ 00145344 76B */


/* ARM::CCh::SetPitchBend2(unsigned char, unsigned char) */

byte ARM::CCh::SetPitchBend2(uchar param_1,uchar param_2)

{
  long lVar1;
  
  if (param_2 < 0x10) {
    lVar1 = VIRTUALREGISTER_GetExParamInfoPointer(param_2);
    param_1 = *(byte *)(lVar1 + 3);
    *(uint *)(PTR_gChEi_00567400 + (ulong)param_2 * 0x14 + 0xc) =
         ((uint)param_1 | (uint)*(byte *)(lVar1 + 2) << 7) << 6;
  }
  return param_1;
}

