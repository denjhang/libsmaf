/* Ma7emu_WriteReg @ 0012c04c 20B */


/* Ma7emu_WriteReg(unsigned int, unsigned char) */

void Ma7emu_WriteReg(uint param_1,uchar param_2)

{
  CM7_EmuSmw7App::WriteReg((CM7_EmuSmw7App *)PTR_theApp_005675c8,param_1,param_2);
  return;
}

