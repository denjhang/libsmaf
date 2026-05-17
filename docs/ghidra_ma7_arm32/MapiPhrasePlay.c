/* MapiPhrasePlay @ 0003169c 30B */


/* CM7_EmuSmw7App::MapiPhrasePlay(int, int) */

undefined4 CM7_EmuSmw7App::MapiPhrasePlay(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x230) == 3) && (*(code **)(param_1 + 0x94) != (code *)0x0)) {
    uVar1 = (**(code **)(param_1 + 0x94))(param_2);
    return uVar1;
  }
  return 0xffffffff;
}

