/* IntHandler @ 000304f0 10B */


/* CM7_EmuSmw7App::IntHandler() */

void CM7_EmuSmw7App::IntHandler(void)

{
  EmuInterrupt(*(CM7_EmuSmw7App **)(DAT_000304fc + 0x304f6));
  return;
}

