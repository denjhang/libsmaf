/* MapiPhraseCheckData @ 000315ec 30B */


/* CM7_EmuSmw7App::MapiPhraseCheckData(unsigned char*, unsigned int) */

undefined4 CM7_EmuSmw7App::MapiPhraseCheckData(uchar *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x230) == 3) && (*(code **)(param_1 + 0x88) != (code *)0x0)) {
    uVar1 = (**(code **)(param_1 + 0x88))(param_2);
    return uVar1;
  }
  return 0xffffffff;
}

