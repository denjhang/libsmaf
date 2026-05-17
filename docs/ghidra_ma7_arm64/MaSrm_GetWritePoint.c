/* MaSrm_GetWritePoint @ 001a9a40 32B */


/* YAMAHA::MaSrm_GetWritePoint(unsigned int) */

undefined4 YAMAHA::MaSrm_GetWritePoint(uint param_1)

{
  return *(undefined4 *)(DAT_005dd9b8 + ((ulong)param_1 & 3) * 0x78 + 0xc);
}

