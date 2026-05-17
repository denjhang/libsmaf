/* MapiPhraseGetVolume @ 000317f0 28B */


/* CM7_EmuSmw7App::MapiPhraseGetVolume(int) */

undefined4 __thiscall CM7_EmuSmw7App::MapiPhraseGetVolume(CM7_EmuSmw7App *this,int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0xb0) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0xb0))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

