/* MaCmd_StopSeq @ 000f3048 18B */


/* YAMAHA::MaCmd_StopSeq(unsigned char*) */

undefined4 YAMAHA::MaCmd_StopSeq(uchar *param_1)

{
  *param_1 = 0x80;
  param_1[1] = 0xa6;
  param_1[2] = 0x81;
  return 3;
}

