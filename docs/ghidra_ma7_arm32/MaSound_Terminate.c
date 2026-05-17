/* MaSound_Terminate @ 00032388 10B */


void MaSound_Terminate(void)

{
  CM7_EmuSmw7App::MaSoundTerminate(*(CM7_EmuSmw7App **)(DAT_00032394 + 0x3238e));
  return;
}

