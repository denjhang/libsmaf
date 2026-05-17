/* MaSound_Standby @ 000325c4 24B */


void MaSound_Standby(int param_1,int param_2,void *param_3)

{
  CM7_EmuSmw7App::MaSoundStandby
            (*(CM7_EmuSmw7App **)(DAT_000325dc + 0x325d6),param_1,param_2,param_3);
  return;
}

