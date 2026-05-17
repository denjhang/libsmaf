/* MaDevDrv_SetDspRamAddress @ 00220450 300B */


/* YAMAHA::MaDevDrv_SetDspRamAddress(unsigned int, unsigned int) */

int YAMAHA::MaDevDrv_SetDspRamAddress(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 < param_1) {
    iVar2 = -2;
  }
  else {
    MaDevDrv_DisableIrq();
    iVar2 = 0;
    machdep_WriteReg(1,'0');
    uVar1 = machdep_ReadReg(2);
    if ((uVar1 >> 6 & 1) != 0) {
      machdep_WriteReg(1,'<');
      machdep_WriteReg(2,(byte)(param_1 >> 8) & 3);
      machdep_WriteReg(1,'=');
      machdep_WriteReg(2,(uchar)param_1);
      machdep_WriteReg(1,'K');
      machdep_WriteReg(2,(byte)(param_2 >> 8) & 3);
      machdep_WriteReg(1,'L');
      machdep_WriteReg(2,(uchar)param_2);
      iVar2 = machdep_WaitDspWriteBusy();
      if (iVar2 < 0) {
        machdep_WriteReg(1,'<');
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'=');
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'K');
        machdep_WriteReg(2,'\0');
        machdep_WriteReg(1,'L');
        machdep_WriteReg(2,'\0');
      }
    }
    MaDevDrv_EnableIrq();
  }
  return iVar2;
}

