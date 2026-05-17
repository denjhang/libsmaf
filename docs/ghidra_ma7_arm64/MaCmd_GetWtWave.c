/* MaCmd_GetWtWave @ 0023a838 60B */


/* YAMAHA::MaCmd_GetWtWave(unsigned int, unsigned int) */

uint YAMAHA::MaCmd_GetWtWave(uint param_1,uint param_2)

{
  if (0x7f < param_2) {
    return *(uint *)(*(long *)(&DAT_00763b50 + (ulong)param_1 * 8) +
                    ((ulong)(param_2 - 0x80) + 0xf4) * 4);
  }
  return (uint)*(ushort *)(&DAT_00532d60 + (ulong)param_2 * 2);
}

