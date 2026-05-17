/* MaCmd_GetMelody @ 000f3710 22B */


/* YAMAHA::MaCmd_GetMelody(unsigned int, unsigned int, unsigned int) */

undefined2 YAMAHA::MaCmd_GetMelody(uint param_1,uint param_2,uint param_3)

{
  return *(undefined2 *)
          (*(int *)(DAT_000f3728 + 0xf371e + param_1 * 4) + (param_3 + param_2 * 0x80 + 0x2e8) * 2);
}

