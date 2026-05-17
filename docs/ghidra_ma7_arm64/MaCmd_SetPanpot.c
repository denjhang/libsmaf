/* MaCmd_SetPanpot @ 0023a414 44B */


/* YAMAHA::MaCmd_SetPanpot(unsigned int, unsigned int, unsigned char*) */

undefined8 YAMAHA::MaCmd_SetPanpot(uint param_1,uint param_2,uchar *param_3)

{
  *param_3 = 0xf2;
  param_3[1] = (byte)param_1 | 0x80;
  param_3[2] = 0xf4;
  param_3[3] = (byte)param_2 & 0x7c | 0x81;
  return 4;
}

