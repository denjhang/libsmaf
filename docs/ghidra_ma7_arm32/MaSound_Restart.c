/* MaSound_Restart @ 000326f0 24B */


void MaSound_Restart(int param_1,int param_2,void *param_3)

{
  CM7_EmuSmw7App::MaSoundRestart
            (*(CM7_EmuSmw7App **)(DAT_00032708 + 0x32702),param_1,param_2,param_3);
  return;
}

