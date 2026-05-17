/* GetLinearVol @ 0015ad9c 36B */


/* ARM::CVolIP::GetLinearVol(unsigned int) */

undefined4 __thiscall ARM::CVolIP::GetLinearVol(CVolIP *this,uint param_1)

{
  return *(undefined4 *)
          (PTR_asdLinearTable_005675f8 +
          (long)(*(int *)(PTR_asdDBtable_00567610 + (ulong)(param_1 & 0x1f) * 4) >> 0x14) * 4);
}

