/* MapiPhraseStop @ 000316d0 28B */


/* CM7_EmuSmw7App::MapiPhraseStop(int) */

undefined4 __thiscall CM7_EmuSmw7App::MapiPhraseStop(CM7_EmuSmw7App *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x98) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x98))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

