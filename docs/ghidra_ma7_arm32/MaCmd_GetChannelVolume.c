/* MaCmd_GetChannelVolume @ 000f357c 26B */


/* YAMAHA::MaCmd_GetChannelVolume(unsigned int, unsigned int) */

undefined1 YAMAHA::MaCmd_GetChannelVolume(uint param_1,uint param_2)

{
  return *(undefined1 *)(param_1 * 0x65d0 + DAT_000f3598 + param_2 * 0x1e + 0xf3593);
}

