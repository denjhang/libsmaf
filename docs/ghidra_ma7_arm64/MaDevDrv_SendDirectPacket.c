/* MaDevDrv_SendDirectPacket @ 0021eaec 160B */


/* YAMAHA::MaDevDrv_SendDirectPacket(unsigned char const*, unsigned int) */

int YAMAHA::MaDevDrv_SendDirectPacket(uchar *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == (uchar *)0x0) {
    iVar1 = -2;
  }
  else {
    MaDevDrv_DisableIrq();
    for (; param_2 != 0; param_2 = param_2 - uVar2) {
      iVar1 = machdep_WaitFifoEmpty(0);
      uVar2 = param_2;
      if (0x80 < param_2) {
        uVar2 = 0x80;
      }
      if (iVar1 != 0) {
        MaDevDrv_EnableIrq();
        return iVar1;
      }
      machdep_WriteRegN(3,param_1,uVar2);
      param_1 = param_1 + uVar2;
    }
    MaDevDrv_EnableIrq();
    iVar1 = 0;
  }
  return iVar1;
}

