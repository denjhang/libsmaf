/* MaCmd_GetDrum @ 0023a8e4 40B */


/* YAMAHA::MaCmd_GetDrum(unsigned int, unsigned int, unsigned int) */

undefined2 YAMAHA::MaCmd_GetDrum(uint param_1,uint param_2,uint param_3)

{
  return *(undefined2 *)
          (*(long *)(&DAT_00763b50 + (ulong)param_1 * 8) +
          ((ulong)param_2 * 0x80 + (ulong)param_3 + 0x1ae8) * 2);
}

