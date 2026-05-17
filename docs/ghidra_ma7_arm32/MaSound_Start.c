/* MaSound_Start @ 0003264c 32B */


void MaSound_Start(int param_1,int param_2,ushort param_3,void *param_4)

{
  CM7_EmuSmw7App::MaSoundStart
            (*(CM7_EmuSmw7App **)(DAT_0003266c + 0x3265c),param_1,param_2,param_3,param_4);
  return;
}

