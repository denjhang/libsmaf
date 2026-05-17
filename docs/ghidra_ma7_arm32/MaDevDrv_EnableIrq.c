/* MaDevDrv_EnableIrq @ 000dcf30 48B */


/* YAMAHA::MaDevDrv_EnableIrq() */

void YAMAHA::MaDevDrv_EnableIrq(void)

{
  int iVar1;
  
  machdep_EnterCriticalSectionIrq();
  iVar1 = **(int **)(DAT_000dcf60 + 0xdcf3c);
  if ((iVar1 != 0) && (iVar1 = iVar1 + -1, **(int **)(DAT_000dcf60 + 0xdcf3c) = iVar1, iVar1 != 0))
  {
    machdep_LeaveCriticalSectionIrq();
    return;
  }
  machdep_WriteReg(0,0x80);
  machdep_LeaveCriticalSectionIrq();
  return;
}

