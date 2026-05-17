/* MaDevDrv_ReceiveData @ 000dd078 158B */


/* YAMAHA::MaDevDrv_ReceiveData(unsigned int) */

int YAMAHA::MaDevDrv_ReceiveData(uint param_1)

{
  int iVar1;
  uint uVar2;
  byte local_18;
  byte local_17;
  byte local_16;
  undefined1 local_15;
  
  if (param_1 < 0x14000) {
    local_18 = (byte)param_1;
    if (param_1 < 0x80) {
      local_18 = local_18 | 0x80;
      uVar2 = 2;
      local_17 = 0x80;
    }
    else if (param_1 < 0x4000) {
      local_18 = local_18 & 0x7f;
      uVar2 = 3;
      local_17 = (byte)(param_1 >> 7) | 0x80;
      local_16 = 0x80;
    }
    else {
      local_18 = local_18 & 0x7f;
      local_16 = (byte)(param_1 >> 0xe) | 0x80;
      uVar2 = 4;
      local_17 = (byte)((param_1 << 0x12) >> 0x19);
      local_15 = 0x80;
    }
    MaDevDrv_DisableIrq();
    iVar1 = machdep_WaitFifoEmpty(0);
    if (iVar1 == 0) {
      machdep_WriteRegN(10,&local_18,uVar2);
      iVar1 = machdep_WaitValidData();
      if (iVar1 == 0) {
        iVar1 = machdep_ReadReg(3);
      }
    }
    MaDevDrv_EnableIrq();
  }
  else {
    iVar1 = -2;
  }
  return iVar1;
}

