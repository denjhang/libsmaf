/* SIrqFifo_Reset @ 0013bd68 24B */


/* ARM::SIrqFifo_Reset() */

void ARM::SIrqFifo_Reset(void)

{
  DAT_00597f30 = 0;
  DAT_00597f34 = 0;
  DAT_00597f38 = 0;
  return;
}

