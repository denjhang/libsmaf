/* SetExId @ 00041010 38B */


/* ARM::CCh::SetExId(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetExId(CCh *this,uchar param_1,uchar param_2)

{
  int iVar1;
  
  if (param_1 < 0x40) {
    iVar1 = (uint)param_1 * 0x20;
    this = (CCh *)(*(int *)(DAT_00041038 + 0x41026) + iVar1);
    *(byte *)(*(int *)(DAT_00041038 + 0x41026) + iVar1) = param_2 & 0xf;
    this[1] = SUB41(((uint)param_2 << 0x19) >> 0x1f,0);
    this[2] = SUB41(((uint)param_2 << 0x1a) >> 0x1e,0);
  }
  return this;
}

