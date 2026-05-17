/* Mapi_EmuSetPath @ 0003072c 24B */


void Mapi_EmuSetPath(char *param_1,char *param_2,char *param_3)

{
  CM7_EmuSmw7App::EmuSetPath(*(CM7_EmuSmw7App **)(DAT_00030744 + 0x3073e),param_1,param_2,param_3);
  return;
}

