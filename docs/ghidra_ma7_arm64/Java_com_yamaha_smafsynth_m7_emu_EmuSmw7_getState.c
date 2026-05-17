/* Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_getState @ 0012997c 36B */


long Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_getState(void)

{
  int iVar1;
  
  iVar1 = CSmwCtrl::GetState((CSmwCtrl *)PTR_g_SmwCtrl_00567f50);
  return (long)iVar1;
}

