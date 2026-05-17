/* MaDevDrv_SendDelayedPacket @ 000dd028 38B */


/* YAMAHA::MaDevDrv_SendDelayedPacket(unsigned char const*, unsigned int) */

undefined4 YAMAHA::MaDevDrv_SendDelayedPacket(uchar *param_1,uint param_2)

{
  if (param_1 != (uchar *)0x0) {
    if (param_2 != 0) {
      MaDevDrv_DisableIrq();
      machdep_WriteRegN(4,param_1,param_2);
      MaDevDrv_EnableIrq();
    }
    return 0;
  }
  return 0xfffffffe;
}

