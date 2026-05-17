/* Mapi_Phrase_AudioStart @ 00031b44 16B */


void Mapi_Phrase_AudioStart(ushort param_1)

{
  CM7_EmuSmw7App::MapiPhraseAudioStart(*(int *)(DAT_00031b54 + 0x31b50),param_1);
  return;
}

