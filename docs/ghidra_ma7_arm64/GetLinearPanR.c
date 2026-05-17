/* GetLinearPanR @ 00147670 40B */


/* ARM::CPanIP::GetLinearPanR(unsigned int) */

undefined4 __thiscall ARM::CPanIP::GetLinearPanR(CPanIP *this,uint param_1)

{
  return *(undefined4 *)
          (PTR_asdLinearTable_00567198 +
          (long)(*(int *)(PTR_asdDBtable_005675b8 + (ulong)(~param_1 & 0x1f) * 4) >> 0x14) * 4);
}

