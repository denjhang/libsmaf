/* Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_init @ 00129718 44B */


long Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_init
               (undefined8 param_1,undefined8 param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = CSmwCtrl::Init((CSmwCtrl *)PTR_g_SmwCtrl_00567f50,param_3,param_4);
  return (long)iVar1;
}

