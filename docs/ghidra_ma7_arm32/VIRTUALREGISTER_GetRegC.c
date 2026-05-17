/* VIRTUALREGISTER_GetRegC @ 000394e4 20B */


/* ARM::VIRTUALREGISTER_GetRegC(unsigned short) */

undefined1 ARM::VIRTUALREGISTER_GetRegC(ushort param_1)

{
  if (0x7f < param_1) {
    return 0xff;
  }
  return *(undefined1 *)((uint)param_1 + DAT_000394f8 + 0x39fc6);
}

