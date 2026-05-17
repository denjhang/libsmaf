/* Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_stop @ 0002ef08 16B */


void Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_stop(void)

{
  CSmwCtrl::Stop(*(CSmwCtrl **)(DAT_0002ef18 + 0x2ef10));
  return;
}

