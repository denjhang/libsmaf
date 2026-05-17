/* MaDevDrv_StartTimer @ 002211e4 80B */


/* YAMAHA::MaDevDrv_StartTimer() */

void YAMAHA::MaDevDrv_StartTimer(void)

{
  byte bVar1;
  int iVar2;
  
  MaDevDrv_DisableIrq();
  iVar2 = *(int *)(DAT_00748ef8 + 4);
  if (iVar2 == 0) {
    bVar1 = machdep_ReadReg(0xd);
    machdep_WriteReg(0xd,bVar1 | 0x20);
    iVar2 = *(int *)(DAT_00748ef8 + 4);
  }
  *(int *)(DAT_00748ef8 + 4) = iVar2 + 1;
  MaDevDrv_EnableIrq();
  return;
}

