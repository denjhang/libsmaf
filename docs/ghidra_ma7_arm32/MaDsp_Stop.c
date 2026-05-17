/* MaDsp_Stop @ 000d7944 14B */


/* YAMAHA::MaDsp_Stop() */

undefined4 YAMAHA::MaDsp_Stop(void)

{
  MaDevDrv_WriteIntermediateReg(0x30,'\0');
  return 0;
}

