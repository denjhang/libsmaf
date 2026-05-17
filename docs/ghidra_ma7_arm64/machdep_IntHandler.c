/* machdep_IntHandler @ 00178d5c 4B */


/* YAMAHA::machdep_IntHandler() */

void YAMAHA::machdep_IntHandler(void)

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

