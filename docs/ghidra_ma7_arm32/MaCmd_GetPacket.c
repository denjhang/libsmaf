/* MaCmd_GetPacket @ 000f4494 26B */


/* YAMAHA::MaCmd_GetPacket(unsigned int) */

int YAMAHA::MaCmd_GetPacket(uint param_1)

{
  if (param_1 < 0x80) {
    return DAT_000f44b0 + param_1 * 0x1c + 0xf44b6;
  }
  return 0;
}

