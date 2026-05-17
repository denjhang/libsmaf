/* MapiPhraseGetPosition @ 0012d7c0 64B */


/* CM7_EmuSmw7App::MapiPhraseGetPosition(int) */

undefined8 __thiscall CM7_EmuSmw7App::MapiPhraseGetPosition(CM7_EmuSmw7App *this,int param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x1a0) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x1a0))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

