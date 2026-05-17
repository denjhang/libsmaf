/* MapiPhraseGetLink @ 000318b4 30B */


/* CM7_EmuSmw7App::MapiPhraseGetLink(int) */

undefined4 __thiscall CM7_EmuSmw7App::MapiPhraseGetLink(CM7_EmuSmw7App *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0x230) != 3) {
    return 0;
  }
  if (*(code **)(this + 0xc0) != (code *)0x0) {
    uVar1 = (**(code **)(this + 0xc0))(param_1);
    return uVar1;
  }
  return 0;
}

