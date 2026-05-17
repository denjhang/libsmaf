/* MapiPhraseGetStatus @ 0012da54 64B */


/* CM7_EmuSmw7App::MapiPhraseGetStatus(int) */

undefined8 __thiscall CM7_EmuSmw7App::MapiPhraseGetStatus(CM7_EmuSmw7App *this,int param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x1e0) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x1e0))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

