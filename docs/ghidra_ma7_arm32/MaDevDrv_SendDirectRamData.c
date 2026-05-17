/* MaDevDrv_SendDirectRamData @ 000dd118 190B */


/* YAMAHA::MaDevDrv_SendDirectRamData(unsigned int, unsigned char const*, unsigned int) */

int YAMAHA::MaDevDrv_SendDirectRamData(uint param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  byte local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  byte local_1d;
  byte local_1c;
  
  if (param_3 == 0) {
    return 0;
  }
  if ((param_2 == (uchar *)0x0 || 0x3fff < param_1 - 0x10000) || (0x13fff < param_3 + param_1)) {
    iVar1 = -2;
  }
  else {
    local_1e = 0x84;
    if (param_3 < 0x80) {
      local_1d = (byte)param_3 | 0x80;
      uVar2 = param_3;
    }
    else {
      local_1d = (byte)param_3 & 0x7f;
      uVar2 = param_3 >> 7;
    }
    local_20 = (byte)param_1 & 0x7f;
    local_1f = (undefined1)(param_1 >> 7);
    if (param_3 < 0x80) {
      uVar2 = 4;
    }
    else {
      local_1c = (byte)uVar2 | 0x80;
      uVar2 = 5;
    }
    MaDevDrv_DisableIrq();
    iVar1 = machdep_WaitFifoEmpty(0);
    if (iVar1 == 0) {
      machdep_WriteRegN(3,&local_20,uVar2);
      while( true ) {
        uVar2 = param_3;
        if (0x7f < param_3) {
          uVar2 = 0x80;
        }
        iVar1 = machdep_WaitFifoEmpty(0);
        if (iVar1 != 0) break;
        machdep_WriteRegN(3,param_2,uVar2);
        param_3 = param_3 - uVar2;
        param_2 = param_2 + uVar2;
        if (param_3 == 0) {
          MaDevDrv_EnableIrq();
          return 0;
        }
      }
    }
    MaDevDrv_EnableIrq();
  }
  return iVar1;
}

