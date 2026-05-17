/* MaSound_Seek @ 0012efe4 48B */


void MaSound_Seek(int param_1,int param_2,uint param_3,uchar param_4,void *param_5)

{
  CM7_EmuSmw7App::MaSoundSeek
            ((CM7_EmuSmw7App *)PTR_theApp_005675c8,param_1,param_2,param_3,param_4,param_5);
  return;
}

