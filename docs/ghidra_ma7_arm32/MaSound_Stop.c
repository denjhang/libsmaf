/* MaSound_Stop @ 00032688 24B */


void MaSound_Stop(int param_1,int param_2,void *param_3)

{
  CM7_EmuSmw7App::MaSoundStop(*(CM7_EmuSmw7App **)(DAT_000326a0 + 0x3269a),param_1,param_2,param_3);
  return;
}

