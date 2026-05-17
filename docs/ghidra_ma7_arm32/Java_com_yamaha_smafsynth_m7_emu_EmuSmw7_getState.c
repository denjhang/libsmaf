/* Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_getState @ 0002efb4 16B */


void Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_getState(void)

{
  CSmwCtrl::GetState(*(CSmwCtrl **)(DAT_0002efc4 + 0x2efbc));
  return;
}

