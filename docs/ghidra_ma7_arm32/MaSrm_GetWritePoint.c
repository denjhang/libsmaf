/* MaSrm_GetWritePoint @ 0008b734 24B */


/* YAMAHA::MaSrm_GetWritePoint(unsigned int) */

undefined4 YAMAHA::MaSrm_GetWritePoint(uint param_1)

{
  return *(undefined4 *)(*(int *)(DAT_0008b74c + 0x8b73e) + (param_1 & 3) * 0x70 + 0xc);
}

