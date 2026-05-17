/* MaSound_Pause @ 000326bc 24B */


void MaSound_Pause(int param_1,int param_2,void *param_3)

{
  CM7_EmuSmw7App::MaSoundPause(*(CM7_EmuSmw7App **)(DAT_000326d4 + 0x326ce),param_1,param_2,param_3)
  ;
  return;
}

