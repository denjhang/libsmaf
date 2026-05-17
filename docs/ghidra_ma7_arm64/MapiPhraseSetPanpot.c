/* MapiPhraseSetPanpot @ 0012d904 64B */


/* CM7_EmuSmw7App::MapiPhraseSetPanpot(int, int) */

void __thiscall CM7_EmuSmw7App::MapiPhraseSetPanpot(CM7_EmuSmw7App *this,int param_1,int param_2)

{
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x1c0) != (code *)0x0)) {
    (**(code **)(this + 0x1c0))(param_1,param_2);
    return;
  }
  return;
}

