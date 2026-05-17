/* SetBrightness @ 00040ff4 22B */


/* ARM::CCh::SetBrightness(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetBrightness(CCh *this,uchar param_1,uchar param_2)

{
  if (param_1 < 0x40) {
    *(uint *)(*(int *)(DAT_0004100c + 0x41002) + (uint)param_1 * 0x20 + 0x18) = param_2 ^ 0x40;
  }
  return this;
}

