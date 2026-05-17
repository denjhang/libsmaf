/* SetExId @ 00144fcc 60B */


/* ARM::CCh::SetExId(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetExId(CCh *this,uchar param_1,uchar param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR_gChCi_00567290;
  if (param_1 < 0x40) {
    lVar1 = (ulong)param_1 * 0x20;
    PTR_gChCi_00567290[lVar1] = param_2 & 0xf;
    puVar2[lVar1 + 1] = param_2 >> 6 & 1;
    puVar2[lVar1 + 2] = param_2 >> 4 & 3;
    this = (CCh *)&PTR_munmap_00567000;
  }
  return this;
}

