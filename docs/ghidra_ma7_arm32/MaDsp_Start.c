/* MaDsp_Start @ 000d790c 54B */


/* YAMAHA::MaDsp_Start(unsigned int) */

undefined4 YAMAHA::MaDsp_Start(uint param_1)

{
  if ((param_1 % 0x14 == 0) && (param_1 - 1 < 0x7fff)) {
    MaDevDrv_WriteIntermediateReg(0x30,'@');
    return 0;
  }
  return 0xfffffffe;
}

