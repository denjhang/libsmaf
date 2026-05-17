/* MapiPhraseGetInfo @ 0012d508 64B */


/* CM7_EmuSmw7App::MapiPhraseGetInfo(MAPI_PHRASEINFO*) */

undefined8 __thiscall
CM7_EmuSmw7App::MapiPhraseGetInfo(CM7_EmuSmw7App *this,MAPI_PHRASEINFO *param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x160) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x160))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

