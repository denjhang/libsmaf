/* MaDsp_HwInit @ 000d78c0 66B */


/* YAMAHA::MaDsp_HwInit(unsigned int) */

int YAMAHA::MaDsp_HwInit(uint param_1)

{
  int iVar1;
  
  iVar1 = DAT_000d7908;
  *(uint *)(*(int *)(DAT_000d7904 + 0xd78d0) + 0x368) = param_1;
  *(uint *)(iVar1 + 0xd8734) = param_1;
  MaDevDrv_WriteIntermediateReg(0x30,0x80);
  MaDevDrv_WriteIntermediateReg(0x30,'\0');
  iVar1 = MaDevDrv_WaitBusy();
  if (-1 < iVar1) {
    MaDevDrv_WriteIntermediateReg(0x3a,'\x12');
    MaDevDrv_WriteIntermediateReg(0x3b,'\x01');
    iVar1 = 0;
  }
  return iVar1;
}

