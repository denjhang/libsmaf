/* SetChPanpot @ 00144db4 48B */


/* ARM::CCh::SetChPanpot(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetChPanpot(CCh *this,uchar param_1,uchar param_2)

{
  if (param_1 < 0x40) {
    this = (CCh *)((ulong)(param_2 >> 2) & 0x1f);
    *(uint *)(PTR_gChCi_00567290 + (ulong)param_1 * 0x20 + 0x10) =
         (uint)this | (uint)param_2 << 0x1f;
  }
  return this;
}

