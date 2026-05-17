/* MaCmd_ProgramChange @ 000ed23c 98B */


/* YAMAHA::MaCmd_ProgramChange(unsigned int, int, unsigned int, unsigned int, unsigned int, unsigned
   char*) */

undefined4
YAMAHA::MaCmd_ProgramChange
          (uint param_1,int param_2,uint param_3,uint param_4,uint param_5,uchar *param_6)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_000ed2a0 + 0xed254 + param_1 * 0x65d0 + (param_3 & 0x1f) * 0x1e;
  *(char *)(iVar3 + 4) = (char)param_4;
  *(byte *)(iVar3 + 5) = (byte)param_5 & 0x7f;
  cVar1 = (char)(param_3 & 0x1f);
  if (param_4 < 0x80) {
    if (*(char *)(iVar3 + 0x10) == '\0') {
      *(byte *)(iVar3 + 0xf) = cVar1 + (char)(param_1 << 4) | 0x40;
    }
  }
  else {
    *(undefined1 *)(iVar3 + 6) = 1;
    if (*(char *)(iVar3 + 0x10) == '\0') {
      *(char *)(iVar3 + 0xf) = cVar1 + (char)(param_1 << 4);
    }
  }
  if (param_2 < 1) {
    return 0;
  }
  uVar2 = MaCmd_Nop(param_2,0,param_6);
  return uVar2;
}

