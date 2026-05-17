/* SetPanpot2 @ 000411d8 32B */


/* ARM::CCh::SetPanpot2(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetPanpot2(CCh *this,uchar param_1,uchar param_2)

{
  if (param_1 < 0x10) {
    this = (CCh *)((param_2 & 0x7f) >> 2);
    *(uint *)(*(int *)(DAT_000411f8 + 0x411ea) + (uint)param_1 * 0x14 + 8) =
         (uint)this | (uint)param_2 << 0x1f;
  }
  return this;
}

