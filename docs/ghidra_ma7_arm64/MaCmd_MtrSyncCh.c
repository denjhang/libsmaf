/* MaCmd_MtrSyncCh @ 00239684 88B */


/* YAMAHA::MaCmd_MtrSyncCh(unsigned int, int, unsigned int, unsigned int, unsigned char*) */

undefined8
YAMAHA::MaCmd_MtrSyncCh(uint param_1,int param_2,uint param_3,uint param_4,uchar *param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = ((ulong)param_3 & 0x1f) * 0x1e + (ulong)param_1 * 0x65d0;
  (&DAT_0074a411)[lVar2] = (&DAT_0074a411)[lVar2] & 0xf7 | (byte)((param_4 & 1) << 3);
  if (0 < param_2) {
    uVar1 = MaCmd_Nop(param_2,0,param_5);
    return uVar1;
  }
  return 0;
}

