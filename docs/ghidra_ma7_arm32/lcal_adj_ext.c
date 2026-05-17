/* lcal_adj_ext @ 001008c0 26B */


/* YAMAHA::lcal_adj_ext(short) */

int YAMAHA::lcal_adj_ext(short param_1)

{
  return (int)((int)param_1 *
               (uint)*(byte *)(*(int *)(DAT_001008e0 + 0x1008cc) +
                              **(int **)(DAT_001008dc + 0x1008c8)) * 0x400) >> 0x10;
}

