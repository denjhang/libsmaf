/* SetChPanpot @ 00040ec4 26B */


/* ARM::CCh::SetChPanpot(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetChPanpot(CCh *this,uchar param_1,uchar param_2)

{
  if (param_1 < 0x40) {
    this = (CCh *)((param_2 & 0x7f) >> 2);
    *(uint *)(*(int *)(DAT_00040ee0 + 0x40ed6) + (uint)param_1 * 0x20 + 0x10) =
         (uint)this | (uint)param_2 << 0x1f;
  }
  return this;
}

