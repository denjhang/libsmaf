/* MapiPhraseSetEvHandler @ 00031918 28B */


/* CM7_EmuSmw7App::MapiPhraseSetEvHandler(void (*)(MAPI_PHRASEEVENT*)) */

undefined4 __thiscall
CM7_EmuSmw7App::MapiPhraseSetEvHandler
          (CM7_EmuSmw7App *this,_func_void_MAPI_PHRASEEVENT_ptr *param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x230) == 3) && (*(code **)(this + 200) != (code *)0x0)) {
    uVar1 = (**(code **)(this + 200))(param_1);
    return uVar1;
  }
  return 0xffffffff;
}

