/* MaDevDrv_StartTimer @ 000de6d8 50B */


/* YAMAHA::MaDevDrv_StartTimer() */

void YAMAHA::MaDevDrv_StartTimer(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  MaDevDrv_DisableIrq();
  piVar4 = (int *)(DAT_000de70c + 0xde6e4);
  iVar2 = *piVar4;
  iVar3 = *(int *)(iVar2 + 4);
  if (iVar3 == 0) {
    bVar1 = machdep_ReadReg(0xd);
    machdep_WriteReg(0xd,bVar1 | 0x20);
    iVar2 = *piVar4;
    iVar3 = *(int *)(iVar2 + 4);
  }
  *(int *)(iVar2 + 4) = iVar3 + 1;
  MaDevDrv_EnableIrq();
  return;
}

