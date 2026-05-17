/* MapiPhraseGetInfo @ 000315bc 28B */


/* CM7_EmuSmw7App::MapiPhraseGetInfo(MAPI_PHRASEINFO*) */

undefined4 __thiscall
CM7_EmuSmw7App::MapiPhraseGetInfo(CM7_EmuSmw7App *this,MAPI_PHRASEINFO *param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 0x84) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x84))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

