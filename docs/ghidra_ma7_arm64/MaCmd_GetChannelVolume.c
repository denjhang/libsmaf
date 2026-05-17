/* MaCmd_GetChannelVolume @ 0023a6a8 44B */


/* YAMAHA::MaCmd_GetChannelVolume(unsigned int, unsigned int) */

undefined1 YAMAHA::MaCmd_GetChannelVolume(uint param_1,uint param_2)

{
  return (&DAT_0074a419)[(ulong)param_2 * 0x1e + (ulong)param_1 * 0x65d0];
}

