/* MaSound_Open @ 00032508 32B */


void MaSound_Open(int param_1,int param_2,ushort param_3,void *param_4)

{
  CM7_EmuSmw7App::MaSoundOpen
            (*(CM7_EmuSmw7App **)(DAT_00032528 + 0x32518),param_1,param_2,param_3,param_4);
  return;
}

