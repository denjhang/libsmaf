/* MaCmd_SetMelody @ 000f36f0 28B */


/* YAMAHA::MaCmd_SetMelody(unsigned int, unsigned int, unsigned int, unsigned int) */

void YAMAHA::MaCmd_SetMelody(uint param_1,uint param_2,uint param_3,uint param_4)

{
  *(short *)(*(int *)(DAT_000f370c + 0xf3700 + param_1 * 4) + (param_3 + param_2 * 0x80 + 0x2e8) * 2
            ) = (short)param_4;
  return;
}

