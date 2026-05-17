/* SIrqFifo_GetData @ 0013be00 92B */


/* ARM::SIrqFifo_GetData() */

ushort ARM::SIrqFifo_GetData(void)

{
  ulong uVar1;
  
  if (DAT_00597f30 == DAT_00597f34) {
    return 0;
  }
  uVar1 = (ulong)DAT_00597f34;
  if (DAT_00597f38 != '\0') {
    DAT_00597f34 = DAT_00597f34 + 1;
    DAT_00597f38 = 0;
    if (0x40 < DAT_00597f34) {
      DAT_00597f34 = 0;
    }
    return *(ushort *)(&DAT_00597f40 + uVar1 * 2) & 0xff;
  }
  DAT_00597f38 = 1;
  return *(ushort *)(&DAT_00597f40 + uVar1 * 2) >> 8;
}

