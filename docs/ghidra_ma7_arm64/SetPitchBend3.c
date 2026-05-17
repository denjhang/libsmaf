/* SetPitchBend3 @ 00145390 76B */


/* ARM::CCh::SetPitchBend3(unsigned char, unsigned char) */

byte ARM::CCh::SetPitchBend3(uchar param_1,uchar param_2)

{
  long lVar1;
  
  if (param_2 < 0x10) {
    lVar1 = VIRTUALREGISTER_GetExParamInfoPointer(param_2);
    param_1 = *(byte *)(lVar1 + 5);
    *(uint *)(PTR_gChEi_00567400 + (ulong)param_2 * 0x14 + 0x10) =
         ((uint)param_1 | (uint)*(byte *)(lVar1 + 4) << 7) << 6;
  }
  return param_1;
}

