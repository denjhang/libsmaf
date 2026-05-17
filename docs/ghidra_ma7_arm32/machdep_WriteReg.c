/* machdep_WriteReg @ 00066834 24B */


/* YAMAHA::machdep_WriteReg(unsigned int, unsigned char) */

void YAMAHA::machdep_WriteReg(uint param_1,uchar param_2)

{
  machdep_Wait(0x87);
  Ma7emu_WriteReg(param_1,param_2);
  return;
}

