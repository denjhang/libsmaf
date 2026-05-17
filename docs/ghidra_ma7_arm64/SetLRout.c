/* SetLRout @ 001453dc 56B */


/* ARM::CCh::SetLRout(unsigned char, unsigned char) */

CCh * __thiscall ARM::CCh::SetLRout(CCh *this,uchar param_1,uchar param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_gChEi_00567400;
  if (param_1 < 0x10) {
    PTR_gChEi_00567400[(ulong)param_1 * 0x14] = param_2 >> 5 & 3;
    puVar1[(ulong)param_1 * 0x14 + 1] = param_2 & 3;
    this = (CCh *)&PTR_munmap_00567000;
  }
  return this;
}

