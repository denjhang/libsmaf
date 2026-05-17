/* MapiGetPhraseList @ 00031290 28B */


/* CM7_EmuSmw7App::MapiGetPhraseList(int, MAPI_PHRASELIST*) */

undefined4 CM7_EmuSmw7App::MapiGetPhraseList(int param_1,MAPI_PHRASELIST *param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x230) == 3) && (*(code **)(param_1 + 0x48) != (code *)0x0)) {
    uVar1 = (**(code **)(param_1 + 0x48))(param_2);
    return uVar1;
  }
  return 0xffffffff;
}

