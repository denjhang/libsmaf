/* MapiPhraseAudioClose @ 0012dca8 64B */


/* CM7_EmuSmw7App::MapiPhraseAudioClose(int) */

undefined8 __thiscall CM7_EmuSmw7App::MapiPhraseAudioClose(CM7_EmuSmw7App *this,int param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x218) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x218))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

