/* MaSmw_GetKaraokeData @ 000852fc 32B */


/* YAMAHA::MaSmw_GetKaraokeData(unsigned int, unsigned int, _MASMW_KARAOKE_PARAM*) */

undefined4 YAMAHA::MaSmw_GetKaraokeData(uint param_1,uint param_2,_MASMW_KARAOKE_PARAM *param_3)

{
  undefined4 uVar1;
  
  machdep_EnterCriticalSection();
  uVar1 = FUN_00076104(param_1,param_2,param_3);
  machdep_LeaveCriticalSection();
  return uVar1;
}

