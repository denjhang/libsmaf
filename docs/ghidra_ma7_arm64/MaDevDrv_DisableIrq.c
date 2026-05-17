/* MaDevDrv_DisableIrq @ 0021ea20 64B */


/* YAMAHA::MaDevDrv_DisableIrq() */

void YAMAHA::MaDevDrv_DisableIrq(void)

{
  int iVar1;
  
  machdep_EnterCriticalSectionIrq();
  iVar1 = *DAT_00748ef8;
  if (iVar1 == 0) {
    machdep_WriteReg(0,'\0');
    iVar1 = *DAT_00748ef8;
  }
  *DAT_00748ef8 = iVar1 + 1;
  machdep_LeaveCriticalSectionIrq();
  return;
}

