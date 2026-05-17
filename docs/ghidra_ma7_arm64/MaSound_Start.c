/* MaSound_Start @ 0012f050 36B */


void MaSound_Start(int param_1,int param_2,ushort param_3,void *param_4)

{
  CM7_EmuSmw7App::MaSoundStart
            ((CM7_EmuSmw7App *)PTR_theApp_005675c8,param_1,param_2,param_3,param_4);
  return;
}

