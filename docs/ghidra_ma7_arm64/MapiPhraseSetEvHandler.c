/* MapiPhraseSetEvHandler @ 0012daa4 64B */


/* CM7_EmuSmw7App::MapiPhraseSetEvHandler(void (*)(MAPI_PHRASEEVENT*)) */

undefined8 __thiscall
CM7_EmuSmw7App::MapiPhraseSetEvHandler
          (CM7_EmuSmw7App *this,_func_void_MAPI_PHRASEEVENT_ptr *param_1)

{
  undefined8 uVar1;
  
  if ((*(int *)(this + 0x4b8) == 3) && (*(code **)(this + 0x1e8) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 0x1e8))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

