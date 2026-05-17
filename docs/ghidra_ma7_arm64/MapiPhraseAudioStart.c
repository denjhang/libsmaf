/* MapiPhraseAudioStart @ 0012de14 72B */


/* CM7_EmuSmw7App::MapiPhraseAudioStart(int, unsigned short) */

undefined8 __thiscall
CM7_EmuSmw7App::MapiPhraseAudioStart(CM7_EmuSmw7App *this,int param_1,ushort param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x238) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x238))(param_1,param_2);
    return uVar1;
  }
  return 0xffffffff;
}

