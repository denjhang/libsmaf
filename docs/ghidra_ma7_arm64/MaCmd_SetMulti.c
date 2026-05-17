/* MaCmd_SetMulti @ 0023a90c 36B */


/* YAMAHA::MaCmd_SetMulti(unsigned int, unsigned int, unsigned int, unsigned int) */

void YAMAHA::MaCmd_SetMulti(uint param_1,uint param_2,uint param_3,uint param_4)

{
  *(short *)(*(long *)(&DAT_00763b50 + (ulong)param_1 * 8) +
            ((ulong)param_2 * 0x80 + (ulong)param_3 + 0xae8) * 2) = (short)param_4;
  return;
}

