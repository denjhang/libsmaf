/* SetDryVolume @ 00145008 44B */


/* ARM::CCh::SetDryVolume(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetDryVolume(CCh *this,uchar param_1,uchar param_2)

{
  if (param_1 < 0x40) {
    PTR_gChCi_00567290[(ulong)param_1 * 0x20 + 8] = param_2 >> 2 & 0x1f;
    this = (CCh *)&PTR_munmap_00567000;
  }
  return this;
}

