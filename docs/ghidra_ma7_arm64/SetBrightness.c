/* SetBrightness @ 00144fa0 44B */


/* ARM::CCh::SetBrightness(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetBrightness(CCh *this,uchar param_1,uchar param_2)

{
  if (param_1 < 0x40) {
    *(uint *)(PTR_gChCi_00567290 + (ulong)param_1 * 0x20 + 0x18) = param_2 ^ 0x40;
    this = (CCh *)&PTR_munmap_00567000;
  }
  return this;
}

