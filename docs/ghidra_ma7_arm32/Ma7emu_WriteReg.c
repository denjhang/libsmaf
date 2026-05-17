/* Ma7emu_WriteReg @ 00030510 16B */


/* Ma7emu_WriteReg(unsigned int, unsigned char) */

void Ma7emu_WriteReg(uint param_1,uchar param_2)

{
  CM7_EmuSmw7App::WriteReg(*(uint *)(DAT_00030520 + 0x3051c),(uchar)param_1);
  return;
}

