/* MapiGetPhraseList @ 0012cfa0 68B */


/* CM7_EmuSmw7App::MapiGetPhraseList(int, MAPI_PHRASELIST*) */

undefined8 __thiscall
CM7_EmuSmw7App::MapiGetPhraseList(CM7_EmuSmw7App *this,int param_1,MAPI_PHRASELIST *param_2)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0xe8) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0xe8))(param_1,param_2);
    return uVar1;
  }
  return 0xffffffff;
}

