/* Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_init @ 0002ee64 20B */


void Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_init
               (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  CSmwCtrl::Init(*(CSmwCtrl **)(DAT_0002ee78 + 0x2ee6e),param_3,param_5);
  return;
}

