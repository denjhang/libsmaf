/* Ma7emu_ReadReg @ 00030538 14B */


/* Ma7emu_ReadReg(unsigned int) */

void Ma7emu_ReadReg(uint param_1)

{
  CM7_EmuSmw7App::ReadReg(*(CM7_EmuSmw7App **)(DAT_00030548 + 0x30542),param_1);
  return;
}

