/* MaCmd_StopSeq @ 0023a124 36B */


/* YAMAHA::MaCmd_StopSeq(unsigned char*) */

undefined8 YAMAHA::MaCmd_StopSeq(uchar *param_1)

{
  *param_1 = 0x80;
  param_1[1] = 0xa6;
  param_1[2] = 0x81;
  return 3;
}

