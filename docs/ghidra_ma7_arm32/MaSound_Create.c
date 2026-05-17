/* MaSound_Create @ 00032424 14B */


void MaSound_Create(uchar param_1)

{
  CM7_EmuSmw7App::MaSoundCreate(*(CM7_EmuSmw7App **)(DAT_00032434 + 0x3242e),param_1);
  return;
}

