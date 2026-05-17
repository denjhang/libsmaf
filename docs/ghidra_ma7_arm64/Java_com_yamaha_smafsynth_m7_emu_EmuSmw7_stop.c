/* Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_stop @ 0012982c 36B */


long Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_stop(void)

{
  int iVar1;
  
  iVar1 = CSmwCtrl::Stop((CSmwCtrl *)PTR_g_SmwCtrl_00567f50);
  return (long)iVar1;
}

