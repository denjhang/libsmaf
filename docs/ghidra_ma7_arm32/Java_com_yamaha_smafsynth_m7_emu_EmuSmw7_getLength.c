/* Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_getLength @ 0002efa0 16B */


void Java_com_yamaha_smafsynth_m7_emu_EmuSmw7_getLength(void)

{
  CSmwCtrl::GetLength(*(CSmwCtrl **)(DAT_0002efb0 + 0x2efa8));
  return;
}

