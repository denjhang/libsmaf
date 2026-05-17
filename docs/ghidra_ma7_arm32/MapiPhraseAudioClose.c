/* MapiPhraseAudioClose @ 00031a4c 28B */


/* CM7_EmuSmw7App::MapiPhraseAudioClose(int) */

undefined4 __thiscall CM7_EmuSmw7App::MapiPhraseAudioClose(CM7_EmuSmw7App *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0xe0) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0xe0))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

