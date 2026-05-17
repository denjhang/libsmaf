/* SetLRout @ 0004125c 44B */


/* ARM::CCh::SetLRout(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetLRout(CCh *this,uchar param_1,uchar param_2)

{
  int iVar1;
  
  if (param_1 < 0x10) {
    iVar1 = (uint)param_1 * 0x14;
    this = (CCh *)(*(int *)(DAT_00041288 + 0x41278) + iVar1);
    *(byte *)(*(int *)(DAT_00041288 + 0x41278) + iVar1) = (byte)(((uint)param_2 << 0x19) >> 0x1e);
    this[1] = (CCh)(param_2 & 3);
  }
  return this;
}

