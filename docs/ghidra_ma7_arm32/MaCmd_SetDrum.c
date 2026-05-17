/* MaCmd_SetDrum @ 000f372c 32B */


/* YAMAHA::MaCmd_SetDrum(unsigned int, unsigned int, unsigned int, unsigned int) */

void YAMAHA::MaCmd_SetDrum(uint param_1,uint param_2,uint param_3,uint param_4)

{
  *(short *)(*(int *)(DAT_000f374c + 0xf3740 + param_1 * 4) +
            (param_3 + param_2 * 0x80 + 0x1ae8) * 2) = (short)param_4;
  return;
}

