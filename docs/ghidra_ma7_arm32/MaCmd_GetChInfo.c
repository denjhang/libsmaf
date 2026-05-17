/* MaCmd_GetChInfo @ 000eb3a0 46B */


/* YAMAHA::MaCmd_GetChInfo(unsigned int, unsigned int, _MACMDCHANNELINFO*) */

void YAMAHA::MaCmd_GetChInfo(uint param_1,uint param_2,_MACMDCHANNELINFO *param_3)

{
  int iVar1;
  
  iVar1 = DAT_000eb3d0 + 0xeb3b8 + param_1 * 0x65d0 + param_2 * 0x1e;
  *param_3 = *(_MACMDCHANNELINFO *)(iVar1 + 0x11);
  param_3[1] = *(_MACMDCHANNELINFO *)(iVar1 + 0x12);
  param_3[2] = *(_MACMDCHANNELINFO *)(iVar1 + 0x13);
  param_3[3] = *(_MACMDCHANNELINFO *)(iVar1 + 1);
  return;
}

