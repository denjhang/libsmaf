/* lcal_dly10 @ 0024ebb4 20B */


/* YAMAHA::lcal_dly10(unsigned short) */

ulong YAMAHA::lcal_dly10(ushort param_1)

{
  return (ulong)param_1 * 0x4ccc >> 0xc;
}

