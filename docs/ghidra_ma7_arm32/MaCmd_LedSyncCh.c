/* MaCmd_LedSyncCh @ 000f2654 64B */


/* YAMAHA::MaCmd_LedSyncCh(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

undefined4
YAMAHA::MaCmd_LedSyncCh(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_000f2694 + 0xf266c + param_1 * 0x65d0 + (param_3 & 0x1f) * 0x1e;
  *(byte *)(iVar1 + 1) = (byte)param_4 & 7 | *(byte *)(iVar1 + 1) & 0xf8;
  if (0 < param_2) {
    uVar2 = MaCmd_Nop(param_2,0,param_5);
    return uVar2;
  }
  return 0;
}

