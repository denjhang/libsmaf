/* MaCmd_MonoModeOn @ 000f2430 46B */


/* YAMAHA::MaCmd_MonoModeOn(unsigned int, int, unsigned int, unsigned char*) */

void YAMAHA::MaCmd_MonoModeOn(uint param_1,int param_2,uint param_3,uchar *param_4)

{
  int iVar1;
  
  iVar1 = param_1 * 0x65d0 + DAT_000f2460 + 0xf2440 + (param_3 & 0x1f) * 0x1e;
  if (-1 < *(char *)(iVar1 + 4)) {
    *(undefined1 *)(iVar1 + 6) = 0;
  }
  MaCmd_AllNotesOff(param_1,param_2,param_3 & 0x1f,param_4);
  return;
}

