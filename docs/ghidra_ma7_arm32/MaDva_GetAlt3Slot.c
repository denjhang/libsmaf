/* MaDva_GetAlt3Slot @ 00088714 28B */


/* YAMAHA::MaDva_GetAlt3Slot(unsigned int) */

undefined4 YAMAHA::MaDva_GetAlt3Slot(uint param_1)

{
  return *(undefined4 *)
          (*(int *)(DAT_00088734 + 0x88722) +
           (*(byte *)(DAT_00088730 + 0x88720 + (param_1 & 0x7f)) + 0xbe4) * 4 + 4);
}

