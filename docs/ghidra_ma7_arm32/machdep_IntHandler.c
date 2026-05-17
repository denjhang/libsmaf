/* machdep_IntHandler @ 00066c48 4B */


/* YAMAHA::machdep_IntHandler() */

void YAMAHA::machdep_IntHandler(void)

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

