/* Ma7emu_ReadReg @ 0012c098 16B */


/* Ma7emu_ReadReg(unsigned int) */

void Ma7emu_ReadReg(uint param_1)

{
  CM7_EmuSmw7App::ReadReg((CM7_EmuSmw7App *)PTR_theApp_005675c8,param_1);
  return;
}

