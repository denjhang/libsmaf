/* MaSound_Control @ 00032584 36B */


void MaSound_Control(int param_1,int param_2,uchar param_3,void *param_4,void *param_5)

{
  CM7_EmuSmw7App::MaSoundControl
            (*(CM7_EmuSmw7App **)(DAT_000325a8 + 0x32594),param_1,param_2,param_3,param_4,param_5);
  return;
}

