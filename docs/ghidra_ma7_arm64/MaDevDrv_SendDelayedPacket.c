/* MaDevDrv_SendDelayedPacket @ 0021eb8c 88B */


/* YAMAHA::MaDevDrv_SendDelayedPacket(unsigned char const*, unsigned int) */

undefined8 YAMAHA::MaDevDrv_SendDelayedPacket(uchar *param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (uchar *)0x0) {
    uVar1 = 0xfffffffe;
  }
  else {
    uVar1 = 0;
    if (param_2 != 0) {
      MaDevDrv_DisableIrq();
      machdep_WriteRegN(4,param_1,param_2);
      MaDevDrv_EnableIrq();
    }
  }
  return uVar1;
}

