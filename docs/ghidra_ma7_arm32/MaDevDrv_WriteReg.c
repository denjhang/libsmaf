/* MaDevDrv_WriteReg @ 000de838 4B */


/* YAMAHA::MaDevDrv_WriteReg(unsigned int, unsigned char) */

void YAMAHA::MaDevDrv_WriteReg(uint param_1,uchar param_2)

{
  machdep_Wait(0x87);
  Ma7emu_WriteReg(param_1,param_2);
  return;
}

