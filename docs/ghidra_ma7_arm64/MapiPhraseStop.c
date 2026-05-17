/* MapiPhraseStop @ 0012d6d0 64B */


/* CM7_EmuSmw7App::MapiPhraseStop(int) */

undefined8 __thiscall CM7_EmuSmw7App::MapiPhraseStop(CM7_EmuSmw7App *this,int param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x188) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x188))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

