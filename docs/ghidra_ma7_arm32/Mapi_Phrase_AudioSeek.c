/* Mapi_Phrase_AudioSeek @ 00031b08 24B */


void Mapi_Phrase_AudioSeek(int param_1,uint param_2,uchar param_3)

{
  CM7_EmuSmw7App::MapiPhraseAudioSeek
            (*(CM7_EmuSmw7App **)(DAT_00031b20 + 0x31b1a),param_1,param_2,param_3);
  return;
}

