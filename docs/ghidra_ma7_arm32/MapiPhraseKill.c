/* MapiPhraseKill @ 00031978 26B */


/* CM7_EmuSmw7App::MapiPhraseKill() */

undefined4 __thiscall CM7_EmuSmw7App::MapiPhraseKill(CM7_EmuSmw7App *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0xd0) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0xd0))();
    return uVar1;
  }
  return 0xffffffff;
}

