/* Ma7emu_Wait @ 0012c0ac 16B */


/* Ma7emu_Wait(unsigned int) */

void Ma7emu_Wait(uint param_1)

{
  CM7_EmuSmw7App::Wait((uint)PTR_theApp_005675c8);
  return;
}

