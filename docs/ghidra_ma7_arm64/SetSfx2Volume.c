/* SetSfx2Volume @ 00145060 44B */


/* ARM::CCh::SetSfx2Volume(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetSfx2Volume(CCh *this,uchar param_1,uchar param_2)

{
  if (param_1 < 0x40) {
    PTR_gChCi_00567290[(ulong)param_1 * 0x20 + 7] = param_2 >> 2 & 0x1f;
    this = (CCh *)&PTR_munmap_00567000;
  }
  return this;
}

