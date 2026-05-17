/* MaDevDrv_ReadStreamFifoStatus @ 002205bc 60B */


/* YAMAHA::MaDevDrv_ReadStreamFifoStatus(unsigned int) */

void YAMAHA::MaDevDrv_ReadStreamFifoStatus(uint param_1)

{
  uint uVar1;
  
  uVar1 = 9;
  if (param_1 < 3) {
    uVar1 = *(uint *)(&DAT_00496320 + (ulong)param_1 * 4);
  }
  machdep_WriteReg(0xf,'\x0f');
  machdep_ReadReg(uVar1);
  return;
}

