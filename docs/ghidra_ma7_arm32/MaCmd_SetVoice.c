/* MaCmd_SetVoice @ 000f3790 36B */


/* YAMAHA::MaCmd_SetVoice(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int) */

void YAMAHA::MaCmd_SetVoice(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000f37b4 + 0xf379a + param_1 * 4) + param_2 * 8;
  *(uint *)(iVar1 + 0x45d0) = param_3;
  *(short *)(iVar1 + 0x45d4) = (short)param_4;
  *(char *)(iVar1 + 0x45d6) = (char)param_5;
  return;
}

