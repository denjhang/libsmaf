/* MaSound_Unload @ 000324d0 24B */


void MaSound_Unload(int param_1,int param_2,void *param_3)

{
  CM7_EmuSmw7App::MaSoundUnload
            (*(CM7_EmuSmw7App **)(DAT_000324e8 + 0x324e2),param_1,param_2,param_3);
  return;
}

