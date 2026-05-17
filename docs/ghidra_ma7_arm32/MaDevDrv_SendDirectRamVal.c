/* MaDevDrv_SendDirectRamVal @ 000dd844 184B */


/* YAMAHA::MaDevDrv_SendDirectRamVal(unsigned int, unsigned int, unsigned char) */

int YAMAHA::MaDevDrv_SendDirectRamVal(uint param_1,uint param_2,uchar param_3)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  byte local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  byte local_1d;
  byte local_1c;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_1 - 0x10000 < 0x4000) && (param_2 + param_1 < 0x14000)) {
    local_1d = 0x84;
    local_1e = 0x84;
    if (param_2 < 0x80) {
      local_1d = (byte)param_2 | 0x80;
      bVar2 = param_3;
    }
    else {
      bVar2 = (byte)(param_2 >> 7);
    }
    local_20 = (byte)param_1 & 0x7f;
    local_1f = (undefined1)(param_1 >> 7);
    if (param_2 < 0x80) {
      uVar3 = 4;
    }
    else {
      local_1d = (byte)param_2 & 0x7f;
      local_1c = bVar2 | 0x80;
      uVar3 = 5;
    }
    MaDevDrv_DisableIrq();
    iVar1 = machdep_WaitFifoEmpty(0);
    if (iVar1 == 0) {
      machdep_WriteRegN(3,&local_20,uVar3);
      while( true ) {
        uVar3 = param_2;
        if (0x7f < param_2) {
          uVar3 = 0x80;
        }
        iVar1 = machdep_WaitFifoEmpty(0);
        if (iVar1 != 0) break;
        machdep_WriteValN(3,param_3,uVar3);
        param_2 = param_2 - uVar3;
        if (param_2 == 0) {
          MaDevDrv_EnableIrq();
          return 0;
        }
      }
    }
    MaDevDrv_EnableIrq();
  }
  else {
    iVar1 = -2;
  }
  return iVar1;
}

