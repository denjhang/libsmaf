/* Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_setVolume @ 001299a0 16B */


void Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_setVolume
               (undefined8 param_1,undefined8 param_2,int param_3)

{
  CSmwCtrl::SetVolume((CSmwCtrl *)PTR_g_SmwCtrl_00567f50,param_3);
  return;
}

