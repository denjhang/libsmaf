/* MaDevDrv_WaitStreamFifoEmpty @ 000de0bc 22B */


/* YAMAHA::MaDevDrv_WaitStreamFifoEmpty(unsigned int) */

void YAMAHA::MaDevDrv_WaitStreamFifoEmpty(uint param_1)

{
  machdep_WriteReg(0xf,'\x0f');
  machdep_WaitStreamFifoEmpty(param_1);
  return;
}

