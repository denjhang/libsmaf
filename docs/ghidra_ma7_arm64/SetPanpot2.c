/* SetPanpot2 @ 00145314 48B */


/* ARM::CCh::SetPanpot2(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetPanpot2(CCh *this,uchar param_1,uchar param_2)

{
  if (param_1 < 0x10) {
    this = (CCh *)((ulong)(param_2 >> 2) & 0x1f);
    *(uint *)(PTR_gChEi_00567400 + (ulong)param_1 * 0x14 + 8) = (uint)this | (uint)param_2 << 0x1f;
  }
  return this;
}

