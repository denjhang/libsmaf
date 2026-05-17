/* MaDevDrv_WriteIntermediateReg @ 0021ea60 76B */


/* YAMAHA::MaDevDrv_WriteIntermediateReg(unsigned int, unsigned char) */

void YAMAHA::MaDevDrv_WriteIntermediateReg(uint param_1,uchar param_2)

{
  MaDevDrv_DisableIrq();
  machdep_StoreReg(param_1,param_2);
  machdep_WriteReg(1,(uchar)param_1);
  machdep_WriteReg(2,param_2);
  MaDevDrv_EnableIrq();
  return;
}

