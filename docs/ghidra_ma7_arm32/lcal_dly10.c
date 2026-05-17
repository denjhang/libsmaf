/* lcal_dly10 @ 0010086c 14B */


/* YAMAHA::lcal_dly10(unsigned short) */

uint YAMAHA::lcal_dly10(ushort param_1)

{
  return ((uint)param_1 * 0x4ccc & 0xfffffff) >> 0xc;
}

