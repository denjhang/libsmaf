/* MaCmd_BendRange @ 000edea8 56B */


/* YAMAHA::MaCmd_BendRange(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

undefined4
YAMAHA::MaCmd_BendRange(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  undefined4 uVar1;
  
  if (0x17 < param_4) {
    param_4 = 0x18;
  }
  *(char *)(param_1 * 0x65d0 + DAT_000edee0 + (param_3 & 0x1f) * 0x1e + 0xedece) = (char)param_4;
  if (0 < param_2) {
    uVar1 = MaCmd_Nop(param_2,0,param_5);
    return uVar1;
  }
  return 0;
}

