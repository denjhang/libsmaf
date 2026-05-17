/* SetVol2 @ 000411b4 32B */


/* ARM::CCh::SetVol2(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetVol2(CCh *this,uchar param_1,uchar param_2)

{
  if (param_1 < 0x10) {
    this = (CCh *)((param_2 & 0x7f) >> 2);
    *(uint *)(*(int *)(DAT_000411d4 + 0x411c6) + (uint)param_1 * 0x14 + 4) =
         (uint)this | (uint)param_2 << 0x1f;
  }
  return this;
}

