/* MaDevDrv_SendDirectPacket @ 000dcfdc 74B */


/* YAMAHA::MaDevDrv_SendDirectPacket(unsigned char const*, unsigned int) */

int YAMAHA::MaDevDrv_SendDirectPacket(uchar *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == (uchar *)0x0) {
    return -2;
  }
  MaDevDrv_DisableIrq();
  while( true ) {
    if (param_2 == 0) {
      MaDevDrv_EnableIrq();
      return 0;
    }
    uVar2 = param_2;
    if (0x7f < param_2) {
      uVar2 = 0x80;
    }
    iVar1 = machdep_WaitFifoEmpty(0);
    if (iVar1 != 0) break;
    machdep_WriteRegN(3,param_1,uVar2);
    param_2 = param_2 - uVar2;
    param_1 = param_1 + uVar2;
  }
  MaDevDrv_EnableIrq();
  return iVar1;
}

