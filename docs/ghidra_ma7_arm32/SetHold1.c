/* SetHold1 @ 00040f2c 22B */


/* ARM::CCh::SetHold1(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetHold1(CCh *this,uchar param_1,uchar param_2)

{
  if (param_1 < 0x40) {
    *(byte *)(*(int *)(DAT_00040f44 + 0x40f3a) + (uint)param_1 * 0x20 + 4) = param_2 & 1;
  }
  return this;
}

