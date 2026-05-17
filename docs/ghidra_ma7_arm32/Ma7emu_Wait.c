/* Ma7emu_Wait @ 00030550 14B */


/* Ma7emu_Wait(unsigned int) */

void Ma7emu_Wait(uint param_1)

{
  CM7_EmuSmw7App::Wait(*(uint *)(DAT_00030560 + 0x3055a));
  return;
}

