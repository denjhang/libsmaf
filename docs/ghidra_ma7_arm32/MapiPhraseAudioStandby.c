/* MapiPhraseAudioStandby @ 00031ab8 28B */


/* CM7_EmuSmw7App::MapiPhraseAudioStandby(int) */

undefined4 __thiscall CM7_EmuSmw7App::MapiPhraseAudioStandby(CM7_EmuSmw7App *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0xe8) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0xe8))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

