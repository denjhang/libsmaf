/* Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_getLength @ 00129958 36B */


long Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_getLength(void)

{
  int iVar1;
  
  iVar1 = CSmwCtrl::GetLength((CSmwCtrl *)PTR_g_SmwCtrl_00567f50);
  return (long)iVar1;
}

