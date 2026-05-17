/* MaCmd_ProgramChange @ 00234ec0 140B */


/* YAMAHA::MaCmd_ProgramChange(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned
   char*) */

undefined8
YAMAHA::MaCmd_ProgramChange
          (uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uchar *param_6)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (ulong)(param_3 & 0x1f) * 0x1e + (ulong)param_1 * 0x65d0;
  (&DAT_0074a414)[lVar3] = (char)param_4;
  (&DAT_0074a415)[lVar3] = (byte)param_5 & 0x7f;
  cVar1 = (char)(param_3 & 0x1f);
  if (param_4 < 0x80) {
    if ((&DAT_0074a420)[lVar3] == '\0') {
      (&DAT_0074a41f)[lVar3] = cVar1 + (char)param_1 * '\x10' | 0x40;
    }
  }
  else {
    (&DAT_0074a416)[lVar3] = 1;
    if ((&DAT_0074a420)[lVar3] == '\0') {
      (&DAT_0074a41f)[lVar3] = cVar1 + (char)param_1 * '\x10';
    }
  }
  if (param_2 < 1) {
    return 0;
  }
  uVar2 = MaCmd_Nop(param_2,0,param_6);
  return uVar2;
}

