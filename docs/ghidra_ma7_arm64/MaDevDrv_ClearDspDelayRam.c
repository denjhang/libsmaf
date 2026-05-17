/* MaDevDrv_ClearDspDelayRam @ 002203bc 148B */


/* YAMAHA::MaDevDrv_ClearDspDelayRam(unsigned int) */

undefined8 YAMAHA::MaDevDrv_ClearDspDelayRam(uint param_1)

{
  undefined8 uVar1;
  
  MaDevDrv_DisableIrq();
  machdep_WriteReg(1,',');
  machdep_WriteReg(2,(uchar)(param_1 >> 0x18));
  machdep_WriteReg(1,'-');
  machdep_WriteReg(2,(uchar)(param_1 >> 0x10));
  machdep_WriteReg(1,'.');
  machdep_WriteReg(2,(uchar)(param_1 >> 8));
  machdep_WriteReg(1,'/');
  machdep_WriteReg(2,(uchar)param_1);
  uVar1 = machdep_WaitDspBusy(0x20,'\x02');
  MaDevDrv_EnableIrq();
  return uVar1;
}

