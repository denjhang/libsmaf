/* MaDevDrv_SendDelayed2Packet @ 000dd050 38B */


/* YAMAHA::MaDevDrv_SendDelayed2Packet(unsigned char const*, unsigned int) */

undefined4 YAMAHA::MaDevDrv_SendDelayed2Packet(uchar *param_1,uint param_2)

{
  if (param_1 != (uchar *)0x0) {
    if (param_2 != 0) {
      MaDevDrv_DisableIrq();
      machdep_WriteRegN(5,param_1,param_2);
      MaDevDrv_EnableIrq();
    }
    return 0;
  }
  return 0xfffffffe;
}

