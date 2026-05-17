/* SIrqFifo_GetStatus @ 0013bd2c 60B */


/* ARM::SIrqFifo_GetStatus() */

byte ARM::SIrqFifo_GetStatus(void)

{
  uint uVar1;
  byte bVar2;
  
  uVar1 = DAT_00597f30 + 1;
  if (0x40 < uVar1) {
    uVar1 = 0;
  }
  bVar2 = 2;
  if (DAT_00597f34 != uVar1) {
    bVar2 = 0;
  }
  return bVar2 | DAT_00597f30 == DAT_00597f34;
}

