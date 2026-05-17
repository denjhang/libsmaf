/* machdep_ReadReg @ 00066ae8 20B */


/* YAMAHA::machdep_ReadReg(unsigned int) */

void YAMAHA::machdep_ReadReg(uint param_1)

{
  machdep_Wait(0x96);
  Ma7emu_ReadReg(param_1);
  return;
}

