/* MapiPhraseGetPosition @ 00031760 28B */


/* CM7_EmuSmw7App::MapiPhraseGetPosition(int) */

undefined4 __thiscall CM7_EmuSmw7App::MapiPhraseGetPosition(CM7_EmuSmw7App *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0xa4) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0xa4))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

