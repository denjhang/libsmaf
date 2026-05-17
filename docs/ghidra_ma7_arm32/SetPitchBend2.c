/* SetPitchBend2 @ 000411fc 42B */


/* ARM::CCh::SetPitchBend2(unsigned char, unsigned char) */

uint ARM::CCh::SetPitchBend2(uchar param_1,uchar param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  if (param_2 < 0x10) {
    iVar1 = VIRTUALREGISTER_GetExParamInfoPointer(param_2);
    uVar2 = *(int *)(DAT_00041228 + 0x41214) + (uint)param_2 * 0x14;
    *(uint *)(uVar2 + 0xc) = ((uint)*(byte *)(iVar1 + 3) | (uint)*(byte *)(iVar1 + 2) << 7) << 6;
  }
  return uVar2;
}

