/* MapiPhraseAudioStart @ 00031b24 30B */


/* CM7_EmuSmw7App::MapiPhraseAudioStart(int, unsigned short) */

undefined4 CM7_EmuSmw7App::MapiPhraseAudioStart(int param_1,ushort param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x230) == 3) && (*(code **)(param_1 + 0xf0) != (code *)0x0)) {
    uVar1 = (**(code **)(param_1 + 0xf0))(param_2);
    return uVar1;
  }
  return 0xffffffff;
}

