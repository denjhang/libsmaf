/* MaDevDrv_SendStreamData @ 0021f9ac 92B */


/* YAMAHA::MaDevDrv_SendStreamData(unsigned int, unsigned char const*, unsigned int) */

void YAMAHA::MaDevDrv_SendStreamData(uint param_1,uchar *param_2,uint param_3)

{
  if ((param_3 != 0 && param_1 < 4) && (param_2 != (uchar *)0x0)) {
    MaDevDrv_DisableIrq();
    machdep_WriteRegN(param_1 + 6,param_2,param_3);
    MaDevDrv_EnableIrq();
    return;
  }
  return;
}

