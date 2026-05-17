/* MaDevDrv_ResetIrqCtrl @ 000de138 60B */


/* YAMAHA::MaDevDrv_ResetIrqCtrl(unsigned char, unsigned char) */

void YAMAHA::MaDevDrv_ResetIrqCtrl(uchar param_1,uchar param_2)

{
  byte bVar1;
  byte bVar2;
  
  MaDevDrv_DisableIrq();
  bVar1 = machdep_ReadReg(0xd);
  bVar2 = machdep_ReadReg(0xe);
  machdep_WriteReg(0xd,bVar1 & ~param_1);
  machdep_WriteReg(0xe,bVar2 & ~param_2 & 0xe0);
  MaDevDrv_EnableIrq();
  return;
}

