/* SetToremolo @ 00040ee4 66B */


/* ARM::CCh::SetToremolo(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetToremolo(CCh *this,uchar param_1,uchar param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 < 0x40) {
    uVar2 = (param_2 & 0x7f) >> 4;
    uVar3 = uVar2 - 2 & 0xff;
    bVar1 = (byte)(((uint)param_2 << 0x19) >> 0x1d);
    if (uVar3 < 6) {
      this = (CCh *)0x1;
      uVar3 = 1 << uVar3;
      if ((uVar3 & 0x30) == 0) {
        if ((uVar3 & 0xc) == 0) {
          bVar1 = (byte)uVar2;
          if ((uVar3 & 3) != 0) {
            bVar1 = 2;
          }
        }
        else {
          bVar1 = 3;
        }
      }
      else {
        bVar1 = 4;
      }
    }
    *(byte *)(*(int *)(DAT_00040f28 + 0x40efa) + (uint)param_1 * 0x20 + 5) = bVar1;
  }
  return this;
}

