/* Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_setVolume @ 0002efc8 12B */


void Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_setVolume
               (undefined4 param_1,undefined4 param_2,int param_3)

{
  CSmwCtrl::SetVolume(*(CSmwCtrl **)(DAT_0002efd4 + 0x2efd0),param_3);
  return;
}

