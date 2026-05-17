/* SetSfx2Volume @ 00041074 22B */


/* ARM::CCh::SetSfx2Volume(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetSfx2Volume(CCh *this,uchar param_1,uchar param_2)

{
  if (param_1 < 0x40) {
    *(byte *)(*(int *)(DAT_0004108c + 0x41082) + (uint)param_1 * 0x20 + 7) =
         (byte)(((uint)param_2 << 0x19) >> 0x1b);
  }
  return this;
}

