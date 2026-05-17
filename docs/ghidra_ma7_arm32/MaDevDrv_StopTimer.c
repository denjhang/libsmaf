/* MaDevDrv_StopTimer @ 000de710 56B */


/* YAMAHA::MaDevDrv_StopTimer() */

void YAMAHA::MaDevDrv_StopTimer(void)

{
  byte bVar1;
  int iVar2;
  
  MaDevDrv_DisableIrq();
  iVar2 = *(int *)(*(int *)(DAT_000de748 + 0xde71c) + 4);
  if ((iVar2 != 0) &&
     (iVar2 = iVar2 + -1, *(int *)(*(int *)(DAT_000de748 + 0xde71c) + 4) = iVar2, iVar2 != 0)) {
    MaDevDrv_EnableIrq();
    return;
  }
  bVar1 = machdep_ReadReg(0xd);
  machdep_WriteReg(0xd,bVar1 & 0xdf);
  MaDevDrv_EnableIrq();
  return;
}

