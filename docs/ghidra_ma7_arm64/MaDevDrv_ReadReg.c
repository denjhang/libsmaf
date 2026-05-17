/* MaDevDrv_ReadReg @ 002213c8 4B */


/* YAMAHA::MaDevDrv_ReadReg(unsigned int) */

void YAMAHA::MaDevDrv_ReadReg(uint param_1)

{
  machdep_Wait(0x96);
  Ma7emu_ReadReg(param_1);
  return;
}

