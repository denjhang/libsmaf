/* MaCmd_PolyModeOn @ 002393b8 52B */


/* YAMAHA::MaCmd_PolyModeOn(unsigned int, int, unsigned int, unsigned char*) */

void YAMAHA::MaCmd_PolyModeOn(uint param_1,int param_2,uint param_3,uchar *param_4)

{
  (&DAT_0074a416)[(ulong)(param_3 & 0x1f) * 0x1e + (ulong)param_1 * 0x65d0] = 1;
  MaCmd_AllNotesOff(param_1,param_2,param_3 & 0x1f,param_4);
  return;
}

