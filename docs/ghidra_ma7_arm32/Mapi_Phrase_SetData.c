/* Mapi_Phrase_SetData @ 00031644 32B */


void Mapi_Phrase_SetData(int param_1,uchar *param_2,uint param_3,int param_4)

{
  CM7_EmuSmw7App::MapiPhraseSetData
            (*(CM7_EmuSmw7App **)(DAT_00031664 + 0x31654),param_1,param_2,param_3,param_4);
  return;
}

