/* SetChVolume @ 00040ea4 26B */


/* ARM::CCh::SetChVolume(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetChVolume(CCh *this,uchar param_1,uchar param_2)

{
  if (param_1 < 0x40) {
    this = (CCh *)((param_2 & 0x7f) >> 2);
    *(uint *)(*(int *)(DAT_00040ec0 + 0x40eb6) + (uint)param_1 * 0x20 + 0xc) =
         (uint)this | (uint)param_2 << 0x1f;
  }
  return this;
}

