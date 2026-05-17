/* SetPitchBend3 @ 0004122c 42B */


/* ARM::CCh::SetPitchBend3(unsigned char, unsigned char) */

uint ARM::CCh::SetPitchBend3(uchar param_1,uchar param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  if (param_2 < 0x10) {
    iVar1 = VIRTUALREGISTER_GetExParamInfoPointer(param_2);
    uVar2 = *(int *)(DAT_00041258 + 0x41244) + (uint)param_2 * 0x14;
    *(uint *)(uVar2 + 0x10) = ((uint)*(byte *)(iVar1 + 5) | (uint)*(byte *)(iVar1 + 4) << 7) << 6;
  }
  return uVar2;
}

