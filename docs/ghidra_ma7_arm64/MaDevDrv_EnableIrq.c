/* MaDevDrv_EnableIrq @ 0021e9d4 76B */


/* YAMAHA::MaDevDrv_EnableIrq() */

void YAMAHA::MaDevDrv_EnableIrq(void)

{
  int iVar1;
  
  machdep_EnterCriticalSectionIrq();
  if ((*DAT_00748ef8 != 0) && (iVar1 = *DAT_00748ef8 + -1, *DAT_00748ef8 = iVar1, iVar1 != 0)) {
    machdep_LeaveCriticalSectionIrq();
    return;
  }
  machdep_WriteReg(0,0x80);
  machdep_LeaveCriticalSectionIrq();
  return;
}

