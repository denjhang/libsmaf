/* Mapi_GetKaraokeData @ 000312e0 24B */


void Mapi_GetKaraokeData(int param_1,uint param_2,MAPI_KARAOKEDATA *param_3)

{
  CM7_EmuSmw7App::MapiGetKaraokeData
            (*(CM7_EmuSmw7App **)(DAT_000312f8 + 0x312f2),param_1,param_2,param_3);
  return;
}

