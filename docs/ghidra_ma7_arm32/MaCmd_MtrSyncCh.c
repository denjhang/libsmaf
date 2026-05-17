/* MaCmd_MtrSyncCh @ 000f2698 64B */


/* YAMAHA::MaCmd_MtrSyncCh(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

undefined4
YAMAHA::MaCmd_MtrSyncCh(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_000f26d8 + 0xf26b0 + param_1 * 0x65d0 + (param_3 & 0x1f) * 0x1e;
  *(byte *)(iVar1 + 1) = *(byte *)(iVar1 + 1) & 0xf7 | (byte)((param_4 & 1) << 3);
  if (0 < param_2) {
    uVar2 = MaCmd_Nop(param_2,0,param_5);
    return uVar2;
  }
  return 0;
}

