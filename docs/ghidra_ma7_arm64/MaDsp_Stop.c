/* MaDsp_Stop @ 002165bc 36B */


/* YAMAHA::MaDsp_Stop() */

undefined8 YAMAHA::MaDsp_Stop(void)

{
  MaDevDrv_WriteIntermediateReg(0x30,'\0');
  return 0;
}

