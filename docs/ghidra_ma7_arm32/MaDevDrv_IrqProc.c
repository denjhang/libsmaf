/* MaDevDrv_IrqProc @ 000de174 32B */


/* YAMAHA::MaDevDrv_IrqProc() */

void YAMAHA::MaDevDrv_IrqProc(void)

{
  int iVar1;
  
  MaDevDrv_DisableIrq();
  iVar1 = machdep_ReadReg(0);
  if (iVar1 << 0x1f < 0) {
    MaSndDrv_IrqProc();
    return;
  }
  MaDevDrv_EnableIrq();
  return;
}

