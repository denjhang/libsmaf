/* MaSmw_GetKaraokeData @ 001a11f0 64B */


/* YAMAHA::MaSmw_GetKaraokeData(unsigned int, unsigned int, _MASMW_KARAOKE_PARAM*) */

undefined8 YAMAHA::MaSmw_GetKaraokeData(uint param_1,uint param_2,_MASMW_KARAOKE_PARAM *param_3)

{
  undefined8 uVar1;
  
  machdep_EnterCriticalSection();
  uVar1 = FUN_0018d9dc(param_1,param_2,param_3);
  machdep_LeaveCriticalSection();
  return uVar1;
}

