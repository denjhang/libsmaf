/* MaCmd_BendRange @ 00235b5c 84B */


/* YAMAHA::MaCmd_BendRange(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

undefined8
YAMAHA::MaCmd_BendRange(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  undefined8 uVar1;
  
  if (0x18 < param_4) {
    param_4 = 0x18;
  }
  (&DAT_0074a41e)[((ulong)param_3 & 0x1f) * 0x1e + (ulong)param_1 * 0x65d0] = (char)param_4;
  if (0 < param_2) {
    uVar1 = MaCmd_Nop(param_2,0,param_5);
    return uVar1;
  }
  return 0;
}

