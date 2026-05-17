/* MapiPhraseSetLink @ 00031880 30B */


/* CM7_EmuSmw7App::MapiPhraseSetLink(int, unsigned int) */

undefined4 CM7_EmuSmw7App::MapiPhraseSetLink(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x230) == 3) && (*(code **)(param_1 + 0xbc) != (code *)0x0)) {
    uVar1 = (**(code **)(param_1 + 0xbc))(param_2);
    return uVar1;
  }
  return 0xffffffff;
}

