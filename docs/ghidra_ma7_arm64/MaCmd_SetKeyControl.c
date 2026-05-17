/* MaCmd_SetKeyControl @ 0023a440 48B */


/* YAMAHA::MaCmd_SetKeyControl(unsigned int, unsigned int, unsigned int, unsigned char*) */

undefined8 YAMAHA::MaCmd_SetKeyControl(uint param_1,uint param_2,uint param_3,uchar *param_4)

{
  *param_4 = 0xf2;
  param_4[1] = (byte)param_1 | 0x80;
  param_4[2] = 0xf5;
  param_4[3] = (byte)param_2 & 0x1f;
  param_4[4] = (byte)param_3 | 0x80;
  return 5;
}

