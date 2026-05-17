/* SetPitchBend @ 00040fa8 40B */


/* ARM::CCh::SetPitchBend(unsigned char, unsigned char) */

uint ARM::CCh::SetPitchBend(uchar param_1,uchar param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  if (param_2 < 0x40) {
    iVar1 = VIRTUALREGISTER_GetChannelInfoPointer(param_2);
    uVar2 = (uint)*(byte *)(iVar1 + 5) | (uint)*(byte *)(iVar1 + 4) << 7;
    *(uint *)(*(int *)(DAT_00040fd0 + 0x40fbc) + (uint)param_2 * 0x20 + 0x1c) = uVar2 << 6;
  }
  return uVar2;
}

