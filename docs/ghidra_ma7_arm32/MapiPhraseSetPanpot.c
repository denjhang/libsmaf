/* MapiPhraseSetPanpot @ 00031820 28B */


/* CM7_EmuSmw7App::MapiPhraseSetPanpot(int, int) */

void CM7_EmuSmw7App::MapiPhraseSetPanpot(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x230) == 3) && (*(code **)(param_1 + 0xb4) != (code *)0x0)) {
    (**(code **)(param_1 + 0xb4))(param_2);
    return;
  }
  return;
}

