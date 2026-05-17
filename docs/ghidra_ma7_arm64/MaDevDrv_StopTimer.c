/* MaDevDrv_StopTimer @ 00221234 88B */


/* YAMAHA::MaDevDrv_StopTimer() */

void YAMAHA::MaDevDrv_StopTimer(void)

{
  int iVar1;
  byte bVar2;
  
  MaDevDrv_DisableIrq();
  if ((*(int *)(DAT_00748ef8 + 4) != 0) &&
     (iVar1 = *(int *)(DAT_00748ef8 + 4) + -1, *(int *)(DAT_00748ef8 + 4) = iVar1, iVar1 != 0)) {
    MaDevDrv_EnableIrq();
    return;
  }
  bVar2 = machdep_ReadReg(0xd);
  machdep_WriteReg(0xd,bVar2 & 0xdf);
  MaDevDrv_EnableIrq();
  return;
}

