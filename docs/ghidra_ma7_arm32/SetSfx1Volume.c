/* SetSfx1Volume @ 00041058 22B */


/* ARM::CCh::SetSfx1Volume(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetSfx1Volume(CCh *this,uchar param_1,uchar param_2)

{
  if (param_1 < 0x40) {
    *(byte *)(*(int *)(DAT_00041070 + 0x41066) + (uint)param_1 * 0x20 + 6) =
         (byte)(((uint)param_2 << 0x19) >> 0x1b);
  }
  return this;
}

