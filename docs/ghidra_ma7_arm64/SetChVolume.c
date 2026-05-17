/* SetChVolume @ 00144d84 48B */


/* ARM::CCh::SetChVolume(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetChVolume(CCh *this,uchar param_1,uchar param_2)

{
  if (param_1 < 0x40) {
    this = (CCh *)((ulong)(param_2 >> 2) & 0x1f);
    *(uint *)(PTR_gChCi_00567290 + (ulong)param_1 * 0x20 + 0xc) = (uint)this | (uint)param_2 << 0x1f
    ;
  }
  return this;
}

