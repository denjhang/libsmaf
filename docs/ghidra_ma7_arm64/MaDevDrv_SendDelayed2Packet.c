/* MaDevDrv_SendDelayed2Packet @ 0021ebe4 88B */


/* YAMAHA::MaDevDrv_SendDelayed2Packet(unsigned char const*, unsigned int) */

undefined8 YAMAHA::MaDevDrv_SendDelayed2Packet(uchar *param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (uchar *)0x0) {
    uVar1 = 0xfffffffe;
  }
  else {
    uVar1 = 0;
    if (param_2 != 0) {
      MaDevDrv_DisableIrq();
      machdep_WriteRegN(5,param_1,param_2);
      MaDevDrv_EnableIrq();
    }
  }
  return uVar1;
}

