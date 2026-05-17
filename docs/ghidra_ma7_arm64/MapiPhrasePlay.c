/* MapiPhrasePlay @ 0012d678 68B */


/* CM7_EmuSmw7App::MapiPhrasePlay(int, int) */

undefined8 __thiscall CM7_EmuSmw7App::MapiPhrasePlay(CM7_EmuSmw7App *this,int param_1,int param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x180) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x180))(param_1,param_2);
    return uVar1;
  }
  return 0xffffffff;
}

