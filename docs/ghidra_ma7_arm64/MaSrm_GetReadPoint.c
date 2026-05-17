/* MaSrm_GetReadPoint @ 001a9a20 32B */


/* YAMAHA::MaSrm_GetReadPoint(unsigned int) */

undefined4 YAMAHA::MaSrm_GetReadPoint(uint param_1)

{
  return *(undefined4 *)(DAT_005dd9b8 + ((ulong)param_1 & 3) * 0x78 + 0xc);
}

