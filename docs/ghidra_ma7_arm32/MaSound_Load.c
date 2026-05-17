/* MaSound_Load @ 0003248c 40B */


void MaSound_Load(int param_1,uchar *param_2,uint param_3,uchar param_4,_func_int_uchar *param_5,
                 void *param_6)

{
  CM7_EmuSmw7App::MaSoundLoad
            (*(CM7_EmuSmw7App **)(DAT_000324b4 + 0x3249e),param_1,param_2,param_3,param_4,param_5,
             param_6);
  return;
}

