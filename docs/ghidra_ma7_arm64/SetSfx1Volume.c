/* SetSfx1Volume @ 00145034 44B */


/* ARM::CCh::SetSfx1Volume(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetSfx1Volume(CCh *this,uchar param_1,uchar param_2)

{
  if (param_1 < 0x40) {
    PTR_gChCi_00567290[(ulong)param_1 * 0x20 + 6] = param_2 >> 2 & 0x1f;
    this = (CCh *)&PTR_munmap_00567000;
  }
  return this;
}

