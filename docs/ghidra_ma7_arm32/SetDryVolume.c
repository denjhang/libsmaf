/* SetDryVolume @ 0004103c 22B */


/* ARM::CCh::SetDryVolume(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetDryVolume(CCh *this,uchar param_1,uchar param_2)

{
  if (param_1 < 0x40) {
    *(byte *)(*(int *)(DAT_00041054 + 0x4104a) + (uint)param_1 * 0x20 + 8) =
         (byte)(((uint)param_2 << 0x19) >> 0x1b);
  }
  return this;
}

