/* MaDevDrv_ReadStreamFifoStatus @ 000de0d4 36B */


/* YAMAHA::MaDevDrv_ReadStreamFifoStatus(unsigned int) */

void YAMAHA::MaDevDrv_ReadStreamFifoStatus(uint param_1)

{
  uint uVar1;
  
  if (param_1 < 3) {
    uVar1 = *(uint *)(DAT_000de0f8 + 0xde0e4 + param_1 * 4);
  }
  else {
    uVar1 = 9;
  }
  machdep_WriteReg(0xf,'\x0f');
  machdep_ReadReg(uVar1);
  return;
}

