/* MaCmd_MonoModeOn @ 00239380 56B */


/* YAMAHA::MaCmd_MonoModeOn(unsigned int, int, unsigned int, unsigned char*) */

void YAMAHA::MaCmd_MonoModeOn(uint param_1,int param_2,uint param_3,uchar *param_4)

{
  long lVar1;
  
  lVar1 = (ulong)(param_3 & 0x1f) * 0x1e + (ulong)param_1 * 0x65d0;
  if (-1 < (char)(&DAT_0074a414)[lVar1]) {
    (&DAT_0074a416)[lVar1] = 0;
  }
  MaCmd_AllNotesOff(param_1,param_2,param_3 & 0x1f,param_4);
  return;
}

