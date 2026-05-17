/* MaSound_Close @ 00032544 24B */


void MaSound_Close(int param_1,int param_2,void *param_3)

{
  CM7_EmuSmw7App::MaSoundClose(*(CM7_EmuSmw7App **)(DAT_0003255c + 0x32556),param_1,param_2,param_3)
  ;
  return;
}

