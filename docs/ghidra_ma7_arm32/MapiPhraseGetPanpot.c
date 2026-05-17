/* MapiPhraseGetPanpot @ 00031850 28B */


/* CM7_EmuSmw7App::MapiPhraseGetPanpot(int) */

undefined4 __thiscall CM7_EmuSmw7App::MapiPhraseGetPanpot(CM7_EmuSmw7App *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0xb8) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0xb8))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

