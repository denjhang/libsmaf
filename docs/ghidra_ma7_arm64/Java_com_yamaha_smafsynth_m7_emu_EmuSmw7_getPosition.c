/* Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_getPosition @ 00129934 36B */


long Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_getPosition(void)

{
  int iVar1;
  
  iVar1 = CSmwCtrl::GetPosition((CSmwCtrl *)PTR_g_SmwCtrl_00567f50);
  return (long)iVar1;
}

