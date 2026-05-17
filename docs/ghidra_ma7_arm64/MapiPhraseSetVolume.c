/* MapiPhraseSetVolume @ 0012d860 64B */


/* CM7_EmuSmw7App::MapiPhraseSetVolume(int, int) */

void __thiscall CM7_EmuSmw7App::MapiPhraseSetVolume(CM7_EmuSmw7App *this,int param_1,int param_2)

{
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x1b0) != (code *)0x0)) {
    (**(code **)(this + 0x1b0))(param_1,param_2);
    return;
  }
  return;
}

