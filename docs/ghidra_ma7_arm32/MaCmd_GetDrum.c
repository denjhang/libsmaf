/* MaCmd_GetDrum @ 000f3750 26B */


/* YAMAHA::MaCmd_GetDrum(unsigned int, unsigned int, unsigned int) */

undefined2 YAMAHA::MaCmd_GetDrum(uint param_1,uint param_2,uint param_3)

{
  return *(undefined2 *)
          (*(int *)(DAT_000f376c + 0xf375e + param_1 * 4) + (param_3 + param_2 * 0x80 + 0x1ae8) * 2)
  ;
}

