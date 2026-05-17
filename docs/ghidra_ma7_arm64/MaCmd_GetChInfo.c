/* MaCmd_GetChInfo @ 00232938 72B */


/* YAMAHA::MaCmd_GetChInfo(unsigned int, unsigned int, _MACMDCHANNELINFO*) */

void YAMAHA::MaCmd_GetChInfo(uint param_1,uint param_2,_MACMDCHANNELINFO *param_3)

{
  long lVar1;
  
  lVar1 = (ulong)param_2 * 0x1e + (ulong)param_1 * 0x65d0;
  *param_3 = *(_MACMDCHANNELINFO *)(&DAT_0074a421 + lVar1);
  param_3[1] = *(_MACMDCHANNELINFO *)(&DAT_0074a422 + lVar1);
  param_3[2] = *(_MACMDCHANNELINFO *)(&DAT_0074a423 + lVar1);
  param_3[3] = *(_MACMDCHANNELINFO *)(&DAT_0074a411 + lVar1);
  return;
}

