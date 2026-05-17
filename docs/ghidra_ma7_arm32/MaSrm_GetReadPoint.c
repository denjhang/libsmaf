/* MaSrm_GetReadPoint @ 0008b718 24B */


/* YAMAHA::MaSrm_GetReadPoint(unsigned int) */

undefined4 YAMAHA::MaSrm_GetReadPoint(uint param_1)

{
  return *(undefined4 *)(*(int *)(DAT_0008b730 + 0x8b722) + (param_1 & 3) * 0x70 + 0xc);
}

