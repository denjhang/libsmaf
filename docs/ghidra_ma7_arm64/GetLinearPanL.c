/* GetLinearPanL @ 0014764c 36B */


/* ARM::CPanIP::GetLinearPanL(unsigned int) */

undefined4 __thiscall ARM::CPanIP::GetLinearPanL(CPanIP *this,uint param_1)

{
  return *(undefined4 *)
          (PTR_asdLinearTable_00567198 +
          (long)(*(int *)(PTR_asdDBtable_005675b8 + (ulong)(param_1 & 0x1f) * 4) >> 0x14) * 4);
}

