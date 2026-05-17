/* MaDevDrv_ReadIntermediateReg @ 000dcfbc 32B */


/* YAMAHA::MaDevDrv_ReadIntermediateReg(unsigned int) */

undefined4 YAMAHA::MaDevDrv_ReadIntermediateReg(uint param_1)

{
  undefined4 uVar1;
  
  MaDevDrv_DisableIrq();
  machdep_WriteReg(1,(uchar)param_1);
  uVar1 = machdep_ReadReg(2);
  MaDevDrv_EnableIrq();
  return uVar1;
}

