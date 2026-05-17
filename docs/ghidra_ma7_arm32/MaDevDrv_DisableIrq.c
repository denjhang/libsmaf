/* MaDevDrv_DisableIrq @ 000dcf64 38B */


/* YAMAHA::MaDevDrv_DisableIrq() */

void YAMAHA::MaDevDrv_DisableIrq(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  machdep_EnterCriticalSectionIrq();
  puVar3 = (undefined4 *)(DAT_000dcf8c + 0xdcf70);
  piVar2 = (int *)*puVar3;
  iVar1 = *piVar2;
  if (iVar1 == 0) {
    machdep_WriteReg(0,'\0');
    piVar2 = (int *)*puVar3;
    iVar1 = *piVar2;
  }
  *piVar2 = iVar1 + 1;
  machdep_LeaveCriticalSectionIrq();
  return;
}

