/* SetResonance @ 00040fd4 26B */


/* ARM::CCh::SetResonance(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetResonance(CCh *this,uchar param_1,uchar param_2)

{
  if (param_1 < 0x40) {
    this = (CCh *)((param_2 & 0x7f) >> 1 ^ 0x20);
    *(CCh **)(*(int *)(DAT_00040ff0 + 0x40fe6) + (uint)param_1 * 0x20 + 0x14) = this;
  }
  return this;
}

