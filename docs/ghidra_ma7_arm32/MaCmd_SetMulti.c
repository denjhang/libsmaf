/* MaCmd_SetMulti @ 000f3770 28B */


/* YAMAHA::MaCmd_SetMulti(unsigned int, unsigned int, unsigned int, unsigned int) */

void YAMAHA::MaCmd_SetMulti(uint param_1,uint param_2,uint param_3,uint param_4)

{
  *(short *)(*(int *)(DAT_000f378c + 0xf3780 + param_1 * 4) + (param_3 + param_2 * 0x80 + 0xae8) * 2
            ) = (short)param_4;
  return;
}

