/* MaDevDrv_IrqProc @ 002206c4 48B */


/* YAMAHA::MaDevDrv_IrqProc() */

void YAMAHA::MaDevDrv_IrqProc(void)

{
  ulong uVar1;
  
  MaDevDrv_DisableIrq();
  uVar1 = machdep_ReadReg(0);
  if ((uVar1 & 1) != 0) {
    MaSndDrv_IrqProc();
    return;
  }
  MaDevDrv_EnableIrq();
  return;
}

