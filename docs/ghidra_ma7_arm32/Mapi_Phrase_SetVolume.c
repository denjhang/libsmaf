/* Mapi_Phrase_SetVolume @ 000317dc 16B */


void Mapi_Phrase_SetVolume(int param_1)

{
  CM7_EmuSmw7App::MapiPhraseSetVolume(*(int *)(DAT_000317ec + 0x317e8),param_1);
  return;
}

