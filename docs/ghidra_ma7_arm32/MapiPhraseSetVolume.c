/* MapiPhraseSetVolume @ 000317c0 28B */


/* CM7_EmuSmw7App::MapiPhraseSetVolume(int, int) */

void CM7_EmuSmw7App::MapiPhraseSetVolume(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x230) == 3) && (*(code **)(param_1 + 0xac) != (code *)0x0)) {
    (**(code **)(param_1 + 0xac))(param_2);
    return;
  }
  return;
}

