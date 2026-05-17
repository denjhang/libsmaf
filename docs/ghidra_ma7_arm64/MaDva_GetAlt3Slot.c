/* MaDva_GetAlt3Slot @ 001a51f0 36B */


/* YAMAHA::MaDva_GetAlt3Slot(unsigned int) */

undefined4 YAMAHA::MaDva_GetAlt3Slot(uint param_1)

{
  return *(undefined4 *)
          (DAT_005d87a0 + (ulong)(byte)(&DAT_0048c250)[(ulong)param_1 & 0x7f] * 4 + 0x33c8);
}

