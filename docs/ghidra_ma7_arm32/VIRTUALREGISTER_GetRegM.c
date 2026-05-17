/* VIRTUALREGISTER_GetRegM @ 00039284 24B */


/* ARM::VIRTUALREGISTER_GetRegM(unsigned char, unsigned char) */

code ARM::VIRTUALREGISTER_GetRegM(uchar param_1,uchar param_2)

{
  if (1 < param_1) {
    return (code)0xff;
  }
  return SIrqFifo_SetData[(uint)param_2 + DAT_0003929c + (uint)param_1 * 0x100 + 6];
}

