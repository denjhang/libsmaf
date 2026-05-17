/* Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_getPosition @ 0002ef8c 16B */


void Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_getPosition(void)

{
  CSmwCtrl::GetPosition(*(CSmwCtrl **)(DAT_0002ef9c + 0x2ef94));
  return;
}

