/* MaCmd_SetVoice @ 0023a930 40B */


/* YAMAHA::MaCmd_SetVoice(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */

void YAMAHA::MaCmd_SetVoice(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(&DAT_00763b50 + (ulong)param_1 * 8) + (ulong)param_2 * 8;
  *(uint *)(lVar1 + 0x45d0) = param_3;
  *(short *)(lVar1 + 0x45d4) = (short)param_4;
  *(char *)(lVar1 + 0x45d6) = (char)param_5;
  return;
}

