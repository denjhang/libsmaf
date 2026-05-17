/* MaDsp_HwInit @ 002164f0 104B */


/* YAMAHA::MaDsp_HwInit(unsigned int) */

undefined8 YAMAHA::MaDsp_HwInit(uint param_1)

{
  undefined8 uVar1;
  
  DAT_005e2b90 = param_1;
  *(uint *)(PTR_lprm_00567530 + 0x368) = param_1;
  MaDevDrv_WriteIntermediateReg(0x30,0x80);
  MaDevDrv_WriteIntermediateReg(0x30,'\0');
  uVar1 = MaDevDrv_WaitBusy();
  if (-1 < (int)uVar1) {
    MaDevDrv_WriteIntermediateReg(0x3a,'\x12');
    MaDevDrv_WriteIntermediateReg(0x3b,'\x01');
    uVar1 = 0;
  }
  return uVar1;
}

