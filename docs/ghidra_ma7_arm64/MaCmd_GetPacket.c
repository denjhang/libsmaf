/* MaCmd_GetPacket @ 0023b5e4 48B */


/* YAMAHA::MaCmd_GetPacket(unsigned int) */

undefined * YAMAHA::MaCmd_GetPacket(uint param_1)

{
  if (param_1 < 0x80) {
    return &DAT_00763b74 + (ulong)param_1 * 0x1c;
  }
  return (undefined *)0x0;
}

