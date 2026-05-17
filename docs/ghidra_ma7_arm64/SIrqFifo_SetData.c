/* SIrqFifo_SetData @ 0013bd80 128B */


/* ARM::SIrqFifo_SetData(unsigned short) */

undefined8 ARM::SIrqFifo_SetData(ushort param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = DAT_00597f30;
  uVar2 = DAT_00597f30 + 1;
  if (uVar2 < 0x41) {
    if (uVar2 != DAT_00597f34) {
      uVar1 = (ulong)DAT_00597f30;
      DAT_00597f30 = uVar2;
      *(ushort *)(&DAT_00597f40 + uVar1 * 2) = param_1;
      return 0;
    }
    if (DAT_00597f30 == 0) {
      DAT_00597fc0 = param_1;
      return 0x40;
    }
  }
  else if (DAT_00597f34 != 0) {
    DAT_00597f30 = 0;
    *(ushort *)(&DAT_00597f40 + (ulong)uVar3 * 2) = param_1;
    return 0;
  }
  *(ushort *)(&DAT_00597f40 + (ulong)(DAT_00597f30 - 1) * 2) = param_1;
  return 0x40;
}

