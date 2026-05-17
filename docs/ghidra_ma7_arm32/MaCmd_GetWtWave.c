/* MaCmd_GetWtWave @ 000f36c4 34B */


/* YAMAHA::MaCmd_GetWtWave(unsigned int, unsigned int) */

uint YAMAHA::MaCmd_GetWtWave(uint param_1,uint param_2)

{
  if (0x7f < param_2) {
    return *(uint *)(*(int *)(DAT_000f36e8 + 0xf36d0 + param_1 * 4) + (param_2 + 0x74) * 4);
  }
  return (uint)*(ushort *)(DAT_000f36ec + param_2 * 2 + 0xf424a);
}

